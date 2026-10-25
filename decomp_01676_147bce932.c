// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147bce932 FUN_147bce932 body=66 status=ok
// SIG undefined FUN_147bce932(void)

void FUN_147bce932(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147bce974();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147bce974 FUN_147bce974 body=325 status=ok
// SIG undefined FUN_147bce974(void)

void FUN_147bce974(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 147bceaba FUN_147bceaba body=187 status=ok
// SIG undefined FUN_147bceaba(void)

longlong * FUN_147bceaba(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14123c468();
  local_38 = &local_48;
  local_40 = FUN_142840874;
  local_58 = uVar1 | param_4 | 0x90000000;
  local_48 = param_1;
  FUN_140245161(uVar2,&local_40,param_3,param_2);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bceb76 FUN_147bceb76 body=175 status=ok
// SIG undefined FUN_147bceb76(void)

undefined8 FUN_147bceb76(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b58878();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcec26 FUN_147bcec26 body=168 status=ok
// SIG undefined FUN_147bcec26(void)

longlong * FUN_147bcec26(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_145b58878();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90000000;
  local_30 = param_1;
  FUN_140245161(uVar2,&local_28,1,0x10);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcecd0 FUN_147bcecd0 body=181 status=ok
// SIG undefined FUN_147bcecd0(void)

longlong FUN_147bcecd0(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_147bced68;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147bced86(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_147bced68:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 147bced86 FUN_147bced86 body=269 status=ok
// SIG undefined FUN_147bced86(void)

undefined4 * FUN_147bced86(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147bcee94(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 1) = 0xffffffff00000000;
  cVar1 = FUN_147bcef7a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[3] = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147bcf06c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcee94 FUN_147bcee94 body=229 status=ok
// SIG undefined FUN_147bcee94(void)

int * FUN_147bcee94(longlong *param_1,int *param_2)

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



// FUNCTION 147bcef7a FUN_147bcef7a body=127 status=ok
// SIG undefined FUN_147bcef7a(void)

undefined8 FUN_147bcef7a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_147bceffa(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bceffa FUN_147bceffa body=114 status=ok
// SIG undefined FUN_147bceffa(void)

void FUN_147bceffa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147bcf06c FUN_147bcf06c body=422 status=ok
// SIG undefined FUN_147bcf06c(void)

void FUN_147bcf06c(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 147bcf214 FUN_147bcf214 body=330 status=ok
// SIG undefined FUN_147bcf214(void)

undefined4 * FUN_147bcf214(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143553fd4(param_1,local_48);
  uVar3 = *(ulonglong *)*param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_1435540ba(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0x14) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1417dd91a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcf360 FUN_147bcf360 body=295 status=ok
// SIG undefined FUN_147bcf360(void)

undefined4 * FUN_147bcf360(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147bcf488(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0xffffffff00000000;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_147bcf56e(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_147bcf746(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcf488 FUN_147bcf488 body=230 status=ok
// SIG undefined FUN_147bcf488(void)

int * FUN_147bcf488(longlong *param_1,int *param_2)

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



// FUNCTION 147bcf56e FUN_147bcf56e body=147 status=ok
// SIG undefined FUN_147bcf56e(void)

undefined8 FUN_147bcf56e(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar2 = FUN_147bcf602();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar3 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x14) = uVar3;
      FUN_147bcf6bc(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_147bcf592;
    }
  }
  uVar3 = 0;
LAB_147bcf592:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcf602 FUN_147bcf602 body=185 status=ok
// SIG undefined FUN_147bcf602(void)

int FUN_147bcf602(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147bcf62b;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147bcf62b:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 147bcf6bc FUN_147bcf6bc body=138 status=ok
// SIG undefined FUN_147bcf6bc(void)

void FUN_147bcf6bc(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bcf746 FUN_147bcf746 body=436 status=ok
// SIG undefined FUN_147bcf746(void)

void FUN_147bcf746(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 147bcf8fc FUN_147bcf8fc body=310 status=ok
// SIG undefined FUN_147bcf8fc(void)

undefined4 * FUN_147bcf8fc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140cee0ca(param_1,local_48);
  uVar3 = *(ulonglong *)*param_3;
  *local_40 = uVar3;
  local_40[1] = 0xffffffff00000000;
  local_4c = local_48[0];
  uVar2 = FUN_144a78877(uVar3,uVar3 >> 0x20);
  local_58 = 0;
  cVar1 = FUN_140cee028(param_1,uVar2,local_40,&local_4c);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)(local_40 + 2) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140cee2b0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcfa34 FUN_147bcfa34 body=46 status=ok
// SIG undefined FUN_147bcfa34(void)

void FUN_147bcfa34(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_147a4cd94();
  FUN_147bcfa62(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 147bcfa62 FUN_147bcfa62 body=794 status=ok
// SIG undefined FUN_147bcfa62(void)

void FUN_147bcfa62(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar20 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar20 + fVar20);
    plVar13 = &local_358;
    do {
      puVar6 = (undefined8 *)*plVar13;
      puVar14 = (undefined8 *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar7 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar6) >> 3);
      puVar17 = puVar14;
      puVar18 = puVar6;
      if (iVar16 != 0) {
LAB_147bcfb2d:
        uVar9 = iVar7 * -0x55555555 + 1;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          uVar1 = puVar6[uVar10 * 3 + 2];
          uVar2 = puVar6[uVar10 * 3];
          uVar3 = (puVar6 + uVar10 * 3)[1];
          puVar6[uVar10 * 3 + 2] = puVar6[2];
          uVar4 = puVar6[1];
          puVar6[uVar10 * 3] = *puVar6;
          (puVar6 + uVar10 * 3)[1] = uVar4;
          puVar6[2] = uVar1;
          *puVar6 = uVar2;
          puVar6[1] = uVar3;
          puVar11 = puVar14 + 3;
          puVar8 = puVar6;
          do {
            puVar5 = puVar8 + 3;
            puVar15 = puVar8 + 3;
            do {
              puVar8 = puVar15;
              puVar12 = puVar5;
              if (puVar14 < puVar8) break;
              puVar5 = puVar12 + 3;
              puVar15 = puVar8 + 3;
            } while (*(int *)(puVar6 + 1) <= *(int *)(puVar8 + 1));
            puVar5 = puVar11 + -6;
            do {
              puVar15 = puVar11;
              puVar19 = puVar5;
              puVar11 = puVar15 + -3;
              if (puVar11 <= puVar6) break;
              puVar5 = puVar19 + -3;
            } while (*(int *)(puVar15 + -2) <= *(int *)(puVar6 + 1));
            if (puVar11 < puVar8) goto LAB_147bcfc14;
            uVar1 = puVar8[2];
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            puVar8[2] = puVar15[-1];
            uVar4 = puVar15[-2];
            *puVar8 = *puVar11;
            puVar8[1] = uVar4;
            puVar15[-1] = uVar1;
            *puVar11 = uVar2;
            puVar15[-2] = uVar3;
          } while( true );
        }
        for (; puVar18 = puVar6, puVar17 = puVar6, puVar6 < puVar14; puVar14 = puVar14 + -3) {
          while (puVar11 = puVar18, puVar17 = puVar17 + 3, puVar17 <= puVar14) {
            puVar18 = puVar17;
            if (*(int *)(puVar11 + 1) <= *(int *)(puVar17 + 1)) {
              puVar18 = puVar11;
            }
          }
          local_48 = puVar11[2];
          local_58 = *puVar11;
          uStack_50 = puVar11[1];
          uVar2 = local_58;
          uVar3 = uStack_50;
          puVar11[2] = puVar14[2];
          uVar1 = puVar14[1];
          *puVar11 = *puVar14;
          puVar11[1] = uVar1;
          puVar14[2] = local_48;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        goto LAB_147bcfd5b;
      }
LAB_147bcfd70:
      FUN_147bcfd7d(puVar6);
LAB_147bcfd5b:
      plVar13 = plVar13 + -3;
    } while (&local_358 <= plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147bcfc14:
  local_48 = puVar6[2];
  local_58 = *puVar6;
  uStack_50 = puVar6[1];
  uVar2 = local_58;
  uVar3 = uStack_50;
  puVar6[2] = puVar15[-1];
  uVar1 = puVar15[-2];
  *puVar6 = *puVar11;
  puVar6[1] = uVar1;
  puVar15[-1] = local_48;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar15 + -0x14) = local_58._4_4_;
  *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  puVar15 = puVar15 + -6;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar19 - (longlong)puVar18 < (longlong)puVar17 - (longlong)puVar12) {
    if (puVar8 < puVar14) {
      *plVar13 = (longlong)puVar8;
      plVar13[1] = (longlong)puVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar12 = puVar6;
    if (puVar11 <= puVar6 + 3) goto LAB_147bcfd5b;
  }
  else {
    if (puVar6 + 3 < puVar11) {
      *plVar13 = (longlong)puVar6;
      plVar13[1] = (longlong)puVar15;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar6 = puVar8;
    puVar15 = puVar14;
    puVar19 = puVar14;
    if (puVar14 <= puVar8) goto LAB_147bcfd5b;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar12) >> 3);
  puVar14 = puVar15;
  puVar17 = puVar19;
  puVar18 = puVar12;
  if (iVar16 == 0) goto LAB_147bcfd70;
  goto LAB_147bcfb2d;
}



// FUNCTION 147bcfd7d FUN_147bcfd7d body=574 status=ok
// SIG undefined FUN_147bcfd7d(void)

void FUN_147bcfd7d(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x000147bcfdb1:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(int *)(param_1 + (longlong)iVar11 * 3 + 1) <=
            *(int *)(param_1 + (longlong)iVar10 * 3 + 1))) {
          iVar10 = iVar11;
        }
        if (*(int *)(param_1 + (longlong)iVar10 * 3 + 1) <
            *(int *)(param_1 + (longlong)iVar8 * 3 + 1)) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000147bcfdb1;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (*(int *)(param_1 + (longlong)iVar8 * 3 + 1) <=
                *(int *)(param_1 + (longlong)iVar10 * 3 + 1))) {
              iVar11 = iVar8;
            }
            if (*(int *)(param_1 + (longlong)iVar12 * 3 + 1) <=
                *(int *)(param_1 + (longlong)iVar11 * 3 + 1)) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bcffbc FUN_147bcffbc body=165 status=ok
// SIG undefined FUN_147bcffbc(void)

void FUN_147bcffbc(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  
  FUN_140047918(param_2,L"TSet: %i elements, %i hash slots",
                (int)param_1[1] - *(int *)((longlong)param_1 + 0x34),(int)param_1[9]);
  uVar1 = *(uint *)(param_1 + 9);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4);
      iVar5 = 0;
      if (iVar2 != -1) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar2 = *(int *)(*param_1 + 0x10 + (longlong)iVar2 * 0x18);
        } while (iVar2 != -1);
      }
      FUN_140047918(param_2,L"   Hash[%i] = %i",uVar4,iVar5);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return;
}



// FUNCTION 147bd0062 FUN_147bd0062 body=165 status=ok
// SIG undefined FUN_147bd0062(void)

void FUN_147bd0062(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  
  FUN_140047918(param_2,L"TSet: %i elements, %i hash slots",
                (int)param_1[1] - *(int *)((longlong)param_1 + 0x34),(int)param_1[9]);
  uVar1 = *(uint *)(param_1 + 9);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4);
      iVar5 = 0;
      if (iVar2 != -1) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar2 = *(int *)(*param_1 + 0xc + (longlong)iVar2 * 0x14);
        } while (iVar2 != -1);
      }
      FUN_140047918(param_2,L"   Hash[%i] = %i",uVar4,iVar5);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return;
}



// FUNCTION 147bd0108 FUN_147bd0108 body=165 status=ok
// SIG undefined FUN_147bd0108(void)

void FUN_147bd0108(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  
  FUN_140047918(param_2,L"TSet: %i elements, %i hash slots",
                (int)param_1[1] - *(int *)((longlong)param_1 + 0x34),(int)param_1[9]);
  uVar1 = *(uint *)(param_1 + 9);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4);
      iVar5 = 0;
      if (iVar2 != -1) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar2 = *(int *)(*param_1 + 0xc + (longlong)iVar2 * 0x14);
        } while (iVar2 != -1);
      }
      FUN_140047918(param_2,L"   Hash[%i] = %i",uVar4,iVar5);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return;
}



// FUNCTION 147bd01ae FUN_147bd01ae body=52 status=ok
// SIG undefined FUN_147bd01ae(void)

void FUN_147bd01ae(longlong *param_1)

{
  FUN_147bd01e2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bd01e2 FUN_147bd01e2 body=89 status=ok
// SIG undefined FUN_147bd01e2(void)

void FUN_147bd01e2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147bd023c FUN_147bd023c body=38 status=ok
// SIG undefined FUN_147bd023c(void)

undefined8 FUN_147bd023c(undefined8 param_1,int param_2)

{
  FUN_1463ebf76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd0296 FUN_147bd0296 body=38 status=ok
// SIG undefined FUN_147bd0296(void)

undefined8 FUN_147bd0296(undefined8 param_1,int param_2)

{
  FUN_1463ebfbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd02f0 FUN_147bd02f0 body=38 status=ok
// SIG undefined FUN_147bd02f0(void)

undefined8 FUN_147bd02f0(undefined8 param_1,int param_2)

{
  FUN_1463ec006();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd034a FUN_147bd034a body=38 status=ok
// SIG undefined FUN_147bd034a(void)

undefined8 FUN_147bd034a(undefined8 param_1,int param_2)

{
  FUN_1463ec04e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd03a4 FUN_147bd03a4 body=165 status=ok
// SIG undefined FUN_147bd03a4(void)

longlong * FUN_147bd03a4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14797d0e2(param_2,&local_48);
  lVar1 = local_48;
  lVar2 = (longlong)(int)uStack_40;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar3) + 8))
                (*(longlong **)(lVar1 + lVar3),param_1,param_3);
      if (*param_1 != 0) goto LAB_147bd0415;
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  *param_1 = 0;
LAB_147bd0415:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd044a FUN_147bd044a body=89 status=ok
// SIG undefined FUN_147bd044a(void)

longlong FUN_147bd044a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar2 = FUN_144a7a812();
    lVar3 = *param_1;
    if (lVar3 != 0) {
      if ((((lVar2 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
          (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        return lVar3;
      }
      lVar3 = FUN_144a79778(lVar3);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 147bd04a3 FUN_147bd04a3 body=164 status=ok
// SIG undefined FUN_147bd04a3(void)

longlong FUN_147bd04a3(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x48);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_147bd0548(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x18) == param_2) goto LAB_147bd04bf;
        local_28 = *(longlong *)(local_28 + 0x28);
        FUN_147bd0548(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_147bd04bf:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147bd0548 FUN_147bd0548 body=181 status=ok
// SIG undefined FUN_147bd0548(void)

void FUN_147bd0548(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
LAB_147bd055c:
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
      uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xd8);
      if (((uVar1 & 8) != 0) &&
         (((-1 < (short)uVar1 || (*(char *)((longlong)param_1 + 0x15) != '\0')) ||
          ((*(byte *)(lVar5 + 0x3b) & 0x20) == 0)))) goto LAB_147bd05c3;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar5 = (longlong)(int)param_1[2] + 1;
      iVar4 = (int)lVar5;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 < (int)plVar3[0x3c]) {
        lVar2 = *(longlong *)(plVar3[0x3b] + lVar5 * 0x10);
        lVar5 = 0;
        if (lVar2 != 0) {
          lVar5 = *(longlong *)(lVar2 + 0x48);
        }
        goto LAB_147bd055c;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))();
      if (plVar3 != (longlong *)0x0) {
        lVar5 = plVar3[9];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_147bd055c;
      }
      plVar3 = (longlong *)0x0;
    }
    lVar5 = 0;
  }
LAB_147bd05c3:
  *param_1 = (longlong)plVar3;
  param_1[1] = lVar5;
  return;
}



// FUNCTION 147bd05fd FUN_147bd05fd body=137 status=ok
// SIG undefined FUN_147bd05fd(void)

undefined8 FUN_147bd05fd(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  FUN_1400021e4(&local_20,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = FUN_140010bca();
  uVar1 = FUN_140277b32(uVar1,param_1,puVar2,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147bd0687 FUN_147bd0687 body=290 status=ok
// SIG undefined FUN_147bd0687(void)

longlong FUN_147bd0687(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  uint local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_1;
  FUN_1400021e4(&local_28,&local_38);
  lVar3 = 0;
  FUN_146ff117a(&local_50,0x10,1,0);
  uVar6 = (ulonglong)local_40;
  lVar4 = local_50;
  iVar1 = local_48;
  if ((int)local_40 < local_48 && -1 < (int)local_40) {
    do {
      lVar3 = *(longlong *)(lVar4 + (uVar6 & 0xffffffff) * 8);
      if ((*(byte *)(lVar3 + 0x2c) & 0x10) == 0) {
        lVar3 = 0;
        local_40 = (uint)uVar6;
      }
      else {
        puVar5 = &DAT_149dfb77a;
        if (local_30 != 0) {
          puVar5 = local_38;
        }
        uVar2 = FUN_140010bca();
        lVar3 = FUN_140277b32(uVar2,lVar3,puVar5,0);
        lVar4 = local_50;
        iVar1 = local_48;
      }
      uVar6 = (longlong)(int)local_40;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_40 = (uint)uVar6;
        if ((longlong)iVar1 <= (longlong)uVar6) break;
      } while (*(longlong *)(lVar4 + uVar6 * 8) == 0);
    } while (((lVar3 == 0) && (-2 < (longlong)uVar7)) && ((int)local_40 < iVar1));
  }
  if (lVar4 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147bd07aa FUN_147bd07aa body=56 status=ok
// SIG undefined FUN_147bd07aa(void)

undefined8 * FUN_147bd07aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9e4a10;
  FUN_144725486();
  FUN_1463ec416(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd07e2 FUN_147bd07e2 body=32 status=ok
// SIG undefined FUN_147bd07e2(void)

undefined8 FUN_147bd07e2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FDummyPrevTransformBuffer");
  return param_2;
}



// FUNCTION 147bd0802 FUN_147bd0802 body=38 status=ok
// SIG undefined FUN_147bd0802(void)

undefined8 FUN_147bd0802(undefined8 param_1,int param_2)

{
  FUN_1463ec416();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd0828 FUN_147bd0828 body=319 status=ok
// SIG undefined FUN_147bd0828(void)

void FUN_147bd0828(longlong param_1,longlong param_2,int param_3,longlong param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  short *psVar5;
  
  uVar1 = *(undefined8 *)(param_4 + 0x280);
  FUN_145e40e04();
  uVar2 = *(ulonglong *)(param_2 + 0xa0);
  uVar3 = param_2 + 0xa0 + ((longlong)uVar2 >> 0x18);
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  if (0 < (longlong)*(int *)(param_2 + 0xa8)) {
    lVar4 = 0;
    do {
      if (*(longlong *)(uVar3 + lVar4 * 4) == DAT_14caf17e0) {
        uVar2 = *(ulonglong *)(param_2 + 0xb0);
        uVar3 = param_2 + 0xb0 + ((longlong)uVar2 >> 0x18);
        if ((uVar2 & 1) == 0) {
          uVar3 = uVar2;
        }
        psVar5 = (short *)(uVar3 + lVar4);
        goto LAB_147bd08c0;
      }
      lVar4 = lVar4 + 2;
    } while ((longlong)*(int *)(param_2 + 0xa8) * 2 != lVar4);
  }
  psVar5 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147bd08c0:
  if (*psVar5 != -1) {
    FUN_144b11088(param_5,uVar1);
  }
  if ((2 < param_3) && ((*(uint *)(param_1 + 4) & 0xff0000) != 0)) {
    FUN_147511800(param_5,*(undefined8 *)(param_4 + 0x298),*(uint *)(param_1 + 4) & 0xffff);
    return;
  }
  return;
}



// FUNCTION 147bd0968 FUN_147bd0968 body=353 status=ok
// SIG undefined FUN_147bd0968(void)

longlong * FUN_147bd0968(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 200) * 0xc,
             (longlong)*(int *)(param_2 + 0xcc) * 0xc);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 200);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 200) = 0, *(int *)(param_2 + 0xcc) != 0)) {
      FUN_1479ccbf2(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 200) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147bd0aca(param_2,local_1c,*(undefined4 *)(param_2 + 0xcc));
      uVar3 = *(uint *)(param_2 + 200);
    }
    lVar4 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar4 = param_2;
    }
    (**(code **)(*param_1 + 0x170))(param_1,lVar4,(longlong)(int)uVar3 * 0xc);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147bd0aca FUN_147bd0aca body=121 status=ok
// SIG undefined FUN_147bd0aca(void)

void FUN_147bd0aca(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1479ccb5c(param_1,0,iVar3,0xc);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xcc) = param_3;
  return;
}



// FUNCTION 147bd0b44 FUN_147bd0b44 body=367 status=ok
// SIG undefined FUN_147bd0b44(void)

longlong * FUN_147bd0b44(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140678d80(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147bc9d45(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_140678d80(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147bd0cb4(param_2);
        FUN_147bc9d45(param_1,uVar3);
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



// FUNCTION 147bd0cb4 FUN_147bd0cb4 body=53 status=ok
// SIG undefined FUN_147bd0cb4(void)

longlong FUN_147bd0cb4(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bd0cea(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x40 + *param_1;
}



// FUNCTION 147bd0cea FUN_147bd0cea body=132 status=ok
// SIG undefined FUN_147bd0cea(void)

void FUN_147bd0cea(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd0d70 FUN_147bd0d70 body=98 status=ok
// SIG undefined FUN_147bd0d70(void)

void FUN_147bd0d70(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bd0dd2 FUN_147bd0dd2 body=375 status=ok
// SIG undefined FUN_147bd0dd2(void)

longlong * FUN_147bd0dd2(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1406791da(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147bd0f4a(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1406791da(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147bd100c(param_2);
        FUN_147bd0f4a(param_1,uVar3);
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



// FUNCTION 147bd0f4a FUN_147bd0f4a body=193 status=ok
// SIG undefined FUN_147bd0f4a(void)

longlong * FUN_147bd0f4a(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14280e057(param_1,param_2 + 2);
  FUN_14280e057(param_1,param_2 + 4);
  return param_1;
}



// FUNCTION 147bd100c FUN_147bd100c body=54 status=ok
// SIG undefined FUN_147bd100c(void)

longlong FUN_147bd100c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bd1042(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x18 + *param_1;
}



// FUNCTION 147bd1042 FUN_147bd1042 body=147 status=ok
// SIG undefined FUN_147bd1042(void)

void FUN_147bd1042(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd10d6 FUN_147bd10d6 body=115 status=ok
// SIG undefined FUN_147bd10d6(void)

void FUN_147bd10d6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,0x10);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bd1149 FUN_147bd1149 body=52 status=ok
// SIG undefined FUN_147bd1149(void)

void FUN_147bd1149(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147bd117e(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 147bd117e FUN_147bd117e body=120 status=ok
// SIG undefined FUN_147bd117e(void)

longlong * FUN_147bd117e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  param_1[3] = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar1 = param_2[2];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(int *)(param_1 + 2) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x43);
  *(undefined8 *)((longlong)param_1 + 0x3b) = *(undefined8 *)((longlong)param_2 + 0x3b);
  *(undefined8 *)((longlong)param_1 + 0x43) = uVar4;
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  return param_1;
}



// FUNCTION 147bd11f6 FUN_147bd11f6 body=115 status=ok
// SIG undefined FUN_147bd11f6(void)

void FUN_147bd11f6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bd126a FUN_147bd126a body=147 status=ok
// SIG undefined FUN_147bd126a(void)

void FUN_147bd126a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd12fe FUN_147bd12fe body=399 status=ok
// SIG undefined FUN_147bd12fe(void)

longlong * FUN_147bd12fe(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147bd1566(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_147bd148e(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_147bd1566(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147bd14e0(param_2,iVar2);
        }
        FUN_147bd148e(param_1,(longlong)iVar2 * 4 + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147bd148e FUN_147bd148e body=82 status=ok
// SIG undefined FUN_147bd148e(void)

longlong * FUN_147bd148e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147bd14e0 FUN_147bd14e0 body=132 status=ok
// SIG undefined FUN_147bd14e0(void)

void FUN_147bd14e0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd1566 FUN_147bd1566 body=95 status=ok
// SIG undefined FUN_147bd1566(void)

void FUN_147bd1566(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 147bd15c6 FUN_147bd15c6 body=147 status=ok
// SIG undefined FUN_147bd15c6(void)

void FUN_147bd15c6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd165a FUN_147bd165a body=79 status=ok
// SIG undefined FUN_147bd165a(void)

void FUN_147bd165a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c951640;
  uVar1 = FUN_14572b870();
  uVar2 = FUN_140010cf7(uVar1,uVar2,0,0x510,0,0,0,0);
  FUN_147bca6d4(uVar2,param_1);
  return;
}



// FUNCTION 147bd16aa FUN_147bd16aa body=56 status=ok
// SIG undefined FUN_147bd16aa(void)

longlong FUN_147bd16aa(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd16fa FUN_147bd16fa body=59 status=ok
// SIG undefined FUN_147bd16fa(void)

int FUN_147bd16fa(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x71c71c8) {
    iVar1 = *(uint *)(param_1 + 0x10) * 0x24;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x24);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147bd175e FUN_147bd175e body=21 status=ok
// SIG undefined FUN_147bd175e(void)

undefined * FUN_147bd175e(void)

{
  FUN_147bd17f0();
  return &DAT_14caf1f18;
}



// FUNCTION 147bd1780 FUN_147bd1780 body=112 status=ok
// SIG undefined FUN_147bd1780(void)

void FUN_147bd1780(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 147bd17f0 FUN_147bd17f0 body=205 status=ok
// SIG undefined FUN_147bd17f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bd17f0(void)

{
  if ((DAT_14caf1f7f & 2) != 0) {
    return;
  }
  DAT_14caf1f7f = DAT_14caf1f7f | 2;
  _DAT_14caf1f20 = L"TResourceArray";
  _DAT_14caf1f38 = FUN_146826540;
  _DAT_14caf1f40 = FUN_146825d77;
  _DAT_14caf1f48 = FUN_146825fd6;
  _DAT_14caf1f50 = FUN_1407e02ea;
  _DAT_14caf1f58 = FUN_146826273;
  _DAT_14caf1f30 = FUN_147bd18be;
  _DAT_14caf1f70 = 0xffffffff00000020;
  _DAT_14caf1f78 = 8;
  DAT_14caf1f7c = 1;
  _DAT_14caf1f60 = FUN_147bd18ea;
  FUN_147bd1900();
  FUN_147bd1a0e();
  FUN_1407e00cc(&DAT_14caf1f18);
  return;
}



// FUNCTION 147bd18be FUN_147bd18be body=43 status=ok
// SIG undefined FUN_147bd18be(void)

void FUN_147bd18be(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bd18ea FUN_147bd18ea body=21 status=ok
// SIG undefined FUN_147bd18ea(void)

undefined * FUN_147bd18ea(void)

{
  FUN_147bd1be7();
  return &DAT_14caf1f80;
}



// FUNCTION 147bd1900 FUN_147bd1900 body=270 status=ok
// SIG undefined FUN_147bd1900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bd1900(void)

{
  _DAT_14caf1fa8 = L"bNeedsCPUAccess";
  DAT_14caf1fd2 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14caf1fb0 = &DAT_14c9cfcf0;
  _DAT_14caf1fc0 = &LAB_14682652b;
  _DAT_14caf1fc8 = &DAT_100000018;
  _DAT_14caf1fd0 = 0;
  _DAT_14caf1fb8 = DAT_14caf1f28;
  DAT_14caf1f28 = &DAT_14caf1fa8;
  return;
}



// FUNCTION 147bd1a0e FUN_147bd1a0e body=473 status=ok
// SIG undefined FUN_147bd1a0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bd1a0e(void)

{
  _DAT_14caf1fd8 = L"BASE";
  DAT_14caf2002 = 4;
  if ((DAT_14caf206f & 2) == 0) {
    DAT_14caf206f = DAT_14caf206f | 3;
    _DAT_14caf2010 = L"(TArray<T, AllocatorType>)";
    _DAT_14caf2028 = FUN_147bd1c62;
    _DAT_14caf2030 = &LAB_147bd1cc2;
    _DAT_14caf2038 = &LAB_147bd1cd0;
    _DAT_14caf2040 = &LAB_147bd1cde;
    _DAT_14caf2048 = &DAT_147bd1cec;
    _DAT_14caf2020 = FUN_147bd1cee;
    _DAT_14caf2060 = 0x1000000010;
    _DAT_14caf2068 = 8;
    DAT_14caf206c = '\0';
  }
  else if (DAT_14caf206c != '\0') {
    DAT_14caf1f7e = DAT_14caf1f7e + '\x01';
  }
  _DAT_14caf1fe8 = DAT_14caf1f28;
  _DAT_14caf1ff8 = &DAT_100000008;
  _DAT_14caf1ff0 = &LAB_14682652b;
  _DAT_14caf1fe0 = &DAT_14caf2008;
  DAT_14caf1f7d = DAT_14caf1f7d + '\x01';
  DAT_14caf1f28 = &DAT_14caf1fd8;
  _DAT_14caf2070 = L"BASE";
  DAT_14caf209a = 4;
  _DAT_14caf2078 = FUN_146268212();
  _DAT_14caf2080 = DAT_14caf1f28;
  _DAT_14caf2088 = &LAB_14682652b;
  DAT_14caf1f28 = &DAT_14caf2070;
  DAT_14caf1f7d = DAT_14caf1f7d + '\x01';
  _DAT_14caf2090 = 0x100000000;
  if (*(char *)(_DAT_14caf2078 + 100) != '\0') {
    DAT_14caf1f7e = DAT_14caf1f7e + '\x01';
  }
  return;
}



// FUNCTION 147bd1be7 FUN_147bd1be7 body=122 status=ok
// SIG undefined FUN_147bd1be7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bd1be7(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf1fa0) {
    FUN_144b3d300(&DAT_14caf1fa0);
    if (DAT_14caf1fa0 == -1) {
      DAT_14caf1f88 = 0;
      uRam000000014caf1f90 = 0;
      _DAT_14caf1f80 = &PTR_FUN_14a9e4ab0;
      DAT_14caf1f98 = 0;
      atexit((_func_5014 *)&LAB_143591e69);
      _Init_thread_footer(&DAT_14caf1fa0);
      return;
    }
  }
  return;
}



// FUNCTION 147bd1c62 FUN_147bd1c62 body=95 status=ok
// SIG undefined FUN_147bd1c62(void)

void FUN_147bd1c62(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd1cee FUN_147bd1cee body=51 status=ok
// SIG undefined FUN_147bd1cee(void)

void FUN_147bd1cee(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bd1d22 FUN_147bd1d22 body=582 status=ok
// SIG undefined FUN_147bd1d22(void)

void FUN_147bd1d22(ulonglong *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0x24;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147bd1f6a(param_2,param_1);
    goto LAB_147bd1ed4;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] * 0x24,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0x24);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147bd1ed4;
    local_20 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147bd1ead:
    uVar4 = *param_1;
    uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar4;
    }
    (**(code **)(*param_2 + 0x170))(param_2,uVar7,(longlong)(int)local_20 * 0x24);
  }
  else {
    if (local_1c == 0x24) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0x38e38e4) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar5 = 0;
        uVar6 = local_20;
        if (*(uint *)((longlong)param_1 + 0xc) != local_20) {
          FUN_147bd1780(param_1);
          iVar5 = (int)param_1[1];
          uVar6 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = iVar5 + local_20;
        if (uVar6 - iVar5 < local_20) {
          FUN_147bd213a(param_1,iVar5);
        }
        goto LAB_147bd1ead;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147bd1ed4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bd1f6a FUN_147bd1f6a body=393 status=ok
// SIG undefined FUN_147bd1f6a(void)

longlong * FUN_147bd1f6a(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x24,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x24);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147bd1780(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x71c71 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_147bca2b3(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x24;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147bd1780(param_2), 0 < (int)local_2c)) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147bd20f4(param_2);
        FUN_147bca2b3(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147bd20f4 FUN_147bd20f4 body=70 status=ok
// SIG undefined FUN_147bd20f4(void)

longlong FUN_147bd20f4(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bd213a(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  return uVar3 + (longlong)iVar1 * 0x24;
}



// FUNCTION 147bd213a FUN_147bd213a body=147 status=ok
// SIG undefined FUN_147bd213a(void)

void FUN_147bd213a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd21ce FUN_147bd21ce body=132 status=ok
// SIG undefined FUN_147bd21ce(void)

void FUN_147bd21ce(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd2254 FUN_147bd2254 body=377 status=ok
// SIG undefined FUN_147bd2254(void)

longlong * FUN_147bd2254(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x24,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x24);
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147bd2498(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x71c71 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147bca2b3(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x24;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147bd2498(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147bd23ce(param_2);
        FUN_147bca2b3(param_1,uVar3);
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



// FUNCTION 147bd23ce FUN_147bd23ce body=54 status=ok
// SIG undefined FUN_147bd23ce(void)

longlong FUN_147bd23ce(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bd2404(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x24 + *param_1;
}



// FUNCTION 147bd2404 FUN_147bd2404 body=147 status=ok
// SIG undefined FUN_147bd2404(void)

void FUN_147bd2404(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd2498 FUN_147bd2498 body=112 status=ok
// SIG undefined FUN_147bd2498(void)

void FUN_147bd2498(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 147bd2508 FUN_147bd2508 body=114 status=ok
// SIG undefined FUN_147bd2508(void)

void FUN_147bd2508(longlong *param_1,int param_2)

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



// FUNCTION 147bd257a FUN_147bd257a body=363 status=ok
// SIG undefined FUN_147bd257a(void)

longlong * FUN_147bd257a(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145aea195(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147bd2726(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147bcb485(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147bcb99c(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147bd26e6(param_2);
        FUN_147bcb485(param_1,uVar3);
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



// FUNCTION 147bd26e6 FUN_147bd26e6 body=64 status=ok
// SIG undefined FUN_147bd26e6(void)

longlong FUN_147bd26e6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bce65c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_147bce63d(lVar2,1);
  return lVar2;
}



// FUNCTION 147bd2726 FUN_147bd2726 body=95 status=ok
// SIG undefined FUN_147bd2726(void)

void FUN_147bd2726(longlong param_1,uint param_2)

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



// FUNCTION 147bd2786 FUN_147bd2786 body=386 status=ok
// SIG undefined FUN_147bd2786(void)

longlong * FUN_147bd2786(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x1c,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x1c);
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147bce6e2(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x92492 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147bd2909(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x1c;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147bce6e2(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147bd2a44(param_2);
        FUN_147bd2909(param_1,uVar3);
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



// FUNCTION 147bd2909 FUN_147bd2909 body=314 status=ok
// SIG undefined FUN_147bd2909(void)

longlong FUN_147bd2909(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x40) < 0x15c) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    uVar2 = FUN_1447712aa(param_1,param_2);
    plVar3 = (longlong *)FUN_1474302aa(uVar2,&local_1c);
    auVar5._8_8_ = extraout_XMM0_Qb;
    auVar5._0_8_ = extraout_XMM0_Qa;
    puVar1 = *(undefined4 **)plVar3[1];
    if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
        auVar5._0_8_ = (**(code **)(*plVar3 + 0x170))(plVar3,(undefined4 *)(param_2 + 0x18),4);
        auVar5._8_8_ = extraout_XMM0_Qb_00;
      }
      else {
        auVar5._0_8_ = FUN_14572512c(plVar3);
        auVar5._8_8_ = extraout_XMM0_Qb_01;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = *puVar1;
      *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    }
    auVar5 = pmovzxbd(auVar5,local_1c);
    auVar6._0_8_ = CONCAT44((float)auVar5._4_4_ * 0.007843138 + -1.0,
                            (float)auVar5._0_4_ * 0.007843138 + -1.0);
    auVar6._8_4_ = (float)auVar5._8_4_ * 0.007843138 + -1.0;
    auVar6._12_4_ = (float)auVar5._12_4_ * 0.0 + 0.0;
    *(undefined8 *)(param_2 + 0xc) = auVar6._0_8_;
    uVar2 = extractps(auVar6,2);
    *(undefined8 *)(param_2 + 0x14) = uVar2;
  }
  else {
    uVar2 = FUN_1447712aa(param_1,param_2);
    plVar3 = (longlong *)FUN_1447712aa(uVar2,param_2 + 0xc);
    puVar4 = (undefined4 *)(param_2 + 0x18);
    puVar1 = *(undefined4 **)plVar3[1];
    if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar3 + 0x170))(plVar3,puVar4,4);
      }
      else {
        FUN_14572512c(plVar3,puVar4);
      }
    }
    else {
      *puVar4 = *puVar1;
      *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd2a44 FUN_147bd2a44 body=57 status=ok
// SIG undefined FUN_147bd2a44(void)

longlong FUN_147bd2a44(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bd2a7e(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x1c + *param_1;
}



// FUNCTION 147bd2a7e FUN_147bd2a7e body=157 status=ok
// SIG undefined FUN_147bd2a7e(void)

void FUN_147bd2a7e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd2b1c FUN_147bd2b1c body=38 status=ok
// SIG undefined FUN_147bd2b1c(void)

undefined8 FUN_147bd2b1c(undefined8 param_1,int param_2)

{
  FUN_14577cc16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd2b44 FUN_147bd2b44 body=101 status=ok
// SIG undefined FUN_147bd2b44(void)

void FUN_147bd2b44(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_1400020a8();
  }
  FUN_146efe0dc(param_1 + 0x200);
  FUN_147bd2baa(param_1);
  return;
}



// FUNCTION 147bd2baa FUN_147bd2baa body=105 status=ok
// SIG undefined FUN_147bd2baa(void)

void FUN_147bd2baa(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_1448eac94(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x30);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bd2c14 FUN_147bd2c14 body=59 status=ok
// SIG undefined FUN_147bd2c14(void)

void FUN_147bd2c14(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1[3] != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bd2c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar1)(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147bd2c50 FUN_147bd2c50 body=29 status=ok
// SIG undefined FUN_147bd2c50(void)

undefined8 FUN_147bd2c50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd2c6e FUN_147bd2c6e body=58 status=ok
// SIG undefined FUN_147bd2c6e(void)

longlong FUN_147bd2c6e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_14577cc16(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd2ca8 FUN_147bd2ca8 body=29 status=ok
// SIG undefined FUN_147bd2ca8(void)

undefined8 FUN_147bd2ca8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd2cdc FUN_147bd2cdc body=71 status=ok
// SIG undefined FUN_147bd2cdc(void)

undefined8 * FUN_147bd2cdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9e5108;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd2d32 FUN_147bd2d32 body=31 status=ok
// SIG undefined FUN_147bd2d32(void)

undefined8 FUN_147bd2d32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bd2d6c FUN_147bd2d6c body=29 status=ok
// SIG undefined FUN_147bd2d6c(void)

bool FUN_147bd2d6c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147bd2d8a FUN_147bd2d8a body=26 status=ok
// SIG undefined FUN_147bd2d8a(void)

bool FUN_147bd2d8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147bd2da4 FUN_147bd2da4 body=24 status=ok
// SIG undefined FUN_147bd2da4(void)

bool FUN_147bd2da4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147bd2dc8 FUN_147bd2dc8 body=101 status=ok
// SIG undefined FUN_147bd2dc8(void)

void FUN_147bd2dc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9e4dc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9e4d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bd2e2e FUN_147bd2e2e body=134 status=ok
// SIG undefined FUN_147bd2e2e(void)

void FUN_147bd2e2e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a9e4dc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9e4d50;
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
                    /* WARNING: Could not recover jumptable at 0x000147bd2ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bd2eb4 FUN_147bd2eb4 body=62 status=ok
// SIG undefined FUN_147bd2eb4(void)

void FUN_147bd2eb4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147bd2eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147bd2ef2 FUN_147bd2ef2 body=165 status=ok
// SIG undefined FUN_147bd2ef2(void)

bool FUN_147bd2ef2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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



// FUNCTION 147bd2f9a FUN_147bd2f9a body=48 status=ok
// SIG undefined FUN_147bd2f9a(void)

void FUN_147bd2f9a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147bd2fca FUN_147bd2fca body=164 status=ok
// SIG undefined FUN_147bd2fca(void)

void FUN_147bd2fca(longlong *param_1,undefined8 param_2)

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
        goto LAB_147bd304a;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147bd304a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147bd306e FUN_147bd306e body=68 status=ok
// SIG undefined FUN_147bd306e(void)

void FUN_147bd306e(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147a4edda(param_1);
  return;
}



// FUNCTION 147bd30b2 FUN_147bd30b2 body=187 status=ok
// SIG undefined FUN_147bd30b2(void)

longlong * FUN_147bd30b2(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_147bd3150;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_147bd316e(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_147bd3150:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 147bd316e FUN_147bd316e body=279 status=ok
// SIG undefined FUN_147bd316e(void)

undefined4 * FUN_147bd316e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147bd3286(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  cVar2 = FUN_147bd336c(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 2) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147bd3464(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd3286 FUN_147bd3286 body=230 status=ok
// SIG undefined FUN_147bd3286(void)

int * FUN_147bd3286(longlong *param_1,int *param_2)

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



// FUNCTION 147bd336c FUN_147bd336c body=134 status=ok
// SIG undefined FUN_147bd336c(void)

undefined8 FUN_147bd336c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_147bd33f2(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bd33f2 FUN_147bd33f2 body=114 status=ok
// SIG undefined FUN_147bd33f2(void)

void FUN_147bd33f2(longlong *param_1,int param_2)

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



// FUNCTION 147bd3464 FUN_147bd3464 body=473 status=ok
// SIG undefined FUN_147bd3464(void)

void FUN_147bd3464(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 147bd363e FUN_147bd363e body=180 status=ok
// SIG undefined FUN_147bd363e(void)

longlong * FUN_147bd363e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_147bd36d5;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147bd36f4(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_147bd36d5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 147bd36f4 FUN_147bd36f4 body=285 status=ok
// SIG undefined FUN_147bd36f4(void)

undefined4 * FUN_147bd36f4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147bd3812(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar1 = FUN_147bd38f8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147bd39f4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd3812 FUN_147bd3812 body=230 status=ok
// SIG undefined FUN_147bd3812(void)

int * FUN_147bd3812(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
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



// FUNCTION 147bd38f8 FUN_147bd38f8 body=138 status=ok
// SIG undefined FUN_147bd38f8(void)

undefined8 FUN_147bd38f8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_147bd3982((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bd3982 FUN_147bd3982 body=114 status=ok
// SIG undefined FUN_147bd3982(void)

void FUN_147bd3982(longlong *param_1,int param_2)

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



// FUNCTION 147bd39f4 FUN_147bd39f4 body=473 status=ok
// SIG undefined FUN_147bd39f4(void)

void FUN_147bd39f4(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 147bd3bce FUN_147bd3bce body=287 status=ok
// SIG undefined FUN_147bd3bce(void)

undefined4 * FUN_147bd3bce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147bd3cee(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_147bd3dd4(param_1,uVar5,local_40,&local_4c);
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
      FUN_147bd3ec6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd3cee FUN_147bd3cee body=230 status=ok
// SIG undefined FUN_147bd3cee(void)

int * FUN_147bd3cee(longlong *param_1,int *param_2)

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



// FUNCTION 147bd3dd4 FUN_147bd3dd4 body=128 status=ok
// SIG undefined FUN_147bd3dd4(void)

undefined8 FUN_147bd3dd4(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_147bd3e54(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bd3e54 FUN_147bd3e54 body=114 status=ok
// SIG undefined FUN_147bd3e54(void)

void FUN_147bd3e54(longlong *param_1,int param_2)

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



// FUNCTION 147bd3ec6 FUN_147bd3ec6 body=419 status=ok
// SIG undefined FUN_147bd3ec6(void)

void FUN_147bd3ec6(longlong *param_1)

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



// FUNCTION 147bd406a FUN_147bd406a body=87 status=ok
// SIG undefined FUN_147bd406a(void)

void FUN_147bd406a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147bd3e54();
  return;
}



// FUNCTION 147bd40c2 FUN_147bd40c2 body=68 status=ok
// SIG undefined FUN_147bd40c2(void)

void FUN_147bd40c2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147bd4106();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147bd4106 FUN_147bd4106 body=322 status=ok
// SIG undefined FUN_147bd4106(void)

void FUN_147bd4106(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 147bd424a FUN_147bd424a body=90 status=ok
// SIG undefined FUN_147bd424a(void)

void FUN_147bd424a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147bd42a4();
  return;
}



// FUNCTION 147bd42a4 FUN_147bd42a4 body=58 status=ok
// SIG undefined FUN_147bd42a4(void)

void FUN_147bd42a4(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_147a4ed50(param_1,param_2,1);
  return;
}



// FUNCTION 147bd42de FUN_147bd42de body=147 status=ok
// SIG undefined FUN_147bd42de(void)

void FUN_147bd42de(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bd4372 FUN_147bd4372 body=63 status=ok
// SIG undefined FUN_147bd4372(void)

void FUN_147bd4372(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14584df90(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147bd3464(param_1);
    return;
  }
  FUN_147bd43b2(param_1);
  FUN_14584df90(param_1);
  return;
}



// FUNCTION 147bd43b2 FUN_147bd43b2 body=322 status=ok
// SIG undefined FUN_147bd43b2(void)

void FUN_147bd43b2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 147bd44f6 FUN_147bd44f6 body=63 status=ok
// SIG undefined FUN_147bd44f6(void)

void FUN_147bd44f6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14584e020(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147bd39f4(param_1);
    return;
  }
  FUN_147bd4536(param_1);
  FUN_14584e020(param_1);
  return;
}



// FUNCTION 147bd4536 FUN_147bd4536 body=322 status=ok
// SIG undefined FUN_147bd4536(void)

void FUN_147bd4536(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 147bd4679 FUN_147bd4679 body=156 status=ok
// SIG undefined FUN_147bd4679(void)

void FUN_147bd4679(char *param_1,wint_t *param_2)

{
  wint_t _C;
  byte bVar1;
  char cVar2;
  int iVar3;
  wint_t *pwVar4;
  
  if (*param_2 == 0) {
    *param_1 = '\0';
  }
  else {
    cVar2 = FUN_14052c20c(param_2);
    *param_1 = cVar2;
    if ((cVar2 == '\0') && (iVar3 = _finite(0.0), iVar3 != 0)) {
      do {
        do {
          do {
            pwVar4 = param_2 + 1;
            _C = *param_2;
            param_2 = pwVar4;
          } while (_C == 0x2b);
        } while (_C == 0x2d);
        if (_C == 0) {
          return;
        }
        iVar3 = iswspace(_C);
      } while (iVar3 != 0);
      if (_C != 0) {
        bVar1 = 0;
        do {
          iVar3 = iswspace(_C);
          if (_C == 0x2e) {
            return;
          }
          if (iVar3 != 0) {
            return;
          }
          if (!(bool)(bVar1 | _C == 0x30)) {
            return;
          }
          _C = *pwVar4;
          pwVar4 = pwVar4 + 1;
          bVar1 = 1;
        } while (_C != 0);
      }
    }
  }
  return;
}



// FUNCTION 147bd4716 FUN_147bd4716 body=168 status=ok
// SIG undefined FUN_147bd4716(void)

longlong * FUN_147bd4716(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_140496b24();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90000000;
  local_30 = param_1;
  FUN_140245161(uVar2,&local_28,1,0x10);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd47fe FUN_147bd47fe body=75 status=ok
// SIG undefined FUN_147bd47fe(void)

void FUN_147bd47fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147bd484a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd484a FUN_147bd484a body=2367 status=ok
// SIG undefined FUN_147bd484a(void)

void FUN_147bd484a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  switchD_143c3d4dc::caseD_21();
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x110) << 5,
               (longlong)*(int *)(param_1 + 0x114) << 5);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x130) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x134) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x150) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x160) * 0x18,
               (longlong)*(int *)(param_1 + 0x164) * 0x18);
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      FUN_147be8d8c(*(longlong *)(param_1 + 0x1b8),param_2);
    }
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      FUN_146899462(*(longlong *)(param_1 + 0x1c8),param_2);
    }
    plVar1 = (longlong *)(param_1 + 0x3e0);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 1000) * 0x18,
               (longlong)*(int *)(param_1 + 0x3ec) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x408) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x40c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x428) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x3f0;
    local_68 = 0x100000000;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    uStack_60 = lVar4;
    if (*(int *)(param_1 + 0x408) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(param_1 + 0x408);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78._0_4_ = (uint)local_58;
    local_78._4_4_ = local_58._4_4_;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((local_58._4_4_ != iVar6) || (uStack_60 != lVar4)) {
      do {
        lVar5 = *(longlong *)(*local_90 + 8 + (longlong)local_78._4_4_ * 0x18);
        if (lVar5 != 0) {
          (**(code **)(*param_2 + 0x10))(param_2,0x50,0x50);
          (**(code **)(*param_2 + 0x10))
                    (param_2,(longlong)*(int *)(lVar5 + 0x38) * 2,
                     (longlong)*(int *)(lVar5 + 0x3c) * 2);
        }
        local_78._0_4_ = (uint)local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar4 || local_78._4_4_ != iVar6));
    }
    plVar1 = (longlong *)(param_1 + 0x430);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x438) * 0x60,
               (longlong)*(int *)(param_1 + 0x43c) * 0x60);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x458) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x45c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x478) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x440;
    local_68 = 0x100000000;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    uStack_60 = lVar4;
    if (*(int *)(param_1 + 0x458) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(param_1 + 0x458);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78._0_4_ = (uint)local_58;
    local_78._4_4_ = local_58._4_4_;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((local_58._4_4_ != iVar6) || (uStack_60 != lVar4)) {
      do {
        lVar5 = *local_90;
        lVar7 = (longlong)local_78._4_4_ * 0x60;
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(lVar5 + 0x10 + lVar7) << 4,
                   (longlong)*(int *)(lVar5 + 0x14 + lVar7) << 4);
        (**(code **)(*param_2 + 0x10))
                  (param_2,*(int *)(lVar5 + 0x30 + lVar7) + 0x1fU >> 3 & 0xfffffffc,
                   *(int *)(lVar5 + 0x34 + lVar7) + 0x1fU >> 3 & 0xfffffffc);
        lVar5 = (longlong)*(int *)(lVar5 + 0x50 + lVar7) << 2;
        (**(code **)(*param_2 + 0x10))(param_2,lVar5,lVar5);
        local_78._0_4_ = (uint)local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar4 || local_78._4_4_ != iVar6));
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x4d8) * 0x18,
               (longlong)*(int *)(param_1 + 0x4dc) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x4f8) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x4fc) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x518) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    plVar1 = (longlong *)(param_1 + 0x528);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x530) << 5,
               (longlong)*(int *)(param_1 + 0x534) << 5);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x550) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x554) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x570) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x538;
    local_68 = 0x100000000;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    uStack_60 = lVar4;
    if (*(int *)(param_1 + 0x550) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(param_1 + 0x550);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78._0_4_ = (uint)local_58;
    local_78._4_4_ = local_58._4_4_;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((local_58._4_4_ != iVar6) || (uStack_60 != lVar4)) {
      do {
        lVar5 = *(longlong *)(*local_90 + 8 + (longlong)local_78._4_4_ * 0x20);
        if (lVar5 != 0) {
          (**(code **)(*param_2 + 0x10))(param_2,0x138,0x138);
          FUN_147ce1b10(lVar5,param_2);
        }
        local_78._0_4_ = (uint)local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar4 || local_78._4_4_ != iVar6));
    }
    plVar1 = (longlong *)(param_1 + 0x578);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x580) * 0x28,
               (longlong)*(int *)(param_1 + 0x584) * 0x28);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x5a0) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x5a4) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x5c0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x588;
    local_68 = 0x100000000;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    uStack_60 = lVar4;
    if (*(int *)(param_1 + 0x5a0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(param_1 + 0x5a0);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78._0_4_ = (uint)local_58;
    local_78._4_4_ = local_58._4_4_;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_90 = plVar1;
    if ((local_58._4_4_ != iVar6) || (uStack_60 != lVar4)) {
      do {
        lVar5 = *(longlong *)(*local_90 + 8 + (longlong)local_78._4_4_ * 0x28);
        if (lVar5 != 0) {
          (**(code **)(*param_2 + 0x10))(param_2,0x888,0x888);
          FUN_147ce0b2a(lVar5,param_2);
        }
        local_78._0_4_ = (uint)local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar4 || local_78._4_4_ != iVar6));
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x5d0) * 0x60,
               (longlong)*(int *)(param_1 + 0x5d4) * 0x60);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x5f0) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x5f4) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x610) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x628) << 4,
               (longlong)*(int *)(param_1 + 0x62c) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x648) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x64c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x668) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    plVar1 = (longlong *)(param_1 + 0x670);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x678) << 4,
               (longlong)*(int *)(param_1 + 0x67c) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x698) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x69c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x6b8) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x680;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar4;
    if (*(int *)(param_1 + 0x698) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(param_1 + 0x698);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar2 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar3 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar6) || (local_78 = uVar2, uStack_60 != lVar4)) {
      do {
        local_78 = uVar2;
        lVar5 = *(longlong *)(*local_90 + (longlong)iVar3 * 0x10);
        if (lVar5 != 0) {
          (**(code **)(*param_2 + 0x10))(param_2,0xe0,0xe0);
          FUN_147a49044(lVar5,param_2);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar3 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar4 || local_78._4_4_ != iVar6));
    }
    if (*(longlong *)(param_1 + 0x858) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,0x280,0x280);
      FUN_147bd5cfa(*(undefined8 *)(param_1 + 0x858),param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd518a FUN_147bd518a body=19 status=ok
// SIG undefined FUN_147bd518a(void)

void FUN_147bd518a(undefined1 *param_1)

{
  *param_1 = DAT_14caf2188;
  DAT_14caf2188 = 1;
  return;
}



// FUNCTION 147bd519e FUN_147bd519e body=9 status=ok
// SIG undefined FUN_147bd519e(void)

void FUN_147bd519e(undefined1 *param_1)

{
  DAT_14caf2188 = *param_1;
  return;
}



// FUNCTION 147bd51b8 FUN_147bd51b8 body=132 status=ok
// SIG undefined FUN_147bd51b8(void)

bool FUN_147bd51b8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14caf2210;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar4 * 4) < 1) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if ((*param_2 != 0) && (((double)param_2[3] != 0.0 || (NAN((double)param_2[3]))))) {
      bVar3 = 1.0 / *(float *)(*param_2 + 0x198) < *(float *)(param_2 + 4);
    }
  }
  return bVar3;
}



// FUNCTION 147bd523c FUN_147bd523c body=117 status=ok
// SIG undefined FUN_147bd523c(void)

undefined8 FUN_147bd523c(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = DAT_14caf2210;
  if (param_2 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar2 = 0;
    }
    else {
      bVar1 = FUN_144a61b4f();
      uVar2 = (ulonglong)(bVar1 ^ 1);
    }
    if (0 < *(int *)(lVar3 + uVar2 * 4)) {
      lVar3 = FUN_140573df4(param_1,param_2);
      if (lVar3 != 0) {
        uVar4 = FUN_147bd51b8();
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 147bd52b2 FUN_147bd52b2 body=115 status=ok
// SIG undefined FUN_147bd52b2(void)

void FUN_147bd52b2(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = DAT_14caf2210;
  if (param_2 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar2 = 0;
    }
    else {
      bVar1 = FUN_144a61b4f();
      uVar2 = (ulonglong)(bVar1 ^ 1);
    }
    if (0 < *(int *)(lVar3 + uVar2 * 4)) {
      lVar3 = FUN_140573df4(param_1,param_2);
      if (lVar3 != 0) {
        FUN_147bd5326();
        return;
      }
    }
  }
  return;
}



// FUNCTION 147bd5326 FUN_147bd5326 body=218 status=ok
// SIG undefined FUN_147bd5326(void)

void FUN_147bd5326(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  lVar1 = DAT_14caf2210;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if ((0 < *(int *)(lVar1 + uVar4 * 4)) && (lVar1 = *param_2, lVar1 != 0)) {
    lVar5 = FUN_1447210f0(lVar1);
    if (lVar5 != 0) {
      fVar8 = 1.0 / *(float *)(lVar1 + 0x198);
      dVar7 = *(double *)(lVar5 + 0x6d0);
      uVar3 = rand();
      dVar6 = (double)(float)((double)((((float)(uVar3 & 0x7fff) / 32767.0) * 0.5 + 0.5) * fVar8) +
                             dVar7);
      dVar7 = (double)param_2[2];
      if (dVar6 <= (double)param_2[2]) {
        dVar7 = dVar6;
      }
      param_2[2] = (longlong)dVar7;
      *(float *)(param_2 + 4) = fVar8;
    }
  }
  return;
}



// FUNCTION 147bd5400 FUN_147bd5400 body=75 status=ok
// SIG undefined FUN_147bd5400(void)

bool FUN_147bd5400(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (lVar2 = FUN_140573df4(), lVar2 != 0)) {
    if ((*(byte *)(lVar2 + 0xd0) & 1) != 0) {
      return true;
    }
    dVar1 = *(double *)(*(longlong *)(param_1 + 0x1a8) + 0x6d0);
    return *(double *)(lVar2 + 0x10) <= dVar1 && dVar1 != *(double *)(lVar2 + 0x10);
  }
  return false;
}



// FUNCTION 147bd544c FUN_147bd544c body=347 status=ok
// SIG undefined FUN_147bd544c(void)

void FUN_147bd544c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10d);
  cVar5 = (**(code **)(*param_1 + 0x3c0))();
  if (cVar5 == '\0') {
    if ((longlong *)param_1[0x1e] == (longlong *)0x0) {
      uVar8 = *(uint *)(param_1 + 0x10d);
      goto LAB_147bd5504;
    }
    fVar11 = (float)(**(code **)(*(longlong *)param_1[0x1e] + 0x3c0))();
    bVar6 = (double)(fVar11 * 0.75) < (double)param_1[0x60] - *(double *)(param_1[0x1e] + 0x1d8);
  }
  else {
    lVar4 = param_1[0x20];
    if ((longlong)(int)lVar4 == 0) {
      iVar7 = 0;
      iVar9 = 0;
    }
    else {
      lVar2 = param_1[0x1f];
      lVar10 = 0;
      iVar9 = 0;
      iVar7 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar10);
        if (plVar3 != (longlong *)0x0) {
          iVar9 = iVar9 + 1;
          fVar11 = (float)(**(code **)(*plVar3 + 0x3c0))(plVar3);
          iVar7 = iVar7 + (uint)((double)(fVar11 * 0.75) <
                                (double)param_1[0x60] - (double)plVar3[0x3b]);
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar10);
    }
    bVar6 = iVar9 == iVar7 && 1 < iVar9;
  }
  uVar8 = (uint)bVar6;
  *(uint *)(param_1 + 0x10d) = (uint)bVar6;
LAB_147bd5504:
  if (uVar1 == uVar8) {
    return;
  }
  FUN_147bddd30(DAT_14cb0d2b0 + 0xee0,param_1[0x35],param_1);
  return;
}



// FUNCTION 147bd55a8 FUN_147bd55a8 body=322 status=ok
// SIG undefined FUN_147bd55a8(void)

void FUN_147bd55a8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0x100)) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar6 * 8);
      if ((lVar3 != param_3) && ((*(byte *)(param_1 + 0x30a) & 1) == 0)) {
        (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_58);
        cVar4 = FUN_147bcd3ac(lVar3,local_58);
        plVar5 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          plVar5 = (longlong *)FUN_147bcd080(lVar3);
          if (plVar5 != (longlong *)0x0) {
            local_68 = *param_2;
            local_60 = param_2[1];
            if (local_60 != 0) {
              LOCK();
              *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar5 + 0x350))(plVar5,&local_68);
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x100));
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd56ec FUN_147bd56ec body=117 status=ok
// SIG undefined FUN_147bd56ec(void)

undefined8 * FUN_147bd56ec(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_147be8cf0(*(longlong *)(param_1 + 0x310),&local_28);
    if ((undefined8 *)&local_28 == param_2) {
      if (CONCAT44(uStack_24,local_28) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)param_2 = local_28;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_24;
      *(undefined4 *)(param_2 + 1) = uStack_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd5762 FUN_147bd5762 body=75 status=ok
// SIG undefined FUN_147bd5762(void)

void FUN_147bd5762(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x840) != 0) {
    FUN_142a9d7b4();
  }
  *(longlong *)(param_1 + 0x840) = param_2;
  if (param_2 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_2 + 0x48);
  FUN_147bd684e(*(undefined8 *)(param_1 + 0x1a8));
  return;
}



// FUNCTION 147bd57ae FUN_147bd57ae body=678 status=ok
// SIG undefined FUN_147bd57ae(void)

void FUN_147bd57ae(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  char cVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong *local_80;
  longlong *local_78;
  undefined1 local_6c [4];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  lVar4 = DAT_14caf2288;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[0x33] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar5 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar5 ^ 1);
    }
    if (*(char *)(lVar4 + uVar7) == '\x01') {
      FUN_1400021e4(param_1 + 0x40,local_90);
      FUN_140056680(local_a0,L"NetDriverName");
      plVar3 = param_1 + 0x90;
      local_80 = local_a0;
      local_78 = local_90;
      FUN_140ac5c08(plVar3,local_6c,&local_80,0);
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(param_1 + 0x4f,local_90);
      FUN_140056680(local_a0,L"NetDriverDefinition");
      local_80 = local_a0;
      local_78 = local_90;
      FUN_140ac5c08(plVar3,local_6c,&local_80,0);
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      FUN_145d04a4c(param_1,local_90);
      FUN_140056680(local_a0,L"ReplicationModel");
      local_80 = local_a0;
      local_78 = local_90;
      FUN_140ac5c08(plVar3,local_6c,&local_80,0);
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      cVar6 = (**(code **)(*param_1 + 0x3c0))(param_1);
      cVar8 = '\x03';
      if (cVar6 != '\0') {
        cVar8 = (DAT_14c86a9f0 & 1) + 1;
      }
      FUN_147dab5d1(local_90,cVar8);
      FUN_140056680(local_a0,L"NetMode");
      local_80 = local_a0;
      local_78 = local_90;
      FUN_140ac5c08(plVar3,local_6c,&local_80,0);
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
    }
    local_58 = 0;
    local_48 = &PTR_LAB_14a9eece0;
    local_68 = FUN_1435a4b3c;
    local_40 = param_1;
    FUN_146efa8c0(param_1[0x33]);
    FUN_146efa7b8(param_1[0x33]);
    param_1[0x33] = 0;
    plVar3 = (longlong *)param_1[0x34];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x34] = 0;
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
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd5a56 FUN_147bd5a56 body=674 status=ok
// SIG undefined FUN_147bd5a56(void)

void FUN_147bd5a56(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  lVar7 = param_2[1];
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 400);
  *(longlong *)(param_1 + 0x188) = lVar5;
  *(longlong *)(param_1 + 400) = lVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x188);
  }
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    plVar3 = *(longlong **)(param_1 + 0x1a0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    goto LAB_147bd5ae0;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142a6214a();
    goto LAB_147bd5ae0;
  }
  lVar5 = FUN_14001cc68(0x160,0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x278);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_146efa604(lVar5,&local_38,uVar4);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a9eed00;
  plVar6[2] = lVar5;
  *(longlong *)(param_1 + 0x198) = lVar5;
  plVar3 = *(longlong **)(param_1 + 0x1a0);
  if (plVar6 == plVar3) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar3 = plVar6;
        goto joined_r0x000147bd5cdd;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x1a0) = plVar6;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000147bd5cdd:
        if (iVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  thunk_FUN_142a6214a(*(undefined8 *)(param_1 + 0x198));
LAB_147bd5ae0:
  lVar5 = *(longlong *)(param_1 + 0x170);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x198);
    local_40 = *(longlong *)(param_1 + 0x1a0);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_1 + 0x188);
    local_50 = *(longlong *)(param_1 + 400);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_147079830(lVar5,&local_58,&local_48);
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x368))();
  }
  iVar2 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xf8);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar5 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x368))();
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd5cfa FUN_147bd5cfa body=2366 status=ok
// SIG undefined FUN_147bd5cfa(void)

void FUN_147bd5cfa(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[0xb] * 0x18,
             (longlong)*(int *)((longlong)param_1 + 0x5c) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)param_1[0xf] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_1 + 0x7c) + 0x1fU >> 3 & 0xfffffffc);
  lVar4 = (longlong)(int)param_1[0x13] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[0x15] * 0x18,
             (longlong)*(int *)((longlong)param_1 + 0xac) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)param_1[0x19] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_1 + 0xcc) + 0x1fU >> 3 & 0xfffffffc);
  lVar4 = (longlong)(int)param_1[0x1d] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[0x29] * 0x14,
             (longlong)*(int *)((longlong)param_1 + 0x14c) * 0x14);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)param_1[0x2d] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_1 + 0x16c) + 0x1fU >> 3 & 0xfffffffc);
  lVar4 = (longlong)(int)param_1[0x31] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  plVar8 = param_1 + 0x32;
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[0x33] * 0x60,
             (longlong)*(int *)((longlong)param_1 + 0x19c) * 0x60);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)param_1[0x37] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_1 + 0x1bc) + 0x1fU >> 3 & 0xfffffffc);
  lVar4 = (longlong)(int)param_1[0x3b] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  plVar1 = param_1 + 0x34;
  local_b8 = (longlong *)0x100000000;
  local_a8._0_4_ = 0xffffffff;
  local_a8._4_4_ = 0;
  uStack_a0._0_4_ = 0;
  uStack_b0 = plVar1;
  if ((int)param_1[0x37] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar6 = (int)param_1[0x37];
  }
  local_78._0_4_ = (uint)local_a8;
  local_78._4_4_ = local_a8._4_4_;
  uStack_70._0_4_ = (uint)uStack_a0;
  uStack_70._4_4_ = uStack_a0._4_4_;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = plVar8;
  if ((local_a8._4_4_ != iVar6) || (uStack_b0 != plVar1)) {
    do {
      lVar4 = *local_90;
      lVar7 = (longlong)local_78._4_4_ * 0x60;
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar4 + 0x10 + lVar7) * 0x18,
                 (longlong)*(int *)(lVar4 + 0x14 + lVar7) * 0x18);
      (**(code **)(*param_2 + 0x10))
                (param_2,*(int *)(lVar4 + 0x30 + lVar7) + 0x1fU >> 3 & 0xfffffffc,
                 *(int *)(lVar4 + 0x34 + lVar7) + 0x1fU >> 3 & 0xfffffffc);
      lVar4 = (longlong)*(int *)(lVar4 + 0x50 + lVar7) << 2;
      (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
      local_78._0_4_ = (uint)local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar8 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar6));
  }
  local_d0 = param_1 + 0x3c;
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[0x3d] * 0x60,
             (longlong)*(int *)((longlong)param_1 + 0x1ec) * 0x60);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)param_1[0x41] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_1 + 0x20c) + 0x1fU >> 3 & 0xfffffffc);
  lVar4 = (longlong)(int)param_1[0x45] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  local_c8 = param_1 + 0x3e;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0._0_4_ = 0;
  local_c0 = param_1;
  uStack_b0 = local_c8;
  if ((int)param_1[0x41] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar6 = (int)param_1[0x41];
  }
  local_78 = local_a8;
  lVar4 = local_78;
  uStack_70._0_4_ = (uint)uStack_a0;
  uStack_70._4_4_ = uStack_a0._4_4_;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = local_d0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  if ((local_78._4_4_ != iVar6) || (uStack_b0 != local_c8)) {
    iVar3 = local_78._4_4_;
    local_78 = lVar4;
    do {
      lVar4 = *local_90;
      lVar9 = (longlong)iVar3 * 0x60 + 0x18 + lVar4;
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar9 + -8) * 0x60,(longlong)*(int *)(lVar9 + -4) * 0x60
                );
      (**(code **)(*param_2 + 0x10))
                (param_2,*(int *)(lVar9 + 0x18) + 0x1fU >> 3 & 0xfffffffc,
                 *(int *)(lVar9 + 0x1c) + 0x1fU >> 3 & 0xfffffffc);
      lVar7 = (longlong)*(int *)(lVar9 + 0x38) << 2;
      (**(code **)(*param_2 + 0x10))(param_2,lVar7,lVar7);
      local_68 = (longlong *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_54 = 0;
      local_50 = 0;
      local_60 = lVar9;
      if (*(int *)(lVar9 + 0x18) != 0) {
        FUN_1449c0562(&local_68);
      }
      lVar4 = lVar4 + (longlong)iVar3 * 0x60;
      plVar8 = (longlong *)(lVar4 + 8);
      uStack_a0._0_4_ = local_58;
      uStack_a0._4_4_ = uStack_54;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar5 = *(uint *)(lVar4 + 0x30);
      local_68 = (longlong *)CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
      _local_58 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
      local_50 = uVar5 & 0xffffffe0;
      local_b8 = plVar8;
      local_60 = lVar9;
      if (*(uint *)(lVar4 + 0x30) != uVar5) {
        FUN_1449c0562(&local_68);
        uVar5 = uStack_54;
      }
      lVar4 = local_60;
      if ((local_b8 != plVar8 || local_a8 != local_60) || uStack_a0._4_4_ != uVar5) {
        do {
          lVar7 = *local_b8;
          lVar9 = (longlong)(int)uStack_a0._4_4_ * 0x60;
          (**(code **)(*param_2 + 0x10))
                    (param_2,(longlong)*(int *)(lVar7 + 0x10 + lVar9) * 0x18,
                     (longlong)*(int *)(lVar7 + 0x14 + lVar9) * 0x18);
          (**(code **)(*param_2 + 0x10))
                    (param_2,*(int *)(lVar7 + 0x30 + lVar9) + 0x1fU >> 3 & 0xfffffffc,
                     *(int *)(lVar7 + 0x34 + lVar9) + 0x1fU >> 3 & 0xfffffffc);
          lVar7 = (longlong)*(int *)(lVar7 + 0x50 + lVar9) << 2;
          (**(code **)(*param_2 + 0x10))(param_2,lVar7,lVar7);
          uStack_a0._0_4_ = (uint)uStack_a0 & ~uStack_b0._4_4_;
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != plVar8 || (local_a8 != lVar4 || uStack_a0._4_4_ != uVar5));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar3 = local_78._4_4_;
      lVar4 = local_78;
    } while (local_90 != local_d0 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_c8 || local_78._4_4_ != iVar6));
  }
  local_78 = lVar4;
  plVar1 = local_c0;
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)local_c0[1] * 0x18,
             (longlong)*(int *)((longlong)local_c0 + 0xc) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)plVar1[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)plVar1 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  lVar4 = (longlong)(int)plVar1[9] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  plVar8 = plVar1 + 2;
  local_b8 = (longlong *)0x100000000;
  local_a8._0_4_ = 0xffffffff;
  local_a8._4_4_ = 0;
  uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
  uStack_b0 = plVar8;
  if ((int)plVar1[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar6 = (int)plVar1[5];
  }
  local_78._0_4_ = (uint)local_a8;
  local_78._4_4_ = local_a8._4_4_;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = plVar1;
  if ((local_a8._4_4_ != iVar6) || (uStack_b0 != plVar8)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)local_78._4_4_ * 0x18);
      if (lVar4 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2,0xd8,0xd8);
        FUN_147bd722e(lVar4,param_2);
      }
      local_78._0_4_ = (uint)local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar8 || local_78._4_4_ != iVar6));
  }
  plVar8 = plVar1 + 0x46;
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)plVar1[0x47] * 0x78,
             (longlong)*(int *)((longlong)plVar1 + 0x23c) * 0x78);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)plVar1[0x4b] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)plVar1 + 0x25c) + 0x1fU >> 3 & 0xfffffffc);
  lVar4 = (longlong)(int)plVar1[0x4f] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  plVar2 = plVar1 + 0x48;
  local_b8 = (longlong *)0x100000000;
  local_a8._0_4_ = 0xffffffff;
  local_a8._4_4_ = 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_b0 = plVar2;
  if ((int)plVar1[0x4b] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar6 = (int)plVar1[0x4b];
  }
  local_78._0_4_ = (uint)local_a8;
  local_78._4_4_ = local_a8._4_4_;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = plVar8;
  if ((local_a8._4_4_ != iVar6) || (uStack_b0 != plVar2)) {
    do {
      FUN_147bd6ff8((longlong)local_78._4_4_ * 0x78 + *local_90,param_2);
      local_78._0_4_ = (uint)local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar8 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || local_78._4_4_ != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bd663a FUN_147bd663a body=61 status=ok
// SIG undefined FUN_147bd663a(void)

undefined8 FUN_147bd663a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x7c0);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2,1);
  }
  return param_2;
}



// FUNCTION 147bd6678 FUN_147bd6678 body=66 status=ok
// SIG undefined FUN_147bd6678(void)

longlong FUN_147bd6678(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x808);
  if (lVar1 != 0) {
    lVar2 = FUN_145b58a4c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147bd66ce FUN_147bd66ce body=136 status=ok
// SIG undefined FUN_147bd66ce(void)

void FUN_147bd66ce(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x50) & 1) != 0)) {
    bVar1 = *(byte *)(param_2 + 0x179);
    lVar2 = FUN_146f23e78();
    if (lVar2 != 0) {
      FUN_146f33cf2(lVar2,&local_30,param_2,0);
      if (local_30 != 0) {
        FUN_142a882b4(lVar2,local_30,1 < bVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd6757 FUN_147bd6757 body=175 status=ok
// SIG undefined FUN_147bd6757(void)

undefined8 FUN_147bd6757(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14486dd68();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd6808 FUN_147bd6808 body=70 status=ok
// SIG undefined FUN_147bd6808(void)

void FUN_147bd6808(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3c0))();
  if (cVar1 != '\0') {
    FUN_14081b550(param_1,param_2);
    FUN_14081b1b4(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147bd684e FUN_147bd684e body=202 status=ok
// SIG undefined FUN_147bd684e(void)

void FUN_147bd684e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [28];
  char local_54;
  longlong *local_48;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x153) & 0x40) != 0)) {
    FUN_1405f0e9c(local_78,param_1,5);
    if (local_54 == '\0') {
      do {
        plVar1 = local_48;
        if (((local_48 != (longlong *)0x0) && ((*(uint *)(local_48 + 1) >> 0x1e & 1) == 0)) &&
           ((*(byte *)((longlong)local_48 + 0x65) & 0x18) == 0x10)) {
          cVar2 = FUN_140174dd2(local_48);
          if (cVar2 != '\0') {
            (**(code **)(*plVar1 + 0x4f8))(plVar1);
          }
        }
        FUN_14059e512(local_78);
      } while (local_54 == '\0');
    }
    if (local_20 == '\x01') {
      FUN_14024445c(local_70);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd691a FUN_147bd691a body=113 status=ok
// SIG undefined FUN_147bd691a(void)

longlong FUN_147bd691a(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if ((lVar2 == 0) ||
     (*(ulonglong *)(lVar2 + 0x1d2c) >> 0x20 != 0 || (int)*(ulonglong *)(lVar2 + 0x1d2c) != param_2)
     ) {
    if ((longlong)*(int *)(param_1 + 0x100) != 0) {
      lVar2 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar2);
        if ((lVar1 != 0) &&
           (*(ulonglong *)(lVar1 + 0x1d2c) >> 0x20 == 0 &&
            (int)*(ulonglong *)(lVar1 + 0x1d2c) == param_2)) {
          return lVar1;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(param_1 + 0x100) * 8 != lVar2);
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147bd698c FUN_147bd698c body=499 status=ok
// SIG undefined FUN_147bd698c(void)

void FUN_147bd698c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x840) != 0) &&
     (cVar5 = FUN_146f45da0(*(longlong *)(param_1 + 0x840),param_3), cVar5 != '\0')) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18);
    lVar6 = FUN_144a79778(param_2);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      bVar14 = false;
    }
    else {
      bVar14 = *(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x30) == param_2;
    }
    lVar6 = *(longlong *)(lVar6 + 0x18);
    local_38 = FUN_146f46332(*(undefined8 *)(param_1 + 0x840));
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_146f14ba4(local_48,local_38);
    if ((longlong)*(int *)(param_1 + 0x100) != 0) {
      plVar7 = *(longlong **)(param_1 + 0xf8);
      plVar1 = plVar7 + *(int *)(param_1 + 0x100);
      uVar4 = (uint)((ulonglong)lVar6 >> 0x10);
      uVar9 = (uint)lVar6 & 0xffff;
      do {
        lVar3 = *plVar7;
        if ((bVar14) && (lVar2 == *(longlong *)(lVar3 + 0x1800))) {
LAB_147bd6a97:
          uVar8 = (uint)*(undefined8 *)(lVar3 + 0x1d2c);
          uVar10 = 1 << ((byte)*(undefined8 *)(lVar3 + 0x1d2c) & 0x1f);
          uVar11 = uVar10;
        }
        else {
          if (*(int *)(lVar3 + 0x1678) != *(int *)(lVar3 + 0x16a4)) {
            lVar12 = lVar3 + 0x16a8;
            if (*(longlong *)(lVar3 + 0x16b0) != 0) {
              lVar12 = *(longlong *)(lVar3 + 0x16b0);
            }
            iVar13 = *(int *)(lVar12 + (ulonglong)
                                       (*(int *)(lVar3 + 0x16b8) - 1U &
                                       ((uint)lVar6 << 0x10 | uVar9) +
                                       (int)((ulonglong)lVar6 >> 0x20) +
                                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
            if (iVar13 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0x1670) + (longlong)iVar13 * 0x10) == lVar6)
                goto LAB_147bd6a97;
                iVar13 = *(int *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar3 + 0x1670) + 8);
              } while (iVar13 != -1);
            }
          }
          uVar8 = (uint)*(undefined8 *)(lVar3 + 0x1d2c);
          uVar11 = 1 << ((byte)*(undefined8 *)(lVar3 + 0x1d2c) & 0x1f);
          uVar10 = 0;
        }
        *(uint *)(local_48[0] + (ulonglong)(uVar8 >> 5) * 4) =
             ~uVar11 & *(uint *)(local_48[0] + (ulonglong)(uVar8 >> 5) * 4) | uVar10;
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    FUN_146f460aa(*(undefined8 *)(param_1 + 0x840),param_3,local_48,1);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bd6b80 FUN_147bd6b80 body=185 status=ok
// SIG undefined FUN_147bd6b80(void)

undefined8 FUN_147bd6b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
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



// FUNCTION 147bd6c3a FUN_147bd6c3a body=196 status=ok
// SIG undefined FUN_147bd6c3a(void)

void FUN_147bd6c3a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x5f8) + 0xa8,param_1);
    FUN_140457ffc(*(longlong *)(param_1 + 0x5f8) + 0x2e0,param_1);
  }
  *(longlong *)(param_1 + 0x5f8) = param_2;
  if (param_2 == 0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  iVar1 = 0;
  if (0 < *(int *)(param_2 + 0xa0)) {
    iVar1 = *(int *)(param_2 + 0xa0);
  }
  *(float *)(param_1 + 0x1e0) = (float)iVar1;
  FUN_147bd8a68(param_2 + 0xa8,local_20,param_1);
  FUN_147bd8b7c(param_2 + 0x2e0,local_20,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 147bd6d0c FUN_147bd6d0c body=407 status=ok
// SIG undefined FUN_147bd6d0c(void)

undefined8 * FUN_147bd6d0c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  FUN_14485c47a(&local_58,param_3);
  if (*(int *)(param_1 + 0x530) != *(int *)(param_1 + 0x55c)) {
    lVar5 = param_1 + 0x560;
    if (*(longlong *)(param_1 + 0x568) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x568);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x570) - 1U &
                             ((uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x528);
      do {
        lVar3 = lVar5 + (longlong)iVar4 * 0x20;
        if (*(longlong *)(lVar5 + (longlong)iVar4 * 0x20) == local_58) {
          if (lVar3 != 0) goto LAB_147bd6df5;
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  FUN_147ce145e(local_68,param_3,*(undefined8 *)(param_1 + 0xf0),*(byte *)(param_1 + 0x309) >> 3 & 1
               );
  local_70 = 0;
  FUN_14485c47a(&local_70,param_3);
  local_50 = &local_70;
  local_48 = local_68;
  FUN_140b97814((longlong *)(param_1 + 0x528),&local_3c);
  lVar3 = *(longlong *)(param_1 + 0x528);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  lVar3 = lVar3 + (longlong)local_3c * 0x20;
LAB_147bd6df5:
  *param_2 = *(undefined8 *)(lVar3 + 8);
  lVar5 = *(longlong *)(lVar3 + 0x10);
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bd6ea4 FUN_147bd6ea4 body=185 status=ok
// SIG undefined FUN_147bd6ea4(void)

undefined8 FUN_147bd6ea4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
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



// FUNCTION 147bd6f5e FUN_147bd6f5e body=153 status=ok
// SIG undefined FUN_147bd6f5e(void)

undefined4 FUN_147bd6f5e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar2 = FUN_1456e7ac6((longlong *)(param_1 + 0x140),
                        (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 0x14;
    puVar4 = (undefined4 *)(lVar1 + 8);
    uVar3 = 0;
    if (puVar4 != (undefined4 *)0x0 && lVar1 != 0) {
      uVar3 = *puVar4;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd6ff8 FUN_147bd6ff8 body=145 status=ok
// SIG undefined FUN_147bd6ff8(void)

void FUN_147bd6ff8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x10) * 0x14,
             (longlong)*(int *)(param_1 + 0x14) * 0x14);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x30) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x34) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x50) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000147bd7086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x60) * 0xc,
             (longlong)*(int *)(param_1 + 100) * 0xc);
  return;
}



// FUNCTION 147bd708a FUN_147bd708a body=166 status=ok
// SIG undefined FUN_147bd708a(void)

void FUN_147bd708a(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((param_2 != 0) && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    uVar2 = ((uint)(uint7)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
        puVar1 = (ulonglong *)*plVar3;
        if (*puVar1 == param_2) {
          if (puVar1 == (ulonglong *)0x0 || plVar3 == (longlong *)0x0) {
            return;
          }
          *(byte *)(puVar1 + 0x1a) = (byte)puVar1[0x1a] | 2;
          return;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 147bd7130 FUN_147bd7130 body=252 status=ok
// SIG undefined FUN_147bd7130(void)

void FUN_147bd7130(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = param_1 + 2;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_30);
  }
  local_48 = local_20;
  iStack_44 = iStack_1c;
  local_40 = local_18;
  local_3c = local_14;
  local_58 = local_30;
  local_50 = local_28;
  local_60 = param_1;
  local_38 = param_1;
  if (iStack_1c < (int)local_28[3]) {
    do {
      lVar2 = *(longlong *)(*local_60 + (longlong)iStack_44 * 0x18);
      if (lVar2 != 0) {
        pbVar1 = (byte *)(lVar2 + 0xd0);
        *pbVar1 = *pbVar1 & 0xfd;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd722e FUN_147bd722e body=201 status=ok
// SIG undefined FUN_147bd722e(void)

void FUN_147bd722e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x38) << 4,(longlong)*(int *)(param_1 + 0x3c) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x58) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x5c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x78) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x88) << 4,(longlong)*(int *)(param_1 + 0x8c) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0xa8) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xac) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 200) << 2;
                    /* WARNING: Could not recover jumptable at 0x000147bd72f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 147bd72f8 FUN_147bd72f8 body=956 status=ok
// SIG undefined FUN_147bd72f8(void)

void FUN_147bd72f8(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar8 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1c4)) {
    lVar4 = *param_3;
    uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar5 = (uint)lVar4 & 0xffff;
    lVar3 = param_1 + 0x1c8;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1d0);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x1d8) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 400) + (longlong)iVar7 * 0x60;
        if (*(longlong *)(*(longlong *)(param_1 + 400) + (longlong)iVar7 * 0x60) == lVar4) {
          if (lVar3 != -8 && lVar3 != 0) {
            FUN_147bd76b6(local_88);
          }
          break;
        }
        iVar7 = *(int *)(lVar3 + 0x58);
      } while (iVar7 != -1);
    }
  }
  iVar7 = 0;
  if (param_2 != 0) {
    local_d0 = (longlong *)0x0;
    FUN_14485c47a(&local_d0,param_2);
    uVar8 = (ulonglong)local_d0 & 0xffffffff;
    iVar7 = local_d0._4_4_;
  }
  uVar1 = FUN_144a78877(uVar8,iVar7);
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
    lVar4 = param_1 + 0x218;
    if (*(longlong *)(param_1 + 0x220) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x220);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x228) - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x1e0);
      do {
        lVar6 = (longlong)iVar2 * 0x60;
        lVar3 = lVar4 + lVar6;
        if ((*(int *)(lVar4 + lVar6) == (int)uVar8) && (*(int *)(lVar4 + 4 + lVar6) == iVar7)) {
          if (((longlong *)(lVar3 + 8) != (longlong *)0x0 && lVar3 != 0) &&
             (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c))) {
            lVar4 = *param_3;
            uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
            uVar5 = (uint)lVar4 & 0xffff;
            lVar6 = lVar3 + 0x40;
            if (*(longlong *)(lVar3 + 0x48) != 0) {
              lVar6 = *(longlong *)(lVar3 + 0x48);
            }
            iVar7 = *(int *)(lVar6 + (ulonglong)
                                     (*(int *)(lVar3 + 0x50) - 1U &
                                     (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar5)
                                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
            if (iVar7 != -1) {
              lVar3 = *(longlong *)(lVar3 + 8);
              goto LAB_147bd766d;
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x58);
      } while (iVar2 != -1);
    }
  }
  goto LAB_147bd73bd;
  while (iVar7 = *(int *)(lVar6 + 0x58), iVar7 != -1) {
LAB_147bd766d:
    lVar6 = lVar3 + (longlong)iVar7 * 0x60;
    if (*(longlong *)(lVar3 + (longlong)iVar7 * 0x60) == lVar4) {
      if (lVar6 != -8 && lVar6 != 0) {
        FUN_147bd76b6(local_88);
      }
      break;
    }
  }
LAB_147bd73bd:
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  uStack_a0 = local_78;
  if (local_60 == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar7 = local_60;
  }
  uStack_b0 = CONCAT44(uStack_8c,uStack_90);
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_c8 = (undefined4)local_a8;
  uStack_c4 = local_a8._4_4_;
  uStack_c0 = (undefined4)uStack_a0;
  uStack_bc = uStack_a0._4_4_;
  local_d0 = local_88;
  if ((iStack_94 != iVar7) || (uStack_a0 != local_78)) {
    do {
      FUN_140b95694(param_1,(longlong)iStack_b4 * 0x18 + *local_d0,param_2);
      local_b8 = local_b8 & ~uStack_c4;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != local_88 ||
             ((undefined1 *)CONCAT44(uStack_bc,uStack_c0) != local_78 || iStack_b4 != iVar7));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_141355aac(local_88);
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bd76b6 FUN_147bd76b6 body=356 status=ok
// SIG undefined FUN_147bd76b6(void)

void FUN_147bd76b6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_147be2092(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140ae3646(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_140ae3264(param_1,&local_50,(longlong)iStack_5c * 0x18 + *local_78);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd781c FUN_147bd781c body=64 status=ok
// SIG undefined FUN_147bd781c(void)

void FUN_147bd781c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1403ccae8(param_1 + 8);
  return;
}



// FUNCTION 147bd785c FUN_147bd785c body=172 status=ok
// SIG undefined FUN_147bd785c(void)

void FUN_147bd785c(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x230);
  local_30 = param_2;
  FUN_1403cc940(plVar1,&local_34);
  if ((longlong)local_34 != -1) {
    lVar2 = (longlong)local_34 * 0x78 + *plVar1;
    if ((longlong)*(int *)(param_3 + 8) != 0) {
      lVar3 = (longlong)*(int *)(param_3 + 8) << 3;
      do {
        FUN_147bd790a();
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    if ((*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c)) && (*(int *)(lVar2 + 0x60) == 0)) {
      FUN_1403cca3c(plVar1,local_34);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd790a FUN_147bd790a body=192 status=ok
// SIG undefined FUN_147bd790a(void)

ulonglong FUN_147bd790a(undefined8 param_1,longlong param_2,int *param_3)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  int iVar8;
  
  if ((longlong)*(int *)(param_2 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x58);
    lVar6 = 0;
    do {
      if ((*(int *)(lVar2 + lVar6) == *param_3) && (*(int *)(lVar2 + 4 + lVar6) == param_3[1])) {
        uVar4 = (int)(lVar6 >> 2) * -0x55555555;
        if (uVar4 != 0xffffffff) {
          psVar1 = (short *)(lVar2 + 8 + (longlong)(int)uVar4 * 0xc);
          *psVar1 = *psVar1 + -1;
          uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
          if (*psVar1 == 0) {
            iVar3 = *(int *)(param_2 + 0x60);
            iVar5 = ~uVar4 + iVar3;
            if (iVar5 != 0) {
              iVar8 = 1;
              if (iVar5 < 1) {
                iVar8 = iVar5;
              }
              memmove((void *)(*(longlong *)(param_2 + 0x58) + (longlong)(int)uVar4 * 0xc),
                      (void *)(*(longlong *)(param_2 + 0x58) + (longlong)(iVar3 - iVar8) * 0xc),
                      (longlong)iVar8 * 0xc);
              iVar3 = *(int *)(param_2 + 0x60);
            }
            *(int *)(param_2 + 0x60) = iVar3 + -1;
            FUN_147be222e(param_2 + 0x58);
          }
          goto LAB_147bd794d;
        }
        break;
      }
      lVar6 = lVar6 + 0xc;
    } while ((longlong)*(int *)(param_2 + 0x60) * 0xc != lVar6);
  }
  uVar7 = 0;
LAB_147bd794d:
  return uVar7 & 0xffffffff;
}



// FUNCTION 147bd79ca FUN_147bd79ca body=198 status=ok
// SIG undefined FUN_147bd79ca(void)

void FUN_147bd79ca(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)(param_1 + 0x230);
  local_30 = 0;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_30 = local_28;
  }
  FUN_1403cc940(plVar3,&local_28,&local_30);
  if ((longlong)(int)local_28 != -1) {
    lVar2 = (longlong)(int)local_28 * 0x78 + *plVar3;
    cVar1 = FUN_1403cc77c();
    if (cVar1 == '\0') {
      FUN_147bd790a();
    }
    if ((*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c)) && (*(int *)(lVar2 + 0x60) == 0)) {
      FUN_1403cca3c(plVar3,local_28 & 0xffffffff);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd7aa6 FUN_147bd7aa6 body=104 status=ok
// SIG undefined FUN_147bd7aa6(void)

void FUN_147bd7aa6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf2560) {
    FUN_144b3d300(&DAT_14caf2560);
    if (DAT_14caf2560 == -1) {
      FUN_1446f470e(&DAT_14caf2558,L"BandwidthGenerator",1);
      _Init_thread_footer(&DAT_14caf2560);
      return;
    }
  }
  return;
}



// FUNCTION 147bd7b0e FUN_147bd7b0e body=140 status=ok
// SIG undefined FUN_147bd7b0e(void)

void FUN_147bd7b0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"BandwidthGenerator",1);
  uVar1 = FUN_145b58c20();
  FUN_145b58c20();
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



// FUNCTION 147bd7b9c FUN_147bd7b9c body=124 status=ok
// SIG undefined FUN_147bd7b9c(void)

void FUN_147bd7b9c(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  if (param_2 <= 0.0) {
    iVar1 = 0;
  }
  else {
    fVar2 = (float)(**(code **)(*DAT_14cb0d2b0 + 0x2f8))(DAT_14cb0d2b0,0,0);
    if (fVar2 <= 0.0) {
      return;
    }
    iVar1 = (int)((param_2 / fVar2) * 1000.0);
  }
  FUN_147bd7c18(param_1 + 0x390,iVar1);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  return;
}



// FUNCTION 147bd7c18 FUN_147bd7c18 body=426 status=ok
// SIG undefined FUN_147bd7c18(void)

void FUN_147bd7c18(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  uVar8 = param_2 % 1000;
  FUN_147bd7e92();
  if ((longlong)(int)param_1[1] != 0) {
    plVar6 = (longlong *)*param_1;
    plVar10 = plVar6 + (longlong)(int)param_1[1] * 2;
    do {
      iVar4 = *(int *)((longlong)plVar6 + 0xc);
      iVar5 = 0;
      if (iVar4 < 1000) {
        *(undefined4 *)(plVar6 + 1) = 0;
        FUN_144893a1c(plVar6,1000);
        iVar5 = (int)plVar6[1];
        iVar4 = *(int *)((longlong)plVar6 + 0xc);
      }
      iVar7 = iVar5 + 1000;
      *(int *)(plVar6 + 1) = iVar7;
      if ((uint)(iVar4 - iVar5) < 1000) {
        FUN_1447403be(plVar6);
        iVar7 = (int)plVar6[1];
      }
      if (iVar7 != 0) {
        lVar1 = *plVar6;
        lVar9 = 0;
        do {
          uVar3 = rand();
          iVar4 = (int)(((float)(uVar3 & 0x7fff) / 32767.0) * 255.0);
          uVar2 = (undefined1)iVar4;
          if (0xfd < iVar4) {
            uVar2 = 0xfe;
          }
          *(undefined1 *)(lVar1 + lVar9) = uVar2;
          lVar9 = lVar9 + 1;
        } while (iVar7 != lVar9);
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar10);
  }
  if (0 < (int)uVar8) {
    plVar6 = (longlong *)FUN_147bd7f0c(param_1);
    lVar1 = plVar6[1];
    iVar4 = (int)lVar1 + uVar8;
    *(int *)(plVar6 + 1) = iVar4;
    if ((uint)(*(int *)((longlong)plVar6 + 0xc) - (int)lVar1) < uVar8) {
      FUN_1447403be(plVar6);
      iVar4 = (int)plVar6[1];
    }
    if (iVar4 != 0) {
      lVar1 = *plVar6;
      lVar9 = 0;
      do {
        uVar8 = rand();
        iVar5 = (int)(((float)(uVar8 & 0x7fff) / 32767.0) * 255.0);
        uVar2 = (undefined1)iVar5;
        if (0xfd < iVar5) {
          uVar2 = 0xfe;
        }
        *(undefined1 *)(lVar1 + lVar9) = uVar2;
        lVar9 = lVar9 + 1;
      } while (iVar4 != lVar9);
    }
  }
  return;
}



// FUNCTION 147bd7dc2 FUN_147bd7dc2 body=206 status=ok
// SIG undefined FUN_147bd7dc2(void)

void FUN_147bd7dc2(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 < 1 || param_2 <= 0.0) {
    FUN_147bd7c18(param_1 + 0x390,0);
    dVar2 = 0.0;
    lVar1 = 0x3a8;
  }
  else {
    FUN_147bd7c18(param_1 + 0x390,(int)(param_2 * 1000.0));
    *(double *)(param_1 + 0x3a8) = (double)param_3 / 1000.0;
    dVar2 = 0.0;
    lVar1 = 0x3a0;
    if (0.0 < (double)param_3 / 1000.0) {
      QueryPerformanceCounter(&local_28);
      dVar2 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0 + *(double *)(param_1 + 0x3a8);
    }
  }
  *(double *)(param_1 + lVar1) = dVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd7e92 FUN_147bd7e92 body=121 status=ok
// SIG undefined FUN_147bd7e92(void)

void FUN_147bd7e92(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147be22f0(param_1,iVar1);
    }
    FUN_147be22dc((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147be2376(param_1,param_2,iVar1 - param_2);
    FUN_147be23d0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bd7f0c FUN_147bd7f0c body=64 status=ok
// SIG undefined FUN_147bd7f0c(void)

longlong FUN_147bd7f0c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147be22f0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_147be22dc(lVar2,1);
  return lVar2;
}



// FUNCTION 147bd7f4c FUN_147bd7f4c body=248 status=ok
// SIG undefined FUN_147bd7f4c(void)

void FUN_147bd7f4c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    if (0.0 < (double)param_1[3]) {
      QueryPerformanceCounter(&local_30);
      if ((double)local_30.QuadPart * DAT_14c83f420 + 16777216.0 < (double)param_1[2])
      goto LAB_147bd8024;
      dVar4 = 0.0;
      if (0.0 < (double)param_1[3]) {
        QueryPerformanceCounter(&local_30);
        dVar4 = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0 + (double)param_1[3];
      }
      param_1[2] = (longlong)dVar4;
    }
    lVar2 = param_1[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_1;
      lVar3 = 0;
      do {
        (**(code **)(*(longlong *)*param_2 + 0x170))
                  ((longlong *)*param_2,*(undefined8 *)(lVar1 + lVar3),
                   *(undefined4 *)(lVar1 + 8 + lVar3));
        lVar3 = lVar3 + 0x10;
      } while ((longlong)(int)lVar2 * 0x10 != lVar3);
    }
  }
LAB_147bd8024:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd8046 FUN_147bd8046 body=115 status=ok
// SIG undefined FUN_147bd8046(void)

undefined8 FUN_147bd8046(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_2 != (uint *)0x0) {
    lVar1 = *(longlong *)(param_2 + 4);
    lVar2 = FUN_1459b23c6();
    if (((lVar1 == lVar2) && ((ulonglong)*param_2 < 0x26)) &&
       ((0x34f0000000U >> ((ulonglong)*param_2 & 0x3f) & 1) != 0)) {
      piVar3 = (int *)FUN_146efc2ee(*(undefined8 *)(param_1 + 0x10),1);
      *piVar3 = *piVar3 + 1;
      *(double *)(piVar3 + 2) = *(double *)(piVar3 + 2) + 0.0;
      uVar4 = FUN_146efc036(*(undefined8 *)(param_1 + 0x10),param_2);
      return uVar4;
    }
  }
  return 2;
}



// FUNCTION 147bd80ec FUN_147bd80ec body=197 status=ok
// SIG undefined FUN_147bd80ec(void)

void FUN_147bd80ec(longlong param_1)

{
  undefined1 auStack_188 [40];
  int local_160 [2];
  undefined1 local_158 [200];
  undefined8 local_90;
  longlong local_88;
  undefined4 local_78;
  undefined8 local_74;
  byte local_64;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((*(byte *)(param_1 + 0x2090) & 2) == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
    FUN_140cda6c6(local_158,0,8);
    local_74 = *(undefined8 *)(param_1 + 0x40);
    local_78 = *(undefined4 *)(param_1 + 0x34);
    local_90 = 0;
    local_64 = local_64 | 0x10;
    local_88 = param_1;
    FUN_1408f10c6(param_1,local_160,local_158,0);
    if (local_160[0] != -1) {
      *(byte *)(param_1 + 0x2090) = *(byte *)(param_1 + 0x2090) | 2;
    }
    FUN_1449daebe(local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd81b2 FUN_147bd81b2 body=133 status=ok
// SIG undefined FUN_147bd81b2(void)

undefined8 FUN_147bd81b2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"DataStream: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd8238 FUN_147bd8238 body=97 status=ok
// SIG undefined FUN_147bd8238(void)

void FUN_147bd8238(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2090);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) != 0) {
      *(uint *)(param_1 + 0x2090) = uVar1 | 4;
    }
  }
  else {
    lVar2 = (ulonglong)(*(uint *)(param_1 + 0x78) & *(uint *)(param_1 + 0x74)) * 0x10;
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 8 + lVar2) == param_2) {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2c0))
                (*(longlong **)(param_1 + 0x68),0,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar2));
      if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
      }
    }
  }
  return;
}



// FUNCTION 147bd829a FUN_147bd829a body=94 status=ok
// SIG undefined FUN_147bd829a(void)

void FUN_147bd829a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x2090) & 4) == 0) {
    FUN_1434a87a2(param_1);
    return;
  }
  lVar1 = (ulonglong)(*(uint *)(param_1 + 0x78) & *(uint *)(param_1 + 0x74)) * 0x10;
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 8 + lVar1) == param_2) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2c0))
              (*(longlong **)(param_1 + 0x68),1,
               *(undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar1));
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x74)) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    }
  }
  return;
}



// FUNCTION 147bd8320 FUN_147bd8320 body=74 status=ok
// SIG undefined FUN_147bd8320(void)

undefined4 FUN_147bd8320(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (((param_1 == 0) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) ||
     ((*(byte *)(param_1 + 0x65) & 2) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = CONCAT31((int3)(*(uint *)(lVar3 + 8) >> 8),(*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0);
  }
  return uVar2;
}



// FUNCTION 147bd836a FUN_147bd836a body=124 status=ok
// SIG undefined FUN_147bd836a(void)

void FUN_147bd836a(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x5f8);
    lVar2 = *param_1;
    lVar7 = 0;
    do {
      lVar6 = *(longlong *)(lVar2 + lVar7);
      if (lVar6 == 0) {
LAB_147bd83b8:
        lVar6 = 0;
      }
      else {
        lVar5 = FUN_144a6c4d8();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_147bd83b8;
      }
      cVar4 = FUN_147bd8320(lVar6);
      if (cVar4 != '\0') {
        FUN_144adf12a(lVar6,uVar1);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  return;
}



// FUNCTION 147bd83e6 FUN_147bd83e6 body=168 status=ok
// SIG undefined FUN_147bd83e6(void)

void FUN_147bd83e6(undefined8 param_1,longlong param_2,undefined4 *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  if (param_2 != 0) {
    lVar4 = FUN_144a6c4d8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(param_2 + 0x1c8);
      if (lVar4 == 0) {
        puVar5 = &DAT_14c8464e0;
        uVar8 = DAT_14c8464f0;
      }
      else {
        puVar5 = (undefined8 *)(lVar4 + 0x260);
        uVar8 = *(undefined8 *)(lVar4 + 0x270);
      }
      uVar1 = *(undefined4 *)((longlong)puVar5 + 4);
      uVar2 = *(undefined4 *)(puVar5 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar5 + 0xc);
      *param_3 = *(undefined4 *)puVar5;
      param_3[1] = uVar1;
      param_3[2] = uVar2;
      param_3[3] = uVar3;
      *(undefined8 *)(param_3 + 4) = uVar8;
      fVar6 = (float)FUN_1433b9e5a(param_2);
      fVar7 = 0.0;
      if (0.0 < fVar6) {
        fVar7 = (float)FUN_1433b9e5a(param_2);
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
      }
      *param_4 = fVar7;
    }
  }
  return;
}



// FUNCTION 147bd848e FUN_147bd848e body=296 status=ok
// SIG undefined FUN_147bd848e(void)

void FUN_147bd848e(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_146f32fd4();
  FUN_1446f470e(&local_a0,L"NetActorFactory",1);
  uVar1 = FUN_146f27248(local_a0);
  *(undefined1 *)(param_1 + 0x5f0) = uVar1;
  FUN_1446f470e(&local_a8,L"NetSubObjectFactory",1);
  uVar1 = FUN_146f27248(local_a8);
  *(undefined1 *)(param_1 + 0x5f1) = uVar1;
  local_48 = 0;
  local_38 = &PTR_LAB_149f9c210;
  local_30 = FUN_1435a5f38;
  local_58 = &LAB_146f3c9a8;
  FUN_146f32f4c(param_1);
  local_88 = 0;
  local_78 = &PTR_LAB_149f9c230;
  local_70 = FUN_1435a6070;
  local_98 = &LAB_146f3c9b8;
  FUN_146f32f90(param_1);
  lVar2 = FUN_146f1aaa0(DAT_14c951640);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x600) = lVar2;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd85b8 FUN_147bd85b8 body=91 status=ok
// SIG undefined FUN_147bd85b8(void)

void FUN_147bd85b8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x5f8) + 0xa8,param_1);
    FUN_140457ffc(*(longlong *)(param_1 + 0x5f8) + 0x2e0,param_1);
    *(undefined8 *)(param_1 + 0x5f8) = 0;
  }
  FUN_146f3395e(param_1);
  *(undefined8 *)(param_1 + 0x600) = 0;
  return;
}



// FUNCTION 147bd8614 FUN_147bd8614 body=203 status=ok
// SIG undefined FUN_147bd8614(void)

void FUN_147bd8614(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f28a60(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x160,&local_28,param_2);
  plVar1 = (longlong *)FUN_146f33c96(param_1,local_28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar2 = FUN_146f33c96(param_1,param_2);
      if (((lVar2 != 0) && ((*(uint *)(plVar1 + 1) & 0x40000000) == 0)) &&
         ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar1 + 0x2d8))(plVar1,lVar2);
      }
      goto LAB_147bd86c1;
    }
  }
  FUN_146f33c96(param_1,param_2);
LAB_147bd86c1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd86e0 FUN_147bd86e0 body=414 status=ok
// SIG undefined FUN_147bd86e0(void)

ulonglong FUN_147bd86e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 2);
  if (*(uint *)(param_2 + 2) != 0) {
    plVar3 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_144a6c4d8();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
         (uVar5 = lVar4 + 0x30,
         *(ulonglong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         uVar5)) {
        if (((int)param_2[2] == 1) &&
           (uVar5 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x3f0))(), (char)uVar5 == '\0'))
        {
                    /* WARNING: Could not recover jumptable at 0x000147bd8826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x478))
                            (*(longlong **)(param_1 + 0x5f8),plVar3);
          return uVar5;
        }
        if ((*(byte *)((longlong)param_2 + 0x14) & 1) == 0) {
          return uVar5;
        }
        (**(code **)(*plVar3 + 0x228))(plVar3);
        uVar5 = FUN_140aeefbc(plVar3,1,1);
        return uVar5;
      }
      uVar5 = (ulonglong)*(uint *)(param_2 + 2);
    }
    if (((int)uVar5 != 1) && ((*(byte *)((longlong)param_2 + 0x14) & 1) != 0)) {
      plVar3 = (longlong *)param_2[1];
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_144a6c4d8();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
             == lVar4 + 0x30)) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
          uVar2 = *(uint *)((longlong)plVar3 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
            (**(code **)(*plVar3 + 0x2e0))(plVar3,*param_2);
          }
        }
      }
      (**(code **)(*(longlong *)*param_2 + 0x228))();
      lVar4 = *param_2;
      FUN_144757f48(lVar4,0x40000000);
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      do {
        uVar2 = *(uint *)(lVar4 + 8);
        uVar5 = (ulonglong)uVar2;
        if ((uVar2 >> 0x15 & 1) != 0) {
          return uVar5;
        }
        LOCK();
        uVar1 = *(uint *)(lVar4 + 8);
        if (uVar2 == uVar1) {
          *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
        }
        else {
          uVar5 = (ulonglong)uVar1;
        }
        UNLOCK();
      } while (uVar2 != uVar1);
    }
  }
  return uVar5;
}



// FUNCTION 147bd887e FUN_147bd887e body=489 status=ok
// SIG undefined FUN_147bd887e(void)

void FUN_147bd887e(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_2 & 1) != 0 || param_2 == 0) ||
     (plVar4 = (longlong *)FUN_146f33c96(param_1), plVar4 == (longlong *)0x0)) goto LAB_147bd88aa;
  lVar5 = FUN_144a6c4d8();
  if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) {
    cVar3 = (**(code **)(*plVar4 + 0x1f8))(plVar4);
    if (cVar3 != '\0') goto LAB_147bd8910;
    plVar4 = (longlong *)plVar4[2];
    uVar7 = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    lVar5 = FUN_144b1f45c(plVar4);
    if (lVar5 == 0) {
LAB_147bd89ae:
      lVar5 = FUN_144938c96(plVar4);
    }
    else {
      lVar6 = FUN_140e1d66a();
      if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) ||
         (lVar5 = FUN_1479da206(lVar5), lVar5 == 0)) goto LAB_147bd89ae;
    }
    plVar4 = (longlong *)FUN_144a79cc8(plVar4);
    FUN_146f23f7c(*(undefined8 *)(param_1 + 0x48),&local_58,lVar5);
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    iVar2 = *(int *)(param_3 + 0x208);
    *(uint *)(param_3 + 0x208) = iVar2 + 1U;
    if (*(uint *)(param_3 + 0x20c) < iVar2 + 1U) {
      FUN_146f40964(param_3,iVar2);
    }
    lVar5 = *(longlong *)(param_3 + 0x200);
    if (*(longlong *)(param_3 + 0x200) == 0) {
      lVar5 = param_3;
    }
    puVar1 = (undefined4 *)(lVar5 + (longlong)iVar2 * 0x10);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    if (*(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x5f8) + 0x1a8) + 0x30) == plVar4)
    goto LAB_147bd88aa;
LAB_147bd8910:
    uVar7 = *(undefined8 *)(param_1 + 0x48);
  }
  FUN_146f23f7c(uVar7,&local_58,plVar4);
  local_48 = local_58;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  iVar2 = *(int *)(param_3 + 0x208);
  *(uint *)(param_3 + 0x208) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x20c) < iVar2 + 1U) {
    FUN_146f40964(param_3,iVar2);
  }
  lVar5 = *(longlong *)(param_3 + 0x200);
  if (*(longlong *)(param_3 + 0x200) == 0) {
    lVar5 = param_3;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)iVar2 * 0x10);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
LAB_147bd88aa:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bd8a68 FUN_147bd8a68 body=244 status=ok
// SIG undefined FUN_147bd8a68(void)

undefined8 FUN_147bd8a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14a9ef0d0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14a9ef060;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_147bd8b5e;
  FUN_147be2742(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd8b7c FUN_147bd8b7c body=244 status=ok
// SIG undefined FUN_147bd8b7c(void)

undefined8 FUN_147bd8b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14a9ef1b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14a9ef140;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_147bd8c72;
  FUN_147be2ad6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd8c72 FUN_147bd8c72 body=116 status=ok
// SIG undefined FUN_147bd8c72(void)

void FUN_147bd8c72(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c761605 == '\x01') {
    FUN_146f33cf2(param_1,&local_28,param_2);
    if ((local_28 & 0xfffffffffffffff) != 0) {
      FUN_146f361e8(param_1,local_28,*(undefined4 *)(param_2 + 0x198));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd8ce8 FUN_147bd8ce8 body=104 status=ok
// SIG undefined FUN_147bd8ce8(void)

void FUN_147bd8ce8(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_146f459d0(*(undefined8 *)(param_1 + 0x28));
    if (lVar1 != 0) {
      lVar2 = FUN_140496b24();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_147bd8d2c;
    }
  }
  lVar1 = 0;
LAB_147bd8d2c:
                    /* WARNING: Could not recover jumptable at 0x000147bd8d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14cb0d2b0 + 0x480))(DAT_14cb0d2b0,lVar1,param_3,param_4);
  return;
}



// FUNCTION 147bd8d50 FUN_147bd8d50 body=90 status=ok
// SIG undefined FUN_147bd8d50(void)

ulonglong FUN_147bd8d50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x5f8) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5f8) + 0x1a8), lVar1 != 0)) {
    uVar2 = FUN_144a7b8cc();
    lVar3 = FUN_144a78ede(param_2,uVar2);
    if ((lVar3 != 0) && (*(longlong *)(lVar1 + 0x30) != lVar3)) {
      uVar4 = CONCAT71(uVar5,*(undefined1 *)(lVar3 + 0x240)) & 0xffffffffffffff20;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 5);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147bd8daa FUN_147bd8daa body=105 status=ok
// SIG undefined FUN_147bd8daa(void)

ulonglong FUN_147bd8daa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong lVar2;
  byte bVar3;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar3 = 1;
  if (param_2 != 0) {
    lVar2 = FUN_144a6c4d8();
    in_RAX = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(in_RAX + 0x38)) &&
       (*(longlong *)(*(longlong *)(in_RAX + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      plVar1 = *(longlong **)(param_1 + 0x5f8);
      if (plVar1 == (longlong *)0x0) {
        in_RAX = 1;
      }
      else {
        in_RAX = (**(code **)(*plVar1 + 0x450))(plVar1,param_2);
      }
      bVar3 = 0;
      uVar4 = 0;
    }
  }
  return CONCAT71(uVar4,bVar3 | (byte)in_RAX) & 0xffffff01;
}



// FUNCTION 147bd8e14 FUN_147bd8e14 body=81 status=ok
// SIG undefined FUN_147bd8e14(void)

void FUN_147bd8e14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(undefined4 *)(param_2 + 0x198);
  FUN_146f3572a(local_14,*(undefined8 *)(param_2 + 0x10),&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_14);
}



// FUNCTION 147bd8e66 FUN_147bd8e66 body=226 status=ok
// SIG undefined FUN_147bd8e66(void)

void FUN_147bd8e66(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  bVar1 = *(byte *)(param_2 + 0x179);
  if (1 < bVar1) {
    *(undefined1 *)(param_2 + 0x179) = 1;
    if ((*(longlong *)(param_1 + 0x5f8) != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0))
    {
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
        if (*(longlong *)(lVar6 + 0x360) == *(longlong *)(*(longlong *)(param_1 + 0x5f8) + 0x1a8)) {
          if (lVar6 == 0) {
            return;
          }
          iVar2 = *(int *)(lVar6 + 0x2b8);
          if ((longlong)iVar2 == 0) {
            return;
          }
          lVar5 = *(longlong *)(lVar6 + 0x2b0);
          lVar6 = 0;
          do {
            plVar3 = *(longlong **)(lVar5 + lVar6);
            if (((plVar3 != (longlong *)0x0) && (plVar3 != *(longlong **)(param_1 + 0x5f8))) &&
               (cVar4 = (**(code **)(*plVar3 + 0x440))(plVar3,param_2), cVar4 != '\0')) {
              plVar3 = *(longlong **)(lVar5 + lVar6);
              (**(code **)(*plVar3 + 0x380))(plVar3,param_2,bVar1);
            }
            lVar6 = lVar6 + 0x10;
          } while ((longlong)iVar2 * 0x10 != lVar6);
          return;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 147bd8f48 FUN_147bd8f48 body=101 status=ok
// SIG undefined FUN_147bd8f48(void)

void FUN_147bd8f48(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong *)(param_1 + 0x5f8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5f8) + 0xf0), lVar1 != 0)) {
    local_10 = param_2 & 0xfffffffffffffff;
    FUN_147bd8fae(lVar1,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd8fae FUN_147bd8fae body=224 status=ok
// SIG undefined FUN_147bd8fae(void)

void FUN_147bd8fae(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_158,lVar2,0);
    local_159 = 0x1d;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_147be2e44(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd9090 FUN_147bd9090 body=234 status=ok
// SIG undefined FUN_147bd9090(void)

void FUN_147bd9090(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_198 [44];
  undefined1 local_16c [11];
  undefined1 local_161;
  longlong local_160;
  ulonglong *local_158;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_160,lVar2,0);
    local_161 = 0x1e;
    puVar1 = (undefined1 *)*local_158 + 1;
    if ((undefined1 *)local_158[1] < puVar1) {
      (**(code **)(local_160 + 0x170))(&local_160,&local_161,1);
    }
    else {
      local_161 = *(undefined1 *)*local_158;
      *local_158 = (ulonglong)puVar1;
    }
    FUN_147be2e82(&local_160,param_2,param_3);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_16c,&local_160,1);
    FUN_1449daebe(&local_160);
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd917c FUN_147bd917c body=311 status=ok
// SIG undefined FUN_147bd917c(void)

undefined8 FUN_147bd917c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    plVar1 = (longlong *)FUN_147bd691a(*(longlong *)(param_1 + 0x5f8),param_3);
    if (plVar1 == (longlong *)0x0) {
      FUN_140002266(param_2,L"ConnectionId:%u no NetConnection found",param_3);
    }
    else {
      (**(code **)(*plVar1 + 0x2d0))(plVar1,&local_40);
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      if (plVar1[0x12] == 0) {
        FUN_140056680(&local_50,&DAT_149e01fe8);
      }
      else {
        local_30 = *(undefined8 *)(plVar1[0x12] + 0x18);
        FUN_1400021e4(&local_30,&local_50);
      }
      puVar2 = local_50;
      if (local_48 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      local_58 = puVar3;
      FUN_140002266(param_2,L"ConnectionId:%u ViewTarget: %s Named: %s",param_3,puVar2);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  FUN_140002266(param_2,L"ConnectionId:%u no NetDriver attached",param_3);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bd92ba FUN_147bd92ba body=96 status=ok
// SIG undefined FUN_147bd92ba(void)

longlong * FUN_147bd92ba(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_146b188cf(param_1 + 2,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 147bd931a FUN_147bd931a body=238 status=ok
// SIG undefined FUN_147bd931a(void)

uint FUN_147bd931a(void)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"net.QuantizeActorScaleOnSpawn",1);
  if (plVar3 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    bVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    uVar5 = (uint)bVar1;
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"net.QuantizeActorLocationOnSpawn",1);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 2;
  }
  else {
    bVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    uVar4 = (uint)bVar1 * 2;
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"net.QuantizeActorVelocityOnSpawn",1);
  if (plVar3 == (longlong *)0x0) {
    uVar2 = 4;
  }
  else {
    bVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    uVar2 = (uint)bVar1 << 2;
  }
  return uVar4 | uVar5 | uVar2;
}



// FUNCTION 147bd9408 FUN_147bd9408 body=22 status=ok
// SIG undefined FUN_147bd9408(void)

void FUN_147bd9408(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147bd931a();
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}



// FUNCTION 147bd941e FUN_147bd941e body=1426 status=ok
// SIG undefined FUN_147bd941e(void)

undefined8 * FUN_147bd941e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double *pdVar16;
  uint uVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_218 [40];
  undefined8 *local_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_178;
  double dStack_170;
  double local_168;
  void *local_128;
  longlong local_118;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar10 = (longlong *)FUN_146f33c96(*(undefined8 *)(param_1 + 0x28),param_3);
  if (plVar10 != (longlong *)0x0) {
    lVar11 = FUN_144a6c4d8();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
        lVar11 + 0x30)) {
      lVar11 = *(longlong *)(param_1 + 0x28);
      FUN_146f23f7c(*(undefined8 *)(lVar11 + 0x48),&local_1e8,plVar10);
      if ((local_1e8 & 1) == 0 && CONCAT44(uStack_1e4,local_1e8) != 0) {
        puVar12 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
        *(undefined4 *)(puVar12 + 1) = 0;
        *(undefined1 *)((longlong)puVar12 + 0xc) = 0xff;
        puVar12[2] = 0;
        puVar12[3] = 0;
        *(undefined2 *)(puVar12 + 4) = 0;
        *puVar12 = &PTR_FUN_14a9ee8f0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        uVar8 = DAT_14c846518;
        puVar12[0xb] = DAT_14c846510;
        puVar12[0xc] = uVar8;
        puVar12[0xd] = DAT_14c846520;
        local_1f0 = puVar12 + 0x11;
        puVar12[0xe] = 0;
        puVar12[0xf] = 0;
        puVar12[0x10] = 0;
        puVar12[0x11] = 0;
        puVar12[0x12] = 0;
        puVar12[0x13] = 0;
        *(undefined8 *)((longlong)puVar12 + 0x99) = 0;
        *(undefined8 *)((longlong)puVar12 + 0xa1) = 0;
        lVar13 = FUN_144b1f45c(plVar10);
        if (lVar13 == 0) {
LAB_147bd95ce:
          lVar13 = FUN_144938c96(plVar10);
        }
        else {
          lVar14 = FUN_140e1d66a();
          if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) ||
             (lVar13 = FUN_1479da206(lVar13), lVar13 == 0)) goto LAB_147bd95ce;
        }
        lVar14 = FUN_144a79cc8(plVar10);
        FUN_146f23f7c(*(undefined8 *)(lVar11 + 0x48),&local_1b8,lVar13);
        *(undefined4 *)local_1f0 = (undefined4)local_1b8;
        *(undefined4 *)((longlong)local_1f0 + 4) = local_1b8._4_4_;
        *(undefined4 *)(local_1f0 + 1) = (undefined4)uStack_1b0;
        *(undefined4 *)((longlong)local_1f0 + 0xc) = uStack_1b0._4_4_;
        if (DAT_14c76162c == 0) {
          *(undefined1 *)(puVar12 + 0x15) = 1;
        }
        else {
          bVar19 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x5f8) + 0x1a8) + 0x30) ==
                   lVar14;
          *(bool *)(puVar12 + 0x15) = bVar19;
          if (!bVar19) {
            FUN_146f23f7c(*(undefined8 *)(lVar11 + 0x48),&local_1b8,lVar14);
            *(undefined4 *)(puVar12 + 0x13) = (undefined4)local_1b8;
            *(undefined4 *)((longlong)puVar12 + 0x9c) = local_1b8._4_4_;
            *(undefined4 *)(puVar12 + 0x14) = (undefined4)uStack_1b0;
            *(undefined4 *)((longlong)puVar12 + 0xa4) = uStack_1b0._4_4_;
          }
        }
        lVar11 = plVar10[0x39];
        if (lVar11 != 0) {
          local_1d8 = *(double *)(lVar11 + 0x260);
          dStack_1d0 = *(double *)(lVar11 + 0x268);
          local_1c8 = *(double *)(lVar11 + 0x270);
          puVar18 = &local_1b8;
          FUN_140202030(puVar18,&local_1d8,plVar10);
          uVar20 = SUB84(puVar18,0);
          puVar12[7] = local_1a8;
          *(undefined4 *)(puVar12 + 5) = (undefined4)local_1b8;
          *(undefined4 *)((longlong)puVar12 + 0x2c) = local_1b8._4_4_;
          *(undefined4 *)(puVar12 + 6) = (undefined4)uStack_1b0;
          *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_1b0._4_4_;
          lVar13 = plVar10[0x39];
          if (lVar13 == 0) {
            puVar12[10] = DAT_14c846508;
            uVar24 = DAT_14c846500._4_4_;
            uVar23 = (undefined4)DAT_14c846500;
            uVar20 = DAT_14c8464f8._4_4_;
            *(undefined4 *)(puVar12 + 8) = (undefined4)DAT_14c8464f8;
            *(undefined4 *)((longlong)puVar12 + 0x44) = uVar20;
            *(undefined4 *)(puVar12 + 9) = uVar23;
            *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar24;
LAB_147bd985c:
            uVar21 = 0;
            uVar22 = 0x3ff00000;
            uVar20 = 0;
            uVar17 = 0x3ff00000;
            uVar23 = 0;
            uVar24 = 0x3ff00000;
          }
          else {
            dVar2 = *(double *)(lVar13 + 0x240);
            dVar4 = *(double *)(lVar13 + 0x248);
            dVar6 = *(double *)(lVar13 + 0x250);
            dVar7 = *(double *)(lVar13 + 600);
            pdVar16 = *(double **)(lVar13 + 0x228);
            dVar15 = local_1a8;
            local_1b8 = dVar2;
            uStack_1b0 = dVar4;
            local_1a8 = dVar6;
            dStack_1a0 = dVar7;
            if (pdVar16 == (double *)0x0) {
              uVar20 = 0x40;
              pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
              dVar15 = DAT_14c8463d8;
              *pdVar16 = DAT_14c8463d0;
              pdVar16[1] = dVar15;
              dVar15 = DAT_14c8463e8;
              pdVar16[2] = DAT_14c8463e0;
              pdVar16[3] = dVar15;
              dVar15 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
              pdVar16[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
              pdVar16[5] = dVar15;
              dVar15 = DAT_14c846508;
              pdVar16[6] = DAT_14c846508;
              *(double **)(lVar13 + 0x228) = pdVar16;
            }
            auVar3._8_4_ = (int)-(ulonglong)(dVar4 != pdVar16[1]);
            auVar3._0_8_ = -(ulonglong)(dVar2 != *pdVar16);
            auVar3._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar16[1]) >> 0x20);
            iVar9 = movmskpd(SUB84(dVar15,0),auVar3);
            auVar5._8_4_ = (int)-(ulonglong)(dVar7 != pdVar16[3]);
            auVar5._0_8_ = -(ulonglong)(dVar6 != pdVar16[2]);
            auVar5._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar16[3]) >> 0x20);
            uVar17 = movmskpd(uVar20,auVar5);
            if ((uVar17 & 0x3fffffff) != 0 || iVar9 != 0) {
              pdVar16[2] = local_1a8;
              pdVar16[3] = dStack_1a0;
              *(undefined4 *)pdVar16 = (undefined4)local_1b8;
              *(undefined4 *)((longlong)pdVar16 + 4) = local_1b8._4_4_;
              *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_1b0;
              *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_1b0._4_4_;
              FUN_1448052ee(&local_1b8,&local_1d8);
              pdVar16[6] = local_1c8;
              pdVar16[4] = local_1d8;
              pdVar16[5] = dStack_1d0;
            }
            lVar13 = plVar10[0x39];
            uVar20 = *(undefined4 *)(pdVar16 + 4);
            uVar23 = *(undefined4 *)((longlong)pdVar16 + 0x24);
            uVar24 = *(undefined4 *)(pdVar16 + 5);
            uVar21 = *(undefined4 *)((longlong)pdVar16 + 0x2c);
            puVar12[10] = pdVar16[6];
            *(undefined4 *)(puVar12 + 8) = uVar20;
            *(undefined4 *)((longlong)puVar12 + 0x44) = uVar23;
            *(undefined4 *)(puVar12 + 9) = uVar24;
            *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar21;
            if (lVar13 == 0) goto LAB_147bd985c;
            uVar20 = *(undefined4 *)(lVar13 + 0x280);
            uVar17 = *(uint *)(lVar13 + 0x284);
            uVar23 = *(undefined4 *)(lVar13 + 0x288);
            uVar24 = *(undefined4 *)(lVar13 + 0x28c);
            uVar21 = (undefined4)*(undefined8 *)(lVar13 + 0x290);
            uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x290) >> 0x20);
          }
          dVar2 = (double)((ulonglong)uVar17 << 0x20);
          dVar6 = (double)CONCAT44(uVar24,uVar23);
          dVar4 = (double)CONCAT44(uVar22,uVar21);
          plVar1 = *(longlong **)(lVar11 + 0x120);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x4a8))(plVar1,&local_1b8,*(undefined8 *)(lVar11 + 0x128),0);
            dVar4 = (double)CONCAT44(uVar22,uVar21) *
                    (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_168)) &
                            (ulonglong)(1.0 / local_168));
            dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_178)) &
                            (ulonglong)(1.0 / local_178)) * (double)CONCAT44(uVar17,uVar20);
            uVar20 = SUB84(dVar2,0);
            dVar6 = (double)CONCAT44(uVar24,uVar23) *
                    (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_170)) &
                            (ulonglong)(1.0 / dStack_170));
          }
          *(undefined4 *)(puVar12 + 0xb) = uVar20;
          *(int *)((longlong)puVar12 + 0x5c) = (int)((ulonglong)dVar2 >> 0x20);
          puVar12[0xc] = dVar6;
          puVar12[0xd] = dVar4;
          (**(code **)(*plVar10 + 0x328))(plVar10,&local_1b8);
          puVar12[0x10] = local_1a8;
          *(undefined4 *)(puVar12 + 0xe) = (undefined4)local_1b8;
          *(undefined4 *)((longlong)puVar12 + 0x74) = local_1b8._4_4_;
          *(undefined4 *)(puVar12 + 0xf) = (undefined4)uStack_1b0;
          *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_1b0._4_4_;
        }
      }
      else {
        puVar12 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        *(undefined4 *)(puVar12 + 1) = 0;
        *(undefined1 *)((longlong)puVar12 + 0xc) = 0xff;
        puVar12[2] = 0;
        puVar12[3] = 0;
        *(undefined2 *)(puVar12 + 4) = 0;
        *puVar12 = &PTR_FUN_14a9ee930;
        *(uint *)(puVar12 + 5) = local_1e8;
        *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_1e4;
        *(undefined4 *)(puVar12 + 6) = uStack_1e0;
        *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_1dc;
      }
      FUN_140cda6c6(&local_1b8,0,(longlong)DAT_14c761608);
      (**(code **)(*plVar10 + 0x3f0))(plVar10,&local_1b8);
      *(short *)(puVar12 + 4) = (short)local_118;
      if ((short)local_118 != 0) {
        FUN_1401211f6(puVar12 + 2,(int)(local_118 + 7U >> 3) + 3U & 0xfffffffc,1);
        memcpy((void *)puVar12[2],local_128,local_118 + 7 >> 3);
      }
      FUN_1449daebe(&local_1b8);
      *param_2 = puVar12;
      goto LAB_147bd94a0;
    }
  }
  *param_2 = 0;
LAB_147bd94a0:
  if ((local_80 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bd99b2 FUN_147bd99b2 body=131 status=ok
// SIG undefined FUN_147bd99b2(void)

undefined8 FUN_147bd99b2(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0xe0);
  cVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  FUN_146f5435e(uVar1,cVar2 != '\0',1);
  cVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  if (cVar2 == '\0') {
    FUN_147bd9b70(param_3,param_2);
  }
  else {
    FUN_147bd9a36(param_3,param_2,*(undefined4 *)(param_1 + 0x38),param_1 + 0x40);
  }
  return 1;
}



// FUNCTION 147bd9a36 FUN_147bd9a36 body=313 status=ok
// SIG undefined FUN_147bd9a36(void)

void FUN_147bd9a36(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0xe0);
  FUN_146f5ba5a(*(longlong *)(param_2 + 0x18),param_1 + 0x88);
  cVar1 = *(char *)(param_1 + 0xa8);
  FUN_146f5435e(uVar2,cVar1 != '\0',1);
  if (cVar1 == '\0') {
    FUN_146f5ba5a(*(undefined8 *)(param_2 + 0x18),param_1 + 0x98);
  }
  FUN_1435a2bbb(uVar2,param_1 + 0x28,param_4,(param_3 & 2) >> 1);
  FUN_1435a2bbb(uVar2,param_1 + 0x58,param_4 + 0x30,param_3 & 0xffffff01);
  FUN_1435a2bbb(uVar2,param_1 + 0x70,param_4 + 0x48,(param_3 & 4) >> 2);
  FUN_146f5aedf(uVar2,param_1 + 0x40,param_4 + 0x18,0x3a83126f);
  bVar3 = *(short *)(param_1 + 0x20) != 0;
  FUN_146f5435e(uVar2,bVar3,1);
  if (!bVar3) {
    return;
  }
  FUN_146f5435e(uVar2,*(ushort *)(param_1 + 0x20) - 1,0x10);
  FUN_146f59ca6(uVar2,*(undefined8 *)(param_1 + 0x10),0,*(undefined2 *)(param_1 + 0x20));
  return;
}



// FUNCTION 147bd9b70 FUN_147bd9b70 body=125 status=ok
// SIG undefined FUN_147bd9b70(void)

void FUN_147bd9b70(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0xe0);
  FUN_146f5ba5a(*(longlong *)(param_2 + 0x18),param_1 + 0x28);
  bVar2 = *(short *)(param_1 + 0x20) != 0;
  FUN_146f5435e(uVar1,bVar2,1);
  if (!bVar2) {
    return;
  }
  FUN_146f5435e(uVar1,*(ushort *)(param_1 + 0x20) - 1,0x10);
  FUN_146f59ca6(uVar1,*(undefined8 *)(param_1 + 0x10),0,*(undefined2 *)(param_1 + 0x20));
  return;
}



// FUNCTION 147bd9bee FUN_147bd9bee body=260 status=ok
// SIG undefined FUN_147bd9bee(void)

undefined8 * FUN_147bd9bee(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  uVar4 = FUN_146f546d2(*(undefined8 *)(*(longlong *)(param_3 + 0x18) + 0xd8),1);
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 0xff;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined2 *)(puVar5 + 4) = 0;
    *puVar5 = &PTR_FUN_14a9ee930;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FUN_147bd9de4(puVar5,param_3);
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 0xff;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined2 *)(puVar5 + 4) = 0;
    *puVar5 = &PTR_FUN_14a9ee8f0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    uVar3 = DAT_14c846518._4_4_;
    uVar2 = (undefined4)DAT_14c846518;
    uVar1 = DAT_14c846510._4_4_;
    *(undefined4 *)(puVar5 + 0xb) = (undefined4)DAT_14c846510;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = uVar1;
    *(undefined4 *)(puVar5 + 0xc) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 100) = uVar3;
    puVar5[0xd] = DAT_14c846520;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x99) = 0;
    *(undefined8 *)((longlong)puVar5 + 0xa1) = 0;
    FUN_147bd9cf2(puVar5,param_3,param_1 + 0x40);
  }
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 147bd9cf2 FUN_147bd9cf2 body=242 status=ok
// SIG undefined FUN_147bd9cf2(void)

void FUN_147bd9cf2(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  short sVar3;
  ulonglong uVar4;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0xd8);
  FUN_146f5ba44(*(longlong *)(param_2 + 0x18),param_1 + 0x88);
  bVar2 = FUN_146f546d2(uVar1,1);
  *(byte *)(param_1 + 0xa8) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    FUN_146f5ba44(*(undefined8 *)(param_2 + 0x18),param_1 + 0x98);
  }
  FUN_1435a2de7(uVar1,param_1 + 0x28,param_3);
  FUN_1435a2de7(uVar1,param_1 + 0x58,param_3 + 0x30);
  FUN_1435a2de7(uVar1,param_1 + 0x70,param_3 + 0x48);
  FUN_146f5b0e7(uVar1,param_1 + 0x40,param_3 + 0x18);
  uVar4 = FUN_146f546d2(uVar1,1);
  if ((uVar4 & 1) == 0) {
    return;
  }
  sVar3 = FUN_146f546d2(uVar1,0x10);
  *(ushort *)(param_1 + 0x20) = sVar3 + 1U;
  FUN_1401211f6(param_1 + 0x10,(ushort)(sVar3 + 1U) + 0x1f >> 3 & 0xfffffffc,1);
  FUN_146f59f56(uVar1,*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x20));
  return;
}



// FUNCTION 147bd9de4 FUN_147bd9de4 body=119 status=ok
// SIG undefined FUN_147bd9de4(void)

void FUN_147bd9de4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  short sVar2;
  ulonglong uVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0xd8);
  FUN_146f5ba44(*(longlong *)(param_2 + 0x18),param_1 + 0x28);
  uVar3 = FUN_146f546d2(uVar1,1);
  if ((uVar3 & 1) == 0) {
    return;
  }
  sVar2 = FUN_146f546d2(uVar1,0x10);
  *(ushort *)(param_1 + 0x20) = sVar2 + 1U;
  FUN_1401211f6(param_1 + 0x10,(ushort)(sVar2 + 1U) + 0x1f >> 3 & 0xfffffffc,1);
  FUN_146f59f56(uVar1,*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x20));
  return;
}



// FUNCTION 147bd9e7a FUN_147bd9e7a body=142 status=ok
// SIG undefined FUN_147bd9e7a(void)

undefined8 FUN_147bd9e7a(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ushort *)(param_1 + 0x20);
  FUN_147bd9f0a(param_1 + 0x28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_48 = (uint)uVar1;
  FUN_140002266(param_2,
                L"FStaticActorNetCreationHeader (ProtocolId:0x%x):\n\tObjectReference=%s\n\tCustomCreationData=%u bits"
                ,*(undefined4 *)(param_1 + 8),puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bd9f0a FUN_147bd9f0a body=182 status=ok
// SIG undefined FUN_147bd9f0a(void)

undefined8 FUN_147bd9f0a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 1) & 0xfffff) == 0) {
    FUN_146f2727e(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  lVar1 = *param_1;
  FUN_147bde596(param_1 + 1,param_2);
  if (lVar1 != 0) {
    FUN_146f2727e(param_1,&local_30);
    puVar2 = local_30;
    if (local_28 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1407c8b48(param_2,L" : %s",puVar2);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bd9fc2 FUN_147bd9fc2 body=540 status=ok
// SIG undefined FUN_147bd9fc2(void)

undefined8 FUN_147bd9fc2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  wchar_t *local_d8;
  undefined2 *local_d0;
  uint local_c8;
  uint local_bc;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_bc = (uint)*(ushort *)(param_1 + 0x20);
  local_b0 = param_2;
  FUN_147bd9f0a(param_1 + 0x98,&local_58);
  local_b8 = &DAT_149dfb77a;
  if (local_50 != 0) {
    local_b8 = local_58;
  }
  pwVar6 = L"False";
  if (*(char *)(param_1 + 0xa8) != '\0') {
    pwVar6 = L"True";
  }
  FUN_141706e52(param_1 + 0x70,&local_68);
  puVar4 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  FUN_141706e52(param_1 + 0x58,&local_78);
  puVar3 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar3 = local_78;
  }
  FUN_1467fafc0(param_1 + 0x40,&local_88);
  puVar5 = &DAT_149dfb77a;
  if (local_80 != 0) {
    puVar5 = local_88;
  }
  FUN_141706e52(param_1 + 0x28,&local_98);
  local_f8 = &DAT_149dfb77a;
  if (local_90 != 0) {
    local_f8 = local_98;
  }
  FUN_147bd9f0a(param_1 + 0x88,&local_a8);
  uVar1 = local_b0;
  puVar2 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar2 = local_a8;
  }
  local_c8 = local_bc;
  local_d0 = local_b8;
  local_f0 = puVar5;
  local_e8 = puVar3;
  local_e0 = puVar4;
  local_d8 = pwVar6;
  FUN_140002266(local_b0,
                L"FDynamicActorNetCreationHeader (ProtocolId:0x%x):\n\tArchetypeReference=%s\n\tSpawnInfo.Location=%s\n\tSpawnInfo.Rotation=%s\n\tSpawnInfo.Scale=%s\n\tSpawnInfo.Velocity=%s\n\tbUsePersistentLevel=%s\n\tLevelReference=%s\n\tCustomCreationData=%u bits"
                ,*(undefined4 *)(param_1 + 8),puVar2);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bda1e0 FUN_147bda1e0 body=178 status=ok
// SIG undefined FUN_147bda1e0(void)

undefined8 * FUN_147bda1e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_146f546d2(*(undefined8 *)(*(longlong *)(param_3 + 0x18) + 0xd8),1);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)((longlong)puVar2 + 0xc) = 0xff;
    *puVar2 = &PTR_FUN_14a9ee9a0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    FUN_146f5ba44(*(undefined8 *)(param_3 + 0x18),puVar2 + 2);
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)((longlong)puVar2 + 0xc) = 0xff;
    *puVar2 = &PTR_FUN_14a9ee9c0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    FUN_147bda292(puVar2,param_3);
  }
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 147bda292 FUN_147bda292 body=134 status=ok
// SIG undefined FUN_147bda292(void)

void FUN_147bda292(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0xd8);
  FUN_146f5ba44(*(longlong *)(param_2 + 0x18),param_1 + 0x10);
  bVar2 = FUN_146f546d2(uVar1,1);
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfd | (bVar2 & 1) * '\x02';
  if ((bVar2 & 1) == 0) {
    bVar2 = FUN_146f546d2(uVar1,1);
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb | (bVar2 & 1) * '\x04';
    if ((bVar2 & 1) == 0) {
      FUN_146f5ba44(*(undefined8 *)(param_2 + 0x18),param_1 + 0x20);
      return;
    }
  }
  return;
}



// FUNCTION 147bda318 FUN_147bda318 body=89 status=ok
// SIG undefined FUN_147bda318(void)

void FUN_147bda318(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0xe0);
  cVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  FUN_146f5435e(uVar1,cVar2 != '\0',1);
                    /* WARNING: Could not recover jumptable at 0x000147bda36e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x18))(param_3,param_2);
  return;
}



// FUNCTION 147bda372 FUN_147bda372 body=132 status=ok
// SIG undefined FUN_147bda372(void)

undefined8 FUN_147bda372(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147bd9f0a(param_1 + 0x10,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,
                L"FNetStaticSubObjectCreationHeader (ProtocolId:0x%x):\n\tObjectReference=%s\n\t",
                *(undefined4 *)(param_1 + 8),puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bda3f8 FUN_147bda3f8 body=27 status=ok
// SIG undefined FUN_147bda3f8(void)

undefined8 FUN_147bda3f8(longlong param_1,longlong param_2)

{
  FUN_146f5ba5a(*(undefined8 *)(param_2 + 0x18),param_1 + 0x10);
  return 1;
}



// FUNCTION 147bda414 FUN_147bda414 body=245 status=ok
// SIG undefined FUN_147bda414(void)

undefined8 FUN_147bda414(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  uint local_80;
  uint local_78;
  uint local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)(param_1 + 0x30);
  FUN_147bd9f0a(param_1 + 0x20,&local_58);
  local_88 = &DAT_149dfb77a;
  if (local_50 != 0) {
    local_88 = local_58;
  }
  FUN_147bd9f0a(param_1 + 0x10,&local_68);
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  local_80 = bVar1 & 1;
  local_78 = bVar1 >> 1 & 1;
  local_70 = bVar1 >> 2 & 1;
  FUN_140002266(param_2,
                L"FNetDynamicSubObjectCreationHeader (ProtocolId:0x%x):\n\tObjectClassReference=%s\n\tOuterReference=%s\n\tbUsePersistenLevel=%u\n\tbOuterIsTransientLevel=%u\n\tbOuterIsRootObject=%u\n\t"
                ,*(undefined4 *)(param_1 + 8),puVar2);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bda50a FUN_147bda50a body=150 status=ok
// SIG undefined FUN_147bda50a(void)

undefined1 FUN_147bda50a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0xe0);
  FUN_146f5ba5a(*(longlong *)(param_2 + 0x18),param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x30) >> 1 & 1;
  FUN_146f5435e(uVar1,bVar2 != 0,1);
  if (bVar2 == 0) {
    bVar2 = *(byte *)(param_1 + 0x30) >> 2 & 1;
    FUN_146f5435e(uVar1,bVar2 != 0,1);
    if (bVar2 == 0) {
      FUN_146f5ba5a(*(undefined8 *)(param_2 + 0x18),param_1 + 0x20);
    }
  }
  return 1;
}



// FUNCTION 147bda5a0 FUN_147bda5a0 body=189 status=ok
// SIG undefined FUN_147bda5a0(void)

void FUN_147bda5a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  code *local_48;
  undefined1 *local_40;
  int local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (param_3 != 0xf && lVar1 != 0) {
    FUN_14020496a(&local_38,lVar1);
    if (iStack_34 != 0 || local_38 != 0) {
      lVar1 = FUN_1447210f0(lVar1);
      if (lVar1 != 0) {
        local_40 = local_68;
        local_48 = FUN_1435a69bc;
        local_60 = param_1;
        local_58 = param_2;
        local_50 = param_3;
        FUN_1405f17cf(DAT_14cb0d2b0,lVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bda65e FUN_147bda65e body=179 status=ok
// SIG undefined FUN_147bda65e(void)

void FUN_147bda65e(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined1 local_50;
  code *local_48;
  undefined1 *local_40;
  int local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447210f0();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) &&
     (*(char *)(*(longlong *)(lVar1 + 0x38) + 0x849) == '\x01')) {
    FUN_14020496a(&local_38,param_1);
    if (iStack_34 != 0 || local_38 != 0) {
      local_40 = local_60;
      local_48 = FUN_1435a6bb4;
      local_58 = param_2;
      local_50 = param_3;
      FUN_1405f17cf(DAT_14cb0d2b0,lVar1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bda712 FUN_147bda712 body=197 status=ok
// SIG undefined FUN_147bda712(void)

void FUN_147bda712(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  code *local_48;
  undefined1 *local_40;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1447210f0();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) &&
     (*(char *)(*(longlong *)(lVar1 + 0x38) + 0x849) == '\x01')) {
    FUN_14020496a(&local_30,param_1);
    FUN_14020496a(&local_38,param_2);
    if ((iStack_2c != 0 || local_30 != 0) && (iStack_34 != 0 || local_38 != 0)) {
      local_40 = local_58;
      local_48 = FUN_1435a6c7c;
      FUN_1405f17cf(DAT_14cb0d2b0,lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bda7d8 FUN_147bda7d8 body=148 status=ok
// SIG undefined FUN_147bda7d8(void)

void FUN_147bda7d8(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_1;
  iVar1 = DAT_14c999a84 + 1;
  local_40 = param_2;
  local_3c = param_3;
  if (iVar1 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)((longlong)&DAT_14c999ae0 + lVar2) != 0) {
        local_38 = *(longlong *)((longlong)&DAT_14c999ae0 + lVar2);
        FUN_1435a6d1a(&local_48,&local_38);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar1 * 8 != lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bda86e FUN_147bda86e body=706 status=ok
// SIG undefined FUN_147bda86e(void)

void FUN_147bda86e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(float *)(param_1 + 0xc) = *(float *)(param_2 + 1) + *(float *)(param_1 + 0xc);
  if (*(int *)((longlong)param_1 + 100) != 0) {
    uVar6 = *(uint *)(param_1 + 1);
    if ((ulonglong)uVar6 != 0) {
      if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
        lVar8 = *param_2;
        uVar12 = (uint)((ulonglong)lVar8 >> 0x10);
        uVar11 = (uint)lVar8 & 0xffff;
        plVar7 = param_1 + 9;
        if ((longlong *)param_1[10] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[10];
        }
        iVar9 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)param_1[0xb] - 1U &
                        (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar11) +
                        (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar9 != -1) {
LAB_147bda917:
          plVar7 = (longlong *)(param_1[2] + (longlong)iVar9 * 0x14);
          if (*plVar7 != lVar8) goto code_r0x000147bda92b;
          if (plVar7 == (longlong *)0x0) goto LAB_147bda935;
          fVar3 = *(float *)(plVar7 + 1);
          fVar4 = *(float *)(param_2 + 1);
          if (fVar4 <= fVar3) goto LAB_147bdaa09;
          if (((int)uVar6 < 1) ||
             (lVar5 = *param_1, fVar3 < *(float *)(lVar5 + -4 + (ulonglong)uVar6 * 0xc)))
          goto LAB_147bda935;
          uVar11 = 0;
          uVar12 = uVar6;
          do {
            uVar10 = (uVar12 >> 1) + uVar11;
            pfVar2 = (float *)(lVar5 + 8 + (ulonglong)uVar10 * 0xc);
            if (fVar4 < *pfVar2 || fVar4 == *pfVar2) {
              uVar11 = uVar10 + (uVar12 & 1);
            }
            bVar13 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
          } while (bVar13);
          if (uVar11 - uVar6 == 0) goto LAB_147bda935;
          iVar9 = (uVar11 - uVar6) + 1;
          plVar7 = (longlong *)(lVar5 + (ulonglong)uVar11 * 0xc);
          do {
            if (*(float *)(plVar7 + 1) <= fVar3 && fVar3 != *(float *)(plVar7 + 1)) break;
            if (*plVar7 == lVar8) {
              if (iVar9 != 0) {
                memmove(plVar7,(void *)((longlong)plVar7 + 0xc),(longlong)-iVar9 * 0xc);
                uVar6 = *(uint *)(param_1 + 1);
              }
              *(uint *)(param_1 + 1) = uVar6 - 1;
              break;
            }
            iVar9 = iVar9 + 1;
            plVar7 = (longlong *)((longlong)plVar7 + 0xc);
          } while (iVar9 != 1);
        }
      }
LAB_147bda935:
      FUN_147be332a(param_1 + 2,local_34,param_2);
      uVar6 = *(uint *)((longlong)param_1 + 100);
      uVar12 = *(uint *)(param_1 + 1);
      lVar8 = *param_1;
      if ((int)uVar12 < 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        uVar10 = uVar12;
        do {
          uVar1 = (uVar10 >> 1) + uVar11;
          pfVar2 = (float *)(lVar8 + 8 + (ulonglong)uVar1 * 0xc);
          if (*(float *)(param_2 + 1) < *pfVar2 || *(float *)(param_2 + 1) == *pfVar2) {
            uVar11 = uVar1 + (uVar10 & 1);
          }
          bVar13 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar13);
      }
      if ((int)uVar11 < (int)uVar6) {
        uVar10 = uVar6 - 1;
        if (uVar6 != uVar12) {
          uVar10 = uVar12;
        }
        *(uint *)(param_1 + 1) = uVar10 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) == uVar10) {
          FUN_147be3296(param_1,uVar10);
          lVar8 = *param_1;
        }
        lVar5 = (ulonglong)uVar11 * 0xc;
        memmove((void *)(lVar8 + lVar5 + 0xc),(void *)(lVar8 + lVar5),
                (ulonglong)(uVar10 - uVar11) * 0xc);
        lVar8 = *param_1;
        *(longlong *)(lVar8 + lVar5) = *param_2;
        *(int *)(lVar8 + 8 + lVar5) = (int)param_2[1];
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
      goto LAB_147bdaa09;
    }
    *(undefined4 *)(param_1 + 1) = 1;
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      FUN_147be3296(param_1,0);
    }
    plVar7 = (longlong *)*param_1;
    *(int *)(plVar7 + 1) = (int)param_2[1];
    *plVar7 = *param_2;
  }
  FUN_147bdab34(param_1 + 2,local_34,param_2);
LAB_147bdaa09:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000147bda92b:
  iVar9 = *(int *)((longlong)plVar7 + 0xc);
  if (iVar9 == -1) goto LAB_147bda935;
  goto LAB_147bda917;
}



// FUNCTION 147bdab34 FUN_147bdab34 body=331 status=ok
// SIG undefined FUN_147bdab34(void)

undefined4 * FUN_147bdab34(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147be2ee0(param_1,local_48);
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147be2fc6(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_147be30bc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdac80 FUN_147bdac80 body=145 status=ok
// SIG undefined FUN_147bdac80(void)

void FUN_147bdac80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 8) * 0xc,(longlong)*(int *)(param_1 + 0xc) * 0xc);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x18) * 0x14,
             (longlong)*(int *)(param_1 + 0x1c) * 0x14);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x38) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x3c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x58) << 2;
                    /* WARNING: Could not recover jumptable at 0x000147bdad0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 147bdad16 FUN_147bdad16 body=623 status=ok
// SIG undefined FUN_147bdad16(void)

/* WARNING: Removing unreachable block (ram,0x000147bdaef9) */
/* WARNING: Removing unreachable block (ram,0x000147bdae27) */
/* WARNING: Removing unreachable block (ram,0x000147bdadbe) */
/* WARNING: Removing unreachable block (ram,0x000147bdae90) */
/* WARNING: Removing unreachable block (ram,0x000147bdaf62) */

void FUN_147bdad16(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x60) = 1;
  plVar1 = (longlong *)(param_1 + 0x68);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_1408be2c4(plVar1,0);
  }
  FUN_140056680(&local_30,L"Normal");
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  FUN_140056680(&local_30,L"Fault");
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  FUN_140056680(&local_30,L"PersistentFault");
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  FUN_140056680(&local_30,L"DisconnectCountdown");
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  FUN_140056680(&local_30,L"Disconnect");
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bdaf86 FUN_147bdaf86 body=190 status=ok
// SIG undefined FUN_147bdaf86(void)

void FUN_147bdaf86(longlong param_1,double param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      cVar2 = FUN_146efbae6();
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (cVar2 == '\0') {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x110) + 0x508);
        **(int **)(lVar3 + 0xa0) = **(int **)(lVar3 + 0xa0) + (iVar1 - *(int *)(param_1 + 0x118));
        *(int *)(param_1 + 0x118) = iVar1;
        lVar3 = *(longlong *)(param_1 + 0x10);
      }
    }
    cVar2 = FUN_146efbae6(lVar3);
    if (cVar2 == '\0') {
      FUN_146efb628(*(undefined8 *)(param_1 + 0x10),param_2);
    }
  }
  if ((*(longlong *)(param_1 + 0x110) != 0) && (1.0 < param_2 - *(double *)(param_1 + 0x128))) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x110) + 0x508);
    *(int *)(param_1 + 0x120) = iVar1 - *(int *)(param_1 + 0x11c);
    *(int *)(param_1 + 0x11c) = iVar1;
    *(double *)(param_1 + 0x128) = param_2;
  }
  return;
}



// FUNCTION 147bdb044 FUN_147bdb044 body=549 status=ok
// SIG undefined FUN_147bdb044(void)

void FUN_147bdb044(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar5 = FUN_14001cc68(0x970,0x10);
    FUN_147be3476(uVar5);
    lVar8 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    if (lVar8 != 0) {
      FUN_147bd2b44(lVar8);
      FUN_1400020a8(lVar8);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14a9ef220;
    local_88[0] = &LAB_1435a6e1a;
    local_60 = param_1;
    FUN_146efbb4e(uVar5,local_88);
    if (local_88[0] != (undefined1 *)0x0) {
      pppuVar7 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar7 = &local_68;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    local_98 = (void *)0x0;
    local_90 = *(int *)(param_1 + 0x108);
    lVar8 = (longlong)local_90;
    _Src = *(void **)(param_1 + 0x100);
    if (lVar8 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy(local_98,_Src,lVar8 * 2);
    }
    FUN_147bdb26a(uVar5,&local_98);
    plVar3 = *(longlong **)(param_1 + 0x110);
    if (plVar3 != (longlong *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      (**(code **)(*plVar3 + 0x2c0))(plVar3,local_a8,1);
      FUN_146efbb12(uVar5,local_a8);
    }
    if (*(int *)(param_1 + 0xc) != 2) {
      FUN_146efc20c(*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0xc) + -2);
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x18);
      lVar11 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 0x10);
        lVar10 = (longlong)*(int *)(lVar8 + lVar11);
        local_88[0] = (undefined1 *)CONCAT44(local_88[0]._4_4_,*(undefined4 *)(lVar8 + 4 + lVar11));
        lVar9 = lVar10 * 0x28 + 0x930 + lVar4;
        FUN_146f0005e(lVar9,local_88);
        lVar6 = *(longlong *)(lVar9 + 0x18);
        if (*(longlong *)(lVar9 + 0x18) == 0) {
          lVar6 = lVar9;
        }
        uVar2 = *(undefined4 *)(lVar9 + 0x20);
        lVar4 = *(longlong *)(lVar4 + 0x1f0);
        lVar10 = lVar10 * 0x10;
        *(longlong *)(lVar4 + lVar10) = lVar6;
        *(undefined4 *)(lVar4 + 8 + lVar10) = uVar2;
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar1 * 8 != lVar11);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_147be3884(param_1 + 0x18);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdb26a FUN_147bdb26a body=193 status=ok
// SIG undefined FUN_147bdb26a(void)

void FUN_147bdb26a(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = FUN_146efbbf8();
  local_50 = (void *)0x0;
  local_48 = (int)param_2[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  local_40 = FUN_146efbc00();
  local_38 = FUN_146288c34();
  FUN_142a62564(param_1,&local_58);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdb32c FUN_147bdb32c body=554 status=ok
// SIG undefined FUN_147bdb32c(void)

void FUN_147bdb32c(longlong param_1,longlong param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_60;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 < 2) {
    if ((*(char *)(param_2 + 0x19) == '\x01') && (0 < *(int *)(param_1 + 0x120))) {
      piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0xa0);
      *piVar4 = *piVar4 + *(int *)(param_1 + 0x120);
    }
    if ((*(char *)(param_3 + 0x30) == '\x01') && (*(longlong *)(param_1 + 0x110) != 0)) {
      local_48 = 0;
      FUN_1459b235e(&local_78,0x6f);
      FUN_1435a3542(&local_48,&local_78);
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      FUN_1459b235e(&local_78,0x70);
      FUN_1435a3542(&local_48,&local_78);
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      FUN_1435a3542(&local_48,*(undefined8 *)(param_1 + 0x28));
      lVar6 = local_48;
      FUN_143587ad8(*(undefined8 *)(param_1 + 0x110),local_48);
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_146effd44(param_1 + 0x30,0);
      }
      *(undefined1 *)(param_1 + 8) = 1;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + -0x10))(lVar6 + -0x10);
      }
    }
    goto LAB_147bdb511;
  }
  if ((*(char *)(param_3 + 0x19) != '\x01') || (lVar6 = *(longlong *)(param_1 + 0x28), lVar6 == 0))
  goto LAB_147bdb511;
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 == 0) {
LAB_147bdb4f5:
    *(undefined8 *)(param_1 + 0x28) = 0;
    (**(code **)(lVar6 + -0x10))(lVar6 + -0x10);
  }
  else {
    do {
      FUN_14622a6f8(lVar6,&local_78,2);
      iVar5 = local_70 + -1;
      puVar2 = local_78;
      if (local_70 == 0) {
        iVar5 = 0;
        puVar2 = &DAT_149dfb77a;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar2);
      piVar4 = (int *)FUN_146b84648(lVar1 + 0x590,uVar3,&local_78);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *piVar4 = *piVar4 + 1;
      lVar6 = *(longlong *)(lVar6 + 0x28);
    } while (lVar6 != 0);
    lVar6 = *(longlong *)(param_1 + 0x28);
    if (lVar6 != 0) goto LAB_147bdb4f5;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_146effd44(param_1 + 0x30,0);
  }
LAB_147bdb511:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdb558 FUN_147bdb558 body=66 status=ok
// SIG undefined FUN_147bdb558(void)

void FUN_147bdb558(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  uVar3 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  lVar2 = (longlong)((int)uVar3 >> 5);
  if (param_2 == 0) {
    uVar3 = *(uint *)(lVar1 + lVar2 * 4) | 1;
  }
  else {
    uVar3 = *(uint *)(lVar1 + lVar2 * 4) & ~(1 << (param_2 & 0x1f));
  }
  *(uint *)(lVar1 + lVar2 * 4) = uVar3;
  if (*(uint *)(param_1 + 0x20) < param_2) {
    param_2 = *(uint *)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 147bdb59a FUN_147bdb59a body=352 status=ok
// SIG undefined FUN_147bdb59a(void)

undefined8 FUN_147bdb59a(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    iVar8 = (int)local_30;
    iVar9 = local_30._4_4_;
  }
  uVar2 = FUN_144a78877(iVar8,iVar9);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      lVar7 = *param_1;
      do {
        lVar6 = (longlong)iVar4 * 0x60;
        lVar1 = lVar7 + lVar6;
        if ((*(int *)(lVar7 + lVar6) == iVar8) && (*(int *)(lVar7 + 4 + lVar6) == iVar9)) {
          if (lVar1 != 0) {
            iVar8 = 0;
            iVar9 = 0;
            if (param_3 != 0) {
              local_30 = 0;
              FUN_14485c47a(&local_30,param_3);
              iVar8 = local_30._4_4_;
              iVar9 = (int)local_30;
            }
            uVar2 = FUN_144a78877(iVar9,iVar8);
            if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
              lVar7 = lVar1 + 0x40;
              if (*(longlong *)(lVar1 + 0x48) != 0) {
                lVar7 = *(longlong *)(lVar1 + 0x48);
              }
              iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar1 + 0x50) - 1U & uVar2) * 4);
              if (iVar4 != -1) {
                lVar7 = *(longlong *)(lVar1 + 8);
                goto LAB_147bdb6cb;
              }
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x58);
      } while (iVar4 != -1);
    }
  }
  uVar3 = 0;
  goto LAB_147bdb5ef;
  while( true ) {
    iVar4 = *(int *)(lVar1 + 0x18);
    uVar3 = 0;
    if (iVar4 == -1) break;
LAB_147bdb6cb:
    lVar6 = (longlong)iVar4 * 0x20;
    lVar1 = lVar7 + lVar6;
    if ((*(int *)(lVar7 + lVar6) == iVar9) && (*(int *)(lVar7 + 4 + lVar6) == iVar8)) {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
      break;
    }
  }
LAB_147bdb5ef:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147bdb6fc FUN_147bdb6fc body=504 status=ok
// SIG undefined FUN_147bdb6fc(void)

undefined8 * FUN_147bdb6fc(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == 0) {
    iVar10 = 0;
    iVar11 = 0;
  }
  else {
    local_40 = 0;
    FUN_14485c47a(&local_40,param_3);
    iVar11 = (int)local_40;
    iVar10 = local_40._4_4_;
  }
  uVar5 = FUN_144a78877(iVar11,iVar10);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x60;
        lVar2 = lVar6 + lVar8;
        if ((*(int *)(lVar6 + lVar8) == iVar11) && (*(int *)(lVar6 + 4 + lVar8) == iVar10)) {
          if (lVar2 != 0) {
            if (param_4 == 0) {
              iVar10 = 0;
              iVar11 = 0;
            }
            else {
              local_40 = 0;
              FUN_14485c47a(&local_40,param_4);
              iVar11 = (int)local_40;
              iVar10 = local_40._4_4_;
            }
            uVar5 = FUN_144a78877(iVar11,iVar10);
            if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
              lVar6 = lVar2 + 0x40;
              if (*(longlong *)(lVar2 + 0x48) != 0) {
                lVar6 = *(longlong *)(lVar2 + 0x48);
              }
              iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & uVar5) * 4);
              if (iVar7 != -1) {
                lVar6 = *(longlong *)(lVar2 + 8);
                goto LAB_147bdb83b;
              }
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x58);
      } while (iVar7 != -1);
    }
  }
  goto LAB_147bdb75e;
  while (iVar7 = *(int *)(lVar2 + 0x18), iVar7 != -1) {
LAB_147bdb83b:
    lVar8 = (longlong)iVar7 * 0x20;
    lVar2 = lVar6 + lVar8;
    if ((*(int *)(lVar6 + lVar8) == iVar11) && (*(int *)(lVar6 + 4 + lVar8) == iVar10)) {
      if (lVar2 == 0) break;
      uVar3 = *(undefined8 *)(lVar2 + 8);
      plVar9 = *(longlong **)(lVar2 + 0x10);
      if (plVar9 == (longlong *)0x0) {
        *param_2 = uVar3;
        break;
      }
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar4 = (longlong *)param_2[1];
      *param_2 = uVar3;
      if (plVar9 == plVar4) {
        LOCK();
        plVar4 = plVar9 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 != 0) break;
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) break;
        lVar6 = *plVar9;
      }
      else {
        param_2[1] = plVar9;
        if (plVar4 == (longlong *)0x0) break;
        LOCK();
        plVar9 = plVar4 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 != 0) break;
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) break;
        lVar6 = *plVar4;
        plVar9 = plVar4;
      }
      (**(code **)(lVar6 + 0x10))(plVar9);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
LAB_147bdb75e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bdb8fa FUN_147bdb8fa body=195 status=ok
// SIG undefined FUN_147bdb8fa(void)

bool FUN_147bdb8fa(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = param_3;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_38 = local_28;
  }
  FUN_147bdb9be(param_1,&local_28,&local_38);
  uVar3 = local_28;
  iVar2 = (int)local_28;
  if ((longlong)(int)local_28 != -1) {
    lVar1 = (longlong)(int)local_28 * 0x60;
    FUN_147bdba42(*param_1 + lVar1 + 8,&local_30);
    if (*(int *)(*param_1 + 0x10 + lVar1) == *(int *)(*param_1 + 0x3c + lVar1)) {
      FUN_1403cc47c(param_1,uVar3 & 0xffffffff);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdb9be FUN_147bdb9be body=131 status=ok
// SIG undefined FUN_147bdb9be(void)

int * FUN_147bdb9be(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x60;
        if ((*(int *)(lVar1 + lVar5) == *param_3) && (*(int *)(lVar1 + 4 + lVar5) == param_3[1]))
        goto LAB_147bdb9e7;
        iVar3 = *(int *)(lVar5 + lVar1 + 0x58);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_147bdb9e7:
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 147bdba42 FUN_147bdba42 body=129 status=ok
// SIG undefined FUN_147bdba42(void)

void FUN_147bdba42(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1])) {
          FUN_140d7d13e(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147bdbac4 FUN_147bdbac4 body=740 status=ok
// SIG undefined FUN_147bdbac4(void)

void FUN_147bdbac4(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = param_1 + 2;
  local_c0 = (longlong *)&DAT_100000000;
  local_b0 = 0xffffffff;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  uStack_b8 = local_d0;
  if ((int)param_1[5] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_c0);
    iVar7 = (int)param_1[5];
  }
  local_80 = local_b0;
  lVar2 = local_80;
  uStack_78 = uStack_a8;
  local_90 = (undefined4)local_c0;
  uStack_8c = local_c0._4_4_;
  uStack_88 = (undefined4)uStack_b8;
  uStack_84 = uStack_b8._4_4_;
  local_80._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
  local_98 = param_1;
  if ((local_80._4_4_ != iVar7) || (uStack_b8 != local_d0)) {
    iVar3 = local_80._4_4_;
    local_d4 = iVar7;
    local_c8 = param_1;
    local_80 = lVar2;
    do {
      lVar2 = *local_98;
      lVar5 = (longlong)iVar3 * 0x60;
      lVar8 = lVar2 + lVar5 + 0x18;
      local_70 = (longlong *)&DAT_100000000;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_68 = lVar8;
      if (*(int *)(lVar2 + lVar5 + 0x30) != 0) {
        FUN_1449c0562(&local_70);
      }
      puVar1 = (undefined8 *)(lVar2 + lVar5);
      plVar6 = (longlong *)(lVar2 + lVar5 + 8);
      uStack_a8 = local_60;
      local_a0 = local_58;
      local_9c = local_54;
      uStack_b8 = local_70;
      local_b0 = local_68;
      uVar4 = *(uint *)(puVar1 + 6);
      local_70 = (longlong *)CONCAT44(1 << ((byte)uVar4 & 0x1f),(int)uVar4 >> 5);
      local_60 = CONCAT44(uVar4,-1 << ((byte)uVar4 & 0x1f));
      local_58 = uVar4 & 0xffffffe0;
      local_c0 = plVar6;
      local_68 = lVar8;
      if (*(uint *)(puVar1 + 6) != uVar4) {
        FUN_1449c0562(&local_70);
        uVar4 = local_60._4_4_;
      }
      lVar2 = local_68;
      if ((local_c0 != plVar6 || local_b0 != local_68) || uStack_a8._4_4_ != uVar4) {
        do {
          local_50 = *(undefined8 *)(*local_c0 + (longlong)(int)uStack_a8._4_4_ * 0x20);
          local_70 = (longlong *)*puVar1;
          (*(code *)*param_2)(param_2[1],&local_70,&local_50);
          uStack_a8 = CONCAT44(uStack_a8._4_4_,(uint)uStack_a8 & ~uStack_b8._4_4_);
          FUN_1449c0562(&uStack_b8);
        } while (local_c0 != plVar6 || (local_b0 != lVar2 || uStack_a8._4_4_ != uVar4));
      }
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
      FUN_1449c0562(&local_90);
      iVar3 = local_80._4_4_;
      lVar2 = local_80;
    } while (local_98 != local_c8 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != local_d0 || local_80._4_4_ != local_d4));
  }
  local_80 = lVar2;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


