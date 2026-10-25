// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146efe93a FUN_146efe93a body=93 status=ok
// SIG undefined FUN_146efe93a(void)

void FUN_146efe93a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f7ca50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146efe998 FUN_146efe998 body=126 status=ok
// SIG undefined FUN_146efe998(void)

void FUN_146efe998(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f7ca50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146efea07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146efea22 FUN_146efea22 body=53 status=ok
// SIG undefined FUN_146efea22(void)

void FUN_146efea22(void)

{
  FUN_146efea58();
  if (DAT_14c998138 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c998118 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146efea58 FUN_146efea58 body=105 status=ok
// SIG undefined FUN_146efea58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146efea58(void)

{
  DAT_14c998120 = 0;
  if (DAT_14c998124 != 0) {
    FUN_144727cd0(&DAT_14c998118,0);
  }
  _DAT_14c998148 = 0xffffffff;
  DAT_14c998140 = 0;
  if (0x80 < DAT_14c998144) {
    DAT_14c998144 = 0x80;
    FUN_1446efbd8(&DAT_14c998128,0);
    return;
  }
  return;
}



// FUNCTION 146efeb4a FUN_146efeb4a body=59 status=ok
// SIG undefined FUN_146efeb4a(void)

undefined8 FUN_146efeb4a(longlong *param_1)

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



// FUNCTION 146efec1a FUN_146efec1a body=134 status=ok
// SIG undefined FUN_146efec1a(void)

undefined8 FUN_146efec1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140cae46a(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    FUN_140cae504(param_2 + 0x58,param_3 + 0x58);
    FUN_140cae59e(param_2 + 0xa8,param_3 + 0xa8);
    uVar1 = *(undefined4 *)(param_3 + 0xfc);
    uVar2 = *(undefined4 *)(param_3 + 0x100);
    uVar3 = *(undefined4 *)(param_3 + 0x104);
    *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_3 + 0xf8);
    *(undefined4 *)(param_2 + 0xfc) = uVar1;
    *(undefined4 *)(param_2 + 0x100) = uVar2;
    *(undefined4 *)(param_2 + 0x104) = uVar3;
    *(undefined8 *)(param_2 + 0x105) = *(undefined8 *)(param_3 + 0x105);
    param_2 = param_2 + 0x110;
    param_3 = param_3 + 0x110;
  }
  return 1;
}



// FUNCTION 146efecc8 FUN_146efecc8 body=59 status=ok
// SIG undefined FUN_146efecc8(void)

undefined8 FUN_146efecc8(longlong *param_1)

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



// FUNCTION 146efed14 FUN_146efed14 body=38 status=ok
// SIG undefined FUN_146efed14(void)

void FUN_146efed14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_1409def00(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 146efed88 FUN_146efed88 body=100 status=ok
// SIG undefined FUN_146efed88(void)

void FUN_146efed88(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1);
  return;
}



// FUNCTION 146efedec FUN_146efedec body=116 status=ok
// SIG undefined FUN_146efedec(void)

void FUN_146efedec(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 200)) {
      uVar2 = uVar1 / 200 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,200,8);
  }
  return;
}



// FUNCTION 146efee60 FUN_146efee60 body=150 status=ok
// SIG undefined FUN_146efee60(void)

void FUN_146efee60(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146efeef8 FUN_146efeef8 body=223 status=ok
// SIG undefined FUN_146efeef8(void)

undefined8 * FUN_146efeef8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140492002();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_140492002(param_1 + 10,param_2 + 0x50);
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0xa8);
  _Src = *(void **)(param_2 + 0xa0);
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],_Src,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 146efefd8 FUN_146efefd8 body=110 status=ok
// SIG undefined FUN_146efefd8(void)

void FUN_146efefd8(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_140e90f30(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140a2be0e(param_1);
    return;
  }
  FUN_146eff046(param_1);
  FUN_140e90f30(param_1,param_2);
  return;
}



// FUNCTION 146eff046 FUN_146eff046 body=322 status=ok
// SIG undefined FUN_146eff046(void)

void FUN_146eff046(longlong *param_1)

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



// FUNCTION 146eff18a FUN_146eff18a body=346 status=ok
// SIG undefined FUN_146eff18a(void)

undefined4 *
FUN_146eff18a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a2bc24(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140a2bb88(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
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
      FUN_140a2be0e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eff2e6 FUN_146eff2e6 body=356 status=ok
// SIG undefined FUN_146eff2e6(void)

undefined4 * FUN_146eff2e6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146eff44c(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  local_40[1] = *puVar1;
  lVar7 = puVar1[1];
  local_40[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_146eff532(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_146eff664(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eff44c FUN_146eff44c body=229 status=ok
// SIG undefined FUN_146eff44c(void)

int * FUN_146eff44c(longlong *param_1,int *param_2)

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



// FUNCTION 146eff532 FUN_146eff532 body=191 status=ok
// SIG undefined FUN_146eff532(void)

undefined8 FUN_146eff532(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_146eff5f2(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 146eff5f2 FUN_146eff5f2 body=114 status=ok
// SIG undefined FUN_146eff5f2(void)

void FUN_146eff5f2(longlong *param_1,int param_2)

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



// FUNCTION 146eff664 FUN_146eff664 body=476 status=ok
// SIG undefined FUN_146eff664(void)

void FUN_146eff664(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146eff842 FUN_146eff842 body=38 status=ok
// SIG undefined FUN_146eff842(void)

undefined8 FUN_146eff842(undefined8 param_1,int param_2)

{
  FUN_1448eac94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eff868 FUN_146eff868 body=27 status=ok
// SIG undefined FUN_146eff868(void)

void FUN_146eff868(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146eff884 FUN_146eff884 body=132 status=ok
// SIG undefined FUN_146eff884(void)

void FUN_146eff884(longlong param_1,int param_2)

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



// FUNCTION 146eff90a FUN_146eff90a body=62 status=ok
// SIG undefined FUN_146eff90a(void)

void FUN_146eff90a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146eff948(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146eff948 FUN_146eff948 body=93 status=ok
// SIG undefined FUN_146eff948(void)

ulonglong FUN_146eff948(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146eff9a6 FUN_146eff9a6 body=132 status=ok
// SIG undefined FUN_146eff9a6(void)

void FUN_146eff9a6(longlong param_1,int param_2)

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



// FUNCTION 146effa2c FUN_146effa2c body=62 status=ok
// SIG undefined FUN_146effa2c(void)

void FUN_146effa2c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146effa6a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146effa6a FUN_146effa6a body=93 status=ok
// SIG undefined FUN_146effa6a(void)

ulonglong FUN_146effa6a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146effac8 FUN_146effac8 body=125 status=ok
// SIG undefined FUN_146effac8(void)

void FUN_146effac8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x80c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x80c) = iVar5;
    FUN_146effb46(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146effb46 FUN_146effb46 body=144 status=ok
// SIG undefined FUN_146effb46(void)

void FUN_146effb46(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x800);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x800,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x800),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x800,param_2,param_3,0x10);
  return;
}



// FUNCTION 146effbd6 FUN_146effbd6 body=67 status=ok
// SIG undefined FUN_146effbd6(void)

void FUN_146effbd6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146effc1a(*(undefined4 *)(param_1 + 0x808),*(undefined4 *)(param_1 + 0x80c));
  if (iVar1 == *(int *)(param_1 + 0x80c)) {
    return;
  }
  *(int *)(param_1 + 0x80c) = iVar1;
  FUN_146effb46(param_1,*(undefined4 *)(param_1 + 0x808),iVar1);
  return;
}



// FUNCTION 146effc1a FUN_146effc1a body=111 status=ok
// SIG undefined FUN_146effc1a(void)

ulonglong FUN_146effc1a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x80;
  if (0x80 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146effc8a FUN_146effc8a body=95 status=ok
// SIG undefined FUN_146effc8a(void)

void FUN_146effc8a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146effcea FUN_146effcea body=90 status=ok
// SIG undefined FUN_146effcea(void)

ulonglong FUN_146effcea(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(char *)(lVar2 + uVar3) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_146effd31;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140cd36ae(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(char *)(lVar2 + uVar4) = *param_2;
LAB_146effd31:
  return uVar4 & 0xffffffff;
}



// FUNCTION 146effd44 FUN_146effd44 body=101 status=ok
// SIG undefined FUN_146effd44(void)

void FUN_146effd44(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_140694960(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 146effdaa FUN_146effdaa body=79 status=ok
// SIG undefined FUN_146effdaa(void)

int FUN_146effdaa(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x6c) - iVar1) < param_2) {
    FUN_146effe56(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = param_1;
  }
  FUN_146eff868((longlong)iVar1 * 0x10 + lVar2,param_2);
  return iVar1;
}



// FUNCTION 146effdfa FUN_146effdfa body=91 status=ok
// SIG undefined FUN_146effdfa(void)

int FUN_146effdfa(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x608);
  *(uint *)(param_1 + 0x608) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x60c) - iVar1) < param_2) {
    FUN_146efff52(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar2 = param_1;
  }
  FUN_146eff868((longlong)iVar1 * 0x10 + lVar2,param_2);
  return iVar1;
}



// FUNCTION 146effe56 FUN_146effe56 body=116 status=ok
// SIG undefined FUN_146effe56(void)

void FUN_146effe56(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    uVar4 = 6;
    if (6 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x6c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x6c) = (int)uVar4;
    FUN_146effecc(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146effecc FUN_146effecc body=133 status=ok
// SIG undefined FUN_146effecc(void)

void FUN_146effecc(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,param_4);
  return;
}



// FUNCTION 146efff52 FUN_146efff52 body=125 status=ok
// SIG undefined FUN_146efff52(void)

void FUN_146efff52(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x60;
    if (0x60 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x60 < *(uint *)(param_1 + 0x60c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x60c) = (int)uVar4;
    FUN_146efffd0(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146efffd0 FUN_146efffd0 body=142 status=ok
// SIG undefined FUN_146efffd0(void)

void FUN_146efffd0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 0x61) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f0005e FUN_146f0005e body=122 status=ok
// SIG undefined FUN_146f0005e(void)

ulonglong FUN_146f0005e(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar6 = uVar5 * 4;
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4 * 4) == *param_2) {
        if ((int)uVar4 != -1) {
          uVar5 = uVar4 & 0xffffffff;
          goto LAB_146f000b5;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f000d8(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + uVar5 * 4) = *param_2;
LAB_146f000b5:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146f000d8 FUN_146f000d8 body=116 status=ok
// SIG undefined FUN_146f000d8(void)

void FUN_146f000d8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar4 = 6;
    if (6 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x24)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar4;
    FUN_146f0014e(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f0014e FUN_146f0014e body=133 status=ok
// SIG undefined FUN_146f0014e(void)

void FUN_146f0014e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f001d4 FUN_146f001d4 body=132 status=ok
// SIG undefined FUN_146f001d4(void)

void FUN_146f001d4(longlong param_1,int param_2)

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



// FUNCTION 146f0025a FUN_146f0025a body=110 status=ok
// SIG undefined FUN_146f0025a(void)

void FUN_146f0025a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_146f002ca(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f002ca FUN_146f002ca body=132 status=ok
// SIG undefined FUN_146f002ca(void)

void FUN_146f002ca(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 146f0034e FUN_146f0034e body=38 status=ok
// SIG undefined FUN_146f0034e(void)

void FUN_146f0034e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1448eac94(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 146f00374 FUN_146f00374 body=48 status=ok
// SIG undefined FUN_146f00374(void)

void FUN_146f00374(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 146f003a4 FUN_146f003a4 body=29 status=ok
// SIG undefined FUN_146f003a4(void)

void FUN_146f003a4(undefined8 *param_1)

{
  FUN_144a7c084();
  *param_1 = &PTR_FUN_149f7cfb0;
  return;
}



// FUNCTION 146f003c2 FUN_146f003c2 body=147 status=ok
// SIG undefined FUN_146f003c2(void)

void FUN_146f003c2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f00456 FUN_146f00456 body=38 status=ok
// SIG undefined FUN_146f00456(void)

undefined8 FUN_146f00456(undefined8 param_1,int param_2)

{
  FUN_1448eac94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f0047c FUN_146f0047c body=233 status=ok
// SIG undefined FUN_146f0047c(void)

ulonglong FUN_146f0047c(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 == param_2) goto LAB_146f004cc;
  lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_1446f4bba();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (DAT_14c997e78 == 0) {
        uVar4 = FUN_141298036();
        DAT_14c997e78 = FUN_140002ddd(FUN_146288b04,uVar4,L"StateStruct");
        if (DAT_14c997e78 != 0) goto LAB_146f004e4;
      }
      else {
LAB_146f004e4:
        if ((*(int *)(DAT_14c997e78 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c997e78 + 0x38) * 8) ==
            DAT_14c997e78 + 0x30)) {
          cVar1 = (**(code **)(*param_2 + 8))(param_2);
          if (cVar1 != '\0') {
            (**(code **)(*param_1 + 0x48))(param_1);
            param_1[1] = param_2[1];
            param_1[2] = param_2[2];
            *(char *)(param_1 + 4) = (char)param_2[4];
            *(undefined1 *)(param_2 + 4) = 0;
            (**(code **)(*param_2 + 0x48))(param_2);
            goto LAB_146f004cc;
          }
        }
      }
      uVar5 = 0;
      goto LAB_146f004cc;
    }
  }
  FUN_144aa17a4(param_1);
LAB_146f004cc:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146f00566 FUN_146f00566 body=289 status=ok
// SIG undefined FUN_146f00566(void)

undefined4 * FUN_146f00566(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f00688(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_144a78877(uVar5,uVar5 >> 0x20);
  cVar2 = FUN_146f0076e(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_146f0085a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f00688 FUN_146f00688 body=229 status=ok
// SIG undefined FUN_146f00688(void)

int * FUN_146f00688(longlong *param_1,int *param_2)

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



// FUNCTION 146f0076e FUN_146f0076e body=121 status=ok
// SIG undefined FUN_146f0076e(void)

undefined8 FUN_146f0076e(longlong *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == (int)*param_3) {
          *puVar1 = *param_3;
          FUN_146f007e8(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f007e8 FUN_146f007e8 body=114 status=ok
// SIG undefined FUN_146f007e8(void)

void FUN_146f007e8(longlong *param_1,int param_2)

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



// FUNCTION 146f0085a FUN_146f0085a body=451 status=ok
// SIG undefined FUN_146f0085a(void)

void FUN_146f0085a(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x10;
        iVar6 = FUN_144a78877(*(ulonglong *)(lVar3 + lVar10),*(ulonglong *)(lVar3 + lVar10) >> 0x20)
        ;
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar10) =
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



// FUNCTION 146f00a1e FUN_146f00a1e body=20 status=ok
// SIG undefined FUN_146f00a1e(void)

void FUN_146f00a1e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(byte *)(param_1 + lVar1) = *(byte *)(param_1 + lVar1) & 0xfc;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 146f00a32 FUN_146f00a32 body=124 status=ok
// SIG undefined FUN_146f00a32(void)

void FUN_146f00a32(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f00ab0 FUN_146f00ab0 body=119 status=ok
// SIG undefined FUN_146f00ab0(void)

void FUN_146f00ab0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146f00b28 FUN_146f00b28 body=322 status=ok
// SIG undefined FUN_146f00b28(void)

void FUN_146f00b28(longlong *param_1)

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



// FUNCTION 146f00c6c FUN_146f00c6c body=29 status=ok
// SIG undefined FUN_146f00c6c(void)

undefined8 FUN_146f00c6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f00ca6 FUN_146f00ca6 body=93 status=ok
// SIG undefined FUN_146f00ca6(void)

void FUN_146f00ca6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f7d070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f00d04 FUN_146f00d04 body=93 status=ok
// SIG undefined FUN_146f00d04(void)

void FUN_146f00d04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f7d070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f00d62 FUN_146f00d62 body=126 status=ok
// SIG undefined FUN_146f00d62(void)

void FUN_146f00d62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f7d070;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f00dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f00dec FUN_146f00dec body=21 status=ok
// SIG undefined FUN_146f00dec(void)

undefined8 FUN_146f00dec(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f00e02 FUN_146f00e02 body=48 status=ok
// SIG undefined FUN_146f00e02(void)

void FUN_146f00e02(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 146f00e32 FUN_146f00e32 body=46 status=ok
// SIG undefined FUN_146f00e32(void)

void FUN_146f00e32(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_140056680(param_1 + 0x28,&DAT_149dfb77a);
  return;
}



// FUNCTION 146f00e60 FUN_146f00e60 body=143 status=ok
// SIG undefined FUN_146f00e60(void)

void FUN_146f00e60(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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



// FUNCTION 146f00ef0 FUN_146f00ef0 body=25 status=ok
// SIG undefined FUN_146f00ef0(void)

void FUN_146f00ef0(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x1c);
    return;
  }
  return;
}



// FUNCTION 146f00f0a FUN_146f00f0a body=157 status=ok
// SIG undefined FUN_146f00f0a(void)

void FUN_146f00f0a(longlong param_1,int param_2)

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



// FUNCTION 146f00fa8 FUN_146f00fa8 body=62 status=ok
// SIG undefined FUN_146f00fa8(void)

void FUN_146f00fa8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f00fe6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 146f00fe6 FUN_146f00fe6 body=121 status=ok
// SIG undefined FUN_146f00fe6(void)

ulonglong FUN_146f00fe6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1c) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f01023;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1c,4);
      param_2 = param_2 / 0x1c;
    }
  }
LAB_146f01023:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f010de FUN_146f010de body=59 status=ok
// SIG undefined FUN_146f010de(void)

void FUN_146f010de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f0111a(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_1456af3ba(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,8);
  return;
}



// FUNCTION 146f0111a FUN_146f0111a body=105 status=ok
// SIG undefined FUN_146f0111a(void)

ulonglong FUN_146f0111a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f01184 FUN_146f01184 body=34 status=ok
// SIG undefined FUN_146f01184(void)

void FUN_146f01184(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f7d150;
  return;
}



// FUNCTION 146f011a6 FUN_146f011a6 body=31 status=ok
// SIG undefined FUN_146f011a6(void)

undefined8 FUN_146f011a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f011e2 FUN_146f011e2 body=93 status=ok
// SIG undefined FUN_146f011e2(void)

void FUN_146f011e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f7d0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f01240 FUN_146f01240 body=126 status=ok
// SIG undefined FUN_146f01240(void)

void FUN_146f01240(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f7d0e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f012af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f012ca FUN_146f012ca body=21 status=ok
// SIG undefined FUN_146f012ca(void)

undefined8 FUN_146f012ca(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f012e0 FUN_146f012e0 body=29 status=ok
// SIG undefined FUN_146f012e0(void)

undefined8 FUN_146f012e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f012fe FUN_146f012fe body=49 status=ok
// SIG undefined FUN_146f012fe(void)

void FUN_146f012fe(void)

{
  undefined8 uVar1;
  
  FUN_146efd568();
  uVar1 = FUN_14001cc68(0x98,0x10);
  FUN_146efcb86(uVar1);
  DAT_14c997ef0 = uVar1;
  return;
}



// FUNCTION 146f01330 FUN_146f01330 body=93 status=ok
// SIG undefined FUN_146f01330(void)

void FUN_146f01330(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c997ef0;
  if (DAT_14c997ef0 != 0) {
    FUN_146efcc0e(DAT_14c997ef0);
    FUN_1400020a8(lVar1);
  }
  lVar1 = DAT_14c997f58;
  DAT_14c997ef0 = 0;
  if (DAT_14c997f58 != 0) {
    FUN_146efd5be(DAT_14c997f58);
    FUN_1400020a8(lVar1);
  }
  DAT_14c997f58 = 0;
  return;
}



// FUNCTION 146f01392 FUN_146f01392 body=87 status=ok
// SIG undefined FUN_146f01392(void)

void FUN_146f01392(longlong *param_1,int param_2)

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
  FUN_146f013ea();
  return;
}



// FUNCTION 146f013ea FUN_146f013ea body=114 status=ok
// SIG undefined FUN_146f013ea(void)

void FUN_146f013ea(longlong *param_1,int param_2)

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



// FUNCTION 146f0145c FUN_146f0145c body=128 status=ok
// SIG undefined FUN_146f0145c(void)

undefined8 FUN_146f0145c(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_144a78877(*param_2,*param_2 >> 0x20);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == (int)*param_2) {
          FUN_146f014dc(param_1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f014dc FUN_146f014dc body=87 status=ok
// SIG undefined FUN_146f014dc(void)

void FUN_146f014dc(longlong *param_1,int param_2)

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
  FUN_146f01534();
  return;
}



// FUNCTION 146f01534 FUN_146f01534 body=114 status=ok
// SIG undefined FUN_146f01534(void)

void FUN_146f01534(longlong *param_1,int param_2)

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



// FUNCTION 146f015a6 FUN_146f015a6 body=303 status=ok
// SIG undefined FUN_146f015a6(void)

undefined4 * FUN_146f015a6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f016d6(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a78877(uVar6,uVar6 >> 0x20);
  cVar3 = FUN_146f017bc(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f0183a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f016d6 FUN_146f016d6 body=230 status=ok
// SIG undefined FUN_146f016d6(void)

int * FUN_146f016d6(longlong *param_1,int *param_2)

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



// FUNCTION 146f017bc FUN_146f017bc body=125 status=ok
// SIG undefined FUN_146f017bc(void)

undefined8 FUN_146f017bc(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_146f01534(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f0183a FUN_146f0183a body=448 status=ok
// SIG undefined FUN_146f0183a(void)

void FUN_146f0183a(longlong *param_1)

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
        lVar10 = (longlong)iVar5;
        uVar7 = *(ulonglong *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a78877(uVar7,uVar7 >> 0x20);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
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



// FUNCTION 146f019fc FUN_146f019fc body=326 status=ok
// SIG undefined FUN_146f019fc(void)

undefined4 * FUN_146f019fc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f01b44(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146f01c2a(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f01caa(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f01b44 FUN_146f01b44 body=230 status=ok
// SIG undefined FUN_146f01b44(void)

int * FUN_146f01b44(longlong *param_1,int *param_2)

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



// FUNCTION 146f01c2a FUN_146f01c2a body=128 status=ok
// SIG undefined FUN_146f01c2a(void)

undefined8 FUN_146f01c2a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146f013ea((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f01caa FUN_146f01caa body=474 status=ok
// SIG undefined FUN_146f01caa(void)

void FUN_146f01caa(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f01e86 FUN_146f01e86 body=119 status=ok
// SIG undefined FUN_146f01e86(void)

int * FUN_146f01e86(longlong *param_1,int *param_2,ulonglong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  uVar1 = FUN_144a78877(*param_3,*param_3 >> 0x20);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x18) == (int)*param_3) goto LAB_146f01eb2;
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_146f01eb2:
  *param_2 = iVar2;
  return param_2;
}



// FUNCTION 146f01f82 FUN_146f01f82 body=116 status=ok
// SIG undefined FUN_146f01f82(void)

void FUN_146f01f82(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x1c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar4;
    FUN_146f01ff8(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f01ff8 FUN_146f01ff8 body=133 status=ok
// SIG undefined FUN_146f01ff8(void)

void FUN_146f01ff8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f0207e FUN_146f0207e body=31 status=ok
// SIG undefined FUN_146f0207e(void)

undefined8 FUN_146f0207e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f020ae FUN_146f020ae body=93 status=ok
// SIG undefined FUN_146f020ae(void)

void FUN_146f020ae(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f7d190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f0210c FUN_146f0210c body=93 status=ok
// SIG undefined FUN_146f0210c(void)

void FUN_146f0210c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f7d190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f0216a FUN_146f0216a body=126 status=ok
// SIG undefined FUN_146f0216a(void)

void FUN_146f0216a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f7d190;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f021d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f021f4 FUN_146f021f4 body=193 status=ok
// SIG undefined FUN_146f021f4(void)

void FUN_146f021f4(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_146f0228b;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146f0228b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146f022b6 FUN_146f022b6 body=136 status=ok
// SIG undefined FUN_146f022b6(void)

void FUN_146f022b6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != &DAT_14c9980d0) {
    local_20 = 0;
    local_18 = 0;
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_20);
    }
    FUN_144a450dc(&DAT_14c9980d0,&local_20);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f02340 FUN_146f02340 body=136 status=ok
// SIG undefined FUN_146f02340(void)

void FUN_146f02340(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != &DAT_14c9980e0) {
    local_20 = 0;
    local_18 = 0;
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_20);
    }
    FUN_144a450dc(&DAT_14c9980e0,&local_20);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f023ca FUN_146f023ca body=468 status=ok
// SIG undefined FUN_146f023ca(void)

void FUN_146f023ca(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  iVar3 = DAT_14c998120;
  if (DAT_14c998120 < 0x200) {
    uVar8 = 0x200 - DAT_14c998120;
    iVar9 = DAT_14c998120;
    if (DAT_14c998124 < 0x200) {
      FUN_144727cd0(&DAT_14c998118,0x200);
      iVar9 = DAT_14c998120;
    }
    DAT_14c998120 = iVar9 + uVar8;
    if ((uint)(DAT_14c998124 - iVar9) < uVar8) {
      FUN_14482b872(&DAT_14c998118,iVar9);
    }
    lVar2 = DAT_14c998118;
    if (iVar9 < 0x200) {
      piVar7 = (int *)(DAT_14c998118 + 0x2fec);
      lVar11 = 0x200;
      do {
        lVar1 = lVar11 + -1;
        if (DAT_14c99814c == 0) {
          iVar10 = (int)lVar11 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14c998148 * 0x18) = (int)lVar11 + -1;
          iVar10 = (int)lVar1;
        }
        piVar7[-1] = -1;
        iVar12 = -1;
        if (0 < DAT_14c99814c) {
          iVar12 = DAT_14c998148;
        }
        *piVar7 = iVar12;
        DAT_14c99814c = DAT_14c99814c + 1;
        piVar7 = piVar7 + -6;
        lVar11 = lVar1;
        DAT_14c998148 = iVar10;
      } while (iVar9 < lVar1);
    }
    if (iVar3 == 0) {
      DAT_14c998140 = uVar8;
      if (DAT_14c998144 + 0x1fU < 0x200) {
        FUN_14499171c(&DAT_14c998128,0,0x10,4);
        DAT_14c998144 = 0x200;
      }
      puVar6 = DAT_14c998138;
      if (DAT_14c998138 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&DAT_14c998128;
      }
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar8 = DAT_14c998140 + 0x1f;
      if (-1 < (int)DAT_14c998140) {
        uVar8 = DAT_14c998140;
      }
      if ((int)DAT_14c998140 % 0x20 != 0) {
        puVar6 = (undefined8 *)&DAT_14c998128;
        if (DAT_14c998138 != (undefined8 *)0x0) {
          puVar6 = DAT_14c998138;
        }
        bVar5 = -(char)((int)DAT_14c998140 % 0x20);
        *(uint *)((longlong)puVar6 + (longlong)((int)uVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)puVar6 + (longlong)((int)uVar8 >> 5) * 4) << (bVar5 & 0x1f))
             >> (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar4 = FUN_144a54ea4(&DAT_14c998128,uVar8);
      FUN_1447c6044(&DAT_14c998128,uVar4,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146f0259e FUN_146f0259e body=447 status=ok
// SIG undefined FUN_146f0259e(void)

void FUN_146f0259e(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146f0275e FUN_146f0275e body=59 status=ok
// SIG undefined FUN_146f0275e(void)

void FUN_146f0275e(void)

{
  if (1 < DAT_14c998160) {
    FUN_146efea58();
    DAT_14c998160 = 1;
    FUN_146f0259e(&DAT_14c998118);
    return;
  }
  FUN_146f0279a();
  FUN_146efea58();
  return;
}



// FUNCTION 146f0279a FUN_146f0279a body=373 status=ok
// SIG undefined FUN_146f0279a(void)

void FUN_146f0279a(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14c998150;
  if (DAT_14c998158 != (undefined *)0x0) {
    puVar5 = DAT_14c998158;
  }
  iVar4 = DAT_14c998160 + 3;
  if (-1 < DAT_14c998160) {
    iVar4 = DAT_14c998160;
  }
  if (DAT_14c998120 - DAT_14c99814c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c998128;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c998140 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c998140;
    }
    local_78 = &DAT_14c998118;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c998128)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar3 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14c998118 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c998128 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14c998160) {
      lVar2 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar2 * 4) = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14c998160);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f02910 FUN_146f02910 body=306 status=ok
// SIG undefined FUN_146f02910(void)

undefined4 * FUN_146f02910(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f02a44(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_146f02b2a(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f0259e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f02a44 FUN_146f02a44 body=230 status=ok
// SIG undefined FUN_146f02a44(void)

int * FUN_146f02a44(longlong *param_1,int *param_2)

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



// FUNCTION 146f02b2a FUN_146f02b2a body=128 status=ok
// SIG undefined FUN_146f02b2a(void)

undefined8 FUN_146f02b2a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146f02baa((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f02baa FUN_146f02baa body=114 status=ok
// SIG undefined FUN_146f02baa(void)

void FUN_146f02baa(longlong *param_1,int param_2)

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



// FUNCTION 146f02c1c FUN_146f02c1c body=139 status=ok
// SIG undefined FUN_146f02c1c(void)

undefined8 * FUN_146f02c1c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  ushort *puVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    puVar2 = (ushort *)0x0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    puVar2 = (ushort *)*param_1;
  }
  *puVar2 = (ushort)(*puVar2 - 0x41 < 0x1a) * 0x20 + *puVar2;
  FUN_1448097c4(param_1,&DAT_149e3ac30,&DAT_149f7d60a,0);
  return param_1;
}



// FUNCTION 146f02ca8 FUN_146f02ca8 body=494 status=ok
// SIG undefined FUN_146f02ca8(void)

undefined8 *
FUN_146f02ca8(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_2 + 0x30) == 1) {
    local_80 = param_8;
    local_88 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    FUN_142a64c31(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_78 = param_1;
  if (*(int *)(param_2 + 0x30) != 0) {
    iVar7 = 0;
    local_70 = param_3;
    do {
      local_80 = param_8;
      local_88 = param_7;
      local_90 = param_6;
      local_98 = param_5;
      FUN_142a64c31(&local_68,param_2,
                    (longlong)iVar7 * (longlong)*(int *)(param_2 + 0x34) + local_70,param_4);
      uVar4 = uStack_50;
      lVar8 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_14047d050(&local_58,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar8 * 0x10) = local_68;
      *(undefined8 *)(local_58 + 8 + lVar8 * 0x10) = local_60;
      iVar7 = iVar7 + 1;
    } while (iVar7 != *(int *)(param_2 + 0x30));
  }
  plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&DAT_149e44000;
  FUN_14047cd48(plVar6 + 2,&local_58);
  puVar3 = local_78;
  *local_78 = plVar6 + 2;
  local_78[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  FUN_14047c710(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 146f02e98 FUN_146f02e98 body=87 status=ok
// SIG undefined FUN_146f02e98(void)

undefined4
FUN_146f02e98(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_142a66c8c(param_5,param_2,*param_3,param_4,param_5,param_6,param_7);
  plVar3 = (longlong *)param_3[1];
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
  return uVar4;
}



// FUNCTION 146f02ef0 FUN_146f02ef0 body=939 status=ok
// SIG undefined FUN_146f02ef0(void)

ulonglong FUN_146f02ef0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  longlong local_88 [2];
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = FUN_140d5712e();
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  plVar11 = *(longlong **)(lVar6 + 0x30);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  FUN_14626a0e0(uVar2,&local_78);
  local_88[0] = 0;
  local_88[1] = 0;
  uVar13 = 0;
  if ((longlong)local_70 != 0) {
    plVar12 = local_78 + (longlong)local_70 * 2;
    plVar10 = local_78;
    local_e8 = plVar11;
    local_e0 = param_2;
    do {
      local_98 = *plVar10;
      local_90 = (int)plVar10[1] + -1;
      if ((int)plVar10[1] == 0) {
        local_90 = 0;
      }
      cVar4 = FUN_14047fa10(*param_1,&local_98,local_88);
      if (cVar4 != '\0') {
        FUN_140009b9a(&local_c0,local_88);
        FUN_140008f88(local_e0,&local_c0);
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
        }
        uVar13 = CONCAT71((int7)((ulonglong)&local_c0 >> 8),1);
        plVar11 = local_e8;
        goto LAB_146f031b0;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar12);
    uVar13 = 0;
    plVar11 = local_e8;
    if ((longlong)local_70 != 0) {
      plVar11 = local_78 + (longlong)local_70 * 2;
      plVar10 = local_78;
      local_d8 = plVar11;
      do {
        if ((longlong)(int)plVar10[1] != 0) {
          uVar7 = 0;
          do {
            if (*(short *)(*plVar10 + uVar7) == 0x2d) {
              if ((~uVar7 & 0x1fffffffe) != 0) goto LAB_146f0308d;
              break;
            }
            uVar7 = uVar7 + 2;
          } while ((longlong)(int)plVar10[1] * 2 != uVar7);
        }
        plVar3 = (longlong *)*param_1;
        plVar12 = plVar3 + 2;
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = plVar12;
        if ((int)plVar3[5] == 0) {
          iVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar9 = (int)plVar3[5];
        }
        uStack_a0 = CONCAT44(uStack_4c,uStack_50);
        local_a8 = local_58;
        uVar2 = local_a8;
        local_b8 = (undefined4)local_68;
        uStack_b4 = local_68._4_4_;
        uStack_b0 = (undefined4)uStack_60;
        uStack_ac = uStack_60._4_4_;
        local_a8._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar5 = local_a8._4_4_;
        local_c0 = plVar3;
        if ((local_a8._4_4_ != iVar9) ||
           (plVar11 = local_d8, local_a8 = uVar2, uStack_60 != plVar12)) {
          do {
            local_a8 = uVar2;
            lVar6 = (longlong)*(int *)(*local_c0 + 8 + (longlong)iVar5 * 0x28);
            if (lVar6 != 0) {
              plVar11 = (longlong *)(*local_c0 + (longlong)iVar5 * 0x28);
              uVar7 = 0;
              do {
                if (*(short *)(*plVar11 + uVar7) == 0x2d) {
                  if ((~uVar7 & 0x1fffffffe) != 0) {
                    iVar5 = (int)plVar10[1];
                    uVar7 = (ulonglong)(iVar5 - 1);
                    if (iVar5 == 0) {
                      uVar7 = uVar13;
                    }
                    puVar8 = &DAT_149dfb77a;
                    if (iVar5 != 0) {
                      puVar8 = (undefined2 *)*plVar10;
                    }
                    cVar4 = FUN_144a791f8(plVar11,puVar8,uVar7,1);
                    if (cVar4 != '\0') {
                      FUN_14047e026(plVar11[2],local_d0);
                      FUN_140233b1a(&local_68,local_d0);
                      FUN_140008f88(local_e0,&local_68);
                      if (local_68 != (longlong *)0x0) {
                        (**(code **)(*local_68 + 0x10))();
                      }
                      plVar11 = local_e8;
                      if (local_d0[0] != 0) {
                        FUN_1400020a8();
                      }
                      uVar13 = CONCAT71((int7)((ulonglong)local_d0 >> 8),1);
                      goto LAB_146f031b0;
                    }
                  }
                  break;
                }
                uVar7 = uVar7 + 2;
              } while (lVar6 * 2 != uVar7);
            }
            local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
            FUN_1449c0562(&local_b8);
            plVar11 = local_d8;
            iVar5 = local_a8._4_4_;
            uVar2 = local_a8;
          } while (local_c0 != plVar3 ||
                   ((longlong *)CONCAT44(uStack_ac,uStack_b0) != plVar12 || local_a8._4_4_ != iVar9)
                  );
        }
LAB_146f0308d:
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar11);
      uVar13 = 0;
      plVar11 = local_e8;
    }
  }
LAB_146f031b0:
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,local_70);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 146f0329c FUN_146f0329c body=67 status=ok
// SIG undefined FUN_146f0329c(void)

void FUN_146f0329c(void)

{
  FUN_1416d7a4f();
  return;
}



// FUNCTION 146f032e4 FUN_146f032e4 body=241 status=ok
// SIG undefined FUN_146f032e4(void)

undefined8 * FUN_146f032e4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149e441a0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  *(undefined4 *)((longlong)plVar5 + 0x3c) = 0x80;
  *(undefined4 *)(plVar5 + 8) = 0xffffffff;
  if (plVar5 == (longlong *)0x0) {
    param_1[2] = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_1[3];
  param_1[2] = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146f033b6;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    param_1[3] = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_146f033b6;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146f033b6;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_146f033b6:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 146f033d6 FUN_146f033d6 body=610 status=ok
// SIG undefined FUN_146f033d6(void)

ulonglong FUN_146f033d6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  psVar3 = (short *)*param_2;
  if (*psVar3 == 0x22) {
    local_3c = 0;
    cVar4 = thunk_FUN_140c9761d(psVar3,&local_38);
    if (cVar4 != '\0') {
      *param_2 = *param_2 + (longlong)local_3c * 2;
      goto LAB_146f03461;
    }
    if (param_3 != 0) {
      puVar11 = (undefined2 *)*param_2;
      pwVar10 = L"FJsonObjectWrapper::ImportTextItem: Bad quoted string: %s\n";
LAB_146f03563:
      FUN_146816218(param_3,3,pwVar10,puVar11);
    }
  }
  else {
    FUN_14020fad6(&local_38,psVar3);
    iVar6 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar6 = 0;
    }
    *param_2 = *param_2 + (longlong)iVar6 * 2;
LAB_146f03461:
    uVar9 = (undefined7)((ulonglong)param_1 >> 8);
    if ((int)uStack_30 < 2) {
      *(undefined4 *)(param_1 + 8) = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_1446f8c06(param_1,0);
      }
      plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_149e441a0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      plVar5[8] = 0;
      plVar5[9] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[10] = 0;
      plVar5[0xb] = 0;
      *(undefined4 *)((longlong)plVar5 + 0x3c) = 0x80;
      *(undefined4 *)(plVar5 + 8) = 0xffffffff;
      if (plVar5 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0x10;
        plVar7 = *(longlong **)(param_1 + 0x18);
        if (plVar7 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
LAB_146f034f1:
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
          if (plVar5 != (longlong *)0x0) goto LAB_146f03517;
        }
LAB_146f035f8:
        uVar8 = CONCAT71(uVar9,1);
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0x10) = plVar5 + 2;
        plVar7 = *(longlong **)(param_1 + 0x18);
        if (plVar5 == plVar7) {
          LOCK();
          plVar7 = plVar5 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        else {
          *(longlong **)(param_1 + 0x18) = plVar5;
          if (plVar7 != (longlong *)0x0) goto LAB_146f034f1;
        }
LAB_146f03517:
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        uVar8 = CONCAT71(uVar9,1);
        if ((int)*plVar7 == 0) {
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
      goto LAB_146f0356f;
    }
    cVar4 = FUN_146f0363a(param_1,&local_38);
    if (cVar4 != '\0') {
      iVar6 = (int)uStack_30 + -1;
      if ((int)uStack_30 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(param_1,local_38,iVar6);
      goto LAB_146f035f8;
    }
    if (param_3 != 0) {
      puVar11 = local_38;
      if ((int)uStack_30 == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      pwVar10 = L"FJsonObjectWrapper::ImportTextItem - Unable to parse json: %s\n";
      goto LAB_146f03563;
    }
  }
  uVar8 = 0;
LAB_146f0356f:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146f0363a FUN_146f0363a body=128 status=ok
// SIG undefined FUN_146f0363a(void)

undefined4 FUN_146f0363a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14047afda(&local_30);
  uVar3 = FUN_14047b282(local_30,param_1 + 0x10,0);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f036bc FUN_146f036bc body=195 status=ok
// SIG undefined FUN_146f036bc(void)

undefined4 FUN_146f036bc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fe0690(&local_28,param_2,0);
  local_38 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(longlong **)(param_1 + 0x18);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_145927d24(&local_38,local_28,1);
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f037a0 FUN_146f037a0 body=64 status=ok
// SIG undefined FUN_146f037a0(void)

void FUN_146f037a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  if (1 < *(int *)(param_3 + 8)) {
    cVar1 = FUN_146f0363a(param_3,param_3);
    if ((cVar1 == '\0') && (*(undefined4 *)(param_3 + 8) = 0, *(int *)(param_3 + 0xc) != 0)) {
      FUN_1446f8c06(param_3,0);
      return;
    }
  }
  return;
}



// FUNCTION 146f037ec FUN_146f037ec body=54 status=ok
// SIG undefined FUN_146f037ec(void)

undefined1 FUN_146f037ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146f03a6c(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 146f0382e FUN_146f0382e body=263 status=ok
// SIG undefined FUN_146f0382e(void)

ulonglong FUN_146f0382e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (undefined7)((ulonglong)param_3 >> 8);
  if (param_4 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*param_1 + 8))(0,local_58);
    if ((local_4c & 2) == 0) {
      FUN_146f032e4(&local_48);
    }
    if (*(longlong *)(param_3 + 0x10) == 0) {
      *(undefined4 *)(param_2 + 8) = 0;
      uVar2 = CONCAT71(uVar3,1);
      if (*(int *)(param_2 + 0xc) != 0) {
        FUN_1446f8c06(param_2,0);
      }
    }
    else {
      uVar1 = FUN_146f036bc(param_3,param_2);
      uVar2 = (ulonglong)uVar1;
    }
    (**(code **)(*param_1 + 8))(param_1,local_58);
    if ((local_4c & 4) != 0) {
      FUN_146f03a22(&local_48);
    }
  }
  else {
    if (*(longlong *)(param_3 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    *(undefined4 *)(param_2 + 8) = 0;
    uVar2 = CONCAT71(uVar3,1);
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_1446f8c06(param_2,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f0396c FUN_146f0396c body=59 status=ok
// SIG undefined FUN_146f0396c(void)

undefined8 FUN_146f0396c(longlong *param_1)

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



// FUNCTION 146f039b2 FUN_146f039b2 body=34 status=ok
// SIG undefined FUN_146f039b2(void)

void FUN_146f039b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_146f03a22(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146f03a22 FUN_146f03a22 body=74 status=ok
// SIG undefined FUN_146f03a22(void)

void FUN_146f03a22(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f03a6c FUN_146f03a6c body=90 status=ok
// SIG undefined FUN_146f03a6c(void)

longlong FUN_146f03a6c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_144a787a6();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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



// FUNCTION 146f03ac8 FUN_146f03ac8 body=327 status=ok
// SIG undefined FUN_146f03ac8(void)

undefined4 * FUN_146f03ac8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14047ca78(param_1,local_48);
  FUN_146f03c10(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_14047c804(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x24) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1449ba646(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f03c10 FUN_146f03c10 body=113 status=ok
// SIG undefined FUN_146f03c10(void)

undefined8 * FUN_146f03c10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146f03d1a FUN_146f03d1a body=42 status=ok
// SIG undefined FUN_146f03d1a(void)

undefined8 FUN_146f03d1a(void)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/DataStream/DataStream.h",0x5d,
                L"Pure virtual not implemented (%s)",L"WriteData");
  return 0;
}



// FUNCTION 146f03d44 FUN_146f03d44 body=41 status=ok
// SIG undefined FUN_146f03d44(void)

void FUN_146f03d44(void)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/DataStream/DataStream.h",0x68,
                L"Pure virtual not implemented (%s)",L"ReadData");
  return;
}



// FUNCTION 146f03d6e FUN_146f03d6e body=41 status=ok
// SIG undefined FUN_146f03d6e(void)

void FUN_146f03d6e(void)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/DataStream/DataStream.h",0x70,
                L"Pure virtual not implemented (%s)",L"ProcessPacketDeliveryStatus");
  return;
}



// FUNCTION 146f03d98 FUN_146f03d98 body=42 status=ok
// SIG undefined FUN_146f03d98(void)

undefined1 FUN_146f03d98(void)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/DataStream/DataStream.h",0x75,
                L"Pure virtual not implemented (%s)",L"HasAcknowledgedAllReliableData");
  return 1;
}



// FUNCTION 146f03dc2 FUN_146f03dc2 body=25 status=ok
// SIG undefined FUN_146f03dc2(void)

undefined8 FUN_146f03dc2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400021e4(param_3);
  return param_2;
}



// FUNCTION 146f03de8 FUN_146f03de8 body=41 status=ok
// SIG undefined FUN_146f03de8(void)

void FUN_146f03de8(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
                ,0xb6,L"Pure virtual not implemented (%s)",L"Prioritize");
  return;
}



// FUNCTION 146f03e12 FUN_146f03e12 body=55 status=ok
// SIG undefined FUN_146f03e12(void)

undefined8 * FUN_146f03e12(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetBlob/NetBlobHandler.h"
                ,0x45,L"Pure virtual not implemented (%s)",L"CreateNetBlob");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 146f03e4a FUN_146f03e4a body=41 status=ok
// SIG undefined FUN_146f03e4a(void)

void FUN_146f03e4a(void)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetBlob/NetBlobHandler.h"
                ,0x48,L"Pure virtual not implemented (%s)",L"OnNetBlobReceived");
  return;
}



// FUNCTION 146f03e78 FUN_146f03e78 body=54 status=ok
// SIG undefined FUN_146f03e78(void)

undefined8 * FUN_146f03e78(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetObjectFactory.h"
                ,0x77,L"Pure virtual not implemented (%s)",
                L"UNetObjectFactory::InstantiateReplicatedObjectFromHeader");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146f03eb6 FUN_146f03eb6 body=55 status=ok
// SIG undefined FUN_146f03eb6(void)

undefined8 * FUN_146f03eb6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetObjectFactory.h"
                ,0xc2,L"Pure virtual not implemented (%s)",L"UNetObjectFactory::CreateAndFillHeader"
               );
  *param_2 = 0;
  return param_2;
}



// FUNCTION 146f03eee FUN_146f03eee body=42 status=ok
// SIG undefined FUN_146f03eee(void)

undefined8 FUN_146f03eee(void)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetObjectFactory.h"
                ,0xca,L"Pure virtual not implemented (%s)",L"UNetObjectFactory::SerializeHeader");
  return 0;
}



// FUNCTION 146f03f18 FUN_146f03f18 body=55 status=ok
// SIG undefined FUN_146f03f18(void)

undefined8 * FUN_146f03f18(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetObjectFactory.h"
                ,0xd1,L"Pure virtual not implemented (%s)",
                L"UNetObjectFactory::CreateAndDeserializeHeader");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 146f03f50 FUN_146f03f50 body=42 status=ok
// SIG undefined FUN_146f03f50(void)

undefined8 FUN_146f03f50(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
                ,0xbd,L"Pure virtual not implemented (%s)",L"AddObject");
  return 0;
}



// FUNCTION 146f03f7a FUN_146f03f7a body=41 status=ok
// SIG undefined FUN_146f03f7a(void)

void FUN_146f03f7a(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
                ,0xc0,L"Pure virtual not implemented (%s)",L"RemoveObject");
  return;
}



// FUNCTION 146f03fa4 FUN_146f03fa4 body=41 status=ok
// SIG undefined FUN_146f03fa4(void)

void FUN_146f03fa4(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
                ,0xef,L"Pure virtual not implemented (%s)",L"OnInit");
  return;
}



// FUNCTION 146f03fce FUN_146f03fce body=41 status=ok
// SIG undefined FUN_146f03fce(void)

void FUN_146f03fce(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
                ,0xf2,L"Pure virtual not implemented (%s)",L"OnDeinit");
  return;
}



// FUNCTION 146f03ff8 FUN_146f03ff8 body=41 status=ok
// SIG undefined FUN_146f03ff8(void)

void FUN_146f03ff8(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
                ,0xf5,L"Pure virtual not implemented (%s)",L"OnMaxInternalNetRefIndexIncreased");
  return;
}



// FUNCTION 146f0402a FUN_146f0402a body=41 status=ok
// SIG undefined FUN_146f0402a(void)

void FUN_146f0402a(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
                ,0x94,L"Pure virtual not implemented (%s)",L"Init");
  return;
}



// FUNCTION 146f04054 FUN_146f04054 body=41 status=ok
// SIG undefined FUN_146f04054(void)

void FUN_146f04054(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
                ,0x97,L"Pure virtual not implemented (%s)",L"Deinit");
  return;
}



// FUNCTION 146f0407e FUN_146f0407e body=41 status=ok
// SIG undefined FUN_146f0407e(void)

void FUN_146f0407e(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
                ,0x9a,L"Pure virtual not implemented (%s)",L"OnMaxInternalNetRefIndexIncreased");
  return;
}



// FUNCTION 146f040a8 FUN_146f040a8 body=42 status=ok
// SIG undefined FUN_146f040a8(void)

undefined8 FUN_146f040a8(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
                ,0xa3,L"Pure virtual not implemented (%s)",L"AddObject");
  return 0;
}



// FUNCTION 146f040d2 FUN_146f040d2 body=41 status=ok
// SIG undefined FUN_146f040d2(void)

void FUN_146f040d2(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
                ,0xa6,L"Pure virtual not implemented (%s)",L"RemoveObject");
  return;
}



// FUNCTION 146f040fc FUN_146f040fc body=41 status=ok
// SIG undefined FUN_146f040fc(void)

void FUN_146f040fc(void)

{
  FUN_140033559("Runtime\\Experimental\\Iris\\Core\\Public\\Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
                ,0xa9,L"Pure virtual not implemented (%s)",L"UpdateObjects");
  return;
}



// FUNCTION 146f0415a FUN_146f0415a body=120 status=ok
// SIG undefined FUN_146f0415a(void)

undefined1 FUN_146f0415a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x10) = lVar7;
      *(undefined2 *)(param_2 + lVar8 + 0x18) = *(undefined2 *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146f041fa FUN_146f041fa body=59 status=ok
// SIG undefined FUN_146f041fa(void)

undefined8 FUN_146f041fa(longlong *param_1)

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



// FUNCTION 146f0432c FUN_146f0432c body=59 status=ok
// SIG undefined FUN_146f0432c(void)

undefined8 FUN_146f0432c(longlong *param_1)

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



// FUNCTION 146f04372 FUN_146f04372 body=32 status=ok
// SIG undefined FUN_146f04372(void)

void FUN_146f04372(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f043e0 FUN_146f043e0 body=43 status=ok
// SIG undefined FUN_146f043e0(void)

undefined8 FUN_146f043e0(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0440c FUN_146f0440c body=43 status=ok
// SIG undefined FUN_146f0440c(void)

undefined8 FUN_146f0440c(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f044ea FUN_146f044ea body=59 status=ok
// SIG undefined FUN_146f044ea(void)

undefined8 FUN_146f044ea(longlong *param_1)

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



// FUNCTION 146f04530 FUN_146f04530 body=32 status=ok
// SIG undefined FUN_146f04530(void)

void FUN_146f04530(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146f0459e FUN_146f0459e body=43 status=ok
// SIG undefined FUN_146f0459e(void)

undefined8 FUN_146f0459e(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f04678 FUN_146f04678 body=59 status=ok
// SIG undefined FUN_146f04678(void)

undefined8 FUN_146f04678(longlong *param_1)

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



// FUNCTION 146f046be FUN_146f046be body=32 status=ok
// SIG undefined FUN_146f046be(void)

void FUN_146f046be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146f0472c FUN_146f0472c body=43 status=ok
// SIG undefined FUN_146f0472c(void)

undefined8 FUN_146f0472c(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f04818 FUN_146f04818 body=59 status=ok
// SIG undefined FUN_146f04818(void)

undefined8 FUN_146f04818(longlong *param_1)

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



// FUNCTION 146f0485e FUN_146f0485e body=32 status=ok
// SIG undefined FUN_146f0485e(void)

void FUN_146f0485e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f048cc FUN_146f048cc body=43 status=ok
// SIG undefined FUN_146f048cc(void)

undefined8 FUN_146f048cc(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f049c4 FUN_146f049c4 body=59 status=ok
// SIG undefined FUN_146f049c4(void)

undefined8 FUN_146f049c4(longlong *param_1)

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



// FUNCTION 146f04a0a FUN_146f04a0a body=32 status=ok
// SIG undefined FUN_146f04a0a(void)

void FUN_146f04a0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 146f04a78 FUN_146f04a78 body=43 status=ok
// SIG undefined FUN_146f04a78(void)

undefined8 FUN_146f04a78(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 146f04b56 FUN_146f04b56 body=59 status=ok
// SIG undefined FUN_146f04b56(void)

undefined8 FUN_146f04b56(longlong *param_1)

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



// FUNCTION 146f04b9c FUN_146f04b9c body=32 status=ok
// SIG undefined FUN_146f04b9c(void)

void FUN_146f04b9c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146f04c0a FUN_146f04c0a body=43 status=ok
// SIG undefined FUN_146f04c0a(void)

undefined8 FUN_146f04c0a(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f04ce4 FUN_146f04ce4 body=59 status=ok
// SIG undefined FUN_146f04ce4(void)

undefined8 FUN_146f04ce4(longlong *param_1)

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



// FUNCTION 146f04d2a FUN_146f04d2a body=32 status=ok
// SIG undefined FUN_146f04d2a(void)

void FUN_146f04d2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146f04d98 FUN_146f04d98 body=43 status=ok
// SIG undefined FUN_146f04d98(void)

undefined8 FUN_146f04d98(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f04e84 FUN_146f04e84 body=59 status=ok
// SIG undefined FUN_146f04e84(void)

undefined8 FUN_146f04e84(longlong *param_1)

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



// FUNCTION 146f04eca FUN_146f04eca body=32 status=ok
// SIG undefined FUN_146f04eca(void)

void FUN_146f04eca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f04f38 FUN_146f04f38 body=43 status=ok
// SIG undefined FUN_146f04f38(void)

undefined8 FUN_146f04f38(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f05030 FUN_146f05030 body=59 status=ok
// SIG undefined FUN_146f05030(void)

undefined8 FUN_146f05030(longlong *param_1)

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



// FUNCTION 146f05076 FUN_146f05076 body=32 status=ok
// SIG undefined FUN_146f05076(void)

void FUN_146f05076(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 146f050e4 FUN_146f050e4 body=43 status=ok
// SIG undefined FUN_146f050e4(void)

undefined8 FUN_146f050e4(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 146f051a0 FUN_146f051a0 body=59 status=ok
// SIG undefined FUN_146f051a0(void)

undefined8 FUN_146f051a0(longlong *param_1)

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



// FUNCTION 146f051e6 FUN_146f051e6 body=32 status=ok
// SIG undefined FUN_146f051e6(void)

void FUN_146f051e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f05254 FUN_146f05254 body=43 status=ok
// SIG undefined FUN_146f05254(void)

undefined8 FUN_146f05254(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f05310 FUN_146f05310 body=59 status=ok
// SIG undefined FUN_146f05310(void)

undefined8 FUN_146f05310(longlong *param_1)

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



// FUNCTION 146f05356 FUN_146f05356 body=32 status=ok
// SIG undefined FUN_146f05356(void)

void FUN_146f05356(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f053c4 FUN_146f053c4 body=43 status=ok
// SIG undefined FUN_146f053c4(void)

undefined8 FUN_146f053c4(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f05480 FUN_146f05480 body=59 status=ok
// SIG undefined FUN_146f05480(void)

undefined8 FUN_146f05480(longlong *param_1)

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



// FUNCTION 146f054c6 FUN_146f054c6 body=32 status=ok
// SIG undefined FUN_146f054c6(void)

void FUN_146f054c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f05534 FUN_146f05534 body=43 status=ok
// SIG undefined FUN_146f05534(void)

undefined8 FUN_146f05534(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f055fa FUN_146f055fa body=59 status=ok
// SIG undefined FUN_146f055fa(void)

undefined8 FUN_146f055fa(longlong *param_1)

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



// FUNCTION 146f05640 FUN_146f05640 body=32 status=ok
// SIG undefined FUN_146f05640(void)

void FUN_146f05640(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f056ae FUN_146f056ae body=43 status=ok
// SIG undefined FUN_146f056ae(void)

undefined8 FUN_146f056ae(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f0573a FUN_146f0573a body=59 status=ok
// SIG undefined FUN_146f0573a(void)

undefined8 FUN_146f0573a(longlong *param_1)

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



// FUNCTION 146f05780 FUN_146f05780 body=32 status=ok
// SIG undefined FUN_146f05780(void)

void FUN_146f05780(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_146f58aae(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 146f05850 FUN_146f05850 body=54 status=ok
// SIG undefined FUN_146f05850(void)

undefined1 FUN_146f05850(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146f059c0(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 146f058ae FUN_146f058ae body=59 status=ok
// SIG undefined FUN_146f058ae(void)

undefined8 FUN_146f058ae(longlong *param_1)

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



// FUNCTION 146f058f4 FUN_146f058f4 body=56 status=ok
// SIG undefined FUN_146f058f4(void)

void FUN_146f058f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_149f8abd0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 146f0597a FUN_146f0597a body=70 status=ok
// SIG undefined FUN_146f0597a(void)

undefined8 * FUN_146f0597a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f8abd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145a37fb8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 146f059c0 FUN_146f059c0 body=215 status=ok
// SIG undefined FUN_146f059c0(void)

longlong FUN_146f059c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  plVar1 = (longlong *)(param_2 + 0x10);
  lVar3 = FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_2 + 0x28) != 0) goto LAB_146f059fb;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 0x18);
    if ((cVar2 != '\0') || (*(int *)(param_2 + 0x28) == 0)) {
      lVar4 = *plVar1;
      goto LAB_146f05a6e;
    }
LAB_146f059fb:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_146f05a20;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_146f05a20:
        *plVar1 = lVar4;
        goto LAB_146f05a6e;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
  }
  lVar4 = 0;
LAB_146f05a6e:
  *(longlong *)(param_1 + 0x10) = lVar4;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1406fa324(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 146f05b56 FUN_146f05b56 body=59 status=ok
// SIG undefined FUN_146f05b56(void)

undefined8 FUN_146f05b56(longlong *param_1)

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



// FUNCTION 146f05b9c FUN_146f05b9c body=32 status=ok
// SIG undefined FUN_146f05b9c(void)

void FUN_146f05b9c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f05c0a FUN_146f05c0a body=43 status=ok
// SIG undefined FUN_146f05c0a(void)

undefined8 FUN_146f05c0a(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f05c96 FUN_146f05c96 body=54 status=ok
// SIG undefined FUN_146f05c96(void)

undefined1 FUN_146f05c96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146f05e06(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 146f05cf4 FUN_146f05cf4 body=59 status=ok
// SIG undefined FUN_146f05cf4(void)

undefined8 FUN_146f05cf4(longlong *param_1)

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



// FUNCTION 146f05d3a FUN_146f05d3a body=56 status=ok
// SIG undefined FUN_146f05d3a(void)

void FUN_146f05d3a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_149f8aeb0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 146f05dc0 FUN_146f05dc0 body=70 status=ok
// SIG undefined FUN_146f05dc0(void)

undefined8 * FUN_146f05dc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f8aeb0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145a37fb8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 146f05e06 FUN_146f05e06 body=215 status=ok
// SIG undefined FUN_146f05e06(void)

longlong FUN_146f05e06(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  plVar1 = (longlong *)(param_2 + 0x10);
  lVar3 = FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_2 + 0x28) != 0) goto LAB_146f05e41;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 0x18);
    if ((cVar2 != '\0') || (*(int *)(param_2 + 0x28) == 0)) {
      lVar4 = *plVar1;
      goto LAB_146f05eb4;
    }
LAB_146f05e41:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_146f05e66;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_146f05e66:
        *plVar1 = lVar4;
        goto LAB_146f05eb4;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
  }
  lVar4 = 0;
LAB_146f05eb4:
  *(longlong *)(param_1 + 0x10) = lVar4;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1406fa324(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 146f05f22 FUN_146f05f22 body=75 status=ok
// SIG undefined FUN_146f05f22(void)

undefined8 FUN_146f05f22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1406fa324();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146f05f96 FUN_146f05f96 body=59 status=ok
// SIG undefined FUN_146f05f96(void)

undefined8 FUN_146f05f96(longlong *param_1)

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



// FUNCTION 146f05fdc FUN_146f05fdc body=38 status=ok
// SIG undefined FUN_146f05fdc(void)

void FUN_146f05fdc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f060f0 FUN_146f060f0 body=59 status=ok
// SIG undefined FUN_146f060f0(void)

undefined8 FUN_146f060f0(longlong *param_1)

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



// FUNCTION 146f06136 FUN_146f06136 body=32 status=ok
// SIG undefined FUN_146f06136(void)

void FUN_146f06136(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f061a4 FUN_146f061a4 body=43 status=ok
// SIG undefined FUN_146f061a4(void)

undefined8 FUN_146f061a4(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f0627c FUN_146f0627c body=59 status=ok
// SIG undefined FUN_146f0627c(void)

undefined8 FUN_146f0627c(longlong *param_1)

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



// FUNCTION 146f062c2 FUN_146f062c2 body=32 status=ok
// SIG undefined FUN_146f062c2(void)

void FUN_146f062c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f06330 FUN_146f06330 body=43 status=ok
// SIG undefined FUN_146f06330(void)

undefined8 FUN_146f06330(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f06402 FUN_146f06402 body=59 status=ok
// SIG undefined FUN_146f06402(void)

undefined8 FUN_146f06402(longlong *param_1)

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



// FUNCTION 146f06448 FUN_146f06448 body=32 status=ok
// SIG undefined FUN_146f06448(void)

void FUN_146f06448(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f064b6 FUN_146f064b6 body=43 status=ok
// SIG undefined FUN_146f064b6(void)

undefined8 FUN_146f064b6(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f0659c FUN_146f0659c body=59 status=ok
// SIG undefined FUN_146f0659c(void)

undefined8 FUN_146f0659c(longlong *param_1)

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



// FUNCTION 146f065e2 FUN_146f065e2 body=32 status=ok
// SIG undefined FUN_146f065e2(void)

void FUN_146f065e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146f06650 FUN_146f06650 body=43 status=ok
// SIG undefined FUN_146f06650(void)

undefined8 FUN_146f06650(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f06736 FUN_146f06736 body=59 status=ok
// SIG undefined FUN_146f06736(void)

undefined8 FUN_146f06736(longlong *param_1)

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



// FUNCTION 146f0677c FUN_146f0677c body=32 status=ok
// SIG undefined FUN_146f0677c(void)

void FUN_146f0677c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146f067ea FUN_146f067ea body=43 status=ok
// SIG undefined FUN_146f067ea(void)

undefined8 FUN_146f067ea(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f06844 FUN_146f06844 body=63 status=ok
// SIG undefined FUN_146f06844(void)

undefined1 FUN_146f06844(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146f0b696(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 146f068ac FUN_146f068ac body=59 status=ok
// SIG undefined FUN_146f068ac(void)

undefined8 FUN_146f068ac(longlong *param_1)

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



// FUNCTION 146f068f8 FUN_146f068f8 body=38 status=ok
// SIG undefined FUN_146f068f8(void)

void FUN_146f068f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_1409def00(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 146f069da FUN_146f069da body=59 status=ok
// SIG undefined FUN_146f069da(void)

undefined8 FUN_146f069da(longlong *param_1)

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



// FUNCTION 146f06b02 FUN_146f06b02 body=59 status=ok
// SIG undefined FUN_146f06b02(void)

undefined8 FUN_146f06b02(longlong *param_1)

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



// FUNCTION 146f06c2c FUN_146f06c2c body=59 status=ok
// SIG undefined FUN_146f06c2c(void)

undefined8 FUN_146f06c2c(longlong *param_1)

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



// FUNCTION 146f06d0e FUN_146f06d0e body=54 status=ok
// SIG undefined FUN_146f06d0e(void)

undefined1 FUN_146f06d0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146f06e0c(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 146f06d6c FUN_146f06d6c body=59 status=ok
// SIG undefined FUN_146f06d6c(void)

undefined8 FUN_146f06d6c(longlong *param_1)

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



// FUNCTION 146f06e0c FUN_146f06e0c body=108 status=ok
// SIG undefined FUN_146f06e0c(void)

undefined4 * FUN_146f06e0c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar5 = *(longlong *)(param_2 + 4);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 4);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 4) = lVar5;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  lVar5 = *(longlong *)(param_2 + 8);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar5;
  return param_1;
}



// FUNCTION 146f06f08 FUN_146f06f08 body=59 status=ok
// SIG undefined FUN_146f06f08(void)

undefined8 FUN_146f06f08(longlong *param_1)

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



// FUNCTION 146f06f4e FUN_146f06f4e body=32 status=ok
// SIG undefined FUN_146f06f4e(void)

void FUN_146f06f4e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f0704e FUN_146f0704e body=59 status=ok
// SIG undefined FUN_146f0704e(void)

undefined8 FUN_146f0704e(longlong *param_1)

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



// FUNCTION 146f07094 FUN_146f07094 body=32 status=ok
// SIG undefined FUN_146f07094(void)

void FUN_146f07094(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f07102 FUN_146f07102 body=43 status=ok
// SIG undefined FUN_146f07102(void)

undefined8 FUN_146f07102(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146f0718e FUN_146f0718e body=59 status=ok
// SIG undefined FUN_146f0718e(void)

undefined8 FUN_146f0718e(longlong *param_1)

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



// FUNCTION 146f071d4 FUN_146f071d4 body=32 status=ok
// SIG undefined FUN_146f071d4(void)

void FUN_146f071d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_146f55f82(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146f072d4 FUN_146f072d4 body=59 status=ok
// SIG undefined FUN_146f072d4(void)

undefined8 FUN_146f072d4(longlong *param_1)

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



// FUNCTION 146f0731a FUN_146f0731a body=32 status=ok
// SIG undefined FUN_146f0731a(void)

void FUN_146f0731a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_145a37fb8(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146f07388 FUN_146f07388 body=43 status=ok
// SIG undefined FUN_146f07388(void)

undefined8 FUN_146f07388(undefined8 param_1,int param_2)

{
  FUN_145a37fb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}


