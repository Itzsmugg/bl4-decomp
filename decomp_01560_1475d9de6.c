// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1475d9de6 FUN_1475d9de6 body=132 status=ok
// SIG undefined FUN_1475d9de6(void)

void FUN_1475d9de6(longlong param_1,int param_2)

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



// FUNCTION 1475d9e6c FUN_1475d9e6c body=116 status=ok
// SIG undefined FUN_1475d9e6c(void)

undefined1 * FUN_1475d9e6c(undefined1 *param_1)

{
  char cVar1;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406fa5f4(local_48);
  cVar1 = FUN_140e9550e(local_48,&local_49);
  if (cVar1 != '\0') {
    *param_1 = local_49;
  }
  param_1[1] = cVar1 != '\0';
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1475d9ee2 FUN_1475d9ee2 body=214 status=ok
// SIG undefined FUN_1475d9ee2(void)

undefined2 *
FUN_1475d9ee2(longlong param_1,undefined2 *param_2,longlong param_3,undefined1 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined2 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_1475da186(param_1 + 8,&local_60);
  *(undefined1 *)local_58 = *param_4;
  local_58 = &local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1475da2e8(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d9fba FUN_1475d9fba body=214 status=ok
// SIG undefined FUN_1475d9fba(void)

undefined2 *
FUN_1475d9fba(longlong param_1,undefined2 *param_2,longlong param_3,undefined1 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined2 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_1475da186(param_1 + 8,&local_60);
  *(undefined1 *)local_58 = *param_4;
  local_58 = &local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1475da2e8(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475da092 FUN_1475da092 body=242 status=ok
// SIG undefined FUN_1475da092(void)

undefined2 *
FUN_1475da092(longlong param_1,undefined2 *param_2,longlong param_3,undefined1 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined2 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_1475da186(param_1 + 8,&local_58);
  *(undefined1 *)local_50 = *param_4;
  local_50 = &local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_1475da2e8(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475da186 FUN_1475da186 body=220 status=ok
// SIG undefined FUN_1475da186(void)

int * FUN_1475da186(longlong *param_1,int *param_2)

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
      FUN_1475da262(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 8 + *param_1;
  return param_2;
}



// FUNCTION 1475da262 FUN_1475da262 body=132 status=ok
// SIG undefined FUN_1475da262(void)

void FUN_1475da262(longlong param_1,int param_2)

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



// FUNCTION 1475da2e8 FUN_1475da2e8 body=339 status=ok
// SIG undefined FUN_1475da2e8(void)

undefined4 * FUN_1475da2e8(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475da43c(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_1475da522(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1475d96d8(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475da43c FUN_1475da43c body=229 status=ok
// SIG undefined FUN_1475da43c(void)

int * FUN_1475da43c(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 1475da522 FUN_1475da522 body=93 status=ok
// SIG undefined FUN_1475da522(void)

undefined8 FUN_1475da522(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1475d98a8(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1475d9622(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1475da590 FUN_1475da590 body=48 status=ok
// SIG undefined FUN_1475da590(void)

void FUN_1475da590(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1475da5c0 FUN_1475da5c0 body=31 status=ok
// SIG undefined FUN_1475da5c0(void)

undefined8 FUN_1475da5c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475da5e0 FUN_1475da5e0 body=322 status=ok
// SIG undefined FUN_1475da5e0(void)

void FUN_1475da5e0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined8 *local_120;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined2 local_108;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [13];
  byte local_eb;
  uint local_e8;
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14009d2a0();
  local_110 = *(undefined2 *)(lVar2 + 0x4a);
  local_10a = *(undefined2 *)(lVar2 + 0x108);
  local_10e = *(undefined4 *)(lVar2 + 0x104);
  local_108 = *(undefined2 *)*param_3;
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_112 = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_112;
  local_128 = &local_110;
  FUN_146121c78(&local_110,local_f8);
  local_e8 = *(uint *)(param_7 + 0x290);
  local_eb = local_eb & 0xfe | (local_e8 & 0xfffffeff) == 1;
  local_148 = param_6;
  local_140 = param_2;
  FUN_1432f5bee(local_f8,&local_120,param_7 + 0x28,param_5);
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_120 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475da724 FUN_1475da724 body=130 status=ok
// SIG undefined FUN_1475da724(void)

void FUN_1475da724(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1475db55e(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475da7a8 FUN_1475da7a8 body=616 status=ok
// SIG undefined FUN_1475da7a8(void)

void FUN_1475da7a8(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475db864(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475daa12 FUN_1475daa12 body=267 status=ok
// SIG undefined FUN_1475daa12(void)

void FUN_1475daa12(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = (int)param_4[1];
  if (0 < iVar3) {
    lVar2 = *param_6;
    lVar5 = 0;
    do {
      if (*(short *)(*param_4 + lVar5 * 2) != -1) {
        FUN_1432d4ca4(param_5 + 0x28,&local_60);
        lVar4 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)*param_3);
        if ((local_50 != 0) &&
           (puVar1 = (undefined8 *)(local_50 + lVar4 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)((ulonglong)*(ushort *)(*param_3 + 2) + lVar2 + lVar5 * 8) = *puVar1;
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475dab20 FUN_1475dab20 body=29 status=ok
// SIG undefined FUN_1475dab20(void)

undefined8 FUN_1475dab20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475dab3e FUN_1475dab3e body=127 status=ok
// SIG undefined FUN_1475dab3e(void)

undefined4 * FUN_1475dab3e(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475dabbe FUN_1475dabbe body=238 status=ok
// SIG undefined FUN_1475dabbe(void)

void FUN_1475dabbe(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dacae FUN_1475dacae body=622 status=ok
// SIG undefined FUN_1475dacae(void)

void FUN_1475dacae(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_1475dad01;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1475dad01:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_130 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_138 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_110,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_4) goto LAB_1475dad72;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1475dad72:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_d0;
  lVar7 = local_e8;
  lVar3 = local_100;
  uVar5 = local_138;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar8;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_98 = local_f8;
  local_90 = local_f0;
  local_f8 = 0;
  local_88 = local_e8;
  local_e8 = 0;
  local_80 = local_e0;
  local_78 = local_d8;
  local_e0 = 0;
  local_70 = local_d0;
  local_d0 = 0;
  local_58 = local_138;
  local_c8 = puVar8;
  local_c0 = iVar2;
  local_b8 = uVar4;
  local_68 = puVar9;
  local_60 = iVar1;
  FUN_1432f59b8();
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  if (lVar3 != 0) {
    local_128 = lVar3;
  }
  if (lVar7 != 0) {
    lStack_120 = lVar7;
  }
  if (lVar6 != 0) {
    local_118 = lVar6;
  }
  local_148 = uVar5;
  FUN_1406f91b6(local_130,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_128);
  FUN_1475daf1e(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475daf1e FUN_1475daf1e body=94 status=ok
// SIG undefined FUN_1475daf1e(void)

void FUN_1475daf1e(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475daf6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475daf7c FUN_1475daf7c body=118 status=ok
// SIG undefined FUN_1475daf7c(void)

longlong FUN_1475daf7c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475dab3e();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475daff4 FUN_1475daff4 body=38 status=ok
// SIG undefined FUN_1475daff4(void)

undefined8 FUN_1475daff4(undefined8 param_1,int param_2)

{
  FUN_145cd0cd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475db01a FUN_1475db01a body=82 status=ok
// SIG undefined FUN_1475db01a(void)

void FUN_1475db01a(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1475db22c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475db06e FUN_1475db06e body=406 status=ok
// SIG undefined FUN_1475db06e(void)

undefined8 FUN_1475db06e(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1475db1bf;
  }
  if (param_3 == '\x01') {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)
              [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38 + 0x28)])();
    FUN_1459a119c(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_1475db2b6(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_1475db2b6(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1475db1bf:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475db206 FUN_1475db206 body=38 status=ok
// SIG undefined FUN_1475db206(void)

undefined8 FUN_1475db206(undefined8 param_1,int param_2)

{
  FUN_145cd0cd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475db22c FUN_1475db22c body=136 status=ok
// SIG undefined FUN_1475db22c(void)

void FUN_1475db22c(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475db2b6 FUN_1475db2b6 body=103 status=ok
// SIG undefined FUN_1475db2b6(void)

void FUN_1475db2b6(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x28 + 0x20)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1475db31e(param_1);
  return;
}



// FUNCTION 1475db31e FUN_1475db31e body=62 status=ok
// SIG undefined FUN_1475db31e(void)

void FUN_1475db31e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475db35c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1475db35c FUN_1475db35c body=112 status=ok
// SIG undefined FUN_1475db35c(void)

ulonglong FUN_1475db35c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1475db396;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1475db396:
  return param_2 & 0xffffffff;
}



// FUNCTION 1475db3cc FUN_1475db3cc body=253 status=ok
// SIG undefined FUN_1475db3cc(void)

void FUN_1475db3cc(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar3 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar6 = uVar3;
    do {
      uVar1 = (uVar6 >> 1) + uVar9;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < *param_2) {
        uVar9 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= *param_2)) {
      piVar10 = (int *)(lVar7 + (ulonglong)uVar9 * 0x28);
      FUN_145cd0dbf(piVar10,1);
      goto LAB_1475db47c;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1475db4ca(param_1,uVar3);
    lVar7 = *param_1;
  }
  lVar5 = (ulonglong)uVar9 * 0x28;
  memmove((void *)(lVar7 + lVar5 + 0x28),(void *)(lVar7 + lVar5),(ulonglong)(uVar3 - uVar9) * 0x28);
  piVar10 = (int *)(lVar5 + *param_1);
LAB_1475db47c:
  *piVar10 = *param_2;
  *(undefined8 *)(piVar10 + 2) = *param_3;
  uVar2 = *(undefined1 *)(param_3 + 3);
  puVar8 = param_3 + 1;
  *(undefined1 *)(piVar10 + 8) = uVar2;
  piVar11 = piVar10 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined8 *)piVar11 = *puVar8;
    return;
  case 1:
    *(undefined2 *)piVar11 = *(undefined2 *)puVar8;
    return;
  case 2:
    *(undefined8 *)piVar11 = *puVar8;
    *(undefined8 *)(piVar10 + 6) = param_3[2];
    *puVar8 = 0;
    param_3[2] = 0;
    return;
  }
}



// FUNCTION 1475db4ca FUN_1475db4ca body=147 status=ok
// SIG undefined FUN_1475db4ca(void)

void FUN_1475db4ca(longlong param_1,int param_2)

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



// FUNCTION 1475db55e FUN_1475db55e body=772 status=ok
// SIG undefined FUN_1475db55e(void)

void FUN_1475db55e(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte local_191;
  undefined8 *local_190;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_138;
  if (param_4 == 0) goto LAB_1475db5b7;
  uVar5 = FUN_145990612();
  plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_1475db5b7;
  lVar2 = *(longlong *)(param_4 + 0x28);
  *(undefined4 *)(lVar2 + 0x29c) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_160 = *param_3;
  uStack_15c = param_3[1];
  iStack_158 = param_3[2];
  uStack_154 = param_3[3];
  local_150 = param_3[4];
  uStack_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  local_110 = (undefined1 *)0x0;
  local_108 = 0x400000000;
  local_140 = uVar5;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    local_140._6_2_ = (undefined2)((ulonglong)uVar5 >> 0x30);
    local_140._0_6_ = CONCAT24(*(undefined2 *)*param_2,(int)uVar5);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,&local_160,&local_100);
    uVar10 = local_108;
    if (local_178 != (undefined8 *)0x0) {
      lVar9 = (longlong)(int)local_108;
      uVar7 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar7);
      if (local_108._4_4_ < uVar7) {
        FUN_14476a5c8(local_130,uVar10 & 0xffffffff);
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
        if (local_178 == (undefined8 *)0x0) goto LAB_1475db6c5;
      }
      else {
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
      }
      LOCK();
      *(int *)(local_178 + 1) = *(int *)(local_178 + 1) + 1;
      UNLOCK();
      if (local_178 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_178 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_178)(local_178,1);
        }
      }
    }
LAB_1475db6c5:
    if ((int)local_108 != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_130,1);
    }
  }
  if (*(short *)((longlong)param_3 + 0x22) == -1) {
    local_190 = (undefined8 *)0x0;
    local_168 = 0;
  }
  else {
    FUN_1475db864(lVar2 + 0x28,&local_178,*(short *)((longlong)param_3 + 0x22),
                  *(undefined2 *)(param_1 + 0x16));
    local_190 = local_178;
    local_191 = local_170 == 1;
  }
  if (0 < iStack_158) {
    lVar9 = 0;
    iVar4 = iStack_158;
    do {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        uVar10 = (ulonglong)*(ushort *)(*param_2 + 2);
        lVar11 = uVar10 + local_168;
        if (local_168 == 0) {
          lVar11 = 0;
        }
        lVar3 = *param_6;
        uVar5 = FUN_147546472(&local_100,*(undefined2 *)(CONCAT44(uStack_15c,local_160) + lVar9 * 2)
                              ,*(undefined8 *)(param_5 + uVar10),lVar11);
        *(undefined8 *)(uVar10 + lVar3 + lVar9 * 8) = uVar5;
        iVar4 = iStack_158;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
  }
  *(undefined4 *)(lVar2 + 0x29c) = 1;
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_190 + 3) = *(int *)(local_190 + 3) + -1;
    UNLOCK();
    if ((local_191 & 1) != 0) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 1));
    }
  }
  FUN_14588b8d6(local_130);
  FUN_1475d7c02(&local_100);
LAB_1475db5b7:
  if ((local_50 ^ (ulonglong)local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475db864 FUN_1475db864 body=185 status=ok
// SIG undefined FUN_1475db864(void)

undefined8 * FUN_1475db864(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_1475b49d0(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475db91e FUN_1475db91e body=57 status=ok
// SIG undefined FUN_1475db91e(void)

undefined8 * FUN_1475db91e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1b10;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475db958 FUN_1475db958 body=57 status=ok
// SIG undefined FUN_1475db958(void)

undefined8 * FUN_1475db958(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1b10;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475db992 FUN_1475db992 body=232 status=ok
// SIG undefined FUN_1475db992(void)

undefined8 * FUN_1475db992(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_1475dba7c();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c7e68;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dba7c FUN_1475dba7c body=104 status=ok
// SIG undefined FUN_1475dba7c(void)

undefined8 FUN_1475dba7c(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1475dbae4 FUN_1475dbae4 body=38 status=ok
// SIG undefined FUN_1475dbae4(void)

undefined8 FUN_1475dbae4(undefined8 param_1,int param_2)

{
  FUN_1475dbb86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475dbb0a FUN_1475dbb0a body=124 status=ok
// SIG undefined FUN_1475dbb0a(void)

void FUN_1475dbb0a(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_1475dbc86(param_1 + 8,uVar1,1);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 1475dbb86 FUN_1475dbb86 body=71 status=ok
// SIG undefined FUN_1475dbb86(void)

void FUN_1475dbb86(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c7e68;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1475dbbce(param_1 + 8);
  FUN_145c4d3e2(param_1 + 1);
  return;
}



// FUNCTION 1475dbbce FUN_1475dbbce body=54 status=ok
// SIG undefined FUN_1475dbbce(void)

void FUN_1475dbbce(longlong *param_1)

{
  FUN_1475dbc04(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475dbc04 FUN_1475dbc04 body=128 status=ok
// SIG undefined FUN_1475dbc04(void)

void FUN_1475dbc04(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 1475dbc86 FUN_1475dbc86 body=149 status=ok
// SIG undefined FUN_1475dbc86(void)

void FUN_1475dbc86(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_3 != 0) {
    lVar3 = *param_1;
    lVar1 = lVar3 + (longlong)param_2 * 8;
    lVar8 = 0;
    do {
      iVar7 = (int)lVar8;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar3 + (longlong)(int)param_1[6] * 8) = param_2 + iVar7;
      }
      *(undefined4 *)(lVar1 + lVar8 * 8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar8 * 8) = uVar5;
      iVar6 = param_2 + iVar7;
      *(int *)(param_1 + 6) = iVar6;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar9 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      iVar7 = param_2 + iVar7 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      bVar4 = (byte)iVar6 & 0x1f;
      puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      lVar8 = lVar8 + 1;
    } while (param_3 != (int)lVar8);
  }
  return;
}



// FUNCTION 1475dbd1c FUN_1475dbd1c body=879 status=ok
// SIG undefined FUN_1475dbd1c(void)

void FUN_1475dbd1c(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  float local_64;
  ushort local_5e;
  char local_5c;
  char local_5a;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475dbd71;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1475dbd71:
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_88 = *(ulonglong *)(param_1 + 0x40);
  local_94 = *(int *)(param_2 + 0x14);
  if (local_94 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1475dbdc8;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1475dbdc8:
  lVar5 = *plVar10;
  local_98 = *(int *)(param_2 + 0x14);
  if (local_98 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar3 = *plVar9;
  local_80 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar1 != 0) {
    local_90 = param_1 + 8;
    uVar15 = 0;
    do {
      local_68 = *(int *)(lVar3 + uVar15 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar7 = *(longlong *)(param_1 + 8);
      uVar11 = 0;
      if (0 < (int)uVar2) {
        uVar11 = 0;
        uVar12 = (ulonglong)uVar2;
        uVar13 = uVar2;
        do {
          uVar12 = uVar12 >> 1;
          uVar14 = (uint)uVar12 + (int)uVar11;
          if (*(int *)(lVar7 + (ulonglong)uVar14 * 0x10) < local_68) {
            uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar4 = 1 < uVar13;
          uVar13 = (uint)uVar12;
        } while (bVar4);
      }
      if ((((int)uVar11 < (int)uVar2) && (*(int *)(lVar7 + uVar11 * 0x10) <= local_68)) &&
         (puVar6 = (undefined8 *)(lVar7 + uVar11 * 0x10 + 8), puVar6 != (undefined8 *)0x0)) {
        *(undefined8 *)(lVar5 + uVar15 * 8) = *puVar6;
      }
      else {
        lVar7 = FUN_1475b443c(local_80);
        if (((lVar7 != 0) && (lVar8 = FUN_14479d2ce(lVar7), lVar8 != 0)) &&
           (*(longlong *)(lVar7 + 8) != 0)) {
          local_78 = *(undefined4 *)(param_1 + 0x30);
          uStack_74 = *(undefined4 *)(param_1 + 0x34);
          uStack_70 = *(undefined4 *)(param_1 + 0x38);
          uStack_6c = *(undefined4 *)(param_1 + 0x3c);
          local_a8 = lVar8;
          FUN_140d4d2ba(&local_5e,lVar8,lVar7 + 8,&local_78);
          lVar8 = *(longlong *)(param_1 + 0x48);
          if (lVar8 == 0) {
LAB_1475dbedf:
            if (local_5a == '\0') {
              local_50 = 1;
              FUN_1475dd366(local_a8,lVar7 + 0x10,&local_64);
              local_58 = (double)local_64;
            }
            else if (local_5c == '\x01') {
              local_50 = 1;
              fVar16 = (float)(**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_5e))
                                        (local_a8);
              local_58 = (double)fVar16;
            }
            else {
              local_50 = 1;
              local_58 = (double)*(float *)(local_a8 + (ulonglong)local_5e);
            }
            *(double *)(lVar5 + uVar15 * 8) = local_58;
            puVar6 = &local_58;
          }
          else {
            local_a0 = lVar8;
            if (local_5a == '\0') {
              FUN_1475dc60a(lVar8,&local_58,local_a8,lVar7 + 0x10);
            }
            else if (local_5c == '\x01') {
              FUN_1475dce4a();
            }
            else {
              FUN_1475dd02c(lVar8,&local_58,local_a8,local_5e);
            }
            if (local_58._2_1_ == '\x01') {
              puVar6 = (undefined8 *)
                       (((ulonglong)local_58 & 0xffff) * 8 + *(longlong *)(local_a0 + 8));
            }
            else {
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar6 == (undefined8 *)0x0) goto LAB_1475dbedf;
            *(undefined8 *)(lVar5 + uVar15 * 8) = *puVar6;
          }
          FUN_1475dd20e(local_90,&local_68,puVar6);
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar1);
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uVar15 = plVar10[2];
    if ((ulonglong)plVar10[2] < local_88) {
      uVar15 = local_88;
    }
    plVar10[2] = uVar15;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_94 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475dc08c FUN_1475dc08c body=1405 status=ok
// SIG undefined FUN_1475dc08c(void)

void FUN_1475dc08c(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_e8;
  longlong local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined2 local_a2;
  double local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ushort local_64;
  char local_62;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1475dc0e1;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1475dc0e1:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar10 = (ulonglong)uVar1;
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_cc = *(int *)(param_2 + 0x14);
  if (local_cc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475dc135;
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1475dc135:
  local_e0 = *plVar7;
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_d0 = *(int *)(param_2 + 0x14);
  if (local_d0 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1475dc18e;
      plVar9 = plVar9 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1475dc18e:
  local_e8 = *plVar8;
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar4 = *plVar9;
  FUN_140b325e4(param_2,&local_88,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_78 == 0) {
    FUN_1410bd96e(param_2,&local_a0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar2 = local_90;
    if (local_90 == 0) {
      FUN_1410bd9c4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_c0 = local_50;
      if (uVar1 != 0 && local_50 != 0) {
        local_c8 = (ulonglong)((uint)uVar1 * 2);
        uVar10 = 0;
        do {
          lVar2 = *(longlong *)(local_c0 + uVar10 * 8);
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(lVar2 + 0x58) != 0) {
            puVar5 = *(undefined2 **)(lVar2 + 0x50);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_70,puVar5,1);
          FUN_1475dc60a(uVar3,&local_64,*(undefined8 *)(lVar4 + uVar10 * 4),&local_70);
          lVar2 = local_c0;
          if (local_62 == '\x01') {
            *(undefined8 *)(local_e8 + uVar10 * 4) =
                 *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_64 * 8);
          }
          else {
            fVar11 = (float)FUN_1458fbfa0(*(undefined8 *)(local_c0 + uVar10 * 8),
                                          *(undefined8 *)(lVar4 + uVar10 * 4));
            local_70 = (double)fVar11;
            *(double *)(local_e8 + uVar10 * 4) = local_70;
            local_f8 = *(undefined8 *)(lVar2 + uVar10 * 8);
            FUN_1475dd64a(*(undefined8 *)(param_1 + 0x48),&local_a2,
                          *(undefined8 *)(lVar4 + uVar10 * 4),&local_70);
            *(undefined2 *)(local_e0 + uVar10) = local_a2;
          }
          uVar10 = uVar10 + 2;
        } while (local_c8 != uVar10);
      }
      if (local_60 != 0.0) {
        LOCK();
        *(int *)((longlong)local_60 + 0x18) = *(int *)((longlong)local_60 + 0x18) + -1;
        UNLOCK();
        if (local_58 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)((longlong)local_60 + 8));
        }
      }
    }
    else if (uVar10 != 0) {
      uVar6 = 0;
      do {
        FUN_1475dd02c(*(undefined8 *)(param_1 + 0x48),&local_70,*(undefined8 *)(lVar4 + uVar6 * 8),
                      *(undefined2 *)(local_90 + uVar6 * 2));
        if (local_70._2_1_ == '\x01') {
          *(undefined8 *)(local_e8 + uVar6 * 8) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) +
                ((ulonglong)local_70 & 0xffff) * 8);
        }
        else {
          local_60 = (double)*(float *)(*(longlong *)(lVar4 + uVar6 * 8) +
                                       (ulonglong)*(ushort *)(lVar2 + uVar6 * 2));
          *(double *)(local_e8 + uVar6 * 8) = local_60;
          local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(lVar2 + uVar6 * 2));
          FUN_1475dd56c(*(undefined8 *)(param_1 + 0x48),&local_64,*(undefined8 *)(lVar4 + uVar6 * 8)
                        ,&local_60);
          *(ushort *)(local_e0 + uVar6 * 2) = local_64;
        }
        uVar6 = uVar6 + 1;
      } while (uVar10 != uVar6);
    }
    if (local_a0 != 0.0) {
      LOCK();
      *(int *)((longlong)local_a0 + 0x18) = *(int *)((longlong)local_a0 + 0x18) + -1;
      UNLOCK();
      if (local_98 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)((longlong)local_a0 + 8));
      }
    }
  }
  else if (uVar10 != 0) {
    uVar6 = 0;
    do {
      FUN_1475dce4a(*(undefined8 *)(param_1 + 0x48),&local_60,*(undefined8 *)(lVar4 + uVar6 * 8),
                    *(undefined2 *)(local_78 + uVar6 * 2));
      if (local_60._2_1_ == '\x01') {
        *(undefined8 *)(local_e8 + uVar6 * 8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + ((ulonglong)local_60 & 0xffff) * 8
              );
      }
      else {
        fVar11 = (float)(**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                                    (longlong)*(int *)(param_1 + 0x3c) *
                                    (ulonglong)*(ushort *)(local_78 + uVar6 * 2)))
                                  (*(undefined8 *)(lVar4 + uVar6 * 8));
        local_a0 = (double)fVar11;
        *(double *)(local_e8 + uVar6 * 8) = local_a0;
        local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(local_78 + uVar6 * 2));
        FUN_1475dd48e(*(undefined8 *)(param_1 + 0x48),&local_70,*(undefined8 *)(lVar4 + uVar6 * 8),
                      &local_a0);
        *(undefined2 *)(local_e0 + uVar6 * 2) = (undefined2)local_70;
      }
      uVar6 = uVar6 + 1;
    } while (uVar10 != uVar6);
  }
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 0x18) = *(int *)(local_88 + 0x18) + -1;
    UNLOCK();
    if (local_80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_88 + 8));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar10 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_b8) {
      uVar10 = local_b8;
    }
    plVar8[2] = uVar10;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_d0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    uVar10 = plVar7[2];
    if ((ulonglong)plVar7[2] < local_b0) {
      uVar10 = local_b0;
    }
    plVar7[2] = uVar10;
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_cc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475dc60a FUN_1475dc60a body=483 status=ok
// SIG undefined FUN_1475dc60a(void)

undefined8 FUN_1475dc60a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475dc738;
        }
        else {
LAB_1475dc738:
          FUN_1475dca94(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475dcb7e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475dc9dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_1475dc7ee(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dc7ee FUN_1475dc7ee body=493 status=ok
// SIG undefined FUN_1475dc7ee(void)

undefined2 * FUN_1475dc7ee(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475dc920;
        }
        else {
LAB_1475dc920:
          FUN_1475dca94(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_1475dcb7e(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1475dc9dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_1475dcd92((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dc9dc FUN_1475dc9dc body=184 status=ok
// SIG undefined FUN_1475dc9dc(void)

void FUN_1475dc9dc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7 * 8);
          iVar1 = *(int *)(lVar2 + 4 + lVar7 * 8);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 8) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 8) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7 * 8);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_140b584e0(param_1,iVar5);
  return;
}



// FUNCTION 1475dca94 FUN_1475dca94 body=96 status=ok
// SIG undefined FUN_1475dca94(void)

void FUN_1475dca94(longlong *param_1,int param_2)

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
  FUN_1475dcaf4(param_1,param_2,1);
  return;
}



// FUNCTION 1475dcaf4 FUN_1475dcaf4 body=138 status=ok
// SIG undefined FUN_1475dcaf4(void)

void FUN_1475dcaf4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475dcb7e FUN_1475dcb7e body=68 status=ok
// SIG undefined FUN_1475dcb7e(void)

void FUN_1475dcb7e(longlong param_1,uint param_2)

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
  FUN_1475dcbc2(param_1);
  return;
}



// FUNCTION 1475dcbc2 FUN_1475dcbc2 body=462 status=ok
// SIG undefined FUN_1475dcbc2(void)

void FUN_1475dcbc2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1475dcd92 FUN_1475dcd92 body=108 status=ok
// SIG undefined FUN_1475dcd92(void)

int FUN_1475dcd92(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_1475dcdfe(lVar3 + (longlong)iVar4 * 0x20,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1475dcdfe FUN_1475dcdfe body=76 status=ok
// SIG undefined FUN_1475dcdfe(void)

undefined8 FUN_1475dcdfe(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1475dce4a FUN_1475dce4a body=481 status=ok
// SIG undefined FUN_1475dce4a(void)

undefined8 FUN_1475dce4a(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475dcf78;
        }
        else {
LAB_1475dcf78:
          FUN_1475dca94(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475dcb7e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475dc9dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1475dc7ee(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dd02c FUN_1475dd02c body=481 status=ok
// SIG undefined FUN_1475dd02c(void)

undefined8 FUN_1475dd02c(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475dd15a;
        }
        else {
LAB_1475dd15a:
          FUN_1475dca94(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475dcb7e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475dc9dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_1475dc7ee(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dd20e FUN_1475dd20e body=210 status=ok
// SIG undefined FUN_1475dd20e(void)

void FUN_1475dd20e(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    iVar4 = *param_2;
    uVar8 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar8;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x10) < iVar4) {
        uVar8 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar8 < (int)uVar2) && (*(int *)(lVar7 + (ulonglong)uVar8 * 0x10) <= iVar4)) {
      piVar6 = (int *)(lVar7 + (ulonglong)uVar8 * 0x10);
      goto LAB_1475dd2b3;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1475dd2e0(param_1,uVar2);
    lVar7 = *param_1;
  }
  lVar9 = (ulonglong)uVar8 * 0x10;
  memmove((void *)(lVar7 + lVar9 + 0x10),(void *)(lVar7 + lVar9),(ulonglong)(uVar2 - uVar8) << 4);
  piVar6 = (int *)(lVar9 + *param_1);
  iVar4 = *param_2;
LAB_1475dd2b3:
  *piVar6 = iVar4;
  *(undefined8 *)(piVar6 + 2) = *param_3;
  return;
}



// FUNCTION 1475dd2e0 FUN_1475dd2e0 body=132 status=ok
// SIG undefined FUN_1475dd2e0(void)

void FUN_1475dd2e0(longlong param_1,int param_2)

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



// FUNCTION 1475dd366 FUN_1475dd366 body=168 status=ok
// SIG undefined FUN_1475dd366(void)

void FUN_1475dd366(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  undefined4 local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_48);
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_38,puVar1);
  FUN_1475dd410(&local_28,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_24 == '\x01') {
    *param_3 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475dd410 FUN_1475dd410 body=125 status=ok
// SIG undefined FUN_1475dd410(void)

undefined4 * FUN_1475dd410(undefined4 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar2 = FUN_1406f977c(local_48);
  if ((lVar2 == 0) ||
     (puVar3 = (undefined4 *)(*(int *)(lVar2 + 0x44) + local_20), puVar3 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_1 = *puVar3;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dd48e FUN_1475dd48e body=221 status=ok
// SIG undefined FUN_1475dd48e(void)

undefined2 *
FUN_1475dd48e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_1475dd744(param_1 + 8,&local_60);
  *local_58 = *param_4;
  local_58 = (undefined8 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1475dd81e(param_1 + 0x40,local_64,&local_60,0);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dd56c FUN_1475dd56c body=221 status=ok
// SIG undefined FUN_1475dd56c(void)

undefined2 *
FUN_1475dd56c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_1475dd744(param_1 + 8,&local_60);
  *local_58 = *param_4;
  local_58 = (undefined8 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1475dd81e(param_1 + 0x40,local_64,&local_60,0);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dd64a FUN_1475dd64a body=249 status=ok
// SIG undefined FUN_1475dd64a(void)

undefined2 *
FUN_1475dd64a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_1475dd744(param_1 + 8,&local_58);
  *local_50 = *param_4;
  local_50 = (undefined8 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_1475dd81e(param_1 + 0x40,local_5c,&local_58,0);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dd744 FUN_1475dd744 body=218 status=ok
// SIG undefined FUN_1475dd744(void)

int * FUN_1475dd744(longlong *param_1,int *param_2)

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
      FUN_14055ddfe(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 8 + *param_1;
  return param_2;
}



// FUNCTION 1475dd81e FUN_1475dd81e body=362 status=ok
// SIG undefined FUN_1475dd81e(void)

undefined4 *
FUN_1475dd81e(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1475dd98a(param_1,local_50);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_48 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_48 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_48 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_48 + 0x14) = *puVar3;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_48,*(undefined4 *)((longlong)local_48 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_48 + 2));
  local_68 = param_4;
  cVar4 = FUN_1475dda70(param_1,uVar6,local_48,&local_54);
  if (cVar4 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1475dcbc2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dd98a FUN_1475dd98a body=229 status=ok
// SIG undefined FUN_1475dd98a(void)

int * FUN_1475dd98a(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 1475dda70 FUN_1475dda70 body=116 status=ok
// SIG undefined FUN_1475dda70(void)

void FUN_1475dda70(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_1475dcd92();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x20) = *(undefined8 *)(param_3 + 4);
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1475dcaf4(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_1475dda8c;
    }
  }
  uVar7 = 0;
LAB_1475dda8c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 1475ddae4 FUN_1475ddae4 body=96 status=ok
// SIG undefined FUN_1475ddae4(void)

void FUN_1475ddae4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1475ddb44 FUN_1475ddb44 body=31 status=ok
// SIG undefined FUN_1475ddb44(void)

undefined8 FUN_1475ddb44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ddb64 FUN_1475ddb64 body=892 status=ok
// SIG undefined FUN_1475ddb64(void)

void FUN_1475ddb64(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined8 *local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  longlong local_168;
  undefined8 *local_160;
  undefined2 local_152;
  undefined8 local_150;
  undefined8 *local_148;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  byte local_103;
  uint local_100;
  undefined1 local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180 = param_4;
  lVar4 = FUN_14009d2a0();
  local_140 = *(undefined2 *)(lVar4 + 0x4a);
  local_13a = *(undefined2 *)(lVar4 + 0x108);
  local_13e = *(undefined4 *)(lVar4 + 0x104);
  local_138 = **(undefined2 **)(param_2 + 0x18);
  puVar5 = (undefined2 *)*param_3;
  local_130 = puVar5[6];
  local_132 = puVar5[4];
  local_136 = *puVar5;
  local_134 = puVar5[2];
  local_12b = 0;
  local_128 = 0x6ff;
  local_124 = 0;
  local_170 = &local_150;
  local_150 = (undefined2 *)CONCAT62(local_150._2_6_,*(undefined2 *)(param_2 + 0x14));
  local_168 = (longlong)&local_150 + 2;
  local_188 = param_3;
  FUN_1461cb746(&local_140,&local_118);
  local_100 = *(uint *)(param_7 + 0x290);
  local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
  local_1a8 = param_6;
  local_1a0 = param_2;
  FUN_1432f63aa(&local_118,&local_160,param_7 + 0x28,param_5);
  if (local_160 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_160 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_160)(local_160,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(local_180 + 4)) {
    local_120 = 0x10000000000;
    puVar5 = (undefined2 *)*local_188;
    iVar2 = *(int *)(local_188 + 1);
    if ((longlong)iVar2 != 0) {
      lVar6 = 0;
      do {
        FUN_140dba9e6(&local_140,*(undefined2 *)((longlong)puVar5 + lVar6));
        lVar6 = lVar6 + 4;
      } while ((longlong)iVar2 * 4 != lVar6);
      puVar5 = (undefined2 *)*local_188;
    }
    puVar3 = local_188;
    local_118 = *(undefined2 *)(lVar4 + 0x4a);
    local_112 = *(undefined2 *)(lVar4 + 0x108);
    local_116 = *(undefined4 *)(lVar4 + 0x104);
    local_110 = **(undefined2 **)(param_2 + 0x18);
    local_108 = puVar5[6];
    local_10a = puVar5[4];
    local_10e = *puVar5;
    local_10c = puVar5[2];
    local_103 = 0;
    local_100 = 0x6ff;
    local_fc = 0;
    local_d8 = 0x10000000000;
    local_b0 = 0x10000000000;
    local_78 = 0x10000000000;
    local_a8 = 0;
    uStack_a0 = 0;
    local_50 = 0x10000000000;
    FUN_1475dee80(&local_118,local_f8);
    FUN_140dad9c2(local_f8,&local_140,2);
    local_152 = *(undefined2 *)(param_2 + 0x14);
    local_148 = &local_150;
    local_150 = &local_152;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_140,0x84);
    local_100 = *(uint *)(param_7 + 0x290);
    local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
    local_198 = puVar3;
    local_1a8 = param_6;
    local_1a0 = param_2;
    FUN_1432f686c(&local_118,&local_178,param_7 + 0x28,param_5);
    if (local_178 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_178 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_178)(local_178,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ddee2 FUN_1475ddee2 body=130 status=ok
// SIG undefined FUN_1475ddee2(void)

void FUN_1475ddee2(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1475e172a(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ddf66 FUN_1475ddf66 body=616 status=ok
// SIG undefined FUN_1475ddf66(void)

void FUN_1475ddf66(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475e1ab0(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475de1d0 FUN_1475de1d0 body=615 status=ok
// SIG undefined FUN_1475de1d0(void)

void FUN_1475de1d0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = (int)param_4[1];
  local_b8 = param_3;
  if (0 < iVar3) {
    lVar8 = *param_6;
    local_c0 = param_5 + 0x28;
    lVar6 = 0;
    do {
      if (*(short *)(*param_4 + lVar6 * 2) != -1) {
        FUN_1432d4ca4(local_c0,&local_60);
        lVar2 = local_60;
        lVar4 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*param_3 + 0xc));
        local_b0 = (undefined8 *)(local_50 + lVar4 * 8);
        if (local_50 == 0) {
          local_b0 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_78,*(undefined2 *)(*param_3 + 8));
        puVar7 = (undefined8 *)(local_68 + lVar4 * 8);
        if (local_68 == 0) {
          puVar7 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_90,*(undefined2 *)(*param_3 + 4));
        puVar5 = (undefined8 *)(local_80 + lVar4 * 8);
        if (local_80 == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_a8,*(undefined2 *)*param_3);
        lVar2 = *param_3;
        if ((local_98 != 0) &&
           (puVar1 = (undefined8 *)(local_98 + lVar4 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 2)) = *puVar1;
        }
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 6)) = *puVar5;
        }
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 10)) = *puVar7;
        }
        if (local_b0 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 0xe)) = *local_b0;
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar6 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475de43a FUN_1475de43a body=29 status=ok
// SIG undefined FUN_1475de43a(void)

undefined8 FUN_1475de43a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475de458 FUN_1475de458 body=255 status=ok
// SIG undefined FUN_1475de458(void)

void FUN_1475de458(longlong param_1,char param_2,ushort param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x03') {
    local_24 = (float)param_4[3];
    local_28 = (float)param_4[2];
    local_2c = (float)param_4[1];
    local_30 = (float)*param_4;
    FUN_1411ab38a(&local_30,&local_34);
    *(undefined4 *)(param_1 + (ulonglong)param_3) = local_34;
  }
  else if (param_2 == '\x02') {
    dVar1 = param_4[3];
    dVar2 = param_4[2];
    dVar3 = param_4[1];
    uVar4 = (ulonglong)param_3;
    *(float *)(param_1 + uVar4) = (float)*param_4;
    *(float *)(param_1 + 4 + uVar4) = (float)dVar3;
    *(float *)(param_1 + 8 + uVar4) = (float)dVar2;
    *(float *)(param_1 + 0xc + uVar4) = (float)dVar1;
  }
  else if (param_2 == '\x01') {
    dVar1 = param_4[3];
    dVar2 = param_4[2];
    uVar4 = (ulonglong)param_3;
    dVar3 = param_4[1];
    *(float *)(param_1 + uVar4) = (float)*param_4;
    *(float *)(param_1 + 4 + uVar4) = (float)dVar3;
    *(float *)(param_1 + 8 + uVar4) = (float)dVar2;
    *(float *)(param_1 + 0xc + uVar4) = (float)dVar1;
    *(undefined1 *)(param_1 + 0x10 + uVar4) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475de558 FUN_1475de558 body=220 status=ok
// SIG undefined FUN_1475de558(void)

void FUN_1475de558(undefined8 param_1,char param_2,undefined8 param_3,double *param_4)

{
  undefined1 auStack_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (param_2 == '\x02') {
    local_28 = (float)param_4[3];
    local_2c = (float)param_4[2];
    local_30 = (float)param_4[1];
    local_34 = (float)*param_4;
    FUN_1475de964(param_3,param_1);
  }
  else if (param_2 == '\x01') {
    local_28 = (float)param_4[3];
    local_2c = (float)param_4[2];
    local_30 = (float)param_4[1];
    local_34 = (float)*param_4;
    local_24 = 0;
    FUN_1475de6ce(param_3,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475de6ce FUN_1475de6ce body=253 status=ok
// SIG undefined FUN_1475de6ce(void)

void FUN_1475de6ce(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar5 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2,param_3);
      goto LAB_1475de72f;
    }
  }
  lVar6 = FUN_14479d2ce(local_30);
  if (lVar6 == 0) {
    lVar6 = FUN_1406f977c(local_60);
    if ((lVar6 != 0) &&
       (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_38), puVar7 != (undefined4 *)0x0)) {
      puVar7[4] = param_3[4];
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar7 = *param_3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
    }
  }
  else {
    FUN_1475de7cc(param_2,lVar6,param_3);
  }
LAB_1475de72f:
  lVar6 = FUN_14479d2ce(local_28);
  if (lVar6 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar6,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475de7cc FUN_1475de7cc body=402 status=ok
// SIG undefined FUN_1475de7cc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475de7cc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475de86b;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475de882;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x14) goto LAB_1475de91d;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475de8d3;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475de8ec;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 * 0x14);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475de919;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475de91d:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475de947;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475de964 FUN_1475de964 body=244 status=ok
// SIG undefined FUN_1475de964(void)

void FUN_1475de964(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar5 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2,param_3);
      goto LAB_1475de9c5;
    }
  }
  lVar6 = FUN_14479d2ce(local_30);
  if (lVar6 == 0) {
    lVar6 = FUN_1406f977c(local_60);
    if ((lVar6 != 0) &&
       (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_38), puVar7 != (undefined4 *)0x0)) {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar7 = *param_3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
    }
  }
  else {
    FUN_1475dea5a(param_2,lVar6,param_3);
  }
LAB_1475de9c5:
  lVar6 = FUN_14479d2ce(local_28);
  if (lVar6 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar6,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dea5a FUN_1475dea5a body=401 status=ok
// SIG undefined FUN_1475dea5a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475dea5a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475deaf9;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475deb10;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x10) goto LAB_1475debaa;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475deb61;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475deb79;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 4);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475deba6;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475debaa:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475debd4;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475decea FUN_1475decea body=401 status=ok
// SIG undefined FUN_1475decea(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475decea(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475ded89;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475deda0;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 4) goto LAB_1475dee3a;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475dedf1;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475dee09;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 2);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475dee36;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475dee3a:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475dee64;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475dee80 FUN_1475dee80 body=147 status=ok
// SIG undefined FUN_1475dee80(void)

void FUN_1475dee80(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475def14 FUN_1475def14 body=556 status=ok
// SIG undefined FUN_1475def14(void)

int * FUN_1475def14(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[4] == -1)) ||
     (cVar4 = FUN_1475df194(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1475def52;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_1475df2a0(plVar5,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475df204(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1475df390;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1475df0cd;
    }
  }
  else {
LAB_1475df0cd:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_1475def52:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475df142 FUN_1475df142 body=80 status=ok
// SIG undefined FUN_1475df142(void)

void FUN_1475df142(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475df62c(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475df194 FUN_1475df194 body=112 status=ok
// SIG undefined FUN_1475df194(void)

undefined8 FUN_1475df194(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1475df204 FUN_1475df204 body=156 status=ok
// SIG undefined FUN_1475df204(void)

void FUN_1475df204(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  if (param_1[5] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[6] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[7] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[8] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 1475df2a0 FUN_1475df2a0 body=177 status=ok
// SIG undefined FUN_1475df2a0(void)

undefined8 *
FUN_1475df2a0(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a4c1ba0;
  param_1[2] = &PTR_FUN_14a4c1bb8;
  param_3 = (longlong *)*param_3;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 10) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475df354 FUN_1475df354 body=29 status=ok
// SIG undefined FUN_1475df354(void)

undefined8 FUN_1475df354(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475df372 FUN_1475df372 body=29 status=ok
// SIG undefined FUN_1475df372(void)

undefined8 FUN_1475df372(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475df3a8 FUN_1475df3a8 body=644 status=ok
// SIG undefined FUN_1475df3a8(void)

void FUN_1475df3a8(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ushort uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,9);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1475df3f0;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1475df3f0:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar8 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar8 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar7 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar7 != 0) {
    lVar2 = (ulonglong)uVar7 << 5;
    puVar6 = puVar1;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == param_1[4]) goto LAB_1475df48c;
      puVar6 = puVar6 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_1475df48c:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar6) {
    *(int *)(lVar2 + 0x10 + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar7 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar7 != 0) {
    lVar3 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar3 + 0x1e) == param_1[5]) {
        if ((longlong)puVar1 + lVar3 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar3)) {
            *(int *)(lVar2 + 0x14 + lVar8 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar3) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar2 = *param_3;
            uVar7 = *(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar3 = lVar3 + 0x20;
    } while ((ulonglong)uVar7 * 0x20 != lVar3);
    if (uVar7 != 0) {
      uVar4 = (uint)uVar7;
      lVar3 = 0;
      do {
        if (*(short *)((longlong)puVar1 + lVar3 + 0x1e) == param_1[6]) {
          if ((longlong)puVar1 + lVar3 != 0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar3)) {
              *(int *)(lVar2 + 0x18 + lVar8 * 4) =
                   (int)*(ulonglong *)((longlong)puVar1 + lVar3) -
                   (int)*(ulonglong *)(param_2 + 0x20);
              uVar4 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar2 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        lVar3 = lVar3 + 0x20;
      } while ((ulonglong)uVar7 << 5 != lVar3);
      puVar6 = puVar1;
      do {
        if (*(short *)((longlong)puVar6 + 0x1e) == param_1[7]) {
          if (puVar6 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar6) {
              *(int *)(lVar2 + 0x1c + lVar8 * 4) =
                   (int)*puVar6 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar4 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar2 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar6 = puVar6 + 4;
      } while (puVar6 != (ulonglong *)((ulonglong)(uVar4 << 5) + (longlong)puVar1));
      puVar6 = (ulonglong *)((ulonglong)(uVar4 << 5) + (longlong)puVar1);
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[8]) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
            return;
          }
          *(int *)(lVar2 + 0x20 + lVar8 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
          return;
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != puVar6);
    }
  }
  return;
}



// FUNCTION 1475df62c FUN_1475df62c body=303 status=ok
// SIG undefined FUN_1475df62c(void)

void FUN_1475df62c(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_70 = (ulonglong)puVar1[6];
  lVar3 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar3;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar3;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar3;
  }
  lVar4 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar3;
  }
  local_98 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_98 = lVar3;
  }
  local_90 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_90 = lVar3;
  }
  local_88 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_88 = lVar3;
  }
  local_80 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_80 = lVar3;
  }
  local_78 = lVar2 + (ulonglong)puVar1[8];
  if ((ulonglong)puVar1[8] == 0xffffffff) {
    local_78 = lVar3;
  }
  FUN_1475df75c(param_1,local_68,lVar4,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475df75c FUN_1475df75c body=163 status=ok
// SIG undefined FUN_1475df75c(void)

void FUN_1475df75c(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_1475dfb5a();
      }
    }
    else {
      FUN_1475df9ba();
    }
    return;
  }
  FUN_1475df800();
  return;
}



// FUNCTION 1475df800 FUN_1475df800 body=441 status=ok
// SIG undefined FUN_1475df800(void)

void FUN_1475df800(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8 [5];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = param_4;
  if (local_b8 != 0) {
    uVar5 = 0;
    puVar4 = param_8;
    puVar8 = param_9;
    puVar9 = param_7;
    do {
      uVar7 = (ulonglong)*(ushort *)(local_b0 + uVar5 * 2);
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)*(int *)(param_1 + 0x14) * uVar7))
                (local_80,*(undefined8 *)(param_3 + uVar5 * 8),*(undefined1 *)(param_5 + uVar5));
      puVar2 = puVar8;
      if (param_9 == (undefined8 *)0x0) {
        puVar2 = param_9;
      }
      puVar3 = puVar4;
      if (param_8 == (undefined8 *)0x0) {
        puVar3 = param_8;
      }
      puVar6 = puVar9;
      if (param_7 == (undefined8 *)0x0) {
        puVar6 = param_7;
      }
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 2)) =
             *(undefined8 *)(param_6 + uVar5 * 8);
      }
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 6)) = *puVar6;
      }
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 10)) = *puVar3;
      }
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 0xe)) = *puVar2;
      }
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 + (longlong)*(int *)(param_1 + 0x14) * uVar7))
                (*(undefined8 *)(param_3 + uVar5 * 8),
                 CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(param_5 + uVar5)),local_a8);
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (local_b8 != uVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475df9ba FUN_1475df9ba body=415 status=ok
// SIG undefined FUN_1475df9ba(void)

void FUN_1475df9ba(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_98 = param_1;
  local_90 = param_4;
  if (local_a0 != 0) {
    uVar7 = 0;
    puVar5 = param_7;
    puVar8 = param_9;
    puVar9 = param_8;
    do {
      uVar1 = *(undefined2 *)(local_90 + uVar7 * 2);
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_1475dfcca(*(undefined8 *)(param_3 + uVar7 * 8),*(undefined1 *)(param_5 + uVar7),uVar1);
      puVar3 = puVar8;
      if (param_9 == (undefined8 *)0x0) {
        puVar3 = param_9;
      }
      puVar4 = puVar9;
      if (param_8 == (undefined8 *)0x0) {
        puVar4 = param_8;
      }
      puVar6 = puVar5;
      if (param_7 == (undefined8 *)0x0) {
        puVar6 = param_7;
      }
      lVar2 = *(longlong *)(local_98 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar2 + 2)) =
             *(undefined8 *)(param_6 + uVar7 * 8);
      }
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar2 + 6)) = *puVar6;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar2 + 10)) = *puVar4;
      }
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar2 + 0xe)) = *puVar3;
      }
      FUN_1475de458(*(undefined8 *)(param_3 + uVar7 * 8),*(undefined1 *)(param_5 + uVar7),uVar1,
                    local_88);
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    } while (local_a0 != uVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dfb5a FUN_1475dfb5a body=366 status=ok
// SIG undefined FUN_1475dfb5a(void)

void FUN_1475dfb5a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 *param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_98 = param_1;
  local_90 = param_4;
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(local_90 + lVar6 * 2);
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_1475dfd90(*(undefined8 *)(param_3 + lVar6),*param_5,uVar2);
      puVar4 = (undefined8 *)(param_9 + lVar6);
      if (param_9 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      puVar5 = (undefined8 *)(lVar6 + param_8);
      if (param_8 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)(param_7 + lVar6);
      if (param_7 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      lVar3 = *(longlong *)(local_98 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_6 + lVar6);
      }
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar7;
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 0xe)) = *puVar4;
      }
      FUN_1475de558(*(undefined8 *)(param_3 + lVar6),
                    CONCAT71((int7)((ulonglong)lVar3 >> 8),*param_5),uVar2,local_88);
      lVar6 = lVar6 + 8;
      param_5 = param_5 + 1;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dfcca FUN_1475dfcca body=198 status=ok
// SIG undefined FUN_1475dfcca(void)

void FUN_1475dfcca(longlong param_1,char param_2,ulonglong param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  
  if (param_2 == '\x03') {
    param_3 = param_3 & 0xffff;
    pfVar3 = (float *)(&DAT_14c758c60 + *(byte *)(param_1 + 2 + param_3));
    pfVar5 = (float *)(&DAT_14c758c60 + *(byte *)(param_1 + 1 + param_3));
    pfVar4 = (float *)(&DAT_14c758c60 + *(byte *)(param_1 + param_3));
    fVar6 = (float)*(byte *)(param_1 + 3 + param_3) * 0.003921569;
  }
  else if (param_2 == '\x02') {
    param_3 = param_3 & 0xffff;
    pfVar3 = (float *)(param_1 + param_3);
    pfVar5 = (float *)(param_1 + param_3 + 4);
    pfVar4 = (float *)(param_1 + param_3 + 8);
    fVar6 = *(float *)(param_1 + param_3 + 0xc);
  }
  else {
    if (param_2 != '\x01') {
      return;
    }
    pfVar3 = (float *)(param_1 + (param_3 & 0xffff));
    if (*(char *)(param_1 + 0x10 + (param_3 & 0xffff)) == '\x01') {
      pfVar3 = (float *)FUN_1400c06fe(pfVar3);
    }
    pfVar5 = pfVar3 + 1;
    pfVar4 = pfVar3 + 2;
    fVar6 = pfVar3[3];
  }
  fVar1 = *pfVar4;
  fVar2 = *pfVar5;
  *param_4 = (double)*pfVar3;
  param_4[1] = (double)fVar2;
  param_4[2] = (double)fVar1;
  param_4[3] = (double)fVar6;
  return;
}



// FUNCTION 1475dfd90 FUN_1475dfd90 body=263 status=ok
// SIG undefined FUN_1475dfd90(void)

void FUN_1475dfd90(undefined8 param_1,char param_2,undefined8 param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x03') {
    FUN_1475e0034(param_3,&local_38,param_1);
    fVar1 = (float)(&DAT_14c758c60)[local_38._1_1_];
    fVar2 = (float)(&DAT_14c758c60)[(byte)local_38];
    *param_4 = (double)(float)(&DAT_14c758c60)[local_38._2_1_];
    param_4[1] = (double)fVar1;
    param_4[2] = (double)fVar2;
    param_4[3] = (double)((float)((uint)local_38 >> 0x18) * 0.003921569);
  }
  else if (param_2 == '\x02') {
    FUN_1475dffba(param_3,&local_38,param_1);
    *param_4 = (double)local_38;
    param_4[1] = (double)local_34;
    param_4[2] = (double)local_30;
    param_4[3] = (double)local_2c;
  }
  else if (param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dff32 FUN_1475dff32 body=134 status=ok
// SIG undefined FUN_1475dff32(void)

undefined4 * FUN_1475dff32(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f800000;
  param_2[3] = 0x3f800000;
  *(undefined1 *)(param_2 + 4) = 0;
  FUN_1406f9c46(0x3f800000,local_58);
  lVar4 = FUN_1406f977c(local_58);
  if ((lVar4 != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_30), puVar5 != (undefined4 *)0x0)) {
    param_2[4] = puVar5[4];
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_2 = *puVar5;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475dffba FUN_1475dffba body=120 status=ok
// SIG undefined FUN_1475dffba(void)

undefined8 * FUN_1475dffba(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1406f9c46(0,local_58);
  lVar4 = FUN_1406f977c(local_58);
  if ((lVar4 != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_30), puVar5 != (undefined4 *)0x0)) {
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)param_2 = *puVar5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e0034 FUN_1475e0034 body=118 status=ok
// SIG undefined FUN_1475e0034(void)

undefined4 * FUN_1475e0034(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  FUN_1406f9c46(param_1,local_58);
  lVar1 = FUN_1406f977c(local_58);
  if ((lVar1 != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(lVar1 + 0x44) + local_30), puVar2 != (undefined4 *)0x0)) {
    *param_2 = *puVar2;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e00ac FUN_1475e00ac body=135 status=ok
// SIG undefined FUN_1475e00ac(void)

undefined4 * FUN_1475e00ac(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475e0134 FUN_1475e0134 body=378 status=ok
// SIG undefined FUN_1475e0134(void)

void FUN_1475e0134(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[5];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[6];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[7];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[8];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e02b0 FUN_1475e02b0 body=1282 status=ok
// SIG undefined FUN_1475e02b0(void)

void FUN_1475e02b0(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 *local_128;
  int local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[8]) goto LAB_1475e0305;
      puVar12 = puVar12 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_1475e0305:
  local_1d4 = *(int *)(lVar2 + 0x14);
  local_190 = param_1;
  if (local_1d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[7]) goto LAB_1475e033f;
      puVar10 = puVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1475e033f:
  uVar3 = *puVar12;
  local_1d8 = *(int *)(lVar2 + 0x14);
  if (local_1d8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[6]) goto LAB_1475e037b;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1475e037b:
  uVar4 = *puVar10;
  local_1dc = *(int *)(lVar2 + 0x14);
  if (local_1dc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[5]) goto LAB_1475e03c0;
      puVar11 = puVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1475e03c0:
  local_1b0 = *puVar7;
  local_1e0 = *(int *)(lVar2 + 0x14);
  local_1a8 = uVar4;
  if (local_1e0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[4]) goto LAB_1475e040d;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1475e040d:
  local_1c8 = *puVar11;
  local_1e4 = *(int *)(lVar2 + 0x14);
  local_1a0 = uVar3;
  if (local_1e4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_1d0 = *puVar8;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_170,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *param_4) goto LAB_1475e0493;
      puVar9 = puVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1475e0493:
  iVar1 = *(int *)(lVar2 + 0x14);
  local_198 = param_2;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  lVar6 = local_130;
  lVar2 = local_148;
  uVar5 = local_1a0;
  uVar4 = local_1a8;
  uVar3 = local_1b0;
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_1b8 = *puVar9;
  local_110 = local_170;
  local_108 = local_168;
  local_170 = 0;
  local_1c0 = local_160;
  local_100 = local_160;
  local_160 = 0;
  local_f8 = local_158;
  local_f0 = local_150;
  local_158 = 0;
  local_e8 = local_148;
  local_148 = 0;
  local_e0 = local_140;
  local_d8 = local_138;
  local_140 = 0;
  local_d0 = local_130;
  local_c0 = local_1e4;
  local_b8 = local_1d0;
  local_a8 = local_1e0;
  local_a0 = local_1c8;
  local_90 = local_1dc;
  local_88 = local_1b0;
  local_78 = local_1d8;
  local_70 = local_1a8;
  local_60 = local_1d4;
  local_130 = 0;
  local_58 = local_1a0;
  local_128 = puVar9;
  local_120 = iVar1;
  local_118 = local_1b8;
  local_c8 = puVar8;
  local_b0 = puVar11;
  local_98 = puVar7;
  local_80 = puVar10;
  local_68 = puVar12;
  FUN_1432f59b8();
  local_188 = 0;
  lStack_180 = 0;
  local_178 = 0;
  if (local_1c0 != 0) {
    local_188 = local_1c0;
  }
  if (lVar2 != 0) {
    lStack_180 = lVar2;
  }
  if (lVar6 != 0) {
    local_178 = lVar6;
  }
  local_1f8 = uVar5;
  local_200 = uVar4;
  local_208 = uVar3;
  local_210 = local_1c8;
  local_218 = local_1d0;
  FUN_14080277c(local_190,
                *(undefined8 *)(*(longlong *)(*local_198 + 0x60) + (longlong)(int)local_198[1] * 8),
                local_1b8,&local_188);
  FUN_1475e07b4(&local_128);
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e07b4 FUN_1475e07b4 body=256 status=ok
// SIG undefined FUN_1475e07b4(void)

void FUN_1475e07b4(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475e08a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475e08b4 FUN_1475e08b4 body=118 status=ok
// SIG undefined FUN_1475e08b4(void)

longlong FUN_1475e08b4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475e00ac();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e092c FUN_1475e092c body=135 status=ok
// SIG undefined FUN_1475e092c(void)

undefined4 * FUN_1475e092c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475e09b4 FUN_1475e09b4 body=390 status=ok
// SIG undefined FUN_1475e09b4(void)

void FUN_1475e09b4(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3);
  if (param_1[5] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[6] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[6];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[7] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[7];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[8] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[8];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e0b3c FUN_1475e0b3c body=1241 status=ok
// SIG undefined FUN_1475e0b3c(void)

void FUN_1475e0b3c(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_188;
  longlong local_180;
  int local_178;
  undefined8 local_170;
  longlong local_168;
  int local_160;
  undefined8 local_158;
  longlong local_150;
  int local_148;
  undefined8 local_140;
  longlong local_138;
  int local_130;
  undefined8 local_128;
  undefined8 *local_120;
  int local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  short local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_138,param_4[8]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_150,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_168,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_180,param_4[5]);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[4]) goto LAB_1475e0c0e;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1475e0c0e:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar7;
  local_44 = param_4[3];
  local_48 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_1c8,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_48,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_4) goto LAB_1475e0c79;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1475e0c79:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_110 = *puVar6;
  local_108 = local_1c8;
  local_100 = local_1c0;
  local_1c8 = 0;
  local_f8 = local_1b8;
  uStack_f0 = uStack_1b0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_e8 = local_1a8;
  local_e0 = local_1a0;
  local_1a0 = 0;
  local_d8 = local_198;
  local_d0 = local_190;
  local_198 = 0;
  local_c8 = local_188;
  local_188 = 0;
  local_a8 = local_180;
  local_a0 = local_178;
  local_180 = 0;
  local_98 = local_170;
  local_170 = 0;
  local_90 = local_168;
  local_88 = local_160;
  local_168 = 0;
  local_80 = local_158;
  local_158 = 0;
  local_78 = local_150;
  local_70 = local_148;
  local_150 = 0;
  local_68 = local_140;
  local_140 = 0;
  local_60 = local_138;
  local_58 = local_130;
  local_138 = 0;
  local_50 = local_128;
  local_128 = 0;
  local_120 = puVar6;
  local_118 = iVar2;
  local_c0 = puVar7;
  local_b8 = iVar1;
  local_b0 = uVar4;
  FUN_1432f59b8();
  if (local_180 != 0) {
    LOCK();
    *(int *)(local_180 + 0x18) = *(int *)(local_180 + 0x18) + -1;
    UNLOCK();
    if (local_178 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_180 + 8));
    }
  }
  if (local_168 != 0) {
    LOCK();
    *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
    UNLOCK();
    if (local_160 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
    }
  }
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 0x18) = *(int *)(local_150 + 0x18) + -1;
    UNLOCK();
    if (local_148 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_150 + 8));
    }
  }
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 0x18) = *(int *)(local_138 + 0x18) + -1;
    UNLOCK();
    if (local_130 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_138 + 8));
    }
  }
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0;
  if (local_f8 != 0) {
    local_1e8 = local_f8;
  }
  if (local_e0 != 0) {
    lStack_1e0 = local_e0;
  }
  if (local_c8 != 0) {
    local_1d8 = local_c8;
  }
  local_1f8 = local_50;
  local_200 = local_68;
  local_208 = local_80;
  local_210 = local_98;
  local_218 = local_b0;
  FUN_1475df75c(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_110,
                &local_1e8);
  FUN_1475e1016(&local_120);
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e1016 FUN_1475e1016 body=256 status=ok
// SIG undefined FUN_1475e1016(void)

void FUN_1475e1016(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475e1108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475e1116 FUN_1475e1116 body=146 status=ok
// SIG undefined FUN_1475e1116(void)

longlong FUN_1475e1116(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1475e092c();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0xfc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x104) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e11aa FUN_1475e11aa body=38 status=ok
// SIG undefined FUN_1475e11aa(void)

undefined8 FUN_1475e11aa(undefined8 param_1,int param_2)

{
  FUN_145bda9e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e11dc FUN_1475e11dc body=82 status=ok
// SIG undefined FUN_1475e11dc(void)

void FUN_1475e11dc(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1475e13f0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e1230 FUN_1475e1230 body=399 status=ok
// SIG undefined FUN_1475e1230(void)

undefined8 FUN_1475e1230(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1475e12df;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x58;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x40)])();
    FUN_145c51674(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
      FUN_1475e147a(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
      FUN_1475e147a(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1475e12df:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e13ca FUN_1475e13ca body=38 status=ok
// SIG undefined FUN_1475e13ca(void)

undefined8 FUN_1475e13ca(undefined8 param_1,int param_2)

{
  FUN_145bda9e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e13f0 FUN_1475e13f0 body=136 status=ok
// SIG undefined FUN_1475e13f0(void)

void FUN_1475e13f0(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e147a FUN_1475e147a body=103 status=ok
// SIG undefined FUN_1475e147a(void)

void FUN_1475e147a(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x48 + 0x38)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x48);
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar2) * 0x48);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1475e14e2(param_1);
  return;
}



// FUNCTION 1475e14e2 FUN_1475e14e2 body=62 status=ok
// SIG undefined FUN_1475e14e2(void)

void FUN_1475e14e2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475e1520(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 1475e1520 FUN_1475e1520 body=112 status=ok
// SIG undefined FUN_1475e1520(void)

ulonglong FUN_1475e1520(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1475e155a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_1475e155a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1475e1590 FUN_1475e1590 body=262 status=ok
// SIG undefined FUN_1475e1590(void)

void FUN_1475e1590(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar14 = *param_1;
  if ((int)uVar3 < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    uVar13 = uVar3;
    do {
      uVar1 = (uVar13 >> 1) + uVar15;
      if (*(int *)(lVar14 + (ulonglong)uVar1 * 0x48) < *param_2) {
        uVar15 = uVar1 + (uVar13 & 1);
      }
      bVar4 = 1 < uVar13;
      uVar13 = uVar13 >> 1;
    } while (bVar4);
    if (((int)uVar15 < (int)uVar3) && (*(int *)(lVar14 + (ulonglong)uVar15 * 0x48) <= *param_2)) {
      piVar16 = (int *)(lVar14 + (ulonglong)uVar15 * 0x48);
      FUN_145bdaacd(piVar16,1);
      goto LAB_1475e1640;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1475e1696(param_1,uVar3);
    lVar14 = *param_1;
  }
  lVar5 = (ulonglong)uVar15 * 0x48;
  memmove((void *)(lVar14 + lVar5 + 0x48),(void *)(lVar14 + lVar5),
          (ulonglong)(uVar3 - uVar15) * 0x48);
  piVar16 = (int *)(lVar5 + *param_1);
LAB_1475e1640:
  *piVar16 = *param_2;
  iVar6 = param_3[1];
  iVar7 = param_3[2];
  iVar8 = param_3[3];
  iVar9 = param_3[4];
  iVar10 = param_3[5];
  iVar11 = param_3[6];
  iVar12 = param_3[7];
  piVar16[2] = *param_3;
  piVar16[3] = iVar6;
  piVar16[4] = iVar7;
  piVar16[5] = iVar8;
  piVar16[6] = iVar9;
  piVar16[7] = iVar10;
  piVar16[8] = iVar11;
  piVar16[9] = iVar12;
  bVar2 = *(byte *)(param_3 + 0xc);
  *(byte *)(piVar16 + 0xe) = bVar2;
  (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[bVar2])(piVar16 + 10,param_3 + 8);
  *(char *)(piVar16 + 0x10) = (char)param_3[0xe];
  return;
}



// FUNCTION 1475e1696 FUN_1475e1696 body=147 status=ok
// SIG undefined FUN_1475e1696(void)

void FUN_1475e1696(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475e172a FUN_1475e172a body=900 status=ok
// SIG undefined FUN_1475e172a(void)

void FUN_1475e172a(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  byte local_319;
  undefined8 *local_2f8;
  int local_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [32];
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 local_280 [70];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_2b8;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar10 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar10 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_290 + lVar5) = 0;
        *(undefined4 *)((longlong)local_280 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x210);
      local_2c0 = *(undefined8 *)(param_3 + 8);
      local_2e0 = *param_3;
      uStack_2dc = param_3[1];
      iStack_2d8 = param_3[2];
      uStack_2d4 = param_3[3];
      local_2d0 = *(undefined8 *)(param_3 + 4);
      uStack_2c8 = *(undefined8 *)(param_3 + 6);
      local_290 = (undefined1 *)0x0;
      local_288 = 0x400000000;
      puVar13 = local_280;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_2c0._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_2c0);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_2f8,&local_2e0,puVar13);
          uVar8 = local_288;
          if (local_2f8 != (undefined8 *)0x0) {
            lVar12 = (longlong)(int)local_288;
            uVar6 = (int)local_288 + 1;
            local_288 = CONCAT44(local_288._4_4_,uVar6);
            if (local_288._4_4_ < uVar6) {
              FUN_14476a5c8(local_2b0,uVar8 & 0xffffffff);
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
              if (local_2f8 == (undefined8 *)0x0) goto LAB_1475e190c;
            }
            else {
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
            }
            LOCK();
            *(int *)(local_2f8 + 1) = *(int *)(local_2f8 + 1) + 1;
            UNLOCK();
            if (local_2f8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_2f8 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_2f8)(local_2f8,1);
              }
            }
          }
        }
LAB_1475e190c:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 4);
      if ((int)local_288 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_2b0,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_2f8 = (undefined8 *)0x0;
        local_2e8 = 0;
      }
      else {
        FUN_1475e1ab0(lVar10 + 0x28,&local_2f8,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_319 = local_2f0 == 1;
      }
      if (0 < iStack_2d8) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_2dc,local_2e0) + lVar5 * 2);
          lVar12 = *param_6;
          puVar13 = local_280;
          lVar9 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar9 & 0x1f) & 1) != 0) {
              uVar8 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar9 * 4);
              lVar11 = uVar8 + local_2e8;
              if (local_2e8 == 0) {
                lVar11 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar8),lVar11);
              *(undefined8 *)(lVar5 * 0x20 + lVar12 + uVar8) = uVar3;
            }
            lVar9 = lVar9 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar9 != 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_2d8);
      }
      *(undefined4 *)(lVar10 + 0x29c) = 1;
      if (local_2f8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_2f8 + 3) = *(int *)(local_2f8 + 3) + -1;
        UNLOCK();
        if ((local_319 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_2f8 + 1));
        }
      }
      FUN_14588b8d6(local_2b0);
      lVar10 = 0x180;
      do {
        FUN_1475d7c02((longlong)local_280 + lVar10);
        lVar10 = lVar10 + -0x80;
      } while (lVar10 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e1ab0 FUN_1475e1ab0 body=185 status=ok
// SIG undefined FUN_1475e1ab0(void)

undefined8 * FUN_1475e1ab0(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_1475e1b6a(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475e1b6a FUN_1475e1b6a body=117 status=ok
// SIG undefined FUN_1475e1b6a(void)

longlong * FUN_1475e1b6a(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 0x20 + *param_2;
  }
  return param_1;
}



// FUNCTION 1475e1be0 FUN_1475e1be0 body=57 status=ok
// SIG undefined FUN_1475e1be0(void)

undefined8 * FUN_1475e1be0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1cd0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e1c1a FUN_1475e1c1a body=55 status=ok
// SIG undefined FUN_1475e1c1a(void)

void FUN_1475e1c1a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1475e43cc(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1475e1c52 FUN_1475e1c52 body=57 status=ok
// SIG undefined FUN_1475e1c52(void)

undefined8 * FUN_1475e1c52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1cd0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e1c8c FUN_1475e1c8c body=232 status=ok
// SIG undefined FUN_1475e1c8c(void)

undefined8 * FUN_1475e1c8c(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_1475e1d76();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c1cf0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e1d76 FUN_1475e1d76 body=104 status=ok
// SIG undefined FUN_1475e1d76(void)

undefined8 FUN_1475e1d76(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1475e1dde FUN_1475e1dde body=38 status=ok
// SIG undefined FUN_1475e1dde(void)

undefined8 FUN_1475e1dde(undefined8 param_1,int param_2)

{
  FUN_1475e1e7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e1e04 FUN_1475e1e04 body=118 status=ok
// SIG undefined FUN_1475e1e04(void)

void FUN_1475e1e04(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_1475e1fde(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 1475e1e7a FUN_1475e1e7a body=71 status=ok
// SIG undefined FUN_1475e1e7a(void)

void FUN_1475e1e7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c1cf0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1475e1ef6(param_1 + 8);
  FUN_1475e1ec2(param_1 + 1);
  return;
}



// FUNCTION 1475e1ec2 FUN_1475e1ec2 body=52 status=ok
// SIG undefined FUN_1475e1ec2(void)

void FUN_1475e1ec2(longlong *param_1)

{
  FUN_1475e1f84();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475e1ef6 FUN_1475e1ef6 body=52 status=ok
// SIG undefined FUN_1475e1ef6(void)

void FUN_1475e1ef6(longlong *param_1)

{
  FUN_1475e1f2a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475e1f2a FUN_1475e1f2a body=89 status=ok
// SIG undefined FUN_1475e1f2a(void)

void FUN_1475e1f2a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 1475e1f84 FUN_1475e1f84 body=89 status=ok
// SIG undefined FUN_1475e1f84(void)

void FUN_1475e1f84(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1475e1fde FUN_1475e1fde body=104 status=ok
// SIG undefined FUN_1475e1fde(void)

void FUN_1475e1fde(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1475e2046 FUN_1475e2046 body=1209 status=ok
// SIG undefined FUN_1475e2046(void)

void FUN_1475e2046(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_94;
  ushort local_8e;
  char local_8c;
  char local_8a;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475e20a3;
      plVar17 = plVar17 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1475e20a3:
  local_c0 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_cc = *(int *)(param_2 + 0x14);
  if (local_cc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1475e20ff;
      plVar16 = plVar16 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1475e20ff:
  lVar12 = *plVar17;
  local_d0 = *(int *)(param_2 + 0x14);
  if (local_d0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar23 = *(longlong **)(param_2 + 0x28);
    lVar13 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar23 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1475e214d;
      plVar23 = plVar23 + 4;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  plVar23 = (longlong *)0x0;
LAB_1475e214d:
  lVar13 = *plVar16;
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar23 + 1));
  }
  LOCK();
  *(int *)(plVar23 + 3) = (int)plVar23[3] + 1;
  UNLOCK();
  local_e0 = *plVar23;
  local_b0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if (local_c0 != 0) {
    local_c8 = param_1 + 8;
    uVar24 = 0;
    do {
      local_94 = *(int *)(lVar13 + uVar24 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar14 = *(longlong *)(param_1 + 8);
      uVar18 = 0;
      if (0 < (int)uVar2) {
        uVar18 = 0;
        uVar20 = (ulonglong)uVar2;
        uVar21 = uVar2;
        do {
          uVar20 = uVar20 >> 1;
          uVar22 = (uint)uVar20 + (int)uVar18;
          if (*(int *)(lVar14 + (ulonglong)uVar22 * 0x28) < local_94) {
            uVar18 = (ulonglong)(uVar22 + (uVar21 & 1));
          }
          bVar3 = 1 < uVar21;
          uVar21 = (uint)uVar20;
        } while (bVar3);
      }
      if (((int)uVar18 < (int)uVar2) && (*(int *)(lVar14 + uVar18 * 0x28) <= local_94)) {
        lVar14 = lVar14 + uVar18 * 0x28;
        if ((undefined4 *)(lVar14 + 8) == (undefined4 *)0x0) goto LAB_1475e222f;
        uVar4 = *(undefined4 *)(lVar14 + 8);
        uVar5 = *(undefined4 *)(lVar14 + 0xc);
        uVar6 = *(undefined4 *)(lVar14 + 0x10);
        uVar7 = *(undefined4 *)(lVar14 + 0x14);
        uVar11 = *(undefined8 *)(lVar14 + 0x20);
        puVar19 = (undefined8 *)(lVar12 + 0x10 + uVar24 * 0x20);
        *puVar19 = *(undefined8 *)(lVar14 + 0x18);
        puVar19[1] = uVar11;
        puVar1 = (undefined4 *)(lVar12 + uVar24 * 0x20);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
      }
      else {
LAB_1475e222f:
        lVar14 = FUN_1475b443c(local_b0);
        if (((lVar14 != 0) && (lVar15 = FUN_14479d2ce(lVar14), lVar15 != 0)) &&
           (*(longlong *)(lVar14 + 8) != 0)) {
          local_a8 = *(undefined4 *)(param_1 + 0x30);
          uStack_a4 = *(undefined4 *)(param_1 + 0x34);
          uStack_a0 = *(undefined4 *)(param_1 + 0x38);
          uStack_9c = *(undefined4 *)(param_1 + 0x3c);
          local_f0 = lVar15;
          FUN_140d4d2ba(&local_8e,lVar15,lVar14 + 8,&local_a8);
          lVar15 = *(longlong *)(param_1 + 0x48);
          if (lVar15 == 0) {
LAB_1475e2289:
            if (local_8a == '\0') {
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_68 = 1;
              FUN_1475e2bd4(local_f0,*(undefined1 *)(local_e0 + uVar24),lVar14 + 0x10,&local_88);
            }
            else if (local_8c == '\x01') {
              local_68 = 1;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_8e))
                        (&local_88,local_f0,*(undefined1 *)(local_e0 + uVar24));
            }
            else {
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 1;
              FUN_1475dfcca(local_f0,*(undefined1 *)(local_e0 + uVar24),local_8e,&local_88);
            }
            puVar19 = &local_88;
            puVar1 = (undefined4 *)(lVar12 + 0x10 + uVar24 * 0x20);
            *puVar1 = (undefined4)local_78;
            puVar1[1] = local_78._4_4_;
            puVar1[2] = (undefined4)uStack_70;
            puVar1[3] = uStack_70._4_4_;
            puVar1 = (undefined4 *)(lVar12 + uVar24 * 0x20);
            *puVar1 = (undefined4)local_88;
            puVar1[1] = local_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
          }
          else {
            local_e8 = lVar15;
            if (local_8a == '\0') {
              FUN_1475e2c08(lVar15,&local_88,local_f0,lVar14 + 0x10);
            }
            else if (local_8c == '\x01') {
              FUN_1475e343e();
            }
            else {
              FUN_1475e3620(lVar15,&local_88,local_f0,local_8e);
            }
            if (local_88._2_1_ == '\x01') {
              puVar19 = (undefined8 *)((local_88 & 0xffff) * 0x20 + *(longlong *)(local_e8 + 8));
            }
            else {
              puVar19 = (undefined8 *)0x0;
            }
            if (puVar19 == (undefined8 *)0x0) goto LAB_1475e2289;
            uVar4 = *(undefined4 *)puVar19;
            uVar5 = *(undefined4 *)((longlong)puVar19 + 4);
            uVar6 = *(undefined4 *)(puVar19 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar19 + 0xc);
            uVar8 = *(undefined4 *)((longlong)puVar19 + 0x14);
            uVar9 = *(undefined4 *)(puVar19 + 3);
            uVar10 = *(undefined4 *)((longlong)puVar19 + 0x1c);
            puVar1 = (undefined4 *)(lVar12 + 0x10 + uVar24 * 0x20);
            *puVar1 = *(undefined4 *)(puVar19 + 2);
            puVar1[1] = uVar8;
            puVar1[2] = uVar9;
            puVar1[3] = uVar10;
            puVar1 = (undefined4 *)(lVar12 + uVar24 * 0x20);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
          }
          FUN_1475e3802(local_c8,&local_94,puVar19);
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != local_c0);
  }
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar23 + 3) = (int)plVar23[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar23 + 1));
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_d0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
    }
  }
  if (plVar17 != (longlong *)0x0) {
    uVar24 = plVar17[2];
    if ((ulonglong)plVar17[2] < local_b8) {
      uVar24 = local_b8;
    }
    plVar17[2] = uVar24;
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (local_cc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e2500 FUN_1475e2500 body=1746 status=ok
// SIG undefined FUN_1475e2500(void)

void FUN_1475e2500(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined8 local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined2 local_da;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  ushort local_94;
  char local_92;
  ushort local_90;
  char cStack_8e;
  undefined5 uStack_8d;
  int local_88;
  longlong local_80;
  ushort local_78;
  char cStack_76;
  undefined5 uStack_75;
  int local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1475e255e;
      plVar14 = plVar14 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_1475e255e:
  local_128 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_e8 = *(ulonglong *)(param_1 + 0x40);
  local_fc = *(int *)(param_2 + 0x14);
  if (local_fc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar15 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475e25bb;
      plVar15 = plVar15 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1475e25bb:
  local_110 = *plVar14;
  local_f0 = *(ulonglong *)(param_1 + 0x40);
  local_100 = *(int *)(param_2 + 0x14);
  if (local_100 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1475e2617;
      plVar17 = plVar17 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1475e2617:
  puVar13 = (undefined4 *)*plVar15;
  local_104 = *(int *)(param_2 + 0x14);
  if (local_104 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1475e2669;
      plVar18 = plVar18 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_1475e2669:
  local_130 = *plVar17;
  local_108 = *(int *)(param_2 + 0x14);
  if (local_108 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  local_118 = *plVar18;
  FUN_140b325e4(param_2,&local_b0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_a0 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar11 = local_68;
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_120 = local_80;
      if ((short)local_128 != 0 && local_80 != 0) {
        lVar11 = 0;
        uVar16 = 0;
        do {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(*(longlong *)(local_120 + lVar11) + 0x58) != 0) {
            puVar12 = *(undefined2 **)(*(longlong *)(local_120 + lVar11) + 0x50);
          }
          local_f8 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_d8,puVar12,1);
          FUN_1475e2c08(local_f8,&local_94,*(undefined8 *)(local_130 + uVar16 * 8),&local_d8);
          if (local_92 == '\x01') {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            puVar2 = (undefined4 *)(lVar5 + (ulonglong)local_94 * 0x20);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            puVar3 = (undefined8 *)(lVar5 + 0x10 + (ulonglong)local_94 * 0x20);
            uVar10 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)puVar13 + lVar11 * 2 + 0x10);
            *puVar4 = *puVar3;
            puVar4[1] = uVar10;
            puVar2 = (undefined4 *)((longlong)puVar13 + lVar11 * 2);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
          }
          else {
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            FUN_1475dfd90(*(undefined8 *)(local_130 + uVar16 * 8),
                          *(undefined1 *)(local_118 + uVar16),*(undefined8 *)(local_120 + lVar11),
                          &local_d8);
            puVar2 = (undefined4 *)((longlong)puVar13 + lVar11 * 2 + 0x10);
            *puVar2 = (undefined4)local_c8;
            puVar2[1] = local_c8._4_4_;
            puVar2[2] = (undefined4)uStack_c0;
            puVar2[3] = uStack_c0._4_4_;
            puVar2 = (undefined4 *)((longlong)puVar13 + lVar11 * 2);
            *puVar2 = (undefined4)local_d8;
            puVar2[1] = local_d8._4_4_;
            puVar2[2] = (undefined4)uStack_d0;
            puVar2[3] = uStack_d0._4_4_;
            local_138 = *(undefined8 *)(local_120 + lVar11);
            FUN_1475e3f50(*(undefined8 *)(param_1 + 0x48),&local_da,
                          *(undefined8 *)(local_130 + uVar16 * 8),&local_d8);
            *(undefined2 *)(local_110 + uVar16 * 2) = local_da;
          }
          uVar16 = uVar16 + 1;
          lVar11 = lVar11 + 0x10;
        } while (local_128 != uVar16);
      }
      lVar11 = CONCAT53(uStack_8d,CONCAT12(cStack_8e,local_90));
      if (lVar11 != 0) {
        LOCK();
        piVar1 = (int *)(lVar11 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_8d,CONCAT12(cStack_8e,local_90)) + 8));
        }
      }
    }
    else if (local_128 != 0) {
      uVar16 = 0;
      do {
        FUN_1475e3620(*(undefined8 *)(param_1 + 0x48),&local_90,
                      *(undefined8 *)(local_130 + uVar16 * 8),*(undefined2 *)(local_68 + uVar16 * 2)
                     );
        if (cStack_8e == '\x01') {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
          puVar2 = (undefined4 *)(lVar5 + (ulonglong)local_90 * 0x20);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar3 = (undefined8 *)(lVar5 + 0x10 + (ulonglong)local_90 * 0x20);
          uVar10 = puVar3[1];
          *(undefined8 *)(puVar13 + 4) = *puVar3;
          *(undefined8 *)(puVar13 + 6) = uVar10;
          *puVar13 = uVar6;
          puVar13[1] = uVar7;
          puVar13[2] = uVar8;
          puVar13[3] = uVar9;
        }
        else {
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_1475dfcca(*(undefined8 *)(local_130 + uVar16 * 8),*(undefined1 *)(local_118 + uVar16),
                        *(undefined2 *)(lVar11 + uVar16 * 2),&local_d8);
          puVar13[4] = (undefined4)local_c8;
          puVar13[5] = local_c8._4_4_;
          puVar13[6] = (undefined4)uStack_c0;
          puVar13[7] = uStack_c0._4_4_;
          *puVar13 = (undefined4)local_d8;
          puVar13[1] = local_d8._4_4_;
          puVar13[2] = (undefined4)uStack_d0;
          puVar13[3] = uStack_d0._4_4_;
          local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(lVar11 + uVar16 * 2));
          FUN_1475e3e6e(*(undefined8 *)(param_1 + 0x48),&local_94,
                        *(undefined8 *)(local_130 + uVar16 * 8),&local_d8);
          *(ushort *)(local_110 + uVar16 * 2) = local_94;
        }
        uVar16 = uVar16 + 1;
        puVar13 = puVar13 + 8;
      } while (local_128 != uVar16);
    }
    lVar11 = CONCAT53(uStack_75,CONCAT12(cStack_76,local_78));
    if (lVar11 != 0) {
      LOCK();
      piVar1 = (int *)(lVar11 + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_75,CONCAT12(cStack_76,local_78)) + 8));
      }
    }
  }
  else if (local_128 != 0) {
    uVar16 = 0;
    do {
      FUN_1475e343e(*(undefined8 *)(param_1 + 0x48),&local_78,
                    *(undefined8 *)(local_130 + uVar16 * 8),*(undefined2 *)(local_a0 + uVar16 * 2));
      if (cStack_76 == '\x01') {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        puVar2 = (undefined4 *)(lVar11 + (ulonglong)local_78 * 0x20);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar3 = (undefined8 *)(lVar11 + 0x10 + (ulonglong)local_78 * 0x20);
        uVar10 = puVar3[1];
        *(undefined8 *)(puVar13 + 4) = *puVar3;
        *(undefined8 *)(puVar13 + 6) = uVar10;
        *puVar13 = uVar6;
        puVar13[1] = uVar7;
        puVar13[2] = uVar8;
        puVar13[3] = uVar9;
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                    (longlong)*(int *)(param_1 + 0x3c) *
                    (ulonglong)*(ushort *)(local_a0 + uVar16 * 2)))
                  (&local_d8,*(undefined8 *)(local_130 + uVar16 * 8),
                   *(undefined1 *)(local_118 + uVar16));
        puVar13[4] = (undefined4)local_c8;
        puVar13[5] = local_c8._4_4_;
        puVar13[6] = (undefined4)uStack_c0;
        puVar13[7] = uStack_c0._4_4_;
        *puVar13 = (undefined4)local_d8;
        puVar13[1] = local_d8._4_4_;
        puVar13[2] = (undefined4)uStack_d0;
        puVar13[3] = uStack_d0._4_4_;
        local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(local_a0 + uVar16 * 2));
        FUN_1475e3d8c(*(undefined8 *)(param_1 + 0x48),&local_90,
                      *(undefined8 *)(local_130 + uVar16 * 8),&local_d8);
        *(ushort *)(local_110 + uVar16 * 2) = local_90;
      }
      uVar16 = uVar16 + 1;
      puVar13 = puVar13 + 8;
    } while (local_128 != uVar16);
  }
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 0x18) = *(int *)(local_b0 + 0x18) + -1;
    UNLOCK();
    if (local_a8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_b0 + 8));
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 3) = (int)plVar18[3] + -1;
    UNLOCK();
    if (local_108 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar18 + 1));
    }
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (local_104 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar17 + 1));
    }
  }
  if (plVar15 != (longlong *)0x0) {
    uVar16 = plVar15[2];
    if ((ulonglong)plVar15[2] < local_f0) {
      uVar16 = local_f0;
    }
    plVar15[2] = uVar16;
    LOCK();
    *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
    UNLOCK();
    if (local_100 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    uVar16 = plVar14[2];
    if ((ulonglong)plVar14[2] < local_e8) {
      uVar16 = local_e8;
    }
    plVar14[2] = uVar16;
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (local_fc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e2bd4 FUN_1475e2bd4 body=52 status=ok
// SIG undefined FUN_1475e2bd4(void)

void FUN_1475e2bd4(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == '\x03') {
    FUN_1475e3b1a(param_1,param_3,param_4);
    return;
  }
  if (param_2 != '\x02') {
    if (param_2 != '\x01') {
      return;
    }
    FUN_1475e3970(param_1,param_3,param_4);
    return;
  }
  FUN_1475e3a50(param_1,param_3,param_4);
  return;
}



// FUNCTION 1475e2c08 FUN_1475e2c08 body=483 status=ok
// SIG undefined FUN_1475e2c08(void)

undefined8 FUN_1475e2c08(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475e2d36;
        }
        else {
LAB_1475e2d36:
          FUN_1475e30a6(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475e3172(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475e2fda(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_1475e2dec(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e2dec FUN_1475e2dec body=493 status=ok
// SIG undefined FUN_1475e2dec(void)

undefined2 * FUN_1475e2dec(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475e2f1e;
        }
        else {
LAB_1475e2f1e:
          FUN_1475e30a6(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_1475e3172(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1475e2fda(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_1475e3386((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e2fda FUN_1475e2fda body=203 status=ok
// SIG undefined FUN_1475e2fda(void)

void FUN_1475e2fda(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1446f4a44(param_1,iVar5);
  return;
}



// FUNCTION 1475e30a6 FUN_1475e30a6 body=90 status=ok
// SIG undefined FUN_1475e30a6(void)

void FUN_1475e30a6(longlong *param_1,int param_2)

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
  FUN_1475e3100();
  return;
}



// FUNCTION 1475e3100 FUN_1475e3100 body=114 status=ok
// SIG undefined FUN_1475e3100(void)

void FUN_1475e3100(longlong *param_1,int param_2)

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



// FUNCTION 1475e3172 FUN_1475e3172 body=68 status=ok
// SIG undefined FUN_1475e3172(void)

void FUN_1475e3172(longlong param_1,uint param_2)

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
  FUN_1475e31b6(param_1);
  return;
}



// FUNCTION 1475e31b6 FUN_1475e31b6 body=462 status=ok
// SIG undefined FUN_1475e31b6(void)

void FUN_1475e31b6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1475e3386 FUN_1475e3386 body=107 status=ok
// SIG undefined FUN_1475e3386(void)

int FUN_1475e3386(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1475e33f1(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1475e33f1 FUN_1475e33f1 body=76 status=ok
// SIG undefined FUN_1475e33f1(void)

undefined8 FUN_1475e33f1(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1475e343e FUN_1475e343e body=481 status=ok
// SIG undefined FUN_1475e343e(void)

undefined8 FUN_1475e343e(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475e356c;
        }
        else {
LAB_1475e356c:
          FUN_1475e30a6(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475e3172(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475e2fda(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1475e2dec(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e3620 FUN_1475e3620 body=481 status=ok
// SIG undefined FUN_1475e3620(void)

undefined8 FUN_1475e3620(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475e374e;
        }
        else {
LAB_1475e374e:
          FUN_1475e30a6(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475e3172(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475e2fda(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_1475e2dec(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e3802 FUN_1475e3802 body=218 status=ok
// SIG undefined FUN_1475e3802(void)

void FUN_1475e3802(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  if ((int)uVar2 < 1) {
    uVar11 = 0;
  }
  else {
    iVar8 = *param_2;
    uVar11 = 0;
    uVar9 = uVar2;
    do {
      uVar1 = (uVar9 >> 1) + uVar11;
      if (*(int *)(lVar10 + (ulonglong)uVar1 * 0x28) < iVar8) {
        uVar11 = uVar1 + (uVar9 & 1);
      }
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    if (((int)uVar11 < (int)uVar2) && (*(int *)(lVar10 + (ulonglong)uVar11 * 0x28) <= iVar8)) {
      piVar12 = (int *)(lVar10 + (ulonglong)uVar11 * 0x28);
      goto LAB_1475e38a7;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1475e38dc(param_1,uVar2);
    lVar10 = *param_1;
  }
  lVar4 = (ulonglong)uVar11 * 0x28;
  memmove((void *)(lVar10 + lVar4 + 0x28),(void *)(lVar10 + lVar4),
          (ulonglong)(uVar2 - uVar11) * 0x28);
  piVar12 = (int *)(lVar4 + *param_1);
  iVar8 = *param_2;
LAB_1475e38a7:
  *piVar12 = iVar8;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)(piVar12 + 2) = *param_3;
  *(undefined8 *)(piVar12 + 4) = uVar5;
  *(undefined8 *)(piVar12 + 6) = uVar6;
  *(undefined8 *)(piVar12 + 8) = uVar7;
  return;
}



// FUNCTION 1475e38dc FUN_1475e38dc body=147 status=ok
// SIG undefined FUN_1475e38dc(void)

void FUN_1475e38dc(longlong param_1,int param_2)

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



// FUNCTION 1475e3970 FUN_1475e3970 body=223 status=ok
// SIG undefined FUN_1475e3970(void)

void FUN_1475e3970(undefined8 param_1,undefined8 param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  longlong local_50 [2];
  float local_40 [4];
  char local_30;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_2,&local_60);
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140056680(local_50,puVar5);
  pfVar4 = local_40;
  FUN_1475e3c06(pfVar4,param_1,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2c == '\x01') {
    if (local_30 == '\x01') {
      pfVar4 = (float *)FUN_1400c06fe(local_40);
    }
    fVar1 = pfVar4[1];
    fVar2 = pfVar4[2];
    fVar3 = pfVar4[3];
    *param_3 = (double)*pfVar4;
    param_3[1] = (double)fVar1;
    param_3[2] = (double)fVar2;
    param_3[3] = (double)fVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e3a50 FUN_1475e3a50 body=201 status=ok
// SIG undefined FUN_1475e3a50(void)

void FUN_1475e3a50(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_58);
  puVar1 = local_58;
  if (local_50 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_48,puVar1);
  FUN_1475e3c96(&local_34,param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_24 == '\x01') {
    *param_3 = (double)local_34;
    param_3[1] = (double)local_30;
    param_3[2] = (double)local_2c;
    param_3[3] = (double)local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e3b1a FUN_1475e3b1a body=235 status=ok
// SIG undefined FUN_1475e3b1a(void)

void FUN_1475e3b1a(undefined8 param_1,undefined8 param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_48);
  puVar3 = local_48;
  if (local_40 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140056680(local_38,puVar3);
  FUN_1475e3d12(&local_28,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_24 == '\x01') {
    fVar1 = (float)(&DAT_14c758c60)[local_27];
    fVar2 = (float)(&DAT_14c758c60)[local_28];
    *param_3 = (double)(float)(&DAT_14c758c60)[local_26];
    param_3[1] = (double)fVar1;
    param_3[2] = (double)fVar2;
    param_3[3] = (double)((float)local_25 * 0.003921569);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e3c06 FUN_1475e3c06 body=143 status=ok
// SIG undefined FUN_1475e3c06(void)

undefined4 * FUN_1475e3c06(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar6 = FUN_1406f977c(local_48);
  if ((lVar6 == 0) ||
     (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_20), puVar7 == (undefined4 *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    uVar5 = *(undefined1 *)(puVar7 + 4);
    *(undefined2 *)((longlong)param_1 + 0x11) = *(undefined2 *)((longlong)puVar7 + 0x11);
    *(undefined1 *)((longlong)param_1 + 0x13) = *(undefined1 *)((longlong)puVar7 + 0x13);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *(undefined1 *)(param_1 + 4) = uVar5;
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 5) = uVar5;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e3c96 FUN_1475e3c96 body=123 status=ok
// SIG undefined FUN_1475e3c96(void)

undefined4 * FUN_1475e3c96(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar5 = FUN_1406f977c(local_48);
  if ((lVar5 == 0) ||
     (puVar6 = (undefined4 *)(*(int *)(lVar5 + 0x44) + local_20), puVar6 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *param_1 = *puVar6;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar4;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e3d12 FUN_1475e3d12 body=121 status=ok
// SIG undefined FUN_1475e3d12(void)

undefined4 * FUN_1475e3d12(undefined4 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar2 = FUN_1406f977c(local_48);
  if ((lVar2 == 0) ||
     (puVar3 = (undefined4 *)(*(int *)(lVar2 + 0x44) + local_20), puVar3 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_1 = *puVar3;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e3d8c FUN_1475e3d8c body=224 status=ok
// SIG undefined FUN_1475e3d8c(void)

undefined2 *
FUN_1475e3d8c(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_1475e404e(param_1 + 8,&local_60);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  local_58[4] = param_4[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1475e4134(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e3e6e FUN_1475e3e6e body=224 status=ok
// SIG undefined FUN_1475e3e6e(void)

undefined2 *
FUN_1475e3e6e(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_1475e404e(param_1 + 8,&local_60);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  local_58[4] = param_4[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1475e4134(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e3f50 FUN_1475e3f50 body=252 status=ok
// SIG undefined FUN_1475e3f50(void)

undefined2 *
FUN_1475e3f50(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_1475e404e(param_1 + 8,&local_58);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  local_50[4] = param_4[4];
  local_50[5] = uVar6;
  local_50[6] = uVar7;
  local_50[7] = uVar8;
  *local_50 = uVar2;
  local_50[1] = uVar3;
  local_50[2] = uVar4;
  local_50[3] = uVar5;
  local_50 = (undefined4 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_1475e4134(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e404e FUN_1475e404e body=229 status=ok
// SIG undefined FUN_1475e404e(void)

int * FUN_1475e404e(longlong *param_1,int *param_2)

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



// FUNCTION 1475e4134 FUN_1475e4134 body=339 status=ok
// SIG undefined FUN_1475e4134(void)

undefined4 * FUN_1475e4134(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475e4288(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_1475e436e(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1475e31b6(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e4288 FUN_1475e4288 body=229 status=ok
// SIG undefined FUN_1475e4288(void)

int * FUN_1475e4288(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 1475e436e FUN_1475e436e body=93 status=ok
// SIG undefined FUN_1475e436e(void)

undefined8 FUN_1475e436e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1475e3386(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1475e3100(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1475e43cc FUN_1475e43cc body=48 status=ok
// SIG undefined FUN_1475e43cc(void)

void FUN_1475e43cc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1475e43fc FUN_1475e43fc body=31 status=ok
// SIG undefined FUN_1475e43fc(void)

undefined8 FUN_1475e43fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e441c FUN_1475e441c body=335 status=ok
// SIG undefined FUN_1475e441c(void)

void FUN_1475e441c(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined8 *local_120;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_106;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [13];
  byte local_eb;
  uint local_e8;
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14009d2a0();
  local_110 = *(undefined2 *)(lVar2 + 0x4a);
  local_10a = *(undefined2 *)(lVar2 + 0x108);
  local_10e = *(undefined4 *)(lVar2 + 0x104);
  local_108 = **(undefined2 **)(param_2 + 0x18);
  local_106 = *(undefined2 *)*param_3;
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_112 = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_112;
  local_128 = &local_110;
  FUN_145c4f454(&local_110,local_f8);
  local_e8 = *(uint *)(param_7 + 0x290);
  local_eb = local_eb & 0xfe | (local_e8 & 0xfffffeff) == 1;
  local_148 = param_6;
  local_140 = param_2;
  FUN_1432f72a0(local_f8,&local_120,param_7 + 0x28,param_5);
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_120 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e456c FUN_1475e456c body=130 status=ok
// SIG undefined FUN_1475e456c(void)

void FUN_1475e456c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1475e56f0(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e45f0 FUN_1475e45f0 body=616 status=ok
// SIG undefined FUN_1475e45f0(void)

void FUN_1475e45f0(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475e59fe(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e485a FUN_1475e485a body=309 status=ok
// SIG undefined FUN_1475e485a(void)

void FUN_1475e485a(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = (int)param_4[1];
  if (0 < iVar2) {
    lVar6 = *param_6 + 8;
    lVar4 = 0;
    do {
      if (*(short *)(*param_4 + lVar4 * 2) != -1) {
        FUN_1432d4ca4(param_5 + 0x28,&local_60);
        lVar5 = (longlong)local_58;
        FUN_1475e5b2c(local_60,&local_60,*(undefined2 *)*param_3);
        if ((local_50 != 0) &&
           (plVar3 = (longlong *)(local_50 + lVar5 * 0x10), plVar3 != (longlong *)0x0)) {
          uVar1 = *(ushort *)(*param_3 + 2);
          lVar5 = *plVar3;
          if (DAT_14c950c29 == '\x01') {
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar5 = *plVar3;
            }
          }
          *(longlong *)(lVar6 + -8 + (ulonglong)uVar1) = lVar5;
          *(longlong *)(lVar6 + (ulonglong)uVar1) = plVar3[1];
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar2 = (int)param_4[1];
      }
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e4992 FUN_1475e4992 body=29 status=ok
// SIG undefined FUN_1475e4992(void)

undefined8 FUN_1475e4992(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e49b0 FUN_1475e49b0 body=188 status=ok
// SIG undefined FUN_1475e49b0(void)

void FUN_1475e49b0(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x14);
  lVar3 = *param_4;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  lVar5 = param_4[1];
  pcVar4 = *(code **)(lVar2 + 0x20 + (param_3 & 0xffff) * (longlong)iVar1);
  local_50 = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_48 = (char)lVar5;
  (*pcVar4)(param_2,&local_50,param_5);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e4a6e FUN_1475e4a6e body=129 status=ok
// SIG undefined FUN_1475e4a6e(void)

void FUN_1475e4a6e(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((short)param_2 != 0) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_30 = (undefined1)param_3[1];
    FUN_1475e4af0(param_1,&local_38,param_2,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e4af0 FUN_1475e4af0 body=108 status=ok
// SIG undefined FUN_1475e4af0(void)

void FUN_1475e4af0(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1406f4b62(param_4);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      if ((char)param_2[1] == '\0') {
        return;
      }
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if (lVar2 == 0) {
        return;
      }
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30) {
        return;
      }
    }
    uVar3 = FUN_1406f4b62(param_4);
    *(undefined8 *)(param_1 + (ulonglong)(param_3 & 0xffff)) = uVar3;
  }
  return;
}



// FUNCTION 1475e4b5c FUN_1475e4b5c body=127 status=ok
// SIG undefined FUN_1475e4b5c(void)

undefined4 * FUN_1475e4b5c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475e4bdc FUN_1475e4bdc body=273 status=ok
// SIG undefined FUN_1475e4bdc(void)

void FUN_1475e4bdc(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[5];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e4cee FUN_1475e4cee body=773 status=ok
// SIG undefined FUN_1475e4cee(void)

void FUN_1475e4cee(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  int local_168;
  int local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar3 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[5]) goto LAB_1475e4d41;
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1475e4d41:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_150 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar3 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[4]) goto LAB_1475e4d77;
      puVar10 = puVar10 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1475e4d77:
  local_158 = *puVar11;
  local_168 = *(int *)(lVar3 + 0x14);
  if (local_168 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  local_160 = *puVar10;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_128,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *param_4) goto LAB_1475e4df8;
      puVar9 = puVar9 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1475e4df8:
  iVar2 = *(int *)(lVar3 + 0x14);
  local_164 = iVar1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  lVar7 = local_e8;
  lVar8 = local_100;
  lVar3 = local_118;
  uVar6 = local_158;
  uVar5 = local_160;
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar9;
  local_c8 = local_128;
  local_c0 = local_120;
  local_128 = 0;
  local_b8 = local_118;
  local_118 = 0;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_98 = local_f8;
  local_90 = local_f0;
  local_f8 = 0;
  local_88 = local_e8;
  local_e8 = 0;
  local_78 = local_168;
  local_70 = local_160;
  local_60 = local_164;
  local_58 = local_158;
  local_e0 = puVar9;
  local_d8 = iVar2;
  local_d0 = uVar4;
  local_80 = puVar10;
  local_68 = puVar11;
  FUN_1432f59b8();
  local_148 = 0;
  lStack_140 = 0;
  local_138 = 0;
  if (lVar3 != 0) {
    local_148 = lVar3;
  }
  if (lVar8 != 0) {
    lStack_140 = lVar8;
  }
  if (lVar7 != 0) {
    local_138 = lVar7;
  }
  local_170 = uVar6;
  local_178 = uVar5;
  FUN_140f5da0a(local_150,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_148);
  FUN_1475e4ff4(&local_e0);
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e4ff4 FUN_1475e4ff4 body=130 status=ok
// SIG undefined FUN_1475e4ff4(void)

void FUN_1475e4ff4(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475e5068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475e5076 FUN_1475e5076 body=118 status=ok
// SIG undefined FUN_1475e5076(void)

longlong FUN_1475e5076(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475e4b5c();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e50ee FUN_1475e50ee body=38 status=ok
// SIG undefined FUN_1475e50ee(void)

undefined8 FUN_1475e50ee(undefined8 param_1,int param_2)

{
  FUN_1461e0122();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e5120 FUN_1475e5120 body=86 status=ok
// SIG undefined FUN_1475e5120(void)

void FUN_1475e5120(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1475e534a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e5178 FUN_1475e5178 body=417 status=ok
// SIG undefined FUN_1475e5178(void)

undefined8 FUN_1475e5178(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar7 = 3;
    if (cVar6 == '\0') goto LAB_1475e5232;
  }
  if (param_3 == '\x01') {
    lVar5 = (longlong)param_2 * 0x50;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar5);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar5 + 0x30)])();
    FUN_1461bba4c(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar8 = 0;
    if (0 < (int)uVar3) {
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar3;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar8;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
          uVar8 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar4 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar4);
    }
    if (((int)uVar8 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
      FUN_1475e53d8(param_1 + 0xa0);
    }
    uVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar8 = 0;
    if (0 < (int)uVar3) {
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar3;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar8;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
          uVar8 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar4 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar4);
    }
    if (((int)uVar8 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
      FUN_1475e53d8(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar7 = 1;
  }
LAB_1475e5232:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e5324 FUN_1475e5324 body=38 status=ok
// SIG undefined FUN_1475e5324(void)

undefined8 FUN_1475e5324(undefined8 param_1,int param_2)

{
  FUN_1461e0122();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e534a FUN_1475e534a body=140 status=ok
// SIG undefined FUN_1475e534a(void)

void FUN_1475e534a(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e53d8 FUN_1475e53d8 body=102 status=ok
// SIG undefined FUN_1475e53d8(void)

void FUN_1475e53d8(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x40 + 0x28)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x40);
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar2) << 6);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1475e543e(param_1);
  return;
}



// FUNCTION 1475e543e FUN_1475e543e body=62 status=ok
// SIG undefined FUN_1475e543e(void)

void FUN_1475e543e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475e547c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 1475e547c FUN_1475e547c body=93 status=ok
// SIG undefined FUN_1475e547c(void)

ulonglong FUN_1475e547c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1475e54da FUN_1475e54da body=169 status=ok
// SIG undefined FUN_1475e54da(void)

void FUN_1475e54da(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  code *pcVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_3 + 0x18);
  local_48 = *param_2;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = (undefined1)param_2[1];
  (*pcVar1)(&local_38,param_1);
  if (DAT_14c950c29 == 1) {
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_4 = local_38;
  param_4[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e5584 FUN_1475e5584 body=230 status=ok
// SIG undefined FUN_1475e5584(void)

void FUN_1475e5584(longlong *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  uVar5 = 0;
  if (0 < (int)uVar2) {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar5;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x40) < *param_2) {
        uVar5 = uVar1 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
    if (((int)uVar5 < (int)uVar2) && (*(int *)(lVar8 + (ulonglong)uVar5 * 0x40) <= *param_2)) {
      piVar7 = (int *)(lVar8 + (ulonglong)uVar5 * 0x40);
      FUN_1461e0207(piVar7,1);
      goto LAB_1475e5631;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1475e566a(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar6 = (ulonglong)uVar5 * 0x40;
  memmove((void *)(lVar8 + lVar6 + 0x40),(void *)(lVar8 + lVar6),(ulonglong)(uVar2 - uVar5) << 6);
  piVar7 = (int *)(lVar6 + *param_1);
LAB_1475e5631:
  *piVar7 = *param_2;
  FUN_1461bb9d2(piVar7 + 2,param_3);
  return;
}



// FUNCTION 1475e566a FUN_1475e566a body=132 status=ok
// SIG undefined FUN_1475e566a(void)

void FUN_1475e566a(longlong param_1,int param_2)

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



// FUNCTION 1475e56f0 FUN_1475e56f0 body=780 status=ok
// SIG undefined FUN_1475e56f0(void)

void FUN_1475e56f0(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte local_191;
  undefined8 *local_190;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_138;
  if (param_4 == 0) goto LAB_1475e5749;
  uVar5 = FUN_145990612();
  plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_1475e5749;
  lVar2 = *(longlong *)(param_4 + 0x28);
  *(undefined4 *)(lVar2 + 0x29c) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_160 = *param_3;
  uStack_15c = param_3[1];
  iStack_158 = param_3[2];
  uStack_154 = param_3[3];
  local_150 = param_3[4];
  uStack_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  local_110 = (undefined1 *)0x0;
  local_108 = 0x400000000;
  local_140 = uVar5;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    local_140._6_2_ = (undefined2)((ulonglong)uVar5 >> 0x30);
    local_140._0_6_ = CONCAT24(*(undefined2 *)*param_2,(int)uVar5);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,&local_160,&local_100);
    uVar12 = local_108;
    if (local_178 != (undefined8 *)0x0) {
      lVar9 = (longlong)(int)local_108;
      uVar7 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar7);
      if (local_108._4_4_ < uVar7) {
        FUN_14476a5c8(local_130,uVar12 & 0xffffffff);
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
        if (local_178 == (undefined8 *)0x0) goto LAB_1475e5857;
      }
      else {
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
      }
      LOCK();
      *(int *)(local_178 + 1) = *(int *)(local_178 + 1) + 1;
      UNLOCK();
      if (local_178 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_178 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_178)(local_178,1);
        }
      }
    }
LAB_1475e5857:
    if ((int)local_108 != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_130,1);
    }
  }
  if (*(short *)((longlong)param_3 + 0x22) == -1) {
    local_190 = (undefined8 *)0x0;
    local_168 = 0;
  }
  else {
    FUN_1475e59fe(lVar2 + 0x28,&local_178,*(short *)((longlong)param_3 + 0x22),
                  *(undefined2 *)(param_1 + 0x16));
    local_190 = local_178;
    local_191 = local_170 == 1;
  }
  if (0 < iStack_158) {
    lVar9 = 0;
    lVar10 = 0;
    iVar4 = iStack_158;
    do {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        uVar12 = (ulonglong)*(ushort *)(*param_2 + 2);
        lVar11 = uVar12 + local_168;
        if (local_168 == 0) {
          lVar11 = 0;
        }
        lVar3 = *param_6;
        uVar5 = FUN_147546472(&local_100,
                              *(undefined2 *)(CONCAT44(uStack_15c,local_160) + lVar10 * 2),
                              *(undefined8 *)(param_5 + uVar12),lVar11);
        *(undefined8 *)(lVar9 + uVar12 + lVar3) = uVar5;
        iVar4 = iStack_158;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar10 < iVar4);
  }
  *(undefined4 *)(lVar2 + 0x29c) = 1;
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_190 + 3) = *(int *)(local_190 + 3) + -1;
    UNLOCK();
    if ((local_191 & 1) != 0) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 1));
    }
  }
  FUN_14588b8d6(local_130);
  FUN_1475d7c02(&local_100);
LAB_1475e5749:
  if ((local_50 ^ (ulonglong)local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e59fe FUN_1475e59fe body=185 status=ok
// SIG undefined FUN_1475e59fe(void)

undefined8 * FUN_1475e59fe(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_1475e5ab8(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475e5ab8 FUN_1475e5ab8 body=116 status=ok
// SIG undefined FUN_1475e5ab8(void)

longlong * FUN_1475e5ab8(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (ulonglong)param_4 * 0x10 + *param_2;
  }
  return param_1;
}



// FUNCTION 1475e5b2c FUN_1475e5b2c body=88 status=ok
// SIG undefined FUN_1475e5b2c(void)

undefined8 * FUN_1475e5b2c(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1475e5ab8(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475e5b84 FUN_1475e5b84 body=57 status=ok
// SIG undefined FUN_1475e5b84(void)

undefined8 * FUN_1475e5b84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1e70;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e5bbe FUN_1475e5bbe body=55 status=ok
// SIG undefined FUN_1475e5bbe(void)

void FUN_1475e5bbe(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1475e839e(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1475e5bf6 FUN_1475e5bf6 body=57 status=ok
// SIG undefined FUN_1475e5bf6(void)

undefined8 * FUN_1475e5bf6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1e70;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e5c30 FUN_1475e5c30 body=232 status=ok
// SIG undefined FUN_1475e5c30(void)

undefined8 * FUN_1475e5c30(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_1475e5d1a();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c1e90;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e5d1a FUN_1475e5d1a body=104 status=ok
// SIG undefined FUN_1475e5d1a(void)

undefined8 FUN_1475e5d1a(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1475e5d82 FUN_1475e5d82 body=38 status=ok
// SIG undefined FUN_1475e5d82(void)

undefined8 FUN_1475e5d82(undefined8 param_1,int param_2)

{
  FUN_1475e5e1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e5da8 FUN_1475e5da8 body=118 status=ok
// SIG undefined FUN_1475e5da8(void)

void FUN_1475e5da8(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_1475e5f82(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 1475e5e1e FUN_1475e5e1e body=71 status=ok
// SIG undefined FUN_1475e5e1e(void)

void FUN_1475e5e1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c1e90;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1475e5e9a(param_1 + 8);
  FUN_1475e5e66(param_1 + 1);
  return;
}



// FUNCTION 1475e5e66 FUN_1475e5e66 body=52 status=ok
// SIG undefined FUN_1475e5e66(void)

void FUN_1475e5e66(longlong *param_1)

{
  FUN_1475e5f28();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475e5e9a FUN_1475e5e9a body=52 status=ok
// SIG undefined FUN_1475e5e9a(void)

void FUN_1475e5e9a(longlong *param_1)

{
  FUN_1475e5ece();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475e5ece FUN_1475e5ece body=89 status=ok
// SIG undefined FUN_1475e5ece(void)

void FUN_1475e5ece(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 1475e5f28 FUN_1475e5f28 body=89 status=ok
// SIG undefined FUN_1475e5f28(void)

void FUN_1475e5f28(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 1475e5f82 FUN_1475e5f82 body=104 status=ok
// SIG undefined FUN_1475e5f82(void)

void FUN_1475e5f82(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x10 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1475e5fea FUN_1475e5fea body=1484 status=ok
// SIG undefined FUN_1475e5fea(void)

void FUN_1475e5fea(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_cc;
  int local_c8;
  int local_c4;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_84;
  ushort local_7e;
  char local_7c;
  char local_7a;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475e6047;
      plVar10 = plVar10 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1475e6047:
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_c4 = *(int *)(param_2 + 0x14);
  if (local_c4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1475e609e;
      plVar9 = plVar9 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1475e609e:
  local_d8 = *plVar10;
  local_c8 = *(int *)(param_2 + 0x14);
  if (local_c8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1475e60f1;
      plVar16 = plVar16 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1475e60f1:
  lVar4 = *plVar9;
  local_cc = *(int *)(param_2 + 0x14);
  if (local_cc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  local_e0 = *plVar16;
  local_b0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar1 != 0) {
    local_c0 = param_1 + 8;
    uVar17 = 0;
    do {
      local_84 = *(int *)(lVar4 + uVar17 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar5 = *(longlong *)(param_1 + 8);
      uVar11 = 0;
      if (0 < (int)uVar2) {
        uVar11 = 0;
        uVar12 = (ulonglong)uVar2;
        uVar13 = uVar2;
        do {
          uVar12 = uVar12 >> 1;
          uVar14 = (uint)uVar12 + (int)uVar11;
          if (*(int *)(lVar5 + (ulonglong)uVar14 * 0x18) < local_84) {
            uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar3 = 1 < uVar13;
          uVar13 = (uint)uVar12;
        } while (bVar3);
      }
      if (((int)uVar11 < (int)uVar2) && (*(int *)(lVar5 + uVar11 * 0x18) <= local_84)) {
        lVar5 = lVar5 + uVar11 * 0x18;
        plVar15 = (longlong *)(lVar5 + 8);
        if (plVar15 == (longlong *)0x0) goto LAB_1475e61df;
        lVar6 = *plVar15;
        if (DAT_14c950c29 == 1) {
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar6 = *plVar15;
          }
        }
        plVar15 = (longlong *)(uVar17 * 0x10 + local_d8);
        *plVar15 = lVar6;
        plVar15[1] = *(longlong *)(lVar5 + 0x10);
      }
      else {
LAB_1475e61df:
        lVar5 = FUN_1475b443c(local_b0);
        if (((lVar5 != 0) && (lVar6 = FUN_14479d2ce(lVar5), lVar6 != 0)) &&
           (*(longlong *)(lVar5 + 8) != 0)) {
          local_98 = *(undefined4 *)(param_1 + 0x30);
          uStack_94 = *(undefined4 *)(param_1 + 0x34);
          uStack_90 = *(undefined4 *)(param_1 + 0x38);
          uStack_8c = *(undefined4 *)(param_1 + 0x3c);
          local_e8 = lVar6;
          FUN_140d4d2ba(&local_7e,lVar6,lVar5 + 8,&local_98);
          lVar6 = *(longlong *)(param_1 + 0x48);
          if (lVar6 == 0) {
LAB_1475e62f1:
            if (local_7a == '\0') {
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 1;
              if ((DAT_14c950c29 == 1) && (*(longlong *)(local_e0 + uVar17 * 0x10) != 0)) {
                FUN_1456cec3c();
              }
              FUN_1475e7c24(local_e8,lVar5 + 0x10,&local_78);
            }
            else if (local_7c == '\x01') {
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 1;
              lVar5 = (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_7e +
                      *(longlong *)(param_1 + 0x30);
              local_a8 = *(longlong *)(local_e0 + uVar17 * 0x10);
              if ((DAT_14c950c29 == 1) && (local_a8 != 0)) {
                local_f0 = lVar5;
                FUN_1456cec3c();
                lVar5 = local_f0;
              }
              local_a0 = *(undefined1 *)(uVar17 * 0x10 + local_e0 + 8);
              FUN_1475e54da(local_e8,&local_a8,lVar5,&local_78);
            }
            else {
              uVar11 = (ulonglong)local_7e;
              local_68 = 1;
              if ((DAT_14c950c29 == 1) && (*(longlong *)(local_e0 + uVar17 * 0x10) != 0)) {
                FUN_1456cec3c();
              }
              uVar11 = *(ulonglong *)(local_e8 + uVar11);
              if (uVar11 != 0 && (~DAT_14c950c29 & 1) == 0) {
                FUN_1456cec3c(uVar11);
              }
              if ((uVar11 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                FUN_1456cec3c(uVar11);
              }
              uStack_70 = 0;
              local_78 = uVar11;
            }
            uVar11 = local_78;
            if (DAT_14c950c29 == 1) {
              if (local_78 == 0) {
                uVar11 = 0;
              }
              else {
                FUN_1456cec3c(local_78);
              }
            }
            puVar7 = (ulonglong *)(uVar17 * 0x10 + local_d8);
            *puVar7 = uVar11;
            puVar7[1] = uStack_70;
            plVar15 = &local_78;
          }
          else {
            local_f0 = lVar6;
            if (local_7a == '\0') {
              FUN_1475e6ea6(lVar6,&local_78,local_e8,lVar5 + 0x10);
            }
            else if (local_7c == '\x01') {
              FUN_1475e76dc();
            }
            else {
              FUN_1475e78be(lVar6,&local_78,local_e8,local_7e);
            }
            if (local_78._2_1_ == '\x01') {
              plVar15 = (longlong *)((local_78 & 0xffff) * 0x10 + *(longlong *)(local_f0 + 8));
            }
            else {
              plVar15 = (longlong *)0x0;
            }
            if (plVar15 == (longlong *)0x0) goto LAB_1475e62f1;
            lVar5 = *plVar15;
            if (DAT_14c950c29 == 1) {
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar5 = *plVar15;
              }
            }
            plVar8 = (longlong *)(uVar17 * 0x10 + local_d8);
            *plVar8 = lVar5;
            plVar8[1] = plVar15[1];
          }
          FUN_1475e7aa0(local_c0,&local_84,plVar15);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar1);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_cc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_c8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uVar17 = plVar10[2];
    if ((ulonglong)plVar10[2] < local_b8) {
      uVar17 = local_b8;
    }
    plVar10[2] = uVar17;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_c4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e65b8 FUN_1475e65b8 body=2285 status=ok
// SIG undefined FUN_1475e65b8(void)

void FUN_1475e65b8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined2 local_da;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  ushort local_7c;
  char local_7a;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1475e6616;
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1475e6616:
  local_128 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_e8 = *(ulonglong *)(param_1 + 0x40);
  local_f4 = *(int *)(param_2 + 0x14);
  if (local_f4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475e6673;
      plVar9 = plVar9 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1475e6673:
  local_108 = *plVar8;
  local_f0 = *(ulonglong *)(param_1 + 0x40);
  local_f8 = *(int *)(param_2 + 0x14);
  if (local_f8 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1475e66cf;
      plVar12 = plVar12 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1475e66cf:
  local_118 = *plVar9;
  local_fc = *(int *)(param_2 + 0x14);
  if (local_fc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1475e6726;
      plVar13 = plVar13 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_1475e6726:
  local_130 = *plVar12;
  local_100 = *(int *)(param_2 + 0x14);
  if (local_100 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  local_110 = *plVar13;
  FUN_140b325e4(param_2,&local_a8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_98 == 0) {
    FUN_1410bd96e(param_2,&local_d8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_c8 == 0) {
      FUN_1410bd9c4(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_120 = local_68;
      if ((short)local_128 != 0 && local_68 != 0) {
        local_128 = (ulonglong)(uint)((int)local_128 * 2);
        uVar11 = 0;
        do {
          lVar4 = *(longlong *)(local_120 + uVar11 * 8);
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(lVar4 + 0x58) != 0) {
            puVar7 = *(undefined2 **)(lVar4 + 0x50);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_90,puVar7,1);
          FUN_1475e6ea6(uVar3,&local_7c,*(undefined8 *)(local_130 + uVar11 * 4),&local_90);
          if (local_7a == '\x01') {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            plVar1 = (longlong *)(lVar4 + (ulonglong)local_7c * 0x10);
            lVar4 = *(longlong *)(lVar4 + (ulonglong)local_7c * 0x10);
            if (DAT_14c950c29 == 1) {
              if (lVar4 == 0) {
                lVar4 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar4 = *plVar1;
              }
            }
            *(longlong *)(local_118 + uVar11 * 8) = lVar4;
            *(longlong *)(local_118 + 8 + uVar11 * 8) = plVar1[1];
          }
          else {
            uVar3 = *(undefined8 *)(local_120 + uVar11 * 8);
            if ((DAT_14c950c29 == 1) && (*(longlong *)(local_110 + uVar11 * 8) != 0)) {
              FUN_1456cec3c();
            }
            uVar5 = FUN_145c97f3e(uVar3,*(undefined8 *)(local_130 + uVar11 * 4));
            if (uVar5 != 0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(uVar5);
            }
            if ((~DAT_14c950c29 & 1) == 0 && uVar5 != 0) {
              FUN_1456cec3c(uVar5);
            }
            local_88 = 0;
            local_90 = uVar5;
            if ((uVar5 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(uVar5);
            }
            *(ulonglong *)(local_118 + uVar11 * 8) = uVar5;
            *(undefined8 *)(local_118 + 8 + uVar11 * 8) = 0;
            local_138 = *(undefined8 *)(local_120 + uVar11 * 8);
            FUN_1475e7ece(*(undefined8 *)(param_1 + 0x48),&local_da,
                          *(undefined8 *)(local_130 + uVar11 * 4),&local_90);
            *(undefined2 *)(local_108 + uVar11) = local_da;
          }
          uVar11 = uVar11 + 2;
        } while (local_128 != uVar11);
      }
      if (local_78 != 0) {
        LOCK();
        *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
        UNLOCK();
        if ((int)local_70 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
        }
      }
    }
    else {
      local_120 = local_c8;
      if (local_128 != 0) {
        iVar10 = (int)local_128;
        uVar11 = 0;
        do {
          FUN_1475e78be(*(undefined8 *)(param_1 + 0x48),&local_90,
                        *(undefined8 *)(local_130 + uVar11 * 4),*(undefined2 *)(local_c8 + uVar11));
          if (local_90._2_1_ == '\x01') {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            lVar6 = (local_90 & 0xffff) * 0x10;
            plVar1 = (longlong *)(lVar4 + lVar6);
            lVar4 = *(longlong *)(lVar4 + lVar6);
            if (DAT_14c950c29 == 1) {
              if (lVar4 == 0) {
                lVar4 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar4 = *plVar1;
              }
            }
            *(longlong *)(local_118 + uVar11 * 8) = lVar4;
            *(longlong *)(local_118 + 8 + uVar11 * 8) = plVar1[1];
          }
          else {
            uVar2 = *(ushort *)(local_120 + uVar11);
            if ((DAT_14c950c29 == 1) && (*(longlong *)(local_110 + uVar11 * 8) != 0)) {
              FUN_1456cec3c();
            }
            uVar5 = *(ulonglong *)(*(longlong *)(local_130 + uVar11 * 4) + (ulonglong)uVar2);
            if (uVar5 != 0 && (~DAT_14c950c29 & 1) == 0) {
              FUN_1456cec3c(uVar5);
            }
            if ((~DAT_14c950c29 & 1) == 0 && uVar5 != 0) {
              FUN_1456cec3c(uVar5);
            }
            local_70 = 0;
            local_78 = uVar5;
            if ((uVar5 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(uVar5);
            }
            *(ulonglong *)(local_118 + uVar11 * 8) = uVar5;
            *(undefined8 *)(local_118 + 8 + uVar11 * 8) = 0;
            local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(local_120 + uVar11));
            FUN_1475e7e0c(*(undefined8 *)(param_1 + 0x48),&local_7c,
                          *(undefined8 *)(local_130 + uVar11 * 4),&local_78);
            *(ushort *)(local_108 + uVar11) = local_7c;
          }
          uVar11 = uVar11 + 2;
        } while ((uint)(iVar10 * 2) != uVar11);
      }
    }
    if (local_d8 != 0) {
      LOCK();
      *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
      UNLOCK();
      if ((int)uStack_d0 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
      }
    }
  }
  else if (local_128 != 0) {
    local_128 = (ulonglong)(uint)((int)local_128 * 2);
    uVar11 = 0;
    do {
      FUN_1475e76dc(*(undefined8 *)(param_1 + 0x48),&local_78,
                    *(undefined8 *)(local_130 + uVar11 * 4),*(undefined2 *)(local_98 + uVar11));
      if (local_78._2_1_ == '\x01') {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        lVar6 = (local_78 & 0xffff) * 0x10;
        plVar1 = (longlong *)(lVar4 + lVar6);
        lVar4 = *(longlong *)(lVar4 + lVar6);
        if (DAT_14c950c29 == 1) {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = *plVar1;
          }
        }
        *(longlong *)(local_118 + uVar11 * 8) = lVar4;
        *(longlong *)(local_118 + 8 + uVar11 * 8) = plVar1[1];
      }
      else {
        local_d8 = 0;
        uStack_d0 = 0;
        uVar2 = *(ushort *)(local_98 + uVar11);
        iVar10 = *(int *)(param_1 + 0x3c);
        lVar4 = *(longlong *)(param_1 + 0x30);
        local_b8 = *(longlong *)(local_110 + uVar11 * 8);
        if ((DAT_14c950c29 == 1) && (local_b8 != 0)) {
          FUN_1456cec3c();
        }
        local_b0 = *(undefined1 *)(local_110 + 8 + uVar11 * 8);
        FUN_1475e54da(*(undefined8 *)(local_130 + uVar11 * 4),&local_b8,
                      (longlong)iVar10 * (ulonglong)uVar2 + lVar4,&local_d8);
        lVar4 = local_d8;
        if (DAT_14c950c29 == 1) {
          if (local_d8 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c(local_d8);
          }
        }
        *(longlong *)(local_118 + uVar11 * 8) = lVar4;
        *(undefined8 *)(local_118 + 8 + uVar11 * 8) = uStack_d0;
        local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(local_98 + uVar11));
        FUN_1475e7d4a(*(undefined8 *)(param_1 + 0x48),&local_90,
                      *(undefined8 *)(local_130 + uVar11 * 4),&local_d8);
        *(undefined2 *)(local_108 + uVar11) = (undefined2)local_90;
      }
      uVar11 = uVar11 + 2;
    } while (local_128 != uVar11);
  }
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
    UNLOCK();
    if (local_100 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar13 + 1));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_fc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    uVar11 = plVar9[2];
    if ((ulonglong)plVar9[2] < local_f0) {
      uVar11 = local_f0;
    }
    plVar9[2] = uVar11;
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_f8 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar11 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_e8) {
      uVar11 = local_e8;
    }
    plVar8[2] = uVar11;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_f4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e6ea6 FUN_1475e6ea6 body=483 status=ok
// SIG undefined FUN_1475e6ea6(void)

undefined8 FUN_1475e6ea6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475e6fd4;
        }
        else {
LAB_1475e6fd4:
          FUN_1475e7344(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475e7410(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475e7278(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_1475e708a(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e708a FUN_1475e708a body=493 status=ok
// SIG undefined FUN_1475e708a(void)

undefined2 * FUN_1475e708a(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475e71bc;
        }
        else {
LAB_1475e71bc:
          FUN_1475e7344(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_1475e7410(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1475e7278(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_1475e7624((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e7278 FUN_1475e7278 body=203 status=ok
// SIG undefined FUN_1475e7278(void)

void FUN_1475e7278(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x10;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x10) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x10) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_14474875a(param_1,iVar5);
  return;
}



// FUNCTION 1475e7344 FUN_1475e7344 body=90 status=ok
// SIG undefined FUN_1475e7344(void)

void FUN_1475e7344(longlong *param_1,int param_2)

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
  FUN_1475e739e();
  return;
}



// FUNCTION 1475e739e FUN_1475e739e body=114 status=ok
// SIG undefined FUN_1475e739e(void)

void FUN_1475e739e(longlong *param_1,int param_2)

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



// FUNCTION 1475e7410 FUN_1475e7410 body=68 status=ok
// SIG undefined FUN_1475e7410(void)

void FUN_1475e7410(longlong param_1,uint param_2)

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
  FUN_1475e7454(param_1);
  return;
}



// FUNCTION 1475e7454 FUN_1475e7454 body=462 status=ok
// SIG undefined FUN_1475e7454(void)

void FUN_1475e7454(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1475e7624 FUN_1475e7624 body=107 status=ok
// SIG undefined FUN_1475e7624(void)

int FUN_1475e7624(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1475e768f(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1475e768f FUN_1475e768f body=76 status=ok
// SIG undefined FUN_1475e768f(void)

undefined8 FUN_1475e768f(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1475e76dc FUN_1475e76dc body=481 status=ok
// SIG undefined FUN_1475e76dc(void)

undefined8 FUN_1475e76dc(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475e780a;
        }
        else {
LAB_1475e780a:
          FUN_1475e7344(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475e7410(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475e7278(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1475e708a(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e78be FUN_1475e78be body=481 status=ok
// SIG undefined FUN_1475e78be(void)

undefined8 FUN_1475e78be(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475e79ec;
        }
        else {
LAB_1475e79ec:
          FUN_1475e7344(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475e7410(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475e7278(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_1475e708a(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e7aa0 FUN_1475e7aa0 body=239 status=ok
// SIG undefined FUN_1475e7aa0(void)

void FUN_1475e7aa0(longlong *param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar8 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar8;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x18) < iVar5) {
        uVar8 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar8 < (int)uVar2) && (*(int *)(lVar7 + (ulonglong)uVar8 * 0x18) <= iVar5)) {
      piVar9 = (int *)(lVar7 + (ulonglong)uVar8 * 0x18);
      goto LAB_1475e7b45;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1475e7b90(param_1,uVar2);
    lVar7 = *param_1;
  }
  lVar4 = (ulonglong)uVar8 * 0x18;
  memmove((void *)(lVar7 + lVar4 + 0x18),(void *)(lVar7 + lVar4),(ulonglong)(uVar2 - uVar8) * 0x18);
  piVar9 = (int *)(lVar4 + *param_1);
  iVar5 = *param_2;
LAB_1475e7b45:
  *piVar9 = iVar5;
  lVar7 = *param_3;
  *(longlong *)(piVar9 + 2) = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(piVar9 + 4) = param_3[1];
  return;
}



// FUNCTION 1475e7b90 FUN_1475e7b90 body=147 status=ok
// SIG undefined FUN_1475e7b90(void)

void FUN_1475e7b90(longlong param_1,int param_2)

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



// FUNCTION 1475e7c24 FUN_1475e7c24 body=173 status=ok
// SIG undefined FUN_1475e7c24(void)

void FUN_1475e7c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_50);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_40,puVar1);
  FUN_1475e7cd2(&local_30,param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 == '\x01') {
    FUN_145c97ee8(local_30,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e7cd2 FUN_1475e7cd2 body=118 status=ok
// SIG undefined FUN_1475e7cd2(void)

undefined8 * FUN_1475e7cd2(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406fa5f4(local_48);
  cVar1 = FUN_145c97fac(local_48,&local_50);
  if (cVar1 != '\0') {
    *param_1 = local_50;
  }
  *(bool *)(param_1 + 1) = cVar1 != '\0';
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1475e7d4a FUN_1475e7d4a body=193 status=ok
// SIG undefined FUN_1475e7d4a(void)

undefined2 *
FUN_1475e7d4a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [46];
  undefined2 local_5a;
  undefined8 *local_58;
  undefined2 *local_50;
  undefined1 local_48 [4];
  undefined8 *local_44;
  undefined2 local_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  local_3c = param_5;
  local_34 = 1;
  local_5a = FUN_1475e7fb0(param_1 + 8,param_4);
  local_50 = &local_5a;
  local_58 = &local_44;
  FUN_1475e8106(param_1 + 0x40,local_48);
  *param_2 = local_5a;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e7e0c FUN_1475e7e0c body=193 status=ok
// SIG undefined FUN_1475e7e0c(void)

undefined2 *
FUN_1475e7e0c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [46];
  undefined2 local_5a;
  undefined8 *local_58;
  undefined2 *local_50;
  undefined1 local_48 [4];
  undefined8 *local_44;
  undefined2 local_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  local_3c = param_5;
  local_34 = 0;
  local_5a = FUN_1475e7fb0(param_1 + 8,param_4);
  local_50 = &local_5a;
  local_58 = &local_44;
  FUN_1475e8106(param_1 + 0x40,local_48);
  *param_2 = local_5a;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e7ece FUN_1475e7ece body=225 status=ok
// SIG undefined FUN_1475e7ece(void)

undefined2 *
FUN_1475e7ece(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined1 auStack_88 [46];
  undefined2 local_5a;
  undefined8 *local_58;
  undefined2 *local_50;
  undefined1 local_48 [4];
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  local_5a = FUN_1475e7fb0(param_1 + 8,param_4);
  local_50 = &local_5a;
  local_58 = &local_44;
  FUN_1475e8106(param_1 + 0x40,local_48);
  *param_2 = local_5a;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e7fb0 FUN_1475e7fb0 body=111 status=ok
// SIG undefined FUN_1475e7fb0(void)

undefined4 FUN_1475e7fb0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1475e8020(param_1,local_28);
  lVar1 = *param_2;
  *local_20 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_20[1] = param_2[1];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e8020 FUN_1475e8020 body=229 status=ok
// SIG undefined FUN_1475e8020(void)

int * FUN_1475e8020(longlong *param_1,int *param_2)

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



// FUNCTION 1475e8106 FUN_1475e8106 body=339 status=ok
// SIG undefined FUN_1475e8106(void)

undefined4 * FUN_1475e8106(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475e825a(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_1475e8340(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1475e7454(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e825a FUN_1475e825a body=229 status=ok
// SIG undefined FUN_1475e825a(void)

int * FUN_1475e825a(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 1475e8340 FUN_1475e8340 body=93 status=ok
// SIG undefined FUN_1475e8340(void)

undefined8 FUN_1475e8340(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1475e7624(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1475e739e(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1475e839e FUN_1475e839e body=48 status=ok
// SIG undefined FUN_1475e839e(void)

void FUN_1475e839e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1475e83ce FUN_1475e83ce body=31 status=ok
// SIG undefined FUN_1475e83ce(void)

undefined8 FUN_1475e83ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e83ee FUN_1475e83ee body=327 status=ok
// SIG undefined FUN_1475e83ee(void)

void FUN_1475e83ee(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_178 [32];
  ushort *local_158;
  code **local_150;
  longlong local_148;
  undefined1 local_134 [4];
  undefined2 *local_130;
  undefined2 *local_128;
  ushort local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [12];
  undefined1 local_f4;
  byte bStack_f3;
  uint local_f0;
  longlong local_98;
  code *local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = FUN_14009d2a0();
  local_118 = *(undefined2 *)(lVar1 + 0x4a);
  local_112 = *(undefined2 *)(lVar1 + 0x108);
  local_116 = *(undefined4 *)(lVar1 + 0x104);
  local_110 = *(undefined2 *)*param_3;
  local_10b = 0;
  local_108 = 0x6ff;
  local_104 = 0;
  local_11a = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_11a;
  local_128 = &local_118;
  FUN_146121c78(&local_118,local_100);
  local_f0 = *(uint *)(param_6 + 0x290);
  bVar2 = bStack_f3 & 0xfe | (local_f0 & 0xfffffeff) == 1;
  _local_f4 = CONCAT11(bVar2,local_f4);
  local_158 = &local_11c;
  local_11c = CONCAT11(bVar2,local_f4) & 0xfdff;
  local_150 = &local_38;
  local_38 = FUN_1475e8e8a;
  local_30 = 3;
  local_148 = param_2;
  FUN_1475e8c80(local_100,local_134,param_6 + 0x28,param_5);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e8536 FUN_1475e8536 body=322 status=ok
// SIG undefined FUN_1475e8536(void)

void FUN_1475e8536(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined8 *local_120;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined2 local_108;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [13];
  byte local_eb;
  uint local_e8;
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14009d2a0();
  local_110 = *(undefined2 *)(lVar2 + 0x4a);
  local_10a = *(undefined2 *)(lVar2 + 0x108);
  local_10e = *(undefined4 *)(lVar2 + 0x104);
  local_108 = *(undefined2 *)*param_3;
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_112 = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_112;
  local_128 = &local_110;
  FUN_146121c78(&local_110,local_f8);
  local_e8 = *(uint *)(param_7 + 0x290);
  local_eb = local_eb & 0xfe | (local_e8 & 0xfffffeff) == 1;
  local_148 = param_6;
  local_140 = param_2;
  FUN_1432f7a18(local_f8,&local_120,param_7 + 0x28,param_5);
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_120 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e867a FUN_1475e867a body=520 status=ok
// SIG undefined FUN_1475e867a(void)

longlong * FUN_1475e867a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1475e94f0(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_1475e86be;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c1f20;
  plVar5 = plVar4 + 2;
  FUN_1475e965e(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_1475eac1c(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_1475e8849:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001475e8838:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x0001475e8838;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_1475e8849;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1475e95a4(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_1475e86be:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e8886 FUN_1475e8886 body=130 status=ok
// SIG undefined FUN_1475e8886(void)

void FUN_1475e8886(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1475eacc4(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e890a FUN_1475e890a body=616 status=ok
// SIG undefined FUN_1475e890a(void)

void FUN_1475e890a(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475db864(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e8b74 FUN_1475e8b74 body=267 status=ok
// SIG undefined FUN_1475e8b74(void)

void FUN_1475e8b74(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = (int)param_4[1];
  if (0 < iVar3) {
    lVar2 = *param_6;
    lVar5 = 0;
    do {
      if (*(short *)(*param_4 + lVar5 * 2) != -1) {
        FUN_1432d4ca4(param_5 + 0x28,&local_60);
        lVar4 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)*param_3);
        if ((local_50 != 0) &&
           (puVar1 = (undefined8 *)(local_50 + lVar4 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)((ulonglong)*(ushort *)(*param_3 + 2) + lVar2 + lVar5 * 8) = *puVar1;
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475e8c80 FUN_1475e8c80 body=520 status=ok
// SIG undefined FUN_1475e8c80(void)

int * FUN_1475e8c80(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[4] == -1)) ||
     (cVar4 = FUN_14612201a(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1475e8cbe;
  }
  plVar5 = (longlong *)FUN_1475e8edb(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_146121fce(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1475e8fce;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1475e8e15;
    }
  }
  else {
LAB_1475e8e15:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_1475e8cbe:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475e8e8a FUN_1475e8e8a body=80 status=ok
// SIG undefined FUN_1475e8e8a(void)

void FUN_1475e8e8a(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475e8fe6(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e8edb FUN_1475e8edb body=180 status=ok
// SIG undefined FUN_1475e8edb(void)

undefined8 * FUN_1475e8edb(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a4c1ef0;
  puVar4[2] = &PTR_FUN_14a4c1f08;
  param_2 = (longlong *)*param_2;
  puVar4[3] = param_2;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar4[4] = local_38;
    puVar4[5] = uStack_30;
  }
  puVar4[8] = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(puVar4 + 6) = *param_1;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar1;
  *(undefined4 *)(puVar4 + 7) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e8f92 FUN_1475e8f92 body=29 status=ok
// SIG undefined FUN_1475e8f92(void)

undefined8 FUN_1475e8f92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e8fb0 FUN_1475e8fb0 body=29 status=ok
// SIG undefined FUN_1475e8fb0(void)

undefined8 FUN_1475e8fb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475e8fe6 FUN_1475e8fe6 body=194 status=ok
// SIG undefined FUN_1475e8fe6(void)

void FUN_1475e8fe6(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_50 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_50 = lVar5;
  }
  local_48 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_48 = lVar5;
  }
  local_40 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_40 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_58 = lVar5;
  }
  FUN_1475e90aa(param_1,lVar1,lVar4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475e90aa FUN_1475e90aa body=222 status=ok
// SIG undefined FUN_1475e90aa(void)

void FUN_1475e90aa(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_4;
  if (lVar2 == 0) {
    lVar2 = param_4[1];
    if (lVar2 == 0) {
      lVar2 = param_4[2];
      if (uVar1 != 0 && lVar2 != 0) {
        lVar6 = 0;
        do {
          FUN_1406f92dc(*(undefined8 *)(lVar2 + lVar6 * 2),*(undefined8 *)(param_3 + lVar6),
                        (float)*(double *)(param_5 + lVar6));
          lVar6 = lVar6 + 8;
        } while ((ulonglong)uVar1 * 8 != lVar6);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      do {
        uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar4 * 2);
        if (uVar3 != 0) {
          *(float *)(*(longlong *)(param_3 + uVar4 * 8) + uVar3) =
               (float)*(double *)(param_5 + uVar4 * 8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  else if (uVar5 != 0) {
    uVar4 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar2 + uVar4 * 2)))
                (*(undefined8 *)(param_3 + uVar4 * 8),*(undefined8 *)(param_5 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 1475e9188 FUN_1475e9188 body=127 status=ok
// SIG undefined FUN_1475e9188(void)

undefined4 * FUN_1475e9188(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}


