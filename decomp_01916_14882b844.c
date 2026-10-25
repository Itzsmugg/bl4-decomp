// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14882b844 FUN_14882b844 body=352 status=ok
// SIG undefined FUN_14882b844(void)

undefined4 *
FUN_14882b844(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14882b9a6(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_48[2] = puVar1[2];
  uVar3 = puVar1[1];
  *local_48 = *puVar1;
  local_48[1] = uVar3;
  local_48[3] = *puVar2;
  local_48[4] = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = FUN_1448eb174(local_48,0x18,0);
  local_68 = param_4;
  cVar4 = FUN_14882ba94(param_1,uVar5,local_48,&local_54);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar6 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0x2c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 5) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14882bc54(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882b9a6 FUN_14882b9a6 body=238 status=ok
// SIG undefined FUN_14882b9a6(void)

int * FUN_14882b9a6(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 14882ba94 FUN_14882ba94 body=161 status=ok
// SIG undefined FUN_14882ba94(void)

void FUN_14882ba94(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  int iVar13;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar13 = FUN_14882bb36();
    if (iVar13 != -1) {
      puVar2 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x30);
      plVar3 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar13 * 0x30);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar8 = param_3[4];
      uVar9 = param_3[5];
      uVar10 = param_3[6];
      uVar11 = param_3[7];
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_3 + 8);
      puVar2[4] = uVar8;
      puVar2[5] = uVar9;
      puVar2[6] = uVar10;
      puVar2[7] = uVar11;
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_14882bbbe(param_1,*param_4,1);
      *param_4 = iVar13;
      uVar12 = 1;
      goto LAB_14882bab5;
    }
  }
  uVar12 = 0;
LAB_14882bab5:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
  return;
}



// FUNCTION 14882bb36 FUN_14882bb36 body=135 status=ok
// SIG undefined FUN_14882bb36(void)

int FUN_14882bb36(longlong *param_1,uint param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x30;
        if ((*(double *)(lVar3 + lVar5) == *param_3) &&
           (!NAN(*(double *)(lVar3 + lVar5)) && !NAN(*param_3))) {
          dVar1 = *(double *)(lVar3 + lVar5 + 8);
          if ((dVar1 == param_3[1]) && (!NAN(dVar1) && !NAN(param_3[1]))) {
            dVar1 = *(double *)(lVar3 + lVar5 + 0x10);
            if ((dVar1 == param_3[2]) && (!NAN(dVar1) && !NAN(param_3[2]))) {
              return iVar2;
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x28 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 14882bbbe FUN_14882bbbe body=150 status=ok
// SIG undefined FUN_14882bbbe(void)

void FUN_14882bbbe(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
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
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14882bc54 FUN_14882bc54 body=453 status=ok
// SIG undefined FUN_14882bc54(void)

void FUN_14882bc54(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_1448eb174(lVar3 + lVar10,0x18,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
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



// FUNCTION 14882be1a FUN_14882be1a body=132 status=ok
// SIG undefined FUN_14882be1a(void)

void FUN_14882be1a(longlong param_1,int param_2)

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



// FUNCTION 14882bea0 FUN_14882bea0 body=322 status=ok
// SIG undefined FUN_14882bea0(void)

void FUN_14882bea0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 14882bfe4 FUN_14882bfe4 body=291 status=ok
// SIG undefined FUN_14882bfe4(void)

void FUN_14882bfe4(longlong *param_1)

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
      if (*(longlong *)(*local_60 + 0x28 + (longlong)iStack_44 * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14882c108 FUN_14882c108 body=96 status=ok
// SIG undefined FUN_14882c108(void)

void FUN_14882c108(longlong param_1,int param_2)

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



// FUNCTION 14882c168 FUN_14882c168 body=31 status=ok
// SIG undefined FUN_14882c168(void)

undefined8 FUN_14882c168(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14882c19c FUN_14882c19c body=85 status=ok
// SIG undefined FUN_14882c19c(void)

void FUN_14882c19c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8e70;
  return;
}



// FUNCTION 14882c1f2 FUN_14882c1f2 body=118 status=ok
// SIG undefined FUN_14882c1f2(void)

void FUN_14882c1f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f8e70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014882c259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14882c268 FUN_14882c268 body=105 status=ok
// SIG undefined FUN_14882c268(void)

undefined8 FUN_14882c268(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14603054e(param_1 + 0x18,local_20);
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



// FUNCTION 14882c2d2 FUN_14882c2d2 body=45 status=ok
// SIG undefined FUN_14882c2d2(void)

longlong FUN_14882c2d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145cb04fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14882c300 FUN_14882c300 body=54 status=ok
// SIG undefined FUN_14882c300(void)

longlong FUN_14882c300(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 14882c3e4 FUN_14882c3e4 body=322 status=ok
// SIG undefined FUN_14882c3e4(void)

void FUN_14882c3e4(longlong *param_1)

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



// FUNCTION 14882c528 FUN_14882c528 body=48 status=ok
// SIG undefined FUN_14882c528(void)

void FUN_14882c528(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 14882c558 FUN_14882c558 body=48 status=ok
// SIG undefined FUN_14882c558(void)

void FUN_14882c558(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 14882c588 FUN_14882c588 body=48 status=ok
// SIG undefined FUN_14882c588(void)

void FUN_14882c588(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x90,0x10);
  }
  return;
}



// FUNCTION 14882c5b8 FUN_14882c5b8 body=48 status=ok
// SIG undefined FUN_14882c5b8(void)

void FUN_14882c5b8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14882c5e8 FUN_14882c5e8 body=48 status=ok
// SIG undefined FUN_14882c5e8(void)

void FUN_14882c5e8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14882c618 FUN_14882c618 body=160 status=ok
// SIG undefined FUN_14882c618(void)

void FUN_14882c618(undefined8 *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined *local_30;
  undefined4 *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_28 = &local_34;
    local_34 = 1;
    local_30 = &DAT_14cb788f8;
    FUN_14049fede(lVar2 + 0x18,&local_1c,&local_30,0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_1c * 0x40);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 1) & 2) == 0)) {
      FUN_140126aca(lVar2,&DAT_149e02088);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882c6b9 FUN_14882c6b9 body=890 status=ok
// SIG undefined FUN_14882c6b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14882c6b9(undefined4 *param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_2c8 [40];
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined8 local_250;
  undefined8 local_248;
  longlong *plStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  longlong *plStack_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [24];
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 local_170;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (DAT_14cb78a80 != '\0') {
    if (param_2 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0x180))(param_2);
    }
    FUN_141246736(&local_1f0,uVar8);
    plVar11 = (longlong *)CONCAT44(uStack_1e4,local_1e8);
    if (plVar11 != (longlong *)0x0) {
      iVar7 = (int)plVar11[1];
      do {
        if (iVar7 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
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
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_1e4,local_1e8) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_1e4,local_1e8) + 0x10))();
      }
      puVar4 = local_1f0;
      if (plVar11 != (longlong *)0x0) {
        if (local_1f0 == (undefined1 *)0x0) {
          *(undefined1 *)(param_1 + 6) = 0;
        }
        else {
          lVar9 = FUN_14073fae1();
          uVar8 = FUN_1408fb156(lVar9 + 0x118);
          uVar10 = FUN_1402d24da(lVar9 + 0xf0);
          FUN_14038d0a4(&local_1f0,uVar10,uVar8,0);
          FUN_14058e2b0(local_1f0,&local_248,&local_1f0);
          plVar2 = plStack_240;
          local_2a0 = local_248;
          local_248 = 0;
          plStack_240 = (longlong *)0x0;
          FUN_143d1c89e(&local_1f0);
          local_248 = 0xffffffffffffffff;
          plStack_240 = (longlong *)((ulonglong)plStack_240 & 0xffffffff00000000);
          local_238 = _DAT_14cb78a48;
          uStack_234 = uRam000000014cb78a4c;
          uStack_230 = _DAT_14cb78a50;
          uStack_22c = uRam000000014cb78a54;
          local_228 = DAT_14cb78a58;
          local_220 = _DAT_14cb78a48;
          uStack_21c = uRam000000014cb78a4c;
          uStack_218 = _DAT_14cb78a50;
          uStack_214 = uRam000000014cb78a54;
          local_210 = DAT_14cb78a58;
          FUN_144b2e8e2(local_208);
          local_1f0 = (undefined1 *)0x0;
          local_1e8 = 0xffffffff;
          local_1e0 = 0;
          plStack_1d8 = (longlong *)0x0;
          local_1d0 = (undefined1 *)0x0;
          FUN_144b2e8f4(&local_1c8,&DAT_14cb78a48);
          local_180 = 0;
          uStack_178 = 0xffffffff;
          uStack_174 = 0xffffffff;
          local_170 = 1;
          uVar8 = *(undefined8 *)(lVar9 + 0xe0);
          FUN_144b2e8f4(&local_298,param_3);
          local_1c8 = local_298;
          uStack_1c4 = uStack_294;
          uStack_1c0 = uStack_290;
          uStack_1bc = uStack_28c;
          local_1b8 = (undefined4)local_288;
          uStack_1b4 = local_288._4_4_;
          uStack_1b0 = uStack_280;
          uStack_1ac = uStack_27c;
          local_1a8 = local_278;
          uStack_1a4 = uStack_274;
          uStack_1a0 = uStack_270;
          uStack_19c = uStack_26c;
          local_250 = uVar8;
          FUN_144a7c4b8(local_198,local_268);
          local_180 = local_250;
          if (local_260 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_260 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_260)(local_260);
              LOCK();
              piVar1 = (int *)((longlong)local_260 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_260 + 0x10))(local_260);
              }
            }
          }
          plVar3 = plStack_1d8;
          local_170 = 0;
          local_1d0 = puVar4;
          local_1f0 = &DAT_3f8000003f800000;
          local_1e8 = 0;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
            UNLOCK();
          }
          local_1e0 = local_2a0;
          plStack_1d8 = plVar2;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          local_288 = *(undefined8 *)(param_3 + 4);
          local_298 = *param_3;
          uStack_294 = param_3[1];
          uStack_290 = param_3[2];
          uStack_28c = param_3[3];
          cVar6 = FUN_14488954d(&local_1f0,&local_298,0);
          if (cVar6 != '\0') {
            *(undefined8 *)(param_1 + 4) = local_288;
            *param_1 = local_298;
            param_1[1] = uStack_294;
            param_1[2] = uStack_290;
            param_1[3] = uStack_28c;
          }
          *(bool *)(param_1 + 6) = cVar6 != '\0';
          FUN_144b39986(&local_1f0);
          if (local_200 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_200 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_200)(local_200);
              LOCK();
              piVar1 = (int *)((longlong)local_200 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_200 + 0x10))(local_200);
              }
            }
          }
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        goto LAB_14882c9d8;
      }
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
LAB_14882c9d8:
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14882ca84 FUN_14882ca84 body=341 status=ok
// SIG undefined FUN_14882ca84(void)

undefined8 FUN_14882ca84(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar6 = (longlong *)*param_1;
    lVar7 = (longlong)*(int *)(param_1 + 1) * 0x18;
    do {
      lVar4 = plVar6[1];
      if (lVar4 == 0) {
        uVar3 = FUN_141030812();
        lVar4 = FUN_14477b664(uVar3);
        plVar6[1] = lVar4;
      }
      lVar5 = plVar6[2];
      if (lVar5 == 0) {
        if ((lVar4 != 0) && (*plVar6 != 0)) {
          plVar1 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar6[2] = 0;
          }
          else {
            uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar5 = FUN_144aff482(uVar3,plVar6);
            plVar6[2] = lVar5;
            if (lVar5 != 0) {
              lVar4 = plVar6[1];
              goto LAB_14882cace;
            }
          }
        }
      }
      else {
LAB_14882cace:
        if (lVar4 == 0) {
          uVar3 = FUN_141030812();
          lVar4 = FUN_14477b664(uVar3);
          plVar6[1] = lVar4;
          lVar5 = plVar6[2];
          if (lVar5 == 0) {
            if (lVar4 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = 0;
              if (*plVar6 != 0) {
                plVar1 = *(longlong **)(lVar4 + 0xb8);
                if ((plVar1 == (longlong *)0x0) ||
                   (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                  lVar5 = 0;
                }
                else {
                  uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                  lVar5 = FUN_144aff482(uVar3,plVar6);
                }
                plVar6[2] = lVar5;
              }
            }
          }
        }
        if (lVar5 == param_2) {
          return 1;
        }
      }
      plVar6 = plVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 14882cc02 FUN_14882cc02 body=22 status=ok
// SIG undefined FUN_14882cc02(void)

undefined8 FUN_14882cc02(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb78ae0;
  if (DAT_14cb78ae0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb78ae0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb78ae0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb78ae0[0x3a] <= *(int *)((longlong)DAT_14cb78ae0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb78ae0 + 0x300))(DAT_14cb78ae0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14882cc18 FUN_14882cc18 body=923 status=ok
// SIG undefined FUN_14882cc18(void)

ulonglong FUN_14882cc18(longlong *param_1,longlong param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  undefined8 unaff_R13;
  undefined7 uVar15;
  ulonglong uVar14;
  int iVar16;
  int iVar17;
  undefined1 auStack_88 [32];
  longlong *local_68;
  char local_5c [4];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14882d41e(local_5c);
  uVar15 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (local_5c[0] == '\x01') {
    iVar16 = 0;
    if (param_2 == 0) {
LAB_14882cd4f:
      iVar17 = 0;
    }
    else {
      iVar17 = 0;
      if ((longlong)(int)param_1[1] != 0) {
        lVar11 = *param_1;
        lVar9 = (longlong)(int)param_1[1] * 0x78;
        iVar16 = 0;
        do {
          cVar3 = FUN_14882d14a(lVar11,param_2);
          if (cVar3 != '\0') {
            iVar16 = iVar16 + (uint)(*(char *)(lVar11 + 8) == '\x01');
          }
          lVar11 = lVar11 + 0x78;
          lVar9 = lVar9 + -0x78;
        } while (lVar9 != 0);
        if ((longlong)(int)param_1[1] == 0) goto LAB_14882cd4f;
        lVar11 = *param_1;
        lVar9 = (longlong)(int)param_1[1] * 0x78;
        iVar17 = 0;
        do {
          cVar3 = FUN_14882d14a(lVar11,param_2);
          if (cVar3 != '\0') {
            iVar17 = iVar17 + (uint)(*(char *)(lVar11 + 8) == '\x02');
          }
          lVar11 = lVar11 + 0x78;
          lVar9 = lVar9 + -0x78;
        } while (lVar9 != 0);
      }
    }
    uVar14 = CONCAT71(uVar15,1);
    if (iVar17 + iVar16 < local_50) goto LAB_14882ce72;
    if (local_4c == 0) {
LAB_14882cf9b:
      uVar14 = 0;
      goto LAB_14882ce72;
    }
    if ((longlong)(int)param_1[1] == 0) goto LAB_14882ce72;
    lVar11 = *param_1;
    lVar9 = (longlong)(int)param_1[1] * 0x78;
    iVar8 = 0;
    do {
      cVar3 = FUN_14882d14a(lVar11,param_2);
      if ((cVar3 != '\0') && (iVar8 < (iVar17 + iVar16 + 1) - local_50)) {
        *(undefined1 *)(lVar11 + 0x70) = 1;
        iVar8 = iVar8 + 1;
      }
      lVar11 = lVar11 + 0x78;
      lVar9 = lVar9 + -0x78;
    } while (lVar9 != 0);
    iVar16 = (int)param_1[1];
    lVar11 = (longlong)iVar16;
    if (lVar11 == 0) goto LAB_14882ce72;
    lVar2 = *param_1;
    lVar9 = lVar2 + 0xe8;
    iVar8 = 0;
    bVar7 = *(byte *)(lVar2 + 0x70);
    iVar17 = 0;
    local_68 = param_1;
    do {
      lVar12 = (longlong)iVar17;
      iVar10 = iVar17 + 1;
      if (iVar17 + 1 < iVar16) {
        iVar10 = iVar16;
      }
      lVar4 = lVar12 * 0x78;
      pbVar13 = (byte *)(lVar4 + lVar9);
      iVar5 = iVar17;
      do {
        lVar12 = lVar12 + 1;
        iVar6 = iVar10;
        if (lVar11 <= lVar12) break;
        iVar5 = iVar5 + 1;
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 0x78;
        iVar6 = iVar5;
      } while ((bVar7 & 1) == bVar1);
      iVar10 = iVar6 - iVar17;
      if ((bVar7 & 1) == 0) {
        if (iVar8 != iVar17) {
          memmove((void *)((longlong)iVar8 * 0x78 + lVar2),(void *)(lVar4 + lVar2),
                  (longlong)iVar10 * 0x78);
        }
        iVar8 = iVar8 + iVar10;
      }
      else {
        FUN_1457e62fb(lVar4 + lVar2,iVar10);
      }
      bVar7 = bVar7 ^ 1;
      iVar17 = iVar6;
    } while (lVar12 < lVar11);
  }
  else {
    iVar16 = 0;
    if ((param_2 != 0) && ((longlong)(int)param_1[1] != 0)) {
      lVar11 = *param_1;
      lVar9 = (longlong)(int)param_1[1] * 0x78;
      iVar16 = 0;
      do {
        cVar3 = FUN_14882d14a(lVar11,param_2);
        if (cVar3 != '\0') {
          iVar16 = iVar16 + (uint)(*(char *)(lVar11 + 8) == param_3);
        }
        lVar11 = lVar11 + 0x78;
        lVar9 = lVar9 + -0x78;
      } while (lVar9 != 0);
    }
    iVar17 = local_54;
    if ((param_3 != '\x02') && (iVar17 = 0, param_3 == '\x01')) {
      iVar17 = local_58;
    }
    uVar14 = CONCAT71(uVar15,1);
    if (iVar16 < iVar17) goto LAB_14882ce72;
    if (local_4c == 0) goto LAB_14882cf9b;
    if ((longlong)(int)param_1[1] == 0) goto LAB_14882ce72;
    lVar11 = *param_1;
    lVar9 = (longlong)(int)param_1[1] * 0x78;
    iVar8 = 0;
    do {
      cVar3 = FUN_14882d14a(lVar11,param_2);
      if (((cVar3 != '\0') && (*(char *)(lVar11 + 8) == param_3)) && (iVar8 < (iVar16 + 1) - iVar17)
         ) {
        *(undefined1 *)(lVar11 + 0x70) = 1;
        iVar8 = iVar8 + 1;
      }
      lVar11 = lVar11 + 0x78;
      lVar9 = lVar9 + -0x78;
    } while (lVar9 != 0);
    iVar16 = (int)param_1[1];
    lVar11 = (longlong)iVar16;
    if (lVar11 == 0) goto LAB_14882ce72;
    lVar2 = *param_1;
    lVar9 = lVar2 + 0xe8;
    iVar8 = 0;
    bVar7 = *(byte *)(lVar2 + 0x70);
    iVar17 = 0;
    local_68 = param_1;
    do {
      lVar12 = (longlong)iVar17;
      iVar10 = iVar17 + 1;
      if (iVar17 + 1 < iVar16) {
        iVar10 = iVar16;
      }
      lVar4 = lVar12 * 0x78;
      pbVar13 = (byte *)(lVar4 + lVar9);
      iVar5 = iVar17;
      do {
        lVar12 = lVar12 + 1;
        iVar6 = iVar10;
        if (lVar11 <= lVar12) break;
        iVar5 = iVar5 + 1;
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 0x78;
        iVar6 = iVar5;
      } while ((bVar7 & 1) == bVar1);
      iVar10 = iVar6 - iVar17;
      if ((bVar7 & 1) == 0) {
        if (iVar8 != iVar17) {
          memmove((void *)((longlong)iVar8 * 0x78 + lVar2),(void *)(lVar4 + lVar2),
                  (longlong)iVar10 * 0x78);
        }
        iVar8 = iVar8 + iVar10;
      }
      else {
        FUN_1457e62fb(lVar4 + lVar2,iVar10);
      }
      bVar7 = bVar7 ^ 1;
      iVar17 = iVar6;
    } while (lVar12 < lVar11);
  }
  *(int *)(local_68 + 1) = iVar8;
  uVar14 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
LAB_14882ce72:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 14882cfb4 FUN_14882cfb4 body=256 status=ok
// SIG undefined FUN_14882cfb4(void)

ulonglong FUN_14882cfb4(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    plVar1 = param_1 + 2;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      FUN_14481578e(plVar1,0);
    }
    if ((longlong)(int)param_1[1] != 0) {
      lVar7 = *param_1;
      lVar6 = (longlong)(int)param_1[1] * 0x78;
      do {
        cVar3 = FUN_14882d14a(lVar7,param_2);
        if ((cVar3 != '\0') && (*(char *)(lVar7 + 8) == param_3)) {
          iVar2 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
            FUN_1446f48e2(plVar1,iVar2);
          }
          *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar7 + 0xc);
        }
        lVar7 = lVar7 + 0x78;
        lVar6 = lVar6 + -0x78;
      } while (lVar6 != 0);
    }
    FUN_144958a06(param_1[2],(int)param_1[3]);
    uVar4 = (ulonglong)*(uint *)(param_1 + 3);
    if (0 < (int)*(uint *)(param_1 + 3)) {
      uVar5 = 0;
      do {
        if (uVar5 != *(uint *)(*plVar1 + uVar5 * 4)) {
          uVar4 = uVar5 & 0xffffffff;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14882d0b6 FUN_14882d0b6 body=64 status=ok
// SIG undefined FUN_14882d0b6(void)

longlong FUN_14882d0b6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148835452(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x78 + *param_1;
  FUN_148835412(lVar2,1);
  return lVar2;
}



// FUNCTION 14882d0f6 FUN_14882d0f6 body=83 status=ok
// SIG undefined FUN_14882d0f6(void)

void FUN_14882d0f6(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x78);
  if (*(char *)(*param_1 + 0x60 + (longlong)(int)param_2 * 0x78) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x60) = 0;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)(int)(~param_2 + iVar1) * 0x78);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1488354e2(param_1);
  return;
}



// FUNCTION 14882d14a FUN_14882d14a body=118 status=ok
// SIG undefined FUN_14882d14a(void)

ulonglong FUN_14882d14a(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882d1c2 FUN_14882d1c2 body=254 status=ok
// SIG undefined FUN_14882d1c2(void)

undefined8 * FUN_14882d1c2(longlong param_1,undefined8 *param_2,double *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x60) != '\x01') ||
     (dVar2 = param_3[1] - *(double *)(param_1 + 0x38),
     dVar3 = *param_3 - *(double *)(param_1 + 0x30), lVar5 = FUN_14073fae1(),
     (double)(*(float *)(lVar5 + 0xe8) * *(float *)(lVar5 + 0xe8)) < dVar3 * dVar3 + dVar2 * dVar2))
  {
    uVar1 = FUN_148828ef6(param_1 + 0x18,param_3,param_4);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8;
    *(double *)(param_1 + 0x30) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    uVar4 = DAT_14c8464e8;
    *(double *)(param_1 + 0x48) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    *(undefined8 *)(param_1 + 0x58) = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(double *)(param_1 + 0x40) = param_3[2];
    dVar2 = param_3[1];
    *(double *)(param_1 + 0x30) = *param_3;
    *(double *)(param_1 + 0x38) = dVar2;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
  }
  param_2[2] = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14882d2c0 FUN_14882d2c0 body=349 status=ok
// SIG undefined FUN_14882d2c0(void)

undefined8 FUN_14882d2c0(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  char local_4c [4];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14882d41e(local_4c);
  if (local_4c[0] == '\x01') {
    iVar5 = 0;
    if (param_2 == 0) {
LAB_14882d3d8:
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      if ((longlong)(int)param_1[1] != 0) {
        lVar4 = *param_1;
        lVar6 = (longlong)(int)param_1[1] * 0x78;
        iVar5 = 0;
        do {
          cVar1 = FUN_14882d14a(lVar4,param_2);
          if (cVar1 != '\0') {
            iVar5 = iVar5 + (uint)(*(char *)(lVar4 + 8) == '\x01');
          }
          lVar4 = lVar4 + 0x78;
          lVar6 = lVar6 + -0x78;
        } while (lVar6 != 0);
        if ((longlong)(int)param_1[1] == 0) goto LAB_14882d3d8;
        lVar4 = *param_1;
        lVar6 = (longlong)(int)param_1[1] * 0x78;
        iVar3 = 0;
        do {
          cVar1 = FUN_14882d14a(lVar4,param_2);
          if (cVar1 != '\0') {
            iVar3 = iVar3 + (uint)(*(char *)(lVar4 + 8) == '\x02');
          }
          lVar4 = lVar4 + 0x78;
          lVar6 = lVar6 + -0x78;
        } while (lVar6 != 0);
      }
    }
    if (local_40 <= iVar5 + iVar3) {
LAB_14882d3ed:
      if (local_3c == 0) {
        uVar2 = 0;
        goto LAB_14882d3fa;
      }
    }
  }
  else {
    iVar5 = 0;
    if (param_2 != 0) {
      if ((longlong)(int)param_1[1] != 0) {
        lVar4 = *param_1;
        lVar6 = (longlong)(int)param_1[1] * 0x78;
        iVar5 = 0;
        do {
          cVar1 = FUN_14882d14a(lVar4,param_2);
          if (cVar1 != '\0') {
            iVar5 = iVar5 + (uint)(*(char *)(lVar4 + 8) == param_3);
          }
          lVar4 = lVar4 + 0x78;
          lVar6 = lVar6 + -0x78;
        } while (lVar6 != 0);
      }
    }
    if ((param_3 != '\x02') && (local_44 = 0, param_3 == '\x01')) {
      local_44 = local_48;
    }
    if (local_44 <= iVar5) goto LAB_14882d3ed;
  }
  uVar2 = 1;
LAB_14882d3fa:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14882d41e FUN_14882d41e body=91 status=ok
// SIG undefined FUN_14882d41e(void)

undefined8 * FUN_14882d41e(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 1;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x178) == '\x03')) {
    lVar3 = FUN_1401b2ade(param_2);
    if (lVar3 != 0) {
      uVar4 = (ulonglong)(*(char *)(lVar3 + 0x68) == '\x02');
    }
  }
  lVar3 = FUN_14073fae1();
  puVar1 = (undefined8 *)(lVar3 + 0x140 + uVar4 * 0x14);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar3 + 0x150 + uVar4 * 0x14);
  return param_1;
}



// FUNCTION 14882d47a FUN_14882d47a body=822 status=ok
// SIG undefined FUN_14882d47a(void)

void FUN_14882d47a(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_138 [40];
  wchar_t *local_110;
  int local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d0;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    uVar1 = *(undefined1 *)(param_1 + 8);
    uVar2 = FUN_148696388();
    FUN_1414aa4be(uVar2,local_c0,uVar1);
    FUN_1400021e4(local_c0,&local_110);
    _Str = local_110;
    if (local_108 == 0) {
      _Str = L"";
    }
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1449b853c(local_c0,_Str,sVar3 & 0xffffffff,1);
    }
    local_f0 = DAT_14cb78b08;
    local_f8 = DAT_14cb78b00;
    local_100 = local_38;
    FUN_1448075d0(&local_e8);
    FUN_141863b92(param_2,&local_e8,&local_100);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_110 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_e0 = DAT_14cb78b20;
    local_e8 = DAT_14cb78b18;
    FUN_1448075d0(local_c0);
    FUN_14187f678(param_2,local_c0,param_1 + 0xc);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_e0 = DAT_14cb78b38;
    local_e8 = DAT_14cb78b30;
    FUN_1448075d0(local_c0);
    FUN_14187f5dc(param_2,local_c0,param_1 + 0x10);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_e0 = DAT_14cb78b50;
    local_e8 = DAT_14cb78b48;
    FUN_1448075d0(local_c0);
    FUN_14882dd7c(param_2,local_c0,param_1 + 0x18);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_e0 = DAT_14cb78b68;
    local_e8 = DAT_14cb78b60;
    FUN_1448075d0(local_c0);
    FUN_14882dd7c(param_2,local_c0,param_1 + 0x20);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_e0 = DAT_14cb78b80;
    local_e8 = DAT_14cb78b78;
    FUN_1448075d0(local_c0);
    FUN_14882dd7c(param_2,local_c0,param_1 + 0x28);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_e0 = DAT_14cb78b98;
    local_e8 = DAT_14cb78b90;
    FUN_1448075d0(local_c0);
    FUN_14187f5dc(param_2,local_c0,param_1 + 0x68);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14882d7b2 FUN_14882d7b2 body=871 status=ok
// SIG undefined FUN_14882d7b2(void)

void FUN_14882d7b2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((byte *)*param_3 != (byte *)0x0) && ((~*(byte *)*param_3 & 3) == 0)) {
    FUN_14485c47a();
    uVar4 = FUN_148696388();
    local_58 = DAT_14cb78b08;
    local_60 = DAT_14cb78b00;
    FUN_1448075d0(local_50);
    puVar5 = (undefined8 *)FUN_144a06846(param_3,local_50);
    pbVar1 = (byte *)*puVar5;
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(pbVar1 + 8);
    }
    FUN_1400b22c2(&local_60,uVar8);
    uVar2 = FUN_1401e9588(uVar4,&local_60,0);
    *(undefined1 *)(param_1 + 8) = uVar2;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = DAT_14cb78b20;
    local_60 = DAT_14cb78b18;
    FUN_1448075d0(local_50);
    uVar4 = FUN_144a06846(param_3,local_50);
    uVar3 = FUN_140e1edd4(uVar4,0);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = DAT_14cb78b38;
    local_60 = DAT_14cb78b30;
    FUN_1448075d0(local_50);
    plVar6 = (longlong *)FUN_144a06846(param_3,local_50);
    if (*plVar6 == 0) {
      puVar7 = &DAT_14c9a12e0;
    }
    else {
      puVar7 = (undefined4 *)FUN_140625092(*plVar6,&DAT_14c9a12e0);
    }
    FUN_1447325ac(puVar7,&local_60,1);
    *(longlong *)(param_1 + 0x10) = local_60;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = DAT_14cb78b50;
    local_60 = DAT_14cb78b48;
    FUN_1448075d0(local_50);
    uVar4 = FUN_144a06846(param_3,local_50);
    uVar4 = FUN_147092096(uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = DAT_14cb78b68;
    local_60 = DAT_14cb78b60;
    FUN_1448075d0(local_50);
    uVar4 = FUN_144a06846(param_3,local_50);
    uVar4 = FUN_147092096(uVar4,0);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = DAT_14cb78b80;
    local_60 = DAT_14cb78b78;
    FUN_1448075d0(local_50);
    uVar4 = FUN_144a06846(param_3,local_50);
    uVar4 = FUN_147092096(uVar4,0);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = DAT_14cb78b98;
    local_60 = DAT_14cb78b90;
    FUN_1448075d0(local_50);
    plVar6 = (longlong *)FUN_144a06846(param_3,local_50);
    if (*plVar6 == 0) {
      puVar7 = &DAT_14c9a12e0;
    }
    else {
      puVar7 = (undefined4 *)FUN_140625092(*plVar6,&DAT_14c9a12e0);
    }
    FUN_1447325ac(puVar7,&local_60,1);
    *(longlong *)(param_1 + 0x68) = local_60;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 0x60) == '\x01') {
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882db1a FUN_14882db1a body=289 status=ok
// SIG undefined FUN_14882db1a(void)

undefined4 *
FUN_14882db1a(undefined8 *param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 == 0 || param_4 == 0) || ((longlong)*(int *)(param_1 + 1) == 0)) {
    uVar8 = 0;
  }
  else {
    puVar12 = (undefined4 *)*param_1;
    lVar11 = (longlong)*(int *)(param_1 + 1) * 0x78;
    do {
      cVar9 = FUN_14882d14a(puVar12,param_3);
      if ((cVar9 != '\0') && (*(char *)(puVar12 + 2) == '\x02')) {
        puVar10 = *(undefined4 **)(param_4 + 8);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = &DAT_14c9485f0;
        }
        FUN_1447325ac(puVar10,&local_48,1);
        if (*(longlong *)(puVar12 + 0x1a) == local_48) {
          uVar1 = *puVar12;
          uVar2 = puVar12[1];
          uVar3 = puVar12[2];
          uVar4 = puVar12[3];
          uVar5 = *(undefined8 *)(puVar12 + 4);
          uVar6 = *(undefined8 *)(puVar12 + 6);
          uVar7 = *(undefined8 *)(puVar12 + 10);
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar12 + 8);
          *(undefined8 *)(param_2 + 10) = uVar7;
          *(undefined8 *)(param_2 + 4) = uVar5;
          *(undefined8 *)(param_2 + 6) = uVar6;
          *param_2 = uVar1;
          param_2[1] = uVar2;
          param_2[2] = uVar3;
          param_2[3] = uVar4;
          cVar9 = *(char *)(puVar12 + 0x18);
          *(char *)(param_2 + 0x18) = cVar9;
          if (cVar9 == '\x01') {
            uVar1 = puVar12[0xc];
            uVar2 = puVar12[0xd];
            uVar3 = puVar12[0xe];
            uVar4 = puVar12[0xf];
            uVar5 = *(undefined8 *)(puVar12 + 0x10);
            uVar6 = *(undefined8 *)(puVar12 + 0x12);
            uVar7 = *(undefined8 *)(puVar12 + 0x16);
            *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(puVar12 + 0x14);
            *(undefined8 *)(param_2 + 0x16) = uVar7;
            *(undefined8 *)(param_2 + 0x10) = uVar5;
            *(undefined8 *)(param_2 + 0x12) = uVar6;
            param_2[0xc] = uVar1;
            param_2[0xd] = uVar2;
            param_2[0xe] = uVar3;
            param_2[0xf] = uVar4;
          }
          *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(puVar12 + 0x1c);
          *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(puVar12 + 0x1a);
          uVar8 = 1;
          break;
        }
      }
      puVar12 = puVar12 + 0x1e;
      uVar8 = 0;
      lVar11 = lVar11 + -0x78;
    } while (lVar11 != 0);
  }
  *(undefined1 *)(param_2 + 0x1e) = uVar8;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14882dc3c FUN_14882dc3c body=166 status=ok
// SIG undefined FUN_14882dc3c(void)

undefined8 *
FUN_14882dc3c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[2] = 0;
  *param_2 = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
  *(undefined4 *)(param_2 + 4) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
  param_2[5] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  FUN_14485c47a(param_2,param_3);
  *(undefined1 *)(param_2 + 1) = 2;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
  uVar5 = 0;
  if (param_4 != 0) {
    puVar4 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_4 + 8) != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(param_4 + 8);
    }
    FUN_1447325ac(puVar4,&local_28,1);
    uVar5 = local_28;
  }
  param_2[0xd] = uVar5;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882dce4 FUN_14882dce4 body=152 status=ok
// SIG undefined FUN_14882dce4(void)

longlong * FUN_14882dce4(longlong *param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_3 != 0) && (0 < (int)param_1[1])) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = *param_1;
      cVar3 = FUN_14882d14a(lVar4 + lVar2,param_3);
      if ((cVar3 != '\0') && (*(char *)(lVar2 + 8 + lVar4) == param_4)) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0xc + lVar4);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x78;
    } while (lVar5 < (int)param_1[1]);
  }
  return param_2;
}



// FUNCTION 14882dd7c FUN_14882dd7c body=146 status=ok
// SIG undefined FUN_14882dd7c(void)

void FUN_14882dd7c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = param_2;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    FUN_14709216a(*(longlong *)(lVar2 + 0x18) + (longlong)local_24 * 0x40 + 0x28,*param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882de10 FUN_14882de10 body=550 status=ok
// SIG undefined FUN_14882de10(void)

undefined8 FUN_14882de10(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined8 *local_98;
  ulonglong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48 [2];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14882962c();
  if (*(longlong *)(param_1 + 200) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 200) + 8);
    puVar5 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = puVar1;
    }
    local_88 = 0;
    uStack_80 = 0;
    FUN_1400b2348(puVar5,&local_88,1);
    FUN_14146ec20(local_48,&local_88);
    local_70 = &local_28;
    local_78 = local_48;
    FUN_1407adb6e(&local_68);
    FUN_140230a2e(&local_58,L", Meta Data: {0}",&local_68);
    iVar2 = local_50 + -1;
    if (local_50 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_58,iVar2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1407adb3e(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    cVar3 = FUN_144729dda(param_1 + 0xd0);
    if (cVar3 != '\0') {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
      if (lVar4 != 0) {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
        local_48[0] = *(undefined8 *)(lVar4 + 0x18);
        FUN_1400021e4(local_48,local_a8);
        FUN_14146ec20(local_48,local_a8);
        local_90 = &local_28;
        local_98 = local_48;
        FUN_1407adb6e(&local_68);
        FUN_140230a2e(&local_58,L", Live Location: {0}",&local_68);
        iVar2 = local_50 + -1;
        if (local_50 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar2);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882e038 FUN_14882e038 body=26 status=ok
// SIG undefined FUN_14882e038(void)

void FUN_14882e038(undefined8 param_1)

{
  FUN_140a1982e();
  FUN_140a1994a(param_1);
  return;
}



// FUNCTION 14882e052 FUN_14882e052 body=532 status=ok
// SIG undefined FUN_14882e052(void)

void FUN_14882e052(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140ca2e50();
  cVar2 = FUN_144729dda(param_1 + 5);
  if (cVar2 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 5);
    cVar2 = FUN_1488295c8(uVar3);
    if (cVar2 != '\0') {
      lVar4 = FUN_1410ef012(param_1);
      if (lVar4 != 0) {
        lVar4 = FUN_143d15052(lVar4);
        if (lVar4 != 0) {
          local_50[0] = 0;
          local_48 = 0x44bb8000;
          local_44 = 0;
          local_40 = 0;
          uStack_38 = 0;
          lVar5 = FUN_14073fae1();
          local_4c = *(undefined4 *)(lVar5 + 0xd4);
          local_60 = (undefined8 *)0x0;
          local_58 = 0;
          FUN_1446efa72(&local_60,0,3,0x10);
          puVar1 = local_60;
          local_58 = 3;
          *local_60 = &PTR_LAB_14b3f8df0;
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 1;
          lVar5 = DAT_14c758608 + 1;
          if (lVar6 == 0) {
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 2;
            lVar5 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar5;
          local_60[2] = lVar6;
          *local_60 = &PTR_FUN_14b3fae90;
          local_60[3] = 0;
          FUN_14485c47a(local_60 + 3,param_1);
          puVar1[4] = &LAB_14882e268;
          local_78 = 0;
          local_70 = 0;
          FUN_1404ebbc8(&local_78,&local_60);
          (**(code **)(*param_1 + 0x2b0))(param_1,local_f8);
          local_98 = local_d8;
          uStack_90 = uStack_d0;
          local_88 = local_c8;
          local_108 = &local_78;
          FUN_1404eb494(lVar4,&local_68,&local_98,local_50);
          param_1[0x21] = local_68;
          FUN_1449db362(&local_60);
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  FUN_14882e274(param_1);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882e274 FUN_14882e274 body=299 status=ok
// SIG undefined FUN_14882e274(void)

void FUN_14882e274(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0x20] == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  cVar1 = FUN_144729dda(param_1 + 5);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    cVar1 = FUN_1488295c8(uVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_14041acbe(param_1);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0xa08), lVar3 != 0)) {
        lVar4 = FUN_144a78b9e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar3 = *(longlong *)(lVar3 + 0x1c8);
          if (lVar3 == 0) {
            local_28 = DAT_14c8464f0;
            local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_38 = *(undefined8 *)(lVar3 + 0x260);
            uStack_30 = *(undefined8 *)(lVar3 + 0x268);
            local_28 = *(undefined8 *)(lVar3 + 0x270);
          }
          lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
          if (lVar3 != 0) {
            lVar3 = FUN_148828ef6(param_1 + 0x1c,&local_38,lVar3);
            param_1[0x1f] = lVar3;
            *(undefined1 *)(param_1 + 0x20) = 1;
            FUN_140a1994a(param_1);
            FUN_140a1982e(param_1);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882e3a0 FUN_14882e3a0 body=69 status=ok
// SIG undefined FUN_14882e3a0(void)

void FUN_14882e3a0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar1 = FUN_1410ef012();
    if (lVar1 != 0) {
      lVar1 = FUN_143d15052(lVar1);
      if (lVar1 != 0) {
        FUN_1404eaf96(lVar1,(undefined8 *)(param_1 + 0x108));
      }
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}



// FUNCTION 14882e432 FUN_14882e432 body=157 status=ok
// SIG undefined FUN_14882e432(void)

void FUN_14882e432(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_14073fae1();
  lVar5 = *(longlong *)(lVar3 + 0x90);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x90) = lVar5;
  }
  if (*(longlong *)(lVar3 + 0x98) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x88) != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x88));
    }
    *(undefined8 *)(lVar3 + 0x98) = uVar4;
    return;
  }
  return;
}



// FUNCTION 14882e4d0 FUN_14882e4d0 body=368 status=ok
// SIG undefined FUN_14882e4d0(void)

void FUN_14882e4d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar3 = FUN_14041acbe();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x398);
  }
  lVar4 = FUN_14479d2ce(param_1 + 200);
  lVar5 = FUN_14073fae1();
  if (lVar3 != lVar4) {
    lVar3 = *(longlong *)(lVar5 + 0xa8);
    if (lVar3 == 0) {
      uVar6 = FUN_140bd9786();
      lVar3 = FUN_14477b664(uVar6);
      *(longlong *)(lVar5 + 0xa8) = lVar3;
    }
    if (*(longlong *)(lVar5 + 0xb0) != 0) {
      return;
    }
    if (lVar3 == 0) {
      return;
    }
    if (*(longlong *)(lVar5 + 0xa0) != 0) {
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar6 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0xa0));
      }
      *(undefined8 *)(lVar5 + 0xb0) = uVar6;
      return;
    }
    return;
  }
  lVar3 = *(longlong *)(lVar5 + 0xc0);
  if (lVar3 == 0) {
    uVar6 = FUN_140bd9786();
    lVar3 = FUN_14477b664(uVar6);
    *(longlong *)(lVar5 + 0xc0) = lVar3;
  }
  if (*(longlong *)(lVar5 + 200) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar5 + 0xb8) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar6 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0xb8));
    }
    *(undefined8 *)(lVar5 + 200) = uVar6;
    return;
  }
  return;
}



// FUNCTION 14882e68c FUN_14882e68c body=106 status=ok
// SIG undefined FUN_14882e68c(void)

void FUN_14882e68c(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((((*(double *)(param_1 + 0xd8) == *param_2) &&
       (!NAN(*(double *)(param_1 + 0xd8)) && !NAN(*param_2))) &&
      (*(double *)(param_1 + 0xe0) == param_2[1])) &&
     (((!NAN(*(double *)(param_1 + 0xe0)) && !NAN(param_2[1]) &&
       (*(double *)(param_1 + 0xe8) == param_2[2])) &&
      (!NAN(*(double *)(param_1 + 0xe8)) && !NAN(param_2[2]))))) {
    return;
  }
  *(double *)(param_1 + 0xe8) = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  FUN_140a1982e(param_1);
  FUN_140a1994a(param_1);
  return;
}



// FUNCTION 14882e6f6 FUN_14882e6f6 body=471 status=ok
// SIG undefined FUN_14882e6f6(void)

void FUN_14882e6f6(longlong param_1,char param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  local_58 = 0;
  uStack_50 = 0;
  iVar2 = (int)param_3[1];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1402191ca(&local_58);
    if ((longlong)(int)param_3[1] != 0) {
      plVar4 = (longlong *)*param_3;
      plVar1 = plVar4 + (int)param_3[1];
      do {
        if (*plVar4 != 0) {
          puVar3 = *(undefined4 **)(*plVar4 + 8);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = &DAT_14c9485f0;
          }
          FUN_1447325ac(puVar3,&local_60,1);
          FUN_1409d9716(&local_58,&local_60);
          lVar5 = (longlong)*(int *)(*plVar4 + 0x220);
          if (lVar5 != 0) {
            plVar6 = *(longlong **)(*plVar4 + 0x218);
            lVar5 = lVar5 << 3;
            do {
              if (*plVar6 != 0) {
                FUN_140721fbe(&local_58,plVar6);
              }
              plVar6 = plVar6 + 1;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x38);
    plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x40) * 3;
    do {
      plVar6 = (longlong *)*plVar4;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = FUN_144a84b50();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
             == lVar5 + 0x30)) && (plVar6[0x19] != 0)) {
          puVar3 = *(undefined4 **)(plVar6[0x19] + 8);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = &DAT_14c9485f0;
          }
          FUN_1447325ac(puVar3,&local_60);
          if ((longlong)(int)uStack_50 != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(local_58 + lVar5) == local_60) {
                (**(code **)(*plVar6 + 0x2c8))(plVar6);
                break;
              }
              lVar5 = lVar5 + 8;
            } while ((longlong)(int)uStack_50 * 8 != lVar5);
          }
        }
      }
      plVar4 = plVar4 + 3;
    } while (plVar4 != plVar1);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14882e8ee FUN_14882e8ee body=106 status=ok
// SIG undefined FUN_14882e8ee(void)

void FUN_14882e8ee(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  plVar2 = (longlong *)FUN_140caa136(uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_14882e95a(uVar1,local_18,param_1);
  }
  FUN_14882ea56(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882e95a FUN_14882e95a body=244 status=ok
// SIG undefined FUN_14882e95a(void)

undefined8 FUN_14882e95a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14b3fb1f0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14882ea50;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882ea56 FUN_14882ea56 body=458 status=ok
// SIG undefined FUN_14882ea56(void)

void FUN_14882ea56(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  undefined1 *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  undefined1 *local_c0;
  undefined1 *local_a8;
  undefined ***local_98;
  undefined **local_88;
  longlong *local_80;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[5] == 0) {
    bVar7 = false;
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 == 0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = *(undefined1 **)(lVar4 + 0x18);
    }
    FUN_1405f0c40(DAT_14cb84f20,local_68,puVar6);
    if (local_68[0] == (undefined1 *)0x0) {
      local_68[0] = puVar6;
    }
    bVar7 = local_68[0] == (undefined1 *)param_1[5];
  }
  plVar1 = param_1 + 0xb;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) < 0) {
    FUN_148836a94(plVar1);
  }
  if (bVar7) {
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    plVar3 = (longlong *)FUN_140caa136(uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_14869823c(plVar1,lVar4 + 0x3b8);
    }
  }
  local_f8 = local_68;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b3fb2a0;
  local_68[0] = &LAB_143d20cf0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b3fb280;
  local_a8 = &LAB_143d20c84;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14b3fb260;
  local_c0 = &LAB_143d20c66;
  local_e8[0] = &LAB_148836bae;
  local_80 = param_1;
  local_40 = param_1;
  FUN_14882ecd6(param_1,plVar1,local_e8);
  if (local_e8[0] != (undefined1 *)0x0) {
    pppuVar5 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar5 = &local_c8;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_a8 != (undefined1 *)0x0) {
    pppuVar5 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar5 = &local_88;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar5 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar5 = &local_48;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882ec22 FUN_14882ec22 body=172 status=ok
// SIG undefined FUN_14882ec22(void)

void FUN_14882ec22(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x180))();
  plVar3 = (longlong *)FUN_140caa136(uVar2);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_140457ffc(uVar2,param_1);
  }
  lVar6 = param_1[7];
  if ((longlong)(int)param_1[8] == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = (longlong)(int)param_1[8] * 0x18;
    lVar6 = lVar6 + 8;
    do {
      if (param_1[6] != 0) {
        FUN_140993b54(param_1[6],lVar6);
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    uVar4 = (undefined4)param_1[8];
    lVar6 = param_1[7];
  }
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  FUN_14117d0df(lVar6,uVar4);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 7,0);
    return;
  }
  return;
}



// FUNCTION 14882ecd6 FUN_14882ecd6 body=716 status=ok
// SIG undefined FUN_14882ecd6(void)

void FUN_14882ecd6(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x38);
    lVar9 = 0;
    do {
      *(undefined2 *)(lVar10 + 0x10 + lVar9) = 0x100;
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar9);
  }
  local_78 = (longlong *)(param_1 + 0x38);
  local_70 = param_4;
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    lVar10 = lVar9 + (longlong)(int)param_2[1] * 0x28;
    local_68 = param_4 + 4;
    do {
      iVar1 = *(int *)(param_1 + 0x40);
      local_58 = lVar9;
      local_50 = param_3;
      if ((longlong)iVar1 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x38);
        lVar5 = 0;
        do {
          cVar2 = FUN_148836b30(&local_58,lVar5 + lVar7);
          if (cVar2 != '\0') {
            uVar4 = (int)(lVar5 >> 3) * -0x55555555;
            if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x40))) {
              *(undefined1 *)(*local_78 + 0x11 + (ulonglong)(uVar4 & 0x7fffffff) * 0x18) = 0;
              if ((*param_5 == 0) ||
                 (lVar7 = *(longlong *)(*local_78 + (ulonglong)(uVar4 & 0x7fffffff) * 0x18),
                 lVar7 == 0)) goto LAB_14882ee3f;
              lVar5 = FUN_145b7ab14();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_14882ee3f;
              pcVar8 = (code *)*param_5;
              plVar6 = param_5 + 4;
              if ((longlong *)param_5[2] != (longlong *)0x0) {
                plVar6 = (longlong *)param_5[2];
              }
              goto LAB_14882ee70;
            }
            break;
          }
          lVar5 = lVar5 + 0x18;
        } while ((longlong)iVar1 * 0x18 != lVar5);
      }
      plVar6 = (longlong *)FUN_1404e9402(local_78);
      *(undefined2 *)(plVar6 + 2) = 1;
      uVar3 = FUN_145b7ab14();
      FUN_1404e95e0(param_1,&local_60,uVar3);
      if ((*plVar6 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar7 = local_60;
      *plVar6 = local_60;
      if (local_60 != 0) {
        lVar5 = FUN_145b7ab14();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (pcVar8 = (code *)*local_70, pcVar8 != (code *)0x0)) {
          plVar6 = (longlong *)local_70[2];
          if ((longlong *)local_70[2] == (longlong *)0x0) {
            plVar6 = local_68;
          }
LAB_14882ee70:
          uVar3 = (**(code **)(*plVar6 + 8))();
          (*pcVar8)(uVar3,lVar7,lVar9);
        }
      }
LAB_14882ee3f:
      lVar9 = lVar9 + 0x28;
    } while (lVar9 != lVar10);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar6[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar9 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_60,plVar6[-1]);
          lVar9 = local_60;
        }
        *plVar6 = lVar9;
      }
      else if (*(char *)((longlong)plVar6 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar6);
        }
        FUN_1404e9462(param_1,plVar6 + -1);
      }
      plVar6 = plVar6 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  FUN_148836ac4(local_78);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14882efa4 FUN_14882efa4 body=237 status=ok
// SIG undefined FUN_14882efa4(void)

ulonglong FUN_14882efa4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if ((param_1 != 0) && (lVar5 = FUN_14073fae1(), 0 < *(int *)(lVar5 + 0x210))) {
    lVar11 = 0;
    lVar9 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + 0x208);
      plVar1 = (longlong *)(lVar11 + lVar2);
      lVar7 = *(longlong *)(lVar2 + 8 + lVar11);
      if (lVar7 == 0) {
        uVar6 = FUN_14050c9fe();
        lVar7 = FUN_14477b664(uVar6);
        plVar1[1] = lVar7;
      }
      lVar8 = *(longlong *)(lVar2 + 0x10 + lVar11);
      if (lVar8 == 0) {
        if (lVar7 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if (*plVar1 != 0) {
            plVar3 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar3 + 0x108))(), cVar4 == '\0')) {
              lVar8 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar8 = FUN_144aff482(uVar6,plVar1);
            }
            *(longlong *)(lVar2 + 0x10 + lVar11) = lVar8;
          }
        }
      }
      if (lVar8 == param_1) {
        uVar10 = CONCAT71((int7)((ulonglong)lVar9 >> 8),(char)lVar9 + '\x01');
        goto LAB_14882f076;
      }
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x18;
    } while (lVar9 < *(int *)(lVar5 + 0x210));
  }
  uVar10 = 0;
LAB_14882f076:
  return uVar10 & 0xffffffff;
}



// FUNCTION 14882f092 FUN_14882f092 body=59 status=ok
// SIG undefined FUN_14882f092(void)

longlong FUN_14882f092(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148836c4a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_148836c18(lVar2);
  return lVar2;
}



// FUNCTION 14882f0ce FUN_14882f0ce body=118 status=ok
// SIG undefined FUN_14882f0ce(void)

void FUN_14882f0ce(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*param_2 != 0) && ((longlong)*(int *)(param_1 + 0x118) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x110);
    lVar5 = (longlong)*(int *)(param_1 + 0x118) * 0x38;
    do {
      if (*(longlong *)(lVar4 + 0x10) == *param_2) {
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined1 *)(lVar4 + 0x18) = 0;
        uVar3 = DAT_14c8464e8._4_4_;
        uVar2 = (undefined4)DAT_14c8464e8;
        uVar1 = DAT_14c8464e0._4_4_;
        *(undefined4 *)(lVar4 + 0x20) = (undefined4)DAT_14c8464e0;
        *(undefined4 *)(lVar4 + 0x24) = uVar1;
        *(undefined4 *)(lVar4 + 0x28) = uVar2;
        *(undefined4 *)(lVar4 + 0x2c) = uVar3;
        *(undefined8 *)(lVar4 + 0x30) = DAT_14c8464f0;
        FUN_140705884(param_1,lVar4);
      }
      lVar4 = lVar4 + 0x38;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14882f144 FUN_14882f144 body=177 status=ok
// SIG undefined FUN_14882f144(void)

longlong FUN_14882f144(byte param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar3 = FUN_14073fae1();
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(lVar3 + 0x210) < (int)(uint)param_1) {
    return 0;
  }
  lVar6 = *(longlong *)(lVar3 + 0x208);
  lVar3 = lVar6 + (ulonglong)param_1 * 0x18;
  lVar5 = *(longlong *)(lVar3 + -0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + -0x10) = lVar5;
  }
  if (*(longlong *)(lVar3 + -8) != 0) {
    return *(longlong *)(lVar3 + -8);
  }
  if (lVar5 == 0) {
    return 0;
  }
  plVar7 = (longlong *)(lVar6 + (ulonglong)param_1 * 0x18 + -0x18);
  if (*plVar7 != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,plVar7);
    }
    *(longlong *)(lVar3 + -8) = lVar6;
    return lVar6;
  }
  return 0;
}



// FUNCTION 14882f1f5 FUN_14882f1f5 body=175 status=ok
// SIG undefined FUN_14882f1f5(void)

undefined8 FUN_14882f1f5(undefined8 param_1)

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
  local_b8 = FUN_145a54e24();
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



// FUNCTION 14882f2a6 FUN_14882f2a6 body=263 status=ok
// SIG undefined FUN_14882f2a6(void)

void FUN_14882f2a6(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  lVar3 = param_1 + 0x30;
  FUN_14485c47a(lVar3);
  *(undefined8 *)(param_1 + 0x38) = *param_3;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  *(undefined1 *)(param_1 + 0x58) = 0;
  cVar1 = FUN_144729dda(lVar3);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar3);
    FUN_14882f69c(&local_30);
    FUN_14882f612(lVar2 + 0x20e,param_1,local_30);
    lVar2 = FUN_14479d2ce(lVar3);
    FUN_14882f778(lVar2 + 0x300,local_38,param_1,FUN_14882f86e);
    lVar2 = FUN_14479d2ce(lVar3);
    FUN_14882f778(lVar2 + 0x318,local_38,param_1,FUN_14882fa5c);
    lVar3 = FUN_14479d2ce(lVar3);
    if (*(longlong *)(lVar3 + 0x1c8) != 0) {
      FUN_14882f86e(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882f3ae FUN_14882f3ae body=291 status=ok
// SIG undefined FUN_14882f3ae(void)

undefined8 * FUN_14882f3ae(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (*param_3 != 0)) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_140611a6c(param_2,&local_48,0);
    lVar2 = local_48;
    lVar10 = (longlong)(int)uStack_40;
    if (lVar10 == 0) {
      bVar4 = true;
    }
    else {
      lVar9 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar9);
        if ((plVar1 != (longlong *)0x0) &&
           (cVar8 = (**(code **)(*plVar1 + 0x4c8))(plVar1,*param_3), cVar8 != '\0')) {
          plVar1 = *(longlong **)(lVar2 + lVar9);
          (**(code **)(*plVar1 + 0x4b0))(plVar1,param_1,*param_3);
          bVar4 = false;
          goto LAB_14882f43c;
        }
        lVar9 = lVar9 + 8;
      } while (lVar10 * 8 != lVar9);
      bVar4 = true;
    }
LAB_14882f43c:
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
    if (!bVar4) goto LAB_14882f48c;
  }
  if ((param_2 == 0) || (lVar2 = *(longlong *)(param_2 + 0x1c8), lVar2 == 0)) {
    param_1[2] = DAT_14c8464f0;
    uVar7 = DAT_14c8464e8._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x268);
    *param_1 = *(undefined8 *)(lVar2 + 0x260);
    param_1[1] = uVar3;
    param_1[2] = *(undefined8 *)(lVar2 + 0x270);
  }
LAB_14882f48c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14882f4d2 FUN_14882f4d2 body=256 status=ok
// SIG undefined FUN_14882f4d2(void)

void FUN_14882f4d2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (((lVar2 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) && (*(longlong *)(lVar2 + 0x20) != 0))
  {
    cVar1 = FUN_144729dda(lVar2 + 0x18);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x30))();
      if (lVar2 != 0) {
        FUN_14882f0ce(lVar2,param_1 + 0x50);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  cVar1 = FUN_144729dda(param_1 + 0x40);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x40);
    FUN_140457ffc(lVar2 + 0x200,param_1);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar2 = param_1 + 0x30;
  cVar1 = FUN_144729dda(lVar2);
  if (cVar1 != '\0') {
    lVar3 = FUN_14479d2ce(lVar2);
    FUN_140457ffc(lVar3 + 0x318,param_1);
    lVar3 = FUN_14479d2ce(lVar2);
    FUN_140457ffc(lVar3 + 0x300,param_1);
    lVar2 = FUN_14479d2ce(lVar2);
    FUN_147b9e310(lVar2 + 0x20e,param_1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



// FUNCTION 14882f5d2 FUN_14882f5d2 body=63 status=ok
// SIG undefined FUN_14882f5d2(void)

longlong FUN_14882f5d2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148836d84(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_148836d5f(lVar2);
  return lVar2;
}



// FUNCTION 14882f612 FUN_14882f612 body=137 status=ok
// SIG undefined FUN_14882f612(void)

void FUN_14882f612(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_14111abfe(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20e,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882f69c FUN_14882f69c body=201 status=ok
// SIG undefined FUN_14882f69c(void)

undefined8 * FUN_14882f69c(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7baa8) {
    FUN_144b3d300(&DAT_14cb7baa8);
    if (DAT_14cb7baa8 == -1) {
      builtin_wcsncpy(local_58 + 0x18,L"oyed",5);
      builtin_wcsncpy(local_58 + 0x10,L"torDestr",8);
      builtin_wcsncpy(local_58 + 8,L"erableAc",8);
      builtin_wcsncpy(local_58,L"OnDiscov",8);
      FUN_1446f470e(&DAT_14cb7baa0,local_58,1);
      _Init_thread_footer(&DAT_14cb7baa8);
    }
  }
  *param_1 = DAT_14cb7baa0;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882f766 FUN_14882f766 body=18 status=ok
// SIG undefined FUN_14882f766(void)

void FUN_14882f766(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bStack_41;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == 0) {
    return;
  }
  if ((*(longlong *)(lVar3 + 0x20) != 0) && (cVar5 = FUN_144729dda(lVar3 + 0x18), cVar5 != '\0')) {
    (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x20))();
  }
  iVar9 = *(int *)(lVar3 + 0x290);
  if ((longlong)iVar9 == 0) {
    bVar7 = false;
    uVar8 = 0;
  }
  else {
    lVar13 = *(longlong *)(lVar3 + 0x288);
    lVar14 = 0;
    bVar7 = false;
    do {
      lVar6 = *(longlong *)(lVar13 + lVar14);
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x58) == '\0') {
          cVar5 = FUN_144729dda(lVar6 + 0x30);
          if (cVar5 != '\0') goto LAB_14619d600;
          lVar6 = *(longlong *)(lVar13 + lVar14);
        }
        FUN_14882f4d2(lVar6);
        bVar7 = true;
        if (*(longlong *)(lVar13 + lVar14) != 0) {
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48();
          }
          *(undefined8 *)(lVar13 + lVar14) = 0;
        }
      }
LAB_14619d600:
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar9 * 8 != lVar14);
    uVar1 = *(uint *)(lVar3 + 0x290);
    lVar13 = (longlong)(int)uVar1;
    uVar8 = 0;
    if (lVar13 != 0) {
      plVar2 = *(longlong **)(lVar3 + 0x288);
      uVar10 = 0;
      bStack_41 = *plVar2 == 0;
      do {
        lVar6 = (longlong)(int)uVar10;
        uVar11 = uVar10;
        lVar14 = lVar6;
        uVar4 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar1) {
          uVar4 = uVar1;
        }
        do {
          lVar14 = lVar14 + 1;
          uVar12 = uVar4;
          if (lVar13 <= lVar14) break;
          uVar12 = uVar11 + 1;
          uVar11 = uVar12;
        } while (bStack_41 == (plVar2[lVar14] == 0));
        iVar9 = uVar12 - uVar10;
        if (bStack_41 == false) {
          if (uVar8 != uVar10) {
            memmove(plVar2 + (int)uVar8,plVar2 + lVar6,(longlong)iVar9 << 3);
          }
          uVar8 = uVar8 + iVar9;
        }
        else {
          FUN_145c97e16(plVar2 + lVar6,iVar9);
        }
        uVar10 = uVar12;
        bStack_41 = (bool)(bStack_41 ^ 1);
      } while (lVar14 < lVar13);
      *(uint *)(lVar3 + 0x290) = uVar8;
      uVar8 = (uint)((int)uVar8 < (int)uVar1);
    }
  }
  if ((!bVar7) && ((char)uVar8 == '\0')) {
    return;
  }
  FUN_14654bc7a(lVar3);
  return;
}



// FUNCTION 14882f778 FUN_14882f778 body=244 status=ok
// SIG undefined FUN_14882f778(void)

undefined8
FUN_14882f778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a915ec0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b3fb320;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_14080ef1c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882f86e FUN_14882f86e body=493 status=ok
// SIG undefined FUN_14882f86e(void)

void FUN_14882f86e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_1 + 0x30;
  cVar2 = FUN_144729dda(lVar6);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    lVar3 = FUN_14479d2ce(lVar6);
    uVar5 = *(undefined8 *)(lVar3 + 0x1c8);
  }
  lVar3 = param_1 + 0x40;
  cVar2 = FUN_1403e9e5e(lVar3,uVar5);
  if (cVar2 == '\0') {
    cVar2 = FUN_144729dda(lVar3);
    if (cVar2 != '\0') {
      lVar4 = FUN_14479d2ce(lVar3);
      FUN_140457ffc(lVar4 + 0x200,param_1);
    }
    FUN_14485c47a(lVar3,uVar5);
    cVar2 = FUN_144729dda(lVar3);
    if (cVar2 != '\0') {
      lVar4 = FUN_14479d2ce(lVar3);
      FUN_14882fb0a(lVar4 + 0x200,&local_48,param_1);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x20) != 0)) &&
      (cVar2 = FUN_144729dda(lVar4 + 0x18), cVar2 != '\0')) &&
     (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x30))(), lVar4 != 0)) {
    cVar2 = FUN_144729dda(lVar3);
    plVar1 = (longlong *)(param_1 + 0x50);
    if (cVar2 == '\0') {
      if (*(longlong *)(param_1 + 0x50) == 0) goto LAB_14882f911;
      FUN_14882f0ce(lVar4,plVar1);
      *plVar1 = 0;
    }
    else if (*(longlong *)(param_1 + 0x50) == 0) {
      uVar5 = FUN_14479d2ce(lVar6);
      FUN_14882f3ae(&local_48,uVar5,param_1 + 0x38);
      FUN_143d1d234(lVar4,&local_50,*(undefined8 *)(param_1 + 0x48),&local_48);
      *(undefined8 *)(param_1 + 0x50) = local_50;
    }
    else {
      uVar5 = FUN_14479d2ce(lVar6);
      FUN_14882f3ae(&local_48,uVar5,param_1 + 0x38);
      if ((longlong)*(int *)(lVar4 + 0x118) != 0) {
        lVar6 = *(longlong *)(lVar4 + 0x110);
        lVar3 = (longlong)*(int *)(lVar4 + 0x118) * 0x38;
        do {
          if (*(longlong *)(lVar6 + 0x10) == *plVar1) {
            *(undefined8 *)(lVar6 + 0x30) = local_38;
            *(undefined4 *)(lVar6 + 0x20) = local_48;
            *(undefined4 *)(lVar6 + 0x24) = uStack_44;
            *(undefined4 *)(lVar6 + 0x28) = uStack_40;
            *(undefined4 *)(lVar6 + 0x2c) = uStack_3c;
            FUN_140705884(lVar4,lVar6);
          }
          lVar6 = lVar6 + 0x38;
          lVar3 = lVar3 + -0x38;
        } while (lVar3 != 0);
      }
    }
    FUN_14654bc7a(*(undefined8 *)(param_1 + 0x28));
  }
LAB_14882f911:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14882fa5c FUN_14882fa5c body=174 status=ok
// SIG undefined FUN_14882fa5c(void)

void FUN_14882fa5c(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  cVar2 = FUN_1403e9e5e(puVar1);
  if (cVar2 != '\0') {
    cVar2 = FUN_144729dda(puVar1);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(puVar1);
      FUN_140457ffc(lVar3 + 0x200,param_1);
    }
    *puVar1 = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar2 = FUN_144729dda(puVar1);
    if (((cVar2 == '\0') && (*(longlong *)(param_1 + 0x50) != 0)) &&
       (lVar3 = *(longlong *)(param_1 + 0x28), *(longlong *)(lVar3 + 0x20) != 0)) {
      cVar2 = FUN_144729dda(lVar3 + 0x18);
      if (cVar2 != '\0') {
        lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x30))();
        if (lVar3 != 0) {
          FUN_14882f0ce(lVar3,param_1 + 0x50);
          *(undefined8 *)(param_1 + 0x50) = 0;
          FUN_14654bc7a(*(undefined8 *)(param_1 + 0x28));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14882fb0a FUN_14882fb0a body=244 status=ok
// SIG undefined FUN_14882fb0a(void)

undefined8 FUN_14882fb0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14a7feda0;
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
  *local_38 = &PTR_FUN_14b3fb390;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14882fc00;
  FUN_1408278de(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882fc00 FUN_14882fc00 body=228 status=ok
// SIG undefined FUN_14882fc00(void)

void FUN_14882fc00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (((lVar2 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) && (*(longlong *)(lVar2 + 0x20) != 0))
  {
    cVar1 = FUN_144729dda(lVar2 + 0x18);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x30))();
      if (lVar2 != 0) {
        uVar3 = FUN_14479d2ce(param_1 + 0x30);
        FUN_14882f3ae(&local_40,uVar3,param_1 + 0x38);
        if ((longlong)*(int *)(lVar2 + 0x118) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x110);
          lVar5 = (longlong)*(int *)(lVar2 + 0x118) * 0x38;
          do {
            if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(param_1 + 0x50)) {
              *(undefined8 *)(lVar4 + 0x30) = local_30;
              *(undefined4 *)(lVar4 + 0x20) = local_40;
              *(undefined4 *)(lVar4 + 0x24) = uStack_3c;
              *(undefined4 *)(lVar4 + 0x28) = uStack_38;
              *(undefined4 *)(lVar4 + 0x2c) = uStack_34;
              FUN_140705884(lVar2,lVar4);
            }
            lVar4 = lVar4 + 0x38;
            lVar5 = lVar5 + -0x38;
          } while (lVar5 != 0);
        }
        FUN_14654bc7a(*(undefined8 *)(param_1 + 0x28));
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14882fce6 FUN_14882fce6 body=138 status=ok
// SIG undefined FUN_14882fce6(void)

void FUN_14882fce6(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  if (param_3 != 0) {
    FUN_14882fd82(param_1 + 0x68,param_2,&local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14882fd82 FUN_14882fd82 body=171 status=ok
// SIG undefined FUN_14882fd82(void)

void FUN_14882fd82(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  puVar4 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 << 4;
    do {
      if (puVar4[1] == *param_2) {
        if (puVar4 != (undefined8 *)0x0) goto LAB_14882fe03;
        break;
      }
      puVar4 = puVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_14883766a(puVar1,iVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x48);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar3[lVar6 * 2] = 0;
  (puVar3 + lVar6 * 2)[1] = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (*(undefined8 **)(param_1 + 0x48) == (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6 * 2;
  puVar3[lVar6 * 2 + 1] = *param_2;
LAB_14882fe03:
  *puVar4 = *param_3;
  return;
}



// FUNCTION 14882fe2e FUN_14882fe2e body=141 status=ok
// SIG undefined FUN_14882fe2e(void)

void FUN_14882fe2e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)(param_1 + 0x68);
  if (0 < *(int *)(param_1 + 0xb8)) {
    local_28 = param_2;
    FUN_1488376e0(param_1 + 0x70,&local_28);
    if (0 < (longlong)*(int *)(param_1 + 0xb8)) {
      lVar2 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        lVar2 = *(longlong *)(param_1 + 0xb0);
      }
      puVar1 = (undefined8 *)(lVar2 + (longlong)*(int *)(param_1 + 0xb8) * 0x10 + -0x10);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14035e1f0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,*puVar1);
}



// FUNCTION 14882febc FUN_14882febc body=538 status=ok
// SIG undefined FUN_14882febc(void)

void FUN_14882febc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x50) = param_2;
  uVar4 = FUN_1401cb356();
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b3fb5c0;
  local_40[3] = param_1;
  *(undefined4 *)(local_40 + 4) = 0x3e800000;
  local_48 = 0x3e800000;
  FUN_1405f67fc(uVar4,&local_30,&local_40,L"UDodgeTriggerZoneComponent_Lambda");
  if ((undefined8 **)(param_1 + 0x30) != &local_30) {
    *(undefined8 **)(param_1 + 0x30) = local_30;
    local_30 = (undefined8 *)0x0;
    plVar2 = *(longlong **)(param_1 + 0x38);
    *(longlong **)(param_1 + 0x38) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  FUN_1449db362(&local_40);
  local_30 = (undefined8 *)0x0;
  local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = (longlong *)CONCAT44(local_28._4_4_,3);
  *local_30 = &PTR_LAB_14b3fb6a0;
  *(undefined4 *)(local_30 + 1) = 0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar5;
  *local_30 = &PTR_FUN_14b3fb630;
  local_30[3] = param_1;
  local_30[4] = FUN_1488300d8;
  FUN_144a450dc(param_1 + 0x40,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488300d8 FUN_1488300d8 body=438 status=ok
// SIG undefined FUN_1488300d8(void)

void FUN_1488300d8(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != (longlong *)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    if ((longlong)*(int *)(param_3 + 0x128) != 0) {
      lVar7 = *(longlong *)(param_3 + 0x120);
      lVar1 = lVar7 + (longlong)*(int *)(param_3 + 0x128) * 0x48;
      do {
        lVar5 = FUN_14485cccc(lVar7);
        if ((longlong)(int)uStack_50 != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(local_58 + lVar8) == lVar5) goto LAB_148830258;
            lVar8 = lVar8 + 8;
          } while ((longlong)(int)uStack_50 * 8 != lVar8);
        }
        uVar6 = FUN_14485cccc(lVar7);
        uVar3 = uStack_50;
        lVar5 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447d05f2(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar5 * 8) = uVar6;
        lVar5 = FUN_14485cccc(lVar7);
        if ((longlong)*(int *)(param_1 + 0x28) != 0) {
          lVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar8) == lVar5) goto LAB_148830258;
            lVar8 = lVar8 + 8;
          } while ((longlong)*(int *)(param_1 + 0x28) * 8 != lVar8);
        }
        (**(code **)(*plVar2 + 0x328))(plVar2,local_70);
        lVar5 = plVar2[0x39];
        if (lVar5 == 0) {
          local_78 = DAT_14c8464f0;
          local_88 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_80 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_88 = *(undefined8 *)(lVar5 + 0x260);
          uStack_80 = *(undefined8 *)(lVar5 + 0x268);
          local_78 = *(undefined8 *)(lVar5 + 0x270);
        }
        uVar6 = FUN_14485cccc(lVar7);
        local_98 = plVar2;
        FUN_148830708(*(undefined8 *)(param_1 + 0x50),uVar6,&local_88,local_70);
LAB_148830258:
        lVar7 = lVar7 + 0x48;
      } while (lVar7 != lVar1);
    }
    FUN_147ac84c0(param_1 + 0x20,&local_58);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148830290 FUN_148830290 body=1143 status=ok
// SIG undefined FUN_148830290(void)

void FUN_148830290(float *param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_268 [32];
  undefined4 *local_248;
  undefined4 *local_240;
  undefined1 *local_238;
  float *local_230;
  undefined4 local_228;
  undefined1 local_218 [8];
  undefined4 local_210;
  float local_20c;
  float local_208;
  float local_204;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined1 local_1f8 [32];
  longlong local_1d8 [2];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined1 local_f0 [17];
  undefined1 local_df;
  longlong local_a0;
  longlong local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  plVar2 = *(longlong **)(param_1 + 0x14);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x328))(plVar2,&local_190);
    fVar12 = (float)SQRT(local_180 * local_180 + local_190 * local_190 + local_188 * local_188);
    fVar13 = *param_1;
    if (fVar13 <= fVar12) {
      fVar1 = param_1[4];
      fVar13 = ((fVar12 - fVar13) / (param_1[1] - fVar13)) * fVar1 + 1.0;
      if (fVar1 <= fVar13) {
        fVar13 = fVar1;
      }
      if (fVar13 <= 1.0) {
        fVar13 = 1.0;
      }
      dVar4 = 1.0 / (double)fVar12;
      dVar6 = local_180 * dVar4;
      dVar5 = local_188 * dVar4;
      dVar4 = local_190 * dVar4;
      fVar12 = param_1[2];
      local_1a8 = dVar4;
      local_1a0 = dVar5;
      local_198 = dVar6;
      if (plVar2[0x39] == 0) {
        local_1b8 = DAT_14c8462d0;
        local_1c8 = DAT_14c8462c0;
        dStack_1c0 = DAT_14c8462c8;
      }
      else {
        FUN_14133901a(plVar2[0x39],&local_1c8);
      }
      dVar9 = (double)(fVar13 * fVar12);
      local_1d8[0] = 0;
      local_1d8[1] = 0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb78bd0) {
        FUN_144b3d300(&DAT_14cb78bd0);
        if (DAT_14cb78bd0 == -1) {
          FUN_1446f470e(&DAT_14cb78bc8,L"DodgeTrace",1);
          _Init_thread_footer(&DAT_14cb78bd0);
        }
      }
      dVar6 = dVar6 * dVar9;
      dVar5 = dVar5 * dVar9;
      dVar4 = dVar4 * dVar9;
      local_248 = (undefined4 *)0x0;
      FUN_144a886e6(local_f0,DAT_14cb78bc8,&local_178,0);
      FUN_144ae180e(local_f0,local_1d8);
      local_df = 1;
      FUN_14099e850(&local_178,&local_1a8,&DAT_14c8462c0);
      FUN_141706d54(&local_178,local_1f8);
      lVar3 = plVar2[0x39];
      if (lVar3 == 0) {
        pdVar7 = (double *)&DAT_14c8464e0;
        dVar9 = DAT_14c8464f0;
      }
      else {
        pdVar7 = (double *)(lVar3 + 0x260);
        dVar9 = *(double *)(lVar3 + 0x270);
      }
      dVar11 = (double)param_1[6];
      dVar10 = (double)param_1[5];
      local_168 = local_198 * dVar10 + local_1b8 * dVar11 + dVar6 * 0.5 + dVar9;
      local_170 = local_1a0 * dVar10 + dStack_1c0 * dVar11 + dVar5 * 0.5 + pdVar7[1];
      local_178 = dVar10 * local_1a8 + dVar11 * local_1c8 + dVar4 * 0.5 + *pdVar7;
      fVar13 = param_1[3];
      local_1fc = 0;
      local_200 = 4;
      if (*(longlong *)(param_1 + 0x14) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_1447210f0();
      }
      local_230 = param_1 + 0x10;
      local_20c = (float)(SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5) * 0.5);
      local_240 = &local_210;
      local_210 = 1;
      local_248 = &local_200;
      local_228 = 0;
      local_238 = local_f0;
      local_208 = fVar13;
      local_204 = fVar13;
      FUN_1479b5494(uVar8,local_218,&local_178,local_1f8);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_1d8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148830708 FUN_148830708 body=815 status=ok
// SIG undefined FUN_148830708(void)

void FUN_148830708(longlong *param_1,longlong *param_2,double *param_3,double *param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_1 != (longlong *)0x0 && param_2 != (longlong *)0x0) &&
      (lVar5 = (**(code **)(*param_1 + 0x180))(), lVar5 != 0)) &&
     (iVar4 = FUN_14490d72a(lVar5), iVar4 != 3)) {
    uVar6 = FUN_140a2a00c();
    plVar7 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_140a2a00c();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
        lVar5 = param_2[0x39];
        if (lVar5 == 0) {
          pdVar9 = &DAT_14c8464e0;
          dVar10 = DAT_14c8464f0;
        }
        else {
          pdVar9 = (double *)(lVar5 + 0x260);
          dVar10 = *(double *)(lVar5 + 0x270);
        }
        dVar1 = *param_4;
        dVar2 = param_4[1];
        dVar3 = param_4[2];
        dVar14 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
        if (((dVar14 != 1.0) || (dVar11 = dVar1, dVar12 = dVar2, dVar13 = dVar3, NAN(dVar14))) &&
           (dVar11 = DAT_14c8464e0, dVar12 = DAT_14c8464e8, dVar13 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar14)) {
          dVar14 = 1.0 / SQRT(dVar14);
          dVar11 = dVar1 * dVar14;
          dVar12 = dVar2 * dVar14;
          dVar13 = dVar3 * dVar14;
        }
        dVar1 = dVar10 - param_3[2];
        dVar2 = pdVar9[1] - param_3[1];
        dVar3 = *pdVar9 - *param_3;
        fVar15 = (float)(dVar1 * dVar13 + dVar3 * dVar11 + dVar12 * dVar2);
        if (0.0 <= fVar15) {
          dVar14 = (double)fVar15;
          local_b8 = param_3[2] + dVar13 * dVar14;
          dStack_c0 = param_3[1] + dVar12 * dVar14;
          local_c8 = *param_3 + dVar11 * dVar14;
          local_c8 = *pdVar9 - local_c8;
          dStack_c0 = pdVar9[1] - dStack_c0;
          dVar10 = dVar10 - local_b8;
          if (dVar10 * dVar10 + dStack_c0 * dStack_c0 + local_c8 * local_c8 <=
              dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3) {
            param_3 = &local_c8;
          }
          local_b8 = param_3[2];
          local_c8 = *param_3;
          dStack_c0 = param_3[1];
          uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
          local_d0 = 0;
          local_d8 = 0;
          FUN_1408067b6(uVar6,4,&local_c8,param_5);
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148830a38 FUN_148830a38 body=40 status=ok
// SIG undefined FUN_148830a38(void)

void FUN_148830a38(longlong param_1)

{
  FUN_1401c3ca6();
  FUN_14882febc(param_1 + 0x2a8,*(undefined8 *)(param_1 + 0xa8));
  return;
}



// FUNCTION 148830a60 FUN_148830a60 body=113 status=ok
// SIG undefined FUN_148830a60(void)

void FUN_148830a60(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401cb356();
  local_28 = *(undefined8 *)(param_1 + 0x2d8);
  local_20 = *(longlong *)(param_1 + 0x2e0);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  FUN_1448c4a0e(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148830ad2 FUN_148830ad2 body=385 status=ok
// SIG undefined FUN_148830ad2(void)

void FUN_148830ad2(longlong param_1,undefined4 param_2,float param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_140a29fb0();
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      local_48 = DAT_14c8462e8;
      local_58 = DAT_14c8462d8;
      uStack_50 = DAT_14c8462e0;
      local_78 = DAT_14c8462d0;
      local_88 = (double)CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0);
      uStack_80 = (double)CONCAT44(DAT_14c8462c8._4_4_,(undefined4)DAT_14c8462c8);
    }
    else {
      FUN_14141a100(lVar1,&local_58);
      FUN_14133901a(lVar1,&local_88);
    }
    FUN_140ccff96(&local_58,&local_70,(double)param_3 * 0.017453292519943295,&local_88);
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      pdVar3 = (double *)&DAT_14c8464e0;
      uVar4 = (undefined4)DAT_14c8464f0;
      uVar5 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar5 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      pdVar3 = (double *)(lVar1 + 0x260);
    }
    local_78 = local_60 * 100.0 + (double)CONCAT44(uVar5,uVar4);
    uStack_80 = local_68 * 100.0 + pdVar3[1];
    local_88 = local_70 * 100.0 + *pdVar3;
    local_98 = 0;
    local_90 = param_4;
    FUN_1408067b6(lVar2,param_2,&local_88,0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148830c54 FUN_148830c54 body=100 status=ok
// SIG undefined FUN_148830c54(void)

void FUN_148830c54(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_140a29fb0();
  if (lVar1 != 0) {
    if (param_3 == '\0') {
      FUN_14882fe2e(lVar1,&local_20);
    }
    else {
      FUN_14882fce6(lVar1,&local_20,param_4);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148830ce2 FUN_148830ce2 body=822 status=ok
// SIG undefined FUN_148830ce2(void)

void FUN_148830ce2(char *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*param_1 == '\x01') {
    *param_1 = '\0';
    lVar6 = FUN_14479d2ce(param_1 + 0x40);
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_14479d2ce(param_1 + 0x48);
      if (plVar7 == (longlong *)0x0) {
        pdVar8 = (double *)&DAT_14c846480;
        if (*(longlong *)(lVar6 + 0x1c8) != 0) {
          pdVar8 = (double *)(*(longlong *)(lVar6 + 0x1c8) + 0x240);
        }
        local_118 = *pdVar8;
        dStack_110 = pdVar8[1];
        local_108 = pdVar8[2];
        dStack_100 = pdVar8[3];
        local_f8 = pdVar8[4];
        dStack_f0 = pdVar8[5];
        local_e8 = *(undefined4 *)(pdVar8 + 6);
        uStack_e4 = *(undefined4 *)((longlong)pdVar8 + 0x34);
        local_d8 = pdVar8[8];
        dStack_d0 = pdVar8[9];
        local_c8 = pdVar8[10];
      }
      else {
        (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_118,*(undefined8 *)(param_1 + 0x50),0);
      }
      dVar4 = *(double *)(param_1 + 8) * local_d8;
      dVar5 = *(double *)(param_1 + 0x10) * dStack_d0;
      dVar11 = *(double *)(param_1 + 0x18) * local_c8;
      dVar9 = dVar5 * local_118 - dStack_110 * dVar4;
      dVar10 = dVar11 * dStack_110 - local_108 * dVar5;
      dVar1 = dVar4 * local_108 - local_118 * dVar11;
      dVar10 = dVar10 + dVar10;
      dVar1 = dVar1 + dVar1;
      dVar9 = dVar9 + dVar9;
      dStack_f0 = (local_108 * dVar10 - local_118 * dVar9) + dStack_100 * dVar1 + dVar5 + dStack_f0;
      auVar3._8_4_ = SUB84(dStack_f0,0);
      auVar3._0_8_ = (dVar9 * dStack_110 - dVar1 * local_108) + dStack_100 * dVar10 + dVar4 +
                     local_f8;
      auVar3._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 8) = auVar3;
      *(double *)(param_1 + 0x18) =
           dVar9 * dStack_100 + dVar11 + (dVar1 * local_118 - dVar10 * dStack_110) +
           (double)CONCAT44(uStack_e4,local_e8);
      local_d8 = *(double *)(param_1 + 0x20) * local_d8;
      dStack_d0 = *(double *)(param_1 + 0x28) * dStack_d0;
      local_c8 = *(double *)(param_1 + 0x30) * local_c8;
      dVar9 = dStack_d0 * local_118 - dStack_110 * local_d8;
      dVar10 = local_c8 * dStack_110 - local_108 * dStack_d0;
      dVar11 = local_d8 * local_108 - local_118 * local_c8;
      dVar10 = dVar10 + dVar10;
      dVar11 = dVar11 + dVar11;
      dVar9 = dVar9 + dVar9;
      dVar1 = (local_108 * dVar10 - local_118 * dVar9) + dStack_100 * dVar11 + dStack_d0;
      auVar2._8_4_ = SUB84(dVar1,0);
      auVar2._0_8_ = (dVar9 * dStack_110 - dVar11 * local_108) + dStack_100 * dVar10 + local_d8;
      auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar2;
      *(double *)(param_1 + 0x30) =
           dVar9 * dStack_100 + local_c8 + (dVar11 * local_118 - dVar10 * dStack_110);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883101a FUN_14883101a body=730 status=ok
// SIG undefined FUN_14883101a(void)

int FUN_14883101a(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,int param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined1 *local_1f0;
  int local_1e8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8 [2];
  longlong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [64];
  byte local_158;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  iVar10 = -1;
  if (param_3 != 0 && param_2 != 0) {
    FUN_1405bd0f8(local_198,param_6);
    local_158 = local_158 & 0xbf;
    piVar8 = (int *)FUN_148831bf6(param_1 + 200);
    local_1a8 = local_118;
    plVar9 = local_138;
    pcVar1 = local_148;
    if (param_7 == 0) {
      iVar10 = *(int *)(param_1 + 0xc0);
      *(int *)(param_1 + 0xc0) = iVar10 + 1;
      *piVar8 = iVar10;
      if (*(int *)(param_1 + 0xc0) < 0) {
        *(undefined4 *)(param_1 + 0xc0) = 1;
      }
    }
    else {
      *piVar8 = param_7;
    }
    *(undefined1 *)(piVar8 + 1) = param_5;
    local_58 = (undefined4)local_118;
    uStack_54 = local_118._4_4_;
    uStack_50 = uStack_110;
    uStack_4c = uStack_10c;
    local_68 = (undefined4)local_128;
    uStack_64 = local_128._4_4_;
    uStack_60 = (undefined4)uStack_120;
    uStack_5c = uStack_120._4_4_;
    local_78 = (undefined4)local_138;
    uStack_74 = local_138._4_4_;
    uStack_70 = uStack_130;
    uStack_6c = uStack_12c;
    local_88 = (undefined4)local_148;
    uStack_84 = local_148._4_4_;
    uStack_80 = uStack_140;
    uStack_7c = uStack_13c;
    local_148 = FUN_143d236d8;
    local_138 = (longlong *)0x0;
    local_128 = &PTR_LAB_14b3fb9d0;
    uStack_120 = piVar8;
    local_118 = param_1;
    uStack_1d0 = uStack_140;
    uStack_1cc = uStack_13c;
    uStack_1a0 = uStack_110;
    uStack_19c = uStack_10c;
    uStack_1c0 = uStack_130;
    uStack_1bc = uStack_12c;
    if (pcVar1 != (code *)0x0) {
      if (plVar9 == (longlong *)0x0) {
        plVar9 = local_1b8;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    plVar9 = local_f8;
    pcVar1 = local_108;
    uVar2 = (undefined4)uStack_100;
    uVar3 = uStack_100._4_4_;
    uVar4 = (undefined4)uStack_f0;
    uVar5 = uStack_f0._4_4_;
    uVar6 = (undefined4)uStack_d0;
    uVar7 = uStack_d0._4_4_;
    local_58 = (undefined4)local_d8;
    uStack_54 = local_d8._4_4_;
    uStack_50 = (undefined4)uStack_d0;
    uStack_4c = uStack_d0._4_4_;
    local_68 = (undefined4)local_e8;
    uStack_64 = local_e8._4_4_;
    uStack_60 = (undefined4)uStack_e0;
    uStack_5c = uStack_e0._4_4_;
    local_78 = (undefined4)local_f8;
    uStack_74 = local_f8._4_4_;
    uStack_70 = (undefined4)uStack_f0;
    uStack_6c = uStack_f0._4_4_;
    local_88 = (undefined4)local_108;
    uStack_84 = local_108._4_4_;
    uStack_80 = (undefined4)uStack_100;
    uStack_7c = uStack_100._4_4_;
    local_d8 = local_1a8;
    uStack_d0 = CONCAT44(uStack_19c,uStack_1a0);
    local_108 = FUN_143d23a3a;
    uStack_100 = CONCAT44(uStack_1cc,uStack_1d0);
    local_f8 = (longlong *)0x0;
    uStack_f0 = CONCAT44(uStack_1bc,uStack_1c0);
    local_e8 = &PTR_LAB_14b3fb9f0;
    uStack_e0 = piVar8;
    uStack_1d0 = uVar2;
    uStack_1cc = uVar3;
    uStack_1a0 = uVar6;
    uStack_19c = uVar7;
    uStack_1c0 = uVar4;
    uStack_1bc = uVar5;
    if (pcVar1 != (code *)0x0) {
      plVar11 = local_1b8;
      if (plVar9 != (longlong *)0x0) {
        plVar11 = plVar9;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    local_1e8 = *piVar8;
    local_1f8 = param_5;
    local_1f0 = local_198;
    FUN_1408f2522(param_1,param_2,param_3,param_4);
    iVar10 = *piVar8;
    FUN_141466e9a(local_198);
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488312f6 FUN_1488312f6 body=90 status=ok
// SIG undefined FUN_1488312f6(void)

undefined8 FUN_1488312f6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    }
    else {
      FUN_14572512c(param_2,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return 1;
}



// FUNCTION 148831350 FUN_148831350 body=167 status=ok
// SIG undefined FUN_148831350(void)

void FUN_148831350(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1407f7f84(&local_28);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_20;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_1488313f8(local_28,*(undefined4 *)(param_1 + 0x10));
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488313f8 FUN_1488313f8 body=803 status=ok
// SIG undefined FUN_1488313f8(void)

void FUN_1488313f8(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0xd0) < 1) {
LAB_148831457:
    if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar12 = (longlong *)(param_1 + 200);
  lVar2 = *plVar12;
  lVar10 = 0;
  iVar11 = 0;
  while (*(int *)(lVar2 + lVar10) != param_2) {
    iVar11 = iVar11 + 1;
    lVar10 = lVar10 + 0x88;
    if ((longlong)*(int *)(param_1 + 0xd0) * 0x88 == lVar10) goto LAB_148831457;
  }
  lVar14 = lVar2 + lVar10;
  lVar8 = *(longlong *)(lVar14 + 0x28);
  if (*(longlong *)(lVar14 + 0x28) == 0) {
    lVar8 = lVar14 + 8;
  }
  local_98 = param_1;
  local_88 = plVar12;
  if ((longlong)*(int *)(lVar14 + 0x30) != 0) {
    lVar14 = (longlong)*(int *)(lVar14 + 0x30) << 3;
    do {
      plVar12 = (longlong *)FUN_14479d2ce(lVar8);
      if (plVar12 != (longlong *)0x0) {
        lVar9 = FUN_140288b94();
        if ((*(int *)(plVar12[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
            != lVar9 + 0x30)) {
          (**(code **)(*plVar12 + 0x420))(plVar12,0);
        }
        else {
          (**(code **)(*plVar12 + 0xa88))(plVar12,param_1 + 0x38);
          (**(code **)(*plVar12 + 0x2b0))(plVar12);
        }
      }
      lVar8 = lVar8 + 8;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  lVar14 = lVar2 + lVar10 + 0x58;
  cVar5 = FUN_144904448(lVar14);
  if (cVar5 != '\0') {
    lVar8 = *(longlong *)(lVar2 + 0x78 + lVar10);
    if (lVar8 == 0) {
      uVar7 = FUN_140067708();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(lVar2 + 0x78 + lVar10) = lVar8;
    }
    plVar13 = (longlong *)(lVar2 + lVar10 + 0x48);
    plVar12 = (longlong *)(lVar2 + lVar10 + 0x70);
    if (*(longlong *)(lVar2 + lVar10 + 0x80) == 0) {
      if ((lVar8 != 0) && (*plVar12 != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          *(undefined8 *)(lVar2 + 0x80 + lVar10) = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar8 = FUN_144aff482(uVar7,plVar12);
          *(longlong *)(lVar2 + 0x80 + lVar10) = lVar8;
          if (lVar8 != 0) goto LAB_148831551;
        }
      }
    }
    else {
LAB_148831551:
      plVar3 = *(longlong **)(lVar2 + 0x40 + lVar10);
      if (plVar3 != (longlong *)0x0) {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_14883155f;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar15 = iVar6 == iVar4;
          if (bVar15) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar15);
        if ((*(longlong *)(lVar2 + 0x38 + lVar10) != 0) && (lVar8 = *plVar13, lVar8 != 0)) {
          local_90 = lVar8;
          uVar7 = FUN_140ba21e6(lVar14);
          local_a8 = 0;
          FUN_14071ab80(local_90,&local_60,plVar12,uVar7);
          local_60 = 0;
          local_58 = 0xffffffffffffffff;
        }
        LOCK();
        plVar12 = plVar3 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
    }
LAB_14883155f:
    FUN_141819b80(plVar13,0);
  }
  plVar12 = local_88;
  if ((0 < param_2) && (*(char *)(lVar2 + 4 + lVar10) != '\0')) {
    FUN_148831c38(&local_70);
    if (local_70 != 0) {
      *(int *)(local_70 + 0x10) = -param_2;
      local_80 = local_70;
      local_78 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      uVar7 = (**(code **)(*(longlong *)(local_98 + 0x30) + 0x48))(local_98 + 0x30);
      FUN_140586e9a(uVar7,&local_80);
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_68 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
  FUN_14883824a(plVar12,iVar11);
  goto LAB_148831457;
}



// FUNCTION 14883171c FUN_14883171c body=92 status=ok
// SIG undefined FUN_14883171c(void)

undefined8 FUN_14883171c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *param_2;
  if (*(char *)(lVar5 + 8) == '\x03') {
    plVar6 = (longlong *)param_2[1];
    if (plVar6 == (longlong *)0x0) {
      if (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x10)) {
        return 1;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      iVar4 = *(int *)(param_1 + 0x10);
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
      if (iVar3 == iVar4) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 148831778 FUN_148831778 body=157 status=ok
// SIG undefined FUN_148831778(void)

void FUN_148831778(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    local_38 = 0;
    FUN_1446ddc76(&local_40,"OnParticleSystemFinished",1);
    FUN_14485c47a(&local_38,param_1);
    local_30 = local_40;
    (**(code **)(*param_2 + 0xa88))(param_2,&local_38);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_148831816(*(longlong *)(param_1 + 0x28),param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148831816 FUN_148831816 body=209 status=ok
// SIG undefined FUN_148831816(void)

void FUN_148831816(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar4 = *(longlong *)(param_1 + 200);
    lVar8 = (longlong)*(int *)(param_1 + 0xd0) * 0x88 + lVar4;
    do {
      if (0 < *(int *)(lVar4 + 0x30)) {
        lVar5 = 0;
        lVar7 = 0;
        do {
          lVar2 = *(longlong *)(lVar4 + 0x28);
          if (*(longlong *)(lVar4 + 0x28) == 0) {
            lVar2 = lVar4 + 8;
          }
          lVar2 = FUN_14479d2ce(lVar2 + lVar5);
          iVar3 = *(int *)(lVar4 + 0x30);
          if (lVar2 == param_2) {
            if (iVar3 + -1 != (int)lVar7) {
              iVar1 = (iVar3 + -1) - (int)lVar7;
              iVar6 = 1;
              if (iVar1 < 1) {
                iVar6 = iVar1;
              }
              lVar8 = lVar4 + 8;
              if (*(longlong *)(lVar4 + 0x28) != 0) {
                lVar8 = *(longlong *)(lVar4 + 0x28);
              }
              memmove((void *)(lVar5 + lVar8),(void *)(lVar8 + (longlong)(iVar3 - iVar6) * 8),
                      (longlong)iVar6 << 3);
              iVar3 = *(int *)(lVar4 + 0x30);
            }
            *(int *)(lVar4 + 0x30) = iVar3 + -1;
            return;
          }
          lVar7 = lVar7 + 1;
          lVar5 = lVar5 + 8;
        } while (lVar7 < iVar3);
      }
      lVar4 = lVar4 + 0x88;
    } while (lVar4 != lVar8);
  }
  return;
}



// FUNCTION 1488318e8 FUN_1488318e8 body=253 status=ok
// SIG undefined FUN_1488318e8(void)

void FUN_1488318e8(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0xe0);
  local_28 = param_1 + 0xf0;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_1449c0562(&local_30);
  }
  local_48 = local_20;
  iStack_44 = iStack_1c;
  local_40 = local_18;
  local_3c = local_14;
  local_58 = local_30;
  local_50 = local_28;
  local_60 = plVar1;
  local_38 = plVar1;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      *(undefined2 *)(*local_60 + 0x28 + (longlong)iStack_44 * 0x38) = 0x100;
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488319e6 FUN_1488319e6 body=237 status=ok
// SIG undefined FUN_1488319e6(void)

undefined8
FUN_1488319e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3fb8f0;
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
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b3fb880;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_148837d28(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148831ae0 FUN_148831ae0 body=107 status=ok
// SIG undefined FUN_148831ae0(void)

longlong * FUN_148831ae0(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1401f2c50();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 148831b4c FUN_148831b4c body=160 status=ok
// SIG undefined FUN_148831b4c(void)

undefined8 FUN_148831b4c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + -0x18);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%ls::FGbxEffectsManager",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148831bf6 FUN_148831bf6 body=66 status=ok
// SIG undefined FUN_148831bf6(void)

longlong FUN_148831bf6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488380be(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x88 + *param_1;
  FUN_148838080(lVar2);
  return lVar2;
}



// FUNCTION 148831c38 FUN_148831c38 body=146 status=ok
// SIG undefined FUN_148831c38(void)

undefined8 * FUN_148831c38(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b4b994(&local_28,4);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148831cce FUN_148831cce body=1401 status=ok
// SIG undefined FUN_148831cce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148831cce(undefined1 *param_1,undefined4 param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  double *pdVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar26 [16];
  double dVar25;
  double dVar28;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar10 = FUN_14479d2ce(param_1 + 0x40);
  if (lVar10 == 0) goto LAB_1488320c8;
  *param_1 = 1;
  plVar11 = (longlong *)FUN_14479d2ce(param_1 + 0x48);
  if (plVar11 == (longlong *)0x0) {
    pdVar1 = (double *)(*(longlong *)(lVar10 + 0x1c8) + 0x240);
    pdVar12 = &DAT_14c846480;
    if (*(longlong *)(lVar10 + 0x1c8) != 0) {
      pdVar12 = pdVar1;
    }
    auVar21 = *(undefined1 (*) [16])(pdVar12 + 8);
    auVar26 = *(undefined1 (*) [16])(pdVar12 + 10);
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar21._8_8_));
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar21._0_8_));
    iVar9 = movmskpd((int)pdVar1,auVar22);
    auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar26._8_8_));
    auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar26._0_8_));
    uVar13 = movmskpd(param_2,auVar27);
    dVar14 = DAT_14c8464c0;
    dVar15 = DAT_14c8464c8;
    dVar16 = DAT_14c846490;
    dVar17 = DAT_14c846498;
    dVar18 = DAT_14c846480;
    dVar19 = DAT_14c846488;
    dVar24 = DAT_14c8464a0;
    dVar20 = DAT_14c8464a8;
    dVar23 = DAT_14c8464d0;
    dVar29 = DAT_14c8464b0;
    if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) {
      auVar27 = divpd(_DAT_149934d80,auVar21);
      auVar22 = divpd(ZEXT816(0x3ff0000000000000),auVar26);
      dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar21._0_8_)) & auVar27._0_8_);
      dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar21._8_8_)) & auVar27._8_8_);
      dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar26._0_8_)) & auVar22._0_8_);
      local_118 = *pdVar12;
      dStack_110 = pdVar12[1];
      local_108 = pdVar12[2];
      dStack_100 = pdVar12[3];
      local_f8 = pdVar12[4] * dVar14;
      dStack_f0 = pdVar12[5] * dVar15;
      local_e8 = *(undefined4 *)(pdVar12 + 6);
      uStack_e4 = *(undefined4 *)((longlong)pdVar12 + 0x34);
      goto LAB_148831e4a;
    }
  }
  else {
    uVar8 = (**(code **)(*plVar11 + 0x4a8))(plVar11,&local_118,*(undefined8 *)(param_1 + 0x50),0);
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_d8._8_8_));
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_d8._0_8_));
    iVar9 = movmskpd(uVar8,auVar21);
    auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_c8._8_8_));
    auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_));
    uVar13 = movmskpd((int)plVar11,auVar26);
    dVar14 = DAT_14c8464c0;
    dVar15 = DAT_14c8464c8;
    dVar16 = DAT_14c846490;
    dVar17 = DAT_14c846498;
    dVar18 = DAT_14c846480;
    dVar19 = DAT_14c846488;
    dVar24 = DAT_14c8464a0;
    dVar20 = DAT_14c8464a8;
    dVar23 = DAT_14c8464d0;
    dVar29 = DAT_14c8464b0;
    if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) {
      auVar26 = divpd(_DAT_149934d80,local_d8);
      auVar21 = divpd(ZEXT816(0x3ff0000000000000),local_c8);
      dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._0_8_)) & auVar26._0_8_);
      dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._8_8_)) & auVar26._8_8_);
      dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8._0_8_)) & auVar21._0_8_);
      local_f8 = local_f8 * dVar14;
      dStack_f0 = dStack_f0 * dVar15;
LAB_148831e4a:
      dVar19 = -dStack_110;
      dVar18 = -local_118;
      dVar17 = dStack_100 * 1.0;
      dVar16 = local_108 * -1.0;
      dVar20 = (double)CONCAT44(uStack_e4,local_e8) * dVar23;
      dVar24 = dStack_f0 * dVar18 - dVar19 * local_f8;
      dVar28 = dVar20 * dVar19 - dVar16 * dStack_f0;
      dVar29 = local_f8 * dVar16 - dVar18 * dVar20;
      dVar28 = dVar28 + dVar28;
      dVar29 = dVar29 + dVar29;
      dVar24 = dVar24 + dVar24;
      dVar24 = 0.0 - ((dVar24 * dVar19 - dVar29 * dVar16) + dVar17 * dVar28 + local_f8);
      dVar20 = 0.0 - (dVar24 * local_118 + dVar16 * dVar28 + dVar17 * dVar29 + dStack_f0);
      dVar29 = 0.0 - (dVar17 * dVar24 + dVar20 + (dVar29 * dVar18 - dVar28 * dVar19));
    }
  }
  dVar6 = *(double *)(param_1 + 8) * dVar14;
  dVar7 = *(double *)(param_1 + 0x10) * dVar15;
  dVar28 = *(double *)(param_1 + 0x18) * dVar23;
  dVar3 = dVar7 * dVar18 - dVar19 * dVar6;
  dVar4 = dVar28 * dVar19 - dVar16 * dVar7;
  dVar25 = dVar6 * dVar16 - dVar18 * dVar28;
  dVar4 = dVar4 + dVar4;
  dVar25 = dVar25 + dVar25;
  dVar3 = dVar3 + dVar3;
  dVar20 = (dVar16 * dVar4 - dVar18 * dVar3) + dVar17 * dVar25 + dVar7 + dVar20;
  auVar5._8_4_ = SUB84(dVar20,0);
  auVar5._0_8_ = (dVar3 * dVar19 - dVar25 * dVar16) + dVar17 * dVar4 + dVar6 + dVar24;
  auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar5;
  *(double *)(param_1 + 0x18) =
       dVar3 * dVar17 + dVar28 + (dVar25 * dVar18 - dVar4 * dVar19) + dVar29;
  dVar14 = *(double *)(param_1 + 0x20) * dVar14;
  dVar15 = *(double *)(param_1 + 0x28) * dVar15;
  dVar23 = *(double *)(param_1 + 0x30) * dVar23;
  dVar29 = dVar15 * dVar18 - dVar19 * dVar14;
  dVar28 = dVar23 * dVar19 - dVar16 * dVar15;
  dVar24 = dVar14 * dVar16 - dVar18 * dVar23;
  dVar28 = dVar28 + dVar28;
  dVar24 = dVar24 + dVar24;
  dVar29 = dVar29 + dVar29;
  dVar20 = (dVar16 * dVar28 - dVar18 * dVar29) + dVar17 * dVar24 + dVar15;
  auVar2._8_4_ = SUB84(dVar20,0);
  auVar2._0_8_ = (dVar29 * dVar19 - dVar24 * dVar16) + dVar17 * dVar28 + dVar14;
  auVar2._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar2;
  *(double *)(param_1 + 0x30) = dVar29 * dVar17 + dVar23 + (dVar24 * dVar18 - dVar28 * dVar19);
LAB_1488320c8:
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148832248 FUN_148832248 body=297 status=ok
// SIG undefined FUN_148832248(void)

void FUN_148832248(undefined8 param_1,undefined4 param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_3 + 0x1b0) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x1b0) + 0x3c0);
    if ((plVar1 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar1);
    }
    else if (plVar1 == (longlong *)0x0) goto LAB_1488322b8;
    lVar3 = FUN_1449f3324();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      if (param_4 == '\0') {
        if (((*(byte *)(plVar1 + 0x84) & 2) == 0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1), cVar2 == '\0')) goto LAB_1488322b8;
      }
      else if ((char)plVar1[0x2f] != '\x03') goto LAB_1488322b8;
      local_60 = &local_48;
      local_38 = DAT_14c8464f0;
      local_48 = (undefined4)DAT_14c8464e0;
      uStack_44 = DAT_14c8464e0._4_4_;
      uStack_40 = (undefined4)DAT_14c8464e8;
      uStack_3c = DAT_14c8464e8._4_4_;
      local_50 = 0;
      local_58 = 0;
      local_70 = 0x3f800000;
      local_78 = 0;
      local_68 = param_3;
      (**(code **)(plVar1[300] + 0x40))(plVar1 + 300,param_1,param_2,0);
    }
  }
LAB_1488322b8:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148832372 FUN_148832372 body=357 status=ok
// SIG undefined FUN_148832372(void)

void FUN_148832372(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0xe0);
  local_60 = param_1 + 0xf0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_80 = local_58;
  iStack_7c = iStack_54;
  local_78 = local_50;
  local_74 = local_4c;
  local_90 = local_68;
  local_88 = local_60;
  local_98 = plVar1;
  local_70 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    bVar6 = false;
    do {
      if (*(char *)(*local_98 + 0x29 + (longlong)iStack_7c * 0x38) == '\0') {
        lVar7 = *local_98 + (longlong)iStack_7c * 0x38;
        iVar2 = *(int *)(lVar7 + 0x10);
        if ((longlong)iVar2 != 0) {
          lVar3 = *(longlong *)(lVar7 + 8);
          lVar5 = 0;
          do {
            cVar4 = FUN_1488324d8(*(undefined8 *)(lVar3 + lVar5),param_2);
            if (cVar4 != '\0') {
              *(undefined1 *)(lVar7 + 0x29) = 1;
              bVar6 = true;
              break;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar2 * 8 != lVar5);
        }
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (iStack_7c < *(int *)(local_88 + 0x18));
    if (bVar6) {
      FUN_1412e97a0(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488324d8 FUN_1488324d8 body=117 status=ok
// SIG undefined FUN_1488324d8(void)

undefined8 FUN_1488324d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0 && param_2 != 0) {
    do {
      if ((longlong)*(int *)(param_1 + 0x180) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x178);
        lVar3 = (longlong)*(int *)(param_1 + 0x180) << 6;
        do {
          lVar1 = FUN_1401f2ad8(lVar2);
          if (lVar1 == param_2) {
            return 1;
          }
          lVar2 = lVar2 + 0x40;
          lVar3 = lVar3 + -0x40;
        } while (lVar3 != 0);
      }
      param_1 = FUN_1401f6e4a(param_1 + 0x18);
    } while (param_1 != 0);
  }
  return 0;
}



// FUNCTION 14883254e FUN_14883254e body=197 status=ok
// SIG undefined FUN_14883254e(void)

undefined8 FUN_14883254e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  FUN_1446dcdd4(&local_50);
  if (DAT_14cb78bf0 == 0) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar1 = (longlong *)FUN_144837462(DAT_14cb78bf0,&local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (plVar1 != (longlong *)0x0) {
      local_48 = *param_3;
      local_40 = *(undefined4 *)(param_3 + 1);
      local_38 = 0;
      local_50 = param_2;
      uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_50,0,0);
      goto LAB_1488325e5;
    }
  }
  uVar2 = 0;
LAB_1488325e5:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148832614 FUN_148832614 body=24 status=ok
// SIG undefined FUN_148832614(void)

void FUN_148832614(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  return;
}



// FUNCTION 14883262c FUN_14883262c body=42 status=ok
// SIG undefined FUN_14883262c(void)

void FUN_14883262c(longlong param_1)

{
  FUN_1405f1eac();
  if (*(longlong *)(param_1 + 0x398) == 0) {
    return;
  }
  FUN_148832656(param_1);
  return;
}



// FUNCTION 148832656 FUN_148832656 body=219 status=ok
// SIG undefined FUN_148832656(void)

void FUN_148832656(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50 [40];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x390);
  if (lVar1 != 0) {
    FUN_1488328e8(&local_58);
    FUN_14883286a(lVar1 + 0x7a0,param_1,local_58);
    FUN_1409d23de(*(undefined8 *)(param_1 + 0x390),*(undefined8 *)(param_1 + 0x398),1);
    local_50[0] = 0;
    local_28 = 0;
    FUN_1456bb102(local_50,param_1);
    local_68 = *(undefined8 *)(param_1 + 0x3a0);
    local_60 = *(undefined4 *)(param_1 + 0x3a8);
    FUN_140e99737(*(undefined8 *)(param_1 + 0x390),&local_68,local_50);
    FUN_144a5ac3a(local_50);
    (**(code **)(**(longlong **)(param_1 + 0x390) + 0x2a8))(*(longlong **)(param_1 + 0x390),0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148832732 FUN_148832732 body=239 status=ok
// SIG undefined FUN_148832732(void)

void FUN_148832732(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  local_40 = 0;
  local_48 = 0;
  local_50 = 1;
  FUN_1446f470e(&local_58,L"NiagaraAsset",1);
  uVar1 = FUN_145a82b82();
  FUN_145a82b82();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  FUN_140f1fa23(uVar1,param_2,&local_50);
  local_40 = 0;
  local_48 = 0;
  local_50 = 1;
  FUN_1446f470e(&local_58,L"Parameters",1);
  uVar1 = FUN_145a82b82();
  FUN_145a82b82();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  FUN_140f1fa23(uVar1,param_2,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148832822 FUN_148832822 body=72 status=ok
// SIG undefined FUN_148832822(void)

void FUN_148832822(longlong param_1,longlong param_2,undefined8 param_3)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x398) = param_2;
  FUN_14065c7a4(param_1 + 0x3a0,param_3);
  return;
}



// FUNCTION 14883286a FUN_14883286a body=125 status=ok
// SIG undefined FUN_14883286a(void)

void FUN_14883286a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488328e8 FUN_1488328e8 body=182 status=ok
// SIG undefined FUN_1488328e8(void)

undefined8 * FUN_1488328e8(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7bab8) {
    FUN_144b3d300(&DAT_14cb7bab8);
    if (DAT_14cb7bab8 == -1) {
      builtin_wcsncpy(local_38 + 8,L"Finished",9);
      builtin_wcsncpy(local_38,L"OnSystem",8);
      FUN_1446f470e(&DAT_14cb7bab0,local_38,1);
      _Init_thread_footer(&DAT_14cb7bab8);
    }
  }
  *param_1 = DAT_14cb7bab0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488329a0 FUN_1488329a0 body=21 status=ok
// SIG undefined FUN_1488329a0(void)

void FUN_1488329a0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001488329b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x388))(param_1,0x800000);
  return;
}



// FUNCTION 1488329b6 FUN_1488329b6 body=94 status=ok
// SIG undefined FUN_1488329b6(void)

void FUN_1488329b6(longlong *param_1)

{
  longlong *plVar1;
  
  if ((char)param_1[0x2f] == '\x03') {
    (**(code **)(*param_1 + 0x2a8))(param_1);
  }
  plVar1 = (longlong *)param_1[0x72];
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x9e) & 0x10) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000148832a0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b0))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148832a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x388))(param_1,0x800000);
  return;
}



// FUNCTION 148832a14 FUN_148832a14 body=26 status=ok
// SIG undefined FUN_148832a14(void)

void FUN_148832a14(undefined8 param_1)

{
  FUN_1433b8194();
  FUN_1488329b6(param_1);
  return;
}



// FUNCTION 148832a56 FUN_148832a56 body=42 status=ok
// SIG undefined FUN_148832a56(void)

void FUN_148832a56(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b321ba0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 148832ab8 FUN_148832ab8 body=40 status=ok
// SIG undefined FUN_148832ab8(void)

undefined8 FUN_148832ab8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145982cfa(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148832b66 FUN_148832b66 body=151 status=ok
// SIG undefined FUN_148832b66(void)

undefined1 FUN_148832b66(undefined8 param_1,uint *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((((*param_2 != 0) && (param_2[1] != 0)) && (*param_2 != DAT_14c948000)) &&
     (((*(byte **)(param_3 + 0x30) != (byte *)0x0 && ((**(byte **)(param_3 + 0x30) & 0x6b) == 3)) &&
      (plVar1 = (longlong *)FUN_1412446d2(param_3 + 0x30),
      (int)plVar1[2] != *(int *)((longlong)plVar1 + 0x3c))))) {
    plVar2 = plVar1 + 8;
    if ((longlong *)plVar1[9] != (longlong *)0x0) {
      plVar2 = (longlong *)plVar1[9];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)plVar1[10] - 1U & *param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar3 * 0x40) == *param_2) {
          return 1;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + *plVar1 + 0x38);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148832c08 FUN_148832c08 body=1174 status=ok
// SIG undefined FUN_148832c08(void)

void FUN_148832c08(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong *local_d8;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar9 = local_98;
  if (((*(byte **)(param_4 + 0x30) != (byte *)0x0) && ((**(byte **)(param_4 + 0x30) & 0x6b) == 3))
     && (*(char *)(param_4 + 0x40) == '\x01')) {
    lVar5 = (**(code **)(*(longlong *)(param_2 + 0x9a8) + 0x10))(param_2 + 0x9a8);
    plVar6 = (longlong *)FUN_1412446d2(param_4 + 0x30);
    plVar1 = plVar6 + 3;
    local_88 = 0x100000000;
    local_78 = 0xffffffff;
    uStack_70 = (longlong *)((ulonglong)uStack_70._4_4_ << 0x20);
    uStack_80 = plVar1;
    if ((int)plVar6[6] == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_88);
      iVar13 = (int)plVar6[6];
    }
    local_98 = local_78;
    uVar9 = local_98;
    plStack_90 = uStack_70;
    local_a8 = (int)local_88;
    uStack_a4 = local_88._4_4_;
    uStack_a0 = (int)uStack_80;
    uStack_9c = uStack_80._4_4_;
    local_98._4_4_ = (int)((ulonglong)local_78 >> 0x20);
    local_b0 = plVar6;
    if ((local_98._4_4_ != iVar13) || (uStack_80 != plVar1)) {
      plVar2 = (longlong *)(param_2 + 0x9b0);
      iVar4 = local_98._4_4_;
      local_98 = uVar9;
      do {
        lVar12 = (longlong)iVar4 * 0x40 + *local_b0;
        if (lVar5 == 0) {
LAB_148832d86:
          FUN_144a7660c(lVar12,&local_88,1);
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_88);
          if (cVar3 != '\0') {
            FUN_1447a97f4(&local_88,lVar12);
            if ((((int)local_88 == 0) || (local_88._4_4_ == 0)) || ((int)local_88 == DAT_14c948000))
            goto LAB_148832dcf;
            if ((*(byte **)(lVar12 + 0x28) == (byte *)0x0) ||
               ((**(byte **)(lVar12 + 0x28) & 3) == 0)) {
              uVar7 = 1;
LAB_148832f17:
              if ((local_88._4_4_ == 0) || ((int)local_88 == DAT_14c948000)) goto LAB_148833078;
              if ((int)local_88._4_4_ < 2) {
                plVar8 = &uStack_80;
                if (0 < local_68._4_4_) goto LAB_14883308e;
              }
              else {
LAB_14883308e:
                plVar8 = uStack_70;
              }
              if ((int)local_88._4_4_ < 1) goto LAB_148833078;
              local_c0 = (undefined4)plVar8[1];
              local_c8 = *plVar8;
            }
            else {
              uVar7 = FUN_140dddb1a(lVar12 + 0x28,0);
              if (0xfffffffe < uVar7) {
                uVar7 = 0xffffffff;
              }
              if ((int)local_88 != 0) goto LAB_148832f17;
LAB_148833078:
              local_c0 = DAT_14c948620;
              local_c8 = DAT_14c948618;
            }
            (**(code **)(*plVar2 + 0x28))(plVar2,&local_c8,uVar7);
            goto LAB_148832dcf;
          }
        }
        else {
          FUN_144a7660c(lVar12,&local_88,1);
          if (((int)local_88 != DAT_14cb79028) || ((int)uStack_80 != DAT_14cb79030))
          goto LAB_148832d86;
          puVar11 = &DAT_14c9a12e0;
          if (*(longlong *)(lVar12 + 0x28) != 0) {
            puVar11 = (undefined4 *)FUN_140625092(*(longlong *)(lVar12 + 0x28),&DAT_14c9a12e0);
          }
          if (*(char *)(param_2 + 0x178) != '\x03') {
            local_f0 = param_2;
            FUN_148942106(&local_88,puVar11);
            plVar8 = uStack_80;
            local_e8 = 0;
            lStack_e0 = 0;
            local_d8 = (longlong *)0x0;
            uVar9 = FUN_140c52150();
            lStack_e0 = FUN_14477b664(uVar9);
            lVar12 = FUN_140c52150();
            uVar9 = FUN_140c52150();
            FUN_1402d1bfa(&local_c8,uVar9,plVar8);
            if (local_e8 != local_c8) {
              local_d8 = (longlong *)0x0;
            }
            local_e8 = local_c8;
            lVar10 = FUN_140c52150();
            if (lVar12 == 0) {
LAB_14883301f:
              lVar10 = lVar12;
            }
            else if (lVar10 == 0) {
              lVar10 = 0;
            }
            else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                     lVar10 + 0x30)) goto LAB_14883301f;
            if (lStack_e0 != lVar10) {
              local_d8 = (longlong *)0x0;
            }
            uVar9 = FUN_14477b664(lVar10);
            lStack_e0 = FUN_14477b664(uVar9);
            param_2 = local_f0;
            if ((lStack_e0 != 0) && (local_e8 != 0)) {
              local_d8 = plVar8;
            }
            FUN_1464f4f72(local_f0,&local_e8);
            goto LAB_148832de0;
          }
          local_88 = 0;
          local_78 = 0;
          uStack_80 = (longlong *)&DAT_3f800000ffffffff;
          uStack_70 = (longlong *)0x0;
          local_68 = 0;
          FUN_148942106(&local_c8,puVar11);
          FUN_14164c0ba(lVar5,&local_c8,&local_88);
          FUN_140de863f(uStack_70,local_68 & 0xffffffff);
LAB_148832dcf:
          if (uStack_70 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_148832de0:
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
        FUN_1449c0562(&local_a8);
        iVar4 = local_98._4_4_;
        uVar9 = local_98;
      } while (local_b0 != plVar6 ||
               ((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar1 || local_98._4_4_ != iVar13));
    }
  }
  local_98 = uVar9;
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488330a0 FUN_1488330a0 body=22 status=ok
// SIG undefined FUN_1488330a0(void)

undefined8 FUN_1488330a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488330b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1488330de FUN_1488330de body=21 status=ok
// SIG undefined FUN_1488330de(void)

void FUN_1488330de(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1488330f4();
  FUN_145891dec(uVar1);
  return;
}



// FUNCTION 1488330f4 FUN_1488330f4 body=110 status=ok
// SIG undefined FUN_1488330f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488330f4(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14cb79190 == (undefined8 *)0x0) {
    plVar1 = (longlong *)FUN_140595974(0x280,0);
    plVar2 = plVar1 + 0x14;
    *plVar1 = (longlong)plVar2;
    plVar1[0x14] = (longlong)(plVar1 + 0x28);
    plVar1[0x28] = (longlong)(plVar1 + 0x3c);
    plVar1[0x3c] = (longlong)DAT_14cb79190;
    _DAT_14cb79198 = _DAT_14cb79198 + 4;
  }
  else {
    plVar2 = (longlong *)*DAT_14cb79190;
  }
  DAT_14cb79190 = plVar2;
  _DAT_14cb7919c = _DAT_14cb7919c + 1;
  return;
}



// FUNCTION 148833162 FUN_148833162 body=44 status=ok
// SIG undefined FUN_148833162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148833162(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7919c = _DAT_14cb7919c + -1;
  *param_1 = DAT_14cb79190;
  DAT_14cb79190 = param_1;
  return;
}



// FUNCTION 14883318e FUN_14883318e body=28 status=ok
// SIG undefined FUN_14883318e(void)

void FUN_14883318e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145891dec(param_1);
  return;
}



// FUNCTION 1488331ee FUN_1488331ee body=193 status=ok
// SIG undefined FUN_1488331ee(void)

int FUN_1488331ee(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar1 = *(double *)(param_1 + 0x18);
  iVar3 = 1;
  if (0.0 < dVar1) {
    dVar2 = *(double *)(param_1 + 0x20);
    auVar5._8_4_ = (int)((ulonglong)param_2 >> 0x20);
    auVar5._0_8_ = param_2;
    auVar5._12_4_ = 0x45300000;
    dVar4 = dVar1 * -8.0 *
            (*(double *)(param_1 + 0x28) * dVar1 -
            (((double)CONCAT44(0x43300000,(int)param_2) - 4503599627370496.0) +
            (auVar5._8_8_ - 1.9342813113834067e+25))) + dVar2 * dVar2 * dVar1 * dVar1;
    if (dVar4 < 0.0) {
      dVar4 = sqrt(dVar4);
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    iVar3 = (int)((-dVar1 * dVar2 + dVar4) /
                 (*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x18)));
  }
  return iVar3;
}



// FUNCTION 1488332b0 FUN_1488332b0 body=49 status=ok
// SIG undefined FUN_1488332b0(void)

void FUN_1488332b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1488332e2();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b141300;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x100000032;
  return;
}



// FUNCTION 1488332e2 FUN_1488332e2 body=98 status=ok
// SIG undefined FUN_1488332e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488332e2(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (DAT_14cb79280 == (undefined8 *)0x0) {
    plVar1 = (longlong *)FUN_140595974(0xc0,0);
    plVar2 = plVar1 + 6;
    *plVar1 = (longlong)plVar2;
    plVar1[6] = (longlong)(plVar1 + 0xc);
    plVar1[0xc] = (longlong)(plVar1 + 0x12);
    plVar1[0x12] = (longlong)DAT_14cb79280;
    _DAT_14cb79288 = _DAT_14cb79288 + 4;
  }
  else {
    plVar2 = (longlong *)*DAT_14cb79280;
  }
  DAT_14cb79280 = plVar2;
  _DAT_14cb7928c = _DAT_14cb7928c + 1;
  return;
}



// FUNCTION 148833344 FUN_148833344 body=44 status=ok
// SIG undefined FUN_148833344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148833344(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7928c = _DAT_14cb7928c + -1;
  *param_1 = DAT_14cb79280;
  DAT_14cb79280 = param_1;
  return;
}



// FUNCTION 148833370 FUN_148833370 body=56 status=ok
// SIG undefined FUN_148833370(void)

void FUN_148833370(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b141300;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x100000032;
  return;
}



// FUNCTION 1488333d0 FUN_1488333d0 body=128 status=ok
// SIG undefined FUN_1488333d0(void)

void FUN_1488333d0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if (*(code **)(param_1 + 0x48) == (code *)0x0) {
    local_24 = 0;
    local_1c = 0;
  }
  else {
    (**(code **)(param_1 + 0x48))(&local_24);
  }
  FUN_144928d62(param_2,0,&local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148833460 FUN_148833460 body=168 status=ok
// SIG undefined FUN_148833460(void)

longlong FUN_148833460(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  if (DAT_14cb79338 != DAT_14cb79364) {
    lVar2 = *param_1;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    puVar5 = &DAT_14cb79368;
    if (DAT_14cb79370 != (undefined *)0x0) {
      puVar5 = DAT_14cb79370;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14cb79378 - 1U &
                              (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb79330 + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          return plVar1[1];
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14883350e FUN_14883350e body=484 status=ok
// SIG undefined FUN_14883350e(void)

undefined8 * FUN_14883350e(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_4 + 0x94) = 0;
  cVar2 = FUN_144729dda(param_1 + 8);
  if (cVar2 == '\0') {
LAB_1488335bf:
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_14479d2ce(param_1 + 8);
    if ((*(longlong *)(lVar4 + 0x30) == 0) ||
       (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360), lVar4 == 0)) goto LAB_1488335bf;
    if (*(char *)(lVar4 + 0x152) == '\x05') {
      *(undefined4 *)(param_4 + 0x94) = 7;
      *param_2 = 0;
      goto LAB_148833590;
    }
  }
  FUN_145781cfb(local_68,param_3);
  uVar3 = FUN_145781f60(param_4);
  local_98 = &local_69;
  local_69 = 0;
  local_90 = &local_6a;
  local_6a = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = 0;
  lVar5 = FUN_140bc7254(param_1,local_68,uVar3,*(undefined8 *)(param_4 + 0x38));
  lVar4 = FUN_14103c0a0(lVar4);
  if (lVar4 != 0) {
    FUN_145781dd6(local_68,uVar3,lVar4);
  }
  FUN_145707eb8(&local_80,uVar3);
  *(undefined4 *)(param_4 + 0x10) = (undefined4)local_80;
  *(undefined4 *)(param_4 + 0x14) = local_80._4_4_;
  *(undefined4 *)(param_4 + 0x18) = uStack_78;
  *(undefined4 *)(param_4 + 0x1c) = uStack_74;
  if (*(longlong **)(param_4 + 0x20) != (longlong *)0x0 && *(int *)(param_4 + 0x28) != 0) {
    cVar2 = (**(code **)(**(longlong **)(param_4 + 0x20) + 0x30))();
    if (cVar2 != '\0') {
      local_80 = 0;
      uStack_78 = 0;
      FUN_1401aa3da(&local_80,param_4 + 0x20);
      FUN_1488336f3(lVar5 + 0x38,&local_80);
      FUN_1449db362(&local_80);
    }
  }
  *(undefined4 *)(param_4 + 0x94) = 1;
  plVar1 = *(longlong **)(param_4 + 0x20);
  if (plVar1 == (longlong *)0x0 || *(int *)(param_4 + 0x28) == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_148833590:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488336f3 FUN_1488336f3 body=333 status=ok
// SIG undefined FUN_1488336f3(void)

void FUN_1488336f3(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))(), cVar4 != '\0')) {
    uVar6 = (ulonglong)(int)param_1[1];
    if (0 < (longlong)uVar6) {
      lVar8 = uVar6 * 0x10 + -8;
      do {
        if (((*(int *)(*param_1 + lVar8) == 0) ||
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x30))(), cVar4 == '\0')) {
          FUN_148839438(param_1,(int)uVar6 + -1);
          FUN_1488394a2(param_1);
        }
        lVar8 = lVar8 + -0x10;
        bVar3 = 1 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar3);
    }
    plVar2 = (longlong *)*param_2;
    if (plVar2 == (longlong *)0x0 || (int)param_2[1] == 0) {
      local_30 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
    }
    local_38 = local_30;
    iVar5 = FUN_148839394(param_1);
    iVar1 = (int)param_1[1];
    if (iVar5 < 0 || iVar1 <= iVar5) {
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14883953e(param_1);
      }
      lVar8 = *param_1;
      lVar7 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar8 + lVar7) = 0;
      *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
      FUN_1401aa3da(lVar8 + lVar7,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148833842 FUN_148833842 body=328 status=ok
// SIG undefined FUN_148833842(void)

undefined4 FUN_148833842(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined4 uStack_5c;
  int iStack_58;
  uint local_50;
  int local_4c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 != '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 8);
    if (((*(longlong *)(lVar5 + 0x30) != 0) &&
        (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360), lVar5 != 0)) &&
       (*(char *)(lVar5 + 0x152) == '\x05')) {
      uVar4 = 0;
      goto LAB_14883389b;
    }
  }
  FUN_145781cfb(&local_50,param_2);
  if (((local_50 == 0) || (local_4c == 0)) || (local_50 == DAT_14c948000)) {
    iStack_58 = DAT_14c948620;
    local_60 = (uint)DAT_14c948618;
    uStack_5c = (undefined4)(DAT_14c948618 >> 0x20);
    uVar6 = DAT_14c948618;
  }
  else {
    local_60 = local_50;
    uStack_5c = (undefined4)DAT_14c948028;
    iStack_58 = (int)((ulonglong)DAT_14c948028 >> 0x20);
    uVar6 = (ulonglong)local_50;
  }
  if (iStack_58 != 0) {
    uVar2 = FUN_144a78877(uVar6 & 0xffffffff,iStack_58);
    uVar6 = (ulonglong)uVar2;
  }
  iVar3 = FUN_140bc7976((longlong *)(param_1 + 0x10),uVar6,&local_60);
  if (iVar3 == -1) {
LAB_148833943:
    uVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if ((lVar5 + (longlong)iVar3 * 0x68 + 0x10U & 0xffffffffffffffef) == 0) goto LAB_148833943;
    uVar4 = FUN_14883398b(lVar5 + (longlong)iVar3 * 0x68 + 0x48,param_3);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_14883389b:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883398b FUN_14883398b body=235 status=ok
// SIG undefined FUN_14883398b(void)

byte FUN_14883398b(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar8 < 1) {
    bVar6 = 0;
  }
  else {
    lVar7 = uVar8 * 0x10 + -8;
    bVar6 = 0;
    do {
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + lVar7) == 0) ||
         (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) {
        lVar5 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
        lVar5 = local_50;
      }
      if ((((lVar5 == param_2) || (*(int *)(lVar1 + lVar7) == 0)) ||
          (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x30))(), cVar4 == '\0')) {
        FUN_148839438(param_1,(int)uVar8 + -1);
        FUN_1488394a2(param_1);
      }
      bVar6 = bVar6 | lVar5 == param_2;
      lVar7 = lVar7 + -0x10;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 148833a78 FUN_148833a78 body=33 status=ok
// SIG undefined FUN_148833a78(void)

void FUN_148833a78(void)

{
  FUN_145781ba8();
  return;
}



// FUNCTION 148833a9a FUN_148833a9a body=129 status=ok
// SIG undefined FUN_148833a9a(void)

void FUN_148833a9a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_2 + 4)) {
    iVar1 = 0;
    do {
      FUN_144a659ac(param_2,local_34,iVar1);
      iVar1 = iVar1 + 1;
      FUN_144928d62(param_1 + 0x10,iVar1,local_34);
    } while (iVar1 < *(int *)(param_2 + 4));
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148833b1c FUN_148833b1c body=756 status=ok
// SIG undefined FUN_148833b1c(void)

void FUN_148833b1c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_f8 [44];
  int local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = (undefined4 *)&DAT_ffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  local_c0 = param_2;
  uStack_b0 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar8 = *(int *)(param_1 + 0x50);
  }
  local_78 = local_a8;
  puVar3 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar8) || (uStack_b0 != lVar2)) {
    iVar5 = local_78._4_4_;
    local_cc = iVar8;
    local_c8 = plVar1;
    local_78 = puVar3;
    do {
      puVar3 = (undefined4 *)(*local_90 + (longlong)iVar5 * 0x68);
      iVar8 = *(int *)(*local_90 + 8 + (longlong)iVar5 * 0x68);
      if (iVar8 != 0) {
        FUN_144a78877(*puVar3,iVar8);
      }
      uVar6 = FUN_14883996e(local_c0);
      puVar4 = puVar3 + 8;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = puVar4;
      if (puVar3[0xe] != 0) {
        FUN_1449c0562(&local_68);
      }
      plVar1 = (longlong *)(puVar3 + 4);
      uStack_a0 = local_58;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar7 = puVar3[0xe];
      local_68 = CONCAT44(1 << ((byte)uVar7 & 0x1f),(int)uVar7 >> 5);
      local_58 = CONCAT44(uVar7,-1 << ((byte)uVar7 & 0x1f));
      local_50 = uVar7 & 0xffffffe0;
      local_b8 = plVar1;
      local_60 = puVar4;
      if (puVar3[0xe] != uVar7) {
        FUN_1449c0562(&local_68);
        uVar7 = local_58._4_4_;
      }
      puVar3 = local_60;
      if ((local_b8 != plVar1 || local_a8 != local_60) || uStack_a0._4_4_ != uVar7) {
        do {
          if (*(char *)(*local_b8 + 0x10 + (longlong)(int)uStack_a0._4_4_ * 0x38) == '\x01') {
            FUN_1411d2c14(uVar6,&local_68,*local_b8 + (longlong)(int)uStack_a0._4_4_ * 0x38,0);
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != plVar1 || (local_a8 != puVar3 || uStack_a0._4_4_ != uVar7));
      }
      local_78 = (undefined4 *)CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar5 = local_78._4_4_;
      puVar3 = local_78;
    } while (local_90 != local_c8 ||
             (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != local_cc));
  }
  local_78 = puVar3;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148833e12 FUN_148833e12 body=360 status=ok
// SIG undefined FUN_148833e12(void)

void FUN_148833e12(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar4 = FUN_140987788((longlong *)(param_1 + 0x28),uVar3,param_2);
  if (iVar4 != -1) {
    lVar7 = (longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 0x28);
    plVar6 = (longlong *)(lVar7 + 0x10);
    if (plVar6 != (longlong *)0x0 && lVar7 != 0) {
      lVar1 = lVar7 + 0x20;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = lVar1;
      if (*(int *)(lVar7 + 0x38) == 0) {
        iVar4 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar4 = *(int *)(lVar7 + 0x38);
      }
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar2 = local_68;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar5 = local_68._4_4_;
      local_80 = plVar6;
      if ((local_68._4_4_ != iVar4) || (local_68 = local_48, uStack_50 != lVar1)) {
        do {
          local_68 = uVar2;
          if (*(char *)(*local_80 + 0x10 + (longlong)iVar5 * 0x38) == '\x01') {
            FUN_1411d2c14(param_3,&local_58,*local_80 + (longlong)iVar5 * 0x38,0);
          }
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
          uVar2 = local_68;
        } while (local_80 != plVar6 ||
                 (CONCAT44(uStack_6c,uStack_70) != lVar1 || local_68._4_4_ != iVar4));
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148833f8a FUN_148833f8a body=44 status=ok
// SIG undefined FUN_148833f8a(void)

longlong * FUN_148833f8a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_148839ba1(param_3);
  *param_2 = lVar1 + 0x10;
  param_2[1] = lVar1;
  FUN_148839c6a(param_2);
  return param_2;
}



// FUNCTION 148833fb6 FUN_148833fb6 body=98 status=ok
// SIG undefined FUN_148833fb6(void)

void FUN_148833fb6(longlong param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar1 = *(uint *)(param_1 + 0x80);
    if ((int)uVar1 < 0 || *(int *)(param_1 + 0x90) <= (int)uVar1) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      uVar1 = 0;
    }
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar1 * 0x10) + 0x20))()
    ;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    return;
  }
  FUN_1457eb858(param_1);
  return;
}



// FUNCTION 148834018 FUN_148834018 body=359 status=ok
// SIG undefined FUN_148834018(void)

void FUN_148834018(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_1 == 0) {
    cVar2 = FUN_144729dda(param_1 + 2);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 2);
      uVar1 = *(undefined8 *)(lVar3 + 0xf0);
      local_90 = (undefined8 *)0x0;
      local_88 = 0;
      FUN_1446efa72(&local_90,0,3,0x10);
      local_88 = 3;
      *local_90 = &PTR_LAB_14a1c8830;
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
      local_90[2] = lVar4;
      *local_90 = &PTR_FUN_14b3fbdb0;
      local_90[3] = param_1;
      local_90[4] = FUN_148833fb6;
      local_78 = 0;
      local_70 = 0;
      FUN_14487d8d8(&local_78,&local_90);
      local_38 = 1;
      local_98 = local_80;
      local_80[0] = 1;
      local_7c = 0x3e800000;
      FUN_1406f4044(uVar1,param_1,&local_78,0x3e800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
      FUN_1449db362(&local_90);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148834180 FUN_148834180 body=223 status=ok
// SIG undefined FUN_148834180(void)

undefined8 FUN_148834180(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_140168de2(param_1 + 8,local_50,local_80);
  uVar2 = FUN_1405d5f74(local_50);
  FUN_140e1bd88(param_2,uVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_50;
    if (0x18 < local_38) {
      pppuVar3 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148834264 FUN_148834264 body=9 status=ok
// SIG undefined FUN_148834264(void)

void FUN_148834264(longlong param_1)

{
  FUN_141230368(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14883426e FUN_14883426e body=386 status=ok
// SIG undefined FUN_14883426e(void)

longlong * FUN_14883426e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14883437f:
    *puVar5 = &PTR_LAB_14b3fc100;
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
    *puVar5 = &PTR_FUN_14b3fbef0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14883437f;
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
    *puVar5 = &PTR_LAB_14b3fc100;
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
    *puVar5 = &PTR_FUN_14b3fbef0;
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



// FUNCTION 1488343f0 FUN_1488343f0 body=342 status=ok
// SIG undefined FUN_1488343f0(void)

void FUN_1488343f0(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar5 = lVar4 + (longlong)(int)param_2[1] * 8;
    do {
      if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
        lVar8 = *(longlong *)(param_1 + 0xe0);
        lVar7 = (longlong)*(int *)(param_1 + 0xe8) << 3;
        do {
          cVar2 = FUN_1401246e4(lVar8,lVar4);
          if (cVar2 != '\0') goto LAB_148834465;
          lVar8 = lVar8 + 8;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      uVar3 = FUN_14479d2ce(lVar4);
      FUN_1411dbaa8(param_1,uVar3);
LAB_148834465:
      lVar4 = lVar4 + 8;
    } while (lVar4 != lVar5);
  }
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 0xe8);
  lVar5 = (longlong)local_40;
  pvVar1 = *(void **)(param_1 + 0xe0);
  if (lVar5 != 0) {
    FUN_145aa900a(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar5 << 3);
    if ((longlong)local_40 != 0) {
      pvVar1 = (void *)((longlong)local_48 + (longlong)local_40 * 8);
      pvVar6 = local_48;
      do {
        if ((longlong)(int)param_2[1] != 0) {
          lVar5 = *param_2;
          lVar4 = (longlong)(int)param_2[1] << 3;
          do {
            cVar2 = FUN_1401246e4(lVar5,pvVar6);
            if (cVar2 != '\0') goto LAB_148834523;
            lVar5 = lVar5 + 8;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
        uVar3 = FUN_14479d2ce(pvVar6);
        FUN_1411db8ea(param_1,uVar3);
LAB_148834523:
        pvVar6 = (void *)((longlong)pvVar6 + 8);
      } while (pvVar6 != pvVar1);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148834548 FUN_148834548 body=69 status=ok
// SIG undefined FUN_148834548(void)

void FUN_148834548(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_1488343f0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14883458e FUN_14883458e body=43 status=ok
// SIG undefined FUN_14883458e(void)

undefined8 * FUN_14883458e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1488345b9 FUN_1488345b9 body=28 status=ok
// SIG undefined FUN_1488345b9(void)

undefined8 FUN_1488345b9(undefined8 param_1,undefined8 param_2)

{
  FUN_140a2b7c8(param_2,param_1);
  return param_1;
}



// FUNCTION 1488345d6 FUN_1488345d6 body=102 status=ok
// SIG undefined FUN_1488345d6(void)

void FUN_1488345d6(undefined1 *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1446dda88(param_1 + 0x28,0);
  }
  *param_1 = 0xf;
  if ((*(longlong *)(param_1 + 4) != 0) && (*(longlong *)(param_1 + 4) != DAT_14cb79410)) {
    lVar1 = FUN_148833460(param_1 + 4);
    if (lVar1 != 0) {
      FUN_1488333d0(lVar1,param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 14883463c FUN_14883463c body=17 status=ok
// SIG undefined FUN_14883463c(void)

void FUN_14883463c(longlong param_1,undefined8 param_2)

{
  FUN_144928d62(param_1 + 0x10,1,param_2);
  return;
}



// FUNCTION 14883464e FUN_14883464e body=17 status=ok
// SIG undefined FUN_14883464e(void)

void FUN_14883464e(longlong param_1,undefined8 param_2)

{
  FUN_144928d62(param_1 + 0x10,2,param_2);
  return;
}



// FUNCTION 148834660 FUN_148834660 body=102 status=ok
// SIG undefined FUN_148834660(void)

undefined8 FUN_148834660(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = &DAT_14c9a12e0;
  if (*param_3 != 0) {
    puVar1 = (undefined4 *)FUN_140625092(*param_3,&DAT_14c9a12e0);
  }
  FUN_1447a97f4(local_40,puVar1);
  FUN_14071d490(local_40,param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488346c8 FUN_1488346c8 body=427 status=ok
// SIG undefined FUN_1488346c8(void)

undefined8 FUN_1488346c8(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  size_t sVar5;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  longlong local_c0;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  FUN_14009b010(&local_d8,1,0);
  FUN_1446dcc2e(param_3,&local_d8);
  plVar4 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  (**(code **)(*param_2 + 0x48))(param_2,param_3,1);
  FUN_14014e996(param_1,&local_d8,1,0);
  local_e8 = (wchar_t *)0x0;
  uStack_e0 = 0;
  FUN_1400b2348(&local_d8,&local_e8,1);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  FUN_1414c0540(&local_e8);
  _Str = local_e8;
  if ((int)uStack_e0 == 0) {
    _Str = L"";
  }
  local_58 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar5 = wcslen(_Str);
    FUN_1449b853c(&local_d8,_Str,sVar5 & 0xffffffff,1);
  }
  lVar3 = *param_3;
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 1) & 2) == 0)) {
    FUN_140126aca(lVar3,local_50);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148834874 FUN_148834874 body=45 status=ok
// SIG undefined FUN_148834874(void)

longlong FUN_148834874(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145c1acd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488348a2 FUN_1488348a2 body=45 status=ok
// SIG undefined FUN_1488348a2(void)

longlong FUN_1488348a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c1acd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488348d6 FUN_1488348d6 body=38 status=ok
// SIG undefined FUN_1488348d6(void)

undefined8 FUN_1488348d6(undefined8 param_1,int param_2)

{
  FUN_1458c3936();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488348fc FUN_1488348fc body=63 status=ok
// SIG undefined FUN_1488348fc(void)

longlong FUN_1488348fc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148834960(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_14883493b(lVar2);
  return lVar2;
}



// FUNCTION 14883493b FUN_14883493b body=36 status=ok
// SIG undefined FUN_14883493b(void)

void FUN_14883493b(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[3] = DAT_14c8464e0;
  param_1[4] = uVar1;
  param_1[5] = DAT_14c8464f0;
  return;
}



// FUNCTION 148834960 FUN_148834960 body=147 status=ok
// SIG undefined FUN_148834960(void)

void FUN_148834960(longlong param_1,int param_2)

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



// FUNCTION 1488349f4 FUN_1488349f4 body=54 status=ok
// SIG undefined FUN_1488349f4(void)

longlong FUN_1488349f4(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 148834a2a FUN_148834a2a body=92 status=ok
// SIG undefined FUN_148834a2a(void)

undefined8 * FUN_148834a2a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3fa890;
  FUN_141466e9a(param_1 + 4);
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148834a86 FUN_148834a86 body=32 status=ok
// SIG undefined FUN_148834a86(void)

undefined8 FUN_148834a86(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FAsyncImpactGCData");
  return param_2;
}



// FUNCTION 148834aa6 FUN_148834aa6 body=38 status=ok
// SIG undefined FUN_148834aa6(void)

undefined8 FUN_148834aa6(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148834acc FUN_148834acc body=39 status=ok
// SIG undefined FUN_148834acc(void)

longlong FUN_148834acc(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x88))(*(longlong **)(param_1 + 0x90),param_2,0,0);
  return param_1;
}



// FUNCTION 148834af4 FUN_148834af4 body=38 status=ok
// SIG undefined FUN_148834af4(void)

undefined8 FUN_148834af4(undefined8 param_1,int param_2)

{
  FUN_145d35448();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148834b1a FUN_148834b1a body=124 status=ok
// SIG undefined FUN_148834b1a(void)

void FUN_148834b1a(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14cb7a548;
  if (param_1 <= (int)DAT_14cb7a548) {
    iVar2 = 0x80;
    if (0x80 < DAT_14cb7a548) {
      lVar5 = (longlong)(int)DAT_14cb7a548;
      if (0x80 < DAT_14cb7a54c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 5,0);
      iVar3 = (int)(uVar4 >> 5);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14cb7a54c = iVar2;
    FUN_145712980(&DAT_14cb79540,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb7a548);
}



// FUNCTION 148834b98 FUN_148834b98 body=142 status=ok
// SIG undefined FUN_148834b98(void)

void FUN_148834b98(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = &DAT_14cb79540;
  if (DAT_14cb7a540 != (undefined *)0x0) {
    puVar2 = DAT_14cb7a540;
  }
  if (DAT_14cb7a574 != 0) {
    *(int *)(puVar2 + (longlong)DAT_14cb7a570 * 0x20) = param_1;
  }
  *(undefined4 *)(puVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb7a574) {
    iVar3 = DAT_14cb7a570;
  }
  *(int *)(puVar2 + (longlong)param_1 * 0x20 + 4) = iVar3;
  DAT_14cb7a574 = DAT_14cb7a574 + 1;
  puVar2 = &DAT_14cb7a550;
  if (DAT_14cb7a560 != (undefined *)0x0) {
    puVar2 = DAT_14cb7a560;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7a570 = param_1;
  *(uint *)(puVar2 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar2 + (longlong)(iVar3 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148834c26 FUN_148834c26 body=141 status=ok
// SIG undefined FUN_148834c26(void)

void FUN_148834c26(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = DAT_14cb7ba90;
  if (param_1 <= (int)DAT_14cb7ba90) {
    iVar2 = 0x80;
    if (0x80 < DAT_14cb7ba90) {
      lVar3 = (longlong)(int)DAT_14cb7ba90;
      if (0x80 < DAT_14cb7ba94) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x28,0);
      iVar5 = (int)(uVar4 / 0x28);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar2 = iVar5;
      }
    }
    DAT_14cb7ba94 = iVar2;
    FUN_148834cb4(&DAT_14cb7a688,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb7ba90);
}



// FUNCTION 148834cb4 FUN_148834cb4 body=152 status=ok
// SIG undefined FUN_148834cb4(void)

void FUN_148834cb4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1400,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x1400),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1400,param_2,param_3,0x28);
  return;
}



// FUNCTION 148834d4c FUN_148834d4c body=61 status=ok
// SIG undefined FUN_148834d4c(void)

void FUN_148834d4c(longlong param_1)

{
  FUN_14103c380(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148834d8a FUN_148834d8a body=88 status=ok
// SIG undefined FUN_148834d8a(void)

void FUN_148834d8a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148834de2 FUN_148834de2 body=61 status=ok
// SIG undefined FUN_148834de2(void)

void FUN_148834de2(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1401aa3da(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148834e20 FUN_148834e20 body=90 status=ok
// SIG undefined FUN_148834e20(void)

void FUN_148834e20(undefined2 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)param_1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_1404e49fa(param_1 + 8,param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 1) = param_2[1];
  param_2[1] = 0;
  return;
}



// FUNCTION 148834e94 FUN_148834e94 body=67 status=ok
// SIG undefined FUN_148834e94(void)

void FUN_148834e94(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_1404e49fa(param_1 + 0x10,param_2 + 0x10);
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



// FUNCTION 148834ed8 FUN_148834ed8 body=29 status=ok
// SIG undefined FUN_148834ed8(void)

undefined8 FUN_148834ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148834ef6 FUN_148834ef6 body=83 status=ok
// SIG undefined FUN_148834ef6(void)

void FUN_148834ef6(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aa7f0;
  uVar2 = (ushort)DAT_14c9aa7f0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aa888 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aa7f0);
  }
  else {
    (*DAT_14c9aa888)();
  }
  *(undefined1 *)(param_2 + 4) = 0x1f;
  return;
}



// FUNCTION 148834f4a FUN_148834f4a body=83 status=ok
// SIG undefined FUN_148834f4a(void)

void FUN_148834f4a(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aa7f0;
  uVar2 = (ushort)DAT_14c9aa7f0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aa888 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aa7f0);
  }
  else {
    (*DAT_14c9aa888)();
  }
  *(undefined1 *)(param_2 + 4) = 0x1f;
  return;
}



// FUNCTION 148834f9e FUN_148834f9e body=81 status=ok
// SIG undefined FUN_148834f9e(void)

void FUN_148834f9e(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 148835006 FUN_148835006 body=283 status=ok
// SIG undefined FUN_148835006(void)

undefined8 FUN_148835006(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 14883514a FUN_14883514a body=59 status=ok
// SIG undefined FUN_14883514a(void)

undefined8 FUN_14883514a(longlong *param_1)

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



// FUNCTION 1488351e8 FUN_1488351e8 body=85 status=ok
// SIG undefined FUN_1488351e8(void)

void FUN_1488351e8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148835242 FUN_148835242 body=138 status=ok
// SIG undefined FUN_148835242(void)

void FUN_148835242(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1488352cc FUN_1488352cc body=325 status=ok
// SIG undefined FUN_1488352cc(void)

void FUN_1488352cc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 148835412 FUN_148835412 body=64 status=ok
// SIG undefined FUN_148835412(void)

void FUN_148835412(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    uVar1 = DAT_14c8464e8;
    param_1[3] = DAT_14c8464e0;
    param_1[4] = uVar1;
    param_1[5] = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[0xd] = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1 = param_1 + 0xf;
  }
  return;
}



// FUNCTION 148835452 FUN_148835452 body=143 status=ok
// SIG undefined FUN_148835452(void)

void FUN_148835452(longlong param_1,int param_2)

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



// FUNCTION 1488354e2 FUN_1488354e2 body=62 status=ok
// SIG undefined FUN_1488354e2(void)

void FUN_1488354e2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148835520(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x78,8);
  }
  return;
}



// FUNCTION 148835520 FUN_148835520 body=104 status=ok
// SIG undefined FUN_148835520(void)

ulonglong FUN_148835520(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x78) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148835556;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x78,8);
      param_2 = param_2 / 0x78;
    }
  }
LAB_148835556:
  return param_2 & 0xffffffff;
}



// FUNCTION 148835588 FUN_148835588 body=175 status=ok
// SIG undefined FUN_148835588(void)

void FUN_148835588(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148835611;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148835611:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148835652 FUN_148835652 body=29 status=ok
// SIG undefined FUN_148835652(void)

bool FUN_148835652(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148835670 FUN_148835670 body=26 status=ok
// SIG undefined FUN_148835670(void)

bool FUN_148835670(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14883568a FUN_14883568a body=24 status=ok
// SIG undefined FUN_14883568a(void)

bool FUN_14883568a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488356a2 FUN_1488356a2 body=93 status=ok
// SIG undefined FUN_1488356a2(void)

void FUN_1488356a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fad40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148835700 FUN_148835700 body=126 status=ok
// SIG undefined FUN_148835700(void)

void FUN_148835700(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fad40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014883576f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14883577e FUN_14883577e body=35 status=ok
// SIG undefined FUN_14883577e(void)

void FUN_14883577e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014883579d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1488357bc FUN_1488357bc body=93 status=ok
// SIG undefined FUN_1488357bc(void)

void FUN_1488357bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fadb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14883581a FUN_14883581a body=93 status=ok
// SIG undefined FUN_14883581a(void)

void FUN_14883581a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fadb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148835878 FUN_148835878 body=126 status=ok
// SIG undefined FUN_148835878(void)

void FUN_148835878(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fadb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488358e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488358f6 FUN_1488358f6 body=48 status=ok
// SIG undefined FUN_1488358f6(void)

void FUN_1488358f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148835923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148835926 FUN_148835926 body=31 status=ok
// SIG undefined FUN_148835926(void)

undefined8 FUN_148835926(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148835960 FUN_148835960 body=93 status=ok
// SIG undefined FUN_148835960(void)

void FUN_148835960(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fae20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488359be FUN_1488359be body=93 status=ok
// SIG undefined FUN_1488359be(void)

void FUN_1488359be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fae20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148835a1c FUN_148835a1c body=126 status=ok
// SIG undefined FUN_148835a1c(void)

void FUN_148835a1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fae20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148835a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148835a9a FUN_148835a9a body=58 status=ok
// SIG undefined FUN_148835a9a(void)

void FUN_148835a9a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148835ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148835ad4 FUN_148835ad4 body=173 status=ok
// SIG undefined FUN_148835ad4(void)

bool FUN_148835ad4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148835b82 FUN_148835b82 body=29 status=ok
// SIG undefined FUN_148835b82(void)

undefined8 FUN_148835b82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148835bba FUN_148835bba body=29 status=ok
// SIG undefined FUN_148835bba(void)

bool FUN_148835bba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148835bd8 FUN_148835bd8 body=26 status=ok
// SIG undefined FUN_148835bd8(void)

bool FUN_148835bd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148835bf2 FUN_148835bf2 body=24 status=ok
// SIG undefined FUN_148835bf2(void)

bool FUN_148835bf2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148835c0a FUN_148835c0a body=93 status=ok
// SIG undefined FUN_148835c0a(void)

void FUN_148835c0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fae90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148835c68 FUN_148835c68 body=93 status=ok
// SIG undefined FUN_148835c68(void)

void FUN_148835c68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fae90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148835cc6 FUN_148835cc6 body=126 status=ok
// SIG undefined FUN_148835cc6(void)

void FUN_148835cc6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f8df0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fae90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148835d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148835d44 FUN_148835d44 body=48 status=ok
// SIG undefined FUN_148835d44(void)

void FUN_148835d44(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148835d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148835d74 FUN_148835d74 body=163 status=ok
// SIG undefined FUN_148835d74(void)

bool FUN_148835d74(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148835e18 FUN_148835e18 body=31 status=ok
// SIG undefined FUN_148835e18(void)

undefined8 FUN_148835e18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148835e52 FUN_148835e52 body=93 status=ok
// SIG undefined FUN_148835e52(void)

void FUN_148835e52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3faf70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3faf00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148835eb0 FUN_148835eb0 body=93 status=ok
// SIG undefined FUN_148835eb0(void)

void FUN_148835eb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3faf70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3faf00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148835f0e FUN_148835f0e body=126 status=ok
// SIG undefined FUN_148835f0e(void)

void FUN_148835f0e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3faf70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3faf00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148835f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148835f8c FUN_148835f8c body=48 status=ok
// SIG undefined FUN_148835f8c(void)

void FUN_148835f8c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148835fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148835fbe FUN_148835fbe body=31 status=ok
// SIG undefined FUN_148835fbe(void)

undefined8 FUN_148835fbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148835ff8 FUN_148835ff8 body=93 status=ok
// SIG undefined FUN_148835ff8(void)

void FUN_148835ff8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8d60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fafe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148836056 FUN_148836056 body=93 status=ok
// SIG undefined FUN_148836056(void)

void FUN_148836056(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8d60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fafe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488360b4 FUN_1488360b4 body=126 status=ok
// SIG undefined FUN_1488360b4(void)

void FUN_1488360b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f8d60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fafe0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148836123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148836132 FUN_148836132 body=46 status=ok
// SIG undefined FUN_148836132(void)

void FUN_148836132(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014883615d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148836160 FUN_148836160 body=161 status=ok
// SIG undefined FUN_148836160(void)

bool FUN_148836160(longlong param_1,undefined4 param_2,undefined8 param_3)

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
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148836232 FUN_148836232 body=31 status=ok
// SIG undefined FUN_148836232(void)

undefined8 FUN_148836232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883626c FUN_14883626c body=29 status=ok
// SIG undefined FUN_14883626c(void)

bool FUN_14883626c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14883628a FUN_14883628a body=26 status=ok
// SIG undefined FUN_14883628a(void)

bool FUN_14883628a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488362a4 FUN_1488362a4 body=93 status=ok
// SIG undefined FUN_1488362a4(void)

void FUN_1488362a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb0d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148836302 FUN_148836302 body=93 status=ok
// SIG undefined FUN_148836302(void)

void FUN_148836302(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb0d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148836360 FUN_148836360 body=126 status=ok
// SIG undefined FUN_148836360(void)

void FUN_148836360(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb0d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488363cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488363de FUN_1488363de body=35 status=ok
// SIG undefined FUN_1488363de(void)

void FUN_1488363de(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488363fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148836402 FUN_148836402 body=31 status=ok
// SIG undefined FUN_148836402(void)

undefined8 FUN_148836402(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14883643c FUN_14883643c body=93 status=ok
// SIG undefined FUN_14883643c(void)

void FUN_14883643c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc170;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14883649a FUN_14883649a body=93 status=ok
// SIG undefined FUN_14883649a(void)

void FUN_14883649a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc170;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488364f8 FUN_1488364f8 body=126 status=ok
// SIG undefined FUN_1488364f8(void)

void FUN_1488364f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc170;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb140;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148836567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148836576 FUN_148836576 body=40 status=ok
// SIG undefined FUN_148836576(void)

void FUN_148836576(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014883659b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14883659e FUN_14883659e body=152 status=ok
// SIG undefined FUN_14883659e(void)

bool FUN_14883659e(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14883663a FUN_14883663a body=113 status=ok
// SIG undefined FUN_14883663a(void)

void FUN_14883663a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1488366ac FUN_1488366ac body=103 status=ok
// SIG undefined FUN_1488366ac(void)

undefined8 FUN_1488366ac(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x30)) {
    uVar4 = uVar2 / 0x30 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x30,8);
  }
  return uVar3;
}



// FUNCTION 148836714 FUN_148836714 body=126 status=ok
// SIG undefined FUN_148836714(void)

ulonglong FUN_148836714(undefined8 *param_1,longlong *param_2)

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
    in_RAX = FUN_14116e48a();
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
      goto LAB_14883674a;
    }
  }
  bVar6 = (byte)in_RAX;
  bVar9 = 0;
  uVar10 = 0;
LAB_14883674a:
  return CONCAT71(uVar10,bVar9 & bVar6) & 0xffffffff;
}



// FUNCTION 148836792 FUN_148836792 body=97 status=ok
// SIG undefined FUN_148836792(void)

byte FUN_148836792(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_14007c310();
  if ((((cVar1 == '\0') || (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) ||
      (*(longlong *)(param_1 + 0xc) != *(longlong *)(param_2 + 0xc))) ||
     (((*(double *)(param_1 + 0x18) != *(double *)(param_2 + 0x18) ||
       (NAN(*(double *)(param_1 + 0x18)) || NAN(*(double *)(param_2 + 0x18)))) ||
      ((*(double *)(param_1 + 0x20) != *(double *)(param_2 + 0x20) ||
       (NAN(*(double *)(param_1 + 0x20)) || NAN(*(double *)(param_2 + 0x20)))))))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -(*(double *)(param_2 + 0x28) == *(double *)(param_1 + 0x28)) & 1;
  }
  return bVar2;
}



// FUNCTION 14883681e FUN_14883681e body=29 status=ok
// SIG undefined FUN_14883681e(void)

undefined8 FUN_14883681e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148836856 FUN_148836856 body=29 status=ok
// SIG undefined FUN_148836856(void)

bool FUN_148836856(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148836874 FUN_148836874 body=26 status=ok
// SIG undefined FUN_148836874(void)

bool FUN_148836874(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14883688e FUN_14883688e body=24 status=ok
// SIG undefined FUN_14883688e(void)

bool FUN_14883688e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488368a6 FUN_1488368a6 body=93 status=ok
// SIG undefined FUN_1488368a6(void)

void FUN_1488368a6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148836904 FUN_148836904 body=93 status=ok
// SIG undefined FUN_148836904(void)

void FUN_148836904(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb1f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148836962 FUN_148836962 body=126 status=ok
// SIG undefined FUN_148836962(void)

void FUN_148836962(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb1f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488369d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488369e0 FUN_1488369e0 body=35 status=ok
// SIG undefined FUN_1488369e0(void)

void FUN_1488369e0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488369ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148836a04 FUN_148836a04 body=142 status=ok
// SIG undefined FUN_148836a04(void)

bool FUN_148836a04(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148836a94 FUN_148836a94 body=48 status=ok
// SIG undefined FUN_148836a94(void)

void FUN_148836a94(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 148836ac4 FUN_148836ac4 body=107 status=ok
// SIG undefined FUN_148836ac4(void)

void FUN_148836ac4(longlong *param_1)

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
        goto LAB_148836b19;
      }
    }
    FUN_1404ec6d4(param_1,uVar4 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar4 < iVar2);
LAB_148836b19:
  FUN_141089ae6(param_1);
  return;
}



// FUNCTION 148836b30 FUN_148836b30 body=126 status=ok
// SIG undefined FUN_148836b30(void)

ulonglong FUN_148836b30(undefined8 *param_1,longlong *param_2)

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
    in_RAX = FUN_145b7ab14();
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
      goto LAB_148836b66;
    }
  }
  bVar6 = (byte)in_RAX;
  bVar9 = 0;
  uVar10 = 0;
LAB_148836b66:
  return CONCAT71(uVar10,bVar9 & bVar6) & 0xffffffff;
}


