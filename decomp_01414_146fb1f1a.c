// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fb1f1a FUN_146fb1f1a body=52 status=ok
// SIG undefined FUN_146fb1f1a(void)

void FUN_146fb1f1a(longlong *param_1)

{
  FUN_146fb1f4e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fb1f4e FUN_146fb1f4e body=89 status=ok
// SIG undefined FUN_146fb1f4e(void)

void FUN_146fb1f4e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 146fb1fa8 FUN_146fb1fa8 body=328 status=ok
// SIG undefined FUN_146fb1fa8(void)

undefined4 *
FUN_146fb1fa8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146be7b44(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  *local_48 = *(undefined8 *)*param_3;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = FUN_1448eb174(local_48,8,0);
  local_68 = param_4;
  cVar2 = FUN_146be7c2a(param_1,uVar3,local_48,&local_54);
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)(local_48 + 2) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146be7ccc(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb20f2 FUN_146fb20f2 body=217 status=ok
// SIG undefined FUN_146fb20f2(void)

undefined4 FUN_146fb20f2(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = *param_2;
  local_40 = param_2[1];
  local_3c = param_2[2];
  local_48 = param_3;
  uVar1 = (*(code *)PTR_FUN_14c75b148)(&local_48,0x10,0);
  iVar2 = FUN_146fb21cc(param_1,uVar1,&local_48);
  if (iVar2 != -1) {
    if ((*param_1 + (longlong)iVar2 * 0x1c != 0) &&
       (puVar3 = (undefined4 *)((longlong)iVar2 * 0x1c + *param_1 + 0x10),
       puVar3 != (undefined4 *)0x0)) {
      uVar1 = *puVar3;
      goto LAB_146fb217d;
    }
  }
  local_4c = FUN_146c2f9e2(param_1[10],param_2);
  local_30 = &local_4c;
  local_38 = &local_48;
  FUN_146fb2262(param_1,local_24);
  uVar1 = local_4c;
LAB_146fb217d:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb21cc FUN_146fb21cc body=149 status=ok
// SIG undefined FUN_146fb21cc(void)

int FUN_146fb21cc(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x1c;
        if (*(int *)(lVar3 + lVar4) == *param_3) {
          lVar1 = lVar3 + lVar4;
          if ((*(float *)(lVar1 + 4) == (float)param_3[1]) &&
             (!NAN(*(float *)(lVar1 + 4)) && !NAN((float)param_3[1]))) {
            if ((*(float *)(lVar1 + 8) == (float)param_3[2]) &&
               (!NAN(*(float *)(lVar1 + 8)) && !NAN((float)param_3[2]))) {
              if ((*(float *)(lVar1 + 0xc) == (float)param_3[3]) &&
                 (!NAN(*(float *)(lVar1 + 0xc)) && !NAN((float)param_3[3]))) {
                return iVar2;
              }
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x14 + lVar4);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 146fb2262 FUN_146fb2262 body=306 status=ok
// SIG undefined FUN_146fb2262(void)

undefined4 * FUN_146fb2262(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fb2396(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (*(code *)PTR_FUN_14c75b148)(local_40,0x10,0);
  cVar6 = FUN_146fb2492(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146fb2574(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb2396 FUN_146fb2396 body=251 status=ok
// SIG undefined FUN_146fb2396(void)

int * FUN_146fb2396(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 146fb2492 FUN_146fb2492 body=98 status=ok
// SIG undefined FUN_146fb2492(void)

undefined8 FUN_146fb2492(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_146fb21cc(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146fb24f4(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 146fb24f4 FUN_146fb24f4 body=128 status=ok
// SIG undefined FUN_146fb24f4(void)

void FUN_146fb24f4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 146fb2574 FUN_146fb2574 body=457 status=ok
// SIG undefined FUN_146fb2574(void)

void FUN_146fb2574(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
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
  uVar5 = local_70;
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = (*(code *)PTR_FUN_14c75b148)(lVar3 + lVar4,0x10,0);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fb273e FUN_146fb273e body=52 status=ok
// SIG undefined FUN_146fb273e(void)

void FUN_146fb273e(longlong *param_1)

{
  FUN_146fb2772();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fb2772 FUN_146fb2772 body=89 status=ok
// SIG undefined FUN_146fb2772(void)

void FUN_146fb2772(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 146fb27cc FUN_146fb27cc body=187 status=ok
// SIG undefined FUN_146fb27cc(void)

undefined4 FUN_146fb27cc(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_48[0] = param_3;
  uVar1 = (*(code *)PTR_FUN_14c75b148)(local_48,0x20,0);
  iVar2 = FUN_146fb2888(param_1,uVar1,local_48);
  if (iVar2 != -1) {
    if ((*param_1 + (longlong)iVar2 * 0x40 != 0) &&
       (puVar3 = (undefined4 *)((longlong)iVar2 * 0x40 + *param_1 + 0x20),
       puVar3 != (undefined4 *)0x0)) {
      uVar1 = *puVar3;
      goto LAB_146fb2839;
    }
  }
  local_64 = FUN_146c32f5e(param_1[10],param_2);
  local_58 = &local_64;
  local_60 = local_48;
  FUN_146fb292a(param_1,local_4c);
  uVar1 = local_64;
LAB_146fb2839:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb2888 FUN_146fb2888 body=161 status=ok
// SIG undefined FUN_146fb2888(void)

int FUN_146fb2888(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
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
        lVar5 = (longlong)iVar2 * 0x40;
        if (*(int *)(lVar3 + lVar5) == *param_3) {
          lVar1 = lVar3 + lVar5;
          if ((*(float *)(lVar1 + 0x10) == (float)param_3[4]) &&
             (!NAN(*(float *)(lVar1 + 0x10)) && !NAN((float)param_3[4]))) {
            if ((*(float *)(lVar1 + 0x14) == (float)param_3[5]) &&
               (!NAN(*(float *)(lVar1 + 0x14)) && !NAN((float)param_3[5]))) {
              if ((*(float *)(lVar1 + 0x18) == (float)param_3[6]) &&
                 (!NAN(*(float *)(lVar1 + 0x18)) && !NAN((float)param_3[6]))) {
                if ((*(float *)(lVar1 + 0x1c) == (float)param_3[7]) &&
                   (!NAN(*(float *)(lVar1 + 0x1c)) && !NAN((float)param_3[7]))) {
                  return iVar2;
                }
              }
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x30 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 146fb292a FUN_146fb292a body=314 status=ok
// SIG undefined FUN_146fb292a(void)

undefined4 * FUN_146fb292a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fb2a66(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  local_40[4] = puVar1[4];
  local_40[5] = uVar7;
  local_40[6] = uVar8;
  local_40[7] = uVar9;
  *local_40 = uVar3;
  local_40[1] = uVar4;
  local_40[2] = uVar5;
  local_40[3] = uVar6;
  local_40[8] = *puVar2;
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (*(code *)PTR_FUN_14c75b148)(local_40,0x20,0);
  cVar10 = FUN_146fb2b4e(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar10 == '\0') {
    uVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar12) {
      uVar13 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      local_40[0xd] = uVar11;
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(undefined4 *)
            (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar14;
      FUN_146fb2cac(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb2a66 FUN_146fb2a66 body=231 status=ok
// SIG undefined FUN_146fb2a66(void)

int * FUN_146fb2a66(longlong *param_1,int *param_2)

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
      FUN_146fb2bb4(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 146fb2b4e FUN_146fb2b4e body=102 status=ok
// SIG undefined FUN_146fb2b4e(void)

undefined8 FUN_146fb2b4e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_146fb2888(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x40;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = param_3[8];
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146fb2c3a(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 146fb2bb4 FUN_146fb2bb4 body=132 status=ok
// SIG undefined FUN_146fb2bb4(void)

void FUN_146fb2bb4(longlong param_1,int param_2)

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



// FUNCTION 146fb2c3a FUN_146fb2c3a body=114 status=ok
// SIG undefined FUN_146fb2c3a(void)

void FUN_146fb2c3a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 146fb2cac FUN_146fb2cac body=453 status=ok
// SIG undefined FUN_146fb2cac(void)

void FUN_146fb2cac(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x40;
        iVar6 = (*(code *)PTR_FUN_14c75b148)(lVar3 + lVar10,0x20,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
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



// FUNCTION 146fb2e72 FUN_146fb2e72 body=52 status=ok
// SIG undefined FUN_146fb2e72(void)

void FUN_146fb2e72(longlong *param_1)

{
  FUN_146fb2ea6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fb2ea6 FUN_146fb2ea6 body=91 status=ok
// SIG undefined FUN_146fb2ea6(void)

void FUN_146fb2ea6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_146fb2f02(param_1,0);
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



// FUNCTION 146fb2f02 FUN_146fb2f02 body=96 status=ok
// SIG undefined FUN_146fb2f02(void)

void FUN_146fb2f02(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 146fb2f62 FUN_146fb2f62 body=269 status=ok
// SIG undefined FUN_146fb2f62(void)

void FUN_146fb2f62(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 2;
  uStack_84 = 0xc;
  uStack_80 = 1;
  uStack_7c = 0x100;
  local_70 = *param_3;
  local_38 = 0;
  local_30 = 0xc00000000;
  local_78 = &local_68;
  FUN_146fb3070(&local_78,&local_70,&local_88);
  puVar1 = (undefined4 *)
           ((ulonglong)((param_2 & 0x1ff) << 6) +
           *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_2 >> 9) * 8));
  if (puVar1 != &local_68) {
    if (local_38 == 0) {
      *(undefined8 *)(puVar1 + 8) = local_48;
      *(undefined8 *)(puVar1 + 10) = uStack_40;
      *(undefined8 *)(puVar1 + 4) = local_58;
      *(undefined8 *)(puVar1 + 6) = uStack_50;
      *puVar1 = local_68;
      puVar1[1] = uStack_64;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
    }
    if (*(longlong *)(puVar1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar1 + 0xc) = local_38;
    local_38 = 0;
    puVar1[0xe] = (undefined4)local_30;
    puVar1[0xf] = local_30._4_4_;
    local_30 = 0xc00000000;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3070 FUN_146fb3070 body=429 status=ok
// SIG undefined FUN_146fb3070(void)

void FUN_146fb3070(undefined8 param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_80 [48];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0xc00000000;
  puVar3 = (undefined8 *)*param_2;
  uVar5 = *(uint *)(puVar3 + 1) & 0xff;
  lVar8 = *(longlong *)*puVar3;
  lVar6 = (longlong)((int)*(uint *)(puVar3 + 1) >> 8);
  uVar4 = *(uint *)(lVar6 * 0xc18 + lVar8 + 0x410 + (ulonglong)uVar5 * 4);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4);
  }
  if (0xc < uVar4) {
    FUN_146c57106(local_80);
    puVar3 = (undefined8 *)*param_2;
    lVar8 = *(longlong *)*puVar3;
    uVar5 = *(uint *)(puVar3 + 1) & 0xff;
    lVar6 = (longlong)((int)*(uint *)(puVar3 + 1) >> 8);
    uVar4 = *(uint *)(lVar6 * 0xc18 + lVar8 + 0x410 + (ulonglong)uVar5 * 4);
  }
  if (0 < (int)uVar4) {
    lVar7 = 0;
    do {
      uVar1 = local_48;
      uVar4 = *(uint *)((longlong)*(int *)(lVar8 + lVar6 * 0xc18 + 0x10 + (ulonglong)uVar5 * 4) * 4
                        + *(longlong *)(lVar8 + lVar6 * 0xc18) + lVar7 * 4);
      if (*(ushort *)(param_3 + 8) <= (ushort)uVar4) {
        lVar8 = (longlong)(int)local_48;
        uVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar5);
        if (local_48._4_4_ < uVar5) {
          FUN_146beb76e(local_80,uVar1 & 0xffffffff);
        }
        puVar2 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar2 = local_80;
        }
        *(uint *)(puVar2 + lVar8 * 4) = uVar4 << 0x10 | uVar4 >> 0x10;
        puVar3 = (undefined8 *)*param_2;
        lVar8 = *(longlong *)*puVar3;
      }
      lVar7 = lVar7 + 1;
      uVar5 = *(uint *)(puVar3 + 1) & 0xff;
      lVar6 = (longlong)((int)*(uint *)(puVar3 + 1) >> 8);
    } while (lVar7 < *(int *)(lVar6 * 0xc18 + lVar8 + 0x410 + (ulonglong)uVar5 * 4));
  }
  local_90 = local_80;
  if (local_50 != (undefined1 *)0x0) {
    local_90 = local_50;
  }
  local_88 = (int)local_48;
  FUN_146beb632(param_1,&local_90,param_3);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fb3220 FUN_146fb3220 body=48 status=ok
// SIG undefined FUN_146fb3220(void)

void FUN_146fb3220(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 146fb3250 FUN_146fb3250 body=9 status=ok
// SIG undefined FUN_146fb3250(void)

void FUN_146fb3250(longlong param_1)

{
  FUN_141082778(param_1 + 0x10);
  return;
}



// FUNCTION 146fb325a FUN_146fb325a body=29 status=ok
// SIG undefined FUN_146fb325a(void)

undefined8 FUN_146fb325a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb3280 FUN_146fb3280 body=95 status=ok
// SIG undefined FUN_146fb3280(void)

undefined8 FUN_146fb3280(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c99c7d8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c7d8 = FUN_140002ddd(FUN_141733b99,uVar1,L"DataflowAnyType");
    if (DAT_14c99c7d8 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(DAT_14c99c7d8 + 0x38)) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)(DAT_14c99c7d8 + 0x30) >> 8),
                  *(longlong *)
                   (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14c99c7d8 + 0x38) * 8) ==
                  DAT_14c99c7d8 + 0x30);
}



// FUNCTION 146fb32e0 FUN_146fb32e0 body=27 status=ok
// SIG undefined FUN_146fb32e0(void)

void FUN_146fb32e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *param_2 = *(undefined8 *)(lVar1 + 8);
    param_2[1] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 146fb32fc FUN_146fb32fc body=32 status=ok
// SIG undefined FUN_146fb32fc(void)

undefined8 * FUN_146fb32fc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14c99d1d8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
  }
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 146fb331c FUN_146fb331c body=16 status=ok
// SIG undefined FUN_146fb331c(void)

undefined4 FUN_146fb331c(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_7a8 [32];
  undefined1 uStack_788;
  undefined4 uStack_780;
  undefined1 auStack_770 [1792];
  undefined1 *puStack_70;
  uint uStack_68;
  ulonglong uStack_48;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  plVar4 = (longlong *)(**(code **)(*plVar1 + 0xc0))();
  if (plVar4 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar6 = FUN_1446ddbd2();
      uStack_780 = 2;
      uStack_788 = 1;
      FUN_140021b28(auStack_770,uVar6,lVar5,plVar1);
      if ((int)uStack_68 < 1) {
        uVar2 = 0;
      }
      else {
        uVar3 = 0;
        do {
          puVar8 = puStack_70;
          if (puStack_70 == (undefined1 *)0x0) {
            puVar8 = auStack_770;
          }
          puVar10 = *(undefined1 **)(puVar8 + (ulonglong)uStack_68 * 0xe0 + -0x18);
          if (*(undefined1 **)(puVar8 + (ulonglong)uStack_68 * 0xe0 + -0x18) == (undefined1 *)0x0) {
            puVar10 = puVar8 + (ulonglong)uStack_68 * 0xe0 + -0xd8;
          }
          lVar5 = *(longlong *)
                   (puVar10 + (longlong)*(int *)(puVar8 + (ulonglong)uStack_68 * 0xe0 + -8) * 0x18);
          if (lVar5 != 0) {
            lVar11 = *(longlong *)(lVar5 + 8);
            lVar7 = FUN_1446dcc8c();
            if (*(ulonglong *)(lVar7 + 8) == 0) {
              bVar12 = lVar11 != 0;
              if (lVar11 != lVar7 && bVar12) {
                do {
                  lVar11 = *(longlong *)(lVar11 + 0x30);
                  bVar12 = lVar11 != 0;
                  if (lVar11 == lVar7) break;
                } while (lVar11 != 0);
              }
              if (bVar12) goto LAB_146fb342d;
            }
            else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_146fb342d:
              uVar2 = 0;
              if ((*(longlong *)(lVar5 + 0x70) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0xb8) == 0)) break;
            }
            if ((*(ulonglong *)(lVar5 + 0x38) & 0x108000000000000) == 0x8000000000000) {
              puVar8 = puStack_70;
              if (puStack_70 == (undefined1 *)0x0) {
                puVar8 = auStack_770;
              }
              iVar9 = uStack_68 - 1;
              puVar10 = *(undefined1 **)(puVar8 + (longlong)iVar9 * 0xe0 + 200);
              if (*(undefined1 **)(puVar8 + (longlong)iVar9 * 0xe0 + 200) == (undefined1 *)0x0) {
                puVar10 = puVar8 + (longlong)iVar9 * 0xe0 + 8;
              }
              uVar2 = FUN_1449b1a2a(lVar5,*(undefined8 *)
                                           (puVar10 +
                                           (longlong)
                                           *(int *)(puVar8 + (longlong)iVar9 * 0xe0 + 0xd8) * 0x18 +
                                           8));
              uVar3 = FUN_144a78877(uVar3,uVar2);
            }
          }
          FUN_140caedf2(auStack_770);
          uVar2 = uVar3;
        } while (0 < (int)uStack_68);
      }
      FUN_140021a7a(auStack_770);
    }
    (**(code **)(*plVar4 + 0x50))(plVar4,1);
  }
  if ((uStack_48 ^ (ulonglong)auStack_7a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146fb332c FUN_146fb332c body=550 status=ok
// SIG undefined FUN_146fb332c(void)

undefined4 FUN_146fb332c(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_7a8 [32];
  undefined1 local_788;
  undefined4 local_780;
  undefined1 local_770 [1792];
  undefined1 *local_70;
  uint local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xc0))();
  if (plVar3 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if (lVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar5 = FUN_1446ddbd2();
      local_780 = 2;
      local_788 = 1;
      FUN_140021b28(local_770,uVar5,lVar4,param_1);
      if ((int)local_68 < 1) {
        uVar1 = 0;
      }
      else {
        uVar2 = 0;
        do {
          puVar7 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar7 = local_770;
          }
          puVar9 = *(undefined1 **)(puVar7 + (ulonglong)local_68 * 0xe0 + -0x18);
          if (*(undefined1 **)(puVar7 + (ulonglong)local_68 * 0xe0 + -0x18) == (undefined1 *)0x0) {
            puVar9 = puVar7 + (ulonglong)local_68 * 0xe0 + -0xd8;
          }
          lVar4 = *(longlong *)
                   (puVar9 + (longlong)*(int *)(puVar7 + (ulonglong)local_68 * 0xe0 + -8) * 0x18);
          if (lVar4 != 0) {
            lVar10 = *(longlong *)(lVar4 + 8);
            lVar6 = FUN_1446dcc8c();
            if (*(ulonglong *)(lVar6 + 8) == 0) {
              bVar11 = lVar10 != 0;
              if (lVar10 != lVar6 && bVar11) {
                do {
                  lVar10 = *(longlong *)(lVar10 + 0x30);
                  bVar11 = lVar10 != 0;
                  if (lVar10 == lVar6) break;
                } while (lVar10 != 0);
              }
              if (bVar11) goto LAB_146fb342d;
            }
            else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_146fb342d:
              uVar1 = 0;
              if ((*(longlong *)(lVar4 + 0x70) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar4 + 0x70) + 0xb8) == 0)) break;
            }
            if ((*(ulonglong *)(lVar4 + 0x38) & 0x108000000000000) == 0x8000000000000) {
              puVar7 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar7 = local_770;
              }
              iVar8 = local_68 - 1;
              puVar9 = *(undefined1 **)(puVar7 + (longlong)iVar8 * 0xe0 + 200);
              if (*(undefined1 **)(puVar7 + (longlong)iVar8 * 0xe0 + 200) == (undefined1 *)0x0) {
                puVar9 = puVar7 + (longlong)iVar8 * 0xe0 + 8;
              }
              uVar1 = FUN_1449b1a2a(lVar4,*(undefined8 *)
                                           (puVar9 + (longlong)
                                                     *(int *)(puVar7 + (longlong)iVar8 * 0xe0 + 0xd8
                                                             ) * 0x18 + 8));
              uVar2 = FUN_144a78877(uVar2,uVar1);
            }
          }
          FUN_140caedf2(local_770);
          uVar1 = uVar2;
        } while (0 < (int)local_68);
      }
      FUN_140021a7a(local_770);
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,1);
  }
  if ((local_48 ^ (ulonglong)auStack_7a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 146fb3554 FUN_146fb3554 body=251 status=ok
// SIG undefined FUN_146fb3554(void)

undefined4 FUN_146fb3554(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = param_2;
  FUN_1400021e4(&local_30,local_40);
  FUN_1400b22c2(local_60,L"<DataflowCore");
  FUN_1400021e4(param_1 + 8,local_70);
  FUN_1401c7f3e(&local_50,local_70,local_60);
  iVar3 = local_48 + -1;
  puVar2 = local_50;
  if (local_48 == 0) {
    puVar2 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  uVar1 = FUN_144a791f8(local_40,puVar2,iVar3,1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3650 FUN_146fb3650 body=130 status=ok
// SIG undefined FUN_146fb3650(void)

undefined8 FUN_146fb3650(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  byte extraout_AL;
  char extraout_AL_00;
  undefined7 extraout_var;
  undefined7 uVar3;
  undefined7 extraout_var_00;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 8) != param_2) {
    lVar4 = param_2;
    FUN_146fb3554();
    bVar1 = *(byte *)(param_1 + 0x45);
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),bVar1);
    if ((byte)(~extraout_AL & (bVar1 & 2) >> 1) == 0) {
      uVar3 = extraout_var;
      if (extraout_AL == 0) {
        if (DAT_14c99cdc8 == param_2) {
          return 0;
        }
        uVar3 = (undefined7)((uVar5 & 0xffffffff) >> 8);
        if (((~bVar1 | (byte)(uVar5 & 0xffffffff) >> 1) & 1) == 0) {
          puVar2 = *(undefined8 **)(param_1 + 0x38);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,param_2);
            if (extraout_AL_00 == '\0') {
              return 0;
            }
            uVar5 = (ulonglong)*(byte *)(param_1 + 0x45);
            uVar3 = extraout_var_00;
          }
        }
        else if (*(longlong *)(param_1 + 8) != param_2) {
          return 0;
        }
      }
      *(longlong *)(param_1 + 8) = param_2;
      *(byte *)(param_1 + 0x45) = (byte)uVar5 | 2;
      return CONCAT71(uVar3,1);
    }
  }
  return 0;
}



// FUNCTION 146fb36d2 FUN_146fb36d2 body=14 status=ok
// SIG undefined FUN_146fb36d2(void)

void FUN_146fb36d2(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
  }
  return;
}



// FUNCTION 146fb36e0 FUN_146fb36e0 body=206 status=ok
// SIG undefined FUN_146fb36e0(void)

void FUN_146fb36e0(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = 0;
  local_48[1] = 0;
  (**(code **)(*(longlong *)param_1[4] + 0x70))((longlong *)param_1[4],local_58,local_48,0);
  FUN_140474144(&local_68,local_58,local_48);
  iVar1 = local_60 + -1;
  if (local_60 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_48 + 2,iVar1,local_68,1);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  (**(code **)*param_1)(param_1,local_48[2]);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb37b4 FUN_146fb37b4 body=276 status=ok
// SIG undefined FUN_146fb37b4(void)

undefined8 * FUN_146fb37b4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149faf220;
  local_68 = (undefined8 *)0x0;
  puVar1 = param_1 + 0x33;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = puVar1;
  lVar4 = FUN_146fb824a(param_1);
  if (*(longlong *)(lVar4 + 0x38) == 0) {
    *(undefined ***)(lVar4 + 0x38) = &PTR_PTR_14c75f4a0;
  }
  local_80 = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = puVar1;
  lVar4 = FUN_146fca2ee(param_1,&local_68,&local_50);
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = puVar1;
  plVar5 = (longlong *)FUN_146fb461c(*(undefined8 *)(lVar4 + 0x18),&local_50);
  uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
  uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
  *(int *)(lVar4 + 0x5c) = (int)plVar5[8];
  *(undefined4 *)(lVar4 + 0x60) = uVar3;
  *(undefined4 *)(lVar4 + 100) = uVar2;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb38ca FUN_146fb38ca body=256 status=ok
// SIG undefined FUN_146fb38ca(void)

void FUN_146fb38ca(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149fb9cf0;
  uVar1 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  param_1[3] = *param_2;
  uVar1 = DAT_14c99d1d8;
  param_1[4] = DAT_14c99d1d8;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0x101;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = uVar1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 2;
  return;
}



// FUNCTION 146fb39ca FUN_146fb39ca body=65 status=ok
// SIG undefined FUN_146fb39ca(void)

longlong FUN_146fb39ca(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_146fb461c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  *(int *)(param_1 + 0x5c) = (int)plVar3[8];
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar1;
  return param_1;
}



// FUNCTION 146fb3a0c FUN_146fb3a0c body=99 status=ok
// SIG undefined FUN_146fb3a0c(void)

void FUN_146fb3a0c(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1 + 0x198;
  local_18 = 0xffffffff;
  local_10 = 0;
  local_30 = 0xffffffff;
  local_28 = 0;
  local_20 = local_38;
  FUN_146fb3a70();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3a70 FUN_146fb3a70 body=143 status=ok
// SIG undefined FUN_146fb3a70(void)

void FUN_146fb3a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146fb7378(param_1,local_34,param_4);
  lVar1 = FUN_146fb7834(param_1,local_34);
  if (lVar1 != 0) {
    lVar1 = FUN_146fb4872(param_1,param_3);
    if (lVar1 != 0) {
      FUN_146fb5b08(lVar1,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3b18 FUN_146fb3b18 body=85 status=ok
// SIG undefined FUN_146fb3b18(void)

void FUN_146fb3b18(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x198;
  local_18 = 0xffffffff;
  local_10 = 0;
  FUN_146fb3b6e(param_1,&local_20,*(undefined8 *)(param_2 + 8));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3b6e FUN_146fb3b6e body=115 status=ok
// SIG undefined FUN_146fb3b6e(void)

byte FUN_146fb3b6e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146fb7378(param_1,local_2c,param_2);
  lVar1 = FUN_146fb78fc(param_1,local_2c);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == param_3)) {
    bVar2 = 0;
  }
  else {
    lVar1 = FUN_146fb3650(lVar1,param_3);
    bVar2 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (byte)lVar1 & bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3be2 FUN_146fb3be2 body=117 status=ok
// SIG undefined FUN_146fb3be2(void)

byte FUN_146fb3be2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 8);
  local_28 = param_1 + 0x198;
  local_20 = 0xffffffff;
  local_18 = 0;
  lVar2 = FUN_146fb461c();
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == lVar1)) {
    bVar3 = 0;
  }
  else {
    lVar2 = FUN_146fb3650(lVar2,lVar1);
    bVar3 = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (byte)lVar2 & bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3c58 FUN_146fb3c58 body=49 status=ok
// SIG undefined FUN_146fb3c58(void)

byte FUN_146fb3c58(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar2 = FUN_146fb461c();
  bVar1 = (byte)lVar2;
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == param_3)) {
    bVar3 = 0;
  }
  else {
    bVar1 = FUN_146fb3650(lVar2,param_3);
    bVar3 = 1;
  }
  return bVar1 & bVar3;
}



// FUNCTION 146fb3c8a FUN_146fb3c8a body=323 status=ok
// SIG undefined FUN_146fb3c8a(void)

undefined8 * FUN_146fb3c8a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149faf330;
  *(undefined1 *)((longlong)param_1 + 0x19a) = 1;
  local_68 = 0;
  local_50 = param_1 + 0x33;
  local_48 = 0xffffffff;
  local_40 = 0;
  lVar1 = FUN_146fb824a(param_1);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4a0;
  }
  local_68 = 0;
  local_50 = (undefined8 *)((longlong)param_1 + 0x199);
  local_48 = 0xffffffff;
  local_40 = 0;
  lVar1 = FUN_146fb824a(param_1);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4a0;
  }
  local_68 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = (undefined8 *)((longlong)param_1 + 0x19a);
  FUN_146fb824a(param_1,&local_50,&local_68);
  local_80 = 0;
  local_68 = (longlong)param_1 + 0x19b;
  local_50 = (undefined8 *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  FUN_146fca2ee(param_1,&local_68,&local_50);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3dce FUN_146fb3dce body=246 status=ok
// SIG undefined FUN_146fb3dce(void)

void FUN_146fb3dce(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x19b) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_1 + 0x19a;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    pbVar3 = (byte *)FUN_146fca358(uVar2,param_2,param_1 + 0x19a);
    lVar4 = ((ulonglong)*pbVar3 ^ 0x199) + param_1;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = lVar4;
    lVar1 = FUN_146fb4872(param_1,&local_58);
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      local_50 = 0xffffffff;
      local_48 = 0;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_70 = lVar4;
      local_58 = param_1 + 0x19b;
      FUN_146fb3a70(param_1,param_2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3ec6 FUN_146fb3ec6 body=262 status=ok
// SIG undefined FUN_146fb3ec6(void)

byte FUN_146fb3ec6(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = *(ulonglong *)(param_2 + 8);
  local_48 = param_1 + 0x198;
  local_40 = 0xffffffff;
  local_38 = 0;
  lVar3 = FUN_146fb461c();
  if ((lVar3 == 0) || (*(ulonglong *)(lVar3 + 8) == uVar6)) {
    bVar7 = 0;
  }
  else {
    uVar2 = FUN_146fb3650(lVar3,uVar6);
    uVar6 = (ulonglong)uVar2;
    bVar7 = 1;
  }
  lVar3 = *(longlong *)(param_2 + 8);
  local_60 = param_1 + 0x199;
  local_58 = 0xffffffff;
  local_50 = 0;
  lVar4 = FUN_146fb461c(param_1);
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == lVar3)) {
    bVar5 = 0;
  }
  else {
    lVar4 = FUN_146fb3650(lVar4,lVar3);
    bVar5 = 1;
  }
  local_78 = param_1 + 0x19b;
  local_70 = 0xffffffff;
  local_68 = 0;
  bVar1 = FUN_146fb3b6e(param_1,&local_78,*(undefined8 *)(param_2 + 8));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar1 | (byte)uVar6 & bVar7 | (byte)lVar4 & bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb3fce FUN_146fb3fce body=209 status=ok
// SIG undefined FUN_146fb3fce(void)

ulonglong FUN_146fb3fce(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(ulonglong *)(param_2 + 8);
  local_40 = param_1 + 0x198;
  local_38 = 0xffffffff;
  local_30 = 0;
  lVar2 = FUN_146fb461c();
  if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + 8) == uVar5)) {
    bVar6 = 0;
  }
  else {
    uVar1 = FUN_146fb3650(lVar2,uVar5);
    uVar5 = (ulonglong)uVar1;
    bVar6 = 1;
  }
  lVar2 = *(longlong *)(param_2 + 8);
  local_58 = param_1 + 0x199;
  local_50 = 0xffffffff;
  local_48 = 0;
  lVar3 = FUN_146fb461c(param_1);
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == lVar2)) {
    bVar4 = 0;
  }
  else {
    lVar3 = FUN_146fb3650(lVar3,lVar2);
    bVar4 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & bVar6 | (byte)lVar3 & bVar4) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb40a0 FUN_146fb40a0 body=358 status=ok
// SIG undefined FUN_146fb40a0(void)

longlong * FUN_146fb40a0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = (longlong)&PTR_FUN_149faf440;
  local_48 = param_1 + 0x35;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  local_60 = 0;
  local_40 = 0xffffffff;
  local_38 = (longlong *)0x0;
  FUN_146fb824a(param_1);
  bVar1 = true;
  do {
    bVar6 = bVar1;
    (**(code **)(*param_1 + 0x50))(param_1,local_88);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    bVar1 = false;
  } while (bVar6);
  local_90 = 0;
  local_60 = (longlong)param_1 + 0x1ac;
  local_48 = (longlong *)0x0;
  local_40 = 0xffffffff;
  local_38 = (longlong *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  lVar4 = FUN_146fca2ee(param_1,&local_60,&local_48);
  local_48 = (longlong *)param_1[0x33];
  local_40 = 0;
  local_38 = param_1 + 0x33;
  plVar5 = (longlong *)FUN_146fb461c(*(undefined8 *)(lVar4 + 0x18),&local_48);
  uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
  uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
  *(int *)(lVar4 + 0x5c) = (int)plVar5[8];
  *(undefined4 *)(lVar4 + 0x60) = uVar3;
  *(undefined4 *)(lVar4 + 100) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb4208 FUN_146fb4208 body=247 status=ok
// SIG undefined FUN_146fb4208(void)

void FUN_146fb4208(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == param_1 + 0x1ac) {
    local_38 = -1;
    local_30 = 0;
    local_40 = param_1 + 0x1a8;
    uVar3 = FUN_146fb4872(param_1);
    piVar4 = (int *)FUN_146fca67a(uVar3,param_2,param_1 + 0x1a8);
    iVar1 = *piVar4;
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x1a0))) {
      local_30 = param_1 + 0x198;
      local_40 = (longlong)iVar1 + *(longlong *)(param_1 + 0x198);
      local_38 = iVar1;
      lVar2 = FUN_146fb4872(param_1);
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        local_50 = 0xffffffff;
        local_48 = 0;
        local_58 = param_1 + 0x1ac;
        FUN_146fb3a70(param_1,param_2,&local_40);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb4300 FUN_146fb4300 body=231 status=ok
// SIG undefined FUN_146fb4300(void)

ulonglong FUN_146fb4300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_1 + 0x1ac;
  local_50 = 0xffffffff;
  local_48 = 0;
  uVar2 = FUN_146fb3b6e(param_1,&local_58,*(undefined8 *)(param_2 + 8));
  uVar5 = (ulonglong)uVar2;
  if (0 < *(int *)(param_1 + 0x1a0)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + 8);
      local_58 = *(longlong *)(param_1 + 0x198) + lVar6;
      local_50 = (undefined4)lVar6;
      local_48 = param_1 + 0x198;
      lVar3 = FUN_146fb461c(param_1,&local_58);
      if ((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == lVar1)) {
        bVar4 = 0;
      }
      else {
        lVar3 = FUN_146fb3650(lVar3,lVar1);
        bVar4 = 1;
      }
      uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 | (byte)lVar3 & bVar4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x1a0));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb43e8 FUN_146fb43e8 body=202 status=ok
// SIG undefined FUN_146fb43e8(void)

byte FUN_146fb43e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x1a0) < 1) {
    bVar4 = 0;
  }
  else {
    lVar5 = 0;
    bVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + 8);
      local_58 = *(longlong *)(param_1 + 0x198) + lVar5;
      local_50 = (undefined4)lVar5;
      local_48 = param_1 + 0x198;
      lVar2 = FUN_146fb461c(param_1,&local_58);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == lVar1)) {
        bVar3 = 0;
      }
      else {
        lVar2 = FUN_146fb3650(lVar2,lVar1);
        bVar3 = 1;
      }
      bVar4 = bVar4 | (byte)lVar2 & bVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1a0));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb44b4 FUN_146fb44b4 body=359 status=ok
// SIG undefined FUN_146fb44b4(void)

undefined8 * FUN_146fb44b4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = param_1 + 0x198;
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
    FUN_146fca99c(lVar7,iVar1);
  }
  local_68 = 0;
  local_70 = 0;
  local_88 = *(longlong *)(param_1 + 0x198) + (longlong)iVar1;
  local_80 = iVar1;
  local_78 = lVar7;
  lVar5 = FUN_146fb8390(param_1);
  if (*(longlong *)(lVar5 + 0x38) == 0) {
    *(undefined ***)(lVar5 + 0x38) = &PTR_PTR_14c75f4a0;
  }
  if (0 < iVar1) {
    local_88 = *(longlong *)(param_1 + 0x198);
    local_80 = 0;
    local_78 = lVar7;
    lVar6 = FUN_146fb461c(param_1,&local_88);
    local_88 = (longlong)iVar1 + *(longlong *)(param_1 + 0x198);
    lVar6 = *(longlong *)(lVar6 + 8);
    local_80 = iVar1;
    local_78 = lVar7;
    lVar7 = FUN_146fb461c(param_1,&local_88);
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 8) != lVar6)) {
      FUN_146fb3650(lVar7,lVar6);
    }
  }
  uVar3 = *(undefined8 *)(lVar5 + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_146fc9cde(param_2,1,0);
  puVar2 = (undefined1 *)*param_2;
  *puVar2 = 1;
  *(undefined8 *)(puVar2 + 4) = uVar3;
  *(undefined8 *)(puVar2 + 0xc) = uVar4;
  puVar2[0x14] = 0;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb461c FUN_146fb461c body=398 status=ok
// SIG undefined FUN_146fb461c(void)

longlong * FUN_146fb461c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_64 [12];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146fb7378(param_1,local_64,param_2);
  plVar5 = (longlong *)FUN_146fb5ff6(param_1,local_64);
  if (plVar5 == (longlong *)0x0) {
    uVar3 = local_78;
    if ((param_2[2] == 0) && (iVar7 = 0, *(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154))) {
      plVar1 = (longlong *)(param_1 + 0xd0);
      lVar2 = param_1 + 0xe0;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = lVar2;
      if (*(int *)(param_1 + 0xf8) != 0) {
        FUN_1449c0562(&local_58);
        iVar7 = *(int *)(param_1 + 0xf8);
      }
      local_88 = local_58;
      local_80 = local_50;
      local_78 = local_48;
      uVar3 = local_78;
      local_70 = local_40;
      local_6c = local_3c;
      local_78._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar7) || (local_50 != lVar2)) {
        iVar4 = local_78._4_4_;
        local_78 = uVar3;
        do {
          plVar5 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar4 * 0x20);
          lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
          if (lVar6 == *param_2) goto LAB_146fb4667;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar1 || (local_80 != lVar2 || local_78._4_4_ != iVar7));
      }
    }
    local_78 = uVar3;
    plVar5 = (longlong *)0x0;
  }
LAB_146fb4667:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 146fb47ac FUN_146fb47ac body=196 status=ok
// SIG undefined FUN_146fb47ac(void)

undefined8 * FUN_146fb47ac(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_1 + 0x198;
  lVar4 = (longlong)*(int *)(param_1 + 0x1a0) + -1;
  local_48 = lVar4 + *(longlong *)(param_1 + 0x198);
  local_40 = (undefined4)lVar4;
  lVar4 = FUN_146fb4872(param_1);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar4 + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_146fc9cde(param_2,1,0);
    puVar1 = (undefined1 *)*param_2;
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 4) = uVar2;
    *(undefined8 *)(puVar1 + 0xc) = uVar3;
    puVar1[0x14] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  FUN_146fb4a02(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146fb4872 FUN_146fb4872 body=398 status=ok
// SIG undefined FUN_146fb4872(void)

longlong * FUN_146fb4872(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_64 [12];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146fb7378(param_1,local_64,param_2);
  plVar5 = (longlong *)FUN_146fb72fe(param_1,local_64);
  if (plVar5 == (longlong *)0x0) {
    uVar3 = local_78;
    if ((param_2[2] == 0) && (iVar7 = 0, *(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154))) {
      plVar1 = (longlong *)(param_1 + 0xd0);
      lVar2 = param_1 + 0xe0;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = lVar2;
      if (*(int *)(param_1 + 0xf8) != 0) {
        FUN_1449c0562(&local_58);
        iVar7 = *(int *)(param_1 + 0xf8);
      }
      local_88 = local_58;
      local_80 = local_50;
      local_78 = local_48;
      uVar3 = local_78;
      local_70 = local_40;
      local_6c = local_3c;
      local_78._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar7) || (local_50 != lVar2)) {
        iVar4 = local_78._4_4_;
        local_78 = uVar3;
        do {
          plVar5 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar4 * 0x20);
          lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
          if (lVar6 == *param_2) goto LAB_146fb48bd;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar1 || (local_80 != lVar2 || local_78._4_4_ != iVar7));
      }
    }
    local_78 = uVar3;
    plVar5 = (longlong *)0x0;
  }
LAB_146fb48bd:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 146fb4a02 FUN_146fb4a02 body=198 status=ok
// SIG undefined FUN_146fb4a02(void)

longlong * FUN_146fb4a02(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x60))(param_1,&local_30);
  if (((((char)local_30 == DAT_14c99d080) && (CONCAT44(uStack_28,uStack_2c) == DAT_14c99d084)) &&
      (CONCAT44(uStack_20,uStack_24) == DAT_14c99d08c)) && ((char)uStack_1c == DAT_14c99d094)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_38 = CONCAT44(uStack_1c,uStack_20);
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_146fc9cde(param_2,1,0);
    puVar1 = (undefined4 *)*param_2;
    *(undefined8 *)(puVar1 + 4) = local_38;
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb4ade FUN_146fb4ade body=71 status=ok
// SIG undefined FUN_146fb4ade(void)

void FUN_146fb4ade(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146fca99c();
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
      FUN_146fcaa1a();
      return;
    }
  }
  return;
}



// FUNCTION 146fb4b28 FUN_146fb4b28 body=232 status=ok
// SIG undefined FUN_146fb4b28(void)

void FUN_146fb4b28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (2 < *(int *)(param_1 + 0x1a0))) {
    lVar2 = 2;
    do {
      local_50 = 0;
      local_58 = 0;
      local_70 = *(longlong *)(param_1 + 0x198) + lVar2;
      local_68 = (undefined4)lVar2;
      local_60 = param_1 + 0x198;
      lVar1 = FUN_146fb461c(param_1,&local_70);
      if ((lVar1 == 0) &&
         (lVar1 = FUN_146fb8390(param_1,&local_70,&local_58,&local_50),
         *(longlong *)(lVar1 + 0x38) == 0)) {
        *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4a0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x1a0));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fb4c12 FUN_146fb4c12 body=155 status=ok
// SIG undefined FUN_146fb4c12(void)

undefined8 * FUN_146fb4c12(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149faf550;
  local_30 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_50 = 0;
  local_28 = 0xffffffff;
  local_20 = 0;
  lVar1 = FUN_146fb824a(param_1);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4a8;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb4cae FUN_146fb4cae body=145 status=ok
// SIG undefined FUN_146fb4cae(void)

void FUN_146fb4cae(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  FUN_145dd1dbf(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_146fcccd2(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    FUN_146fccd02(param_1 + 0x28);
    FUN_146fcce46(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_146fccf7a(param_1 + 0x78,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  FUN_1449ad616(param_1 + 0x88);
  return;
}



// FUNCTION 146fb4d40 FUN_146fb4d40 body=295 status=ok
// SIG undefined FUN_146fb4d40(void)

void FUN_146fb4d40(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  longlong lVar6;
  longlong local_48;
  
  iVar4 = (int)param_1[1];
  if (iVar4 < 1) {
    return;
  }
  local_48 = *param_1;
  lVar6 = 0;
  bVar3 = false;
  do {
    _Dst = (void *)(local_48 + lVar6 * 0x40);
    lVar5 = lVar6 * -0x40;
    while (cVar1 = FUN_146fcd018(_Dst,param_2), cVar1 == '\0') {
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + -0x40;
      _Dst = (void *)((longlong)_Dst + 0x40);
      if (iVar4 <= lVar6) {
        if (!bVar3) {
          return;
        }
        goto LAB_146fb4e4f;
      }
    }
    do {
      if (iVar4 - 1U != (uint)lVar6) {
        iVar2 = iVar4 + ~(uint)lVar6;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        memmove(_Dst,(void *)(local_48 + (longlong)(iVar4 - iVar2) * 0x40),(longlong)iVar2 << 6);
        iVar4 = (int)param_1[1];
      }
      iVar4 = iVar4 + -1;
      *(int *)(param_1 + 1) = iVar4;
      if (iVar4 <= lVar6) goto LAB_146fb4e4f;
      local_48 = *param_1;
      _Dst = (void *)(local_48 - lVar5);
      cVar1 = FUN_146fcd018(_Dst,param_2);
    } while (cVar1 != '\0');
    lVar6 = lVar6 + 1;
    bVar3 = true;
  } while (lVar6 < iVar4);
LAB_146fb4e4f:
  FUN_146fccfda(param_1);
  return;
}



// FUNCTION 146fb4e68 FUN_146fb4e68 body=132 status=ok
// SIG undefined FUN_146fb4e68(void)

void FUN_146fb4e68(longlong param_1,longlong *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  FUN_1402ac1b3(param_2,param_1 + 8);
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    FUN_146fb4eec(param_2,param_1 + 0x18,param_1 + 0x78);
    return;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  FUN_142ac0c86(param_2,param_1,param_3);
  return;
}



// FUNCTION 146fb4eec FUN_146fb4eec body=1562 status=ok
// SIG undefined FUN_146fb4eec(void)

void FUN_146fb4eec(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  lStack_70 = 0;
  local_80 = 0;
  local_88 = 0;
  local_8c = (undefined4)param_2[1];
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  local_f0 = param_3;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_8c,4);
    }
    else {
      FUN_14572512c(param_1,&local_8c);
    }
  }
  else {
    local_8c = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((longlong)(int)param_2[1] != 0) {
    plVar8 = (longlong *)*param_2;
    local_e8 = plVar8 + (longlong)(int)param_2[1] * 2;
    do {
      plVar4 = (longlong *)*plVar8;
      local_f8 = (longlong *)plVar8[1];
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
        UNLOCK();
      }
      local_78 = plVar4[1];
      lStack_70 = plVar4[2];
      local_c8 = plVar8;
      (**(code **)(*plVar4 + 8))(plVar4,&local_b8);
      local_80 = local_b8;
      local_88 = plVar4[3];
      plVar8 = (longlong *)FUN_1402ac1b3(param_1,&local_78);
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x160))(plVar8,&local_80);
      (**(code **)(*plVar8 + 0x160))(plVar8,&local_88);
      local_d0 = (**(code **)(*param_1 + 0x28))(param_1);
      local_98 = 0;
      FUN_1408383eb(param_1,&local_98);
      local_e0 = (**(code **)(*param_1 + 0x28))(param_1);
      (**(code **)(*plVar4 + 0xb8))(plVar4,param_1);
      local_b8 = 0;
      uStack_b0 = 0;
      local_d8 = plVar4;
      FUN_146fb7972(plVar4 + 0xf,&local_b8);
      uVar7 = (int)uStack_b0;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      local_9c = uVar7;
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_9c,4);
        }
        else {
          FUN_14572512c(param_1,&local_9c);
        }
      }
      else {
        local_9c = *(undefined4 *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_146fb7972(plVar4 + 0xf,&local_b8);
      lVar6 = local_b8;
      lVar10 = (longlong)(int)uStack_b0;
      if (lVar10 != 0) {
        lVar9 = 0;
        do {
          lVar5 = *(longlong *)(lVar6 + lVar9);
          local_78 = *(longlong *)(lVar5 + 0x28);
          lStack_70 = *(longlong *)(lVar5 + 0x30);
          local_80 = *(longlong *)(lVar5 + 8);
          local_88 = *(longlong *)(lVar5 + 0x10);
          plVar8 = (longlong *)FUN_1402ac1b3(param_1,&local_78);
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x160))(plVar8,&local_80);
          (**(code **)(*plVar8 + 0x160))(plVar8,&local_88);
          puVar3 = (ulonglong *)param_1[1];
          if (puVar3[1] < *puVar3 + 4) {
            local_64 = *(byte *)(lVar5 + 0x45) & 1;
            (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
            if (1 < local_64) {
              FUN_14572541c(param_1);
            }
          }
          else {
            *puVar3 = *puVar3 + 4;
          }
          puVar3 = (ulonglong *)param_1[1];
          if (puVar3[1] < *puVar3 + 4) {
            local_64 = (uint)((~*(byte *)(lVar5 + 0x45) & 0xc) == 0);
            (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
            if (1 < local_64) {
              FUN_14572541c(param_1);
            }
          }
          else {
            *puVar3 = *puVar3 + 4;
          }
          lVar9 = lVar9 + 8;
        } while (lVar10 * 8 != lVar9);
      }
      if (local_b8 != 0) {
        FUN_1400020a8(local_b8);
      }
      plVar8 = local_d8 + 0x1a;
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_146fb7440(plVar8,&local_b8);
      uVar7 = (int)uStack_b0;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      local_bc = uVar7;
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_bc,4);
        }
        else {
          FUN_14572512c(param_1,&local_bc);
        }
      }
      else {
        local_bc = *(undefined4 *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_146fb7440(plVar8,&local_b8);
      lVar6 = local_b8;
      lVar10 = (longlong)(int)uStack_b0;
      if (lVar10 != 0) {
        lVar9 = 0;
        do {
          lVar5 = *(longlong *)(lVar6 + lVar9);
          local_78 = *(longlong *)(lVar5 + 0x28);
          lStack_70 = *(longlong *)(lVar5 + 0x30);
          local_80 = *(longlong *)(lVar5 + 8);
          local_88 = *(longlong *)(lVar5 + 0x10);
          plVar8 = (longlong *)FUN_1402ac1b3(param_1,&local_78);
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x160))(plVar8,&local_80);
          (**(code **)(*plVar8 + 0x160))(plVar8,&local_88);
          puVar3 = (ulonglong *)param_1[1];
          if (puVar3[1] < *puVar3 + 4) {
            local_64 = *(byte *)(lVar5 + 0x45) & 1;
            (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
            if (1 < local_64) {
              FUN_14572541c(param_1);
            }
          }
          else {
            *puVar3 = *puVar3 + 4;
          }
          puVar3 = (ulonglong *)param_1[1];
          if (puVar3[1] < *puVar3 + 4) {
            local_64 = (uint)((~*(byte *)(lVar5 + 0x45) & 0xc) == 0);
            (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
            if (1 < local_64) {
              FUN_14572541c(param_1);
            }
          }
          else {
            *puVar3 = *puVar3 + 4;
          }
          lVar9 = lVar9 + 8;
        } while (lVar10 * 8 != lVar9);
      }
      plVar8 = local_c8;
      if (local_b8 != 0) {
        FUN_1400020a8(local_b8);
      }
      lVar6 = local_d0;
      if (local_d0 != -1) {
        lVar10 = (**(code **)(*param_1 + 0x28))(param_1);
        local_98 = lVar10 - local_e0;
        (**(code **)(*param_1 + 0x1a0))(param_1,lVar6);
        FUN_1408383eb(param_1,&local_98);
        (**(code **)(*param_1 + 0x1a0))(param_1,lVar10);
      }
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_f8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar2 = (int *)((longlong)local_f8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_f8 + 0x10))();
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != local_e8);
  }
  FUN_146fcd1ae(param_1,local_f0);
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fb5508 FUN_146fb5508 body=94 status=ok
// SIG undefined FUN_146fb5508(void)

void FUN_146fb5508(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146fc911c(param_1,iVar2);
    }
    FUN_146fcd944((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 146fb5566 FUN_146fb5566 body=94 status=ok
// SIG undefined FUN_146fb5566(void)

void FUN_146fb5566(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146fc911c(param_1,iVar2);
    }
    FUN_146fcd95b((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 146fb55c4 FUN_146fb55c4 body=279 status=ok
// SIG undefined FUN_146fb55c4(void)

longlong FUN_146fb55c4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  plVar1 = (longlong *)(param_1 + 0x78);
  lVar2 = param_1 + 0x88;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0xa0);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (*(longlong *)(lVar3 + 0x10) == param_2) goto LAB_146fb565b;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  lVar3 = 0;
LAB_146fb565b:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 146fb56dc FUN_146fb56dc body=282 status=ok
// SIG undefined FUN_146fb56dc(void)

longlong FUN_146fb56dc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0xf8);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (*(longlong *)(lVar3 + 0x10) == param_2) goto LAB_146fb5776;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  lVar3 = 0;
LAB_146fb5776:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 146fb57f8 FUN_146fb57f8 body=84 status=ok
// SIG undefined FUN_146fb57f8(void)

void FUN_146fb57f8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149faf8e0;
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[9] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146fb584c FUN_146fb584c body=102 status=ok
// SIG undefined FUN_146fb584c(void)

bool FUN_146fb584c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == lVar1) {
    *(longlong *)(param_1 + 0x48) = param_2;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    local_28 = FUN_146fd4b64();
    FUN_146fb58b4(uVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 == lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb58b4 FUN_146fb58b4 body=360 status=ok
// SIG undefined FUN_146fb58b4(void)

void FUN_146fb58b4(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *param_2;
  if ((char)param_1[0x2e] == '\x01') {
    if ((ulonglong)param_1[0x2f] < uVar3) {
      param_1[0x2f] = uVar3;
    }
  }
  else if ((ulonglong)param_1[4] < uVar3) {
    param_1[4] = uVar3;
    plVar1 = param_1 + 0xf;
    plVar2 = param_1 + 0x11;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar7 = 0;
    local_50 = plVar2;
    if ((int)param_1[0x14] != 0) {
      FUN_1449c0562(&local_58);
      iVar7 = (int)param_1[0x14];
    }
    local_68 = local_48;
    uVar5 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar6 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar7) || (local_68 = uVar5, local_50 != plVar2)) {
      do {
        local_68 = uVar5;
        plVar4 = *(longlong **)(*local_80 + 8 + (longlong)iVar6 * 0x18);
        (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar6 = local_68._4_4_;
        uVar5 = local_68;
      } while (local_80 != plVar1 || (local_70 != plVar2 || local_68._4_4_ != iVar7));
    }
    (**(code **)(*param_1 + 0xd8))(param_1);
    FUN_146fd3cc2(param_1 + 0x30,param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb5a1e FUN_146fb5a1e body=105 status=ok
// SIG undefined FUN_146fb5a1e(void)

bool FUN_146fb5a1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == param_2) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    local_28 = FUN_146fd4b64();
    FUN_146fb58b4(uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 == param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb5a88 FUN_146fb5a88 body=59 status=ok
// SIG undefined FUN_146fb5a88(void)

undefined8 * FUN_146fb5a88(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_146fcdfc2(param_2,0);
    *(longlong *)*param_2 = lVar1;
  }
  return param_2;
}



// FUNCTION 146fb5ac4 FUN_146fb5ac4 body=57 status=ok
// SIG undefined FUN_146fb5ac4(void)

undefined8 * FUN_146fb5ac4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_146fce048(param_2);
    *(longlong *)*param_2 = lVar1;
  }
  return param_2;
}



// FUNCTION 146fb5b08 FUN_146fb5b08 body=143 status=ok
// SIG undefined FUN_146fb5b08(void)

void FUN_146fb5b08(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x40))(param_1,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    (**(code **)(*param_1 + 0x40))(param_1,&local_38);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (param_1[9] != 0) {
      FUN_146fb5b98(param_1[9],param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb5b98 FUN_146fb5b98 body=93 status=ok
// SIG undefined FUN_146fb5b98(void)

undefined8 FUN_146fb5b98(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 200) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000146fb5bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_2 + 0x48))(param_2,param_1);
      return uVar1;
    }
    lVar2 = FUN_146fb5ff6(lVar2,param_1 + 0x5c);
    if (lVar2 != 0) {
      FUN_146fb60b0(param_1,lVar2,param_2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 146fb5bf6 FUN_146fb5bf6 body=321 status=ok
// SIG undefined FUN_146fb5bf6(void)

void FUN_146fb5bf6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) != param_2) {
    *(longlong *)(param_1 + 8) = param_2;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 2;
    plVar1 = *(longlong **)(param_1 + 0x18);
    FUN_1446ddc76(&local_48,"FDataflowReRouteNode",1);
    bVar4 = (**(code **)(*plVar1 + 0xf0))(plVar1,local_48);
    if ((plVar1 != (longlong *)0x0 & bVar4) == 1) {
      local_48 = 0;
      uStack_40 = 0;
      FUN_146fb7972(plVar1 + 0xf,&local_48);
      lVar3 = local_48;
      lVar6 = (longlong)(int)uStack_40;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          puVar2 = *(undefined8 **)(lVar3 + lVar7);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,param_2);
          }
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
      }
      if (local_48 != 0) {
        FUN_1400020a8(local_48);
      }
    }
    if ((*(byte *)(param_1 + 0x45) & 1) != 0) {
      plVar1 = *(longlong **)(param_1 + 0x18);
      cVar5 = *(char *)(param_1 + 0x44);
      if (cVar5 == '\x01') {
        (**(code **)(*plVar1 + 0xf8))(plVar1,param_1);
        cVar5 = *(char *)(param_1 + 0x44);
      }
      if (cVar5 == '\x02') {
        (**(code **)(*plVar1 + 0x100))(plVar1,param_1);
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fb5d38 FUN_146fb5d38 body=68 status=ok
// SIG undefined FUN_146fb5d38(void)

longlong FUN_146fb5d38(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x18);
  if (((lVar2 != 0) && (plVar1 = *(longlong **)(param_1 + 0x58), plVar1 != (longlong *)0x0)) &&
     (lVar2 = (**(code **)(*plVar1 + 0xe8))
                        (plVar1,plVar1[0xf],lVar2,*(undefined4 *)(param_1 + 0x50)), lVar2 != 0)) {
    return (ulonglong)*(uint *)(param_1 + 0x54) + lVar2;
  }
  return 0;
}



// FUNCTION 146fb5d84 FUN_146fb5d84 body=139 status=ok
// SIG undefined FUN_146fb5d84(void)

longlong * FUN_146fb5d84(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_146fce0c6(param_2);
    iVar1 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
      lVar5 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_146fce11c(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return param_2;
}



// FUNCTION 146fb5e10 FUN_146fb5e10 body=139 status=ok
// SIG undefined FUN_146fb5e10(void)

longlong * FUN_146fb5e10(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_146fce1a2(param_2);
    iVar1 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
      lVar5 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_146fce202(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return param_2;
}



// FUNCTION 146fb5e9c FUN_146fb5e9c body=83 status=ok
// SIG undefined FUN_146fb5e9c(void)

bool FUN_146fb5e9c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == lVar2) {
    iVar1 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
      FUN_146fce202((longlong *)(param_1 + 0x48),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = param_2;
  }
  return lVar3 == lVar2;
}



// FUNCTION 146fb5ef0 FUN_146fb5ef0 body=68 status=ok
// SIG undefined FUN_146fb5ef0(void)

undefined8 FUN_146fb5ef0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_146fb5f36(param_1 + 0x48,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb5f36 FUN_146fb5f36 body=192 status=ok
// SIG undefined FUN_146fb5f36(void)

void FUN_146fb5f36(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_146fb5fe2;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_146fb5fe2:
  FUN_146fce288(param_1);
  return;
}



// FUNCTION 146fb5ff6 FUN_146fb5ff6 body=122 status=ok
// SIG undefined FUN_146fb5ff6(void)

undefined8 FUN_146fb5ff6(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  uVar5 = (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + param_2[1] ^ uVar5;
  iVar1 = FUN_146fd2f56((longlong *)(param_1 + 0xd0),
                        (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + param_2[2] ^ uVar5,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0xd0),
     puVar3 = (undefined8 *)(lVar2 + 0x10), puVar3 == (undefined8 *)0x0 || lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar3;
  }
  return uVar4;
}



// FUNCTION 146fb6070 FUN_146fb6070 body=64 status=ok
// SIG undefined FUN_146fb6070(void)

void FUN_146fb6070(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146fb60b0 FUN_146fb60b0 body=352 status=ok
// SIG undefined FUN_146fb60b0(void)

void FUN_146fb60b0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x18) == 0))
  goto LAB_146fb612d;
  (**(code **)(*param_2 + 0x40))(param_2,&local_48);
  iVar3 = iStack_40;
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  if (iVar3 != 0) {
    (**(code **)(*param_2 + 0x40))(param_2,&local_48);
    if (CONCAT44(uStack_44,local_48) != 0) {
      FUN_1400020a8();
    }
    lVar1 = param_2[9];
    if (lVar1 != 0) {
      FUN_146fb5b08(param_2,param_3);
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      uVar5 = FUN_1447addd0(param_1 + 0x28,0x10);
      FUN_146fb6212(param_3,uVar5,uVar4);
    }
    goto LAB_146fb612d;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_50 = DAT_14c99d1d8;
    local_68 = 0;
LAB_146fb616a:
    local_48 = 0;
    uStack_44 = 0;
    iStack_40 = 0;
    uStack_3c = 0;
  }
  else {
    local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    local_68 = FUN_146fb332c();
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 == 0) goto LAB_146fb616a;
    local_48 = *(undefined4 *)(lVar1 + 8);
    uStack_44 = *(undefined4 *)(lVar1 + 0xc);
    iStack_40 = *(int *)(lVar1 + 0x10);
    uStack_3c = *(undefined4 *)(lVar1 + 0x14);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = FUN_1447addd0(param_1 + 0x28,0x10);
  local_60 = &local_50;
  FUN_146fb6296(param_3,uVar4,uVar2,&local_48);
LAB_146fb612d:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6212 FUN_146fb6212 body=130 status=ok
// SIG undefined FUN_146fb6212(void)

void FUN_146fb6212(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x28))(param_1,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,&local_30,param_3);
    (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6296 FUN_146fb6296 body=181 status=ok
// SIG undefined FUN_146fb6296(void)

void FUN_146fb6296(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *param_6;
  *(undefined4 *)(local_40 + 1) = 2;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)((longlong)local_40 + 0xc) = *param_4;
  *(undefined4 *)(local_40 + 2) = uVar2;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar3;
  *(undefined4 *)(local_40 + 3) = uVar4;
  local_40[4] = param_3;
  *(undefined4 *)(local_40 + 5) = param_5;
  local_40[6] = uVar1;
  *local_40 = &PTR_FUN_149fb7ee0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_40);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb634c FUN_146fb634c body=353 status=ok
// SIG undefined FUN_146fb634c(void)

void FUN_146fb634c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) != param_2) {
    *(longlong *)(param_1 + 8) = param_2;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 2;
    plVar2 = *(longlong **)(param_1 + 0x18);
    FUN_1446ddc76(&local_48,"FDataflowReRouteNode",1);
    bVar5 = (**(code **)(*plVar2 + 0xf0))(plVar2,local_48);
    if ((plVar2 != (longlong *)0x0 & bVar5) == 1) {
      local_48 = 0;
      uStack_40 = 0;
      FUN_146fb7440(plVar2 + 0x1a,&local_48);
      lVar3 = local_48;
      lVar7 = (longlong)(int)uStack_40;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          puVar4 = *(undefined8 **)(lVar3 + lVar8);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,param_2);
          }
          lVar8 = lVar8 + 8;
        } while (lVar7 * 8 != lVar8);
      }
      if (local_48 != 0) {
        FUN_1400020a8(local_48);
      }
    }
    if ((*(byte *)(param_1 + 0x45) & 1) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x18);
      cVar6 = *(char *)(param_1 + 0x44);
      if (cVar6 == '\x01') {
        (**(code **)(*plVar2 + 0xf8))(plVar2,param_1);
        cVar6 = *(char *)(param_1 + 0x44);
      }
      if (cVar6 == '\x02') {
        (**(code **)(*plVar2 + 0x100))(plVar2,param_1);
      }
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
      lVar7 = 0;
      do {
        puVar4 = *(undefined8 **)(lVar3 + lVar7);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,param_2);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fb64ae FUN_146fb64ae body=212 status=ok
// SIG undefined FUN_146fb64ae(void)

void FUN_146fb64ae(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_48 = param_1 + 0x198;
  local_40 = 0xffffffff;
  local_38 = 0;
  lVar1 = FUN_146fb824a();
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4b0;
  }
  local_68 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x1a0;
  FUN_146fd05d2(param_1,&local_60,&local_48);
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x1a0;
  FUN_146fb3b6e(param_1,&local_48,DAT_14c99cf94);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6584 FUN_146fb6584 body=190 status=ok
// SIG undefined FUN_146fb6584(void)

void FUN_146fb6584(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  if (plVar1 == param_1 + 0x34) {
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = param_1 + 0x33;
    uVar2 = FUN_146fb4872(param_1,&local_48);
    uVar3 = FUN_146fd063c(uVar2,param_2,param_1 + 0x33);
    local_48 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,param_2,uVar3);
    FUN_146fb6644(param_1,param_2,&local_48,param_1 + 0x34);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6644 FUN_146fb6644 body=145 status=ok
// SIG undefined FUN_146fb6644(void)

void FUN_146fb6644(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [44];
  undefined1 local_4c [12];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = CONCAT44(local_38._4_4_,0xffffffff);
  local_30 = 0;
  local_40 = param_4;
  FUN_146fb7378(param_1,local_4c);
  lVar1 = FUN_146fb7834(param_1,local_4c);
  if (lVar1 != 0) {
    local_40 = lVar1;
    local_38 = param_2;
    local_30 = param_3;
    FUN_146fd1054(*(undefined8 *)(lVar1 + 8));
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb66d6 FUN_146fb66d6 body=266 status=ok
// SIG undefined FUN_146fb66d6(void)

void FUN_146fb66d6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_48 = param_1 + 0x198;
  local_40 = 0xffffffff;
  local_38 = 0;
  lVar1 = FUN_146fb824a();
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4b0;
  }
  local_60 = 0;
  local_48 = param_1 + 0x1a0;
  local_40 = 0xffffffff;
  local_38 = 0;
  lVar1 = FUN_146fb824a(param_1);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4b0;
  }
  local_68 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x1a8;
  FUN_146fd05d2(param_1,&local_60,&local_48);
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x1a8;
  FUN_146fb3b6e(param_1,&local_48,DAT_14c99cf94);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb67e2 FUN_146fb67e2 body=260 status=ok
// SIG undefined FUN_146fb67e2(void)

void FUN_146fb67e2(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  if (plVar1 == param_1 + 0x35) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x33;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    uVar3 = FUN_146fd063c(uVar2,param_2,param_1 + 0x33);
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x34;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    uVar4 = FUN_146fd063c(uVar2,param_2,param_1 + 0x34);
    local_68 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,param_2,uVar3,uVar4);
    FUN_146fb6644(param_1,param_2,&local_68,param_1 + 0x35);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6906 FUN_146fb6906 body=185 status=ok
// SIG undefined FUN_146fb6906(void)

undefined8 * FUN_146fb6906(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)*param_3;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_48);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *param_1 = &PTR_FUN_149faff00;
  param_1[0x36] = 0;
  FUN_146fb66d6(param_1);
  local_50 = 0;
  uStack_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x36;
  lVar1 = FUN_146fb824a(param_1,&local_48);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4b0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb69c0 FUN_146fb69c0 body=126 status=ok
// SIG undefined FUN_146fb69c0(void)

double FUN_146fb69c0(longlong param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_4 == 0.0) && (!NAN(param_4))) {
    local_38 = param_1 + 0x1b0;
    local_30 = 0xffffffff;
    local_28 = 0;
    FUN_146fb4872();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3 / param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6a68 FUN_146fb6a68 body=179 status=ok
// SIG undefined FUN_146fb6a68(void)

undefined8 * FUN_146fb6a68(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)*param_3;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_48);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *param_1 = &PTR_FUN_149fb0260;
  param_1[0x35] = 0;
  FUN_146fb64ae(param_1);
  local_50 = 0;
  uStack_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x35;
  lVar1 = FUN_146fb824a(param_1,&local_48);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4b0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6b1c FUN_146fb6b1c body=130 status=ok
// SIG undefined FUN_146fb6b1c(void)

void FUN_146fb6b1c(longlong param_1,undefined8 param_2,double param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 == 0.0) && (!NAN(param_3))) {
    local_38 = param_1 + 0x1a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    FUN_146fb4872();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(1.0 / param_3);
}



// FUNCTION 146fb6bea FUN_146fb6bea body=179 status=ok
// SIG undefined FUN_146fb6bea(void)

undefined8 * FUN_146fb6bea(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)*param_3;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_48);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *param_1 = &PTR_FUN_149fb06e0;
  param_1[0x35] = 0;
  FUN_146fb64ae(param_1);
  local_50 = 0;
  uStack_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x35;
  lVar1 = FUN_146fb824a(param_1,&local_48);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4b0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6c9e FUN_146fb6c9e body=134 status=ok
// SIG undefined FUN_146fb6c9e(void)

void FUN_146fb6c9e(longlong param_1,undefined8 param_2,double param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 == 0.0) && (!NAN(param_3))) {
    local_38 = param_1 + 0x1a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    FUN_146fb4872();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(1.0 / SQRT(param_3));
}



// FUNCTION 146fb6da6 FUN_146fb6da6 body=189 status=ok
// SIG undefined FUN_146fb6da6(void)

undefined8 * FUN_146fb6da6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)*param_3;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_48);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *param_1 = &PTR_FUN_149fb1100;
  param_1[0x35] = 0x4024000000000000;
  FUN_146fb64ae(param_1);
  local_50 = 0;
  uStack_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x35;
  lVar1 = FUN_146fb824a(param_1,&local_48);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    *(undefined ***)(lVar1 + 0x38) = &PTR_PTR_14c75f4b0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6e64 FUN_146fb6e64 body=186 status=ok
// SIG undefined FUN_146fb6e64(void)

double FUN_146fb6e64(longlong param_1,undefined8 param_2,double param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x1a8;
  uVar1 = FUN_146fb4872();
  dVar2 = (double)FUN_146fd063c(uVar1,param_2,param_1 + 0x1a8);
  dVar3 = 0.0;
  if (0.0 < dVar2) {
    dVar3 = log(param_3);
    dVar2 = log(dVar2);
    dVar3 = dVar3 / dVar2;
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return dVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb6f72 FUN_146fb6f72 body=206 status=ok
// SIG undefined FUN_146fb6f72(void)

undefined8 * FUN_146fb6f72(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb16a0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  local_80 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fd05d2(param_1,&local_60,&local_48);
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_1 + 0x34;
  FUN_146fb3b6e(param_1,&local_48,DAT_14c99cf94);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb7042 FUN_146fb7042 body=133 status=ok
// SIG undefined FUN_146fb7042(void)

void FUN_146fb7042(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1a0) {
    local_28 = 0;
    if ((ulonglong)*(byte *)(param_1 + 0x198) < 0xd) {
      local_28 = *(undefined8 *)(&DAT_149fba4f8 + (ulonglong)*(byte *)(param_1 + 0x198) * 8);
    }
    FUN_146fb6644(param_1,param_2,&local_28,param_1 + 0x1a0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb716c FUN_146fb716c body=401 status=ok
// SIG undefined FUN_146fb716c(void)

void FUN_146fb716c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = param_2;
  if (param_2 != (longlong *)0x0) {
    puVar1 = (undefined8 *)(param_1 + 0xd0);
    lVar2 = param_1 + 0xe0;
    local_58 = (longlong **)&DAT_100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar4 = 0;
    local_50 = lVar2;
    if (*(int *)(param_1 + 0xf8) != 0) {
      FUN_1449c0562(&local_58);
      iVar4 = *(int *)(param_1 + 0xf8);
    }
    local_70 = local_48;
    uVar3 = local_70;
    local_68 = local_40;
    local_64 = local_3c;
    local_80 = local_58;
    local_78 = local_50;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    bVar7 = local_70._4_4_ != iVar4;
    local_88 = puVar1;
    local_70 = uVar3;
    if ((bVar7) || (local_50 != lVar2)) {
      do {
        do {
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(&local_80);
        } while (local_70._4_4_ != iVar4);
      } while ((local_78 != lVar2) || (local_88 != puVar1));
    }
    iVar4 = (**(code **)(*param_2 + 0x18))(param_2);
    iVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar6 = *(uint *)(param_2 + 8);
    local_58 = (longlong **)CONCAT44(iVar5,uVar6);
    local_50 = CONCAT44(local_50._4_4_,iVar4);
    uVar6 = (uVar6 >> 2) + uVar6 * 0x40 + -0x61c88647 + iVar5 ^ uVar6;
    iVar4 = FUN_146fd2f56(puVar1,(uVar6 >> 2) + 0x9e3779b9 + uVar6 * 0x40 + iVar4 ^ uVar6,&local_58)
    ;
    if (iVar4 == -1) {
      local_80 = &local_60;
      local_88 = &local_58;
      FUN_146fd2fbc(puVar1,local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb72fe FUN_146fb72fe body=122 status=ok
// SIG undefined FUN_146fb72fe(void)

undefined8 FUN_146fb72fe(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  uVar5 = (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + param_2[1] ^ uVar5;
  iVar1 = FUN_146fd2f56((longlong *)(param_1 + 0xd0),
                        (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + param_2[2] ^ uVar5,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0xd0),
     puVar3 = (undefined8 *)(lVar2 + 0x10), puVar3 == (undefined8 *)0x0 || lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar3;
  }
  return uVar4;
}



// FUNCTION 146fb7378 FUN_146fb7378 body=199 status=ok
// SIG undefined FUN_146fb7378(void)

uint * FUN_146fb7378(longlong param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar2 = (int)*(longlong *)(param_3 + 4);
  if (*(longlong *)(param_3 + 4) == 0) {
    iVar2 = *param_3;
  }
  uVar3 = iVar2 - (int)param_1;
  *param_2 = uVar3;
  param_2[1] = param_3[2];
  param_2[2] = 0xffffffff;
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar4 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x160);
    }
    uVar5 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x168) - 1U & uVar3) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x120) + (longlong)(int)uVar5 * 0x18);
        if (*puVar1 == uVar3) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return param_2;
          }
          lVar4 = (**(code **)(**(longlong **)(puVar1 + 2) + 0xe8))();
          param_2[2] = -(uint)(lVar4 == 0) | *param_3 - (int)lVar4;
          return param_2;
        }
        uVar5 = puVar1[4];
      } while (uVar5 != 0xffffffff);
    }
  }
  return param_2;
}



// FUNCTION 146fb7440 FUN_146fb7440 body=333 status=ok
// SIG undefined FUN_146fb7440(void)

void FUN_146fb7440(longlong *param_1,longlong *param_2)

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
    FUN_146fce1a2(param_2);
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
        FUN_146fce202(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)((longlong)iVar2 * 0x20 + lVar1 + 0x10);
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



// FUNCTION 146fb7590 FUN_146fb7590 body=295 status=ok
// SIG undefined FUN_146fb7590(void)

void FUN_146fb7590(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  iVar4 = 0;
  local_40 = lVar2;
  if (*(int *)(param_1 + 0xf8) != 0) {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0xf8);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (local_40 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (local_60 != lVar2 || iStack_54 != iVar4));
  }
  FUN_146fd34b6(plVar1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb76b8 FUN_146fb76b8 body=378 status=ok
// SIG undefined FUN_146fb76b8(void)

void FUN_146fb76b8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_b8 [44];
  uint local_8c;
  uint *local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = param_2;
  if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 0x78);
    lVar4 = param_1 + 0x88;
    local_58 = (longlong *)&DAT_100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar4;
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0xa0);
    }
    uStack_68 = CONCAT44(uStack_3c,uStack_40);
    local_70 = local_48;
    uVar3 = local_70;
    local_80 = local_58;
    uStack_78 = (undefined4)uStack_50;
    uStack_74 = uStack_50._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    bVar6 = local_70._4_4_ != iVar5;
    local_88 = puVar1;
    local_70 = uVar3;
    if ((bVar6) || (uStack_50 != lVar4)) {
      do {
        do {
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
          FUN_1449c0562(&local_80);
        } while (local_70._4_4_ != iVar5);
      } while ((CONCAT44(uStack_74,uStack_78) != lVar4) || (local_88 != puVar1));
    }
    uVar2 = *(uint *)(param_2 + 0x40);
    if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
      lVar4 = param_1 + 0xb0;
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        lVar4 = *(longlong *)(param_1 + 0xb8);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar2) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x18) == uVar2) goto LAB_146fb7802;
          iVar5 = *(int *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x18 + 0x10);
        } while (iVar5 != -1);
      }
    }
    local_88 = &local_8c;
    local_80 = &local_60;
    local_8c = uVar2;
    FUN_146fd363e(puVar1,&local_58);
  }
LAB_146fb7802:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb7834 FUN_146fb7834 body=118 status=ok
// SIG undefined FUN_146fb7834(void)

undefined8 FUN_146fb7834(longlong param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & *param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == *param_2) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            return *(undefined8 *)(puVar1 + 2);
          }
          return 0;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146fb78aa FUN_146fb78aa body=80 status=ok
// SIG undefined FUN_146fb78aa(void)

void FUN_146fb78aa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146fb7378(param_1,local_24,param_2);
  FUN_146fb7834(param_1,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb78fc FUN_146fb78fc body=118 status=ok
// SIG undefined FUN_146fb78fc(void)

undefined8 FUN_146fb78fc(longlong param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & *param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == *param_2) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            return *(undefined8 *)(puVar1 + 2);
          }
          return 0;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146fb7972 FUN_146fb7972 body=334 status=ok
// SIG undefined FUN_146fb7972(void)

void FUN_146fb7972(longlong *param_1,longlong *param_2)

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
    FUN_146fd3ada(param_2);
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
        FUN_146fcdfc2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x18 + 8);
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



// FUNCTION 146fb7ac2 FUN_146fb7ac2 body=292 status=ok
// SIG undefined FUN_146fb7ac2(void)

void FUN_146fb7ac2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x78);
  lVar2 = param_1 + 0x88;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  iVar4 = 0;
  local_40 = lVar2;
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0xa0);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (local_40 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (local_60 != lVar2 || iStack_54 != iVar4));
  }
  FUN_146fd3b3a(plVar1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb7be8 FUN_146fb7be8 body=1139 status=ok
// SIG undefined FUN_146fb7be8(void)

void ** FUN_146fb7be8(void **param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_198 [36];
  int local_174;
  void *local_170;
  uint local_168;
  undefined4 local_164;
  void *local_160;
  uint local_158;
  undefined1 *local_150;
  void **local_148;
  longlong local_140;
  undefined4 local_138;
  void *local_130;
  uint local_128;
  undefined4 local_124;
  void **local_120;
  ulonglong *local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [32];
  undefined1 local_c0 [16];
  longlong alStack_b0 [2];
  void *local_a0;
  undefined8 local_98;
  undefined1 local_80 [32];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  uVar4 = *(uint *)(param_2 + 1);
  local_174 = param_3;
  if (0 < (int)uVar4) {
    do {
      uVar1 = uVar4 - 1;
      lVar5 = *(longlong *)(*param_2 + (ulonglong)uVar1 * 8);
      if (lVar5 == 0) {
        FUN_140056680(&local_f0,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(lVar5 + 0x20,&local_f0);
        lVar5 = *(longlong *)(lVar5 + 8);
        lVar3 = FUN_1446e6bbc();
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar6 = lVar5 != 0;
          if (lVar5 != lVar3 && bVar6) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar6 = lVar5 != 0;
              if (lVar5 == lVar3) break;
            } while (lVar5 != 0);
          }
          if (bVar6) goto LAB_146fb7c81;
        }
        else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_146fb7c81:
          if (local_174 != -1) {
            local_130 = (void *)0x0;
            lVar5 = (longlong)(int)uStack_e8;
            pvVar2 = (void *)CONCAT44(local_f0._4_4_,(undefined4)local_f0);
            local_128 = uStack_e8;
            if (lVar5 == 0) {
              local_124 = 0;
            }
            else {
              FUN_1446dd670(&local_130,uStack_e8,0);
              memcpy(local_130,pvVar2,lVar5 * 2);
            }
            FUN_14146ec20(&local_a0,&local_130);
            FUN_142787b30(local_80,local_174);
            local_118 = local_60;
            local_120 = &local_a0;
            FUN_1407adb6e(&local_110,&local_120);
            FUN_140230a2e(&local_100,L"{0}[{1}]");
            if (CONCAT44(local_f0._4_4_,(undefined4)local_f0) != 0) {
              FUN_1400020a8();
            }
            local_f0._0_4_ = (undefined4)local_100;
            local_f0._4_4_ = local_100._4_4_;
            uStack_e8 = (uint)uStack_f8;
            uStack_e4 = uStack_f8._4_4_;
            local_100 = 0;
            uStack_f8 = 0;
            FUN_1407adb3e(local_110,local_108);
            if (local_110 != 0) {
              FUN_1400020a8();
            }
            lVar5 = 0x40;
            do {
              if (*(longlong *)((longlong)alStack_b0 + lVar5) != 0) {
                FUN_1400020a8();
              }
              lVar5 = lVar5 + -0x20;
            } while (lVar5 != 0);
          }
          uVar1 = uVar4 - 2;
        }
      }
      uVar4 = uVar1;
      uVar1 = *(uint *)(param_1 + 1);
      if ((int)uVar1 < 2) {
        local_a0 = (void *)0x0;
        lVar5 = (longlong)(int)uStack_e8;
        pvVar2 = (void *)CONCAT44(local_f0._4_4_,(undefined4)local_f0);
        local_98 = CONCAT44(local_98._4_4_,uStack_e8);
        if (lVar5 == 0) {
          local_98 = (ulonglong)uStack_e8;
        }
        else {
          FUN_1446dd670(&local_a0,uStack_e8,0);
          memcpy(local_a0,pvVar2,lVar5 * 2);
        }
      }
      else {
        local_160 = (void *)0x0;
        pvVar2 = *param_1;
        local_158 = uVar1;
        FUN_1446dd670(&local_160,uVar1,0);
        memcpy(local_160,pvVar2,(ulonglong)uVar1 * 2);
        FUN_14146ec20(local_e0,&local_160);
        local_170 = (void *)0x0;
        lVar5 = (longlong)(int)uStack_e8;
        pvVar2 = (void *)CONCAT44(local_f0._4_4_,(undefined4)local_f0);
        local_168 = uStack_e8;
        if (lVar5 == 0) {
          local_164 = 0;
        }
        else {
          FUN_1446dd670(&local_170,uStack_e8,0);
          memcpy(local_170,pvVar2,lVar5 * 2);
        }
        FUN_14146ec20(local_c0,&local_170);
        local_150 = local_e0;
        local_148 = &local_a0;
        FUN_1407adb6e(&local_140,&local_150);
        FUN_140230a2e(&local_a0,L"{0}.{1}");
      }
      if (&local_a0 == param_1) {
        if (local_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != (void *)0x0) {
          FUN_1400020a8();
        }
        *param_1 = local_a0;
        local_a0 = (void *)0x0;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_98._4_4_;
        local_98 = 0;
      }
      if (1 < (int)uVar1) {
        FUN_1407adb3e(local_140,local_138);
        if (local_140 != 0) {
          FUN_1400020a8();
        }
        lVar5 = 0x40;
        do {
          if (*(longlong *)((longlong)&local_f0 + lVar5) != 0) {
            FUN_1400020a8();
          }
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
      }
      if (CONCAT44(local_f0._4_4_,(undefined4)local_f0) != 0) {
        FUN_1400020a8();
      }
    } while (0 < (int)uVar4);
  }
  if ((local_60[0] ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146fb805c FUN_146fb805c body=138 status=ok
// SIG undefined FUN_146fb805c(void)

undefined8 FUN_146fb805c(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  FUN_146fb7be8(&local_28,&local_38);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146fb80e8 FUN_146fb80e8 body=352 status=ok
// SIG undefined FUN_146fb80e8(void)

void FUN_146fb80e8(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  local_b8 = local_88 + 2;
  local_88[2] = 0;
  local_88[3] = 0;
  plVar2 = (longlong *)FUN_142ac1daf(uVar1,param_1,param_3,param_4);
  local_88[0] = 0;
  local_88[1] = 0;
  (**(code **)(*plVar2 + 0x70))(plVar2,local_98,local_88,0);
  FUN_140474144(&local_a8,local_98,local_88);
  iVar3 = local_a0 + -1;
  if (local_a0 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(local_88 + 4,iVar3,local_a8,1);
  *param_5 = local_88[4];
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_146fb805c(&local_a8,local_88 + 2,0xffffffff);
  param_5[1] = local_a8;
  param_5[3] = plVar2;
  param_5[2] = param_1;
  *(int *)(param_5 + 4) = (int)param_3 - (int)param_1;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb824a FUN_146fb824a body=324 status=ok
// SIG undefined FUN_146fb824a(void)

undefined8 * FUN_146fb824a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uchar auVar2 [8];
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  GUID local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulong local_54;
  ushort uStack_50;
  ushort uStack_4e;
  uchar auStack_4c [4];
  uchar auStack_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xc0))();
  local_88.Data1 = 0;
  local_88.Data2 = 0;
  local_88.Data3 = 0;
  local_88.Data4[0] = '\0';
  local_88.Data4[1] = '\0';
  local_88.Data4[2] = '\0';
  local_88.Data4[3] = '\0';
  local_88.Data4[4] = '\0';
  local_88.Data4[5] = '\0';
  local_88.Data4[6] = '\0';
  local_88.Data4[7] = '\0';
  CoCreateGuid(&local_88);
  auVar2 = local_88.Data4;
  uVar1 = local_88._0_8_;
  local_98 = &local_78;
  local_54 = local_88.Data1;
  uStack_50 = local_88.Data2;
  uStack_4e = local_88.Data3;
  auStack_4c[0] = local_88.Data4[0];
  auStack_4c[1] = local_88.Data4[1];
  auStack_4c[2] = local_88.Data4[2];
  auStack_4c[3] = local_88.Data4[3];
  auStack_48[0] = local_88.Data4[4];
  auStack_48[1] = local_88.Data4[5];
  auStack_48[2] = local_88.Data4[6];
  auStack_48[3] = local_88.Data4[7];
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_88._0_8_ = uVar1;
  local_88.Data4 = auVar2;
  FUN_146fb80e8(param_1,plVar3,*param_2,param_3);
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = &PTR_LAB_149faf1c0;
  puVar4[1] = local_78;
  puVar4[2] = uStack_70;
  puVar4[3] = local_68;
  puVar4[4] = uStack_60;
  *(ulong *)(puVar4 + 5) = local_54;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = _uStack_50;
  *(uchar (*) [4])(puVar4 + 6) = auStack_4c;
  *(undefined4 *)((longlong)puVar4 + 0x34) = auStack_48._0_4_;
  puVar4[7] = 0;
  *(undefined4 *)(puVar4 + 8) = local_58;
  *(undefined2 *)((longlong)puVar4 + 0x44) = 1;
  FUN_1461d1208(puVar4);
  *puVar4 = &PTR_FUN_149faf840;
  puVar4[9] = 0;
  (**(code **)(*param_1 + 0x88))(param_1,puVar4);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb8390 FUN_146fb8390 body=1638 status=ok
// SIG undefined FUN_146fb8390(void)

undefined8 * FUN_146fb8390(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong **pplVar13;
  longlong **pplVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_888 [32];
  longlong *local_868;
  undefined4 local_860;
  longlong *local_858;
  longlong *local_850;
  longlong local_848 [2];
  longlong local_838 [2];
  longlong **local_828;
  longlong ***local_820;
  longlong local_818;
  int local_810;
  longlong local_808;
  undefined8 uStack_800;
  longlong local_7f8;
  int local_7f0;
  void *local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  longlong *local_7c8;
  longlong *plStack_7c0;
  int local_7b8;
  GUID local_7b4;
  longlong *local_7a0;
  uint local_798;
  undefined8 local_790;
  longlong *local_788;
  longlong **local_780 [223];
  longlong **local_88;
  uint local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_888;
  local_850 = (longlong *)(**(code **)(*param_1 + 0xc0))();
  uVar5 = (**(code **)(*local_850 + 0x20))();
  local_7b4.Data1 = 0;
  local_7b4.Data2 = 0;
  local_7b4.Data3 = 0;
  local_7b4.Data4[0] = '\0';
  local_7b4.Data4[1] = '\0';
  local_7b4.Data4[2] = '\0';
  local_7b4.Data4[3] = '\0';
  local_7b4.Data4[4] = '\0';
  local_7b4.Data4[5] = '\0';
  local_7b4.Data4[6] = '\0';
  local_7b4.Data4[7] = '\0';
  CoCreateGuid(&local_7b4);
  plStack_7c0 = (longlong *)0x0;
  local_7d8 = 0;
  plStack_7d0 = (longlong *)0x0;
  local_7b8 = -1;
  local_7a0 = (longlong *)0x0;
  local_798 = 0xffffffff;
  local_7e8 = (void *)0x0;
  uStack_7e0 = 0;
  local_7c8 = param_1;
  uVar6 = FUN_1446e6bbc();
  local_860 = 2;
  local_868 = (longlong *)CONCAT71(local_868._1_7_,1);
  FUN_140021b28(&local_788,uVar6,uVar5,param_1);
  plVar11 = (longlong *)0x0;
  if (0 < (int)local_80) {
    local_858 = param_3;
    do {
      pplVar14 = local_88;
      if (local_88 == (longlong **)0x0) {
        pplVar14 = &local_788;
      }
      plVar10 = (longlong *)param_2[2];
      pplVar13 = (longlong **)pplVar14[(ulonglong)local_80 * 0x1c + -3];
      if ((longlong **)pplVar14[(ulonglong)local_80 * 0x1c + -3] == (longlong **)0x0) {
        pplVar13 = pplVar14 + (ulonglong)local_80 * 0x1c + -0x1b;
      }
      if (plVar10 ==
          pplVar13[(longlong)*(int *)(pplVar14 + (ulonglong)local_80 * 0x1c + -1) * 3 + 1]) {
        if (*param_4 != 0) {
          if (pplVar13[(longlong)*(int *)(pplVar14 + (ulonglong)local_80 * 0x1c + -1) * 3] ==
              (longlong *)0x0) {
            FUN_140056680(&local_7f8,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(pplVar13[(longlong)*(int *)(pplVar14 + (ulonglong)local_80 * 0x1c + -1) *
                                   3] + 4,&local_7f8);
          }
          plVar10 = (longlong *)(ulonglong)(local_7f0 - 1);
          if (local_7f0 == 0) {
            plVar10 = plVar11;
          }
          cVar2 = FUN_1402ca054(*param_4,local_7f8,plVar10);
          if (local_7f8 != 0) {
            FUN_1400020a8();
          }
          if (cVar2 == '\0') goto LAB_146fb84c0;
          plVar10 = (longlong *)param_2[2];
        }
        if (local_88 == (longlong **)0x0) {
          local_88 = &local_788;
        }
        iVar3 = local_80 - 1;
        pplVar14 = (longlong **)local_88[(longlong)iVar3 * 0x1c + 0x19];
        if ((longlong **)local_88[(longlong)iVar3 * 0x1c + 0x19] == (longlong **)0x0) {
          pplVar14 = local_88 + (longlong)iVar3 * 0x1c + 1;
        }
        plVar11 = pplVar14[(longlong)*(int *)(local_88 + (longlong)iVar3 * 0x1c + 0x1b) * 3];
        local_7b8 = (int)plVar10 - (int)param_1;
        local_7a0 = plVar11;
        FUN_1468fed9a(&local_788,&local_7e8);
        param_3 = local_858;
        break;
      }
LAB_146fb84c0:
      FUN_140caedf2(&local_788);
      param_3 = local_858;
    } while (0 < (int)local_80);
  }
  FUN_140021a7a(&local_788);
  local_808 = 0;
  uStack_800 = 0;
  lVar7 = (**(code **)(*plVar11 + 0xe8))(plVar11,plVar11[0xf],param_2[2],(int)param_2[1]);
  plVar11 = local_7a0;
  if (lVar7 == *param_2) {
    if (*param_3 != 0) {
      if (local_7a0[0xf] == 0) {
        FUN_140056680(&local_818,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(local_7a0[0xf] + 0x20,&local_818);
      }
      iVar3 = local_810 + -1;
      if (local_810 == 0) {
        iVar3 = 0;
      }
      cVar2 = FUN_1402ca054(*param_3,local_818,iVar3);
      if (local_818 != 0) {
        FUN_1400020a8();
      }
      if (cVar2 == '\0') goto LAB_146fb88d6;
    }
    plStack_7c0 = (longlong *)plVar11[0xf];
    local_820 = local_780;
    local_828 = &local_788;
    local_788 = plStack_7c0;
    FUN_146fb89f8(&local_808);
  }
  else {
LAB_146fb88d6:
    lVar15 = plVar11[0xf];
    if (lVar15 != 0) {
      lVar12 = *(longlong *)(lVar15 + 8);
      lVar9 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar9 + 8) == 0) {
        bVar16 = lVar12 != 0;
        if (lVar12 != lVar9 && bVar16) {
          do {
            lVar12 = *(longlong *)(lVar12 + 0x30);
            bVar16 = lVar12 != 0;
            if (lVar12 == lVar9) break;
          } while (lVar12 != 0);
        }
        if (!bVar16) goto LAB_146fb862e;
      }
      else if ((*(ulonglong *)(lVar12 + 0x18) & *(ulonglong *)(lVar9 + 8)) == 0) goto LAB_146fb862e;
      local_868 = &local_808;
      plStack_7c0 = (longlong *)FUN_142ac1daf(*(undefined8 *)(lVar15 + 0x70),lVar7,*param_2,param_3)
      ;
      uVar1 = uStack_800;
      lVar7 = (longlong)(int)uStack_800;
      uVar4 = (int)uStack_800 + 1;
      uStack_800 = CONCAT44(uStack_800._4_4_,uVar4);
      if (uStack_800._4_4_ < uVar4) {
        FUN_14000e500(&local_808,uVar1 & 0xffffffff);
      }
      *(longlong *)(local_808 + lVar7 * 8) = lVar15;
    }
  }
LAB_146fb862e:
  uVar1 = uStack_800;
  lVar7 = (longlong)(int)(uint)uStack_7e0;
  if (lVar7 != 0) {
    iVar3 = (int)uStack_800;
    lVar15 = (longlong)(int)uStack_800;
    uStack_800 = CONCAT44(uStack_800._4_4_,(int)uStack_800 + (uint)uStack_7e0);
    if (uStack_800._4_4_ - iVar3 < (uint)uStack_7e0) {
      FUN_14000e500(&local_808,uVar1 & 0xffffffff);
    }
    memcpy((void *)(lVar15 * 8 + local_808),local_7e8,lVar7 << 3);
  }
  local_838[0] = 0;
  local_838[1] = 0;
  (**(code **)(*plStack_7c0 + 0x70))(plStack_7c0,local_848,local_838,0);
  FUN_140474144(&local_788,local_848,local_838);
  iVar3 = (int)local_780[0] + -1;
  if ((int)local_780[0] == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_790,iVar3,local_788,1);
  local_7d8 = local_790;
  if (local_788 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fb805c(&local_788,&local_808,(int)param_2[1]);
  plStack_7d0 = local_788;
  lVar7 = (**(code **)(*plVar11 + 0xe8))(plVar11,plVar11[0xf],param_2[2],(int)param_2[1]);
  local_798 = -(uint)(lVar7 == 0) | (int)*param_2 - (int)lVar7;
  local_788 = (longlong *)&local_7b8;
  local_780[0] = &local_7a0;
  FUN_146fd3d66(param_1 + 0x24,&local_790,&local_788);
  puVar8 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  lVar7 = param_2[1];
  *puVar8 = &PTR_LAB_149faf1c0;
  puVar8[1] = local_7d8;
  puVar8[2] = plStack_7d0;
  puVar8[3] = local_7c8;
  puVar8[4] = plStack_7c0;
  *(ulong *)(puVar8 + 5) = local_7b4.Data1;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = local_7b4._4_4_;
  *(undefined4 *)(puVar8 + 6) = local_7b4.Data4._0_4_;
  *(undefined4 *)((longlong)puVar8 + 0x34) = local_7b4.Data4._4_4_;
  puVar8[7] = 0;
  *(int *)(puVar8 + 8) = local_7b8;
  *(undefined2 *)((longlong)puVar8 + 0x44) = 1;
  FUN_1461d1208(puVar8);
  puVar8[9] = 0;
  *puVar8 = &PTR_FUN_149faf890;
  *(int *)(puVar8 + 10) = (int)lVar7;
  *(uint *)((longlong)puVar8 + 0x54) = local_798;
  puVar8[0xb] = local_7a0;
  (**(code **)(*param_1 + 0x88))(param_1,puVar8);
  if (local_848[0] != 0) {
    FUN_1400020a8();
  }
  if (local_838[0] != 0) {
    FUN_1400020a8();
  }
  if (local_808 != 0) {
    FUN_1400020a8();
  }
  if (local_7e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_850 != (longlong *)0x0) {
    (**(code **)(*local_850 + 0x50))(local_850,1);
  }
  if ((local_60 ^ (ulonglong)auStack_888) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 146fb89f8 FUN_146fb89f8 body=109 status=ok
// SIG undefined FUN_146fb89f8(void)

undefined8 * FUN_146fb89f8(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 3;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1456e48f6(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x20000000) >> 0x1d & 0xfffffffffffffff8);
    }
  }
  return param_1;
}



// FUNCTION 146fb8a66 FUN_146fb8a66 body=243 status=ok
// SIG undefined FUN_146fb8a66(void)

undefined8 FUN_146fb8a66(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uchar auVar1 [8];
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  GUID local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulong local_54;
  ushort uStack_50;
  ushort uStack_4e;
  uchar auStack_4c [4];
  uchar auStack_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xc0))();
  local_88.Data1 = 0;
  local_88.Data2 = 0;
  local_88.Data3 = 0;
  local_88.Data4[0] = '\0';
  local_88.Data4[1] = '\0';
  local_88.Data4[2] = '\0';
  local_88.Data4[3] = '\0';
  local_88.Data4[4] = '\0';
  local_88.Data4[5] = '\0';
  local_88.Data4[6] = '\0';
  local_88.Data4[7] = '\0';
  CoCreateGuid(&local_88);
  auVar1 = local_88.Data4;
  uVar3 = local_88._0_8_;
  local_54 = local_88.Data1;
  uStack_50 = local_88.Data2;
  uStack_4e = local_88.Data3;
  auStack_4c[0] = local_88.Data4[0];
  auStack_4c[1] = local_88.Data4[1];
  auStack_4c[2] = local_88.Data4[2];
  auStack_4c[3] = local_88.Data4[3];
  auStack_48[0] = local_88.Data4[4];
  auStack_48[1] = local_88.Data4[5];
  auStack_48[2] = local_88.Data4[6];
  auStack_48[3] = local_88.Data4[7];
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_98 = &local_78;
  local_88._0_8_ = uVar3;
  local_88.Data4 = auVar1;
  FUN_146fb80e8(param_1,plVar2,*param_2,param_3);
  uVar3 = FUN_14001cc68(0x78,0x10);
  FUN_1461d10aa(uVar3,&local_78);
  (**(code **)(*param_1 + 0x90))(param_1,uVar3);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb8b5a FUN_146fb8b5a body=10 status=ok
// SIG undefined FUN_146fb8b5a(void)

undefined1 FUN_146fb8b5a(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xc9) = 1;
  return 1;
}



// FUNCTION 146fb8b64 FUN_146fb8b64 body=212 status=ok
// SIG undefined FUN_146fb8b64(void)

undefined8 * FUN_146fb8b64(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  void *local_48;
  int local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_1414c23f2();
  (**(code **)(*param_1 + 8))(param_1,&local_78);
  uVar1 = FUN_146fd49b2(uVar1,local_78);
  FUN_141733c8e(local_70,uVar1);
  _Src = local_48;
  *param_2 = 0;
  *(int *)(param_2 + 1) = local_40;
  if ((longlong)local_40 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,local_40,0);
    memcpy((void *)*param_2,_Src,(longlong)local_40 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb8c3a FUN_146fb8c3a body=519 status=ok
// SIG undefined FUN_146fb8c3a(void)

void FUN_146fb8c3a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_b8 [32];
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
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar12 = (int)param_2[5];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = param_2;
  if ((iStack_5c == iVar12) && (uStack_68 == plVar1)) {
LAB_146fb8cc8:
    if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_146fb8d04:
  lVar2 = *local_98 + (longlong)iStack_7c * 0x30;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *(longlong *)(*local_98 + (longlong)iStack_7c * 0x30);
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar13 = (uint)lVar3 & 0xffff;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    iVar14 = *(int *)((longlong)plVar11 +
                     (ulonglong)
                     ((int)param_1[9] - 1U &
                     (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar13) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar14 != -1) {
      lVar4 = *param_1;
      iVar16 = iVar14;
      do {
        if (*(longlong *)(lVar4 + (longlong)iVar16 * 0x30) == lVar3) {
          goto LAB_146fb8dfd;
        }
        iVar16 = *(int *)((longlong)iVar16 * 0x30 + lVar4 + 0x28);
      } while (iVar16 != -1);
    }
  }
  uStack_68 = (longlong *)(lVar2 + 8);
  local_70 = lVar2;
  FUN_1415ac986(param_1,local_4c,&local_70,0);
  goto LAB_146fb8d3e;
  while (iVar14 = *(int *)(lVar15 + 0x28), iVar14 != -1) {
LAB_146fb8dfd:
    lVar15 = lVar4 + (longlong)iVar14 * 0x30;
    if (*(longlong *)(lVar4 + (longlong)iVar14 * 0x30) == lVar3) goto LAB_146fb8e1f;
  }
  lVar15 = 0;
LAB_146fb8e1f:
  uVar6 = *(undefined4 *)(lVar2 + 8);
  uVar7 = *(undefined4 *)(lVar2 + 0xc);
  uVar8 = *(undefined4 *)(lVar2 + 0x10);
  uVar9 = *(undefined4 *)(lVar2 + 0x14);
  uVar10 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar15 + 0x20) = uVar10;
  *(undefined4 *)(lVar15 + 8) = uVar6;
  *(undefined4 *)(lVar15 + 0xc) = uVar7;
  *(undefined4 *)(lVar15 + 0x10) = uVar8;
  *(undefined4 *)(lVar15 + 0x14) = uVar9;
LAB_146fb8d3e:
  local_80 = local_80 & ~uStack_8c;
  FUN_1449c0562(&local_90);
  if (local_98 == param_2 &&
      ((longlong *)CONCAT44(uStack_84,uStack_88) == plVar1 && iStack_7c == iVar12))
  goto LAB_146fb8cc8;
  goto LAB_146fb8d04;
}



// FUNCTION 146fb8e44 FUN_146fb8e44 body=29 status=ok
// SIG undefined FUN_146fb8e44(void)

undefined8 FUN_146fb8e44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb8e78 FUN_146fb8e78 body=38 status=ok
// SIG undefined FUN_146fb8e78(void)

undefined8 FUN_146fb8e78(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb8e9e FUN_146fb8e9e body=38 status=ok
// SIG undefined FUN_146fb8e9e(void)

undefined8 FUN_146fb8e9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowReRouteNode",1);
  return param_2;
}



// FUNCTION 146fb8ec4 FUN_146fb8ec4 body=38 status=ok
// SIG undefined FUN_146fb8ec4(void)

undefined8 FUN_146fb8ec4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ReRouteNode",1);
  return param_2;
}



// FUNCTION 146fb8eea FUN_146fb8eea body=38 status=ok
// SIG undefined FUN_146fb8eea(void)

undefined8 FUN_146fb8eea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149e3b481,1);
  return param_2;
}



// FUNCTION 146fb8f10 FUN_146fb8f10 body=32 status=ok
// SIG undefined FUN_146fb8f10(void)

undefined8 FUN_146fb8f10(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fb8f30 FUN_146fb8f30 body=26 status=ok
// SIG undefined FUN_146fb8f30(void)

undefined8 FUN_146fb8f30(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x108))();
  return param_2;
}



// FUNCTION 146fb8f6c FUN_146fb8f6c body=198 status=ok
// SIG undefined FUN_146fb8f6c(void)

longlong * FUN_146fb8f6c(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x48))(param_1,&local_30);
  if (((((char)local_30 == DAT_14c99d080) && (CONCAT44(uStack_28,uStack_2c) == DAT_14c99d084)) &&
      (CONCAT44(uStack_20,uStack_24) == DAT_14c99d08c)) && ((char)uStack_1c == DAT_14c99d094)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_38 = CONCAT44(uStack_1c,uStack_20);
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_146fc9cde(param_2,1,0);
    puVar1 = (undefined4 *)*param_2;
    *(undefined8 *)(puVar1 + 4) = local_38;
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fb9052 FUN_146fb9052 body=23 status=ok
// SIG undefined FUN_146fb9052(void)

undefined8 FUN_146fb9052(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x60))();
  return param_2;
}



// FUNCTION 146fb907a FUN_146fb907a body=123 status=ok
// SIG undefined FUN_146fb907a(void)

void FUN_146fb907a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c898 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c898 = FUN_140002ddd(FUN_146290261,uVar1,L"DataflowReRouteNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c898,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fb90f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fb90f6 FUN_146fb90f6 body=93 status=ok
// SIG undefined FUN_146fb90f6(void)

void FUN_146fb90f6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c898 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c898 = FUN_140002ddd(FUN_146290261,uVar2,L"DataflowReRouteNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c898,param_1);
  return;
}



// FUNCTION 146fb9154 FUN_146fb9154 body=55 status=ok
// SIG undefined FUN_146fb9154(void)

void FUN_146fb9154(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c898 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c898 = FUN_140002ddd(FUN_146290261,uVar1,L"DataflowReRouteNode");
  }
  return;
}



// FUNCTION 146fb918e FUN_146fb918e body=233 status=ok
// SIG undefined FUN_146fb918e(void)

ulonglong FUN_146fb918e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowReRouteNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fb9228;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fb9228;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fb9228;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fb9228:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fb9282 FUN_146fb9282 body=38 status=ok
// SIG undefined FUN_146fb9282(void)

undefined8 FUN_146fb9282(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb92a8 FUN_146fb92a8 body=38 status=ok
// SIG undefined FUN_146fb92a8(void)

undefined8 FUN_146fb92a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowBranchNode",1);
  return param_2;
}



// FUNCTION 146fb92ce FUN_146fb92ce body=38 status=ok
// SIG undefined FUN_146fb92ce(void)

undefined8 FUN_146fb92ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Branch",1);
  return param_2;
}



// FUNCTION 146fb92f4 FUN_146fb92f4 body=38 status=ok
// SIG undefined FUN_146fb92f4(void)

undefined8 FUN_146fb92f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FlowControl",1);
  return param_2;
}



// FUNCTION 146fb931a FUN_146fb931a body=32 status=ok
// SIG undefined FUN_146fb931a(void)

undefined8 FUN_146fb931a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fb933a FUN_146fb933a body=123 status=ok
// SIG undefined FUN_146fb933a(void)

void FUN_146fb933a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c8b0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c8b0 = FUN_140002ddd(FUN_1462902f7,uVar1,L"DataflowBranchNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c8b0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fb93b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fb93b6 FUN_146fb93b6 body=93 status=ok
// SIG undefined FUN_146fb93b6(void)

void FUN_146fb93b6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c8b0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c8b0 = FUN_140002ddd(FUN_1462902f7,uVar2,L"DataflowBranchNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c8b0,param_1);
  return;
}



// FUNCTION 146fb9414 FUN_146fb9414 body=55 status=ok
// SIG undefined FUN_146fb9414(void)

void FUN_146fb9414(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c8b0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c8b0 = FUN_140002ddd(FUN_1462902f7,uVar1,L"DataflowBranchNode");
  }
  return;
}



// FUNCTION 146fb944c FUN_146fb944c body=233 status=ok
// SIG undefined FUN_146fb944c(void)

ulonglong FUN_146fb944c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowBranchNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fb94e6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fb94e6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fb94e6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fb94e6:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fb9536 FUN_146fb9536 body=68 status=ok
// SIG undefined FUN_146fb9536(void)

undefined8 * FUN_146fb9536(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149faf440;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb957a FUN_146fb957a body=38 status=ok
// SIG undefined FUN_146fb957a(void)

undefined8 FUN_146fb957a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowSelectNode",1);
  return param_2;
}



// FUNCTION 146fb95a0 FUN_146fb95a0 body=38 status=ok
// SIG undefined FUN_146fb95a0(void)

undefined8 FUN_146fb95a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Select",1);
  return param_2;
}



// FUNCTION 146fb95c6 FUN_146fb95c6 body=38 status=ok
// SIG undefined FUN_146fb95c6(void)

undefined8 FUN_146fb95c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FlowControl",1);
  return param_2;
}



// FUNCTION 146fb95ec FUN_146fb95ec body=32 status=ok
// SIG undefined FUN_146fb95ec(void)

undefined8 FUN_146fb95ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fb961c FUN_146fb961c body=123 status=ok
// SIG undefined FUN_146fb961c(void)

void FUN_146fb961c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c8c8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c8c8 = FUN_140002ddd(FUN_14629038d,uVar1,L"DataflowSelectNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c8c8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fb9694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fb9698 FUN_146fb9698 body=93 status=ok
// SIG undefined FUN_146fb9698(void)

void FUN_146fb9698(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c8c8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c8c8 = FUN_140002ddd(FUN_14629038d,uVar2,L"DataflowSelectNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c8c8,param_1);
  return;
}



// FUNCTION 146fb96f6 FUN_146fb96f6 body=55 status=ok
// SIG undefined FUN_146fb96f6(void)

void FUN_146fb96f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c8c8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c8c8 = FUN_140002ddd(FUN_14629038d,uVar1,L"DataflowSelectNode");
  }
  return;
}



// FUNCTION 146fb972e FUN_146fb972e body=233 status=ok
// SIG undefined FUN_146fb972e(void)

ulonglong FUN_146fb972e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowSelectNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fb97c8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fb97c8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fb97c8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fb97c8:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fb9818 FUN_146fb9818 body=68 status=ok
// SIG undefined FUN_146fb9818(void)

undefined8 * FUN_146fb9818(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149faf550;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb985c FUN_146fb985c body=38 status=ok
// SIG undefined FUN_146fb985c(void)

undefined8 FUN_146fb985c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowPrintNode",1);
  return param_2;
}



// FUNCTION 146fb9882 FUN_146fb9882 body=38 status=ok
// SIG undefined FUN_146fb9882(void)

undefined8 FUN_146fb9882(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Print",1);
  return param_2;
}



// FUNCTION 146fb98a8 FUN_146fb98a8 body=38 status=ok
// SIG undefined FUN_146fb98a8(void)

undefined8 FUN_146fb98a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149e3b481,1);
  return param_2;
}



// FUNCTION 146fb98ce FUN_146fb98ce body=32 status=ok
// SIG undefined FUN_146fb98ce(void)

undefined8 FUN_146fb98ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fb98ee FUN_146fb98ee body=123 status=ok
// SIG undefined FUN_146fb98ee(void)

void FUN_146fb98ee(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c8e0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c8e0 = FUN_140002ddd(FUN_146290423,uVar1,L"DataflowPrintNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c8e0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fb9966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fb996a FUN_146fb996a body=93 status=ok
// SIG undefined FUN_146fb996a(void)

void FUN_146fb996a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c8e0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c8e0 = FUN_140002ddd(FUN_146290423,uVar2,L"DataflowPrintNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c8e0,param_1);
  return;
}



// FUNCTION 146fb99c8 FUN_146fb99c8 body=55 status=ok
// SIG undefined FUN_146fb99c8(void)

void FUN_146fb99c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c8e0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c8e0 = FUN_140002ddd(FUN_146290423,uVar1,L"DataflowPrintNode");
  }
  return;
}



// FUNCTION 146fb9a00 FUN_146fb9a00 body=233 status=ok
// SIG undefined FUN_146fb9a00(void)

ulonglong FUN_146fb9a00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowPrintNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fb9a9a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fb9a9a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fb9a9a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fb9a9a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fb9af2 FUN_146fb9af2 body=29 status=ok
// SIG undefined FUN_146fb9af2(void)

undefined8 FUN_146fb9af2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb9b10 FUN_146fb9b10 body=29 status=ok
// SIG undefined FUN_146fb9b10(void)

undefined8 FUN_146fb9b10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb9b36 FUN_146fb9b36 body=38 status=ok
// SIG undefined FUN_146fb9b36(void)

undefined8 FUN_146fb9b36(undefined8 param_1,int param_2)

{
  FUN_146fb57f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb9b68 FUN_146fb9b68 body=51 status=ok
// SIG undefined FUN_146fb9b68(void)

undefined8 FUN_146fb9b68(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar1 = (longlong *)FUN_146fb5ff6(*(longlong *)(param_1 + 0x18),param_1 + 0x5c);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fb9b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146fb9b9c FUN_146fb9b9c body=38 status=ok
// SIG undefined FUN_146fb9b9c(void)

undefined8 FUN_146fb9b9c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb9bc2 FUN_146fb9bc2 body=38 status=ok
// SIG undefined FUN_146fb9bc2(void)

undefined8 FUN_146fb9bc2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowNode",1);
  return param_2;
}



// FUNCTION 146fb9be8 FUN_146fb9be8 body=38 status=ok
// SIG undefined FUN_146fb9be8(void)

undefined8 FUN_146fb9be8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149e02088,1);
  return param_2;
}



// FUNCTION 146fb9c0e FUN_146fb9c0e body=38 status=ok
// SIG undefined FUN_146fb9c0e(void)

undefined8 FUN_146fb9c0e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149e02088,1);
  return param_2;
}



// FUNCTION 146fb9c34 FUN_146fb9c34 body=32 status=ok
// SIG undefined FUN_146fb9c34(void)

undefined8 FUN_146fb9c34(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fb9c5e FUN_146fb9c5e body=201 status=ok
// SIG undefined FUN_146fb9c5e(void)

ulonglong FUN_146fb9c5e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_2;
  FUN_1400021e4(&local_28,&local_38);
  FUN_1446ddc76(local_50,"FDataflowNode",1);
  FUN_1400021e4(local_50,&local_48);
  uVar3 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_30 == local_40) {
    uVar2 = CONCAT71(uVar3,1);
    if (1 < local_30) {
      iVar1 = wcscmp(local_38,local_48);
      uVar2 = CONCAT71(uVar3,iVar1 == 0);
    }
  }
  else {
    uVar2 = CONCAT71(uVar3,local_40 + local_30 == 1);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 146fb9d2c FUN_146fb9d2c body=38 status=ok
// SIG undefined FUN_146fb9d2c(void)

undefined8 FUN_146fb9d2c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb9d56 FUN_146fb9d56 body=38 status=ok
// SIG undefined FUN_146fb9d56(void)

undefined8 FUN_146fb9d56(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fb9d7c FUN_146fb9d7c body=38 status=ok
// SIG undefined FUN_146fb9d7c(void)

undefined8 FUN_146fb9d7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathAddNode",1);
  return param_2;
}



// FUNCTION 146fb9da2 FUN_146fb9da2 body=38 status=ok
// SIG undefined FUN_146fb9da2(void)

undefined8 FUN_146fb9da2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149ebc865,1);
  return param_2;
}



// FUNCTION 146fb9dc8 FUN_146fb9dc8 body=38 status=ok
// SIG undefined FUN_146fb9dc8(void)

undefined8 FUN_146fb9dc8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fb9dee FUN_146fb9dee body=32 status=ok
// SIG undefined FUN_146fb9dee(void)

undefined8 FUN_146fb9dee(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fb9e0e FUN_146fb9e0e body=123 status=ok
// SIG undefined FUN_146fb9e0e(void)

void FUN_146fb9e0e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c928 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c928 = FUN_140002ddd(FUN_1462905b9,uVar1,L"DataflowMathAddNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c928,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fb9e86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fb9e8a FUN_146fb9e8a body=93 status=ok
// SIG undefined FUN_146fb9e8a(void)

void FUN_146fb9e8a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c928 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c928 = FUN_140002ddd(FUN_1462905b9,uVar2,L"DataflowMathAddNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c928,param_1);
  return;
}



// FUNCTION 146fb9ee8 FUN_146fb9ee8 body=55 status=ok
// SIG undefined FUN_146fb9ee8(void)

void FUN_146fb9ee8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c928 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c928 = FUN_140002ddd(FUN_1462905b9,uVar1,L"DataflowMathAddNode");
  }
  return;
}



// FUNCTION 146fb9f20 FUN_146fb9f20 body=233 status=ok
// SIG undefined FUN_146fb9f20(void)

ulonglong FUN_146fb9f20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowMathAddNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fb9fba;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fb9fba;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fb9fba;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fb9fba:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fba00a FUN_146fba00a body=38 status=ok
// SIG undefined FUN_146fba00a(void)

undefined8 FUN_146fba00a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fba030 FUN_146fba030 body=38 status=ok
// SIG undefined FUN_146fba030(void)

undefined8 FUN_146fba030(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathSubtractNode",1);
  return param_2;
}



// FUNCTION 146fba056 FUN_146fba056 body=38 status=ok
// SIG undefined FUN_146fba056(void)

undefined8 FUN_146fba056(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Subtract",1);
  return param_2;
}



// FUNCTION 146fba07c FUN_146fba07c body=38 status=ok
// SIG undefined FUN_146fba07c(void)

undefined8 FUN_146fba07c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fba0a2 FUN_146fba0a2 body=32 status=ok
// SIG undefined FUN_146fba0a2(void)

undefined8 FUN_146fba0a2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fba0c2 FUN_146fba0c2 body=123 status=ok
// SIG undefined FUN_146fba0c2(void)

void FUN_146fba0c2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c940 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c940 = FUN_140002ddd(FUN_14629064f,uVar1,L"DataflowMathSubtractNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c940,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fba13a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fba13e FUN_146fba13e body=93 status=ok
// SIG undefined FUN_146fba13e(void)

void FUN_146fba13e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c940 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c940 = FUN_140002ddd(FUN_14629064f,uVar2,L"DataflowMathSubtractNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c940,param_1);
  return;
}



// FUNCTION 146fba19c FUN_146fba19c body=55 status=ok
// SIG undefined FUN_146fba19c(void)

void FUN_146fba19c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c940 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c940 = FUN_140002ddd(FUN_14629064f,uVar1,L"DataflowMathSubtractNode");
  }
  return;
}



// FUNCTION 146fba1d4 FUN_146fba1d4 body=233 status=ok
// SIG undefined FUN_146fba1d4(void)

ulonglong FUN_146fba1d4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowMathSubtractNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fba26e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fba26e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fba26e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fba26e:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fba2be FUN_146fba2be body=38 status=ok
// SIG undefined FUN_146fba2be(void)

undefined8 FUN_146fba2be(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fba2e4 FUN_146fba2e4 body=38 status=ok
// SIG undefined FUN_146fba2e4(void)

undefined8 FUN_146fba2e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathMultiplyNode",1);
  return param_2;
}



// FUNCTION 146fba30a FUN_146fba30a body=38 status=ok
// SIG undefined FUN_146fba30a(void)

undefined8 FUN_146fba30a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Multiply",1);
  return param_2;
}



// FUNCTION 146fba330 FUN_146fba330 body=38 status=ok
// SIG undefined FUN_146fba330(void)

undefined8 FUN_146fba330(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fba356 FUN_146fba356 body=32 status=ok
// SIG undefined FUN_146fba356(void)

undefined8 FUN_146fba356(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fba376 FUN_146fba376 body=123 status=ok
// SIG undefined FUN_146fba376(void)

void FUN_146fba376(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c958 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c958 = FUN_140002ddd(FUN_1462906e5,uVar1,L"DataflowMathMultiplyNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c958,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fba3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fba3f2 FUN_146fba3f2 body=93 status=ok
// SIG undefined FUN_146fba3f2(void)

void FUN_146fba3f2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c958 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c958 = FUN_140002ddd(FUN_1462906e5,uVar2,L"DataflowMathMultiplyNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c958,param_1);
  return;
}



// FUNCTION 146fba450 FUN_146fba450 body=55 status=ok
// SIG undefined FUN_146fba450(void)

void FUN_146fba450(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c958 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c958 = FUN_140002ddd(FUN_1462906e5,uVar1,L"DataflowMathMultiplyNode");
  }
  return;
}



// FUNCTION 146fba488 FUN_146fba488 body=233 status=ok
// SIG undefined FUN_146fba488(void)

ulonglong FUN_146fba488(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowMathMultiplyNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fba522;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fba522;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fba522;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fba522:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fba572 FUN_146fba572 body=38 status=ok
// SIG undefined FUN_146fba572(void)

undefined8 FUN_146fba572(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fba598 FUN_146fba598 body=38 status=ok
// SIG undefined FUN_146fba598(void)

undefined8 FUN_146fba598(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathDivideNode",1);
  return param_2;
}



// FUNCTION 146fba5be FUN_146fba5be body=38 status=ok
// SIG undefined FUN_146fba5be(void)

undefined8 FUN_146fba5be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Divide",1);
  return param_2;
}



// FUNCTION 146fba5e4 FUN_146fba5e4 body=38 status=ok
// SIG undefined FUN_146fba5e4(void)

undefined8 FUN_146fba5e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fba60a FUN_146fba60a body=32 status=ok
// SIG undefined FUN_146fba60a(void)

undefined8 FUN_146fba60a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fba62a FUN_146fba62a body=123 status=ok
// SIG undefined FUN_146fba62a(void)

void FUN_146fba62a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c970 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c970 = FUN_140002ddd(FUN_14629077b,uVar1,L"DataflowMathDivideNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c970,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fba6a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fba6a6 FUN_146fba6a6 body=93 status=ok
// SIG undefined FUN_146fba6a6(void)

void FUN_146fba6a6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c970 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c970 = FUN_140002ddd(FUN_14629077b,uVar2,L"DataflowMathDivideNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c970,param_1);
  return;
}



// FUNCTION 146fba704 FUN_146fba704 body=55 status=ok
// SIG undefined FUN_146fba704(void)

void FUN_146fba704(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c970 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c970 = FUN_140002ddd(FUN_14629077b,uVar1,L"DataflowMathDivideNode");
  }
  return;
}



// FUNCTION 146fba73c FUN_146fba73c body=233 status=ok
// SIG undefined FUN_146fba73c(void)

ulonglong FUN_146fba73c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowMathDivideNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fba7d6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fba7d6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fba7d6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fba7d6:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fba826 FUN_146fba826 body=38 status=ok
// SIG undefined FUN_146fba826(void)

undefined8 FUN_146fba826(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fba84c FUN_146fba84c body=38 status=ok
// SIG undefined FUN_146fba84c(void)

undefined8 FUN_146fba84c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathMinimumNode",1);
  return param_2;
}



// FUNCTION 146fba872 FUN_146fba872 body=38 status=ok
// SIG undefined FUN_146fba872(void)

undefined8 FUN_146fba872(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Minimum",1);
  return param_2;
}



// FUNCTION 146fba898 FUN_146fba898 body=38 status=ok
// SIG undefined FUN_146fba898(void)

undefined8 FUN_146fba898(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fba8be FUN_146fba8be body=32 status=ok
// SIG undefined FUN_146fba8be(void)

undefined8 FUN_146fba8be(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fba8de FUN_146fba8de body=123 status=ok
// SIG undefined FUN_146fba8de(void)

void FUN_146fba8de(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c988 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c988 = FUN_140002ddd(FUN_146290811,uVar1,L"DataflowMathMinimumNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c988,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fba956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fba95a FUN_146fba95a body=93 status=ok
// SIG undefined FUN_146fba95a(void)

void FUN_146fba95a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c988 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c988 = FUN_140002ddd(FUN_146290811,uVar2,L"DataflowMathMinimumNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c988,param_1);
  return;
}



// FUNCTION 146fba9b8 FUN_146fba9b8 body=55 status=ok
// SIG undefined FUN_146fba9b8(void)

void FUN_146fba9b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c988 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c988 = FUN_140002ddd(FUN_146290811,uVar1,L"DataflowMathMinimumNode");
  }
  return;
}



// FUNCTION 146fba9f0 FUN_146fba9f0 body=233 status=ok
// SIG undefined FUN_146fba9f0(void)

ulonglong FUN_146fba9f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowMathMinimumNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbaa8a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbaa8a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbaa8a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbaa8a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fbaada FUN_146fbaada body=38 status=ok
// SIG undefined FUN_146fbaada(void)

undefined8 FUN_146fbaada(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbab00 FUN_146fbab00 body=38 status=ok
// SIG undefined FUN_146fbab00(void)

undefined8 FUN_146fbab00(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathMaximumNode",1);
  return param_2;
}



// FUNCTION 146fbab26 FUN_146fbab26 body=38 status=ok
// SIG undefined FUN_146fbab26(void)

undefined8 FUN_146fbab26(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Maximum",1);
  return param_2;
}



// FUNCTION 146fbab4c FUN_146fbab4c body=38 status=ok
// SIG undefined FUN_146fbab4c(void)

undefined8 FUN_146fbab4c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbab72 FUN_146fbab72 body=32 status=ok
// SIG undefined FUN_146fbab72(void)

undefined8 FUN_146fbab72(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbab92 FUN_146fbab92 body=123 status=ok
// SIG undefined FUN_146fbab92(void)

void FUN_146fbab92(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c9a0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c9a0 = FUN_140002ddd(FUN_1462908a7,uVar1,L"DataflowMathMaximumNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c9a0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbac0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbac0e FUN_146fbac0e body=93 status=ok
// SIG undefined FUN_146fbac0e(void)

void FUN_146fbac0e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c9a0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c9a0 = FUN_140002ddd(FUN_1462908a7,uVar2,L"DataflowMathMaximumNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c9a0,param_1);
  return;
}



// FUNCTION 146fbac6c FUN_146fbac6c body=55 status=ok
// SIG undefined FUN_146fbac6c(void)

void FUN_146fbac6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c9a0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c9a0 = FUN_140002ddd(FUN_1462908a7,uVar1,L"DataflowMathMaximumNode");
  }
  return;
}



// FUNCTION 146fbaca4 FUN_146fbaca4 body=233 status=ok
// SIG undefined FUN_146fbaca4(void)

ulonglong FUN_146fbaca4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowMathMaximumNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbad3e;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbad3e;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbad3e;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbad3e:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fbad8e FUN_146fbad8e body=38 status=ok
// SIG undefined FUN_146fbad8e(void)

undefined8 FUN_146fbad8e(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbadb4 FUN_146fbadb4 body=38 status=ok
// SIG undefined FUN_146fbadb4(void)

undefined8 FUN_146fbadb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathReciprocalNode",1);
  return param_2;
}



// FUNCTION 146fbadda FUN_146fbadda body=38 status=ok
// SIG undefined FUN_146fbadda(void)

undefined8 FUN_146fbadda(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Reciprocal",1);
  return param_2;
}



// FUNCTION 146fbae00 FUN_146fbae00 body=38 status=ok
// SIG undefined FUN_146fbae00(void)

undefined8 FUN_146fbae00(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbae26 FUN_146fbae26 body=32 status=ok
// SIG undefined FUN_146fbae26(void)

undefined8 FUN_146fbae26(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbae46 FUN_146fbae46 body=123 status=ok
// SIG undefined FUN_146fbae46(void)

void FUN_146fbae46(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c9b8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c9b8 = FUN_140002ddd(FUN_14629093d,uVar1,L"DataflowMathReciprocalNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c9b8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbaebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbaec2 FUN_146fbaec2 body=93 status=ok
// SIG undefined FUN_146fbaec2(void)

void FUN_146fbaec2(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c9b8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c9b8 = FUN_140002ddd(FUN_14629093d,uVar2,L"DataflowMathReciprocalNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c9b8,param_1);
  return;
}



// FUNCTION 146fbaf20 FUN_146fbaf20 body=55 status=ok
// SIG undefined FUN_146fbaf20(void)

void FUN_146fbaf20(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c9b8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c9b8 = FUN_140002ddd(FUN_14629093d,uVar1,L"DataflowMathReciprocalNode");
  }
  return;
}



// FUNCTION 146fbaf58 FUN_146fbaf58 body=233 status=ok
// SIG undefined FUN_146fbaf58(void)

ulonglong FUN_146fbaf58(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowMathReciprocalNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbaff2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbaff2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbaff2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbaff2:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fbb042 FUN_146fbb042 body=38 status=ok
// SIG undefined FUN_146fbb042(void)

undefined8 FUN_146fbb042(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fbb068 FUN_146fbb068 body=38 status=ok
// SIG undefined FUN_146fbb068(void)

undefined8 FUN_146fbb068(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowMathSquareNode",1);
  return param_2;
}



// FUNCTION 146fbb08e FUN_146fbb08e body=38 status=ok
// SIG undefined FUN_146fbb08e(void)

undefined8 FUN_146fbb08e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Square",1);
  return param_2;
}



// FUNCTION 146fbb0b4 FUN_146fbb0b4 body=38 status=ok
// SIG undefined FUN_146fbb0b4(void)

undefined8 FUN_146fbb0b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Scalar",1);
  return param_2;
}



// FUNCTION 146fbb0da FUN_146fbb0da body=32 status=ok
// SIG undefined FUN_146fbb0da(void)

undefined8 FUN_146fbb0da(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fbb0fa FUN_146fbb0fa body=123 status=ok
// SIG undefined FUN_146fbb0fa(void)

void FUN_146fbb0fa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99c9d0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c9d0 = FUN_140002ddd(FUN_1462909d3,uVar1,L"DataflowMathSquareNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99c9d0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fbb172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fbb176 FUN_146fbb176 body=93 status=ok
// SIG undefined FUN_146fbb176(void)

void FUN_146fbb176(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99c9d0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99c9d0 = FUN_140002ddd(FUN_1462909d3,uVar2,L"DataflowMathSquareNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99c9d0,param_1);
  return;
}



// FUNCTION 146fbb1d4 FUN_146fbb1d4 body=55 status=ok
// SIG undefined FUN_146fbb1d4(void)

void FUN_146fbb1d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c9d0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99c9d0 = FUN_140002ddd(FUN_1462909d3,uVar1,L"DataflowMathSquareNode");
  }
  return;
}



// FUNCTION 146fbb20c FUN_146fbb20c body=233 status=ok
// SIG undefined FUN_146fbb20c(void)

ulonglong FUN_146fbb20c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowMathSquareNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fbb2a6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fbb2a6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fbb2a6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fbb2a6:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}


