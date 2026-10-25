// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147005300 FUN_147005300 body=165 status=ok
// SIG undefined FUN_147005300(void)

undefined8 FUN_147005300(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [44];
  undefined8 local_9c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa8);
  local_9c = 0xffffffff00000080;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xffffffff;
  uStack_64 = 0xffffffff;
  uStack_60 = 0xffffffff;
  uStack_5c = 0xffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff;
  uStack_34 = 0xffffffff;
  uStack_30 = 0xffffffff;
  uStack_2c = 0xffffffff;
  FUN_1470053a6(param_2,*param_1,local_c8);
  FUN_146ffa69c(local_c8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470053a6 FUN_1470053a6 body=101 status=ok
// SIG undefined FUN_1470053a6(void)

undefined8 * FUN_1470053a6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_14700540c(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 14700540c FUN_14700540c body=186 status=ok
// SIG undefined FUN_14700540c(void)

longlong FUN_14700540c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1470054c6();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  return param_1;
}



// FUNCTION 1470054c6 FUN_1470054c6 body=123 status=ok
// SIG undefined FUN_1470054c6(void)

undefined8 * FUN_1470054c6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147005542();
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



// FUNCTION 147005542 FUN_147005542 body=412 status=ok
// SIG undefined FUN_147005542(void)

longlong * FUN_147005542(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar8 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar6 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar7 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar8) || (local_68 = uVar6, uStack_50 != plVar1)) {
      do {
        local_68 = uVar6;
        plVar2 = (longlong *)(*local_80 + (longlong)iVar7 * 0x50);
        FUN_146fedb88(plVar2 + 2);
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar7 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar8));
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
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar5 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470056e0 FUN_1470056e0 body=171 status=ok
// SIG undefined FUN_1470056e0(void)

int FUN_1470056e0(longlong *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
        uStack_44 = param_3[1];
        uStack_40 = param_3[2];
        uStack_3c = param_3[3];
        cVar1 = FUN_14277ac86(lVar3 + (longlong)iVar4 * 0x50,&local_48);
        if (cVar1 != '\0') goto LAB_147005707;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147005707:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 14700578c FUN_14700578c body=141 status=ok
// SIG undefined FUN_14700578c(void)

longlong FUN_14700578c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147004332();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x50;
    if (lVar3 + lVar2 != 0) goto LAB_1470057c9;
  }
  local_30 = param_3;
  FUN_14700581a(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x50;
LAB_1470057c9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700581a FUN_14700581a body=272 status=ok
// SIG undefined FUN_14700581a(void)

undefined4 * FUN_14700581a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_14700592c(param_1,local_48);
  FUN_147005aa6(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_147005a1a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
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
      FUN_147003a22(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700592c FUN_14700592c body=238 status=ok
// SIG undefined FUN_14700592c(void)

int * FUN_14700592c(longlong *param_1,int *param_2)

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



// FUNCTION 147005a1a FUN_147005a1a body=140 status=ok
// SIG undefined FUN_147005a1a(void)

undefined8 FUN_147005a1a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_147004332(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x50);
    FUN_146fedb88(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x50),param_3,0x48);
    FUN_147005b56(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 147005aa6 FUN_147005aa6 body=174 status=ok
// SIG undefined FUN_147005aa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147005aa6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  uVar3 = DAT_14c83e2e8;
  uVar2 = _DAT_14c83e2e0;
  uVar1 = _DAT_14c83e2d8;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_14 = 0;
  local_28 = _DAT_14c83e2d8;
  uStack_20 = (undefined4)_DAT_14c83e2e0;
  uStack_1c = (undefined4)((ulonglong)_DAT_14c83e2e0 >> 0x20);
  uVar4 = uStack_1c;
  uStack_18 = DAT_14c83e2e8;
  param_1 = (undefined8 *)*param_1;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  param_2[2] = 0;
  local_48 = 0;
  param_2[3] = 0;
  local_40 = 0;
  param_2[4] = 0;
  local_38 = 0;
  param_2[5] = 0;
  local_30 = 0;
  uStack_1c._1_3_ = (undefined3)((ulonglong)uVar2 >> 0x28);
  *(ulonglong *)((longlong)param_2 + 0x3d) = (ulonglong)CONCAT43(uVar3,uStack_1c._1_3_);
  local_28._0_4_ = (undefined4)uVar1;
  local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
  local_28 = uVar1;
  uStack_1c = uVar4;
  FUN_146fedb88(&local_48);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147005b56 FUN_147005b56 body=122 status=ok
// SIG undefined FUN_147005b56(void)

void FUN_147005b56(longlong *param_1,int param_2)

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



// FUNCTION 147005bd0 FUN_147005bd0 body=95 status=ok
// SIG undefined FUN_147005bd0(void)

void FUN_147005bd0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x4c + (longlong)param_2 * 0x50);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x48 + lVar5 * 0x50);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x50 + 0x48);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x50 + 0x48);
  FUN_147005c30();
  return;
}



// FUNCTION 147005c30 FUN_147005c30 body=73 status=ok
// SIG undefined FUN_147005c30(void)

void FUN_147005c30(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*param_1 + (longlong)param_2 * 0x50);
  FUN_146fedb88(plVar1 + 2);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_147005b56(param_1,param_2);
  return;
}



// FUNCTION 147005c7a FUN_147005c7a body=131 status=ok
// SIG undefined FUN_147005c7a(void)

longlong FUN_147005c7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147005cfd();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147003a22(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147005cfd FUN_147005cfd body=687 status=ok
// SIG undefined FUN_147005cfd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147005cfd(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar9 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar10 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar11 = local_78._4_4_;
      local_78 = uVar10;
      do {
        lVar5 = *local_90;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar11 * 0x50);
        FUN_146fedd48(param_1,lVar5 + (longlong)iVar11 * 0x50 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar11 = local_78._4_4_;
        uVar10 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar9,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146ffa736(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar10 = local_78;
    if (0 < (int)local_60) {
      iVar11 = 0;
      do {
        FUN_14700592c(param_2,&local_90);
        puVar3 = local_88 + 2;
        local_88[6] = 0;
        local_88[7] = 0;
        local_88[4] = 0;
        local_88[5] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[8] = 0;
        uVar8 = uRam000000014c83e2e4;
        uVar7 = _DAT_14c83e2e0;
        uVar6 = uRam000000014c83e2dc;
        *(undefined4 *)(local_88 + 6) = _DAT_14c83e2d8;
        *(undefined4 *)((longlong)local_88 + 0x34) = uVar6;
        *(undefined4 *)(local_88 + 7) = uVar7;
        *(undefined4 *)((longlong)local_88 + 0x3c) = uVar8;
        *(undefined4 *)(local_88 + 8) = DAT_14c83e2e8;
        *(undefined4 *)(local_88 + 9) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_146fedd48(param_1,puVar3);
        iVar11 = iVar11 + 1;
        uVar10 = local_78;
      } while (iVar11 < (int)local_60);
    }
  }
  local_78 = uVar10;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147005fae FUN_147005fae body=430 status=ok
// SIG undefined FUN_147005fae(void)

longlong * FUN_147005fae(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146ffbf0e(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1470061d8(param_2,0);
      }
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_14021219d(param_1,lVar3 + lVar5 + -0x10);
      FUN_1408383eb(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_14700615e(param_2);
    if (0 < (int)local_3c) {
      iVar4 = 0;
      do {
        lVar5 = FUN_147006198(param_2);
        FUN_14021219d(param_1,lVar5);
        FUN_1408383eb(param_1,lVar5 + 0x10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14700615e FUN_14700615e body=57 status=ok
// SIG undefined FUN_14700615e(void)

void FUN_14700615e(undefined8 *param_1,int param_2)

{
  FUN_146ffbf0e(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1470061d8(param_1,param_2);
  return;
}



// FUNCTION 147006198 FUN_147006198 body=63 status=ok
// SIG undefined FUN_147006198(void)

longlong FUN_147006198(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146fffa86(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_147006248(lVar2);
  return lVar2;
}



// FUNCTION 1470061d8 FUN_1470061d8 body=112 status=ok
// SIG undefined FUN_1470061d8(void)

void FUN_1470061d8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147006248 FUN_147006248 body=15 status=ok
// SIG undefined FUN_147006248(void)

void FUN_147006248(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 147006258 FUN_147006258 body=143 status=ok
// SIG undefined FUN_147006258(void)

void FUN_147006258(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470062e8 FUN_1470062e8 body=29 status=ok
// SIG undefined FUN_1470062e8(void)

undefined8 FUN_1470062e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147006320 FUN_147006320 body=29 status=ok
// SIG undefined FUN_147006320(void)

bool FUN_147006320(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14700633e FUN_14700633e body=26 status=ok
// SIG undefined FUN_14700633e(void)

bool FUN_14700633e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147006358 FUN_147006358 body=24 status=ok
// SIG undefined FUN_147006358(void)

bool FUN_147006358(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14700637c FUN_14700637c body=101 status=ok
// SIG undefined FUN_14700637c(void)

void FUN_14700637c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149fc9ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fc9f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1470063e2 FUN_1470063e2 body=101 status=ok
// SIG undefined FUN_1470063e2(void)

void FUN_1470063e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149fc9ff0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fc9f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147006448 FUN_147006448 body=134 status=ok
// SIG undefined FUN_147006448(void)

void FUN_147006448(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149fc9ff0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fc9f80;
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
                    /* WARNING: Could not recover jumptable at 0x0001470064bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470064ce FUN_1470064ce body=52 status=ok
// SIG undefined FUN_1470064ce(void)

void FUN_1470064ce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470064ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147006502 FUN_147006502 body=155 status=ok
// SIG undefined FUN_147006502(void)

bool FUN_147006502(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470065a0 FUN_1470065a0 body=140 status=ok
// SIG undefined FUN_1470065a0(void)

void FUN_1470065a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c867138;
  if (param_1 <= (int)DAT_14c867138) {
    if (DAT_14c86713c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c867138) {
        uVar2 = DAT_14c867138;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c867138 + ((ulonglong)((longlong)(int)DAT_14c867138 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    DAT_14c86713c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c867130,param_1,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14700662e FUN_14700662e body=31 status=ok
// SIG undefined FUN_14700662e(void)

undefined8 FUN_14700662e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147006668 FUN_147006668 body=101 status=ok
// SIG undefined FUN_147006668(void)

void FUN_147006668(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149fca060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1470066ce FUN_1470066ce body=101 status=ok
// SIG undefined FUN_1470066ce(void)

void FUN_1470066ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149fca060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147006734 FUN_147006734 body=134 status=ok
// SIG undefined FUN_147006734(void)

void FUN_147006734(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149fca060;
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
                    /* WARNING: Could not recover jumptable at 0x0001470067ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470067ba FUN_1470067ba body=39 status=ok
// SIG undefined FUN_1470067ba(void)

void FUN_1470067ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470067dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1470067e2 FUN_1470067e2 body=31 status=ok
// SIG undefined FUN_1470067e2(void)

undefined8 FUN_1470067e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14700681c FUN_14700681c body=101 status=ok
// SIG undefined FUN_14700681c(void)

void FUN_14700681c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fca0d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147006882 FUN_147006882 body=101 status=ok
// SIG undefined FUN_147006882(void)

void FUN_147006882(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fca0d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1470068e8 FUN_1470068e8 body=134 status=ok
// SIG undefined FUN_1470068e8(void)

void FUN_1470068e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e62de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fca0d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014700695f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14700696e FUN_14700696e body=52 status=ok
// SIG undefined FUN_14700696e(void)

void FUN_14700696e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014700699f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1470069a2 FUN_1470069a2 body=155 status=ok
// SIG undefined FUN_1470069a2(void)

bool FUN_1470069a2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147006a3e FUN_147006a3e body=155 status=ok
// SIG undefined FUN_147006a3e(void)

undefined8 * FUN_147006a3e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 147006ada FUN_147006ada body=132 status=ok
// SIG undefined FUN_147006ada(void)

void FUN_147006ada(longlong param_1,int param_2)

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



// FUNCTION 147006b60 FUN_147006b60 body=116 status=ok
// SIG undefined FUN_147006b60(void)

void FUN_147006b60(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 147006bd4 FUN_147006bd4 body=327 status=ok
// SIG undefined FUN_147006bd4(void)

undefined4 *
FUN_147006bd4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146862b7a(param_1,local_40);
  uVar1 = *(undefined8 *)*param_3;
  *local_38 = uVar1;
  local_38[1] = 0;
  local_38[2] = 0xffffffff00000000;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar4 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar4 << 0x13 | uVar4 & 0xffff);
    *(uint *)((longlong)local_38 + 0x1c) = uVar4;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 3) =
         *(undefined4 *)
          (lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_146862c60(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147006d1c FUN_147006d1c body=369 status=ok
// SIG undefined FUN_147006d1c(void)

undefined4 *
FUN_147006d1c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146862b7a(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(undefined8 *)*param_3;
  *local_38 = uVar4;
  iVar8 = *(int *)((longlong)puVar1 + 0xc);
  if (iVar8 == -1) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    local_38[1] = 0;
    uVar6 = *puVar1;
    uVar7 = *(undefined4 *)(puVar1 + 1);
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar4 = *local_38;
  }
  local_38[1] = uVar6;
  *(undefined4 *)(local_38 + 2) = uVar7;
  *(int *)((longlong)local_38 + 0x14) = iVar8;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar8 = 1;
  if (3 < uVar5) {
    uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar8 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
    uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
    uVar9 = (uint)uVar4 & 0xffff;
    uVar5 = *(int *)(param_1 + 0x48) - 1U &
            (uVar9 >> 4) +
            ((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    *(uint *)((longlong)local_38 + 0x1c) = uVar5;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 3) =
         *(undefined4 *)
          (lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar8;
    FUN_146862c60(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147006e8e FUN_147006e8e body=138 status=ok
// SIG undefined FUN_147006e8e(void)

void FUN_147006e8e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x3808);
  if (param_2 <= (int)uVar1) {
    iVar6 = 0x80;
    if (0x80 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x380c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x70,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 4;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x380c) = iVar6;
    FUN_147006f1a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147006f1a FUN_147006f1a body=144 status=ok
// SIG undefined FUN_147006f1a(void)

void FUN_147006f1a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x3800);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x70);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x3800,0,param_3,0x70);
    memmove(*(void **)((longlong)param_1 + 0x3800),param_1,(longlong)param_2 * 0x70);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x3800,param_2,param_3,0x70);
  return;
}



// FUNCTION 147006faa FUN_147006faa body=95 status=ok
// SIG undefined FUN_147006faa(void)

longlong * FUN_147006faa(longlong *param_1,longlong *param_2)

{
  if ((char)param_1[3] == '\x01') {
    FUN_140958ed1(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 14700700a FUN_14700700a body=117 status=ok
// SIG undefined FUN_14700700a(void)

undefined2 * FUN_14700700a(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  puVar2 = *(undefined2 **)(param_2 + 8);
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe) = 1;
  }
  else {
    _Src = param_2 + 4;
    if (puVar2 != (undefined2 *)0x0) {
      _Src = puVar2;
    }
    FUN_147007080(param_1 + 4,iVar1,0);
    puVar2 = *(undefined2 **)(param_1 + 8);
    if (*(undefined2 **)(param_1 + 8) == (undefined2 *)0x0) {
      puVar2 = param_1 + 4;
    }
    memcpy(puVar2,_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 147007080 FUN_147007080 body=78 status=ok
// SIG undefined FUN_147007080(void)

void FUN_147007080(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar2 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar2) {
    FUN_1470070ce(param_1,0,uVar2,1);
    param_3 = uVar2;
  }
  *(uint *)(param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 1470070ce FUN_1470070ce body=129 status=ok
// SIG undefined FUN_1470070ce(void)

void FUN_1470070ce(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 147007150 FUN_147007150 body=84 status=ok
// SIG undefined FUN_147007150(void)

undefined8 FUN_147007150(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1470071f6(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470071d8 FUN_1470071d8 body=29 status=ok
// SIG undefined FUN_1470071d8(void)

undefined8 FUN_1470071d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470071f6 FUN_1470071f6 body=96 status=ok
// SIG undefined FUN_1470071f6(void)

void FUN_1470071f6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)((ulonglong)((*(byte *)*param_1 ^ 1) << 4) + 0x10 + *(longlong *)*param_2))
            ((longlong *)*param_2,param_1[1],param_1[2]);
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
                    /* WARNING: Could not recover jumptable at 0x00014700724b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147007256 FUN_147007256 body=84 status=ok
// SIG undefined FUN_147007256(void)

undefined8 FUN_147007256(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1470072fc(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470072de FUN_1470072de body=29 status=ok
// SIG undefined FUN_1470072de(void)

undefined8 FUN_1470072de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470072fc FUN_1470072fc body=96 status=ok
// SIG undefined FUN_1470072fc(void)

void FUN_1470072fc(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)*param_2 + 8 + (ulonglong)((*(byte *)*param_1 ^ 1) << 4)))
            ((longlong *)*param_2,param_1[1],param_1[2]);
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
                    /* WARNING: Could not recover jumptable at 0x000147007351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14700735c FUN_14700735c body=103 status=ok
// SIG undefined FUN_14700735c(void)

undefined8 FUN_14700735c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xc0,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0xc0)) {
    uVar4 = uVar2 / 0xc0 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xc0,8);
  }
  return uVar3;
}



// FUNCTION 1470073c4 FUN_1470073c4 body=147 status=ok
// SIG undefined FUN_1470073c4(void)

void FUN_1470073c4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147007458 FUN_147007458 body=167 status=ok
// SIG undefined FUN_147007458(void)

undefined4 * FUN_147007458(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  cVar1 = *(char *)(param_2 + 0x2e);
  *(char *)(param_1 + 0x2e) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    FUN_146ffe438(param_1 + 10,param_2 + 10);
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_2 + 0x1e) = 0;
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    *(undefined8 *)(param_2 + 0x20) = 0;
    uVar9 = *(undefined8 *)(param_2 + 0x22);
    uVar10 = *(undefined8 *)(param_2 + 0x24);
    uVar11 = *(undefined8 *)(param_2 + 0x26);
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    uVar13 = *(undefined8 *)((longlong)param_2 + 0xad);
    *(undefined8 *)((longlong)param_1 + 0xa5) = *(undefined8 *)((longlong)param_2 + 0xa5);
    *(undefined8 *)((longlong)param_1 + 0xad) = uVar13;
    *(undefined8 *)(param_1 + 0x26) = uVar11;
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    *(undefined8 *)(param_1 + 0x22) = uVar9;
    *(undefined8 *)(param_1 + 0x24) = uVar10;
  }
  return param_1;
}



// FUNCTION 147007500 FUN_147007500 body=55 status=ok
// SIG undefined FUN_147007500(void)

void FUN_147007500(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147007538();
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_140a1e307(lVar1,param_2,1);
  return;
}



// FUNCTION 147007538 FUN_147007538 body=48 status=ok
// SIG undefined FUN_147007538(void)

void FUN_147007538(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1446efa72(param_1 + 0x40,0,0,0x20);
  }
  *(undefined4 *)(param_1 + 0x4c) = 2;
  return;
}



// FUNCTION 147007568 FUN_147007568 body=132 status=ok
// SIG undefined FUN_147007568(void)

void FUN_147007568(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x20);
  return;
}



// FUNCTION 1470075ec FUN_1470075ec body=124 status=ok
// SIG undefined FUN_1470075ec(void)

void FUN_1470075ec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x4c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 5,0);
      iVar3 = (int)(uVar4 >> 5);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar6;
    FUN_147007568(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14700766a FUN_14700766a body=189 status=ok
// SIG undefined FUN_14700766a(void)

void FUN_14700766a(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_1470076f1;
          goto LAB_147007700;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_1470076f1:
    FUN_14109be94(param_1,0);
  }
LAB_147007700:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147007713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 147007728 FUN_147007728 body=230 status=ok
// SIG undefined FUN_147007728(void)

void FUN_147007728(LPCRITICAL_SECTION param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_48);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_1470077ce;
          goto LAB_1470077dd;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_1470077ce:
    FUN_14109be94(param_1,0);
  }
LAB_1470077dd:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147007810 FUN_147007810 body=189 status=ok
// SIG undefined FUN_147007810(void)

void FUN_147007810(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_147007897;
          goto LAB_1470078a6;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_147007897:
    FUN_14109be94(param_1,0);
  }
LAB_1470078a6:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470078b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1470078ce FUN_1470078ce body=200 status=ok
// SIG undefined FUN_1470078ce(void)

void FUN_1470078ce(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_14700795e;
          goto LAB_14700796d;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14700795e:
    FUN_14109be94(param_1,0);
  }
LAB_14700796d:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147007981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 147007996 FUN_147007996 body=311 status=ok
// SIG undefined FUN_147007996(void)

undefined4 * FUN_147007996(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470014da(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  local_30[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
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
  uVar2 = *local_30;
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar7 = (uint)uVar2 & 0xffff;
    uVar5 = *(int *)(param_1 + 0x48) - 1U &
            (uVar7 >> 4) +
            ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146ffd958(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147007ace FUN_147007ace body=322 status=ok
// SIG undefined FUN_147007ace(void)

void FUN_147007ace(longlong *param_1)

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



// FUNCTION 147007c12 FUN_147007c12 body=298 status=ok
// SIG undefined FUN_147007c12(void)

void FUN_147007c12(longlong *param_1)

{
  longlong lVar1;
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
      lVar1 = *(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (lVar1 != 0) {
        FUN_14128b0c2(lVar1);
        FUN_1400020a8(lVar1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147007d3e FUN_147007d3e body=310 status=ok
// SIG undefined FUN_147007d3e(void)

undefined4 * FUN_147007d3e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146ffde1c(param_1,local_38);
  uVar1 = param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  FUN_146ff8996(local_30 + 1,uVar1);
  *(undefined4 *)(local_30 + 0x1e) = 0xffffffff;
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
  uVar1 = *local_30;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_30 + 0xf4) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 0x1e) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_146ffdf4e(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147007e76 FUN_147007e76 body=328 status=ok
// SIG undefined FUN_147007e76(void)

void FUN_147007e76(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xf4 + (longlong)iVar4 * 0xf8) * 4) =
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



// FUNCTION 147007fc0 FUN_147007fc0 body=287 status=ok
// SIG undefined FUN_147007fc0(void)

void FUN_147007fc0(longlong *param_1)

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
      FUN_146ff7a86(*local_60 + (longlong)iStack_44 * 0xf8 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14579fe3a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470080e0 FUN_1470080e0 body=57 status=ok
// SIG undefined FUN_1470080e0(void)

void FUN_1470080e0(undefined8 *param_1,int param_2)

{
  FUN_140195631(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147000e7a(param_1,param_2);
  return;
}



// FUNCTION 14700811a FUN_14700811a body=517 status=ok
// SIG undefined FUN_14700811a(void)

undefined4 *
FUN_14700811a(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1403af904(param_1,local_58);
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)local_50 = *param_3;
  *(undefined4 *)((longlong)local_50 + 4) = uVar6;
  *(undefined4 *)(local_50 + 1) = uVar7;
  *(undefined4 *)((longlong)local_50 + 0xc) = uVar3;
  iVar11 = 0;
  local_50[2] = 0;
  local_50[2] = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined4 *)(local_50 + 3) = param_3[6];
  *(undefined4 *)((longlong)local_50 + 0x1c) = param_3[7];
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined4 *)(local_50 + 4) = 0xffffffff;
  local_5c = local_58[0];
  uVar1 = *local_50;
  uVar2 = local_50[1];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar14 = (uint)uVar2 & 0xffff;
  uVar5 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar13 = (uint)uVar1 & 0xffff;
  uVar5 = ((uint)uVar1 << 0x10 | uVar13) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar13 >> 4);
  uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar14) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar14 >> 4) + uVar5 * 0x40 +
                          0x9e3779b9 ^ uVar5);
  if (*(int *)(local_50 + 3) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)local_50[2];
    iVar11 = *(int *)(local_50 + 3) + -1;
  }
  uVar7 = FUN_144a49b4a(iVar11,puVar10);
  uVar8 = FUN_144a78877(uVar6,uVar7);
  local_68 = param_4;
  cVar4 = FUN_1403af79a(param_1,uVar8,local_50,&local_5c);
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar5) {
      uVar9 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_50 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1403afb7e(param_1);
    }
  }
  *param_2 = local_5c;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147008320 FUN_147008320 body=116 status=ok
// SIG undefined FUN_147008320(void)

longlong * FUN_147008320(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  wchar_t *_Str;
  undefined8 uVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (longlong)(param_1 + 4);
  param_1[1] = (longlong)(param_1 + 4);
  param_1[2] = (longlong)(param_1 + 0x44);
  uVar3 = 0;
  iVar4 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0;
  }
  uVar1 = FUN_1449668a2(param_1,*param_2,iVar4);
  _Str = (wchar_t *)*param_3;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    uVar3 = (int)sVar2;
  }
  FUN_1449668a2(uVar1,_Str,uVar3);
  return param_1;
}



// FUNCTION 147008394 FUN_147008394 body=370 status=ok
// SIG undefined FUN_147008394(void)

int FUN_147008394(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  
  iVar11 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar13 = (uint)uVar2 & 0xffff;
    uVar5 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar12 = (uint)uVar1 & 0xffff;
    uVar5 = ((uint)uVar1 << 0x10 | uVar12) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4);
    iVar11 = 0;
    uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                            ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4) + uVar5 * 0x40 +
                            0x9e3779b9 ^ uVar5);
    if (*(int *)(param_2 + 3) == 0) {
      puVar10 = &DAT_149dfb77a;
      iVar8 = iVar11;
    }
    else {
      puVar10 = (undefined2 *)param_2[2];
      iVar8 = *(int *)(param_2 + 3) + -1;
    }
    uVar7 = FUN_144a49b4a(iVar8,puVar10);
    iVar8 = FUN_144a78877(uVar6,uVar7);
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    uVar14 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
    lVar9 = (longlong)*(int *)((longlong)plVar16 + uVar14 * 4);
    if (lVar9 != -1) {
      lVar9 = lVar9 * 0x28 + *param_1;
      cVar4 = FUN_144a7afa6(lVar9,param_2);
      if (cVar4 == '\0') {
        do {
          lVar15 = lVar9;
          lVar9 = (longlong)*(int *)(lVar15 + 0x20);
          if (lVar9 == -1) {
            return 0;
          }
          lVar9 = lVar9 * 0x28 + *param_1;
          cVar4 = FUN_144a7afa6(lVar9,param_2);
        } while (cVar4 == '\0');
        puVar17 = (undefined4 *)(lVar15 + 0x20);
      }
      else {
        puVar17 = (undefined4 *)((longlong)plVar16 + uVar14 * 4);
      }
      FUN_147008506(param_1,*puVar17);
      iVar11 = 1;
    }
  }
  return iVar11;
}



// FUNCTION 147008506 FUN_147008506 body=93 status=ok
// SIG undefined FUN_147008506(void)

void FUN_147008506(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_147008564(param_1,param_2,1);
  return;
}



// FUNCTION 147008564 FUN_147008564 body=87 status=ok
// SIG undefined FUN_147008564(void)

void FUN_147008564(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x28 + 0x10);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_1403afada(param_1,param_2,param_3);
  return;
}



// FUNCTION 1470085bc FUN_1470085bc body=187 status=ok
// SIG undefined FUN_1470085bc(void)

longlong * FUN_1470085bc(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14700865a;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_147008678(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_14700865a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 147008678 FUN_147008678 body=283 status=ok
// SIG undefined FUN_147008678(void)

undefined4 * FUN_147008678(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ca3ce(param_1,local_48);
  puVar1 = (undefined8 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_14090688a(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_140906920(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147008794 FUN_147008794 body=180 status=ok
// SIG undefined FUN_147008794(void)

longlong * FUN_147008794(longlong *param_1,uint param_2,longlong *param_3)

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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14700882b;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14700884a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_14700882b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14700884a FUN_14700884a body=277 status=ok
// SIG undefined FUN_14700884a(void)

undefined4 * FUN_14700884a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147008960(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0xffffffff00000000;
  cVar1 = FUN_147008a46(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_147008b3e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147008960 FUN_147008960 body=230 status=ok
// SIG undefined FUN_147008960(void)

int * FUN_147008960(longlong *param_1,int *param_2)

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



// FUNCTION 147008a46 FUN_147008a46 body=134 status=ok
// SIG undefined FUN_147008a46(void)

undefined8 FUN_147008a46(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147008acc(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147008acc FUN_147008acc body=114 status=ok
// SIG undefined FUN_147008acc(void)

void FUN_147008acc(longlong *param_1,int param_2)

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



// FUNCTION 147008b3e FUN_147008b3e body=473 status=ok
// SIG undefined FUN_147008b3e(void)

void FUN_147008b3e(longlong *param_1)

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



// FUNCTION 147008d18 FUN_147008d18 body=235 status=ok
// SIG undefined FUN_147008d18(void)

void FUN_147008d18(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    uVar6 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar10 = (uint)lVar2 & 0xffff;
    uVar6 = ((uint)lVar2 << 0x10 | uVar10) + (int)((ulonglong)lVar2 >> 0x20) +
            (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4);
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar8 +
                    ((longlong)
                     (int)((uVar6 >> 2) +
                           ((uint)lVar3 << 0x10 | uVar7) + (int)((ulonglong)lVar3 >> 0x20) +
                           (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4) + uVar6 * 0x40 +
                           0x9e3779b9 ^ uVar6) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar9 = (longlong)iVar1;
        if ((*(longlong *)(lVar4 + lVar9 * 0x28) == lVar2) &&
           (*(longlong *)(lVar4 + 8 + lVar9 * 0x28) == lVar3)) {
          FUN_147008e04();
          return;
        }
        iVar1 = *(int *)(lVar4 + lVar9 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147008e04 FUN_147008e04 body=93 status=ok
// SIG undefined FUN_147008e04(void)

void FUN_147008e04(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1408b74cc(param_1,param_2,1);
  return;
}



// FUNCTION 147008e62 FUN_147008e62 body=105 status=ok
// SIG undefined FUN_147008e62(void)

int FUN_147008e62(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar4 = (longlong)iVar1 * 0x30;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(longlong *)(lVar2 + lVar4 + 0x10) == param_3[2])) &&
           (*(longlong *)(lVar2 + lVar4 + 0x18) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147008ecb FUN_147008ecb body=270 status=ok
// SIG undefined FUN_147008ecb(void)

void FUN_147008ecb(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  if (param_1[3] == 0 && param_1[2] == 0) {
    return;
  }
  uVar3 = FUN_144a78877(0,((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
  uVar1 = param_1[1];
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar3 = FUN_144a78877(uVar3,((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
  uVar1 = param_1[2];
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar3 = FUN_144a78877(uVar3,((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
  uVar1 = param_1[3];
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  FUN_144a78877(uVar3,((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
  return;
}



// FUNCTION 147008fda FUN_147008fda body=147 status=ok
// SIG undefined FUN_147008fda(void)

void FUN_147008fda(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14700906e FUN_14700906e body=124 status=ok
// SIG undefined FUN_14700906e(void)

void FUN_14700906e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_1470090ec(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470090ec FUN_1470090ec body=132 status=ok
// SIG undefined FUN_1470090ec(void)

void FUN_1470090ec(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 147009170 FUN_147009170 body=114 status=ok
// SIG undefined FUN_147009170(void)

void FUN_147009170(longlong *param_1,int param_2)

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



// FUNCTION 1470091e2 FUN_1470091e2 body=322 status=ok
// SIG undefined FUN_1470091e2(void)

void FUN_1470091e2(longlong *param_1)

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



// FUNCTION 147009326 FUN_147009326 body=322 status=ok
// SIG undefined FUN_147009326(void)

void FUN_147009326(longlong *param_1)

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



// FUNCTION 14700946a FUN_14700946a body=62 status=ok
// SIG undefined FUN_14700946a(void)

void FUN_14700946a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6,undefined4 *param_7)

{
  (*(code *)*param_1)(param_2,param_3,param_4,*param_5,*param_6,*param_7);
  return;
}



// FUNCTION 1470094d2 FUN_1470094d2 body=29 status=ok
// SIG undefined FUN_1470094d2(void)

undefined8 FUN_1470094d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470094f0 FUN_1470094f0 body=332 status=ok
// SIG undefined FUN_1470094f0(void)

undefined4 *
FUN_1470094f0(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14700963e(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_147009724(param_1,uVar2,local_48);
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
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14700983e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700963e FUN_14700963e body=229 status=ok
// SIG undefined FUN_14700963e(void)

int * FUN_14700963e(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 147009724 FUN_147009724 body=144 status=ok
// SIG undefined FUN_147009724(void)

void FUN_147009724(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1470097b4(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14700978f;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14700978f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1470097b4 FUN_1470097b4 body=138 status=ok
// SIG undefined FUN_1470097b4(void)

void FUN_1470097b4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14700983e FUN_14700983e body=477 status=ok
// SIG undefined FUN_14700983e(void)

void FUN_14700983e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147009a1c FUN_147009a1c body=322 status=ok
// SIG undefined FUN_147009a1c(void)

void FUN_147009a1c(longlong *param_1)

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



// FUNCTION 147009b60 FUN_147009b60 body=128 status=ok
// SIG undefined FUN_147009b60(void)

void FUN_147009b60(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 147009be2 FUN_147009be2 body=181 status=ok
// SIG undefined FUN_147009be2(void)

longlong FUN_147009be2(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147009c7a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147009c98(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147009c7a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147009c98 FUN_147009c98 body=277 status=ok
// SIG undefined FUN_147009c98(void)

undefined4 * FUN_147009c98(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147009dae(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147009e94(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_147009fa8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147009dae FUN_147009dae body=229 status=ok
// SIG undefined FUN_147009dae(void)

int * FUN_147009dae(longlong *param_1,int *param_2)

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



// FUNCTION 147009e94 FUN_147009e94 body=161 status=ok
// SIG undefined FUN_147009e94(void)

undefined8 FUN_147009e94(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147009f36(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147009f36 FUN_147009f36 body=114 status=ok
// SIG undefined FUN_147009f36(void)

void FUN_147009f36(longlong *param_1,int param_2)

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



// FUNCTION 147009fa8 FUN_147009fa8 body=477 status=ok
// SIG undefined FUN_147009fa8(void)

void FUN_147009fa8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14700a186 FUN_14700a186 body=132 status=ok
// SIG undefined FUN_14700a186(void)

void FUN_14700a186(longlong param_1,int param_2)

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



// FUNCTION 14700a20c FUN_14700a20c body=54 status=ok
// SIG undefined FUN_14700a20c(void)

void FUN_14700a20c(longlong *param_1)

{
  FUN_147009b60(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14700a242 FUN_14700a242 body=68 status=ok
// SIG undefined FUN_14700a242(void)

void FUN_14700a242(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14700a286();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14700a286 FUN_14700a286 body=322 status=ok
// SIG undefined FUN_14700a286(void)

void FUN_14700a286(longlong *param_1)

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



// FUNCTION 14700a3ca FUN_14700a3ca body=96 status=ok
// SIG undefined FUN_14700a3ca(void)

void FUN_14700a3ca(longlong param_1,int param_2)

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



// FUNCTION 14700a42a FUN_14700a42a body=63 status=ok
// SIG undefined FUN_14700a42a(void)

void FUN_14700a42a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14700a46a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14700a46a FUN_14700a46a body=97 status=ok
// SIG undefined FUN_14700a46a(void)

ulonglong FUN_14700a46a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14700a4cc FUN_14700a4cc body=48 status=ok
// SIG undefined FUN_14700a4cc(void)

void FUN_14700a4cc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 14700a4fc FUN_14700a4fc body=54 status=ok
// SIG undefined FUN_14700a4fc(void)

void FUN_14700a4fc(longlong *param_1)

{
  FUN_14700a532(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14700a532 FUN_14700a532 body=128 status=ok
// SIG undefined FUN_14700a532(void)

void FUN_14700a532(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 14700a5b4 FUN_14700a5b4 body=230 status=ok
// SIG undefined FUN_14700a5b4(void)

void FUN_14700a5b4(LPCRITICAL_SECTION param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_48);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_14700a65a;
          goto LAB_14700a669;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14700a65a:
    FUN_14109be94(param_1,0);
  }
LAB_14700a669:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700a69c FUN_14700a69c body=189 status=ok
// SIG undefined FUN_14700a69c(void)

void FUN_14700a69c(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_14700a723;
          goto LAB_14700a732;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14700a723:
    FUN_14109be94(param_1,0);
  }
LAB_14700a732:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014700a745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14700a75a FUN_14700a75a body=189 status=ok
// SIG undefined FUN_14700a75a(void)

void FUN_14700a75a(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_14700a7e1;
          goto LAB_14700a7f0;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14700a7e1:
    FUN_14109be94(param_1,0);
  }
LAB_14700a7f0:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014700a803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14700a818 FUN_14700a818 body=48 status=ok
// SIG undefined FUN_14700a818(void)

void FUN_14700a818(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 14700a848 FUN_14700a848 body=164 status=ok
// SIG undefined FUN_14700a848(void)

void FUN_14700a848(longlong *param_1,undefined8 param_2)

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
        goto LAB_14700a8c8;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14700a8c8:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14700a8ec FUN_14700a8ec body=189 status=ok
// SIG undefined FUN_14700a8ec(void)

void FUN_14700a8ec(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_14700a973;
          goto LAB_14700a982;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14700a973:
    FUN_14109be94(param_1,0);
  }
LAB_14700a982:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014700a995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14700a9aa FUN_14700a9aa body=139 status=ok
// SIG undefined FUN_14700a9aa(void)

undefined8 * FUN_14700a9aa(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_144881636(param_1,param_2 + 0x60);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_144881636(param_1 + 10,param_2 + 0xb0);
  return param_1;
}



// FUNCTION 14700aa36 FUN_14700aa36 body=260 status=ok
// SIG undefined FUN_14700aa36(void)

longlong * FUN_14700aa36(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = param_1 + 0x13;
  FUN_146825b50(plVar1,0,0,0);
  *param_1 = (longlong)&PTR_FUN_149fca3f0;
  FUN_1407134c4(param_1,plVar1);
  param_1[0x12] = (longlong)plVar1;
  param_1[0x11] = param_1[0x24];
  param_1[0x24] = (longlong)param_1;
  *param_1 = (longlong)&PTR_FUN_149fca3f0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_14700ab3a(param_1 + 0x35,param_2);
  param_1[0x9a] = param_3;
  FUN_146821684(param_1,param_3);
  uVar2 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(param_1[0x9a] + 0x2b)) &
          0xffffffffffffff20;
  (**(code **)(*param_1 + 0x70))(param_1,CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5));
  *(byte *)((longlong)param_1 + 0x2b) =
       *(byte *)((longlong)param_1 + 0x2b) & 0xdf | *(byte *)(param_1[0x9a] + 0x2b) & 0x20;
  return param_1;
}



// FUNCTION 14700ab3a FUN_14700ab3a body=406 status=ok
// SIG undefined FUN_14700ab3a(void)

longlong FUN_14700ab3a(longlong param_1)

{
  FUN_1470192e2();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2dc) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  return param_1;
}



// FUNCTION 14700acd0 FUN_14700acd0 body=629 status=ok
// SIG undefined FUN_14700acd0(void)

void FUN_14700acd0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  uint local_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = &PTR_FUN_149fca3f0;
  lVar3 = param_1[0x27];
  FUN_14685a560(param_1 + 0x35,&local_118);
  FUN_14685b399(&local_118,param_1);
  FUN_14700af46(&local_118);
  uVar7 = param_1[0x9a];
  plVar1 = param_1 + 0x2b;
  local_138 = 0;
  uStack_130 = 0;
  FUN_147019366(&local_138,*(int *)(param_1 + 0x2c) - *(int *)((longlong)param_1 + 0x18c));
  puVar2 = param_1 + 0x2d;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  local_60 = puVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x30);
  }
  local_100 = local_58;
  iStack_fc = iStack_54;
  local_f8 = local_50;
  local_f4 = local_4c;
  local_110 = local_68;
  local_108 = local_60;
  local_118 = plVar1;
  if ((iStack_54 != iVar8) || (local_60 != puVar2)) {
    do {
      *(undefined4 *)
       (local_138 + (longlong)*(int *)(*local_118 + 4 + (longlong)iStack_fc * 0x10) * 4) =
           *(undefined4 *)(*local_118 + (longlong)iStack_fc * 0x10);
      local_100 = local_100 & ~local_110._4_4_;
      FUN_1449c0562(&local_110);
    } while (local_118 != plVar1 || (local_108 != puVar2 || iStack_fc != iVar8));
  }
  puVar2 = param_1 + 0x13;
  local_128 = local_138;
  local_120 = (undefined4)uStack_130;
  FUN_14682cc76(&local_128,uVar7);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x9a];
  lVar5 = param_1[0x27];
  lVar6 = FUN_142790102(puVar2);
  (**(code **)(*plVar4 + 0x170))(plVar4,lVar6 + lVar3,lVar5 - lVar3);
  plVar4 = (longlong *)param_1[0x9a];
  uVar7 = FUN_142790102(puVar2);
  (**(code **)(*plVar4 + 0x170))(plVar4,uVar7,lVar3);
  FUN_14700b00e(param_1 + 0x35);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1470196a2(plVar1);
  FUN_14041e0ea(param_1);
  FUN_146825c36(puVar2);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700af46 FUN_14700af46 body=200 status=ok
// SIG undefined FUN_14700af46(void)

void FUN_14700af46(longlong *param_1)

{
  FUN_1468640b2(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
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



// FUNCTION 14700b00e FUN_14700b00e body=288 status=ok
// SIG undefined FUN_14700b00e(void)

void FUN_14700b00e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1400020a8();
  }
  FUN_147019418(param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_1400020a8();
  }
  FUN_147019586(param_1 + 0x260);
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  FUN_147019614(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
  }
  FUN_1410baed6(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_1470196a2(param_1 + 0x170);
  FUN_1470193dc(param_1 + 0x108);
  FUN_1470193dc(param_1 + 0xa0);
  FUN_146ffb54a(param_1);
  return;
}



// FUNCTION 14700b12e FUN_14700b12e body=350 status=ok
// SIG undefined FUN_14700b12e(void)

longlong * FUN_14700b12e(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = *param_2;
  local_28 = (int)param_1[0x2c] - *(int *)((longlong)param_1 + 0x18c);
  puVar2 = (uint *)FUN_14701ae2a(param_1 + 0x2b,
                                 (local_24 << 0x10 | local_24 & 0xffff) + ((local_24 & 0xffff) >> 4)
                                 + ((local_24 >> 0x10) << 0x13 | local_24 >> 0x10),&local_24,
                                 &local_28);
  local_28 = *puVar2;
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    puVar4 = (ulonglong *)param_1[1];
    uVar5 = *puVar4 + 4;
    if (uVar5 <= puVar4[1]) goto LAB_14700b243;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      puVar2 = &local_28;
      goto LAB_14700b27c;
    }
    lVar3 = *param_1;
    puVar2 = &local_28;
  }
  else {
    local_28 = local_28 | 0x80000000;
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (uint *)*puVar4 + 1;
    local_2c = uVar1;
    if ((uint *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_28,4);
      }
      else {
        FUN_14572512c(param_1,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar2;
    }
    puVar4 = (ulonglong *)param_1[1];
    uVar5 = *puVar4 + 4;
    if (uVar5 <= puVar4[1]) {
LAB_14700b243:
      *puVar4 = uVar5;
      goto LAB_14700b246;
    }
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      puVar2 = &local_2c;
LAB_14700b27c:
      FUN_14572512c(param_1,puVar2);
      goto LAB_14700b246;
    }
    lVar3 = *param_1;
    puVar2 = &local_2c;
  }
  (**(code **)(lVar3 + 0x170))(param_1,puVar2,4);
LAB_14700b246:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700b28d FUN_14700b28d body=153 status=ok
// SIG undefined FUN_14700b28d(void)

void FUN_14700b28d(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14685975c(param_1 + 0x35,&local_20,param_2);
  local_20 = FUN_146859744(&local_20);
  puVar1 = (ulonglong *)param_1[1];
  if (puVar1[1] < *puVar1 + 8) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_20,8);
    }
    else {
      thunk_FUN_146821949(param_1,&local_20);
    }
  }
  else {
    *puVar1 = *puVar1 + 8;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700b328 FUN_14700b328 body=3263 status=ok
// SIG undefined FUN_14700b328(void)

void FUN_14700b328(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong **pplVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong **pplVar21;
  longlong lVar22;
  longlong **pplVar23;
  longlong *plVar24;
  longlong **pplVar25;
  uint uVar26;
  longlong *plVar27;
  longlong **pplVar28;
  longlong **pplVar29;
  longlong *plVar30;
  longlong *plVar31;
  longlong **pplVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_418 [32];
  longlong **local_3f8;
  longlong **local_3f0;
  int local_3e4;
  longlong *local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  longlong **local_3c8;
  int local_3bc;
  longlong *local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong *local_388;
  undefined8 uStack_380;
  int local_36c;
  longlong *local_368;
  longlong *local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_3e0 = param_1;
  FUN_14700b28d(param_1,param_2 + 0x40);
  local_3b8 = (longlong *)0x0;
  uStack_3b0 = 0;
  plVar20 = *(longlong **)(param_2 + 0x48);
  if (plVar20 == (longlong *)0x0) {
    uStack_3b0._0_4_ = 0;
  }
  else {
    iVar5 = (int)plVar20[1];
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 != 0) {
      FUN_147019730(&local_3b8);
      if ((longlong)(int)plVar20[1] != 0) {
        lVar16 = *plVar20;
        lVar22 = (longlong)(int)plVar20[1] * 0x18;
        do {
          lVar14 = (longlong)(int)uStack_3b0;
          uVar26 = (int)uStack_3b0 + 1;
          uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar26);
          if (uStack_3b0._4_4_ < uVar26) {
            FUN_147019786(&local_3b8);
          }
          local_3b8[lVar14] = lVar16;
          lVar16 = lVar16 + 0x18;
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != 0);
      }
    }
    plVar20 = local_3b8;
    iVar5 = (int)uStack_3b0;
    lVar16 = (longlong)(int)uStack_3b0;
    if (1 < lVar16) {
      memset(&local_358,0,0x2f0);
      local_368 = plVar20;
      local_360 = plVar20 + lVar16 + -1;
      fVar34 = logf((float)iVar5);
      local_358 = (int)(longlong)(fVar34 + fVar34);
      pplVar11 = &local_368;
      do {
        plVar10 = *pplVar11;
        plVar17 = pplVar11[1];
        iVar5 = *(int *)(pplVar11 + 2);
        iVar6 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar10) >> 3);
        uVar26 = iVar6 + 1;
        plVar20 = plVar17;
        plVar31 = plVar10;
        local_3f8 = pplVar11;
        if (iVar5 != 0) {
LAB_14700b418:
          pplVar11 = local_3f8;
          if (8 < (int)uVar26) {
            lVar16 = plVar31[uVar26 >> 1];
            plVar31[uVar26 >> 1] = *plVar31;
            *plVar31 = lVar16;
            plVar27 = plVar20 + 1;
            plVar30 = plVar31;
            local_3e4 = iVar5;
            do {
              plVar4 = plVar30 + 1;
              plVar24 = plVar30 + 1;
              do {
                plVar30 = plVar24;
                plVar9 = plVar4;
                if (plVar20 < plVar30) break;
                if (*(int *)*plVar31 == *(int *)*plVar30) {
                  iVar5 = ((int *)*plVar31)[1] - ((int *)*plVar30)[1];
                }
                else {
                  iVar5 = FUN_14002c2bd();
                }
                plVar4 = plVar9 + 1;
                plVar24 = plVar30 + 1;
              } while (-1 < iVar5);
              plVar4 = plVar27 + -2;
              do {
                plVar24 = plVar27;
                plVar12 = plVar4;
                plVar27 = plVar24 + -1;
                if (plVar27 <= plVar31) break;
                if (*(int *)*plVar27 == *(int *)*plVar31) {
                  iVar5 = ((int *)*plVar27)[1] - ((int *)*plVar31)[1];
                }
                else {
                  iVar5 = FUN_14002c2bd();
                }
                plVar4 = plVar12 + -1;
              } while (-1 < iVar5);
              if (plVar27 < plVar30) goto LAB_14700b4d9;
              lVar16 = *plVar30;
              *plVar30 = *plVar27;
              *plVar27 = lVar16;
            } while( true );
          }
          for (; plVar17 = plVar31, plVar10 = plVar31, plVar31 < plVar20; plVar20 = plVar20 + -1) {
            while (plVar27 = plVar17, plVar10 = plVar10 + 1, plVar10 <= plVar20) {
              if (*(int *)*plVar27 == *(int *)*plVar10) {
                iVar5 = ((int *)*plVar27)[1] - ((int *)*plVar10)[1];
              }
              else {
                iVar5 = FUN_14002c2bd();
              }
              plVar17 = plVar10;
              if (-1 < iVar5) {
                plVar17 = plVar27;
              }
            }
            lVar16 = *plVar27;
            *plVar27 = *plVar20;
            *plVar20 = lVar16;
          }
          goto LAB_14700b794;
        }
LAB_14700b58a:
        pplVar11 = local_3f8;
        if (uVar26 != 0) {
          iVar5 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar5;
joined_r0x00014700b5ab:
          do {
            iVar8 = iVar5 * 2 + 1;
            if (iVar8 < (int)uVar26) {
              iVar13 = iVar5 * 2 + 2;
              if (iVar13 < (int)uVar26) {
                if (*(int *)plVar31[iVar13] == *(int *)plVar31[iVar8]) {
                  iVar7 = ((int *)plVar31[iVar13])[1] - ((int *)plVar31[iVar8])[1];
                }
                else {
                  iVar7 = FUN_14002c2bd();
                }
                if (-1 < iVar7) {
                  iVar8 = iVar13;
                }
              }
              if (*(int *)plVar31[iVar5] == *(int *)plVar31[iVar8]) {
                iVar13 = ((int *)plVar31[iVar5])[1] - ((int *)plVar31[iVar8])[1];
              }
              else {
                iVar13 = FUN_14002c2bd();
              }
              if (iVar13 < 0) {
                lVar16 = plVar31[iVar5];
                plVar31[iVar5] = plVar31[iVar8];
                plVar31[iVar8] = lVar16;
                iVar5 = iVar8;
                goto joined_r0x00014700b5ab;
              }
            }
            pplVar11 = local_3f8;
            bVar33 = iVar6 != 0;
            iVar5 = iVar6 + -1;
            iVar6 = iVar5;
          } while (bVar33);
          if (1 < (int)uVar26) {
            uVar18 = (ulonglong)uVar26;
            lVar16 = *plVar31;
            *plVar31 = plVar31[uVar18 - 1];
            plVar31[uVar18 - 1] = lVar16;
            if (uVar26 != 2) {
              do {
                uVar19 = uVar18 - 1;
                iVar5 = 0;
                iVar8 = 1;
                iVar6 = 0;
                do {
                  iVar5 = iVar5 + 2;
                  iVar13 = iVar8;
                  if ((longlong)iVar5 < (longlong)uVar19) {
                    if (*(int *)plVar31[iVar5] == *(int *)plVar31[iVar8]) {
                      iVar8 = ((int *)plVar31[iVar5])[1] - ((int *)plVar31[iVar8])[1];
                    }
                    else {
                      iVar8 = FUN_14002c2bd();
                    }
                    if (-1 < iVar8) {
                      iVar13 = iVar5;
                    }
                  }
                  if (*(int *)plVar31[iVar6] == *(int *)plVar31[iVar13]) {
                    iVar5 = ((int *)plVar31[iVar6])[1] - ((int *)plVar31[iVar13])[1];
                  }
                  else {
                    iVar5 = FUN_14002c2bd();
                  }
                  if (-1 < iVar5) break;
                  lVar16 = plVar31[iVar6];
                  plVar31[iVar6] = plVar31[iVar13];
                  plVar31[iVar13] = lVar16;
                  iVar5 = iVar13 * 2;
                  iVar8 = iVar13 * 2 + 1;
                  iVar6 = iVar13;
                } while ((longlong)iVar8 < (longlong)uVar19);
                lVar16 = *plVar31;
                *plVar31 = plVar31[uVar18 - 2];
                plVar31[uVar18 - 2] = lVar16;
                uVar18 = uVar19;
              } while (2 < uVar19);
            }
          }
        }
LAB_14700b794:
        pplVar11 = pplVar11 + -3;
      } while (&local_368 <= pplVar11);
    }
  }
  plVar20 = local_3e0;
  puVar2 = (ulonglong *)local_3e0[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    local_3bc = (int)uStack_3b0;
    if ((*(byte *)((longlong)local_3e0 + 0x2a) & 2) == 0) {
      (**(code **)(*local_3e0 + 0x170))(local_3e0,&local_3bc,4);
    }
    else {
      FUN_14572512c(local_3e0,&local_3bc);
    }
  }
  else {
    local_3bc = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((longlong)(int)uStack_3b0 != 0) {
    local_3d8 = local_3b8 + (int)uStack_3b0;
    plVar10 = local_3b8;
    do {
      lVar16 = *plVar10;
      local_3d0 = plVar10;
      (**(code **)(*plVar20 + 0x160))(plVar20,lVar16);
      local_36c = *(int *)(lVar16 + 0x10);
      puVar2 = (ulonglong *)plVar20[1];
      piVar1 = (int *)*puVar2 + 1;
      if ((int *)puVar2[1] < piVar1) {
        if ((*(byte *)((longlong)plVar20 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar20 + 0x170))(plVar20,&local_36c,4);
        }
        else {
          FUN_14572512c(plVar20,&local_36c);
        }
      }
      else {
        local_36c = *(int *)*puVar2;
        *puVar2 = (ulonglong)piVar1;
      }
      local_388 = (longlong *)0x0;
      uStack_380 = 0;
      if (local_36c < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_36c);
      }
      if (local_36c != 0) {
        FUN_14701980c(&local_388);
      }
      if ((longlong)*(int *)(lVar16 + 0x10) != 0) {
        lVar22 = *(longlong *)(lVar16 + 8);
        lVar16 = (longlong)*(int *)(lVar16 + 0x10) << 4;
        do {
          lVar14 = (longlong)(int)uStack_380;
          uVar26 = (int)uStack_380 + 1;
          uStack_380 = CONCAT44(uStack_380._4_4_,uVar26);
          if (uStack_380._4_4_ < uVar26) {
            FUN_147019862(&local_388);
          }
          local_388[lVar14] = lVar22;
          lVar22 = lVar22 + 0x10;
          lVar16 = lVar16 + -0x10;
        } while (lVar16 != 0);
      }
      plVar20 = local_388;
      iVar5 = (int)uStack_380;
      lVar16 = (longlong)(int)uStack_380;
      if (1 < lVar16) {
        memset(&local_358,0,0x2f0);
        local_368 = plVar20;
        local_360 = plVar20 + lVar16 + -1;
        fVar34 = logf((float)iVar5);
        local_358 = (int)(longlong)(fVar34 + fVar34);
        pplVar11 = &local_368;
        do {
          pplVar23 = (longlong **)*pplVar11;
          pplVar28 = (longlong **)pplVar11[1];
          iVar5 = *(int *)(pplVar11 + 2);
          iVar6 = (int)((ulonglong)((longlong)pplVar28 - (longlong)pplVar23) >> 3);
          uVar26 = iVar6 + 1;
          pplVar25 = pplVar23;
          pplVar32 = pplVar28;
          local_3f0 = pplVar11;
          if (iVar5 != 0) {
LAB_14700b982:
            if (8 < (int)uVar26) {
              plVar20 = pplVar23[uVar26 >> 1];
              pplVar23[uVar26 >> 1] = *pplVar23;
              *pplVar23 = plVar20;
              pplVar21 = pplVar28 + 1;
              pplVar15 = pplVar23;
              local_3f8 = pplVar32;
              local_3e4 = iVar5;
              local_3c8 = pplVar25;
              do {
                pplVar11 = pplVar15 + 1;
                pplVar32 = pplVar15 + 1;
                do {
                  pplVar15 = pplVar32;
                  pplVar25 = pplVar11;
                  if (pplVar28 < pplVar15) break;
                  plVar20 = *pplVar15;
                  plVar10 = *pplVar23;
                  if ((int)*plVar10 == (int)*plVar20) {
                    iVar5 = *(int *)((longlong)plVar10 + 4) - *(int *)((longlong)plVar20 + 4);
                  }
                  else {
                    iVar5 = FUN_14002c2bd();
                  }
                  if (iVar5 == 0) {
                    if ((int)plVar10[1] == (int)plVar20[1]) {
                      iVar5 = *(int *)((longlong)plVar10 + 0xc) - *(int *)((longlong)plVar20 + 0xc);
                    }
                    else {
                      iVar5 = FUN_14002c2bd();
                    }
                  }
                  pplVar11 = pplVar25 + 1;
                  pplVar32 = pplVar15 + 1;
                } while (-1 < iVar5);
                pplVar11 = pplVar21 + -2;
                do {
                  pplVar29 = pplVar21;
                  pplVar32 = pplVar11;
                  pplVar21 = pplVar29 + -1;
                  if (pplVar21 <= pplVar23) break;
                  plVar20 = *pplVar23;
                  plVar10 = *pplVar21;
                  if ((int)*plVar10 == (int)*plVar20) {
                    iVar5 = *(int *)((longlong)plVar10 + 4) - *(int *)((longlong)plVar20 + 4);
                  }
                  else {
                    iVar5 = FUN_14002c2bd();
                  }
                  if (iVar5 == 0) {
                    if ((int)plVar10[1] == (int)plVar20[1]) {
                      iVar5 = *(int *)((longlong)plVar10 + 0xc) - *(int *)((longlong)plVar20 + 0xc);
                    }
                    else {
                      iVar5 = FUN_14002c2bd();
                    }
                  }
                  pplVar11 = pplVar32 + -1;
                } while (-1 < iVar5);
                if (pplVar21 < pplVar15) goto LAB_14700ba89;
                plVar20 = *pplVar15;
                *pplVar15 = *pplVar21;
                *pplVar21 = plVar20;
              } while( true );
            }
            for (; pplVar11 = local_3f0, pplVar32 = pplVar23, pplVar25 = pplVar23,
                pplVar23 < pplVar28; pplVar28 = pplVar28 + -1) {
              while (pplVar11 = pplVar32, pplVar25 = pplVar25 + 1, pplVar25 <= pplVar28) {
                plVar20 = *pplVar25;
                plVar10 = *pplVar11;
                if ((int)*plVar10 == (int)*plVar20) {
                  iVar5 = *(int *)((longlong)plVar10 + 4) - *(int *)((longlong)plVar20 + 4);
                }
                else {
                  iVar5 = FUN_14002c2bd();
                }
                if (iVar5 == 0) {
                  if ((int)plVar10[1] == (int)plVar20[1]) {
                    iVar5 = *(int *)((longlong)plVar10 + 0xc) - *(int *)((longlong)plVar20 + 0xc);
                  }
                  else {
                    iVar5 = FUN_14002c2bd();
                  }
                }
                pplVar32 = pplVar25;
                if (-1 < iVar5) {
                  pplVar32 = pplVar11;
                }
              }
              plVar20 = *pplVar11;
              *pplVar11 = *pplVar28;
              *pplVar28 = plVar20;
            }
            goto LAB_14700be44;
          }
LAB_14700bb37:
          pplVar11 = local_3f0;
          if (uVar26 != 0) {
            iVar5 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
            iVar6 = iVar5;
joined_r0x00014700bb56:
            do {
              iVar8 = iVar5 * 2 + 1;
              if (iVar8 < (int)uVar26) {
                iVar13 = iVar5 * 2 + 2;
                if (iVar13 < (int)uVar26) {
                  plVar20 = pplVar23[iVar8];
                  plVar10 = pplVar23[iVar13];
                  if ((int)*plVar10 == (int)*plVar20) {
                    iVar7 = *(int *)((longlong)plVar10 + 4) - *(int *)((longlong)plVar20 + 4);
                  }
                  else {
                    iVar7 = FUN_14002c2bd();
                  }
                  if (iVar7 == 0) {
                    if ((int)plVar10[1] == (int)plVar20[1]) {
                      iVar7 = *(int *)((longlong)plVar10 + 0xc) - *(int *)((longlong)plVar20 + 0xc);
                    }
                    else {
                      iVar7 = FUN_14002c2bd();
                    }
                  }
                  if (-1 < iVar7) {
                    iVar8 = iVar13;
                  }
                }
                plVar20 = pplVar23[iVar8];
                plVar10 = pplVar23[iVar5];
                if ((int)*plVar10 == (int)*plVar20) {
                  iVar13 = *(int *)((longlong)plVar10 + 4) - *(int *)((longlong)plVar20 + 4);
                }
                else {
                  iVar13 = FUN_14002c2bd();
                }
                if (iVar13 == 0) {
                  if ((int)plVar10[1] == (int)plVar20[1]) {
                    iVar13 = *(int *)((longlong)plVar10 + 0xc) - *(int *)((longlong)plVar20 + 0xc);
                  }
                  else {
                    iVar13 = FUN_14002c2bd();
                  }
                }
                if (iVar13 < 0) {
                  plVar20 = pplVar23[iVar5];
                  pplVar23[iVar5] = pplVar23[iVar8];
                  pplVar23[iVar8] = plVar20;
                  iVar5 = iVar8;
                  goto joined_r0x00014700bb56;
                }
              }
              bVar33 = iVar6 != 0;
              iVar5 = iVar6 + -1;
              iVar6 = iVar5;
            } while (bVar33);
            pplVar11 = local_3f0;
            if (1 < (int)uVar26) {
              uVar18 = (ulonglong)uVar26;
              plVar20 = *pplVar23;
              *pplVar23 = pplVar23[uVar18 - 1];
              pplVar23[uVar18 - 1] = plVar20;
              if (uVar26 != 2) {
                do {
                  uVar19 = uVar18 - 1;
                  iVar5 = 0;
                  iVar8 = 1;
                  iVar6 = 0;
                  do {
                    iVar5 = iVar5 + 2;
                    iVar13 = iVar8;
                    if ((longlong)iVar5 < (longlong)uVar19) {
                      plVar20 = pplVar23[iVar8];
                      plVar10 = pplVar23[iVar5];
                      if ((int)*plVar10 == (int)*plVar20) {
                        iVar8 = *(int *)((longlong)plVar10 + 4) - *(int *)((longlong)plVar20 + 4);
                      }
                      else {
                        iVar8 = FUN_14002c2bd();
                      }
                      if (iVar8 == 0) {
                        if ((int)plVar10[1] == (int)plVar20[1]) {
                          iVar8 = *(int *)((longlong)plVar10 + 0xc) -
                                  *(int *)((longlong)plVar20 + 0xc);
                        }
                        else {
                          iVar8 = FUN_14002c2bd();
                        }
                      }
                      if (-1 < iVar8) {
                        iVar13 = iVar5;
                      }
                    }
                    plVar20 = pplVar23[iVar13];
                    plVar10 = pplVar23[iVar6];
                    if ((int)*plVar10 == (int)*plVar20) {
                      iVar5 = *(int *)((longlong)plVar10 + 4) - *(int *)((longlong)plVar20 + 4);
                    }
                    else {
                      iVar5 = FUN_14002c2bd();
                    }
                    if (iVar5 == 0) {
                      if ((int)plVar10[1] == (int)plVar20[1]) {
                        iVar5 = *(int *)((longlong)plVar10 + 0xc) -
                                *(int *)((longlong)plVar20 + 0xc);
                      }
                      else {
                        iVar5 = FUN_14002c2bd();
                      }
                    }
                    if (-1 < iVar5) break;
                    plVar20 = pplVar23[iVar6];
                    pplVar23[iVar6] = pplVar23[iVar13];
                    pplVar23[iVar13] = plVar20;
                    iVar5 = iVar13 * 2;
                    iVar8 = iVar13 * 2 + 1;
                    iVar6 = iVar13;
                  } while ((longlong)iVar8 < (longlong)uVar19);
                  plVar20 = *pplVar23;
                  *pplVar23 = pplVar23[uVar18 - 2];
                  pplVar23[uVar18 - 2] = plVar20;
                  pplVar11 = local_3f0;
                  uVar18 = uVar19;
                } while (2 < uVar19);
              }
            }
          }
LAB_14700be44:
          pplVar11 = pplVar11 + -3;
        } while (&local_368 <= pplVar11);
      }
      plVar20 = local_388;
      if ((int)uStack_380 != 0) {
        lVar16 = (longlong)(int)uStack_380;
        lVar22 = 0;
        do {
          puVar3 = *(undefined4 **)((longlong)plVar20 + lVar22);
          local_398 = 0;
          uStack_390 = 0;
          local_3a8 = *puVar3;
          uStack_3a4 = puVar3[1];
          uStack_3a0 = puVar3[2];
          uStack_39c = puVar3[3];
          FUN_14587a656(&local_368,&local_3a8,&local_398);
          FUN_14010d536(&local_368,local_3e0);
          if (CONCAT44(uStack_354,local_358) != 0) {
            FUN_1400020a8();
          }
          lVar22 = lVar22 + 8;
        } while (lVar16 * 8 != lVar22);
      }
      plVar20 = local_3e0;
      if (local_388 != (longlong *)0x0) {
        FUN_1400020a8(local_388);
      }
      plVar10 = local_3d0 + 1;
    } while (plVar10 != local_3d8);
  }
  if (local_3b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14700b4d9:
  lVar16 = *plVar31;
  *plVar31 = *plVar27;
  *plVar27 = lVar16;
  iVar5 = local_3e4 + -1;
  plVar24 = plVar24 + -2;
  if ((longlong)plVar12 - (longlong)plVar10 < (longlong)plVar17 - (longlong)plVar9) {
    if (plVar30 < plVar20) {
      *local_3f8 = plVar30;
      local_3f8[1] = plVar20;
      *(int *)(local_3f8 + 2) = iVar5;
      local_3f8 = local_3f8 + 3;
    }
    plVar10 = plVar31;
    plVar17 = plVar12;
    pplVar11 = local_3f8;
    if (plVar27 <= plVar31 + 1) goto LAB_14700b794;
  }
  else {
    pplVar11 = local_3f8;
    if (plVar31 + 1 < plVar27) {
      *local_3f8 = plVar31;
      local_3f8[1] = plVar24;
      *(int *)(local_3f8 + 2) = iVar5;
      pplVar11 = local_3f8 + 3;
    }
    plVar10 = plVar9;
    plVar17 = plVar20;
    plVar24 = plVar20;
    plVar31 = plVar30;
    if (plVar20 <= plVar30) goto LAB_14700b794;
  }
  local_3f8 = pplVar11;
  iVar6 = (int)((ulonglong)((longlong)plVar17 - (longlong)plVar10) >> 3);
  uVar26 = iVar6 + 1;
  plVar20 = plVar24;
  if (iVar5 == 0) goto LAB_14700b58a;
  goto LAB_14700b418;
LAB_14700ba89:
  plVar20 = *pplVar23;
  *pplVar23 = *pplVar21;
  *pplVar21 = plVar20;
  iVar5 = local_3e4 + -1;
  pplVar29 = pplVar29 + -2;
  if ((longlong)pplVar32 - (longlong)local_3c8 < (longlong)local_3f8 - (longlong)pplVar25) {
    if (pplVar15 < pplVar28) {
      *local_3f0 = (longlong *)pplVar15;
      local_3f0[1] = (longlong *)pplVar28;
      *(int *)(local_3f0 + 2) = iVar5;
      local_3f0 = local_3f0 + 3;
    }
    pplVar11 = local_3f0;
    pplVar25 = pplVar23;
    if (pplVar21 <= pplVar23 + 1) goto LAB_14700be44;
  }
  else {
    pplVar11 = local_3f0;
    if (pplVar23 + 1 < pplVar21) {
      *local_3f0 = (longlong *)pplVar23;
      local_3f0[1] = (longlong *)pplVar29;
      *(int *)(local_3f0 + 2) = iVar5;
      pplVar11 = local_3f0 + 3;
    }
    pplVar23 = pplVar15;
    pplVar29 = pplVar28;
    pplVar32 = pplVar28;
    if (pplVar28 <= pplVar15) goto LAB_14700be44;
  }
  local_3f0 = pplVar11;
  iVar6 = (int)((ulonglong)((longlong)pplVar32 - (longlong)pplVar25) >> 3);
  uVar26 = iVar6 + 1;
  pplVar28 = pplVar29;
  if (iVar5 == 0) goto LAB_14700bb37;
  goto LAB_14700b982;
}



// FUNCTION 14700bfea FUN_14700bfea body=72 status=ok
// SIG undefined FUN_14700bfea(void)

longlong * FUN_14700bfea(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_146ff150c();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *param_1 = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_14700c018;
    }
  }
  else {
    FUN_14689c22e(lVar1);
    *param_1 = lVar1;
  }
  lVar1 = lVar1 + 0x28;
LAB_14700c018:
  param_1[1] = lVar1;
  return param_1;
}



// FUNCTION 14700c032 FUN_14700c032 body=126 status=ok
// SIG undefined FUN_14700c032(void)

undefined8 * FUN_14700c032(undefined8 *param_1,longlong *param_2,uint param_3)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x1c0))(param_2), cVar1 != '\0')) {
    thunk_FUN_146857ca8(param_1,param_2,(param_3 & 0xff) * 2);
    return param_1;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 14700c0b0 FUN_14700c0b0 body=18 status=ok
// SIG undefined FUN_14700c0b0(void)

bool FUN_14700c0b0(longlong *param_1)

{
  return param_1[2] != 0 && *param_1 != 0;
}



// FUNCTION 14700c0c2 thunk_FUN_1406742aa body=5 status=ok
// SIG undefined thunk_FUN_1406742aa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 thunk_FUN_1406742aa(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10d8 [32];
  undefined1 *puStack_10b8;
  undefined4 uStack_10b0;
  undefined1 *puStack_10a8;
  undefined4 uStack_10a0;
  undefined1 *puStack_1098;
  undefined1 *puStack_1090;
  undefined1 *puStack_1088;
  char cStack_1080;
  undefined1 auStack_1078 [2070];
  undefined1 auStack_862 [2];
  undefined1 *puStack_860;
  undefined1 *puStack_858;
  undefined1 *puStack_850;
  char cStack_848;
  undefined1 auStack_840 [2070];
  undefined1 auStack_2a [2];
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_10d8;
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    uVar1 = 0;
  }
  else {
    puStack_860 = auStack_840;
    cStack_848 = '\0';
    puStack_850 = auStack_2a;
    puStack_858 = puStack_860;
    FUN_14005eb5c(param_1 + 2,&puStack_860);
    puStack_1098 = auStack_1078;
    cStack_1080 = '\0';
    puStack_1088 = auStack_862;
    puStack_1090 = puStack_1098;
    FUN_14005eb5c(param_1,&puStack_1098);
    puStack_10a8 = puStack_860;
    uStack_10a0 = (undefined4)((ulonglong)((longlong)puStack_858 - (longlong)puStack_860) >> 1);
    puStack_10b8 = puStack_1098;
    uStack_10b0 = (undefined4)((ulonglong)((longlong)puStack_1090 - (longlong)puStack_1098) >> 1);
    uVar1 = FUN_144a125c8();
    if (cStack_1080 == '\x01') {
      FUN_1400020a8(puStack_1098);
    }
    if (cStack_848 == '\x01') {
      FUN_1400020a8(puStack_860);
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_10d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700c0c8 FUN_14700c0c8 body=34 status=ok
// SIG undefined FUN_14700c0c8(void)

undefined8 * FUN_14700c0c8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147019c1e(param_2,param_1);
  return param_1;
}



// FUNCTION 14700c0ea FUN_14700c0ea body=31 status=ok
// SIG undefined FUN_14700c0ea(void)

undefined8 FUN_14700c0ea(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != DAT_14c948098) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),
                  *(longlong *)(param_1 + 0x28) == DAT_14c9480c0);
}



// FUNCTION 14700c10a FUN_14700c10a body=32 status=ok
// SIG undefined FUN_14700c10a(void)

undefined8 FUN_14700c10a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1468fc08c(param_1,*param_2,param_2[2]);
  return param_1;
}



// FUNCTION 14700c12a FUN_14700c12a body=7 status=ok
// SIG undefined FUN_14700c12a(void)

void FUN_14700c12a(undefined8 param_1)

{
  FUN_146858078(param_1,0);
  return;
}



// FUNCTION 14700c132 FUN_14700c132 body=95 status=ok
// SIG undefined FUN_14700c132(void)

void FUN_14700c132(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2c = 0xffffffff00000080;
  local_24 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_14700c192();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700c192 FUN_14700c192 body=125 status=ok
// SIG undefined FUN_14700c192(void)

undefined8 FUN_14700c192(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [80];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a87124(local_70);
  uVar1 = FUN_147019d90(param_1,1,local_70);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700c210 FUN_14700c210 body=107 status=ok
// SIG undefined FUN_14700c210(void)

bool FUN_14700c210(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2c = 0xffffffff00000080;
  local_24 = 0;
  local_18 = 0;
  local_10 = 0;
  lVar1 = FUN_147019d90(0,0);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700c27c FUN_14700c27c body=34 status=ok
// SIG undefined FUN_14700c27c(void)

undefined8 * FUN_14700c27c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147019f26(param_2,param_1);
  return param_1;
}



// FUNCTION 14700c29e FUN_14700c29e body=8 status=ok
// SIG undefined FUN_14700c29e(void)

void FUN_14700c29e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146ff4940(param_1,*param_2);
  return;
}



// FUNCTION 14700c2a6 FUN_14700c2a6 body=260 status=ok
// SIG undefined FUN_14700c2a6(void)

longlong FUN_14700c2a6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  void **local_68;
  undefined1 local_5c [4];
  void *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14700c3ac();
  if ((longlong)(int)param_3[1] != 0) {
    lVar1 = *param_3;
    lVar3 = (longlong)(int)param_3[1] * 0x18;
    do {
      local_58 = (void *)0x0;
      local_50 = *(int *)(lVar1 + 0x10);
      lVar2 = (longlong)local_50;
      _Src = *(void **)(lVar1 + 8);
      if (lVar2 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar2 * 2);
      }
      local_70 = lVar1;
      local_68 = &local_58;
      FUN_147006d1c(param_1 + 0x50,local_5c,&local_70,0);
      if ((local_4c != -1) && (local_58 != (void *)0x0)) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700c3ac FUN_14700c3ac body=584 status=ok
// SIG undefined FUN_14700c3ac(void)

undefined8 * FUN_14700c3ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140a1e386(param_1 + 4,iVar1,0);
    FUN_140a1e307(param_1[4],uVar3,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1401b3898(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 4);
  }
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_141283630(param_1 + 10,param_2 + 10);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_144881636(param_1 + 0x14,param_2 + 0x14);
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  FUN_14686385e(param_1 + 0x1e,param_2 + 0x1e);
  param_1[0x28] = param_2[0x28];
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  return param_1;
}



// FUNCTION 14700c5f4 FUN_14700c5f4 body=255 status=ok
// SIG undefined FUN_14700c5f4(void)

longlong FUN_14700c5f4(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_146858078(param_1,0);
  if (lVar3 != 0) goto LAB_14700c6bd;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *(undefined4 *)(param_1 + 0x20);
  uStack_64 = *(undefined4 *)(param_1 + 0x24);
  uStack_60 = *(undefined4 *)(param_1 + 0x28);
  uStack_5c = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(*DAT_14c9485b8 + 0x160))(DAT_14c9485b8,&local_68,&local_58);
  lVar2 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  else {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(lVar2 + lVar6);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      local_48 = local_78;
      uStack_44 = uStack_74;
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
      uVar4 = FUN_144a797b2();
      lVar3 = FUN_140be8491(uVar4,&local_48,0);
      if (lVar3 != 0) break;
      bVar7 = lVar5 * 0x10 + -0x10 != lVar6;
      lVar6 = lVar6 + 0x10;
    } while (bVar7);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
LAB_14700c6bd:
    if ((*(byte *)(lVar3 + 0xd4) & 0x80) != 0) goto LAB_14700c6ce;
  }
  lVar3 = 0;
LAB_14700c6ce:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14700c6f4 FUN_14700c6f4 body=2716 status=ok
// SIG undefined FUN_14700c6f4(void)

void FUN_14700c6f4(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_408 [40];
  longlong *local_3e0;
  undefined8 local_3d8;
  int local_3cc;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8 [188];
  undefined8 local_b8 [14];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_3d8 = param_2;
  cVar2 = FUN_14113f0c0(param_2);
  if (cVar2 != '\0') {
    if (param_3 == '\x01') {
      iVar5 = (int)param_1[1];
      if (1 < (longlong)iVar5) {
        lVar4 = *param_1;
        memset(local_3a8,0,0x2f0);
        local_3b0 = (longlong)iVar5 * 0x70 + lVar4 + -0x70;
        local_3b8 = lVar4;
        fVar22 = logf((float)iVar5);
        local_3a8[0] = (int)(longlong)(fVar22 + fVar22);
        plVar10 = &local_3b8;
        do {
          puVar19 = (undefined8 *)*plVar10;
          puVar7 = (undefined8 *)plVar10[1];
          iVar5 = (int)plVar10[2];
          iVar3 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar19) >> 4) * -0x49249249;
          uVar8 = (ulonglong)(iVar3 + 1);
          puVar14 = puVar7;
          puVar13 = puVar19;
          local_3e0 = plVar10;
          if (iVar5 != 0) {
LAB_14700ccde:
            plVar10 = local_3e0;
            if (8 < (int)(uint)uVar8) {
              puVar9 = puVar19 + (ulonglong)((uint)uVar8 >> 1) * 0xe;
              puVar17 = local_b8;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar17 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar9 = puVar19;
              puVar17 = puVar19 + (ulonglong)((uint)uVar8 >> 1) * 0xe;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar17 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar9 = local_b8;
              puVar17 = puVar19;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar17 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar9 = puVar14 + 0xe;
              puVar17 = puVar19;
              local_3cc = iVar5;
              local_3c8 = puVar13;
              local_3c0 = puVar7;
              do {
                uVar1 = local_3d8;
                puVar7 = puVar17 + 0xe;
                puVar12 = puVar17 + 0xe;
                do {
                  puVar17 = puVar12;
                  puVar13 = puVar7;
                  if (puVar14 < puVar17) break;
                  cVar2 = FUN_146fe20c0(uVar1,puVar17,puVar19);
                  puVar7 = puVar13 + 0xe;
                  puVar12 = puVar17 + 0xe;
                } while (cVar2 == '\0');
                puVar12 = puVar9 + -0x1c;
                do {
                  puVar6 = puVar9;
                  puVar7 = puVar12;
                  puVar9 = puVar6 + -0xe;
                  if (puVar9 <= puVar19) break;
                  cVar2 = FUN_146fe20c0(uVar1,puVar19,puVar9);
                  puVar12 = puVar7 + -0xe;
                } while (cVar2 == '\0');
                lVar4 = 0xe;
                puVar12 = puVar19;
                puVar11 = puVar17;
                puVar18 = local_b8;
                if (puVar9 < puVar17) goto code_r0x00014700cddd;
                for (; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar18 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar18 = puVar18 + 1;
                }
                puVar7 = puVar9;
                puVar13 = puVar17;
                for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar13 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar7 = local_b8;
                puVar13 = puVar9;
                for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar13 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar13 = puVar13 + 1;
                }
              } while( true );
            }
            while (puVar13 = puVar19, puVar7 = puVar19, puVar19 < puVar14) {
              while (puVar9 = puVar13, puVar7 = puVar7 + 0xe, puVar7 <= puVar14) {
                cVar2 = FUN_146fe20c0(local_3d8,puVar7,puVar9);
                puVar13 = puVar7;
                if (cVar2 == '\0') {
                  puVar13 = puVar9;
                }
              }
              puVar7 = puVar14 + -0xe;
              puVar13 = puVar9;
              puVar17 = local_b8;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar17 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar13 = puVar14;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar9 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar9 = puVar9 + 1;
              }
              puVar13 = local_b8;
              puVar9 = puVar14;
              for (lVar4 = 0xe; puVar14 = puVar7, lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar9 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar9 = puVar9 + 1;
              }
            }
            goto LAB_14700d151;
          }
LAB_14700ceaa:
          iVar5 = (int)uVar8;
          plVar10 = local_3e0;
          if (iVar5 != 0) {
            iVar20 = (iVar3 - (iVar3 + -1 >> 0x1f)) + -1 >> 1;
            iVar3 = iVar20;
joined_r0x00014700cecd:
            do {
              iVar16 = iVar3 * 2 + 1;
              if (iVar16 < iVar5) {
                iVar15 = iVar3 * 2 + 2;
                if ((iVar15 < iVar5) &&
                   (cVar2 = FUN_146fe20c0(local_3d8,puVar19 + (longlong)iVar16 * 0xe,
                                          puVar19 + (longlong)iVar15 * 0xe), cVar2 == '\0')) {
                  iVar16 = iVar15;
                }
                puVar14 = puVar19 + (longlong)iVar3 * 0xe;
                puVar7 = puVar19 + (longlong)iVar16 * 0xe;
                cVar2 = FUN_146fe20c0(local_3d8,puVar7,puVar14);
                if (cVar2 != '\0') {
                  puVar13 = puVar14;
                  puVar9 = local_b8;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar9 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  puVar13 = puVar7;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar14 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  puVar14 = local_b8;
                  for (lVar4 = 0xe; iVar3 = iVar16, lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar7 = *puVar14;
                    puVar14 = puVar14 + 1;
                    puVar7 = puVar7 + 1;
                  }
                  goto joined_r0x00014700cecd;
                }
              }
              bVar21 = iVar20 != 0;
              iVar20 = iVar20 + -1;
              iVar3 = iVar20;
            } while (bVar21);
            plVar10 = local_3e0;
            if (1 < iVar5) {
              puVar7 = puVar19;
              puVar14 = local_b8;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar14 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar7 = puVar19 + (uVar8 - 1) * 0xe;
              puVar14 = puVar19;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar14 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar7 = local_b8;
              puVar14 = puVar19 + (uVar8 - 1) * 0xe;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar14 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar14 = puVar14 + 1;
              }
              uVar8 = uVar8 - 1;
              if (iVar5 != 2) {
                do {
                  iVar5 = 0;
                  iVar20 = 1;
                  iVar3 = 0;
                  do {
                    iVar5 = iVar5 + 2;
                    iVar16 = iVar20;
                    if (((longlong)iVar5 < (longlong)uVar8) &&
                       (cVar2 = FUN_146fe20c0(local_3d8,puVar19 + (longlong)iVar20 * 0xe,
                                              puVar19 + (longlong)iVar5 * 0xe), cVar2 == '\0')) {
                      iVar16 = iVar5;
                    }
                    puVar14 = puVar19 + (longlong)iVar3 * 0xe;
                    puVar7 = puVar19 + (longlong)iVar16 * 0xe;
                    cVar2 = FUN_146fe20c0(local_3d8,puVar7,puVar14);
                    if (cVar2 == '\0') break;
                    puVar13 = puVar14;
                    puVar9 = local_b8;
                    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                      *puVar9 = *puVar13;
                      puVar13 = puVar13 + 1;
                      puVar9 = puVar9 + 1;
                    }
                    puVar13 = puVar7;
                    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                      *puVar14 = *puVar13;
                      puVar13 = puVar13 + 1;
                      puVar14 = puVar14 + 1;
                    }
                    puVar14 = local_b8;
                    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                      *puVar7 = *puVar14;
                      puVar14 = puVar14 + 1;
                      puVar7 = puVar7 + 1;
                    }
                    iVar5 = iVar16 * 2;
                    iVar20 = iVar16 * 2 + 1;
                    iVar3 = iVar16;
                  } while ((longlong)iVar20 < (longlong)uVar8);
                  puVar7 = puVar19;
                  puVar14 = local_b8;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar14 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  puVar7 = puVar19 + (uVar8 - 1) * 0xe;
                  puVar14 = puVar19;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar14 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  puVar7 = local_b8;
                  puVar14 = puVar19 + (uVar8 - 1) * 0xe;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar14 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  bVar21 = 2 < uVar8;
                  plVar10 = local_3e0;
                  uVar8 = uVar8 - 1;
                } while (bVar21);
              }
            }
          }
LAB_14700d151:
          plVar10 = plVar10 + -3;
        } while (&local_3b8 <= plVar10);
      }
    }
    else if (param_3 == '\0') {
      iVar5 = (int)param_1[1];
      if (1 < (longlong)iVar5) {
        lVar4 = *param_1;
        memset(local_3a8,0,0x2f0);
        local_3b0 = (longlong)iVar5 * 0x70 + lVar4 + -0x70;
        local_3b8 = lVar4;
        fVar22 = logf((float)iVar5);
        local_3a8[0] = (int)(longlong)(fVar22 + fVar22);
        plVar10 = &local_3b8;
        do {
          puVar19 = (undefined8 *)*plVar10;
          puVar7 = (undefined8 *)plVar10[1];
          iVar5 = (int)plVar10[2];
          iVar3 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar19) >> 4) * -0x49249249;
          uVar8 = (ulonglong)(iVar3 + 1);
          puVar14 = puVar7;
          puVar13 = puVar19;
          local_3e0 = plVar10;
          if (iVar5 != 0) {
LAB_14700c7cf:
            plVar10 = local_3e0;
            if (8 < (int)(uint)uVar8) {
              puVar9 = puVar19 + (ulonglong)((uint)uVar8 >> 1) * 0xe;
              puVar17 = local_b8;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar17 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar9 = puVar19;
              puVar17 = puVar19 + (ulonglong)((uint)uVar8 >> 1) * 0xe;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar17 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar9 = local_b8;
              puVar17 = puVar19;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar17 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar9 = puVar7 + 0xe;
              puVar17 = puVar19;
              local_3cc = iVar5;
              local_3c8 = puVar13;
              local_3c0 = puVar14;
              do {
                uVar1 = local_3d8;
                puVar14 = puVar17 + 0xe;
                puVar12 = puVar17 + 0xe;
                do {
                  puVar17 = puVar12;
                  puVar13 = puVar14;
                  if (puVar7 < puVar17) break;
                  cVar2 = FUN_146fe20c0(uVar1,puVar19,puVar17);
                  puVar14 = puVar13 + 0xe;
                  puVar12 = puVar17 + 0xe;
                } while (cVar2 == '\0');
                puVar12 = puVar9 + -0x1c;
                do {
                  puVar6 = puVar9;
                  puVar14 = puVar12;
                  puVar9 = puVar6 + -0xe;
                  if (puVar9 <= puVar19) break;
                  cVar2 = FUN_146fe20c0(uVar1,puVar9,puVar19);
                  puVar12 = puVar14 + -0xe;
                } while (cVar2 == '\0');
                lVar4 = 0xe;
                puVar12 = puVar19;
                puVar11 = puVar17;
                puVar18 = local_b8;
                if (puVar9 < puVar17) goto code_r0x00014700c8ce;
                for (; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar18 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar18 = puVar18 + 1;
                }
                puVar14 = puVar9;
                puVar13 = puVar17;
                for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar13 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar14 = local_b8;
                puVar13 = puVar9;
                for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar13 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar13 = puVar13 + 1;
                }
              } while( true );
            }
            while (puVar13 = puVar19, puVar14 = puVar19, puVar19 < puVar7) {
              while (puVar9 = puVar13, puVar14 = puVar14 + 0xe, puVar14 <= puVar7) {
                cVar2 = FUN_146fe20c0(local_3d8,puVar9,puVar14);
                puVar13 = puVar14;
                if (cVar2 == '\0') {
                  puVar13 = puVar9;
                }
              }
              puVar14 = puVar7 + -0xe;
              puVar13 = puVar9;
              puVar17 = local_b8;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar17 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar13 = puVar7;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar9 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar9 = puVar9 + 1;
              }
              puVar13 = local_b8;
              puVar9 = puVar7;
              for (lVar4 = 0xe; puVar7 = puVar14, lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar9 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar9 = puVar9 + 1;
              }
            }
            goto LAB_14700cc43;
          }
LAB_14700c99c:
          iVar5 = (int)uVar8;
          plVar10 = local_3e0;
          if (iVar5 != 0) {
            iVar20 = (iVar3 - (iVar3 + -1 >> 0x1f)) + -1 >> 1;
            iVar3 = iVar20;
joined_r0x00014700c9bf:
            do {
              iVar16 = iVar3 * 2 + 1;
              if (iVar16 < iVar5) {
                iVar15 = iVar3 * 2 + 2;
                if ((iVar15 < iVar5) &&
                   (cVar2 = FUN_146fe20c0(local_3d8,puVar19 + (longlong)iVar15 * 0xe,
                                          puVar19 + (longlong)iVar16 * 0xe), cVar2 == '\0')) {
                  iVar16 = iVar15;
                }
                puVar14 = puVar19 + (longlong)iVar3 * 0xe;
                puVar7 = puVar19 + (longlong)iVar16 * 0xe;
                cVar2 = FUN_146fe20c0(local_3d8,puVar14,puVar7);
                if (cVar2 != '\0') {
                  puVar13 = puVar14;
                  puVar9 = local_b8;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar9 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  puVar13 = puVar7;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar14 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  puVar14 = local_b8;
                  for (lVar4 = 0xe; iVar3 = iVar16, lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar7 = *puVar14;
                    puVar14 = puVar14 + 1;
                    puVar7 = puVar7 + 1;
                  }
                  goto joined_r0x00014700c9bf;
                }
              }
              bVar21 = iVar20 != 0;
              iVar20 = iVar20 + -1;
              iVar3 = iVar20;
            } while (bVar21);
            plVar10 = local_3e0;
            if (1 < iVar5) {
              puVar7 = puVar19;
              puVar14 = local_b8;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar14 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar7 = puVar19 + (uVar8 - 1) * 0xe;
              puVar14 = puVar19;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar14 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar7 = local_b8;
              puVar14 = puVar19 + (uVar8 - 1) * 0xe;
              for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar14 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar14 = puVar14 + 1;
              }
              uVar8 = uVar8 - 1;
              if (iVar5 != 2) {
                do {
                  iVar5 = 0;
                  iVar20 = 1;
                  iVar3 = 0;
                  do {
                    iVar5 = iVar5 + 2;
                    iVar16 = iVar20;
                    if (((longlong)iVar5 < (longlong)uVar8) &&
                       (cVar2 = FUN_146fe20c0(local_3d8,puVar19 + (longlong)iVar5 * 0xe,
                                              puVar19 + (longlong)iVar20 * 0xe), cVar2 == '\0')) {
                      iVar16 = iVar5;
                    }
                    puVar14 = puVar19 + (longlong)iVar3 * 0xe;
                    puVar7 = puVar19 + (longlong)iVar16 * 0xe;
                    cVar2 = FUN_146fe20c0(local_3d8,puVar14,puVar7);
                    if (cVar2 == '\0') break;
                    puVar13 = puVar14;
                    puVar9 = local_b8;
                    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                      *puVar9 = *puVar13;
                      puVar13 = puVar13 + 1;
                      puVar9 = puVar9 + 1;
                    }
                    puVar13 = puVar7;
                    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                      *puVar14 = *puVar13;
                      puVar13 = puVar13 + 1;
                      puVar14 = puVar14 + 1;
                    }
                    puVar14 = local_b8;
                    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                      *puVar7 = *puVar14;
                      puVar14 = puVar14 + 1;
                      puVar7 = puVar7 + 1;
                    }
                    iVar5 = iVar16 * 2;
                    iVar20 = iVar16 * 2 + 1;
                    iVar3 = iVar16;
                  } while ((longlong)iVar20 < (longlong)uVar8);
                  puVar7 = puVar19;
                  puVar14 = local_b8;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar14 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  puVar7 = puVar19 + (uVar8 - 1) * 0xe;
                  puVar14 = puVar19;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar14 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  puVar7 = local_b8;
                  puVar14 = puVar19 + (uVar8 - 1) * 0xe;
                  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
                    *puVar14 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  bVar21 = 2 < uVar8;
                  plVar10 = local_3e0;
                  uVar8 = uVar8 - 1;
                } while (bVar21);
              }
            }
          }
LAB_14700cc43:
          plVar10 = plVar10 + -3;
        } while (&local_3b8 <= plVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014700cddd:
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar18 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar12 = puVar9;
  puVar11 = puVar19;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar12 = local_b8;
  puVar11 = puVar9;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar5 = local_3cc + -1;
  puVar6 = puVar6 + -0x1c;
  if ((longlong)puVar7 - (longlong)local_3c8 < (longlong)local_3c0 - (longlong)puVar13) {
    if (puVar17 < puVar14) {
      *local_3e0 = (longlong)puVar17;
      local_3e0[1] = (longlong)puVar14;
      *(int *)(local_3e0 + 2) = iVar5;
      local_3e0 = local_3e0 + 3;
    }
    plVar10 = local_3e0;
    puVar13 = puVar19;
    if (puVar9 <= puVar19 + 0xe) goto LAB_14700d151;
  }
  else {
    plVar10 = local_3e0;
    if (puVar19 + 0xe < puVar9) {
      *local_3e0 = (longlong)puVar19;
      local_3e0[1] = (longlong)puVar6;
      *(int *)(local_3e0 + 2) = iVar5;
      plVar10 = local_3e0 + 3;
    }
    puVar7 = puVar14;
    puVar19 = puVar17;
    puVar6 = puVar14;
    if (puVar14 <= puVar17) goto LAB_14700d151;
  }
  local_3e0 = plVar10;
  iVar3 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar13) >> 4) * -0x49249249;
  uVar8 = (ulonglong)(iVar3 + 1);
  puVar14 = puVar6;
  if (iVar5 == 0) goto LAB_14700ceaa;
  goto LAB_14700ccde;
code_r0x00014700c8ce:
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar18 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar12 = puVar9;
  puVar11 = puVar19;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar12 = local_b8;
  puVar11 = puVar9;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar5 = local_3cc + -1;
  puVar6 = puVar6 + -0x1c;
  if ((longlong)puVar14 - (longlong)local_3c8 < (longlong)local_3c0 - (longlong)puVar13) {
    if (puVar17 < puVar7) {
      *local_3e0 = (longlong)puVar17;
      local_3e0[1] = (longlong)puVar7;
      *(int *)(local_3e0 + 2) = iVar5;
      local_3e0 = local_3e0 + 3;
    }
    plVar10 = local_3e0;
    puVar13 = puVar19;
    if (puVar9 <= puVar19 + 0xe) goto LAB_14700cc43;
  }
  else {
    plVar10 = local_3e0;
    if (puVar19 + 0xe < puVar9) {
      *local_3e0 = (longlong)puVar19;
      local_3e0[1] = (longlong)puVar6;
      *(int *)(local_3e0 + 2) = iVar5;
      plVar10 = local_3e0 + 3;
    }
    puVar6 = puVar7;
    puVar19 = puVar17;
    puVar14 = puVar7;
    if (puVar7 <= puVar17) goto LAB_14700cc43;
  }
  local_3e0 = plVar10;
  iVar3 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar13) >> 4) * -0x49249249;
  uVar8 = (ulonglong)(iVar3 + 1);
  puVar7 = puVar6;
  if (iVar5 == 0) goto LAB_14700c99c;
  goto LAB_14700c7cf;
}



// FUNCTION 14700d192 FUN_14700d192 body=2643 status=ok
// SIG undefined FUN_14700d192(void)

void FUN_14700d192(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_3f8 [32];
  longlong *local_3d8;
  int local_3cc;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8 [188];
  undefined8 local_b8 [14];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (param_2 == '\x01') {
    iVar4 = (int)param_1[1];
    if (1 < (longlong)iVar4) {
      lVar3 = *param_1;
      memset(local_3a8,0,0x2f0);
      local_3b0 = (longlong)iVar4 * 0x70 + lVar3 + -0x70;
      local_3b8 = lVar3;
      fVar21 = logf((float)iVar4);
      local_3a8[0] = (int)(longlong)(fVar21 + fVar21);
      plVar19 = &local_3b8;
      do {
        puVar7 = (undefined8 *)*plVar19;
        puVar5 = (undefined8 *)plVar19[1];
        iVar4 = (int)plVar19[2];
        iVar2 = (int)((ulonglong)((longlong)puVar5 - (longlong)puVar7) >> 4) * -0x49249249;
        uVar18 = iVar2 + 1;
        puVar13 = puVar5;
        puVar12 = puVar7;
        local_3d8 = plVar19;
        if (iVar4 != 0) {
LAB_14700d74a:
          plVar19 = local_3d8;
          if (8 < (int)uVar18) {
            puVar9 = puVar7 + (ulonglong)(uVar18 >> 1) * 0xe;
            puVar16 = local_b8;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar16 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar9 = puVar7;
            puVar16 = puVar7 + (ulonglong)(uVar18 >> 1) * 0xe;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar16 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar9 = local_b8;
            puVar16 = puVar7;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar16 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar9 = puVar5 + 0xe;
            puVar16 = puVar7;
            local_3cc = iVar4;
            local_3c8 = puVar12;
            local_3c0 = puVar13;
            do {
              puVar13 = puVar16 + 0xe;
              puVar11 = puVar16 + 0xe;
              do {
                puVar16 = puVar11;
                puVar12 = puVar13;
                if (puVar5 < puVar16) break;
                cVar1 = FUN_142ae9952(puVar16,puVar7);
                puVar13 = puVar12 + 0xe;
                puVar11 = puVar16 + 0xe;
              } while (cVar1 == '\0');
              puVar11 = puVar9 + -0x1c;
              do {
                puVar6 = puVar9;
                puVar13 = puVar11;
                puVar9 = puVar6 + -0xe;
                if (puVar9 <= puVar7) break;
                cVar1 = FUN_142ae9952(puVar7,puVar9);
                puVar11 = puVar13 + -0xe;
              } while (cVar1 == '\0');
              lVar3 = 0xe;
              puVar11 = puVar7;
              puVar10 = puVar16;
              puVar17 = local_b8;
              if (puVar9 < puVar16) goto code_r0x00014700d841;
              for (; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar17 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar13 = puVar9;
              puVar12 = puVar16;
              for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar12 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar12 = puVar12 + 1;
              }
              puVar13 = local_b8;
              puVar12 = puVar9;
              for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar12 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar12 = puVar12 + 1;
              }
            } while( true );
          }
          while (puVar12 = puVar7, puVar13 = puVar7, puVar7 < puVar5) {
            while (puVar9 = puVar12, puVar13 = puVar13 + 0xe, puVar13 <= puVar5) {
              cVar1 = FUN_142ae9952(puVar13,puVar9);
              puVar12 = puVar13;
              if (cVar1 == '\0') {
                puVar12 = puVar9;
              }
            }
            puVar13 = puVar5 + -0xe;
            puVar12 = puVar9;
            puVar16 = local_b8;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar16 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar12 = puVar5;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar12 = local_b8;
            puVar9 = puVar5;
            for (lVar3 = 0xe; puVar5 = puVar13, lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          goto LAB_14700dba6;
        }
LAB_14700d90e:
        plVar19 = local_3d8;
        if (uVar18 != 0) {
          iVar2 = (iVar2 - (iVar2 + -1 >> 0x1f)) + -1 >> 1;
          iVar4 = iVar2;
joined_r0x00014700d92f:
          do {
            iVar15 = iVar4 * 2 + 1;
            if (iVar15 < (int)uVar18) {
              iVar14 = iVar4 * 2 + 2;
              if ((iVar14 < (int)uVar18) &&
                 (cVar1 = FUN_142ae9952(puVar7 + (longlong)iVar15 * 0xe,
                                        puVar7 + (longlong)iVar14 * 0xe), cVar1 == '\0')) {
                iVar15 = iVar14;
              }
              puVar13 = puVar7 + (longlong)iVar4 * 0xe;
              puVar5 = puVar7 + (longlong)iVar15 * 0xe;
              cVar1 = FUN_142ae9952(puVar5,puVar13);
              if (cVar1 != '\0') {
                puVar12 = puVar13;
                puVar9 = local_b8;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar9 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar9 = puVar9 + 1;
                }
                puVar12 = puVar5;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar13 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar13 = local_b8;
                for (lVar3 = 0xe; iVar4 = iVar15, lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar5 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar5 = puVar5 + 1;
                }
                goto joined_r0x00014700d92f;
              }
            }
            plVar19 = local_3d8;
            bVar20 = iVar2 != 0;
            iVar2 = iVar2 + -1;
            iVar4 = iVar2;
          } while (bVar20);
          if (1 < (int)uVar18) {
            uVar8 = (ulonglong)uVar18 - 1;
            puVar5 = puVar7;
            puVar13 = local_b8;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar13 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar5 = puVar7 + uVar8 * 0xe;
            puVar13 = puVar7;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar13 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar5 = local_b8;
            puVar13 = puVar7 + uVar8 * 0xe;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar13 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar13 = puVar13 + 1;
            }
            if (uVar18 != 2) {
              do {
                iVar4 = 0;
                iVar15 = 1;
                iVar2 = 0;
                do {
                  iVar4 = iVar4 + 2;
                  iVar14 = iVar15;
                  if (((longlong)iVar4 < (longlong)uVar8) &&
                     (cVar1 = FUN_142ae9952(puVar7 + (longlong)iVar15 * 0xe,
                                            puVar7 + (longlong)iVar4 * 0xe), cVar1 == '\0')) {
                    iVar14 = iVar4;
                  }
                  puVar13 = puVar7 + (longlong)iVar2 * 0xe;
                  puVar5 = puVar7 + (longlong)iVar14 * 0xe;
                  cVar1 = FUN_142ae9952(puVar5,puVar13);
                  if (cVar1 == '\0') break;
                  puVar12 = puVar13;
                  puVar9 = local_b8;
                  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *puVar9 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  puVar12 = puVar5;
                  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *puVar13 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar13 = puVar13 + 1;
                  }
                  puVar13 = local_b8;
                  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *puVar5 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar5 = puVar5 + 1;
                  }
                  iVar4 = iVar14 * 2;
                  iVar15 = iVar14 * 2 + 1;
                  iVar2 = iVar14;
                } while ((longlong)iVar15 < (longlong)uVar8);
                puVar5 = puVar7;
                puVar13 = local_b8;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar13 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar5 = puVar7 + (uVar8 - 1) * 0xe;
                puVar13 = puVar7;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar13 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar5 = local_b8;
                puVar13 = puVar7 + (uVar8 - 1) * 0xe;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar13 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar13 = puVar13 + 1;
                }
                bVar20 = 2 < uVar8;
                uVar8 = uVar8 - 1;
              } while (bVar20);
            }
          }
        }
LAB_14700dba6:
        plVar19 = plVar19 + -3;
      } while (&local_3b8 <= plVar19);
    }
  }
  else if (param_2 == '\0') {
    iVar4 = (int)param_1[1];
    if (1 < (longlong)iVar4) {
      lVar3 = *param_1;
      memset(local_3a8,0,0x2f0);
      local_3b0 = (longlong)iVar4 * 0x70 + lVar3 + -0x70;
      local_3b8 = lVar3;
      fVar21 = logf((float)iVar4);
      local_3a8[0] = (int)(longlong)(fVar21 + fVar21);
      plVar19 = &local_3b8;
      do {
        puVar7 = (undefined8 *)*plVar19;
        puVar5 = (undefined8 *)plVar19[1];
        iVar4 = (int)plVar19[2];
        iVar2 = (int)((ulonglong)((longlong)puVar5 - (longlong)puVar7) >> 4) * -0x49249249;
        uVar18 = iVar2 + 1;
        puVar13 = puVar5;
        puVar12 = puVar7;
        local_3d8 = plVar19;
        if (iVar4 != 0) {
LAB_14700d251:
          plVar19 = local_3d8;
          if (8 < (int)uVar18) {
            puVar9 = puVar7 + (ulonglong)(uVar18 >> 1) * 0xe;
            puVar16 = local_b8;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar16 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar9 = puVar7;
            puVar16 = puVar7 + (ulonglong)(uVar18 >> 1) * 0xe;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar16 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar9 = local_b8;
            puVar16 = puVar7;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar16 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar9 = puVar5 + 0xe;
            puVar16 = puVar7;
            local_3cc = iVar4;
            local_3c8 = puVar12;
            local_3c0 = puVar13;
            do {
              puVar13 = puVar16 + 0xe;
              puVar11 = puVar16 + 0xe;
              do {
                puVar16 = puVar11;
                puVar12 = puVar13;
                if (puVar5 < puVar16) break;
                cVar1 = FUN_142ae9952(puVar7,puVar16);
                puVar13 = puVar12 + 0xe;
                puVar11 = puVar16 + 0xe;
              } while (cVar1 == '\0');
              puVar11 = puVar9 + -0x1c;
              do {
                puVar6 = puVar9;
                puVar13 = puVar11;
                puVar9 = puVar6 + -0xe;
                if (puVar9 <= puVar7) break;
                cVar1 = FUN_142ae9952(puVar9,puVar7);
                puVar11 = puVar13 + -0xe;
              } while (cVar1 == '\0');
              lVar3 = 0xe;
              puVar11 = puVar7;
              puVar10 = puVar16;
              puVar17 = local_b8;
              if (puVar9 < puVar16) goto code_r0x00014700d348;
              for (; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar17 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar17 = puVar17 + 1;
              }
              puVar13 = puVar9;
              puVar12 = puVar16;
              for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar12 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar12 = puVar12 + 1;
              }
              puVar13 = local_b8;
              puVar12 = puVar9;
              for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar12 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar12 = puVar12 + 1;
              }
            } while( true );
          }
          while (puVar12 = puVar7, puVar13 = puVar7, puVar7 < puVar5) {
            while (puVar9 = puVar12, puVar13 = puVar13 + 0xe, puVar13 <= puVar5) {
              cVar1 = FUN_142ae9952(puVar9,puVar13);
              puVar12 = puVar13;
              if (cVar1 == '\0') {
                puVar12 = puVar9;
              }
            }
            puVar13 = puVar5 + -0xe;
            puVar12 = puVar9;
            puVar16 = local_b8;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar16 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar16 = puVar16 + 1;
            }
            puVar12 = puVar5;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar12 = local_b8;
            puVar9 = puVar5;
            for (lVar3 = 0xe; puVar5 = puVar13, lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          goto LAB_14700d6ad;
        }
LAB_14700d415:
        plVar19 = local_3d8;
        if (uVar18 != 0) {
          iVar2 = (iVar2 - (iVar2 + -1 >> 0x1f)) + -1 >> 1;
          iVar4 = iVar2;
joined_r0x00014700d436:
          do {
            iVar15 = iVar4 * 2 + 1;
            if (iVar15 < (int)uVar18) {
              iVar14 = iVar4 * 2 + 2;
              if ((iVar14 < (int)uVar18) &&
                 (cVar1 = FUN_142ae9952(puVar7 + (longlong)iVar14 * 0xe,
                                        puVar7 + (longlong)iVar15 * 0xe), cVar1 == '\0')) {
                iVar15 = iVar14;
              }
              puVar13 = puVar7 + (longlong)iVar4 * 0xe;
              puVar5 = puVar7 + (longlong)iVar15 * 0xe;
              cVar1 = FUN_142ae9952(puVar13,puVar5);
              if (cVar1 != '\0') {
                puVar12 = puVar13;
                puVar9 = local_b8;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar9 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar9 = puVar9 + 1;
                }
                puVar12 = puVar5;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar13 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar13 = local_b8;
                for (lVar3 = 0xe; iVar4 = iVar15, lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar5 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar5 = puVar5 + 1;
                }
                goto joined_r0x00014700d436;
              }
            }
            plVar19 = local_3d8;
            bVar20 = iVar2 != 0;
            iVar2 = iVar2 + -1;
            iVar4 = iVar2;
          } while (bVar20);
          if (1 < (int)uVar18) {
            uVar8 = (ulonglong)uVar18 - 1;
            puVar5 = puVar7;
            puVar13 = local_b8;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar13 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar5 = puVar7 + uVar8 * 0xe;
            puVar13 = puVar7;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar13 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar13 = puVar13 + 1;
            }
            puVar5 = local_b8;
            puVar13 = puVar7 + uVar8 * 0xe;
            for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar13 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar13 = puVar13 + 1;
            }
            if (uVar18 != 2) {
              do {
                iVar4 = 0;
                iVar15 = 1;
                iVar2 = 0;
                do {
                  iVar4 = iVar4 + 2;
                  iVar14 = iVar15;
                  if (((longlong)iVar4 < (longlong)uVar8) &&
                     (cVar1 = FUN_142ae9952(puVar7 + (longlong)iVar4 * 0xe,
                                            puVar7 + (longlong)iVar15 * 0xe), cVar1 == '\0')) {
                    iVar14 = iVar4;
                  }
                  puVar13 = puVar7 + (longlong)iVar2 * 0xe;
                  puVar5 = puVar7 + (longlong)iVar14 * 0xe;
                  cVar1 = FUN_142ae9952(puVar13,puVar5);
                  if (cVar1 == '\0') break;
                  puVar12 = puVar13;
                  puVar9 = local_b8;
                  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *puVar9 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar9 = puVar9 + 1;
                  }
                  puVar12 = puVar5;
                  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *puVar13 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar13 = puVar13 + 1;
                  }
                  puVar13 = local_b8;
                  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *puVar5 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar5 = puVar5 + 1;
                  }
                  iVar4 = iVar14 * 2;
                  iVar15 = iVar14 * 2 + 1;
                  iVar2 = iVar14;
                } while ((longlong)iVar15 < (longlong)uVar8);
                puVar5 = puVar7;
                puVar13 = local_b8;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar13 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar5 = puVar7 + (uVar8 - 1) * 0xe;
                puVar13 = puVar7;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar13 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar13 = puVar13 + 1;
                }
                puVar5 = local_b8;
                puVar13 = puVar7 + (uVar8 - 1) * 0xe;
                for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar13 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar13 = puVar13 + 1;
                }
                bVar20 = 2 < uVar8;
                uVar8 = uVar8 - 1;
              } while (bVar20);
            }
          }
        }
LAB_14700d6ad:
        plVar19 = plVar19 + -3;
      } while (&local_3b8 <= plVar19);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014700d841:
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar17 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar17 = puVar17 + 1;
  }
  puVar11 = puVar9;
  puVar10 = puVar7;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar11 = local_b8;
  puVar10 = puVar9;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar4 = local_3cc + -1;
  puVar6 = puVar6 + -0x1c;
  if ((longlong)puVar13 - (longlong)local_3c8 < (longlong)local_3c0 - (longlong)puVar12) {
    if (puVar16 < puVar5) {
      *local_3d8 = (longlong)puVar16;
      local_3d8[1] = (longlong)puVar5;
      *(int *)(local_3d8 + 2) = iVar4;
      local_3d8 = local_3d8 + 3;
    }
    plVar19 = local_3d8;
    puVar12 = puVar7;
    if (puVar9 <= puVar7 + 0xe) goto LAB_14700dba6;
  }
  else {
    plVar19 = local_3d8;
    if (puVar7 + 0xe < puVar9) {
      *local_3d8 = (longlong)puVar7;
      local_3d8[1] = (longlong)puVar6;
      *(int *)(local_3d8 + 2) = iVar4;
      plVar19 = local_3d8 + 3;
    }
    puVar6 = puVar5;
    puVar7 = puVar16;
    puVar13 = puVar5;
    if (puVar5 <= puVar16) goto LAB_14700dba6;
  }
  local_3d8 = plVar19;
  iVar2 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar12) >> 4) * -0x49249249;
  uVar18 = iVar2 + 1;
  puVar5 = puVar6;
  if (iVar4 == 0) goto LAB_14700d90e;
  goto LAB_14700d74a;
code_r0x00014700d348:
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar17 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar17 = puVar17 + 1;
  }
  puVar11 = puVar9;
  puVar10 = puVar7;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar11 = local_b8;
  puVar10 = puVar9;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar10 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar4 = local_3cc + -1;
  puVar6 = puVar6 + -0x1c;
  if ((longlong)puVar13 - (longlong)local_3c8 < (longlong)local_3c0 - (longlong)puVar12) {
    if (puVar16 < puVar5) {
      *local_3d8 = (longlong)puVar16;
      local_3d8[1] = (longlong)puVar5;
      *(int *)(local_3d8 + 2) = iVar4;
      local_3d8 = local_3d8 + 3;
    }
    plVar19 = local_3d8;
    puVar12 = puVar7;
    if (puVar9 <= puVar7 + 0xe) goto LAB_14700d6ad;
  }
  else {
    plVar19 = local_3d8;
    if (puVar7 + 0xe < puVar9) {
      *local_3d8 = (longlong)puVar7;
      local_3d8[1] = (longlong)puVar6;
      *(int *)(local_3d8 + 2) = iVar4;
      plVar19 = local_3d8 + 3;
    }
    puVar6 = puVar5;
    puVar7 = puVar16;
    puVar13 = puVar5;
    if (puVar5 <= puVar16) goto LAB_14700d6ad;
  }
  local_3d8 = plVar19;
  iVar2 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar12) >> 4) * -0x49249249;
  uVar18 = iVar2 + 1;
  puVar5 = puVar6;
  if (iVar4 == 0) goto LAB_14700d415;
  goto LAB_14700d251;
}



// FUNCTION 14700dbe6 FUN_14700dbe6 body=762 status=ok
// SIG undefined FUN_14700dbe6(void)

ulonglong FUN_14700dbe6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  uint local_e4;
  longlong *local_e0;
  longlong local_d8 [2];
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_80;
  int local_78;
  longlong *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146ff8bfc(param_1,&local_80,DAT_14c947d08);
  uVar11 = 0;
  if (1 < local_78) {
    FUN_14598538a(&local_a8,&local_80);
    local_98 = 0;
    uStack_90 = 0;
    local_70 = local_a8;
    local_68 = (int)uStack_a0 + -1;
    if ((int)uStack_a0 == 0) {
      local_68 = 0;
    }
    FUN_1468fe3e4();
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 1;
    FUN_1401d5364(&local_a8,0);
    *(undefined4 *)local_a8 = (undefined4)local_98;
    *(undefined4 *)((longlong)local_a8 + 4) = local_98._4_4_;
    *(undefined4 *)(local_a8 + 1) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)local_a8 + 0xc) = uStack_90._4_4_;
    FUN_140ba791a(&local_98,local_d8);
    FUN_1468b7fce(&local_c8,local_d8,0);
    local_b8 = 0;
    uStack_b0 = 0;
    local_70 = (longlong *)local_c8;
    local_68 = local_c0 + -1;
    if (local_c0 == 0) {
      local_68 = 0;
    }
    FUN_1468fe3e4();
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    uVar11 = uStack_a0;
    if (local_b8 != 0) {
      lVar9 = (longlong)(int)uStack_a0;
      uVar3 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
      if (uStack_a0._4_4_ < uVar3) {
        FUN_1401d5364(&local_a8,uVar11 & 0xffffffff);
      }
      plVar10 = local_a8 + lVar9 * 2;
      *(undefined4 *)plVar10 = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar10 + 4) = local_b8._4_4_;
      *(undefined4 *)(plVar10 + 1) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_b0._4_4_;
    }
    local_f0 = local_a8;
    if ((longlong)(int)uStack_a0 != 0) {
      local_e0 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        local_e0 = (longlong *)param_2[8];
      }
      local_e4 = (int)param_2[9] - 1;
      lVar9 = *param_2;
      plVar10 = local_a8;
      do {
        if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
          lVar1 = *plVar10;
          lVar2 = plVar10[1];
          uVar5 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar8 = (uint)lVar1 & 0xffff;
          uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar6 = (uint)lVar2 & 0xffff;
          uVar5 = (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar8) +
                  (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4);
          iVar7 = *(int *)((longlong)local_e0 +
                          (ulonglong)
                          (((uVar5 >> 2) +
                            ((uint)lVar2 << 0x10 | uVar6) + (int)((ulonglong)lVar2 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4) + uVar5 * 0x40 +
                            0x9e3779b9 ^ uVar5) & local_e4) * 4);
          while (iVar7 != -1) {
            lVar4 = (longlong)iVar7;
            if ((*(longlong *)(lVar9 + lVar4 * 0x18) == lVar1) &&
               (*(longlong *)(lVar9 + 8 + lVar4 * 0x18) == lVar2)) {
              if (local_a8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              uVar11 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
              goto LAB_14700dc35;
            }
            iVar7 = *(int *)(lVar9 + lVar4 * 0x18 + 0x10);
          }
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != local_a8 + (longlong)(int)uStack_a0 * 2);
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar11 = 0;
  }
LAB_14700dc35:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14700dee2 FUN_14700dee2 body=331 status=ok
// SIG undefined FUN_14700dee2(void)

void FUN_14700dee2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_1447c1074(DAT_14c99ded8);
  if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x18) != 0)) {
    plVar7 = *(longlong **)(lVar5 + 0x10);
    plVar8 = plVar7 + (longlong)*(int *)(lVar5 + 0x18) * 2;
    do {
      while ((((int)plVar7[1] == 0 || ((longlong *)*plVar7 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar4 == '\0'))) {
        plVar7 = plVar7 + 2;
        if (plVar7 == plVar8) goto LAB_14700dfea;
      }
      if ((int)plVar7[1] == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)*plVar7;
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,&local_50);
      if (local_50 == 0) {
LAB_14700df73:
        bVar3 = false;
      }
      else {
        local_60 = local_50;
        local_58 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
        cVar4 = FUN_14700e02e(param_1,&local_60);
        bVar3 = true;
        if (cVar4 != '\0') goto LAB_14700df73;
      }
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar7 = plVar7 + 2;
    } while (!bVar3 && plVar7 != plVar8);
  }
LAB_14700dfea:
  if (*param_1 != 0) {
    plVar7 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14700e02e FUN_14700e02e body=92 status=ok
// SIG undefined FUN_14700e02e(void)

undefined4 FUN_14700e02e(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pcVar3 = (code *)*param_1;
  plVar6 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[2];
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  uVar4 = (*pcVar3)(uVar5,param_2);
  plVar6 = *(longlong **)(param_2 + 8);
  if (plVar6 != (longlong *)0x0) {
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
  return uVar4;
}



// FUNCTION 14700e08a FUN_14700e08a body=202 status=ok
// SIG undefined FUN_14700e08a(void)

void FUN_14700e08a(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1447c1074(DAT_14c99ded8);
  if ((param_1 != 0 && lVar3 != 0) &&
     (uVar5 = (ulonglong)*(int *)(lVar3 + 0x18), 0 < (longlong)uVar5)) {
    lVar6 = uVar5 * 0x10 + -8;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar4 + lVar6) == 0) ||
         (plVar1 = *(longlong **)(lVar4 + -8 + lVar6), plVar1 == (longlong *)0x0)) {
        lVar4 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
        lVar4 = local_38;
      }
      if (lVar4 == param_1) {
        FUN_14700e156((longlong *)(lVar3 + 0x10),(int)uVar5 + -1);
      }
      lVar6 = lVar6 + -0x10;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14700e156 FUN_14700e156 body=82 status=ok
// SIG undefined FUN_14700e156(void)

void FUN_14700e156(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + *param_1);
  FUN_1449db362(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar1) << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_14701b228(param_1);
  return;
}



// FUNCTION 14700e1a8 FUN_14700e1a8 body=124 status=ok
// SIG undefined FUN_14700e1a8(void)

void FUN_14700e1a8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
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
    return;
  }
  return;
}



// FUNCTION 14700e224 FUN_14700e224 body=41 status=ok
// SIG undefined FUN_14700e224(void)

void FUN_14700e224(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14700a3ca();
  return;
}



// FUNCTION 14700e24e FUN_14700e24e body=3151 status=ok
// SIG undefined FUN_14700e24e(void)

void FUN_14700e24e(longlong param_1,longlong param_2,longlong **param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong **pplVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  int iVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined4 *puVar20;
  uint uVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  undefined1 auStack_3c8 [32];
  undefined4 local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  longlong **local_388;
  undefined4 local_380;
  longlong **local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  int local_354;
  longlong **local_350;
  undefined4 local_348;
  code *local_340;
  longlong ***local_338;
  undefined1 local_32c [4];
  longlong *local_328 [2];
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  ulonglong uStack_2e8;
  int local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  longlong local_2c8;
  int local_2c0;
  longlong **local_2b8;
  undefined8 uStack_2b0;
  longlong *local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  longlong *local_290;
  longlong local_288;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  uVar6 = local_298;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_290 = &local_98;
  local_78 = 0;
  iVar26 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_338 = &local_2b8;
  local_2a8 = (longlong *)param_5;
  uStack_2a0 = param_6;
  local_298._3_1_ = SUB41(uVar6,3);
  local_298._0_3_ =
       CONCAT12(*(int *)(param_4 + 8) != *(int *)(param_4 + 0x34),
                CONCAT11(*(int *)(param_3 + 1) != *(int *)((longlong)param_3 + 0x34),
                         *(int *)(param_5 + 8) != *(int *)(param_5 + 0x34)));
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_340 = FUN_142ae9a94;
  local_2b8 = param_3;
  uStack_2b0 = (longlong **)param_4;
  local_288 = param_1;
  FUN_1415625f6(param_2);
  pplVar3 = (longlong **)(param_2 + 0x1f0);
  local_2b8 = (longlong **)&DAT_100000000;
  local_2a8 = (longlong *)&DAT_ffffffff;
  uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
  local_3a0 = param_2;
  uStack_2b0 = pplVar3;
  if (*(int *)(param_2 + 0x208) != 0) {
    FUN_1449c0562(&local_2b8);
    iVar26 = *(int *)(local_3a0 + 0x208);
  }
  local_2f0 = local_2a8;
  plVar22 = local_2f0;
  uStack_2e8 = uStack_2a0;
  uStack_300 = local_2b8;
  uStack_2f8 = (int)uStack_2b0;
  uStack_2f4 = uStack_2b0._4_4_;
  local_2f0._4_4_ = (int)((ulonglong)local_2a8 >> 0x20);
  if ((local_2f0._4_4_ != iVar26) || (uStack_2b0 != pplVar3)) {
    local_398 = param_1 + 0x88;
    iVar17 = local_2f0._4_4_;
    local_308 = (longlong *)(param_2 + 0x1e0);
    local_2f0 = plVar22;
    do {
      if (*(longlong *)(*local_308 + 8 + (longlong)iVar17 * 0x18) != 0) {
        plVar22 = (longlong *)(*local_308 + (longlong)iVar17 * 0x18);
        if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
          lVar25 = *plVar22;
          uVar24 = (uint)((ulonglong)lVar25 >> 0x10);
          uVar21 = (uint)lVar25 & 0xffff;
          lVar19 = *(longlong *)(param_1 + 0x90);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar19 = local_398;
          }
          iVar17 = *(int *)(lVar19 + (ulonglong)
                                     (*(int *)(param_1 + 0x98) - 1U &
                                     (int)((ulonglong)lVar25 >> 0x20) +
                                     ((uint)lVar25 << 0x10 | uVar21) +
                                     (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar21 >> 4)) * 4);
          if (iVar17 != -1) {
            do {
              plVar2 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar17 * 0x28);
              if (*plVar2 == lVar25) {
                if (((ulonglong)(plVar2 + 1) & 0xfffffffffffffff7) != 0) goto LAB_14700eab7;
                break;
              }
              iVar17 = (int)plVar2[4];
            } while (iVar17 != -1);
          }
        }
        uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
        local_2a8 = &local_98;
        local_2b8 = (longlong **)&local_298;
        uStack_2b0 = (longlong **)&local_298;
        FUN_14005eb5c(plVar22,&local_2b8);
        local_350 = local_2b8;
        local_348 = (undefined4)((ulonglong)((longlong)uStack_2b0 - (longlong)local_2b8) >> 1);
        cVar16 = FUN_14475c62c(&local_350);
        if ((char)uStack_2a0 == '\x01') {
          FUN_1400020a8(local_2b8);
        }
        if (cVar16 != '\0') {
          lVar25 = *plVar22;
LAB_14700eab7:
          puVar20 = (undefined4 *)FUN_14700eea0(param_1,lVar25);
          puVar4 = (undefined4 *)plVar22[1];
          uVar6 = puVar4[1];
          uVar7 = puVar4[2];
          uVar8 = puVar4[3];
          uVar9 = puVar4[4];
          uVar10 = puVar4[5];
          uVar11 = puVar4[6];
          uVar12 = puVar4[7];
          *puVar20 = *puVar4;
          puVar20[1] = uVar6;
          puVar20[2] = uVar7;
          puVar20[3] = uVar8;
          puVar20[4] = uVar9;
          puVar20[5] = uVar10;
          puVar20[6] = uVar11;
          puVar20[7] = uVar12;
          *(undefined1 *)(puVar20 + 8) = *(undefined1 *)(puVar4 + 8);
          FUN_146ffcaac(puVar20 + 10,puVar4 + 10);
          FUN_1406fa324(puVar20 + 0x1e,puVar4 + 0x1e);
          uVar6 = puVar4[0x23];
          uVar7 = puVar4[0x24];
          uVar8 = puVar4[0x25];
          uVar18 = *(undefined8 *)(puVar4 + 0x26);
          uVar13 = *(undefined8 *)(puVar4 + 0x28);
          uVar14 = *(undefined8 *)((longlong)puVar4 + 0xa5);
          uVar15 = *(undefined8 *)((longlong)puVar4 + 0xad);
          puVar20[0x22] = puVar4[0x22];
          puVar20[0x23] = uVar6;
          puVar20[0x24] = uVar7;
          puVar20[0x25] = uVar8;
          *(undefined8 *)(puVar20 + 0x26) = uVar18;
          *(undefined8 *)(puVar20 + 0x28) = uVar13;
          *(undefined8 *)((longlong)puVar20 + 0xa5) = uVar14;
          *(undefined8 *)((longlong)puVar20 + 0xad) = uVar15;
        }
      }
      local_2f0 = (longlong *)CONCAT44(local_2f0._4_4_,(uint)local_2f0 & ~uStack_300._4_4_);
      FUN_1449c0562(&uStack_300);
      iVar17 = local_2f0._4_4_;
      plVar22 = local_2f0;
    } while (local_308 != (longlong *)(param_2 + 0x1e0) ||
             ((longlong **)CONCAT44(uStack_2f4,uStack_2f8) != pplVar3 || local_2f0._4_4_ != iVar26))
    ;
  }
  local_2f0 = plVar22;
  uStack_2e8 = 0;
  iVar26 = 0;
  local_2e0 = 0;
  local_308 = (longlong *)0x0;
  uStack_300 = (longlong **)0x0;
  local_2dc = 0xffffffff00000080;
  local_2d4 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  uVar24 = *(int *)(local_3a0 + 0x198) - *(int *)(local_3a0 + 0x1c4);
  if (uVar24 != 0) {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar24);
    }
    FUN_14701b68c(&local_308,uVar24);
    iVar17 = 1;
    if (3 < uVar24) {
      uVar24 = (uVar24 | 1) + 0xe;
      iVar17 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      iVar17 = 1 << ((byte)iVar17 & 0x1f);
    }
    if ((local_2c0 == 0) || (local_2c0 < iVar17)) {
      local_2c0 = iVar17;
      FUN_14700983e();
    }
  }
  pplVar3 = (longlong **)(local_3a0 + 400);
  pplVar1 = (longlong **)(local_3a0 + 0x1a0);
  local_2b8 = (longlong **)&DAT_100000000;
  uStack_2b0 = pplVar1;
  local_2a8 = (longlong *)&DAT_ffffffff;
  uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
  if (*(int *)(local_3a0 + 0x1b8) != 0) {
    FUN_1449c0562(&local_2b8);
    iVar26 = *(int *)(local_3a0 + 0x1b8);
  }
  local_360 = local_2a8;
  plVar22 = local_360;
  local_358 = (uint)uStack_2a0;
  local_354 = uStack_2a0._4_4_;
  local_370 = local_2b8;
  local_368 = uStack_2b0;
  local_360._4_4_ = (int)((ulonglong)local_2a8 >> 0x20);
  if ((local_360._4_4_ != iVar26) || (uStack_2b0 != pplVar1)) {
    local_390 = param_1 + 0x88;
    local_398 = param_1 + 0x278;
    iVar17 = local_360._4_4_;
    local_378 = pplVar3;
    local_360 = plVar22;
    do {
      local_328[0] = (longlong *)(*local_378)[(longlong)iVar17 * 6 + 4];
      if ((*(char *)(param_6 + 8) == '\x01') && (local_328[0][3] != 0)) {
LAB_14700edd3:
        FUN_1400b4012(&local_2b8,local_328[0]);
        FUN_147019fe0(local_398,local_32c,&local_2b8);
      }
      else {
        lVar25 = *local_328[0];
        if ((lVar25 != 0) && ((local_328[0][2] == 0 && (local_328[0][3] == 0)))) {
          uVar21 = (uint)lVar25;
          iVar17 = (int)((ulonglong)lVar25 >> 0x20);
          uVar24 = (uint)((ulonglong)lVar25 >> 0x10);
          if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
            lVar19 = *(longlong *)(param_1 + 0x90);
            if (*(longlong *)(param_1 + 0x90) == 0) {
              lVar19 = local_390;
            }
            iVar27 = *(int *)(lVar19 + (ulonglong)
                                       (*(int *)(param_1 + 0x98) - 1U &
                                       iVar17 + (uVar21 << 0x10 | uVar21 & 0xffff) +
                                       (uVar24 << 0x13 | uVar24 & 0xffff) + ((uVar21 & 0xffff) >> 4)
                                       ) * 4);
            if (iVar27 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar27 * 0x28) == lVar25
                   ) goto LAB_14700ed75;
                iVar27 = *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar27 * 0x28 + 0x20);
              } while (iVar27 != -1);
            }
          }
          if ((int)uStack_90 != local_64) {
            puVar23 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar23 = local_60;
            }
            for (iVar17 = *(int *)(puVar23 +
                                  (ulonglong)
                                  (local_50 - 1U &
                                  iVar17 + (uVar21 << 0x10 | uVar21 & 0xffff) +
                                  (uVar24 << 0x13 | uVar24 & 0xffff) + ((uVar21 & 0xffff) >> 4)) * 4
                                  ); iVar17 != -1;
                iVar17 = *(int *)((longlong)iVar17 * 0x10 + local_98 + 8)) {
              if (*(longlong *)(local_98 + (longlong)iVar17 * 0x10) == lVar25) goto LAB_14700ed75;
            }
          }
          uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
          local_2b8 = (longlong **)&local_298;
          local_2a8 = &local_98;
          uStack_2b0 = local_2b8;
          FUN_14005eb5c(local_328[0],&local_2b8);
          local_388 = local_2b8;
          local_380 = (undefined4)((ulonglong)((longlong)uStack_2b0 - (longlong)local_2b8) >> 1);
          cVar16 = FUN_14475c62c(&local_388);
          if ((char)uStack_2a0 == '\x01') {
            FUN_1400020a8(local_2b8);
          }
          if (cVar16 == '\0') goto LAB_14700edd3;
        }
LAB_14700ed75:
        FUN_1470094f0(&local_308,&local_2b8,local_328,0);
      }
      local_360 = (longlong *)CONCAT44(local_360._4_4_,(uint)local_360 & ~local_370._4_4_);
      FUN_1449c0562(&local_370);
      iVar17 = local_360._4_4_;
      plVar22 = local_360;
    } while (local_378 != pplVar3 || (local_368 != pplVar1 || local_360._4_4_ != iVar26));
  }
  local_360 = plVar22;
  local_378 = (longlong **)0x100000000;
  local_368._0_4_ = 0xffffffff;
  local_368._4_4_ = 0;
  local_360 = (longlong *)((ulonglong)local_360 & 0xffffffff00000000);
  iVar26 = 0;
  local_370 = (longlong **)&uStack_2f8;
  if (local_2e0 != 0) {
    FUN_1449c0562(&local_378);
    iVar26 = local_2e0;
  }
  uStack_2a0._0_4_ = (uint)local_368;
  uStack_2a0._4_4_ = local_368._4_4_;
  local_298 = (uint)local_360;
  uStack_294 = local_360._4_4_;
  uStack_2b0 = local_378;
  local_2a8 = (longlong *)local_370;
  local_2b8 = &local_308;
  if ((local_368._4_4_ != iVar26) || (iVar17 = iVar26, local_370 != (longlong **)&uStack_2f8)) {
    do {
      lVar25 = (*local_2b8)[(longlong)uStack_2a0._4_4_ * 2];
      uVar18 = FUN_14700ef9c(param_1,lVar25);
      local_3a8 = *(undefined4 *)(lVar25 + 0x58);
      FUN_14701a52c(uVar18,*(undefined4 *)(lVar25 + 0x28),*(undefined4 *)(lVar25 + 0x38),
                    *(undefined4 *)(lVar25 + 0x48));
      uStack_2a0._0_4_ = (uint)uStack_2a0 & ~uStack_2b0._4_4_;
      FUN_1449c0562(&uStack_2b0);
      iVar17 = local_2e0;
    } while (local_2b8 != &local_308 ||
             (local_2a8 != (longlong *)&uStack_2f8 || uStack_2a0._4_4_ != iVar26));
  }
  local_2b8 = (longlong **)0x100000000;
  uStack_2b0 = (longlong **)&uStack_2f8;
  local_2a8 = (longlong *)&DAT_ffffffff;
  uStack_2a0._0_4_ = 0;
  iVar26 = 0;
  if (iVar17 != 0) {
    FUN_1449c0562(&local_2b8);
    iVar26 = local_2e0;
  }
  local_360 = local_2a8;
  plVar22 = local_360;
  local_358 = (uint)uStack_2a0;
  local_354 = uStack_2a0._4_4_;
  local_370 = local_2b8;
  local_368 = uStack_2b0;
  local_360._4_4_ = (int)((ulonglong)local_2a8 >> 0x20);
  local_378 = &local_308;
  if ((local_360._4_4_ != iVar26) || (uStack_2b0 != (longlong **)&uStack_2f8)) {
    iVar17 = local_360._4_4_;
    local_360 = plVar22;
    do {
      lVar25 = (*local_378)[(longlong)iVar17 * 2];
      lVar19 = FUN_14700ef9c(param_1,lVar25);
      local_318 = 0;
      local_310 = 0x100000000;
      local_328[0] = (longlong *)((ulonglong)local_328[0] & 0xffffffffffff0000);
      local_2b8 = (longlong **)0x0;
      local_2a8 = (longlong *)0x0;
      local_2a8 = (longlong *)FUN_14001cc68(0x28,8);
      *local_2a8 = (longlong)&PTR_LAB_149fcb8f0;
      local_2a8[1] = lVar25;
      local_2a8[2] = lVar19;
      local_2a8[3] = (longlong)&local_308;
      local_2a8[4] = param_1;
      if (local_2a8 + 1 != (longlong *)0x0) {
        local_2b8 = (longlong **)FUN_142ae9f98;
      }
      FUN_14700f04e(lVar25,&local_2b8,0xf,local_328);
      if (local_2b8 != (longlong **)0x0) {
        plVar22 = local_2a8;
        if (local_2a8 == (longlong *)0x0) {
          plVar22 = (longlong *)&local_298;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_318 != 0) {
        FUN_1400020a8();
      }
      *(byte *)(lVar19 + 0xc0) = *(byte *)(lVar19 + 0xc0) | 0x10;
      local_360 = (longlong *)CONCAT44(local_360._4_4_,(uint)local_360 & ~local_370._4_4_);
      FUN_1449c0562(&local_370);
      iVar17 = local_360._4_4_;
      plVar22 = local_360;
    } while (local_378 != &local_308 ||
             (local_368 != (longlong **)&uStack_2f8 || local_360._4_4_ != iVar26));
  }
  local_360 = plVar22;
  local_2b8 = (longlong **)0x0;
  uStack_2b0 = (longlong **)0x0;
  FUN_14700f13c(param_1 + 400,&local_2b8);
  pplVar3 = local_2b8;
  lVar25 = (longlong)(int)uStack_2b0;
  if (lVar25 != 0) {
    lVar19 = 0;
    do {
      lVar5 = *(longlong *)((longlong)pplVar3 + lVar19);
      if (*(int *)(lVar5 + 0x38) + *(int *)(lVar5 + 0x28) + *(int *)(lVar5 + 0x48) +
          *(int *)(lVar5 + 0x58) == 0) {
        FUN_14700f290(param_1);
      }
      lVar19 = lVar19 + 8;
    } while (lVar25 * 8 != lVar19);
  }
  FUN_14576f8ee(param_1,1,1);
  FUN_14576f494(param_1 + 0x2c8,local_3a0 + 0x2c8);
  FUN_14700f48a(param_1 + 0x270);
  if (local_2b8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  local_2c0 = 0;
  if (local_2c8 != 0) {
    FUN_1400020a8();
  }
  FUN_14700a20c(&local_308);
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  *(undefined4 *)(param_5 + 0x48) = 0;
  if (*(longlong *)(param_5 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_5);
  if ((local_48 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700eea0 FUN_14700eea0 body=251 status=ok
// SIG undefined FUN_14700eea0(void)

longlong FUN_14700eea0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (uint)((ulonglong)param_2 >> 0x10);
  uVar5 = (uint)param_2 & 0xffff;
  local_20 = param_2;
  plVar2 = (longlong *)
           FUN_14701f6d4(param_1 + 0x1e0,
                         (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4));
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 10) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x54) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
    puVar3[0xd] = 0;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    *(undefined4 *)(puVar3 + 0x13) = 0xffffffff;
    puVar3[0x14] = 0;
    *(undefined4 *)(puVar3 + 0x15) = 0;
    *(undefined4 *)(puVar3 + 0x16) = 0;
    *(undefined1 *)((longlong)puVar3 + 0xb4) = 0;
    *plVar2 = (longlong)puVar3;
    *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
    lVar4 = *plVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700ef9c FUN_14700ef9c body=178 status=ok
// SIG undefined FUN_14700ef9c(void)

longlong FUN_14700ef9c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  uVar4 = FUN_147008ecb(param_2);
  plVar5 = (longlong *)FUN_14701f526(param_1 + 400,uVar4,param_2);
  lVar7 = *plVar5;
  if (lVar7 == 0) {
    puVar6 = (undefined8 *)FUN_14001cc68(200,0x10);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *puVar6 = *param_2;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0x8000000000;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0x8000000000;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0x8000000000;
    *(undefined4 *)(puVar6 + 0x18) = 0xf;
    *plVar5 = (longlong)puVar6;
    *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
    lVar7 = *plVar5;
  }
  return lVar7;
}



// FUNCTION 14700f04e FUN_14700f04e body=237 status=ok
// SIG undefined FUN_14700f04e(void)

void FUN_14700f04e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_147013eb2(param_2,param_3,param_4,1,7,param_1 + 0x20,param_1 + 0x60,&LAB_1470140c2,
                *(byte *)(param_1 + 0xc0) & 1);
  FUN_1470140c7(param_2,param_3,param_4,4,0x80,param_1 + 0x30,param_1 + 0xa0,&LAB_147014246,
                (char)((*(uint *)(param_1 + 0xc0) & 2) >> 1));
  FUN_1470140c7(param_2,param_3,param_4,2,8,param_1 + 0x40,param_1 + 0x80,&LAB_14701424c,
                (char)((*(uint *)(param_1 + 0xc0) & 4) >> 2));
  return;
}



// FUNCTION 14700f13c FUN_14700f13c body=337 status=ok
// SIG undefined FUN_14700f13c(void)

void FUN_14700f13c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_14700a3ca(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar2 = iStack_5c;
      lVar1 = *local_78;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14700a186(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)((longlong)iVar2 * 0x30 + lVar1 + 0x20);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14700f290 FUN_14700f290 body=505 status=ok
// SIG undefined FUN_14700f290(void)

void FUN_14700f290(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_6c [4];
  undefined2 local_68 [8];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 400);
  uVar3 = FUN_147008ecb(param_2);
  iVar4 = FUN_147008e62(plVar1,uVar3,param_2);
  if (((iVar4 != -1) &&
      (lVar5 = (longlong)iVar4 * 0x30 + *plVar1, plVar6 = (longlong *)(lVar5 + 0x20),
      plVar6 != (longlong *)0x0 && lVar5 != 0)) && (lVar5 = *plVar6, lVar5 != 0)) {
    local_88 = 0;
    uStack_80 = 0;
    local_58 = 0;
    local_50 = 0x100000000;
    local_68[0] = 0;
    FUN_1470114e8(lVar5,&local_88,local_68);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_88;
    lVar8 = (longlong)(int)uStack_80;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        FUN_147014e59(lVar5,*(longlong *)(lVar2 + lVar7) + 0x50,0,
                      (*(uint *)(*(longlong *)(lVar2 + lVar7) + 0xc0) & 8) >> 3);
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    local_98 = 0;
    uStack_90 = 0;
    local_58 = 0;
    local_50 = 0x100000000;
    local_68[0] = 0;
    FUN_1470111f2(lVar5,&local_98,0xf,local_68);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar2 = local_98;
    lVar8 = (longlong)(int)uStack_90;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        FUN_147011804(*(undefined8 *)(lVar2 + lVar7),lVar5);
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    FUN_14701c258(plVar1,param_2);
    *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + -1;
    FUN_1400b4012(local_68,param_2);
    FUN_147019fe0(param_1 + 0x278,local_6c,local_68);
    if (*(int *)(param_1 + 0x248) == 0) {
      FUN_14700e1a8(lVar5);
      FUN_1400020a8(lVar5);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14700f48a FUN_14700f48a body=2970 status=ok
// SIG undefined FUN_14700f48a(void)

void FUN_14700f48a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = param_1 + 8;
    plVar15 = (longlong *)(param_1 + 0x168);
    local_128 = param_1;
    local_120 = param_1;
    FUN_142ae54ec(lVar1,&local_120,plVar15);
    local_98 = 0;
    iVar12 = 0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_148 = param_1 + 0x178;
    local_d8 = 0x100000000;
    local_c8._0_4_ = 0xffffffff;
    local_c8._4_4_ = 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    puStack_d0 = (undefined1 *)local_148;
    if (*(int *)(param_1 + 400) != 0) {
      FUN_1449c0562(&local_d8);
      iVar12 = *(int *)(param_1 + 400);
    }
    local_e8._0_4_ = (uint)local_c8;
    local_e8._4_4_ = local_c8._4_4_;
    local_e0 = (undefined4)uStack_c0;
    local_dc = uStack_c0._4_4_;
    local_f8 = local_d8;
    local_f0 = puStack_d0;
    local_140 = param_1;
    local_138 = plVar15;
    local_100 = plVar15;
    if ((local_c8._4_4_ != iVar12) || (puStack_d0 != (undefined1 *)local_148)) {
      local_130 = param_1 + 0x58;
      do {
        lVar3 = *local_100;
        lVar9 = (longlong)local_e8._4_4_ * 0x20;
        lVar2 = lVar3 + lVar9;
        iVar7 = *(int *)(lVar3 + 0x10 + lVar9);
        if (0 < (longlong)iVar7) {
          plVar15 = (longlong *)(lVar3 + lVar9 + 8);
          iVar14 = -iVar7;
          uVar11 = (longlong)iVar7;
          do {
            iVar7 = *(int *)(*plVar15 + -4 + uVar11 * 4);
            if ((((longlong)iVar7 < 0) || (*(int *)(local_140 + 0x160) <= iVar7)) ||
               (puVar10 = (undefined4 *)((longlong)iVar7 * 8 + *(longlong *)(local_140 + 0x158)),
               puVar10 == (undefined4 *)0x0)) {
LAB_14700f6af:
              local_c8._0_4_ = 0;
              local_c8._4_4_ = 0;
              uStack_c0 = 0;
              local_d8 = 0;
              puStack_d0 = (undefined1 *)0x0;
              FUN_1400b4012(&local_118,&local_d8);
            }
            else {
              puVar10 = (undefined4 *)FUN_147020fb8(local_130,*puVar10);
              if (puVar10 == (undefined4 *)0x0) goto LAB_14700f6af;
              local_108 = puVar10[4];
              local_118 = *puVar10;
              uStack_114 = puVar10[1];
              uStack_110 = puVar10[2];
              uStack_10c = puVar10[3];
            }
            uVar6 = FUN_14498da01(&local_118);
            iVar7 = FUN_14701a264(lVar1,uVar6,&local_118);
            if (iVar7 != -1) {
              uVar8 = *(uint *)(lVar2 + 0x10);
              if (uVar11 != uVar8) {
                iVar7 = iVar14 + uVar8;
                if (0 < (int)(iVar14 + uVar8)) {
                  iVar7 = 1;
                }
                memmove((void *)(*(longlong *)(lVar2 + 8) + uVar11 * 4 + -4),
                        (void *)(*(longlong *)(lVar2 + 8) + (longlong)(int)(uVar8 - iVar7) * 4),
                        (longlong)iVar7 << 2);
                uVar8 = *(uint *)(lVar2 + 0x10);
              }
              *(uint *)(lVar2 + 0x10) = uVar8 - 1;
              FUN_144780a3c(plVar15);
            }
            iVar14 = iVar14 + 1;
            bVar4 = 1 < uVar11;
            uVar11 = uVar11 - 1;
          } while (bVar4);
          iVar7 = *(int *)(lVar2 + 0x10);
          plVar15 = local_138;
        }
        if (iVar7 == 0) {
          FUN_144980568(local_b8,&local_d8,lVar2,0);
        }
        local_e8._0_4_ = (uint)local_e8 & ~local_f8._4_4_;
        FUN_1449c0562(&local_f8);
      } while (local_100 != plVar15 ||
               (local_f0 != (undefined1 *)local_148 || local_e8._4_4_ != iVar12));
    }
    local_d8 = 0x100000000;
    local_c8._0_4_ = 0xffffffff;
    local_c8._4_4_ = 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    iVar12 = 0;
    puStack_d0 = local_a8;
    if (local_90 != 0) {
      FUN_1449c0562(&local_d8);
      iVar12 = local_90;
    }
    plVar15 = local_138;
    lVar2 = local_140;
    local_e8._0_4_ = (uint)local_c8;
    local_e8._4_4_ = local_c8._4_4_;
    local_e0 = (undefined4)uStack_c0;
    local_dc = uStack_c0._4_4_;
    local_f8 = local_d8;
    local_f0 = puStack_d0;
    local_100 = local_b8;
    if ((local_c8._4_4_ != iVar12) || (puStack_d0 != local_a8)) {
      do {
        FUN_147020e48(plVar15,*(undefined4 *)(*local_100 + (longlong)local_e8._4_4_ * 0xc));
        local_e8._0_4_ = (uint)local_e8 & ~local_f8._4_4_;
        FUN_1449c0562(&local_f8);
      } while (local_100 != local_b8 || (local_f0 != local_a8 || local_e8._4_4_ != iVar12));
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bc218(local_b8);
    plVar15 = (longlong *)(lVar2 + 0x1b8);
    FUN_142ae54ec(lVar1,&local_120,plVar15);
    iVar12 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_148 = lVar2 + 0x1c8;
    local_d8 = 0x100000000;
    local_c8._0_4_ = 0xffffffff;
    local_c8._4_4_ = 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    puStack_d0 = (undefined1 *)local_148;
    if (*(int *)(lVar2 + 0x1e0) != 0) {
      FUN_1449c0562(&local_d8);
      iVar12 = *(int *)(lVar2 + 0x1e0);
    }
    local_e8._0_4_ = (uint)local_c8;
    local_e8._4_4_ = local_c8._4_4_;
    local_e0 = (undefined4)uStack_c0;
    local_dc = uStack_c0._4_4_;
    local_f8 = local_d8;
    local_f0 = puStack_d0;
    local_100 = plVar15;
    if ((local_c8._4_4_ != iVar12) || (puStack_d0 != (undefined1 *)local_148)) {
      do {
        lVar3 = *local_100;
        lVar9 = (longlong)local_e8._4_4_ * 0x20;
        lVar2 = lVar3 + lVar9;
        iVar7 = *(int *)(lVar3 + 0x10 + lVar9);
        if (0 < (longlong)iVar7) {
          plVar13 = (longlong *)(lVar3 + lVar9 + 8);
          iVar14 = -iVar7;
          uVar11 = (longlong)iVar7;
          do {
            FUN_142aeb104(&local_128,&local_d8,*(undefined4 *)(*plVar13 + -4 + uVar11 * 4));
            uVar6 = FUN_14498da01(&local_d8);
            iVar7 = FUN_14701a264(lVar1,uVar6,&local_d8);
            if (iVar7 != -1) {
              uVar8 = *(uint *)(lVar2 + 0x10);
              if (uVar11 != uVar8) {
                iVar7 = 1;
                if ((int)(iVar14 + uVar8) < 1) {
                  iVar7 = iVar14 + uVar8;
                }
                memmove((void *)(*(longlong *)(lVar2 + 8) + uVar11 * 4 + -4),
                        (void *)(*(longlong *)(lVar2 + 8) + (longlong)(int)(uVar8 - iVar7) * 4),
                        (longlong)iVar7 << 2);
                uVar8 = *(uint *)(lVar2 + 0x10);
              }
              *(uint *)(lVar2 + 0x10) = uVar8 - 1;
              FUN_144780a3c(plVar13);
            }
            iVar14 = iVar14 + 1;
            bVar4 = 1 < uVar11;
            uVar11 = uVar11 - 1;
          } while (bVar4);
          iVar7 = *(int *)(lVar2 + 0x10);
        }
        if (iVar7 == 0) {
          FUN_144980568(local_b8,&local_d8,lVar2,0);
        }
        local_e8._0_4_ = (uint)local_e8 & ~local_f8._4_4_;
        FUN_1449c0562(&local_f8);
      } while (local_100 != plVar15 ||
               (local_f0 != (undefined1 *)local_148 || local_e8._4_4_ != iVar12));
    }
    local_d8 = 0x100000000;
    local_c8._0_4_ = 0xffffffff;
    local_c8._4_4_ = 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    iVar12 = 0;
    puStack_d0 = local_a8;
    if (local_90 != 0) {
      FUN_1449c0562(&local_d8);
      iVar12 = local_90;
    }
    lVar2 = local_140;
    local_e8._0_4_ = (uint)local_c8;
    local_e8._4_4_ = local_c8._4_4_;
    local_e0 = (undefined4)uStack_c0;
    local_dc = uStack_c0._4_4_;
    local_f8 = local_d8;
    local_f0 = puStack_d0;
    local_100 = local_b8;
    if ((local_c8._4_4_ != iVar12) || (puStack_d0 != local_a8)) {
      do {
        FUN_147020e48(plVar15,*(undefined4 *)(*local_100 + (longlong)local_e8._4_4_ * 0xc));
        local_e8._0_4_ = (uint)local_e8 & ~local_f8._4_4_;
        FUN_1449c0562(&local_f8);
      } while (local_100 != local_b8 || (local_f0 != local_a8 || local_e8._4_4_ != iVar12));
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bc218(local_b8);
    plVar15 = (longlong *)(lVar2 + 0x208);
    local_98 = 0;
    iVar12 = 0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_148 = lVar2 + 0x218;
    local_d8 = 0x100000000;
    local_c8._0_4_ = 0xffffffff;
    local_c8._4_4_ = 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    puStack_d0 = (undefined1 *)local_148;
    if (*(int *)(lVar2 + 0x230) != 0) {
      FUN_1449c0562(&local_d8);
      iVar12 = *(int *)(lVar2 + 0x230);
    }
    local_e8._0_4_ = (uint)local_c8;
    local_e8._4_4_ = local_c8._4_4_;
    local_e0 = (undefined4)uStack_c0;
    local_dc = uStack_c0._4_4_;
    local_f8 = local_d8;
    local_f0 = puStack_d0;
    local_100 = plVar15;
    if ((local_c8._4_4_ == iVar12) && (puStack_d0 == (undefined1 *)local_148)) {
      local_d8 = 0x100000000;
      local_c8 = 0xffffffff;
      uStack_c0 = (ulonglong)uStack_c0._4_4_ << 0x20;
      iVar12 = 0;
      puStack_d0 = local_a8;
    }
    else {
      do {
        lVar3 = *local_100;
        lVar9 = (longlong)local_e8._4_4_ * 0x20;
        lVar2 = lVar3 + lVar9;
        iVar7 = *(int *)(lVar3 + 0x10 + lVar9);
        if (0 < (longlong)iVar7) {
          plVar13 = (longlong *)(lVar3 + lVar9 + 8);
          iVar14 = -iVar7;
          uVar11 = (longlong)iVar7;
          do {
            FUN_142aeb104(&local_128,&local_d8,*(undefined4 *)(*plVar13 + -4 + uVar11 * 4));
            uVar6 = FUN_14498da01(&local_d8);
            iVar7 = FUN_14701a264(lVar1,uVar6,&local_d8);
            if (iVar7 != -1) {
              uVar8 = *(uint *)(lVar2 + 0x10);
              if (uVar11 != uVar8) {
                iVar7 = 1;
                if ((int)(iVar14 + uVar8) < 1) {
                  iVar7 = iVar14 + uVar8;
                }
                memmove((void *)(*(longlong *)(lVar2 + 8) + uVar11 * 4 + -4),
                        (void *)(*(longlong *)(lVar2 + 8) + (longlong)(int)(uVar8 - iVar7) * 4),
                        (longlong)iVar7 << 2);
                uVar8 = *(uint *)(lVar2 + 0x10);
              }
              *(uint *)(lVar2 + 0x10) = uVar8 - 1;
              FUN_144780a3c(plVar13);
            }
            iVar14 = iVar14 + 1;
            bVar4 = 1 < uVar11;
            uVar11 = uVar11 - 1;
          } while (bVar4);
          iVar7 = *(int *)(lVar2 + 0x10);
        }
        if (iVar7 == 0) {
          FUN_144a13f80(local_b8,&local_d8,lVar2,0);
        }
        local_e8._0_4_ = (uint)local_e8 & ~local_f8._4_4_;
        FUN_1449c0562(&local_f8);
      } while (local_100 != plVar15 ||
               (local_f0 != (undefined1 *)local_148 || local_e8._4_4_ != iVar12));
      puStack_d0 = local_a8;
      local_d8 = 0x100000000;
      local_c8 = 0xffffffff;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      iVar12 = 0;
      if (local_90 != 0) {
        FUN_1449c0562(&local_d8);
        iVar12 = local_90;
      }
    }
    local_e8 = local_c8;
    uVar5 = local_e8;
    local_e0 = (undefined4)uStack_c0;
    local_dc = uStack_c0._4_4_;
    local_f8 = local_d8;
    local_f0 = puStack_d0;
    local_e8._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
    local_100 = local_b8;
    if ((local_e8._4_4_ != iVar12) || (puStack_d0 != local_a8)) {
      iVar7 = local_e8._4_4_;
      local_e8 = uVar5;
      do {
        FUN_14702101e(plVar15,*(undefined8 *)(*local_100 + (longlong)iVar7 * 0x10));
        local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
        FUN_1449c0562(&local_f8);
        iVar7 = local_e8._4_4_;
        uVar5 = local_e8;
      } while (local_100 != local_b8 || (local_f0 != local_a8 || local_e8._4_4_ != iVar12));
    }
    local_e8 = uVar5;
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(local_b8);
    FUN_147016410(lVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147010026 FUN_147010026 body=119 status=ok
// SIG undefined FUN_147010026(void)

void FUN_147010026(void)

{
  undefined8 in_R9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2c = 0xffffffff00000080;
  local_24 = 0;
  local_18 = 0;
  local_10 = 0;
  local_68 = in_R9;
  FUN_14701009e();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701009e FUN_14701009e body=274 status=ok
// SIG undefined FUN_14701009e(void)

void FUN_14701009e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_2a8 [40];
  undefined1 local_280 [80];
  undefined1 local_230 [80];
  undefined1 local_1e0 [80];
  undefined8 local_190;
  undefined2 local_188;
  undefined1 local_180 [80];
  undefined1 local_130 [80];
  undefined1 local_e0 [168];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1470101b2(local_280);
  FUN_144881636(local_280,param_2);
  FUN_144881636(local_230,param_3);
  FUN_145c3f772(local_1e0,param_4);
  local_190 = *param_5;
  local_188 = *(undefined2 *)(param_5 + 1);
  FUN_146ffc87a(local_180,param_5 + 2);
  FUN_144881636(local_130,param_5 + 0xc);
  FUN_144881636(local_e0,param_5 + 0x16);
  FUN_142ae04b0(param_1,local_280);
  FUN_14701028c(local_280);
  *(undefined4 *)(param_4 + 0x48) = 0;
  if (*(longlong *)(param_4 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_4);
  if ((local_38 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470101b2 FUN_1470101b2 body=217 status=ok
// SIG undefined FUN_1470101b2(void)

undefined8 * FUN_1470101b2(undefined8 *param_1)

{
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
  FUN_14611a33c(param_1 + 0x1e,0);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14701028c FUN_14701028c body=179 status=ok
// SIG undefined FUN_14701028c(void)

void FUN_14701028c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  FUN_14701a5f4(param_1 + 0x1f8);
  FUN_1456bc624(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1);
  return;
}



// FUNCTION 147010340 FUN_147010340 body=310 status=ok
// SIG undefined FUN_147010340(void)

longlong * FUN_147010340(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_140944cba(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1407de694(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147010478 FUN_147010478 body=147 status=ok
// SIG undefined FUN_147010478(void)

void FUN_147010478(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14701512e(param_2,param_1 + 0x20,param_1 + 0x60,
                CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(param_1 + 0xc0)) &
                0xffffffffffffff01);
  FUN_1470153a5(param_2,param_1 + 0x30,param_1 + 0xa0,(*(uint *)(param_1 + 0xc0) & 2) >> 1);
  FUN_1470153a5(param_2,param_1 + 0x40,param_1 + 0x80,(*(uint *)(param_1 + 0xc0) & 4) >> 2);
  if ((*(byte *)(param_1 + 0xc0) & 8) == 0) {
    FUN_14701ff56(param_1 + 0x50,param_2);
    return;
  }
  FUN_14701fe04(param_1 + 0x50,param_2);
  return;
}



// FUNCTION 14701050c FUN_14701050c body=125 status=ok
// SIG undefined FUN_14701050c(void)

undefined1 FUN_14701050c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined1 local_29;
  undefined1 **local_28;
  code *local_20;
  undefined1 ***local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_29;
  local_29 = 0;
  local_38 = &local_58;
  local_28 = &local_40;
  local_40 = &LAB_142aea30a;
  local_18 = &local_28;
  local_20 = FUN_14701a682;
  local_58 = param_1;
  local_50 = param_3;
  FUN_146ff9b00();
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701058a FUN_14701058a body=1284 status=ok
// SIG undefined FUN_14701058a(void)

void FUN_14701058a(longlong *param_1,longlong *param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar6 = *(uint *)(param_1 + 1);
  local_c8 = param_1;
  if ((int)uVar6 < (int)param_3) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if (uVar6 != 0) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar6);
      }
      FUN_14701c346(&local_98,uVar6);
      iVar5 = 1;
      if (3 < uVar6) {
        uVar6 = (uVar6 | 1) + 0xe;
        iVar5 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 1 << ((byte)iVar5 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar5)) {
        local_50 = iVar5;
        FUN_14701c4da();
      }
    }
    lVar10 = local_c8[1];
    if ((longlong)(int)lVar10 != 0) {
      lVar3 = *local_c8;
      lVar12 = 0;
      do {
        local_b8 = *(undefined8 *)(lVar3 + lVar12);
        local_b9 = 0;
        local_b0 = &local_b8;
        local_a8 = &local_b9;
        FUN_14701c6b6(&local_98,local_9c,&local_b0);
        lVar12 = lVar12 + 8;
      } while ((longlong)(int)lVar10 * 8 != lVar12);
    }
    *(undefined4 *)(local_c8 + 1) = 0;
    if (*(int *)((longlong)local_c8 + 0xc) != 0) {
      FUN_140bebac2(local_c8,0);
    }
    if ((longlong)(int)param_2[1] != 0) {
      plVar16 = (longlong *)*param_2;
      plVar11 = plVar16 + (longlong)(int)param_2[1] * 2;
      plVar9 = local_c8;
      do {
        if ((longlong)(int)plVar16[1] != 0) {
          puVar17 = (ulonglong *)*plVar16;
          puVar1 = puVar17 + (int)plVar16[1];
          do {
            if ((int)uStack_90 != local_64) {
              uVar4 = *puVar17;
              uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
              uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
              puVar7 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar7 = local_60;
              }
              iVar5 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
              while (iVar5 != -1) {
                puVar2 = (ulonglong *)(local_98 + (longlong)iVar5 * 0x18);
                if (*puVar2 == uVar4) {
                  puVar8 = puVar2 + 1;
                  if ((puVar8 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) &&
                     ((char)*puVar8 == '\0')) {
                    *(char *)puVar8 = '\x01';
                    iVar5 = (int)plVar9[1];
                    *(uint *)(plVar9 + 1) = iVar5 + 1U;
                    if (*(uint *)((longlong)plVar9 + 0xc) < iVar5 + 1U) {
                      FUN_14701ada4(plVar9,iVar5);
                      plVar9 = local_c8;
                    }
                    *(ulonglong *)(*plVar9 + (longlong)iVar5 * 8) = uVar4;
                  }
                  break;
                }
                iVar5 = (int)puVar2[2];
              }
            }
            puVar17 = puVar17 + 1;
          } while (puVar17 != puVar1);
        }
        plVar16 = plVar16 + 2;
      } while (plVar16 != plVar11);
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14701a6c6(&local_98);
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if (param_3 != 0) {
      if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)param_3);
      }
      FUN_14701c9d4(&local_98,param_3);
      iVar5 = 1;
      if (3 < param_3) {
        uVar6 = (param_3 | 1) + 0xe;
        iVar5 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 1 << ((byte)iVar5 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar5)) {
        local_50 = iVar5;
        FUN_14701cb6a();
      }
    }
    if ((longlong)(int)param_2[1] != 0) {
      plVar16 = (longlong *)*param_2;
      plVar9 = plVar16 + (longlong)(int)param_2[1] * 2;
      do {
        lVar10 = plVar16[1];
        if ((longlong)(int)lVar10 != 0) {
          lVar3 = *plVar16;
          lVar12 = 0;
          do {
            local_b0 = *(undefined8 **)(lVar3 + lVar12);
            FUN_14701cd48(&local_98,&local_b8,&local_b0);
            lVar12 = lVar12 + 8;
          } while ((longlong)(int)lVar10 * 8 != lVar12);
        }
        plVar16 = plVar16 + 2;
      } while (plVar16 != plVar9);
    }
    iVar5 = (int)local_c8[1];
    if (0 < iVar5) {
      lVar10 = 0;
      bVar14 = false;
      do {
        lVar3 = *local_c8;
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_60;
        }
        iVar15 = (int)lVar10;
        lVar10 = (longlong)iVar15;
        while (lVar12 = (longlong)iVar15, (int)uStack_90 != local_64) {
          uVar4 = *(ulonglong *)(lVar3 + lVar10 * 8);
          uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          iVar13 = *(int *)(puVar7 + (ulonglong)((uVar6 >> 0x10 ^ uVar6) & local_50 - 1U) * 4);
          while( true ) {
            lVar12 = lVar10;
            if (iVar13 == -1) goto LAB_14701080c;
            if (*(ulonglong *)(local_98 + (longlong)iVar13 * 0x10) == uVar4) break;
            iVar13 = *(int *)((longlong)iVar13 * 0x10 + local_98 + 8);
          }
          lVar10 = lVar10 + 1;
          if (iVar5 <= lVar10) {
            if (bVar14) goto LAB_147010a25;
            goto LAB_147010a2a;
          }
        }
LAB_14701080c:
        iVar15 = ~(uint)lVar10 + iVar5;
        if (iVar15 != 0) {
          if (0 < iVar15) {
            iVar15 = 1;
          }
          memmove((void *)(lVar3 + lVar12 * 8),(void *)(lVar3 + (longlong)(iVar5 - iVar15) * 8),
                  (longlong)iVar15 << 3);
          iVar5 = (int)local_c8[1];
        }
        iVar5 = iVar5 + -1;
        *(int *)(local_c8 + 1) = iVar5;
        bVar14 = true;
      } while ((int)(uint)lVar10 < iVar5);
LAB_147010a25:
      FUN_145782e1a(local_c8);
    }
LAB_147010a2a:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14700a4fc(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147010a90 FUN_147010a90 body=151 status=ok
// SIG undefined FUN_147010a90(void)

undefined1 FUN_147010a90(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)((longlong)param_2 + 0x14) == -1) {
    FUN_1447c126c(param_1 + 0x40,&local_30,*param_2);
    uVar1 = local_30 != 0;
  }
  else {
    FUN_1447c126c(param_1 + 0x40,local_20,*param_2);
    local_30 = param_2[1];
    local_28 = *(int *)(param_2 + 2) + -1;
    if (*(int *)(param_2 + 2) == 0) {
      local_28 = 0;
    }
    uVar1 = FUN_140c20914(local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147010b28 FUN_147010b28 body=199 status=ok
// SIG undefined FUN_147010b28(void)

undefined8 FUN_147010b28(longlong param_1,longlong param_2,longlong param_3,byte param_4)

{
  int iVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  code *local_68;
  longlong *local_60;
  longlong local_58;
  code **local_50;
  int local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = ((*(int *)(param_1 + 8) + *(int *)(param_3 + 8)) - *(int *)(param_1 + 0x34)) +
          (*(int *)(param_2 + 0x34) - *(int *)(param_2 + 8));
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_3 + 0xc) < iVar1) {
    FUN_147000e7a(param_3);
  }
  local_48 = (uint)(param_4 ^ 1) << 2;
  local_60 = &local_70;
  local_50 = &local_68;
  local_68 = FUN_142aea320;
  local_30 = &local_58;
  local_38 = FUN_142aea36e;
  local_70 = param_3;
  local_58 = param_2;
  local_40 = param_1;
  FUN_1415625f6(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147010bf2 FUN_147010bf2 body=711 status=ok
// SIG undefined FUN_147010bf2(void)

void FUN_147010bf2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_1f8 [40];
  undefined1 *local_1d0;
  undefined4 local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 *local_168;
  undefined1 *local_160;
  ulonglong *local_158;
  char local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_198 = *(undefined4 *)param_2;
  uStack_194 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_190 = *(undefined4 *)(param_2 + 1);
  uStack_18c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar5 = FUN_1427b5a0c();
  if (cVar5 == '\0') {
    FUN_1446f82e2(&local_168,*(undefined4 *)(param_2 + 1),*param_2,1);
    puVar3 = local_168;
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      uVar2 = (uint)((ulonglong)local_168 >> 0x10);
      uVar8 = (uint)local_168 & 0xffff;
      lVar7 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x90);
      }
      iVar9 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (int)((ulonglong)local_168 >> 0x20) +
                               ((uint)local_168 << 0x10 | uVar8) + (uVar2 << 0x13 | uVar2 & 0xffff)
                               + (uVar8 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          if (*(undefined1 **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar9 * 0x28) == local_168)
          {
            iVar9 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
              FUN_1446f84a2(param_3,iVar9);
            }
            *(undefined1 **)(*param_3 + (longlong)iVar9 * 8) = puVar3;
            break;
          }
          iVar9 = *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar9 * 0x28 + 0x20);
        } while (iVar9 != -1);
      }
    }
  }
  else {
    local_168 = local_148;
    local_150 = '\0';
    local_158 = &local_48;
    plVar1 = (longlong *)(param_1 + 0x50);
    lVar7 = param_1 + 0x60;
    local_188 = 0x100000000;
    local_178 = 0xffffffff;
    uStack_170 = 0;
    uStack_180 = lVar7;
    local_160 = local_168;
    if (*(int *)(param_1 + 0x78) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_188);
      iVar9 = *(int *)(param_1 + 0x78);
    }
    uStack_1a0 = CONCAT44(uStack_16c,uStack_170);
    local_1a8 = local_178;
    uVar4 = local_1a8;
    local_1b8 = (undefined4)local_188;
    uStack_1b4 = local_188._4_4_;
    uStack_1b0 = (int)uStack_180;
    uStack_1ac = uStack_180._4_4_;
    local_1a8._4_4_ = (int)((ulonglong)local_178 >> 0x20);
    iVar6 = local_1a8._4_4_;
    local_1c0 = plVar1;
    if ((local_1a8._4_4_ != iVar9) || (local_1a8 = uVar4, uStack_180 != lVar7)) {
      do {
        local_1a8 = uVar4;
        puVar10 = (undefined8 *)((longlong)iVar6 * 0x28 + *local_1c0);
        local_160 = local_168;
        FUN_14005eb5c(puVar10,&local_168);
        local_1d0 = local_168;
        local_1c8 = (undefined4)((ulonglong)((longlong)local_160 - (longlong)local_168) >> 1);
        FUN_140feddc0(&local_188);
        if (((int)uStack_180 == *(int *)(param_2 + 1)) &&
           ((*(int *)(param_2 + 1) == 0 || (iVar6 = FUN_144a54874(local_188,*param_2), iVar6 == 0)))
           ) {
          iVar6 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
            FUN_1446f84a2(param_3,iVar6);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar6 * 8) = *puVar10;
        }
        local_1a8 = CONCAT44(local_1a8._4_4_,(uint)local_1a8 & ~uStack_1b4);
        FUN_1449c0562(&local_1b8);
        iVar6 = local_1a8._4_4_;
        uVar4 = local_1a8;
      } while (local_1c0 != plVar1 ||
               (CONCAT44(uStack_1ac,uStack_1b0) != lVar7 || local_1a8._4_4_ != iVar9));
    }
    if (local_150 == '\x01') {
      FUN_1400020a8(local_168);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147010eba FUN_147010eba body=121 status=ok
// SIG undefined FUN_147010eba(void)

undefined8
FUN_147010eba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_147008ecb(param_2);
  iVar2 = FUN_147008e62((longlong *)(param_1 + 400),uVar1,param_2);
  if (((iVar2 == -1) ||
      (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 400),
      plVar4 = (longlong *)(lVar3 + 0x20), plVar4 == (longlong *)0x0 || lVar3 == 0)) ||
     (lVar3 = *plVar4, lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    FUN_147010f34(lVar3,param_3,param_4,param_5);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 147010f34 FUN_147010f34 body=122 status=ok
// SIG undefined FUN_147010f34(void)

void FUN_147010f34(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149fcba10;
  local_58[0] = FUN_142aead44;
  local_30 = param_2;
  FUN_14700f04e(param_1,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147010fb0 FUN_147010fb0 body=121 status=ok
// SIG undefined FUN_147010fb0(void)

undefined8
FUN_147010fb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_147008ecb(param_2);
  iVar2 = FUN_147008e62((longlong *)(param_1 + 400),uVar1,param_2);
  if (((iVar2 == -1) ||
      (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 400),
      plVar4 = (longlong *)(lVar3 + 0x20), plVar4 == (longlong *)0x0 || lVar3 == 0)) ||
     (lVar3 = *plVar4, lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    FUN_14701102a(lVar3,param_3,param_4,param_5);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 14701102a FUN_14701102a body=122 status=ok
// SIG undefined FUN_14701102a(void)

void FUN_14701102a(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149fcba30;
  local_58[0] = FUN_142aeadca;
  local_30 = param_2;
  FUN_14700f04e(param_1,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470110a6 FUN_1470110a6 body=329 status=ok
// SIG undefined FUN_1470110a6(void)

undefined8
FUN_1470110a6(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = FUN_147008ecb(param_2);
  iVar8 = FUN_147008e62((longlong *)(param_1 + 400),uVar7,param_2);
  if (((iVar8 == -1) ||
      (lVar9 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 400),
      plVar10 = (longlong *)(lVar9 + 0x20), plVar10 == (longlong *)0x0 || lVar9 == 0)) ||
     (lVar9 = *plVar10, lVar9 == 0)) {
    uVar11 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1470111f2(lVar9,&local_48,param_4,param_5);
    iVar8 = (int)param_3[1] + (int)uStack_40;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
      FUN_14701d926(param_3);
    }
    lVar9 = local_48;
    if ((int)uStack_40 != 0) {
      lVar12 = (longlong)(int)uStack_40;
      lVar13 = 0;
      do {
        puVar2 = *(undefined4 **)(lVar9 + lVar13);
        iVar8 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
          FUN_14701d986(param_3,iVar8);
        }
        lVar3 = *param_3;
        uVar7 = *puVar2;
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        uVar11 = *(undefined8 *)(puVar2 + 6);
        puVar1 = (undefined8 *)(lVar3 + 0x10 + (longlong)iVar8 * 0x20);
        *puVar1 = *(undefined8 *)(puVar2 + 4);
        puVar1[1] = uVar11;
        puVar2 = (undefined4 *)(lVar3 + (longlong)iVar8 * 0x20);
        *puVar2 = uVar7;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        lVar13 = lVar13 + 8;
      } while (lVar12 * 8 != lVar13);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
    uVar11 = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1470111f2 FUN_1470111f2 body=331 status=ok
// SIG undefined FUN_1470111f2(void)

void FUN_1470111f2(longlong param_1,longlong *param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  char *local_a8;
  longlong local_98;
  byte local_89;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  byte *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0x58);
  local_98 = param_1;
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar6 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar3 + lVar6);
      local_89 = 0;
      if (((((char)param_3 == '\x0f') && (*param_4 == '\0')) && (param_4[1] == '\0')) &&
         (*(int *)(param_4 + 0x18) == 0)) {
        local_89 = 1;
LAB_147011266:
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14700a186(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
      }
      else {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_149fcba50;
        local_60 = &local_89;
        local_88[0] = &LAB_142aeae90;
        local_a8 = param_4;
        FUN_147014256(uVar4,local_88,local_98,param_3);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar5 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar5 = &local_68;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if ((local_89 & 1) != 0) goto LAB_147011266;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14701133e FUN_14701133e body=121 status=ok
// SIG undefined FUN_14701133e(void)

undefined8
FUN_14701133e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_147008ecb(param_2);
  iVar2 = FUN_147008e62((longlong *)(param_1 + 400),uVar1,param_2);
  if (((iVar2 == -1) ||
      (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 400),
      plVar4 = (longlong *)(lVar3 + 0x20), plVar4 == (longlong *)0x0 || lVar3 == 0)) ||
     (lVar3 = *plVar4, lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    FUN_1470113b8(lVar3,param_3,param_4,param_5);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1470113b8 FUN_1470113b8 body=217 status=ok
// SIG undefined FUN_1470113b8(void)

void FUN_1470113b8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      local_58 = *(undefined8 *)(lVar2 + lVar4);
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_149fcba70;
      local_88[0] = FUN_142aeaecc;
      local_98 = param_4;
      local_60 = param_2;
      FUN_147014256(local_58,local_88,param_1,param_3);
      if (local_88[0] != (code *)0x0) {
        pppuVar3 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar3 = &local_68;
        }
        (*(code *)(*pppuVar3)[2])();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147011492 FUN_147011492 body=86 status=ok
// SIG undefined FUN_147011492(void)

undefined8 FUN_147011492(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_147008ecb(param_2);
  iVar2 = FUN_147008e62((longlong *)(param_1 + 400),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 400),
     puVar4 = (undefined8 *)(lVar3 + 0x20), puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1470114e8 FUN_1470114e8 body=128 status=ok
// SIG undefined FUN_1470114e8(void)

void FUN_1470114e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149fcb9f0;
  local_58[0] = FUN_142aeacce;
  local_30 = param_2;
  FUN_14700f04e(param_1,local_58,0xf,param_3);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701156a FUN_14701156a body=272 status=ok
// SIG undefined FUN_14701156a(void)

void FUN_14701156a(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_14700a3ca(param_1 + 0x20,0);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (0x80 < *(uint *)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x7c) = 0x80;
      FUN_1446efbd8(param_1 + 0x60,0);
    }
  }
  if ((param_2 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_14700a3ca(param_1 + 0x30,0);
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (0x80 < *(uint *)(param_1 + 0xbc)) {
      *(undefined4 *)(param_1 + 0xbc) = 0x80;
      FUN_1446efbd8(param_1 + 0xa0,0);
    }
  }
  if ((param_2 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_14700a3ca(param_1 + 0x40,0);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (0x80 < *(uint *)(param_1 + 0x9c)) {
      *(undefined4 *)(param_1 + 0x9c) = 0x80;
      FUN_1446efbd8(param_1 + 0x80,0);
      return;
    }
  }
  return;
}



// FUNCTION 14701167a FUN_14701167a body=188 status=ok
// SIG undefined FUN_14701167a(void)

undefined8 FUN_14701167a(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_3 & 1) != 0) {
    cVar1 = FUN_142ae443c(&local_20,param_1 + 0x20,
                          CONCAT71((int7)(param_3 >> 8),*(undefined1 *)(param_1 + 0xc0)) &
                          0xffffffffffffff01);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_147011719;
  }
  if ((param_3 & 4) != 0) {
    cVar1 = FUN_142ae443c(&local_20,param_1 + 0x30,(*(uint *)(param_1 + 0xc0) & 2) >> 1);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_147011719;
  }
  if ((param_3 & 2) != 0) {
    cVar1 = FUN_142ae443c(&local_20,param_1 + 0x40,(*(uint *)(param_1 + 0xc0) & 4) >> 2);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_147011719;
  }
  uVar2 = 0;
LAB_147011719:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147011738 FUN_147011738 body=204 status=ok
// SIG undefined FUN_147011738(void)

void FUN_147011738(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  if ((param_3 & 1) == 0) {
    if ((param_3 & 4) == 0) {
      if ((param_3 & 2) == 0) {
        return;
      }
      lVar4 = param_1 + 0x80;
      lVar1 = param_1 + 0x40;
      puVar5 = &LAB_1470149e8;
      uVar2 = (undefined1)((*(uint *)(param_1 + 0xc0) & 4) >> 2);
      uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),8);
    }
    else {
      lVar4 = param_1 + 0xa0;
      lVar1 = param_1 + 0x30;
      puVar5 = &LAB_1470149e2;
      uVar2 = (undefined1)((*(uint *)(param_1 + 0xc0) & 2) >> 1);
      uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),0x80);
    }
    FUN_147014853(param_2,param_4,uVar3,lVar1,lVar4,puVar5,uVar2);
  }
  else {
    FUN_1470146ca(param_2,param_4,CONCAT71((int7)((ulonglong)(param_1 + 0x60) >> 8),7),
                  param_1 + 0x20,param_1 + 0x60,&LAB_14701484e,*(byte *)(param_1 + 0xc0) & 1);
  }
  return;
}



// FUNCTION 147011804 FUN_147011804 body=115 status=ok
// SIG undefined FUN_147011804(void)

void FUN_147011804(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147014bf6(param_2,param_1 + 0x20,param_1 + 0x60,
                CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(param_1 + 0xc0)) &
                0xffffffffffffff01);
  FUN_147014d2a(param_2,param_1 + 0x30,param_1 + 0xa0,(*(uint *)(param_1 + 0xc0) & 2) >> 1);
  FUN_147014d2a(param_2,param_1 + 0x40,param_1 + 0x80,(*(uint *)(param_1 + 0xc0) & 4) >> 2);
  return;
}



// FUNCTION 147011878 FUN_147011878 body=495 status=ok
// SIG undefined FUN_147011878(void)

void FUN_147011878(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  void *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149fca9d8);
  FUN_147015612(param_2,param_1);
  local_78 = 0;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  FUN_142ae44d8(&local_58,param_1 + 0x20,param_1 + 0x60,5);
  lVar4 = 0;
  if (*(char *)(param_5 + 2) != '\0') {
    lVar4 = param_1 + 0xa0;
  }
  if (*(char *)(param_5 + 2) == '\x01') {
    local_68 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 0x38);
    pvVar3 = *(void **)(param_1 + 0x30);
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_60 = (ulonglong)uVar2;
    }
    else {
      FUN_14702009e(&local_68,uVar2);
      memcpy(local_68,pvVar3,(longlong)(int)uVar2 << 3);
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
  }
  local_78 = 0;
  FUN_142ae44d8(&local_58,&local_68,lVar4,1);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  cVar1 = *(char *)(param_5 + 3);
  if (cVar1 == '\x01') {
    local_68 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 0x48);
    pvVar3 = *(void **)(param_1 + 0x40);
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_60 = (ulonglong)uVar2;
    }
    else {
      FUN_14702009e(&local_68,uVar2);
      memcpy(local_68,pvVar3,(longlong)(int)uVar2 << 3);
    }
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
  }
  lVar4 = 0;
  if (cVar1 != '\0') {
    lVar4 = param_1 + 0x80;
  }
  local_78 = 0;
  FUN_142ae44d8(&local_58,&local_68,lVar4,1);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 1;
  FUN_142ae44d8(&local_58,param_1 + 0x50,0,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147011a68 FUN_147011a68 body=61 status=ok
// SIG undefined FUN_147011a68(void)

void FUN_147011a68(longlong *param_1)

{
  if (param_1[6] != 0) {
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



// FUNCTION 147011aa6 FUN_147011aa6 body=429 status=ok
// SIG undefined FUN_147011aa6(void)

void FUN_147011aa6(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1456d01c0();
  FUN_1456d00a8(param_2,param_1 + 0x58);
  FUN_140124ae4(param_2,param_1 + 0xf8);
  FUN_1456d0134(param_2,param_1 + 0x108);
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  local_40 = 0;
  FUN_1408383eb(param_2);
  lVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (*(char *)(param_3 + 1) == '\x01') {
    FUN_1470212ec(param_2,param_1 + 0x158);
    FUN_1456d0134(param_2,param_1 + 0x168);
    FUN_1456d0134(param_2,param_1 + 0x1b8);
  }
  lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  local_40 = lVar3 - lVar2;
  (**(code **)(*param_2 + 0x1a0))(param_2,uVar1);
  FUN_1408383eb(param_2,&local_40);
  (**(code **)(*param_2 + 0x1a0))(param_2,lVar3);
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  local_40 = 0;
  FUN_1408383eb(param_2,&local_40);
  lVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (*(char *)(param_3 + 4) == '\x01') {
    FUN_1470215fc(param_2,param_1 + 0x208);
  }
  lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  local_40 = lVar3 - lVar2;
  (**(code **)(*param_2 + 0x1a0))(param_2,uVar1);
  FUN_1408383eb(param_2,&local_40);
  (**(code **)(*param_2 + 0x1a0))(param_2,lVar3);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147011c54 FUN_147011c54 body=116 status=ok
// SIG undefined FUN_147011c54(void)

undefined8 * FUN_147011c54(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  *param_1 = &PTR_FUN_149fcb0a0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_140996f94(param_1,1);
  cVar1 = FUN_1470172f0(param_1);
  if (cVar1 == '\0') {
    param_1[0x12] = &DAT_14c99df70;
    FUN_14572541c(param_1);
  }
  return param_1;
}



// FUNCTION 147011cc8 FUN_147011cc8 body=1368 status=ok
// SIG undefined FUN_147011cc8(void)

void FUN_147011cc8(longlong param_1,longlong *param_2,int *param_3,byte *param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_188 [32];
  longlong local_168;
  ulonglong *local_160;
  undefined8 local_154;
  uint local_14c;
  ulonglong *local_148;
  int local_140;
  int local_134;
  undefined8 *local_130;
  ulonglong **local_128;
  undefined1 local_11c [4];
  ulonglong local_118 [2];
  undefined1 local_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar4 = *param_3;
  local_134 = 0;
  puVar10 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar10 + 1;
  if ((int *)puVar10[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_134,4);
    }
    else {
      FUN_14572512c(param_2,&local_134);
    }
  }
  else {
    local_134 = *(int *)*puVar10;
    *puVar10 = (ulonglong)piVar1;
  }
  iVar8 = local_134;
  uVar15 = (ulonglong)local_134;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar15;
  uVar9 = SUB168(auVar6 * ZEXT816(0x70),0);
  uVar13 = 0xffffffffffffffff;
  if (SUB168(auVar6 * ZEXT816(0x70),8) == 0) {
    uVar13 = uVar9 | 8;
  }
  puVar10 = (ulonglong *)FUN_144a7d36f(uVar13);
  *puVar10 = uVar15;
  puVar10 = puVar10 + 1;
  if (iVar8 != 0) {
    puVar12 = puVar10;
    do {
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined4 *)(puVar12 + 6) = 0xffffffff;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0x200000000;
      *(undefined8 *)((longlong)puVar12 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x44) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x54) = 0;
      puVar12 = puVar12 + 0xe;
    } while (puVar12 != puVar10 + uVar15 * 0xe);
  }
  iVar5 = *(int *)(param_1 + 0x238);
  *(uint *)(param_1 + 0x238) = iVar5 + 1U;
  local_168 = param_1;
  if (*(uint *)(param_1 + 0x23c) < iVar5 + 1U) {
    FUN_1407de694((longlong *)(param_1 + 0x230),iVar5);
  }
  *(ulonglong **)(*(longlong *)(param_1 + 0x230) + (longlong)iVar5 * 8) = puVar10;
  if (iVar4 == 0x13) {
    puVar12 = puVar10;
    if (iVar8 != 0) {
      do {
        FUN_1407de492(puVar12,param_2,&LAB_14701e460);
        uVar9 = uVar9 - 0x70;
        puVar12 = puVar12 + 0xe;
      } while (uVar9 != 0);
    }
  }
  else {
    puVar12 = puVar10;
    if (iVar8 != 0) {
      do {
        FUN_1407de7f6(puVar12,param_2,iVar4,&LAB_14701e466);
        uVar9 = uVar9 - 0x70;
        puVar12 = puVar12 + 0xe;
      } while (uVar9 != 0);
    }
  }
  lVar14 = local_168;
  local_148 = puVar10;
  local_140 = iVar8;
  FUN_1407dea4a(local_168,&local_148,param_4);
  if (iVar4 < 7) {
    FUN_14701236e(lVar14,param_2,*param_4,iVar4);
  }
  else {
    FUN_1408383eb(param_2,local_118);
    lVar11 = (**(code **)(*param_2 + 0x28))(param_2);
    lVar11 = lVar11 + local_118[0];
    bVar7 = *param_4;
    if (bVar7 == 1) {
      FUN_145747c0e(lVar14,param_2);
      bVar7 = *param_4;
    }
    if (((bVar7 & 1) == 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) {
      (**(code **)(*param_2 + 0x1a0))(param_2,lVar11);
    }
  }
  local_14c = 0;
  puVar10 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar10 + 1;
  if ((uint *)puVar10[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_14c,4);
    }
    else {
      FUN_14572512c(param_2,&local_14c);
    }
  }
  else {
    local_14c = *(uint *)*puVar10;
    *puVar10 = (ulonglong)puVar2;
  }
  uVar16 = local_14c;
  if (0 < (int)local_14c) {
    local_d0 = 0;
    local_c8 = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    local_108 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_c4 = 0xffffffff00000080;
    local_bc = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0xffffffff;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    puVar10 = (ulonglong *)0x0;
    if (param_4[1] == 1) {
      uVar13 = (ulonglong)local_14c;
      puVar12 = (ulonglong *)FUN_144a7d36f();
      lVar14 = local_168;
      *puVar12 = uVar13;
      puVar10 = puVar12 + 1;
      lVar11 = 0;
      do {
        *(undefined8 *)((longlong)puVar12 + lVar11 + 0x50) = 0;
        *(undefined4 *)((longlong)puVar12 + lVar11 + 0x58) = 0;
        puVar3 = (undefined8 *)((longlong)puVar12 + lVar11 + 8);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)((longlong)puVar12 + lVar11 + 0x18) = 0;
        puVar3 = (undefined8 *)((longlong)puVar12 + lVar11 + 0x30);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined8 *)((longlong)puVar12 + lVar11 + 0x5c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)puVar12 + lVar11 + 100) = 0;
        *(undefined8 *)((longlong)puVar12 + lVar11 + 0x70) = 0;
        *(undefined4 *)((longlong)puVar12 + lVar11 + 0x78) = 0;
        puVar3 = (undefined8 *)((longlong)puVar12 + lVar11 + 0x80);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)((longlong)puVar12 + lVar11 + 0x90);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)((longlong)puVar12 + lVar11 + 0xa0) = 0xffffffff;
        *(undefined8 *)((longlong)puVar12 + lVar11 + 0xa8) = 0;
        *(undefined4 *)((longlong)puVar12 + lVar11 + 0xb0) = 0;
        *(undefined4 *)((longlong)puVar12 + lVar11 + 0xb8) = 0;
        *(undefined1 *)((longlong)puVar12 + lVar11 + 0xbc) = 0;
        lVar11 = lVar11 + 0xb8;
      } while (uVar13 * 0xb8 - lVar11 != 0);
      iVar8 = *(int *)(local_168 + 600);
      *(uint *)(local_168 + 600) = iVar8 + 1U;
      if (*(uint *)(local_168 + 0x25c) < iVar8 + 1U) {
        FUN_14701e46c(local_168 + 0x250,iVar8);
        uVar16 = local_14c;
      }
      *(ulonglong **)(*(longlong *)(lVar14 + 0x250) + (longlong)iVar8 * 8) = puVar10;
      if ((uint)(*(int *)(lVar14 + 0x1e8) - *(int *)(lVar14 + 0x214)) < uVar16) {
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar16);
        }
        lVar14 = local_168 + 0x1e0;
        FUN_14701e4f2(lVar14,uVar16);
        iVar8 = 1;
        if (3 < uVar16) {
          uVar16 = (uVar16 | 1) + 0xe;
          iVar8 = 0x1f;
          if (uVar16 != 0) {
            for (; uVar16 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          iVar8 = 1 << ((byte)iVar8 & 0x1f);
        }
        if ((*(int *)(local_168 + 0x228) == 0) || (*(int *)(local_168 + 0x228) < iVar8)) {
          *(int *)(local_168 + 0x228) = iVar8;
          FUN_14701b4b2(lVar14);
        }
      }
    }
    if (0 < (int)local_14c) {
      local_168 = local_168 + 0x1e0;
      lVar14 = 0;
      do {
        local_154 = 0;
        (**(code **)(*param_2 + 0x160))(param_2,&local_154);
        local_160 = local_118;
        if (param_4[1] == 1) {
          local_128 = &local_160;
          local_160 = puVar10;
          local_130 = &local_154;
          FUN_14701e68e(local_168,local_11c,&local_130);
        }
        if (iVar4 < 0x13) {
          FUN_1468585a8(local_160,param_2,iVar4);
        }
        else {
          FUN_1468583ba();
        }
        lVar14 = lVar14 + 1;
        puVar10 = puVar10 + 0x17;
      } while (lVar14 < (int)local_14c);
    }
    FUN_146ffe382(local_118);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147012222 FUN_147012222 body=254 status=ok
// SIG undefined FUN_147012222(void)

void FUN_147012222(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149fca9d8);
  FUN_147015612(param_2,param_1);
  local_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  FUN_142ae4c20(&local_48,param_1 + 0x20,param_1 + 0x60,5);
  iVar1 = FUN_1448332aa(param_2,&DAT_149fca9d8);
  if (iVar1 < 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + 0xa0;
  }
  FUN_142ae4c20(&local_48,param_1 + 0x30,lVar2,iVar1 >= 0);
  FUN_142ae4c20(&local_48,param_1 + 0x40,param_1 + 0x80,1);
  FUN_142ae4c20(&local_48,param_1 + 0x50,0,0);
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 0x10;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147012322 FUN_147012322 body=75 status=ok
// SIG undefined FUN_147012322(void)

void FUN_147012322(longlong *param_1)

{
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



// FUNCTION 14701236e FUN_14701236e body=871 status=ok
// SIG undefined FUN_14701236e(void)

void FUN_14701236e(longlong param_1,longlong *param_2,byte param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  byte local_180;
  undefined4 local_178;
  undefined4 local_170;
  ulonglong *local_160;
  undefined4 local_154;
  ulonglong *local_150;
  uint local_144;
  undefined8 local_140;
  ulonglong **local_138;
  undefined1 local_12c [4];
  ulonglong local_128 [14];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_144 = 0;
  puVar6 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar6 + 1;
  local_154 = param_4;
  if ((uint *)puVar6[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_144,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    local_144 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
  }
  uVar9 = local_144;
  local_b8 = 0;
  local_b0 = 0x8000000000;
  local_128[0] = 0;
  local_128[1] = 0;
  local_128[2] = 0;
  local_128[3] = 0;
  local_128[4] = 0;
  local_128[5] = 0;
  local_128[6] = 0;
  local_128[7] = 0;
  local_128[8] = 0;
  local_128[9] = 0;
  local_128[10] = 0;
  local_128[0xb] = 0;
  local_98 = 0;
  local_90 = 0x8000000000;
  local_78 = 0;
  local_70 = 0x8000000000;
  local_68 = 0xf;
  local_160 = (ulonglong *)0x0;
  if ((0 < (int)local_144 & param_3) == 1) {
    uVar7 = (ulonglong)local_144;
    lVar10 = uVar7 * 200;
    puVar6 = (ulonglong *)FUN_144a7d36f(lVar10 + 8);
    *puVar6 = uVar7;
    local_160 = puVar6 + 1;
    lVar8 = 0;
    do {
      *(undefined8 *)((longlong)puVar6 + lVar8 + 0x78) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar8 + 0x80) = 0x8000000000;
      puVar2 = (undefined8 *)((longlong)puVar6 + lVar8 + 8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar6 + lVar8 + 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar6 + lVar8 + 0x28);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar6 + lVar8 + 0x38);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar6 + lVar8 + 0x48);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar6 + lVar8 + 0x58);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)((longlong)puVar6 + lVar8 + 0x98) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar8 + 0xa0) = 0x8000000000;
      *(undefined8 *)((longlong)puVar6 + lVar8 + 0xb8) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar8 + 0xc0) = 0x8000000000;
      *(uint *)((longlong)puVar6 + lVar8 + 200) =
           *(uint *)((longlong)puVar6 + lVar8 + 200) & 0xffffffe0 | 0xf;
      lVar8 = lVar8 + 200;
    } while (lVar10 - lVar8 != 0);
    iVar5 = *(int *)(param_1 + 0x248);
    *(uint *)(param_1 + 0x248) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x24c) < iVar5 + 1U) {
      FUN_14700a186(param_1 + 0x240,iVar5);
      uVar9 = local_144;
    }
    *(ulonglong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar5 * 8) = local_160;
    if ((uint)(*(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x1c4)) < uVar9) {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar9);
      }
      FUN_14701bd26(param_1 + 400,uVar9);
      iVar5 = 1;
      if (3 < uVar9) {
        uVar9 = (uVar9 | 1) + 0xe;
        iVar5 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 1 << ((byte)iVar5 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x1d8) == 0) || (*(int *)(param_1 + 0x1d8) < iVar5)) {
        *(int *)(param_1 + 0x1d8) = iVar5;
        FUN_14701b2f4(param_1 + 400);
      }
    }
  }
  local_140._0_4_ = 0;
  FUN_146ff8ac0(&local_140,7);
  uVar3 = (undefined4)local_140;
  local_140 = (ulonglong *)((ulonglong)local_140._4_4_ << 0x20);
  FUN_146ff8ac0(&local_140,6);
  uVar7 = (ulonglong)local_144;
  if (0 < (int)local_144) {
    uVar4 = (undefined4)local_140;
    lVar8 = 0;
    puVar6 = local_160;
    do {
      local_150 = local_128;
      if (param_3 != 0) {
        local_150 = puVar6;
      }
      local_170 = uVar4;
      local_178 = uVar3;
      local_188 = (undefined4)uVar7;
      local_180 = param_3;
      FUN_1470126d8(local_150,param_2,local_154,local_160);
      if (param_3 != 0) {
        local_140 = local_150;
        local_138 = &local_150;
        FUN_14701bec8(param_1 + 400,local_12c,&local_140);
      }
      lVar8 = lVar8 + 1;
      uVar7 = (ulonglong)(int)local_144;
      puVar6 = puVar6 + 0x19;
    } while (lVar8 < (longlong)uVar7);
  }
  FUN_14700e1a8(local_128);
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470126d8 FUN_1470126d8 body=1255 status=ok
// SIG undefined FUN_1470126d8(void)

void FUN_1470126d8(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                  undefined4 param_5,char param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  char local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149fca9d8);
  FUN_147015612(param_2,param_1);
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
    }
    else {
      FUN_14572512c(param_2,&local_50);
    }
  }
  else {
    local_50 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_54,4);
    }
    else {
      FUN_14572512c(param_2,&local_54);
    }
  }
  else {
    local_54 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
    }
    else {
      FUN_14572512c(param_2,&local_58);
    }
  }
  else {
    local_58 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  if (param_3 < 5) {
    local_5c = 0;
  }
  else {
    puVar4 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_5c,4);
      }
      else {
        FUN_14572512c(param_2,&local_5c);
      }
    }
    else {
      local_5c = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
  }
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_60,4);
    }
    else {
      FUN_14572512c(param_2,&local_60);
    }
  }
  else {
    local_60 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  iVar5 = local_50 + local_4c;
  if (-1 < iVar5) {
    lVar6 = param_1 + 0x20;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != iVar5) {
      FUN_14700a3ca(lVar6);
    }
    iVar5 = 0;
    if (param_6 != '\0') {
      iVar5 = local_54;
    }
    if (-1 < iVar5) {
      lVar2 = param_1 + 0x30;
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (*(int *)(param_1 + 0x3c) != iVar5) {
        FUN_14700a3ca(lVar2);
      }
      iVar5 = 0;
      if (param_6 != '\0') {
        iVar5 = local_5c + local_58;
      }
      if (-1 < iVar5) {
        lVar3 = param_1 + 0x40;
        *(undefined4 *)(param_1 + 0x48) = 0;
        if (*(int *)(param_1 + 0x4c) != iVar5) {
          FUN_14700a3ca(lVar3);
        }
        local_88 = lVar2;
        if (local_60 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_60);
        }
        *(undefined4 *)(param_1 + 0x58) = 0;
        if (*(int *)(param_1 + 0x5c) != local_60) {
          FUN_14700a3ca(param_1 + 0x50);
        }
        local_68 = param_5;
        local_90 = 1;
        local_98 = 1;
        local_a0 = param_7;
        local_a8 = 5;
        local_80 = param_1 + 0x50;
        local_78 = param_2;
        local_70 = param_4;
        FUN_142ae52be(&local_78,local_4c,lVar6,param_1 + 0x60);
        local_90 = 1;
        local_a0 = param_8;
        local_a8 = 5;
        local_98 = 0;
        FUN_142ae52be(&local_78,local_50,lVar6,param_1 + 0x60);
        iVar5 = FUN_1448332aa(param_2,&DAT_149fca9d8);
        if (iVar5 < 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = param_1 + 0xa0;
        }
        local_90 = param_6;
        local_98 = 1;
        local_a0 = 0;
        local_a8 = (uint)(iVar5 >= 0);
        FUN_142ae52be(&local_78,local_54,local_88,lVar6);
        local_90 = param_6;
        local_98 = 1;
        local_a0 = 0;
        local_a8 = 1;
        FUN_142ae52be(&local_78,local_58,lVar3,param_1 + 0x80);
        local_90 = param_6;
        local_98 = 1;
        local_a0 = 1;
        local_a8 = 1;
        FUN_142ae52be(&local_78,local_5c,lVar3,param_1 + 0x80);
        local_90 = 1;
        local_98 = 1;
        local_a0 = 0;
        local_a8 = 0;
        FUN_142ae52be(&local_78,local_60,local_80,0);
        *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 0x10;
        if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 147012bc2 FUN_147012bc2 body=842 status=ok
// SIG undefined FUN_147012bc2(void)

longlong * FUN_147012bc2(longlong param_1,longlong *param_2,longlong **param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong **local_f0;
  longlong **local_e8;
  longlong local_e0;
  code *local_d8;
  longlong ***local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  code **local_b0;
  code *local_a8;
  code ***local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = param_2;
  if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
    uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_4 + 7;
    if ((longlong *)param_4[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_4[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_4;
      iVar9 = iVar4;
      do {
        if (*(longlong **)(lVar1 + (longlong)iVar9 * 0x18) == param_2) goto LAB_147012e6d;
        iVar9 = *(int *)(lVar1 + (longlong)iVar9 * 0x18 + 0x10);
      } while (iVar9 != -1);
    }
  }
  local_c8 = (longlong *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_c0 = param_2;
  do {
    local_f8 = (longlong **)*local_c0;
    if ((int)uStack_90 != local_64) {
      uVar2 = (uint)((ulonglong)local_f8 >> 0x10);
      uVar7 = (uint)local_f8 & 0xffff;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_60;
      }
      for (iVar4 = *(int *)(puVar5 + (ulonglong)
                                     (local_50 - 1U &
                                     (int)((ulonglong)local_f8 >> 0x20) +
                                     ((uint)local_f8 << 0x10 | uVar7) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
          iVar4 != -1; iVar4 = *(int *)((longlong)iVar4 * 0x10 + local_98 + 8)) {
        if (*(longlong ***)(local_98 + (longlong)iVar4 * 0x10) == local_f8) goto LAB_147012eb6;
      }
    }
    FUN_144869592(&local_98,&local_a8,&local_f8,0);
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar1 = *local_c0;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar7 = (uint)lVar1 & 0xffff;
      lVar8 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar8 = param_1 + 0x88;
      }
      iVar4 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(param_1 + 0x98) - 1U &
                               (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x28) == lVar1) {
            local_f8 = &local_c0;
            local_e8 = &local_c8;
            local_d8 = FUN_142aea6c6;
            local_b0 = &local_d8;
            local_a0 = &local_b0;
            local_a8 = FUN_146ffe3f4;
            local_f0 = param_3;
            local_e0 = param_1;
            local_d0 = &local_f8;
            FUN_146ff8c62(param_1,*local_c0,&local_a8);
            goto LAB_147012df3;
          }
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x28 + 0x20);
        } while (iVar4 != -1);
      }
    }
    local_c8 = local_c0;
LAB_147012df3:
  } while (local_c8 == (longlong *)0x0);
LAB_147012eb6:
  local_f8 = &local_b8;
  local_f0 = &local_c8;
  FUN_14701e9b6(param_4,&local_a8);
  plVar3 = local_c8;
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  goto LAB_147012e85;
  while (iVar4 = *(int *)(puVar6 + 2), iVar4 != -1) {
LAB_147012e6d:
    puVar6 = (undefined8 *)(lVar1 + (longlong)iVar4 * 0x18);
    if ((longlong *)*puVar6 == param_2) goto LAB_147012e81;
  }
  puVar6 = (undefined8 *)0x0;
LAB_147012e81:
  plVar3 = (longlong *)puVar6[1];
LAB_147012e85:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147012f0e FUN_147012f0e body=203 status=ok
// SIG undefined FUN_147012f0e(void)

void FUN_147012f0e(longlong param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((param_2 & 1) != 0) {
    if ((param_3 != 0) && ((*(byte *)(param_1 + 0xc0) & 1) == 0)) {
      FUN_147015739(param_1 + 0x20,param_1 + 0x60);
    }
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffe | (uint)param_3;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = 0;
    if ((param_3 != 0) && (uVar1 = 2, (*(byte *)(param_1 + 0xc0) & 2) == 0)) {
      FUN_147015a98(param_1 + 0x30,param_1 + 0xa0);
    }
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffd | uVar1;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = 0;
    if ((param_3 != 0) && (uVar1 = 4, (*(byte *)(param_1 + 0xc0) & 4) == 0)) {
      FUN_147015a98(param_1 + 0x40,param_1 + 0x80);
    }
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffffb | uVar1;
  }
  return;
}



// FUNCTION 147012fda FUN_147012fda body=66 status=ok
// SIG undefined FUN_147012fda(void)

void FUN_147012fda(longlong param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != '\0') && (uVar1 = 8, (*(byte *)(param_1 + 0xc0) & 8) == 0)) {
    FUN_147015e0a(param_1 + 0x50,0);
  }
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffff7 | uVar1;
  return;
}



// FUNCTION 14701301c FUN_14701301c body=277 status=ok
// SIG undefined FUN_14701301c(void)

undefined8 FUN_14701301c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    uVar5 = ((uint)lVar2 << 0x10 | uVar6) + (int)((ulonglong)lVar2 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar6 >> 4);
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar9 +
                    ((longlong)
                     (int)((uVar5 >> 2) +
                           ((uint)lVar3 << 0x10 | uVar8) + (int)((ulonglong)lVar3 >> 0x20) +
                           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4) + uVar5 * 0x40 +
                           0x9e3779b9 ^ uVar5) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar9 = *(longlong **)(*param_1 + (longlong)iVar1 * 0x10);
        if (plVar9 == (longlong *)0x0) {
          lVar10 = 0;
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar9;
          lVar10 = plVar9[2];
        }
        if ((lVar7 == lVar2) && (lVar10 == lVar3)) {
          FUN_14701f084();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147013132 FUN_147013132 body=132 status=ok
// SIG undefined FUN_147013132(void)

void FUN_147013132(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_14701f27a(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1470131b6 FUN_1470131b6 body=1085 status=ok
// SIG undefined FUN_1470131b6(void)

void FUN_1470131b6(longlong *param_1,longlong *param_2,uint *param_3,char param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined1 auStack_c8 [40];
  int local_a0;
  uint local_9c;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  longlong *local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_5 = 0;
  *param_6 = 0;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uVar6 = (uint)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x10);
  uVar2 = (uint)((ulonglong)*(undefined8 *)param_3 >> 0x10);
  uVar2 = (local_58 << 0x10 | local_58 & 0xffff) + uStack_54 + (uVar2 << 0x13 | uVar2 & 0xffff) +
          ((local_58 & 0xffff) >> 4);
  iVar3 = FUN_1447fff98(param_1,(uVar2 >> 2) +
                                (uStack_50 << 0x10 | uStack_50 & 0xffff) + uStack_4c +
                                (uVar6 << 0x13 | uVar6 & 0xffff) + ((uStack_50 & 0xffff) >> 4) +
                                uVar2 * 0x40 + 0x9e3779b9 ^ uVar2);
  if ((iVar3 == -1) || ((longlong)iVar3 * 0x10 + *param_1 == 0)) goto LAB_1470132a3;
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    lVar5 = *param_2;
    uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar2 = (uint)lVar5 & 0xffff;
    plVar4 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x12];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x13] - 1U &
                    (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar2) +
                    (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(param_1[10] + (longlong)iVar3 * 0x28);
        if (*plVar4 == lVar5) goto LAB_147013342;
        iVar3 = (int)plVar4[4];
      } while (iVar3 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_147013342:
  plVar13 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  local_60 = param_2;
  FUN_1470135f4(plVar13);
  iVar3 = (int)plVar13[2];
  if (iVar3 == 0) {
    FUN_14701f37a(param_1 + 10);
  }
  if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
    lVar5 = param_2[1];
    uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar2 = (uint)lVar5 & 0xffff;
    plVar4 = param_1 + 0x1b;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x1c];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x1d] - 1U &
                    (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar2) +
                    (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar2 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar8 = param_1[0x14] + (longlong)iVar7 * 0x20;
        if (*(longlong *)(param_1[0x14] + (longlong)iVar7 * 0x20) == lVar5) goto LAB_1470133db;
        iVar7 = *(int *)(lVar8 + 0x18);
      } while (iVar7 != -1);
    }
  }
  lVar8 = 0;
LAB_1470133db:
  lVar5 = lVar8 + 8;
  if (lVar8 == 0) {
    lVar5 = 0;
  }
  FUN_147013698(lVar5);
  if ((int)param_1[0x1f] == *(int *)((longlong)param_1 + 0x124)) {
LAB_147013402:
    lVar9 = 0;
  }
  else {
    lVar5 = param_2[4];
    lVar8 = param_2[5];
    uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar11 = (uint)lVar5 & 0xffff;
    local_9c = uVar11 >> 4;
    uVar2 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar12 = (uint)lVar8 & 0xffff;
    uVar6 = (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar11) +
            (uVar6 << 0x13 | uVar6 & 0xffff) + local_9c;
    plVar4 = param_1 + 0x25;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x26];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x27] - 1U &
                    ((uVar6 >> 2) +
                     ((uint)lVar8 << 0x10 | uVar12) + (int)((ulonglong)lVar8 >> 0x20) +
                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^
                    uVar6)) * 4);
    local_a0 = iVar3;
    if (iVar7 != -1) {
      lVar1 = param_1[0x1e];
      do {
        lVar10 = (longlong)iVar7 * 0x68;
        lVar9 = lVar1 + lVar10;
        if ((*(longlong *)(lVar1 + lVar10) == lVar5) && (*(longlong *)(lVar1 + 8 + lVar10) == lVar8)
           ) goto LAB_147013404;
        iVar7 = *(int *)(lVar9 + 0x60);
      } while (iVar7 != -1);
      goto LAB_147013402;
    }
    lVar9 = 0;
  }
LAB_147013404:
  lVar5 = lVar9 + 0x10;
  if (lVar9 == 0) {
    lVar5 = 0;
  }
  FUN_147013132(lVar5,local_60);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_14701301c(param_1);
  if (iVar3 == 0) {
    if (param_4 != '\0') {
      local_98 = *param_2;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      FUN_14700f290(param_1);
    }
    FUN_147013734(param_1,*param_2);
    *param_6 = 1;
  }
  if ((int)param_1[0x47] == 0) {
    FUN_14128b0c2(param_2);
    FUN_1400020a8(param_2);
  }
  FUN_14700f48a(param_1 + 0x4e);
  *(int *)(param_1 + 0x4c) = (int)param_1[0x4c] + -1;
  *param_5 = 1;
LAB_1470132a3:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470135f4 FUN_1470135f4 body=164 status=ok
// SIG undefined FUN_1470135f4(void)

void FUN_1470135f4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar4 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    iVar3 = 1;
    lVar6 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar6) == *param_2) {
        if (iVar3 == 0) {
          return;
        }
        iVar3 = iVar1 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          memmove((void *)(lVar4 + (lVar2 >> 0x20) * 8),
                  (void *)(lVar4 + (longlong)(iVar1 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar1 = *(int *)(param_1 + 0x10);
        }
        *(int *)(param_1 + 0x10) = iVar1 + -1;
        FUN_14701f2d4(param_1);
        return;
      }
      lVar2 = lVar2 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 << 3 != lVar6);
  }
  return;
}



// FUNCTION 147013698 FUN_147013698 body=156 status=ok
// SIG undefined FUN_147013698(void)

void FUN_147013698(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_14701f48a(param_1);
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return;
}



// FUNCTION 147013734 FUN_147013734 body=238 status=ok
// SIG undefined FUN_147013734(void)

void FUN_147013734(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x218;
    if (*(longlong *)(param_1 + 0x220) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x220);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x228) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return;
          }
          lVar3 = plVar1[1];
          if (lVar3 == 0) {
            return;
          }
          FUN_14701f8a2();
          *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + -1;
          if (*(int *)(param_1 + 600) != 0) {
            return;
          }
          FUN_146ffe382(lVar3);
          FUN_1400020a8(lVar3);
          return;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 147013822 FUN_147013822 body=170 status=ok
// SIG undefined FUN_147013822(void)

longlong FUN_147013822(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x218;
    if (*(longlong *)(param_1 + 0x220) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x220);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x228) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            return plVar1[1];
          }
          return 0;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1470138cc FUN_1470138cc body=150 status=ok
// SIG undefined FUN_1470138cc(void)

undefined8 FUN_1470138cc(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar6;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x228) == 0) {
    uVar3 = 0;
  }
  else {
    uVar6 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0x218;
    if (*(longlong *)(param_1 + 0x220) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x220);
    }
    plVar5 = (longlong *)
             (lVar4 + (longlong)
                      (int)(*(int *)(param_1 + 0x228) - 1U &
                           ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                           (int)((ulonglong)param_2 >> 0x20) + (uVar6 << 0x13 | uVar6) +
                           (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    do {
      lVar4 = (longlong)(int)*plVar5;
      if (lVar4 == -1) {
        return 0;
      }
      lVar2 = *(longlong *)(param_1 + 0x1e0);
      plVar1 = (longlong *)(lVar2 + lVar4 * 0x18);
      plVar5 = plVar1 + 2;
    } while (*plVar1 != param_2);
    *param_3 = param_2;
    uVar3 = *(undefined8 *)(lVar2 + lVar4 * 0x18 + 8);
  }
  return uVar3;
}



// FUNCTION 147013962 FUN_147013962 body=984 status=ok
// SIG undefined FUN_147013962(void)

void FUN_147013962(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = local_88;
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar10 = (uint)param_2 & 0xffff;
    lVar19 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x180);
    }
    iVar12 = *(int *)(lVar19 + (ulonglong)
                               (*(int *)(param_1 + 0x188) - 1U &
                               (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar10)
                               + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar12 != -1) {
      while (lVar19 = *(longlong *)(param_1 + 0x140) + (longlong)iVar12 * 0x60,
            *(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar12 * 0x60) != param_2) {
        iVar12 = *(int *)(lVar19 + 0x58);
        if (iVar12 == -1) goto LAB_147013995;
      }
      plVar18 = (longlong *)(lVar19 + 8);
      if (plVar18 == (longlong *)0x0 || lVar19 == 0) goto LAB_147013995;
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      uVar1 = lVar19 + 0x18;
      local_68 = &DAT_100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = uVar1;
      if (*(int *)(lVar19 + 0x30) == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar12 = *(int *)(lVar19 + 0x30);
      }
      local_98 = (undefined4)local_68;
      uStack_94 = local_68._4_4_;
      uStack_90 = (uint)uStack_60;
      uStack_8c = uStack_60._4_4_;
      uStack_80 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_58;
      uVar7 = local_88;
      local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_a0 = plVar18;
      if ((local_88._4_4_ == iVar12) && (uStack_60 == uVar1)) goto LAB_147013995;
      local_a8 = param_1 + 0x128;
      iVar9 = local_88._4_4_;
      local_b0 = param_3;
      local_88 = uVar7;
      do {
        if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
          lVar19 = *(longlong *)(*local_a0 + (longlong)iVar9 * 0x18);
          lVar15 = *(longlong *)(*local_a0 + 8 + (longlong)iVar9 * 0x18);
          uVar10 = (uint)((ulonglong)lVar19 >> 0x10);
          uVar16 = (uint)lVar19 & 0xffff;
          uVar4 = (uint)((ulonglong)lVar15 >> 0x10);
          uVar13 = (uint)lVar15 & 0xffff;
          uVar10 = (int)((ulonglong)lVar19 >> 0x20) + ((uint)lVar19 << 0x10 | uVar16) +
                   (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar16 >> 4);
          lVar11 = *(longlong *)(param_1 + 0x130);
          if (*(longlong *)(param_1 + 0x130) == 0) {
            lVar11 = local_a8;
          }
          iVar9 = *(int *)(lVar11 + (ulonglong)
                                    (*(int *)(param_1 + 0x138) - 1U &
                                    ((uVar10 >> 2) +
                                     ((uint)lVar15 << 0x10 | uVar13) +
                                     (int)((ulonglong)lVar15 >> 0x20) +
                                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4) +
                                     uVar10 * 0x40 + 0x9e3779b9 ^ uVar10)) * 4);
          if (iVar9 != -1) {
            lVar11 = *(longlong *)(param_1 + 0xf0);
            do {
              lVar17 = (longlong)iVar9 * 0x68;
              lVar2 = lVar11 + lVar17;
              if ((*(longlong *)(lVar11 + lVar17) == lVar19) &&
                 (*(longlong *)(lVar11 + 8 + lVar17) == lVar15)) {
                if (lVar2 + 0x10 != 0 && lVar2 != 0) {
                  FUN_144a62710(lVar2 + 0x10,&local_68);
                  uVar6 = uStack_70;
                  lVar19 = (longlong)(int)(uint)uStack_60;
                  if (lVar19 != 0) {
                    iVar9 = (int)uStack_70;
                    lVar15 = (longlong)(int)uStack_70;
                    uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + (uint)uStack_60);
                    if ((uint)(uStack_70._4_4_ - iVar9) < (uint)uStack_60) {
                      FUN_1407de694(&local_78,uVar6 & 0xffffffff);
                    }
                    memmove(local_78 + lVar15,local_68,lVar19 << 3);
                    uStack_60 = uStack_60 & 0xffffffff00000000;
                  }
                  if (local_68 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                break;
              }
              iVar9 = *(int *)(lVar2 + 0x60);
            } while (iVar9 != -1);
          }
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
        FUN_1449c0562(&local_98);
        puVar5 = local_b0;
        iVar9 = local_88._4_4_;
      } while (local_a0 != plVar18 ||
               (CONCAT44(uStack_8c,uStack_90) != uVar1 || local_88._4_4_ != iVar12));
      if ((longlong)(int)uStack_70 != 0) {
        puVar3 = local_78 + (int)uStack_70;
        puVar14 = local_78;
        do {
          plVar18 = (longlong *)*puVar14;
          FUN_1447c126c(plVar18 + 8,&local_a0,param_2);
          if ((local_a0 != (longlong *)0x0) &&
             (local_a0 = plVar18, cVar8 = (*(code *)*puVar5)(puVar5[1],&local_a0), cVar8 == '\0'))
          break;
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar3);
      }
      uVar7 = local_88;
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8(local_78);
        uVar7 = local_88;
      }
    }
  }
LAB_147013995:
  local_88 = uVar7;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147013d3c FUN_147013d3c body=373 status=ok
// SIG undefined FUN_147013d3c(void)

void FUN_147013d3c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  code *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x140);
  lVar2 = param_1 + 0x150;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = lVar2;
  if (*(int *)(param_1 + 0x168) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar4 = *(int *)(param_1 + 0x168);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar1;
  if ((iStack_5c != iVar4) || (uStack_68 != lVar2)) {
    do {
      local_70 = *local_98 + (longlong)iStack_7c * 0x60;
      local_a0 = &local_70;
      local_a8 = FUN_142aeac18;
      local_50 = *(undefined8 *)(*local_98 + (longlong)iStack_7c * 0x60);
      uStack_68 = param_1;
      cVar3 = (*(code *)*param_2)(param_2[1],&local_50,&local_a8);
      if (cVar3 == '\0') break;
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 || (CONCAT44(uStack_84,uStack_88) != lVar2 || iStack_7c != iVar4));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147013eb2 FUN_147013eb2 body=526 status=ok
// SIG undefined FUN_147013eb2(void)

void FUN_147013eb2(undefined8 *param_1,byte param_2,byte *param_3,byte param_4,byte param_5,
                  longlong *param_6,longlong param_7,code *param_8)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  longlong *plVar9;
  undefined *unaff_RBX;
  undefined1 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  byte local_8d;
  uint local_8c;
  undefined8 *local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  byte *local_68;
  uint local_5c;
  undefined8 local_58;
  byte local_4b;
  byte local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_8d = param_4;
  local_88 = param_1;
  if (((param_4 & param_2) != 0) && (0 < (int)param_6[1])) {
    bVar1 = *param_3;
    bVar2 = param_3[1];
    local_68 = param_3 + 8;
    local_78 = param_1 + 4;
    lVar12 = 0;
    do {
      local_70 = *(undefined8 *)(*param_6 + lVar12 * 8);
      local_5c = 0;
      lVar11 = *(longlong *)(param_7 + 0x10);
      if (*(longlong *)(param_7 + 0x10) == 0) {
        lVar11 = param_7;
      }
      local_98 = (undefined1 *)CONCAT44(local_98._4_4_,5);
      FUN_14493566c(&local_5c,0,lVar11,(int)lVar12 * 5);
      if ((ulonglong)local_5c < 8) {
        unaff_RBX = &DAT_14c75f4e0 + (ulonglong)local_5c * 4;
        puVar7 = &DAT_00000001;
      }
      else {
        uVar5 = local_5c - 8;
        puVar7 = (undefined1 *)(ulonglong)local_8c;
        if (uVar5 < 0xb) {
          unaff_RBX = (&PTR_DAT_149fcbb50)[uVar5];
          puVar7 = (undefined1 *)(ulonglong)*(uint *)(&DAT_149fcbba8 + (ulonglong)uVar5 * 4);
        }
      }
      local_8c = (uint)puVar7;
      puVar13 = (undefined1 *)0x0;
      uVar10 = 0;
      local_80 = lVar12;
      do {
        bVar4 = (*param_8)(unaff_RBX[(longlong)puVar13 * 4]);
        if (((byte)(bVar1 & param_5 & ~bVar4) == 0) && ((bVar2 & param_5 & bVar4) == 0)) {
          pbVar8 = *(byte **)(param_3 + 0x10);
          if (*(byte **)(param_3 + 0x10) == (byte *)0x0) {
            pbVar8 = local_68;
          }
          if ((longlong)*(int *)(param_3 + 0x18) != 0) {
            lVar12 = 0;
            do {
              if (((pbVar8[lVar12] & param_5) != 0) && ((pbVar8[lVar12] & param_5 & bVar4) == 0))
              goto LAB_147014042;
              lVar12 = lVar12 + 1;
            } while (*(int *)(param_3 + 0x18) != lVar12);
          }
          local_4b = local_8d;
          local_58 = local_70;
          pcVar3 = (code *)*local_88;
          plVar9 = (longlong *)local_88[2];
          if ((longlong *)local_88[2] == (longlong *)0x0) {
            plVar9 = local_78;
          }
          local_4a = bVar4;
          local_49 = uVar10;
          uVar6 = (**(code **)(*plVar9 + 8))();
          local_98 = &local_49;
          (*pcVar3)(uVar6,&local_58,&local_4b,&local_4a);
          uVar10 = 1;
        }
LAB_147014042:
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar7);
      lVar12 = local_80 + 1;
    } while (lVar12 < (int)param_6[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470140c7 FUN_1470140c7 body=382 status=ok
// SIG undefined FUN_1470140c7(void)

void FUN_1470140c7(undefined8 *param_1,byte param_2,byte *param_3,byte param_4,byte param_5,
                  longlong *param_6,longlong param_7,code *param_8)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte local_79;
  undefined8 *local_78;
  longlong *local_70;
  byte *local_68;
  undefined1 local_5c [4];
  undefined8 local_58;
  byte local_4b;
  byte local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = param_4;
  local_78 = param_1;
  if (((param_4 & param_2) != 0) && (0 < (int)param_6[1])) {
    bVar1 = *param_3;
    bVar2 = param_3[1];
    local_68 = param_3 + 8;
    local_70 = param_1 + 4;
    uVar9 = 0;
    do {
      uVar5 = *(undefined8 *)(*param_6 + uVar9 * 8);
      lVar8 = *(longlong *)(param_7 + 0x10);
      if (*(longlong *)(param_7 + 0x10) == 0) {
        lVar8 = param_7;
      }
      local_88 = (byte *)CONCAT44(local_88._4_4_,1);
      FUN_14493566c(local_5c,0,lVar8,uVar9 & 0xffffffff);
      bVar4 = (*param_8)(local_5c[0]);
      if (((byte)(bVar1 & param_5 & ~bVar4) == 0) && ((bVar2 & param_5 & bVar4) == 0)) {
        pbVar6 = *(byte **)(param_3 + 0x10);
        if (*(byte **)(param_3 + 0x10) == (byte *)0x0) {
          pbVar6 = local_68;
        }
        if ((longlong)*(int *)(param_3 + 0x18) != 0) {
          lVar8 = 0;
          do {
            if (((pbVar6[lVar8] & param_5) != 0) && ((pbVar6[lVar8] & param_5 & bVar4) == 0))
            goto LAB_14701420d;
            lVar8 = lVar8 + 1;
          } while (*(int *)(param_3 + 0x18) != lVar8);
        }
        local_4a[1] = 0;
        local_4b = local_79;
        pcVar3 = (code *)*local_78;
        plVar7 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar7 = local_70;
        }
        local_58 = uVar5;
        local_4a[0] = bVar4;
        uVar5 = (**(code **)(*plVar7 + 8))();
        local_88 = local_4a + 1;
        (*pcVar3)(uVar5,&local_58,&local_4b,local_4a);
      }
LAB_14701420d:
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)(int)param_6[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147014256 FUN_147014256 body=244 status=ok
// SIG undefined FUN_147014256(void)

void FUN_147014256(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 in_stack_ffffffffffffffb8;
  
  FUN_14701434a(param_2,param_3,param_4,param_5,param_1 + 0x20,param_1 + 0x60,
                CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffb8 >> 8),
                         *(undefined1 *)(param_1 + 0xc0)) & 0xffffffffffffff01);
  FUN_147014482(param_2,param_3,param_4,param_5,4,0x80,param_1 + 0x30,param_1 + 0xa0,&LAB_147014246,
                (char)((*(uint *)(param_1 + 0xc0) & 2) >> 1));
  FUN_147014482(param_2,param_3,param_4,param_5,2,8,param_1 + 0x40,param_1 + 0x80,&LAB_14701424c,
                (char)((*(uint *)(param_1 + 0xc0) & 4) >> 2));
  return;
}



// FUNCTION 14701434a FUN_14701434a body=311 status=ok
// SIG undefined FUN_14701434a(void)

void FUN_14701434a(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6,char param_7)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 **local_48;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = &LAB_1470140c2;
  local_39 = 7;
  local_3a = 1;
  if ((param_3 & 1) != 0) {
    local_70 = param_5;
    local_68 = &local_3a;
    local_58 = &local_39;
    local_50 = (undefined1 *)&param_6;
    local_48 = &local_38;
    uVar1 = *(uint *)(param_5 + 1);
    uVar4 = (ulonglong)uVar1;
    local_78 = param_1;
    local_60 = param_4;
    if (param_7 == '\0') {
      if (0 < (int)uVar1) {
        uVar2 = 0;
        do {
          if (*(ulonglong *)(*param_5 + uVar2 * 8) == param_2) {
            FUN_14701f97e(&local_78,uVar2 & 0xffffffff);
          }
          uVar2 = uVar2 + 1;
        } while (uVar4 != uVar2);
      }
    }
    else {
      uVar2 = 0;
      if (0 < (int)uVar1) {
        do {
          uVar5 = (int)(uVar4 >> 1) + (int)uVar2;
          uVar3 = (uint)uVar4;
          if (*(ulonglong *)(*param_5 + (ulonglong)uVar5 * 8) < param_2) {
            uVar2 = (ulonglong)(uVar5 + (uVar3 & 1));
          }
          uVar4 = uVar4 >> 1;
        } while (1 < uVar3);
      }
      if (((int)uVar2 < (int)uVar1) && (*(ulonglong *)(*param_5 + uVar2 * 8) <= param_2)) {
        FUN_14701f97e(&local_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147014482 FUN_147014482 body=284 status=ok
// SIG undefined FUN_147014482(void)

void FUN_147014482(undefined8 param_1,ulonglong param_2,byte param_3,undefined8 param_4,byte param_5
                  ,undefined8 param_6,longlong *param_7,undefined8 param_8,undefined8 param_9,
                  char param_10)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  plVar2 = param_7;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_5 & param_3) != 0) {
    local_60 = param_7;
    local_58 = &param_5;
    local_48 = (undefined1 *)&param_6;
    local_40 = (undefined1 *)&param_8;
    local_38 = (undefined1 *)&param_9;
    uVar1 = *(uint *)(param_7 + 1);
    uVar5 = (ulonglong)uVar1;
    local_68 = param_1;
    local_50 = param_4;
    if (param_10 == '\0') {
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (*(ulonglong *)(*plVar2 + uVar3 * 8) == param_2) {
            FUN_14701fb2a(&local_68,uVar3 & 0xffffffff);
          }
          uVar3 = uVar3 + 1;
        } while (uVar5 != uVar3);
      }
    }
    else {
      uVar3 = 0;
      if (0 < (int)uVar1) {
        do {
          uVar6 = (int)(uVar5 >> 1) + (int)uVar3;
          uVar4 = (uint)uVar5;
          if (*(ulonglong *)(*param_7 + (ulonglong)uVar6 * 8) < param_2) {
            uVar3 = (ulonglong)(uVar6 + (uVar4 & 1));
          }
          uVar5 = uVar5 >> 1;
        } while (1 < uVar4);
      }
      if (((int)uVar3 < (int)uVar1) && (*(ulonglong *)(*param_7 + uVar3 * 8) <= param_2)) {
        FUN_14701fb2a(&local_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470145a0 FUN_1470145a0 body=297 status=ok
// SIG undefined FUN_1470145a0(void)

void FUN_1470145a0(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar19 = *(longlong **)(param_1 + 0x50);
    plVar1 = plVar19 + *(int *)(param_1 + 0x58);
    do {
      puVar4 = (undefined4 *)*plVar19;
      uVar2 = puVar4[10];
      uVar17 = 0;
      if (0 < (int)uVar2) {
        uVar17 = 0;
        uVar15 = (ulonglong)uVar2;
        do {
          uVar16 = (int)(uVar15 >> 1) + uVar17;
          uVar14 = (uint)uVar15;
          if (*(ulonglong *)(*(longlong *)(puVar4 + 8) + (ulonglong)uVar16 * 8) < param_1) {
            uVar17 = uVar16 + (uVar14 & 1);
          }
          uVar15 = uVar15 >> 1;
        } while (1 < uVar14);
      }
      if (((int)uVar17 < (int)uVar2) &&
         (*(ulonglong *)(*(longlong *)(puVar4 + 8) + (ulonglong)uVar17 * 8) <= param_1)) {
        local_44 = 0;
        puVar13 = puVar4 + 0x18;
        if (*(undefined4 **)(puVar4 + 0x1c) != (undefined4 *)0x0) {
          puVar13 = *(undefined4 **)(puVar4 + 0x1c);
        }
        local_58 = 5;
        FUN_14493566c(&local_44,0,puVar13,uVar17 * 5);
        iVar3 = (int)param_2[1];
        lVar18 = (longlong)iVar3;
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14701fcf8(param_2,iVar3);
        }
        lVar5 = *param_2;
        uVar6 = *puVar4;
        uVar7 = puVar4[1];
        uVar8 = puVar4[2];
        uVar9 = puVar4[3];
        uVar10 = puVar4[5];
        uVar11 = puVar4[6];
        uVar12 = puVar4[7];
        puVar13 = (undefined4 *)(lVar5 + 0x10 + lVar18 * 0x24);
        *puVar13 = puVar4[4];
        puVar13[1] = uVar10;
        puVar13[2] = uVar11;
        puVar13[3] = uVar12;
        puVar4 = (undefined4 *)(lVar5 + lVar18 * 0x24);
        *puVar4 = uVar6;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        *(undefined4 *)(lVar5 + 0x20 + lVar18 * 0x24) = local_44;
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470146ca FUN_1470146ca body=386 status=ok
// SIG undefined FUN_1470146ca(void)

void FUN_1470146ca(ulonglong param_1,byte param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5,code *param_6,char param_7)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  byte bVar6;
  undefined7 uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_4 + 1);
  bVar6 = (byte)(param_3 & 0xffffffff);
  uVar7 = (undefined7)((param_3 & 0xffffffff) >> 8);
  uVar8 = uVar2;
  if ((param_7 != '\0') && (uVar8 = 0, 0 < (int)uVar2)) {
    uVar8 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar8;
      if (*(ulonglong *)(*param_4 + (ulonglong)uVar1 * 8) < param_1) {
        uVar8 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar8 < (int)uVar2) && (*(ulonglong *)(*param_4 + (ulonglong)uVar8 * 8) == param_1)) {
      uVar4 = (*param_6)(CONCAT71(uVar7,bVar6 & param_2));
      local_4c = 0;
      iVar10 = uVar8 * 5;
      lVar9 = *(longlong *)(param_5 + 0x10);
      if (*(longlong *)(param_5 + 0x10) == 0) {
        lVar9 = param_5;
      }
      local_58 = 5;
      FUN_14493566c(&local_4c,0,lVar9,iVar10);
      goto LAB_1470147f5;
    }
  }
  *(uint *)(param_4 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_4 + 0xc) < uVar2 + 1) {
    FUN_14700a186(param_4,uVar2);
  }
  lVar9 = (longlong)(int)uVar8;
  memmove((void *)(*param_4 + lVar9 * 8 + 8),(void *)(*param_4 + lVar9 * 8),
          (ulonglong)(uVar2 - uVar8) << 3);
  *(ulonglong *)(*param_4 + lVar9 * 8) = param_1;
  uVar4 = (*param_6)(CONCAT71(uVar7,bVar6 & param_2));
  local_4c = 0;
  iVar10 = uVar8 * 5;
  FUN_147014b00(param_5,iVar10,5);
LAB_1470147f5:
  FUN_146ff8ac0(&local_4c,uVar4);
  lVar9 = *(longlong *)(param_5 + 0x10);
  if (*(longlong *)(param_5 + 0x10) == 0) {
    lVar9 = param_5;
  }
  local_58 = 5;
  FUN_14493566c(lVar9,iVar10,&local_4c,0);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147014853 FUN_147014853 body=397 status=ok
// SIG undefined FUN_147014853(void)

void FUN_147014853(ulonglong param_1,byte param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5,code *param_6,char param_7)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  undefined7 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_4 + 1);
  bVar6 = (byte)(param_3 & 0xffffffff);
  uVar7 = (undefined7)((param_3 & 0xffffffff) >> 8);
  uVar8 = uVar2;
  if (param_7 != '\0') {
    if ((int)uVar2 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      uVar5 = uVar2;
      do {
        uVar1 = (uVar5 >> 1) + uVar8;
        if (*(ulonglong *)(*param_4 + (ulonglong)uVar1 * 8) < param_1) {
          uVar8 = uVar1 + (uVar5 & 1);
        }
        bVar3 = 1 < uVar5;
        uVar5 = uVar5 >> 1;
      } while (bVar3);
      if (((int)uVar8 < (int)uVar2) && (*(ulonglong *)(*param_4 + (ulonglong)uVar8 * 8) == param_1))
      {
        cVar4 = (*param_6)(CONCAT71(uVar7,bVar6 & param_2));
        local_4c = 0;
        lVar9 = *(longlong *)(param_5 + 0x10);
        if (*(longlong *)(param_5 + 0x10) == 0) {
          lVar9 = param_5;
        }
        local_58 = 1;
        FUN_14493566c(&local_4c,0,lVar9,uVar8);
        goto LAB_147014921;
      }
    }
  }
  *(uint *)(param_4 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_4 + 0xc) < uVar2 + 1) {
    FUN_14700a186(param_4,uVar2);
  }
  lVar9 = (longlong)(int)uVar8;
  memmove((void *)(*param_4 + lVar9 * 8 + 8),(void *)(*param_4 + lVar9 * 8),
          (ulonglong)(uVar2 - uVar8) << 3);
  *(ulonglong *)(*param_4 + lVar9 * 8) = param_1;
  cVar4 = (*param_6)(CONCAT71(uVar7,bVar6 & param_2));
  FUN_147014b00(param_5,uVar8,1);
  local_4c = 0;
LAB_147014921:
  local_4c = cVar4 != '\0' | local_4c;
  lVar9 = *(longlong *)(param_5 + 0x10);
  if (*(longlong *)(param_5 + 0x10) == 0) {
    lVar9 = param_5;
  }
  local_58 = 1;
  FUN_14493566c(lVar9,uVar8,&local_4c,0);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470149f0 FUN_1470149f0 body=271 status=ok
// SIG undefined FUN_1470149f0(void)

void FUN_1470149f0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar4 = uVar5;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x28);
    if ((int)uVar5 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar2 = uVar5;
      do {
        uVar1 = (uVar2 >> 1) + uVar4;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar1 * 8) < param_2) {
          uVar4 = uVar1 + (uVar2 & 1);
        }
        bVar7 = 1 < uVar2;
        uVar2 = uVar2 >> 1;
      } while (bVar7);
      if (((int)uVar4 < (int)uVar5) &&
         (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar4 * 8) == param_2)) {
        iVar3 = uVar4 * 5;
        goto LAB_147014a63;
      }
    }
  }
  *(uint *)(param_1 + 0x28) = uVar5 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar5 + 1) {
    FUN_14700a186(param_1 + 0x20,uVar5);
  }
  lVar6 = (longlong)(int)uVar4;
  memmove((void *)(*(longlong *)(param_1 + 0x20) + lVar6 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x20) + lVar6 * 8),(ulonglong)(uVar5 - uVar4) << 3);
  *(ulonglong *)(*(longlong *)(param_1 + 0x20) + lVar6 * 8) = param_2;
  iVar3 = uVar4 * 5;
  FUN_147014b00(param_1 + 0x60,iVar3,5);
LAB_147014a63:
  lVar6 = param_1 + 0x60;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x70);
  }
  FUN_14493566c(lVar6,iVar3,param_3,0,5);
  return;
}



// FUNCTION 147014b00 FUN_147014b00 body=76 status=ok
// SIG undefined FUN_147014b00(void)

void FUN_147014b00(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = *(int *)(param_1 + 0x18);
    FUN_144a54ea4(param_1,param_3);
    iVar2 = iVar2 - param_2;
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar1 = param_1;
      }
      FUN_14493566c(lVar1,param_3 + param_2,lVar1,param_2,iVar2);
    }
  }
  return;
}



// FUNCTION 147014b4c FUN_147014b4c body=170 status=ok
// SIG undefined FUN_147014b4c(void)

void FUN_147014b4c(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)(param_4 + 1);
  uVar5 = uVar2;
  if (param_7 != '\0') {
    if ((int)uVar2 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar4 = uVar2;
      do {
        uVar1 = (uVar4 >> 1) + uVar5;
        if (*(ulonglong *)(*param_4 + (ulonglong)uVar1 * 8) < param_1) {
          uVar5 = uVar1 + (uVar4 & 1);
        }
        bVar3 = 1 < uVar4;
        uVar4 = uVar4 >> 1;
      } while (bVar3);
      if (((int)uVar5 < (int)uVar2) && (*(ulonglong *)(*param_4 + (ulonglong)uVar5 * 8) == param_1))
      {
        return;
      }
    }
  }
  *(uint *)(param_4 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_4 + 0xc) < uVar2 + 1) {
    FUN_14700a186(param_4,uVar2);
  }
  lVar6 = (longlong)(int)uVar5;
  memmove((void *)(*param_4 + lVar6 * 8 + 8),(void *)(*param_4 + lVar6 * 8),
          (ulonglong)(uVar2 - uVar5) << 3);
  *(ulonglong *)(*param_4 + lVar6 * 8) = param_1;
  return;
}



// FUNCTION 147014bf6 FUN_147014bf6 body=308 status=ok
// SIG undefined FUN_147014bf6(void)

void FUN_147014bf6(ulonglong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  void *_Dst;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_2 + 1);
  if (param_4 == '\0') {
    if (0 < (int)uVar4) {
      uVar7 = 0;
      do {
        lVar2 = *param_2;
        if (*(ulonglong *)(lVar2 + (longlong)(int)uVar7 * 8) == param_1) {
          iVar5 = ~uVar7 + uVar4;
          if (iVar5 != 0) {
            if (0 < iVar5) {
              iVar5 = 1;
            }
            memmove((void *)(lVar2 + (longlong)(int)uVar7 * 8),
                    (void *)(lVar2 + (longlong)(int)(uVar4 - iVar5) * 8),(longlong)iVar5 << 3);
            uVar4 = *(uint *)(param_2 + 1);
          }
          *(uint *)(param_2 + 1) = uVar4 - 1;
          FUN_14700a42a(param_2);
          FUN_142aeaf94(param_3,uVar7 * 5,5);
          uVar4 = *(uint *)(param_2 + 1);
        }
        else {
          uVar7 = uVar7 + 1;
        }
      } while ((int)uVar7 < (int)uVar4);
    }
  }
  else if (0 < (int)uVar4) {
    lVar2 = *param_2;
    uVar6 = 0;
    uVar7 = uVar4;
    do {
      uVar1 = (uVar7 >> 1) + uVar6;
      if (*(ulonglong *)(lVar2 + (ulonglong)uVar1 * 8) < param_1) {
        uVar6 = uVar1 + (uVar7 & 1);
      }
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    if (((int)uVar6 < (int)uVar4) && (*(ulonglong *)(lVar2 + (ulonglong)uVar6 * 8) == param_1)) {
      if (~uVar6 + uVar4 != 0) {
        _Dst = (void *)(lVar2 + (ulonglong)uVar6 * 8);
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar6 + uVar4) << 3);
        uVar4 = *(uint *)(param_2 + 1);
      }
      *(uint *)(param_2 + 1) = uVar4 - 1;
      FUN_14700a42a(param_2);
      FUN_144a6134a(param_3,uVar6 * 5,5);
      return;
    }
  }
  return;
}



// FUNCTION 147014d2a FUN_147014d2a body=303 status=ok
// SIG undefined FUN_147014d2a(void)

void FUN_147014d2a(ulonglong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  void *_Dst;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_2 + 1);
  if (param_4 == '\0') {
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        lVar2 = *param_2;
        if (*(ulonglong *)(lVar2 + (longlong)(int)uVar5 * 8) == param_1) {
          iVar6 = ~uVar5 + uVar4;
          if (iVar6 != 0) {
            if (0 < iVar6) {
              iVar6 = 1;
            }
            memmove((void *)(lVar2 + (longlong)(int)uVar5 * 8),
                    (void *)(lVar2 + (longlong)(int)(uVar4 - iVar6) * 8),(longlong)iVar6 << 3);
            uVar4 = *(uint *)(param_2 + 1);
          }
          *(uint *)(param_2 + 1) = uVar4 - 1;
          FUN_14700a42a(param_2);
          FUN_142aeaf94(param_3,uVar5,1);
          uVar4 = *(uint *)(param_2 + 1);
        }
        else {
          uVar5 = uVar5 + 1;
        }
      } while ((int)uVar5 < (int)uVar4);
    }
  }
  else if (0 < (int)uVar4) {
    lVar2 = *param_2;
    uVar7 = 0;
    uVar5 = uVar4;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(ulonglong *)(lVar2 + (ulonglong)uVar1 * 8) < param_1) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar4) && (*(ulonglong *)(lVar2 + (ulonglong)uVar7 * 8) == param_1)) {
      if (~uVar7 + uVar4 != 0) {
        _Dst = (void *)(lVar2 + (ulonglong)uVar7 * 8);
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar7 + uVar4) << 3);
        uVar4 = *(uint *)(param_2 + 1);
      }
      *(uint *)(param_2 + 1) = uVar4 - 1;
      FUN_14700a42a(param_2);
      FUN_144a6134a(param_3,uVar7,1);
      return;
    }
  }
  return;
}



// FUNCTION 147014e59 FUN_147014e59 body=253 status=ok
// SIG undefined FUN_147014e59(void)

void FUN_147014e59(ulonglong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  void *_Dst;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_2 + 1);
  if (param_4 == '\0') {
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        lVar2 = *param_2;
        if (*(ulonglong *)(lVar2 + (longlong)(int)uVar5 * 8) == param_1) {
          iVar6 = ~uVar5 + uVar4;
          if (iVar6 != 0) {
            if (0 < iVar6) {
              iVar6 = 1;
            }
            memmove((void *)(lVar2 + (longlong)(int)uVar5 * 8),
                    (void *)(lVar2 + (longlong)(int)(uVar4 - iVar6) * 8),(longlong)iVar6 << 3);
            uVar4 = *(uint *)(param_2 + 1);
          }
          *(uint *)(param_2 + 1) = uVar4 - 1;
          FUN_14700a42a(param_2);
          uVar4 = *(uint *)(param_2 + 1);
        }
        else {
          uVar5 = uVar5 + 1;
        }
      } while ((int)uVar5 < (int)uVar4);
    }
  }
  else if (0 < (int)uVar4) {
    lVar2 = *param_2;
    uVar7 = 0;
    uVar5 = uVar4;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(ulonglong *)(lVar2 + (ulonglong)uVar1 * 8) < param_1) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar4) && (*(ulonglong *)(lVar2 + (ulonglong)uVar7 * 8) == param_1)) {
      if (~uVar7 + uVar4 != 0) {
        _Dst = (void *)(lVar2 + (ulonglong)uVar7 * 8);
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar7 + uVar4) << 3);
        uVar4 = *(uint *)(param_2 + 1);
      }
      *(uint *)(param_2 + 1) = uVar4 - 1;
      FUN_14700a42a(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147014f56 FUN_147014f56 body=472 status=ok
// SIG undefined FUN_147014f56(void)

void FUN_147014f56(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  
  if ((*(byte *)(param_1 + 0xc0) & 8) == 0) {
    iVar15 = *(int *)(param_1 + 0x58);
    if (0 < iVar15) {
      lVar20 = 0;
      bVar10 = false;
      do {
        lVar2 = *(longlong *)(param_1 + 0x50);
        uVar16 = (uint)lVar20;
        lVar20 = (longlong)(int)uVar16;
        lVar12 = lVar20 * 8 + lVar2;
        lVar14 = 0;
        while (cVar4 = FUN_14701167a(*(undefined8 *)(lVar12 + lVar14 * 8),param_1,0xf),
              cVar4 != '\0') {
          lVar1 = lVar20 + lVar14;
          lVar14 = lVar14 + 1;
          if ((longlong)iVar15 <= lVar1 + 1) {
            if (!bVar10) {
              return;
            }
            goto LAB_147014fd2;
          }
        }
        iVar13 = (int)lVar14;
        if (~uVar16 + iVar15 != iVar13) {
          iVar7 = (~uVar16 + iVar15) - iVar13;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove((void *)(lVar12 + lVar14 * 8),(void *)((longlong)(iVar15 - iVar7) * 8 + lVar2),
                  (longlong)iVar7 << 3);
          iVar15 = *(int *)(param_1 + 0x58);
        }
        lVar20 = lVar20 + lVar14;
        iVar15 = iVar15 + -1;
        *(int *)(param_1 + 0x58) = iVar15;
        bVar10 = true;
      } while ((int)(uVar16 + iVar13) < iVar15);
LAB_147014fd2:
      FUN_14700a42a((longlong *)(param_1 + 0x50));
      return;
    }
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x58);
    lVar20 = (longlong)(int)uVar16;
    if (lVar20 != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      bVar5 = FUN_14701167a(*puVar3,param_1,0xf);
      uVar9 = 0;
      uVar17 = 0;
      do {
        uVar11 = uVar17 + 1;
        if ((int)(uVar17 + 1) < (int)uVar16) {
          uVar11 = uVar16;
        }
        uVar18 = uVar17;
        uVar8 = (ulonglong)uVar17;
        do {
          uVar8 = uVar8 + 1;
          uVar19 = uVar11;
          if (lVar20 <= (longlong)uVar8) break;
          bVar6 = FUN_14701167a(puVar3[uVar8],param_1,0xf);
          uVar18 = uVar18 + 1;
          uVar19 = uVar18;
        } while ((bVar5 & 1) == bVar6);
        if ((bVar5 & 1) != 0) {
          if (uVar9 != uVar17) {
            memmove(puVar3 + (int)uVar9,puVar3 + uVar17,(longlong)(int)(uVar19 - uVar17) << 3);
          }
          uVar9 = uVar9 + (uVar19 - uVar17);
        }
        uVar17 = uVar19;
        bVar5 = bVar5 ^ 1;
      } while ((longlong)uVar8 < lVar20);
      *(uint *)(param_1 + 0x58) = uVar9;
    }
  }
  return;
}



// FUNCTION 14701512e FUN_14701512e body=630 status=ok
// SIG undefined FUN_14701512e(void)

void FUN_14701512e(undefined8 *param_1,longlong *param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_b8 [32];
  int local_98;
  byte local_82;
  byte local_81;
  ulonglong local_80;
  longlong local_78;
  uint local_6c;
  ulonglong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar11 = *(uint *)(param_2 + 1);
  local_78 = param_3;
  if (param_4 == '\0') {
    if (0 < (int)uVar11) {
      uVar11 = 0;
      do {
        local_50 = *(undefined8 *)(*param_2 + (longlong)(int)uVar11 * 8);
        pcVar2 = (code *)*param_1;
        plVar8 = (longlong *)param_1[2];
        if ((longlong *)param_1[2] == (longlong *)0x0) {
          plVar8 = param_1 + 4;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        cVar3 = (*pcVar2)(uVar6,&local_50);
        if (cVar3 == '\0') {
          uVar11 = uVar11 + 1;
        }
        else {
          iVar10 = (int)param_2[1];
          iVar13 = ~uVar11 + iVar10;
          if (iVar13 != 0) {
            if (0 < iVar13) {
              iVar13 = 1;
            }
            memmove((void *)(*param_2 + (longlong)(int)uVar11 * 8),
                    (void *)(*param_2 + (longlong)(iVar10 - iVar13) * 8),(longlong)iVar13 << 3);
            iVar10 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar10 + -1;
          FUN_14700a42a(param_2);
          FUN_142aeaf94(local_78,uVar11 * 5,5);
        }
      } while ((int)uVar11 < (int)param_2[1]);
    }
  }
  else if (uVar11 != 0) {
    puVar1 = (undefined8 *)*param_2;
    local_50 = *puVar1;
    pcVar2 = (code *)*param_1;
    plVar8 = (longlong *)param_1[2];
    if ((longlong *)param_1[2] == (longlong *)0x0) {
      plVar8 = param_1 + 4;
    }
    local_60 = param_2;
    uVar6 = (**(code **)(*plVar8 + 8))();
    bVar4 = (*pcVar2)(uVar6,&local_50);
    uVar12 = 0;
    uVar14 = 0;
    do {
      local_81 = bVar4;
      local_82 = local_81 ^ 1;
      lVar7 = (longlong)(int)uVar12;
      local_6c = (int)uVar12 + 1;
      if ((int)local_6c < (int)uVar11) {
        local_6c = uVar11;
      }
      bVar4 = local_81 & 1;
      local_80 = uVar14;
      local_68 = uVar12;
      local_58 = lVar7;
      do {
        lVar7 = lVar7 + 1;
        if ((int)uVar11 <= lVar7) {
          uVar12 = (ulonglong)local_6c;
          break;
        }
        local_50 = puVar1[lVar7];
        pcVar2 = (code *)*param_1;
        plVar8 = (longlong *)param_1[2];
        if ((longlong *)param_1[2] == (longlong *)0x0) {
          plVar8 = param_1 + 4;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        bVar5 = (*pcVar2)(uVar6,&local_50);
        uVar12 = (ulonglong)((int)uVar12 + 1);
      } while (bVar4 == bVar5);
      uVar14 = local_80;
      if ((local_81 & 1) == 0) {
        iVar10 = (int)uVar12 - (int)local_68;
        iVar13 = (int)local_80;
        if (iVar13 != (int)local_68) {
          memmove(puVar1 + iVar13,puVar1 + local_58,(longlong)iVar10 * 8);
          lVar9 = *(longlong *)(local_78 + 0x10);
          if (*(longlong *)(local_78 + 0x10) == 0) {
            lVar9 = local_78;
          }
          local_98 = iVar10 * 5;
          iVar13 = (int)local_80;
          FUN_14493566c(lVar9,iVar13 * 5,lVar9,(int)local_68 * 5);
        }
        uVar14 = (ulonglong)(uint)(iVar13 + iVar10);
      }
      bVar4 = local_82;
    } while (lVar7 < (int)uVar11);
    FUN_14701fd8c(local_60,uVar14 & 0xffffffff);
    FUN_144a686e6(local_78,(int)uVar14 * 5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470153a5 FUN_1470153a5 body=620 status=ok
// SIG undefined FUN_1470153a5(void)

void FUN_1470153a5(undefined8 *param_1,longlong *param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_a8 [32];
  int local_88;
  byte local_7a;
  byte local_79;
  int local_78;
  int local_74;
  longlong local_70;
  longlong *local_68;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = (int)param_2[1];
  local_70 = param_3;
  local_68 = param_2;
  if (param_4 == '\0') {
    if (0 < iVar6) {
      uVar11 = 0;
      do {
        local_50 = *(undefined8 *)(*param_2 + (longlong)(int)uVar11 * 8);
        pcVar2 = (code *)*param_1;
        plVar9 = (longlong *)param_1[2];
        if ((longlong *)param_1[2] == (longlong *)0x0) {
          plVar9 = param_1 + 4;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar3 = (*pcVar2)(uVar7,&local_50);
        param_2 = local_68;
        if (cVar3 == '\0') {
          uVar11 = uVar11 + 1;
        }
        else {
          iVar6 = (int)local_68[1];
          iVar13 = ~uVar11 + iVar6;
          if (iVar13 != 0) {
            if (0 < iVar13) {
              iVar13 = 1;
            }
            memmove((void *)(*local_68 + (longlong)(int)uVar11 * 8),
                    (void *)(*local_68 + (longlong)(iVar6 - iVar13) * 8),(longlong)iVar13 << 3);
            iVar6 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar6 + -1;
          FUN_14700a42a(param_2);
          FUN_142aeaf94(local_70,uVar11,1);
        }
      } while ((int)uVar11 < (int)param_2[1]);
    }
  }
  else if (iVar6 != 0) {
    puVar1 = (undefined8 *)*param_2;
    local_50 = *puVar1;
    pcVar2 = (code *)*param_1;
    plVar9 = (longlong *)param_1[2];
    if ((longlong *)param_1[2] == (longlong *)0x0) {
      plVar9 = param_1 + 4;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    bVar4 = (*pcVar2)(uVar7,&local_50);
    iVar14 = 0;
    iVar13 = 0;
    do {
      local_79 = bVar4;
      local_7a = local_79 ^ 1;
      lVar8 = (longlong)iVar14;
      local_5c = iVar14 + 1;
      if (iVar14 + 1 < iVar6) {
        local_5c = iVar6;
      }
      bVar4 = local_79 & 1;
      local_78 = iVar13;
      local_74 = iVar14;
      local_58 = lVar8;
      do {
        lVar8 = lVar8 + 1;
        iVar13 = local_5c;
        if (iVar6 <= lVar8) break;
        local_50 = puVar1[lVar8];
        pcVar2 = (code *)*param_1;
        plVar9 = (longlong *)param_1[2];
        if ((longlong *)param_1[2] == (longlong *)0x0) {
          plVar9 = param_1 + 4;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        bVar5 = (*pcVar2)(uVar7,&local_50);
        iVar14 = iVar14 + 1;
        iVar13 = iVar14;
      } while (bVar4 == bVar5);
      iVar14 = iVar13;
      iVar13 = local_78;
      if ((local_79 & 1) == 0) {
        iVar12 = iVar14 - local_74;
        if (local_78 != local_74) {
          memmove(puVar1 + local_78,puVar1 + local_58,(longlong)iVar12 * 8);
          iVar13 = local_78;
          lVar10 = *(longlong *)(local_70 + 0x10);
          if (*(longlong *)(local_70 + 0x10) == 0) {
            lVar10 = local_70;
          }
          local_88 = iVar12;
          FUN_14493566c(lVar10,local_78,lVar10,local_74);
        }
        iVar13 = iVar13 + iVar12;
      }
      bVar4 = local_7a;
    } while (lVar8 < iVar6);
    FUN_14701fd8c(local_68,iVar13);
    FUN_144a686e6(local_70,iVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147015612 FUN_147015612 body=294 status=ok
// SIG undefined FUN_147015612(void)

longlong * FUN_147015612(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  if ((*(byte *)(param_1 + 5) & 4) != 0) {
    local_21 = (param_2[3] != 0) << 3 |
               (param_2[2] != 0) << 2 | (param_2[1] != 0) * '\x02' | *param_2 != 0;
  }
  puVar2 = (ulonglong *)param_1[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((byte *)puVar2[1] < pbVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_21,1);
  }
  else {
    local_21 = *(byte *)*puVar2;
    *puVar2 = (ulonglong)pbVar1;
  }
  if ((local_21 & 1) != 0) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2);
  }
  if ((local_21 & 2) != 0) {
    local_30 = param_2[1];
    (**(code **)(*param_1 + 0x160))(param_1);
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      param_2[1] = local_30;
    }
  }
  if ((local_21 & 4) != 0) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 2);
  }
  if ((local_21 & 8) != 0) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147015739 FUN_147015739 body=861 status=ok
// SIG undefined FUN_147015739(void)

void FUN_147015739(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  int *local_c8;
  ulonglong uStack_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)uVar5;
  if (uVar8 != 0) {
    local_b0 = *param_1;
    local_c8 = (int *)0x0;
    uStack_c0 = 0;
    FUN_144a1a59e(&local_c8,uVar8,1);
    if (0 < (int)uVar5) {
      uVar4 = 0;
      do {
        local_c8[uVar4] = (int)uVar4;
        uVar4 = uVar4 + 1;
      } while (uVar8 != uVar4);
    }
    FUN_1470202c1(local_c8,uStack_c0 & 0xffffffff,&local_b0);
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = (undefined4 *)0x0;
    uStack_90 = 0x8000000000;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    FUN_14700a3ca(&local_d8,uVar5);
    FUN_1456bd906(&local_a8,uVar5 * 5);
    lVar1 = local_b0;
    uVar4 = uStack_d0;
    iVar10 = *local_c8;
    lVar11 = (longlong)(int)uStack_d0;
    uVar2 = (int)uStack_d0 + 1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar2);
    if (uStack_d0._4_4_ < uVar2) {
      FUN_14700a186(&local_d8,uVar4 & 0xffffffff);
    }
    *(undefined8 *)(local_d8 + lVar11 * 8) = *(undefined8 *)(lVar1 + (longlong)iVar10 * 8);
    uVar3 = FUN_144a54ea4(&local_a8,5);
    puVar9 = (ulonglong *)param_2[2];
    if ((ulonglong *)param_2[2] == (ulonglong *)0x0) {
      puVar9 = param_2;
    }
    puVar6 = local_98;
    if (local_98 == (undefined4 *)0x0) {
      puVar6 = &local_a8;
    }
    local_e8 = 5;
    FUN_14493566c(puVar6,uVar3,puVar9,iVar10 * 5);
    if (uVar5 != 1) {
      uVar4 = 1;
      do {
        uVar7 = uStack_d0;
        iVar10 = local_c8[uVar4];
        lVar1 = *(longlong *)(local_b0 + (longlong)iVar10 * 8);
        lVar11 = (longlong)(int)uStack_d0;
        if (lVar1 == *(longlong *)(local_d8 + (longlong)((int)uStack_d0 + -1) * 8)) {
          uVar7 = lVar11 * 5 - 5;
          local_88 = local_88 & 0xffffffff00000000;
          puVar6 = local_98;
          if (local_98 == (undefined4 *)0x0) {
            puVar6 = &local_a8;
          }
          local_e8 = 5;
          FUN_14493566c(&local_88,0,puVar6,uVar7 & 0xffffffff);
          local_dc = 0;
          puVar9 = (ulonglong *)param_2[2];
          if ((ulonglong *)param_2[2] == (ulonglong *)0x0) {
            puVar9 = param_2;
          }
          local_e8 = 5;
          FUN_14493566c(&local_dc,0,puVar9,iVar10 * 5);
          puVar9 = &local_88;
          FUN_147020140(puVar9,&local_dc);
          puVar6 = local_98;
          if (local_98 == (undefined4 *)0x0) {
            puVar6 = &local_a8;
          }
          uVar7 = uVar7 & 0xffffffff;
          iVar10 = 0;
        }
        else {
          uVar5 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
          if (uStack_d0._4_4_ < uVar5) {
            FUN_14700a186(&local_d8,uVar7 & 0xffffffff);
          }
          *(longlong *)(local_d8 + lVar11 * 8) = lVar1;
          iVar10 = iVar10 * 5;
          uVar5 = FUN_144a54ea4(&local_a8,5);
          puVar9 = (ulonglong *)param_2[2];
          if ((ulonglong *)param_2[2] == (ulonglong *)0x0) {
            puVar9 = param_2;
          }
          puVar6 = local_98;
          if (local_98 == (undefined4 *)0x0) {
            puVar6 = &local_a8;
          }
          uVar7 = (ulonglong)uVar5;
        }
        local_e8 = 5;
        FUN_14493566c(puVar6,uVar7,puVar9,iVar10);
        uVar4 = uVar4 + 1;
      } while (uVar8 != uVar4);
    }
    lVar1 = *param_1;
    lVar11 = param_1[1];
    *param_1 = local_d8;
    param_1[1] = uStack_d0;
    uVar8 = *param_2;
    uVar4 = param_2[1];
    local_78 = param_2[2];
    uStack_70 = param_2[3];
    param_2[2] = (ulonglong)local_98;
    param_2[3] = uStack_90;
    *param_2 = CONCAT44(uStack_a4,local_a8);
    param_2[1] = CONCAT44(uStack_9c,uStack_a0);
    local_88._0_4_ = (undefined4)uVar8;
    local_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uStack_80._0_4_ = (undefined4)uVar4;
    uStack_80._4_4_ = (undefined4)(uVar4 >> 0x20);
    local_a8 = (undefined4)local_88;
    uStack_a4 = local_88._4_4_;
    uStack_a0 = (undefined4)uStack_80;
    uStack_9c = uStack_80._4_4_;
    local_d8 = lVar1;
    uStack_d0 = lVar11;
    local_98 = (undefined4 *)local_78;
    uStack_90 = uStack_70;
    local_88 = uVar8;
    uStack_80 = uVar4;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147015a98 FUN_147015a98 body=880 status=ok
// SIG undefined FUN_147015a98(void)

void FUN_147015a98(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong *local_e8;
  uint local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  int *local_c8;
  ulonglong uStack_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar6 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)uVar6;
  if (uVar8 != 0) {
    local_b0 = *param_1;
    local_c8 = (int *)0x0;
    uStack_c0 = 0;
    local_e8 = param_1;
    FUN_144a1a59e(&local_c8,uVar8,1);
    if (0 < (int)uVar6) {
      uVar5 = 0;
      do {
        local_c8[uVar5] = (int)uVar5;
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
    FUN_147020692(local_c8,uStack_c0 & 0xffffffff,&local_b0);
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = (undefined4 *)0x0;
    uStack_90 = 0x8000000000;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    FUN_14700a3ca(&local_d8,uVar6);
    FUN_1456bd906(&local_a8,uVar8);
    lVar1 = local_b0;
    uVar5 = uStack_d0;
    iVar10 = *local_c8;
    lVar11 = (longlong)(int)uStack_d0;
    uVar3 = (int)uStack_d0 + 1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar3);
    if (uStack_d0._4_4_ < uVar3) {
      FUN_14700a186(&local_d8,uVar5 & 0xffffffff);
    }
    *(undefined8 *)(local_d8 + lVar11 * 8) = *(undefined8 *)(lVar1 + (longlong)iVar10 * 8);
    uVar4 = FUN_144a54ea4(&local_a8,1);
    puVar9 = (ulonglong *)param_2[2];
    if ((ulonglong *)param_2[2] == (ulonglong *)0x0) {
      puVar9 = param_2;
    }
    puVar7 = local_98;
    if (local_98 == (undefined4 *)0x0) {
      puVar7 = &local_a8;
    }
    local_f8 = 1;
    FUN_14493566c(puVar7,uVar4,puVar9,iVar10);
    if (uVar6 != 1) {
      uVar5 = 1;
      do {
        uVar2 = uStack_d0;
        iVar10 = local_c8[uVar5];
        lVar1 = *(longlong *)(local_b0 + (longlong)iVar10 * 8);
        lVar11 = (longlong)(int)uStack_d0;
        iVar12 = (int)uStack_d0 + -1;
        if (lVar1 == *(longlong *)(local_d8 + (longlong)iVar12 * 8)) {
          local_88 = local_88 & 0xffffffff00000000;
          puVar7 = local_98;
          if (local_98 == (undefined4 *)0x0) {
            puVar7 = &local_a8;
          }
          local_f8 = 1;
          FUN_14493566c(&local_88,0,puVar7,iVar12);
          local_dc = 0;
          puVar9 = (ulonglong *)param_2[2];
          if ((ulonglong *)param_2[2] == (ulonglong *)0x0) {
            puVar9 = param_2;
          }
          local_f8 = 1;
          FUN_14493566c(&local_dc,0,puVar9,iVar10);
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 | local_dc);
          puVar7 = local_98;
          if (local_98 == (undefined4 *)0x0) {
            puVar7 = &local_a8;
          }
          puVar9 = &local_88;
          iVar10 = 0;
        }
        else {
          uVar6 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
          if (uStack_d0._4_4_ < uVar6) {
            FUN_14700a186(&local_d8,uVar2 & 0xffffffff);
          }
          *(longlong *)(local_d8 + lVar11 * 8) = lVar1;
          iVar12 = FUN_144a54ea4(&local_a8,1);
          puVar9 = (ulonglong *)param_2[2];
          if ((ulonglong *)param_2[2] == (ulonglong *)0x0) {
            puVar9 = param_2;
          }
          puVar7 = local_98;
          if (local_98 == (undefined4 *)0x0) {
            puVar7 = &local_a8;
          }
        }
        local_f8 = 1;
        FUN_14493566c(puVar7,iVar12,puVar9,iVar10);
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
    lVar1 = *local_e8;
    lVar11 = local_e8[1];
    *local_e8 = local_d8;
    local_e8[1] = uStack_d0;
    uVar8 = *param_2;
    uVar5 = param_2[1];
    local_78 = param_2[2];
    uStack_70 = param_2[3];
    param_2[2] = (ulonglong)local_98;
    param_2[3] = uStack_90;
    *param_2 = CONCAT44(uStack_a4,local_a8);
    param_2[1] = CONCAT44(uStack_9c,uStack_a0);
    local_88._0_4_ = (uint)uVar8;
    local_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uStack_80._0_4_ = (undefined4)uVar5;
    uStack_80._4_4_ = (undefined4)(uVar5 >> 0x20);
    local_a8 = (uint)local_88;
    uStack_a4 = local_88._4_4_;
    uStack_a0 = (undefined4)uStack_80;
    uStack_9c = uStack_80._4_4_;
    local_d8 = lVar1;
    uStack_d0 = lVar11;
    local_98 = (undefined4 *)local_78;
    uStack_90 = uStack_70;
    local_88 = uVar8;
    uStack_80 = uVar5;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147015e0a FUN_147015e0a body=141 status=ok
// SIG undefined FUN_147015e0a(void)

void FUN_147015e0a(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)uVar1;
  if (uVar8 != 0) {
    lVar2 = *param_1;
    FUN_147020a63(lVar2,uVar8);
    uVar5 = 1;
    if (1 < (int)uVar1) {
      uVar5 = uVar1;
    }
    uVar4 = 1;
    while (uVar7 = uVar4, uVar7 - (uVar5 - 1) != 1) {
      uVar4 = uVar7 + 1;
      if (*(longlong *)(lVar2 + -8 + uVar7 * 8) == *(longlong *)(lVar2 + uVar7 * 8)) {
        if ((int)uVar4 < (int)uVar1) {
          do {
            lVar3 = *(longlong *)(lVar2 + uVar4 * 8);
            iVar6 = (int)uVar7;
            if (lVar3 != *(longlong *)(lVar2 + -8 + (longlong)iVar6 * 8)) {
              uVar7 = (ulonglong)(iVar6 + 1);
              *(longlong *)(lVar2 + (longlong)iVar6 * 8) = lVar3;
            }
            uVar4 = uVar4 + 1;
          } while (uVar8 != uVar4);
        }
        FUN_14701fd8c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147015e98 FUN_147015e98 body=143 status=ok
// SIG undefined FUN_147015e98(void)

undefined4 FUN_147015e98(undefined8 param_1,undefined2 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_146858cc6();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    local_34 = 0xffffffff;
    local_30 = 0;
    uVar3 = FUN_147016000(param_1);
    if ((char)uVar3 != '\0') {
      uVar2 = FUN_144aa71ce(&DAT_14c99df10,&local_34);
      *param_2 = uVar2;
      *param_3 = local_30;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147015f28 FUN_147015f28 body=215 status=ok
// SIG undefined FUN_147015f28(void)

undefined8 * FUN_147015f28(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 & 2) == 0) {
    if ((bVar1 & 4) == 0) {
      param_2[2] = *(undefined8 *)((longlong)param_1 + 0xc);
      if ((bVar1 & 1) != 0) {
        param_2[1] = DAT_14c99df08;
      }
    }
    else {
      param_2[3] = *(undefined8 *)((longlong)param_1 + 0xc);
    }
  }
  else {
    uVar2 = thunk_FUN_14041e92e();
    lVar3 = FUN_144b00ba4(uVar2);
    *param_2 = *(undefined8 *)(lVar3 + 0x18);
    lVar3 = thunk_FUN_14041e92e();
    param_2[2] = *(undefined8 *)(lVar3 + 0x18);
    local_38 = *(undefined8 *)((longlong)param_1 + 0xc);
    local_30 = *(undefined4 *)(DAT_14c99df10 + (ulonglong)*(ushort *)((longlong)param_1 + 10) * 4);
    local_28 = 0;
    FUN_14041ecbc(&local_38,param_2 + 3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147016000 FUN_147016000 body=604 status=ok
// SIG undefined FUN_147016000(void)

ulonglong FUN_147016000(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_147016548();
  if ((cVar1 == '\0') || (DAT_14c83bb20 == (longlong *)0x0 || DAT_14c83bb28 == 0)) {
    uVar4 = 0;
    goto LAB_147016047;
  }
  cVar1 = (**(code **)(*DAT_14c83bb20 + 0x30))();
  uVar4 = 0;
  if (cVar1 == '\0') goto LAB_147016047;
  FUN_1400021e4(param_1 + 0x18,&local_48);
  FUN_140056680(&local_58,&DAT_149e5e24e);
  uVar7 = (ulonglong)(local_50 - 1);
  puVar8 = local_58;
  if (local_50 == 0) {
    puVar8 = &DAT_149dfb77a;
    uVar7 = uVar4;
  }
  local_70 = 0xffffffff;
  local_78 = 0;
  iVar2 = FUN_1447ee042(&local_48,puVar8,uVar7,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar2 == -1) goto LAB_1470161f4;
  if (local_48[iVar2] == 0x3a) {
    uVar4 = 0;
    if (local_48[(longlong)iVar2 + 1] == 0x3a) {
      iVar6 = local_40 + -1;
      if (local_40 == 0) {
        iVar6 = 0;
      }
      if (iVar2 < iVar6 && -1 < iVar2) {
        uVar5 = iVar2 + 2;
        if ((iVar6 - uVar5 == 0 || iVar6 < (int)uVar5) || iVar2 == 0) {
LAB_1470161f4:
          uVar4 = 0;
        }
        else {
          puVar8 = local_48;
          if (local_40 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          FUN_1400089be(&local_58,iVar2,puVar8);
          puVar8 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar8 = local_58;
          }
          plVar3 = DAT_14c83bb20;
          if (DAT_14c83bb28 == 0) {
            plVar3 = (longlong *)0x0;
          }
          iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,puVar8);
          if (iVar2 + 1U < 2) {
            puVar8 = local_58;
            if (local_50 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            plVar3 = DAT_14c83f378;
            if (DAT_14c83f380 == 0) {
              plVar3 = (longlong *)0x0;
            }
            iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,puVar8);
            if (iVar2 + 1U < 2) {
              if (local_58 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1470161f4;
            }
          }
          puVar8 = local_48;
          if (local_40 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          FUN_1446f82e2(&local_60,iVar6 - uVar5,puVar8 + uVar5,1);
          *param_2 = iVar2;
          *(undefined8 *)(param_2 + 1) = local_60;
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar4 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
        }
      }
    }
  }
  else {
    uVar4 = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8(local_48);
  }
LAB_147016047:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701625d FUN_14701625d body=56 status=ok
// SIG undefined FUN_14701625d(void)

undefined8 FUN_14701625d(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1448332aa(param_1,&DAT_149fcaa14);
  if (iVar1 < 1) {
    FUN_140125662(param_1,param_2);
  }
  else {
    FUN_14483350c();
  }
  return param_1;
}



// FUNCTION 147016296 FUN_147016296 body=132 status=ok
// SIG undefined FUN_147016296(void)

undefined4 FUN_147016296(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149fcba90;
  local_58[0] = &LAB_142aeb04a;
  local_30 = param_1;
  local_28 = param_2;
  uVar1 = FUN_14701631c(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14701631c FUN_14701631c body=242 status=ok
// SIG undefined FUN_14701631c(void)

undefined8 FUN_14701631c(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  byte local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = 1;
  do {
    bVar1 = *(byte *)((longlong)L"NexusAssetRegistryState" + lVar6 + 0x2f);
    if ((*(byte *)(param_1 + 0x20) & bVar1) != 0) {
      local_4b = (&DAT_149fcaa54)[lVar6];
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      local_4c = bVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4,&local_4c,&local_4b);
      if (cVar3 != '\0') {
        uVar4 = 1;
        goto LAB_1470163e3;
      }
    }
    lVar6 = lVar6 + 2;
  } while (lVar6 != 7);
  if (*(char *)(param_1 + 0x20) == '\b') {
    local_49 = 0x87;
    local_4a = 8;
    pcVar2 = (code *)*param_2;
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    cVar3 = (*pcVar2)(uVar4,&local_4a,&local_49);
    uVar4 = 1;
    if (cVar3 != '\0') goto LAB_1470163e3;
  }
  uVar4 = 0;
LAB_1470163e3:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147016410 FUN_147016410 body=63 status=ok
// SIG undefined FUN_147016410(void)

void FUN_147016410(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145969d46(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14701a36a(param_1);
    return;
  }
  FUN_1470211a2(param_1);
  FUN_145969d46(param_1);
  return;
}



// FUNCTION 147016450 FUN_147016450 body=246 status=ok
// SIG undefined FUN_147016450(void)

longlong FUN_147016450(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)*(int *)(param_1 + 0x48) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x48) < 2) {
    lVar2 = 0;
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x98) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x98) < 2) {
    lVar1 = 0;
  }
  local_20 = lVar2 + (ulonglong)(*(int *)(param_1 + 0x2c) + 0x1fU >> 5) * 4 +
             ((longlong)*(int *)(param_1 + 0x5c) + (longlong)*(int *)(param_1 + 0xc)) * 0x20 +
             (ulonglong)(*(int *)(param_1 + 0x7c) + 0x1fU >> 5) * 4 + lVar1 +
             (longlong)*(int *)(param_1 + 0x10c) * 8 + (longlong)*(int *)(param_1 + 0xac) * 0xc;
  FUN_142ae56c8(param_1 + 0x110,&local_20);
  FUN_142ae56c8(param_1 + 0x160,&local_20);
  FUN_142ae56c8(param_1 + 0xb0,&local_20);
  FUN_142ae5880(param_1 + 0x1b0,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147016548 FUN_147016548 body=56 status=ok
// SIG undefined FUN_147016548(void)

bool FUN_147016548(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  uVar1 = thunk_FUN_14041e92e();
  lVar2 = FUN_144b00ba4(uVar1);
  if (*param_1 == *(longlong *)(lVar2 + 0x18)) {
    lVar2 = thunk_FUN_14041e92e();
    bVar3 = param_1[2] == *(longlong *)(lVar2 + 0x18);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


