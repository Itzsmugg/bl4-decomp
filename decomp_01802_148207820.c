// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148207820 FUN_148207820 body=67 status=ok
// SIG undefined FUN_148207820(void)

void FUN_148207820(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1403aee50(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14021b592(param_1);
    return;
  }
  FUN_1482075a4(param_1);
  FUN_1403aee50(param_1,0);
  return;
}



// FUNCTION 148207864 FUN_148207864 body=147 status=ok
// SIG undefined FUN_148207864(void)

void FUN_148207864(longlong param_1,int param_2)

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



// FUNCTION 1482078f8 FUN_1482078f8 body=113 status=ok
// SIG undefined FUN_1482078f8(void)

void FUN_1482078f8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 14820796a FUN_14820796a body=48 status=ok
// SIG undefined FUN_14820796a(void)

void FUN_14820796a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14820799a FUN_14820799a body=147 status=ok
// SIG undefined FUN_14820799a(void)

void FUN_14820799a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148207a2e FUN_148207a2e body=140 status=ok
// SIG undefined FUN_148207a2e(void)

void FUN_148207a2e(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb43f50;
  if (param_1 <= (int)DAT_14cb43f50) {
    if (DAT_14cb43f54 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb43f50) {
        uVar2 = DAT_14cb43f50;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb43f50 + ((ulonglong)((longlong)(int)DAT_14cb43f50 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb43f54 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb43f48,param_1,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148207abc FUN_148207abc body=48 status=ok
// SIG undefined FUN_148207abc(void)

void FUN_148207abc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,4);
  }
  return;
}



// FUNCTION 148207aee FUN_148207aee body=52 status=ok
// SIG undefined FUN_148207aee(void)

void FUN_148207aee(void)

{
  if (1 < DAT_14cb44498) {
    FUN_145d63aba();
    DAT_14cb44498 = 1;
    FUN_14143198e();
    return;
  }
  FUN_148207b22();
  FUN_145d63aba();
  return;
}



// FUNCTION 148207b22 FUN_148207b22 body=364 status=ok
// SIG undefined FUN_148207b22(void)

void FUN_148207b22(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
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
  puVar5 = &DAT_14cb44488;
  if (DAT_14cb44490 != (undefined *)0x0) {
    puVar5 = DAT_14cb44490;
  }
  iVar4 = DAT_14cb44498 + 3;
  if (-1 < DAT_14cb44498) {
    iVar4 = DAT_14cb44498;
  }
  if (DAT_14cb44458 - DAT_14cb44484 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cb44460;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cb44478 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cb44478;
    }
    local_78 = &DAT_14cb44450;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cb44460)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cb44450 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb44460 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cb44498) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cb44498);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148207c90 FUN_148207c90 body=135 status=ok
// SIG undefined FUN_148207c90(void)

longlong FUN_148207c90(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148207d18();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_148207cca;
  }
  local_30 = param_3;
  FUN_148207de8(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_148207cca:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x18 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148207d18 FUN_148207d18 body=207 status=ok
// SIG undefined FUN_148207d18(void)

int FUN_148207d18(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 148207de8 FUN_148207de8 body=284 status=ok
// SIG undefined FUN_148207de8(void)

undefined4 * FUN_148207de8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148207f06(param_1,local_50);
  local_40 = 0;
  FUN_148208090(local_48,*param_4);
  *(undefined4 *)(local_48 + 0x10) = 0xffffffff;
  cVar1 = FUN_148207fec(param_1,param_3,local_48,local_50);
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
      *(uint *)(local_48 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x10) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_50[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14820822a(param_1);
    }
  }
  *param_2 = local_50[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148207f06 FUN_148207f06 body=230 status=ok
// SIG undefined FUN_148207f06(void)

int * FUN_148207f06(longlong *param_1,int *param_2)

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



// FUNCTION 148207fec FUN_148207fec body=162 status=ok
// SIG undefined FUN_148207fec(void)

undefined8 FUN_148207fec(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_1482080e8(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_1482081b8(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_148208010;
    }
  }
  uVar6 = 0;
LAB_148208010:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148208090 FUN_148208090 body=87 status=ok
// SIG undefined FUN_148208090(void)

longlong * FUN_148208090(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1482080e8 FUN_1482080e8 body=207 status=ok
// SIG undefined FUN_1482080e8(void)

int FUN_1482080e8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1482081b8 FUN_1482081b8 body=114 status=ok
// SIG undefined FUN_1482081b8(void)

void FUN_1482081b8(longlong *param_1,int param_2)

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



// FUNCTION 14820822a FUN_14820822a body=510 status=ok
// SIG undefined FUN_14820822a(void)

void FUN_14820822a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14820842a FUN_14820842a body=114 status=ok
// SIG undefined FUN_14820842a(void)

void FUN_14820842a(longlong *param_1,int param_2)

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



// FUNCTION 14820849c FUN_14820849c body=114 status=ok
// SIG undefined FUN_14820849c(void)

void FUN_14820849c(longlong *param_1,int param_2)

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



// FUNCTION 14820850e FUN_14820850e body=71 status=ok
// SIG undefined FUN_14820850e(void)

void FUN_14820850e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1700);
  if (*(longlong *)(param_1 + 0x1700) == 0) {
    lVar1 = param_1;
  }
  FUN_14013f70a(lVar1,*(undefined4 *)(param_1 + 0x1710));
  *(undefined4 *)(param_1 + 0x1710) = 0;
  if (*(int *)(param_1 + 0x1714) == 0) {
    return;
  }
  FUN_148208556(param_1);
  return;
}



// FUNCTION 148208556 FUN_148208556 body=93 status=ok
// SIG undefined FUN_148208556(void)

void FUN_148208556(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1714) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1714) = 0;
    if (*(void **)((longlong)param_1 + 0x1700) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x1700),
              (longlong)*(int *)((longlong)param_1 + 0x1710) * 0x2e0);
      FUN_1446efa72((longlong)param_1 + 0x1700,0,0,0x2e0);
      return;
    }
  }
  return;
}



// FUNCTION 1482085b4 FUN_1482085b4 body=147 status=ok
// SIG undefined FUN_1482085b4(void)

void FUN_1482085b4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1700);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x2e0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1700,0,param_3,0x2e0);
    memmove(*(void **)((longlong)param_1 + 0x1700),param_1,(longlong)param_2 * 0x2e0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1700,param_2,param_3,0x2e0);
  return;
}



// FUNCTION 148208648 FUN_148208648 body=135 status=ok
// SIG undefined FUN_148208648(void)

void FUN_148208648(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1710);
  if (param_2 <= (int)uVar1) {
    iVar6 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x1714)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x2e0,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 5;
      iVar5 = SUB164(auVar2 * ZEXT816(0xb21642c8590b217),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x1714) = iVar6;
    FUN_1482085b4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1482086d0 FUN_1482086d0 body=374 status=ok
// SIG undefined FUN_1482086d0(void)

void FUN_1482086d0(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148208846 FUN_148208846 body=68 status=ok
// SIG undefined FUN_148208846(void)

void FUN_148208846(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_148201606(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14820888a FUN_14820888a body=25 status=ok
// SIG undefined FUN_14820888a(void)

void FUN_14820888a(longlong *param_1,int param_2)

{
  int *piVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1482088a4 FUN_1482088a4 body=29 status=ok
// SIG undefined FUN_1482088a4(void)

undefined8 FUN_1482088a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482088de FUN_1482088de body=93 status=ok
// SIG undefined FUN_1482088de(void)

void FUN_1482088de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fcc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14820893c FUN_14820893c body=93 status=ok
// SIG undefined FUN_14820893c(void)

void FUN_14820893c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae2fcc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14820899a FUN_14820899a body=126 status=ok
// SIG undefined FUN_14820899a(void)

void FUN_14820899a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9c60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae2fcc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148208a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148208a26 FUN_148208a26 body=21 status=ok
// SIG undefined FUN_148208a26(void)

undefined8 FUN_148208a26(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148208a3c FUN_148208a3c body=115 status=ok
// SIG undefined FUN_148208a3c(void)

void FUN_148208a3c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + (longlong)(int)param_2 * 8);
  if (lVar2 != 0) {
    FUN_148201606(lVar2);
    FUN_1400020a8(lVar2);
  }
  iVar3 = (int)param_1[1];
  iVar4 = ~param_2 + iVar3;
  if (iVar4 != 0) {
    iVar5 = 1;
    if (iVar4 < 1) {
      iVar5 = iVar4;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 8),
            (void *)(lVar1 + (longlong)(iVar3 - iVar5) * 8),(longlong)iVar5 << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 148208ab0 FUN_148208ab0 body=306 status=ok
// SIG undefined FUN_148208ab0(void)

undefined4 * FUN_148208ab0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148208be4(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_148208cca(param_1,uVar9,local_40,&local_4c);
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
      FUN_148208de4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148208be4 FUN_148208be4 body=230 status=ok
// SIG undefined FUN_148208be4(void)

int * FUN_148208be4(longlong *param_1,int *param_2)

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



// FUNCTION 148208cca FUN_148208cca body=167 status=ok
// SIG undefined FUN_148208cca(void)

undefined8 FUN_148208cca(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar4 == *param_3) {
          lVar1 = plVar4[1];
          if (lVar1 != 0) {
            FUN_148201606(lVar1);
            FUN_1400020a8(lVar1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar1 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar4 = (int)*param_3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar2;
          *(int *)(plVar4 + 1) = (int)lVar1;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar3;
          FUN_148208d72(param_1,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 148208d72 FUN_148208d72 body=114 status=ok
// SIG undefined FUN_148208d72(void)

void FUN_148208d72(longlong *param_1,int param_2)

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



// FUNCTION 148208de4 FUN_148208de4 body=447 status=ok
// SIG undefined FUN_148208de4(void)

void FUN_148208de4(longlong *param_1)

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



// FUNCTION 148208fa4 FUN_148208fa4 body=147 status=ok
// SIG undefined FUN_148208fa4(void)

void FUN_148208fa4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148209038 FUN_148209038 body=132 status=ok
// SIG undefined FUN_148209038(void)

void FUN_148209038(longlong param_1,int param_2)

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



// FUNCTION 1482090be FUN_1482090be body=48 status=ok
// SIG undefined FUN_1482090be(void)

void FUN_1482090be(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1482090ee FUN_1482090ee body=68 status=ok
// SIG undefined FUN_1482090ee(void)

void FUN_1482090ee(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_148208846(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148209134(param_1,param_2);
  return;
}



// FUNCTION 148209134 FUN_148209134 body=95 status=ok
// SIG undefined FUN_148209134(void)

void FUN_148209134(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148209194 FUN_148209194 body=63 status=ok
// SIG undefined FUN_148209194(void)

void FUN_148209194(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1482070bc(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148208de4(param_1);
    return;
  }
  FUN_1482091d4(param_1);
  FUN_1482070bc(param_1);
  return;
}



// FUNCTION 1482091d4 FUN_1482091d4 body=322 status=ok
// SIG undefined FUN_1482091d4(void)

void FUN_1482091d4(longlong *param_1)

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



// FUNCTION 148209318 FUN_148209318 body=9 status=ok
// SIG undefined FUN_148209318(void)

void FUN_148209318(longlong param_1)

{
  FUN_143ad4c6c(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 148209322 FUN_148209322 body=29 status=ok
// SIG undefined FUN_148209322(void)

undefined8 FUN_148209322(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148209340 FUN_148209340 body=108 status=ok
// SIG undefined FUN_148209340(void)

void FUN_148209340(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 1482093ac FUN_1482093ac body=143 status=ok
// SIG undefined FUN_1482093ac(void)

void FUN_1482093ac(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14820943c FUN_14820943c body=95 status=ok
// SIG undefined FUN_14820943c(void)

void FUN_14820943c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14820949c FUN_14820949c body=132 status=ok
// SIG undefined FUN_14820949c(void)

void FUN_14820949c(longlong param_1,int param_2)

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



// FUNCTION 148209522 FUN_148209522 body=9 status=ok
// SIG undefined FUN_148209522(void)

void FUN_148209522(longlong param_1)

{
  FUN_14017ae7a(param_1 + 0x10);
  return;
}



// FUNCTION 14820952c FUN_14820952c body=29 status=ok
// SIG undefined FUN_14820952c(void)

undefined8 FUN_14820952c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14820954a FUN_14820954a body=147 status=ok
// SIG undefined FUN_14820954a(void)

void FUN_14820954a(longlong param_1,int param_2)

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



// FUNCTION 1482095de FUN_1482095de body=25 status=ok
// SIG undefined FUN_1482095de(void)

void FUN_1482095de(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x48);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1482095f8 FUN_1482095f8 body=271 status=ok
// SIG undefined FUN_1482095f8(void)

undefined8 FUN_1482095f8(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (char *)(param_1 + 0x220);
  LOCK();
  bVar6 = *(char *)(param_1 + 0x220) == '\0';
  if (bVar6) {
    *(char *)(param_1 + 0x220) = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_1447d2058(pcVar1);
  }
  FUN_148209708(&local_38);
  if ((longlong)*(int *)(param_1 + 0x1b8) != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar5) == local_38) {
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 8 + lVar5);
        goto LAB_1482096c3;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x1b8) * 0x10 != lVar5);
  }
  uVar4 = FUN_14001cc68(200,0x10);
  FUN_148201686(uVar4,param_1);
  iVar3 = *(int *)(param_1 + 0x1b8);
  *(uint *)(param_1 + 0x1b8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1bc) < iVar3 + 1U) {
    FUN_14578b3da((longlong *)(param_1 + 0x1b0),iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  *(longlong *)(lVar5 + (longlong)iVar3 * 0x10) = local_38;
  *(undefined8 *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = uVar4;
LAB_1482096c3:
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148209708 FUN_148209708 body=120 status=ok
// SIG undefined FUN_148209708(void)

undefined8 * FUN_148209708(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb44438) {
    FUN_144b3d300(&DAT_14cb44438);
    if (DAT_14cb44438 == -1) {
      FUN_1446ddc76(&DAT_14cb44430,"FNiagaraStatelessComputeManager",1);
      _Init_thread_footer(&DAT_14cb44438);
    }
  }
  *param_1 = DAT_14cb44430;
  return param_1;
}



// FUNCTION 148209780 FUN_148209780 body=48 status=ok
// SIG undefined FUN_148209780(void)

void FUN_148209780(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,4);
  }
  return;
}



// FUNCTION 1482097b0 FUN_1482097b0 body=112 status=ok
// SIG undefined FUN_1482097b0(void)

void FUN_1482097b0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 148209820 FUN_148209820 body=115 status=ok
// SIG undefined FUN_148209820(void)

void FUN_148209820(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148209893 FUN_148209893 body=89 status=ok
// SIG undefined FUN_148209893(void)

void FUN_148209893(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *param_1 = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 1482098ec FUN_1482098ec body=147 status=ok
// SIG undefined FUN_1482098ec(void)

void FUN_1482098ec(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148209980 FUN_148209980 body=15 status=ok
// SIG undefined FUN_148209980(void)

void FUN_148209980(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 148209990 FUN_148209990 body=147 status=ok
// SIG undefined FUN_148209990(void)

void FUN_148209990(longlong param_1,int param_2)

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



// FUNCTION 148209a24 FUN_148209a24 body=62 status=ok
// SIG undefined FUN_148209a24(void)

void FUN_148209a24(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148209a62(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 148209a62 FUN_148209a62 body=112 status=ok
// SIG undefined FUN_148209a62(void)

ulonglong FUN_148209a62(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148209a9c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148209a9c:
  return param_2 & 0xffffffff;
}



// FUNCTION 148209ad2 FUN_148209ad2 body=119 status=ok
// SIG undefined FUN_148209ad2(void)

void FUN_148209ad2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_148209b4a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148209b4a FUN_148209b4a body=141 status=ok
// SIG undefined FUN_148209b4a(void)

void FUN_148209b4a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 148209bd7 FUN_148209bd7 body=18 status=ok
// SIG undefined FUN_148209bd7(void)

void FUN_148209bd7(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 2);
    return;
  }
  return;
}



// FUNCTION 148209bea FUN_148209bea body=130 status=ok
// SIG undefined FUN_148209bea(void)

void FUN_148209bea(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148209c6e FUN_148209c6e body=164 status=ok
// SIG undefined FUN_148209c6e(void)

void FUN_148209c6e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1412e4522(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148209d22 FUN_148209d22 body=165 status=ok
// SIG undefined FUN_148209d22(void)

void FUN_148209d22(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148209dc8(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148209dc8 FUN_148209dc8 body=209 status=ok
// SIG undefined FUN_148209dc8(void)

float FUN_148209dc8(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) == 0) {
            return 0.0;
          }
          fVar5 = *(float *)(puVar1 + 1);
          if (fVar5 <= 1e-08) {
            fVar5 = 1e-08;
          }
          fVar5 = *(float *)((longlong)puVar1 + 0xc) / fVar5;
          if (1.0 <= fVar5) {
            fVar5 = 1.0;
          }
          if (0.0 < fVar5) {
            return fVar5;
          }
          return 0.0;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  return 0.0;
}



// FUNCTION 148209ea8 FUN_148209ea8 body=253 status=ok
// SIG undefined FUN_148209ea8(void)

longlong FUN_148209ea8(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  byte local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar1 = (**(code **)(*param_2 + 0x4c8))(param_2,*(undefined8 *)(param_1 + 0x38));
    if (cVar1 == '\0') {
      iVar2 = FUN_144909502(param_2,*(undefined8 *)(param_1 + 0x38));
      if (iVar2 == -1) goto LAB_148209f7c;
    }
    local_78 = *(byte *)(param_1 + 0x71) ^ 1;
    local_28 = *(undefined8 *)(param_1 + 0x68);
    local_88 = &local_38;
    local_38 = *(undefined8 *)(param_1 + 0x58);
    uStack_30 = *(undefined8 *)(param_1 + 0x60);
    local_58 = *(undefined4 *)(param_1 + 0x40);
    uStack_54 = *(undefined4 *)(param_1 + 0x44);
    uStack_50 = *(undefined4 *)(param_1 + 0x48);
    uStack_4c = *(undefined4 *)(param_1 + 0x4c);
    local_48 = *(undefined8 *)(param_1 + 0x50);
    local_60 = 1;
    local_70 = 1;
    local_68 = 0;
    local_80 = 0;
    lVar3 = FUN_140e3e35e(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38));
    if (lVar3 != 0) {
      if (*(char *)(param_1 + 0x70) == '\x01') {
        FUN_14810cfb8(lVar3,*(undefined4 *)(param_3 + 0xb0));
      }
      goto LAB_148209f7e;
    }
  }
LAB_148209f7c:
  lVar3 = 0;
LAB_148209f7e:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148209fa6 FUN_148209fa6 body=104 status=ok
// SIG undefined FUN_148209fa6(void)

undefined8 FUN_148209fa6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_147921a8e(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14820a010 FUN_14820a010 body=108 status=ok
// SIG undefined FUN_14820a010(void)

void FUN_14820a010(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  FUN_141156948(param_2);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    uVar2 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    cVar1 = FUN_1413e2d88(param_2,uVar2,0x7e,1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x79) = 0;
    }
  }
  return;
}



// FUNCTION 14820a07e FUN_14820a07e body=154 status=ok
// SIG undefined FUN_14820a07e(void)

void FUN_14820a07e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_1413f10f0(param_1);
  local_40 = &local_48;
  local_48 = param_2;
  FUN_14820a8da(param_1 + 0x98,&local_34);
  lVar1 = *(longlong *)(param_1 + 0x98);
  *(undefined4 *)(lVar1 + 8 + (longlong)local_34 * 0x18) = param_4;
  *(undefined4 *)(lVar1 + 0xc + (longlong)local_34 * 0x18) = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820a11c FUN_14820a11c body=49 status=ok
// SIG undefined FUN_14820a11c(void)

void FUN_14820a11c(longlong param_1,undefined8 param_2)

{
  FUN_1412e4454();
  FUN_14820add2(param_1 + 0x98,param_2);
  return;
}



// FUNCTION 14820a150 FUN_14820a150 body=538 status=ok
// SIG undefined FUN_14820a150(void)

void FUN_14820a150(longlong param_1,ulonglong param_2,longlong param_3,float param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_5;
  FUN_14050137e(param_1);
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar8 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xd8);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) != 0) {
            if (*(char *)(param_1 + 0x79) == '\x01') {
              fVar11 = *(float *)(param_3 + 0xb0);
            }
            else {
              fVar11 = 1.0;
            }
            *(float *)((longlong)puVar1 + 0xc) =
                 param_4 * fVar11 + *(float *)((longlong)puVar1 + 0xc);
          }
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)FUN_1412e4522(param_1,param_2);
  if (plVar7 != (longlong *)0x0) {
    if ((*(char *)(param_1 + 0x78) == '\x01') && (lVar8 = *(longlong *)(param_1 + 0x7c), lVar8 != 0)
       ) {
      uVar12 = FUN_148209dc8(param_1,param_2);
      (**(code **)(*plVar7 + 0xa08))(plVar7,lVar8,uVar12);
    }
    if (((*(int *)(param_1 + 0x90) != 0) && (lVar8 = FUN_144a7a45a(param_2), lVar8 != 0)) &&
       (uVar5 = *(uint *)(param_1 + 0x90), uVar5 != 0)) {
      lVar9 = 8;
      uVar10 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + -8 + lVar9);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar9);
        if (lVar3 != 0 && lVar2 != 0) {
          local_54 = 0;
          cVar4 = FUN_1448f9132(lVar8,lVar2,&local_54);
          if (cVar4 != '\0') {
            (**(code **)(*plVar7 + 0xa08))(plVar7,lVar3,local_54);
          }
          uVar5 = *(uint *)(param_1 + 0x90);
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while (uVar10 != uVar5);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14820a39a FUN_14820a39a body=104 status=ok
// SIG undefined FUN_14820a39a(void)

undefined8 FUN_14820a39a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  switchD_143c3d4dc::caseD_5b(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14820a404 FUN_14820a404 body=921 status=ok
// SIG undefined FUN_14820a404(void)

longlong FUN_14820a404(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [24];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(lVar4 + 0x68);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x58) == 0) {
        bVar5 = *(int *)(lVar1 + 0x68) == 0;
      }
      else {
        bVar5 = false;
      }
      if ((1 < *(uint *)(lVar1 + 0x30)) && (!bVar5)) goto LAB_14820a476;
    }
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      (**(code **)(*param_2 + 0x4a8))(param_2,&local_f8,*(undefined8 *)(param_1 + 0xc4),0);
      local_110 = 0x3ff0000000000000;
      local_108 = 0x3ff0000000000000;
      local_100 = 0x3ff0000000000000;
      dVar6 = *(double *)(param_1 + 0xa0);
      dVar8 = *(double *)(param_1 + 0xa8);
      dVar7 = *(double *)(param_1 + 0xb0);
      dVar3 = *(double *)(param_1 + 0xb8);
      local_148 = dVar8 * local_e8 * -1.0 +
                  dVar7 * dStack_f0 + local_f8 * dVar3 * 1.0 + dStack_e0 * dVar6;
      dStack_140 = dVar6 * local_e8 * 1.0 +
                   dVar3 * dStack_f0 + local_f8 * dVar7 * -1.0 + dStack_e0 * dVar8;
      local_138 = dVar3 * local_e8 * 1.0 +
                  ((local_f8 * dVar8 * 1.0 + dStack_e0 * dVar7) - dStack_f0 * dVar6);
      dStack_130 = dVar7 * local_e8 * -1.0 +
                   ((local_f8 * dVar6 * -1.0 + dStack_e0 * dVar3) - dStack_f0 * dVar8);
      FUN_1448052ee(&local_148,local_128);
      local_b8 = *(double *)(param_1 + 0x40) * local_b8;
      dStack_b0 = *(double *)(param_1 + 0x48) * dStack_b0;
      local_a8 = *(double *)(param_1 + 0x50) * local_a8;
      dVar6 = dStack_b0 * local_f8 - local_b8 * dStack_f0;
      dVar7 = local_a8 * dStack_f0 - dStack_b0 * local_e8;
      dVar8 = local_b8 * local_e8 - local_f8 * local_a8;
      dVar7 = dVar7 + dVar7;
      dVar8 = dVar8 + dVar8;
      dVar6 = dVar6 + dVar6;
      local_168 = (dVar6 * dStack_f0 - dVar8 * local_e8) + dStack_e0 * dVar7 + local_b8 + local_d8;
      dStack_160 = (local_e8 * dVar7 - local_f8 * dVar6) + dStack_e0 * dVar8 + dStack_b0 + dStack_d0
      ;
      local_158 = dVar6 * dStack_e0 + local_a8 + (dVar8 * local_f8 - dVar7 * dStack_f0) + local_c8;
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      lVar4 = param_2[0x16];
      if (lVar4 == 0) {
        lVar4 = FUN_1448abda6(param_2);
      }
      local_198 = 1;
      local_1a8 = 1;
      local_1b0 = CONCAT31(local_1b0._1_3_,1);
      local_1b8 = &local_110;
      local_1a0 = 0;
      lVar4 = FUN_140416e90(lVar4,uVar2,&local_168,local_128);
    }
    else {
      local_68 = *(undefined8 *)(param_1 + 0x68);
      local_1b8 = &local_78;
      local_78 = *(undefined8 *)(param_1 + 0x58);
      uStack_70 = *(undefined8 *)(param_1 + 0x60);
      local_98 = *(undefined4 *)(param_1 + 0x40);
      uStack_94 = *(undefined4 *)(param_1 + 0x44);
      uStack_90 = *(undefined4 *)(param_1 + 0x48);
      uStack_8c = *(undefined4 *)(param_1 + 0x4c);
      local_88 = *(undefined8 *)(param_1 + 0x50);
      local_190 = 1;
      local_1a0 = 1;
      local_1a8 = 1;
      local_198 = 0;
      local_1b0 = 0;
      lVar4 = FUN_140e3e35e(lVar4,param_2,*(undefined8 *)(param_1 + 0xc4));
    }
    if (lVar4 != 0) {
      FUN_140583e18(lVar4,*(undefined1 *)(param_1 + 0x88));
      local_178 = *(undefined8 *)(param_1 + 0x80);
      local_188 = *(undefined4 *)(param_1 + 0x70);
      uStack_184 = *(undefined4 *)(param_1 + 0x74);
      uStack_180 = *(undefined4 *)(param_1 + 0x78);
      uStack_17c = *(undefined4 *)(param_1 + 0x7c);
      FUN_14084f00a(lVar4);
      goto LAB_14820a478;
    }
  }
LAB_14820a476:
  lVar4 = 0;
LAB_14820a478:
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820a79e FUN_14820a79e body=45 status=ok
// SIG undefined FUN_14820a79e(void)

ulonglong FUN_14820a79e(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x68);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x58) == 0) {
      bVar2 = *(int *)(lVar1 + 0x68) == 0;
    }
    else {
      bVar2 = false;
    }
    return (ulonglong)
           CONCAT31((int3)(*(uint *)(lVar1 + 0x30) >> 8),*(uint *)(lVar1 + 0x30) < 2 | bVar2);
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x38) >> 8),1);
}



// FUNCTION 14820a838 FUN_14820a838 body=59 status=ok
// SIG undefined FUN_14820a838(void)

undefined8 FUN_14820a838(longlong *param_1)

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



// FUNCTION 14820a8da FUN_14820a8da body=323 status=ok
// SIG undefined FUN_14820a8da(void)

undefined4 * FUN_14820a8da(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14820aa1e(param_1,local_48);
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = 0x3f800000;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14820ab04(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_14820abf6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820aa1e FUN_14820aa1e body=230 status=ok
// SIG undefined FUN_14820aa1e(void)

int * FUN_14820aa1e(longlong *param_1,int *param_2)

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



// FUNCTION 14820ab04 FUN_14820ab04 body=128 status=ok
// SIG undefined FUN_14820ab04(void)

undefined8 FUN_14820ab04(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14820ab84((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14820ab84 FUN_14820ab84 body=114 status=ok
// SIG undefined FUN_14820ab84(void)

void FUN_14820ab84(longlong *param_1,int param_2)

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



// FUNCTION 14820abf6 FUN_14820abf6 body=474 status=ok
// SIG undefined FUN_14820abf6(void)

void FUN_14820abf6(longlong *param_1)

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



// FUNCTION 14820add2 FUN_14820add2 body=132 status=ok
// SIG undefined FUN_14820add2(void)

void FUN_14820add2(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_14820ae56(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14820ae56 FUN_14820ae56 body=87 status=ok
// SIG undefined FUN_14820ae56(void)

void FUN_14820ae56(longlong *param_1,int param_2)

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
  FUN_14820ab84();
  return;
}



// FUNCTION 14820aeae FUN_14820aeae body=36 status=ok
// SIG undefined FUN_14820aeae(void)

undefined8 FUN_14820aeae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14820aeee FUN_14820aeee body=93 status=ok
// SIG undefined FUN_14820aeee(void)

void FUN_14820aeee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae319c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14820af4c FUN_14820af4c body=123 status=ok
// SIG undefined FUN_14820af4c(void)

void FUN_14820af4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae319c0;
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



// FUNCTION 14820afc8 FUN_14820afc8 body=21 status=ok
// SIG undefined FUN_14820afc8(void)

undefined8 FUN_14820afc8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14820afde FUN_14820afde body=659 status=ok
// SIG undefined FUN_14820afde(void)

void FUN_14820afde(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_88 [11];
  
  local_88[10] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_88[8] = 0;
  local_88[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 8);
  }
  plVar3 = local_88 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_88[6] = 0;
  local_88[7] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 6);
  }
  plVar2 = local_88 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_88[4] = 0;
  local_88[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 4);
  }
  plVar4 = local_88 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_88[2] = 0;
  local_88[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  plVar5 = local_88 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_98 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_98 = local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143adc19e(plVar3,plVar2,plVar4,plVar5);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88[4] != 0) {
    FUN_1400020a8();
  }
  if (local_88[6] != 0) {
    FUN_1400020a8();
  }
  if (local_88[8] != 0) {
    FUN_1400020a8();
  }
  if ((local_88[10] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820b272 FUN_14820b272 body=479 status=ok
// SIG undefined FUN_14820b272(void)

void FUN_14820b272(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  FUN_14820b452(plVar1,local_2c,local_30,local_34);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820b452 FUN_14820b452 body=234 status=ok
// SIG undefined FUN_14820b452(void)

void FUN_14820b452(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_5;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_4;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_5;
  return;
}



// FUNCTION 14820b542 FUN_14820b542 body=377 status=ok
// SIG undefined FUN_14820b542(void)

void FUN_14820b542(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14820b6bc(local_18,local_1c,local_28,local_2c != 0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820b6bc FUN_14820b6bc body=874 status=ok
// SIG undefined FUN_14820b6bc(void)

void FUN_14820b6bc(longlong *param_1,undefined4 param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  void *_Src;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_198 [32];
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 *local_150;
  longlong *local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined1 local_121;
  longlong local_120;
  int local_114;
  longlong *local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [17];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_1 != (longlong *)0x0) {
    lVar6 = param_1[0xcc];
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (param_3 != (longlong *)0x0 && lVar6 != 0) {
      lVar6 = param_1[0xcc];
      local_121 = param_4;
      local_110 = param_3;
      if ((lVar6 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar6);
      }
      local_120 = lVar6;
      local_114 = FUN_147d50fb4(lVar6,param_2);
      if (0 < local_114) {
        iVar5 = 0;
        do {
          local_e8[0xe] = 0;
          local_e8[0xf] = 0;
          local_e8[0xc] = 0;
          local_e8[0xd] = 0;
          local_e8[10] = 0;
          local_e8[0xb] = 0;
          local_e8[8] = 0;
          local_e8[9] = 0;
          local_e8[6] = 0;
          local_e8[7] = 0;
          local_e8[4] = 0;
          local_e8[5] = 0;
          local_e8[2] = 0;
          local_e8[3] = 0;
          local_e8[0] = 0;
          local_e8[1] = 0;
          local_178 = local_e8 + 0xc;
          local_170 = local_e8 + 10;
          local_168 = local_e8 + 8;
          local_160 = local_e8;
          FUN_14820e144(local_120,param_2,iVar5,local_e8 + 0xe);
          local_f8 = 0;
          uStack_f0 = 0;
          local_140 = local_121;
          local_150 = &local_f8;
          local_158 = local_e8 + 2;
          local_160 = local_e8 + 4;
          local_168 = local_e8 + 6;
          local_138 = 0;
          local_178 = local_e8 + 10;
          local_170 = local_e8 + 8;
          local_148 = local_e8;
          FUN_1411c6d9c(local_110,iVar5,local_e8 + 0xe,local_e8 + 0xc);
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_e8[8] != 0) {
            FUN_1400020a8();
          }
          if (local_e8[10] != 0) {
            FUN_1400020a8();
          }
          if (local_e8[0xc] != 0) {
            FUN_1400020a8();
          }
          if (local_e8[0xe] != 0) {
            FUN_1400020a8();
          }
          iVar5 = iVar5 + 1;
        } while (local_114 != iVar5);
      }
      plVar2 = local_110;
      FUN_14821128c(local_110);
      if ((*(longlong *)(local_120 + 0x188) != 0) &&
         (lVar6 = (longlong)*(int *)(*(longlong *)(local_120 + 0x188) + 0x70), 0 < lVar6)) {
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(local_120 + 0x188) + 0x68);
          local_108 = (void *)0x0;
          local_100 = *(int *)(lVar1 + 0x38 + lVar7);
          lVar8 = (longlong)local_100;
          _Src = *(void **)(lVar1 + 0x30 + lVar7);
          if (lVar8 == 0) {
            local_fc = 0;
          }
          else {
            FUN_1405b70fe(&local_108,local_100,0);
            memcpy(local_108,_Src,lVar8 * 0x18);
          }
          FUN_1482112d6(plVar2,&local_108);
          lVar7 = lVar7 + 0x100;
        } while (lVar6 * 0x100 != lVar7);
      }
      iVar5 = (**(code **)(*param_1 + 0x7b0))(param_1);
      if (0 < iVar5) {
        iVar5 = 0;
        do {
          uVar4 = FUN_1448c9576(param_1,iVar5);
          (**(code **)(*plVar2 + 0x638))(plVar2,iVar5,uVar4);
          iVar5 = iVar5 + 1;
          iVar3 = (**(code **)(*param_1 + 0x7b0))(param_1);
        } while (iVar5 < iVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14820ba28 FUN_14820ba28 body=770 status=ok
// SIG undefined FUN_14820ba28(void)

void FUN_14820ba28(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 local_7c;
  longlong local_78 [8];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_78[6] = 0;
  local_78[7] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 6);
  }
  plVar3 = local_78 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_78[4] = 0;
  local_78[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  plVar2 = local_78 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar5 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar4 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_7c;
  local_98 = plVar5;
  local_90 = plVar4;
  FUN_14820bd2c(local_34,local_38,plVar3,plVar2);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if (local_78[6] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820bd2c FUN_14820bd2c body=1590 status=ok
// SIG undefined FUN_14820bd2c(void)

void FUN_14820bd2c(int param_1,int param_2,longlong *param_3,longlong *param_4,longlong *param_5,
                  longlong *param_6,float param_7)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_14481578e(param_3,0);
  }
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_1447a8aa0(param_4,0);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    FUN_1408652ee(param_5,0);
  }
  *(undefined4 *)(param_6 + 1) = 0;
  if (*(int *)((longlong)param_6 + 0xc) != 0) {
    FUN_1408652ee(param_6,0);
  }
  if (1 < param_2 && 1 < param_1) {
    iVar12 = 0;
    iVar11 = 0;
    iVar10 = 0;
    do {
      dVar9 = (double)((float)iVar10 * param_7) - (double)((float)param_2 * param_7) * 0.5;
      dVar5 = dVar9 + (double)param_7;
      dVar6 = ((double)iVar10 + 0.5) / (double)param_2;
      iVar15 = 0;
      iVar13 = iVar12;
      do {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(int *)(*param_3 + (longlong)iVar2 * 4) = iVar13 + 3;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(int *)(*param_3 + (longlong)iVar2 * 4) = iVar13 + 1;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(int *)(*param_3 + (longlong)iVar2 * 4) = iVar13;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(int *)(*param_3 + (longlong)iVar2 * 4) = iVar13 + 3;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(int *)(*param_3 + (longlong)iVar2 * 4) = iVar13 + 2;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(int *)(*param_3 + (longlong)iVar2 * 4) = iVar13 + 1;
        fVar17 = (float)FUN_1447c7e44((float)(iVar11 + iVar15),&DAT_40a00000);
        iVar2 = (int)param_4[1];
        lVar14 = (longlong)iVar2;
        *(uint *)(param_4 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_4,iVar2);
        }
        dVar8 = (double)((float)iVar15 * param_7) - (double)((float)param_1 * param_7) * 0.5;
        lVar3 = *param_4;
        *(double *)(lVar3 + lVar14 * 0x18) = dVar8;
        *(double *)(lVar3 + 8 + lVar14 * 0x18) = dVar9;
        *(double *)(lVar3 + 0x10 + lVar14 * 0x18) = (double)(fVar17 * param_7);
        iVar2 = (int)param_4[1];
        lVar14 = (longlong)iVar2;
        *(uint *)(param_4 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_4,iVar2);
        }
        dVar4 = (double)(fVar17 * param_7) + 0.0;
        dVar7 = dVar8 + (double)param_7;
        lVar3 = *param_4;
        *(double *)(lVar3 + lVar14 * 0x18) = dVar7;
        *(double *)(lVar3 + 8 + lVar14 * 0x18) = dVar9 + 0.0;
        *(double *)(lVar3 + 0x10 + lVar14 * 0x18) = dVar4;
        iVar2 = (int)param_4[1];
        lVar14 = (longlong)iVar2;
        *(uint *)(param_4 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_4,iVar2);
        }
        lVar3 = *param_4;
        *(double *)(lVar3 + lVar14 * 0x18) = dVar7;
        *(double *)(lVar3 + 8 + lVar14 * 0x18) = dVar5;
        *(double *)(lVar3 + 0x10 + lVar14 * 0x18) = dVar4;
        iVar2 = (int)param_4[1];
        lVar14 = (longlong)iVar2;
        *(uint *)(param_4 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_4,iVar2);
        }
        lVar3 = *param_4;
        *(double *)(lVar3 + lVar14 * 0x18) = dVar8 + 0.0;
        *(double *)(lVar3 + 8 + lVar14 * 0x18) = dVar5;
        *(double *)(lVar3 + 0x10 + lVar14 * 0x18) = dVar4;
        iVar2 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_5,iVar2);
        }
        puVar1 = (undefined8 *)(*param_5 + (longlong)iVar2 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        iVar2 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_5,iVar2);
        }
        lVar14 = *param_5;
        *(undefined8 *)(lVar14 + (longlong)iVar2 * 0x10) = 0x3ff0000000000000;
        *(undefined8 *)(lVar14 + 8 + (longlong)iVar2 * 0x10) = 0;
        iVar2 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_5,iVar2);
        }
        lVar14 = *param_5;
        *(undefined8 *)(lVar14 + (longlong)iVar2 * 0x10) = 0x3ff0000000000000;
        *(undefined8 *)(lVar14 + 8 + (longlong)iVar2 * 0x10) = 0x3ff0000000000000;
        iVar2 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_5,iVar2);
        }
        lVar14 = *param_5;
        *(undefined8 *)(lVar14 + (longlong)iVar2 * 0x10) = 0;
        *(undefined8 *)(lVar14 + 8 + (longlong)iVar2 * 0x10) = 0x3ff0000000000000;
        iVar2 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_6,iVar2);
        }
        dVar8 = ((double)iVar15 + 0.5) / (double)param_1;
        lVar14 = *param_6;
        *(double *)(lVar14 + (longlong)iVar2 * 0x10) = dVar8;
        *(double *)(lVar14 + 8 + (longlong)iVar2 * 0x10) = dVar6;
        iVar2 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_6,iVar2);
        }
        lVar14 = *param_6;
        *(double *)(lVar14 + (longlong)iVar2 * 0x10) = dVar8;
        *(double *)(lVar14 + 8 + (longlong)iVar2 * 0x10) = dVar6;
        iVar2 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_6,iVar2);
        }
        lVar14 = *param_6;
        *(double *)(lVar14 + (longlong)iVar2 * 0x10) = dVar8;
        *(double *)(lVar14 + 8 + (longlong)iVar2 * 0x10) = dVar6;
        iVar2 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_6,iVar2);
        }
        lVar14 = *param_6;
        *(double *)(lVar14 + (longlong)iVar2 * 0x10) = dVar8;
        *(double *)(lVar14 + 8 + (longlong)iVar2 * 0x10) = dVar6;
        iVar15 = iVar15 + 1;
        iVar13 = iVar13 + 4;
      } while (param_1 + -1 != iVar15);
      iVar11 = iVar11 + param_1 + -1;
      iVar12 = iVar12 + param_1 * 4 + -4;
      bVar16 = iVar10 != param_2 + -2;
      iVar10 = iVar10 + 1;
    } while (bVar16);
  }
  return;
}



// FUNCTION 14820c368 FUN_14820c368 body=400 status=ok
// SIG undefined FUN_14820c368(void)

void FUN_14820c368(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
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
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14820c4fa(local_1c,local_20,iVar1 != 0,plVar2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820c4fa FUN_14820c4fa body=195 status=ok
// SIG undefined FUN_14820c4fa(void)

void FUN_14820c4fa(int param_1,int param_2,char param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  if (1 < param_2 && 1 < param_1) {
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar7 = param_2 + -1;
      iVar2 = iVar5;
      do {
        iVar4 = param_2 + iVar2;
        iVar6 = iVar2 + 1;
        iVar1 = iVar6;
        if (param_3 != '\0') {
          iVar1 = iVar4;
          iVar4 = iVar6;
        }
        FUN_14820b452(param_4,iVar2,iVar1,param_2 + 1 + iVar2,iVar4);
        iVar7 = iVar7 + -1;
        iVar2 = iVar6;
      } while (iVar7 != 0);
      iVar5 = iVar5 + param_2;
      bVar8 = iVar3 != param_1 + -2;
      iVar3 = iVar3 + 1;
    } while (bVar8);
  }
  return;
}



// FUNCTION 14820c5be FUN_14820c5be body=637 status=ok
// SIG undefined FUN_14820c5be(void)

void FUN_14820c5be(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_6c;
  longlong local_68 [7];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar2 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar1 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_6c;
  local_88 = plVar3;
  FUN_14820c83c(local_2c,local_30,plVar2,plVar1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820c83c FUN_14820c83c body=832 status=ok
// SIG undefined FUN_14820c83c(void)

void FUN_14820c83c(int param_1,int param_2,longlong *param_3,longlong *param_4,longlong *param_5,
                  float param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_14481578e(param_3,0);
  }
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_1447a8aa0(param_4,0);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    FUN_1408652ee(param_5,0);
  }
  if (1 < param_2 && 1 < param_1) {
    iVar3 = param_1 + -1;
    iVar6 = 0;
    do {
      iVar8 = 0;
      do {
        iVar4 = (int)param_4[1];
        lVar7 = (longlong)iVar4;
        *(uint *)(param_4 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
          FUN_1403e3958(param_4,iVar4);
        }
        lVar2 = *param_4;
        *(double *)(lVar2 + lVar7 * 0x18) =
             (double)((float)iVar8 * param_6) - (double)((float)iVar3 * param_6) * 0.5;
        *(double *)(lVar2 + 8 + lVar7 * 0x18) =
             (double)((float)iVar6 * param_6) - (double)((float)(param_2 + -1) * param_6) * 0.5;
        *(undefined8 *)(lVar2 + 0x10 + lVar7 * 0x18) = 0;
        iVar4 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar4 + 1U) {
          FUN_14489624a(param_5,iVar4);
        }
        lVar7 = *param_5;
        *(double *)(lVar7 + (longlong)iVar4 * 0x10) =
             (double)((float)iVar8 / ((float)param_1 + -1.0));
        *(double *)(lVar7 + 8 + (longlong)iVar4 * 0x10) =
             (double)((float)iVar6 / ((float)param_2 + -1.0));
        iVar8 = iVar8 + 1;
      } while (param_1 != iVar8);
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_2);
    iVar6 = 0;
    iVar5 = 0;
    iVar8 = iVar3;
    iVar4 = iVar6;
    do {
      do {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(int *)(*param_3 + (longlong)iVar1 * 4) = iVar6;
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(int *)(*param_3 + (longlong)iVar1 * 4) = param_1 + iVar6;
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        iVar9 = iVar6 + 1;
        *(int *)(*param_3 + (longlong)iVar1 * 4) = iVar9;
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(int *)(*param_3 + (longlong)iVar1 * 4) = iVar9;
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(int *)(*param_3 + (longlong)iVar1 * 4) = param_1 + iVar6;
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(int *)(*param_3 + (longlong)iVar1 * 4) = iVar6 + param_1 + 1;
        iVar8 = iVar8 + -1;
        iVar6 = iVar9;
      } while (iVar8 != 0);
      iVar5 = iVar5 + 1;
      iVar6 = iVar4 + param_1;
      iVar8 = iVar3;
      iVar4 = iVar6;
    } while (iVar5 != param_2 + -1);
  }
  return;
}



// FUNCTION 14820cb7c FUN_14820cb7c body=747 status=ok
// SIG undefined FUN_14820cb7c(void)

void FUN_14820cb7c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_a8 [11];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_a8[8] = 0;
  local_a8[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 8);
  }
  plVar3 = local_a8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_a8[6] = 0;
  local_a8[7] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 6);
  }
  plVar2 = local_a8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_a8[4] = 0;
  local_a8[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 4);
  }
  plVar5 = local_a8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 2);
  }
  plVar4 = local_a8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_d0 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_d0 = local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_40;
  local_c8 = local_50;
  uStack_c4 = uStack_4c;
  uStack_c0 = uStack_48;
  uStack_bc = uStack_44;
  local_d8 = plVar4;
  FUN_14820ce68(&local_c8,plVar3,plVar2,plVar5);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[6] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[8] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820ce68 FUN_14820ce68 body=2766 status=ok
// SIG undefined FUN_14820ce68(void)

void FUN_14820ce68(ulonglong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14481578e(param_3);
  }
  iVar20 = *(int *)((longlong)param_2 + 0xc);
  iVar21 = 0;
  if (iVar20 < 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1447a8aa0(param_2,0);
    iVar21 = (int)param_2[1];
    iVar20 = *(int *)((longlong)param_2 + 0xc);
  }
  *(int *)(param_2 + 1) = iVar21 + 0x18;
  if ((uint)(iVar20 - iVar21) < 0x18) {
    FUN_1403e3958(param_2);
  }
  iVar20 = *(int *)((longlong)param_4 + 0xc);
  iVar21 = 0;
  if (iVar20 < 0) {
    *(undefined4 *)(param_4 + 1) = 0;
    FUN_1447a8aa0(param_4,0);
    iVar21 = (int)param_4[1];
    iVar20 = *(int *)((longlong)param_4 + 0xc);
  }
  *(int *)(param_4 + 1) = iVar21 + 0x18;
  if ((uint)(iVar20 - iVar21) < 0x18) {
    FUN_1403e3958(param_4);
  }
  iVar20 = *(int *)((longlong)param_6 + 0xc);
  iVar21 = 0;
  if (iVar20 < 0) {
    *(undefined4 *)(param_6 + 1) = 0;
    FUN_148215026(param_6);
    iVar21 = (int)param_6[1];
    iVar20 = *(int *)((longlong)param_6 + 0xc);
  }
  *(int *)(param_6 + 1) = iVar21 + 0x18;
  if ((uint)(iVar20 - iVar21) < 0x18) {
    FUN_148214286(param_6);
  }
  puVar4 = (ulonglong *)*param_2;
  *puVar4 = uVar2 ^ 0x8000000000000000;
  puVar4[1] = uVar3;
  puVar4[2] = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x18) = uVar2;
  *(ulonglong *)(lVar5 + 0x20) = uVar3;
  *(ulonglong *)(lVar5 + 0x28) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x30) = uVar2;
  *(ulonglong *)(lVar5 + 0x38) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x40) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x48) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x50) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x58) = uVar1;
  iVar21 = 0;
  FUN_14820b452(param_3,0,1,2,3);
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0x3ff0000000000000;
  lVar6 = *param_4;
  *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  lVar6 = *param_4;
  uVar7 = *(undefined8 *)(lVar5 + 0x58);
  uVar18 = *(undefined8 *)(lVar5 + 0x48);
  uVar19 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(lVar6 + 0x18) = uVar18;
  *(undefined8 *)(lVar6 + 0x20) = uVar19;
  *(undefined8 *)(lVar6 + 0x28) = uVar7;
  puVar8 = (undefined8 *)*param_4;
  *puVar8 = uVar18;
  puVar8[1] = uVar19;
  puVar8[2] = uVar7;
  lVar5 = *param_6;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0xbff0000000000000;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined1 *)(lVar5 + 0x78) = 0;
  lVar6 = *param_6;
  uVar7 = *(undefined8 *)(lVar5 + 0x68);
  *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(lVar6 + 0x48) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + 0x78);
  *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(lVar5 + 0x70);
  *(undefined8 *)(lVar6 + 0x58) = uVar7;
  lVar6 = *param_6;
  uVar10 = *(undefined4 *)(lVar5 + 0x60);
  uVar11 = *(undefined4 *)(lVar5 + 100);
  uVar12 = *(undefined4 *)(lVar5 + 0x68);
  uVar13 = *(undefined4 *)(lVar5 + 0x6c);
  uVar14 = *(undefined4 *)(lVar5 + 0x70);
  uVar15 = *(undefined4 *)(lVar5 + 0x74);
  uVar16 = *(undefined4 *)(lVar5 + 0x78);
  uVar17 = *(undefined4 *)(lVar5 + 0x7c);
  *(undefined4 *)(lVar6 + 0x30) = uVar14;
  *(undefined4 *)(lVar6 + 0x34) = uVar15;
  *(undefined4 *)(lVar6 + 0x38) = uVar16;
  *(undefined4 *)(lVar6 + 0x3c) = uVar17;
  *(undefined4 *)(lVar6 + 0x20) = uVar10;
  *(undefined4 *)(lVar6 + 0x24) = uVar11;
  *(undefined4 *)(lVar6 + 0x28) = uVar12;
  *(undefined4 *)(lVar6 + 0x2c) = uVar13;
  puVar9 = (undefined4 *)*param_6;
  *puVar9 = uVar10;
  puVar9[1] = uVar11;
  puVar9[2] = uVar12;
  puVar9[3] = uVar13;
  puVar9[4] = uVar14;
  puVar9[5] = uVar15;
  puVar9[6] = uVar16;
  puVar9[7] = uVar17;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x60) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x68) = uVar3;
  *(ulonglong *)(lVar5 + 0x70) = uVar1 ^ 0x8000000000000000;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x78) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x80) = uVar3;
  *(ulonglong *)(lVar5 + 0x88) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x90) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x98) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0xa0) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0xa8) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0xb0) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0xb8) = uVar1 ^ 0x8000000000000000;
  FUN_14820b452(param_3,4,5,6,7);
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0xa8) = 0xbff0000000000000;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  lVar6 = *param_4;
  *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(lVar5 + 0xb8);
  uVar7 = *(undefined8 *)(lVar5 + 0xb0);
  *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(lVar5 + 0xa8);
  *(undefined8 *)(lVar6 + 0x98) = uVar7;
  lVar6 = *param_4;
  uVar18 = *(undefined8 *)(lVar5 + 0xa8);
  uVar19 = *(undefined8 *)(lVar5 + 0xb0);
  uVar7 = *(undefined8 *)(lVar5 + 0xb8);
  *(undefined8 *)(lVar6 + 0x88) = uVar7;
  *(undefined8 *)(lVar6 + 0x78) = uVar18;
  *(undefined8 *)(lVar6 + 0x80) = uVar19;
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0x70) = uVar7;
  *(undefined8 *)(lVar5 + 0x60) = uVar18;
  *(undefined8 *)(lVar5 + 0x68) = uVar19;
  lVar5 = *param_6;
  *(undefined8 *)(lVar5 + 0xe0) = 0;
  *(undefined8 *)(lVar5 + 0xe8) = 0xbff0000000000000;
  *(undefined8 *)(lVar5 + 0xf0) = 0;
  *(undefined1 *)(lVar5 + 0xf8) = 0;
  lVar6 = *param_6;
  uVar7 = *(undefined8 *)(lVar5 + 0xf8);
  *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(lVar5 + 0xf0);
  *(undefined8 *)(lVar6 + 0xd8) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + 0xe8);
  *(undefined8 *)(lVar6 + 0xc0) = *(undefined8 *)(lVar5 + 0xe0);
  *(undefined8 *)(lVar6 + 200) = uVar7;
  lVar6 = *param_6;
  uVar10 = *(undefined4 *)(lVar5 + 0xe0);
  uVar11 = *(undefined4 *)(lVar5 + 0xe4);
  uVar12 = *(undefined4 *)(lVar5 + 0xe8);
  uVar13 = *(undefined4 *)(lVar5 + 0xec);
  uVar14 = *(undefined4 *)(lVar5 + 0xf0);
  uVar15 = *(undefined4 *)(lVar5 + 0xf4);
  uVar16 = *(undefined4 *)(lVar5 + 0xf8);
  uVar17 = *(undefined4 *)(lVar5 + 0xfc);
  *(undefined4 *)(lVar6 + 0xb0) = uVar14;
  *(undefined4 *)(lVar6 + 0xb4) = uVar15;
  *(undefined4 *)(lVar6 + 0xb8) = uVar16;
  *(undefined4 *)(lVar6 + 0xbc) = uVar17;
  *(undefined4 *)(lVar6 + 0xa0) = uVar10;
  *(undefined4 *)(lVar6 + 0xa4) = uVar11;
  *(undefined4 *)(lVar6 + 0xa8) = uVar12;
  *(undefined4 *)(lVar6 + 0xac) = uVar13;
  lVar5 = *param_6;
  *(undefined4 *)(lVar5 + 0x90) = uVar14;
  *(undefined4 *)(lVar5 + 0x94) = uVar15;
  *(undefined4 *)(lVar5 + 0x98) = uVar16;
  *(undefined4 *)(lVar5 + 0x9c) = uVar17;
  *(undefined4 *)(lVar5 + 0x80) = uVar10;
  *(undefined4 *)(lVar5 + 0x84) = uVar11;
  *(undefined4 *)(lVar5 + 0x88) = uVar12;
  *(undefined4 *)(lVar5 + 0x8c) = uVar13;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0xc0) = uVar2;
  *(ulonglong *)(lVar5 + 200) = uVar3;
  *(ulonglong *)(lVar5 + 0xd0) = uVar1 ^ 0x8000000000000000;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0xd8) = uVar2;
  *(ulonglong *)(lVar5 + 0xe0) = uVar3;
  *(ulonglong *)(lVar5 + 0xe8) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0xf0) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0xf8) = uVar3;
  *(ulonglong *)(lVar5 + 0x100) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x108) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x110) = uVar3;
  *(ulonglong *)(lVar5 + 0x118) = uVar1 ^ 0x8000000000000000;
  FUN_14820b452(param_3,8,9,10,0xb);
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0x108) = 0;
  *(undefined8 *)(lVar5 + 0x110) = 0x3ff0000000000000;
  *(undefined8 *)(lVar5 + 0x118) = 0;
  lVar6 = *param_4;
  uVar7 = *(undefined8 *)(lVar5 + 0x110);
  *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)(lVar5 + 0x108);
  *(undefined8 *)(lVar6 + 0xf8) = uVar7;
  *(undefined8 *)(lVar6 + 0x100) = *(undefined8 *)(lVar5 + 0x118);
  lVar6 = *param_4;
  uVar18 = *(undefined8 *)(lVar5 + 0x108);
  uVar19 = *(undefined8 *)(lVar5 + 0x110);
  uVar7 = *(undefined8 *)(lVar5 + 0x118);
  *(undefined8 *)(lVar6 + 0xe8) = uVar7;
  *(undefined8 *)(lVar6 + 0xd8) = uVar18;
  *(undefined8 *)(lVar6 + 0xe0) = uVar19;
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0xd0) = uVar7;
  *(undefined8 *)(lVar5 + 0xc0) = uVar18;
  *(undefined8 *)(lVar5 + 200) = uVar19;
  lVar5 = *param_6;
  *(undefined8 *)(lVar5 + 0x160) = 0xbff0000000000000;
  *(undefined8 *)(lVar5 + 0x168) = 0;
  *(undefined8 *)(lVar5 + 0x170) = 0;
  *(undefined1 *)(lVar5 + 0x178) = 0;
  lVar6 = *param_6;
  uVar7 = *(undefined8 *)(lVar5 + 0x168);
  *(undefined8 *)(lVar6 + 0x140) = *(undefined8 *)(lVar5 + 0x160);
  *(undefined8 *)(lVar6 + 0x148) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + 0x178);
  *(undefined8 *)(lVar6 + 0x150) = *(undefined8 *)(lVar5 + 0x170);
  *(undefined8 *)(lVar6 + 0x158) = uVar7;
  lVar6 = *param_6;
  uVar10 = *(undefined4 *)(lVar5 + 0x160);
  uVar11 = *(undefined4 *)(lVar5 + 0x164);
  uVar12 = *(undefined4 *)(lVar5 + 0x168);
  uVar13 = *(undefined4 *)(lVar5 + 0x16c);
  uVar14 = *(undefined4 *)(lVar5 + 0x170);
  uVar15 = *(undefined4 *)(lVar5 + 0x174);
  uVar16 = *(undefined4 *)(lVar5 + 0x178);
  uVar17 = *(undefined4 *)(lVar5 + 0x17c);
  *(undefined4 *)(lVar6 + 0x130) = uVar14;
  *(undefined4 *)(lVar6 + 0x134) = uVar15;
  *(undefined4 *)(lVar6 + 0x138) = uVar16;
  *(undefined4 *)(lVar6 + 0x13c) = uVar17;
  *(undefined4 *)(lVar6 + 0x120) = uVar10;
  *(undefined4 *)(lVar6 + 0x124) = uVar11;
  *(undefined4 *)(lVar6 + 0x128) = uVar12;
  *(undefined4 *)(lVar6 + 300) = uVar13;
  lVar5 = *param_6;
  *(undefined4 *)(lVar5 + 0x100) = uVar10;
  *(undefined4 *)(lVar5 + 0x104) = uVar11;
  *(undefined4 *)(lVar5 + 0x108) = uVar12;
  *(undefined4 *)(lVar5 + 0x10c) = uVar13;
  *(undefined4 *)(lVar5 + 0x110) = uVar14;
  *(undefined4 *)(lVar5 + 0x114) = uVar15;
  *(undefined4 *)(lVar5 + 0x118) = uVar16;
  *(undefined4 *)(lVar5 + 0x11c) = uVar17;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x120) = uVar2;
  *(ulonglong *)(lVar5 + 0x128) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x130) = uVar1 ^ 0x8000000000000000;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x138) = uVar2;
  *(ulonglong *)(lVar5 + 0x140) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x148) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x150) = uVar2;
  *(ulonglong *)(lVar5 + 0x158) = uVar3;
  *(ulonglong *)(lVar5 + 0x160) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x168) = uVar2;
  *(ulonglong *)(lVar5 + 0x170) = uVar3;
  *(ulonglong *)(lVar5 + 0x178) = uVar1 ^ 0x8000000000000000;
  FUN_14820b452(param_3,0xc,0xd,0xe,0xf);
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0x168) = 0x3ff0000000000000;
  *(undefined8 *)(lVar5 + 0x170) = 0;
  *(undefined8 *)(lVar5 + 0x178) = 0;
  lVar6 = *param_4;
  *(undefined8 *)(lVar6 + 0x160) = *(undefined8 *)(lVar5 + 0x178);
  uVar7 = *(undefined8 *)(lVar5 + 0x170);
  *(undefined8 *)(lVar6 + 0x150) = *(undefined8 *)(lVar5 + 0x168);
  *(undefined8 *)(lVar6 + 0x158) = uVar7;
  lVar6 = *param_4;
  uVar18 = *(undefined8 *)(lVar5 + 0x168);
  uVar19 = *(undefined8 *)(lVar5 + 0x170);
  uVar7 = *(undefined8 *)(lVar5 + 0x178);
  *(undefined8 *)(lVar6 + 0x148) = uVar7;
  *(undefined8 *)(lVar6 + 0x138) = uVar18;
  *(undefined8 *)(lVar6 + 0x140) = uVar19;
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0x130) = uVar7;
  *(undefined8 *)(lVar5 + 0x120) = uVar18;
  *(undefined8 *)(lVar5 + 0x128) = uVar19;
  lVar5 = *param_6;
  *(undefined8 *)(lVar5 + 0x1e0) = 0;
  *(undefined8 *)(lVar5 + 0x1e8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar5 + 0x1f0) = 0;
  *(undefined1 *)(lVar5 + 0x1f8) = 0;
  lVar6 = *param_6;
  uVar7 = *(undefined8 *)(lVar5 + 0x1f8);
  *(undefined8 *)(lVar6 + 0x1d0) = *(undefined8 *)(lVar5 + 0x1f0);
  *(undefined8 *)(lVar6 + 0x1d8) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + 0x1e8);
  *(undefined8 *)(lVar6 + 0x1c0) = *(undefined8 *)(lVar5 + 0x1e0);
  *(undefined8 *)(lVar6 + 0x1c8) = uVar7;
  lVar6 = *param_6;
  uVar10 = *(undefined4 *)(lVar5 + 0x1e0);
  uVar11 = *(undefined4 *)(lVar5 + 0x1e4);
  uVar12 = *(undefined4 *)(lVar5 + 0x1e8);
  uVar13 = *(undefined4 *)(lVar5 + 0x1ec);
  uVar14 = *(undefined4 *)(lVar5 + 0x1f0);
  uVar15 = *(undefined4 *)(lVar5 + 500);
  uVar16 = *(undefined4 *)(lVar5 + 0x1f8);
  uVar17 = *(undefined4 *)(lVar5 + 0x1fc);
  *(undefined4 *)(lVar6 + 0x1b0) = uVar14;
  *(undefined4 *)(lVar6 + 0x1b4) = uVar15;
  *(undefined4 *)(lVar6 + 0x1b8) = uVar16;
  *(undefined4 *)(lVar6 + 0x1bc) = uVar17;
  *(undefined4 *)(lVar6 + 0x1a0) = uVar10;
  *(undefined4 *)(lVar6 + 0x1a4) = uVar11;
  *(undefined4 *)(lVar6 + 0x1a8) = uVar12;
  *(undefined4 *)(lVar6 + 0x1ac) = uVar13;
  lVar5 = *param_6;
  *(undefined4 *)(lVar5 + 400) = uVar14;
  *(undefined4 *)(lVar5 + 0x194) = uVar15;
  *(undefined4 *)(lVar5 + 0x198) = uVar16;
  *(undefined4 *)(lVar5 + 0x19c) = uVar17;
  *(undefined4 *)(lVar5 + 0x180) = uVar10;
  *(undefined4 *)(lVar5 + 0x184) = uVar11;
  *(undefined4 *)(lVar5 + 0x188) = uVar12;
  *(undefined4 *)(lVar5 + 0x18c) = uVar13;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x180) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x188) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 400) = uVar1 ^ 0x8000000000000000;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x198) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x1a0) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x1a8) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x1b0) = uVar2;
  *(ulonglong *)(lVar5 + 0x1b8) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x1c0) = uVar1;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x1c8) = uVar2;
  *(ulonglong *)(lVar5 + 0x1d0) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x1d8) = uVar1 ^ 0x8000000000000000;
  FUN_14820b452(param_3,0x10,0x11,0x12,0x13);
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0x1c8) = 0;
  *(undefined8 *)(lVar5 + 0x1d0) = 0xbff0000000000000;
  *(undefined8 *)(lVar5 + 0x1d8) = 0;
  lVar6 = *param_4;
  uVar7 = *(undefined8 *)(lVar5 + 0x1d0);
  *(undefined8 *)(lVar6 + 0x1b0) = *(undefined8 *)(lVar5 + 0x1c8);
  *(undefined8 *)(lVar6 + 0x1b8) = uVar7;
  *(undefined8 *)(lVar6 + 0x1c0) = *(undefined8 *)(lVar5 + 0x1d8);
  lVar6 = *param_4;
  uVar18 = *(undefined8 *)(lVar5 + 0x1c8);
  uVar19 = *(undefined8 *)(lVar5 + 0x1d0);
  uVar7 = *(undefined8 *)(lVar5 + 0x1d8);
  *(undefined8 *)(lVar6 + 0x1a8) = uVar7;
  *(undefined8 *)(lVar6 + 0x198) = uVar18;
  *(undefined8 *)(lVar6 + 0x1a0) = uVar19;
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 400) = uVar7;
  *(undefined8 *)(lVar5 + 0x180) = uVar18;
  *(undefined8 *)(lVar5 + 0x188) = uVar19;
  lVar5 = *param_6;
  *(undefined8 *)(lVar5 + 0x260) = 0x3ff0000000000000;
  *(undefined8 *)(lVar5 + 0x268) = 0;
  *(undefined8 *)(lVar5 + 0x270) = 0;
  *(undefined1 *)(lVar5 + 0x278) = 0;
  lVar6 = *param_6;
  uVar7 = *(undefined8 *)(lVar5 + 0x268);
  *(undefined8 *)(lVar6 + 0x240) = *(undefined8 *)(lVar5 + 0x260);
  *(undefined8 *)(lVar6 + 0x248) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + 0x278);
  *(undefined8 *)(lVar6 + 0x250) = *(undefined8 *)(lVar5 + 0x270);
  *(undefined8 *)(lVar6 + 600) = uVar7;
  lVar6 = *param_6;
  uVar10 = *(undefined4 *)(lVar5 + 0x260);
  uVar11 = *(undefined4 *)(lVar5 + 0x264);
  uVar12 = *(undefined4 *)(lVar5 + 0x268);
  uVar13 = *(undefined4 *)(lVar5 + 0x26c);
  uVar14 = *(undefined4 *)(lVar5 + 0x270);
  uVar15 = *(undefined4 *)(lVar5 + 0x274);
  uVar16 = *(undefined4 *)(lVar5 + 0x278);
  uVar17 = *(undefined4 *)(lVar5 + 0x27c);
  *(undefined4 *)(lVar6 + 0x230) = uVar14;
  *(undefined4 *)(lVar6 + 0x234) = uVar15;
  *(undefined4 *)(lVar6 + 0x238) = uVar16;
  *(undefined4 *)(lVar6 + 0x23c) = uVar17;
  *(undefined4 *)(lVar6 + 0x220) = uVar10;
  *(undefined4 *)(lVar6 + 0x224) = uVar11;
  *(undefined4 *)(lVar6 + 0x228) = uVar12;
  *(undefined4 *)(lVar6 + 0x22c) = uVar13;
  lVar5 = *param_6;
  *(undefined4 *)(lVar5 + 0x200) = uVar10;
  *(undefined4 *)(lVar5 + 0x204) = uVar11;
  *(undefined4 *)(lVar5 + 0x208) = uVar12;
  *(undefined4 *)(lVar5 + 0x20c) = uVar13;
  *(undefined4 *)(lVar5 + 0x210) = uVar14;
  *(undefined4 *)(lVar5 + 0x214) = uVar15;
  *(undefined4 *)(lVar5 + 0x218) = uVar16;
  *(undefined4 *)(lVar5 + 0x21c) = uVar17;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x1e0) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x1e8) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x1f0) = uVar1 ^ 0x8000000000000000;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x1f8) = uVar2;
  *(ulonglong *)(lVar5 + 0x200) = uVar3 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x208) = uVar1 ^ 0x8000000000000000;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x210) = uVar2;
  *(ulonglong *)(lVar5 + 0x218) = uVar3;
  *(ulonglong *)(lVar5 + 0x220) = uVar1 ^ 0x8000000000000000;
  lVar5 = *param_2;
  *(ulonglong *)(lVar5 + 0x228) = uVar2 ^ 0x8000000000000000;
  *(ulonglong *)(lVar5 + 0x230) = uVar3;
  *(ulonglong *)(lVar5 + 0x238) = uVar1 ^ 0x8000000000000000;
  FUN_14820b452(param_3,0x14,0x15,0x16,0x17);
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0x228) = 0;
  *(undefined8 *)(lVar5 + 0x230) = 0;
  *(undefined8 *)(lVar5 + 0x238) = 0xbff0000000000000;
  lVar6 = *param_4;
  *(undefined8 *)(lVar6 + 0x220) = *(undefined8 *)(lVar5 + 0x238);
  *(undefined8 *)(lVar6 + 0x210) = 0;
  *(undefined8 *)(lVar6 + 0x218) = 0;
  lVar6 = *param_4;
  uVar7 = *(undefined8 *)(lVar5 + 0x238);
  uVar18 = *(undefined8 *)(lVar5 + 0x228);
  uVar19 = *(undefined8 *)(lVar5 + 0x230);
  *(undefined8 *)(lVar6 + 0x1f8) = uVar18;
  *(undefined8 *)(lVar6 + 0x200) = uVar19;
  *(undefined8 *)(lVar6 + 0x208) = uVar7;
  lVar5 = *param_4;
  *(undefined8 *)(lVar5 + 0x1e0) = uVar18;
  *(undefined8 *)(lVar5 + 0x1e8) = uVar19;
  *(undefined8 *)(lVar5 + 0x1f0) = uVar7;
  lVar5 = *param_6;
  *(undefined8 *)(lVar5 + 0x2e0) = 0;
  *(undefined8 *)(lVar5 + 0x2e8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar5 + 0x2f0) = 0;
  *(undefined1 *)(lVar5 + 0x2f8) = 0;
  lVar6 = *param_6;
  uVar7 = *(undefined8 *)(lVar5 + 0x2e8);
  *(undefined8 *)(lVar6 + 0x2c0) = *(undefined8 *)(lVar5 + 0x2e0);
  *(undefined8 *)(lVar6 + 0x2c8) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + 0x2f8);
  *(undefined8 *)(lVar6 + 0x2d0) = *(undefined8 *)(lVar5 + 0x2f0);
  *(undefined8 *)(lVar6 + 0x2d8) = uVar7;
  lVar6 = *param_6;
  uVar10 = *(undefined4 *)(lVar5 + 0x2e0);
  uVar11 = *(undefined4 *)(lVar5 + 0x2e4);
  uVar12 = *(undefined4 *)(lVar5 + 0x2e8);
  uVar13 = *(undefined4 *)(lVar5 + 0x2ec);
  uVar14 = *(undefined4 *)(lVar5 + 0x2f0);
  uVar15 = *(undefined4 *)(lVar5 + 0x2f4);
  uVar16 = *(undefined4 *)(lVar5 + 0x2f8);
  uVar17 = *(undefined4 *)(lVar5 + 0x2fc);
  *(undefined4 *)(lVar6 + 0x2b0) = uVar14;
  *(undefined4 *)(lVar6 + 0x2b4) = uVar15;
  *(undefined4 *)(lVar6 + 0x2b8) = uVar16;
  *(undefined4 *)(lVar6 + 700) = uVar17;
  *(undefined4 *)(lVar6 + 0x2a0) = uVar10;
  *(undefined4 *)(lVar6 + 0x2a4) = uVar11;
  *(undefined4 *)(lVar6 + 0x2a8) = uVar12;
  *(undefined4 *)(lVar6 + 0x2ac) = uVar13;
  lVar5 = *param_6;
  *(undefined4 *)(lVar5 + 0x290) = uVar14;
  *(undefined4 *)(lVar5 + 0x294) = uVar15;
  *(undefined4 *)(lVar5 + 0x298) = uVar16;
  *(undefined4 *)(lVar5 + 0x29c) = uVar17;
  *(undefined4 *)(lVar5 + 0x280) = uVar10;
  *(undefined4 *)(lVar5 + 0x284) = uVar11;
  *(undefined4 *)(lVar5 + 0x288) = uVar12;
  *(undefined4 *)(lVar5 + 0x28c) = uVar13;
  iVar20 = *(int *)((longlong)param_5 + 0xc);
  if (iVar20 < 0) {
    *(undefined4 *)(param_5 + 1) = 0;
    FUN_1408652ee(param_5,0);
    iVar21 = (int)param_5[1];
    iVar20 = *(int *)((longlong)param_5 + 0xc);
  }
  *(int *)(param_5 + 1) = iVar21 + 0x18;
  if ((uint)(iVar20 - iVar21) < 0x18) {
    FUN_14489624a(param_5,iVar21);
  }
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x140) = 0;
  *(undefined8 *)(lVar5 + 0x148) = 0;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x100) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0xc0) = 0;
  *(undefined8 *)(lVar5 + 200) = 0;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  puVar8 = (undefined8 *)*param_5;
  *puVar8 = 0;
  puVar8[1] = 0;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x150) = 0;
  *(undefined8 *)(lVar5 + 0x158) = 0x3ff0000000000000;
  lVar6 = *param_5;
  uVar7 = *(undefined8 *)(lVar5 + 0x158);
  *(undefined8 *)(lVar6 + 0x110) = *(undefined8 *)(lVar5 + 0x150);
  *(undefined8 *)(lVar6 + 0x118) = uVar7;
  lVar6 = *param_5;
  uVar7 = *(undefined8 *)(lVar5 + 0x150);
  uVar18 = *(undefined8 *)(lVar5 + 0x158);
  *(undefined8 *)(lVar6 + 0xd0) = uVar7;
  *(undefined8 *)(lVar6 + 0xd8) = uVar18;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x90) = uVar7;
  *(undefined8 *)(lVar5 + 0x98) = uVar18;
  lVar5 = *param_5;
  uVar7 = *(undefined8 *)(lVar6 + 0xd0);
  uVar18 = *(undefined8 *)(lVar6 + 0xd8);
  *(undefined8 *)(lVar5 + 0x50) = uVar7;
  *(undefined8 *)(lVar5 + 0x58) = uVar18;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x10) = uVar7;
  *(undefined8 *)(lVar5 + 0x18) = uVar18;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x160) = 0x3ff0000000000000;
  *(undefined8 *)(lVar5 + 0x168) = 0x3ff0000000000000;
  lVar6 = *param_5;
  uVar7 = *(undefined8 *)(lVar5 + 0x168);
  *(undefined8 *)(lVar6 + 0x120) = *(undefined8 *)(lVar5 + 0x160);
  *(undefined8 *)(lVar6 + 0x128) = uVar7;
  lVar6 = *param_5;
  uVar7 = *(undefined8 *)(lVar5 + 0x160);
  uVar18 = *(undefined8 *)(lVar5 + 0x168);
  *(undefined8 *)(lVar6 + 0xe0) = uVar7;
  *(undefined8 *)(lVar6 + 0xe8) = uVar18;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0xa0) = uVar7;
  *(undefined8 *)(lVar5 + 0xa8) = uVar18;
  lVar5 = *param_5;
  uVar7 = *(undefined8 *)(lVar6 + 0xe0);
  uVar18 = *(undefined8 *)(lVar6 + 0xe8);
  *(undefined8 *)(lVar5 + 0x60) = uVar7;
  *(undefined8 *)(lVar5 + 0x68) = uVar18;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x20) = uVar7;
  *(undefined8 *)(lVar5 + 0x28) = uVar18;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x170) = 0x3ff0000000000000;
  *(undefined8 *)(lVar5 + 0x178) = 0;
  lVar6 = *param_5;
  uVar7 = *(undefined8 *)(lVar5 + 0x178);
  *(undefined8 *)(lVar6 + 0x130) = *(undefined8 *)(lVar5 + 0x170);
  *(undefined8 *)(lVar6 + 0x138) = uVar7;
  lVar6 = *param_5;
  uVar7 = *(undefined8 *)(lVar5 + 0x170);
  uVar18 = *(undefined8 *)(lVar5 + 0x178);
  *(undefined8 *)(lVar6 + 0xf0) = uVar7;
  *(undefined8 *)(lVar6 + 0xf8) = uVar18;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0xb0) = uVar7;
  *(undefined8 *)(lVar5 + 0xb8) = uVar18;
  lVar5 = *param_5;
  uVar7 = *(undefined8 *)(lVar6 + 0xf0);
  uVar18 = *(undefined8 *)(lVar6 + 0xf8);
  *(undefined8 *)(lVar5 + 0x70) = uVar7;
  *(undefined8 *)(lVar5 + 0x78) = uVar18;
  lVar5 = *param_5;
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *(undefined8 *)(lVar5 + 0x38) = uVar18;
  return;
}



// FUNCTION 14820d936 FUN_14820d936 body=812 status=ok
// SIG undefined FUN_14820d936(void)

void FUN_14820d936(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_98 [10];
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_98[8] = 0;
  local_98[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 8);
  }
  plVar3 = local_98 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_98[6] = 0;
  local_98[7] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 6);
  }
  plVar2 = local_98 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_98[4] = 0;
  local_98[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 4);
  }
  plVar5 = local_98 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar4 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_a8 = local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = plVar5;
  local_b0 = plVar4;
  FUN_14820dc64(local_40,local_44,plVar3,plVar2);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_98[4] != 0) {
    FUN_1400020a8();
  }
  if (local_98[6] != 0) {
    FUN_1400020a8();
  }
  if (local_98[8] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820dc64 FUN_14820dc64 body=349 status=ok
// SIG undefined FUN_14820dc64(void)

void FUN_14820dc64(longlong param_1,uint param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((-1 < (int)param_2 && param_1 != 0) && ((int)param_2 < *(int *)(param_1 + 0x670))) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x668) + (ulonglong)param_2 * 0x60);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x668) + 8 + (ulonglong)param_2 * 0x60);
    FUN_140b463b8(param_3,iVar5,1);
    FUN_140b463b8(param_5,iVar5,1);
    FUN_1482113de(param_6,iVar5);
    FUN_14821142c();
    if (0 < (longlong)iVar5) {
      lVar13 = 0;
      lVar14 = 0;
      lVar15 = 0;
      do {
        lVar6 = *plVar1;
        lVar7 = *param_3;
        *(undefined8 *)(lVar7 + 0x10 + lVar13) = *(undefined8 *)(lVar6 + 0x10 + lVar15);
        uVar12 = ((undefined8 *)(lVar6 + lVar15))[1];
        puVar2 = (undefined8 *)(lVar7 + lVar13);
        *puVar2 = *(undefined8 *)(lVar6 + lVar15);
        puVar2[1] = uVar12;
        lVar7 = *param_5;
        *(undefined8 *)(lVar7 + 0x10 + lVar13) = *(undefined8 *)(lVar6 + 0x28 + lVar15);
        puVar3 = (undefined8 *)(lVar6 + 0x18 + lVar15);
        uVar12 = puVar3[1];
        puVar2 = (undefined8 *)(lVar7 + lVar13);
        *puVar2 = *puVar3;
        puVar2[1] = uVar12;
        lVar7 = *param_6;
        puVar2 = (undefined8 *)(lVar6 + 0x58 + lVar15);
        uVar12 = puVar2[1];
        *(undefined8 *)(lVar7 + lVar14) = *puVar2;
        ((undefined8 *)(lVar7 + lVar14))[1] = uVar12;
        lVar7 = *param_7;
        puVar4 = (undefined4 *)(lVar6 + 0x30 + lVar15);
        uVar8 = *puVar4;
        uVar9 = puVar4[1];
        uVar10 = puVar4[2];
        uVar11 = puVar4[3];
        puVar2 = (undefined8 *)(lVar6 + 0x40 + lVar15);
        uVar12 = puVar2[1];
        puVar3 = (undefined8 *)(lVar7 + 0x10 + lVar14 * 2);
        *puVar3 = *puVar2;
        puVar3[1] = uVar12;
        puVar4 = (undefined4 *)(lVar7 + lVar14 * 2);
        *puVar4 = uVar8;
        puVar4[1] = uVar9;
        puVar4[2] = uVar10;
        puVar4[3] = uVar11;
        lVar15 = lVar15 + 0x98;
        lVar14 = lVar14 + 0x10;
        lVar13 = lVar13 + 0x18;
      } while ((longlong)iVar5 * 0x98 - lVar15 != 0);
    }
    iVar5 = (int)plVar1[3];
    FUN_144a127d2(param_4,iVar5,1);
    if (0 < (longlong)iVar5) {
      lVar13 = 0;
      do {
        *(undefined4 *)(*param_4 + lVar13 * 4) = *(undefined4 *)(plVar1[2] + lVar13 * 4);
        lVar13 = lVar13 + 1;
      } while (iVar5 != lVar13);
    }
  }
  return;
}



// FUNCTION 14820ddc2 FUN_14820ddc2 body=897 status=ok
// SIG undefined FUN_14820ddc2(void)

void FUN_14820ddc2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98 [10];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_98[8] = 0;
  local_98[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 8);
  }
  plVar2 = local_98 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_98[6] = 0;
  local_98[7] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 6);
  }
  plVar4 = local_98 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_98[4] = 0;
  local_98[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 4);
  }
  plVar5 = local_98 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar3 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a0 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_a0 = local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = plVar4;
  local_b0 = plVar5;
  local_a8 = plVar3;
  FUN_14820e144(local_40,local_44,local_48,plVar2);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_98[4] != 0) {
    FUN_1400020a8();
  }
  if (local_98[6] != 0) {
    FUN_1400020a8();
  }
  if (local_98[8] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820e144 FUN_14820e144 body=2822 status=ok
// SIG undefined FUN_14820e144(void)

void FUN_14820e144(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5,
                  longlong *param_6,longlong *param_7,longlong *param_8)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  float fVar18;
  float fVar20;
  undefined1 auVar19 [12];
  float fVar21;
  undefined1 auStack_248 [36];
  uint local_224;
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  longlong *local_218 [2];
  wchar_t *local_208;
  longlong *local_200;
  longlong *local_1f8 [2];
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [4];
  longlong *local_1c0 [2];
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  int local_190;
  undefined4 uStack_18c;
  undefined1 local_180 [8];
  uint local_178;
  undefined4 uStack_174;
  longlong *local_170;
  undefined8 local_168;
  longlong *local_160;
  longlong local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined1 local_148 [8];
  longlong *local_140;
  wchar_t *local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  int local_f4;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  int local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x195) & 2) == 0) {
      local_224 = param_3;
      FUN_1446ddc76(local_180,&DAT_14a492018,1);
      FUN_14276766e(&local_128,local_180);
      FUN_144a5dc74(&local_190);
      FUN_1427679d4(&local_128,&local_178,&local_190);
      uVar8 = CONCAT44(uStack_174,local_178);
      local_138 = L"GetSectionFromStaticMeshStart";
      local_130._0_4_ = 0x1d;
      FUN_1446e940c(local_1c4,&local_138);
      local_138 = L"KismetProcMeshLibrary";
      local_130._0_4_ = 0x15;
      FUN_1446e940c(local_1c8,&local_138);
      FUN_140208bae(local_1c0,local_1c8,local_1c4,L"Calling GetSectionFromStaticMesh on");
      FUN_1467eb2e4(&local_1b0,local_1c0,1);
      local_1a0 = local_1b0;
      local_198 = local_1a8;
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
        UNLOCK();
      }
      FUN_1467eb24e(uVar8,&local_168,&local_1a0);
      FUN_144a5dc74(local_1f8);
      FUN_1468756a4(&local_1e8,param_1,local_1f8);
      local_1d8 = local_1e8;
      local_1d0 = local_1e0;
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
        UNLOCK();
      }
      FUN_1467eb24e(local_168,&local_158,&local_1d8);
      lVar7 = local_158;
      local_138 = L"GetSectionFromStaticMeshEnd";
      local_130._0_4_ = 0x1b;
      FUN_1446e940c(local_21c,&local_138);
      local_138 = L"KismetProcMeshLibrary";
      local_130 = (longlong *)CONCAT44(local_130._4_4_,0x15);
      FUN_1446e940c(local_220,&local_138);
      FUN_140208bae(local_218,local_220,local_21c,
                    L"but \'Allow CPU Access\' is not enabled. This is required for converting StaticMesh to ProceduralMeshComponent in cooked builds."
                   );
      FUN_1467eb2e4(&local_208,local_218,1);
      local_138 = local_208;
      local_130 = local_200;
      if (local_200 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_200 + 1) = (int)local_200[1] + 1;
        UNLOCK();
      }
      FUN_1467eb24e(lVar7,local_148,&local_138);
      param_3 = local_224;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_140 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      plVar6 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_130 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_200 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (local_218[0] != (longlong *)0x0) {
        (**(code **)(*local_218[0] + 0x10))();
      }
      plVar6 = (longlong *)CONCAT44(uStack_14c,local_150);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = local_1d0;
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1d0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_1d0)(local_1d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_1e0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar1 = (int *)((longlong)local_1e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1e0 + 0x10))(local_1e0);
          }
        }
      }
      if (local_1f8[0] != (longlong *)0x0) {
        (**(code **)(*local_1f8[0] + 0x10))();
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_160 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_160 + 0x10))(local_160);
          }
        }
      }
      plVar6 = local_198;
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_198 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_1a8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar1 = (int *)((longlong)local_1a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1a8 + 0x10))(local_1a8);
          }
        }
      }
      if (local_1c0[0] != (longlong *)0x0) {
        (**(code **)(*local_1c0[0] + 0x10))();
      }
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_170 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_170 + 0x10))(local_170);
          }
        }
      }
      if ((longlong *)CONCAT44(uStack_18c,local_190) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_18c,local_190) + 0x10))();
      }
      FUN_1427678c0(&local_128);
    }
    plVar6 = *(longlong **)(param_1 + 0xe0);
    if ((((-1 < (int)param_2 && plVar6 != (longlong *)0x0) && ((int)param_2 < (int)plVar6[1])) &&
        (-1 < (int)param_3)) &&
       (lVar7 = *(longlong *)(*plVar6 + (ulonglong)param_2 * 8),
       (int)param_3 < *(int *)(lVar7 + 0x38))) {
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) < 0) {
        FUN_1447a8aa0(param_4,0);
      }
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) < 0) {
        FUN_14481578e(param_5,0);
      }
      *(undefined4 *)(param_6 + 1) = 0;
      if (*(int *)((longlong)param_6 + 0xc) < 0) {
        FUN_1447a8aa0(param_6,0);
      }
      *(undefined4 *)(param_7 + 1) = 0;
      if (*(int *)((longlong)param_7 + 0xc) < 0) {
        FUN_1408652ee(param_7,0);
      }
      *(undefined4 *)(param_8 + 1) = 0;
      if (*(int *)((longlong)param_8 + 0xc) < 0) {
        FUN_148215026(param_8);
      }
      local_108 = 0;
      local_100 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_fc = 0xffffffff00000080;
      local_f4 = 0;
      local_e8 = (undefined1 *)0x0;
      local_e0 = 0;
      lVar13 = lVar7 + 0x10;
      if (*(longlong *)(lVar7 + 0x30) != 0) {
        lVar13 = *(longlong *)(lVar7 + 0x30);
      }
      lVar10 = (ulonglong)param_3 * 0x1c;
      uVar15 = *(int *)(lVar13 + 8 + lVar10) * 3 + *(int *)(lVar13 + 4 + lVar10);
      auVar16._0_8_ = FUN_1461c3a4c(lVar7 + 0x198,&local_158);
      auVar16._8_8_ = extraout_XMM0_Qb;
      uVar12 = *(uint *)(lVar13 + 4 + lVar10);
      local_224 = uVar15;
      if (uVar12 < uVar15) {
        do {
          if ((char)uStack_14c == '\x01') {
            local_178 = *(uint *)(local_158 + (longlong)(int)uVar12 * 4);
          }
          else {
            local_178 = (uint)*(ushort *)(local_158 + (longlong)(int)uVar12 * 2);
          }
          if ((int)uStack_120 != local_f4) {
            puVar11 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar11 = local_f0;
            }
            iVar14 = *(int *)(puVar11 + (ulonglong)(local_e0 - 1U & local_178) * 4);
            while (iVar14 != -1) {
              lVar13 = local_128 + (longlong)iVar14 * 0x10;
              if (*(uint *)(local_128 + (longlong)iVar14 * 0x10) == local_178) {
                if ((int *)(lVar13 + 4) != (int *)0x0 && lVar13 != 0) {
                  iVar14 = *(int *)(lVar13 + 4);
                  goto LAB_14820eae3;
                }
                break;
              }
              iVar14 = *(int *)(lVar13 + 8);
            }
          }
          lVar13 = *(longlong *)(lVar7 + 0x140);
          uVar9 = (ulonglong)(*(int *)(lVar7 + 0x148) * local_178);
          fVar18 = *(float *)(lVar13 + 8 + uVar9);
          fVar20 = *(float *)(lVar13 + 4 + uVar9);
          fVar21 = *(float *)(lVar13 + uVar9);
          iVar14 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar14 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar14 + 1U) {
            auVar16._0_8_ = FUN_1403e3958(param_4,iVar14);
            auVar16._8_8_ = extraout_XMM0_Qb_00;
          }
          lVar10 = (longlong)iVar14;
          lVar13 = *param_4;
          *(double *)(lVar13 + lVar10 * 0x18) = (double)fVar21;
          *(double *)(lVar13 + 8 + lVar10 * 0x18) = (double)fVar20;
          *(double *)(lVar13 + 0x10 + lVar10 * 0x18) = (double)fVar18;
          uVar9 = (ulonglong)local_178;
          if (*(char *)(lVar7 + 0x111) == '\x01') {
            auVar16 = pmovsxwd(auVar16,*(undefined8 *)
                                        (*(longlong *)(lVar7 + 0xf0) + 8 + uVar9 * 0x10));
            auVar19._0_4_ = (float)auVar16._0_4_ * 3.051851e-05;
            auVar19._4_4_ = (float)auVar16._4_4_ * 3.051851e-05;
            auVar19._8_4_ = (float)auVar16._8_4_ * 3.051851e-05;
          }
          else {
            auVar16 = pmovsxbd(auVar16,*(undefined4 *)(*(longlong *)(lVar7 + 0xf0) + 4 + uVar9 * 8))
            ;
            auVar19._0_4_ = (float)auVar16._0_4_ * 0.007874016;
            auVar19._4_4_ = (float)auVar16._4_4_ * 0.007874016;
            auVar19._8_4_ = (float)auVar16._8_4_ * 0.007874016;
          }
          iVar5 = (int)param_6[1];
          lVar13 = (longlong)iVar5;
          *(uint *)(param_6 + 1) = iVar5 + 1U;
          local_190 = iVar14;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar5 + 1U) {
            FUN_1403e3958(param_6,iVar5);
            uVar9 = (ulonglong)local_178;
          }
          lVar10 = *param_6;
          *(double *)(lVar10 + lVar13 * 0x18) = (double)auVar19._0_4_;
          *(double *)(lVar10 + 8 + lVar13 * 0x18) = (double)auVar19._4_4_;
          *(double *)(lVar10 + 0x10 + lVar13 * 0x18) = (double)auVar19._8_4_;
          lVar13 = *(longlong *)(lVar7 + 0xf8);
          if (*(char *)(lVar7 + 0x110) == '\x01') {
            lVar10 = *(uint *)(lVar7 + 0x108) * uVar9;
            fVar20 = *(float *)(lVar13 + lVar10 * 8);
            fVar18 = *(float *)(lVar13 + 4 + lVar10 * 8);
          }
          else {
            lVar10 = *(uint *)(lVar7 + 0x108) * uVar9;
            uVar3 = *(ushort *)(lVar13 + 2 + lVar10 * 4);
            uVar15 = (uint)uVar3 << 0xd;
            if ((uVar15 & 0xf800000) == 0xf800000) {
              fVar18 = (float)(uVar15 | 0x70000000);
            }
            else if ((uVar15 & 0xf800000) == 0) {
              fVar18 = (float)(uVar15 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar18 = (float)((uVar15 & 0xfffe000) + 0x38000000);
            }
            uVar4 = *(ushort *)(lVar13 + lVar10 * 4);
            uVar15 = (uint)uVar4 << 0xd;
            if ((uVar15 & 0xf800000) == 0xf800000) {
              fVar20 = (float)(uVar15 | 0x70000000);
            }
            else if ((uVar15 & 0xf800000) == 0) {
              fVar20 = (float)(uVar15 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar20 = (float)((uVar15 & 0xfffe000) + 0x38000000);
            }
            fVar18 = (float)((uint)fVar18 | (int)(short)uVar3 & 0x80000000U);
            fVar20 = (float)((int)(short)uVar4 & 0x80000000U | (uint)fVar20);
          }
          iVar14 = (int)param_7[1];
          *(uint *)(param_7 + 1) = iVar14 + 1U;
          if (*(uint *)((longlong)param_7 + 0xc) < iVar14 + 1U) {
            FUN_14489624a(param_7,iVar14);
            uVar9 = (ulonglong)local_178;
          }
          auVar17._0_8_ = (double)fVar18;
          auVar17._8_8_ = 0;
          lVar13 = *param_7;
          *(double *)(lVar13 + (longlong)iVar14 * 0x10) = (double)fVar20;
          *(double *)(lVar13 + 8 + (longlong)iVar14 * 0x10) = auVar17._0_8_;
          if (*(char *)(lVar7 + 0x111) == '\x01') {
            auVar16 = pmovsxwd(auVar17,*(undefined8 *)(*(longlong *)(lVar7 + 0xf0) + uVar9 * 0x10));
            fVar18 = (float)auVar16._0_4_ * 3.051851e-05;
            fVar20 = (float)auVar16._4_4_ * 3.051851e-05;
            fVar21 = (float)auVar16._8_4_ * 3.051851e-05;
          }
          else {
            auVar16 = pmovsxbd(auVar17,*(undefined4 *)(*(longlong *)(lVar7 + 0xf0) + uVar9 * 8));
            fVar18 = (float)auVar16._0_4_ * 0.007874016;
            fVar20 = (float)auVar16._4_4_ * 0.007874016;
            fVar21 = (float)auVar16._8_4_ * 0.007874016;
          }
          iVar14 = (int)param_8[1];
          *(uint *)(param_8 + 1) = iVar14 + 1U;
          if (*(uint *)((longlong)param_8 + 0xc) < iVar14 + 1U) {
            FUN_148214286(param_8,iVar14);
          }
          lVar13 = *param_8;
          lVar10 = (longlong)iVar14 * 0x20;
          *(double *)(lVar13 + lVar10) = (double)fVar18;
          *(double *)(lVar13 + 8 + lVar10) = (double)fVar20;
          *(double *)(lVar13 + 0x10 + lVar10) = (double)fVar21;
          *(undefined1 *)(lVar13 + 0x18 + lVar10) = 0;
          local_138 = (wchar_t *)&local_178;
          local_130 = (longlong *)&local_190;
          auVar16._0_8_ = FUN_140263e2a(&local_128,&local_168,&local_138,0);
          auVar16._8_8_ = extraout_XMM0_Qb_01;
          iVar14 = local_190;
LAB_14820eae3:
          iVar5 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
            auVar16._0_8_ = FUN_1446f48e2(param_5,iVar5);
            auVar16._8_8_ = extraout_XMM0_Qb_02;
          }
          *(int *)(*param_5 + (longlong)iVar5 * 4) = iVar14;
          uVar12 = uVar12 + 1;
        } while (uVar12 != local_224);
      }
      local_e0 = 0;
      if (local_e8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_144a6bfa8(&local_128);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820ec52 FUN_14820ec52 body=773 status=ok
// SIG undefined FUN_14820ec52(void)

void FUN_14820ec52(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_69;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar1 = local_5c;
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar2 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_69 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_88 = local_48;
  local_b8 = local_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  local_a8 = local_30;
  local_c8 = local_78;
  local_d0 = local_69;
  local_d8 = plVar2;
  FUN_14820ef58(local_28,&local_b8,&local_98,iVar1 != 0);
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820ef58 FUN_14820ef58 body=8722 status=ok
// SIG undefined FUN_14820ef58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14820ef58(longlong *param_1,double *param_2,double *param_3,undefined1 param_4,
                  longlong *param_5,char param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  void *_Src;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  longlong lVar23;
  undefined8 uVar24;
  void *pvVar25;
  void **ppvVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined1 *puVar29;
  char cVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 *puVar33;
  double *pdVar34;
  double *pdVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  uint uVar39;
  longlong *plVar40;
  longlong *plVar41;
  longlong *plVar42;
  ulonglong uVar43;
  undefined4 *puVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  float fVar56;
  double dVar57;
  double dVar59;
  undefined1 auVar58 [16];
  float fVar60;
  float fVar61;
  double dVar62;
  double dVar64;
  undefined1 auVar63 [16];
  undefined1 auStack_468 [32];
  undefined1 local_448;
  longlong *local_440;
  longlong *local_438;
  longlong local_430;
  char local_428;
  undefined7 uStack_427;
  double dStack_420;
  int local_40c;
  undefined1 local_408 [24];
  longlong *local_3f0;
  undefined1 local_3e8 [24];
  longlong *local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined8 local_380;
  longlong local_378;
  ulonglong uStack_370;
  void *local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 uStack_350;
  undefined8 *local_348;
  int *piStack_340;
  double local_338;
  undefined8 *puStack_330;
  int *local_328;
  undefined2 uStack_320;
  undefined6 uStack_31e;
  char local_318;
  undefined1 uStack_317;
  undefined8 uStack_316;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  uint uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  float local_214 [3];
  int local_208;
  float fStack_204;
  int aiStack_200 [6];
  undefined8 local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  undefined4 *local_1c8;
  undefined4 *puStack_1c0;
  undefined4 *local_1b8;
  undefined8 local_1a8;
  int local_1a0;
  void *local_198;
  ulonglong uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (param_1 == (longlong *)0x0) goto LAB_14820efe8;
  dVar11 = (double)param_1[0x48];
  dStack_420 = (double)param_1[0x49];
  dVar52 = *param_2 - (double)param_1[0x4c];
  dVar53 = param_2[1] - (double)param_1[0x4d];
  dVar50 = param_2[2] - (double)param_1[0x4e];
  dVar7 = -dVar11;
  dVar8 = -dStack_420;
  dVar5 = (double)param_1[0x4a] * -1.0;
  dVar6 = (double)param_1[0x4b] * 1.0;
  local_3e8._8_4_ = SUB84(dVar5,0);
  local_3e8._0_8_ = dVar8;
  local_3e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar54 = dVar53 * dVar7 - dVar8 * dVar52;
  dVar9 = dVar50 * dVar8 - dVar5 * dVar53;
  dVar57 = dVar52 * dVar5 - dVar50 * dVar7;
  dVar59 = dVar6 * 0.0 - dVar6 * 0.0;
  dVar9 = dVar9 + dVar9;
  dVar57 = dVar57 + dVar57;
  dVar54 = dVar54 + dVar54;
  auVar55._8_8_ = dVar59 + dVar59;
  dVar12 = *param_3;
  dVar13 = param_3[1];
  local_408._8_4_ = SUB84(dStack_420,0);
  local_408._0_8_ = dVar7;
  local_408._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar59 = dVar13 * dVar7 - dVar8 * dVar12;
  dVar10 = param_3[2] * dVar8 - dVar5 * dVar13;
  dVar62 = dVar12 * dVar5 - dVar7 * param_3[2];
  dVar64 = dVar6 * 0.0 - dVar6 * 0.0;
  dVar10 = dVar10 + dVar10;
  dVar62 = dVar62 + dVar62;
  dVar59 = dVar59 + dVar59;
  dVar64 = dVar64 + dVar64;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x50);
  auVar55._0_8_ = dVar54 * dVar6 + dVar50 + (dVar57 * dVar7 - dVar9 * dVar8);
  auVar58._0_8_ = (dVar54 * dVar8 - dVar57 * (double)local_3e8._8_8_) + dVar6 * dVar9 + dVar52;
  auVar58._8_8_ = dVar11 * dVar54 + dVar5 * dVar9 + dVar6 * dVar57 + dVar53;
  auVar51 = divpd(_DAT_149934d80,auVar2);
  fVar60 = -NAN;
  fVar56 = 0.0;
  dVar54 = 1.0 / (double)param_1[0x52];
  fVar61 = SUB84(dVar54,0);
  auVar63._0_8_ = dVar59 * dVar6 + param_3[2] + (dVar62 * dVar7 - dVar10 * dVar8);
  auVar63._8_8_ = dVar64;
  dVar7 = (dVar59 * (double)local_408._8_8_ - dVar62 * (double)local_3e8._8_8_) +
          dVar6 * dVar10 + dVar12;
  dVar5 = dVar11 * dVar59 + dVar5 * dVar10 + dVar6 * dVar62 + dVar13;
  dVar59 = auVar63._0_8_ * auVar63._0_8_ + dVar7 * dVar7 + dVar5 * dVar5;
  _local_428 = CONCAT71((int7)((ulonglong)dVar11 >> 8),param_4);
  if ((dVar59 != 1.0) || (dVar6 = dVar5, NAN(dVar59))) {
    if (9.99999993922529e-09 <= dVar59) {
      dVar59 = 1.0 / SQRT(dVar59);
      fVar56 = SUB84(dVar59,0);
      auVar63._0_8_ = auVar63._0_8_ * dVar59;
      dVar6 = dVar5 * dVar59;
      dVar7 = dVar7 * dVar59;
    }
    else {
      dVar5 = 0.0;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = (double)DAT_14c8464f0;
      dVar7 = DAT_14c8464e0;
      dVar6 = DAT_14c8464e8;
    }
  }
  uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_2d8._8_4_ = SUB84(dVar6,0);
  local_2d8._0_8_ = dVar7;
  local_2d8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_2c8 = auVar63._0_8_;
  dStack_2c0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                       (ulonglong)dVar54) * auVar55._0_8_ * local_2c8 +
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar51._0_8_) *
               auVar58._0_8_ * dVar7 +
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar51._8_8_) *
               auVar58._8_8_ * dVar6;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_440 = param_1;
  if (0 < (int)param_1[0xce]) {
    local_3b8._8_4_ = SUB84(dVar5,0);
    local_3b8._0_8_ = dVar6;
    local_3b8._12_4_ = uVar22;
    local_3a8._8_4_ = SUB84(dVar5,0);
    local_3a8._0_8_ = dVar7;
    local_3a8._12_4_ = uVar22;
    lVar23 = 0;
    local_398 = auVar63;
    do {
      uVar36 = uStack_2e0;
      plVar40 = (longlong *)(lVar23 * 0x60 + param_1[0xcd]);
      if (((plVar40 != (longlong *)0x0) && (0 < (int)plVar40[3])) && (0 < (int)plVar40[1])) {
        dVar64 = ((double)plVar40[9] - (double)plVar40[6]) * 0.5;
        dVar5 = ((double)plVar40[8] - (double)plVar40[5]) * 0.5;
        dVar6 = ((double)plVar40[7] - (double)plVar40[4]) * 0.5;
        dVar59 = (((double)plVar40[6] + dVar64) * local_2c8 +
                 ((double)plVar40[4] + dVar6) * (double)local_2d8._0_8_ +
                 ((double)plVar40[5] + dVar5) * (double)local_2d8._8_8_) - dStack_2c0;
        dVar64 = ABS(dVar64 * local_2c8) +
                 ABS(dVar5 * (double)local_2d8._8_8_) + ABS(dVar6 * (double)local_2d8._0_8_);
        iVar19 = -(uint)(dVar59 < -dVar64);
        if (dVar64 < dVar59) {
          iVar19 = 1;
        }
        param_1 = local_440;
        local_430 = lVar23;
        if (iVar19 != 1) {
          if (iVar19 == -1) {
            if (local_428 != '\0') {
              lVar23 = (longlong)(int)uStack_2e0;
              uVar21 = (int)uStack_2e0 + 1;
              uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar21);
              if (uStack_2e0._4_4_ < uVar21) {
                FUN_140de956e(&local_2e8,uVar36 & 0xffffffff);
              }
              FUN_1482150f2(lVar23 * 0x60 + local_2e8,plVar40);
              uVar24 = (**(code **)(*local_440 + 0x610))(local_440,local_430);
              uVar36 = uStack_2f0;
              lVar23 = (longlong)(int)uStack_2f0;
              uVar21 = (int)uStack_2f0 + 1;
              uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar21);
              if (uStack_2f0._4_4_ < uVar21) {
                FUN_144769b64(&local_2f8,uVar36 & 0xffffffff);
              }
              *(undefined8 *)(local_2f8 + lVar23 * 8) = uVar24;
            }
            lVar23 = local_430;
            FUN_1482121b4(local_440);
            param_1 = local_440;
          }
          else {
            uStack_316 = CONCAT26(0x100,(undefined6)uStack_316);
            local_368 = (void *)0x0;
            uStack_360 = 0;
            local_358 = 0;
            uStack_350 = 0;
            local_348 = (undefined8 *)0x0;
            piStack_340 = (int *)0x0;
            local_338 = 0.0;
            puStack_330 = (undefined8 *)0x0;
            local_328 = (int *)0x0;
            uStack_320 = 0;
            uStack_31e = 0;
            local_318 = '\0';
            if (local_428 == '\0') {
              plVar42 = (longlong *)0x0;
            }
            else {
              lVar23 = (longlong)(int)uStack_2e0;
              uVar21 = (int)uStack_2e0 + 1;
              uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar21);
              if (uStack_2e0._4_4_ < uVar21) {
                FUN_140de956e(&local_2e8,uVar36 & 0xffffffff);
              }
              lVar23 = lVar23 * 0x60;
              puVar1 = (undefined8 *)(local_2e8 + 0x40 + lVar23);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = (undefined8 *)(local_2e8 + 0x30 + lVar23);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = (undefined8 *)(local_2e8 + 0x20 + lVar23);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = (undefined8 *)(local_2e8 + 0x10 + lVar23);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined8 *)(local_2e8 + lVar23) = 0;
              ((undefined8 *)(local_2e8 + lVar23))[1] = 0;
              *(undefined1 *)(local_2e8 + 0x50 + lVar23) = 0;
              *(undefined2 *)(local_2e8 + 0x58 + lVar23) = 0x100;
              plVar42 = (longlong *)(lVar23 + local_2e8);
              uVar24 = (**(code **)(*local_440 + 0x610))(local_440,local_430);
              uVar36 = uStack_2f0;
              lVar23 = (longlong)(int)uStack_2f0;
              uVar21 = (int)uStack_2f0 + 1;
              uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar21);
              if (uStack_2f0._4_4_ < uVar21) {
                FUN_144769b64(&local_2f8,uVar36 & 0xffffffff);
              }
              *(undefined8 *)(local_2f8 + lVar23 * 8) = uVar24;
            }
            local_128 = 0;
            local_120 = 0;
            local_148 = (void *)0x0;
            uStack_140 = 0;
            local_11c = 0xffffffff00000080;
            local_114 = 0;
            local_108 = (undefined1 *)0x0;
            local_100 = 0;
            local_178 = 0;
            local_170 = 0;
            local_198 = (void *)0x0;
            uStack_190 = 0;
            local_16c = 0xffffffff00000080;
            local_164 = 0;
            local_158 = (undefined1 *)0x0;
            local_150 = 0;
            uVar21 = *(uint *)(plVar40 + 1);
            local_378 = 0;
            uStack_370 = (ulonglong)uVar21;
            local_438 = plVar42;
            if (uVar21 != 0) {
              FUN_14475e4ac(&local_378,0);
              plVar42 = local_438;
              local_1e8._0_4_ = 0;
              if (0 < (int)uVar21) {
                plVar41 = local_438 + 4;
                pdVar34 = (double *)(local_438 + 7);
                do {
                  uVar36 = uStack_360;
                  plVar15 = local_438;
                  lVar23 = *plVar40;
                  lVar31 = (longlong)(int)local_1e8 * 0x98;
                  pdVar35 = (double *)(lVar23 + lVar31);
                  *(float *)(local_378 + (longlong)(int)local_1e8 * 4) =
                       (float)((local_2c8 * *(double *)(lVar23 + 0x10 + lVar31) +
                               (double)local_2d8._0_8_ * *(double *)(lVar23 + lVar31) +
                               (double)local_2d8._8_8_ * *(double *)(lVar23 + 8 + lVar31)) -
                              dStack_2c0);
                  if (*(float *)(local_378 + (longlong)(int)local_1e8 * 4) <= 0.0) {
                    if (local_438 != (longlong *)0x0) {
                      iVar19 = (int)local_438[1];
                      *(uint *)(local_438 + 1) = iVar19 + 1U;
                      if (*(uint *)((longlong)local_438 + 0xc) < iVar19 + 1U) {
                        FUN_14183c640(local_438,iVar19);
                      }
                      memcpy((void *)((longlong)iVar19 * 0x98 + *plVar15),pdVar35,0x98);
                      if ((char)plVar15[10] == '\0') {
                        plVar42[9] = (longlong)pdVar35[2];
                        dVar59 = pdVar35[1];
                        *pdVar34 = *pdVar35;
                        plVar42[8] = (longlong)dVar59;
                        uVar22 = *(undefined4 *)pdVar35;
                        uVar46 = *(undefined4 *)((longlong)pdVar35 + 4);
                        uVar45 = *(undefined4 *)(pdVar35 + 1);
                        uVar48 = *(undefined4 *)((longlong)pdVar35 + 0xc);
                        plVar42[6] = (longlong)pdVar35[2];
                        *(undefined4 *)plVar41 = uVar22;
                        *(undefined4 *)((longlong)plVar42 + 0x24) = uVar46;
                        *(undefined4 *)(plVar42 + 5) = uVar45;
                        *(undefined4 *)((longlong)plVar42 + 0x2c) = uVar48;
                        *(undefined1 *)(plVar15 + 10) = 1;
                      }
                      else {
                        dVar59 = (double)plVar15[4];
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                        dVar64 = (double)plVar15[5];
                        uVar45 = SUB84(dVar64,0);
                        uVar48 = (undefined4)((ulonglong)dVar64 >> 0x20);
                        dVar5 = *pdVar35;
                        if (dVar5 <= dVar59) {
                          uVar22 = SUB84(dVar5,0);
                          uVar46 = (undefined4)((ulonglong)dVar5 >> 0x20);
                        }
                        plVar15[4] = CONCAT44(uVar46,uVar22);
                        dVar59 = pdVar35[1];
                        if (dVar59 <= dVar64) {
                          uVar45 = SUB84(dVar59,0);
                          uVar48 = (undefined4)((ulonglong)dVar59 >> 0x20);
                        }
                        plVar15[5] = CONCAT44(uVar48,uVar45);
                        dVar59 = (double)plVar15[6];
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                        dVar64 = pdVar35[2];
                        if (dVar64 <= dVar59) {
                          uVar22 = SUB84(dVar64,0);
                          uVar46 = (undefined4)((ulonglong)dVar64 >> 0x20);
                        }
                        plVar15[6] = CONCAT44(uVar46,uVar22);
                        dVar59 = (double)plVar15[7];
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                        dVar64 = *pdVar35;
                        if (dVar59 <= dVar64) {
                          uVar22 = SUB84(dVar64,0);
                          uVar46 = (undefined4)((ulonglong)dVar64 >> 0x20);
                        }
                        plVar15[7] = CONCAT44(uVar46,uVar22);
                        dVar59 = (double)plVar15[8];
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                        dVar64 = pdVar35[1];
                        if (dVar59 <= dVar64) {
                          uVar22 = SUB84(dVar64,0);
                          uVar46 = (undefined4)((ulonglong)dVar64 >> 0x20);
                        }
                        plVar15[8] = CONCAT44(uVar46,uVar22);
                        dVar59 = (double)plVar15[9];
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                        dVar64 = pdVar35[2];
                        if (dVar59 <= dVar64) {
                          uVar22 = SUB84(dVar64,0);
                          uVar46 = (undefined4)((ulonglong)dVar64 >> 0x20);
                        }
                        plVar15[9] = CONCAT44(uVar46,uVar22);
                      }
                      ppvVar26 = &local_198;
                      aiStack_200[2] = iVar19;
                      goto LAB_14820f97d;
                    }
                  }
                  else {
                    iVar19 = (int)uStack_360;
                    uVar39 = (int)uStack_360 + 1;
                    uStack_360 = CONCAT44(uStack_360._4_4_,uVar39);
                    if (uStack_360._4_4_ < uVar39) {
                      FUN_14183c640(&local_368,uVar36 & 0xffffffff);
                    }
                    memcpy((void *)((longlong)iVar19 * 0x98 + (longlong)local_368),pdVar35,0x98);
                    aiStack_200[2] = iVar19;
                    if (local_318 == '\0') {
                      uStack_320 = SUB82(pdVar35[2],0);
                      uStack_31e = (undefined6)((ulonglong)pdVar35[2] >> 0x10);
                      puStack_330 = (undefined8 *)*pdVar35;
                      local_328 = (int *)pdVar35[1];
                      local_348 = (undefined8 *)*pdVar35;
                      piStack_340 = (int *)pdVar35[1];
                      local_338 = pdVar35[2];
                      local_318 = '\x01';
                    }
                    else {
                      uVar22 = SUB84(local_348,0);
                      uVar46 = (undefined4)((ulonglong)local_348 >> 0x20);
                      uVar45 = SUB84(piStack_340,0);
                      uVar48 = (undefined4)((ulonglong)piStack_340 >> 0x20);
                      dVar59 = *pdVar35;
                      if (dVar59 <= (double)local_348) {
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                      }
                      local_348 = (undefined8 *)CONCAT44(uVar46,uVar22);
                      dVar59 = pdVar35[1];
                      if (dVar59 <= (double)piStack_340) {
                        uVar45 = SUB84(dVar59,0);
                        uVar48 = (undefined4)((ulonglong)dVar59 >> 0x20);
                      }
                      piStack_340 = (int *)CONCAT44(uVar48,uVar45);
                      uVar22 = SUB84(local_338,0);
                      uVar46 = (undefined4)((ulonglong)local_338 >> 0x20);
                      dVar59 = pdVar35[2];
                      if (dVar59 <= local_338) {
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                      }
                      local_338 = (double)CONCAT44(uVar46,uVar22);
                      uVar22 = SUB84(puStack_330,0);
                      uVar46 = (undefined4)((ulonglong)puStack_330 >> 0x20);
                      dVar59 = *pdVar35;
                      if ((double)puStack_330 <= dVar59) {
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                      }
                      puStack_330 = (undefined8 *)CONCAT44(uVar46,uVar22);
                      uVar22 = SUB84(local_328,0);
                      uVar46 = (undefined4)((ulonglong)local_328 >> 0x20);
                      dVar59 = pdVar35[1];
                      if ((double)local_328 <= dVar59) {
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                      }
                      local_328 = (int *)CONCAT44(uVar46,uVar22);
                      uVar22 = (undefined4)CONCAT62(uStack_31e,uStack_320);
                      uVar46 = (undefined4)((uint6)uStack_31e >> 0x10);
                      dVar59 = pdVar35[2];
                      if ((double)CONCAT62(uStack_31e,uStack_320) <= dVar59) {
                        uVar22 = SUB84(dVar59,0);
                        uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
                      }
                      uStack_320 = (undefined2)uVar22;
                      uStack_31e = (undefined6)(CONCAT44(uVar46,uVar22) >> 0x10);
                    }
                    ppvVar26 = (void **)&local_148;
LAB_14820f97d:
                    uStack_2b0 = aiStack_200 + 2;
                    local_2b8 = &local_1e8;
                    FUN_140263e2a(ppvVar26,&local_1c8,&local_2b8,0);
                  }
                  local_1e8._0_4_ = (int)local_1e8 + 1;
                } while ((int)local_1e8 < (int)uVar21);
              }
            }
            plVar42 = local_438;
            if (0 < (int)plVar40[3]) {
              local_3c0 = local_438 + 4;
              local_3c8 = local_438 + 7;
              local_3d0 = local_438 + 2;
              lVar31 = 0;
              lVar23 = 0;
              local_3f0 = plVar40;
              do {
                plVar15 = local_3d0;
                plVar41 = local_3f0;
                plVar42 = local_438;
                local_408._0_8_ = lVar23;
                lVar37 = plVar40[2];
                puVar29 = local_108;
                if (local_108 == (undefined1 *)0x0) {
                  puVar29 = local_110;
                }
                puVar33 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar33 = local_160;
                }
                local_1a8 = *(undefined8 *)(lVar37 + lVar23 * 0xc);
                uVar24 = local_1a8;
                local_1a0 = *(int *)(lVar37 + 8 + lVar23 * 0xc);
                local_3e8._0_8_ = lVar31;
                lVar23 = 0;
                do {
                  uVar21 = *(uint *)(lVar37 + lVar31 * 4 + lVar23 * 4);
                  if ((int)uStack_140 != local_114) {
                    iVar19 = *(int *)(puVar29 + (ulonglong)(uVar21 & local_100 - 1U) * 4);
                    while (iVar19 != -1) {
                      pvVar25 = (void *)((longlong)local_148 + (longlong)iVar19 * 0x10);
                      if (*(uint *)((longlong)local_148 + (longlong)iVar19 * 0x10) == uVar21)
                      goto LAB_14820fbee;
                      iVar19 = *(int *)((longlong)pvVar25 + 8);
                    }
                  }
                  pvVar25 = (void *)0x0;
LAB_14820fbee:
                  puVar44 = (undefined4 *)((longlong)pvVar25 + 4);
                  if (pvVar25 == (void *)0x0) {
                    puVar44 = (undefined4 *)0x0;
                  }
                  (&local_1c8)[lVar23] = puVar44;
                  puVar18 = local_1b8;
                  puVar44 = puStack_1c0;
                  cVar30 = local_428;
                  if (local_428 != '\0') {
                    if ((int)uStack_190 != local_164) {
                      iVar19 = *(int *)(puVar33 + (ulonglong)(uVar21 & local_150 - 1U) * 4);
                      while (iVar19 != -1) {
                        pvVar25 = (void *)((longlong)local_198 + (longlong)iVar19 * 0x10);
                        if (*(uint *)((longlong)local_198 + (longlong)iVar19 * 0x10) == uVar21)
                        goto LAB_14820fc0f;
                        iVar19 = *(int *)((longlong)pvVar25 + 8);
                      }
                    }
                    pvVar25 = (void *)0x0;
LAB_14820fc0f:
                    lVar28 = (longlong)pvVar25 + 4;
                    if (pvVar25 == (void *)0x0) {
                      lVar28 = 0;
                    }
                    (&local_1e8)[lVar23] = lVar28;
                  }
                  lVar23 = lVar23 + 1;
                } while (lVar23 != 3);
                if ((puStack_1c0 == (undefined4 *)0x0 || local_1c8 == (undefined4 *)0x0) ||
                    local_1b8 == (undefined4 *)0x0) {
                  if ((local_1c8 == (undefined4 *)0x0 && puStack_1c0 == (undefined4 *)0x0) &&
                      local_1b8 == (undefined4 *)0x0) {
                    if (local_438 != (longlong *)0x0) {
                      uVar22 = *(undefined4 *)CONCAT44(local_1e8._4_4_,(int)local_1e8);
                      iVar19 = (int)local_438[3];
                      *(uint *)(local_438 + 3) = iVar19 + 1U;
                      if (*(uint *)((longlong)local_438 + 0x1c) < iVar19 + 1U) {
                        FUN_1447808da(local_3d0,iVar19);
                      }
                      *(undefined4 *)(plVar42[2] + (longlong)iVar19 * 4) = uVar22;
                      uVar22 = *local_1e0;
                      iVar19 = (int)plVar42[3];
                      *(uint *)(plVar42 + 3) = iVar19 + 1U;
                      if (*(uint *)((longlong)plVar42 + 0x1c) < iVar19 + 1U) {
                        FUN_1447808da(plVar15,iVar19);
                      }
                      *(undefined4 *)(plVar42[2] + (longlong)iVar19 * 4) = uVar22;
                      uVar22 = *local_1d8;
                      uVar21 = *(uint *)(plVar42 + 3);
                      *(uint *)(plVar42 + 3) = uVar21 + 1;
                      if (*(uint *)((longlong)plVar42 + 0x1c) < uVar21 + 1) {
                        FUN_1447808da(plVar15,uVar21);
                      }
                      lVar23 = *plVar15;
                      goto LAB_14820fd5d;
                    }
                    goto LAB_14820fd60;
                  }
                  local_214[0] = *(float *)(local_378 + (longlong)(int)local_1a8 * 4);
                  local_1a8._4_4_ = (int)((ulonglong)local_1a8 >> 0x20);
                  local_214[1] = (float)*(undefined4 *)(local_378 + (longlong)local_1a8._4_4_ * 4);
                  local_214[2] = (float)*(undefined4 *)(local_378 + (longlong)local_1a0 * 4);
                  uVar39 = 0;
                  uVar21 = 0;
                  iVar19 = 0;
                  uVar36 = 0;
                  local_1a8 = uVar24;
                  do {
                    if ((&local_1c8)[uVar36] == (int *)0x0) {
                      if (cVar30 != '\0') {
                        lVar23 = (longlong)(int)uVar21;
                        uVar21 = uVar21 + 1;
                        (&local_208)[lVar23] = *(int *)(&local_1e8)[uVar36];
                      }
                      uVar43 = (ulonglong)((int)uVar36 + 1);
                      uVar27 = uVar43;
                      if (uVar36 == 2) {
                        uVar27 = 0;
                      }
                      if ((&local_1c8)[uVar27] != (undefined4 *)0x0) goto LAB_14820fefe;
                    }
                    else {
                      lVar23 = (longlong)(int)uVar39;
                      uVar39 = uVar39 + 1;
                      (&local_208)[lVar23 + 4] = *(&local_1c8)[uVar36];
                      uVar43 = (ulonglong)((int)uVar36 + 1);
                      uVar27 = uVar43;
                      if (uVar36 == 2) {
                        uVar27 = 0;
                      }
                      if ((&local_1c8)[uVar27] == (undefined4 *)0x0) {
LAB_14820fefe:
                        fVar49 = -local_214[uVar36] / (local_214[uVar27] - local_214[uVar36]);
                        if (1.0 <= fVar49) {
                          fVar49 = 1.0;
                        }
                        if (fVar49 <= 0.0) {
                          fVar49 = 0.0;
                        }
                        FUN_148211474(&local_2b8,
                                      (longlong)*(int *)((longlong)&local_1a8 + uVar36 * 4) * 0x98 +
                                      *plVar41,(longlong)*(int *)((longlong)&local_1a8 + uVar27 * 4)
                                               * 0x98 + *plVar41,fVar49);
                        uVar36 = uStack_360;
                        iVar4 = (int)uStack_360;
                        uVar20 = (int)uStack_360 + 1;
                        uStack_360 = CONCAT44(uStack_360._4_4_,uVar20);
                        if (uStack_360._4_4_ < uVar20) {
                          FUN_14183c640(&local_368,uVar36 & 0xffffffff);
                        }
                        memcpy((void *)((longlong)iVar4 * 0x98 + (longlong)local_368),&local_2b8,
                               0x98);
                        plVar40 = local_438;
                        if (local_318 == '\0') {
                          uStack_320 = (undefined2)local_2a8;
                          uStack_31e = (undefined6)(CONCAT44(uStack_2a4,local_2a8) >> 0x10);
                          puStack_330 = local_2b8;
                          local_328 = uStack_2b0;
                          local_338 = (double)CONCAT44(uStack_2a4,local_2a8);
                          local_348 = local_2b8;
                          piStack_340 = uStack_2b0;
                          local_318 = '\x01';
                        }
                        else {
                          uVar22 = (int)local_348;
                          uVar46 = (int)((ulonglong)local_348 >> 0x20);
                          if ((double)local_2b8 <= (double)local_348) {
                            uVar22 = (undefined4)local_2b8;
                            uVar46 = local_2b8._4_4_;
                          }
                          local_348 = (undefined8 *)CONCAT44(uVar46,uVar22);
                          uVar22 = (int)piStack_340;
                          uVar46 = (int)((ulonglong)piStack_340 >> 0x20);
                          if ((double)uStack_2b0 <= (double)piStack_340) {
                            uVar22 = (int)uStack_2b0;
                            uVar46 = uStack_2b0._4_4_;
                          }
                          piStack_340 = (int *)CONCAT44(uVar46,uVar22);
                          uVar22 = SUB84(local_338,0);
                          uVar20 = (uint)((ulonglong)local_338 >> 0x20);
                          if ((double)CONCAT44(uStack_2a4,local_2a8) <= local_338) {
                            uVar22 = local_2a8;
                            uVar20 = uStack_2a4;
                          }
                          local_338 = (double)CONCAT44(uVar20,uVar22);
                          uVar22 = (int)puStack_330;
                          uVar46 = (int)((ulonglong)puStack_330 >> 0x20);
                          if ((double)puStack_330 <= (double)local_2b8) {
                            uVar22 = (undefined4)local_2b8;
                            uVar46 = local_2b8._4_4_;
                          }
                          puStack_330 = (undefined8 *)CONCAT44(uVar46,uVar22);
                          uVar22 = (int)local_328;
                          uVar46 = (int)((ulonglong)local_328 >> 0x20);
                          if ((double)local_328 <= (double)uStack_2b0) {
                            uVar22 = (int)uStack_2b0;
                            uVar46 = uStack_2b0._4_4_;
                          }
                          local_328 = (int *)CONCAT44(uVar46,uVar22);
                          uVar22 = (int)CONCAT62(uStack_31e,uStack_320);
                          uVar20 = (uint)((uint6)uStack_31e >> 0x10);
                          if ((double)CONCAT62(uStack_31e,uStack_320) <=
                              (double)CONCAT44(uStack_2a4,local_2a8)) {
                            uVar22 = local_2a8;
                            uVar20 = uStack_2a4;
                          }
                          uStack_320 = (undefined2)uVar22;
                          uStack_31e = (undefined6)(CONCAT44(uVar20,uVar22) >> 0x10);
                        }
                        (&local_208)[(longlong)(int)uVar39 + 4] = iVar4;
                        local_40c = iVar19;
                        if (local_438 != (longlong *)0x0) {
                          iVar19 = (int)local_438[1];
                          *(uint *)(local_438 + 1) = iVar19 + 1U;
                          if (*(uint *)((longlong)local_438 + 0xc) < iVar19 + 1U) {
                            FUN_14183c640(local_438,iVar19);
                          }
                          memcpy((void *)((longlong)iVar19 * 0x98 + *plVar40),&local_2b8,0x98);
                          if ((char)plVar40[10] == '\0') {
                            local_3c8[2] = CONCAT44(uStack_2a4,local_2a8);
                            *local_3c8 = (longlong)local_2b8;
                            local_3c8[1] = (longlong)uStack_2b0;
                            local_3c0[2] = CONCAT44(uStack_2a4,local_2a8);
                            *local_3c0 = (longlong)local_2b8;
                            local_3c0[1] = (longlong)uStack_2b0;
                            *(undefined1 *)(plVar40 + 10) = 1;
                          }
                          else {
                            dVar59 = (double)plVar40[4];
                            dVar64 = (double)plVar40[5];
                            uVar45 = (undefined4)((ulonglong)local_2b8 >> 0x20);
                            uVar22 = SUB84(dVar59,0);
                            uVar46 = (int)((ulonglong)dVar59 >> 0x20);
                            if ((double)local_2b8 <= dVar59) {
                              uVar22 = (int)local_2b8;
                              uVar46 = uVar45;
                            }
                            plVar40[4] = CONCAT44(uVar46,uVar22);
                            uVar48 = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
                            uVar22 = SUB84(dVar64,0);
                            uVar46 = (int)((ulonglong)dVar64 >> 0x20);
                            if ((double)uStack_2b0 <= dVar64) {
                              uVar22 = (int)uStack_2b0;
                              uVar46 = uVar48;
                            }
                            plVar40[5] = CONCAT44(uVar46,uVar22);
                            dVar59 = (double)plVar40[6];
                            uVar22 = SUB84(dVar59,0);
                            uVar20 = (uint)((ulonglong)dVar59 >> 0x20);
                            if ((double)CONCAT44(uStack_2a4,local_2a8) <= dVar59) {
                              uVar22 = local_2a8;
                              uVar20 = uStack_2a4;
                            }
                            plVar40[6] = CONCAT44(uVar20,uVar22);
                            dVar59 = (double)plVar40[7];
                            uVar22 = SUB84(dVar59,0);
                            uVar46 = (int)((ulonglong)dVar59 >> 0x20);
                            if (dVar59 <= (double)local_2b8) {
                              uVar22 = (int)local_2b8;
                              uVar46 = uVar45;
                            }
                            plVar40[7] = CONCAT44(uVar46,uVar22);
                            dVar59 = (double)plVar40[8];
                            uVar22 = SUB84(dVar59,0);
                            uVar46 = (int)((ulonglong)dVar59 >> 0x20);
                            if (dVar59 <= (double)uStack_2b0) {
                              uVar22 = (int)uStack_2b0;
                              uVar46 = uVar48;
                            }
                            plVar40[8] = CONCAT44(uVar46,uVar22);
                            dVar59 = (double)plVar40[9];
                            uVar22 = SUB84(dVar59,0);
                            uVar20 = (uint)((ulonglong)dVar59 >> 0x20);
                            if (dVar59 <= (double)CONCAT44(uStack_2a4,local_2a8)) {
                              uVar22 = local_2a8;
                              uVar20 = uStack_2a4;
                            }
                            plVar40[9] = CONCAT44(uVar20,uVar22);
                          }
                          lVar23 = (longlong)(int)uVar21;
                          uVar21 = uVar21 + 1;
                          (&local_208)[lVar23] = iVar19;
                        }
                        fVar49 = (float)(double)CONCAT44(uStack_2a4,local_2a8);
                        if (local_40c == 0) {
                          auVar63 = ZEXT416((uint)(float)(double)uStack_2b0);
                          fVar56 = (float)(double)local_2b8;
                        }
                        else {
                          auVar58 = ZEXT416((uint)(float)(double)uStack_2b0);
                          auVar55 = ZEXT416((uint)fVar49);
                          fVar60 = (float)(double)local_2b8;
                          fVar49 = fVar61;
                        }
                        uVar39 = uVar39 + 1;
                        iVar19 = local_40c + 1;
                        fVar61 = fVar49;
                      }
                    }
                    iVar4 = aiStack_200[2];
                    uVar36 = uVar43;
                  } while ((uint)uVar43 < 3);
                  if (2 < (int)uVar39) {
                    uVar36 = 2;
                    do {
                      lVar23 = (longlong)(int)(uint)uStack_350;
                      uVar20 = (uint)uStack_350 + 1;
                      if (uStack_350._4_4_ < uVar20) {
                        uVar27 = uStack_350 & 0xffffffff;
                        uStack_350._0_4_ = uVar20;
                        FUN_1447808da(&local_358,uVar27);
                        uVar20 = (uint)uStack_350;
                      }
                      uStack_350._0_4_ = uVar20;
                      uVar20 = (uint)uStack_350;
                      *(int *)(local_358 + lVar23 * 4) = iVar4;
                      iVar3 = (&local_208)[uVar36 + 3];
                      lVar23 = (longlong)(int)(uint)uStack_350;
                      uStack_350._0_4_ = (uint)uStack_350 + 1;
                      if (uStack_350._4_4_ < (uint)uStack_350) {
                        FUN_1447808da(&local_358,uVar20);
                      }
                      uVar20 = (uint)uStack_350;
                      *(int *)(local_358 + lVar23 * 4) = iVar3;
                      iVar3 = (&local_208)[uVar36 + 4];
                      lVar23 = (longlong)(int)(uint)uStack_350;
                      uStack_350._0_4_ = (uint)uStack_350 + 1;
                      if (uStack_350._4_4_ < (uint)uStack_350) {
                        FUN_1447808da(&local_358,uVar20);
                      }
                      *(int *)(local_358 + lVar23 * 4) = iVar3;
                      uVar36 = uVar36 + 1;
                    } while (uVar39 != uVar36);
                  }
                  plVar40 = local_3d0;
                  plVar41 = local_3f0;
                  plVar42 = local_438;
                  if ((local_438 != (longlong *)0x0) && (2 < (int)uVar21)) {
                    uVar36 = 2;
                    do {
                      iVar3 = local_208;
                      iVar4 = (int)plVar42[3];
                      *(uint *)(plVar42 + 3) = iVar4 + 1U;
                      if (*(uint *)((longlong)plVar42 + 0x1c) < iVar4 + 1U) {
                        FUN_1447808da(plVar40,iVar4);
                      }
                      *(int *)(plVar42[2] + (longlong)iVar4 * 4) = iVar3;
                      fVar49 = local_214[uVar36 + 2];
                      iVar4 = (int)plVar42[3];
                      *(uint *)(plVar42 + 3) = iVar4 + 1U;
                      if (*(uint *)((longlong)plVar42 + 0x1c) < iVar4 + 1U) {
                        FUN_1447808da(plVar40,iVar4);
                      }
                      *(float *)(plVar42[2] + (longlong)iVar4 * 4) = fVar49;
                      iVar4 = (&local_208)[uVar36];
                      iVar3 = (int)plVar42[3];
                      *(uint *)(plVar42 + 3) = iVar3 + 1U;
                      if (*(uint *)((longlong)plVar42 + 0x1c) < iVar3 + 1U) {
                        FUN_1447808da(plVar40,iVar3);
                      }
                      *(int *)(*plVar40 + (longlong)iVar3 * 4) = iVar4;
                      uVar36 = uVar36 + 1;
                    } while (uVar21 != uVar36);
                  }
                  uVar36 = uStack_300;
                  lVar23 = local_408._0_8_;
                  if (iVar19 == 2) {
                    lVar31 = (longlong)(int)uStack_300;
                    uVar21 = (int)uStack_300 + 1;
                    uStack_300 = CONCAT44(uStack_300._4_4_,uVar21);
                    if (uStack_300._4_4_ < uVar21) {
                      FUN_147ae0b24(&local_308,uVar36 & 0xffffffff);
                    }
                    *(float *)(local_308 + lVar31 * 0x18) = fVar56;
                    *(int *)(local_308 + 4 + lVar31 * 0x18) = auVar63._0_4_;
                    *(float *)(local_308 + 8 + lVar31 * 0x18) = fVar61;
                    *(float *)(local_308 + 0xc + lVar31 * 0x18) = fVar60;
                    *(int *)(local_308 + 0x10 + lVar31 * 0x18) = auVar58._0_4_;
                    *(int *)(local_308 + 0x14 + lVar31 * 0x18) = auVar55._0_4_;
                  }
                }
                else {
                  uVar22 = *local_1c8;
                  lVar23 = (longlong)(int)(uint)uStack_350;
                  uVar21 = (uint)uStack_350 + 1;
                  if (uStack_350._4_4_ < uVar21) {
                    uVar36 = uStack_350 & 0xffffffff;
                    uStack_350._0_4_ = uVar21;
                    FUN_1447808da(&local_358,uVar36);
                    uVar21 = (uint)uStack_350;
                  }
                  uStack_350._0_4_ = uVar21;
                  uVar21 = (uint)uStack_350;
                  *(undefined4 *)(local_358 + lVar23 * 4) = uVar22;
                  uVar22 = *puVar44;
                  lVar23 = (longlong)(int)(uint)uStack_350;
                  uStack_350._0_4_ = (uint)uStack_350 + 1;
                  if (uStack_350._4_4_ < (uint)uStack_350) {
                    FUN_1447808da(&local_358,uVar21);
                  }
                  uVar21 = (uint)uStack_350;
                  *(undefined4 *)(local_358 + lVar23 * 4) = uVar22;
                  uVar22 = *puVar18;
                  uStack_350._0_4_ = (uint)uStack_350 + 1;
                  lVar23 = local_358;
                  if (uStack_350._4_4_ < (uint)uStack_350) {
                    FUN_1447808da(&local_358,uVar21);
                    lVar23 = local_358;
                  }
LAB_14820fd5d:
                  *(undefined4 *)(lVar23 + (longlong)(int)uVar21 * 4) = uVar22;
LAB_14820fd60:
                  lVar23 = local_408._0_8_;
                }
                lVar31 = local_3e8._0_8_ + 3;
                lVar23 = lVar23 + 1;
                plVar40 = plVar41;
              } while ((int)lVar31 < (int)plVar41[3]);
            }
            if ((plVar42 != (longlong *)0x0) && (((int)plVar42[3] == 0 || ((int)plVar42[1] == 0))))
            {
              FUN_14821522a(&local_2e8,(int)uStack_2e0 + -1);
              FUN_148215294(&local_2e8);
            }
            if (((int)(uint)uStack_350 < 1) || ((int)uStack_360 < 1)) {
              FUN_1482121b4(local_440);
            }
            else {
              FUN_148212200(local_440,local_430,&local_368);
            }
            if (local_378 != 0) {
              FUN_1400020a8();
            }
            local_150 = 0;
            if (local_158 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a6bfa8(&local_198);
            local_100 = 0;
            if (local_108 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_144a6bfa8(&local_148);
            if (local_358 != 0) {
              FUN_1400020a8();
            }
            lVar23 = local_430;
            param_1 = local_440;
            if (local_368 != (void *)0x0) {
              FUN_1400020a8();
              lVar23 = local_430;
              param_1 = local_440;
            }
          }
        }
      }
      lVar23 = lVar23 + 1;
      iVar19 = (int)param_1[0xce];
    } while (lVar23 < iVar19);
    uVar17 = local_398._0_8_;
    uVar16 = local_3a8._0_8_;
    uVar24 = local_3b8._0_8_;
    if ((param_6 != '\0') && (0 < (int)uStack_300)) {
      uStack_316 = CONCAT26(0x100,(undefined6)uStack_316);
      local_368 = (void *)0x0;
      uStack_360 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_348 = (undefined8 *)0x0;
      piStack_340 = (int *)0x0;
      local_338 = 0.0;
      puStack_330 = (undefined8 *)0x0;
      local_328 = (int *)0x0;
      uStack_320 = 0;
      uStack_31e = 0;
      local_318 = '\0';
      if (param_6 == '\x02') {
        lVar31 = (longlong)iVar19 + -1;
        lVar23 = local_440[0xcd];
        lVar37 = lVar31 * 0x60;
        FUN_148213db6(&local_368,lVar23 + lVar37);
        lVar37 = lVar37 + lVar23;
        FUN_1447bdc4c(&local_358,lVar37 + 0x10);
        local_348 = *(undefined8 **)(lVar37 + 0x20);
        piStack_340 = *(int **)(lVar37 + 0x28);
        local_338 = *(double *)(lVar37 + 0x30);
        puStack_330 = *(undefined8 **)(lVar37 + 0x38);
        local_328 = *(int **)(lVar37 + 0x40);
        uVar14 = *(undefined8 *)(lVar37 + 0x4a);
        uStack_316 = *(undefined8 *)(lVar37 + 0x52);
        uStack_320 = (undefined2)*(undefined8 *)(lVar37 + 0x48);
        uStack_31e = (undefined6)uVar14;
        local_318 = (char)((ulonglong)uVar14 >> 0x30);
        uStack_317 = (undefined1)((ulonglong)uVar14 >> 0x38);
        iVar19 = (int)lVar31;
      }
      local_198 = (void *)0x0;
      uStack_190 = 0;
      local_2b8 = (undefined8 *)0x0;
      uStack_2b0 = (int *)0x0;
      FUN_147ad7552(&local_198,&local_2a8,&local_308,local_2d8);
      local_148 = (void *)CONCAT44(local_148._4_4_,0xffffffff);
      FUN_147ad77d8(&local_2b8,&local_198);
      local_408._0_8_ = (longlong)(int)uStack_360;
      iVar4 = (uint)uStack_350;
      lVar23 = (longlong)(int)(uint)uStack_350;
      if (0 < (int)uStack_2b0) {
        lVar31 = 0;
        lVar37 = 0;
        do {
          FUN_147ad8348((longlong)local_2b8 + lVar31,0x42800000);
          uVar36 = uStack_360 & 0xffffffff;
          FUN_1482116ee((longlong)local_2b8 + lVar31,&local_2a8,&local_368,&local_348);
          local_148 = (void *)CONCAT44((float)(double)uVar24,(float)(double)uVar16);
          uStack_140 = CONCAT44(uStack_140._4_4_,(float)(double)uVar17);
          FUN_148211b0c(&local_358,&local_368,uVar36,&local_148);
          lVar37 = lVar37 + 1;
          lVar31 = lVar31 + 0x10;
        } while (lVar37 < (int)uStack_2b0);
      }
      plVar40 = local_440;
      FUN_148212200(local_440,iVar19,&local_368);
      if (param_6 == '\x01') {
        (**(code **)(*plVar40 + 0x638))(plVar40,iVar19,param_7);
        uVar36 = uStack_2e0;
        if (local_428 != '\0') {
          lVar31 = (longlong)(int)uStack_2e0;
          uVar21 = (int)uStack_2e0 + 1;
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar21);
          if (uStack_2e0._4_4_ < uVar21) {
            FUN_140de956e(&local_2e8,uVar36 & 0xffffffff);
          }
          uVar36 = uStack_2f0;
          lVar31 = lVar31 * 0x60;
          puVar1 = (undefined8 *)(local_2e8 + 0x40 + lVar31);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(local_2e8 + 0x30 + lVar31);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(local_2e8 + 0x20 + lVar31);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(local_2e8 + 0x10 + lVar31);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(local_2e8 + lVar31) = 0;
          ((undefined8 *)(local_2e8 + lVar31))[1] = 0;
          *(undefined1 *)(local_2e8 + 0x50 + lVar31) = 0;
          *(undefined2 *)(local_2e8 + 0x58 + lVar31) = 0x100;
          lVar31 = (longlong)(int)uStack_2f0;
          uVar21 = (int)uStack_2f0 + 1;
          uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar21);
          if (uStack_2f0._4_4_ < uVar21) {
            FUN_144769b64(&local_2f8,uVar36 & 0xffffffff);
          }
          *(undefined8 *)(local_2f8 + lVar31 * 8) = param_7;
LAB_148210872:
          lVar31 = (longlong)((int)uStack_2e0 + -1) * 0x60;
          plVar40 = (longlong *)(local_2e8 + lVar31);
          iVar19 = *(int *)(local_2e8 + 8 + lVar31);
          if (local_408._0_4_ < (int)uStack_360) {
            local_3e8._0_8_ = plVar40 + 7;
            lVar37 = local_408._0_8_ * 0x98 + 0x48;
            lVar31 = local_408._0_8_;
            do {
              dVar59 = *(double *)((longlong)local_368 + lVar37 + -0x48);
              uVar46 = (undefined4)((ulonglong)dVar59 >> 0x20);
              dVar64 = *(double *)((longlong)local_368 + lVar37 + -0x40);
              dVar5 = *(double *)((longlong)local_368 + lVar37 + -0x38);
              uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
              dVar6 = *(double *)((longlong)local_368 + lVar37 + -0x30);
              dVar7 = *(double *)((longlong)local_368 + lVar37 + -0x28);
              dVar8 = *(double *)((longlong)local_368 + lVar37 + -0x20);
              dVar54 = *(double *)((longlong)local_368 + lVar37 + -0x18);
              dVar9 = *(double *)((longlong)local_368 + lVar37 + -0x10);
              dVar57 = *(double *)((longlong)local_368 + lVar37 + -8);
              pdVar34 = (double *)((longlong)local_368 + lVar37);
              pdVar35 = (double *)&local_148;
              for (lVar28 = 10; lVar28 != 0; lVar28 = lVar28 + -1) {
                *pdVar35 = *pdVar34;
                pdVar34 = pdVar34 + 1;
                pdVar35 = pdVar35 + 1;
              }
              iVar3 = (int)plVar40[1];
              *(uint *)(plVar40 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)plVar40 + 0xc) < iVar3 + 1U) {
                FUN_14183c640(plVar40,iVar3);
              }
              pdVar34 = (double *)(*plVar40 + (longlong)iVar3 * 0x98);
              *pdVar34 = dVar59;
              pdVar34[1] = dVar64;
              pdVar34[2] = dVar5;
              pdVar34[3] = -dVar6;
              pdVar34[4] = -dVar7;
              pdVar34[5] = -dVar8;
              pdVar34[6] = -dVar54;
              pdVar34[7] = -dVar9;
              pdVar34[8] = -dVar57;
              pdVar35 = (double *)&local_148;
              pdVar34 = pdVar34 + 9;
              for (lVar28 = 10; lVar28 != 0; lVar28 = lVar28 + -1) {
                *pdVar34 = *pdVar35;
                pdVar35 = pdVar35 + 1;
                pdVar34 = pdVar34 + 1;
              }
              if ((char)plVar40[10] == '\0') {
                plVar40[7] = (longlong)dVar59;
                plVar40[8] = (longlong)dVar64;
                plVar40[9] = (longlong)dVar5;
                plVar40[6] = *(longlong *)(local_3e8._0_8_ + 0x10);
                uVar22 = *(undefined4 *)(local_3e8._0_8_ + 4);
                uVar46 = *(undefined4 *)(local_3e8._0_8_ + 8);
                uVar45 = *(undefined4 *)(local_3e8._0_8_ + 0xc);
                *(undefined4 *)(plVar40 + 4) = *(undefined4 *)local_3e8._0_8_;
                *(undefined4 *)((longlong)plVar40 + 0x24) = uVar22;
                *(undefined4 *)(plVar40 + 5) = uVar46;
                *(undefined4 *)((longlong)plVar40 + 0x2c) = uVar45;
                *(undefined1 *)(plVar40 + 10) = 1;
              }
              else {
                dVar6 = (double)plVar40[4];
                dVar7 = (double)plVar40[5];
                uVar45 = SUB84(dVar6,0);
                uVar48 = (int)((ulonglong)dVar6 >> 0x20);
                if (dVar59 <= dVar6) {
                  uVar45 = SUB84(dVar59,0);
                  uVar48 = uVar46;
                }
                plVar40[4] = CONCAT44(uVar48,uVar45);
                uVar47 = (undefined4)((ulonglong)dVar64 >> 0x20);
                uVar45 = SUB84(dVar7,0);
                uVar48 = (int)((ulonglong)dVar7 >> 0x20);
                if (dVar64 <= dVar7) {
                  uVar45 = SUB84(dVar64,0);
                  uVar48 = uVar47;
                }
                plVar40[5] = CONCAT44(uVar48,uVar45);
                dVar6 = (double)plVar40[6];
                uVar45 = SUB84(dVar6,0);
                uVar48 = (int)((ulonglong)dVar6 >> 0x20);
                if (dVar5 <= dVar6) {
                  uVar45 = SUB84(dVar5,0);
                  uVar48 = uVar22;
                }
                plVar40[6] = CONCAT44(uVar48,uVar45);
                dVar6 = (double)plVar40[7];
                uVar45 = SUB84(dVar6,0);
                uVar48 = (int)((ulonglong)dVar6 >> 0x20);
                if (dVar6 <= dVar59) {
                  uVar45 = SUB84(dVar59,0);
                  uVar48 = uVar46;
                }
                plVar40[7] = CONCAT44(uVar48,uVar45);
                dVar59 = (double)plVar40[8];
                uVar46 = SUB84(dVar59,0);
                uVar45 = (int)((ulonglong)dVar59 >> 0x20);
                if (dVar59 <= dVar64) {
                  uVar46 = SUB84(dVar64,0);
                  uVar45 = uVar47;
                }
                plVar40[8] = CONCAT44(uVar45,uVar46);
                dVar59 = (double)plVar40[9];
                uVar46 = SUB84(dVar59,0);
                uVar45 = (int)((ulonglong)dVar59 >> 0x20);
                if (dVar59 <= dVar5) {
                  uVar46 = SUB84(dVar5,0);
                  uVar45 = uVar22;
                }
                plVar40[9] = CONCAT44(uVar45,uVar46);
              }
              lVar31 = lVar31 + 1;
              lVar37 = lVar37 + 0x98;
            } while (lVar31 < (int)uStack_360);
          }
          if (iVar4 < (int)(uint)uStack_350) {
            iVar19 = iVar19 - local_408._0_4_;
            plVar42 = plVar40 + 2;
            do {
              iVar4 = *(int *)(local_358 + lVar23 * 4);
              iVar3 = (int)plVar40[3];
              *(uint *)(plVar40 + 3) = iVar3 + 1U;
              if (*(uint *)((longlong)plVar40 + 0x1c) < iVar3 + 1U) {
                FUN_1447808da(plVar42,iVar3);
              }
              *(int *)(plVar40[2] + (longlong)iVar3 * 4) = iVar4 + iVar19;
              iVar4 = *(int *)(local_358 + 8 + lVar23 * 4);
              iVar3 = (int)plVar40[3];
              *(uint *)(plVar40 + 3) = iVar3 + 1U;
              if (*(uint *)((longlong)plVar40 + 0x1c) < iVar3 + 1U) {
                FUN_1447808da(plVar42,iVar3);
              }
              *(int *)(plVar40[2] + (longlong)iVar3 * 4) = iVar4 + iVar19;
              iVar4 = *(int *)(local_358 + 4 + lVar23 * 4);
              iVar3 = (int)plVar40[3];
              *(uint *)(plVar40 + 3) = iVar3 + 1U;
              if (*(uint *)((longlong)plVar40 + 0x1c) < iVar3 + 1U) {
                FUN_1447808da(plVar42,iVar3);
              }
              *(int *)(*plVar42 + (longlong)iVar3 * 4) = iVar4 + iVar19;
              lVar23 = lVar23 + 3;
            } while (lVar23 < (int)(uint)uStack_350);
          }
        }
      }
      else if (local_428 != '\0') goto LAB_148210872;
      FUN_147ae0e3d(local_2b8,(ulonglong)uStack_2b0 & 0xffffffff);
      if (local_2b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_198 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_358 != 0) {
        FUN_1400020a8();
      }
      param_1 = local_440;
      if (local_368 != (void *)0x0) {
        FUN_1400020a8();
        param_1 = local_440;
      }
    }
  }
  local_368 = (void *)0x0;
  uStack_360 = 0;
  local_148 = (void *)0x0;
  uStack_140 = 0;
  lVar23 = (**(code **)(*param_1 + 0x7a0))();
  if (0 < *(int *)(lVar23 + 0x70)) {
    lVar31 = 0;
    lVar37 = 0;
    do {
      uVar27 = uStack_140;
      uVar36 = uStack_360;
      lVar28 = *(longlong *)(lVar23 + 0x68);
      dVar59 = *(double *)(lVar28 + 0x50 + lVar31);
      dVar64 = *(double *)(lVar28 + 0x58 + lVar31);
      dVar5 = *(double *)(lVar28 + 0x60 + lVar31);
      dVar6 = (*(double *)(lVar28 + 0x78 + lVar31) - dVar5) * 0.5;
      dVar7 = (*(double *)(lVar28 + 0x70 + lVar31) - dVar64) * 0.5;
      dVar8 = (*(double *)(lVar28 + 0x68 + lVar31) - dVar59) * 0.5;
      dVar59 = ((dVar5 + dVar6) * local_2c8 +
               (dVar59 + dVar8) * (double)local_2d8._0_8_ +
               (dVar64 + dVar7) * (double)local_2d8._8_8_) - dStack_2c0;
      dVar64 = ABS(dVar6 * local_2c8) +
               ABS(dVar7 * (double)local_2d8._8_8_) + ABS(dVar8 * (double)local_2d8._0_8_);
      iVar19 = -(uint)(dVar59 < -dVar64);
      if (dVar64 < dVar59) {
        iVar19 = 1;
      }
      if (iVar19 == 1) {
        iVar19 = (int)uStack_360;
        uVar21 = (int)uStack_360 + 1;
        uStack_360 = CONCAT44(uStack_360._4_4_,uVar21);
        pvVar25 = local_368;
        if (uStack_360._4_4_ < uVar21) {
          FUN_147c64112(&local_368,uVar36 & 0xffffffff);
          pvVar25 = local_368;
        }
LAB_148210d2b:
        lVar32 = (longlong)iVar19 * 0x10;
        puVar1 = (undefined8 *)((longlong)pvVar25 + lVar32);
        *(undefined8 *)((longlong)pvVar25 + lVar32) = 0;
        iVar19 = *(int *)(lVar28 + 0x38 + lVar31);
        _Src = *(void **)(lVar28 + 0x30 + lVar31);
        *(int *)((longlong)pvVar25 + lVar32 + 8) = iVar19;
        if ((longlong)iVar19 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1405b70fe(puVar1,iVar19,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar19 * 0x18);
        }
      }
      else {
        cVar30 = local_428;
        if (iVar19 == -1) {
          if (local_428 != '\0') {
            iVar19 = (int)uStack_140;
            uVar21 = (int)uStack_140 + 1;
            uStack_140 = CONCAT44(uStack_140._4_4_,uVar21);
            pvVar25 = local_148;
            if (uStack_140._4_4_ < uVar21) {
              FUN_147c64112(&local_148,uVar27 & 0xffffffff);
              pvVar25 = local_148;
            }
            goto LAB_148210d2b;
          }
        }
        else {
          local_198 = (void *)0x0;
          uStack_190 = 0;
          FUN_148211ff9(lVar28 + lVar31,local_2d8,&local_198);
          uVar36 = uStack_360;
          if (3 < (int)uStack_190) {
            lVar32 = (longlong)(int)uStack_360;
            uVar21 = (int)uStack_360 + 1;
            uStack_360 = CONCAT44(uStack_360._4_4_,uVar21);
            if (uStack_360._4_4_ < uVar21) {
              FUN_147c64112(&local_368,uVar36 & 0xffffffff);
            }
            pvVar25 = local_198;
            lVar32 = lVar32 * 0x10;
            puVar1 = (undefined8 *)((longlong)local_368 + lVar32);
            *(undefined8 *)((longlong)local_368 + lVar32) = 0;
            lVar38 = (longlong)(int)uStack_190;
            *(int *)((longlong)local_368 + lVar32 + 8) = (int)uStack_190;
            if (lVar38 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_1405b70fe(puVar1,uStack_190 & 0xffffffff,0);
              memcpy((void *)*puVar1,pvVar25,lVar38 * 0x18);
            }
            cVar30 = local_428;
          }
          if (cVar30 != '\0') {
            local_1c8 = (undefined4 *)0x0;
            puStack_1c0 = (undefined4 *)0x0;
            local_2b8 = (undefined8 *)(local_2d8._0_8_ ^ 0x8000000000000000);
            uStack_2b0 = (int *)(local_2d8._8_8_ ^ 0x8000000000000000);
            uStack_2a4 = local_2c8._4_4_ ^ 0x80000000;
            uStack_29c = (uint)((ulonglong)dStack_2c0 >> 0x20) ^ 0x80000000;
            uStack_2a0 = SUB84(dStack_2c0,0);
            local_2a8 = (undefined4)local_2c8;
            FUN_148211ff9(lVar28 + lVar31,&local_2b8,&local_1c8);
            uVar36 = uStack_140;
            if (3 < (int)puStack_1c0) {
              lVar28 = (longlong)(int)uStack_140;
              uVar21 = (int)uStack_140 + 1;
              uStack_140 = CONCAT44(uStack_140._4_4_,uVar21);
              if (uStack_140._4_4_ < uVar21) {
                FUN_147c64112(&local_148,uVar36 & 0xffffffff);
              }
              puVar44 = local_1c8;
              lVar28 = lVar28 * 0x10;
              puVar1 = (undefined8 *)((longlong)local_148 + lVar28);
              *(undefined8 *)((longlong)local_148 + lVar28) = 0;
              lVar32 = (longlong)(int)puStack_1c0;
              *(int *)((longlong)local_148 + lVar28 + 8) = (int)puStack_1c0;
              if (lVar32 == 0) {
                *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
              }
              else {
                FUN_1405b70fe(puVar1,(ulonglong)puStack_1c0 & 0xffffffff,0);
                memcpy((void *)*puVar1,puVar44,lVar32 * 0x18);
              }
            }
            if (local_1c8 != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
          }
          if (local_198 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar37 = lVar37 + 1;
      lVar31 = lVar31 + 0x100;
    } while (lVar37 < *(int *)(lVar23 + 0x70));
  }
  plVar40 = local_440;
  FUN_14821229a(local_440,&local_368);
  if (local_428 != '\0') {
    lVar23 = FUN_14821240d(plVar40[4]);
    *param_5 = lVar23;
    local_448 = 0;
    FUN_140613f88(lVar23,plVar40 + 0x48,0,0);
    if (0 < (int)uStack_2e0) {
      lVar23 = 0;
      uVar36 = 0;
      do {
        FUN_148212200(*param_5,uVar36 & 0xffffffff,local_2e8 + lVar23);
        (**(code **)(*(longlong *)*param_5 + 0x638))
                  ((longlong *)*param_5,uVar36 & 0xffffffff,*(undefined8 *)(local_2f8 + uVar36 * 8))
        ;
        uVar36 = uVar36 + 1;
        lVar23 = lVar23 + 0x60;
      } while ((longlong)uVar36 < (longlong)(int)uStack_2e0);
    }
    plVar42 = local_440;
    plVar40 = (longlong *)*param_5;
    FUN_1406900ce(local_440,&local_380);
    (**(code **)(*plVar40 + 0x728))(plVar40,local_380,1);
    plVar40 = (longlong *)*param_5;
    uVar22 = (**(code **)(*plVar42 + 0x570))(plVar42);
    (**(code **)(*plVar40 + 0x720))(plVar40,uVar22);
    *(char *)(*param_5 + 0x658) = (char)plVar42[0xcb];
    FUN_14821229a(*param_5,&local_148);
    FUN_140b506a4(*param_5);
  }
  FUN_140627eac(local_148,uStack_140 & 0xffffffff);
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140627eac(local_368,uStack_360 & 0xffffffff);
  if (local_368 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140b2f4f1(local_2e8,uStack_2e0 & 0xffffffff);
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
LAB_14820efe8:
  if ((local_f0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14821116e FUN_14821116e body=286 status=ok
// SIG undefined FUN_14821116e(void)

void FUN_14821116e(int param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = (int)param_2[1];
  if ((param_1 < iVar5) && (0 < iVar5)) {
    lVar7 = *param_2;
    lVar6 = (longlong)param_1;
    dVar1 = *(double *)(lVar7 + lVar6 * 0x18);
    dVar2 = *(double *)(lVar7 + 8 + lVar6 * 0x18);
    dVar3 = *(double *)(lVar7 + 0x10 + lVar6 * 0x18);
    lVar7 = 0x10;
    lVar6 = 0;
    do {
      lVar4 = *param_2;
      if (((ABS(dVar1 - *(double *)(lVar4 + -0x10 + lVar7)) <= 9.999999747378752e-05) &&
          (ABS(dVar2 - *(double *)(lVar4 + -8 + lVar7)) <= 9.999999747378752e-05)) &&
         (ABS(dVar3 - *(double *)(lVar4 + lVar7)) <= 9.999999747378752e-05)) {
        iVar5 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_3,iVar5);
        }
        *(int *)(*param_3 + (longlong)iVar5 * 4) = (int)lVar6;
        iVar5 = (int)param_2[1];
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar6 < iVar5);
  }
  return;
}



// FUNCTION 14821128c FUN_14821128c body=74 status=ok
// SIG undefined FUN_14821128c(void)

void FUN_14821128c(longlong param_1)

{
  FUN_1400d7e1b(*(undefined8 *)(param_1 + 0x678),*(undefined4 *)(param_1 + 0x680));
  *(undefined4 *)(param_1 + 0x680) = 0;
  if (*(int *)(param_1 + 0x684) != 0) {
    FUN_147a387aa(param_1 + 0x678,0);
  }
  FUN_143adda40(param_1);
  return;
}



// FUNCTION 1482112d6 FUN_1482112d6 body=263 status=ok
// SIG undefined FUN_1482112d6(void)

void FUN_1482112d6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_188 [40];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined1 local_128 [48];
  undefined1 local_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (3 < (int)param_2[1]) {
    FUN_143607b78(local_128);
    FUN_1405b70a4(local_f8,param_2);
    FUN_144b0bd4e(&local_160,*param_2,(int)param_2[1]);
    local_d8 = local_160;
    uStack_d4 = uStack_15c;
    uStack_d0 = uStack_158;
    uStack_cc = uStack_154;
    local_c8 = local_150;
    uStack_c4 = uStack_14c;
    uStack_c0 = uStack_148;
    uStack_bc = uStack_144;
    local_b8 = local_140;
    uStack_b4 = uStack_13c;
    uStack_b0 = uStack_138;
    uStack_ac = uStack_134;
    local_a8 = local_130;
    iVar1 = *(int *)(param_1 + 0x680);
    *(uint *)(param_1 + 0x680) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x684) < iVar1 + 1U) {
      FUN_1474ba6a4(param_1 + 0x678,iVar1);
    }
    FUN_147c4992e((longlong)iVar1 * 0x100 + *(longlong *)(param_1 + 0x678),local_128);
    FUN_143adda40(param_1);
    FUN_1400d7e72(local_128);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482113de FUN_1482113de body=77 status=ok
// SIG undefined FUN_1482113de(void)

void FUN_1482113de(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14489624a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146fa2938();
      return;
    }
  }
  return;
}



// FUNCTION 14821142c FUN_14821142c body=71 status=ok
// SIG undefined FUN_14821142c(void)

void FUN_14821142c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148214286();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_148215056();
      return;
    }
  }
  return;
}



// FUNCTION 148211474 FUN_148211474 body=634 status=ok
// SIG undefined FUN_148211474(void)

double * FUN_148211474(double *param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double _X;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  
  _X = (double)param_4;
  param_1[0x11] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  iVar5 = _isnan(_X);
  if ((iVar5 == 0) && (iVar5 = _finite(_X), iVar5 != 0)) {
    dVar1 = param_3[2];
    dVar2 = param_2[2];
    dVar3 = param_3[1];
    dVar4 = param_2[1];
    *param_1 = (*param_3 - *param_2) * _X + *param_2;
    param_1[1] = (dVar3 - dVar4) * _X + dVar4;
    param_1[2] = (dVar1 - dVar2) * _X + dVar2;
    dVar1 = param_3[5];
    dVar2 = param_2[5];
    dVar3 = param_3[4];
    dVar4 = param_2[4];
    param_1[3] = (param_3[3] - param_2[3]) * _X + param_2[3];
    param_1[4] = (dVar3 - dVar4) * _X + dVar4;
    param_1[5] = (dVar1 - dVar2) * _X + dVar2;
    dVar1 = param_3[8];
    dVar2 = param_2[8];
    dVar3 = param_3[7];
    dVar4 = param_2[7];
    param_1[6] = (param_3[6] - param_2[6]) * _X + param_2[6];
    param_1[7] = (dVar3 - dVar4) * _X + dVar4;
    param_1[8] = (dVar1 - dVar2) * _X + dVar2;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    dVar1 = param_3[0xc];
    dVar2 = param_2[0xc];
    param_1[0xb] = (param_3[0xb] - param_2[0xb]) * _X + param_2[0xb];
    param_1[0xc] = (dVar1 - dVar2) * _X + dVar2;
    iVar5 = (int)(((float)*(byte *)((longlong)param_3 + 0x52) -
                  (float)*(byte *)((longlong)param_2 + 0x52)) * param_4 +
                 (float)*(byte *)((longlong)param_2 + 0x52));
    if (0xfe < iVar5) {
      iVar5 = 0xff;
    }
    uVar6 = (undefined1)iVar5;
    if (iVar5 < 1) {
      uVar6 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x52) = uVar6;
    iVar5 = (int)(((float)*(byte *)((longlong)param_3 + 0x51) -
                  (float)*(byte *)((longlong)param_2 + 0x51)) * param_4 +
                 (float)*(byte *)((longlong)param_2 + 0x51));
    if (0xfe < iVar5) {
      iVar5 = 0xff;
    }
    uVar6 = (undefined1)iVar5;
    if (iVar5 < 1) {
      uVar6 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x51) = uVar6;
    iVar5 = (int)(((float)*(byte *)(param_3 + 10) - (float)*(byte *)(param_2 + 10)) * param_4 +
                 (float)*(byte *)(param_2 + 10));
    if (0xfe < iVar5) {
      iVar5 = 0xff;
    }
    uVar6 = (undefined1)iVar5;
    if (iVar5 < 1) {
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 10) = uVar6;
    iVar7 = (int)(((float)*(byte *)((longlong)param_3 + 0x53) -
                  (float)*(byte *)((longlong)param_2 + 0x53)) * param_4 +
                 (float)*(byte *)((longlong)param_2 + 0x53));
    iVar5 = 0xff;
    if (iVar7 < 0xff) {
      iVar5 = iVar7;
    }
    uVar6 = (undefined1)iVar5;
    if (iVar5 < 1) {
      uVar6 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x53) = uVar6;
    return param_1;
  }
  memcpy(param_1,param_3,0x98);
  return param_1;
}



// FUNCTION 1482116ee FUN_1482116ee body=1054 status=ok
// SIG undefined FUN_1482116ee(void)

void FUN_1482116ee(longlong *param_1,double *param_2,longlong *param_3,double *param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar2 = param_2[8];
  dVar16 = param_2[9];
  dVar3 = param_2[10];
  dVar18 = dVar3 * dVar3 + dVar2 * dVar2 + dVar16 * dVar16;
  if (((dVar18 != 1.0) || (dVar15 = dVar16, dVar17 = dVar3, dVar9 = dVar2, NAN(dVar18))) &&
     (dVar15 = DAT_14c8464e8, dVar17 = DAT_14c8464f0, dVar9 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar18)) {
    dVar18 = 1.0 / SQRT(dVar18);
    dVar15 = dVar16 * dVar18;
    dVar17 = dVar3 * dVar18;
    dVar9 = dVar2 * dVar18;
  }
  dVar2 = *param_2;
  dVar16 = param_2[1];
  dVar3 = param_2[2];
  dVar18 = dVar3 * dVar3 + dVar2 * dVar2 + dVar16 * dVar16;
  if (((dVar18 != 1.0) || (dVar19 = dVar2, dVar10 = dVar3, dVar11 = dVar16, NAN(dVar18))) &&
     (dVar19 = DAT_14c8464e0, dVar10 = DAT_14c8464f0, dVar11 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar18)) {
    dVar18 = 1.0 / SQRT(dVar18);
    dVar19 = dVar2 * dVar18;
    dVar10 = dVar3 * dVar18;
    dVar11 = dVar16 * dVar18;
  }
  if (0 < (int)param_1[1]) {
    lVar14 = 0x20;
    lVar13 = 0;
    do {
      lVar8 = *param_1;
      dVar2 = *(double *)(lVar8 + -0x20 + lVar14);
      dVar16 = *(double *)(lVar8 + -0x18 + lVar14);
      dVar3 = param_2[8] * 0.0 + dVar16 * param_2[4] + dVar2 * *param_2 + param_2[0xc];
      dVar18 = param_2[9] * 0.0 + dVar16 * param_2[5] + dVar2 * param_2[1] + param_2[0xd];
      dVar2 = dVar2 * param_2[2] + dVar16 * param_2[6] + param_2[10] * 0.0 + param_2[0xe];
      uVar6 = *(undefined4 *)(lVar8 + -0x10 + lVar14);
      uVar4 = *(undefined8 *)(lVar8 + -8 + lVar14);
      uVar5 = *(undefined8 *)(lVar8 + lVar14);
      iVar7 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
        FUN_14183c640(param_3,iVar7);
      }
      lVar8 = *param_3;
      lVar12 = (longlong)iVar7 * 0x98;
      *(double *)(lVar8 + lVar12) = dVar3;
      *(double *)(lVar8 + 8 + lVar12) = dVar18;
      *(double *)(lVar8 + 0x10 + lVar12) = dVar2;
      *(double *)(lVar8 + 0x18 + lVar12) = (double)-(float)dVar9;
      *(double *)(lVar8 + 0x20 + lVar12) = (double)-(float)dVar15;
      *(double *)(lVar8 + 0x28 + lVar12) = (double)-(float)dVar17;
      *(double *)(lVar8 + 0x30 + lVar12) = dVar19;
      *(double *)(lVar8 + 0x38 + lVar12) = dVar11;
      *(double *)(lVar8 + 0x40 + lVar12) = dVar10;
      *(undefined1 *)(lVar8 + 0x48 + lVar12) = 0;
      *(undefined4 *)(lVar8 + 0x50 + lVar12) = uVar6;
      *(undefined8 *)(lVar8 + 0x58 + lVar12) = uVar4;
      *(undefined8 *)(lVar8 + 0x60 + lVar12) = uVar5;
      puVar1 = (undefined8 *)(lVar8 + 0x68 + lVar12);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar8 + 0x78 + lVar12);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar8 + 0x88 + lVar12);
      *puVar1 = 0;
      puVar1[1] = 0;
      if (*(char *)(param_4 + 6) == '\0') {
        param_4[3] = dVar3;
        param_4[4] = dVar18;
        param_4[5] = dVar2;
        *param_4 = param_4[3];
        param_4[1] = param_4[4];
        param_4[2] = param_4[5];
        *(undefined1 *)(param_4 + 6) = 1;
      }
      else {
        dVar16 = *param_4;
        if (dVar3 <= *param_4) {
          dVar16 = dVar3;
        }
        *param_4 = dVar16;
        dVar16 = param_4[1];
        if (dVar18 <= param_4[1]) {
          dVar16 = dVar18;
        }
        param_4[1] = dVar16;
        dVar16 = param_4[2];
        if (dVar2 <= param_4[2]) {
          dVar16 = dVar2;
        }
        param_4[2] = dVar16;
        dVar16 = param_4[3];
        if (param_4[3] <= dVar3) {
          dVar16 = dVar3;
        }
        param_4[3] = dVar16;
        dVar16 = param_4[4];
        if (param_4[4] <= dVar18) {
          dVar16 = dVar18;
        }
        param_4[4] = dVar16;
        dVar16 = param_4[5];
        if (param_4[5] <= dVar2) {
          dVar16 = dVar2;
        }
        param_4[5] = dVar16;
      }
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x30;
    } while (lVar13 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 148211b0c FUN_148211b0c body=1260 status=ok
// SIG undefined FUN_148211b0c(void)

void FUN_148211b0c(longlong *param_1,longlong *param_2,int param_3,float *param_4)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  double *pdVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  double *pdVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  float *local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  longlong local_98;
  ulonglong uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar10 = (int)param_2[1] - param_3;
  iVar18 = (int)param_1[1];
  local_e8 = param_2;
  local_d0 = param_4;
  if ((int)uVar10 < 3) {
    *(uint *)(param_1 + 1) = iVar18 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar18 + 1U) {
      FUN_1447808da(param_1,iVar18);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar18 * 4) = 0;
    iVar18 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar18 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar18 + 1U) {
      FUN_1447808da(param_1,iVar18);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar18 * 4) = 2;
    iVar18 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar18 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar18 + 1U) {
      FUN_1447808da(param_1,iVar18);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar18 * 4) = 1;
  }
  else {
    local_98 = 0;
    uStack_90 = (ulonglong)uVar10;
    uVar15 = 0;
    local_f0 = param_1;
    local_e0 = (longlong)iVar18;
    FUN_1446f48e2(&local_98,0);
    do {
      *(int *)(local_98 + uVar15 * 4) = param_3 + (int)uVar15;
      uVar15 = uVar15 + 1;
    } while (uVar10 != uVar15);
    if (2 < (int)(uint)uStack_90) {
      uVar15 = 0;
      uVar10 = (uint)uStack_90;
      do {
        while( true ) {
          uVar9 = (uint)uVar15;
          if (uVar15 == 0) {
            uVar9 = uVar10;
          }
          uVar1 = uVar15 + 1;
          uVar17 = (longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
                   (longlong)(int)uVar10 & 0xffffffff;
          iVar18 = *(int *)(local_98 + -4 + (longlong)(int)uVar9 * 4);
          lVar6 = *local_e8;
          lVar13 = (longlong)iVar18 * 0x98;
          lVar11 = (longlong)*(int *)(local_98 + uVar15 * 4) * 0x98;
          lVar20 = (longlong)*(int *)(local_98 + uVar17 * 4) * 0x98;
          dVar2 = *(double *)(lVar6 + 0x10 + lVar13);
          dVar3 = *(double *)(lVar6 + 8 + lVar13);
          fVar23 = (float)(*(double *)(lVar6 + 0x10 + lVar11) - dVar2);
          fVar22 = (float)(*(double *)(lVar6 + 8 + lVar11) - dVar3);
          fVar25 = (float)(*(double *)(lVar6 + lVar11) - *(double *)(lVar6 + lVar13));
          fVar26 = (float)(*(double *)(lVar6 + 0x10 + lVar20) - dVar2);
          fVar27 = (float)(*(double *)(lVar6 + 8 + lVar20) - dVar3);
          fVar24 = (float)(*(double *)(lVar6 + lVar20) - *(double *)(lVar6 + lVar13));
          if ((fVar25 * fVar27 - fVar22 * fVar24) * local_d0[2] +
              (fVar22 * fVar26 - fVar23 * fVar27) * *local_d0 +
              (fVar24 * fVar23 - fVar25 * fVar26) * local_d0[1] <= 0.0) break;
LAB_148211d98:
          uVar15 = uVar1;
          if ((longlong)(int)uVar10 <= (longlong)uVar1) {
            FUN_14478085e(local_f0,local_e0,1);
            goto LAB_148211c66;
          }
        }
        if (0 < (int)uVar10) {
          local_d8 = (longlong)(int)uVar9 - 1;
          pdVar14 = (double *)(lVar13 + lVar6);
          pdVar12 = (double *)(lVar11 + lVar6);
          pdVar21 = (double *)(lVar20 + lVar6);
          uVar16 = local_d8 & 0xffffffff;
          uVar19 = 0;
          do {
            if (((uVar17 != uVar19) && (uVar16 != uVar19)) && (uVar15 != uVar19)) {
              lVar6 = *local_e8;
              lVar11 = (longlong)*(int *)(local_98 + uVar19 * 4) * 0x98;
              local_9c = (float)*(double *)(lVar6 + 0x10 + lVar11);
              local_a0 = (float)*(double *)(lVar6 + 8 + lVar11);
              local_a4 = (float)*(double *)(lVar6 + lVar11);
              local_a8 = (float)pdVar21[2];
              local_ac = (float)pdVar21[1];
              local_b0 = (float)*pdVar21;
              local_b4 = (float)pdVar12[2];
              local_b8 = (float)pdVar12[1];
              local_bc = (float)*pdVar12;
              local_c0 = (float)pdVar14[2];
              local_c4 = (float)pdVar14[1];
              local_c8 = (float)*pdVar14;
              local_f8 = 0;
              cVar8 = FUN_147ad7f91(&local_c8,&local_bc,&local_b0,&local_a4);
              uVar10 = (uint)uStack_90;
              if (cVar8 != '\0') goto LAB_148211d98;
            }
            uVar19 = uVar19 + 1;
          } while ((longlong)uVar19 < (longlong)(int)uVar10);
          iVar18 = *(int *)(local_98 + local_d8 * 4);
        }
        plVar7 = local_f0;
        iVar4 = (int)local_f0[1];
        *(uint *)(local_f0 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)local_f0 + 0xc) < iVar4 + 1U) {
          FUN_1447808da(local_f0,iVar4);
        }
        *(int *)(*plVar7 + (longlong)iVar4 * 4) = iVar18;
        uVar5 = *(undefined4 *)(local_98 + uVar17 * 4);
        iVar18 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar18 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar18 + 1U) {
          FUN_1447808da(plVar7,iVar18);
        }
        *(undefined4 *)(*plVar7 + (longlong)iVar18 * 4) = uVar5;
        uVar5 = *(undefined4 *)(local_98 + uVar15 * 4);
        iVar18 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar18 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar18 + 1U) {
          FUN_1447808da(plVar7,iVar18);
        }
        *(undefined4 *)(*plVar7 + (longlong)iVar18 * 4) = uVar5;
        iVar18 = ~(uint)uVar15 + (uint)uStack_90;
        if (iVar18 != 0) {
          memmove((void *)(local_98 + uVar15 * 4),(void *)(local_98 + uVar15 * 4 + 4),
                  (longlong)iVar18 << 2);
        }
        uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 + -1);
        FUN_14479f406(&local_98);
        uVar15 = 0;
        uVar10 = (uint)uStack_90;
      } while (2 < (int)(uint)uStack_90);
    }
LAB_148211c66:
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148211ff9 FUN_148211ff9 body=441 status=ok
// SIG undefined FUN_148211ff9(void)

void FUN_148211ff9(longlong param_1,ulonglong *param_2,void **param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined8 uStack_180;
  undefined1 local_178 [48];
  void *local_148;
  int local_140;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_188 = 0;
  uStack_180 = 0;
  FUN_1479b243a(0,&local_188);
  uVar6 = uStack_180;
  uVar5 = (uint)uStack_180;
  lVar8 = (longlong)(int)(uint)uStack_180;
  if (3 < lVar8) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 + 1);
    if (uStack_180._4_4_ <= uVar5) {
      FUN_146bfae70(&local_188,uVar6 & 0xffffffff);
    }
    lVar8 = lVar8 * 0x20;
    *(ulonglong *)(local_188 + lVar8) = uVar1 ^ 0x8000000000000000;
    *(ulonglong *)(local_188 + 8 + lVar8) = uVar2 ^ 0x8000000000000000;
    *(ulonglong *)(local_188 + 0x10 + lVar8) = uVar3 ^ 0x8000000000000000;
    *(ulonglong *)(local_188 + 0x18 + lVar8) = uVar4 ^ 0x8000000000000000;
    FUN_143607b78(local_178);
    cVar7 = FUN_14342755c(local_178,&local_188,param_1 + 0x30,0x322bcc77);
    if ((cVar7 != '\0') && (&local_148 != param_3)) {
      *(int *)(param_3 + 1) = local_140;
      if (local_140 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_1405b70fe(param_3,local_140);
        if (local_140 != 0) {
          memcpy(*param_3,local_148,(longlong)local_140 * 0x18);
        }
      }
    }
    FUN_1400d7e72(local_178);
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482121b4 FUN_1482121b4 body=75 status=ok
// SIG undefined FUN_1482121b4(void)

void FUN_1482121b4(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x670)) {
    FUN_143add9ca((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x668));
    FUN_14183c194(param_1);
    FUN_143adda40(param_1);
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 148212200 FUN_148212200 body=154 status=ok
// SIG undefined FUN_148212200(void)

void FUN_148212200(longlong param_1,int param_2,longlong param_3)

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
  longlong lVar16;
  
  if (*(int *)(param_1 + 0x670) <= param_2) {
    FUN_140de94c8(param_1 + 0x668,param_2 + 1);
  }
  lVar16 = *(longlong *)(param_1 + 0x668);
  FUN_148213db6(lVar16 + (longlong)param_2 * 0x60,param_3);
  lVar16 = (longlong)param_2 * 0x60 + lVar16;
  FUN_1447bdc4c(lVar16 + 0x10,param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 0x24);
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  uVar3 = *(undefined4 *)(param_3 + 0x2c);
  uVar4 = *(undefined4 *)(param_3 + 0x30);
  uVar5 = *(undefined4 *)(param_3 + 0x34);
  uVar6 = *(undefined4 *)(param_3 + 0x38);
  uVar7 = *(undefined4 *)(param_3 + 0x3c);
  uVar8 = *(undefined4 *)(param_3 + 0x40);
  uVar9 = *(undefined4 *)(param_3 + 0x44);
  uVar10 = *(undefined4 *)(param_3 + 0x48);
  uVar11 = *(undefined4 *)(param_3 + 0x4c);
  uVar12 = *(undefined4 *)(param_3 + 0x4a);
  uVar13 = *(undefined4 *)(param_3 + 0x4e);
  uVar14 = *(undefined4 *)(param_3 + 0x52);
  uVar15 = *(undefined4 *)(param_3 + 0x56);
  *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(lVar16 + 0x24) = uVar1;
  *(undefined4 *)(lVar16 + 0x28) = uVar2;
  *(undefined4 *)(lVar16 + 0x2c) = uVar3;
  *(undefined4 *)(lVar16 + 0x30) = uVar4;
  *(undefined4 *)(lVar16 + 0x34) = uVar5;
  *(undefined4 *)(lVar16 + 0x38) = uVar6;
  *(undefined4 *)(lVar16 + 0x3c) = uVar7;
  *(undefined4 *)(lVar16 + 0x40) = uVar8;
  *(undefined4 *)(lVar16 + 0x44) = uVar9;
  *(undefined4 *)(lVar16 + 0x48) = uVar10;
  *(undefined4 *)(lVar16 + 0x4c) = uVar11;
  *(undefined4 *)(lVar16 + 0x4a) = uVar12;
  *(undefined4 *)(lVar16 + 0x4e) = uVar13;
  *(undefined4 *)(lVar16 + 0x52) = uVar14;
  *(undefined4 *)(lVar16 + 0x56) = uVar15;
  FUN_14183c194(param_1);
  FUN_143adda40(param_1);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 14821229a FUN_14821229a body=370 status=ok
// SIG undefined FUN_14821229a(void)

void FUN_14821229a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_1a8 [40];
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined1 local_148 [48];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar1 = (longlong *)(param_1 + 0x678);
  iVar2 = *(int *)(param_1 + 0x684);
  FUN_1400d7e1b(*(undefined8 *)(param_1 + 0x678),*(undefined4 *)(param_1 + 0x680));
  *(undefined4 *)(param_1 + 0x680) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x684) != 0)) {
    FUN_147a387aa(plVar1,0);
  }
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_143607b78(local_148);
      FUN_1405b70a4(&local_118,*param_2 + lVar3);
      FUN_144b0bd4e(&local_180,local_118,local_110);
      local_f8 = local_180;
      uStack_f4 = uStack_17c;
      uStack_f0 = uStack_178;
      uStack_ec = uStack_174;
      local_e8 = local_170;
      uStack_e4 = uStack_16c;
      uStack_e0 = uStack_168;
      uStack_dc = uStack_164;
      local_d8 = local_160;
      uStack_d4 = uStack_15c;
      uStack_d0 = uStack_158;
      uStack_cc = uStack_154;
      local_c8 = local_150;
      iVar2 = *(int *)(param_1 + 0x680);
      *(uint *)(param_1 + 0x680) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x684) < iVar2 + 1U) {
        FUN_1474ba6a4(plVar1,iVar2);
      }
      FUN_147c4992e((longlong)iVar2 * 0x100 + *plVar1,local_148);
      FUN_1400d7e72(local_148);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < (int)param_2[1]);
  }
  FUN_143adda40(param_1);
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14821240d FUN_14821240d body=175 status=ok
// SIG undefined FUN_14821240d(void)

undefined8 FUN_14821240d(undefined8 param_1)

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
  local_b8 = FUN_1409059be();
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



// FUNCTION 1482124d0 FUN_1482124d0 body=251 status=ok
// SIG undefined FUN_1482124d0(void)

void FUN_1482124d0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1405b70fe(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 0x18);
  }
  FUN_1482112d6(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482125e2 FUN_1482125e2 body=88 status=ok
// SIG undefined FUN_1482125e2(void)

void FUN_1482125e2(longlong param_1)

{
  FUN_140b2f4f1(*(undefined8 *)(param_1 + 0x668),*(undefined4 *)(param_1 + 0x670));
  *(undefined4 *)(param_1 + 0x670) = 0;
  if (*(int *)(param_1 + 0x674) != 0) {
    FUN_1482153a8(param_1 + 0x668);
  }
  FUN_14183c194(param_1);
  FUN_143adda40(param_1);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 148212650 FUN_148212650 body=154 status=ok
// SIG undefined FUN_148212650(void)

void FUN_148212650(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1482121b4(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482126f2 FUN_1482126f2 body=1069 status=ok
// SIG undefined FUN_1482126f2(void)

void FUN_1482126f2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  int local_cc;
  longlong local_c8 [13];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 10);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 10);
  }
  plVar2 = local_c8 + 10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[8] = 0;
  local_c8[9] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 8);
  }
  plVar6 = local_c8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[6] = 0;
  local_c8[7] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 6);
  }
  plVar4 = local_c8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[4] = 0;
  local_c8[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 4);
  }
  plVar5 = local_c8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[2] = 0;
  local_c8[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 2);
  }
  plVar3 = local_c8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  plVar7 = local_c8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_cc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_e0 = local_cc != 0;
  local_118 = plVar4;
  local_110 = plVar5;
  local_100 = local_108;
  local_f8 = local_108;
  local_f0 = plVar3;
  local_e8 = plVar7;
  FUN_1411c7058(param_1,local_5c,plVar2,plVar6);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[6] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[8] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[10] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148212b30 FUN_148212b30 body=1592 status=ok
// SIG undefined FUN_148212b30(void)

void FUN_148212b30(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined1 local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  int local_f0;
  int local_ec;
  longlong local_e8 [19];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_4c = 0;
  local_f8 = param_1;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_e8[0x10] = 0;
  local_e8[0x11] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 0x10);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 0x10);
  }
  local_100 = local_e8 + 0x10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_100 = *(longlong **)(param_2 + 0x38);
  }
  local_e8[0xe] = 0;
  local_e8[0xf] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 0xe);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 0xe);
  }
  local_108 = local_e8 + 0xe;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_108 = *(longlong **)(param_2 + 0x38);
  }
  local_e8[0xc] = 0;
  local_e8[0xd] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 0xc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 0xc);
  }
  local_110 = local_e8 + 0xc;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_110 = *(longlong **)(param_2 + 0x38);
  }
  local_e8[10] = 0;
  local_e8[0xb] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 10);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 10);
  }
  plVar7 = local_e8 + 10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_e8[8] = 0;
  local_e8[9] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 8);
  }
  plVar4 = local_e8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_e8[6] = 0;
  local_e8[7] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 6);
  }
  plVar5 = local_e8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_e8[4] = 0;
  local_e8[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 4);
  }
  plVar3 = local_e8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_e8[2] = 0;
  local_e8[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 2);
  }
  plVar8 = local_e8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_e8[0] = 0;
  local_e8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  plVar6 = local_e8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_ec = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ec);
  }
  iVar2 = local_ec;
  local_f0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_118 = local_f0 != 0;
  local_120 = iVar2 != 0;
  local_158 = local_110;
  local_150 = plVar7;
  local_148 = plVar4;
  local_140 = plVar5;
  local_138 = plVar3;
  local_130 = plVar8;
  local_128 = plVar6;
  FUN_1411c6d9c(local_f8,local_4c,local_100,local_108);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[6] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[8] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[10] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0xc] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0xe] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0x10] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821318a FUN_14821318a body=185 status=ok
// SIG undefined FUN_14821318a(void)

void FUN_14821318a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_24 < *(int *)(param_1 + 0x670)) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x668) + 0x59 + (longlong)local_24 * 0x60);
  }
  else {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821324a FUN_14821324a body=239 status=ok
// SIG undefined FUN_14821324a(void)

void FUN_14821324a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143add45a(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821333a FUN_14821333a body=820 status=ok
// SIG undefined FUN_14821333a(void)

void FUN_14821333a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [11];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_b8[8] = 0;
  local_b8[9] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 8);
  }
  plVar2 = local_b8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_b8[6] = 0;
  local_b8[7] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 6);
  }
  plVar5 = local_b8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_b8[4] = 0;
  local_b8[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 4);
  }
  plVar3 = local_b8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_b8[2] = 0;
  local_b8[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 2);
  }
  plVar4 = local_b8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_c0 = local_b8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e0 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_e8 = plVar3;
  local_d8 = local_e0;
  local_d0 = local_e0;
  local_c8 = plVar4;
  FUN_143addeb8(param_1,local_5c,plVar2,plVar5);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[6] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[8] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148213678 FUN_148213678 body=1235 status=ok
// SIG undefined FUN_148213678(void)

void FUN_148213678(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined1 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  int local_dc;
  longlong local_d8 [17];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_4c = 0;
  local_e8 = param_1;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 0xe);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 0xe);
  }
  local_f0 = local_d8 + 0xe;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_f0 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 0xc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 0xc);
  }
  plVar7 = local_d8 + 0xc;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 10);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 10);
  }
  plVar5 = local_d8 + 10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[8] = 0;
  local_d8[9] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 8);
  }
  plVar6 = local_d8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[6] = 0;
  local_d8[7] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 6);
  }
  plVar3 = local_d8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[4] = 0;
  local_d8[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 4);
  }
  plVar4 = local_d8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[2] = 0;
  local_d8[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 2);
  }
  plVar2 = local_d8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  plVar8 = local_d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_dc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_dc);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_dc != 0;
  local_128 = plVar5;
  local_120 = plVar6;
  local_118 = plVar3;
  local_110 = plVar4;
  local_108 = plVar2;
  local_100 = plVar8;
  FUN_148213b4c(local_e8,local_4c,local_f0,plVar7);
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[6] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[8] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[10] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0xc] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148213b4c FUN_148213b4c body=598 status=ok
// SIG undefined FUN_148213b4c(void)

void FUN_148213b4c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  longlong *param_9,undefined8 param_10,char param_11)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_ac;
  longlong local_a8 [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8[0] = 0;
  local_a8[1] = 0;
  if ((0 < (int)param_9[1]) && (FUN_1469886f0(local_a8,(int)param_9[1],1), 0 < (int)param_9[1])) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      lVar1 = *param_9;
      if (param_11 == '\0') {
        fVar4 = *(float *)(lVar1 + 0xc + lVar3);
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
        fVar5 = *(float *)(lVar1 + 8 + lVar3);
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        fVar6 = *(float *)(lVar1 + lVar3);
        fVar7 = *(float *)(lVar1 + 4 + lVar3);
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        local_ac = CONCAT13((char)(int)(fVar4 * 255.0 + 0.5),
                            CONCAT12((char)(int)(fVar6 * 255.0 + 0.5),
                                     CONCAT11((char)(int)(fVar7 * 255.0 + 0.5),
                                              (char)(int)(fVar5 * 255.0 + 0.5))));
      }
      else {
        FUN_1411ab38a(lVar1 + lVar3,&local_ac);
      }
      *(undefined4 *)(local_a8[0] + lVar2 * 4) = local_ac;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < (int)param_9[1]);
  }
  local_c0 = param_10;
  local_c8 = local_a8;
  local_d0 = param_8;
  local_e8 = param_5;
  local_e0 = param_6;
  local_d8 = param_7;
  FUN_143addeb8(param_1,param_2,param_3,param_4);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148213db6 FUN_148213db6 body=88 status=ok
// SIG undefined FUN_148213db6(void)

undefined8 * FUN_148213db6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1482151b8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x98);
      }
    }
  }
  return param_1;
}



// FUNCTION 148213e48 FUN_148213e48 body=546 status=ok
// SIG undefined FUN_148213e48(void)

void FUN_148213e48(longlong param_1,char param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [39];
  char local_61;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar6 = *(int *)(param_1 + 0x6c8);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_147c80a8e(&local_58);
  }
  local_61 = param_2;
  if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_3);
  }
  iVar6 = *(int *)(param_1 + 0x6c8);
  if ((longlong)iVar6 != 0) {
    local_60 = (longlong *)(param_1 + 0x6c0);
    lVar8 = *(longlong *)(param_1 + 0x6c0);
    iVar9 = 1;
    lVar7 = 0;
    lVar10 = 0;
    bVar4 = DAT_14c950c29;
    do {
      if ((~bVar4 & 1) == 0 && param_3 != 0) {
        FUN_1456cec3c(param_3);
        bVar4 = DAT_14c950c29;
      }
      plVar2 = local_60;
      if (*(longlong *)(lVar8 + lVar7) == param_3) {
        if (iVar9 != 0) {
          if (local_61 == '\0') {
            iVar6 = *(int *)(param_1 + 0x6c8);
            if (iVar6 - iVar9 != 0) {
              memmove((void *)(*(longlong *)(param_1 + 0x6c0) + (lVar10 >> 0x20) * 8),
                      (void *)(*(longlong *)(param_1 + 0x6c0) + (lVar10 >> 0x20) * 8 + 8),
                      (longlong)(iVar6 - iVar9) << 3);
              iVar6 = *(int *)(param_1 + 0x6c8);
            }
            *(int *)(param_1 + 0x6c8) = iVar6 + -1;
            FUN_1482157ae(plVar2);
          }
          else {
            if ((~bVar4 & 1) == 0 && param_3 != 0) {
              FUN_1456cec3c(param_3);
            }
            *(longlong *)(param_1 + 0x660) = param_3;
            FUN_1406cc378(param_1);
            if (iVar9 < *(int *)(param_1 + 0x6c8)) {
              lVar8 = (longlong)iVar9;
              do {
                uVar3 = uStack_50;
                uVar1 = *(undefined8 *)(*plVar2 + lVar8 * 8);
                lVar7 = (longlong)(int)uStack_50;
                uVar5 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
                if (uStack_50._4_4_ < uVar5) {
                  FUN_147c80aee(&local_58,uVar3 & 0xffffffff);
                }
                *(undefined8 *)(local_58 + lVar7 * 8) = uVar1;
                lVar8 = lVar8 + 1;
              } while (lVar8 < *(int *)(param_1 + 0x6c8));
            }
            FUN_14821406c(plVar2,&local_58);
          }
        }
        break;
      }
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 0x100000000;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar6 * 8 != lVar7);
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



// FUNCTION 14821406c FUN_14821406c body=74 status=ok
// SIG undefined FUN_14821406c(void)

undefined8 * FUN_14821406c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1482156fa(param_1,iVar1);
    FUN_14821575c(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1482140b6 FUN_1482140b6 body=119 status=ok
// SIG undefined FUN_1482140b6(void)

undefined8 FUN_1482140b6(longlong *param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  
  *param_3 = 0;
  if ((-1 < param_2) && (0 < (longlong)(int)param_1[0xce])) {
    piVar3 = (int *)(param_1[0xcd] + 0x18);
    uVar2 = 0;
    iVar4 = 0;
    do {
      iVar4 = *piVar3 / 3 + iVar4;
      if (param_2 < iVar4) {
        uVar1 = (**(code **)(*param_1 + 0x610))(param_1,uVar2 & 0xffffffff);
        *param_3 = (int)uVar2;
        return uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x18;
    } while ((longlong)(int)param_1[0xce] != uVar2);
  }
  return 0;
}



// FUNCTION 148214132 FUN_148214132 body=115 status=ok
// SIG undefined FUN_148214132(void)

void FUN_148214132(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f924ea(param_1,iVar1);
    }
    FUN_146f99b3e((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146f92570(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1482141a6 FUN_1482141a6 body=45 status=ok
// SIG undefined FUN_1482141a6(void)

longlong FUN_1482141a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b2f404(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482141da FUN_1482141da body=48 status=ok
// SIG undefined FUN_1482141da(void)

longlong FUN_1482141da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140b2f404(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148214212 FUN_148214212 body=48 status=ok
// SIG undefined FUN_148214212(void)

longlong FUN_148214212(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140b2f404(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14821424a FUN_14821424a body=48 status=ok
// SIG undefined FUN_14821424a(void)

longlong FUN_14821424a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140b2f404(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148214286 FUN_148214286 body=132 status=ok
// SIG undefined FUN_148214286(void)

void FUN_148214286(longlong param_1,int param_2)

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



// FUNCTION 1482143a8 FUN_1482143a8 body=59 status=ok
// SIG undefined FUN_1482143a8(void)

undefined8 FUN_1482143a8(longlong *param_1)

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



// FUNCTION 1482144aa FUN_1482144aa body=68 status=ok
// SIG undefined FUN_1482144aa(void)

undefined8 FUN_1482144aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148214516 FUN_148214516 body=59 status=ok
// SIG undefined FUN_148214516(void)

undefined8 FUN_148214516(longlong *param_1)

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



// FUNCTION 1482145e6 FUN_1482145e6 body=47 status=ok
// SIG undefined FUN_1482145e6(void)

void FUN_1482145e6(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14821462c FUN_14821462c body=107 status=ok
// SIG undefined FUN_14821462c(void)

undefined1 FUN_14821462c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_148213db6(param_2 + -0x10,param_3 + -0x10);
      FUN_1447bdc4c(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)(param_3 + 0x24);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      uVar8 = *(undefined4 *)(param_3 + 0x30);
      uVar9 = *(undefined4 *)(param_3 + 0x34);
      uVar10 = *(undefined4 *)(param_3 + 0x38);
      uVar11 = *(undefined4 *)(param_3 + 0x3c);
      uVar12 = *(undefined4 *)(param_3 + 0x3a);
      uVar13 = *(undefined4 *)(param_3 + 0x3e);
      uVar14 = *(undefined4 *)(param_3 + 0x42);
      uVar15 = *(undefined4 *)(param_3 + 0x46);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar7;
      *(undefined4 *)(param_2 + 0x30) = uVar8;
      *(undefined4 *)(param_2 + 0x34) = uVar9;
      *(undefined4 *)(param_2 + 0x38) = uVar10;
      *(undefined4 *)(param_2 + 0x3c) = uVar11;
      *(undefined4 *)(param_2 + 0x3a) = uVar12;
      *(undefined4 *)(param_2 + 0x3e) = uVar13;
      *(undefined4 *)(param_2 + 0x42) = uVar14;
      *(undefined4 *)(param_2 + 0x46) = uVar15;
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1482146c0 FUN_1482146c0 body=59 status=ok
// SIG undefined FUN_1482146c0(void)

undefined8 FUN_1482146c0(longlong *param_1)

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



// FUNCTION 14821475e FUN_14821475e body=51 status=ok
// SIG undefined FUN_14821475e(void)

void FUN_14821475e(longlong *param_1)

{
  if ((char)param_1[0xc] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148214792 FUN_148214792 body=48 status=ok
// SIG undefined FUN_148214792(void)

void FUN_148214792(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,8);
  }
  return;
}



// FUNCTION 1482147c2 FUN_1482147c2 body=1273 status=ok
// SIG undefined FUN_1482147c2(void)

void FUN_1482147c2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_758 [32];
  longlong local_738;
  undefined8 *local_730;
  undefined8 *local_728;
  longlong local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined4 uStack_708;
  undefined4 uStack_700;
  undefined8 uStack_6fc;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 *local_6d0;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined8 local_6b0;
  undefined8 *local_6a8;
  longlong local_6a0;
  uint uStack_698;
  uint uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined1 uStack_680;
  byte bStack_67f;
  undefined2 uStack_67e;
  undefined2 uStack_67c;
  undefined2 uStack_67a;
  undefined4 uStack_678;
  undefined8 local_670;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined8 *local_650;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined8 uStack_63c;
  undefined4 uStack_634;
  undefined8 local_630;
  undefined1 local_628 [1240];
  undefined1 local_150 [168];
  undefined1 *local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_758;
  if ((*(int *)(DAT_14cb446c0 + 4) != 0) && (0 < *(int *)(param_1 + 0x2a0))) {
    local_730 = (undefined8 *)(param_1 + 0x100);
    lVar12 = 0;
    do {
      puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x298) + lVar12 * 8);
      if ((puVar3 != (undefined8 *)0x0) && (*(char *)(puVar3 + 0x6b) == '\x01')) {
        (**(code **)(*(longlong *)*puVar3 + 0x2f0))();
        cVar6 = FUN_1474283cc(puVar3 + 0x6c);
        if (cVar6 != '\0') {
          uStack_690 = 0;
          uStack_68c = 0;
          uStack_688 = 0;
          local_6a0 = 0;
          uStack_698 = 0;
          uStack_694 = 0;
          uStack_680 = 0xff;
          bStack_67f = bStack_67f & 0xe0;
          uStack_67e = 0;
          uStack_67c = 0x100;
          uStack_678 = 0;
          local_630 = 0;
          local_670 = 0;
          uStack_668 = 0;
          uStack_664 = 0;
          local_660 = 0;
          uStack_65c = 0;
          uStack_658 = 0;
          local_650 = (undefined8 *)0x0;
          uStack_644 = 0;
          local_640 = 0;
          uStack_63c = 0;
          uStack_648 = 1;
          local_6a8 = puVar3 + 0x6c;
          FUN_140518214(&local_650,0);
          puVar8 = local_730;
          puVar11 = local_650;
          for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          local_a8 = (undefined1 *)0x0;
          local_a0 = 0x100000000;
          local_98 = (undefined8 *)0x0;
          lStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0xffffffff;
          local_78 = 0xff0000ffffffff;
          uStack_70 = uStack_70 & 0xffffff00;
          uStack_6c = 0x40c00f07;
          local_68 = local_68 & 0xfc;
          FUN_141793e06(local_150);
          local_98 = puVar3 + 0x27;
          local_78 = local_78 & 0xffffffff00000000;
          lStack_90 = (**(code **)(*(longlong *)*puVar3 + 0x2f0))();
          uStack_6c = uStack_6c & 0xffe03fbf | (*(byte *)(param_1 + 0x6b) & 1) << 6;
          bVar7 = FUN_144914152(param_1,*(undefined8 *)(param_2 + 0x148));
          uStack_6c = uStack_6c & 0xbfffffff | (uint)bVar7 << 0x1e;
          puVar10 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar10 = local_150;
          }
          *(undefined8 **)(puVar10 + 0x18) = puVar3 + 0x22;
          puVar8 = (undefined8 *)FUN_14337cb52(*(undefined8 *)(param_2 + 0xe8));
          *puVar8 = &PTR_FUN_14aa71480;
          *(undefined4 *)(puVar8 + 2) = 0xffffffff;
          *(undefined2 *)((longlong)puVar8 + 0x14) = 0x105;
          *(undefined1 *)((longlong)puVar8 + 0x16) = 0;
          puVar8[1] = &PTR_FUN_14a1ca300;
          *(undefined4 *)(puVar8 + 3) = 2;
          puVar8[4] = 0;
          puVar8[5] = 0;
          FUN_144a8b74e(local_628);
          FUN_144787006(param_1,local_628);
          local_738 = param_2;
          FUN_1417ed2e8(puVar8,*(undefined8 *)(param_2 + 0x110),local_628);
          uVar5 = uStack_698;
          *(undefined8 **)(puVar10 + 8) = puVar8 + 1;
          *(undefined4 *)(puVar10 + 0x58) = 0;
          *(int *)(puVar10 + 0x5c) = *(int *)(puVar3 + 0x26) / 3;
          *(undefined4 *)(puVar10 + 0x68) = 0;
          *(int *)(puVar10 + 0x6c) = *(int *)((longlong)puVar3 + 0xc4) + -1;
          lVar9 = (longlong)(int)uStack_698;
          uStack_698 = uStack_698 + 1;
          if (uStack_694 < uStack_698) {
            FUN_147471df6(&local_6a0,uVar5);
          }
          lVar4 = local_6a0;
          lVar9 = lVar9 * 0xf0;
          *(undefined8 *)(local_6a0 + 0xa8 + lVar9) = 0;
          puVar10 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar10 = local_150;
          }
          FUN_144739392(local_6a0 + lVar9,puVar10,local_a0 & 0xffffffff,0);
          param_2 = local_738;
          *(byte *)(lVar4 + 0xe8 + lVar9) = local_68;
          puVar1 = (undefined4 *)(lVar4 + 0xd8 + lVar9);
          *puVar1 = (undefined4)local_78;
          puVar1[1] = local_78._4_4_;
          puVar1[2] = uStack_70;
          puVar1[3] = uStack_6c;
          puVar1 = (undefined4 *)(lVar4 + 200 + lVar9);
          *puVar1 = (undefined4)local_88;
          puVar1[1] = local_88._4_4_;
          puVar1[2] = (undefined4)uStack_80;
          puVar1[3] = uStack_80._4_4_;
          plVar2 = (longlong *)(lVar4 + 0xb8 + lVar9);
          *plVar2 = (longlong)local_98;
          plVar2[1] = lStack_90;
          local_728 = local_6a8;
          uStack_718 = CONCAT44(uStack_694,uStack_698);
          local_720 = local_6a0;
          local_6a0 = 0;
          uStack_698 = 0;
          uStack_694 = 0;
          local_710 = CONCAT44(uStack_68c,uStack_690);
          uStack_708 = uStack_688;
          uStack_700 = CONCAT22(uStack_67e,CONCAT11(bStack_67f,uStack_680));
          uStack_6fc = CONCAT44(uStack_678,CONCAT22(uStack_67a,uStack_67c));
          local_6f0 = local_670;
          local_670 = 0;
          local_6e8 = uStack_668;
          local_6e4 = uStack_664;
          uStack_668 = 0;
          uStack_664 = 0;
          local_6e0 = CONCAT44(uStack_65c,local_660);
          uStack_6d8 = CONCAT44(uStack_654,uStack_658);
          local_6d0 = local_650;
          local_650 = (undefined8 *)0x0;
          local_6c8 = uStack_648;
          local_6c4 = uStack_644;
          uStack_648 = 0;
          uStack_644 = 0;
          local_6c0 = local_640;
          uStack_6bc = (undefined4)uStack_63c;
          uStack_6b8 = uStack_63c._4_4_;
          uStack_6b4 = uStack_634;
          local_6b0 = local_630;
          local_630 = 0;
          FUN_147cee9b0(local_738);
          FUN_1446fc232(local_150);
          FUN_1472aaabe(&local_6a8);
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x2a0));
  }
  if ((local_60 ^ (ulonglong)auStack_758) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148214cbc FUN_148214cbc body=524 status=ok
// SIG undefined FUN_148214cbc(void)

void FUN_148214cbc(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [80];
  longlong local_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  int iStack_78;
  undefined2 uStack_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  uint uStack_68;
  uint uStack_64;
  undefined7 uStack_60;
  undefined8 uStack_59;
  undefined8 local_51;
  undefined5 uStack_49;
  undefined3 uStack_44;
  undefined5 uStack_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iStack_78 = 0;
  uStack_74 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  local_72 = 1;
  local_71 = 0;
  uStack_70 = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  local_51 = 0;
  uStack_49 = 0;
  uStack_44 = 0;
  uStack_41 = 0;
  FUN_1474121b6((longlong)&local_51 + 1,*(undefined8 *)(param_1 + 8));
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x120);
  lVar5 = local_88;
  if (local_88 != lVar7) {
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    lVar5 = lVar7;
    if (local_88 != 0) {
      LOCK();
      puVar1 = (uint *)(local_88 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        local_88 = lVar7;
        FUN_144a54812();
        lVar5 = local_88;
      }
    }
  }
  local_88 = lVar5;
  uVar3 = uStack_68;
  lVar7 = *(longlong *)(param_1 + 0x10);
  iVar6 = *(int *)(lVar7 + 0x130) / 3;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_74 = 1;
  lVar5 = *(longlong *)(lVar7 + 0xa0);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    lVar7 = *(longlong *)(param_1 + 0x10);
  }
  uVar4 = *(undefined4 *)(lVar7 + 0xc4);
  lVar7 = (longlong)(int)uStack_68;
  uStack_68 = uStack_68 + 1;
  iStack_78 = iVar6;
  if (uStack_64 < uStack_68) {
    FUN_1471b2628(&uStack_70,uVar3);
  }
  plVar2 = (longlong *)(CONCAT17(uStack_69,uStack_70) + lVar7 * 0x28);
  *plVar2 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar2[1] = 3;
  *(undefined4 *)(plVar2 + 2) = 0xc;
  *(undefined4 *)((longlong)plVar2 + 0x14) = uVar4;
  *(undefined4 *)(plVar2 + 3) = 0;
  *(int *)((longlong)plVar2 + 0x1c) = iVar6;
  *(undefined2 *)(plVar2 + 4) = 0x100;
  *(undefined1 *)((longlong)plVar2 + 0x22) = 1;
  lVar7 = *(longlong *)(param_1 + 0x10);
  FUN_147377468(local_d8,&local_88);
  FUN_141793e86(lVar7 + 0x3a0,local_d8);
  FUN_14005bca4(local_d8);
  FUN_14742848e(*(longlong *)(param_1 + 0x10) + 0x360,param_2);
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
    }
  }
  FUN_14005bca4(&local_88);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148214eda FUN_148214eda body=12 status=ok
// SIG undefined FUN_148214eda(void)

void FUN_148214eda(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148214ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148214ee6 FUN_148214ee6 body=29 status=ok
// SIG undefined FUN_148214ee6(void)

undefined8 FUN_148214ee6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148214f04 FUN_148214f04 body=105 status=ok
// SIG undefined FUN_148214f04(void)

void FUN_148214f04(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148214cbc(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148214cbc(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148214f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148214f6e FUN_148214f6e body=54 status=ok
// SIG undefined FUN_148214f6e(void)

void FUN_148214f6e(longlong *param_1)

{
  FUN_148214fa4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148214fa4 FUN_148214fa4 body=128 status=ok
// SIG undefined FUN_148214fa4(void)

void FUN_148214fa4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 148215026 FUN_148215026 body=48 status=ok
// SIG undefined FUN_148215026(void)

void FUN_148215026(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148215056 FUN_148215056 body=62 status=ok
// SIG undefined FUN_148215056(void)

void FUN_148215056(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148215094(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148215094 FUN_148215094 body=93 status=ok
// SIG undefined FUN_148215094(void)

ulonglong FUN_148215094(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 1482150f2 FUN_1482150f2 body=197 status=ok
// SIG undefined FUN_1482150f2(void)

undefined8 * FUN_1482150f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1482151b8(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x98);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  uVar7 = param_2[8];
  uVar8 = param_2[9];
  uVar9 = *(undefined8 *)((longlong)param_2 + 0x52);
  *(undefined8 *)((longlong)param_1 + 0x4a) = *(undefined8 *)((longlong)param_2 + 0x4a);
  *(undefined8 *)((longlong)param_1 + 0x52) = uVar9;
  param_1[8] = uVar7;
  param_1[9] = uVar8;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  return param_1;
}



// FUNCTION 1482151b8 FUN_1482151b8 body=114 status=ok
// SIG undefined FUN_1482151b8(void)

void FUN_1482151b8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14821522a FUN_14821522a body=106 status=ok
// SIG undefined FUN_14821522a(void)

void FUN_14821522a(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  int iVar1;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 0x60);
  if (*(longlong *)(*param_1 + 0x10 + (longlong)(int)param_2 * 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,_Dst + 0xc,(longlong)(int)(~param_2 + iVar1) * 0x60);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 148215294 FUN_148215294 body=62 status=ok
// SIG undefined FUN_148215294(void)

void FUN_148215294(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482152d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 1482152d2 FUN_1482152d2 body=112 status=ok
// SIG undefined FUN_1482152d2(void)

ulonglong FUN_1482152d2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14821530c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_14821530c:
  return param_2 & 0xffffffff;
}



// FUNCTION 148215342 FUN_148215342 body=101 status=ok
// SIG undefined FUN_148215342(void)

void FUN_148215342(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x60 + *param_1);
  FUN_140b2f4f1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1482153a8 FUN_1482153a8 body=48 status=ok
// SIG undefined FUN_1482153a8(void)

void FUN_1482153a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 1482153d8 FUN_1482153d8 body=132 status=ok
// SIG undefined FUN_1482153d8(void)

void FUN_1482153d8(longlong param_1,int param_2)

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



// FUNCTION 14821545e FUN_14821545e body=29 status=ok
// SIG undefined FUN_14821545e(void)

undefined8 FUN_14821545e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148215496 FUN_148215496 body=29 status=ok
// SIG undefined FUN_148215496(void)

bool FUN_148215496(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1482154b4 FUN_1482154b4 body=26 status=ok
// SIG undefined FUN_1482154b4(void)

bool FUN_1482154b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1482154ce FUN_1482154ce body=24 status=ok
// SIG undefined FUN_1482154ce(void)

bool FUN_1482154ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1482154e6 FUN_1482154e6 body=101 status=ok
// SIG undefined FUN_1482154e6(void)

void FUN_1482154e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a8900;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ae377a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14821554c FUN_14821554c body=101 status=ok
// SIG undefined FUN_14821554c(void)

void FUN_14821554c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a8900;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ae377a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482155b2 FUN_1482155b2 body=134 status=ok
// SIG undefined FUN_1482155b2(void)

void FUN_1482155b2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5a8900;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ae377a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148215629. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148215638 FUN_148215638 body=46 status=ok
// SIG undefined FUN_148215638(void)

void FUN_148215638(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148215663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148215666 FUN_148215666 body=146 status=ok
// SIG undefined FUN_148215666(void)

bool FUN_148215666(longlong param_1,undefined4 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))
              (*(int *)(param_1 + 0x28) + lVar2,param_2,*(undefined8 *)(param_1 + 8));
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482156fa FUN_1482156fa body=98 status=ok
// SIG undefined FUN_1482156fa(void)

void FUN_1482156fa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14821575c FUN_14821575c body=82 status=ok
// SIG undefined FUN_14821575c(void)

void FUN_14821575c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1482157ae FUN_1482157ae body=63 status=ok
// SIG undefined FUN_1482157ae(void)

void FUN_1482157ae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482157ee(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1482157ee FUN_1482157ee body=97 status=ok
// SIG undefined FUN_1482157ee(void)

ulonglong FUN_1482157ee(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 148215850 FUN_148215850 body=31 status=ok
// SIG undefined FUN_148215850(void)

undefined8 FUN_148215850(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14821588c FUN_14821588c body=93 status=ok
// SIG undefined FUN_14821588c(void)

void FUN_14821588c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae37810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1482158ea FUN_1482158ea body=126 status=ok
// SIG undefined FUN_1482158ea(void)

void FUN_1482158ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae37810;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148215959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148215968 FUN_148215968 body=21 status=ok
// SIG undefined FUN_148215968(void)

undefined8 FUN_148215968(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14821597e FUN_14821597e body=422 status=ok
// SIG undefined FUN_14821597e(void)

void FUN_14821597e(longlong *param_1)

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



// FUNCTION 148215b26 FUN_148215b26 body=305 status=ok
// SIG undefined FUN_148215b26(void)

undefined4 *
FUN_148215b26(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
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
  FUN_148215c58(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_148215d3e(param_1,uVar4,local_48);
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
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_14821597e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148215c58 FUN_148215c58 body=229 status=ok
// SIG undefined FUN_148215c58(void)

int * FUN_148215c58(longlong *param_1,int *param_2)

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



// FUNCTION 148215d3e FUN_148215d3e body=147 status=ok
// SIG undefined FUN_148215d3e(void)

void FUN_148215d3e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_148215dd2(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_148215da9;
        }
        iVar4 = *(int *)(puVar1 + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_148215da9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 148215dd2 FUN_148215dd2 body=138 status=ok
// SIG undefined FUN_148215dd2(void)

void FUN_148215dd2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 148215e5c FUN_148215e5c body=243 status=ok
// SIG undefined FUN_148215e5c(void)

int FUN_148215e5c(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined1 *)(param_2 + 5);
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_140056680(local_48,puVar5);
  local_58 = uVar1;
  (**(code **)(*param_1 + 0x48))(param_1,&local_38,local_48,param_2 + 3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_140e92164();
  puVar5 = local_38;
  if (local_30 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(*plVar4 + 0x78))(plVar4,puVar5);
  iVar6 = 4;
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_140e92164();
    puVar5 = local_38;
    if (local_30 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    bVar3 = (**(code **)(*plVar4 + 0x88))(plVar4,puVar5);
    iVar6 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) * 4;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 148215f50 FUN_148215f50 body=298 status=ok
// SIG undefined FUN_148215f50(void)

void FUN_148215f50(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  code *local_a8 [2];
  undefined8 *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar7 = param_1[3];
  uVar8 = param_1[4];
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = *(undefined1 *)(param_1 + 5);
  uVar6 = param_1[6];
  param_1[6] = 0;
  uVar3 = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)(param_1 + 7) = 0;
  local_a8[0] = (code *)0x0;
  local_d8 = uVar2;
  local_c0 = uVar1;
  local_98 = (undefined8 *)FUN_14001cc68(0x48,8);
  *local_98 = &PTR_LAB_14ae37d00;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98[1] = uVar4;
  local_98[2] = uVar5;
  *(undefined4 *)(local_98 + 3) = uVar2;
  local_98[4] = uVar7;
  local_98[5] = uVar8;
  *(undefined1 *)(local_98 + 6) = uVar1;
  local_98[7] = uVar6;
  *(undefined4 *)(local_98 + 8) = uVar3;
  if (local_98 + 1 != (undefined8 *)0x0) {
    local_a8[0] = FUN_143ae3bf0;
  }
  FUN_1407461b0(0x4ff,local_a8);
  FUN_1482160bc(&local_e8);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821607c FUN_14821607c body=32 status=ok
// SIG undefined FUN_14821607c(void)

undefined8 FUN_14821607c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,
                "..\\Plugins\\Gearbox\\GbxSaveSystem\\Source\\GbxSaveSystem\\Public\\GbxSaveObfuscationAES.h"
               );
  return param_2;
}



// FUNCTION 14821609c FUN_14821609c body=32 status=ok
// SIG undefined FUN_14821609c(void)

undefined8 FUN_14821609c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,
                "..\\Plugins\\Gearbox\\GbxSaveSystem\\Source\\GbxSaveSystem\\Public\\GbxSaveObfuscationCompress.h"
               );
  return param_2;
}



// FUNCTION 1482160bc FUN_1482160bc body=83 status=ok
// SIG undefined FUN_1482160bc(void)

void FUN_1482160bc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 6);
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 148216110 FUN_148216110 body=31 status=ok
// SIG undefined FUN_148216110(void)

undefined8 FUN_148216110(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14821614c FUN_14821614c body=93 status=ok
// SIG undefined FUN_14821614c(void)

void FUN_14821614c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae37b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1482161aa FUN_1482161aa body=123 status=ok
// SIG undefined FUN_1482161aa(void)

void FUN_1482161aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae37b80;
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



// FUNCTION 148216226 FUN_148216226 body=21 status=ok
// SIG undefined FUN_148216226(void)

undefined8 FUN_148216226(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14821623c FUN_14821623c body=126 status=ok
// SIG undefined FUN_14821623c(void)

undefined8 * FUN_14821623c(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3];
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 1482162ba FUN_1482162ba body=74 status=ok
// SIG undefined FUN_1482162ba(void)

void FUN_1482162ba(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[4];
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



// FUNCTION 148216304 FUN_148216304 body=130 status=ok
// SIG undefined FUN_148216304(void)

void FUN_148216304(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 148216387 FUN_148216387 body=55 status=ok
// SIG undefined FUN_148216387(void)

void FUN_148216387(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb44740 == 0) {
    uVar1 = FUN_1412da4f7();
    DAT_14cb44740 = FUN_14171c317(FUN_14647d628,uVar1,L"ECommonInputMode");
  }
  return;
}



// FUNCTION 1482163be FUN_1482163be body=55 status=ok
// SIG undefined FUN_1482163be(void)

void FUN_1482163be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb44758 == 0) {
    uVar1 = FUN_1412da4f7();
    DAT_14cb44758 = FUN_14171c317(FUN_14183ca28,uVar1,L"ECommonInputType");
  }
  return;
}



// FUNCTION 148216404 FUN_148216404 body=26 status=ok
// SIG undefined FUN_148216404(void)

undefined4 FUN_148216404(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    param_2 = 1;
  }
  else if ((iVar1 == 2) || (iVar1 != 1)) {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14821641e FUN_14821641e body=27 status=ok
// SIG undefined FUN_14821641e(void)

undefined4 FUN_14821641e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 != 0) && ((iVar1 == 2 || (param_2 = param_3, iVar1 != 1)))) {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 148216442 FUN_148216442 body=49 status=ok
// SIG undefined FUN_148216442(void)

void FUN_148216442(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148216474();
  FUN_1406fa324(param_3,&DAT_14cb44898);
  return;
}



// FUNCTION 148216474 FUN_148216474 body=101 status=ok
// SIG undefined FUN_148216474(void)

undefined8 * FUN_148216474(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb448a8) {
    FUN_144b3d300(&DAT_14cb448a8);
    if (DAT_14cb448a8 == -1) {
      FUN_143ae4416();
      atexit((_func_5014 *)&LAB_143ae4630);
      _Init_thread_footer(&DAT_14cb448a8);
    }
  }
  return &DAT_14cb44898;
}



// FUNCTION 148216510 FUN_148216510 body=52 status=ok
// SIG undefined FUN_148216510(void)

undefined8 FUN_148216510(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1401e2c50();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x27c));
}



// FUNCTION 148216544 FUN_148216544 body=52 status=ok
// SIG undefined FUN_148216544(void)

undefined8 FUN_148216544(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1401e2c50();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x27c));
}



// FUNCTION 148216578 FUN_148216578 body=95 status=ok
// SIG undefined FUN_148216578(void)

undefined8 FUN_148216578(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 200) + lVar1) == *param_3) {
        lVar2 = *(longlong *)(param_1 + 200) - lVar2;
        if (lVar2 == 0) {
          return 0;
        }
        FUN_140f13d9e(param_2,lVar2 + 0x20);
        return 1;
      }
      lVar2 = lVar2 + -0xd0;
      lVar1 = lVar1 + 0xd0;
    } while ((longlong)*(int *)(param_1 + 0xd0) * -0xd0 - lVar2 != 0);
  }
  return 0;
}



// FUNCTION 1482165d8 FUN_1482165d8 body=210 status=ok
// SIG undefined FUN_1482165d8(void)

undefined8 FUN_1482165d8(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_3 + 1);
  uVar6 = (ulonglong)uVar1;
  if (uVar6 != 0) {
    if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014821660a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,*param_3);
      return uVar2;
    }
    if ((longlong)(int)param_1[0x1c] != 0) {
      plVar3 = (longlong *)param_1[0x1b];
      plVar4 = plVar3 + (longlong)(int)param_1[0x1c] * 0x18;
      do {
        if (uVar1 == *(uint *)(plVar3 + 1) && 1 < (int)*(uint *)(plVar3 + 1)) {
          plVar5 = (longlong *)*param_3;
          do {
            lVar7 = 0;
            while (*(longlong *)(*plVar3 + lVar7) != *plVar5) {
              lVar7 = lVar7 + 0x18;
              if (uVar6 * 0x18 == lVar7) goto LAB_14821667b;
            }
            plVar5 = plVar5 + 3;
            if (plVar5 == (longlong *)*param_3 + uVar6 * 3) {
              if (plVar3 == (longlong *)0x0) {
                return 0;
              }
              FUN_140f13d9e(param_2,plVar3 + 2);
              return 1;
            }
          } while( true );
        }
LAB_14821667b:
        plVar3 = plVar3 + 0x18;
      } while (plVar3 != plVar4);
    }
  }
  return 0;
}



// FUNCTION 1482166aa FUN_1482166aa body=2464 status=ok
// SIG undefined FUN_1482166aa(void)

void FUN_1482166aa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *_Src;
  longlong *plVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  longlong *plVar22;
  longlong *plVar23;
  float fVar24;
  undefined1 auStack_478 [32];
  longlong *local_458;
  longlong *local_450;
  longlong *local_448;
  longlong local_440;
  longlong local_438;
  ulonglong uStack_430;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined4 local_408 [188];
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_420 = *param_2;
  *(int *)(local_420 + 0x94) = *(int *)(local_420 + 0x94) + 1;
  FUN_1468be722();
  if (*(char *)(*param_2 + 0x39) == '\0') {
    local_438 = 0;
    uStack_430 = 0;
    FUN_14581013e();
    iVar5 = *(int *)(param_1 + 0xd0);
    local_440 = param_1;
    if (1 < (longlong)iVar5) {
      lVar1 = *(longlong *)(param_1 + 200);
      memset(local_408,0,0x2f0);
      local_410 = (longlong)iVar5 * 0xd0 + lVar1 + -0xd0;
      local_418 = lVar1;
      fVar24 = logf((float)iVar5);
      local_408[0] = (int)(longlong)(fVar24 + fVar24);
      plVar17 = &local_418;
      do {
        _Src = (longlong *)*plVar17;
        plVar22 = (longlong *)plVar17[1];
        iVar5 = (int)plVar17[2];
        iVar4 = (int)((ulonglong)((longlong)plVar22 - (longlong)_Src) >> 4) * -0x3b13b13b;
        uVar15 = iVar4 + 1;
        local_458 = plVar17;
        if (iVar5 != 0) {
LAB_1482167c7:
          lVar1 = local_438;
          if (8 < (int)uVar15) {
            local_450 = (longlong *)CONCAT44(local_450._4_4_,iVar5);
            local_448 = plVar22;
            memcpy(local_118,_Src + (ulonglong)(uVar15 >> 1) * 0x1a,0xd0);
            memcpy(_Src + (ulonglong)(uVar15 >> 1) * 0x1a,_Src,0xd0);
            memcpy(_Src,local_118,0xd0);
            lVar1 = local_438;
            plVar13 = plVar22 + 0x1a;
            iVar5 = (int)uStack_430;
            uVar10 = (longlong)(int)uStack_430 * 0x18;
            plVar12 = _Src;
LAB_14821683f:
            plVar12 = plVar12 + 0x1a;
            if (plVar12 <= plVar22) goto code_r0x00014821684f;
            goto LAB_1482168d1;
          }
          plVar17 = local_458;
          if (_Src < plVar22) {
            local_450 = _Src + 0x1a;
            iVar5 = (int)uStack_430;
            lVar20 = (longlong)(int)uStack_430;
            plVar13 = _Src;
            plVar12 = local_450;
            do {
              for (; plVar12 <= plVar22; plVar12 = plVar12 + 0x1a) {
                iVar4 = -1;
                if (iVar5 == 0) {
                  iVar9 = -1;
                }
                else {
                  uVar10 = 0;
                  do {
                    if (*(longlong *)(lVar1 + uVar10) == *plVar13) {
                      iVar9 = (int)(uVar10 >> 3) * -0x55555555;
                      goto LAB_148216efe;
                    }
                    uVar10 = uVar10 + 0x18;
                  } while (lVar20 * 0x18 != uVar10);
                  iVar9 = -1;
LAB_148216efe:
                  uVar10 = 0;
                  do {
                    if (*(longlong *)(lVar1 + uVar10) == *plVar12) {
                      iVar4 = (int)(uVar10 >> 3) * -0x55555555;
                      break;
                    }
                    uVar10 = uVar10 + 0x18;
                  } while (lVar20 * 0x18 != uVar10);
                }
                if (iVar9 < iVar4) {
                  plVar13 = plVar12;
                }
              }
              plVar23 = plVar22 + -0x1a;
              memcpy(local_118,plVar13,0xd0);
              memcpy(plVar13,plVar22,0xd0);
              memcpy(plVar22,local_118,0xd0);
              plVar17 = local_458;
              plVar13 = _Src;
              plVar12 = local_450;
              plVar22 = plVar23;
            } while (_Src < plVar23);
          }
          goto LAB_148216f27;
        }
LAB_148216a44:
        lVar1 = local_438;
        plVar17 = local_458;
        if (uVar15 != 0) {
          uVar6 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          local_450 = (longlong *)(longlong)(int)uStack_430;
          uVar10 = (longlong)local_450 * 0x18;
          do {
            local_448 = (longlong *)(ulonglong)uVar6;
            plVar22 = local_448;
            plVar17 = local_458;
            while (uVar3 = uVar6 * 2 + 1, local_458 = plVar17, (int)uVar3 < (int)uVar15) {
              uVar8 = uVar6 * 2 + 2;
              uVar6 = uVar3;
              if ((int)uVar8 < (int)uVar15) {
                iVar5 = -1;
                if ((int)local_450 == 0) {
                  iVar4 = -1;
                }
                else {
                  uVar7 = 0;
                  do {
                    if (*(longlong *)(lVar1 + uVar7) == _Src[(longlong)(int)uVar8 * 0x1a]) {
                      iVar4 = (int)(uVar7 >> 3) * -0x55555555;
                      goto LAB_148216bc5;
                    }
                    uVar7 = uVar7 + 0x18;
                  } while (uVar10 != uVar7);
                  iVar4 = -1;
LAB_148216bc5:
                  uVar7 = 0;
                  do {
                    if (*(longlong *)(lVar1 + uVar7) == _Src[(longlong)(int)uVar3 * 0x1a]) {
                      iVar5 = (int)(uVar7 >> 3) * -0x55555555;
                      break;
                    }
                    uVar7 = uVar7 + 0x18;
                  } while (uVar10 != uVar7);
                }
                uVar6 = uVar8;
                if (iVar4 < iVar5) {
                  uVar6 = uVar3;
                }
              }
              if ((int)local_450 == 0) break;
              plVar13 = _Src + (longlong)(int)plVar22 * 0x1a;
              plVar22 = _Src + (longlong)(int)uVar6 * 0x1a;
              uVar7 = 0;
              do {
                if (*(longlong *)(lVar1 + uVar7) == *plVar13) {
                  iVar5 = (int)(uVar7 >> 3) * -0x55555555;
                  goto LAB_148216b3c;
                }
                uVar7 = uVar7 + 0x18;
              } while (uVar10 != uVar7);
              iVar5 = -1;
LAB_148216b3c:
              uVar7 = 0;
              do {
                if (*(longlong *)(lVar1 + uVar7) == *plVar22) {
                  iVar4 = (int)(uVar7 >> 3) * -0x55555555;
                  goto LAB_148216b61;
                }
                uVar7 = uVar7 + 0x18;
              } while (uVar10 != uVar7);
              iVar4 = -1;
LAB_148216b61:
              if (iVar4 <= iVar5) break;
              memcpy(local_118,plVar13,0xd0);
              memcpy(plVar13,plVar22,0xd0);
              memcpy(plVar22,local_118,0xd0);
              plVar22 = (longlong *)(ulonglong)uVar6;
              plVar17 = local_458;
            }
            uVar6 = (int)local_448 - 1;
          } while ((int)local_448 != 0);
          if (1 < (int)uVar15) {
            uVar7 = (ulonglong)uVar15 - 1;
            memcpy(local_118,_Src,0xd0);
            memcpy(_Src,_Src + uVar7 * 0x1a,0xd0);
            memcpy(_Src + uVar7 * 0x1a,local_118,0xd0);
            if (uVar15 != 2) {
              do {
                iVar5 = 0;
                iVar9 = 1;
                iVar4 = 0;
                do {
                  iVar5 = iVar5 + 2;
                  iVar16 = iVar9;
                  if ((longlong)iVar5 < (longlong)uVar7) {
                    iVar21 = -1;
                    if ((int)local_450 == 0) {
                      iVar18 = -1;
                    }
                    else {
                      uVar19 = 0;
                      do {
                        if (*(longlong *)(lVar1 + uVar19) == _Src[(longlong)iVar5 * 0x1a]) {
                          iVar18 = (int)(uVar19 >> 3) * -0x55555555;
                          goto LAB_148216da7;
                        }
                        uVar19 = uVar19 + 0x18;
                      } while (uVar10 != uVar19);
                      iVar18 = -1;
LAB_148216da7:
                      uVar19 = 0;
                      do {
                        if (*(longlong *)(lVar1 + uVar19) == _Src[(longlong)iVar9 * 0x1a]) {
                          iVar21 = (int)(uVar19 >> 3) * -0x55555555;
                          break;
                        }
                        uVar19 = uVar19 + 0x18;
                      } while (uVar10 != uVar19);
                    }
                    iVar16 = iVar5;
                    if (iVar18 < iVar21) {
                      iVar16 = iVar9;
                    }
                  }
                  if ((int)local_450 == 0) break;
                  plVar22 = _Src + (longlong)iVar4 * 0x1a;
                  plVar17 = _Src + (longlong)iVar16 * 0x1a;
                  uVar19 = 0;
                  do {
                    if (*(longlong *)(lVar1 + uVar19) == *plVar22) {
                      iVar5 = (int)(uVar19 >> 3) * -0x55555555;
                      goto LAB_148216d1a;
                    }
                    uVar19 = uVar19 + 0x18;
                  } while (uVar10 != uVar19);
                  iVar5 = -1;
LAB_148216d1a:
                  uVar19 = 0;
                  do {
                    if (*(longlong *)(lVar1 + uVar19) == *plVar17) {
                      iVar4 = (int)(uVar19 >> 3) * -0x55555555;
                      goto LAB_148216d3f;
                    }
                    uVar19 = uVar19 + 0x18;
                  } while (uVar10 != uVar19);
                  iVar4 = -1;
LAB_148216d3f:
                  if (iVar4 <= iVar5) break;
                  memcpy(local_118,plVar22,0xd0);
                  memcpy(plVar22,plVar17,0xd0);
                  memcpy(plVar17,local_118,0xd0);
                  iVar5 = iVar16 * 2;
                  iVar9 = iVar16 * 2 + 1;
                  iVar4 = iVar16;
                } while ((longlong)iVar9 < (longlong)uVar7);
                memcpy(local_118,_Src,0xd0);
                memcpy(_Src,_Src + (uVar7 - 1) * 0x1a,0xd0);
                memcpy(_Src + (uVar7 - 1) * 0x1a,local_118,0xd0);
                bVar14 = 2 < uVar7;
                uVar7 = uVar7 - 1;
                plVar17 = local_458;
              } while (bVar14);
            }
          }
        }
LAB_148216f27:
        plVar17 = plVar17 + -3;
      } while (&local_418 <= plVar17);
      iVar5 = *(int *)(local_440 + 0xd0);
    }
    if (iVar5 != 0) {
      lVar1 = *(longlong *)(local_440 + 200);
      local_450 = (longlong *)(lVar1 + 0x128);
      iVar9 = 0;
      bVar14 = *(longlong *)(lVar1 + 0x58) == 0;
      iVar4 = 0;
      do {
        lVar20 = (longlong)iVar4;
        iVar16 = iVar4 + 1;
        if (iVar4 + 1 < iVar5) {
          iVar16 = iVar5;
        }
        lVar11 = lVar20 * 0xd0;
        plVar17 = local_450 + lVar20 * 0x1a;
        iVar21 = iVar4;
        do {
          lVar20 = lVar20 + 1;
          iVar18 = iVar16;
          if (iVar5 <= lVar20) break;
          lVar2 = *plVar17;
          iVar21 = iVar21 + 1;
          plVar17 = plVar17 + 0x1a;
          iVar18 = iVar21;
        } while (bVar14 == (lVar2 == 0));
        iVar16 = iVar18 - iVar4;
        if (bVar14 == false) {
          if (iVar9 != iVar4) {
            memmove((void *)((longlong)iVar9 * 0xd0 + lVar1),(void *)(lVar11 + lVar1),
                    (longlong)iVar16 * 0xd0);
          }
          iVar9 = iVar9 + iVar16;
        }
        else {
          FUN_1412c2c53(lVar11 + lVar1,iVar16);
        }
        bVar14 = (bool)(bVar14 ^ 1);
        iVar4 = iVar18;
      } while (lVar20 < iVar5);
      *(int *)(local_440 + 0xd0) = iVar9;
    }
    FUN_144a65a1e(local_438,uStack_430 & 0xffffffff);
    if (local_438 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014821684f:
  iVar4 = -1;
  if (iVar5 == 0) {
    iVar9 = -1;
  }
  else {
    uVar7 = 0;
    do {
      if (*(longlong *)(lVar1 + uVar7) == *_Src) {
        iVar9 = (int)(uVar7 >> 3) * -0x55555555;
        goto LAB_148216889;
      }
      uVar7 = uVar7 + 0x18;
    } while (uVar10 != uVar7);
    iVar9 = -1;
LAB_148216889:
    uVar7 = 0;
    do {
      if (*(longlong *)(lVar1 + uVar7) == *plVar12) {
        iVar4 = (int)(uVar7 >> 3) * -0x55555555;
        break;
      }
      uVar7 = uVar7 + 0x18;
    } while (uVar10 != uVar7);
  }
  if (iVar4 <= iVar9) goto LAB_14821683f;
LAB_1482168d1:
  do {
    plVar23 = plVar13;
    plVar13 = plVar23 + -0x1a;
    if (plVar13 <= _Src) break;
    iVar4 = -1;
    if (iVar5 == 0) {
      iVar9 = -1;
    }
    else {
      uVar7 = 0;
      do {
        if (*(longlong *)(lVar1 + uVar7) == *plVar13) {
          iVar9 = (int)(uVar7 >> 3) * -0x55555555;
          goto LAB_1482168ae;
        }
        uVar7 = uVar7 + 0x18;
      } while (uVar10 != uVar7);
      iVar9 = -1;
LAB_1482168ae:
      uVar7 = 0;
      do {
        if (*(longlong *)(lVar1 + uVar7) == *_Src) {
          iVar4 = (int)(uVar7 >> 3) * -0x55555555;
          break;
        }
        uVar7 = uVar7 + 0x18;
      } while (uVar10 != uVar7);
    }
  } while (iVar4 <= iVar9);
  if (plVar12 <= plVar13) {
    memcpy(local_118,plVar12,0xd0);
    memcpy(plVar12,plVar13,0xd0);
    memcpy(plVar13,local_118,0xd0);
    goto LAB_14821683f;
  }
  memcpy(local_118,_Src,0xd0);
  memcpy(_Src,plVar13,0xd0);
  memcpy(plVar13,local_118,0xd0);
  iVar5 = (int)local_450 + -1;
  plVar23 = plVar23 + -0x34;
  if ((longlong)plVar23 - (longlong)_Src < (longlong)local_448 - (longlong)plVar12) {
    if (plVar12 < plVar22) {
      *local_458 = (longlong)plVar12;
      local_458[1] = (longlong)plVar22;
      *(int *)(local_458 + 2) = iVar5;
      local_458 = local_458 + 3;
    }
    plVar17 = local_458;
    if (plVar13 <= _Src + 0x1a) goto LAB_148216f27;
  }
  else {
    plVar17 = local_458;
    if (_Src + 0x1a < plVar13) {
      *local_458 = (longlong)_Src;
      local_458[1] = (longlong)plVar23;
      *(int *)(local_458 + 2) = iVar5;
      plVar17 = local_458 + 3;
    }
    plVar23 = plVar22;
    _Src = plVar12;
    if (plVar22 <= plVar12) goto LAB_148216f27;
  }
  local_458 = plVar17;
  iVar4 = (int)((ulonglong)((longlong)plVar23 - (longlong)_Src) >> 4) * -0x3b13b13b;
  uVar15 = iVar4 + 1;
  plVar22 = plVar23;
  if (iVar5 == 0) goto LAB_148216a44;
  goto LAB_1482167c7;
}



// FUNCTION 14821704c FUN_14821704c body=57 status=ok
// SIG undefined FUN_14821704c(void)

void FUN_14821704c(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_148218d24(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_145fdd056(param_1);
  return;
}



// FUNCTION 148217086 FUN_148217086 body=209 status=ok
// SIG undefined FUN_148217086(void)

undefined4
FUN_148217086(longlong param_1,undefined8 param_2,longlong param_3,char param_4,longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  FUN_145fdd056();
  iVar3 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar8);
      if (lVar5 != 0) {
        plVar7 = *(longlong **)(lVar5 + 0x110);
        if (plVar7 == (longlong *)0x0) {
          FUN_140aa6c08(lVar5);
          plVar7 = *(longlong **)(lVar5 + 0x110);
          if (plVar7 == (longlong *)0x0) goto LAB_1482170e8;
        }
        if (((char)plVar7[5] == param_4) &&
           ((param_4 != '\x01' || (*(longlong *)((longlong)plVar7 + 0x2c) == param_5)))) {
          uVar6 = (**(code **)(*plVar7 + 0x2a8))(plVar7,param_2,param_3);
          goto LAB_14821710b;
        }
      }
LAB_1482170e8:
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  uVar6 = 0;
LAB_14821710b:
  plVar7 = *(longlong **)(param_3 + 0x10);
  if (plVar7 != (longlong *)0x0) {
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
  return uVar6;
}



// FUNCTION 148217158 FUN_148217158 body=185 status=ok
// SIG undefined FUN_148217158(void)

undefined8
FUN_148217158(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  FUN_145fdd056();
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        plVar5 = *(longlong **)(lVar3 + 0x110);
        if (plVar5 == (longlong *)0x0) {
          FUN_140aa6c08(lVar3);
          plVar5 = *(longlong **)(lVar3 + 0x110);
          if (plVar5 == (longlong *)0x0) goto LAB_1482171ba;
        }
        if (((char)plVar5[5] == param_4) &&
           ((param_4 != '\x01' || (*(longlong *)((longlong)plVar5 + 0x2c) == param_5)))) {
                    /* WARNING: Could not recover jumptable at 0x00014821720e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar5 + 0x2a0))(plVar5,param_2,param_3);
          return uVar4;
        }
      }
LAB_1482171ba:
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 148217212 FUN_148217212 body=205 status=ok
// SIG undefined FUN_148217212(void)

undefined4
FUN_148217212(longlong param_1,undefined8 param_2,longlong param_3,char param_4,longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar3) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar8);
      if (lVar5 != 0) {
        plVar7 = *(longlong **)(lVar5 + 0x110);
        if (plVar7 == (longlong *)0x0) {
          FUN_140aa6c08(lVar5);
          plVar7 = *(longlong **)(lVar5 + 0x110);
          if (plVar7 == (longlong *)0x0) goto LAB_148217270;
        }
        if (((char)plVar7[5] == param_4) &&
           ((param_4 != '\x01' || (*(longlong *)((longlong)plVar7 + 0x2c) == *param_5)))) {
          uVar6 = (**(code **)(*plVar7 + 0x2a8))(plVar7,param_2,param_3);
          goto LAB_148217293;
        }
      }
LAB_148217270:
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  uVar6 = 0;
LAB_148217293:
  plVar7 = *(longlong **)(param_3 + 0x10);
  if (plVar7 != (longlong *)0x0) {
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
  return uVar6;
}



// FUNCTION 1482172e0 FUN_1482172e0 body=181 status=ok
// SIG undefined FUN_1482172e0(void)

undefined8
FUN_1482172e0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        plVar5 = *(longlong **)(lVar3 + 0x110);
        if (plVar5 == (longlong *)0x0) {
          FUN_140aa6c08(lVar3);
          plVar5 = *(longlong **)(lVar3 + 0x110);
          if (plVar5 == (longlong *)0x0) goto LAB_14821733e;
        }
        if (((char)plVar5[5] == param_4) &&
           ((param_4 != '\x01' || (*(longlong *)((longlong)plVar5 + 0x2c) == *param_5)))) {
                    /* WARNING: Could not recover jumptable at 0x000148217392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar5 + 0x2a0))(plVar5,param_2,param_3);
          return uVar4;
        }
      }
LAB_14821733e:
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 148217396 FUN_148217396 body=86 status=ok
// SIG undefined FUN_148217396(void)

void FUN_148217396(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (DAT_14c872a72 == '\0') {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1482173ec FUN_1482173ec body=150 status=ok
// SIG undefined FUN_1482173ec(void)

void FUN_1482173ec(longlong param_1,byte param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [39];
  char local_41;
  undefined8 local_40;
  undefined8 *local_38;
  char *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + (ulonglong)((uint)param_2 * 0x50);
  local_41 = param_4;
  local_40 = param_3;
  if (param_4 == '\0') {
    FUN_148218e84(lVar1 + 0x30,param_3);
  }
  else {
    local_38 = &local_40;
    local_30 = &local_41;
    FUN_146eff18a(lVar1 + 0x30,local_24,&local_38,0);
  }
  *(bool *)(param_1 + 0x29 + (ulonglong)param_2) = *(int *)(lVar1 + 100) < *(int *)(lVar1 + 0x38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148217484 FUN_148217484 body=14 status=ok
// SIG undefined FUN_148217484(void)

undefined8 * FUN_148217484(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x94);
  return param_2;
}



// FUNCTION 148217496 FUN_148217496 body=37 status=ok
// SIG undefined FUN_148217496(void)

void FUN_148217496(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1482174bc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1482174bc FUN_1482174bc body=105 status=ok
// SIG undefined FUN_1482174bc(void)

undefined1 FUN_1482174bc(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb448ec) {
    FUN_144b3d300(&DAT_14cb448ec);
    if (DAT_14cb448ec == -1) {
      FUN_14821789c();
      lVar1 = FUN_1409e7438();
      DAT_14cb448e8 = *(undefined1 *)(lVar1 + 0xda);
      _Init_thread_footer(&DAT_14cb448ec);
    }
  }
  return DAT_14cb448e8;
}



// FUNCTION 148217550 FUN_148217550 body=162 status=ok
// SIG undefined FUN_148217550(void)

longlong * FUN_148217550(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if ((((lVar1 == 0) || (lVar2 = FUN_1459099b8(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar1 = *(longlong *)(param_1 + 0x110), lVar1 == 0)))) {
LAB_148217566:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
      if (lVar2 == 0) goto LAB_148217566;
    }
    lVar1 = *(longlong *)(lVar2 + 0x28);
    *param_2 = lVar1;
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c();
    }
    param_2[1] = *(longlong *)(lVar2 + 0x30);
  }
  return param_2;
}



// FUNCTION 1482175f2 FUN_1482175f2 body=162 status=ok
// SIG undefined FUN_1482175f2(void)

longlong * FUN_1482175f2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if ((((lVar1 == 0) || (lVar2 = FUN_1459099b8(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar1 = *(longlong *)(param_1 + 0x110), lVar1 == 0)))) {
LAB_148217608:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
      if (lVar2 == 0) goto LAB_148217608;
    }
    lVar1 = *(longlong *)(lVar2 + 0x38);
    *param_2 = lVar1;
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c();
    }
    param_2[1] = *(longlong *)(lVar2 + 0x40);
  }
  return param_2;
}



// FUNCTION 148217694 FUN_148217694 body=156 status=ok
// SIG undefined FUN_148217694(void)

longlong * FUN_148217694(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x110);
  if ((((lVar2 != 0) && (lVar1 = FUN_1459099b8(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30 && (lVar2 = *(longlong *)(param_1 + 0x110), lVar2 != 0)))) {
    lVar1 = *(longlong *)(lVar2 + 0x110);
    if (lVar1 == 0) {
      FUN_140aa6c08(lVar2);
      lVar1 = *(longlong *)(lVar2 + 0x110);
      if (lVar1 == 0) goto LAB_1482176aa;
    }
    lVar2 = FUN_148217730(lVar1 + 0x48);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return param_2;
    }
    if (DAT_14c950c29 == '\0') {
      return param_2;
    }
    FUN_1456cec3c(lVar2);
    return param_2;
  }
LAB_1482176aa:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 148217730 FUN_148217730 body=100 status=ok
// SIG undefined FUN_148217730(void)

longlong FUN_148217730(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_1459d6fd2(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148217794 FUN_148217794 body=131 status=ok
// SIG undefined FUN_148217794(void)

undefined8 FUN_148217794(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if ((((lVar1 != 0) && (lVar3 = FUN_1459099b8(), lVar3 != 0)) &&
      (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30 && (*(longlong *)(param_1 + 0x110) != 0)) &&
      (cVar2 = FUN_1482174bc(), cVar2 != '\0')))) {
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0x110);
      if (lVar3 == 0) {
        FUN_140aa6c08(lVar1);
        lVar3 = *(longlong *)(lVar1 + 0x110);
      }
    }
    return *(undefined8 *)(lVar3 + 0x70);
  }
  return 0;
}



// FUNCTION 148217818 FUN_148217818 body=131 status=ok
// SIG undefined FUN_148217818(void)

undefined8 FUN_148217818(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if ((((lVar1 != 0) && (lVar3 = FUN_1459099b8(), lVar3 != 0)) &&
      (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30 && (*(longlong *)(param_1 + 0x110) != 0)) &&
      (cVar2 = FUN_1482174bc(), cVar2 != '\0')))) {
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0x110);
      if (lVar3 == 0) {
        FUN_140aa6c08(lVar1);
        lVar3 = *(longlong *)(lVar1 + 0x110);
      }
    }
    return *(undefined8 *)(lVar3 + 0x78);
  }
  return 0;
}



// FUNCTION 14821789c FUN_14821789c body=104 status=ok
// SIG undefined FUN_14821789c(void)

void FUN_14821789c(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"CommonInput",1);
  uVar1 = FUN_144a52528();
  FUN_1402c9134(uVar1,local_20,local_14,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821793c FUN_14821793c body=40 status=ok
// SIG undefined FUN_14821793c(void)

void FUN_14821793c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_140902dbe();
  *param_3 = *(undefined1 *)(lVar1 + 0x40);
  return;
}



// FUNCTION 148217964 FUN_148217964 body=17 status=ok
// SIG undefined FUN_148217964(void)

undefined1 FUN_148217964(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140902dbe();
  return *(undefined1 *)(lVar1 + 0x40);
}



// FUNCTION 14821797c FUN_14821797c body=157 status=ok
// SIG undefined FUN_14821797c(void)

void FUN_14821797c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *(char *)(param_1 + 0x91) == local_21;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148217a3a FUN_148217a3a body=151 status=ok
// SIG undefined FUN_148217a3a(void)

void FUN_148217a3a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ae4dbe(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148217ad2 FUN_148217ad2 body=174 status=ok
// SIG undefined FUN_148217ad2(void)

void FUN_148217ad2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_140902dbe();
  if (*(char *)(lVar2 + 0x4c) == '\x01') {
    *(undefined8 *)(param_1 + 0x94) = uVar1;
    FUN_140dc023e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148217ba2 FUN_148217ba2 body=11 status=ok
// SIG undefined FUN_148217ba2(void)

bool FUN_148217ba2(void)

{
  return DAT_14c762a50 != 0;
}



// FUNCTION 148217bbe FUN_148217bbe body=9 status=ok
// SIG undefined FUN_148217bbe(void)

void FUN_148217bbe(longlong param_1)

{
  FUN_1482173ec(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 148217bc8 FUN_148217bc8 body=12 status=ok
// SIG undefined FUN_148217bc8(void)

undefined8 FUN_148217bc8(longlong param_1,byte param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x48) >> 8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x29 + (ulonglong)param_2));
}



// FUNCTION 148217bd4 FUN_148217bd4 body=206 status=ok
// SIG undefined FUN_148217bd4(void)

void FUN_148217bd4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x28) = 1;
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_38);
    if (local_38 != 0) {
      local_48 = local_38;
      local_40 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      FUN_148217ca4(param_1,&local_48,param_2,param_3);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148217ca4 FUN_148217ca4 body=693 status=ok
// SIG undefined FUN_148217ca4(void)

void FUN_148217ca4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_138 [46];
  undefined2 local_10a;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined8 local_fc;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined7 local_a0;
  undefined4 uStack_99;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_148217f5a(param_1,&local_90);
  FUN_14007d9a2(*param_2,&local_108);
  fVar6 = (float)local_108;
  fVar8 = local_108._4_4_;
  if ((param_4 != '\0') ||
     ((int)local_108._4_4_ != (int)local_88 || (int)(float)local_108 != (int)local_90)) {
    FUN_1469b745c(*param_2);
    FUN_14007d9a2(*param_2,&local_108);
    uVar5 = DAT_14c98e618;
    plVar3 = DAT_14c968090;
    plVar4 = DAT_14c968088;
    fVar7 = (float)local_108;
    fVar9 = local_108._4_4_;
    if (DAT_14c968090 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_10a);
    plVar4 = DAT_14c966e90;
    local_c0 = DAT_14c966e88;
    local_c8 = DAT_14c966e80;
    if (DAT_14c966e90 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
      UNLOCK();
    }
    local_d0 = FUN_1428f1d4a();
    local_100 = local_10a;
    local_fe = 0;
    local_fc = 0;
    local_f0 = 0;
    local_108 = &PTR_FUN_149eda650;
    local_e8 = fVar7;
    local_e4 = fVar9;
    local_e0 = fVar6;
    local_dc = fVar8;
    local_d4 = fVar9 - fVar8;
    local_d8 = fVar7 - fVar6;
    local_b8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_b0 = 10;
    local_a8 = 0x3f800000;
    local_a4 = 0;
    local_a0 = 0;
    uStack_99 = 0;
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    FUN_14058dffc(uVar5,&local_108,0);
    plVar4 = local_b8;
    local_108 = &PTR_FUN_149eda650;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_b8)(local_b8);
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148217f5a FUN_148217f5a body=790 status=ok
// SIG undefined FUN_148217f5a(void)

double * FUN_148217f5a(longlong *param_1,double *param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar16 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar16 != 0) && (cVar14 = FUN_144b2c332(lVar16), cVar14 != '\0')) &&
      (lVar16 = FUN_1449baec6(lVar16), lVar16 != 0)) &&
     ((*(longlong *)(lVar16 + 0xf8) != 0 &&
      (plVar8 = *(longlong **)(lVar16 + 0x118), plVar8 != (longlong *)0x0)))) {
    iVar15 = (int)plVar8[1];
    do {
      if (iVar15 == 0) goto LAB_1482181f5;
      LOCK();
      iVar13 = (int)plVar8[1];
      bVar18 = iVar15 == iVar13;
      if (bVar18) {
        *(int *)(plVar8 + 1) = iVar15 + 1;
        iVar13 = iVar15;
      }
      iVar15 = iVar13;
      UNLOCK();
    } while (!bVar18);
    lVar9 = *(longlong *)(lVar16 + 0x110);
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
    if (lVar9 != 0) {
      FUN_140761b7a(lVar16,&local_e0);
      if (local_e0 == 0) {
        uVar10 = *(undefined4 *)((longlong)param_3 + 4);
        uVar11 = *(undefined4 *)(param_3 + 1);
        uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
        *(undefined4 *)param_2 = *(undefined4 *)param_3;
        *(undefined4 *)((longlong)param_2 + 4) = uVar10;
        *(undefined4 *)(param_2 + 1) = uVar11;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
      }
      else {
        pfVar17 = (float *)FUN_144b013e4();
        fVar3 = pfVar17[7];
        fVar4 = pfVar17[8];
        fVar5 = pfVar17[9];
        fVar6 = pfVar17[10];
        fVar20 = 1.0 / (fVar3 * fVar6 - fVar5 * fVar4);
        fVar7 = pfVar17[0xc];
        fVar21 = -pfVar17[0xb];
        fVar19 = -fVar4 * fVar20 * (float)*param_3 + fVar3 * fVar20 * (float)param_3[1] +
                 (fVar21 * -fVar4 * fVar20 - fVar3 * fVar20 * fVar7);
        fVar20 = fVar20 * fVar6 * (float)*param_3 + -fVar5 * fVar20 * (float)param_3[1] +
                 (fVar21 * fVar20 * fVar6 - -fVar5 * fVar20 * fVar7);
        if (*pfVar17 + -1.0 <= fVar20) {
          fVar20 = *pfVar17 + -1.0;
        }
        if (pfVar17[1] + -1.0 <= fVar19) {
          fVar19 = pfVar17[1] + -1.0;
        }
        if (fVar19 <= 1.0) {
          fVar19 = 1.0;
        }
        if (fVar20 <= 1.0) {
          fVar20 = 1.0;
        }
        *param_2 = (double)(fVar20 * fVar3 + fVar19 * fVar5 + pfVar17[0xb]);
        param_2[1] = (double)(fVar4 * fVar20 + fVar6 * fVar19 + fVar7);
      }
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_d8 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar2 = (int *)((longlong)local_d8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d8 + 0x10))(local_d8);
          }
        }
      }
      if ((local_d0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_1482181f5:
  uVar10 = *(undefined4 *)((longlong)param_3 + 4);
  uVar11 = *(undefined4 *)(param_3 + 1);
  uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar10;
  *(undefined4 *)(param_2 + 1) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_108);
}



// FUNCTION 148218272 FUN_148218272 body=43 status=ok
// SIG undefined FUN_148218272(void)

undefined8 FUN_148218272(undefined8 param_1,int param_2)

{
  FUN_146010104();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 1482182a6 FUN_1482182a6 body=41 status=ok
// SIG undefined FUN_1482182a6(void)

void FUN_1482182a6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_140ca8f8e(param_2 + 4);
  *(undefined1 *)((longlong)param_2 + 0x3c) = 3;
  return;
}



// FUNCTION 1482182ee FUN_1482182ee body=75 status=ok
// SIG undefined FUN_1482182ee(void)

undefined1 FUN_1482182ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1413a517a(param_2,param_3);
    FUN_140f13d9e(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0xd0;
    param_3 = param_3 + 0xd0;
  }
  return 1;
}



// FUNCTION 148218362 FUN_148218362 body=59 status=ok
// SIG undefined FUN_148218362(void)

undefined8 FUN_148218362(longlong *param_1)

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



// FUNCTION 1482183ae FUN_1482183ae body=38 status=ok
// SIG undefined FUN_1482183ae(void)

void FUN_1482183ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_148218422(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}


