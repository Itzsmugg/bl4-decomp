// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477ea022 FUN_1477ea022 body=59 status=ok
// SIG undefined FUN_1477ea022(void)

void FUN_1477ea022(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1477e9d60(param_1,param_2);
  return;
}



// FUNCTION 1477ea05d FUN_1477ea05d body=54 status=ok
// SIG undefined FUN_1477ea05d(void)

void FUN_1477ea05d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477cc8d1(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 1477ea093 FUN_1477ea093 body=54 status=ok
// SIG undefined FUN_1477ea093(void)

void FUN_1477ea093(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477ea0c9 FUN_1477ea0c9 body=38 status=ok
// SIG undefined FUN_1477ea0c9(void)

void FUN_1477ea0c9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477d8adc(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1477ea0f0 FUN_1477ea0f0 body=48 status=ok
// SIG undefined FUN_1477ea0f0(void)

void FUN_1477ea0f0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1477ea120 FUN_1477ea120 body=100 status=ok
// SIG undefined FUN_1477ea120(void)

undefined8 * FUN_1477ea120(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1477cde40(param_1,iVar1,0);
    FUN_1477cdea2(*param_1,uVar2,iVar1);
  }
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x26);
  *(undefined8 *)((longlong)param_1 + 0x1e) = *(undefined8 *)((longlong)param_2 + 0x1e);
  *(undefined8 *)((longlong)param_1 + 0x26) = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return param_1;
}



// FUNCTION 1477ea184 FUN_1477ea184 body=147 status=ok
// SIG undefined FUN_1477ea184(void)

void FUN_1477ea184(longlong param_1,int param_2)

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



// FUNCTION 1477ea218 FUN_1477ea218 body=81 status=ok
// SIG undefined FUN_1477ea218(void)

void FUN_1477ea218(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_1477ea26a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1477ea26a FUN_1477ea26a body=120 status=ok
// SIG undefined FUN_1477ea26a(void)

void FUN_1477ea26a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x30);
  FUN_1477e7ed4(*param_1 + lVar2 + 8);
  FUN_1477ea2e2(param_1,param_2);
  return;
}



// FUNCTION 1477ea2e2 FUN_1477ea2e2 body=116 status=ok
// SIG undefined FUN_1477ea2e2(void)

void FUN_1477ea2e2(longlong *param_1,int param_2)

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



// FUNCTION 1477ea356 FUN_1477ea356 body=282 status=ok
// SIG undefined FUN_1477ea356(void)

undefined4 * FUN_1477ea356(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477ea472(param_1,local_48);
  FUN_1477ea5f8(param_3,local_40);
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_1477ea554(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0xd] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1477ea65c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ea472 FUN_1477ea472 body=226 status=ok
// SIG undefined FUN_1477ea472(void)

int * FUN_1477ea472(longlong *param_1,int *param_2)

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



// FUNCTION 1477ea554 FUN_1477ea554 body=164 status=ok
// SIG undefined FUN_1477ea554(void)

undefined8 FUN_1477ea554(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          FUN_1477e7ed4(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1477ea2e2(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477ea5f8 FUN_1477ea5f8 body=100 status=ok
// SIG undefined FUN_1477ea5f8(void)

undefined4 * FUN_1477ea5f8(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  uVar3 = *puVar2;
  plVar4 = (longlong *)puVar2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 2) = uVar3;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 10) = 0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    *(undefined8 *)(param_2 + 2) = uVar3;
    *(longlong **)(param_2 + 4) = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 10) = 0;
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_2;
}



// FUNCTION 1477ea65c FUN_1477ea65c body=419 status=ok
// SIG undefined FUN_1477ea65c(void)

void FUN_1477ea65c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 1477ea800 FUN_1477ea800 body=349 status=ok
// SIG undefined FUN_1477ea800(void)

undefined4 * FUN_1477ea800(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477ea95e(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  *(undefined8 *)local_38 = *(undefined8 *)*param_3;
  lVar6 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar6;
  lVar2 = plVar1[1];
  *(longlong *)(local_38 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    lVar6 = *(longlong *)(local_38 + 2);
  }
  local_38[6] = 0;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0x44) = *(int *)(lVar6 + 0x44) + 1;
    UNLOCK();
  }
  local_38[8] = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = *local_38;
  uVar9 = (uVar9 >> 2) + uVar9 * 0x40 + local_38[1] + 0x9e3779b9 ^ uVar9;
  cVar4 = FUN_1477eaa44(param_1,uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      local_38[9] = uVar9;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_38[8] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar9) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1477eab5a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ea95e FUN_1477ea95e body=230 status=ok
// SIG undefined FUN_1477ea95e(void)

int * FUN_1477ea95e(longlong *param_1,int *param_2)

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



// FUNCTION 1477eaa44 FUN_1477eaa44 body=164 status=ok
// SIG undefined FUN_1477eaa44(void)

undefined8 FUN_1477eaa44(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*param_1 + 4 + (longlong)iVar10 * 0x28) == param_3[1])) {
          FUN_145be9032(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1477eaae8(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477eaae8 FUN_1477eaae8 body=114 status=ok
// SIG undefined FUN_1477eaae8(void)

void FUN_1477eaae8(longlong *param_1,int param_2)

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



// FUNCTION 1477eab5a FUN_1477eab5a body=458 status=ok
// SIG undefined FUN_1477eab5a(void)

void FUN_1477eab5a(longlong *param_1)

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
        uVar2 = *(uint *)(lVar3 + lVar6 * 0x28);
        uVar10 = (longlong)
                 (int)(uVar2 * 0x40 + *(int *)(lVar3 + 4 + lVar6 * 0x28) + (uVar2 >> 2) + 0x9e3779b9
                      ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1477ead9c FUN_1477ead9c body=121 status=ok
// SIG undefined FUN_1477ead9c(void)

void FUN_1477ead9c(longlong *param_1,int param_2)

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
  FUN_145be9032(*param_1 + (longlong)param_2 * 0x28 + 8);
  FUN_1477eaae8(param_1,param_2);
  return;
}



// FUNCTION 1477eae16 FUN_1477eae16 body=340 status=ok
// SIG undefined FUN_1477eae16(void)

undefined4 *
FUN_1477eae16(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1477eaf6c(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_48 = uVar6;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_1477eb052(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
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
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1477eb152(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477eaf6c FUN_1477eaf6c body=230 status=ok
// SIG undefined FUN_1477eaf6c(void)

int * FUN_1477eaf6c(longlong *param_1,int *param_2)

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



// FUNCTION 1477eb052 FUN_1477eb052 body=142 status=ok
// SIG undefined FUN_1477eb052(void)

void FUN_1477eb052(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1477eb0e0((int)lVar3,*param_4);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_1477eb0bc;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_1477eb0bc:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1477eb0e0 FUN_1477eb0e0 body=114 status=ok
// SIG undefined FUN_1477eb0e0(void)

void FUN_1477eb0e0(longlong *param_1,int param_2)

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



// FUNCTION 1477eb152 FUN_1477eb152 body=474 status=ok
// SIG undefined FUN_1477eb152(void)

void FUN_1477eb152(longlong *param_1)

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



// FUNCTION 1477eb32e FUN_1477eb32e body=155 status=ok
// SIG undefined FUN_1477eb32e(void)

undefined8 FUN_1477eb32e(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1477eb3ca(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477eb3ca FUN_1477eb3ca body=87 status=ok
// SIG undefined FUN_1477eb3ca(void)

void FUN_1477eb3ca(longlong *param_1,int param_2)

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
  FUN_1477eb0e0();
  return;
}



// FUNCTION 1477eb422 FUN_1477eb422 body=48 status=ok
// SIG undefined FUN_1477eb422(void)

void FUN_1477eb422(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1477eb452 FUN_1477eb452 body=130 status=ok
// SIG undefined FUN_1477eb452(void)

void FUN_1477eb452(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar5 = (longlong)(int)param_2 * 0x30;
  FUN_1477cc8d1(*(undefined8 *)(lVar1 + lVar5),*(undefined4 *)(lVar1 + 8 + lVar5));
  if (*(longlong *)(lVar1 + lVar5) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)(lVar5 + lVar1),(void *)((longlong)(iVar2 - iVar3) * 0x30 + lVar1),
            (longlong)iVar3 * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1477eb4d4 FUN_1477eb4d4 body=62 status=ok
// SIG undefined FUN_1477eb4d4(void)

void FUN_1477eb4d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477eb512(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1477eb512 FUN_1477eb512 body=112 status=ok
// SIG undefined FUN_1477eb512(void)

ulonglong FUN_1477eb512(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1477eb54c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_1477eb54c:
  return param_2 & 0xffffffff;
}



// FUNCTION 1477eb582 FUN_1477eb582 body=254 status=ok
// SIG undefined FUN_1477eb582(void)

undefined8 ** FUN_1477eb582(undefined8 **param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  ppuVar1 = param_1 + 1;
  *param_1 = (undefined8 *)0x0;
  param_1[1] = (undefined8 *)0x0;
  (**(code **)(*param_3 + 0x2b8))(param_3,&local_30,param_2);
  if (ppuVar1 == &local_30) {
LAB_1477eb5e9:
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  else {
    puVar2 = *ppuVar1;
    *ppuVar1 = local_30;
    local_30 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      goto LAB_1477eb5e9;
    }
  }
  plVar3 = (longlong *)param_3[5];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x2b0))(param_3);
  }
  (**(code **)(*plVar3 + 0x2a0))(plVar3,&local_30);
  if (&local_30 != param_1) {
    puVar2 = *param_1;
    *param_1 = local_30;
    local_30 = (undefined8 *)0x0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1477eb65d;
    (**(code **)*puVar2)(puVar2,1);
  }
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
LAB_1477eb65d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477eb682 FUN_1477eb682 body=132 status=ok
// SIG undefined FUN_1477eb682(void)

void FUN_1477eb682(longlong param_1,int param_2)

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



// FUNCTION 1477eb708 FUN_1477eb708 body=100 status=ok
// SIG undefined FUN_1477eb708(void)

int FUN_1477eb708(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_1477eb76c();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1477eb85c(param_1,iVar2);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x10) = *param_2;
    *(undefined8 *)(lVar1 + 8 + (longlong)iVar2 * 0x10) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return iVar2;
}



// FUNCTION 1477eb76c FUN_1477eb76c body=240 status=ok
// SIG undefined FUN_1477eb76c(void)

ulonglong FUN_1477eb76c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_1477eb7ba:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_1477eb7ba;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_1477eb800:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1477eb800;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 1477eb85c FUN_1477eb85c body=132 status=ok
// SIG undefined FUN_1477eb85c(void)

void FUN_1477eb85c(longlong param_1,int param_2)

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



// FUNCTION 1477eb8e2 FUN_1477eb8e2 body=310 status=ok
// SIG undefined FUN_1477eb8e2(void)

int FUN_1477eb8e2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  iVar9 = 0;
  if (lVar10 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_1477eba18(param_2,lVar2);
    iVar9 = 0;
    iVar6 = 0;
    do {
      lVar5 = (longlong)iVar6;
      iVar12 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      lVar11 = lVar5 * 0x10;
      lVar13 = lVar2 + 0x10 + lVar11;
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar12;
        if (lVar10 <= lVar5) break;
        bVar4 = FUN_1477eba18(param_2,lVar13);
        iVar7 = iVar7 + 1;
        lVar13 = lVar13 + 0x10;
        iVar8 = iVar7;
      } while ((bVar3 & 1) == bVar4);
      iVar12 = iVar8 - iVar6;
      if ((bVar3 & 1) == 0) {
        if (iVar9 != iVar6) {
          memmove((void *)((longlong)iVar9 * 0x10 + lVar2),(void *)(lVar11 + lVar2),
                  (longlong)iVar12 << 4);
        }
        iVar9 = iVar9 + iVar12;
      }
      else {
        FUN_1477ea093(lVar11 + lVar2,iVar12);
      }
      iVar6 = iVar8;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar10);
    *(int *)(param_1 + 1) = iVar9;
    iVar9 = iVar1 - iVar9;
  }
  return iVar9;
}



// FUNCTION 1477eba18 FUN_1477eba18 body=167 status=ok
// SIG undefined FUN_1477eba18(void)

bool FUN_1477eba18(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  param_1 = (longlong *)*param_1;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
LAB_1477eba42:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_1477eba42;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  lVar6 = *param_2;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_1477eba89;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *param_1;
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
LAB_1477eba89:
  if (plVar7 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return lVar6 == lVar8;
}



// FUNCTION 1477ebac0 FUN_1477ebac0 body=146 status=ok
// SIG undefined FUN_1477ebac0(void)

undefined8 * FUN_1477ebac0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xbf800000;
  FUN_140311eb6(param_1 + 5,param_2 + 0x28);
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = (undefined8 *)param_1[7];
  if ((puVar2 != puVar1) && (param_1[7] = puVar1, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1477e7f38(param_1,param_2);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1477ebbe2(param_1 + 8,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1477ebb52 FUN_1477ebb52 body=143 status=ok
// SIG undefined FUN_1477ebb52(void)

void FUN_1477ebb52(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477ebbe2 FUN_1477ebbe2 body=89 status=ok
// SIG undefined FUN_1477ebbe2(void)

undefined8 * FUN_1477ebbe2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1477ebc3c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1477ebc3c FUN_1477ebc3c body=115 status=ok
// SIG undefined FUN_1477ebc3c(void)

void FUN_1477ebc3c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,4);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477ebcb0 FUN_1477ebcb0 body=62 status=ok
// SIG undefined FUN_1477ebcb0(void)

void FUN_1477ebcb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ebd56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 1477ebcee FUN_1477ebcee body=103 status=ok
// SIG undefined FUN_1477ebcee(void)

void FUN_1477ebcee(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x58 + lVar1);
  FUN_1477d8adc(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x58),(longlong)iVar3 * 0x58);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1477ebd56 FUN_1477ebd56 body=104 status=ok
// SIG undefined FUN_1477ebd56(void)

ulonglong FUN_1477ebd56(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1477ebd8c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_1477ebd8c:
  return param_2 & 0xffffffff;
}



// FUNCTION 1477ebdbe FUN_1477ebdbe body=9 status=ok
// SIG undefined FUN_1477ebdbe(void)

void FUN_1477ebdbe(longlong param_1)

{
  FUN_142af488c(param_1 + 0x10);
  return;
}



// FUNCTION 1477ebdc8 FUN_1477ebdc8 body=29 status=ok
// SIG undefined FUN_1477ebdc8(void)

undefined8 FUN_1477ebdc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ebde6 FUN_1477ebde6 body=147 status=ok
// SIG undefined FUN_1477ebde6(void)

void FUN_1477ebde6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477ebe7a FUN_1477ebe7a body=47 status=ok
// SIG undefined FUN_1477ebe7a(void)

void FUN_1477ebe7a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477ebeaa FUN_1477ebeaa body=147 status=ok
// SIG undefined FUN_1477ebeaa(void)

void FUN_1477ebeaa(longlong param_1,int param_2)

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



// FUNCTION 1477ebf3e FUN_1477ebf3e body=54 status=ok
// SIG undefined FUN_1477ebf3e(void)

void FUN_1477ebf3e(longlong *param_1)

{
  FUN_1477ebf74(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477ebf74 FUN_1477ebf74 body=128 status=ok
// SIG undefined FUN_1477ebf74(void)

void FUN_1477ebf74(longlong param_1,int param_2)

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



// FUNCTION 1477ebff6 FUN_1477ebff6 body=146 status=ok
// SIG undefined FUN_1477ebff6(void)

longlong * FUN_1477ebff6(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1477ec088 FUN_1477ec088 body=189 status=ok
// SIG undefined FUN_1477ec088(void)

void FUN_1477ec088(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1477ec117;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1477ec117:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1477ec146 FUN_1477ec146 body=120 status=ok
// SIG undefined FUN_1477ec146(void)

undefined8 * FUN_1477ec146(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabbad8) {
    FUN_144b3d300(&DAT_14cabbad8);
    if (DAT_14cabbad8 == -1) {
      FUN_1446ddc76(&DAT_14cabbad0,"OnComponentActivated",1);
      _Init_thread_footer(&DAT_14cabbad8);
    }
  }
  *param_2 = DAT_14cabbad0;
  return param_2;
}



// FUNCTION 1477ec1be FUN_1477ec1be body=120 status=ok
// SIG undefined FUN_1477ec1be(void)

undefined8 * FUN_1477ec1be(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabbacc) {
    FUN_144b3d300(&DAT_14cabbacc);
    if (DAT_14cabbacc == -1) {
      FUN_1446ddc76(&DAT_14cabbac4,"OnComponentDeactivated",1);
      _Init_thread_footer(&DAT_14cabbacc);
    }
  }
  *param_2 = DAT_14cabbac4;
  return param_2;
}



// FUNCTION 1477ec236 FUN_1477ec236 body=117 status=ok
// SIG undefined FUN_1477ec236(void)

void FUN_1477ec236(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477ec2ab FUN_1477ec2ab body=72 status=ok
// SIG undefined FUN_1477ec2ab(void)

void FUN_1477ec2ab(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1477e80e4(param_1,param_2);
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 1477ec2f4 FUN_1477ec2f4 body=117 status=ok
// SIG undefined FUN_1477ec2f4(void)

void FUN_1477ec2f4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477ec369 FUN_1477ec369 body=60 status=ok
// SIG undefined FUN_1477ec369(void)

void FUN_1477ec369(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1477d06d2(param_1,param_2);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 1477ec3a6 FUN_1477ec3a6 body=230 status=ok
// SIG undefined FUN_1477ec3a6(void)

undefined8 * FUN_1477ec3a6(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1477ec48e FUN_1477ec48e body=29 status=ok
// SIG undefined FUN_1477ec48e(void)

undefined8 FUN_1477ec48e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ec4c6 FUN_1477ec4c6 body=29 status=ok
// SIG undefined FUN_1477ec4c6(void)

bool FUN_1477ec4c6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477ec4e4 FUN_1477ec4e4 body=26 status=ok
// SIG undefined FUN_1477ec4e4(void)

bool FUN_1477ec4e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1477ec4fe FUN_1477ec4fe body=24 status=ok
// SIG undefined FUN_1477ec4fe(void)

bool FUN_1477ec4fe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1477ec522 FUN_1477ec522 body=68 status=ok
// SIG undefined FUN_1477ec522(void)

void FUN_1477ec522(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a57c6f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a57c680;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1477ec566 FUN_1477ec566 body=68 status=ok
// SIG undefined FUN_1477ec566(void)

void FUN_1477ec566(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a57c6f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a57c680;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1477ec5aa FUN_1477ec5aa body=108 status=ok
// SIG undefined FUN_1477ec5aa(void)

void FUN_1477ec5aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14a57c6f0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a57c680;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477ec607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477ec616 FUN_1477ec616 body=68 status=ok
// SIG undefined FUN_1477ec616(void)

void FUN_1477ec616(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001477ec657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1477ec65a FUN_1477ec65a body=171 status=ok
// SIG undefined FUN_1477ec65a(void)

bool FUN_1477ec65a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_48);
    lVar3 = local_48;
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
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ec708 FUN_1477ec708 body=231 status=ok
// SIG undefined FUN_1477ec708(void)

longlong * FUN_1477ec708(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14587940e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1477ec7f0 FUN_1477ec7f0 body=144 status=ok
// SIG undefined FUN_1477ec7f0(void)

LPCRITICAL_SECTION FUN_1477ec7f0(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,param_1 + 1);
  *puVar1 = &PTR_LAB_14a57d310;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a57c760;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1477ec880 FUN_1477ec880 body=29 status=ok
// SIG undefined FUN_1477ec880(void)

undefined8 FUN_1477ec880(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ec8ba FUN_1477ec8ba body=60 status=ok
// SIG undefined FUN_1477ec8ba(void)

void FUN_1477ec8ba(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a57d310;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a57c760;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1477ec8f6 FUN_1477ec8f6 body=60 status=ok
// SIG undefined FUN_1477ec8f6(void)

void FUN_1477ec8f6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a57d310;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a57c760;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1477ec932 FUN_1477ec932 body=100 status=ok
// SIG undefined FUN_1477ec932(void)

void FUN_1477ec932(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14a57d310;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a57c760;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477ec987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477ec9a4 FUN_1477ec9a4 body=21 status=ok
// SIG undefined FUN_1477ec9a4(void)

undefined8 FUN_1477ec9a4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477ec9c2 FUN_1477ec9c2 body=106 status=ok
// SIG undefined FUN_1477ec9c2(void)

undefined8 * FUN_1477ec9c2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a57c7d0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1477eca32 FUN_1477eca32 body=29 status=ok
// SIG undefined FUN_1477eca32(void)

void FUN_1477eca32(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1477eca50 FUN_1477eca50 body=71 status=ok
// SIG undefined FUN_1477eca50(void)

undefined8 * FUN_1477eca50(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a57c7d0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477eca98 FUN_1477eca98 body=285 status=ok
// SIG undefined FUN_1477eca98(void)

void FUN_1477eca98(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined8 *local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = *param_1;
  local_88[0] = (longlong *)0x0;
  local_a8 = param_2;
  if (local_98 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
    (**(code **)*plVar1)(plVar1,local_88);
  }
  local_58[0] = (code *)0x0;
  local_48 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *local_48 = &PTR_LAB_14a57c7f0;
  local_48[2] = local_a8;
  local_48[4] = local_98;
  local_48[6] = local_88[0];
  local_88[0] = (longlong *)0x0;
  *(undefined4 *)(local_48 + 10) = local_68;
  *(undefined4 *)((longlong)local_48 + 0x54) = uStack_64;
  *(undefined4 *)(local_48 + 0xb) = uStack_60;
  *(undefined4 *)((longlong)local_48 + 0x5c) = uStack_5c;
  *(undefined4 *)(local_48 + 8) = local_78;
  *(undefined4 *)((longlong)local_48 + 0x44) = uStack_74;
  *(undefined4 *)(local_48 + 9) = uStack_70;
  *(undefined4 *)((longlong)local_48 + 0x4c) = uStack_6c;
  if (local_98 != 0) {
    local_98 = 0;
  }
  if (local_48 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_58[0] = FUN_1477ecbb6;
  }
  FUN_147d34240(param_2,local_58);
  if (local_98 != 0) {
    plVar1 = local_88[0];
    if (local_88[0] == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ecbb6 FUN_1477ecbb6 body=52 status=ok
// SIG undefined FUN_1477ecbb6(void)

void FUN_1477ecbb6(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = (code *)param_1[2];
  plVar3 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001477ecbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar1);
  return;
}



// FUNCTION 1477ecbf4 FUN_1477ecbf4 body=29 status=ok
// SIG undefined FUN_1477ecbf4(void)

void FUN_1477ecbf4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1477ecc12 FUN_1477ecc12 body=71 status=ok
// SIG undefined FUN_1477ecc12(void)

undefined8 * FUN_1477ecc12(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a57c7f0;
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



// FUNCTION 1477ecc8e FUN_1477ecc8e body=29 status=ok
// SIG undefined FUN_1477ecc8e(void)

undefined8 FUN_1477ecc8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477eccac FUN_1477eccac body=147 status=ok
// SIG undefined FUN_1477eccac(void)

void FUN_1477eccac(longlong param_1,int param_2)

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



// FUNCTION 1477ecd40 FUN_1477ecd40 body=132 status=ok
// SIG undefined FUN_1477ecd40(void)

void FUN_1477ecd40(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477ecdc6 FUN_1477ecdc6 body=71 status=ok
// SIG undefined FUN_1477ecdc6(void)

undefined8 * FUN_1477ecdc6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a57c870;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ece0e FUN_1477ece0e body=68 status=ok
// SIG undefined FUN_1477ece0e(void)

void FUN_1477ece0e(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001477ece47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1477ece52 FUN_1477ece52 body=73 status=ok
// SIG undefined FUN_1477ece52(void)

void FUN_1477ece52(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477ece9c FUN_1477ece9c body=48 status=ok
// SIG undefined FUN_1477ece9c(void)

void FUN_1477ece9c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1477ececc FUN_1477ececc body=140 status=ok
// SIG undefined FUN_1477ececc(void)

undefined8 FUN_1477ececc(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  LOCK();
  plVar1 = (longlong *)*param_1;
  *param_1 = 0;
  UNLOCK();
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 1;
  }
  else {
    plVar4 = (longlong *)0x0;
    do {
      plVar5 = plVar1;
      LOCK();
      plVar1 = (longlong *)*plVar5;
      *plVar5 = (longlong)plVar4;
      UNLOCK();
      plVar4 = plVar5;
    } while (plVar1 != (longlong *)0x0);
    do {
      plVar1 = (longlong *)*plVar5;
      puVar2 = (undefined8 *)plVar5[1];
      plVar5[1] = 0;
      (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,puVar2);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      puVar2 = (undefined8 *)plVar5[1];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      FUN_1400020a8(plVar5);
      plVar5 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1477ecf58 FUN_1477ecf58 body=62 status=ok
// SIG undefined FUN_1477ecf58(void)

void FUN_1477ecf58(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  UNLOCK();
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    puVar3 = (undefined8 *)puVar1[1];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1477ecf96 FUN_1477ecf96 body=29 status=ok
// SIG undefined FUN_1477ecf96(void)

undefined8 FUN_1477ecf96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ecfb4 FUN_1477ecfb4 body=139 status=ok
// SIG undefined FUN_1477ecfb4(void)

void FUN_1477ecfb4(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x18);
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
  iVar5 = (int)param_1[1];
  iVar6 = ~param_2 + iVar5;
  if (iVar6 != 0) {
    iVar7 = 1;
    if (iVar6 < 1) {
      iVar7 = iVar6;
    }
    memmove((void *)(lVar3 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar3 + (longlong)(iVar5 - iVar7) * 0x18),(longlong)iVar7 * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1477ed040 FUN_1477ed040 body=62 status=ok
// SIG undefined FUN_1477ed040(void)

void FUN_1477ed040(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ed07e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1477ed07e FUN_1477ed07e body=112 status=ok
// SIG undefined FUN_1477ed07e(void)

ulonglong FUN_1477ed07e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1477ed0b8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1477ed0b8:
  return param_2 & 0xffffffff;
}



// FUNCTION 1477ed0ee FUN_1477ed0ee body=147 status=ok
// SIG undefined FUN_1477ed0ee(void)

void FUN_1477ed0ee(longlong param_1,int param_2)

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



// FUNCTION 1477ed1b6 FUN_1477ed1b6 body=29 status=ok
// SIG undefined FUN_1477ed1b6(void)

undefined8 FUN_1477ed1b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed1d4 FUN_1477ed1d4 body=132 status=ok
// SIG undefined FUN_1477ed1d4(void)

undefined8 * FUN_1477ed1d4(undefined8 *param_1)

{
  FUN_1478b1944();
  *param_1 = &PTR_FUN_14a57c960;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1478b1ea6(param_1 + 10,0);
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0x13;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x1003f800000;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  return param_1;
}



// FUNCTION 1477ed258 FUN_1477ed258 body=9 status=ok
// SIG undefined FUN_1477ed258(void)

void FUN_1477ed258(longlong param_1)

{
  FUN_1477ed2ae(param_1 + 0x10);
  return;
}



// FUNCTION 1477ed262 FUN_1477ed262 body=29 status=ok
// SIG undefined FUN_1477ed262(void)

undefined8 FUN_1477ed262(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed280 FUN_1477ed280 body=38 status=ok
// SIG undefined FUN_1477ed280(void)

undefined8 FUN_1477ed280(undefined8 param_1,int param_2)

{
  FUN_1477ed2ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed2ae FUN_1477ed2ae body=80 status=ok
// SIG undefined FUN_1477ed2ae(void)

void FUN_1477ed2ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a57c960;
  FUN_1477e8fa4(param_1 + 10);
  plVar3 = (longlong *)param_1[9];
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
  FUN_1478b1a1a(param_1);
  return;
}



// FUNCTION 1477ed2fe FUN_1477ed2fe body=9 status=ok
// SIG undefined FUN_1477ed2fe(void)

void FUN_1477ed2fe(longlong param_1)

{
  FUN_1477de706(param_1 + 0x10);
  return;
}



// FUNCTION 1477ed308 FUN_1477ed308 body=29 status=ok
// SIG undefined FUN_1477ed308(void)

undefined8 FUN_1477ed308(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed326 FUN_1477ed326 body=132 status=ok
// SIG undefined FUN_1477ed326(void)

void FUN_1477ed326(longlong param_1,int param_2)

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



// FUNCTION 1477ed3ac FUN_1477ed3ac body=136 status=ok
// SIG undefined FUN_1477ed3ac(void)

void FUN_1477ed3ac(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1477ed434 FUN_1477ed434 body=62 status=ok
// SIG undefined FUN_1477ed434(void)

void FUN_1477ed434(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ed472(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1477ed472 FUN_1477ed472 body=93 status=ok
// SIG undefined FUN_1477ed472(void)

ulonglong FUN_1477ed472(uint param_1,uint param_2)

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



// FUNCTION 1477ed4d0 FUN_1477ed4d0 body=48 status=ok
// SIG undefined FUN_1477ed4d0(void)

void FUN_1477ed4d0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1477ed500 FUN_1477ed500 body=9 status=ok
// SIG undefined FUN_1477ed500(void)

void FUN_1477ed500(longlong param_1)

{
  FUN_1477ed528(param_1 + 0x10);
  return;
}



// FUNCTION 1477ed50a FUN_1477ed50a body=29 status=ok
// SIG undefined FUN_1477ed50a(void)

undefined8 FUN_1477ed50a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed528 FUN_1477ed528 body=71 status=ok
// SIG undefined FUN_1477ed528(void)

void FUN_1477ed528(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a579b00;
  plVar3 = (longlong *)param_1[9];
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
  FUN_1478b1a1a(param_1);
  return;
}



// FUNCTION 1477ed588 FUN_1477ed588 body=29 status=ok
// SIG undefined FUN_1477ed588(void)

undefined8 FUN_1477ed588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed5a6 FUN_1477ed5a6 body=78 status=ok
// SIG undefined FUN_1477ed5a6(void)

undefined8 * FUN_1477ed5a6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1477ed5f4();
  *param_1 = &PTR_FUN_14a57c960;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  lVar1 = *(longlong *)(param_2 + 0x48);
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_1477e8f36(param_1 + 10,param_2 + 0x50);
  return param_1;
}



// FUNCTION 1477ed5f4 FUN_1477ed5f4 body=126 status=ok
// SIG undefined FUN_1477ed5f4(void)

undefined8 * FUN_1477ed5f4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *param_1 = &PTR_LAB_14a57ce60;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1477c9896(param_1 + 5,iVar1,0);
    FUN_1477c98f8(param_1[5],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 1477ed67d FUN_1477ed67d body=215 status=ok
// SIG undefined FUN_1477ed67d(void)

undefined8 * FUN_1477ed67d(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a57cbc0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  FUN_1478b1944(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14a57cbe0;
  puVar1[0xf] = 0x40e5888000000000;
  puVar1[10] = 0x40b5888000000000;
  puVar1[0xc] = 0x3fc0000000000000;
  puVar1[0xb] = 0x405f400000000000;
  puVar1[0xd] = 0x407e000000000000;
  puVar1[0xe] = 0x404e000000000000;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return puVar1;
}



// FUNCTION 1477ed75e FUN_1477ed75e body=29 status=ok
// SIG undefined FUN_1477ed75e(void)

undefined8 FUN_1477ed75e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed77c FUN_1477ed77c body=38 status=ok
// SIG undefined FUN_1477ed77c(void)

undefined8 FUN_1477ed77c(undefined8 param_1,int param_2)

{
  FUN_1477ed7aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed7aa FUN_1477ed7aa body=71 status=ok
// SIG undefined FUN_1477ed7aa(void)

void FUN_1477ed7aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a57cbe0;
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_1478b1a1a(param_1);
  return;
}



// FUNCTION 1477ed7f2 FUN_1477ed7f2 body=9 status=ok
// SIG undefined FUN_1477ed7f2(void)

void FUN_1477ed7f2(longlong param_1)

{
  FUN_1477ed848(param_1 + 0x10);
  return;
}



// FUNCTION 1477ed7fc FUN_1477ed7fc body=29 status=ok
// SIG undefined FUN_1477ed7fc(void)

undefined8 FUN_1477ed7fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed81a FUN_1477ed81a body=38 status=ok
// SIG undefined FUN_1477ed81a(void)

undefined8 FUN_1477ed81a(undefined8 param_1,int param_2)

{
  FUN_1477ed848();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed848 FUN_1477ed848 body=71 status=ok
// SIG undefined FUN_1477ed848(void)

void FUN_1477ed848(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a57cc80;
  plVar3 = (longlong *)param_1[9];
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
  FUN_1478b1a1a(param_1);
  return;
}



// FUNCTION 1477ed890 FUN_1477ed890 body=9 status=ok
// SIG undefined FUN_1477ed890(void)

void FUN_1477ed890(longlong param_1)

{
  FUN_1477ed8e6(param_1 + 0x10);
  return;
}



// FUNCTION 1477ed89a FUN_1477ed89a body=29 status=ok
// SIG undefined FUN_1477ed89a(void)

undefined8 FUN_1477ed89a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed8b8 FUN_1477ed8b8 body=38 status=ok
// SIG undefined FUN_1477ed8b8(void)

undefined8 FUN_1477ed8b8(undefined8 param_1,int param_2)

{
  FUN_1477ed8e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed8e6 FUN_1477ed8e6 body=71 status=ok
// SIG undefined FUN_1477ed8e6(void)

void FUN_1477ed8e6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a57cd20;
  plVar3 = (longlong *)param_1[9];
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
  FUN_1478b1a1a(param_1);
  return;
}



// FUNCTION 1477ed92e FUN_1477ed92e body=9 status=ok
// SIG undefined FUN_1477ed92e(void)

void FUN_1477ed92e(longlong param_1)

{
  FUN_1477ed956(param_1 + 0x10);
  return;
}



// FUNCTION 1477ed938 FUN_1477ed938 body=29 status=ok
// SIG undefined FUN_1477ed938(void)

undefined8 FUN_1477ed938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ed956 FUN_1477ed956 body=71 status=ok
// SIG undefined FUN_1477ed956(void)

void FUN_1477ed956(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a579be0;
  plVar3 = (longlong *)param_1[9];
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
  FUN_1478b1a1a(param_1);
  return;
}



// FUNCTION 1477ed99d FUN_1477ed99d body=73 status=ok
// SIG undefined FUN_1477ed99d(void)

void FUN_1477ed99d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477ed9e6 FUN_1477ed9e6 body=128 status=ok
// SIG undefined FUN_1477ed9e6(void)

void FUN_1477ed9e6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1477eda66(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1477eda66 FUN_1477eda66 body=132 status=ok
// SIG undefined FUN_1477eda66(void)

void FUN_1477eda66(longlong param_1,int param_2)

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



// FUNCTION 1477edaec FUN_1477edaec body=113 status=ok
// SIG undefined FUN_1477edaec(void)

void FUN_1477edaec(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_1477ed99d(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1477edb5e FUN_1477edb5e body=62 status=ok
// SIG undefined FUN_1477edb5e(void)

void FUN_1477edb5e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477edb9c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1477edb9c FUN_1477edb9c body=93 status=ok
// SIG undefined FUN_1477edb9c(void)

ulonglong FUN_1477edb9c(uint param_1,uint param_2)

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



// FUNCTION 1477edbfa FUN_1477edbfa body=71 status=ok
// SIG undefined FUN_1477edbfa(void)

undefined8 * FUN_1477edbfa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a57cee0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477edc46 FUN_1477edc46 body=68 status=ok
// SIG undefined FUN_1477edc46(void)

void FUN_1477edc46(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001477edc7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1477edc8a FUN_1477edc8a body=89 status=ok
// SIG undefined FUN_1477edc8a(void)

void FUN_1477edc8a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1477edce4 FUN_1477edce4 body=105 status=ok
// SIG undefined FUN_1477edce4(void)

ulonglong FUN_1477edce4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_1477edd2b;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1477edd4e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1477edd2b:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1477edd4e FUN_1477edd4e body=132 status=ok
// SIG undefined FUN_1477edd4e(void)

void FUN_1477edd4e(longlong param_1,int param_2)

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



// FUNCTION 1477eddd4 FUN_1477eddd4 body=62 status=ok
// SIG undefined FUN_1477eddd4(void)

void FUN_1477eddd4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ede12(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1477ede12 FUN_1477ede12 body=93 status=ok
// SIG undefined FUN_1477ede12(void)

ulonglong FUN_1477ede12(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 1477ede70 FUN_1477ede70 body=76 status=ok
// SIG undefined FUN_1477ede70(void)

void FUN_1477ede70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a6a5cc();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1477ede84;
    }
  }
  lVar2 = 0;
LAB_1477ede84:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1477edebc FUN_1477edebc body=132 status=ok
// SIG undefined FUN_1477edebc(void)

void FUN_1477edebc(longlong param_1,int param_2)

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



// FUNCTION 1477edf42 FUN_1477edf42 body=147 status=ok
// SIG undefined FUN_1477edf42(void)

void FUN_1477edf42(longlong param_1,int param_2)

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



// FUNCTION 1477edfd6 FUN_1477edfd6 body=138 status=ok
// SIG undefined FUN_1477edfd6(void)

void FUN_1477edfd6(longlong *param_1,uint param_2)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x28);
  plVar3 = *(longlong **)((longlong)_Dst + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)((longlong)_Dst + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove(_Dst,(void *)(lVar2 + (longlong)(iVar4 - iVar5) * 0x28),(longlong)iVar5 * 0x28);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 1477ee060 FUN_1477ee060 body=199 status=ok
// SIG undefined FUN_1477ee060(void)

undefined8 FUN_1477ee060(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_c8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = param_1;
  local_b8 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_c8);
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ee128 FUN_1477ee128 body=199 status=ok
// SIG undefined FUN_1477ee128(void)

undefined8 FUN_1477ee128(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_c8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = param_1;
  local_b8 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_c8);
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ee1f0 FUN_1477ee1f0 body=130 status=ok
// SIG undefined FUN_1477ee1f0(void)

void FUN_1477ee1f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a575d50;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1477ee272(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1477dbe24(param_1);
  return;
}



// FUNCTION 1477ee272 FUN_1477ee272 body=58 status=ok
// SIG undefined FUN_1477ee272(void)

void FUN_1477ee272(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1470346f5(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477ee2ac FUN_1477ee2ac body=199 status=ok
// SIG undefined FUN_1477ee2ac(void)

undefined8 FUN_1477ee2ac(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_c8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = param_1;
  local_b8 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_c8);
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ee374 FUN_1477ee374 body=160 status=ok
// SIG undefined FUN_1477ee374(void)

void FUN_1477ee374(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a576bb0;
  param_1[0x28] = &DAT_14a176f00;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  param_1[0x28] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x29);
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    FUN_147039104(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1477dbe24(param_1);
  return;
}



// FUNCTION 1477ee414 FUN_1477ee414 body=318 status=ok
// SIG undefined FUN_1477ee414(void)

float FUN_1477ee414(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = 0.0;
  iVar1 = 0;
  do {
    iVar3 = 0;
    do {
      fVar7 = (float)iVar3 * 0.00390625 + (float)iVar3 * 0.00390625 + -1.0;
      fVar9 = (float)iVar1 * 0.00390625 + (float)iVar1 * 0.00390625 + -1.0;
      uVar2 = 0;
      do {
        fVar8 = (fVar7 * fVar7 - fVar9 * fVar9) + -0.73;
        fVar9 = fVar9 * (fVar7 + fVar7) + 0.176;
        uVar4 = uVar2 + 1;
        if (1600.0 < fVar8 * fVar8 + fVar9 * fVar9) break;
        bVar5 = uVar2 < 299;
        fVar7 = fVar8;
        uVar2 = uVar4;
      } while (bVar5);
      fVar6 = fVar6 + (float)(int)uVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x100);
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x100) {
      uVar2 = rand();
      return (float)(uVar2 & 0x7fff) / 32767.0 + fVar6 * 1.5258789e-05;
    }
  } while( true );
}



// FUNCTION 1477ee552 FUN_1477ee552 body=787 status=ok
// SIG undefined FUN_1477ee552(void)

void FUN_1477ee552(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = 0x123400001234;
  iVar5 = 0;
  iVar6 = 200000;
  do {
    FUN_1477ee866(&local_d8,&local_f0);
    dVar1 = local_e0 * 3.0;
    dVar3 = local_e8 * 3.0;
    dVar2 = local_f0 * 3.0;
    FUN_1477ee866(&local_d8,&local_f0);
    dVar7 = local_e0 * 3.0 - dVar1;
    dVar8 = local_e8 * 3.0 - dVar3;
    dVar9 = local_f0 * 3.0 - dVar2;
    dVar11 = dVar9 * 0.0 + dVar8 * -1.9999999031424522;
    dVar13 = dVar7 * 1.9999999031424522 + dVar9 * 1.9999999403953552;
    dVar10 = dVar8 * -1.9999999403953552 + dVar7 * -0.0;
    dVar12 = dVar11 * -1.9999999403953552 + dVar10 * -2.1999999061226845 + dVar13 * 0.0;
    if (1e-05 <= dVar12) {
      dVar1 = dVar1 + -2.299999952316284;
      dVar3 = dVar3 + -0.20000000298023224;
      dVar2 = dVar2 + -0.10000000149011612;
      dVar10 = dVar11 * dVar1 + dVar10 * dVar2 + dVar13 * dVar3;
      bVar4 = false;
      if ((0.0 <= dVar10) && (dVar10 <= dVar12)) {
        dVar11 = dVar2 * 0.0 + dVar3 * 2.1999999061226845;
        dVar2 = dVar1 * -2.1999999061226845 + dVar2 * 1.9999999403953552;
        dVar1 = dVar3 * -1.9999999403953552 + dVar1 * -0.0;
        dVar8 = dVar7 * dVar11 + dVar9 * dVar1 + dVar8 * dVar2;
        bVar4 = false;
        if ((0.0 <= dVar8) && (bVar4 = false, dVar8 + dVar10 <= dVar12)) {
          bVar4 = 0.0 <= (dVar11 * -1.9999999403953552 + dVar1 * 1.9999999031424522 + dVar2 * 0.0) /
                         dVar12;
        }
      }
    }
    else {
      bVar4 = false;
    }
    iVar5 = iVar5 + (uint)bVar4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((local_d0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)iVar5 / 200000.0);
}



// FUNCTION 1477ee866 FUN_1477ee866 body=281 status=ok
// SIG undefined FUN_1477ee866(void)

void FUN_1477ee866(longlong param_1,double *param_2)

{
  uint uVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = *(uint *)(param_1 + 4);
  do {
    do {
      fVar3 = (float)(uVar1 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0;
      dVar4 = (double)(fVar3 + fVar3 + -1.0);
      fVar3 = (float)(uVar1 * -0x4b9b4d07 + 0x9d6f2492 >> 9 | 0x3f800000) + -1.0;
      dVar5 = (double)(fVar3 + fVar3 + -1.0);
      uVar1 = uVar1 * 0x1c3c718d + 0xf50d3da5;
      fVar3 = (float)(uVar1 >> 9 | 0x3f800000) + -1.0;
      dVar6 = (double)(fVar3 + fVar3 + -1.0);
      dVar2 = dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5;
    } while (1.0 < dVar2);
  } while (dVar2 < 9.999999747378752e-05);
  *(uint *)(param_1 + 4) = uVar1;
  dVar2 = 1.0 / SQRT(dVar2);
  *param_2 = dVar2 * dVar4;
  param_2[1] = dVar5 * dVar2;
  param_2[2] = dVar6 * dVar2;
  return;
}



// FUNCTION 1477ee984 FUN_1477ee984 body=325 status=ok
// SIG undefined FUN_1477ee984(void)

void FUN_1477ee984(undefined8 param_1,void *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  memset(param_2,0,0x208);
  lVar2 = DAT_14ca84da0;
  if (DAT_14ca84da8 - 2U < 0x7fffffff) {
    uVar1 = DAT_14ca84da8 - 1U;
    if (0x102 < DAT_14ca84da8 - 1U) {
      uVar1 = 0x103;
    }
    uVar3 = 0;
    do {
      *(undefined2 *)((longlong)param_2 + uVar3 * 2) = *(undefined2 *)(lVar2 + uVar3 * 2);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  memset((void *)((longlong)param_2 + 0x208),0,0x208);
  lVar2 = DAT_14ca84db0;
  if (DAT_14ca84db8 - 2U < 0x7fffffff) {
    uVar1 = DAT_14ca84db8 - 1U;
    if (0x102 < DAT_14ca84db8 - 1U) {
      uVar1 = 0x103;
    }
    uVar3 = 0;
    do {
      *(undefined2 *)((longlong)param_2 + 0x208 + uVar3 * 2) = *(undefined2 *)(lVar2 + uVar3 * 2);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  memset((void *)((longlong)param_2 + 0x410),0,0x208);
  lVar2 = DAT_14ca84dc0;
  if (DAT_14ca84dc8 - 2U < 0x7fffffff) {
    uVar1 = DAT_14ca84dc8 - 1U;
    if (0x102 < DAT_14ca84dc8 - 1U) {
      uVar1 = 0x103;
    }
    uVar3 = 0;
    do {
      *(undefined2 *)((longlong)param_2 + 0x410 + uVar3 * 2) = *(undefined2 *)(lVar2 + uVar3 * 2);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  memset((void *)((longlong)param_2 + 0x618),0,0x208);
  lVar2 = DAT_14ca84dd0;
  if (DAT_14ca84dd8 - 2U < 0x7fffffff) {
    uVar1 = DAT_14ca84dd8 - 1U;
    if (0x102 < DAT_14ca84dd8 - 1U) {
      uVar1 = 0x103;
    }
    uVar3 = 0;
    do {
      *(undefined2 *)((longlong)param_2 + 0x618 + uVar3 * 2) = *(undefined2 *)(lVar2 + uVar3 * 2);
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 1477eeaca FUN_1477eeaca body=287 status=ok
// SIG undefined FUN_1477eeaca(void)

void FUN_1477eeaca(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x48))();
  if (DAT_14ca83900 != (longlong *)0x0) {
    local_78 = 0xffffffff;
    uStack_74 = 0xffffffff;
    uStack_70 = 0xffffffff;
    uStack_6c = 0xffffffff;
    local_88 = 0xffffffff;
    uStack_84 = 0xffffffff;
    uStack_80 = 0xffffffff;
    uStack_7c = 0xffffffff;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    (**(code **)(*DAT_14ca83900 + 400))(DAT_14ca83900,&local_88);
    local_98 = 0;
    uStack_90 = 0;
    FUN_144a83b10(&local_98);
    memset((void *)(param_2 + 0x820),0,0x208);
    uVar3 = (ulonglong)((int)uStack_90 - 1);
    if ((int)uStack_90 == 0) {
      uVar3 = 0;
    }
    if (0 < (int)(uint)uVar3) {
      uVar1 = 0x103;
      if ((uint)uVar3 < 0x103) {
        uVar1 = uVar3;
      }
      uVar3 = 0;
      do {
        *(undefined2 *)(param_2 + 0x820 + uVar3 * 2) = *(undefined2 *)(local_98 + uVar3 * 2);
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    uVar2 = (**(code **)(*DAT_14ca83900 + 0x20))();
    FUN_14020fad6(param_3,uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477eebea FUN_1477eebea body=34 status=ok
// SIG undefined FUN_1477eebea(void)

void FUN_1477eebea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a57d970;
  return;
}



// FUNCTION 1477eec0c FUN_1477eec0c body=36 status=ok
// SIG undefined FUN_1477eec0c(void)

undefined8 FUN_1477eec0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477eec4c FUN_1477eec4c body=93 status=ok
// SIG undefined FUN_1477eec4c(void)

void FUN_1477eec4c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a57d900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477eecaa FUN_1477eecaa body=123 status=ok
// SIG undefined FUN_1477eecaa(void)

void FUN_1477eecaa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a57d900;
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



// FUNCTION 1477eed32 FUN_1477eed32 body=21 status=ok
// SIG undefined FUN_1477eed32(void)

undefined8 FUN_1477eed32(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477eed48 FUN_1477eed48 body=34 status=ok
// SIG undefined FUN_1477eed48(void)

undefined8 FUN_1477eed48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1477eed6a FUN_1477eed6a body=65 status=ok
// SIG undefined FUN_1477eed6a(void)

void FUN_1477eed6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a57d9d0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_14795d278(param_1);
  return;
}



// FUNCTION 1477eedc2 FUN_1477eedc2 body=110 status=ok
// SIG undefined FUN_1477eedc2(void)

void FUN_1477eedc2(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  
  if (*(short *)(param_1[0x1c] + 0x2c) != 0) {
    lVar2 = 0;
    fVar3 = 0.0;
    if (0.0 < param_2) {
      uVar1 = (ulonglong)*(byte *)(param_1[0x1c] + 0x1b);
      if (uVar1 < 4) {
        fVar3 = *(float *)(&DAT_14a57dba8 + uVar1 * 4);
      }
      lVar2 = (longlong)(fVar3 * param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x0001477eee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,lVar2);
    return;
  }
  FUN_1433fd560(param_1);
  FUN_144bd9a80(param_1[0x1c] + 0xc);
  return;
}



// FUNCTION 1477eee30 FUN_1477eee30 body=336 status=ok
// SIG undefined FUN_1477eee30(void)

undefined8 FUN_1477eee30(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  lVar7 = FUN_144bd9370(param_2,param_3);
  if (lVar7 == 0) {
    return 0;
  }
  if (*(byte *)(lVar7 + 9) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar3 = (ulonglong)*(byte *)(lVar7 + 9) * (ulonglong)*(uint *)(lVar7 + 0x10);
    *(int *)(param_1 + 0x40) = (int)lVar3;
    if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(lVar7 + 9);
  uVar2 = *(ushort *)(lVar7 + 0x20);
  if (param_3 < (uint)uVar2 * 2 + 0x28) {
    return 0;
  }
  if (uVar2 == 0) {
    uVar5 = *(ushort *)(lVar7 + 10) + 0x28;
  }
  else {
    uVar5 = (uint)*(ushort *)(lVar7 + 10) +
            (((uint)*(byte *)(lVar7 + 0xd) + (uint)*(byte *)(lVar7 + 0xe)) * (uint)uVar2 + 0x3f >> 6
            ) * 8 + 0x68;
  }
  *(uint *)(param_1 + 0x38) = uVar5;
  if (param_3 < uVar5) {
    return 0;
  }
  if (param_4 == 0) {
    return 1;
  }
  iVar6 = 0;
  switch(*(undefined1 *)(lVar7 + 0xf)) {
  case 0:
    iVar6 = 24000;
    break;
  case 1:
    iVar6 = 32000;
    break;
  case 2:
    iVar6 = 0xac44;
    break;
  case 3:
    iVar6 = 48000;
    break;
  default:
    bVar4 = true;
    goto LAB_1477eef25;
  }
  bVar4 = false;
LAB_1477eef25:
  *(int *)(param_4 + 8) = iVar6;
  bVar1 = *(byte *)(lVar7 + 9);
  *(uint *)(param_4 + 4) = (uint)bVar1;
  *(uint *)(param_4 + 0xc) = (uint)bVar1 * *(int *)(lVar7 + 0x10) * 2;
  if (!bVar4) {
    *(float *)(param_4 + 0x10) = (float)*(ulonglong *)(lVar7 + 0x10) / (float)iVar6;
  }
  return 1;
}



// FUNCTION 1477eef80 FUN_1477eef80 body=125 status=ok
// SIG undefined FUN_1477eef80(void)

int FUN_1477eef80(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = FUN_144bd9980(*(longlong *)(param_1 + 0xe0) + 0xc,
                        (ulonglong)*(uint *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x28),
                        *(int *)(param_1 + 0x30) - *(uint *)(param_1 + 0x34),&local_1c);
  iVar2 = local_1c;
  if (local_1c < 0 || cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xf8) = 1;
    iVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ef00e FUN_1477ef00e body=43 status=ok
// SIG undefined FUN_1477ef00e(void)

undefined8 FUN_1477ef00e(undefined8 param_1,int param_2)

{
  FUN_1477eed6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1477ef064 FUN_1477ef064 body=36 status=ok
// SIG undefined FUN_1477ef064(void)

undefined8 FUN_1477ef064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477ef0a4 FUN_1477ef0a4 body=93 status=ok
// SIG undefined FUN_1477ef0a4(void)

void FUN_1477ef0a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a57dac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477ef102 FUN_1477ef102 body=123 status=ok
// SIG undefined FUN_1477ef102(void)

void FUN_1477ef102(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a57dac0;
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



// FUNCTION 1477ef17e FUN_1477ef17e body=21 status=ok
// SIG undefined FUN_1477ef17e(void)

undefined8 FUN_1477ef17e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477ef196 FUN_1477ef196 body=69 status=ok
// SIG undefined FUN_1477ef196(void)

undefined8 * FUN_1477ef196(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x100);
  FUN_14795d19c(puVar1);
  *puVar1 = &PTR_FUN_14a57d9d0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf1) = 0;
  return puVar1;
}



// FUNCTION 1477ef1fe FUN_1477ef1fe body=44 status=ok
// SIG undefined FUN_1477ef1fe(void)

void FUN_1477ef1fe(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar2 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x20);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001477ef227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 1477ef232 FUN_1477ef232 body=65 status=ok
// SIG undefined FUN_1477ef232(void)

void FUN_1477ef232(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a57dbd0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14795d278(param_1);
  return;
}



// FUNCTION 1477ef274 FUN_1477ef274 body=176 status=ok
// SIG undefined FUN_1477ef274(void)

void FUN_1477ef274(longlong *param_1,float param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  lVar3 = FUN_144bda110();
  pbVar2 = (byte *)param_1[0x1d];
  bVar1 = *pbVar2;
  pbVar4 = pbVar2;
  if (bVar1 != 0) {
    uVar5 = 0;
    do {
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(pbVar2 + uVar5 * 8 + (ulonglong)(bVar1 + 0x33 & 0xffffffe0)));
      uVar5 = uVar5 + 1;
      pbVar4 = (byte *)param_1[0x1d];
    } while (uVar5 < *pbVar4);
  }
  if (*(short *)(pbVar4 + 0xe) == 0) {
    FUN_1433fd560(param_1,param_2);
    return;
  }
  lVar3 = 0;
  if (0.0 < param_2) {
    lVar3 = (longlong)((float)*(uint *)((longlong)param_1 + 0xd4) * param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001477ef308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,lVar3);
  return;
}



// FUNCTION 1477ef324 FUN_1477ef324 body=399 status=ok
// SIG undefined FUN_1477ef324(void)

void FUN_1477ef324(longlong *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = (ulonglong)param_2;
  lVar6 = FUN_144bda110();
  pbVar3 = (byte *)param_1[0x1d];
  bVar1 = *pbVar3;
  pbVar7 = pbVar3;
  if (bVar1 != 0) {
    uVar11 = 0;
    do {
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(pbVar3 + uVar11 * 8 + (ulonglong)(bVar1 + 0x33 & 0xffffffe0)));
      uVar11 = uVar11 + 1;
      pbVar7 = (byte *)param_1[0x1d];
    } while (uVar11 < *pbVar7);
  }
  if (*(short *)(pbVar7 + 0xe) == 0) {
    FUN_14795d370(param_1,uVar10);
    return;
  }
  param_2 = *(byte *)(param_1 + 9) * param_2;
  iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
  uVar8 = *(uint *)(param_1 + 8);
  if (uVar8 < param_2) {
    param_2 = uVar8 - 1;
    uVar10 = (ulonglong)(uVar8 / *(byte *)(param_1 + 9) - 1);
  }
  *(uint *)((longlong)param_1 + 0x44) = param_2;
  lVar6 = param_1[0x1d];
  uVar11 = (ulonglong)(iVar4 * (uint)*(ushort *)(lVar6 + 0x10));
  iVar4 = *(int *)((ulonglong)*(ushort *)(lVar6 + 0xc) * 0x20 + lVar6 + (uVar10 / uVar11) * 4);
  uVar2 = *(ushort *)(lVar6 + 0xe);
  *(short *)(lVar6 + 0x12) = (short)(uVar10 % uVar11);
  *(undefined4 *)(param_1[0x1d] + 8) = 0;
  *(undefined4 *)(param_1[0x1d] + 4) = 0;
  lVar6 = FUN_144bda110();
  pbVar3 = (byte *)param_1[0x1d];
  bVar1 = *pbVar3;
  if (bVar1 != 0) {
    uVar10 = 0;
    do {
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(pbVar3 + uVar10 * 8 + (ulonglong)(bVar1 + 0x33 & 0xffffffe0)));
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(byte *)param_1[0x1d]);
  }
  uVar8 = iVar4 + (uint)uVar2 * 2 + 0x1c;
  if (param_1[2] == 0) {
LAB_1477ef493:
    *(uint *)((longlong)param_1 + 0x34) = uVar8;
  }
  else {
    iVar4 = FUN_147d4184e();
    if (iVar4 != 0) {
      iVar9 = 0;
      do {
        uVar5 = FUN_147d41856(param_1[2],iVar9);
        if (uVar8 < uVar5) {
          if ((*(int *)((longlong)param_1 + 0x74) != iVar9) || (param_1[5] == 0)) {
            LOCK();
            *(int *)(param_1 + 0x18) = iVar9;
            UNLOCK();
            *(uint *)((longlong)param_1 + 0xc4) = uVar8;
            return;
          }
          goto LAB_1477ef493;
        }
        iVar9 = iVar9 + 1;
        uVar8 = uVar8 - uVar5;
      } while (iVar4 != iVar9);
    }
  }
  return;
}



// FUNCTION 1477ef53c FUN_1477ef53c body=71 status=ok
// SIG undefined FUN_1477ef53c(void)

void FUN_1477ef53c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1477ef5d4();
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
      FUN_1477ef64e();
      return;
    }
  }
  return;
}



// FUNCTION 1477ef584 FUN_1477ef584 body=33 status=ok
// SIG undefined FUN_1477ef584(void)

undefined1 FUN_1477ef584(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_14795d7b4();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(param_1 + 0x100);
  }
  return uVar2;
}



// FUNCTION 1477ef5a6 FUN_1477ef5a6 body=43 status=ok
// SIG undefined FUN_1477ef5a6(void)

undefined8 FUN_1477ef5a6(undefined8 param_1,int param_2)

{
  FUN_1477ef232();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1477ef5d4 FUN_1477ef5d4 body=120 status=ok
// SIG undefined FUN_1477ef5d4(void)

void FUN_1477ef5d4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7ea90(param_1,param_2,uVar5,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477ef64e FUN_1477ef64e body=58 status=ok
// SIG undefined FUN_1477ef64e(void)

void FUN_1477ef64e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ef688(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    return;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  FUN_144a7ea90(param_1,*(undefined4 *)(param_1 + 8),iVar1,2);
  return;
}



// FUNCTION 1477ef688 FUN_1477ef688 body=88 status=ok
// SIG undefined FUN_1477ef688(void)

ulonglong FUN_1477ef688(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e(param_1 * 2,0x10);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 1477ef6e0 FUN_1477ef6e0 body=36 status=ok
// SIG undefined FUN_1477ef6e0(void)

undefined8 FUN_1477ef6e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477ef720 FUN_1477ef720 body=93 status=ok
// SIG undefined FUN_1477ef720(void)

void FUN_1477ef720(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a57dcc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477ef77e FUN_1477ef77e body=123 status=ok
// SIG undefined FUN_1477ef77e(void)

void FUN_1477ef77e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a57dcc0;
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



// FUNCTION 1477ef7fa FUN_1477ef7fa body=21 status=ok
// SIG undefined FUN_1477ef7fa(void)

undefined8 FUN_1477ef7fa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477ef812 FUN_1477ef812 body=69 status=ok
// SIG undefined FUN_1477ef812(void)

undefined8 * FUN_1477ef812(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x108);
  FUN_14795d19c(puVar1);
  *puVar1 = &PTR_FUN_14a57dbd0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf9) = 0;
  return puVar1;
}



// FUNCTION 1477ef87a FUN_1477ef87a body=155 status=ok
// SIG undefined FUN_1477ef87a(void)

undefined8 * FUN_1477ef87a(undefined8 *param_1)

{
  void *_Dst;
  
  FUN_14795d25e();
  *param_1 = &PTR_FUN_14a57ded0;
  _Dst = (void *)FUN_14001cc68(0x348);
  memset(_Dst,0,0x348);
  param_1[4] = _Dst;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  FUN_145a3da42(param_1 + 0x11);
  return param_1;
}



// FUNCTION 1477ef916 FUN_1477ef916 body=125 status=ok
// SIG undefined FUN_1477ef916(void)

void FUN_1477ef916(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a57ded0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (DAT_14cabbb20 != 0) {
      ov_clear(lVar1);
    }
    thunk_FUN_1400020a8(lVar1,0x348);
  }
  param_1[4] = 0;
  LeaveCriticalSection(lpCriticalSection);
  FUN_141289612(param_1 + 0x11);
  DeleteCriticalSection(lpCriticalSection);
  FUN_14795d2f4(param_1);
  return;
}



// FUNCTION 1477ef994 FUN_1477ef994 body=329 status=ok
// SIG undefined FUN_1477ef994(void)

ulonglong FUN_1477ef994(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  int *local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    local_68 = (int *)(param_1 + 0x78);
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x68);
      uVar4 = *(uint *)(param_1 + 0x74);
      if ((lVar3 == 0) || (*(uint *)(param_1 + 0x70) != uVar4)) {
        *(uint *)(param_1 + 0x70) = uVar4;
        uVar2 = FUN_14795d958(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10);
        if (uVar2 <= uVar4) {
          *(undefined8 *)(param_1 + 0x68) = 0;
          *(undefined4 *)(param_1 + 0x78) = 0;
          break;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x70);
        local_58 = *(undefined8 *)(param_1 + 0x10);
        local_50 = *(longlong *)(param_1 + 0x18);
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        lVar3 = FUN_1477efade(param_1,&local_58,uVar1,local_68);
        *(longlong *)(param_1 + 0x68) = lVar3;
        if (lVar3 == 0) break;
        *(undefined4 *)(param_1 + 0x38) = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x38);
      }
      uVar6 = *local_68 - uVar4;
      uVar7 = param_3 - (int)uVar5;
      uVar2 = uVar7;
      if (uVar6 < uVar7) {
        uVar2 = uVar6;
      }
      if (uVar2 != 0) {
        memcpy((void *)(local_60 + uVar5),(void *)(lVar3 + (ulonglong)uVar4),(ulonglong)uVar2);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uVar2;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar2;
        uVar5 = uVar5 + uVar2;
      }
      if (uVar6 <= uVar7) {
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
      }
    } while (uVar5 < param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1477efade FUN_1477efade body=284 status=ok
// SIG undefined FUN_1477efade(void)

undefined8 FUN_1477efade(longlong param_1,longlong *param_2,uint param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != 0) {
    uVar3 = FUN_14795d958(*(longlong *)(*param_2 + 0x10) + 0x10);
    if (param_3 < uVar3) {
      if (param_3 == 0) {
        FUN_147d41890(&local_58,param_2,1);
        *param_4 = local_50;
        uVar5 = local_58;
      }
      else {
        uVar5 = FUN_140083894();
        plVar6 = (longlong *)FUN_147a355e6(uVar5);
        local_60 = 1;
        local_68 = 0;
        (**(code **)(*plVar6 + 0xb0))(plVar6,&local_58,param_2,param_3);
        param_1 = param_1 + 0x88;
        FUN_1434a218e(param_1,&local_58);
        FUN_141289612(&local_58);
        uVar4 = FUN_147a359ec(param_1);
        *param_4 = uVar4;
        uVar5 = FUN_147a359e8(param_1);
      }
      goto LAB_1477efb93;
    }
    *param_4 = 0;
  }
  uVar5 = 0;
LAB_1477efb93:
  plVar6 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477efbfc FUN_1477efbfc body=22 status=ok
// SIG undefined FUN_1477efbfc(void)

byte FUN_1477efbfc(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_14795d7b4();
  return bVar1 | *(byte *)(param_1 + 0x7d);
}



// FUNCTION 1477efc12 FUN_1477efc12 body=43 status=ok
// SIG undefined FUN_1477efc12(void)

undefined8 FUN_1477efc12(undefined8 param_1,int param_2)

{
  FUN_1477ef916();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1477efc64 FUN_1477efc64 body=36 status=ok
// SIG undefined FUN_1477efc64(void)

undefined8 FUN_1477efc64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477efca4 FUN_1477efca4 body=93 status=ok
// SIG undefined FUN_1477efca4(void)

void FUN_1477efca4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a57e060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477efd02 FUN_1477efd02 body=126 status=ok
// SIG undefined FUN_1477efd02(void)

void FUN_1477efd02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a57e060;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477efd71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477efd80 FUN_1477efd80 body=21 status=ok
// SIG undefined FUN_1477efd80(void)

undefined8 FUN_1477efd80(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477efd98 FUN_1477efd98 body=31 status=ok
// SIG undefined FUN_1477efd98(void)

void FUN_1477efd98(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xb0,0x10);
  FUN_1477ef87a(uVar1);
  return;
}



// FUNCTION 1477efdda FUN_1477efdda body=94 status=ok
// SIG undefined FUN_1477efdda(void)

void FUN_1477efdda(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a57e130;
  puVar1 = (undefined8 *)param_1[0x1a];
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1400020a8(*puVar1);
    thunk_FUN_1400020a8(puVar1,0x10);
    param_1[0x1a] = 0;
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14795d278(param_1);
  return;
}



// FUNCTION 1477efe38 FUN_1477efe38 body=132 status=ok
// SIG undefined FUN_1477efe38(void)

undefined8 FUN_1477efe38(longlong *param_1,int *param_2,longlong *param_3,int param_4)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  if (0x29 < param_4) {
    *param_1 = *param_3;
    *param_2 = *param_2 + 8;
    if (*param_1 == 0x5355504f4555) {
      *(char *)(param_1 + 1) = (char)param_3[1];
      *param_2 = *param_2 + 1;
      *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_3 + 9);
      *param_2 = *param_2 + 1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 10);
      *param_2 = *param_2 + 4;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_3 + 0xe);
      *param_2 = *param_2 + 4;
      param_1[3] = *(longlong *)((longlong)param_3 + 0x12);
      *param_2 = *param_2 + 8;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)param_3 + 0x1a);
      *param_2 = *param_2 + 4;
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x1e);
      *param_2 = *param_2 + 4;
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)((longlong)param_3 + 0x22);
      *param_2 = *param_2 + 4;
      uVar1 = *(undefined4 *)((longlong)param_3 + 0x26);
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
      *param_2 = *param_2 + 4;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1477efebc FUN_1477efebc body=210 status=ok
// SIG undefined FUN_1477efebc(void)

void FUN_1477efebc(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  cVar3 = FUN_1477efe38(param_1 + 0xd8,param_1 + 0x34,param_2);
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x40) = (uint)*(byte *)(param_1 + 0xe1) * *(int *)(param_1 + 0xf0);
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0xe1);
    if (param_4 != 0) {
      uVar2 = *(uint *)(param_1 + 0xe4);
      *(uint *)(param_4 + 8) = uVar2;
      bVar1 = *(byte *)(param_1 + 0xe1);
      *(uint *)(param_4 + 4) = (uint)bVar1;
      *(uint *)(param_4 + 0xc) = (uint)bVar1 * *(int *)(param_1 + 0xf0) * 2;
      *(float *)(param_4 + 0x10) =
           (float)((((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0xf0)) -
                    4503599627370496.0) +
                   ((double)CONCAT44(0x45300000,
                                     (int)((ulonglong)*(undefined8 *)(param_1 + 0xf0) >> 0x20)) -
                   1.9342813113834067e+25)) / (double)uVar2);
    }
  }
  return;
}



// FUNCTION 1477eff8e FUN_1477eff8e body=161 status=ok
// SIG undefined FUN_1477eff8e(void)

bool FUN_1477eff8e(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x10);
  FUN_1477f0030(puVar2,*(undefined4 *)(param_1 + 0xe8),*(undefined1 *)(param_1 + 0x48));
  *(undefined8 **)(param_1 + 0xd0) = puVar2;
  iVar1 = *(int *)(puVar2 + 1);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x118) = 0;
    if (*(int *)(param_1 + 0x11c) != 0) {
      FUN_144893a1c(param_1 + 0x110,0);
    }
  }
  else {
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1400020a8(*puVar2);
      thunk_FUN_1400020a8(puVar2,0x10);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return iVar1 == 0;
}



// FUNCTION 1477f0030 FUN_1477f0030 body=117 status=ok
// SIG undefined FUN_1477f0030(void)

undefined8 * FUN_1477f0030(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = (ulonglong)((param_3 & 0xff) << 4);
  uVar3 = *(undefined4 *)((longlong)L"OpusAudioDecoder" + uVar4 + 0x18);
  uVar1 = *(undefined4 *)((longlong)L"OpusAudioDecoder" + uVar4 + 0x1c);
  iVar2 = FUN_144bc9854(uVar3,uVar1);
  uVar5 = FUN_14001cc68((longlong)iVar2,0);
  *param_1 = uVar5;
  uVar3 = FUN_144bc98bc(uVar5,param_2,param_3 & 0xff,uVar3,uVar1,
                        (longlong)L"OpusAudioDecoder" + uVar4 + 0x20);
  *(undefined4 *)(param_1 + 1) = uVar3;
  return param_1;
}



// FUNCTION 1477f00a6 FUN_1477f00a6 body=75 status=ok
// SIG undefined FUN_1477f00a6(void)

undefined2 FUN_1477f00a6(undefined8 param_1)

{
  undefined1 auStack_38 [38];
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_12 = 0;
  FUN_14795d336(param_1,&local_12,2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f013e FUN_1477f013e body=132 status=ok
// SIG undefined FUN_1477f013e(void)

void FUN_1477f013e(longlong *param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x90))();
  if (*plVar1 != 0) {
    FUN_1433fd560(param_1,param_2);
    return;
  }
  if ((param_1[5] != 0) && ((int)param_1[6] != 0)) {
    lVar2 = 0;
    if (0.0 < param_2) {
      lVar2 = (longlong)((float)*(uint *)((longlong)param_1 + 0xe4) * param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x0001477f01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,lVar2);
    return;
  }
  return;
}



// FUNCTION 1477f01c2 FUN_1477f01c2 body=308 status=ok
// SIG undefined FUN_1477f01c2(void)

void FUN_1477f01c2(longlong *param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x90))();
  if (*plVar5 == 0) {
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      uVar8 = *(uint *)(param_1 + 6);
      if ((ulonglong)uVar8 != 0) {
        uVar10 = (uint)*(byte *)(param_1 + 9) * param_2;
        puVar7 = (ushort *)((ulonglong)*(uint *)(param_1 + 7) + lVar2);
        puVar9 = (ushort *)(lVar2 + (ulonglong)uVar8);
        if (*(uint *)(param_1 + 7) < uVar8) {
          uVar8 = 0;
          do {
            uVar1 = *puVar7;
            iVar3 = FUN_144bc46e8(puVar7 + 1,uVar1);
            iVar4 = FUN_144bca1c8(puVar7 + 1,(int)param_1[0x1d]);
            uVar6 = (uint)*(byte *)(param_1 + 9) * iVar4 * iVar3 + uVar8;
            if (uVar10 < uVar6 && uVar10 <= uVar8) {
              *(uint *)((longlong)param_1 + 0x44) = uVar8;
              *(int *)((longlong)param_1 + 0x34) = (int)puVar7 - (int)param_1[5];
              break;
            }
            puVar7 = (ushort *)((longlong)puVar7 + (ulonglong)uVar1 + 2);
            uVar8 = uVar6;
          } while (puVar7 < puVar9);
        }
        if (puVar9 <= puVar7) {
          *(uint *)((longlong)param_1 + 0x44) = uVar10;
          *(int *)((longlong)param_1 + 0x34) = (int)param_1[6];
        }
      }
    }
  }
  else {
    FUN_14795d370(param_1,param_2);
  }
  *(int *)(param_1 + 0x21) = *(int *)((longlong)param_1 + 0xfc) + (int)param_1[0x20];
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (*(int *)((longlong)param_1 + 0x11c) == 0) {
    return;
  }
  FUN_144893a1c(param_1 + 0x22,0);
  return;
}



// FUNCTION 1477f02f6 FUN_1477f02f6 body=43 status=ok
// SIG undefined FUN_1477f02f6(void)

undefined8 FUN_1477f02f6(undefined8 param_1,int param_2)

{
  FUN_1477efdda();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1477f0322 FUN_1477f0322 body=36 status=ok
// SIG undefined FUN_1477f0322(void)

undefined8 FUN_1477f0322(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477f0362 FUN_1477f0362 body=93 status=ok
// SIG undefined FUN_1477f0362(void)

void FUN_1477f0362(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a57e2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477f03c0 FUN_1477f03c0 body=123 status=ok
// SIG undefined FUN_1477f03c0(void)

void FUN_1477f03c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a57e2a0;
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



// FUNCTION 1477f043c FUN_1477f043c body=21 status=ok
// SIG undefined FUN_1477f043c(void)

undefined8 FUN_1477f043c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477f0454 FUN_1477f0454 body=94 status=ok
// SIG undefined FUN_1477f0454(void)

undefined8 * FUN_1477f0454(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x120);
  FUN_14795d19c(puVar1);
  *puVar1 = &PTR_FUN_14a57e130;
  puVar1[0x1a] = 0;
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xfc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x104) = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  return puVar1;
}



// FUNCTION 1477f04d4 FUN_1477f04d4 body=187 status=ok
// SIG undefined FUN_1477f04d4(void)

undefined8 * FUN_1477f04d4(undefined8 *param_1)

{
  FUN_14795d25e();
  *param_1 = &PTR_FUN_14a57e7d0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  FUN_145a3da42(param_1 + 0x24);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x29),4000);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(byte *)((longlong)param_1 + 0x17c) = *(byte *)((longlong)param_1 + 0x17c) & 0xf8;
  *(undefined4 *)(param_1 + 0x30) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x31),4000);
  return param_1;
}



// FUNCTION 1477f0590 FUN_1477f0590 body=104 status=ok
// SIG undefined FUN_1477f0590(void)

void FUN_1477f0590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a57e7d0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
    param_1[0x1d] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  FUN_141289612(param_1 + 0x24);
  FUN_1477f05f8(param_1 + 5);
  FUN_14795d2f4(param_1);
  return;
}



// FUNCTION 1477f05f8 FUN_1477f05f8 body=79 status=ok
// SIG undefined FUN_1477f05f8(void)

void FUN_1477f05f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1477f0a95(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477f0690 FUN_1477f0690 body=757 status=ok
// SIG undefined FUN_1477f0690(void)

ulonglong FUN_1477f0690(longlong param_1,undefined2 *param_2,char param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined2 *_Dst;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong _Size;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong unaff_R14;
  
  _Size = (ulonglong)param_4;
  iVar2 = *(int *)(param_1 + 0xd8);
  if ((*(byte *)(param_1 + 0x17c) & 1) != 0) {
    FUN_14336418a();
  }
  uVar3 = *(uint *)(param_1 + 0x100);
  uVar9 = *(uint *)(param_1 + 0x104);
  if (uVar3 < uVar9 || param_3 != '\0') {
    if (*(int *)(param_1 + 0xdc) == 2) {
      if (param_4 == 0) {
LAB_1477f093c:
        unaff_R14 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0xd8);
        uVar7 = *(uint *)(param_1 + 0xf0);
        unaff_R14 = 0;
        _Dst = param_2;
        do {
          uVar8 = *(uint *)(param_1 + 0xc4) >> 1;
          if (uVar8 <= uVar7) {
            if (0 < iVar2) {
              iVar6 = 0;
              do {
                cVar1 = FUN_14336460b((ulonglong)
                                      (uint)((*(int *)(param_1 + 0x178) * iVar6 +
                                             *(int *)(param_1 + 0x174)) * *(int *)(param_1 + 200)) +
                                      *(longlong *)(param_1 + 0x68),*(int *)(param_1 + 200),
                                      (ulonglong)(uint)(*(int *)(param_1 + 0xc4) * iVar6) +
                                      *(longlong *)(param_1 + 0xe8));
                if (cVar1 == '\0') {
                  memset(param_2,0,_Size);
                  *(undefined1 *)(param_1 + 8) = 1;
                  goto LAB_1477f0894;
                }
                iVar6 = iVar6 + 1;
                iVar2 = *(int *)(param_1 + 0xd8);
              } while (iVar6 < iVar2);
              uVar9 = *(uint *)(param_1 + 0x104);
              uVar3 = *(uint *)(param_1 + 0x100);
              uVar8 = *(uint *)(param_1 + 0xc4) >> 1;
            }
            *(undefined4 *)(param_1 + 0xf0) = 0;
            *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
            uVar7 = 0;
          }
          uVar5 = (uint)(_Size / (ulonglong)((longlong)iVar2 * 2));
          uVar4 = uVar8 - uVar7;
          if (uVar5 <= uVar8 - uVar7) {
            uVar4 = uVar5;
          }
          uVar8 = uVar9 - uVar3;
          if (uVar4 < uVar9 - uVar3) {
            uVar8 = uVar4;
          }
          if (uVar8 != 0) {
            uVar3 = 0;
            do {
              if (0 < iVar2) {
                iVar6 = 0;
                do {
                  *_Dst = *(undefined2 *)
                           ((ulonglong)(uint)(*(int *)(param_1 + 0xc4) * iVar6) +
                            *(longlong *)(param_1 + 0xe8) +
                           (ulonglong)(*(int *)(param_1 + 0xf0) + uVar3) * 2);
                  _Dst = _Dst + 1;
                  iVar6 = iVar6 + 1;
                  iVar2 = *(int *)(param_1 + 0xd8);
                } while (iVar6 < iVar2);
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < uVar8);
            uVar7 = *(uint *)(param_1 + 0xf0);
            uVar3 = *(uint *)(param_1 + 0x100);
            uVar9 = *(uint *)(param_1 + 0x104);
          }
          uVar7 = uVar7 + uVar8;
          *(uint *)(param_1 + 0xf0) = uVar7;
          uVar4 = (int)_Size + iVar2 * uVar8 * -2;
          _Size = (ulonglong)uVar4;
          uVar3 = uVar3 + uVar8;
          *(uint *)(param_1 + 0x100) = uVar3;
          if (uVar9 <= uVar3) {
            if (param_3 == '\0') goto LAB_1477f096a;
            uVar7 = *(uint *)(param_1 + 0xc4) >> 1;
            *(uint *)(param_1 + 0xf0) = uVar7;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x174) = 0;
            *(undefined4 *)(param_1 + 0x100) = 0;
            unaff_R14 = 1;
          }
        } while (uVar4 != 0);
      }
    }
    else {
      uVar7 = 0;
      if (param_4 == 0) goto LAB_1477f093c;
      uVar8 = iVar2 * 2;
      unaff_R14 = 0;
      do {
        uVar5 = (uint)(_Size / uVar8);
        uVar4 = uVar9 - uVar3;
        if (uVar5 < uVar9 - uVar3) {
          uVar4 = uVar5;
        }
        memcpy(param_2 + uVar7,(void *)((ulonglong)(uVar3 * uVar8) + *(longlong *)(param_1 + 0x68)),
               (ulonglong)(uVar4 * uVar8));
        uVar3 = *(int *)(param_1 + 0x100) + uVar4;
        *(uint *)(param_1 + 0x100) = uVar3;
        uVar5 = (int)_Size - uVar4 * uVar8;
        _Size = (ulonglong)uVar5;
        uVar7 = uVar4 * *(int *)(param_1 + 0xd8) + uVar7;
        uVar9 = *(uint *)(param_1 + 0x104);
        if (uVar9 <= uVar3) {
          *(undefined4 *)(param_1 + 0x100) = 0;
          if (param_3 == '\0') {
            _Dst = param_2 + uVar7;
            goto LAB_1477f096a;
          }
          unaff_R14 = 1;
          uVar3 = 0;
        }
      } while (uVar5 != 0);
    }
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xfc;
    goto LAB_1477f0897;
  }
  memset(param_2,0,_Size);
LAB_1477f0894:
  unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
LAB_1477f0897:
  return unaff_R14 & 0xffffff01;
LAB_1477f096a:
  unaff_R14 = 0;
  memset(_Dst,0,_Size);
  *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xfc;
  goto LAB_1477f0894;
}



// FUNCTION 1477f09a2 FUN_1477f09a2 body=165 status=ok
// SIG undefined FUN_1477f09a2(void)

undefined8 FUN_1477f09a2(longlong param_1,char param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xfc;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x148);
  if (param_2 == '\0') {
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      uVar2 = 0;
      goto LAB_1477f0a1c;
    }
  }
  else {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_145a3da42(local_48);
  FUN_1434a218e(param_1 + 0x120,local_48);
  FUN_141289612(local_48);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x170) = 1;
  LeaveCriticalSection(lpCriticalSection);
  uVar2 = 1;
LAB_1477f0a1c:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f0a48 FUN_1477f0a48 body=43 status=ok
// SIG undefined FUN_1477f0a48(void)

undefined8 FUN_1477f0a48(undefined8 param_1,int param_2)

{
  FUN_1477f0590();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 1477f0a95 FUN_1477f0a95 body=47 status=ok
// SIG undefined FUN_1477f0a95(void)

void FUN_1477f0a95(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477f0ac4 FUN_1477f0ac4 body=36 status=ok
// SIG undefined FUN_1477f0ac4(void)

undefined8 FUN_1477f0ac4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477f0b04 FUN_1477f0b04 body=93 status=ok
// SIG undefined FUN_1477f0b04(void)

void FUN_1477f0b04(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a57e910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477f0b62 FUN_1477f0b62 body=126 status=ok
// SIG undefined FUN_1477f0b62(void)

void FUN_1477f0b62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a57e910;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f0bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477f0be0 FUN_1477f0be0 body=21 status=ok
// SIG undefined FUN_1477f0be0(void)

undefined8 FUN_1477f0be0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477f0bf8 FUN_1477f0bf8 body=31 status=ok
// SIG undefined FUN_1477f0bf8(void)

void FUN_1477f0bf8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1b0,0x10);
  FUN_1477f04d4(uVar1);
  return;
}



// FUNCTION 1477f0c3a FUN_1477f0c3a body=31 status=ok
// SIG undefined FUN_1477f0c3a(void)

void FUN_1477f0c3a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1b0,0x10);
  FUN_1477f04d4(uVar1);
  return;
}



// FUNCTION 1477f0cba FUN_1477f0cba body=167 status=ok
// SIG undefined FUN_1477f0cba(void)

undefined8 * FUN_1477f0cba(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = DAT_14cabbc78;
  if (DAT_14cabbc78 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar3 = &PTR_LAB_149e668b0;
    *(undefined2 *)(puVar3 + 1) = 0;
    FUN_1405bceb4(puVar3);
    FUN_1409e1656(puVar3 + 2);
    *puVar3 = &PTR_FUN_14a587da0;
    puVar3[2] = &PTR_FUN_14a587dc0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar2 = DAT_14cabbc78;
    puVar1 = DAT_14cabbc78;
    if ((DAT_14cabbc78 != puVar3) && (puVar1 = puVar3, DAT_14cabbc78 != (undefined8 *)0x0)) {
      puVar1 = (undefined8 *)*DAT_14cabbc78;
      DAT_14cabbc78 = puVar3;
      (*(code *)*puVar1)(puVar2,1);
      puVar1 = DAT_14cabbc78;
    }
  }
  DAT_14cabbc78 = puVar1;
  return DAT_14cabbc78;
}



// FUNCTION 1477f0d62 FUN_1477f0d62 body=103 status=ok
// SIG undefined FUN_1477f0d62(void)

void FUN_1477f0d62(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1477fa2ea(param_1 + 0x18);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f0dca FUN_1477f0dca body=664 status=ok
// SIG undefined FUN_1477f0dca(void)

void FUN_1477f0dca(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 1) {
    cVar6 = FUN_1477f1094(*(undefined8 *)*plVar1);
    if (cVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    iVar7 = 0;
    iVar10 = *(int *)(param_1 + 0x10) + -1;
    if (iVar10 != 0) {
      memmove(*(void **)(param_1 + 8),(void *)((longlong)*(void **)(param_1 + 8) + 8),
              (longlong)iVar10 << 3);
      iVar7 = *(int *)(param_1 + 0x10) + -1;
    }
    *(int *)(param_1 + 0x10) = iVar7;
    FUN_1477f10f6(param_1 + 0x18,&local_50);
    iVar7 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar7 + 1U) {
      FUN_1477fa4b6(plVar1,iVar7);
    }
    *(longlong *)(*plVar1 + (longlong)iVar7 * 8) = local_50;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    lVar4 = DAT_14cb0d2b0;
    if (DAT_14cb0d2b0 != 0) {
      lVar9 = FUN_1413f862e();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        local_40 = *(undefined8 *)(lVar4 + 0x1370);
        plVar5 = *(longlong **)(lVar4 + 0x1378);
        if (plVar5 == (longlong *)0x0) {
          local_38 = (longlong *)0x0;
          (**(code **)(*(longlong *)(*(longlong *)*plVar1 + 0x28) + 0x10))
                    (*(longlong *)*plVar1 + 0x28,&local_40,0xffffffff);
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          lVar4 = *(longlong *)*plVar1;
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_38 = plVar5;
          (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_40,0xffffffff);
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
    }
  }
  else {
    local_50 = 0;
    lVar4 = *plVar1;
    local_48 = iVar7;
    if (iVar7 != 0) {
      FUN_1477fa53c(&local_50,iVar7);
      FUN_1477fa595(local_50,lVar4,iVar7);
      lVar4 = local_50;
      lVar9 = (longlong)local_48;
      if (lVar9 != 0) {
        lVar8 = 0;
        do {
          cVar6 = FUN_1477f1094(*(undefined8 *)(lVar4 + lVar8));
          plVar1 = *(longlong **)(lVar4 + lVar8);
          if (cVar6 == '\0') {
            FUN_1477f113e(plVar1,param_2);
          }
          else {
            (**(code **)(*plVar1 + 0x2c8))();
          }
          lVar8 = lVar8 + 8;
        } while (lVar9 * 8 != lVar8);
      }
      if (local_50 != 0) {
        FUN_1400020a8(local_50);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f1094 FUN_1477f1094 body=98 status=ok
// SIG undefined FUN_1477f1094(void)

undefined8 FUN_1477f1094(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x150) == '\x01') &&
     (*(char *)((longlong)*(longlong **)(param_1 + 0x78) +
               (ulonglong)((uint)DAT_14c872be0 & 1) + 0x51) == '\0')) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2e0))();
    if ((cVar1 != '\0') &&
       (*(char *)((longlong)*(longlong **)(param_1 + 0x80) +
                 (ulonglong)((uint)DAT_14c872be0 & 1) + 0x51) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001477f10ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2e0))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1477f10f6 FUN_1477f10f6 body=72 status=ok
// SIG undefined FUN_1477f10f6(void)

longlong * FUN_1477f10f6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *(longlong *)(*param_1 + -8 + (longlong)iVar2 * 8);
  *param_2 = lVar1;
  if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
    FUN_1456cec3c();
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1477fa41a(param_1);
  return param_2;
}



// FUNCTION 1477f113e FUN_1477f113e body=163 status=ok
// SIG undefined FUN_1477f113e(void)

void FUN_1477f113e(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar1 + (ulonglong)(~(uint)DAT_14c872be0 & 1) + 0x51) = 0;
    (**(code **)(*plVar1 + 0x2a8))();
  }
  plVar1 = (longlong *)param_1[0x10];
  if (plVar1 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar1 + (ulonglong)(~(uint)DAT_14c872be0 & 1) + 0x51) = 0;
    (**(code **)(*plVar1 + 0x2a8))();
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2);
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x2b0))();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f11cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x10] + 0x2b0))();
    return;
  }
  return;
}



// FUNCTION 1477f11e2 FUN_1477f11e2 body=191 status=ok
// SIG undefined FUN_1477f11e2(void)

void FUN_1477f11e2(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(longlong *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1477f12a2(&local_38,param_1 + 0x38);
  FUN_1477f12a2(&local_38,param_1 + 0x28);
  lVar2 = local_38;
  lVar4 = (longlong)(int)uStack_30;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x2c8))();
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  puVar1 = DAT_14cabbc78;
  if (DAT_14cabbc78 != (undefined8 *)0x0) {
    DAT_14cabbc78 = (undefined8 *)0x0;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f12a2 FUN_1477f12a2 body=94 status=ok
// SIG undefined FUN_1477f12a2(void)

void FUN_1477f12a2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1477fa4b6(param_1,iVar2);
  }
  FUN_1477fa595((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1477f1300 FUN_1477f1300 body=108 status=ok
// SIG undefined FUN_1477f1300(void)

void FUN_1477f1300(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0,0);
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),0,0);
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),0,0);
  return;
}



// FUNCTION 1477f136c FUN_1477f136c body=32 status=ok
// SIG undefined FUN_1477f136c(void)

undefined8 FUN_1477f136c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FActiveMovieSceneCaptures");
  return param_2;
}



// FUNCTION 1477f138c FUN_1477f138c body=1282 status=ok
// SIG undefined FUN_1477f138c(void)

undefined8 FUN_1477f138c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_88;
  undefined8 uStack_80;
  uint local_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x28);
  plVar10 = *(longlong **)(param_1 + 0xb0);
  if (plVar10 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(param_1 + 0xb0);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0xb0) = plVar3;
  }
  local_68 = 0;
  uStack_60 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = (uint *)0x0;
  cVar4 = FUN_14063337c(&DAT_14c846b20,L"-CustomRenderPasses=",&local_68,0);
  if (cVar4 != '\0') {
    FUN_1403de9f2(&local_68,param_1 + 0x58,&DAT_149e06196,1);
  }
  local_6c = (uint)*(byte *)(param_1 + 0x70);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"-CaptureGamut=",&local_6c);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"-HDRCompressionQuality=",param_1 + 0x6c);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140751e3e(&DAT_14c846b20,L"-CaptureFramesInHDR=",param_1 + 0x68);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140751e3e(&DAT_14c846b20,L"-DisableScreenPercentage=",param_1 + 0x98);
  local_88 = 0;
  uStack_80 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = (uint *)0x0;
  cVar4 = FUN_14063337c(&DAT_14c846b20,L"-PostProcessingMaterial=",&local_88,0);
  if (cVar4 != '\0') {
    local_58 = local_88;
    local_50 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      local_50 = 0;
    }
    FUN_14475bf92(param_1 + 0x78);
  }
  lVar7 = FUN_140081d40(param_1 + 0x78,0);
  lVar9 = 0;
  if (lVar7 != 0) {
    lVar9 = FUN_1402d2740();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar7;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar7);
      }
    }
  }
  local_a0 = param_1 + 0xa0;
  *(longlong *)(param_1 + 0xa0) = lVar9;
  local_a8 = &local_6c;
  local_98 = param_1 + 0x98;
  FUN_1477f1890(&local_58,param_1 + 0x58,param_1 + 0x68,param_1 + 0x6c);
  plVar3 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0xb8) = local_58;
    plVar10 = *(longlong **)(param_1 + 0xc0);
    if (plVar10 == (longlong *)0x0) goto LAB_1477f15c8;
    *(undefined8 *)(param_1 + 0xc0) = 0;
LAB_1477f1787:
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1477f15c8;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0xb8) = local_58;
    plVar10 = *(longlong **)(param_1 + 0xc0);
    if (plVar3 != plVar10) {
      *(longlong **)(param_1 + 0xc0) = plVar3;
      if (plVar10 == (longlong *)0x0) goto LAB_1477f15c8;
      goto LAB_1477f1787;
    }
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_1477f15c8;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar10 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_1477f15c8:
  plVar3 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  uVar6 = FUN_143204412();
  FUN_143204491();
  bVar5 = FUN_140348454();
  bVar13 = (char)*(uint *)(param_1 + 0x70) != '\x05';
  uVar11 = 1;
  if (bVar13) {
    uVar11 = *(uint *)(param_1 + 0x70);
  }
  uVar12 = 7;
  if (bVar13) {
    uVar12 = uVar6;
  }
  bVar5 = bVar5 & DAT_14ca84f23;
  FUN_147d27fdc(*(undefined8 *)(param_1 + 0x28),&local_58);
  plVar3 = *(longlong **)(local_58 + 0x510);
  plVar10 = *(longlong **)(local_58 + 0x518);
  if (plVar10 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar3 + 0xc0))();
    FUN_14742862b(uVar8,uVar12,uVar11 & 0xff,bVar5);
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar3 + 0xc0))();
    FUN_14742862b(uVar8,uVar12,uVar11 & 0xff,bVar5);
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar3 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f1890 FUN_1477f1890 body=437 status=ok
// SIG undefined FUN_1477f1890(void)

longlong *
FUN_1477f1890(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 *param_6,undefined1 *param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_14001cc68(0x88,0x10);
  local_68 = *param_7;
  local_70 = *param_6;
  local_78 = *param_5;
  FUN_1477fa5e2(lVar2,param_2,*param_3,*param_4);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a588490;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    local_58 = 0;
    goto LAB_1477f19d5;
  }
  if (((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x10) + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      *(longlong *)(lVar2 + 8) = lVar2;
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_1477f1981:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar2 + 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_1477f19b1;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong *)(lVar2 + 8) = lVar2;
      if (*(longlong **)(lVar2 + 0x10) != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar2 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_1477f1981;
        *(longlong **)(lVar2 + 0x10) = plVar3;
      }
LAB_1477f19b1:
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  local_58 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_1477f19d5:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_50 = plVar3;
  FUN_141332b2e(&local_58);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477f1a46 FUN_1477f1a46 body=261 status=ok
// SIG undefined FUN_1477f1a46(void)

void FUN_1477f1a46(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_2 + 0x18);
  local_38 = 1;
  FUN_140807d8e(plVar1,&local_30,L"{material}",&DAT_149dfb77a);
  if (plVar1 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x18) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x20) = local_28;
    *(undefined4 *)(param_2 + 0x24) = local_24;
  }
  local_38 = 1;
  FUN_140807d8e(plVar1,&local_30,L".{frame}",&DAT_149dfb77a);
  if (plVar1 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x18) = local_30;
    *(undefined4 *)(param_2 + 0x20) = local_28;
    *(undefined4 *)(param_2 + 0x24) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f1b4c FUN_1477f1b4c body=218 status=ok
// SIG undefined FUN_1477f1b4c(void)

void FUN_1477f1b4c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147d27fdc(*(undefined8 *)(param_1 + 0x28),&local_28);
  plVar2 = *(longlong **)(local_28 + 0x510);
  plVar3 = *(longlong **)(local_28 + 0x518);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0xc0))();
    FUN_147428700(uVar4);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = (**(code **)(*plVar2 + 0xc0))();
    FUN_147428700(uVar4);
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
  FUN_1477f1c28(*(undefined8 *)(param_1 + 0xb8),1);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f1c28 FUN_1477f1c28 body=119 status=ok
// SIG undefined FUN_1477f1c28(void)

void FUN_1477f1c28(longlong param_1,byte param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x30) | param_2) == 1) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (param_2 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x80);
    }
    else {
      *(undefined8 *)(param_1 + 0x80) = 0;
      uVar1 = 0;
    }
    FUN_140635eb8(*(undefined8 *)(param_1 + 0x70),uVar1,0xd000000,0);
    FUN_140635eb8(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x84),0xd000000,0);
    FUN_140635eb8(*(undefined8 *)(param_1 + 0x68),0,0xd000000,0);
    return;
  }
  return;
}



// FUNCTION 1477f1ca0 FUN_1477f1ca0 body=117 status=ok
// SIG undefined FUN_1477f1ca0(void)

void FUN_1477f1ca0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x17];
  local_38 = 0;
  (**(code **)(*param_1 + 0x310))(param_1,local_28,param_2,&DAT_149dfb77a);
  FUN_1477f1d16(lVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f1d16 FUN_1477f1d16 body=161 status=ok
// SIG undefined FUN_1477f1d16(void)

void FUN_1477f1d16(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  
  if ((undefined8 *)(param_1 + 0x38) != param_2) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x38) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_140635eb8(*(undefined8 *)(param_1 + 0x68),1,0xd000000,0);
  puVar1 = &DAT_149e25dfc;
  if (*(char *)(param_1 + 0x48) != '\0') {
    puVar1 = &DAT_149e0209e;
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x98))
            (*(longlong **)(param_1 + 0x70),puVar1,0xd000000,0);
  FUN_140635eb8(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x4c),0xd000000,0);
  return;
}



// FUNCTION 1477f1de0 FUN_1477f1de0 body=136 status=ok
// SIG undefined FUN_1477f1de0(void)

void FUN_1477f1de0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
    FUN_14018802a(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477f1e68 FUN_1477f1e68 body=73 status=ok
// SIG undefined FUN_1477f1e68(void)

void FUN_1477f1e68(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      FUN_14018802a(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}



// FUNCTION 1477f1eb1 FUN_1477f1eb1 body=634 status=ok
// SIG undefined FUN_1477f1eb1(void)

void FUN_1477f1eb1(ulonglong *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

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
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_f8 [40];
  char *local_d0;
  undefined4 local_c8;
  char *local_c0;
  undefined4 local_b8;
  char *local_b0;
  undefined4 local_a8;
  char local_a0 [16];
  longlong local_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_90 = param_2;
  if (param_2 == param_3) {
    local_b0 = local_a0;
    local_a0[0] = -1;
    local_a0[1] = -1;
    local_a0[2] = -1;
    local_a0[3] = -1;
    local_a0[4] = -1;
    local_a0[5] = -1;
    local_a0[6] = -1;
    local_a0[7] = -1;
    local_a0[8] = -1;
    local_a0[9] = -1;
    local_a0[10] = -1;
    local_a0[0xb] = -1;
    local_88 = 1;
    local_84 = 0x7000000000;
    local_7c = 0;
    local_70 = 0;
    local_a8 = 1;
    FUN_144760590(param_1,&local_b0,0);
  }
  else {
    local_a0[0] = -1;
    local_a0[1] = -1;
    local_a0[2] = -1;
    local_a0[3] = -1;
    local_a0[4] = -1;
    local_a0[5] = -1;
    local_a0[6] = -1;
    local_a0[7] = -1;
    local_a0[8] = -1;
    local_a0[9] = -1;
    local_a0[10] = -1;
    local_a0[0xb] = -1;
    local_88 = 1;
    local_84 = 0x8000000000;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0xffffffffffffffff;
    local_60 = 0xffffffff;
    local_50 = 1;
    local_4c = 0x200000000000;
    local_44 = 0;
    local_38 = 0;
    local_b8 = 2;
    local_c0 = local_a0;
    local_58 = param_3;
    FUN_144760590(param_1,&local_c0,0);
    lVar16 = 0x68;
    do {
      if (local_a0[lVar16] == '\x01') {
        local_a0[lVar16] = '\0';
      }
      lVar16 = lVar16 + -0x38;
    } while (lVar16 != -8);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar17 + 0xc;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x68);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar17 + 0xc;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_14a289d68;
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    uVar5 = param_4[5];
    uVar6 = param_4[6];
    uVar7 = param_4[7];
    uVar8 = param_4[8];
    uVar9 = param_4[9];
    uVar10 = param_4[10];
    uVar11 = param_4[0xb];
    uVar12 = param_4[0xb];
    uVar13 = param_4[0xc];
    uVar14 = param_4[0xd];
    uVar15 = param_4[0xe];
    *(undefined4 *)(puVar17 + 2) = *param_4;
    *(undefined4 *)((longlong)puVar17 + 0x14) = uVar1;
    *(undefined4 *)(puVar17 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar3;
    *(undefined4 *)(puVar17 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar17 + 0x24) = uVar5;
    *(undefined4 *)(puVar17 + 5) = uVar6;
    *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar7;
    *(undefined4 *)(puVar17 + 6) = uVar8;
    *(undefined4 *)((longlong)puVar17 + 0x34) = uVar9;
    *(undefined4 *)(puVar17 + 7) = uVar10;
    *(undefined4 *)((longlong)puVar17 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar17 + 0x3c) = uVar12;
    *(undefined4 *)(puVar17 + 8) = uVar13;
    *(undefined4 *)((longlong)puVar17 + 0x44) = uVar14;
    *(undefined4 *)(puVar17 + 9) = uVar15;
    puVar17[10] = param_2;
    puVar17[0xb] = param_3;
    local_a0[0] = -1;
    local_a0[1] = -1;
    local_a0[2] = -1;
    local_a0[3] = -1;
    local_a0[4] = -1;
    local_a0[5] = -1;
    local_a0[6] = -1;
    local_a0[7] = -1;
    local_a0[8] = -1;
    local_a0[9] = -1;
    local_a0[10] = -1;
    local_a0[0xb] = -1;
    local_88 = 1;
    local_84 = 0x7000000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0xffffffffffffffff;
    local_60 = 0xffffffff;
    local_50 = 1;
    local_4c = 0x7000002000;
    local_44 = 0;
    local_38 = 0;
    local_c8 = 2;
    local_d0 = local_a0;
    local_90 = param_2;
    local_58 = param_3;
    FUN_144760590(param_1,&local_d0,0);
    lVar16 = 0x68;
    do {
      if (local_a0[lVar16] == '\x01') {
        local_a0[lVar16] = '\0';
      }
      lVar16 = lVar16 + -0x38;
    } while (lVar16 != -8);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


