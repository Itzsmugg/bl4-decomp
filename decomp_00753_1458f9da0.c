// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458f9da0 FUN_1458f9da0 body=120 status=ok
// SIG undefined FUN_1458f9da0(void)

longlong FUN_1458f9da0(longlong param_1,longlong param_2)

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
    FUN_1413352b8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1458f9e18 FUN_1458f9e18 body=98 status=ok
// SIG undefined FUN_1458f9e18(void)

void FUN_1458f9e18(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar1 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xf0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0xc) == param_2) {
          FUN_141335756();
          return;
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1458f9e7a FUN_1458f9e7a body=197 status=ok
// SIG undefined FUN_1458f9e7a(void)

longlong FUN_1458f9e7a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar2 != 0) goto LAB_1458f9ecd;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1458f9f40(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x60 + *param_1;
LAB_1458f9ecd:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1458f9f40 FUN_1458f9f40 body=269 status=ok
// SIG undefined FUN_1458f9f40(void)

undefined4 * FUN_1458f9f40(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458fa220(param_1,local_48);
  FUN_1458fa04e(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1458fa162(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1458fa310(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fa04e FUN_1458fa04e body=149 status=ok
// SIG undefined FUN_1458fa04e(void)

undefined4 * FUN_1458fa04e(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_1458fa0e4(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14581b6ec(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fa0e4 FUN_1458fa0e4 body=125 status=ok
// SIG undefined FUN_1458fa0e4(void)

undefined8 * FUN_1458fa0e4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1458fa4c2();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1458fa162 FUN_1458fa162 body=189 status=ok
// SIG undefined FUN_1458fa162(void)

undefined8 FUN_1458fa162(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14581b6ec((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_14581b798(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458fa220 FUN_1458fa220 body=239 status=ok
// SIG undefined FUN_1458fa220(void)

int * FUN_1458fa220(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1458fa310 FUN_1458fa310 body=432 status=ok
// SIG undefined FUN_1458fa310(void)

void FUN_1458fa310(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 1458fa4c2 FUN_1458fa4c2 body=433 status=ok
// SIG undefined FUN_1458fa4c2(void)

longlong * FUN_1458fa4c2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_148a6edde((longlong)iVar6 * 0x28 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458fa674 FUN_1458fa674 body=118 status=ok
// SIG undefined FUN_1458fa674(void)

void FUN_1458fa674(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5ae0;
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



// FUNCTION 1458fa6ea FUN_1458fa6ea body=118 status=ok
// SIG undefined FUN_1458fa6ea(void)

void FUN_1458fa6ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5b50;
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



// FUNCTION 1458fa760 FUN_1458fa760 body=136 status=ok
// SIG undefined FUN_1458fa760(void)

undefined8 *
FUN_1458fa760(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2);
  param_1[3] = param_3;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_1458fa7e8(param_1 + 0xf,param_4);
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 1458fa7e8 FUN_1458fa7e8 body=124 status=ok
// SIG undefined FUN_1458fa7e8(void)

void FUN_1458fa7e8(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fa866 FUN_1458fa866 body=93 status=ok
// SIG undefined FUN_1458fa866(void)

void FUN_1458fa866(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f76a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1458fa8c4 FUN_1458fa8c4 body=159 status=ok
// SIG undefined FUN_1458fa8c4(void)

void FUN_1458fa8c4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1458fa901;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1458fa901;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1458fa901:
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
                    /* WARNING: Could not recover jumptable at 0x0001458fa95f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458fa964 FUN_1458fa964 body=132 status=ok
// SIG undefined FUN_1458fa964(void)

void FUN_1458fa964(longlong param_1,int param_2)

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



// FUNCTION 1458fa9e8 FUN_1458fa9e8 body=260 status=ok
// SIG undefined FUN_1458fa9e8(void)

void FUN_1458fa9e8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xb20) != 0) {
    *(int *)(param_1 + 0x98c) = *(int *)(param_1 + 0x98c) + 1;
    local_38 = 0;
    FUN_1412bcb0e(param_1 + 0x9b0,DAT_14cbcc688,0,0);
    if ((longlong)*(int *)(param_1 + 0xa48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa40);
      lVar1 = (longlong)*(int *)(param_1 + 0xa48) * 0x58;
      do {
        FUN_145aa6abc(param_1,lVar2);
        lVar2 = lVar2 + 0x58;
        lVar1 = lVar1 + -0x58;
      } while (lVar1 != 0);
    }
    lVar2 = *(longlong *)(param_1 + 0xb20);
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      local_28 = 0;
      FUN_14485c47a(&local_28,param_1);
      FUN_1458fab3c(lVar2 + 0x52a8,local_28);
    }
    FUN_1458faafe(param_1 + 0x8e8,*(undefined4 *)(param_1 + 0x98c));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458faafe FUN_1458faafe body=61 status=ok
// SIG undefined FUN_1458faafe(void)

void FUN_1458faafe(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fab3c FUN_1458fab3c body=162 status=ok
// SIG undefined FUN_1458fab3c(void)

void FUN_1458fab3c(longlong *param_1,undefined8 param_2)

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
        goto LAB_1458fabc9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1458fabc9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1458fabde FUN_1458fabde body=326 status=ok
// SIG undefined FUN_1458fabde(void)

void FUN_1458fabde(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1413371f8(local_20,iVar1 != 0,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fad26 FUN_1458fad26 body=124 status=ok
// SIG undefined FUN_1458fad26(void)

longlong * FUN_1458fad26(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x268,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b0ae810;
  FUN_14133726c(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1458fadac FUN_1458fadac body=58 status=ok
// SIG undefined FUN_1458fadac(void)

void FUN_1458fadac(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458fade6 FUN_1458fade6 body=40 status=ok
// SIG undefined FUN_1458fade6(void)

undefined8 FUN_1458fade6(undefined8 param_1,int param_2)

{
  FUN_1458fae0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fae0e FUN_1458fae0e body=66 status=ok
// SIG undefined FUN_1458fae0e(void)

void FUN_1458fae0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1693a0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458fae50(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458fae50 FUN_1458fae50 body=55 status=ok
// SIG undefined FUN_1458fae50(void)

void FUN_1458fae50(longlong *param_1)

{
  FUN_145cb4a46(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458fae88 FUN_1458fae88 body=40 status=ok
// SIG undefined FUN_1458fae88(void)

undefined8 FUN_1458fae88(undefined8 param_1,int param_2)

{
  FUN_1458faeb0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458faeb0 FUN_1458faeb0 body=121 status=ok
// SIG undefined FUN_1458faeb0(void)

void FUN_1458faeb0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a7e2f50;
  plVar3 = (longlong *)param_1[0xd];
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
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458faf2a FUN_1458faf2a body=37 status=ok
// SIG undefined FUN_1458faf2a(void)

void FUN_1458faf2a(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    FUN_1458faf50(*(undefined8 *)(param_1 + 0x10));
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 1458faf50 FUN_1458faf50 body=167 status=ok
// SIG undefined FUN_1458faf50(void)

void FUN_1458faf50(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458faff8(&local_30);
  uVar1 = (ulonglong)local_20;
  if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
    do {
      FUN_147e7b46c(*(undefined8 *)(local_30 + (uVar1 & 0xffffffff) * 8),param_1);
      uVar1 = (longlong)(int)local_20;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_20 = (uint)uVar1;
        if ((longlong)local_28 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_30 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_20 < local_28));
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458faff8 FUN_1458faff8 body=170 status=ok
// SIG undefined FUN_1458faff8(void)

longlong * FUN_1458faff8(longlong *param_1)

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
  uVar2 = FUN_1409035a4();
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458fb0a4 FUN_1458fb0a4 body=248 status=ok
// SIG undefined FUN_1458fb0a4(void)

void FUN_1458fb0a4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_141338030();
  lVar1 = FUN_14479d2ce(param_1 + 900);
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      puVar3 = cohtml::IEventHandler::operator_new(0x18);
      *puVar3 = &PTR_FUN_14b9db320;
      puVar3[2] = FUN_140e638ec;
      puVar3[1] = lVar1;
      FUN_1458fb19c(param_1,"Event_OnHintBarEntriesReceived",puVar3);
    }
  }
  puVar3 = cohtml::IEventHandler::operator_new(0x18);
  *puVar3 = &PTR_FUN_14b9db340;
  puVar3[2] = FUN_1410df582;
  puVar3[1] = param_1;
  uVar4 = FUN_1458fb19c(param_1,"Event_OnElementEnter",puVar3);
  *(undefined8 *)(param_1 + 0x5f0) = uVar4;
  puVar3 = cohtml::IEventHandler::operator_new(0x18);
  *puVar3 = &PTR_FUN_14b9db360;
  puVar3[2] = FUN_140e1602c;
  puVar3[1] = param_1;
  uVar4 = FUN_1458fb19c(param_1,"Event_OnElementExit",puVar3);
  *(undefined8 *)(param_1 + 0x5f8) = uVar4;
  return;
}



// FUNCTION 1458fb19c FUN_1458fb19c body=50 status=ok
// SIG undefined FUN_1458fb19c(void)

undefined8 FUN_1458fb19c(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar2 = (longlong *)(param_1 + 0x28);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) + 8);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458fb1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*plVar2 + 0x1a0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1458fb1ce FUN_1458fb1ce body=146 status=ok
// SIG undefined FUN_1458fb1ce(void)

undefined8 FUN_1458fb1ce(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = FUN_1458fb262(param_1,uVar1 >> 0x10 ^ uVar1,&local_30);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fb262 FUN_1458fb262 body=180 status=ok
// SIG undefined FUN_1458fb262(void)

longlong FUN_1458fb262(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_1458fb2ee;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1458fb318(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x38 + *param_1;
LAB_1458fb2ee:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1458fb318 FUN_1458fb318 body=271 status=ok
// SIG undefined FUN_1458fb318(void)

undefined4 * FUN_1458fb318(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458fb592(param_1,local_48);
  FUN_1458fb428(param_4,local_40);
  *(undefined4 *)(local_40 + 0x30) = 0xffffffff;
  cVar1 = FUN_1458fb4d8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)(local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x30) =
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
      FUN_1413382aa(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fb428 FUN_1458fb428 body=174 status=ok
// SIG undefined FUN_1458fb428(void)

undefined8 * FUN_1458fb428(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  undefined1 local_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a5dc74(local_50);
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14023423e(param_2 + 1,local_50);
  *(undefined1 *)(param_2 + 3) = local_40;
  param_2[4] = local_38;
  local_38 = 0;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  FUN_1449db362(&local_38);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fb4d8 FUN_1458fb4d8 body=185 status=ok
// SIG undefined FUN_1458fb4d8(void)

undefined8 FUN_1458fb4d8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          FUN_1449db362(puVar1 + 8);
          if (*(longlong **)(puVar1 + 2) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(puVar1 + 2) + 0x10))();
          }
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_146983b20(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = puVar1[0xc];
      } while (iVar14 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458fb592 FUN_1458fb592 body=236 status=ok
// SIG undefined FUN_1458fb592(void)

int * FUN_1458fb592(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1458fb67e FUN_1458fb67e body=75 status=ok
// SIG undefined FUN_1458fb67e(void)

void FUN_1458fb67e(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x890))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001458fb6ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x898))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerCheckClientPossessionReliable_Validate";
  return;
}



// FUNCTION 1458fb6fe FUN_1458fb6fe body=177 status=ok
// SIG undefined FUN_1458fb6fe(void)

void FUN_1458fb6fe(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x87] != param_1[0x7a]) {
    lVar1 = FUN_1447210f0();
    if (0.5 < *(double *)(lVar1 + 0x6d0) - (double)*(float *)(param_1 + 0xf5)) {
      local_28 = param_1[0x7a];
      uVar2 = FUN_14477b072(param_1,DAT_14caf9718);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
      *(float *)(param_1 + 0xf5) = (float)*(double *)(lVar1 + 0x6d0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fb7d0 FUN_1458fb7d0 body=353 status=ok
// SIG undefined FUN_1458fb7d0(void)

undefined8 * FUN_1458fb7d0(undefined8 *param_1)

{
  FUN_1408f38e8();
  *param_1 = &PTR_FUN_14a841a20;
  param_1[5] = &PTR_LAB_14a842080;
  param_1[6] = &PTR_LAB_14a8420c0;
  param_1[0x96] = 0x400000003f800000;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x404) = *(byte *)((longlong)param_1 + 0x404) & 0xfe;
  param_1[0x81] = 0x47c350003d4ccccd;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  param_1[0x85] = 0x471c4000469c4000;
  param_1[0x86] = 0x400000000;
  param_1[0x8a] = 0x47480000;
  *(undefined1 *)((longlong)param_1 + 0x38c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0x48927c00;
  param_1[0x8b] = 0x3f0923a3;
  param_1[0x8c] = 0x461c40003f800000;
  param_1[0x87] = 0x3dcccccd40400000;
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x334) = *(byte *)((longlong)param_1 + 0x334) | 2;
  *(byte *)((longlong)param_1 + 0x444) = *(byte *)((longlong)param_1 + 0x444) | 1;
  *(byte *)((longlong)param_1 + 0x2d4) = *(byte *)((longlong)param_1 + 0x2d4) | 0x40;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0x3f800000ff808080;
  *(uint *)(param_1 + 0x8d) = *(uint *)(param_1 + 0x8d) & 0xfffffffc | 2;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8e] = &DAT_3f8000003f800000;
  param_1[0x8f] = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0x3f80000043160000;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x484) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0x3f800000;
  param_1[0x94] = &DAT_3f8000003f800000;
  param_1[0x95] = &DAT_3f8000003f800000;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xf0;
  return param_1;
}



// FUNCTION 1458fb932 FUN_1458fb932 body=630 status=ok
// SIG undefined FUN_1458fb932(void)

void FUN_1458fb932(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong unaff_R12;
  ulonglong uVar9;
  float fVar10;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  char *local_a8;
  undefined1 local_9c [8];
  int local_94;
  longlong local_90;
  double local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_c0 = (ulonglong)uVar3;
  local_a8 = param_2;
  if (local_c0 != 0) {
    lVar1 = param_1 + -0xd8;
    local_b0 = *param_6;
    local_b8 = param_6[1];
    lVar4 = param_6[2];
    local_c0 = (ulonglong)((uint)uVar3 * 2);
    param_5 = param_5 + 8;
    uVar9 = 0;
    do {
      local_90 = *(longlong *)(param_4 + uVar9 * 4);
      if ((local_90 != 0) && (cVar5 = FUN_1458fbbb2(lVar1,&local_90,param_5), cVar5 != '\0')) {
        FUN_1413e04dc(lVar1,local_9c,&local_90,param_5);
        piVar7 = *(int **)(param_1 + -0x28);
        if (*piVar7 != 0) {
          FUN_140adeba6(piVar7,local_9c);
          piVar7 = *(int **)(param_1 + -0x28);
        }
        lVar6 = FUN_1400e4054(piVar7,local_9c);
        if (lVar6 == 0) {
          unaff_R12 = 0;
        }
        else {
          unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),'\x02' - (*(short *)(lVar6 + 0xe) == 0));
        }
        cVar5 = FUN_1458fbc34(lVar1,local_94,unaff_R12 & 0xffffffff);
        if (cVar5 == '\0') {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0.0;
          uStack_80 = 0;
          if (local_b8 == 0) {
            if (local_b0 != 0) {
              lVar6 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_b0 + uVar9);
              uStack_80 = *(longlong *)(param_1 + 0x18) + lVar6;
              fVar10 = (float)(**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar6))
                                        (*(undefined8 *)(param_4 + uVar9 * 4));
              goto LAB_1458fba93;
            }
            if (lVar4 != 0) {
              uStack_80 = *(ulonglong *)(lVar4 + uVar9 * 8);
              local_78 = *(longlong *)(lVar4 + 8 + uVar9 * 8);
              uVar8 = uStack_80;
              if (local_78 != 0) {
                LOCK();
                *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
                UNLOCK();
                uVar8 = *(ulonglong *)(lVar4 + uVar9 * 8);
              }
              uStack_70 = 2;
              fVar10 = (float)FUN_1458fbfa0(uVar8,*(undefined8 *)(param_4 + uVar9 * 4));
              goto LAB_1458fba93;
            }
          }
          else {
            uStack_80 = (ulonglong)*(ushort *)(local_b8 + uVar9);
            uStack_70 = 1;
            fVar10 = *(float *)(*(longlong *)(param_4 + uVar9 * 4) +
                               (ulonglong)*(ushort *)(local_b8 + uVar9));
LAB_1458fba93:
            local_88 = (double)fVar10;
          }
          FUN_1458fbe3a(lVar1,local_94,unaff_R12 & 0xffffffff,&local_88);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_70 & 0xff])(&uStack_80);
        }
        if (*local_a8 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x30 + (longlong)local_94 * 0x38);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar9 = uVar9 + 2;
      param_5 = param_5 + 0x14;
    } while (local_c0 != uVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458fbbb2 FUN_1458fbbb2 body=129 status=ok
// SIG undefined FUN_1458fbbb2(void)

byte FUN_1458fbbb2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_1458fbcd0(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  else {
    bVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1458fbc34 FUN_1458fbc34 body=155 status=ok
// SIG undefined FUN_1458fbc34(void)

ulonglong FUN_1458fbc34(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x30);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar9 = 0;
        uVar8 = uVar3;
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x28;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x30));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1458fbcd0 FUN_1458fbcd0 body=193 status=ok
// SIG undefined FUN_1458fbcd0(void)

longlong FUN_1458fbcd0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1458fbd92(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fbd92 FUN_1458fbd92 body=167 status=ok
// SIG undefined FUN_1458fbd92(void)

undefined4 * FUN_1458fbd92(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1458fbe3a FUN_1458fbe3a body=357 status=ok
// SIG undefined FUN_1458fbe3a(void)

void FUN_1458fbe3a(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar6 = *(byte *)(lVar7 + 0x30);
    if ((bVar6 & 1) == 0) {
      *(undefined8 *)(lVar7 + 0x10) = *param_4;
      if ((undefined8 *)(lVar7 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 3));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 3)])
                  (&local_58,param_4 + 1);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar7 + 0x28);
        uVar2 = *(undefined4 *)(lVar7 + 0x18);
        uVar3 = *(undefined4 *)(lVar7 + 0x1c);
        uVar4 = *(undefined4 *)(lVar7 + 0x20);
        uVar5 = *(undefined4 *)(lVar7 + 0x24);
        *(undefined4 *)(lVar7 + 0x18) = local_58;
        *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
        *(undefined4 *)(lVar7 + 0x20) = uStack_50;
        *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
        *(ulonglong *)(lVar7 + 0x28) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar6 = *(byte *)(lVar7 + 0x30);
      }
      *(byte *)(lVar7 + 0x30) = bVar6 | 1;
    }
    else {
      FUN_1475db3cc(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined8 *)(lVar7 + 0x10) = *param_4;
    if ((undefined8 *)(lVar7 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 3));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 3)])
                (&local_58,param_4 + 1);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar7 + 0x28);
      uVar2 = *(undefined4 *)(lVar7 + 0x18);
      uVar3 = *(undefined4 *)(lVar7 + 0x1c);
      uVar4 = *(undefined4 *)(lVar7 + 0x20);
      uVar5 = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)(lVar7 + 0x18) = local_58;
      *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
      *(undefined4 *)(lVar7 + 0x20) = uStack_50;
      *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
      *(ulonglong *)(lVar7 + 0x28) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fbfa0 FUN_1458fbfa0 body=129 status=ok
// SIG undefined FUN_1458fbfa0(void)

undefined4 FUN_1458fbfa0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  lVar1 = FUN_1406f977c(local_60);
  uVar3 = 0;
  if ((lVar1 != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(lVar1 + 0x44) + local_38), puVar2 != (undefined4 *)0x0)) {
    uVar3 = *puVar2;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fc022 FUN_1458fc022 body=21 status=ok
// SIG undefined FUN_1458fc022(void)

undefined8 FUN_1458fc022(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458fc046 FUN_1458fc046 body=179 status=ok
// SIG undefined FUN_1458fc046(void)

undefined8
FUN_1458fc046(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_128 [28];
  int iStack_10c;
  longlong local_108 [2];
  basic_streambuf<char,std::char_traits<char>_> local_f8 [112];
  ios_base local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1458fc0fa(local_108,param_2,1);
  FUN_14133879b(param_1,local_108,param_3,param_4);
  *(undefined ***)((longlong)local_108 + (longlong)*(int *)(local_108[0] + 4)) = &PTR_LAB_14a179fc0;
  *(int *)((longlong)&iStack_10c + (longlong)*(int *)(local_108[0] + 4)) =
       *(int *)(local_108[0] + 4) + -0x80;
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_f8);
  std::ios_base::~ios_base(local_88);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fc0fa FUN_1458fc0fa body=258 status=ok
// SIG undefined FUN_1458fc0fa(void)

longlong * FUN_1458fc0fa(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_14a179fb8;
    std::ios_base::ios_base((ios_base *)(param_1 + 0x10));
    param_1[0x10] = (longlong)&PTR_FUN_149f63f58;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_14a179fc0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x80;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_FUN_14a179fc8;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  std::basic_ios<char,std::char_traits<char>_>::init
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1),
             (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 2),false);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &PTR_LAB_14a179fc0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x80;
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 2));
  param_1[2] = (longlong)&PTR_FUN_14a179fd0;
  *(undefined8 *)param_1[5] = uVar2;
  *(undefined8 *)param_1[9] = uVar2;
  *(undefined4 *)param_1[0xc] = uVar1;
  return param_1;
}



// FUNCTION 1458fc216 FUN_1458fc216 body=29 status=ok
// SIG undefined FUN_1458fc216(void)

undefined8 FUN_1458fc216(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc23e FUN_1458fc23e body=43 status=ok
// SIG undefined FUN_1458fc23e(void)

undefined8 * FUN_1458fc23e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a76ee90;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 3;
  return param_1;
}



// FUNCTION 1458fc26a FUN_1458fc26a body=187 status=ok
// SIG undefined FUN_1458fc26a(void)

void FUN_1458fc26a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_1458fc3c8(&local_30);
    FUN_1410ccfa4(lVar1 + 0x20e,param_1,local_30);
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x30) = param_2;
    if (param_2 == 0) {
      if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x30) = param_2;
  }
  FUN_1458fc3c8(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1458fc3c8 FUN_1458fc3c8 body=190 status=ok
// SIG undefined FUN_1458fc3c8(void)

undefined8 * FUN_1458fc3c8(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacfcb0) {
    FUN_144b3d300(&DAT_14cacfcb0);
    if (DAT_14cacfcb0 == -1) {
      builtin_wcsncpy(local_48 + 8,L"OwnerDestroyed",0xf);
      builtin_wcsncpy(local_48,L"OnCamera",8);
      FUN_1446f470e(&DAT_14cacfca8,local_48,1);
      _Init_thread_footer(&DAT_14cacfcb0);
    }
  }
  *param_1 = DAT_14cacfca8;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fc488 FUN_1458fc488 body=33 status=ok
// SIG undefined FUN_1458fc488(void)

void FUN_1458fc488(longlong param_1)

{
  FUN_1400f7f98();
  FUN_1458fc4aa(param_1 + 0x300);
  return;
}



// FUNCTION 1458fc4aa FUN_1458fc4aa body=21 status=ok
// SIG undefined FUN_1458fc4aa(void)

undefined8 FUN_1458fc4aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0x10) == 0);
  }
  return 1;
}



// FUNCTION 1458fc4ce FUN_1458fc4ce body=40 status=ok
// SIG undefined FUN_1458fc4ce(void)

undefined8 FUN_1458fc4ce(undefined8 param_1,int param_2)

{
  FUN_140753ab6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc504 FUN_1458fc504 body=40 status=ok
// SIG undefined FUN_1458fc504(void)

undefined8 FUN_1458fc504(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc53a FUN_1458fc53a body=40 status=ok
// SIG undefined FUN_1458fc53a(void)

undefined8 FUN_1458fc53a(undefined8 param_1,int param_2)

{
  FUN_1407f61d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc570 FUN_1458fc570 body=40 status=ok
// SIG undefined FUN_1458fc570(void)

undefined8 FUN_1458fc570(undefined8 param_1,int param_2)

{
  FUN_1407f61d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc5a6 FUN_1458fc5a6 body=40 status=ok
// SIG undefined FUN_1458fc5a6(void)

undefined8 FUN_1458fc5a6(undefined8 param_1,int param_2)

{
  FUN_140ed3afa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc5dc FUN_1458fc5dc body=40 status=ok
// SIG undefined FUN_1458fc5dc(void)

undefined8 FUN_1458fc5dc(undefined8 param_1,int param_2)

{
  FUN_140fb6454();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc604 FUN_1458fc604 body=42 status=ok
// SIG undefined FUN_1458fc604(void)

void FUN_1458fc604(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b351ea0;
  FUN_1407e878c(param_1 + 0x60);
  FUN_1413388a4(param_1 + 0x10);
  return;
}



// FUNCTION 1458fc63c FUN_1458fc63c body=40 status=ok
// SIG undefined FUN_1458fc63c(void)

undefined8 FUN_1458fc63c(undefined8 param_1,int param_2)

{
  FUN_14118d138();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc672 FUN_1458fc672 body=40 status=ok
// SIG undefined FUN_1458fc672(void)

undefined8 FUN_1458fc672(undefined8 param_1,int param_2)

{
  FUN_1408d57a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc69a FUN_1458fc69a body=273 status=ok
// SIG undefined FUN_1458fc69a(void)

void FUN_1458fc69a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x19100;
  local_28 = 0;
  FUN_1446ef920();
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
  local_48 = local_30;
  local_40 = 0;
  FUN_1458fc7ac(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fc7ac FUN_1458fc7ac body=64 status=ok
// SIG undefined FUN_1458fc7ac(void)

void FUN_1458fc7ac(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_14114f501();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = FUN_140a6b362(param_2);
    FUN_1412ec3f2(uVar2,uVar3);
    return;
  }
  return;
}



// FUNCTION 1458fc7f8 FUN_1458fc7f8 body=192 status=ok
// SIG undefined FUN_1458fc7f8(void)

undefined8 * FUN_1458fc7f8(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b3bff20;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3fb33333;
  param_1[0x1b] = 0x3f0000003f000000;
  *(undefined4 *)(param_1 + 0x1c) = 0x42c80000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x38d1b717;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return param_1;
}



// FUNCTION 1458fc8b8 FUN_1458fc8b8 body=40 status=ok
// SIG undefined FUN_1458fc8b8(void)

undefined8 FUN_1458fc8b8(undefined8 param_1,int param_2)

{
  FUN_1458fc8e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fc8e0 FUN_1458fc8e0 body=186 status=ok
// SIG undefined FUN_1458fc8e0(void)

void FUN_1458fc8e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b8285b0;
  param_1[6] = &PTR_FUN_14b828870;
  param_1[7] = &PTR_FUN_14b828900;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_1458fca4e(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1458fc99a(param_1 + 0x2a);
  plVar3 = (longlong *)param_1[0x28];
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
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 1458fc99a FUN_1458fc99a body=55 status=ok
// SIG undefined FUN_1458fc99a(void)

void FUN_1458fc99a(longlong *param_1)

{
  FUN_1458fc9d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458fc9d2 FUN_1458fc9d2 body=123 status=ok
// SIG undefined FUN_1458fc9d2(void)

void FUN_1458fc9d2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458fca4e FUN_1458fca4e body=53 status=ok
// SIG undefined FUN_1458fca4e(void)

void FUN_1458fca4e(longlong *param_1)

{
  FUN_1458fca84();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458fca84 FUN_1458fca84 body=353 status=ok
// SIG undefined FUN_1458fca84(void)

void FUN_1458fca84(longlong *param_1)

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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458fcbe6 FUN_1458fcbe6 body=454 status=ok
// SIG undefined FUN_1458fcbe6(void)

longlong * FUN_1458fcbe6(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x5d8))(plVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_144a5dd5e();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        lVar5 = FUN_1458fcdae(lVar5);
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(lVar5 + 0x128);
          lVar2 = *(longlong *)(param_1 + 0x10);
          plVar7 = (longlong *)FUN_14001cc68(0x48,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14b99eee0;
          plVar4 = plVar7 + 2;
          plVar7[3] = 0;
          plVar7[4] = 0;
          *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
          *(char *)(plVar7 + 7) = (lVar6 == lVar2) * '\x02';
          plVar7[2] = (longlong)&PTR_FUN_14b99ef00;
          plVar7[8] = 0;
          local_70 = plVar4;
          local_68 = plVar7;
          FUN_1458fcefc(&local_70,plVar4);
          plVar7[8] = *(longlong *)(param_1 + 0x10);
          local_60 = &LAB_148de108c;
          local_58 = 0;
          FUN_1458fd09e(local_50,&local_70);
          FUN_1458fcf9e(lVar5 + 0x110,&local_60,local_50);
          FUN_1449db362(local_50);
          plVar3 = local_68;
          *param_2 = (longlong)plVar4;
          param_2[1] = (longlong)plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_68 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_68)(local_68);
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
          if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_2;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 1458fcdae FUN_1458fcdae body=102 status=ok
// SIG undefined FUN_1458fcdae(void)

void FUN_1458fcdae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458fce16();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fce16 FUN_1458fce16 body=228 status=ok
// SIG undefined FUN_1458fce16(void)

longlong FUN_1458fce16(void)

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
  if (DAT_14cbc02c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_148cba0f2;
    local_40 = FUN_146616659;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/OakGame",L"StructuredInteractableUserState",&DAT_14cbc02c8,FUN_146616632
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc02c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fcefc FUN_1458fcefc body=162 status=ok
// SIG undefined FUN_1458fcefc(void)

void FUN_1458fcefc(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1458fcf3b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1458fcf3b;
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
LAB_1458fcf3b:
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
                    /* WARNING: Could not recover jumptable at 0x0001458fcf9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458fcf9e FUN_1458fcf9e body=214 status=ok
// SIG undefined FUN_1458fcf9e(void)

undefined8 * FUN_1458fcf9e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 1458fd09e FUN_1458fd09e body=300 status=ok
// SIG undefined FUN_1458fd09e(void)

longlong * FUN_1458fd09e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
    *puVar5 = &PTR_LAB_14b99ef90;
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
    *puVar5 = &PTR_FUN_14b99ef20;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b99ef90;
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
    *puVar5 = &PTR_FUN_14b99ef20;
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



// FUNCTION 1458fd1d8 FUN_1458fd1d8 body=40 status=ok
// SIG undefined FUN_1458fd1d8(void)

undefined8 FUN_1458fd1d8(undefined8 param_1,int param_2)

{
  FUN_1458fd200();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fd200 FUN_1458fd200 body=71 status=ok
// SIG undefined FUN_1458fd200(void)

void FUN_1458fd200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b80e5e0;
  FUN_1458fd247(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458fd247 FUN_1458fd247 body=38 status=ok
// SIG undefined FUN_1458fd247(void)

void FUN_1458fd247(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458f55f2(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 1458fd26e FUN_1458fd26e body=111 status=ok
// SIG undefined FUN_1458fd26e(void)

void FUN_1458fd26e(longlong param_1,undefined8 param_2)

{
  FUN_141339014();
  FUN_140320438(param_1 + 0x60,param_2);
  if (*(longlong *)(param_1 + 0x270) == 0) {
    FUN_1458fd2de(param_1,0);
  }
  else {
    FUN_1458fd2de(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x270) + 0x308))();
    *(undefined1 *)(param_1 + 0x251) = 1;
    *(undefined2 *)(param_1 + 0x254) = 0;
  }
  *(undefined1 *)(param_1 + 0x2e1) = 0;
  *(undefined1 *)(param_1 + 0x32b) = 0;
  return;
}



// FUNCTION 1458fd2de FUN_1458fd2de body=47 status=ok
// SIG undefined FUN_1458fd2de(void)

void FUN_1458fd2de(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 1458fd30e FUN_1458fd30e body=132 status=ok
// SIG undefined FUN_1458fd30e(void)

void FUN_1458fd30e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_18 = DAT_14c8462d0;
    local_28 = DAT_14c8462c0;
    uStack_20 = DAT_14c8462c8;
  }
  else {
    FUN_14133901a(*(longlong *)(param_1 + 0x1c8),&local_28);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = (undefined4)local_28;
  param_3[1] = local_28._4_4_;
  param_3[2] = (undefined4)uStack_20;
  param_3[3] = uStack_20._4_4_;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fd394 FUN_1458fd394 body=132 status=ok
// SIG undefined FUN_1458fd394(void)

void FUN_1458fd394(longlong param_1,int param_2)

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



// FUNCTION 1458fd418 FUN_1458fd418 body=53 status=ok
// SIG undefined FUN_1458fd418(void)

void FUN_1458fd418(longlong *param_1)

{
  FUN_141339b9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458fd44e FUN_1458fd44e body=132 status=ok
// SIG undefined FUN_1458fd44e(void)

void FUN_1458fd44e(longlong param_1,int param_2)

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



// FUNCTION 1458fd4d2 FUN_1458fd4d2 body=37 status=ok
// SIG undefined FUN_1458fd4d2(void)

void FUN_1458fd4d2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x230);
  FUN_1458fd4f8(param_2);
  return;
}



// FUNCTION 1458fd4f8 FUN_1458fd4f8 body=219 status=ok
// SIG undefined FUN_1458fd4f8(void)

undefined8 * FUN_1458fd4f8(undefined8 *param_1)

{
  FUN_14133a832();
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *param_1 = &PTR_FUN_14a641870;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3ff00000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0x3ff0000000000000;
  param_1[0x38] = 0x3ff0000000000000;
  param_1[0x39] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x80;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  return param_1;
}



// FUNCTION 1458fd5d4 FUN_1458fd5d4 body=371 status=ok
// SIG undefined FUN_1458fd5d4(void)

void FUN_1458fd5d4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = 0;
  local_70 = 0x100;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  puVar2 = &local_f8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1458fd748(param_1,local_30,puVar2);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fd748 FUN_1458fd748 body=40 status=ok
// SIG undefined FUN_1458fd748(void)

void FUN_1458fd748(longlong param_1)

{
  FUN_14133a8ca(param_1 + 0x80,&DAT_14cbcb1e0);
  *(undefined1 *)(param_1 + 0x141) = 0;
  return;
}



// FUNCTION 1458fd778 FUN_1458fd778 body=213 status=ok
// SIG undefined FUN_1458fd778(void)

bool FUN_1458fd778(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = CONCAT62(uStack_3e,local_40);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    local_38 = *(longlong *)(param_3 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar1)(lVar3,param_2,&local_40);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fd84e FUN_1458fd84e body=146 status=ok
// SIG undefined FUN_1458fd84e(void)

void FUN_1458fd84e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x152) | 2) == 3)) {
    lVar2 = FUN_1400b465c();
    if (lVar2 == *(longlong *)(param_2 + 0x1f0)) {
      uVar3 = FUN_1458fd8e2();
      local_28 = 0;
      FUN_14485c47a(&local_28,param_2);
      FUN_1458fd9b6(uVar3,&local_28);
      uVar1 = FUN_14490d72a(param_2);
      FUN_1458fda0c(uVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fd8e2 FUN_1458fd8e2 body=210 status=ok
// SIG undefined FUN_1458fd8e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1458fd8e2(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a40d0) {
    FUN_144b3d300(&DAT_14c9a40d0);
    if (DAT_14c9a40d0 == -1) {
      _DAT_14c9a40b8 = 0;
      DAT_14c9a40c0 = 0;
      _DAT_14c9a40a8 = 0;
      _DAT_14c9a40b0 = 0;
      _DAT_14c9a40c8 = 0;
      FUN_1458fe0ae(&DAT_14c867390,&local_18,&DAT_14c9a40a8,FUN_145d4557e);
      _DAT_14c9a40a8 = local_18;
      atexit(FUN_142b30d73);
      _Init_thread_footer(&DAT_14c9a40d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c9a40a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fd9b6 FUN_1458fd9b6 body=86 status=ok
// SIG undefined FUN_1458fd9b6(void)

void FUN_1458fd9b6(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 8);
  cVar1 = FUN_140317cec(puVar3);
  if (cVar1 == '\0') {
    *puVar3 = *param_2;
    FUN_14125202e();
    uVar2 = FUN_144729dda(puVar3);
    FUN_1458fda6e(&DAT_14c9a3cc0,&DAT_14c9a4098,uVar2,0);
    return;
  }
  return;
}



// FUNCTION 1458fda0c FUN_1458fda0c body=98 status=ok
// SIG undefined FUN_1458fda0c(void)

void FUN_1458fda0c(int param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_14125202e();
  FUN_1458fda6e(uVar1,&DAT_14cadb9f0,param_1 < 3,0);
  FUN_1458fda6e(uVar1,&DAT_14cadb9f8,param_1 == 1,0);
  FUN_1458fda6e(uVar1,&DAT_14cadba00,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_1 != 1) & 0xffffffff,0);
  return;
}



// FUNCTION 1458fda6e FUN_1458fda6e body=241 status=ok
// SIG undefined FUN_1458fda6e(void)

void FUN_1458fda6e(undefined8 param_1,undefined8 *param_2,char param_3,char param_4)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  uVar2 = *param_2;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar9 = (uint)uVar2 & 0xffff;
  pcVar6 = (char *)FUN_14133aade(param_1,((uint)uVar2 << 0x10 | uVar9) +
                                         (int)((ulonglong)uVar2 >> 0x20) +
                                         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4),param_2);
  if ((param_4 != '\0') || (*pcVar6 != param_3)) {
    *pcVar6 = param_3;
    if ((longlong)*(int *)(pcVar6 + 0x10) != 0) {
      plVar11 = *(longlong **)(pcVar6 + 8);
      plVar10 = plVar11 + (longlong)*(int *)(pcVar6 + 0x10) * 2;
      do {
        if (((*plVar11 != 0) && (plVar8 = (longlong *)plVar11[1], plVar8 != (longlong *)0x0)) &&
           (0 < (int)plVar8[1])) {
          iVar5 = (int)plVar8[1];
          do {
            iVar4 = iVar5;
            if (iVar4 == 0) {
              plVar8 = (longlong *)0x0;
              plVar7 = (longlong *)0x0;
              goto LAB_1458fdb10;
            }
            LOCK();
            iVar5 = (int)plVar8[1];
            bVar12 = iVar4 == iVar5;
            if (bVar12) {
              *(int *)(plVar8 + 1) = iVar4 + 1;
              iVar5 = iVar4;
            }
            UNLOCK();
          } while (!bVar12);
          plVar7 = (longlong *)*plVar11;
LAB_1458fdb10:
          if (param_3 == '\0') {
            if ((char)plVar7[3] == '\x01') {
              *(undefined1 *)(plVar7 + 3) = 0;
              (**(code **)(*plVar7 + 0x20))();
            }
          }
          else {
            FUN_1458fdb60();
          }
          if (iVar4 != 0) {
            LOCK();
            plVar7 = plVar8 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar8)();
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
          }
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar10);
    }
  }
  return;
}



// FUNCTION 1458fdb60 FUN_1458fdb60 body=99 status=ok
// SIG undefined FUN_1458fdb60(void)

void FUN_1458fdb60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((char)param_1[3] == '\0') && (cVar1 = FUN_1458fdc6a(), cVar1 != '\0')) {
    FUN_14125202e();
    if ((longlong)(int)param_1[5] != 0) {
      lVar3 = param_1[4];
      lVar2 = (longlong)(int)param_1[5] << 3;
      do {
        cVar1 = FUN_1458fdbc4(lVar3);
        if (cVar1 == '\0') {
          return;
        }
        lVar3 = lVar3 + 8;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    *(undefined1 *)(param_1 + 3) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001458fdbb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}



// FUNCTION 1458fdbc4 FUN_1458fdbc4 body=165 status=ok
// SIG undefined FUN_1458fdbc4(void)

undefined1 FUN_1458fdbc4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  if (DAT_14c9a3cc8 != DAT_14c9a3cf4) {
    lVar2 = *param_1;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    puVar5 = &DAT_14c9a3cf8;
    if (DAT_14c9a3d00 != (undefined *)0x0) {
      puVar5 = DAT_14c9a3d00;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14c9a3d08 - 1U &
                              (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar1 = (longlong *)(DAT_14c9a3cc0 + (longlong)iVar6 * 0x28), *plVar1 != lVar2) {
        iVar6 = (int)plVar1[4];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (plVar1 == (longlong *)0x0) {
        return 0;
      }
      if (plVar1 + 1 == (longlong *)0x0) {
        return 0;
      }
      return (char)plVar1[1];
    }
  }
  return 0;
}



// FUNCTION 1458fdc6a FUN_1458fdc6a body=170 status=ok
// SIG undefined FUN_1458fdc6a(void)

undefined8 FUN_1458fdc6a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1458fdd16();
  lVar4 = *(longlong *)(lVar1 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
    if (lVar4 == 0) goto LAB_1458fdd11;
  }
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  if ((*(char *)(lVar4 + 0x38) == '\x01') && ((longlong)*(int *)(lVar4 + 0x58) != 0)) {
    plVar2 = *(longlong **)(lVar4 + 0x50);
    lVar4 = (longlong)*(int *)(lVar4 + 0x58) * 0xc;
    do {
      if (*plVar2 == local_28) {
        if (plVar2 != (longlong *)0x0) {
          uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),(char)plVar2[1]);
          goto LAB_1458fdcdb;
        }
        break;
      }
      plVar2 = (longlong *)((longlong)plVar2 + 0xc);
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
LAB_1458fdd11:
  uVar3 = 0;
LAB_1458fdcdb:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1458fdd16 FUN_1458fdd16 body=228 status=ok
// SIG undefined FUN_1458fdd16(void)

longlong FUN_1458fdd16(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a2ca8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145956fe2;
    local_38 = &LAB_1470ac061;
    local_40 = FUN_145c2ee5f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/GbxCore",L"GbxAnalyticsSettings",&DAT_14c9a2ca8,&DAT_1470ac060);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a2ca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fddfc FUN_1458fddfc body=278 status=ok
// SIG undefined FUN_1458fddfc(void)

undefined4 * FUN_1458fddfc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1458fdfc6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_40 + 1) = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_14597daf4(0,0);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar1 = FUN_1458fdf14(param_1,param_3,local_40,local_48);
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
      FUN_14133ab94(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fdf14 FUN_1458fdf14 body=178 status=ok
// SIG undefined FUN_1458fdf14(void)

undefined8 FUN_1458fdf14(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14597daf4(plVar8[2],(int)plVar8[3]);
          if (plVar8[2] != 0) {
            FUN_1400020a8();
          }
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
          FUN_1470b5586(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458fdfc6 FUN_1458fdfc6 body=231 status=ok
// SIG undefined FUN_1458fdfc6(void)

int * FUN_1458fdfc6(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1458fe0ae FUN_1458fe0ae body=196 status=ok
// SIG undefined FUN_1458fe0ae(void)

undefined8
FUN_1458fe0ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a185910;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fe174 FUN_1458fe174 body=241 status=ok
// SIG undefined FUN_1458fe174(void)

void FUN_1458fe174(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1458fe266(param_2);
  local_38 = *(undefined8 *)(param_1 + 8);
  local_30 = 0;
  uStack_28 = 0;
  FUN_14133b4a8(lVar3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    cVar2 = FUN_1458fe2b6(param_1 + -0x30);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)FUN_14133b4fc(param_1 + -0x30);
      if (*(longlong *)(lVar3 + 0x20) == 0) {
        uVar5 = FUN_140927942();
        uVar5 = FUN_14477b664(uVar5);
        *(undefined8 *)(lVar3 + 0x20) = uVar5;
      }
      lVar7 = plVar4[1];
      if (lVar7 == 0) {
        lVar7 = FUN_1458f96d4();
      }
      lVar1 = *plVar4;
      lVar6 = FUN_14477b664(lVar7);
      lVar7 = plVar4[2];
      if (*(longlong *)(lVar3 + 0x18) != lVar1) {
        *(undefined8 *)(lVar3 + 0x28) = 0;
      }
      *(longlong *)(lVar3 + 0x18) = lVar1;
      if (*(longlong *)(lVar3 + 0x20) != lVar6) {
        *(undefined8 *)(lVar3 + 0x28) = 0;
      }
      uVar5 = FUN_14477b664(lVar6);
      uVar5 = FUN_14477b664(uVar5);
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      *(longlong *)(lVar3 + 0x28) = lVar7;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fe266 FUN_1458fe266 body=65 status=ok
// SIG undefined FUN_1458fe266(void)

longlong FUN_1458fe266(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458fe376(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1458fe2a7(lVar2);
  return lVar2;
}



// FUNCTION 1458fe2a7 FUN_1458fe2a7 body=15 status=ok
// SIG undefined FUN_1458fe2a7(void)

void FUN_1458fe2a7(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1458fe2b6 FUN_1458fe2b6 body=191 status=ok
// SIG undefined FUN_1458fe2b6(void)

undefined8 FUN_1458fe2b6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = FUN_1400d690e(param_1 + 0x38);
  plVar3 = (longlong *)FUN_14133b4fc(param_1);
  lVar6 = plVar3[1];
  if (lVar6 == 0) {
    uVar4 = FUN_1458f96d4();
    lVar6 = FUN_14477b664(uVar4);
    plVar3[1] = lVar6;
  }
  plVar5 = (longlong *)plVar3[2];
  if (plVar5 == (longlong *)0x0) {
    if (lVar6 == 0) {
      return 0;
    }
    if (*plVar3 == 0) {
      return 0;
    }
    plVar5 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar5 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar5 + 0x108))(), cVar1 == '\0')) {
      plVar5 = (longlong *)0x0;
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
      plVar5 = (longlong *)FUN_144aff482(uVar4,plVar3);
    }
    plVar3[2] = (longlong)plVar5;
  }
  if ((lVar2 != 0) && (plVar5 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001458fe307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar5 + 0x158))(plVar5,lVar2);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1458fe376 FUN_1458fe376 body=147 status=ok
// SIG undefined FUN_1458fe376(void)

void FUN_1458fe376(longlong param_1,int param_2)

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



// FUNCTION 1458fe40a FUN_1458fe40a body=26 status=ok
// SIG undefined FUN_1458fe40a(void)

void FUN_1458fe40a(undefined8 param_1)

{
  FUN_1407cbe30();
  FUN_14133b5c8(param_1);
  return;
}



// FUNCTION 1458fe424 FUN_1458fe424 body=93 status=ok
// SIG undefined FUN_1458fe424(void)

undefined8 * FUN_1458fe424(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14592696e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1458fe57a(param_1,iVar1);
      FUN_1458fe481(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1458fe481 FUN_1458fe481 body=52 status=ok
// SIG undefined FUN_1458fe481(void)

void FUN_1458fe481(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1458fe4b6(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 1458fe4b6 FUN_1458fe4b6 body=195 status=ok
// SIG undefined FUN_1458fe4b6(void)

undefined8 * FUN_1458fe4b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 1458fe57a FUN_1458fe57a body=111 status=ok
// SIG undefined FUN_1458fe57a(void)

void FUN_1458fe57a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1458fe5f0 FUN_1458fe5f0 body=70 status=ok
// SIG undefined FUN_1458fe5f0(void)

undefined4 FUN_1458fe5f0(ushort *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_1;
  cVar1 = FUN_1410209b8(uVar3);
  if (cVar1 != '\0') {
    if ((((uint)(&DAT_14ca814c8)[uVar3 * 0xf] >> 0x16 & 1) != 0) &&
       ((*(byte *)((longlong)&DAT_14ca814d0 + uVar3 * 0x3c + 7) & 1) != 0)) {
      uVar2 = ~(&DAT_14ca814c8)[uVar3 * 0xf];
      return CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0x2400000) == 0);
    }
  }
  return 0;
}



// FUNCTION 1458fe636 FUN_1458fe636 body=105 status=ok
// SIG undefined FUN_1458fe636(void)

void FUN_1458fe636(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_140cbebe8(param_1 + 0x30,0);
  if ((*(char *)(param_1 + 0x27de) == '\0') && (*(int *)(param_1 + 0x2700) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x26f8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x26f8),0,0,0x10);
      *(undefined4 *)(param_1 + 0x2700) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x27dc) = 1;
  return;
}



// FUNCTION 1458fe6a0 FUN_1458fe6a0 body=73 status=ok
// SIG undefined FUN_1458fe6a0(void)

undefined8 * FUN_1458fe6a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b9632c0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fe6ea FUN_1458fe6ea body=170 status=ok
// SIG undefined FUN_1458fe6ea(void)

undefined4 FUN_1458fe6ea(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar6 = local_30;
  }
  else {
    lVar6 = 0;
  }
  uVar3 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar3 != '\0') {
    pcVar1 = *(code **)(param_1 + 0x20);
    plVar5 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x30);
    }
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    (*pcVar1)(uVar4);
  }
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fe796 FUN_1458fe796 body=8 status=ok
// SIG undefined FUN_1458fe796(void)

void FUN_1458fe796(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 8) = *param_2;
  return;
}



// FUNCTION 1458fe79e FUN_1458fe79e body=94 status=ok
// SIG undefined FUN_1458fe79e(void)

void FUN_1458fe79e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    lVar3 = FUN_144a86a6e(lVar2);
    if (lVar3 != 0) {
      cVar1 = FUN_14133c9d8(lVar3);
      if ((cVar1 != '\0') && (*(longlong *)(lVar2 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001458fe7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x170))(param_1,0,*(longlong *)(lVar2 + 0x30),0x134);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458fe7fc FUN_1458fe7fc body=21 status=ok
// SIG undefined FUN_1458fe7fc(void)

undefined8 * FUN_1458fe7fc(void)

{
  FUN_1458fe812();
  return &DAT_14c990158;
}



// FUNCTION 1458fe812 FUN_1458fe812 body=176 status=ok
// SIG undefined FUN_1458fe812(void)

void FUN_1458fe812(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990190) {
    FUN_144b3d300(&DAT_14c990190);
    if (DAT_14c990190 == -1) {
      FUN_1446ddc76(local_18,"SScaleBox",1);
      FUN_145b262c4(&DAT_14c990158);
      atexit(FUN_142903cb3);
      _Init_thread_footer(&DAT_14c990190);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fe8c4 FUN_1458fe8c4 body=203 status=ok
// SIG undefined FUN_1458fe8c4(void)

void FUN_1458fe8c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  uVar2 = FUN_1458fe990(param_1 + 0x2808,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                        &local_30);
  cVar1 = FUN_144729dda(uVar2);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_14479d2ce(uVar2);
    (**(code **)(*plVar3 + 0x5c8))(plVar3,0);
  }
  FUN_14485c47a(uVar2,param_3);
  FUN_14088c831(param_1 + 0x27f8,*(int *)(param_1 + 0x2920) != *(int *)(param_1 + 0x294c));
  FUN_141305ea8(param_1,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fe990 FUN_1458fe990 body=135 status=ok
// SIG undefined FUN_1458fe990(void)

longlong FUN_1458fe990(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1458fea18();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_1458fe9dd;
  }
  local_30 = param_3;
  FUN_1458fead2(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_1458fe9dd:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x18 + 8;
}



// FUNCTION 1458fea18 FUN_1458fea18 body=185 status=ok
// SIG undefined FUN_1458fea18(void)

int FUN_1458fea18(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_14088c7fa(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1458fea41;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1458fea41:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1458fead2 FUN_1458fead2 body=275 status=ok
// SIG undefined FUN_1458fead2(void)

undefined4 * FUN_1458fead2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1458fec6c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1458febe6(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1458fed54(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458febe6 FUN_1458febe6 body=132 status=ok
// SIG undefined FUN_1458febe6(void)

undefined8 FUN_1458febe6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_1412ea6f2();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_148f11f42(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1458fec0a;
    }
  }
  uVar6 = 0;
LAB_1458fec0a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458fec6c FUN_1458fec6c body=231 status=ok
// SIG undefined FUN_1458fec6c(void)

int * FUN_1458fec6c(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1458fed54 FUN_1458fed54 body=445 status=ok
// SIG undefined FUN_1458fed54(void)

void FUN_1458fed54(longlong *param_1)

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
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 1458fef12 FUN_1458fef12 body=40 status=ok
// SIG undefined FUN_1458fef12(void)

undefined8 FUN_1458fef12(undefined8 param_1,int param_2)

{
  FUN_1458fef3a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fef3a FUN_1458fef3a body=61 status=ok
// SIG undefined FUN_1458fef3a(void)

void FUN_1458fef3a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1839b0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1458fef78(param_1);
  return;
}



// FUNCTION 1458fef78 FUN_1458fef78 body=63 status=ok
// SIG undefined FUN_1458fef78(void)

void FUN_1458fef78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a183700;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458fefb8 FUN_1458fefb8 body=40 status=ok
// SIG undefined FUN_1458fefb8(void)

undefined8 FUN_1458fefb8(undefined8 param_1,int param_2)

{
  FUN_1458fefe0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458fefe0 FUN_1458fefe0 body=63 status=ok
// SIG undefined FUN_1458fefe0(void)

void FUN_1458fefe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a40ddf0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ff020(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458ff020 FUN_1458ff020 body=53 status=ok
// SIG undefined FUN_1458ff020(void)

void FUN_1458ff020(longlong *param_1)

{
  FUN_1458ff056();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458ff056 FUN_1458ff056 body=90 status=ok
// SIG undefined FUN_1458ff056(void)

void FUN_1458ff056(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458ff0b0 FUN_1458ff0b0 body=84 status=ok
// SIG undefined FUN_1458ff0b0(void)

void FUN_1458ff0b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1458ff106(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ff106 FUN_1458ff106 body=120 status=ok
// SIG undefined FUN_1458ff106(void)

void FUN_1458ff106(undefined8 *param_1,longlong param_2)

{
  FUN_140659b5e(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x84,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1458ff17e FUN_1458ff17e body=148 status=ok
// SIG undefined FUN_1458ff17e(void)

bool FUN_1458ff17e(longlong param_1)

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
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ff214 FUN_1458ff214 body=42 status=ok
// SIG undefined FUN_1458ff214(void)

void FUN_1458ff214(undefined8 param_1)

{
  FUN_1458ff462();
  FUN_14128c22a(param_1);
  FUN_1458ff706(param_1);
  FUN_1458ff23e(param_1);
  return;
}



// FUNCTION 1458ff23e FUN_1458ff23e body=412 status=ok
// SIG undefined FUN_1458ff23e(void)

void FUN_1458ff23e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_140059518(param_1 + 0x44);
  if (lVar5 == 0) {
LAB_1458ff3ac:
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar6 = FUN_1408bb964(param_1 + 0x44);
  if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x48), lVar6 == 0)) goto LAB_1458ff3ac;
  lVar7 = FUN_140b6d0be();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) goto LAB_1458ff3ac;
  FUN_1402815f4(param_1,&local_40);
  lVar7 = *(longlong *)(local_40 + 0x3e0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0xc0));
  *(int *)(lVar7 + 0xb8) = *(int *)(lVar7 + 0xb8) + 1;
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
  iVar4 = FUN_1458ff3f0(lVar6,*(undefined4 *)(lVar5 + 0xe0));
  if ((bool)*(char *)(lVar7 + 0x28) == (iVar4 == 1)) {
    if (*(int *)(lVar7 + 0x2c) == 0) {
      iVar8 = 1;
      goto LAB_1458ff375;
    }
  }
  else {
    iVar8 = *(int *)(lVar7 + 0x2c) + 1;
LAB_1458ff375:
    *(bool *)(lVar7 + 0x28) = iVar4 == 1;
    *(int *)(lVar7 + 0x2c) = iVar8;
  }
  iVar4 = FUN_14133cd66(lVar6);
  if ((bool)*(char *)(lVar7 + 0x18) == 0 < iVar4) {
    if (*(int *)(lVar7 + 0x1c) == 0) {
      iVar8 = 1;
      goto LAB_1458ff381;
    }
  }
  else {
    iVar8 = *(int *)(lVar7 + 0x1c) + 1;
LAB_1458ff381:
    *(bool *)(lVar7 + 0x18) = 0 < iVar4;
    *(int *)(lVar7 + 0x1c) = iVar8;
  }
  cVar3 = FUN_14133cdf6(lVar6);
  if (*(char *)(lVar7 + 0x20) == cVar3) {
    if (*(int *)(lVar7 + 0x24) != 0) goto LAB_1458ff351;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar7 + 0x24) + 1;
  }
  *(char *)(lVar7 + 0x20) = cVar3;
  *(int *)(lVar7 + 0x24) = iVar4;
LAB_1458ff351:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1458ff3f0 FUN_1458ff3f0 body=113 status=ok
// SIG undefined FUN_1458ff3f0(void)

undefined4 FUN_1458ff3f0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x3c0) != *(int *)(param_1 + 0x3ec)) {
    lVar2 = param_1 + 0x3f0;
    if (*(longlong *)(param_1 + 0x3f8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x3f8);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x400) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x3b8) + (longlong)iVar1 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar1 * 0x10) == param_2) {
          if (lVar2 == 0) {
            return 0;
          }
          if ((undefined4 *)(lVar2 + 4) == (undefined4 *)0x0) {
            return 0;
          }
          return *(undefined4 *)(lVar2 + 4);
        }
        iVar1 = *(int *)(lVar2 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1458ff462 FUN_1458ff462 body=497 status=ok
// SIG undefined FUN_1458ff462(void)

void FUN_1458ff462(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_1408bb964(param_1 + 0x44);
  if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x48), lVar6 == 0)) {
LAB_1458ff609:
    bVar8 = false;
  }
  else {
    lVar7 = FUN_140b6d0be();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_1458ff609;
    iVar5 = FUN_14133ce8a(lVar6);
    bVar8 = 0 < iVar5;
  }
  FUN_1402815f4(param_1,&local_40);
  pcVar4 = *(char **)(local_40 + 0x390);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar4 + 0x28));
  plVar2 = local_38;
  *(int *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (bVar8 == (bool)*pcVar4) {
    if (*(int *)(pcVar4 + 4) == 0) {
      iVar5 = 1;
      goto LAB_1458ff5d0;
    }
  }
  else {
    iVar5 = *(int *)(pcVar4 + 4) + 1;
LAB_1458ff5d0:
    *pcVar4 = bVar8;
    *(int *)(pcVar4 + 4) = iVar5;
  }
  if ((bVar8 ^ 1U) == pcVar4[8]) {
    if (*(int *)(pcVar4 + 0xc) == 0) {
      iVar5 = 1;
      goto LAB_1458ff5de;
    }
  }
  else {
    iVar5 = *(int *)(pcVar4 + 0xc) + 1;
LAB_1458ff5de:
    pcVar4[8] = bVar8 ^ 1U;
    *(int *)(pcVar4 + 0xc) = iVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar4 + 0x28));
  FUN_1402815f4(param_1,&local_40);
  lVar6 = *(longlong *)(local_40 + 0x380);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x6e0));
  *(int *)(lVar6 + 0x6d8) = *(int *)(lVar6 + 0x6d8) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (*(char *)(lVar6 + 0x28) == '\0') {
    iVar5 = *(int *)(lVar6 + 0x2c) + 1;
  }
  else {
    if (*(int *)(lVar6 + 0x2c) != 0) goto LAB_1458ff59c;
    iVar5 = 1;
  }
  *(undefined1 *)(lVar6 + 0x28) = 1;
  *(int *)(lVar6 + 0x2c) = iVar5;
LAB_1458ff59c:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x6e0));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1458ff654(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ff654 FUN_1458ff654 body=177 status=ok
// SIG undefined FUN_1458ff654(void)

void FUN_1458ff654(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x380);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x6e0));
  *(int *)(lVar3 + 0x6d8) = *(int *)(lVar3 + 0x6d8) + 1;
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
  if (*(char *)(lVar3 + 0x40) == '\0') {
    iVar4 = *(int *)(lVar3 + 0x44) + 1;
  }
  else {
    if (*(int *)(lVar3 + 0x44) != 0) goto LAB_1458ff6b3;
    iVar4 = 1;
  }
  *(undefined1 *)(lVar3 + 0x40) = 1;
  *(int *)(lVar3 + 0x44) = iVar4;
LAB_1458ff6b3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001458ff6ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x6e0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ff706 FUN_1458ff706 body=607 status=ok
// SIG undefined FUN_1458ff706(void)

void FUN_1458ff706(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = param_1 + 0x44;
  lVar6 = FUN_140059518(lVar8);
  if (lVar6 != 0) {
    lVar6 = FUN_1408bb964(lVar8);
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x48), lVar6 != 0)) {
      lVar7 = FUN_140b6d0be();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        FUN_1402815f4(param_1,&local_48);
        lVar7 = *(longlong *)(local_48 + 0x380);
        AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x6e0));
        plVar2 = local_40;
        *(int *)(lVar7 + 0x6d8) = *(int *)(lVar7 + 0x6d8) + 1;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        iVar5 = FUN_14133cd66(lVar6);
        if ((bool)*(char *)(lVar7 + 0x60) == 1 < iVar5) {
          if (*(int *)(lVar7 + 100) == 0) {
            iVar9 = 1;
            goto LAB_1458ff8e7;
          }
        }
        else {
          iVar9 = *(int *)(lVar7 + 100) + 1;
LAB_1458ff8e7:
          *(bool *)(lVar7 + 0x60) = 1 < iVar5;
          *(int *)(lVar7 + 100) = iVar9;
        }
        cVar4 = FUN_14127c006(lVar6);
        if (*(char *)(lVar7 + 8) == cVar4) {
          if (*(int *)(lVar7 + 0xc) == 0) {
            iVar5 = 1;
            goto LAB_1458ff8d6;
          }
        }
        else {
          iVar5 = *(int *)(lVar7 + 0xc) + 1;
LAB_1458ff8d6:
          *(char *)(lVar7 + 8) = cVar4;
          *(int *)(lVar7 + 0xc) = iVar5;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x6e0));
      }
    }
  }
  lVar8 = FUN_1400f3ad8(lVar8);
  if (lVar8 == 0) {
LAB_1458ff910:
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar6 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_1458ff910;
  FUN_1402815f4(param_1,&local_48);
  lVar6 = *(longlong *)(local_48 + 0x380);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x6e0));
  *(int *)(lVar6 + 0x6d8) = *(int *)(lVar6 + 0x6d8) + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  cVar4 = FUN_1458ff97e(lVar8);
  if (*(char *)(lVar6 + 0x10) == cVar4) {
    if (*(int *)(lVar6 + 0x14) != 0) goto LAB_1458ff8b0;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar6 + 0x14) + 1;
  }
  *(char *)(lVar6 + 0x10) = cVar4;
  *(int *)(lVar6 + 0x14) = iVar5;
LAB_1458ff8b0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1458ff97e FUN_1458ff97e body=306 status=ok
// SIG undefined FUN_1458ff97e(void)

ulonglong FUN_1458ff97e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_14016169c(param_1,&local_34);
  if (((cVar4 == '\0') || (local_34 == 0)) && (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar5 = FUN_1447210f0(param_1);
    lVar6 = FUN_14133cf3b(uVar5);
    uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (lVar6 == 0) goto LAB_1458ffa19;
    lVar7 = FUN_14133cf88(lVar6);
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    plVar3 = *(longlong **)(lVar6 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (plVar2 == (longlong *)0x0) {
LAB_1458ff9ff:
      plVar10 = (longlong *)0x0;
    }
    else {
      lVar6 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar8 = FUN_1465e4892();
      if ((lVar8 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar8 + 0x38))) goto LAB_1458ff9ff;
      plVar10 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30) {
        plVar10 = plVar2;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if ((lVar7 == 0) && ((plVar10 == (longlong *)0x0 || ((int)plVar10[3] == 0))))
    goto LAB_1458ffa19;
  }
  uVar9 = 0;
LAB_1458ffa19:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1458ffab2 FUN_1458ffab2 body=156 status=ok
// SIG undefined FUN_1458ffab2(void)

bool FUN_1458ffab2(longlong param_1,undefined4 param_2)

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
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ffb50 FUN_1458ffb50 body=184 status=ok
// SIG undefined FUN_1458ffb50(void)

void FUN_1458ffb50(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x380);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x6e0));
  *(int *)(lVar3 + 0x6d8) = *(int *)(lVar3 + 0x6d8) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (*(char *)(lVar3 + 0x78) == param_2) {
    if (*(int *)(lVar3 + 0x7c) != 0) goto LAB_1458ffbbb;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x7c) + 1;
  }
  *(char *)(lVar3 + 0x78) = param_2;
  *(int *)(lVar3 + 0x7c) = iVar4;
LAB_1458ffbbb:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x6e0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ffc0a FUN_1458ffc0a body=338 status=ok
// SIG undefined FUN_1458ffc0a(void)

undefined8 FUN_1458ffc0a(char *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined7 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  char local_18 [4];
  undefined8 local_14;
  char local_c [4];
  undefined8 local_8;
  
  local_c[0] = '\x01';
  local_8 = *param_2;
  cVar1 = *param_1;
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  iVar5 = (int)local_8;
  fVar7 = (float)((ulonglong)local_8 >> 0x20);
  if (cVar1 != '\x02') {
    iVar3 = (int)*(undefined8 *)(param_1 + 4);
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
    pcVar8 = param_1;
    if ((iVar5 <= iVar3) && ((iVar3 != iVar5 || (fVar7 <= fVar6)))) {
      pcVar8 = local_c;
      if ((iVar3 <= iVar5) && ((iVar3 != iVar5 || fVar6 <= fVar7 && (cVar1 == '\x01')))) {
        pcVar8 = param_1;
      }
    }
    if (*pcVar8 != cVar1) {
      return 0;
    }
    uVar4 = 0;
    if (*(int *)(pcVar8 + 4) != iVar3) {
      return 0;
    }
    if (*(float *)(pcVar8 + 8) != fVar6) {
      return 0;
    }
    if (NAN(*(float *)(pcVar8 + 8)) || NAN(fVar6)) {
      return 0;
    }
  }
  local_18[0] = '\x01';
  local_14 = local_8;
  cVar1 = param_1[0xc];
  if (cVar1 == '\x02') {
    return CONCAT71(uVar4,1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  param_1 = param_1 + 0xc;
  iVar3 = (int)uVar2;
  fVar6 = (float)((ulonglong)uVar2 >> 0x20);
  pcVar8 = param_1;
  if (((iVar3 <= iVar5) &&
      (((iVar3 != iVar5 || (fVar6 <= fVar7)) && (pcVar8 = local_18, iVar5 <= iVar3)))) &&
     ((pcVar8 = local_18, iVar3 != iVar5 || fVar7 <= fVar6 && (pcVar8 = local_18, cVar1 == '\x01')))
     ) {
    pcVar8 = param_1;
  }
  if (*pcVar8 != cVar1) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),
                  (float)((ulonglong)*(undefined8 *)(pcVar8 + 4) >> 0x20) == fVar6 &&
                  (int)*(undefined8 *)(pcVar8 + 4) == iVar3);
}



// FUNCTION 1458ffd5c FUN_1458ffd5c body=58 status=ok
// SIG undefined FUN_1458ffd5c(void)

void FUN_1458ffd5c(longlong *param_1)

{
  longlong lVar1;
  char in_stack_00000030;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (in_stack_00000030 == '\0') {
      FUN_1458ffd96();
      return;
    }
    if (*(longlong *)(lVar1 + 0x48) == 0) {
      lVar1 = 0;
    }
    FUN_146ef1ba6(lVar1);
  }
  return;
}



// FUNCTION 1458ffd96 FUN_1458ffd96 body=1081 status=ok
// SIG undefined FUN_1458ffd96(void)

void FUN_1458ffd96(longlong param_1,double *param_2,double *param_3,undefined8 param_4,char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  double *pdVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  double local_128;
  undefined1 local_118 [16];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double *local_e8;
  undefined1 local_e0;
  longlong local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14133d41e(&local_100,param_1);
  FUN_140cd4f30(param_1,4,0,1);
  if (param_5 == '\0') {
    local_108 = (*param_3 - local_100) * param_2[1] - *param_2 * (param_3[1] - local_f8);
    pdVar14 = (double *)local_118;
    local_118._8_8_ = (param_3[2] - local_f0) * *param_2 - param_2[2] * (*param_3 - local_100);
    local_118._0_8_ = (param_3[1] - local_f8) * param_2[2] - (param_3[2] - local_f0) * param_2[1];
    local_128 = param_2[2];
    local_e8 = &local_138;
    local_138 = *param_2;
    dStack_130 = param_2[1];
    lVar13 = *(longlong *)(param_1 + 0x40);
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x40);
    dVar15 = (double)*(float *)(lVar13 + 0x4c);
    dVar1 = (double)*(float *)(lVar13 + 0x48);
    dVar18 = (double)*(float *)(lVar13 + 0x44);
    dVar17 = (double)*(float *)(lVar13 + 0x40);
    dVar9 = *param_3;
    dVar10 = param_3[1];
    dVar2 = param_3[2] * 1.0;
    dVar16 = dVar10 * dVar17 - dVar18 * dVar9;
    dVar6 = dVar2 * dVar18 - dVar1 * dVar10;
    dVar7 = dVar9 * dVar1 - dVar17 * dVar2;
    dVar6 = dVar6 + dVar6;
    dVar7 = dVar7 + dVar7;
    dVar16 = dVar16 + dVar16;
    dVar11 = *param_2;
    dVar12 = param_2[1];
    dVar5 = param_2[2] * 1.0;
    dVar3 = dVar12 * dVar17 - dVar18 * dVar11;
    dVar4 = dVar5 * dVar18 - dVar1 * dVar12;
    dVar8 = dVar11 * dVar1 - dVar17 * dVar5;
    dVar4 = dVar4 + dVar4;
    dVar8 = dVar8 + dVar8;
    dVar3 = dVar3 + dVar3;
    local_108 = dVar3 * dVar15 + dVar5 + (dVar8 * dVar17 - dVar4 * dVar18);
    dVar5 = (dVar3 * dVar18 - dVar8 * dVar1) + dVar15 * dVar4 + dVar11;
    dVar3 = (dVar1 * dVar4 - dVar17 * dVar3) + dVar15 * dVar8 + dVar12;
    local_e8 = (double *)local_118;
    local_118._8_4_ = SUB84(dVar3,0);
    local_118._0_8_ = dVar5;
    local_118._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_f0 = (dVar16 * dVar15 + dVar2 + (dVar7 * dVar17 - dVar6 * dVar18) +
               *(double *)(lVar13 + 0x30)) - local_f0;
    local_f8 = ((dVar1 * dVar6 - dVar17 * dVar16) + dVar15 * dVar7 + dVar10 +
               *(double *)(lVar13 + 0x28)) - local_f8;
    local_100 = ((dVar16 * dVar18 - dVar7 * dVar1) + dVar15 * dVar6 + dVar9 +
                *(double *)(lVar13 + 0x20)) - local_100;
    local_128 = local_100 * dVar3 - dVar5 * local_f8;
    dStack_130 = local_f0 * dVar5 - local_108 * local_100;
    local_138 = local_f8 * local_108 - dVar3 * local_f0;
    pdVar14 = &local_138;
  }
  local_e0 = 1;
  local_d8 = param_1;
  FUN_145900236(&local_e8,lVar13);
  local_e0 = 1;
  local_e8 = pdVar14;
  local_d8 = param_1;
  FUN_1459001d0(&local_e8,*(undefined8 *)(param_1 + 0x40));
  if ((local_d0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459001d0 FUN_1459001d0 body=102 status=ok
// SIG undefined FUN_1459001d0(void)

void FUN_1459001d0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (((param_2 != 0) && (1 < *(byte *)(param_2 + 0x90))) &&
     ((*(char *)(param_2 + 0x1ac) == '\x04' || (*(char *)(param_2 + 0x1ac) == '\x01')))) {
    if (*(char *)(param_1 + 1) == '\x01') {
      uVar1 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      FUN_144a05e16(param_2,4,uVar1,1);
      uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 1));
    }
    else {
      uVar2 = 0;
    }
    FUN_14590036e(param_2,*param_1,uVar2 & 0xffffffffffffff01);
    return;
  }
  return;
}



// FUNCTION 145900236 FUN_145900236 body=177 status=ok
// SIG undefined FUN_145900236(void)

void FUN_145900236(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 != 0) && (1 < *(byte *)(param_2 + 0x90))) &&
     ((*(char *)(param_2 + 0x1ac) == '\x04' || (*(char *)(param_2 + 0x1ac) == '\x01')))) {
    if (*(char *)(param_1 + 1) == '\x01') {
      uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),4);
      FUN_144a05e16(param_2,uVar1,1,1);
      uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 1));
    }
    else {
      uVar2 = 0;
    }
    local_28 = *param_1;
    local_20 = *(undefined8 *)(param_2 + 0x150);
    local_38 = &local_28;
    FUN_1459002e8(param_2 + 0x160,uVar2 & 0xffffffffffffff01,param_2 + 0x94,
                  *(undefined8 *)(param_2 + 0x10));
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459002e8 FUN_1459002e8 body=134 status=ok
// SIG undefined FUN_1459002e8(void)

void FUN_1459002e8(float *param_1,char param_2,byte *param_3,longlong param_4,undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  
  pdVar4 = (double *)*param_5;
  dVar1 = (double)param_5[1];
  dVar2 = pdVar4[2];
  dVar3 = pdVar4[1];
  *param_1 = (float)((double)*param_1 + dVar1 * *pdVar4);
  param_1[1] = (float)((double)param_1[1] + dVar3 * dVar1);
  param_1[2] = (float)((double)param_1[2] + dVar2 * dVar1);
  if (((param_2 != '\0') && (*param_3 = *param_3 | 4, param_4 != 0)) &&
     (*(longlong *)(param_4 + 8) != 0)) {
    FUN_144a78688(*(longlong *)(param_4 + 8) + 0x70,param_4);
    return;
  }
  return;
}



// FUNCTION 14590036e FUN_14590036e body=644 status=ok
// SIG undefined FUN_14590036e(void)

void FUN_14590036e(longlong param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_158 [40];
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar2 = (double)*(float *)(param_1 + 0x4c);
  dVar10 = (double)*(float *)(param_1 + 0x48);
  dVar5 = (double)*(float *)(param_1 + 0x44);
  dVar11 = (double)*(float *)(param_1 + 0x40);
  dVar6 = *(double *)(param_1 + 0x110);
  dVar7 = *(double *)(param_1 + 0x118);
  dVar8 = *(double *)(param_1 + 0x120);
  dVar9 = *(double *)(param_1 + 0x128);
  dVar3 = dVar6 * dVar10 * 1.0 + dVar9 * dVar5 + dVar11 * dVar8 * -1.0 + dVar2 * dVar7;
  dVar4 = dVar8 * dVar10 * -1.0 + ((dVar6 * dVar11 * -1.0 + dVar2 * dVar9) - dVar7 * dVar5);
  local_118._8_4_ = SUB84(dVar3,0);
  local_118._0_8_ = dVar7 * dVar10 * -1.0 + dVar8 * dVar5 + dVar11 * dVar9 * 1.0 + dVar2 * dVar6;
  local_118._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_108._8_4_ = SUB84(dVar4,0);
  local_108._0_8_ = dVar9 * dVar10 * 1.0 + ((dVar7 * dVar11 * 1.0 + dVar2 * dVar8) - dVar6 * dVar5);
  local_108._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_120 = (double)*(float *)(param_1 + 0x144);
  local_128 = (double)*(float *)(param_1 + 0x140);
  local_130 = (double)*(float *)(param_1 + 0x13c);
  FUN_140934b53(&local_f8);
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  *(float *)(param_1 + 0x16c) =
       (float)(dVar4 * local_e8 + dVar2 * local_f8 + dVar3 * local_f0 +
              (double)*(float *)(param_1 + 0x16c));
  *(float *)(param_1 + 0x170) =
       (float)(local_c8 * dVar4 + local_d8 * dVar2 + local_d0 * dVar3 +
              (double)*(float *)(param_1 + 0x170));
  *(float *)(param_1 + 0x174) =
       (float)(local_a8 * dVar4 + local_b8 * dVar2 + local_b0 * dVar3 +
              (double)*(float *)(param_1 + 0x174));
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 4;
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8), lVar1 != 0)) {
    FUN_144a78688(lVar1 + 0x70);
  }
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459005f4 FUN_1459005f4 body=63 status=ok
// SIG undefined FUN_1459005f4(void)

void FUN_1459005f4(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145900634(param_1);
    FUN_140c1ca94(param_1);
    return;
  }
  FUN_140c1ca94(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140bdf548(param_1);
  return;
}



// FUNCTION 145900634 FUN_145900634 body=327 status=ok
// SIG undefined FUN_145900634(void)

void FUN_145900634(longlong *param_1)

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



// FUNCTION 14590077c FUN_14590077c body=156 status=ok
// SIG undefined FUN_14590077c(void)

void FUN_14590077c(undefined8 param_1,longlong param_2)

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
  FUN_14590081a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590081a FUN_14590081a body=42 status=ok
// SIG undefined FUN_14590081a(void)

void FUN_14590081a(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_14485c47a(param_1 + 0x16fc);
    *(undefined1 *)(param_1 + 0x1df9) = 0;
  }
  return;
}



// FUNCTION 145900844 FUN_145900844 body=9 status=ok
// SIG undefined FUN_145900844(void)

void FUN_145900844(longlong param_1)

{
  FUN_14590084e(param_1 + 0x10);
  return;
}



// FUNCTION 14590084e FUN_14590084e body=159 status=ok
// SIG undefined FUN_14590084e(void)

void FUN_14590084e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *param_1 = &PTR_FUN_14b42dfc0;
  if ((param_1[0x10] != 0) && (plVar3 = (longlong *)param_1[0xe], plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1459008af;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (param_1[0xd] != 0) {
      FUN_14590094c(param_1[0xd],param_1[0xf],param_1 + 0x10);
      param_1[0x10] = 0;
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
LAB_1459008af:
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1459008ee(param_1);
  return;
}



// FUNCTION 1459008ee FUN_1459008ee body=93 status=ok
// SIG undefined FUN_1459008ee(void)

void FUN_1459008ee(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b42ca20;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145900947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14590094c FUN_14590094c body=137 status=ok
// SIG undefined FUN_14590094c(void)

undefined8 FUN_14590094c(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar2) == param_2) {
        uVar4 = (lVar2 >> 4) * -0x5555555555555555;
        uVar3 = (uint)uVar4;
        if ((int)uVar3 < 0) {
          return 0;
        }
        if (iVar1 <= (int)uVar3) {
          return 0;
        }
        if (*param_3 != 0) {
          FUN_14480f766(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 & 0x7fffffff) * 0x30 +
                        0x18);
        }
        FUN_1458b0246(param_1,uVar4 & 0xffffffff);
        return 1;
      }
      lVar2 = lVar2 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar2);
  }
  return 0;
}



// FUNCTION 1459009d6 FUN_1459009d6 body=123 status=ok
// SIG undefined FUN_1459009d6(void)

void FUN_1459009d6(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446e0b6e();
  if (((*(int *)(param_1 + 0x2c) == 0 && *(int *)(param_1 + 0x28) == 0) &&
      *(int *)(param_1 + 0x30) == 0) && *(int *)(param_1 + 0x34) == 0) {
    FUN_1412e3d1e(&local_30);
    *(undefined4 *)(param_1 + 0x28) = local_30;
    *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
    *(undefined4 *)(param_1 + 0x30) = uStack_28;
    *(undefined4 *)(param_1 + 0x34) = uStack_24;
  }
  FUN_145900a52(param_1);
  FUN_14133d5ae(param_1);
  FUN_14133d88e(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145900a52 FUN_145900a52 body=533 status=ok
// SIG undefined FUN_145900a52(void)

void FUN_145900a52(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  wchar_t *local_90;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  int local_70;
  undefined8 **local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_145900baf;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if (bVar2 == 0) {
    local_48 = (undefined8 *)0x0;
    iVar5 = *(int *)(param_1 + 0x40) + 3;
    iVar4 = *(int *)(param_1 + 0x40) + 6;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    iVar5 = (iVar4 >> 2) + *(int *)(param_1 + 0x50);
    uStack_40 = 1;
    FUN_140870184(&local_48,0);
    *local_48 = L"Vectors";
    local_48[1] = &DAT_149dfb77a;
    local_48[2] = 0x227;
    *(undefined2 *)(local_48 + 3) = 0x104;
    *(undefined8 *)((longlong)local_48 + 0x1c) = 0x400000001;
    *(int *)((longlong)local_48 + 0x24) = iVar5;
    local_48[5] = 0;
    uVar3 = FUN_14001cc68(0x80,0x10);
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_80 = ".\\Runtime/Engine/Private/Materials/ParameterCollection.cpp";
    local_88 = 0;
    local_90 = L"MaterialCollection";
    local_98 = L"MaterialCollection";
    local_78 = 0x237;
    local_70 = iVar5 * 0x10;
    local_68 = &local_48;
    FUN_140b49562(uVar3,2,1);
    puVar1 = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_145900baf:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145900c68 FUN_145900c68 body=40 status=ok
// SIG undefined FUN_145900c68(void)

undefined8 FUN_145900c68(undefined8 param_1,int param_2)

{
  FUN_145900c90();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145900c90 FUN_145900c90 body=70 status=ok
// SIG undefined FUN_145900c90(void)

void FUN_145900c90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b010720;
  param_1[9] = &PTR_FUN_14b010a30;
  FUN_14079e6f9(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145900cfc FUN_145900cfc body=72 status=ok
// SIG undefined FUN_145900cfc(void)

undefined8 * FUN_145900cfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5ea060;
  FUN_144a5dc74(param_1 + 1);
  FUN_144a5dc74(param_1 + 3);
  FUN_144a5dc74(param_1 + 5);
  FUN_144a5dc74(param_1 + 7);
  FUN_144a5dc74(param_1 + 9);
  return param_1;
}



// FUNCTION 145900d44 FUN_145900d44 body=481 status=ok
// SIG undefined FUN_145900d44(void)

undefined8 FUN_145900d44(void)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68 [2];
  undefined4 local_58;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14590102a();
  local_48 = 0;
  uStack_40 = 0;
  if (DAT_14ca4b2f8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(DAT_14ca4b2f8);
  }
  if (DAT_14ca4b2f8 != 0) {
    FUN_145900fd4(&local_48);
    if ((longlong)DAT_14ca4b2f8 != 0) {
      lVar7 = (longlong)DAT_14ca4b2f8 * 0x60;
      lVar9 = DAT_14ca4b2f0;
      do {
        uVar2 = uStack_40;
        lVar8 = (longlong)(int)uStack_40;
        uVar3 = (int)uStack_40 + 1;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
        if (uStack_40._4_4_ < uVar3) {
          FUN_1472e6cb6(&local_48,uVar2 & 0xffffffff);
        }
        *(longlong *)(local_48 + lVar8 * 8) = lVar9;
        lVar9 = lVar9 + 0x60;
        lVar7 = lVar7 + -0x60;
      } while (lVar7 != 0);
    }
  }
  FUN_1459011cd(local_48,uStack_40 & 0xffffffff);
  lVar7 = local_48;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = 0;
  lVar9 = (longlong)(int)uStack_40;
  if (lVar9 != 0) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(lVar7 + lVar8);
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 0x10) != 0) {
        puVar6 = *(undefined2 **)(lVar1 + 8);
      }
      uVar4 = FUN_145900f28(local_68,puVar6,*(undefined8 *)(lVar1 + 0x18),0);
      *(undefined4 *)(lVar1 + 4) = uVar4;
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 != lVar8);
  }
  local_70 = 0;
  local_80 = 0;
  local_90 = "Unknown";
  local_98 = L"Scene";
  local_a0 = L"Scene";
  local_a8 = L"FSceneUniformParameters";
  local_78 = 0;
  local_88 = 0x6e;
  uVar5 = FUN_1459010fc(local_68,1,3);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145900f28 FUN_145900f28 body=172 status=ok
// SIG undefined FUN_145900f28(void)

uint FUN_145900f28(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = (int)param_1[2] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 2) = uVar5;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  uVar3 = uVar5;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x40;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined1 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 *)(lVar2 + 0x19 + lVar4) = param_4;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(longlong *)(lVar2 + 0x28 + lVar4) = param_3;
  *(uint *)(param_1 + 2) = (int)param_1[2] + (*(int *)(param_3 + 0x3c) + 0xfU & 0xfffffff0);
  return uVar5;
}



// FUNCTION 145900fd4 FUN_145900fd4 body=86 status=ok
// SIG undefined FUN_145900fd4(void)

void FUN_145900fd4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14590102a FUN_14590102a body=161 status=ok
// SIG undefined FUN_14590102a(void)

void FUN_14590102a(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_14ca4b300 == (longlong *)0x0) {
    DAT_14ca4b300 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca4b300 = 0;
    DAT_14ca4b300[1] = 0;
  }
  else {
    lVar3 = DAT_14ca4b300[1];
    if ((longlong)(int)lVar3 == 0) goto LAB_14590106d;
    lVar2 = *DAT_14ca4b300;
    lVar4 = 0;
    do {
      (**(code **)**(undefined8 **)(lVar2 + lVar4))();
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  if (DAT_14ca4b300 == (longlong *)0x0) {
    DAT_14ca4b300 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca4b300 = 0;
    DAT_14ca4b300[1] = 0;
    return;
  }
LAB_14590106d:
  piVar1 = (int *)((longlong)DAT_14ca4b300 + 0xc);
  *(undefined4 *)(DAT_14ca4b300 + 1) = 0;
  if (*piVar1 == 0) {
    return;
  }
  FUN_1459010cc();
  return;
}



// FUNCTION 1459010cc FUN_1459010cc body=48 status=ok
// SIG undefined FUN_1459010cc(void)

void FUN_1459010cc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1459010fc FUN_1459010fc body=209 status=ok
// SIG undefined FUN_1459010fc(void)

undefined8
FUN_1459010fc(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined1 param_10,undefined8 param_11,undefined1 param_12)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = FUN_14001cc68(0x80,0x10);
  FUN_140b49562(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                iVar1 + 0xfU & 0xfffffff0,param_1,param_10,param_11,param_12);
  return uVar2;
}



// FUNCTION 1459011cd FUN_1459011cd body=788 status=ok
// SIG undefined FUN_1459011cd(void)

void FUN_1459011cd(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_388 [32];
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar14 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar14 + fVar14);
    plVar12 = &local_348;
    do {
      plVar9 = (longlong *)*plVar12;
      plVar10 = (longlong *)plVar12[1];
      iVar2 = (int)plVar12[2];
      iVar3 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar9) >> 3);
      plVar11 = plVar10;
      plVar13 = plVar9;
      if (iVar2 != 0) {
LAB_145901270:
        if (8 < (int)(iVar3 + 1U)) {
          uVar6 = iVar3 + 1U >> 1;
          lVar1 = plVar13[uVar6];
          plVar13[uVar6] = *plVar13;
          *plVar13 = lVar1;
          local_360 = plVar10 + 1;
          local_368 = plVar13;
          do {
            plVar5 = local_368 + 1;
            plVar8 = plVar5;
            do {
              local_368 = plVar8;
              local_350 = plVar5;
              if (plVar10 < plVar8) break;
              puVar7 = &DAT_149dfb77a;
              if (*(int *)(*plVar8 + 0x10) != 0) {
                puVar7 = *(undefined2 **)(*plVar8 + 8);
              }
              puVar4 = &DAT_149dfb77a;
              if (*(int *)(*plVar13 + 0x10) != 0) {
                puVar4 = *(undefined2 **)(*plVar13 + 8);
              }
              iVar3 = FUN_144a80a00(puVar4,puVar7);
              plVar8 = local_368 + 1;
              plVar5 = local_350 + 1;
            } while (-1 < iVar3);
            plVar8 = local_360 + -2;
            do {
              local_360 = local_360 + -1;
              local_358 = plVar8;
              if (local_360 <= plVar13) break;
              puVar7 = &DAT_149dfb77a;
              if (*(int *)(*plVar13 + 0x10) != 0) {
                puVar7 = *(undefined2 **)(*plVar13 + 8);
              }
              puVar4 = &DAT_149dfb77a;
              if (*(int *)(*local_360 + 0x10) != 0) {
                puVar4 = *(undefined2 **)(*local_360 + 8);
              }
              iVar3 = FUN_144a80a00(puVar4,puVar7);
              plVar8 = local_358 + -1;
            } while (-1 < iVar3);
            if (local_360 < local_368) goto LAB_145901431;
            lVar1 = *local_368;
            *local_368 = *local_360;
            *local_360 = lVar1;
          } while( true );
        }
        for (; plVar11 = plVar13, plVar9 = plVar13, plVar13 < plVar10; plVar10 = plVar10 + -1) {
          while (plVar8 = plVar11, plVar9 = plVar9 + 1, plVar9 <= plVar10) {
            puVar7 = &DAT_149dfb77a;
            if (*(int *)(*plVar9 + 0x10) != 0) {
              puVar7 = *(undefined2 **)(*plVar9 + 8);
            }
            puVar4 = &DAT_149dfb77a;
            if (*(int *)(*plVar8 + 0x10) != 0) {
              puVar4 = *(undefined2 **)(*plVar8 + 8);
            }
            iVar2 = FUN_144a80a00(puVar4,puVar7);
            plVar11 = plVar9;
            if (-1 < iVar2) {
              plVar11 = plVar8;
            }
          }
          lVar1 = *plVar8;
          *plVar8 = *plVar10;
          *plVar10 = lVar1;
        }
        goto LAB_1459012e8;
      }
LAB_145901328:
      local_368 = plVar13;
      FUN_1472e6d3b(local_368);
LAB_1459012e8:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_145901431:
  lVar1 = *plVar13;
  *plVar13 = *local_360;
  *local_360 = lVar1;
  iVar2 = iVar2 + -1;
  plVar8 = local_360 + -1;
  if ((longlong)local_358 - (longlong)plVar9 < (longlong)plVar11 - (longlong)local_350) {
    if (local_368 < plVar10) {
      *plVar12 = (longlong)local_368;
      plVar12[1] = (longlong)plVar10;
      *(int *)(plVar12 + 2) = iVar2;
      plVar12 = plVar12 + 3;
    }
    plVar10 = local_358;
    plVar9 = plVar13;
    if (local_360 <= plVar13 + 1) goto LAB_1459012e8;
  }
  else {
    if (plVar13 + 1 < local_360) {
      *plVar12 = (longlong)plVar13;
      plVar12[1] = (longlong)plVar8;
      *(int *)(plVar12 + 2) = iVar2;
      plVar12 = plVar12 + 3;
    }
    plVar8 = plVar10;
    plVar13 = local_368;
    plVar9 = local_350;
    if (plVar10 <= local_368) goto LAB_1459012e8;
  }
  local_350 = plVar9;
  local_358 = plVar10;
  local_368 = plVar13;
  iVar3 = (int)((ulonglong)((longlong)local_358 - (longlong)local_350) >> 3);
  plVar9 = local_350;
  plVar10 = plVar8;
  plVar11 = local_358;
  plVar13 = local_368;
  if (iVar2 == 0) goto LAB_145901328;
  goto LAB_145901270;
}



// FUNCTION 1459014e2 FUN_1459014e2 body=94 status=ok
// SIG undefined FUN_1459014e2(void)

void FUN_1459014e2(longlong *param_1,ushort *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_2 + 4) != -1) {
    *(short *)(param_1 + 4) = (short)param_1[4] + 1;
  }
  *(short *)(param_1[2] + (ulonglong)*param_2 * 2) = (short)param_1[1];
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_145901540(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 4);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = *(undefined8 *)param_2;
  puVar1[1] = uVar4;
  return;
}



// FUNCTION 145901540 FUN_145901540 body=147 status=ok
// SIG undefined FUN_145901540(void)

void FUN_145901540(longlong param_1,int param_2)

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



// FUNCTION 1459015d4 FUN_1459015d4 body=95 status=ok
// SIG undefined FUN_1459015d4(void)

void FUN_1459015d4(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  if (DAT_14c964830 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c964820 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c964810 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
  FUN_14133e4ee();
  return;
}



// FUNCTION 145901634 FUN_145901634 body=132 status=ok
// SIG undefined FUN_145901634(void)

void FUN_145901634(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1459016b8(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1459016b8 FUN_1459016b8 body=85 status=ok
// SIG undefined FUN_1459016b8(void)

void FUN_1459016b8(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14590170e();
  return;
}



// FUNCTION 14590170e FUN_14590170e body=114 status=ok
// SIG undefined FUN_14590170e(void)

void FUN_14590170e(longlong *param_1,int param_2)

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



// FUNCTION 145901780 FUN_145901780 body=598 status=ok
// SIG undefined FUN_145901780(void)

void FUN_145901780(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = (**(code **)(*param_1 + 0x180))();
  if (((lVar9 == 0) ||
      (((bVar3 = *(byte *)(lVar9 + 0x152), bVar3 != 1 &&
        ((6 < bVar3 || ((0x68U >> (bVar3 & 0x1f) & 1) == 0)))) || (param_2 == 0)))) ||
     (*(char *)(param_2 + 0x3b8) != '\x01')) goto LAB_145901824;
  lVar4 = *(longlong *)(param_2 + 0x40);
  plVar5 = *(longlong **)(param_2 + 0x48);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 == 0) goto LAB_145901824;
    lVar11 = param_1[5];
    local_38 = (longlong *)0x0;
LAB_1459017ff:
    local_40 = lVar4;
    FUN_1459019e0(lVar11,&local_40);
    iVar8 = FUN_1459019d8(param_1[5]);
    if ((iVar8 < 1) && (plVar10 = (longlong *)FUN_1449baec6(lVar9), plVar10 != (longlong *)0x0)) {
      cVar7 = FUN_144729dda(param_2 + 0x370);
      if ((cVar7 != '\0') && (lVar9 = FUN_14479d2ce(param_2 + 0x370), lVar9 != 0)) {
        local_50 = param_1[5];
        plVar6 = (longlong *)param_1[6];
        if (plVar6 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          (**(code **)(*plVar10 + 0x2f0))(plVar10,lVar9);
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          local_48 = plVar6;
          (**(code **)(*plVar10 + 0x2f0))(plVar10,lVar9);
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
      }
      local_60 = param_1[5];
      plVar6 = (longlong *)param_1[6];
      if (plVar6 == (longlong *)0x0) {
        local_58 = (longlong *)0x0;
        (**(code **)(*plVar10 + 0x2e0))(plVar10);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_58 = plVar6;
        (**(code **)(*plVar10 + 0x2e0))(plVar10);
        LOCK();
        plVar10 = plVar6 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
    }
    if (plVar5 == (longlong *)0x0) goto LAB_145901824;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (lVar4 != 0) {
      lVar11 = param_1[5];
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_38 = plVar5;
      goto LAB_1459017ff;
    }
  }
  LOCK();
  plVar10 = plVar5 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_145901824:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459019d8 FUN_1459019d8 body=7 status=ok
// SIG undefined FUN_1459019d8(void)

undefined4 FUN_1459019d8(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x200);
}



// FUNCTION 1459019e0 FUN_1459019e0 body=147 status=ok
// SIG undefined FUN_1459019e0(void)

void FUN_1459019e0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_145901a74(param_1,&local_28);
  if (cVar4 != '\0') {
    FUN_140fe1f54(param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145901a74 FUN_145901a74 body=144 status=ok
// SIG undefined FUN_145901a74(void)

ulonglong FUN_145901a74(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RDI;
  bool bVar7;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x200);
  if ((longlong)uVar5 < 1) {
LAB_145901ae7:
    uVar5 = 0;
  }
  else {
    if (*param_2 == *(longlong *)(**(longlong **)(param_1 + 0x1f8) + 0x10)) {
      bVar7 = true;
    }
    else {
      uVar6 = 0;
      do {
        if (uVar5 - 1 == uVar6) goto LAB_145901ae7;
        lVar4 = uVar6 + 1;
        uVar6 = uVar6 + 1;
      } while (*param_2 != *(longlong *)((*(longlong **)(param_1 + 0x1f8))[lVar4] + 0x10));
      bVar7 = uVar6 < uVar5;
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    FUN_145901b04(param_1 + 0x1f8);
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 145901b04 FUN_145901b04 body=93 status=ok
// SIG undefined FUN_145901b04(void)

void FUN_145901b04(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + (longlong)(int)param_2 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_145901b62(param_1);
  return;
}



// FUNCTION 145901b62 FUN_145901b62 body=63 status=ok
// SIG undefined FUN_145901b62(void)

void FUN_145901b62(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145901ba2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145901ba2 FUN_145901ba2 body=91 status=ok
// SIG undefined FUN_145901ba2(void)

ulonglong FUN_145901ba2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145901bfe FUN_145901bfe body=111 status=ok
// SIG undefined FUN_145901bfe(void)

undefined8 FUN_145901bfe(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0x3fe0000000000000;
  local_40 = 0x3fe0000000000000;
  local_38 = 0x3fe0000000000000;
  local_30 = 0x3fe0000000000000;
  local_28 = 0x3fe0000000000000;
  local_20 = 0x3fe0000000000000;
  local_18 = 0x3febb67ae8584caa;
  FUN_144a80a4c();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145901c6e FUN_145901c6e body=9 status=ok
// SIG undefined FUN_145901c6e(void)

void FUN_145901c6e(longlong param_1)

{
  FUN_145901c78(param_1 + 0x10);
  return;
}



// FUNCTION 145901c78 FUN_145901c78 body=89 status=ok
// SIG undefined FUN_145901c78(void)

void FUN_145901c78(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b256da0;
  FUN_145901cd1(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b258290;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145901ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145901cd1 FUN_145901cd1 body=40 status=ok
// SIG undefined FUN_145901cd1(void)

void FUN_145901cd1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1418584f6(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 145901cfa FUN_145901cfa body=276 status=ok
// SIG undefined FUN_145901cfa(void)

void FUN_145901cfa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1a0);
  *param_2 = &PTR_FUN_14b6d1e30;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xf00000d0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0xf00000d0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0xf00000d0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x20) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0xf00000d0;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x29) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x2a) = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0xf00000d0;
  param_2[0x32] = 0;
  *(undefined4 *)(param_2 + 0x33) = 0x3f800000;
  return;
}



// FUNCTION 145901e10 FUN_145901e10 body=63 status=ok
// SIG undefined FUN_145901e10(void)

void FUN_145901e10(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145901e50(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145901e50 FUN_145901e50 body=83 status=ok
// SIG undefined FUN_145901e50(void)

ulonglong FUN_145901e50(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 145901ea4 FUN_145901ea4 body=96 status=ok
// SIG undefined FUN_145901ea4(void)

void FUN_145901ea4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 145901f04 FUN_145901f04 body=141 status=ok
// SIG undefined FUN_145901f04(void)

void FUN_145901f04(longlong *param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0x59] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x5d8))();
    if (lVar1 != 0) {
      lVar2 = FUN_140d12354();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_14133e650(lVar1,0);
      }
    }
    (**(code **)(*param_1 + 0x658))(param_1,param_3);
    if (param_2 != '\0') {
      FUN_145901f92(param_1,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 145901f92 FUN_145901f92 body=382 status=ok
// SIG undefined FUN_145901f92(void)

void FUN_145901f92(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_3c8 [32];
  undefined8 *local_3a8;
  undefined4 local_3a0 [2];
  undefined **local_398;
  undefined *local_390;
  longlong local_388;
  ulonglong uStack_380;
  undefined8 local_378 [2];
  undefined8 local_368;
  undefined1 local_338 [448];
  byte local_178;
  undefined1 local_e8 [48];
  undefined2 local_b8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    uVar3 = FUN_144a7b040();
    plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (lVar5 != 0) {
        FUN_14082cf0e(local_338,lVar1,param_2,0);
        local_b8 = 0x101;
        local_3a0[0] = 7;
        FUN_1405c5fa2();
        local_390 = &DAT_14cb769e8;
        local_388 = 0;
        uStack_380 = 0;
        local_398 = &PTR_FUN_14b0394b0;
        FUN_14572d130(local_e8,local_3a0);
        local_398 = (undefined **)&DAT_14a171d50;
        uVar2 = uStack_380 >> 0x20;
        uStack_380 = uStack_380 & 0xffffffff00000000;
        if ((int)uVar2 != 0) {
          FUN_140115c12(&local_388,0);
        }
        local_390 = (undefined *)0x0;
        if (local_388 != 0) {
          FUN_1400020a8();
        }
        local_178 = local_178 | 8;
        fVar6 = (float)FUN_140f8608e(lVar5);
        local_3a8 = local_378;
        local_378[0] = 0;
        local_368 = 0;
        FUN_14082d216(local_338,fVar6 * 100.0,0,1);
        FUN_1403dfdc4(local_338);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145902120 FUN_145902120 body=69 status=ok
// SIG undefined FUN_145902120(void)

undefined8 * FUN_145902120(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b094890;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fee06(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145902170 FUN_145902170 body=74 status=ok
// SIG undefined FUN_145902170(void)

void FUN_145902170(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0ae760;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  plVar2 = (longlong *)param_1[0x45];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1403d7c6c(param_1);
  return;
}



// FUNCTION 1459021ba FUN_1459021ba body=80 status=ok
// SIG undefined FUN_1459021ba(void)

void FUN_1459021ba(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0xc) == *param_2) {
          FUN_14590220a();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0xc + 4);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14590220a FUN_14590220a body=85 status=ok
// SIG undefined FUN_14590220a(void)

void FUN_14590220a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0xc;
  lVar5 = (longlong)*(int *)(lVar1 + 8);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 4);
  FUN_145902260();
  return;
}



// FUNCTION 145902260 FUN_145902260 body=112 status=ok
// SIG undefined FUN_145902260(void)

void FUN_145902260(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1459022d8 FUN_1459022d8 body=269 status=ok
// SIG undefined FUN_1459022d8(void)

undefined8 * FUN_1459022d8(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar3 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar3);
  *param_1 = &PTR_FUN_14b72d4d0;
  param_1[5] = &PTR_FUN_14b72ded0;
  param_1[6] = &PTR_LAB_14b72df10;
  param_1[0x55] = &PTR_FUN_14b72df60;
  param_1[0x56] = &PTR_FUN_14b72dfe0;
  param_1[0x57] = &PTR_FUN_14b72dff0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0x461c4000;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  cVar2 = FUN_144a792c0(param_1,0x30);
  if ((cVar2 == '\0') && (param_1[0xc6] == 0)) {
    plVar1 = param_1 + 0xc4;
    param_1[199] = &DAT_14cbc65c0;
    param_1[0xc6] = param_1;
    lVar4 = DAT_14cbc65c0;
    while( true ) {
      param_1[0xc4] = lVar4;
      LOCK();
      lVar5 = *(longlong *)param_1[199];
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *(longlong *)param_1[199] = (longlong)plVar1;
        lVar5 = lVar4;
      }
      UNLOCK();
      if (bVar6) break;
      param_1[0xc4] = lVar5;
      lVar4 = *(longlong *)param_1[199];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1459023e6 FUN_1459023e6 body=67 status=ok
// SIG undefined FUN_1459023e6(void)

undefined8 * FUN_1459023e6(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a57db30;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14590242a FUN_14590242a body=43 status=ok
// SIG undefined FUN_14590242a(void)

undefined8 FUN_14590242a(undefined8 param_1,int param_2)

{
  FUN_145902456();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145902456 FUN_145902456 body=84 status=ok
// SIG undefined FUN_145902456(void)

void FUN_145902456(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a57db90;
  plVar1 = (longlong *)FUN_1412feae2();
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_1[10]);
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x00014590249f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1459024aa FUN_1459024aa body=103 status=ok
// SIG undefined FUN_1459024aa(void)

ulonglong FUN_1459024aa(longlong param_1)

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
LAB_1459024f4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1459024f4;
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



// FUNCTION 145902512 FUN_145902512 body=177 status=ok
// SIG undefined FUN_145902512(void)

void FUN_145902512(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar3 = FUN_140ebc504();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       (iVar1 = *(int *)(param_1 + 0x38), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar5 = 0;
      do {
        local_38 = *(undefined8 *)(lVar3 + lVar5);
        cVar2 = FUN_144729dda(&local_38);
        if (cVar2 != '\0') {
          uVar4 = FUN_14479d2ce(&local_38);
          FUN_1459025c4(uVar4,param_2);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459025c4 FUN_1459025c4 body=140 status=ok
// SIG undefined FUN_1459025c4(void)

void FUN_1459025c4(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    cVar2 = FUN_145902652();
    if ((cVar2 != '\0') &&
       (iVar1 = *(int *)(param_1 + 0x27c8), *(int *)(param_1 + 0x27c8) = iVar1 + 1, iVar1 == 0)) {
      local_14 = 0;
      local_28 = DAT_14cbc55e8;
      local_20 = 0xffffffff;
      FUN_141094e00(param_1 + 0x4d8,&local_28,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145902652 FUN_145902652 body=346 status=ok
// SIG undefined FUN_145902652(void)

ulonglong FUN_145902652(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x27c0) < 1) {
    local_40 = '\0';
  }
  else {
    FUN_14584f588(&local_58,*(longlong *)(param_1 + 0x27b8) + 8);
    lVar2 = local_58;
    local_40 = '\x01';
    if (0 < (longlong)local_50) {
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        FUN_144a79b68(&local_60,*(undefined8 *)(param_2 + 0xa90));
        uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 == local_60);
        if (lVar3 == local_60) break;
        bVar6 = (longlong)local_50 * 0x18 + -0x18 != lVar5;
        lVar5 = lVar5 + 0x18;
      } while (bVar6);
      goto LAB_1459026e8;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x2658);
  if ((lVar2 == 0) || (iVar1 = *(int *)(lVar2 + 0x460), (longlong)iVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x458);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      FUN_144a79b68(&local_68,*(undefined8 *)(param_2 + 0xa90));
      uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 == local_68);
      if (lVar3 == local_68) break;
      bVar6 = (longlong)iVar1 * 0x18 + -0x18 != lVar5;
      lVar5 = lVar5 + 0x18;
    } while (bVar6);
  }
LAB_1459026e8:
  if (local_40 == '\x01') {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_40 = '\0';
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1459027ae FUN_1459027ae body=177 status=ok
// SIG undefined FUN_1459027ae(void)

void FUN_1459027ae(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar3 = FUN_140ebc504();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       (iVar1 = *(int *)(param_1 + 0x38), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar5 = 0;
      do {
        local_38 = *(undefined8 *)(lVar3 + lVar5);
        cVar2 = FUN_144729dda(&local_38);
        if (cVar2 != '\0') {
          uVar4 = FUN_14479d2ce(&local_38);
          FUN_145902860(uVar4,param_2);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145902860 FUN_145902860 body=141 status=ok
// SIG undefined FUN_145902860(void)

void FUN_145902860(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (0 < *(int *)(param_1 + 0x27c8))) {
    cVar2 = FUN_145902652(param_1);
    if (cVar2 != '\0') {
      piVar1 = (int *)(param_1 + 0x27c8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        local_14 = 0;
        local_28 = DAT_14cbc55e8;
        local_20 = 0xffffffff;
        FUN_141094e00(param_1 + 0x4d8,&local_28,0);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459028f4 FUN_1459028f4 body=106 status=ok
// SIG undefined FUN_1459028f4(void)

void FUN_1459028f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  puVar1[0x15] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xb4) = 0;
  puVar1[0x17] = 0;
  *puVar1 = &PTR_FUN_149e6b0d0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  return;
}



// FUNCTION 14590295e FUN_14590295e body=156 status=ok
// SIG undefined FUN_14590295e(void)

bool FUN_14590295e(longlong param_1,undefined4 param_2)

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
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145902a44 FUN_145902a44 body=341 status=ok
// SIG undefined FUN_145902a44(void)

void FUN_145902a44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14a926040;
  param_1[2] = 0;
  plVar5 = (longlong *)param_1[3];
  if (plVar5 != (longlong *)0x0) {
    param_1[3] = 0;
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
  if (param_1[0x14] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0x14] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1 + 0x11);
  if (param_1[0x10] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0x10] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1 + 0xd);
  if (param_1[0xc] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0xc] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1 + 9);
  if (param_1[8] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[8] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1 + 5);
  plVar5 = (longlong *)param_1[3];
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
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145902b9a FUN_145902b9a body=9 status=ok
// SIG undefined FUN_145902b9a(void)

void FUN_145902b9a(longlong param_1)

{
  FUN_14006ea12(param_1 + 0x10);
  return;
}



// FUNCTION 145902bae FUN_145902bae body=107 status=ok
// SIG undefined FUN_145902bae(void)

undefined8 * FUN_145902bae(undefined8 *param_1)

{
  FUN_1406ed334();
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  *param_1 = &PTR_FUN_14b2166c0;
  param_1[0x1f] = &PTR_FUN_14b216a30;
  param_1[0x20] = &PTR_FUN_14b216a60;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(byte *)(param_1 + 0x21) = (*(byte *)(param_1 + 0x21) & 0xfc) + 1;
  return param_1;
}



// FUNCTION 145902c19 FUN_145902c19 body=67 status=ok
// SIG undefined FUN_145902c19(void)

void FUN_145902c19(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145902c5c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b201ca0;
  puVar1[5] = &PTR_FUN_14b2022b0;
  puVar1[6] = &PTR_LAB_14b2022f0;
  *(undefined4 *)(puVar1 + 0x1b5) = 1;
  return;
}



// FUNCTION 145902c5c FUN_145902c5c body=391 status=ok
// SIG undefined FUN_145902c5c(void)

undefined8 * FUN_145902c5c(undefined8 *param_1)

{
  FUN_145902de4();
  *param_1 = &PTR_FUN_14a73ec20;
  param_1[5] = &PTR_FUN_14a73f230;
  param_1[6] = &PTR_LAB_14a73f270;
  param_1[0x75] = 0;
  FUN_144894d4c(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x191) = 0;
  *(undefined2 *)(param_1 + 0x1a2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd14) = 0x400000004;
  *(undefined1 *)(param_1 + 0x1aa) = 0;
  param_1[0x1ab] = &DAT_100000001;
  param_1[0x1b3] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd73) = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0x44c0000042b40000;
  *(undefined1 *)((longlong)param_1 + 0x394) = 1;
  *(undefined4 *)(param_1 + 0x73) = 0;
  *(undefined2 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc8c) = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined1 *)(param_1 + 9) = 2;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf5 | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  param_1[0x192] = 0x3ff0000000000000;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0x3ff0000000000000;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0x3ff0000000000000;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0x3ff0000000000000;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0x3ff0000000000000;
  *(byte *)((longlong)param_1 + 0xd54) = *(byte *)((longlong)param_1 + 0xd54) & 0xc0;
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 1;
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xdf;
  *(byte *)((longlong)param_1 + 0x31d) = *(byte *)((longlong)param_1 + 0x31d) & 0xdf;
  return param_1;
}



// FUNCTION 145902de4 FUN_145902de4 body=397 status=ok
// SIG undefined FUN_145902de4(void)

undefined8 * FUN_145902de4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a868d40;
  param_1[5] = &PTR_FUN_14a869340;
  param_1[6] = &PTR_LAB_14a869380;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x8000000000;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  FUN_1401b5a8c(param_1 + 99,0);
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a9) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(byte *)((longlong)param_1 + 0x2aa) = *(byte *)((longlong)param_1 + 0x2aa) & 0xe0 | 3;
  *(undefined1 *)((longlong)param_1 + 0x2ab) = 0;
  param_1[0x5e] = 0xbf8000003f800000;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2fc) = 0;
  *(uint *)((longlong)param_1 + 0x31c) = *(uint *)((longlong)param_1 + 0x31c) & 0xfeffdfff;
  *(byte *)((longlong)param_1 + 0x32b) = *(byte *)((longlong)param_1 + 0x32b) & 0xfe;
  *(byte *)((longlong)param_1 + 0x31b) = *(byte *)((longlong)param_1 + 0x31b) & 0xfb;
  for (puVar1 = param_1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)puVar1[4]) {
    if ((*(uint *)(puVar1 + 1) & 0x30) != 0) goto LAB_145902f4c;
  }
  if (((*(uint *)(param_1 + 1) >> 0xc & 1) == 0) && ((*(uint *)(param_1[4] + 8) >> 0xc & 1) == 0)) {
    FUN_144a61b4f();
    uVar2 = FUN_140c61bfa();
    local_48 = FUN_140f12794;
    local_40 = 0;
    FUN_145902f72(uVar2,local_38,param_1);
  }
LAB_145902f4c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145902f72 FUN_145902f72 body=254 status=ok
// SIG undefined FUN_145902f72(void)

undefined8
FUN_145902f72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a879170;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145903072 FUN_145903072 body=40 status=ok
// SIG undefined FUN_145903072(void)

undefined8 FUN_145903072(undefined8 param_1,int param_2)

{
  FUN_14590309a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14590309a FUN_14590309a body=72 status=ok
// SIG undefined FUN_14590309a(void)

void FUN_14590309a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53daa0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1459030e2(param_1 + 0x13);
  FUN_140d4e91c(param_1);
  return;
}



// FUNCTION 1459030e2 FUN_1459030e2 body=55 status=ok
// SIG undefined FUN_1459030e2(void)

void FUN_1459030e2(longlong *param_1)

{
  FUN_14133ee18(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14590311a FUN_14590311a body=40 status=ok
// SIG undefined FUN_14590311a(void)

undefined8 FUN_14590311a(undefined8 param_1,int param_2)

{
  FUN_145903142();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145903142 FUN_145903142 body=59 status=ok
// SIG undefined FUN_145903142(void)

void FUN_145903142(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a499d20;
  FUN_14590317d(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14590317d FUN_14590317d body=40 status=ok
// SIG undefined FUN_14590317d(void)

void FUN_14590317d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457b7348(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1459031a6 FUN_1459031a6 body=76 status=ok
// SIG undefined FUN_1459031a6(void)

void FUN_1459031a6(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x38);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x50) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x48);
    if ((cVar1 != '\0') &&
       ((*(longlong *)(param_1 + 0x40) != 0 && ((*(byte *)(param_1 + 0x58) & 0xfe) == 2)))) {
      FUN_140351c8e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1459031f2 FUN_1459031f2 body=62 status=ok
// SIG undefined FUN_1459031f2(void)

void FUN_1459031f2(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145903230(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



// FUNCTION 145903230 FUN_145903230 body=132 status=ok
// SIG undefined FUN_145903230(void)

void FUN_145903230(longlong param_1,int param_2)

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



// FUNCTION 1459032b6 FUN_1459032b6 body=40 status=ok
// SIG undefined FUN_1459032b6(void)

undefined8 FUN_1459032b6(undefined8 param_1,int param_2)

{
  FUN_1459032de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459032de FUN_1459032de body=162 status=ok
// SIG undefined FUN_1459032de(void)

void FUN_1459032de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b68c2d0;
  FUN_1449db362(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145903380(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1459033b6(param_1 + 0xe);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145903380 FUN_145903380 body=53 status=ok
// SIG undefined FUN_145903380(void)

void FUN_145903380(longlong *param_1)

{
  FUN_1459033ec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459033b6 FUN_1459033b6 body=53 status=ok
// SIG undefined FUN_1459033b6(void)

void FUN_1459033b6(longlong *param_1)

{
  FUN_145903446();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459033ec FUN_1459033ec body=90 status=ok
// SIG undefined FUN_1459033ec(void)

void FUN_1459033ec(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145903446 FUN_145903446 body=90 status=ok
// SIG undefined FUN_145903446(void)

void FUN_145903446(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1459034a0 FUN_1459034a0 body=61 status=ok
// SIG undefined FUN_1459034a0(void)

void FUN_1459034a0(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x10);
  *(undefined1 **)(*param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1459034de();
    return;
  case 1:
    FUN_148041a90();
    return;
  case 2:
    FUN_14590353e();
    return;
  case 3:
    FUN_148041af0();
    return;
  default:
    return;
  }
}



// FUNCTION 1459034de FUN_1459034de body=94 status=ok
// SIG undefined FUN_1459034de(void)

void FUN_1459034de(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1438f460e;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_1457655f4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590353e FUN_14590353e body=94 status=ok
// SIG undefined FUN_14590353e(void)

void FUN_14590353e(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1438f4678;
  FUN_144a29c16();
  FUN_1457655f4(param_1);
  FUN_14074ef86(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1457655f4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14590359e FUN_14590359e body=24 status=ok
// SIG undefined FUN_14590359e(void)

void FUN_14590359e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459035b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1459035b6 FUN_1459035b6 body=38 status=ok
// SIG undefined FUN_1459035b6(void)

undefined8 FUN_1459035b6(undefined8 param_1,int param_2)

{
  FUN_1459035dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459035dc FUN_1459035dc body=149 status=ok
// SIG undefined FUN_1459035dc(void)

void FUN_1459035dc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40db10;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145903672(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1459036a8(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014590366d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145903672 FUN_145903672 body=53 status=ok
// SIG undefined FUN_145903672(void)

void FUN_145903672(longlong *param_1)

{
  FUN_14133ffc8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459036a8 FUN_1459036a8 body=53 status=ok
// SIG undefined FUN_1459036a8(void)

void FUN_1459036a8(longlong *param_1)

{
  FUN_1459036de();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


