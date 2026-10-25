// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147392658 FUN_147392658 body=168 status=ok
// SIG undefined FUN_147392658(void)

undefined8 * FUN_147392658(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 147392700 FUN_147392700 body=147 status=ok
// SIG undefined FUN_147392700(void)

void FUN_147392700(longlong param_1,int param_2)

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



// FUNCTION 147392794 FUN_147392794 body=152 status=ok
// SIG undefined FUN_147392794(void)

void FUN_147392794(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x20) == *param_3) {
          if (lVar1 != 0) goto LAB_147392811;
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_18 = param_3;
  FUN_14739282e(param_1,local_c,param_2);
LAB_147392811:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739282e FUN_14739282e body=277 status=ok
// SIG undefined FUN_14739282e(void)

undefined4 * FUN_14739282e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147392944(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147392a2a(param_1,param_3,local_40,local_48);
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
      FUN_147392b3e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147392944 FUN_147392944 body=229 status=ok
// SIG undefined FUN_147392944(void)

int * FUN_147392944(longlong *param_1,int *param_2)

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



// FUNCTION 147392a2a FUN_147392a2a body=161 status=ok
// SIG undefined FUN_147392a2a(void)

undefined8 FUN_147392a2a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147392acc(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147392acc FUN_147392acc body=114 status=ok
// SIG undefined FUN_147392acc(void)

void FUN_147392acc(longlong *param_1,int param_2)

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



// FUNCTION 147392b3e FUN_147392b3e body=476 status=ok
// SIG undefined FUN_147392b3e(void)

void FUN_147392b3e(longlong *param_1)

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



// FUNCTION 147392d1c FUN_147392d1c body=152 status=ok
// SIG undefined FUN_147392d1c(void)

void FUN_147392d1c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x20) == *param_3) {
          if (lVar1 != 0) goto LAB_147392d99;
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_18 = param_3;
  FUN_147392db6(param_1,local_c,param_2);
LAB_147392d99:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147392db6 FUN_147392db6 body=286 status=ok
// SIG undefined FUN_147392db6(void)

undefined4 * FUN_147392db6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147392ed6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_147391feb(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147392fbc(param_1,param_3,local_40,local_48);
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
      FUN_1473930dc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147392ed6 FUN_147392ed6 body=229 status=ok
// SIG undefined FUN_147392ed6(void)

int * FUN_147392ed6(longlong *param_1,int *param_2)

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



// FUNCTION 147392fbc FUN_147392fbc body=174 status=ok
// SIG undefined FUN_147392fbc(void)

undefined8 FUN_147392fbc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147391feb(*(undefined8 *)(puVar1 + 2),puVar1[4]);
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
          FUN_14739306a(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14739306a FUN_14739306a body=114 status=ok
// SIG undefined FUN_14739306a(void)

void FUN_14739306a(longlong *param_1,int param_2)

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



// FUNCTION 1473930dc FUN_1473930dc body=476 status=ok
// SIG undefined FUN_1473930dc(void)

void FUN_1473930dc(longlong *param_1)

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



// FUNCTION 1473932ba FUN_1473932ba body=181 status=ok
// SIG undefined FUN_1473932ba(void)

longlong FUN_1473932ba(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_147393352;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147393370(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147393352:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147393370 FUN_147393370 body=277 status=ok
// SIG undefined FUN_147393370(void)

undefined4 * FUN_147393370(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147393486(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_14739356c(param_1,param_3,local_40,local_48);
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
      FUN_1473922a0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147393486 FUN_147393486 body=229 status=ok
// SIG undefined FUN_147393486(void)

int * FUN_147393486(longlong *param_1,int *param_2)

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



// FUNCTION 14739356c FUN_14739356c body=191 status=ok
// SIG undefined FUN_14739356c(void)

undefined8 FUN_14739356c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14739362c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14739362c FUN_14739362c body=114 status=ok
// SIG undefined FUN_14739362c(void)

void FUN_14739362c(longlong *param_1,int param_2)

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



// FUNCTION 14739369e FUN_14739369e body=130 status=ok
// SIG undefined FUN_14739369e(void)

void FUN_14739369e(longlong param_1,int param_2)

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



// FUNCTION 147393722 FUN_147393722 body=158 status=ok
// SIG undefined FUN_147393722(void)

void FUN_147393722(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*plVar1 == *param_3) {
          if (plVar1 != (longlong *)0x0) goto LAB_1473937a5;
          break;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  local_20 = param_3;
  local_18 = param_4;
  FUN_1473937c2(param_1,local_c,param_2,&local_20);
LAB_1473937a5:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473937c2 FUN_1473937c2 body=281 status=ok
// SIG undefined FUN_1473937c2(void)

undefined4 * FUN_1473937c2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
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
  FUN_1473938dc(param_1,local_48);
  puVar1 = (undefined8 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_1473939c2(param_1,param_3,local_40,local_48);
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
      FUN_1473920c6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473938dc FUN_1473938dc body=230 status=ok
// SIG undefined FUN_1473938dc(void)

int * FUN_1473938dc(longlong *param_1,int *param_2)

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



// FUNCTION 1473939c2 FUN_1473939c2 body=128 status=ok
// SIG undefined FUN_1473939c2(void)

undefined8 FUN_1473939c2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147393a42((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147393a42 FUN_147393a42 body=114 status=ok
// SIG undefined FUN_147393a42(void)

void FUN_147393a42(longlong *param_1,int param_2)

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



// FUNCTION 147393ab4 FUN_147393ab4 body=372 status=ok
// SIG undefined FUN_147393ab4(void)

undefined4 * FUN_147393ab4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1469eb0a4(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_38 = uVar9;
  plVar2 = (longlong *)*plVar1;
  local_38[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
    uVar9 = *local_38;
  }
  *(int *)(local_38 + 2) = (int)plVar1[1];
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar5 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar5) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_1469eb18a(param_1,uVar8,local_38);
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1469eb2d0(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147393c2a FUN_147393c2a body=340 status=ok
// SIG undefined FUN_147393c2a(void)

undefined4 * FUN_147393c2a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147393d80(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_147393f1c(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147393e62(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x34) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
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
      FUN_14739247e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147393d80 FUN_147393d80 body=226 status=ok
// SIG undefined FUN_147393d80(void)

int * FUN_147393d80(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 147393e62 FUN_147393e62 body=185 status=ok
// SIG undefined FUN_147393e62(void)

undefined8 FUN_147393e62(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
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
          FUN_147393fc6(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = puVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 147393f1c FUN_147393f1c body=170 status=ok
// SIG undefined FUN_147393f1c(void)

undefined8 * FUN_147393f1c(undefined8 *param_1,undefined8 *param_2)

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
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 147393fc6 FUN_147393fc6 body=116 status=ok
// SIG undefined FUN_147393fc6(void)

void FUN_147393fc6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 14739403a FUN_14739403a body=29 status=ok
// SIG undefined FUN_14739403a(void)

undefined8 FUN_14739403a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147394074 FUN_147394074 body=93 status=ok
// SIG undefined FUN_147394074(void)

void FUN_147394074(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a356380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473940d2 FUN_1473940d2 body=93 status=ok
// SIG undefined FUN_1473940d2(void)

void FUN_1473940d2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a356380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147394130 FUN_147394130 body=126 status=ok
// SIG undefined FUN_147394130(void)

void FUN_147394130(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a356380;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014739419f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1473941ba FUN_1473941ba body=21 status=ok
// SIG undefined FUN_1473941ba(void)

undefined8 FUN_1473941ba(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1473941d0 FUN_1473941d0 body=230 status=ok
// SIG undefined FUN_1473941d0(void)

undefined8 * FUN_1473941d0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1473942b8 FUN_1473942b8 body=29 status=ok
// SIG undefined FUN_1473942b8(void)

undefined8 FUN_1473942b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473942fe FUN_1473942fe body=93 status=ok
// SIG undefined FUN_1473942fe(void)

void FUN_1473942fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a356460;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3563f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14739435c FUN_14739435c body=93 status=ok
// SIG undefined FUN_14739435c(void)

void FUN_14739435c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a356460;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3563f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1473943ba FUN_1473943ba body=126 status=ok
// SIG undefined FUN_1473943ba(void)

void FUN_1473943ba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a356460;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3563f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147394429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147394446 FUN_147394446 body=21 status=ok
// SIG undefined FUN_147394446(void)

undefined8 FUN_147394446(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14739445e FUN_14739445e body=120 status=ok
// SIG undefined FUN_14739445e(void)

void FUN_14739445e(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar1 = (undefined4 *)FUN_1473966f4(param_1 + 8);
    *puVar1 = 0x3b9f9490;
    *(undefined8 *)(puVar1 + 1) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 5) = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
  }
  lVar2 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  if ((param_2 & 0xffff7540) != 0) {
    *(ulonglong *)(lVar2 + 0x18) = *(ulonglong *)(lVar2 + 0x18) | (ulonglong)param_2;
    *(ulonglong *)(lVar2 + 0x28) = *(ulonglong *)(lVar2 + 0x28) | (ulonglong)param_3;
  }
  *(ulonglong *)(lVar2 + 0x10) = *(ulonglong *)(lVar2 + 0x10) | (ulonglong)param_4;
  *(ulonglong *)(lVar2 + 0x20) = *(ulonglong *)(lVar2 + 0x20) | (ulonglong)param_5;
  return;
}



// FUNCTION 1473944d6 FUN_1473944d6 body=54 status=ok
// SIG undefined FUN_1473944d6(void)

longlong FUN_1473944d6(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14739d396(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x50 + *param_1;
}



// FUNCTION 14739450c FUN_14739450c body=77 status=ok
// SIG undefined FUN_14739450c(void)

longlong FUN_14739450c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
    FUN_14739d42a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar2 = param_1;
  }
  return (longlong)iVar1 * 0x60 + lVar2;
}



// FUNCTION 14739455a FUN_14739455a body=70 status=ok
// SIG undefined FUN_14739455a(void)

longlong FUN_14739455a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_14739d4cc(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x10 + lVar2;
  FUN_14739d4bf(lVar2);
  return lVar2;
}



// FUNCTION 1473945b6 FUN_1473945b6 body=85 status=ok
// SIG undefined FUN_1473945b6(void)

void FUN_1473945b6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14739460c FUN_14739460c body=381 status=ok
// SIG undefined FUN_14739460c(void)

void FUN_14739460c(longlong *param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar5 = param_1[4];
  if ((((int)lVar5 != 0) || ((int)param_1[6] != 0)) || ((int)param_1[8] != 0)) {
    if (param_2 == '\x02') {
      *(uint *)((longlong)param_1 + 0xc) =
           *(uint *)((longlong)param_1 + 0xc) &
           *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x120) + 0x1a78) + 0x58);
    }
    if (param_3 == '\x02') {
      lVar9 = *param_1;
      uVar10 = *(uint *)(param_1 + 2) &
               *(uint *)(*(longlong *)(*(longlong *)(lVar9 + 0x120) + 0x1a78) + 0x58);
      *(uint *)(param_1 + 2) = uVar10;
    }
    else {
      uVar10 = *(uint *)(param_1 + 2);
      lVar9 = *param_1;
    }
    pcVar8 = DAT_14ca79290;
    lVar2 = param_1[7];
    lVar6 = param_1[8];
    lVar3 = param_1[5];
    lVar7 = param_1[6];
    lVar4 = param_1[3];
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    lVar9 = *(longlong *)(lVar9 + 0x150);
    if (*(longlong *)(lVar9 + 0x80) != 0) {
      FUN_14739859c(lVar9,0,0);
    }
    (*pcVar8)(*(undefined8 *)(*(longlong *)(lVar9 + 0x78) + 0x88),uVar1,uVar10,0,(int)lVar5,lVar4,
              (int)lVar7,lVar3,(int)lVar6,lVar2);
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)((longlong)param_1 + 0x24) < 0) {
      FUN_14739d54a(param_1 + 3,0);
    }
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) < 0) {
      FUN_14739d5ba(param_1 + 5,0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) < 0) {
      FUN_14739d626(param_1 + 7,0);
    }
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14739478a FUN_14739478a body=426 status=ok
// SIG undefined FUN_14739478a(void)

void FUN_14739478a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar6 = *(int *)(param_2 + 0x40);
  iVar9 = *(int *)(param_1 + 0x20) + iVar6;
  if (-1 < iVar9) {
    if (*(int *)(param_1 + 0x24) < iVar9) {
      FUN_14739d54a(param_1 + 0x18);
      iVar6 = *(int *)(param_2 + 0x40);
    }
    puVar1 = (uint *)(param_1 + 0x10);
    puVar2 = (uint *)(param_1 + 0xc);
    lVar11 = param_2 + 8;
    if (*(longlong *)(param_2 + 0x38) != 0) {
      lVar11 = *(longlong *)(param_2 + 0x38);
    }
    if (iVar6 != 0) {
      lVar10 = 0;
      do {
        puVar7 = (undefined4 *)FUN_14739d696(param_1 + 0x18);
        *puVar7 = 0x2e;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(lVar11 + 8 + lVar10);
        puVar7[4] = *(undefined4 *)(lVar11 + 0x18 + lVar10);
        puVar7[5] = *(undefined4 *)(lVar11 + 0x28 + lVar10);
        *puVar2 = *puVar2 | *(uint *)(lVar11 + 0x10 + lVar10);
        *puVar1 = *puVar1 | *(uint *)(lVar11 + 0x20 + lVar10);
        lVar10 = lVar10 + 0x30;
      } while ((longlong)iVar6 * 0x30 != lVar10);
    }
    FUN_14318e81f(param_1 + 0x28,param_2 + 0x118,puVar2,puVar1);
    iVar6 = *(int *)(param_2 + 0x110);
    iVar9 = *(int *)(param_1 + 0x40) + iVar6;
    if (-1 < iVar9) {
      if (*(int *)(param_1 + 0x44) < iVar9) {
        FUN_14739d626(param_1 + 0x38);
        iVar6 = *(int *)(param_2 + 0x110);
      }
      lVar11 = param_2 + 0x48;
      if (*(longlong *)(param_2 + 0x108) != 0) {
        lVar11 = *(longlong *)(param_2 + 0x108);
      }
      if (iVar6 != 0) {
        lVar10 = 0;
        do {
          puVar8 = (undefined4 *)FUN_14739c14c(param_1 + 0x38);
          *puVar8 = 0x2d;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(lVar11 + 8 + lVar10);
          puVar8[4] = *(undefined4 *)(lVar11 + 0x18 + lVar10);
          puVar8[5] = *(undefined4 *)(lVar11 + 0x28 + lVar10);
          puVar8[6] = *(undefined4 *)(lVar11 + 0x30 + lVar10);
          puVar8[7] = *(undefined4 *)(lVar11 + 0x34 + lVar10);
          puVar8[8] = *(undefined4 *)(lVar11 + 0x38 + lVar10);
          puVar8[9] = *(undefined4 *)(lVar11 + 0x3c + lVar10);
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(lVar11 + 0x40 + lVar10);
          puVar8[0x10] = *(undefined4 *)(lVar11 + 0x58 + lVar10);
          puVar7 = (undefined4 *)(lVar11 + 0x48 + lVar10);
          uVar3 = puVar7[1];
          uVar4 = puVar7[2];
          uVar5 = puVar7[3];
          puVar8[0xc] = *puVar7;
          puVar8[0xd] = uVar3;
          puVar8[0xe] = uVar4;
          puVar8[0xf] = uVar5;
          *puVar2 = *puVar2 | *(uint *)(lVar11 + 0x10 + lVar10);
          *puVar1 = *puVar1 | *(uint *)(lVar11 + 0x20 + lVar10);
          lVar10 = lVar10 + 0x60;
        } while ((longlong)iVar6 * 0x60 != lVar10);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 147394936 FUN_147394936 body=1615 status=ok
// SIG undefined FUN_147394936(void)

void FUN_147394936(longlong *param_1,int param_2,longlong *param_3,uint param_4,char param_5)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_128 [36];
  uint local_104;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  uint local_dc;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [6];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar12 = *(longlong *)(*param_1 + 0x150);
  local_104 = param_4;
  if (*(longlong *)(lVar12 + 0x80) != 0) {
    FUN_14739859c(lVar12,0,0);
  }
  lVar21 = *(longlong *)(lVar12 + 0x78) + 0x108;
  lVar12 = (longlong)param_2 * 9;
  local_c8 = (longlong)param_2 * 0x48;
  puVar15 = (undefined8 *)(param_1[7] + local_c8);
  local_f0 = *param_3;
  piVar9 = (int *)FUN_147394f86(lVar21,local_f0,1,0);
  local_68 = *piVar9;
  iStack_64 = piVar9[1];
  iStack_60 = piVar9[2];
  iStack_5c = piVar9[3];
  local_58 = (void *)0x0;
  iVar7 = piVar9[6];
  _Src = *(void **)(piVar9 + 4);
  local_50 = iVar7;
  if ((longlong)iVar7 == 0) {
    local_4c = 0;
  }
  else {
    FUN_14739c0ea(&local_58,iVar7,0);
    memcpy(local_58,_Src,(longlong)iVar7 << 2);
  }
  iVar7 = iStack_5c;
  lVar10 = local_f0;
  local_e8 = param_1 + 7;
  uVar5 = *(uint *)(local_f0 + 0x100);
  local_f8 = param_1;
  if (((uVar5 & 6) == 0) || (uVar19 = *(uint *)(puVar15 + 6), uVar5 == uVar19)) {
    if ((*(int *)(puVar15 + 3) == 0) && ((char)param_3[1] == '\0')) {
      if (local_50 == 0) {
        *(int *)(puVar15 + 3) = iStack_5c;
        uVar4 = FUN_14318e8f3(iStack_5c);
        *(undefined4 *)(puVar15 + 2) = uVar4;
        uVar5 = FUN_14318e999(iVar7);
        *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | uVar5;
      }
      else {
        iVar7 = *(int *)((longlong)puVar15 + 0x1c);
        local_b8 = *(undefined8 *)(local_f0 + 0x98);
        puVar16 = local_b0;
        for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        uVar17 = (ulonglong)local_7c;
        iVar13 = iStack_64 - local_74;
        if (local_70 != -1) {
          iVar13 = local_70;
        }
        local_104 = iVar13 + local_74;
        uVar5 = local_68 - local_7c;
        if (local_78 != 0xffffffff) {
          uVar5 = local_78;
        }
        local_d8 = (ulonglong)uVar5;
        local_100 = lVar21;
        local_d0 = lVar12;
        if (local_74 < local_104) {
          local_dc = uVar5 + local_7c;
          uVar5 = local_74;
          local_c0 = uVar17;
          do {
            if ((uint)uVar17 < local_dc) {
              uVar20 = local_d8 & 0xffffffff;
              uVar14 = uVar17 & 0xffffffff;
              puVar15 = (undefined8 *)0x0;
              do {
                piVar11 = &iStack_5c;
                iVar13 = (int)uVar14;
                piVar9 = piVar11;
                if (local_50 != 0) {
                  piVar9 = (int *)((longlong)(int)(local_68 * uVar5 + iVar13) * 4 +
                                  (longlong)local_58);
                }
                iVar8 = *piVar9;
                if ((local_80 & 6) != 0) {
                  iVar2 = iVar8;
                  if (iStack_60 != 1) {
                    if (local_50 != 0) {
                      piVar11 = (int *)((longlong)(int)((iStack_64 + uVar5) * local_68 + iVar13) * 4
                                       + (longlong)local_58);
                    }
                    iVar2 = *piVar11;
                  }
                  iVar8 = FUN_1473952d6(iVar8,iVar2);
                }
                if ((puVar15 == (undefined8 *)0x0) || (*(int *)(puVar15 + 3) != iVar8)) {
                  if (iVar8 != iVar7) {
                    uVar19 = FUN_14318e999(iVar8);
                    *(uint *)((longlong)local_f8 + 0xc) =
                         *(uint *)((longlong)local_f8 + 0xc) | uVar19;
                    puVar15 = (undefined8 *)FUN_14739c14c(local_e8);
                    puVar16 = local_b0;
                    puVar18 = puVar15;
                    for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
                      *puVar18 = *puVar16;
                      puVar16 = puVar16 + 1;
                      puVar18 = puVar18 + 1;
                    }
                    uVar4 = FUN_14318e8f3(iVar8);
                    *(undefined4 *)(puVar15 + 2) = uVar4;
                    *(int *)(puVar15 + 3) = iVar8;
                    iVar8 = iVar7;
                    if ((local_80 & 6) != 0) {
                      iVar8 = FUN_1473952d6(iVar7,iVar7);
                    }
                    *(int *)((longlong)puVar15 + 0x1c) = iVar8;
                    puVar15[5] = local_b8;
                    *(int *)((longlong)puVar15 + 0x34) = iVar13;
                    *(undefined4 *)(puVar15 + 7) = 1;
                    *(uint *)((longlong)puVar15 + 0x3c) = uVar5;
                    *(undefined4 *)(puVar15 + 8) = 1;
                    uVar17 = local_c0;
                  }
                }
                else {
                  *(int *)(puVar15 + 7) = *(int *)(puVar15 + 7) + 1;
                }
                uVar14 = (ulonglong)(iVar13 + 1);
                uVar19 = (int)uVar20 - 1;
                uVar20 = (ulonglong)uVar19;
              } while (uVar19 != 0);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != local_104);
        }
        FUN_147395160(&local_68,iVar7,&local_80);
        puVar15 = (undefined8 *)(local_c8 + *local_e8);
        param_1 = local_f8;
        lVar12 = local_d0;
        lVar10 = local_f0;
        lVar21 = local_100;
      }
    }
    uVar4 = *(undefined4 *)((longlong)puVar15 + 0x1c);
    if ((*(byte *)(lVar10 + 0x100) & 6) != 0) {
      uVar6 = FUN_1473952d6(*(undefined4 *)(puVar15 + 3),*(undefined4 *)(puVar15 + 3));
      *(undefined4 *)(puVar15 + 3) = uVar6;
      uVar6 = FUN_1473952d6(*(undefined4 *)((longlong)puVar15 + 0x1c),
                            *(undefined4 *)((longlong)puVar15 + 0x1c));
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar6;
    }
    uVar5 = FUN_14318e999(*(undefined4 *)(param_1[7] + 0x1c + lVar12 * 8));
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | uVar5;
    if ((param_5 == '\0') && (*(int *)(puVar15 + 3) == *(int *)((longlong)puVar15 + 0x1c))) {
      plVar1 = param_1 + 3;
      if ((int)param_1[4] == 0) {
        *(undefined4 *)(param_1 + 4) = 1;
        if (*(int *)((longlong)param_1 + 0x24) == 0) {
          FUN_14739d6cc(plVar1,0);
        }
        puVar3 = (undefined4 *)*plVar1;
        *puVar3 = 0x2e;
        *(undefined8 *)(puVar3 + 1) = 0;
        *(undefined8 *)(puVar3 + 3) = 0;
        puVar3[5] = 0;
      }
      *(uint *)(*plVar1 + 0x10) = *(uint *)(*plVar1 + 0x10) | *(uint *)(puVar15 + 2);
      *(uint *)(*plVar1 + 0x14) = *(uint *)(*plVar1 + 0x14) | *(uint *)((longlong)puVar15 + 0x14);
    }
    FUN_147395160(&local_68,uVar4,puVar15 + 6);
  }
  else {
    if ((*(int *)(puVar15 + 3) == 0) && ((char)param_3[1] == '\0')) {
      if (local_50 == 0) {
        piVar9 = &iStack_5c;
      }
      else {
        iVar7 = iStack_60 + -1;
        if (uVar19 != 4) {
          iVar7 = 0;
        }
        iVar13 = *(int *)((longlong)puVar15 + 0x3c);
        if (*(int *)((longlong)puVar15 + 0x3c) == -1) {
          iVar13 = 0;
        }
        piVar9 = (int *)((longlong)
                         ((iVar7 * iStack_64 + iVar13) * local_68 +
                         *(int *)((longlong)puVar15 + 0x34)) * 4 + (longlong)local_58);
      }
      *(int *)(puVar15 + 3) = *piVar9;
      uVar5 = *(uint *)(local_f0 + 0x100);
    }
    uVar5 = uVar5 ^ uVar19;
    if (local_50 == 0) {
      piVar9 = &iStack_5c;
    }
    else {
      iVar7 = iStack_60 + -1;
      if (uVar5 != 4) {
        iVar7 = 0;
      }
      iVar13 = *(int *)((longlong)puVar15 + 0x3c);
      if (*(int *)((longlong)puVar15 + 0x3c) == -1) {
        iVar13 = 0;
      }
      piVar9 = (int *)((longlong)
                       ((iVar7 * iStack_64 + iVar13) * local_68 + *(int *)((longlong)puVar15 + 0x34)
                       ) * 4 + (longlong)local_58);
    }
    iVar7 = *piVar9;
    iVar13 = iVar7;
    local_100 = lVar21;
    if (0 < (int)local_104) {
      lVar12 = 0;
      do {
        if ((*(longlong *)(*(longlong *)((longlong)param_3 + lVar12) + 0x98) == puVar15[5]) &&
           (*(uint *)(*local_e8 + 0x30 + (longlong)param_2 * 0x48) == uVar5)) {
          lVar10 = *local_e8 + (longlong)param_2 * 0x48;
          iVar13 = *(int *)(lVar10 + 0x1c);
          if ((*(int *)(lVar10 + 0x18) != 0) ||
             (*(char *)((longlong)param_3 + lVar12 + 8) == '\x01')) {
            iVar7 = *(int *)(lVar10 + 0x18);
          }
          FUN_147395160(&local_68,iVar13,(undefined4 *)(lVar10 + 0x30));
          *(undefined4 *)(lVar10 + 0x30) = 0;
          break;
        }
        lVar12 = lVar12 + 0x10;
        param_2 = param_2 + 1;
      } while ((ulonglong)local_104 << 4 != lVar12);
    }
    FUN_147395160(&local_68,*(undefined4 *)((longlong)puVar15 + 0x1c),puVar15 + 6);
    if (uVar5 == 4) {
      uVar4 = FUN_1473952d6(*(undefined4 *)(puVar15 + 3),iVar7);
      *(undefined4 *)(puVar15 + 3) = uVar4;
      iVar8 = *(int *)((longlong)puVar15 + 0x1c);
      iVar7 = iVar13;
    }
    else {
      uVar4 = FUN_1473952d6(iVar7);
      *(undefined4 *)(puVar15 + 3) = uVar4;
      iVar7 = *(int *)((longlong)puVar15 + 0x1c);
      iVar8 = iVar13;
    }
    uVar4 = FUN_1473952d6(iVar8,iVar7);
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar4;
    *(uint *)(puVar15 + 6) = *(uint *)(puVar15 + 6) | uVar5;
    lVar10 = local_f0;
    lVar21 = local_100;
  }
  FUN_14739c216(lVar21,*(undefined8 *)(lVar10 + 0x98),&local_68);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147394f86 FUN_147394f86 body=472 status=ok
// SIG undefined FUN_147394f86(void)

longlong FUN_147394f86(longlong *param_1,longlong *param_2,char param_3,undefined4 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_2[0x13];
    uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      do {
        lVar7 = *param_1 + (longlong)iVar3 * 0x30;
        if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x30) == uVar1) {
          if (lVar7 != 0) {
            lVar7 = lVar7 + 8;
            goto LAB_147394fd4;
          }
          break;
        }
        iVar3 = *(int *)(lVar7 + 0x28);
      } while (iVar3 != -1);
    }
  }
  if ((param_1[0xb] == 0) || (lVar7 = FUN_147394f86(param_1[0xb],param_2,0,0), lVar7 == 0)) {
    if (param_3 == '\0') {
      lVar7 = 0;
    }
    else {
      lVar7 = param_2[0x20];
      uVar4 = FUN_14739b90c(param_2);
      lVar6 = (**(code **)(*param_2 + 8))(param_2);
      local_48 = &local_70;
      local_70 = (longlong *)CONCAT44(uVar4,(uint)*(byte *)(lVar6 + 0x30));
      local_68 = CONCAT44(param_4,((int)lVar7 == 6) + 1);
      local_60 = 0;
      uStack_58 = 0;
      local_50 = param_2 + 0x13;
      FUN_14739bf6e(param_1,&local_3c,&local_50,0);
      lVar7 = *param_1;
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + (longlong)local_3c * 0x30 + 8;
    }
  }
  else {
    local_70 = param_2 + 0x13;
    local_68 = lVar7;
    FUN_14739b978(param_1,&local_50,&local_70,0);
    lVar7 = (longlong)(int)local_50 * 0x30 + *param_1 + 8;
  }
LAB_147394fd4:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 147395160 FUN_147395160 body=374 status=ok
// SIG undefined FUN_147395160(void)

void FUN_147395160(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*param_3 == 4) {
    uVar9 = param_1[2];
    uVar11 = uVar9 - 1;
  }
  else {
    uVar9 = 1;
    uVar11 = 0;
    if ((*param_3 & 4) != 0) {
      uVar9 = param_1[2];
    }
  }
  uVar1 = param_3[3];
  uVar10 = param_3[4];
  if (uVar10 == 0xffffffff) {
    uVar10 = param_1[1] - uVar1;
  }
  uVar2 = param_3[1];
  uVar6 = param_3[2];
  if (uVar6 == 0xffffffff) {
    uVar6 = *param_1 - uVar2;
  }
  if ((((uVar11 == 0) && (uVar9 == param_1[2])) && (uVar1 == 0)) &&
     (((uVar10 == param_1[1] && (uVar2 == 0)) && (uVar6 == *param_1)))) {
    param_1[3] = param_2;
    if (-1 < (int)param_1[7]) {
      param_1[6] = 0;
      return;
    }
    param_1[6] = 0;
    FUN_14739dfd0(param_1 + 4);
    return;
  }
  if (param_1[6] == 0) {
    iVar7 = param_1[1] * param_1[2] * *param_1;
    FUN_14739728c(param_1 + 4,iVar7);
    if (iVar7 != 0) {
      uVar4 = param_1[3];
      iVar3 = 0;
      do {
        *(uint *)(*(longlong *)(param_1 + 4) + (longlong)iVar3 * 4) = uVar4;
        iVar3 = iVar3 + 1;
      } while (iVar7 != iVar3);
    }
  }
  if (uVar11 < uVar9) {
    do {
      uVar4 = uVar1;
      if (uVar1 < uVar10 + uVar1) {
        do {
          uVar5 = uVar6;
          uVar8 = uVar2;
          if (uVar2 < uVar6 + uVar2) {
            do {
              *(uint *)(*(longlong *)(param_1 + 4) +
                       (longlong)(int)((param_1[1] * uVar11 + uVar4) * *param_1 + uVar8) * 4) =
                   param_2;
              uVar8 = uVar8 + 1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar10 + uVar1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  FUN_14739723e(param_1);
  return;
}



// FUNCTION 1473952d6 FUN_1473952d6 body=204 status=ok
// SIG undefined FUN_1473952d6(void)

int FUN_1473952d6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = 6;
  if ((param_2 != 6 && param_1 != 6) && (iVar1 = 7, param_2 != 7 && param_1 != 7)) {
    if (param_2 == 0 && param_1 == 0) {
      return 0;
    }
    iVar1 = 5;
    if (param_2 != 5 || param_1 != 5) {
      if ((((1 < param_1 - 3U) && (1 < param_1 + 0xc4636cf8U)) && (1 < param_2 - 3U)) &&
         (1 < param_2 + 0xc4636cf8U)) {
        if (param_1 == 0x3b9f9490) {
          iVar2 = 4;
          iVar1 = 0x3b9c9308;
          if (param_2 == 0) {
            iVar1 = 4;
          }
          bVar3 = param_2 == 0x3b9f9490;
        }
        else {
          if (param_1 != 0x3b9f9491) {
            return (param_2 != 0x3b9f9491) + 3;
          }
          iVar2 = 3;
          iVar1 = 0x3b9c9309;
          if (param_2 == 0) {
            iVar1 = 3;
          }
          bVar3 = param_2 == 0x3b9f9491;
        }
        if (bVar3) {
          iVar1 = iVar2;
        }
        return iVar1;
      }
      return param_1;
    }
  }
  return iVar1;
}



// FUNCTION 1473953a2 FUN_1473953a2 body=336 status=ok
// SIG undefined FUN_1473953a2(void)

void FUN_1473953a2(longlong *param_1,char param_2,char param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == '\x02') {
    if (param_4 < (int)param_1[6]) {
      lVar2 = (longlong)param_4;
      lVar3 = lVar2 * 0x50 + 0x18;
      do {
        lVar1 = param_1[5];
        *(ulonglong *)(lVar1 + -8 + lVar3) =
             (ulonglong)
             (*(uint *)(lVar1 + -8 + lVar3) &
             *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x120) + 0x1a78) + 0x58));
        *(ulonglong *)(lVar1 + lVar3) = *(ulonglong *)(lVar1 + lVar3) & 0x60;
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x50;
      } while (lVar2 < (int)param_1[6]);
    }
    if (param_5 < (int)param_1[8]) {
      lVar2 = (longlong)param_5;
      lVar3 = lVar2 * 0x60 + 0x18;
      do {
        lVar1 = param_1[7];
        *(ulonglong *)(lVar1 + -8 + lVar3) =
             (ulonglong)
             (*(uint *)(lVar1 + -8 + lVar3) &
             *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x120) + 0x1a78) + 0x58));
        *(ulonglong *)(lVar1 + lVar3) = *(ulonglong *)(lVar1 + lVar3) & 0x60;
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x60;
      } while (lVar2 < (int)param_1[8]);
    }
  }
  if (param_3 == '\x02') {
    if (param_4 < (int)param_1[6]) {
      lVar2 = (longlong)param_4;
      lVar3 = lVar2 * 0x50 + 0x28;
      do {
        lVar1 = param_1[5];
        *(ulonglong *)(lVar1 + -8 + lVar3) =
             (ulonglong)
             (*(uint *)(lVar1 + -8 + lVar3) &
             *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x120) + 0x1a78) + 0x58));
        *(ulonglong *)(lVar1 + lVar3) = *(ulonglong *)(lVar1 + lVar3) & 0x60;
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x50;
      } while (lVar2 < (int)param_1[6]);
    }
    if (param_5 < (int)param_1[8]) {
      lVar2 = (longlong)param_5;
      lVar3 = lVar2 * 0x60 + 0x28;
      do {
        lVar1 = param_1[7];
        *(ulonglong *)(lVar1 + -8 + lVar3) =
             (ulonglong)
             (*(uint *)(lVar1 + -8 + lVar3) &
             *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x120) + 0x1a78) + 0x58));
        *(ulonglong *)(lVar1 + lVar3) = *(ulonglong *)(lVar1 + lVar3) & 0x60;
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x60;
      } while (lVar2 < (int)param_1[8]);
    }
  }
  return;
}



// FUNCTION 1473954f2 FUN_1473954f2 body=640 status=ok
// SIG undefined FUN_1473954f2(void)

void FUN_1473954f2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [2];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  longlong lStack_a0;
  uint local_98;
  longlong lStack_90;
  uint local_88;
  longlong lStack_80;
  undefined4 local_78 [2];
  undefined8 uStack_70;
  undefined4 local_68;
  int iStack_64;
  longlong lStack_60;
  int local_58;
  longlong lStack_50;
  int local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  pcVar4 = DAT_14ca78df0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar6 = (int)param_1[4];
  iVar7 = (int)param_1[6];
  iVar1 = (int)param_1[8];
  if ((iVar7 != 0 || iVar6 != 0) || (iVar7 = 0, iVar1 != 0)) {
    local_78[0] = 0x3b9f9493;
    uStack_70 = 0;
    local_68 = 0;
    lStack_60 = param_1[3];
    lStack_50 = param_1[5];
    lStack_40 = param_1[7];
    iStack_64 = iVar6;
    local_58 = iVar7;
    local_48 = iVar1;
    if (((int)DAT_14c760c0c < 1) || (iVar7 + iVar6 + iVar1 < (int)DAT_14c760c0c)) {
      lVar2 = *(longlong *)(*param_1 + 0x150);
      if (*(longlong *)(lVar2 + 0x80) != 0) {
        FUN_14739859c(lVar2,0,0);
      }
      (*pcVar4)(*(undefined8 *)(*(longlong *)(lVar2 + 0x78) + 0x88),local_78);
    }
    else {
      local_a8 = 0;
      local_b8[0] = 0x3b9f9493;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_98 = 0;
      local_88 = 0;
      lVar2 = *(longlong *)(*param_1 + 0x150);
      lStack_a0 = lStack_60;
      lStack_90 = lStack_50;
      lStack_80 = lStack_40;
      if (*(longlong *)(lVar2 + 0x80) != 0) {
        uStack_a4 = iVar6;
        FUN_14739859c(lVar2,0,0);
      }
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + 0x88);
      if (0 < iVar6) {
        iVar5 = 0;
        do {
          uStack_a4 = iVar6 - iVar5;
          if ((int)DAT_14c760c0c <= iVar6 - iVar5) {
            uStack_a4 = DAT_14c760c0c;
          }
          (*DAT_14ca78df0)(uVar3,local_b8);
          lStack_a0 = lStack_a0 + (ulonglong)uStack_a4 * 0x30;
          iVar5 = iVar5 + DAT_14c760c0c;
        } while (iVar5 < iVar6);
      }
      lStack_a0 = 0;
      uStack_a4 = 0;
      if (0 < iVar7) {
        iVar6 = 0;
        do {
          local_98 = iVar7 - iVar6;
          if ((int)DAT_14c760c0c <= iVar7 - iVar6) {
            local_98 = DAT_14c760c0c;
          }
          (*DAT_14ca78df0)(uVar3,local_b8);
          lStack_90 = lStack_90 + (ulonglong)local_98 * 0x50;
          iVar6 = iVar6 + DAT_14c760c0c;
        } while (iVar6 < iVar7);
      }
      lStack_90 = 0;
      local_98 = 0;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          local_88 = iVar1 - iVar6;
          if ((int)DAT_14c760c0c <= iVar1 - iVar6) {
            local_88 = DAT_14c760c0c;
          }
          (*DAT_14ca78df0)(uVar3,local_b8);
          lStack_80 = lStack_80 + (ulonglong)local_88 * 0x60;
          iVar6 = iVar6 + DAT_14c760c0c;
        } while (iVar6 < iVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147395774 FUN_147395774 body=112 status=ok
// SIG undefined FUN_147395774(void)

void FUN_147395774(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x38);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14739d822(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x30);
    if (*(void **)((longlong)param_2 + 0x30) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 0x30 + *param_1),_Src,(longlong)(int)uVar1 * 0x30);
    return;
  }
  return;
}



// FUNCTION 1473957e4 FUN_1473957e4 body=104 status=ok
// SIG undefined FUN_1473957e4(void)

void FUN_1473957e4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14739d396(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x50 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x50)
    ;
    return;
  }
  return;
}



// FUNCTION 14739584c FUN_14739584c body=118 status=ok
// SIG undefined FUN_14739584c(void)

void FUN_14739584c(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 200);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14739d8b6(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0xc0);
    if (*(void **)((longlong)param_2 + 0xc0) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 0x60 + *param_1),_Src,(longlong)(int)uVar1 * 0x60);
    return;
  }
  return;
}



// FUNCTION 1473958c2 FUN_1473958c2 body=433 status=ok
// SIG undefined FUN_1473958c2(void)

void FUN_1473958c2(longlong *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  
  if (DAT_14c760c08 != 0) {
    lVar12 = param_1[7];
    lVar10 = (longlong)param_2 * 0x60;
    if ((*(int *)(lVar12 + 0x30 + lVar10) == 0) && (*(char *)(param_3 + 1) == '\0')) {
      lVar2 = *(longlong *)(*param_1 + 0x150);
      if (*(longlong *)(lVar2 + 0x80) != 0) {
        FUN_14739859c(lVar2,0,0);
      }
      piVar4 = (int *)FUN_147394f86(*(longlong *)(lVar2 + 0x78) + 0x108,*param_3,0,0);
      if (piVar4 != (int *)0x0) {
        lVar12 = lVar12 + lVar10;
        if (piVar4[6] == 0) {
          iVar9 = piVar4[3];
          *(int *)(lVar12 + 0x30) = iVar9;
        }
        else {
          uVar3 = 1;
          do {
            if ((uVar3 & *(uint *)(lVar12 + 0x48)) != 0) {
              uVar7 = *(uint *)(lVar12 + 0x54);
              uVar8 = *(int *)(lVar12 + 0x58) + uVar7;
              if (uVar7 < uVar8) {
                uVar1 = *(uint *)(lVar12 + 0x4c);
                do {
                  iVar9 = *(int *)(lVar12 + 0x50);
                  uVar11 = uVar1;
                  if (uVar1 < *(int *)(lVar12 + 0x50) + uVar1) {
                    do {
                      iVar6 = 0;
                      if (uVar3 == 4) {
                        iVar6 = piVar4[2] + -1;
                      }
                      piVar5 = piVar4 + 3;
                      if (piVar4[6] != 0) {
                        piVar5 = (int *)((longlong)
                                         (int)((iVar6 * piVar4[1] + uVar7) * *piVar4 + uVar11) * 4 +
                                        *(longlong *)(piVar4 + 4));
                      }
                      *(int *)(lVar12 + 0x30) = *piVar5;
                      uVar11 = uVar11 + 1;
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 != uVar8);
              }
            }
            bVar13 = uVar3 < 3;
            uVar3 = uVar3 * 2;
          } while (bVar13);
          iVar9 = *(int *)(lVar12 + 0x30);
        }
        uVar3 = FUN_14318e8f3(iVar9);
        *(ulonglong *)(lVar12 + 0x18) = (ulonglong)uVar3;
        uVar3 = FUN_14318e999(iVar9);
        *(ulonglong *)(lVar12 + 0x10) = (ulonglong)uVar3;
      }
    }
  }
  lVar12 = *(longlong *)(*param_1 + 0x150);
  if (*(longlong *)(lVar12 + 0x80) != 0) {
    FUN_14739859c(lVar12,0,0);
  }
  lVar10 = param_1[7] + (longlong)param_2 * 0x60;
  FUN_147395a74(*(longlong *)(lVar12 + 0x78) + 0x108,*param_3,lVar10 + 0x48,
                *(undefined4 *)(lVar10 + 0x34));
  return;
}



// FUNCTION 147395a74 FUN_147395a74 body=466 status=ok
// SIG undefined FUN_147395a74(void)

void FUN_147395a74(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_2[0x13];
    uVar6 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar8 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar7 != -1) {
      do {
        lVar4 = *param_1 + (longlong)iVar7 * 0x30;
        if (*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x30) == uVar1) {
          if (lVar4 != 0) {
            lVar4 = lVar4 + 8;
            goto LAB_147395c3b;
          }
          break;
        }
        iVar7 = *(int *)(lVar4 + 0x28);
      } while (iVar7 != -1);
    }
  }
  cVar2 = FUN_14739c38c(param_2,param_3);
  if (((cVar2 != '\0') && (param_1[0xb] != 0)) &&
     (lVar4 = FUN_147394f86(param_1[0xb],param_2,0,0), lVar4 != 0)) {
    local_70 = (int)lVar4;
    uStack_6c = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_78 = param_2 + 0x13;
    FUN_14739b978(param_1,&local_58,&local_78,0);
    lVar4 = (longlong)(int)local_58 * 0x30 + *param_1 + 8;
    if (lVar4 != 0) {
LAB_147395c3b:
      FUN_147395160(lVar4,param_4,param_3);
      goto LAB_147395be3;
    }
  }
  lVar4 = param_2[0x20];
  uVar3 = FUN_14739b90c(param_2);
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  local_78 = (longlong *)CONCAT44(uVar3,(uint)*(byte *)(lVar5 + 0x30));
  local_70 = ((int)lVar4 == 6) + 1;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  FUN_147395160(&local_78,param_4,param_3);
  local_58 = param_2 + 0x13;
  local_50 = &local_78;
  FUN_14739b978(param_1,local_44,&local_58,0);
  if (CONCAT44(uStack_64,uStack_68) != 0) {
    FUN_1400020a8();
  }
LAB_147395be3:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147395c48 FUN_147395c48 body=284 status=ok
// SIG undefined FUN_147395c48(void)

void FUN_147395c48(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_1;
  if ((~*(ulonglong *)(*(longlong *)(param_1 + 0x120) + 0x20f8) & 0x41004000000) == 0) {
    local_60 = CONCAT31(local_60._1_3_,1);
    local_5c = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_147395d66(&local_68,param_2);
    FUN_14739605a(&local_68);
  }
  else {
    local_60 = CONCAT31(local_60._1_3_,1);
    local_5c = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_147396098(&local_68,param_2);
    FUN_14739635e(&local_68);
  }
  FUN_14318ea46(&local_68,param_2,0);
  if (0 < local_60) {
    local_78 = local_68;
    local_70 = local_60;
    FUN_14318eafa(*(undefined8 *)(param_1 + 0x150));
    FUN_14739639c(*(undefined8 *)(param_1 + 0x150));
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147395d66 FUN_147395d66 body=756 status=ok
// SIG undefined FUN_147395d66(void)

void FUN_147395d66(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  longlong lVar18;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar12 = (longlong *)*param_2;
    plVar2 = plVar12 + (int)param_2[1];
    plVar1 = param_1 + 7;
    lVar11 = DAT_14ca84ab8;
    do {
      pcVar15 = (char *)(-lVar11 & *plVar12 + lVar11);
      cVar3 = *pcVar15;
      cVar4 = pcVar15[1];
      if ((*(char *)(param_1 + 1) != '\x01') || (cVar3 != cVar4)) {
        iVar5 = *(int *)(param_1 + 6);
        lVar18 = (longlong)iVar5;
        uVar6 = *(uint *)(param_1 + 8);
        FUN_147395774(param_1 + 3,pcVar15 + 8);
        FUN_1473957e4(param_1 + 5,pcVar15 + 0x118);
        FUN_14739584c(plVar1,pcVar15 + 0x48);
        lVar11 = (longlong)(int)uVar6;
        if (cVar3 != cVar4) {
          iVar10 = *(int *)(param_1 + 6);
          if (iVar5 < iVar10) {
            lVar13 = lVar18 * 0x50;
            do {
              lVar8 = param_1[5];
              if (*(int *)(lVar8 + 0x30 + lVar13) != *(int *)(lVar8 + 0x34 + lVar13)) {
                *(undefined8 *)(lVar13 + 0x18 + (ulonglong)*(byte *)(param_1 + 1) * 0x10 + lVar8) =
                     0;
                iVar10 = *(int *)(param_1 + 6);
              }
              lVar18 = lVar18 + 1;
              lVar13 = lVar13 + 0x50;
            } while (lVar18 < iVar10);
          }
          iVar10 = *(int *)(param_1 + 8);
          if ((int)uVar6 < iVar10) {
            lVar18 = lVar11 * 0x60;
            lVar13 = lVar11;
            do {
              lVar8 = *plVar1;
              if (*(int *)(lVar8 + 0x38 + lVar18) != *(int *)(lVar8 + 0x3c + lVar18)) {
                *(undefined8 *)(lVar18 + 0x18 + (ulonglong)*(byte *)(param_1 + 1) * 0x10 + lVar8) =
                     0;
                iVar10 = *(int *)(param_1 + 8);
              }
              lVar13 = lVar13 + 1;
              lVar18 = lVar18 + 0x60;
            } while (lVar13 < iVar10);
          }
        }
        if (0 < *(int *)(pcVar15 + 0x158)) {
          lVar13 = lVar11 * 0x60 + 0x48;
          lVar18 = 0;
          lVar11 = 0;
          do {
            pcVar17 = *(char **)(pcVar15 + 0x150);
            if (*(char **)(pcVar15 + 0x150) == (char *)0x0) {
              pcVar17 = pcVar15 + 0x130;
            }
            plVar7 = *(longlong **)(pcVar17 + lVar18);
            lVar8 = param_1[7];
            if (*(char *)(param_1 + 1) == '\0') {
              (**(code **)(*plVar7 + 0x40))(plVar7,*param_1,*(undefined4 *)(lVar8 + -0x14 + lVar13))
              ;
            }
            lVar9 = plVar7[0x13];
            *(longlong *)(lVar8 + -8 + lVar13) = lVar9;
            if ((lVar9 != 0) && (*(int *)(lVar8 + lVar13) != 0)) {
              FUN_1473958c2(param_1,uVar6 + (int)lVar11,pcVar17 + lVar18);
            }
            lVar11 = lVar11 + 1;
            lVar13 = lVar13 + 0x60;
            lVar18 = lVar18 + 0x10;
          } while (lVar11 < *(int *)(pcVar15 + 0x158));
        }
        iVar10 = *(int *)(param_1 + 8);
        uVar16 = uVar6;
        if ((int)uVar6 < iVar10) {
          do {
            lVar11 = *plVar1;
            _Dst = (void *)(lVar11 + (longlong)(int)uVar16 * 0x60);
            if ((*(longlong *)(lVar11 + 0x40 + (longlong)(int)uVar16 * 0x60) == 0) ||
               (*(int *)((longlong)_Dst + 0x48) == 0)) {
              iVar14 = ~uVar16 + iVar10;
              if (iVar14 != 0) {
                if (0 < iVar14) {
                  iVar14 = 1;
                }
                memmove(_Dst,(void *)(lVar11 + (longlong)(iVar10 - iVar14) * 0x60),
                        (longlong)iVar14 * 0x60);
                iVar10 = *(int *)(param_1 + 8);
              }
              *(int *)(param_1 + 8) = iVar10 + -1;
              FUN_14739d9d0(plVar1);
              iVar10 = *(int *)(param_1 + 8);
            }
            else {
              uVar16 = uVar16 + 1;
            }
          } while ((int)uVar16 < iVar10);
        }
        FUN_1473953a2(param_1,*pcVar15,pcVar15[1],iVar5,uVar6);
        lVar11 = DAT_14ca84ab8;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
  }
  FUN_1473954f2(param_1);
  return;
}



// FUNCTION 14739605a FUN_14739605a body=62 status=ok
// SIG undefined FUN_14739605a(void)

void FUN_14739605a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147396098 FUN_147396098 body=710 status=ok
// SIG undefined FUN_147396098(void)

void FUN_147396098(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar10 = (longlong *)*param_2;
    plVar2 = plVar10 + (int)param_2[1];
    plVar1 = param_1 + 7;
    lVar8 = DAT_14ca84ab8;
    do {
      pcVar14 = (char *)(-lVar8 & *plVar10 + lVar8);
      cVar3 = *pcVar14;
      cVar4 = pcVar14[1];
      if ((*(char *)(param_1 + 1) != '\x01') || (cVar3 != cVar4)) {
        iVar11 = *(int *)(param_1 + 6);
        lVar12 = (longlong)iVar11;
        uVar15 = *(uint *)(param_1 + 8);
        FUN_14739478a(param_1,pcVar14);
        lVar8 = (longlong)(int)uVar15;
        if (cVar3 != cVar4) {
          if (iVar11 < *(int *)(param_1 + 6)) {
            lVar9 = lVar12 * 0x38 + 0x1c;
            do {
              lVar5 = param_1[5];
              if (*(int *)(lVar5 + -4 + lVar9) != *(int *)(lVar5 + lVar9)) {
                if (*(char *)(param_1 + 1) == '\x01') {
                  *(undefined4 *)(lVar5 + -8 + lVar9) = 0;
                }
                else {
                  *(undefined4 *)(lVar5 + -0xc + lVar9) = 0;
                }
              }
              lVar12 = lVar12 + 1;
              lVar9 = lVar9 + 0x38;
            } while (lVar12 < *(int *)(param_1 + 6));
          }
          if ((int)uVar15 < *(int *)(param_1 + 8)) {
            lVar12 = lVar8 * 0x48 + 0x24;
            lVar9 = lVar8;
            do {
              lVar5 = *plVar1;
              if (*(int *)(lVar5 + -4 + lVar12) != *(int *)(lVar5 + lVar12)) {
                if (*(char *)(param_1 + 1) == '\x01') {
                  *(undefined4 *)(lVar5 + -0x10 + lVar12) = 0;
                }
                else {
                  *(undefined4 *)(lVar5 + -0x14 + lVar12) = 0;
                }
              }
              lVar9 = lVar9 + 1;
              lVar12 = lVar12 + 0x48;
            } while (lVar9 < *(int *)(param_1 + 8));
          }
        }
        if (0 < *(int *)(pcVar14 + 0x158)) {
          lVar8 = lVar8 * 0x48 + 0x30;
          lVar12 = 0;
          iVar11 = 0;
          lVar9 = 0;
          do {
            pcVar16 = *(char **)(pcVar14 + 0x150);
            if (*(char **)(pcVar14 + 0x150) == (char *)0x0) {
              pcVar16 = pcVar14 + 0x130;
            }
            plVar6 = *(longlong **)(pcVar16 + lVar12);
            lVar5 = param_1[7];
            if (*(char *)(param_1 + 1) == '\0') {
              (**(code **)(*plVar6 + 0x40))(plVar6,*param_1,*(undefined4 *)(lVar5 + -0x14 + lVar8));
            }
            lVar7 = plVar6[0x13];
            *(longlong *)(lVar5 + -8 + lVar8) = lVar7;
            if ((lVar7 != 0) && (*(int *)(lVar5 + lVar8) != 0)) {
              FUN_147394936(param_1,uVar15 + (int)lVar9,pcVar16 + lVar12,
                            *(int *)(pcVar14 + 0x158) + iVar11,cVar3 != cVar4);
            }
            lVar9 = lVar9 + 1;
            iVar11 = iVar11 + -1;
            lVar8 = lVar8 + 0x48;
            lVar12 = lVar12 + 0x10;
          } while (lVar9 < *(int *)(pcVar14 + 0x158));
        }
        iVar11 = *(int *)(param_1 + 8);
        if ((int)uVar15 < iVar11) {
          do {
            _Dst = (void *)(*plVar1 + (longlong)(int)uVar15 * 0x48);
            if ((*(longlong *)((longlong)_Dst + 0x28) == 0) ||
               (*(int *)((longlong)_Dst + 0x30) == 0)) {
              iVar13 = ~uVar15 + iVar11;
              if (iVar13 != 0) {
                if (0 < iVar13) {
                  iVar13 = 1;
                }
                memmove(_Dst,(void *)(*plVar1 + (longlong)(iVar11 - iVar13) * 0x48),
                        (longlong)iVar13 * 0x48);
                iVar11 = *(int *)(param_1 + 8);
              }
              *(int *)(param_1 + 8) = iVar11 + -1;
              FUN_14739da7e(plVar1);
              iVar11 = *(int *)(param_1 + 8);
            }
            else {
              uVar15 = uVar15 + 1;
            }
          } while ((int)uVar15 < iVar11);
        }
        FUN_14739460c(param_1,*pcVar14,pcVar14[1]);
        lVar8 = DAT_14ca84ab8;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
  }
  return;
}



// FUNCTION 14739635e FUN_14739635e body=62 status=ok
// SIG undefined FUN_14739635e(void)

void FUN_14739635e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14739639c FUN_14739639c body=171 status=ok
// SIG undefined FUN_14739639c(void)

void FUN_14739639c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (DAT_14ca77b70 != 0) {
    uVar1 = FUN_14001cc68(0x28,0x10);
    FUN_1473a911e(uVar1,*param_1);
    param_1[0x13] = uVar1;
  }
  if (0 < *(int *)(param_1 + 4)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1[3] + lVar3 * 8);
      FUN_147399452(lVar2);
      if (((*(byte *)(lVar2 + 0x75) & 0x20) == 0) &&
         ((*(char *)(lVar2 + 0x74) == '\0' || (*(char *)(lVar2 + 0x74) == '\x06'))))
      goto LAB_147396428;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 4));
  }
  lVar2 = FUN_1473997a8(param_1 + 2,0);
LAB_147396428:
  param_1[0xf] = lVar2;
  FUN_147399194(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000147396440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return;
}



// FUNCTION 147396448 FUN_147396448 body=398 status=ok
// SIG undefined FUN_147396448(void)

void FUN_147396448(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = '\x01';
  if (*(char *)(*(longlong *)(param_1 + 0x120) + 0x1a90) == '\x01') {
    cVar2 = (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x20d0) == param_1) + '\x01';
  }
  FUN_14318ea46(&local_30,param_2,cVar2);
  if (0 < local_28) {
    lVar1 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      local_88 = 0;
      local_80 = 0;
      FUN_14318eafa(lVar1);
      FUN_14739639c(*(undefined8 *)(param_1 + 0x150));
      lVar1 = *(longlong *)(param_1 + 0x150);
    }
    if (*(longlong *)(lVar1 + 0x80) != 0) {
      FUN_14739859c(lVar1,0,0);
    }
    local_40 = local_30;
    local_38 = local_28;
    FUN_1473965d8(*(undefined8 *)(lVar1 + 0x78),1);
  }
  local_88 = param_1;
  if ((~*(ulonglong *)(*(longlong *)(param_1 + 0x120) + 0x20f8) & 0x41004000000) == 0) {
    local_80 = (uint)local_80._1_3_ << 8;
    local_7c = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_147395d66(&local_88,param_2);
    FUN_14739605a(&local_88);
  }
  else {
    local_80 = (uint)local_80._1_3_ << 8;
    local_7c = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_147396098(&local_88,param_2);
    FUN_14739635e(&local_88);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473965d8 FUN_1473965d8 body=283 status=ok
// SIG undefined FUN_1473965d8(void)

void FUN_1473965d8(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar6 = (int)param_3[1];
  iVar7 = *(int *)(param_1 + 0xa0) + iVar6;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  plVar2 = (longlong *)(param_1 + 0x98);
  if (*(int *)(param_1 + 0xa4) < iVar7) {
    FUN_14480809c(plVar2);
    iVar6 = (int)param_3[1];
  }
  if (iVar6 != 0) {
    lVar4 = *param_3;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar8);
      iVar7 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar7 + 1U) {
        FUN_1447808da(plVar2,iVar7);
      }
      *(undefined4 *)(*plVar2 + (longlong)iVar7 * 4) = param_2;
      LOCK();
      piVar1 = (int *)(lVar5 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar6 * 8 != lVar8);
    uVar3 = *(uint *)(param_3 + 1);
    if ((longlong)(int)uVar3 != 0) {
      iVar6 = *(int *)(param_1 + 0xb0);
      *(uint *)(param_1 + 0xb0) = iVar6 + uVar3;
      if ((uint)(*(int *)(param_1 + 0xb4) - iVar6) < uVar3) {
        FUN_14739d94a((longlong *)(param_1 + 0xa8),iVar6);
      }
      memcpy((void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0xa8)),(void *)*param_3,
             (longlong)(int)uVar3 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 1473966f4 FUN_1473966f4 body=65 status=ok
// SIG undefined FUN_1473966f4(void)

longlong FUN_1473966f4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_14739db2c(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  return (longlong)iVar1 * 0x30 + lVar2;
}



// FUNCTION 147396736 FUN_147396736 body=226 status=ok
// SIG undefined FUN_147396736(void)

void FUN_147396736(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  uVar1 = *(uint *)(param_2 + 0x100);
  uVar3 = param_3;
  uVar4 = param_4;
  if ((uVar1 & 6) != 0) {
    uVar3 = FUN_1473952d6(param_3,param_3);
    uVar4 = FUN_1473952d6(param_4,param_4);
  }
  uVar5 = FUN_14318e8f3(param_4);
  uVar6 = FUN_14318e8f3(param_3);
  uVar7 = FUN_14318e999(param_4);
  uVar8 = FUN_14318e999(param_3);
  puVar9 = (undefined4 *)FUN_14739450c(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *puVar9 = 0x3b9f9492;
  *(undefined8 *)(puVar9 + 2) = 0;
  *(ulonglong *)(puVar9 + 4) = (ulonglong)uVar8;
  *(ulonglong *)(puVar9 + 8) = (ulonglong)uVar7;
  *(ulonglong *)(puVar9 + 6) = (ulonglong)uVar6;
  *(ulonglong *)(puVar9 + 10) = (ulonglong)uVar5;
  puVar9[0xc] = uVar3;
  puVar9[0xd] = uVar4;
  *(undefined8 *)(puVar9 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(puVar9 + 0x10) = uVar2;
  puVar9[0x12] = uVar1;
  *(undefined8 *)(puVar9 + 0x13) = 0xffffffff00000000;
  *(undefined8 *)(puVar9 + 0x15) = 0xffffffff00000000;
  return;
}



// FUNCTION 147396818 FUN_147396818 body=177 status=ok
// SIG undefined FUN_147396818(void)

void FUN_147396818(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar2 = FUN_14318e999(param_3);
  uVar3 = FUN_14318e999(param_4);
  uVar4 = FUN_14318e8f3(param_3);
  uVar5 = FUN_14318e8f3(param_4);
  puVar6 = (undefined4 *)FUN_14739450c(param_1 + 0x48);
  *puVar6 = 0x3b9f9492;
  *(undefined8 *)(puVar6 + 2) = 0;
  *(ulonglong *)(puVar6 + 4) = (ulonglong)uVar2;
  *(ulonglong *)(puVar6 + 8) = (ulonglong)uVar3;
  *(ulonglong *)(puVar6 + 6) = (ulonglong)uVar4;
  *(ulonglong *)(puVar6 + 10) = (ulonglong)uVar5;
  puVar6[0xc] = param_3;
  puVar6[0xd] = param_4;
  *(undefined8 *)(puVar6 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  uVar1 = param_5[1];
  *(undefined8 *)(puVar6 + 0x12) = *param_5;
  *(undefined8 *)(puVar6 + 0x14) = uVar1;
  puVar6[0x16] = *(undefined4 *)(param_5 + 2);
  return;
}



// FUNCTION 1473968ca FUN_1473968ca body=493 status=ok
// SIG undefined FUN_1473968ca(void)

void FUN_1473968ca(longlong param_1,undefined8 param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  uint *local_98;
  uint local_84;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  uint local_5c [5];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_84 = param_3;
  local_80 = param_2;
  if (param_4[6] == 0) {
    local_98 = local_5c;
    local_5c[1] = 0;
    local_5c[2] = 0xffffffff;
    local_5c[3] = 0;
    local_5c[4] = 0xffffffff;
    local_5c[0] = param_3;
    FUN_147396818(param_1,param_2,param_4[3],param_5);
  }
  else {
    uVar1 = FUN_14318e999(param_5);
    uVar2 = FUN_14318e8f3(param_5);
    local_68 = param_1 + 0x48;
    local_78 = (ulonglong)uVar2;
    uVar2 = param_4[1];
    uVar9 = 1;
    local_70 = (ulonglong)uVar1;
    do {
      if (((local_84 & uVar9) != 0) && (uVar2 != 0)) {
        uVar1 = *param_4;
        uVar8 = 0;
        uVar7 = uVar1;
        do {
          if (uVar7 == 0) {
            uVar7 = 0;
          }
          else {
            uVar2 = 0;
            do {
              puVar6 = param_4 + 3;
              if (param_4[6] != 0) {
                iVar5 = param_4[2] - 1;
                if (uVar9 != 4) {
                  iVar5 = 0;
                }
                puVar6 = (uint *)((longlong)(int)(uVar7 * (iVar5 * param_4[1] + uVar8) + uVar2) * 4
                                 + *(longlong *)(param_4 + 4));
              }
              uVar7 = *puVar6;
              if (uVar7 != param_5) {
                uVar1 = FUN_14318e999(uVar7);
                uVar3 = FUN_14318e8f3(uVar7);
                puVar4 = (undefined4 *)FUN_14739450c(local_68);
                *puVar4 = 0x3b9f9492;
                *(undefined8 *)(puVar4 + 2) = 0;
                *(ulonglong *)(puVar4 + 4) = (ulonglong)uVar1;
                *(ulonglong *)(puVar4 + 8) = local_70;
                *(ulonglong *)(puVar4 + 6) = (ulonglong)uVar3;
                *(ulonglong *)(puVar4 + 10) = local_78;
                puVar4[0xc] = uVar7;
                puVar4[0xd] = param_5;
                *(undefined8 *)(puVar4 + 0xe) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x10) = local_80;
                puVar4[0x12] = uVar9;
                puVar4[0x13] = uVar2;
                puVar4[0x14] = 1;
                puVar4[0x15] = uVar8;
                puVar4[0x16] = 1;
                uVar1 = *param_4;
              }
              uVar2 = uVar2 + 1;
              uVar7 = uVar1;
            } while (uVar2 < uVar1);
            uVar2 = param_4[1];
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
      bVar10 = uVar9 < 3;
      uVar9 = uVar9 * 2;
    } while (bVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147396ab8 FUN_147396ab8 body=491 status=ok
// SIG undefined FUN_147396ab8(void)

void FUN_147396ab8(longlong param_1,undefined8 param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  uint *local_98;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  uint local_5c [5];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_3;
  local_80 = param_2;
  if (param_5[6] == 0) {
    local_98 = local_5c;
    local_5c[1] = 0;
    local_5c[2] = 0xffffffff;
    local_5c[3] = 0;
    local_5c[4] = 0xffffffff;
    local_5c[0] = param_3;
    FUN_147396818(param_1,param_2,param_4,param_5[3]);
  }
  else {
    uVar1 = FUN_14318e999(param_4);
    uVar2 = FUN_14318e8f3(param_4);
    local_68 = param_1 + 0x48;
    local_78 = (ulonglong)uVar2;
    uVar2 = param_5[1];
    uVar8 = 1;
    local_70 = (ulonglong)uVar1;
    do {
      if (((local_88 & uVar8) != 0) && (uVar2 != 0)) {
        uVar1 = *param_5;
        uVar7 = 0;
        uVar6 = uVar1;
        do {
          if (uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            uVar2 = 0;
            do {
              puVar5 = param_5 + 3;
              if (param_5[6] != 0) {
                iVar4 = param_5[2] - 1;
                if (uVar8 != 4) {
                  iVar4 = 0;
                }
                puVar5 = (uint *)((longlong)(int)(uVar6 * (iVar4 * param_5[1] + uVar7) + uVar2) * 4
                                 + *(longlong *)(param_5 + 4));
              }
              uVar6 = *puVar5;
              if (uVar6 != param_4) {
                local_84 = FUN_14318e999(uVar6);
                uVar1 = FUN_14318e8f3(uVar6);
                puVar3 = (undefined4 *)FUN_14739450c(local_68);
                *puVar3 = 0x3b9f9492;
                *(undefined8 *)(puVar3 + 2) = 0;
                *(ulonglong *)(puVar3 + 4) = local_70;
                *(ulonglong *)(puVar3 + 8) = (ulonglong)local_84;
                *(ulonglong *)(puVar3 + 6) = local_78;
                *(ulonglong *)(puVar3 + 10) = (ulonglong)uVar1;
                puVar3[0xc] = param_4;
                puVar3[0xd] = uVar6;
                *(undefined8 *)(puVar3 + 0xe) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x10) = local_80;
                puVar3[0x12] = uVar8;
                puVar3[0x13] = uVar2;
                puVar3[0x14] = 1;
                puVar3[0x15] = uVar7;
                puVar3[0x16] = 1;
                uVar1 = *param_5;
              }
              uVar2 = uVar2 + 1;
              uVar6 = uVar1;
            } while (uVar2 < uVar1);
            uVar2 = param_5[1];
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      bVar9 = uVar8 < 3;
      uVar8 = uVar8 * 2;
    } while (bVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147396ca4 FUN_147396ca4 body=961 status=ok
// SIG undefined FUN_147396ca4(void)

void FUN_147396ca4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 *local_150;
  undefined4 local_148;
  longlong local_140;
  undefined4 local_138;
  undefined1 *local_130;
  longlong local_128;
  undefined8 uStack_120;
  uint local_118;
  uint local_114;
  undefined1 local_110 [144];
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar6 = *(uint *)(param_1 + 0x40);
  if (uVar6 == 0) {
    if ((*(int *)(param_1 + 0x120) == 0) && (*(int *)(param_1 + 0x110) == 0)) goto LAB_147396fd0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x100000000;
LAB_147396d94:
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    local_114 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x100000000;
    if ((int)uVar6 < 0) goto LAB_14739705e;
    lVar11 = param_1 + 8;
    if (uVar6 == 1) {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x38);
      }
      lVar10 = lVar11 + 0x30;
    }
    else {
      FUN_14739dc82(local_70);
      if (*(longlong *)(param_1 + 0x38) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x38);
      }
      if ((longlong)*(int *)(param_1 + 0x40) == 0) goto LAB_147396d94;
      lVar10 = (longlong)*(int *)(param_1 + 0x40) * 0x30 + lVar11;
    }
    uVar9 = 0;
    uVar6 = 0;
    do {
      puVar3 = (undefined4 *)FUN_14739dc44(local_70);
      *puVar3 = 0x2e;
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(lVar11 + 8);
      puVar3[4] = *(undefined4 *)(lVar11 + 0x18);
      puVar3[5] = *(undefined4 *)(lVar11 + 0x28);
      uVar9 = uVar9 | *(uint *)(lVar11 + 0x10);
      uVar6 = uVar6 | *(uint *)(lVar11 + 0x20);
      lVar11 = lVar11 + 0x30;
    } while (lVar11 != lVar10);
  }
  local_128 = 0;
  uStack_120 = 0;
  local_118 = uVar6;
  local_114 = uVar9;
  FUN_14318e81f(&local_128,param_1 + 0x118);
  local_80 = (undefined1 *)0x0;
  local_78 = 0x200000000;
  uVar6 = *(uint *)(param_1 + 0x110);
  if ((int)uVar6 < 0) {
LAB_14739705e:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (2 < uVar6) {
    FUN_14739de40(local_110);
    uVar6 = *(uint *)(param_1 + 0x110);
  }
  lVar11 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x108);
  }
  uVar9 = local_114;
  uVar7 = local_118;
  if (uVar6 != 0) {
    lVar10 = 0;
    do {
      puVar4 = (undefined4 *)FUN_14739ddf6(local_110);
      *puVar4 = 0x2d;
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(lVar11 + 8 + lVar10);
      puVar4[4] = *(undefined4 *)(lVar11 + 0x18 + lVar10);
      puVar4[5] = *(undefined4 *)(lVar11 + 0x28 + lVar10);
      puVar4[6] = *(undefined4 *)(lVar11 + 0x30 + lVar10);
      puVar4[7] = *(undefined4 *)(lVar11 + 0x34 + lVar10);
      puVar4[8] = *(undefined4 *)(lVar11 + 0x38 + lVar10);
      puVar4[9] = *(undefined4 *)(lVar11 + 0x3c + lVar10);
      *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(lVar11 + 0x40 + lVar10);
      puVar4[0x10] = *(undefined4 *)(lVar11 + 0x58 + lVar10);
      puVar3 = (undefined4 *)(lVar11 + 0x48 + lVar10);
      uVar8 = puVar3[1];
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
      puVar4[0xc] = *puVar3;
      puVar4[0xd] = uVar8;
      puVar4[0xe] = uVar1;
      puVar4[0xf] = uVar2;
      uVar9 = uVar9 | *(uint *)(lVar11 + 0x10 + lVar10);
      uVar7 = uVar7 | *(uint *)(lVar11 + 0x20 + lVar10);
      lVar10 = lVar10 + 0x60;
    } while ((longlong)(int)uVar6 * 0x60 != lVar10);
  }
  puVar5 = local_80;
  if (local_80 == (undefined1 *)0x0) {
    puVar5 = local_110;
  }
  lVar11 = (longlong)(int)local_78;
  if (lVar11 == 0) {
    local_138 = 0;
  }
  else {
    lVar10 = 0;
    do {
      if ((puVar5[lVar10 + 0x30] & 6) != 0) {
        if (*(int *)(puVar5 + lVar10 + 0x1c) == 0x3b9f9490) {
          uVar8 = 4;
LAB_147396f00:
          *(undefined4 *)(puVar5 + lVar10 + 0x1c) = uVar8;
        }
        else if (*(int *)(puVar5 + lVar10 + 0x1c) == 0x3b9f9491) {
          uVar8 = 3;
          goto LAB_147396f00;
        }
        if (*(int *)(puVar5 + lVar10 + 0x18) == 0x3b9f9490) {
          uVar8 = 4;
        }
        else {
          if (*(int *)(puVar5 + lVar10 + 0x18) != 0x3b9f9491) goto LAB_147396f2f;
          uVar8 = 3;
        }
        *(undefined4 *)(puVar5 + lVar10 + 0x18) = uVar8;
      }
LAB_147396f2f:
      lVar10 = lVar10 + 0x48;
    } while (lVar11 * 0x48 != lVar10);
    local_138 = (int)local_78;
  }
  local_130 = local_110;
  if (local_80 != (undefined1 *)0x0) {
    local_130 = local_80;
  }
  local_150 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    local_150 = local_70;
  }
  local_140 = local_128;
  local_148 = (undefined4)uStack_120;
  local_158 = (undefined4)local_50;
  (*DAT_14ca79290)(param_2,uVar9,uVar7,0);
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_147396fd0:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147397068 FUN_147397068 body=265 status=ok
// SIG undefined FUN_147397068(void)

void FUN_147397068(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0x40) != 0) || (*(int *)(param_1 + 0x120) != 0)) ||
     (*(int *)(param_1 + 0x110) != 0)) {
    if ((~*(ulonglong *)(*(longlong *)(param_2 + 0x80) + 0x20f8) & 0x41004000000) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
    }
    local_58[0] = 0x3b9f9493;
    local_50 = 0;
    local_48 = 0;
    local_40 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      local_40 = *(longlong *)(param_1 + 0x38);
    }
    local_38 = *(undefined4 *)(param_1 + 0x120);
    local_30 = *(undefined8 *)(param_1 + 0x118);
    local_28 = *(undefined4 *)(param_1 + 0x110);
    local_20 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      local_20 = *(longlong *)(param_1 + 0x108);
    }
    local_44 = *(int *)(param_1 + 0x40);
    (*DAT_14ca78df0)(*(undefined8 *)(param_2 + 0x88),local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147397183 FUN_147397183 body=185 status=ok
// SIG undefined FUN_147397183(void)

void FUN_147397183(undefined8 param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_178 [56];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_140 = 0;
  local_138 = 0x100000000;
  local_70 = 0;
  local_68 = 0x200000000;
  local_28 = 0;
  local_20 = 0x200000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_188 = in_stack_00000028;
  FUN_147396818(local_178);
  FUN_147397068(local_178,param_1);
  FUN_1473945b6(local_178);
  if ((local_18 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739723e FUN_14739723e body=78 status=ok
// SIG undefined FUN_14739723e(void)

void FUN_14739723e(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1[6] != 0) {
    iVar1 = **(int **)(param_1 + 4);
    uVar2 = param_1[1] * param_1[2] * *param_1;
    if (1 < uVar2) {
      iVar3 = 1;
      do {
        if ((*(int **)(param_1 + 4))[iVar3] != iVar1) {
          return;
        }
        iVar3 = iVar3 + 1;
      } while (uVar2 - iVar3 != 0);
    }
    param_1[3] = iVar1;
    param_1[6] = 0;
    if (param_1[7] < 0) {
      FUN_14739dfd0(param_1 + 4);
      return;
    }
  }
  return;
}



// FUNCTION 14739728c FUN_14739728c body=118 status=ok
// SIG undefined FUN_14739728c(void)

void FUN_14739728c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14739e000(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14739e086(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147397304 FUN_147397304 body=452 status=ok
// SIG undefined FUN_147397304(void)

ulonglong FUN_147397304(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (param_3 < 0x200) {
    if (param_3 < 0x60) {
      if ((param_3 - 0x10U < 0x31) &&
         ((0x1000000010001U >> ((ulonglong)(param_3 - 0x10U) & 0x3f) & 1) != 0)) {
LAB_147397382:
        if ((*(byte *)(param_2 + 0x20) & 6) == 0) {
          lVar3 = (**(code **)(*param_2 + 8))(param_2);
          return (ulonglong)
                 ((uint)(byte)((byte)((*(uint *)(param_2 + 0x14) & 4) >> 2) &
                              *(byte *)((longlong)&DAT_14c873430 +
                                       (ulonglong)((uint)*(byte *)(lVar3 + 0x33) * 0x30) + 1) >> 1)
                  * 4 + 1);
        }
        if ((~*(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x20f8) & 0x41004000000) == 0) {
          return 0x3b9f9490;
        }
        uVar1 = FUN_1473974c8(param_1 + 0x108,param_2,2);
        uVar2 = FUN_1473974c8(param_1 + 0x108,param_2,4);
        uVar4 = FUN_1473952d6(uVar1,uVar2);
        return uVar4;
      }
    }
    else {
      if ((param_3 == 0x60) || (param_3 == 0x70)) goto LAB_147397382;
      if (param_3 == 0x80) {
        return 6;
      }
    }
  }
  else if (param_3 < 0xc00) {
    if (param_3 == 0x200) {
      return 0x3b9f9490;
    }
    if (param_3 == 0x400) {
      return 1;
    }
    if (param_3 == 0x800) {
      return 1;
    }
  }
  else if (param_3 < 0x8000) {
    if (param_3 == 0xc00) {
      return 1;
    }
    if (param_3 == 0x2000) {
      return 7;
    }
  }
  else {
    if (param_3 == 0x8000) {
      return 0x3b9f9491;
    }
    if (param_3 == 0x80000) {
      uVar5 = 0x3b9e1d90;
      if (DAT_14ca84f48 != '\x02') {
        uVar5 = 0;
      }
      if (DAT_14ca84f48 == '\x01') {
        return 0x3b9d4aa3;
      }
      return (ulonglong)uVar5;
    }
  }
  return 0;
}



// FUNCTION 1473974c8 FUN_1473974c8 body=222 status=ok
// SIG undefined FUN_1473974c8(void)

undefined4 FUN_1473974c8(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong *plVar6;
  
  uVar2 = *(ulonglong *)(param_2 + 0x98);
  uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  do {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar3 = *(int *)((longlong)plVar6 +
                      (ulonglong)((int)param_1[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar3 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar3 * 0x30;
          if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x30) == uVar2) {
            if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
              iVar3 = 0;
              if (param_3 == 4) {
                iVar3 = *(int *)(lVar1 + 0x10) + -1;
              }
              if (*(int *)(lVar1 + 0x20) == 0) {
                puVar4 = (undefined4 *)(lVar1 + 0x14);
              }
              else {
                puVar4 = (undefined4 *)
                         ((longlong)(iVar3 * *(int *)(lVar1 + 0xc) * *(int *)(lVar1 + 8)) * 4 +
                         *(longlong *)(lVar1 + 0x18));
              }
              return *puVar4;
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 0x28);
        } while (iVar3 != -1);
      }
    }
    param_1 = (longlong *)param_1[0xb];
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 1473975a6 FUN_1473975a6 body=789 status=ok
// SIG undefined FUN_1473975a6(void)

int FUN_1473975a6(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [56];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar2 = FUN_147397304();
  if ((*(char *)(param_1 + 0x158) != '\x01') || (DAT_14c760c04 != 0)) {
    uVar1 = *(ulonglong *)(param_2 + 0x98);
    if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
      uVar6 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      lVar5 = param_1 + 0x140;
      if (*(longlong *)(param_1 + 0x148) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x148);
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar6 >> 0x10 ^ uVar6))
                               * 4);
      if (iVar3 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x108) + (longlong)iVar3 * 0x30;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar3 * 0x30) == uVar1) {
            if (lVar5 != 0) {
              piVar8 = (int *)(lVar5 + 8);
              goto LAB_147397779;
            }
            break;
          }
          iVar3 = *(int *)(lVar5 + 0x28);
        } while (iVar3 != -1);
      }
    }
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x58) + 8) + 0x128);
    if (*(int *)(lVar5 + 0x68) != *(int *)(lVar5 + 0x94)) {
      uVar6 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      lVar7 = lVar5 + 0x98;
      if (*(longlong *)(lVar5 + 0xa0) != 0) {
        lVar7 = *(longlong *)(lVar5 + 0xa0);
      }
      iVar3 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar5 + 0xa8) - 1U & (uVar6 >> 0x10 ^ uVar6)) *
                               4);
      if (iVar3 != -1) {
        do {
          lVar7 = *(longlong *)(lVar5 + 0x60) + (longlong)iVar3 * 0x30;
          if (*(ulonglong *)(*(longlong *)(lVar5 + 0x60) + (longlong)iVar3 * 0x30) == uVar1) {
            piVar8 = (int *)(lVar7 + 8);
            if (piVar8 != (int *)0x0 && lVar7 != 0) {
LAB_147397779:
              if ((piVar8[6] != 0) || (piVar8[3] != iVar2)) {
                local_158 = 0;
                local_150 = 0x100000000;
                local_88 = 0;
                local_80 = 0x200000000;
                local_40 = 0;
                local_38 = 0x200000000;
                local_78 = 0;
                uStack_70 = 0;
                local_68 = 0;
                if (((*(uint *)(param_2 + 0x100) & 6) == 0) ||
                   ((uint)piVar8[2] < 2 || *(char *)(param_1 + 0x158) != '\0')) {
                  local_1b8 = (undefined4 *)CONCAT44(local_1b8._4_4_,iVar2);
                  FUN_1473968ca(local_190,uVar1,*(uint *)(param_2 + 0x100),piVar8);
                  iVar3 = piVar8[3];
                }
                else {
                  if (piVar8[6] == 0) {
                    piVar4 = piVar8 + 3;
                    piVar8 = piVar4;
                  }
                  else {
                    piVar4 = *(int **)(piVar8 + 4);
                    piVar8 = piVar4 + (int)((piVar8[2] - 1U) * piVar8[1] * *piVar8);
                  }
                  iVar3 = FUN_1473952d6(*piVar4,*piVar8);
                  local_1a4 = *(undefined4 *)(param_2 + 0x100);
                  local_1b8 = &local_1a4;
                  local_1a0 = 0;
                  uStack_19c = 0xffffffff;
                  uStack_198 = 0;
                  uStack_194 = 0xffffffff;
                  FUN_147396818(local_190,*(undefined8 *)(param_2 + 0x98),iVar3,iVar2);
                }
                FUN_147397068(local_190,param_1);
                FUN_1473945b6(local_190);
                iVar2 = iVar3;
              }
            }
            break;
          }
          iVar3 = *(int *)(lVar7 + 0x28);
        } while (iVar3 != -1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 1473978bc thunk_FUN_14739e122 body=5 status=ok
// SIG undefined thunk_FUN_14739e122(void)

void thunk_FUN_14739e122(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x30) == param_2) {
          FUN_14739e1aa(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x30 + *param_1 + 0x28);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1473978c2 FUN_1473978c2 body=48 status=ok
// SIG undefined FUN_1473978c2(void)

void FUN_1473978c2(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) {
    return;
  }
  FUN_1473978f2(param_2,param_1);
  FUN_14739e3ea(param_1,0);
  return;
}



// FUNCTION 1473978f2 FUN_1473978f2 body=388 status=ok
// SIG undefined FUN_1473978f2(void)

void FUN_1473978f2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_14739e248(param_1,uVar4);
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
      FUN_14739bd8e(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0x30;
      uStack_50 = (longlong *)((longlong)iStack_64 * 0x30 + *local_80 + 8);
      FUN_14739b978(param_1,local_34,&local_58,0);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147397a78 FUN_147397a78 body=201 status=ok
// SIG undefined FUN_147397a78(void)

uint FUN_147397a78(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((param_2 & 0x2000) << 7 | param_2 >> 0x11 & 0x10 | param_2 >> 0xb & 0x20) +
          (param_2 >> 9 & 0x40 | param_2 >> 7 & 0x80) + 1;
  if (param_3 == '\0') {
    uVar2 = ~param_2 >> 1 & 2 |
            param_2 >> 6 & 4 | param_2 >> 8 & 2 | (param_2 & 8) + (param_2 & 0x80) * 2 | uVar2;
    uVar1 = *(ulonglong *)(param_1 + 0x20f8);
    uVar3 = ((param_2 & 0x2000) << 6 | uVar2) ^ 0xa0000;
    if ((uVar1 & 0x1800) == 0) {
      uVar3 = uVar2;
    }
    if ((~uVar1 & 0x5c0002400) != 0) {
      uVar3 = uVar2;
    }
    uVar2 = (uint)uVar1 >> 0xd & 0x20000 | uVar3;
  }
  return uVar2;
}



// FUNCTION 147397b42 FUN_147397b42 body=573 status=ok
// SIG undefined FUN_147397b42(void)

undefined8 *
FUN_147397b42(undefined8 *param_1,undefined8 *param_2,uint *param_3,longlong param_4,
             undefined8 param_5,longlong param_6)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  void *_Src;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a9d3d4(param_1,0x13);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14a1e4968;
  param_1[4] = *(undefined8 *)param_3;
  *(uint *)(param_1 + 5) = param_3[2];
  param_1[8] = param_2;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a356e60;
  param_1[6] = &PTR_LAB_14a356e70;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  puVar1 = param_1 + 10;
  FUN_1473a8036(puVar1);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar4 = *param_3;
  uVar3 = FUN_147397a78(param_2,param_3[2],uVar4 == 0);
  *(undefined4 *)(param_1 + 9) = uVar3;
  if (uVar4 != 0) {
    local_70 = param_1 + 0xe;
    cVar2 = *(char *)(param_2 + 0x72);
    FUN_1473a779c(param_2,param_3[2],0);
    if (param_6 == 0) {
      FUN_147397d80(param_1,puVar1);
      plVar7 = local_70;
    }
    else {
      FUN_1473d6f48(&local_68,param_6);
      *(undefined4 *)(param_1 + 0xc) = (undefined4)local_58;
      *(undefined4 *)((longlong)param_1 + 100) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0xd) = uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_4c;
      *(undefined4 *)puVar1 = local_68;
      *(undefined4 *)((longlong)param_1 + 0x54) = (undefined4)uStack_64;
      *(undefined4 *)(param_1 + 0xb) = uStack_64._4_4_;
      *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_5c;
      if (cVar2 == '\0') {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_1473a804a(puVar1,param_1[8]);
      }
      plVar7 = local_70;
      *local_70 = lVar5;
      if ((*(byte *)((longlong)param_2 + 0x20fb) & 0x40) == 0) {
        lVar5 = 0;
      }
      else {
        local_58 = *puVar1;
        local_68 = 0x3b9e8321;
        uStack_64 = 0;
        uStack_5c = 0;
        lVar5 = (*DAT_14ca79240)(*param_2);
      }
      param_1[0xf] = (ulonglong)*(uint *)(param_1 + 0xc) + lVar5;
    }
    if (*(longlong **)(param_4 + 8) != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)(param_4 + 8) + 0x10))();
      if (*param_3 < uVar4) {
        uVar4 = *param_3;
      }
      if (*plVar7 == 0) {
        local_78 = 0;
        pvVar6 = (void *)FUN_147397ed8(param_1,param_5,1,uVar4);
        _Src = (void *)(**(code **)(**(longlong **)(param_4 + 8) + 8))();
        memcpy(pvVar6,_Src,(ulonglong)uVar4);
        FUN_147398310(param_1,param_5);
      }
      else {
        pvVar6 = (void *)(**(code **)(**(longlong **)(param_4 + 8) + 8))();
        memcpy((void *)param_1[0xe],pvVar6,(ulonglong)uVar4);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      (**(code **)(**(longlong **)(param_4 + 8) + 0x18))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147397d80 FUN_147397d80 body=343 status=ok
// SIG undefined FUN_147397d80(void)

void FUN_147397d80(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  int local_78;
  undefined1 local_70;
  char *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x390);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x28);
  iVar7 = 7;
  if (bVar1 == 0) {
    iVar7 = (uint)((uVar3 & 6) != 0) * 5 + 1;
  }
  local_88 = FUN_1473a779c(*(longlong *)(param_1 + 0x40),uVar3,(ulonglong)uVar2 == 0);
  local_80 = *(undefined4 *)(param_1 + 0x48);
  local_68 = ".\\Runtime/VulkanRHI/Private/VulkanBuffer.cpp";
  local_60 = 0xca;
  local_70 = 2;
  local_78 = iVar7;
  cVar4 = FUN_14319e7e0(*(longlong *)(param_1 + 0x40) + 0x3d8,param_2,0,uVar2);
  if (cVar4 == '\0') {
    local_88 = 0;
    FUN_1473a780e(*(longlong *)(param_1 + 0x40) + 0x3d8,0,0,0);
  }
  if (((uVar3 & 6) == 0 & (bVar1 ^ 1)) == 0) {
    uVar5 = FUN_1473a804a(param_2,*(undefined8 *)(param_1 + 0x40));
  }
  else {
    uVar5 = 0;
  }
  param_2[4] = uVar5;
  if ((*(byte *)((longlong)*(undefined8 **)(param_1 + 0x40) + 0x20fb) & 0x40) == 0) {
    lVar6 = 0;
  }
  else {
    local_48 = *param_2;
    local_58 = 0x3b9e8321;
    local_54 = 0;
    local_4c = 0;
    lVar6 = (*DAT_14ca79240)(**(undefined8 **)(param_1 + 0x40));
  }
  param_2[5] = (ulonglong)*(uint *)(param_2 + 2) + lVar6;
  LOCK();
  DAT_14ca84ee0 = DAT_14ca84ee0 + (ulonglong)uVar2;
  UNLOCK();
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147397ed8 FUN_147397ed8 body=1078 status=ok
// SIG undefined FUN_147397ed8(void)

longlong FUN_147397ed8(longlong param_1,ulonglong *param_2,int param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  longlong **local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  uVar9 = (ulonglong)param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  iVar2 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = iVar2 + 1;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x390);
  uVar3 = *(uint *)(param_1 + 0x28);
  if (param_3 == 0) {
    if (bVar1 == 0) {
      FUN_1473a4b20();
      uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20c8) + 0x150);
      lVar6 = FUN_1473984ce(uVar4);
      local_130 = &local_d8;
      local_c8 = 0x800000010000;
      local_d8 = (longlong *)0x2e;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_138 = (undefined8 *)CONCAT44(local_138._4_4_,1);
      (*DAT_14ca79290)(*(undefined8 *)(lVar6 + 0x88),0x2000,0x1000,0);
      lVar5 = FUN_143192298(*(longlong *)(param_1 + 0x40) + 0x5d0,param_4,2,8);
      local_f8 = (ulonglong)param_4;
      local_138 = &local_108;
      local_108 = (longlong *)(ulonglong)(param_5 + *(int *)(param_1 + 0x60));
      uStack_100 = (longlong **)0x0;
      (*DAT_14ca793f0)(*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(param_1 + 0x50),
                       *(undefined8 *)(lVar5 + 0x38),1);
      local_130 = (longlong **)&local_88;
      local_78 = 0x200000010000;
      local_88 = 0x2e;
      uStack_80 = 0;
      uStack_7c = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_138 = (undefined8 *)CONCAT44(local_138._4_4_,1);
      (*DAT_14ca79290)(*(undefined8 *)(lVar6 + 0x88),0x1000,0x4000,0);
      FUN_14739859c(uVar4,0,0);
      FUN_1473a4890(*(undefined8 *)(param_1 + 0x40));
      FUN_1473a80a4(lVar5 + 0x18,*(undefined8 *)(lVar5 + 0x10));
      lVar6 = FUN_1473a2c2e(lVar5);
      local_98 = 0;
      local_90 = 0;
      local_a0 = lVar5;
      local_94 = param_4;
      local_68 = param_1;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77a48);
      local_60 = &local_68;
      local_58 = &local_a0;
      FUN_14739c41a(local_4c);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77a48);
      FUN_14739639c(uVar4);
LAB_147398154:
      uVar9 = 0;
      goto LAB_147397f61;
    }
LAB_147397f59:
    lVar6 = *(longlong *)(param_1 + 0x70);
  }
  else {
    if ((((uVar3 & 6) == 0 & (bVar1 ^ 1)) == 0) && (iVar2 == 0)) goto LAB_147397f59;
    if (DAT_14ca77a70 != 0 || ((uVar3 & 6) == 0 || (uVar3 & 1) != 0)) {
      uStack_d0 = param_5;
      local_c8 = CONCAT44(local_c8._4_4_,param_3);
      uStack_cc = param_4;
      local_d8 = (longlong *)FUN_143192298(*(longlong *)(param_1 + 0x40) + 0x5d0,param_4,1,4);
      lVar6 = FUN_1473a2c2e(local_d8);
      local_88 = param_1;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77a48);
      local_108 = &local_88;
      uStack_100 = &local_d8;
      FUN_14739c41a(&local_a0);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77a48);
      goto LAB_147398154;
    }
    FUN_1473a8036(&local_d8);
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_147397d80(param_1,&local_d8);
    FUN_1473a7fd0(&local_d8);
    local_e8 = (undefined4)local_b8;
    uStack_e4 = local_b8._4_4_;
    uStack_e0 = (undefined4)uStack_b0;
    uStack_dc = uStack_b0._4_4_;
    local_f8 = local_c8;
    uStack_f0 = uStack_c0;
    uStack_ec = uStack_bc;
    local_108 = local_d8;
    uStack_100 = (longlong **)CONCAT44(uStack_cc,uStack_d0);
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      if ((char)*(byte *)(param_1 + 0x6b) < '\0' && (*(byte *)(param_1 + 0x6b) & 0x7f) != 0) {
        FUN_1473a73fe(*(longlong *)(param_1 + 0x40) + 0x3d8,(undefined4 *)(param_1 + 0x50),0);
      }
      *(undefined4 *)(param_1 + 0x70) = local_e8;
      *(undefined4 *)(param_1 + 0x74) = uStack_e4;
      *(undefined4 *)(param_1 + 0x78) = uStack_e0;
      *(undefined4 *)(param_1 + 0x7c) = uStack_dc;
      *(undefined4 *)(param_1 + 0x60) = (undefined4)local_f8;
      *(undefined4 *)(param_1 + 100) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 0x68) = uStack_f0;
      *(undefined4 *)(param_1 + 0x6c) = uStack_ec;
      *(undefined4 *)(param_1 + 0x50) = (undefined4)local_108;
      *(undefined4 *)(param_1 + 0x54) = local_108._4_4_;
      *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_100;
      *(undefined4 *)(param_1 + 0x5c) = uStack_100._4_4_;
      *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) | 0x80;
      (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
      lVar6 = local_b8;
    }
    else {
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 9;
      if ((undefined8 *)param_2[1] < puVar8) {
        FUN_140023dd8(param_2,0x50);
        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar7 + 9;
      }
      *param_2 = (ulonglong)puVar8;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar7;
      param_2[6] = (ulonglong)(puVar7 + 1);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a357f38;
      puVar7[2] = param_1;
      *(undefined4 *)(puVar7 + 3) = (undefined4)local_108;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = local_108._4_4_;
      *(undefined4 *)(puVar7 + 4) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)puVar7 + 0x24) = uStack_100._4_4_;
      puVar7[5] = local_f8;
      puVar7[6] = CONCAT44(uStack_ec,uStack_f0);
      puVar7[7] = CONCAT44(uStack_e4,local_e8);
      puVar7[8] = CONCAT44(uStack_dc,uStack_e0);
      lVar6 = local_b8;
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = 2;
LAB_147397f61:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 + lVar6;
}



// FUNCTION 147398310 FUN_147398310 body=357 status=ok
// SIG undefined FUN_147398310(void)

void FUN_147398310(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 unaff_R14D;
  undefined4 uVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x4c) != '\x02') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77a48);
    FUN_14739c9a0(&local_60,param_1);
    lVar2 = (longlong)(int)local_60;
    if (lVar2 == -1) {
      uVar4 = 0;
      uVar5 = 3;
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(DAT_14ca779f8 + 8 + lVar2 * 0x28);
      uVar7 = *(undefined4 *)(DAT_14ca779f8 + 0x10 + lVar2 * 0x28);
      uVar4 = *(undefined4 *)(DAT_14ca779f8 + 0x14 + lVar2 * 0x28);
      uVar5 = *(undefined4 *)(DAT_14ca779f8 + 0x18 + lVar2 * 0x28);
      unaff_R14D = *(undefined4 *)(DAT_14ca779f8 + 0x1c + lVar2 * 0x28);
      FUN_14739ca3a();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca77a48);
    local_60 = param_1;
    uStack_58 = uVar6;
    local_50 = uVar7;
    uStack_4c = uVar4;
    uStack_48 = uVar5;
    uStack_44 = unaff_R14D;
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      FUN_14318fbcc(&local_60,param_2);
    }
    else {
      puVar1 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar1 + 6;
      if ((undefined8 *)param_2[1] < puVar3) {
        FUN_140023dd8(param_2,0x38);
        puVar1 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar1 + 6;
      }
      *param_2 = (ulonglong)puVar3;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar1;
      param_2[6] = (ulonglong)(puVar1 + 1);
      puVar1[1] = 0;
      *puVar1 = &PTR_LAB_14a357f58;
      *(int *)(puVar1 + 2) = (int)local_60;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_60._4_4_;
      *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_58;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_58._4_4_;
      puVar1[4] = CONCAT44(uStack_4c,local_50);
      puVar1[5] = CONCAT44(uStack_44,uStack_48);
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147398476 FUN_147398476 body=88 status=ok
// SIG undefined FUN_147398476(void)

void FUN_147398476(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1473a7f7c(param_1 + 0x50);
  if (cVar1 != '\0') {
    LOCK();
    DAT_14ca84ee0 = DAT_14ca84ee0 - (ulonglong)*(uint *)(param_1 + 0x5c);
    UNLOCK();
    FUN_1473a73fe(*(longlong *)(param_1 + 0x40) + 0x3d8,param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x100000;
  return;
}



// FUNCTION 1473984ce FUN_1473984ce body=205 status=ok
// SIG undefined FUN_1473984ce(void)

longlong FUN_1473984ce(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  lVar3 = param_1[0x10];
  if (lVar3 == 0) {
    if (DAT_14ca77b70 != 0) {
      uVar1 = FUN_14001cc68(0x28,0x10);
      FUN_1473a911e(uVar1,*param_1);
      param_1[0x16] = uVar1;
    }
    if (0 < *(int *)(param_1 + 4)) {
      lVar3 = 0;
      do {
        lVar2 = *(longlong *)(param_1[3] + lVar3 * 8);
        FUN_147399452(lVar2);
        if (((*(byte *)(lVar2 + 0x75) & 0x20) != 0) &&
           ((*(char *)(lVar2 + 0x74) == '\0' || (*(char *)(lVar2 + 0x74) == '\x06'))))
        goto LAB_147398580;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 4));
    }
    lVar2 = FUN_1473997a8(param_1 + 2,1);
LAB_147398580:
    param_1[0x10] = lVar2;
    FUN_147399194(lVar2);
    lVar3 = param_1[0x10];
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return lVar3;
}



// FUNCTION 14739859c FUN_14739859c body=653 status=ok
// SIG undefined FUN_14739859c(void)

void FUN_14739859c(longlong param_1,uint param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  LARGE_INTEGER *pLVar3;
  longlong lVar4;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  LARGE_INTEGER local_d8;
  undefined4 local_d0;
  LARGE_INTEGER *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((byte)(*(char *)(*(longlong *)(param_1 + 0x80) + 0x74) - 1U) < 2) {
    FUN_147399046();
    if (DAT_14ca77b70 == 0) {
      FUN_1431a68ea(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80),param_2,param_3)
      ;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xa8);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0xa0);
        lVar4 = 0;
        do {
          local_e0 = *(undefined8 *)(lVar2 + lVar4);
          local_d8.QuadPart = (LONGLONG)&local_e0;
          local_d0 = 1;
          FUN_1473965d8(*(undefined8 *)(param_1 + 0x80),1,&local_d8);
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar1 * 8 != lVar4);
      }
      if (param_2 == 0) {
        local_d8 = *(LARGE_INTEGER *)(*(longlong *)(param_1 + 0xb0) + 0x18);
        FUN_1431a68ea(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80),1);
        iVar1 = *(int *)(param_1 + 0xc0);
        *(uint *)(param_1 + 0xc0) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0xc4) < iVar1 + 1U) {
          FUN_14739d94a(param_1 + 0xb8,iVar1);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 8) =
             *(undefined8 *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      else {
        local_58 = (LARGE_INTEGER *)0x0;
        local_4c = 0x10;
        local_d8 = *(LARGE_INTEGER *)(*(longlong *)(param_1 + 0xb0) + 0x18);
        local_50 = param_2 + 1;
        if (0xf < param_2) {
          FUN_1473a0cfe(&local_d8);
        }
        pLVar3 = local_58;
        if (local_58 == (LARGE_INTEGER *)0x0) {
          pLVar3 = &local_d8;
        }
        memcpy(pLVar3 + 1,param_3,(longlong)(int)param_2 << 3);
        pLVar3 = local_58;
        if (local_58 == (LARGE_INTEGER *)0x0) {
          pLVar3 = &local_d8;
        }
        FUN_1431a68ea(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80),local_50,
                      pLVar3);
        if (local_58 != (LARGE_INTEGER *)0x0) {
          FUN_1400020a8();
        }
      }
      *(undefined4 *)(param_1 + 0xa8) = 0;
      if (*(int *)(param_1 + 0xac) != 0) {
        FUN_1473a0dda(param_1 + 0xa0,0);
      }
    }
    QueryPerformanceCounter(&local_d8);
    *(double *)(*(longlong *)(param_1 + 0x80) + 0x90) =
         (double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14739882a FUN_14739882a body=157 status=ok
// SIG undefined FUN_14739882a(void)

void FUN_14739882a(longlong param_1,longlong param_2)

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
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147398476();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  uVar5 = *(undefined4 *)(param_2 + 0x60);
  uVar6 = *(undefined4 *)(param_2 + 100);
  uVar7 = *(undefined4 *)(param_2 + 0x68);
  uVar8 = *(undefined4 *)(param_2 + 0x6c);
  uVar9 = *(undefined4 *)(param_2 + 0x74);
  uVar10 = *(undefined4 *)(param_2 + 0x78);
  uVar11 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar9;
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  *(undefined4 *)(param_1 + 0x7c) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_2 + 0x48) = 0;
  FUN_1473a8036(&local_48);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined4 *)(param_2 + 0x60) = local_38;
  *(undefined4 *)(param_2 + 100) = uStack_34;
  *(undefined4 *)(param_2 + 0x68) = uStack_30;
  *(undefined4 *)(param_2 + 0x6c) = uStack_2c;
  *(undefined4 *)(param_2 + 0x50) = local_48;
  *(undefined4 *)(param_2 + 0x54) = uStack_44;
  *(undefined4 *)(param_2 + 0x58) = uStack_40;
  *(undefined4 *)(param_2 + 0x5c) = uStack_3c;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473988c8 FUN_1473988c8 body=89 status=ok
// SIG undefined FUN_1473988c8(void)

void FUN_1473988c8(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (DAT_14ca77a98 != 0) {
    lVar2 = FUN_14001cc68(0x100,0x10);
    FUN_14739e82e(lVar2);
    lVar1 = DAT_14ca77b20;
    bVar3 = DAT_14ca77b20 != 0;
    DAT_14ca77b20 = lVar2;
    if (bVar3) {
      FUN_14739e5a0(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147398922 FUN_147398922 body=64 status=ok
// SIG undefined FUN_147398922(void)

void FUN_147398922(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14ca77b20;
  if ((DAT_14ca77a98 != 0) && (DAT_14ca77b20 != 0)) {
    DAT_14ca77b20 = 0;
    FUN_14739e5a0(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 147398962 FUN_147398962 body=27 status=ok
// SIG undefined FUN_147398962(void)

void FUN_147398962(undefined8 *param_1)

{
  if ((DAT_14ca77a98 != 0) && (DAT_14c760c14 != 0)) {
    FUN_14739ca98(*param_1);
    return;
  }
  return;
}



// FUNCTION 14739897e FUN_14739897e body=155 status=ok
// SIG undefined FUN_14739897e(void)

undefined4
FUN_14739897e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_1;
  local_58[0] = *param_4;
  local_48 = param_4[2];
  param_4[2] = 0;
  local_38 = (undefined4)param_4[4];
  uStack_34 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_30 = (undefined4)param_4[5];
  uStack_2c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_28 = (undefined4)param_4[6];
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_20 = (undefined4)param_4[7];
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x3c);
  if (local_58[0] != 0) {
    *param_4 = 0;
  }
  uVar2 = FUN_147398a1a(uVar1,local_28,param_3,local_58);
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147398a1a FUN_147398a1a body=566 status=ok
// SIG undefined FUN_147398a1a(void)

undefined4 FUN_147398a1a(longlong param_1,undefined8 param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  DWORD DVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong local_b8 [2];
  longlong local_a8 [2];
  int local_98;
  undefined1 local_94 [4];
  longlong local_90 [2];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_80 = param_2;
  DVar2 = GetCurrentThreadId();
  FUN_140002266(local_90,L"FVulkanChunkedPipelineCacheManager: CreatePSO (precomp %d) tot %d ",
                param_3,DVar2);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  local_c8 = local_94;
  plVar4 = (longlong *)FUN_14739f81e(param_1,param_4,&local_80,&local_98);
  if ((param_3 == '\0') || (uVar3 = 0, local_98 != 2)) {
    DVar2 = GetCurrentThreadId();
    FUN_140002266(local_a8,L"FVulkanChunkedPipelineCacheManager: CreatePSO actualcreate %d ",DVar2);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    lVar1 = plVar4[0x16];
    local_78[0] = *param_4;
    local_68 = param_4[2];
    param_4[2] = 0;
    local_58 = (undefined4)param_4[4];
    uStack_54 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_50 = (undefined4)param_4[5];
    uStack_4c = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_48 = (undefined4)param_4[6];
    uStack_44 = *(undefined4 *)((longlong)param_4 + 0x34);
    uStack_40 = (undefined4)param_4[7];
    uStack_3c = *(undefined4 *)((longlong)param_4 + 0x3c);
    if (local_78[0] != 0) {
      *param_4 = 0;
    }
    uVar3 = FUN_143190e7c(plVar4,local_80,local_98,local_78);
    if (lVar1 != plVar4[0x16]) {
      DVar2 = GetCurrentThreadId();
      FUN_140002266(local_b8,L"FVulkanChunkedPipelineCacheManager: CreatePSO lru %d ",DVar2);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
      lVar1 = *plVar4;
      if (*(longlong *)(param_1 + 0xe8) != lVar1) {
        if ((*(longlong *)(lVar1 + 8) != 0) || (*(longlong *)(lVar1 + 0x10) != 0)) {
          FUN_1407d7338(param_1 + 0xe0,lVar1,0);
        }
        if (lVar1 != 0) {
          if (*(longlong *)(param_1 + 0xe8) == 0) {
            plVar4 = (longlong *)(param_1 + 0xf0);
          }
          else {
            *(longlong *)(lVar1 + 8) = *(longlong *)(param_1 + 0xe8);
            plVar4 = (longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10);
          }
          *plVar4 = lVar1;
          *(longlong *)(param_1 + 0xe8) = lVar1;
          (**(code **)(*(longlong *)(param_1 + 0xe0) + 8))
                    (param_1 + 0xe0,*(int *)(param_1 + 0xf8) + 1);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
    }
  }
  if (*param_4 != 0) {
    plVar4 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147398c52 FUN_147398c52 body=389 status=ok
// SIG undefined FUN_147398c52(void)

longlong FUN_147398c52(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x200000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x200000000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x74) = 5;
  *(byte *)(param_1 + 0x75) = (param_4 << 5 | *(byte *)(param_1 + 0x75) & 0x80) + 1;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(longlong *)(param_1 + 0xf0) = param_3;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x58) + 8) + 0x128);
  uVar2 = *(ulonglong *)(param_2 + 0x20f8);
  bVar4 = DAT_14c760c08 == 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(bool *)(param_1 + 0x158) = bVar4 && (~uVar2 & 0x41004000000) == 0;
  *(longlong *)(param_1 + 0x160) = lVar1 + 0x60;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x28));
  FUN_14318f248(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x28));
  uVar3 = FUN_1473a879e(*(longlong *)(param_1 + 0x80) + 0x640,0);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  return param_1;
}



// FUNCTION 147398dd8 FUN_147398dd8 body=153 status=ok
// SIG undefined FUN_147398dd8(void)

void FUN_147398dd8(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x75) & 0x40) != 0) {
    local_50 = &local_28;
    local_28 = 0x2e;
    local_1c = 0;
    local_24 = 0;
    local_18 = 0x800001000;
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_58 = 1;
    (*DAT_14ca79290)(*(undefined8 *)(param_1 + 0x88),0x10000,0x10000,0);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xbf;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147398e72 FUN_147398e72 body=31 status=ok
// SIG undefined FUN_147398e72(void)

void FUN_147398e72(longlong param_1)

{
  (*DAT_14ca790e0)(*(undefined8 *)(param_1 + 0x88));
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}



// FUNCTION 147398e92 FUN_147398e92 body=305 status=ok
// SIG undefined FUN_147398e92(void)

void FUN_147398e92(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  ulonglong uStack_44;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x75) & 0x40) != 0) {
    FUN_147398dd8(param_1);
  }
  local_70 = 0x2b;
  local_6c = 0;
  uStack_64 = 0;
  local_3c = 0;
  uStack_60 = (undefined4)*(undefined8 *)(param_3 + 0x3a8);
  uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x3a8) >> 0x20);
  uStack_58 = (undefined4)*(undefined8 *)(param_4 + 0x28);
  uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x28) >> 0x20);
  uStack_50 = *(undefined4 *)(param_4 + 0x30);
  local_4c = *(undefined8 *)(param_4 + 0x34);
  uStack_44 = (ulonglong)CONCAT14(*(undefined1 *)(param_2 + 0x380),*(undefined4 *)(param_4 + 0x3c));
  local_38 = param_5;
  if ((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x20fb) & 4) == 0) {
    (*DAT_14ca790d8)(*(undefined8 *)(param_1 + 0x88),&local_70,0);
  }
  else {
    local_88 = 0x3b9c73cd;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = 0;
    (*DAT_14ca79120)(*(undefined8 *)(param_1 + 0x88),&local_70);
  }
  *(undefined1 *)(param_1 + 0x74) = 2;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_1473af9fe(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x6a8));
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147398fc4 FUN_147398fc4 body=130 status=ok
// SIG undefined FUN_147398fc4(void)

void FUN_147398fc4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
    FUN_1473a0416((longlong *)(param_1 + 200),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 200);
  *(undefined8 *)(lVar2 + lVar3 * 0x28) = param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x28) = param_3;
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x18 + lVar3 * 0x28) = param_4;
  *(undefined1 *)(lVar2 + 0x20 + lVar3 * 0x28) = param_6;
  return;
}



// FUNCTION 147399046 FUN_147399046 body=333 status=ok
// SIG undefined FUN_147399046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147399046(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((DAT_14ca77c50 != 0 || _DAT_14ca77b3c != 0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
    FUN_1473da096(*(longlong *)(param_1 + 0xf8),param_1);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xe0);
  }
  iVar5 = *(int *)(param_1 + 0xd0);
  if ((longlong)iVar5 != 0) {
    lVar2 = *(longlong *)(param_1 + 200);
    lVar7 = 0;
    do {
      uVar3 = *(ulonglong *)(lVar2 + lVar7);
      uVar4 = *(undefined8 *)(lVar2 + 0x18 + lVar7);
      bVar1 = *(byte *)(lVar2 + 0x20 + lVar7);
      uVar6 = bVar1 ^ 1;
      (*DAT_14ca790c8)(*(undefined8 *)(param_1 + 0x88),uVar4,uVar3 & 0xffffffff,
                       *(undefined4 *)(lVar2 + 8 + lVar7),*(undefined8 *)(lVar2 + 0x10 + lVar7),
                       uVar3 << (4 - bVar1 & 0x3f),uVar6 * 8 + 8,uVar6 * 2 + 3);
      if (*(char *)(lVar2 + 0x20 + lVar7) == '\x01') {
        (*DAT_14ca79288)(*(undefined8 *)(param_1 + 0x88),uVar4,uVar3 & 0xffffffff,
                         *(undefined4 *)(lVar2 + 8 + lVar7));
      }
      lVar7 = lVar7 + 0x28;
    } while ((longlong)iVar5 * 0x28 != lVar7);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) < 0) {
    FUN_1473a04aa(param_1 + 200,0);
  }
  iVar5 = (*DAT_14ca79000)(*(undefined8 *)(param_1 + 0x88));
  if (iVar5 != 0) {
    FUN_1431b4552(iVar5,"VulkanRHI::vkEndCommandBuffer(GetHandle())",
                  ".\\Runtime/VulkanRHI/Private/VulkanCommandBuffer.cpp",0x10a);
  }
  *(undefined1 *)(param_1 + 0x74) = 3;
  return;
}



// FUNCTION 147399194 FUN_147399194 body=325 status=ok
// SIG undefined FUN_147399194(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147399194(longlong param_1)

{
  char cVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf0) + 0x28);
  EnterCriticalSection(lpCriticalSection);
  if (*(char *)(param_1 + 0x74) == '\x06') {
    (*DAT_14ca79008)(*(undefined8 *)(param_1 + 0x88),1);
  }
  *(undefined1 *)(param_1 + 0x74) = 1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  local_38 = 0x2a;
  local_34 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_28 = 1;
  iVar2 = (*DAT_14ca78ff8)(*(undefined8 *)(param_1 + 0x88));
  if (iVar2 != 0) {
    FUN_1431b4552(iVar2,"VulkanRHI::vkBeginCommandBuffer(CommandBufferHandle, &CmdBufBeginInfo)",
                  ".\\Runtime/VulkanRHI/Private/VulkanCommandBuffer.cpp",0x141);
  }
  if (DAT_14ca77c50 != 0 || _DAT_14ca77b3c != 0) {
    FUN_1473992da(param_1,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x58) + 8));
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_1473d9d78(*(longlong *)(param_1 + 0xf8),param_1);
    }
  }
  if ((*(byte *)(param_1 + 0x75) & 0x20) == 0) {
    cVar1 = FUN_1473a3eb4(*(undefined8 *)(param_1 + 0x80));
    if (cVar1 != '\0') {
      FUN_1473a2546(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x6b0),
                    *(undefined8 *)(param_1 + 0x88),
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x58) + 0x70) +
                     0x58));
    }
  }
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473992da FUN_1473992da body=198 status=ok
// SIG undefined FUN_1473992da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473992da(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((DAT_14ca77c50 != 0 || _DAT_14ca77b3c != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_1 + 0xf8) == 0)) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[2] = 0xffffffffffffffff;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = 0;
    puVar1[7] = puVar2;
    puVar1[6] = puVar2;
    puVar1[8] = param_2;
    puVar1[9] = 0;
    *(undefined8 **)(param_1 + 0xf8) = puVar1;
    uVar3 = 0x100;
    if ((*(byte *)(param_1 + 0x75) & 0x20) == 0) {
      uVar3 = 0x20;
    }
    FUN_1473d9c6e(puVar1,uVar3);
    return;
  }
  return;
}



// FUNCTION 1473993a0 FUN_1473993a0 body=176 status=ok
// SIG undefined FUN_1473993a0(void)

undefined8 FUN_1473993a0(longlong param_1,longlong param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_1473af9fe(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x6a8));
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  local_34 = *(undefined4 *)(param_2 + 0x124);
  plVar2 = (longlong *)FUN_1473a051c(param_1 + 0x168);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    lVar3 = FUN_1473af754(*(undefined8 *)(param_1 + 0x78),param_2);
    *plVar2 = lVar3;
  }
  else if (param_3 == '\0') {
    uVar1 = 0;
    goto LAB_14739942e;
  }
  uVar1 = FUN_1473af514(lVar3,param_2,param_4);
LAB_14739942e:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147399452 FUN_147399452 body=300 status=ok
// SIG undefined FUN_147399452(void)

void FUN_147399452(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x74) == '\x04') {
    if ((*(int *)(*(longlong *)(param_1 + 0xd8) + 8) != 1) &&
       (cVar5 = FUN_1473a8b0c(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x10)), cVar5 == '\0')
       ) {
      return;
    }
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xe1;
    iVar2 = *(int *)(param_1 + 0xc0);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(lVar3 + lVar6);
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (puVar4 != (undefined8 *)0x0 && *piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar2 * 8 != lVar6);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xc4) < 0) {
      FUN_1473a0dda(param_1 + 0xb8,0);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_1473a0266(param_1);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_1473a0344(param_1 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_1473a8920(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x10));
    *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + 1;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1473a0a90(param_1 + 0x168);
      FUN_1473afae6(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x6a8),
                    *(undefined8 *)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined1 *)(param_1 + 0x74) = 6;
  }
  return;
}



// FUNCTION 14739957e FUN_14739957e body=194 status=ok
// SIG undefined FUN_14739957e(void)

void FUN_14739957e(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 2);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1[1] + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_14318f32c(lVar1);
        FUN_1400020a8(lVar1);
        iVar2 = *(int *)(param_1 + 2);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = *(int *)(param_1 + 4);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1[3] + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_14318f32c(lVar1);
        FUN_1400020a8(lVar1);
        iVar2 = *(int *)(param_1 + 4);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  (*DAT_14ca78fd0)(*(undefined8 *)param_1[10],*param_1,0);
  *param_1 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147399640 FUN_147399640 body=135 status=ok
// SIG undefined FUN_147399640(void)

void FUN_147399640(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x27;
  local_14 = 0x200000000;
  local_1c = 0;
  local_c = param_2;
  iVar1 = (*DAT_14ca78fc8)(**(undefined8 **)(param_1 + 0x50),&local_20,0);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreateCommandPool(Device->GetInstanceHandle(), &CmdPoolInfo, VULKAN_CPU_ALLOCATOR, &Handle)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanCommandBuffer.cpp",0x1ce);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473996c8 FUN_1473996c8 body=223 status=ok
// SIG undefined FUN_1473996c8(void)

undefined8 * FUN_1473996c8(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  param_1[0xc] = param_2;
  param_1[0xd] = param_1;
  lVar1 = *(longlong *)(param_3 + 0x128);
  param_1[0xe] = lVar1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_147399640(param_1 + 2,*(undefined4 *)(lVar1 + 8));
  if (DAT_14ca77b70 != 0) {
    uVar2 = FUN_14001cc68(0x28,0x10);
    FUN_1473a911e(uVar2,*param_1);
    param_1[0x13] = uVar2;
  }
  uVar2 = FUN_1473997a8(param_1 + 2,0);
  param_1[0xf] = uVar2;
  return param_1;
}



// FUNCTION 1473997a8 FUN_1473997a8 body=218 status=ok
// SIG undefined FUN_1473997a8(void)

longlong FUN_1473997a8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = (ulonglong)uVar2;
  iVar5 = -1;
  do {
    if ((int)uVar4 < 1) {
      lVar3 = FUN_14001cc68(0x1b8,0x10);
      FUN_147398c52(lVar3,*(undefined8 *)(param_1 + 0x50),param_1,param_2);
      goto LAB_147399849;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar3 = *(longlong *)(lVar1 + -8 + uVar4 * 8);
    uVar4 = uVar4 - 1;
    iVar5 = iVar5 + 1;
  } while (((*(byte *)(lVar3 + 0x75) & 0x20) == 0) == (bool)(char)param_2);
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar1 + uVar4 * 8),(void *)(lVar1 + (longlong)(int)(uVar2 - iVar6) * 8),
            (longlong)iVar6 << 3);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x20) = uVar2 - 1;
  FUN_1473a0e9e((longlong *)(param_1 + 0x18));
  FUN_14318f248(lVar3);
LAB_147399849:
  iVar5 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar5 + 1U) {
    FUN_1473a0f3a((longlong *)(param_1 + 8),iVar5);
  }
  *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 8) = lVar3;
  return lVar3;
}



// FUNCTION 147399882 FUN_147399882 body=31 status=ok
// SIG undefined FUN_147399882(void)

void FUN_147399882(longlong param_1)

{
  FUN_1473992da(*(undefined8 *)(param_1 + 0x78));
  FUN_147399194(*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 1473998a2 FUN_1473998a2 body=76 status=ok
// SIG undefined FUN_1473998a2(void)

void FUN_1473998a2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_14739957e(param_1 + 0x10);
  return;
}



// FUNCTION 1473998ee FUN_1473998ee body=127 status=ok
// SIG undefined FUN_1473998ee(void)

void FUN_1473998ee(longlong *param_1,longlong param_2,float param_3)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  uVar1 = (ulonglong)(param_3 * 1e+09);
  FUN_1473a8aae(*param_1 + 0x640,*(undefined8 *)(param_2 + 0xd8),
                (longlong)(param_3 * 1e+09 - 9.223372e+18) & (longlong)uVar1 >> 0x3f | uVar1);
  FUN_147399452(param_2);
                    /* WARNING: Could not recover jumptable at 0x000147399966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return;
}



// FUNCTION 14739996e FUN_14739996e body=125 status=ok
// SIG undefined FUN_14739996e(void)

void FUN_14739996e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  iVar1 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_1473a0c18((longlong *)(param_1 + 0x88),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001473999d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1473999ec FUN_1473999ec body=281 status=ok
// SIG undefined FUN_1473999ec(void)

void FUN_1473999ec(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (*(int *)(param_1 + 0x90) == 0) goto LAB_147399a14;
  if (*(int *)(param_1 + 0x20) < 1) {
LAB_147399a69:
    lVar3 = FUN_1473997a8(param_1 + 0x10,0);
  }
  else {
    lVar5 = 0;
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar5 * 8);
      FUN_147399452(lVar4);
      if (((*(byte *)(lVar4 + 0x75) & 0x20) == 0) && (*(char *)(lVar4 + 0x74) == '\0')) {
        lVar3 = lVar4;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x20));
    if (lVar3 == 0) goto LAB_147399a69;
  }
  FUN_147399194(lVar3);
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x88);
    lVar5 = *(longlong *)(param_1 + 0x88);
    lVar4 = 0;
    do {
      (*DAT_14ca79288)(uVar2,*(undefined8 *)(lVar5 + lVar4),0,*(undefined4 *)(lVar5 + 8 + lVar4));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  FUN_147399046(lVar3);
  FUN_1431a68ea(*(undefined8 *)(param_1 + 0x70),lVar3,0,0);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1473a0c9e(param_1 + 0x88,0);
  }
LAB_147399a14:
                    /* WARNING: Could not recover jumptable at 0x000147399a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 147399b06 FUN_147399b06 body=293 status=ok
// SIG undefined FUN_147399b06(void)

void FUN_147399b06(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca77b70 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    local_28 = *(undefined8 *)(param_2 + 0x18);
    FUN_1431a68ea(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),1);
  }
  else {
    if (param_2 == 0) {
      local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = 1;
    }
    else {
      local_28 = *(undefined8 *)(param_2 + 0x18);
      local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = 2;
    }
    FUN_1431a68ea(uVar2,uVar3,uVar4);
    iVar1 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
      FUN_14739d94a(param_1 + 0xa0,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 8) =
         *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147399c44 FUN_147399c44 body=93 status=ok
// SIG undefined FUN_147399c44(void)

void FUN_147399c44(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 8) != param_2) {
        FUN_147399452();
        iVar1 = *(int *)(param_1 + 0x10);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147399c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147399ca2 FUN_147399ca2 body=110 status=ok
// SIG undefined FUN_147399ca2(void)

int FUN_147399ca2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x20) < 1) {
    iVar6 = 0;
  }
  else {
    lVar5 = 0;
    iVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar5 * 8);
      if (*(longlong *)(lVar1 + 0xf8) != 0) {
        uVar3 = *(longlong *)(lVar1 + 0xe0) - *(longlong *)(lVar1 + 0x100);
        uVar4 = -uVar3;
        if ((longlong)uVar4 < 0) {
          uVar4 = uVar3;
        }
        if (uVar4 < 3) {
          iVar2 = FUN_1431ba44c(*(undefined8 *)(lVar1 + 0xf8),0);
          iVar6 = iVar6 + iVar2;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x20));
  }
  return iVar6;
}



// FUNCTION 147399d10 FUN_147399d10 body=204 status=ok
// SIG undefined FUN_147399d10(void)

void FUN_147399d10(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar2 = FUN_144a5d717();
  if ((cVar2 != '\0') && (DAT_14c842750 != '\0')) {
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
    if (DAT_14ca85108 < puVar4) {
      FUN_140023dd8(&DAT_14ca85100,0x30);
      puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar3 + 5;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar4;
    *DAT_14ca85130 = puVar3;
    DAT_14ca85130 = puVar3 + 1;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_14a357f30;
    puVar3[2] = param_1 + 0x10;
    puVar3[3] = uVar1;
    *(char *)(puVar3 + 4) = (char)param_2;
    return;
  }
  FUN_14318f4a6(param_1 + 0x10,*(undefined8 *)(param_1 + 0x70),param_2);
  return;
}



// FUNCTION 147399e0e FUN_147399e0e body=563 status=ok
// SIG undefined FUN_147399e0e(void)

void FUN_147399e0e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x170);
  lVar3 = *(longlong *)(lVar2 + 0x88);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x478);
    if (lVar1 != 0) {
      local_18 = *(undefined1 *)(lVar1 + 0xe1);
      local_28 = 0;
      local_24 = 0;
      local_30 = param_1;
      local_20 = lVar2;
      FUN_1473a0fbf(&local_30,lVar1 + -0xa0,param_1 + 0x480,param_1 + 0x180);
      lVar2 = *(longlong *)(param_1 + 0x170);
      lVar3 = *(longlong *)(lVar2 + 0x88);
      if (lVar3 == 0) goto LAB_147399e84;
    }
    lVar1 = *(longlong *)(lVar3 + 0x480);
    if (lVar1 != 0) {
      local_18 = *(undefined1 *)(lVar1 + 0xe1);
      local_28 = 3;
      local_24 = 1;
      local_30 = param_1;
      local_20 = lVar2;
      FUN_1473a0fbf(&local_30,lVar1 + -0xa0,param_1 + 0x486,param_1 + 0x300);
      lVar2 = *(longlong *)(param_1 + 0x170);
      lVar3 = *(longlong *)(lVar2 + 0x88);
      if (lVar3 == 0) goto LAB_147399e84;
    }
    lVar1 = *(longlong *)(lVar3 + 0x490);
    if (lVar1 != 0) {
      local_18 = *(undefined1 *)(lVar1 + 0xe1);
      local_28 = 1;
      local_24 = 3;
      local_30 = param_1;
      local_20 = lVar2;
      FUN_1473a0fbf(&local_30,lVar1 + -0xa0,param_1 + 0x482,param_1 + 0x200);
      lVar2 = *(longlong *)(param_1 + 0x170);
      lVar3 = *(longlong *)(lVar2 + 0x88);
      if (lVar3 == 0) goto LAB_147399e84;
    }
    lVar1 = *(longlong *)(lVar3 + 0x498);
    if (lVar1 != 0) {
      local_18 = *(undefined1 *)(lVar1 + 0xe1);
      local_28 = 2;
      local_24 = 4;
      local_30 = param_1;
      local_20 = lVar2;
      FUN_1473a0fbf(&local_30,lVar1 + -0xa0,param_1 + 0x484,param_1 + 0x280);
      lVar2 = *(longlong *)(param_1 + 0x170);
      lVar3 = *(longlong *)(lVar2 + 0x88);
      if (lVar3 == 0) goto LAB_147399e84;
    }
    lVar3 = *(longlong *)(lVar3 + 0x488);
    if (lVar3 != 0) {
      local_18 = *(undefined1 *)(lVar3 + 0xe1);
      local_28 = 4;
      local_24 = 2;
      local_30 = param_1;
      local_20 = lVar2;
      FUN_1473a0fbf(&local_30,lVar3 + -0xa0,param_1 + 0x488,param_1 + 0x380);
    }
  }
LAB_147399e84:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14739a042 FUN_14739a042 body=126 status=ok
// SIG undefined FUN_14739a042(void)

void FUN_14739a042(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_20;
  undefined4 local_1c;
  longlong local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(longlong *)(param_1 + 0x178);
  if (*(longlong *)(local_18 + 8) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(local_18 + 8) + 0x38);
  }
  local_10 = *(undefined1 *)(lVar1 + 0x189);
  local_20 = 5;
  local_1c = 0;
  local_28 = param_1;
  FUN_1473a13da(&local_28,lVar1,param_1 + 0x48a,param_1 + 0x400);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739a0c2 FUN_14739a0c2 body=269 status=ok
// SIG undefined FUN_14739a0c2(void)

void FUN_14739a0c2(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14739a042();
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + 0x88);
  FUN_1473b003e(*(undefined8 *)(param_1 + 0x178));
  (*DAT_14ca79068)(uVar3,param_2,param_3,param_4);
  if (*(int *)(DAT_14ca77b88 + 4) != 0) {
    local_40 = 0;
    local_38 = 0;
    FUN_14318eafa(*(undefined8 *)(param_1 + 0x150));
    FUN_14739639c(*(undefined8 *)(param_1 + 0x150));
  }
  if (((*(longlong *)(param_1 + 0x118) == 0) && (*(char *)(param_1 + 0x4a0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x1c);
    *piVar1 = *piVar1 + 1;
    lVar2 = *(longlong *)(param_1 + 0x4b8);
    *(undefined4 *)(lVar2 + 0x20) = param_2;
    *(undefined4 *)(lVar2 + 0x24) = param_3;
    *(undefined4 *)(lVar2 + 0x28) = param_4;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739a1d0 FUN_14739a1d0 body=96 status=ok
// SIG undefined FUN_14739a1d0(void)

void FUN_14739a1d0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_18 = 0;
  FUN_14318eafa(*(undefined8 *)(param_1 + 0x150));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14739639c(*(undefined8 *)(param_1 + 0x150));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 14739a232 FUN_14739a232 body=264 status=ok
// SIG undefined FUN_14739a232(void)

void FUN_14739a232(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14739a042();
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + 0x88);
  FUN_1473b003e(*(undefined8 *)(param_1 + 0x178));
  (*DAT_14ca79070)(uVar3,*(undefined8 *)(param_2 + 0x50),param_3 + *(int *)(param_2 + 0x60));
  if (*(int *)(DAT_14ca77b88 + 4) != 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_14318eafa(*(undefined8 *)(param_1 + 0x150));
    FUN_14739639c(*(undefined8 *)(param_1 + 0x150));
  }
  if ((*(char *)(param_1 + 0x4a0) == '\x01') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x1c);
    *piVar1 = *piVar1 + 1;
    lVar2 = *(longlong *)(param_1 + 0x4b8);
    *(undefined1 **)(lVar2 + 0x20) = &DAT_100000001;
    *(undefined4 *)(lVar2 + 0x28) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739a33c FUN_14739a33c body=265 status=ok
// SIG undefined FUN_14739a33c(void)

void FUN_14739a33c(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*param_4 + 0x30))(param_4);
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  local_48 = FUN_147397304(*(undefined8 *)(lVar1 + 0x78),uVar2,0x60);
  uVar3 = 0xff;
  if ((byte)*(int *)(param_2 + 0x9c) < 5) {
    uVar3 = 0x201040300U >> ((byte)(*(int *)(param_2 + 0x9c) << 3) & 0x3f) & 0xffffffff;
  }
  FUN_14739cef8(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x90),uVar3,param_3,uVar2);
  QueryPerformanceCounter(&local_40);
  dVar4 = (double)(float)((double)local_40.QuadPart * DAT_14c83f420 + 16777216.0);
  if (((double)param_4[0xb] != dVar4) || (NAN((double)param_4[0xb]) || NAN(dVar4))) {
    param_4[0xb] = (longlong)dVar4;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739a446 FUN_14739a446 body=217 status=ok
// SIG undefined FUN_14739a446(void)

void FUN_14739a446(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*param_3 + 0x30))(param_3);
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  local_48 = FUN_147397304(*(undefined8 *)(lVar1 + 0x78),uVar2,0x10);
  FUN_14739cef8(*(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x10),0,param_2,uVar2);
  QueryPerformanceCounter(&local_38);
  dVar3 = (double)(float)((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0);
  if (((double)param_3[0xb] != dVar3) || (NAN((double)param_3[0xb]) || NAN(dVar3))) {
    param_3[0xb] = (longlong)dVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739a520 FUN_14739a520 body=127 status=ok
// SIG undefined FUN_14739a520(void)

void FUN_14739a520(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = *param_6;
  uStack_10 = param_6[1];
  local_50 = &local_18;
  local_28 = *param_5;
  uStack_20 = param_5[1];
  local_58 = &local_28;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_14739a5a0();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739a5a0 FUN_14739a5a0 body=722 status=ok
// SIG undefined FUN_14739a5a0(void)

void FUN_14739a5a0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  int local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_4[1] != 0) {
    lVar7 = *param_4;
    lVar9 = lVar7 + (longlong)(int)param_4[1] * 8;
    do {
      lVar10 = 0xff;
      if ((ulonglong)*(byte *)(param_2 + 0x9c) < 5) {
        lVar10 = *(longlong *)(&DAT_14a3588c8 + (ulonglong)*(byte *)(param_2 + 0x9c) * 8);
      }
      uVar1 = *(ushort *)(lVar7 + 6);
      if (3 < uVar1) {
        uVar2 = *(ushort *)(lVar7 + 4);
        lVar4 = *param_3;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x90);
        lVar13 = (ulonglong)*(ushort *)(lVar7 + 2) + *(longlong *)(lVar5 + 0xf0 + lVar10 * 0x10);
        lVar11 = 0;
        bVar6 = false;
        do {
          bVar12 = bVar6;
          iVar3 = *(int *)((ulonglong)uVar2 + lVar4 + lVar11);
          bVar14 = *(int *)(lVar13 + lVar11) != iVar3;
          *(int *)(lVar13 + lVar11) = iVar3;
          lVar11 = lVar11 + 4;
          bVar6 = (bool)(bVar12 | bVar14);
        } while ((ulonglong)(uVar1 >> 2) << 2 != lVar11);
        if (bVar12 || bVar14) {
          *(undefined4 *)(lVar5 + 0x154 + lVar10 * 4) = 1;
        }
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != lVar9);
  }
  if ((longlong)(int)param_6[1] != 0) {
    lVar9 = *param_6;
    lVar7 = (longlong)(int)param_6[1] << 4;
    do {
      FUN_1473a17ef(&local_50,lVar9);
      if ((local_50 != -1) && (local_4c != -1)) {
        lVar10 = 0xff;
        if ((ulonglong)*(byte *)(param_2 + 0x9c) < 5) {
          lVar10 = *(longlong *)(&DAT_14a3588c8 + (ulonglong)*(byte *)(param_2 + 0x9c) * 8);
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x90);
        lVar5 = *(longlong *)(lVar4 + 0xf0 + lVar10 * 0x10);
        iVar3 = *(int *)(lVar5 + (ulonglong)*(ushort *)(lVar9 + 8));
        *(int *)(lVar5 + (ulonglong)*(ushort *)(lVar9 + 8)) = local_50;
        if (iVar3 != local_50) {
          *(undefined4 *)(lVar4 + 0x154 + lVar10 * 4) = 1;
        }
      }
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  lVar9 = param_5[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar7 = *param_5;
    lVar10 = 0;
    do {
      if ((*(char *)(lVar7 + 10 + lVar10) == '\x02') &&
         (*(longlong *)(lVar7 + lVar10) != 0 && *(char *)(param_2 + 0xc) == '\t')) {
        FUN_1473b0faa(*(undefined8 *)(param_1 + 0x170),1,*(undefined2 *)(lVar7 + 8 + lVar10));
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)(int)lVar9 * 0x10 != lVar10);
    lVar9 = param_5[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar7 = *param_5;
      lVar10 = 0;
      do {
        switch(*(undefined1 *)(lVar7 + 10 + lVar10)) {
        case 0:
          FUN_14739a33c(param_1,param_2,*(undefined2 *)(lVar7 + 8 + lVar10),
                        *(undefined8 *)(lVar7 + lVar10));
          break;
        case 1:
          if (*(longlong *)(lVar7 + lVar10) != 0) {
            uVar8 = 0x201040300U >> ((byte)(*(int *)(param_2 + 0x9c) << 3) & 0x3f) & 0xffffffff;
            if (4 < (byte)*(int *)(param_2 + 0x9c)) {
              uVar8 = 0xff;
            }
            FUN_1473b0f42(*(undefined8 *)(param_1 + 0x170),uVar8,*(undefined2 *)(lVar7 + 8 + lVar10)
                         );
          }
          break;
        case 3:
          uVar8 = 0x201040300U >> ((byte)(*(int *)(param_2 + 0x9c) << 3) & 0x3f) & 0xffffffff;
          if (4 < (byte)*(int *)(param_2 + 0x9c)) {
            uVar8 = 0xff;
          }
          FUN_14739d0b8(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x90),uVar8,
                        *(undefined2 *)(lVar7 + 8 + lVar10),*(undefined8 *)(lVar7 + lVar10));
          break;
        case 4:
          FUN_14739ac4a(param_1,param_2,*(undefined2 *)(lVar7 + 8 + lVar10),
                        *(undefined8 *)(lVar7 + lVar10));
        }
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar9 * 0x10 != lVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739a874 FUN_14739a874 body=127 status=ok
// SIG undefined FUN_14739a874(void)

void FUN_14739a874(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = *param_6;
  uStack_10 = param_6[1];
  local_50 = &local_18;
  local_28 = *param_5;
  uStack_20 = param_5[1];
  local_58 = &local_28;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_14739a8f4();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739a8f4 FUN_14739a8f4 body=550 status=ok
// SIG undefined FUN_14739a8f4(void)

void FUN_14739a8f4(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  int local_48;
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_4[1] != 0) {
    lVar6 = *param_4;
    lVar8 = lVar6 + (longlong)(int)param_4[1] * 8;
    do {
      uVar1 = *(ushort *)(lVar6 + 6);
      if (3 < uVar1) {
        uVar2 = *(ushort *)(lVar6 + 4);
        lVar9 = *param_3;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x10);
        lVar7 = (ulonglong)*(ushort *)(lVar6 + 2) + *(longlong *)(lVar4 + 0xf0);
        lVar10 = 0;
        bVar5 = false;
        do {
          bVar11 = bVar5;
          iVar3 = *(int *)((ulonglong)uVar2 + lVar9 + lVar10);
          bVar12 = *(int *)(lVar7 + lVar10) != iVar3;
          *(int *)(lVar7 + lVar10) = iVar3;
          lVar10 = lVar10 + 4;
          bVar5 = (bool)(bVar11 | bVar12);
        } while ((ulonglong)(uVar1 >> 2) * 4 != lVar10);
        if (bVar11 || bVar12) {
          *(undefined4 *)(lVar4 + 0x104) = 1;
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != lVar8);
  }
  if ((longlong)(int)param_6[1] != 0) {
    lVar8 = *param_6;
    lVar6 = (longlong)(int)param_6[1] << 4;
    do {
      FUN_1473a17ef(&local_48,lVar8);
      if ((local_48 != -1) && (local_44 != -1)) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x10);
        lVar4 = *(longlong *)(lVar9 + 0xf0);
        iVar3 = *(int *)(lVar4 + (ulonglong)*(ushort *)(lVar8 + 8));
        *(int *)(lVar4 + (ulonglong)*(ushort *)(lVar8 + 8)) = local_48;
        if (iVar3 != local_48) {
          *(undefined4 *)(lVar9 + 0x104) = 1;
        }
      }
      lVar8 = lVar8 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  lVar8 = param_5[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar6 = *param_5;
    lVar9 = 0;
    do {
      if ((*(char *)(lVar6 + 10 + lVar9) == '\x02') && (*(longlong *)(lVar6 + lVar9) != 0)) {
        FUN_1473afe4e(*(undefined8 *)(param_1 + 0x178),0,*(undefined2 *)(lVar6 + 8 + lVar9));
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)lVar8 * 0x10 != lVar9);
    lVar8 = param_5[1];
    if ((longlong)(int)lVar8 != 0) {
      lVar6 = *param_5;
      lVar9 = 0;
      do {
        switch(*(undefined1 *)(lVar6 + 10 + lVar9)) {
        case 0:
          FUN_14739a446(param_1,*(undefined2 *)(lVar6 + 8 + lVar9),*(undefined8 *)(lVar6 + lVar9));
          break;
        case 1:
          if (*(longlong *)(lVar6 + lVar9) != 0) {
            FUN_1473afc60(*(undefined8 *)(param_1 + 0x178),0,*(undefined2 *)(lVar6 + 8 + lVar9));
          }
          break;
        case 3:
          FUN_14739d0b8(*(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x10),0,
                        *(undefined2 *)(lVar6 + 8 + lVar9),*(undefined8 *)(lVar6 + lVar9));
          break;
        case 4:
          FUN_14739ad98(param_1,param_2,*(undefined2 *)(lVar6 + 8 + lVar9),
                        *(undefined8 *)(lVar6 + lVar9));
        }
        lVar9 = lVar9 + 0x10;
      } while ((longlong)(int)lVar8 * 0x10 != lVar9);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739ab1c FUN_14739ab1c body=109 status=ok
// SIG undefined FUN_14739ab1c(void)

void FUN_14739ab1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  memset(*(void **)(param_1 + 0x578),0,(longlong)*(int *)(param_1 + 0x580) << 3);
  if (0 < *(int *)(param_2 + 0x60)) {
    lVar1 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x58);
      if (*(longlong *)(param_2 + 0x58) == 0) {
        lVar3 = param_2 + 0x18;
      }
      lVar2 = *(longlong *)(param_2 + 8);
      if (*(longlong *)(param_2 + 8) == 0) {
        lVar2 = param_2;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x578) + (ulonglong)*(byte *)(lVar2 + lVar1) * 8) =
           *(undefined8 *)(lVar3 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_2 + 0x60));
  }
  return;
}



// FUNCTION 14739ab9a FUN_14739ab9a body=175 status=ok
// SIG undefined FUN_14739ab9a(void)

void FUN_14739ab9a(longlong param_1,byte param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x578) + (ulonglong)param_2 * 8);
  lVar8 = 0;
  bVar7 = true;
  do {
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x88) + 0x478 +
             (longlong)(int)(&DAT_14a357e20)[lVar8] * 8);
    if (lVar4 != 0) {
      plVar2 = *(longlong **)(lVar4 + 8);
      lVar4 = (longlong)(int)plVar2[1];
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          if (*(byte *)(*plVar2 + lVar5) == param_2) {
            lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x90) + 0xc0);
            uVar6 = (ulonglong)((&DAT_14a357e20)[lVar8] & 0xff);
            *(int *)(*(longlong *)(lVar4 + 0x10 + uVar6 * 0x48) +
                    (ulonglong)*(byte *)(*(longlong *)(lVar4 + 8 + uVar6 * 0x48) + lVar5) * 4) =
                 *(int *)(lVar1 + 0x48) + param_3;
            break;
          }
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
      }
    }
    lVar8 = 1;
    bVar3 = !bVar7;
    bVar7 = false;
    if (bVar3) {
      return;
    }
  } while( true );
}



// FUNCTION 14739ac4a FUN_14739ac4a body=333 status=ok
// SIG undefined FUN_14739ac4a(void)

void FUN_14739ac4a(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  
  uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
  switch(*(undefined1 *)(param_2 + 0x9c)) {
  case 0:
    lVar5 = param_2 + 0xa0;
    if (param_2 == 0) {
      lVar5 = param_2;
    }
    uVar3 = 0;
    break;
  case 1:
    lVar5 = param_2 + 0xa0;
    if (param_2 == 0) {
      lVar5 = param_2;
    }
    uVar3 = CONCAT71(uVar4,3);
    break;
  case 2:
    lVar5 = param_2 + 0xa0;
    if (param_2 == 0) {
      lVar5 = param_2;
    }
    uVar3 = CONCAT71(uVar4,4);
    break;
  case 3:
    lVar5 = param_2 + 0xa0;
    if (param_2 == 0) {
      lVar5 = param_2;
    }
    uVar3 = CONCAT71(uVar4,1);
    break;
  case 4:
    lVar5 = param_2 + 0xa0;
    if (param_2 == 0) {
      lVar5 = param_2;
    }
    uVar3 = CONCAT71(uVar4,2);
    break;
  default:
    lVar5 = 0;
    uVar3 = CONCAT71(uVar4,0xff);
  }
  if (*(longlong *)(param_4 + 0x70) != 0) {
    FUN_1473d954e(param_4);
  }
  if (param_3 < *(uint *)(lVar5 + 0x48)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x90);
    if (*(int *)(*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar2 + 0x88) + 0x110) + (uVar3 & 0xff) * 0x18) + 4 +
                (longlong)(int)param_3 * 0x18) == 8) {
      FUN_14739ae36(lVar2,uVar3 & 0xffffffff,param_3,param_4);
    }
    else {
      FUN_14739ae9e(lVar2,uVar3 & 0xffffffff,param_3,param_4);
    }
    if (*(char *)(*(longlong *)(lVar5 + 0x28) + 4 + (longlong)(int)param_3 * 8) == '\0') {
      return;
    }
  }
  *(longlong *)
   ((ulonglong)*(byte *)(lVar5 + 0xe0) * 0x80 + param_1 + 0x180 + (ulonglong)param_3 * 8) = param_4;
  puVar1 = (ushort *)(param_1 + 0x480 + (ulonglong)*(byte *)(lVar5 + 0xe0) * 2);
  *puVar1 = *puVar1 | (ushort)(1 << ((byte)param_3 & 0x1f));
  return;
}



// FUNCTION 14739ad98 FUN_14739ad98 body=157 status=ok
// SIG undefined FUN_14739ad98(void)

void FUN_14739ad98(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_3 < *(uint *)(param_2 + 0xf0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x10);
    if (*(int *)(**(longlong **)(*(longlong *)(lVar1 + 0x88) + 0x110) + 4 +
                (longlong)(int)param_3 * 0x18) == 8) {
      FUN_14739ae36(lVar1,0,param_3,param_4);
    }
    else {
      FUN_14739ae9e(lVar1,0,param_3,param_4);
    }
    if (*(char *)(*(longlong *)(param_2 + 0xd0) + 4 + (longlong)(int)param_3 * 8) == '\0') {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x400 + (ulonglong)param_3 * 8) = param_4;
  *(ushort *)(param_1 + 0x48a) =
       *(ushort *)(param_1 + 0x48a) | (ushort)(1 << ((byte)param_3 & 0x1f));
  return;
}



// FUNCTION 14739ae36 FUN_14739ae36 body=104 status=ok
// SIG undefined FUN_14739ae36(void)

void FUN_14739ae36(longlong param_1,byte param_2,undefined4 param_3,longlong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = 0x4000;
  if (*(longlong *)(param_4 + 0x70) == 0) {
    uVar2 = *(undefined4 *)(param_4 + 0x28);
  }
  bVar1 = FUN_1473a1850((ulonglong)((uint)param_2 * 0x48) + *(longlong *)(param_1 + 0xc0),param_3,
                        *(undefined8 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x40),0,uVar2,
                        *(undefined4 *)(param_4 + 0x48));
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | bVar1;
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | bVar1;
  return;
}



// FUNCTION 14739ae9e FUN_14739ae9e body=104 status=ok
// SIG undefined FUN_14739ae9e(void)

void FUN_14739ae9e(longlong param_1,byte param_2,undefined4 param_3,longlong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = 0x4000;
  if (*(longlong *)(param_4 + 0x70) == 0) {
    uVar2 = *(undefined4 *)(param_4 + 0x28);
  }
  bVar1 = FUN_1473a192a((ulonglong)((uint)param_2 * 0x48) + *(longlong *)(param_1 + 0xc0),param_3,
                        *(undefined8 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x40),
                        *(undefined4 *)(param_4 + 0x48),uVar2,0);
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | bVar1;
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | bVar1;
  return;
}



// FUNCTION 14739af16 FUN_14739af16 body=308 status=ok
// SIG undefined FUN_14739af16(void)

void FUN_14739af16(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  param_4 = param_4 + (uint)(param_4 == 0);
  FUN_143151cb2(*(longlong *)(param_1 + 8) + 0x248,
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x17c),0,
                *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x78),param_4 * param_3);
  FUN_147399e0e(param_1);
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  FUN_1473b05c8(*(undefined8 *)(param_1 + 0x170),lVar2);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x170) + 0x78);
  if (iVar4 == 0) {
    iVar3 = 3;
  }
  else if (iVar4 == 2) {
    iVar3 = 2;
  }
  else {
    iVar3 = (uint)(iVar4 == 5) * 2 + 1;
  }
  iVar4 = iVar3 * param_3 + (uint)(iVar4 == 1) * 2;
  (*DAT_14ca79048)(*(undefined8 *)(lVar2 + 0x88),iVar4,param_4,param_2,0);
  if (((*(longlong *)(param_1 + 0x118) == 0) && (*(char *)(param_1 + 0x4a0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x14);
    *piVar1 = *piVar1 + param_4 * param_3;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x18);
    *piVar1 = *piVar1 + iVar4 * param_4;
  }
  return;
}



// FUNCTION 14739b04a FUN_14739b04a body=376 status=ok
// SIG undefined FUN_14739b04a(void)

void FUN_14739b04a(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6,int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  param_8 = param_8 + (uint)(param_8 == 0);
  FUN_143151cb2(*(longlong *)(param_1 + 8) + 0x248,
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x17c),0,
                *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x78),param_8 * param_7);
  FUN_147399e0e(param_1);
  lVar3 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar3 + 0x80) != 0) {
    FUN_14739859c(lVar3,0,0);
  }
  uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x78) + 0x88);
  FUN_1473b05c8(*(undefined8 *)(param_1 + 0x170));
  (*DAT_14ca79040)(uVar4,*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x60),
                   *(int *)(param_2 + 0x24) == 4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x170) + 0x78);
  if (iVar2 == 0) {
    iVar5 = 3;
  }
  else if (iVar2 == 2) {
    iVar5 = 2;
  }
  else {
    iVar5 = (uint)(iVar2 == 5) * 2 + 1;
  }
  (*DAT_14ca79050)(uVar4,iVar5 * param_7 + (uint)(iVar2 == 1) * 2,param_8,param_6,param_3,param_4);
  if (((*(longlong *)(param_1 + 0x118) == 0) && (*(char *)(param_1 + 0x4a0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x14);
    *piVar1 = *piVar1 + param_8 * param_7;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x18);
    *piVar1 = *piVar1 + param_8 * param_5;
  }
  return;
}



// FUNCTION 14739b1c2 FUN_14739b1c2 body=155 status=ok
// SIG undefined FUN_14739b1c2(void)

void FUN_14739b1c2(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_147399e0e();
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  FUN_1473b05c8(*(undefined8 *)(param_1 + 0x170),lVar2);
  (*DAT_14ca79178)(*(undefined8 *)(lVar2 + 0x88),param_2,param_3,param_4);
  if (((*(longlong *)(param_1 + 0x118) == 0) && (*(char *)(param_1 + 0x4a0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 14739b25e FUN_14739b25e body=167 status=ok
// SIG undefined FUN_14739b25e(void)

void FUN_14739b25e(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_147399e0e();
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  FUN_1473b05c8(*(undefined8 *)(param_1 + 0x170),lVar2);
  (*DAT_14ca79188)(*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(param_2 + 0x50),
                   param_3 + *(int *)(param_2 + 0x60),1,0xc);
  if (((*(longlong *)(param_1 + 0x118) == 0) && (*(char *)(param_1 + 0x4a0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x4b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4b8) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 14739b30e FUN_14739b30e body=31 status=ok
// SIG undefined FUN_14739b30e(void)

void FUN_14739b30e(longlong param_1)

{
  FUN_1473a4ba6(*(undefined8 *)(param_1 + 0x48));
  FUN_1473a4890(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 14739b336 FUN_14739b336 body=95 status=ok
// SIG undefined FUN_14739b336(void)

void FUN_14739b336(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014739b383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca79028)(*(undefined8 *)(*(longlong *)(lVar1 + 0x78) + 0x88),param_2,param_3);
  return;
}



// FUNCTION 14739b396 FUN_14739b396 body=91 status=ok
// SIG undefined FUN_14739b396(void)

void FUN_14739b396(longlong param_1)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x1a78) != *(longlong *)(param_1 + 0x128)) {
    *(undefined1 *)(param_1 + 0x130) = 1;
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x80) != 0) {
    FUN_14739859c(*(longlong *)(param_1 + 0x150),0,0);
  }
  *(undefined1 *)(param_1 + 0x130) = 1;
  FUN_14739b3f2(param_1);
  return;
}



// FUNCTION 14739b3f2 FUN_14739b3f2 body=112 status=ok
// SIG undefined FUN_14739b3f2(void)

void FUN_14739b3f2(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x130) == '\x01') {
    local_20 = 0;
    local_18 = 0;
    FUN_14318eafa(*(undefined8 *)(param_1 + 0x150));
    FUN_14739639c(*(undefined8 *)(param_1 + 0x150));
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739b464 FUN_14739b464 body=181 status=ok
// SIG undefined FUN_14739b464(void)

void FUN_14739b464(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  if ((*(longlong *)(lVar1 + 0x78) != 0) &&
     ((byte)(*(char *)(*(longlong *)(lVar1 + 0x78) + 0x74) - 1U) < 2)) {
    local_40 = 0;
    local_38 = 0;
    FUN_14318eafa(*(undefined8 *)(param_1 + 0x150));
    if (DAT_14ca78910 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739b534 FUN_14739b534 body=298 status=ok
// SIG undefined FUN_14739b534(void)

void FUN_14739b534(longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  ulonglong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  if (*(longlong *)(param_3 + 0x18) != 0) {
    uVar2 = FUN_1473a83a6();
    lVar3 = *(longlong *)(param_3 + 0x18);
    if (param_5 <= uVar2) goto LAB_14739b5cf;
    if (lVar3 != 0) {
      FUN_1473a2c42(*(longlong *)(param_1 + 0x120) + 0x5d0,0,(longlong *)(param_3 + 0x18));
    }
  }
  lVar3 = FUN_143192298(*(longlong *)(param_1 + 0x120) + 0x5d0,param_5,2,8);
  *(longlong *)(param_3 + 0x18) = lVar3;
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_1 + 0x120);
LAB_14739b5cf:
  *(uint *)(param_3 + 0x20) = param_5;
  local_68 = local_58;
  local_58[1] = 0;
  local_58[2] = (ulonglong)param_5;
  local_58[0] = (ulonglong)(uint)(param_4 + *(int *)(param_2 + 0x60));
  (*DAT_14ca793f0)(*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(param_2 + 0x50),
                   *(undefined8 *)(lVar3 + 0x38),1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739b660 FUN_14739b660 body=67 status=ok
// SIG undefined FUN_14739b660(void)

void FUN_14739b660(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  *(longlong *)(param_2 + 0x20) = lVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar1 + 0xe0);
  return;
}



// FUNCTION 14739b6a4 FUN_14739b6a4 body=131 status=ok
// SIG undefined FUN_14739b6a4(void)

longlong FUN_14739b6a4(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_1473a4c5e(*(undefined8 *)(param_1 + 0x48));
  lVar1 = *(longlong *)(lVar3 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  if ((*(longlong *)(lVar1 + 0x78) == 0) ||
     (cVar2 = *(char *)(*(longlong *)(lVar1 + 0x78) + 0x74), cVar2 == '\x04')) {
    FUN_14739639c(lVar1);
    if (*(longlong *)(lVar1 + 0x80) != 0) {
      FUN_14739859c(lVar1,0,0);
    }
    cVar2 = *(char *)(*(longlong *)(lVar1 + 0x78) + 0x74);
  }
  if (1 < (byte)(cVar2 - 1U)) {
    FUN_147399194();
  }
  return lVar3;
}



// FUNCTION 14739b728 FUN_14739b728 body=103 status=ok
// SIG undefined FUN_14739b728(void)

void FUN_14739b728(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar5 = plVar2;
      cVar4 = (**(code **)(*plVar2 + 8))(plVar2);
      *(undefined8 **)(param_3 + (ulonglong)(cVar4 == '\x02') * 8) = puVar5;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 14739b790 FUN_14739b790 body=291 status=ok
// SIG undefined FUN_14739b790(void)

void FUN_14739b790(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      lVar3 = *plVar2;
      lVar4 = *(longlong *)(lVar3 + 0x150);
      if (*(longlong *)(lVar3 + 0x118) == 0) {
        FUN_14739b396(lVar3);
        if (*(longlong *)(lVar4 + 0x80) != 0) {
          FUN_14739859c(lVar4,0,0);
        }
        if ((*(longlong *)(lVar4 + 0x78) != 0) &&
           (*(char *)(*(longlong *)(lVar4 + 0x78) + 0x74) == '\x01')) {
          FUN_14739b3f2(lVar3);
        }
        FUN_147399c44(lVar4 + 0x10);
      }
      else {
        if (*(longlong *)(lVar4 + 0x80) != 0) {
          FUN_14739859c(lVar4,0,0);
        }
        local_58 = 0;
        local_50 = 0;
        FUN_14318eafa(lVar4,&local_58);
        FUN_1473a4ce4(*(undefined8 *)(param_1 + 0x48));
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_1400020a8(plVar2);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14739b8b4 FUN_14739b8b4 body=78 status=ok
// SIG undefined FUN_14739b8b4(void)

undefined8 * FUN_14739b8b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a356e60;
  param_1[6] = &PTR_LAB_14a356e70;
  FUN_147398476();
  param_1[6] = &PTR_FUN_14a3588b8;
  FUN_144a94e2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14739b90c FUN_14739b90c body=107 status=ok
// SIG undefined FUN_14739b90c(void)

uint FUN_14739b90c(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  uVar2 = 1;
  switch(*(undefined1 *)(lVar1 + 0x32)) {
  case 0:
  case 2:
    break;
  case 1:
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar2 = (uint)*(ushort *)(lVar1 + 0x2e);
    break;
  case 3:
    uVar2 = 6;
    break;
  case 4:
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar2 = (uint)*(ushort *)(lVar1 + 0x2e) * 6;
    break;
  default:
    FUN_1431b6068(param_1);
  }
  return uVar2;
}



// FUNCTION 14739b978 FUN_14739b978 body=340 status=ok
// SIG undefined FUN_14739b978(void)

undefined4 *
FUN_14739b978(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_14739bace(param_1,local_50);
  FUN_14739bc84(param_3,local_48);
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(*local_48 >> 0x14) & 0xffff ^ (uint)(*local_48 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_14739bbbc(param_1,uVar2,local_48);
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
      *(uint *)((longlong)local_48 + 0x2c) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 5) =
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
      FUN_14739bd8e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739bace FUN_14739bace body=238 status=ok
// SIG undefined FUN_14739bace(void)

int * FUN_14739bace(longlong *param_1,int *param_2)

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



// FUNCTION 14739bbbc FUN_14739bbbc body=200 status=ok
// SIG undefined FUN_14739bbbc(void)

void FUN_14739bbbc(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x30) == *param_3) {
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_14739bcf8(param_1,*param_4,1);
          *param_4 = iVar12;
          uVar10 = 1;
          goto LAB_14739bc33;
        }
        iVar12 = puVar1[10];
      } while (iVar12 != -1);
    }
  }
  uVar10 = 0;
LAB_14739bc33:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 14739bc84 FUN_14739bc84 body=116 status=ok
// SIG undefined FUN_14739bc84(void)

undefined8 * FUN_14739bc84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(param_2 + 1) = *puVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 2) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
  param_2[3] = 0;
  iVar1 = puVar2[6];
  _Src = *(void **)(puVar2 + 4);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_14739c0ea(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 << 2);
  }
  return param_2;
}



// FUNCTION 14739bcf8 FUN_14739bcf8 body=150 status=ok
// SIG undefined FUN_14739bcf8(void)

void FUN_14739bcf8(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14739bd8e FUN_14739bd8e body=478 status=ok
// SIG undefined FUN_14739bd8e(void)

void FUN_14739bd8e(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x30;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x2c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x28 + lVar6) =
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



// FUNCTION 14739bf6e FUN_14739bf6e body=379 status=ok
// SIG undefined FUN_14739bf6e(void)

undefined4 *
FUN_14739bf6e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14739bace(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  *local_48 = *(ulonglong *)*param_3;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar2;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  local_48[3] = *(ulonglong *)(puVar1 + 4);
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined4 *)(local_48 + 4) = puVar1[6];
  *(undefined4 *)((longlong)local_48 + 0x24) = puVar1[7];
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = ((uint)(*local_48 >> 0x14) & 0xffff ^ (uint)(*local_48 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  local_68 = param_4;
  cVar5 = FUN_14739bbbc(param_1,uVar6,local_48);
  if (cVar5 == '\0') {
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
      *(uint *)((longlong)local_48 + 0x2c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 5) =
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
      FUN_14739bd8e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739c0ea FUN_14739c0ea body=98 status=ok
// SIG undefined FUN_14739c0ea(void)

void FUN_14739c0ea(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14739c14c FUN_14739c14c body=54 status=ok
// SIG undefined FUN_14739c14c(void)

longlong FUN_14739c14c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14739c182(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x48 + *param_1;
}



// FUNCTION 14739c182 FUN_14739c182 body=147 status=ok
// SIG undefined FUN_14739c182(void)

void FUN_14739c182(longlong param_1,int param_2)

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



// FUNCTION 14739c216 FUN_14739c216 body=267 status=ok
// SIG undefined FUN_14739c216(void)

void FUN_14739c216(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong *local_30;
  undefined4 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar7 * 0x30;
        if (*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x30) == param_2) {
          if ((undefined4 *)(lVar1 + 8) != (undefined4 *)0x0 && lVar1 != 0) {
            uVar2 = param_3[1];
            uVar3 = param_3[2];
            uVar4 = param_3[3];
            *(undefined4 *)(lVar1 + 8) = *param_3;
            *(undefined4 *)(lVar1 + 0xc) = uVar2;
            *(undefined4 *)(lVar1 + 0x10) = uVar3;
            *(undefined4 *)(lVar1 + 0x14) = uVar4;
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x28);
      } while (iVar7 != -1);
    }
  }
  local_30 = &local_38;
  local_28 = param_3;
  FUN_14739b978(param_1,local_1c,&local_30,0);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14739c38c FUN_14739c38c body=101 status=ok
// SIG undefined FUN_14739c38c(void)

ulonglong FUN_14739c38c(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((((int)param_1[0x20] == *param_2) && (param_2[3] == 0)) && (param_2[1] == 0)) {
    uVar1 = param_2[2];
    if (uVar1 != 0xffffffff) {
      lVar4 = (**(code **)(*param_1 + 8))(param_1);
      if (uVar1 != *(byte *)(lVar4 + 0x30)) goto LAB_14739c3d6;
    }
    iVar2 = param_2[4];
    if (iVar2 == -1) {
      uVar5 = 0;
    }
    else {
      iVar3 = FUN_14739b90c(param_1);
      uVar5 = (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != iVar3);
    }
  }
LAB_14739c3d6:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14739c3f2 FUN_14739c3f2 body=39 status=ok
// SIG undefined FUN_14739c3f2(void)

undefined8 * FUN_14739c3f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3588b8;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14739c41a FUN_14739c41a body=346 status=ok
// SIG undefined FUN_14739c41a(void)

undefined4 * FUN_14739c41a(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14739c576(local_40);
  puVar1 = (undefined4 *)param_2[1];
  uVar10 = *(ulonglong *)*param_2;
  *local_38 = uVar10;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar3;
  *(undefined4 *)(local_38 + 2) = uVar4;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar5;
  local_38[3] = *(ulonglong *)(puVar1 + 4);
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  cVar6 = FUN_14739c684(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar6 == '\0') {
    uVar8 = DAT_14ca77a00 - DAT_14ca77a2c;
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= DAT_14ca77a40)) {
      uVar7 = DAT_14ca77a40 - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x24) = uVar7;
      puVar9 = DAT_14ca77a38;
      if (DAT_14ca77a38 == (undefined *)0x0) {
        puVar9 = &DAT_14ca77a30;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar9 + ((longlong)DAT_14ca77a40 - 1U & (longlong)(int)uVar7) * 4);
      puVar9 = DAT_14ca77a38;
      if (DAT_14ca77a38 == (undefined *)0x0) {
        puVar9 = &DAT_14ca77a30;
      }
      *(undefined4 *)(puVar9 + ((longlong)DAT_14ca77a40 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14ca77a40 = iVar11;
      FUN_14739c79c();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739c576 FUN_14739c576 body=270 status=ok
// SIG undefined FUN_14739c576(void)

int * FUN_14739c576(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca77a28;
  iVar4 = DAT_14ca77a00;
  if (DAT_14ca77a2c == 0) {
    iVar2 = DAT_14ca77a00 + 1;
    bVar7 = DAT_14ca77a04 == DAT_14ca77a00;
    DAT_14ca77a00 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14ca779f8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca77a08,1);
    puVar3 = DAT_14ca77a18;
    if (DAT_14ca77a18 == (undefined *)0x0) {
      puVar3 = &DAT_14ca77a08;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14ca77a28;
    DAT_14ca77a28 = *(int *)(DAT_14ca779f8 + 4 + lVar6 * 0x28);
    DAT_14ca77a2c = DAT_14ca77a2c + -1;
    iVar4 = iVar2;
    if (DAT_14ca77a2c != 0) {
      *(undefined4 *)(DAT_14ca779f8 + (longlong)DAT_14ca77a28 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca77a08;
  if (DAT_14ca77a18 != (undefined *)0x0) {
    puVar3 = DAT_14ca77a18;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14ca779f8;
  return param_1;
}



// FUNCTION 14739c684 FUN_14739c684 body=152 status=ok
// SIG undefined FUN_14739c684(void)

undefined8 FUN_14739c684(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined *puVar10;
  
  if ((DAT_14ca77a00 - DAT_14ca77a2c != 1) && (DAT_14ca77a00 != DAT_14ca77a2c)) {
    puVar10 = &DAT_14ca77a30;
    if (DAT_14ca77a38 != (undefined *)0x0) {
      puVar10 = DAT_14ca77a38;
    }
    iVar9 = *(int *)(puVar10 + (ulonglong)(DAT_14ca77a40 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14ca779f8 + (longlong)iVar9 * 0x28);
        if (*plVar1 == *param_2) {
          lVar6 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar7 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar8 = param_2[3];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(int *)(plVar1 + 2) = (int)param_2[2];
          *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
          *(int *)(plVar1 + 3) = (int)lVar8;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
          *(int *)plVar1 = (int)lVar6;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_14739c71c(*param_3);
          *param_3 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar1[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14739c71c FUN_14739c71c body=128 status=ok
// SIG undefined FUN_14739c71c(void)

void FUN_14739c71c(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca779f8;
  if (DAT_14ca77a2c != 0) {
    *(int *)(DAT_14ca779f8 + (longlong)DAT_14ca77a28 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca77a2c) {
    iVar4 = DAT_14ca77a28;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14ca77a2c = DAT_14ca77a2c + 1;
  puVar3 = &DAT_14ca77a08;
  if (DAT_14ca77a18 != (undefined *)0x0) {
    puVar3 = DAT_14ca77a18;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca77a28 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14739c79c FUN_14739c79c body=515 status=ok
// SIG undefined FUN_14739c79c(void)

void FUN_14739c79c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca77a38 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca77a38,0,0,4);
  }
  uVar7 = DAT_14ca77a40;
  uVar2 = local_50;
  if (DAT_14ca77a40 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14ca77a30,0,DAT_14ca77a40,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14ca77a38;
        if (DAT_14ca77a38 == (undefined *)0x0) {
          puVar5 = &DAT_14ca77a30;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14ca77a40 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca77a08;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca77a20 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca779f8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x28);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14ca77a40 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x24 + lVar4 * 0x28) = iVar8;
        puVar5 = DAT_14ca77a38;
        if (DAT_14ca77a38 == (undefined *)0x0) {
          puVar5 = &DAT_14ca77a30;
        }
        *(undefined4 *)(lVar1 + 0x20 + lVar4 * 0x28) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14ca77a40 - 1U & uVar9) * 4);
        puVar5 = DAT_14ca77a38;
        if (DAT_14ca77a38 == (undefined *)0x0) {
          puVar5 = &DAT_14ca77a30;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14ca77a40 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14739c9a0 FUN_14739c9a0 body=154 status=ok
// SIG undefined FUN_14739c9a0(void)

void FUN_14739c9a0(int *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14ca77a00 != DAT_14ca77a2c) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14ca77a30;
    if (DAT_14ca77a38 != (undefined *)0x0) {
      puVar3 = DAT_14ca77a38;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14ca77a40 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        iVar1 != -1; iVar1 = *(int *)(DAT_14ca779f8 + (longlong)iVar1 * 0x28 + 0x20)) {
      if (*(ulonglong *)(DAT_14ca779f8 + (longlong)iVar1 * 0x28) == param_2) goto LAB_14739c9b6;
    }
  }
  iVar1 = -1;
LAB_14739c9b6:
  *param_1 = iVar1;
  return;
}



// FUNCTION 14739ca3a FUN_14739ca3a body=93 status=ok
// SIG undefined FUN_14739ca3a(void)

void FUN_14739ca3a(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  
  puVar4 = &DAT_14ca77a30;
  if (DAT_14ca77a38 != (undefined *)0x0) {
    puVar4 = DAT_14ca77a38;
  }
  lVar1 = DAT_14ca779f8 + (longlong)param_1 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar3 = *(int *)(puVar4 + lVar5 * 4);
  if (iVar3 == param_1) {
    puVar2 = (undefined4 *)(puVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(DAT_14ca779f8 + 0x20 + lVar5 * 0x28);
    } while (iVar3 != param_1);
    puVar2 = (undefined4 *)(DAT_14ca779f8 + lVar5 * 0x28 + 0x20);
  }
  *puVar2 = *(undefined4 *)(lVar1 + 0x20);
  FUN_14739c71c();
  return;
}



// FUNCTION 14739ca98 FUN_14739ca98 body=354 status=ok
// SIG undefined FUN_14739ca98(void)

void FUN_14739ca98(PSRWLOCK param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  PSRWLOCK pRVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int local_5c;
  
  iVar5 = FUN_1469133ca();
  uVar3 = DAT_14c75b13c - iVar5 * DAT_14c760c1c;
  if (DAT_14c75b13c < (uint)(iVar5 * DAT_14c760c1c)) {
    uVar3 = 0;
  }
  AcquireSRWLockShared(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  iVar5 = DAT_14c760c14 * 0x100000;
  local_5c = DAT_14ca77b18;
  if (DAT_14ca77b18 <= iVar5 || param_1[0x1e].Ptr == (uint *)0x0) {
LAB_14739cbd5:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
                    /* WARNING: Could not recover jumptable at 0x00014739cbf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared(param_1);
    return;
  }
  iVar10 = 0;
  puVar11 = param_1[0x1e].Ptr;
  do {
    if (*(int *)&param_1[3].Ptr != *(int *)((longlong)&param_1[8].Ptr + 4)) {
      pRVar7 = param_1[10].Ptr;
      if (param_1[10].Ptr == (PSRWLOCK)0x0) {
        pRVar7 = param_1 + 9;
      }
      uVar8 = *(uint *)((longlong)&pRVar7->Ptr +
                       (ulonglong)(*(int *)&param_1[0xb].Ptr - 1U & *puVar11) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)param_1[2].Ptr + (longlong)(int)uVar8 * 0x18);
          if (*puVar9 == *puVar11) goto LAB_14739cb52;
          uVar8 = puVar9[4];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar9 = (uint *)0x0;
LAB_14739cb52:
    puVar1 = *(uint **)(puVar11 + 2);
    lVar2 = *(longlong *)(puVar9 + 2);
    iVar6 = FUN_14739cbfa(lVar2);
    cVar4 = FUN_14739cc4e(lVar2);
    if (cVar4 != '\0') {
      if ((ulonglong)uVar3 < *(ulonglong *)(lVar2 + 0xb0)) goto LAB_14739cbd5;
      FUN_14318fac8(lVar2);
      FUN_1407d7338(param_1 + 0x1c,puVar11,0);
      local_5c = local_5c - iVar6;
      iVar10 = iVar10 + 1;
    }
    if (((puVar1 == (uint *)0x0) || (1 < iVar10)) ||
       (iVar10 = iVar10 + 1, puVar11 = puVar1, local_5c <= iVar5)) goto LAB_14739cbd5;
  } while( true );
}



// FUNCTION 14739cbfa FUN_14739cbfa body=83 status=ok
// SIG undefined FUN_14739cbfa(void)

undefined4 FUN_14739cbfa(longlong param_1)

{
  undefined4 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc0) != 6) {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 14739cc4e FUN_14739cc4e body=81 status=ok
// SIG undefined FUN_14739cc4e(void)

ulonglong FUN_14739cc4e(longlong param_1)

{
  int iVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  iVar1 = *(int *)(param_1 + 0xc0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  return CONCAT71((int7)((ulonglong)param_1 >> 8),iVar1 == 5) & 0xffffffff;
}



// FUNCTION 14739cca0 FUN_14739cca0 body=54 status=ok
// SIG undefined FUN_14739cca0(void)

void FUN_14739cca0(longlong *param_1)

{
  FUN_14739ccd6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14739ccd6 FUN_14739ccd6 body=128 status=ok
// SIG undefined FUN_14739ccd6(void)

void FUN_14739ccd6(longlong param_1,int param_2)

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



// FUNCTION 14739cd58 FUN_14739cd58 body=54 status=ok
// SIG undefined FUN_14739cd58(void)

void FUN_14739cd58(longlong *param_1)

{
  FUN_14739cd8e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14739cd8e FUN_14739cd8e body=360 status=ok
// SIG undefined FUN_14739cd8e(void)

void FUN_14739cd8e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14739cef8 FUN_14739cef8 body=172 status=ok
// SIG undefined FUN_14739cef8(void)

void FUN_14739cef8(longlong param_1,uint param_2,undefined4 param_3,longlong *param_4,
                  undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_4 + 8))(param_4);
  if (((*(byte *)((longlong)&DAT_14c873430 + (ulonglong)((uint)*(byte *)(lVar2 + 0x33) * 0x30) + 1)
       & 2) == 0) || ((*(byte *)(param_4 + 0x14) & 4) == 0)) {
    bVar1 = FUN_14739d02e((ulonglong)((param_2 & 0xff) * 0x48) + *(longlong *)(param_1 + 0xc0),
                          param_3,param_4[0x10] + 0x10,param_5);
  }
  else {
    bVar1 = FUN_14739cfa4((ulonglong)((param_2 & 0xff) * 0x48) + *(longlong *)(param_1 + 0xc0),
                          param_3,param_4[0x10] + 0x10,param_5);
  }
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | bVar1;
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | bVar1;
  return;
}



// FUNCTION 14739cfa4 FUN_14739cfa4 body=138 status=ok
// SIG undefined FUN_14739cfa4(void)

undefined8 FUN_14739cfa4(longlong *param_1,ulonglong param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_1473b77a8();
  lVar3 = *(longlong *)(*param_1 + 0x28 + (param_2 & 0xffffffff) * 0x40);
  if (DAT_14c760db4 < 2) {
    lVar1 = param_1[4] + (param_2 & 0xffffffff) * 0xc;
    if (*(int *)(lVar1 + 4) == (int)param_3[2]) {
      uVar5 = 0;
    }
    else {
      *(int *)(lVar1 + 4) = (int)param_3[2];
      lVar4 = *param_3;
      *(longlong *)(lVar3 + 8) = lVar4;
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
    if (*(int *)(lVar1 + 8) != param_4) {
      *(int *)(lVar1 + 8) = param_4;
      *(int *)(lVar3 + 0x10) = param_4;
      uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | (byte)uVar5;
  }
  else {
    lVar1 = *param_3;
    lVar4 = *(longlong *)(lVar3 + 8);
    *(longlong *)(lVar3 + 8) = lVar1;
    iVar2 = *(int *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x10) = param_4;
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),iVar2 != param_4 || lVar4 != lVar1);
  }
  return uVar5;
}



// FUNCTION 14739d02e FUN_14739d02e body=138 status=ok
// SIG undefined FUN_14739d02e(void)

undefined8 FUN_14739d02e(longlong *param_1,ulonglong param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_1473b77a8();
  lVar3 = *(longlong *)(*param_1 + 0x28 + (param_2 & 0xffffffff) * 0x40);
  if (DAT_14c760db4 < 2) {
    lVar1 = param_1[4] + (param_2 & 0xffffffff) * 0xc;
    if (*(int *)(lVar1 + 4) == (int)param_3[2]) {
      uVar5 = 0;
    }
    else {
      *(int *)(lVar1 + 4) = (int)param_3[2];
      lVar4 = *param_3;
      *(longlong *)(lVar3 + 8) = lVar4;
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
    if (*(int *)(lVar1 + 8) != param_4) {
      *(int *)(lVar1 + 8) = param_4;
      *(int *)(lVar3 + 0x10) = param_4;
      uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | (byte)uVar5;
  }
  else {
    lVar1 = *param_3;
    lVar4 = *(longlong *)(lVar3 + 8);
    *(longlong *)(lVar3 + 8) = lVar1;
    iVar2 = *(int *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x10) = param_4;
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),iVar2 != param_4 || lVar4 != lVar1);
  }
  return uVar5;
}



// FUNCTION 14739d0b8 FUN_14739d0b8 body=121 status=ok
// SIG undefined FUN_14739d0b8(void)

void FUN_14739d0b8(longlong param_1,byte param_2,uint param_3,longlong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar5 = (ulonglong)param_3;
  plVar3 = *(longlong **)
            (*(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 0x48) + 0x28 +
            uVar5 * 0x40);
  if (DAT_14c760db4 < 2) {
    lVar2 = *(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 0x48;
    lVar4 = *(longlong *)(lVar2 + 0x20);
    bVar6 = *(int *)(lVar4 + uVar5 * 0xc) != *(int *)(param_4 + 0x18);
    if (bVar6) {
      *(int *)(lVar4 + uVar5 * 0xc) = *(int *)(param_4 + 0x18);
      *plVar3 = *(longlong *)(param_4 + 0x10);
    }
    pbVar1 = (byte *)(lVar2 + 0x40);
    *pbVar1 = *pbVar1 | bVar6;
  }
  else {
    bVar6 = *plVar3 != *(longlong *)(param_4 + 0x10);
    *plVar3 = *(longlong *)(param_4 + 0x10);
  }
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | bVar6;
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | bVar6;
  return;
}



// FUNCTION 14739d132 FUN_14739d132 body=121 status=ok
// SIG undefined FUN_14739d132(void)

void FUN_14739d132(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x60,0);
      iVar2 = (int)(uVar1 / 0x60);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar3;
    FUN_14739d1ac(param_1,*(undefined4 *)(param_1 + 200));
    return;
  }
  return;
}



// FUNCTION 14739d1ac FUN_14739d1ac body=149 status=ok
// SIG undefined FUN_14739d1ac(void)

void FUN_14739d1ac(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x60);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x60);
  return;
}



// FUNCTION 14739d242 FUN_14739d242 body=95 status=ok
// SIG undefined FUN_14739d242(void)

void FUN_14739d242(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar3;
    FUN_14739d2a2(param_1,*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 14739d2a2 FUN_14739d2a2 body=132 status=ok
// SIG undefined FUN_14739d2a2(void)

void FUN_14739d2a2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,0x10);
  return;
}



// FUNCTION 14739d326 FUN_14739d326 body=112 status=ok
// SIG undefined FUN_14739d326(void)

void FUN_14739d326(longlong param_1,uint param_2)

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



// FUNCTION 14739d396 FUN_14739d396 body=147 status=ok
// SIG undefined FUN_14739d396(void)

void FUN_14739d396(longlong param_1,int param_2)

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



// FUNCTION 14739d42a FUN_14739d42a body=148 status=ok
// SIG undefined FUN_14739d42a(void)

void FUN_14739d42a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xcc) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x60,0);
      iVar5 = (int)(uVar4 / 0x60);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar6;
    FUN_14739d1ac(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14739d4bf FUN_14739d4bf body=12 status=ok
// SIG undefined FUN_14739d4bf(void)

void FUN_14739d4bf(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14739d4cc FUN_14739d4cc body=124 status=ok
// SIG undefined FUN_14739d4cc(void)

void FUN_14739d4cc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar6;
    FUN_14739d2a2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14739d54a FUN_14739d54a body=112 status=ok
// SIG undefined FUN_14739d54a(void)

void FUN_14739d54a(longlong param_1,uint param_2)

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



// FUNCTION 14739d5ba FUN_14739d5ba body=108 status=ok
// SIG undefined FUN_14739d5ba(void)

void FUN_14739d5ba(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 14739d626 FUN_14739d626 body=112 status=ok
// SIG undefined FUN_14739d626(void)

void FUN_14739d626(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14739d696 FUN_14739d696 body=54 status=ok
// SIG undefined FUN_14739d696(void)

longlong FUN_14739d696(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14739d6cc(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x18 + *param_1;
}



// FUNCTION 14739d6cc FUN_14739d6cc body=147 status=ok
// SIG undefined FUN_14739d6cc(void)

void FUN_14739d6cc(longlong param_1,int param_2)

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



// FUNCTION 14739d760 FUN_14739d760 body=50 status=ok
// SIG undefined FUN_14739d760(void)

longlong FUN_14739d760(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14739d792(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x38 + *param_1;
}



// FUNCTION 14739d792 FUN_14739d792 body=143 status=ok
// SIG undefined FUN_14739d792(void)

void FUN_14739d792(longlong param_1,int param_2)

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



// FUNCTION 14739d822 FUN_14739d822 body=147 status=ok
// SIG undefined FUN_14739d822(void)

void FUN_14739d822(longlong param_1,int param_2)

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



// FUNCTION 14739d8b6 FUN_14739d8b6 body=147 status=ok
// SIG undefined FUN_14739d8b6(void)

void FUN_14739d8b6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14739d94a FUN_14739d94a body=132 status=ok
// SIG undefined FUN_14739d94a(void)

void FUN_14739d94a(longlong param_1,int param_2)

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



// FUNCTION 14739d9d0 FUN_14739d9d0 body=62 status=ok
// SIG undefined FUN_14739d9d0(void)

void FUN_14739d9d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14739da0e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 14739da0e FUN_14739da0e body=112 status=ok
// SIG undefined FUN_14739da0e(void)

ulonglong FUN_14739da0e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14739da48;
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
LAB_14739da48:
  return param_2 & 0xffffffff;
}



// FUNCTION 14739da7e FUN_14739da7e body=62 status=ok
// SIG undefined FUN_14739da7e(void)

void FUN_14739da7e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14739dabc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 14739dabc FUN_14739dabc body=112 status=ok
// SIG undefined FUN_14739dabc(void)

ulonglong FUN_14739dabc(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14739daf6;
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
LAB_14739daf6:
  return param_2 & 0xffffffff;
}



// FUNCTION 14739db2c FUN_14739db2c body=139 status=ok
// SIG undefined FUN_14739db2c(void)

void FUN_14739db2c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x3c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x30,0);
      iVar5 = (int)(uVar4 / 0x30);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar6;
    FUN_14739dbb8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14739dbb8 FUN_14739dbb8 body=140 status=ok
// SIG undefined FUN_14739dbb8(void)

void FUN_14739dbb8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x30);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x30);
  return;
}



// FUNCTION 14739dc44 FUN_14739dc44 body=62 status=ok
// SIG undefined FUN_14739dc44(void)

longlong FUN_14739dc44(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_14739dd6a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  return lVar2 + (longlong)iVar1 * 0x18;
}



// FUNCTION 14739dc82 FUN_14739dc82 body=91 status=ok
// SIG undefined FUN_14739dc82(void)

undefined8 FUN_14739dc82(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  iVar4 = (int)(uVar2 / 0x18);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x24)) {
    return SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  }
  *(int *)(param_1 + 0x24) = iVar5;
  uVar3 = FUN_14739dcde(param_1,*(undefined4 *)(param_1 + 0x20));
  return uVar3;
}



// FUNCTION 14739dcde FUN_14739dcde body=140 status=ok
// SIG undefined FUN_14739dcde(void)

void FUN_14739dcde(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0x18);
  return;
}



// FUNCTION 14739dd6a FUN_14739dd6a body=139 status=ok
// SIG undefined FUN_14739dd6a(void)

void FUN_14739dd6a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
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
      iVar5 = (int)(uVar4 / 0x18);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_14739dcde(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14739ddf6 FUN_14739ddf6 body=74 status=ok
// SIG undefined FUN_14739ddf6(void)

longlong FUN_14739ddf6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_14739df3a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar2 = param_1;
  }
  return lVar2 + (longlong)iVar1 * 0x48;
}



// FUNCTION 14739de40 FUN_14739de40 body=100 status=ok
// SIG undefined FUN_14739de40(void)

undefined8 FUN_14739de40(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x48,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  iVar4 = (int)(uVar2 / 0x48);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x9c)) {
    return SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  }
  *(int *)(param_1 + 0x9c) = iVar5;
  uVar3 = FUN_14739dea4(param_1,*(undefined4 *)(param_1 + 0x98));
  return uVar3;
}



// FUNCTION 14739dea4 FUN_14739dea4 body=149 status=ok
// SIG undefined FUN_14739dea4(void)

void FUN_14739dea4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x90);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x90,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x90),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x90,param_2,param_3,0x48);
  return;
}



// FUNCTION 14739df3a FUN_14739df3a body=148 status=ok
// SIG undefined FUN_14739df3a(void)

void FUN_14739df3a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x9c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x48,0);
      iVar5 = (int)(uVar4 / 0x48);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x9c) = iVar6;
    FUN_14739dea4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14739dfd0 FUN_14739dfd0 body=48 status=ok
// SIG undefined FUN_14739dfd0(void)

void FUN_14739dfd0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 14739e000 FUN_14739e000 body=132 status=ok
// SIG undefined FUN_14739e000(void)

void FUN_14739e000(longlong param_1,int param_2)

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



// FUNCTION 14739e086 FUN_14739e086 body=62 status=ok
// SIG undefined FUN_14739e086(void)

void FUN_14739e086(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14739e0c4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14739e0c4 FUN_14739e0c4 body=93 status=ok
// SIG undefined FUN_14739e0c4(void)

ulonglong FUN_14739e0c4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14739e122 FUN_14739e122 body=136 status=ok
// SIG undefined FUN_14739e122(void)

void FUN_14739e122(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x30) == param_2) {
          FUN_14739e1aa(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x30 + *param_1 + 0x28);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14739e1aa FUN_14739e1aa body=95 status=ok
// SIG undefined FUN_14739e1aa(void)

void FUN_14739e1aa(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_14739e20a();
  return;
}



// FUNCTION 14739e20a FUN_14739e20a body=62 status=ok
// SIG undefined FUN_14739e20a(void)

void FUN_14739e20a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_14739bcf8(param_1,param_2,1);
  return;
}



// FUNCTION 14739e248 FUN_14739e248 body=418 status=ok
// SIG undefined FUN_14739e248(void)

void FUN_14739e248(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14494313c(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140044672(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x30 + lVar2 + -0x2c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0xc;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14739e3ea FUN_14739e3ea body=110 status=ok
// SIG undefined FUN_14739e3ea(void)

void FUN_14739e3ea(longlong param_1,uint param_2)

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
    FUN_14739cd8e(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14739bd8e(param_1);
    return;
  }
  FUN_14739e458(param_1);
  FUN_14739cd8e(param_1,param_2);
  return;
}



// FUNCTION 14739e458 FUN_14739e458 body=326 status=ok
// SIG undefined FUN_14739e458(void)

void FUN_14739e458(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 14739e5a0 FUN_14739e5a0 body=183 status=ok
// SIG undefined FUN_14739e5a0(void)

void FUN_14739e5a0(longlong param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14a34c3b8;
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_14a34c3b8;
  lVar2 = *(longlong *)(param_1 + 0xe8);
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      *(longlong *)(param_1 + 0xe8) = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = *(undefined ***)(param_1 + 0xe0);
  }
  *(longlong *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  (*(code *)ppuVar1[1])((undefined8 *)(param_1 + 0xe0),0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_14707ed72(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14739e658(param_1 + 0x10);
  return;
}



// FUNCTION 14739e658 FUN_14739e658 body=52 status=ok
// SIG undefined FUN_14739e658(void)

void FUN_14739e658(longlong *param_1)

{
  FUN_14739e68c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14739e68c FUN_14739e68c body=343 status=ok
// SIG undefined FUN_14739e68c(void)

void FUN_14739e68c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (lVar2 != 0) {
        FUN_14739e7e4(lVar2);
        thunk_FUN_1400020a8(lVar2,0x100,0x40);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14739e7e4 FUN_14739e7e4 body=74 status=ok
// SIG undefined FUN_14739e7e4(void)

void FUN_14739e7e4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (*DAT_14ca79208)(**(undefined8 **)(DAT_14ca79348 + 0x48),*(longlong *)(param_1 + 0x20),0);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14493be96(param_1 + 0x40);
  return;
}



// FUNCTION 14739e82e FUN_14739e82e body=190 status=ok
// SIG undefined FUN_14739e82e(void)

PSRWLOCK FUN_14739e82e(PSRWLOCK param_1)

{
  InitializeSRWLock(param_1);
  *(undefined4 *)&param_1[1].Ptr = 0;
  param_1[6].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[7].Ptr = 0;
  param_1[2].Ptr = (PVOID)0x0;
  param_1[3].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&param_1[7].Ptr + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[8].Ptr + 4) = 0;
  param_1[10].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0xb].Ptr = 0;
  *(undefined4 *)&param_1[0xc].Ptr = 0;
  param_1[0x11].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0x12].Ptr = 0;
  param_1[0xd].Ptr = (PVOID)0x0;
  param_1[0xe].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&param_1[0x12].Ptr + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[0x13].Ptr + 4) = 0;
  param_1[0x15].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0x16].Ptr = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x17),4000);
  param_1[0x1c].Ptr = &PTR_FUN_14a34c3b8;
  param_1[0x1d].Ptr = (PVOID)0x0;
  param_1[0x1e].Ptr = (PVOID)0x0;
  *(undefined4 *)&param_1[0x1f].Ptr = 0;
  FUN_14318fd50(param_1);
  return param_1;
}



// FUNCTION 14739e8ec FUN_14739e8ec body=124 status=ok
// SIG undefined FUN_14739e8ec(void)

void FUN_14739e8ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca77c00) {
    FUN_144b3d300(&DAT_14ca77c00);
    if (DAT_14ca77c00 == -1) {
      DAT_14ca77be0 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14ca77be8);
      DAT_14ca77bf0 = 0;
      DAT_14ca77bf8 = 0;
      atexit((_func_5014 *)&LAB_143190d0c);
      _Init_thread_footer(&DAT_14ca77c00);
      return;
    }
  }
  return;
}



// FUNCTION 14739e968 FUN_14739e968 body=84 status=ok
// SIG undefined FUN_14739e968(void)

void FUN_14739e968(void)

{
  if (DAT_14ca77bf8 != (undefined8 *)0x0) {
    (**(code **)*DAT_14ca77bf8)(DAT_14ca77bf8,1);
  }
  if (DAT_14ca77bf0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14ca77bf0)(DAT_14ca77bf0,1);
  }
  if (DAT_14ca77be0 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014739e9b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*DAT_14ca77be0)(DAT_14ca77be0,1);
    return;
  }
  return;
}



// FUNCTION 14739e9bc thunk_FUN_14739e9f6 body=5 status=ok
// SIG undefined thunk_FUN_14739e9f6(void)

void thunk_FUN_14739e9f6(void)

{
  FUN_14739e9f6();
  return;
}



// FUNCTION 14739e9cc FUN_14739e9cc body=12 status=ok
// SIG undefined FUN_14739e9cc(void)

void FUN_14739e9cc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014739e9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14739e9d8 FUN_14739e9d8 body=29 status=ok
// SIG undefined FUN_14739e9d8(void)

undefined8 FUN_14739e9d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14739e9f6 FUN_14739e9f6 body=468 status=ok
// SIG undefined FUN_14739e9f6(void)

void FUN_14739e9f6(longlong *param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  int local_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_80;
  undefined1 local_74 [4];
  longlong **local_70;
  longlong **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  plVar3 = (longlong *)FUN_141447c1b(0x100,0x40);
  FUN_14739ebcc(plVar3,0);
  local_98 = 0;
  uStack_90 = 0;
  local_80 = plVar3;
  FUN_143190d12(plVar3,param_2);
  iVar6 = *(int *)(lVar1 + 8) + 1;
  *(int *)(lVar1 + 8) = iVar6;
  local_9c = iVar6;
  piVar4 = (int *)FUN_14001cc68(0x18,0x10);
  *piVar4 = iVar6;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0xb8);
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  EnterCriticalSection(lpCriticalSection);
  if (piVar4 != (int *)0x0) {
    lVar2 = *(longlong *)(lVar1 + 0xe8);
    if (lVar2 == 0) {
      plVar5 = (longlong *)(lVar1 + 0xf0);
    }
    else {
      *(longlong *)(piVar4 + 2) = lVar2;
      plVar5 = (longlong *)(lVar2 + 0x10);
    }
    *plVar5 = (longlong)piVar4;
    *(int **)(lVar1 + 0xe8) = piVar4;
    (**(code **)(*(longlong *)(lVar1 + 0xe0) + 8))(lVar1 + 0xe0,*(int *)(lVar1 + 0xf8) + 1);
  }
  *plVar3 = (longlong)piVar4;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  local_68 = &local_80;
  local_70 = (longlong **)&local_9c;
  FUN_14739ef90(lVar1 + 0x10,&local_a8);
  lVar2 = local_98;
  lVar8 = (longlong)(int)uStack_90;
  if (lVar8 != 0) {
    lVar7 = 0;
    do {
      local_a8 = *(longlong **)(lVar2 + lVar7);
      local_70 = &local_a8;
      local_68 = (longlong **)&local_9c;
      FUN_1402eaea6(lVar1 + 0x68,local_74,&local_70,0);
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  if (local_98 != 0) {
    FUN_1400020a8(local_98);
  }
  plVar3 = local_80;
  if (local_80 != (longlong *)0x0) {
    FUN_14739e7e4(local_80);
    thunk_FUN_1400020a8(plVar3,0x100,0x40);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14739ebcc FUN_14739ebcc body=115 status=ok
// SIG undefined FUN_14739ebcc(void)

undefined8 * FUN_14739ebcc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 2));
  InitializeSRWLock((PSRWLOCK)(param_1 + 3));
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 14739ec40 FUN_14739ec40 body=772 status=ok
// SIG undefined FUN_14739ec40(void)

ulonglong FUN_14739ec40(longlong param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  ulonglong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68 [2];
  undefined4 local_54;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140002266(local_50,L"FVulkanChunkedPipelineCacheManager: LoadInternal TOT  ");
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_2[1];
  puVar5 = (ulonglong *)plVar4[1];
  puVar1 = (undefined4 *)*puVar5 + 1;
  if ((undefined4 *)puVar5[1] < puVar1) {
    if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar4 + 0x170))(plVar4,&local_54,4);
    }
    else {
      FUN_14572512c(plVar4,&local_54);
    }
  }
  else {
    local_54 = *(undefined4 *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x90) = local_54;
  UNLOCK();
  puVar2 = (uint *)(param_1 + 0x84);
  puVar6 = *(uint **)plVar4[1];
  if ((uint *)((undefined8 *)plVar4[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar4 + 0x170))(plVar4,puVar2,4);
    }
    else {
      FUN_14572512c(plVar4,puVar2);
    }
  }
  else {
    *puVar2 = *puVar6;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x84);
  uVar7 = (**(code **)(*plVar4 + 0x28))(plVar4);
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  if (param_4 == 1) {
    if (*param_2 == 0) {
      local_88 = 0;
      uStack_80 = 0;
      FUN_140002266(local_98,L"FVulkanChunkedPipelineCacheManager: LoadInternal Serialize %d",
                    *puVar2);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140393c76(&local_88,*(undefined4 *)(param_1 + 0x84),1);
      (**(code **)(*plVar4 + 0x170))(plVar4,local_88,(longlong)*(int *)(param_1 + 0x84));
      local_a8 = local_88;
      local_a0 = (undefined4)uStack_80;
      FUN_143190d90(param_1);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_140002266(local_68,L"FVulkanChunkedPipelineCacheManager: LoadInternal MappedSerialize %d",
                    *puVar2);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      lVar10 = *param_2;
      lVar8 = (**(code **)(*plVar4 + 0x28))(plVar4);
      uVar7 = *(undefined4 *)(param_1 + 0x84);
      lVar9 = (**(code **)(*plVar4 + 0x28))(plVar4);
      (**(code **)(*plVar4 + 0x1a0))(plVar4,*(int *)(param_1 + 0x84) + lVar9);
      local_78 = lVar8 + lVar10;
      local_70 = uVar7;
      FUN_143190d90(param_1);
    }
    uVar11 = (ulonglong)*puVar2;
    LOCK();
    DAT_14ca77b18 = DAT_14ca77b18 + *puVar2;
    UNLOCK();
  }
  else {
    lVar10 = (**(code **)(*plVar4 + 0x28))(plVar4);
    uVar11 = (**(code **)(*plVar4 + 0x1a0))(plVar4,(int)*puVar2 + lVar10);
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar11 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    puVar5 = (ulonglong *)plVar4[1];
    puVar1 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar4 + 0x170))(plVar4,&local_88,4);
      }
      else {
        FUN_14572512c(plVar4,&local_88);
      }
    }
    else {
      local_88 = CONCAT44((int)uVar11,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar1;
    }
    FUN_14739ef46(param_3,local_88 & 0xffffffff);
    (**(code **)(*plVar4 + 0x170))(plVar4,*param_3,(longlong)*(int *)(param_3 + 1) << 3);
    LOCK();
    uVar3 = *(uint *)(param_1 + 0x8c);
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_3 + 1);
    uVar11 = (ulonglong)uVar3;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739ef46 FUN_14739ef46 body=72 status=ok
// SIG undefined FUN_14739ef46(void)

void FUN_14739ef46(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14479d316();
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
      FUN_140496560();
      return;
    }
  }
  return;
}



// FUNCTION 14739ef90 FUN_14739ef90 body=296 status=ok
// SIG undefined FUN_14739ef90(void)

undefined4 * FUN_14739ef90(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14739f0ba(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_14739f1a0(param_1,uVar5,local_40,&local_4c);
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
      FUN_14739f2c4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739f0ba FUN_14739f0ba body=230 status=ok
// SIG undefined FUN_14739f0ba(void)

int * FUN_14739f0ba(longlong *param_1,int *param_2)

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



// FUNCTION 14739f1a0 FUN_14739f1a0 body=177 status=ok
// SIG undefined FUN_14739f1a0(void)

undefined8 FUN_14739f1a0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
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
          lVar2 = *(longlong *)(piVar1 + 2);
          if (lVar2 != 0) {
            FUN_14739e7e4(lVar2);
            thunk_FUN_1400020a8(lVar2,0x100,0x40);
          }
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14739f252(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14739f252 FUN_14739f252 body=114 status=ok
// SIG undefined FUN_14739f252(void)

void FUN_14739f252(longlong *param_1,int param_2)

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



// FUNCTION 14739f2c4 FUN_14739f2c4 body=419 status=ok
// SIG undefined FUN_14739f2c4(void)

void FUN_14739f2c4(longlong *param_1)

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



// FUNCTION 14739f468 FUN_14739f468 body=403 status=ok
// SIG undefined FUN_14739f468(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14739f468(void)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca77c18) {
    FUN_144b3d300(&DAT_14ca77c18);
    if (DAT_14ca77c18 == -1) {
      DAT_14ca77c08 = 0;
      _DAT_14ca77c10 = 0;
      atexit((_func_5014 *)&LAB_143190e6a);
      _Init_thread_footer(&DAT_14ca77c18);
    }
  }
  if (DAT_14ca77c10 < 2) {
    FUN_143190937(&local_58);
    FUN_143190af7(&local_68);
    local_48 = local_58;
    local_40 = local_50 + -1;
    if (local_50 == 0) {
      local_40 = 0;
    }
    local_38 = (wchar_t *)local_68;
    local_30 = local_60 + -1;
    if (local_60 == 0) {
      local_30 = 0;
    }
    FUN_140bee87a(&local_78,&local_48,2);
    local_48 = local_78;
    local_40 = local_70 + -1;
    if (local_70 == 0) {
      local_40 = 0;
    }
    local_38 = L"VulkanPSOChunks";
    local_30 = 0xf;
    FUN_140bee87a(&local_88,&local_48,2);
    if (DAT_14ca77c08 != 0) {
      FUN_1400020a8();
    }
    DAT_14ca77c08 = CONCAT44(uStack_84,local_88);
    _DAT_14ca77c10 = CONCAT44(uStack_7c,uStack_80);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739f5fc FUN_14739f5fc body=399 status=ok
// SIG undefined FUN_14739f5fc(void)

void FUN_14739f5fc(longlong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 5;
  local_14 = param_2;
  local_1c = (*(code *)PTR_FUN_14c75b148)(&DAT_14c760c10,4,0);
  local_20 = 3;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_18,4);
    }
    else {
      FUN_14572512c(param_1,&local_18);
    }
  }
  else {
    local_18 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
    }
    else {
      FUN_14572512c(param_1,&local_20);
    }
  }
  else {
    local_20 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar2 = (ulonglong *)param_1[1];
  if (puVar2[1] < *puVar2 + 4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_14,4);
    }
    else {
      FUN_14572512c(param_1,&local_14);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14739f78c FUN_14739f78c body=56 status=ok
// SIG undefined FUN_14739f78c(void)

void FUN_14739f78c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 1) == 0) {
      ReleaseSRWLockShared((PSRWLOCK)*param_1);
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)*param_1);
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}


