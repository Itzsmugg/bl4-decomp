// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f1bf9e FUN_148f1bf9e body=130 status=ok
// SIG undefined FUN_148f1bf9e(void)

undefined1 * FUN_148f1bf9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumEnemies";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148f1c020;
}



// FUNCTION 148f1c024 FUN_148f1c024 body=306 status=ok
// SIG undefined FUN_148f1c024(void)

undefined4 * FUN_148f1c024(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148f1c158(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_148f1c23e(param_1,uVar9,local_40,&local_4c);
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
      FUN_148f1c330(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1c158 FUN_148f1c158 body=230 status=ok
// SIG undefined FUN_148f1c158(void)

int * FUN_148f1c158(longlong *param_1,int *param_2)

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



// FUNCTION 148f1c23e FUN_148f1c23e body=128 status=ok
// SIG undefined FUN_148f1c23e(void)

undefined8 FUN_148f1c23e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148f1c2be((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148f1c2be FUN_148f1c2be body=114 status=ok
// SIG undefined FUN_148f1c2be(void)

void FUN_148f1c2be(longlong *param_1,int param_2)

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



// FUNCTION 148f1c330 FUN_148f1c330 body=447 status=ok
// SIG undefined FUN_148f1c330(void)

void FUN_148f1c330(longlong *param_1)

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



// FUNCTION 148f1c4f0 FUN_148f1c4f0 body=102 status=ok
// SIG undefined FUN_148f1c4f0(void)

void FUN_148f1c4f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_148f1c556(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148f1c556 FUN_148f1c556 body=87 status=ok
// SIG undefined FUN_148f1c556(void)

void FUN_148f1c556(longlong *param_1,int param_2)

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
  FUN_148f1c2be();
  return;
}



// FUNCTION 148f1c5ae FUN_148f1c5ae body=106 status=ok
// SIG undefined FUN_148f1c5ae(void)

void FUN_148f1c5ae(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == param_2) {
          FUN_148f1c618(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x30 + *param_1 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148f1c618 FUN_148f1c618 body=95 status=ok
// SIG undefined FUN_148f1c618(void)

void FUN_148f1c618(longlong *param_1,int param_2)

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
  FUN_148f1c678();
  return;
}



// FUNCTION 148f1c678 FUN_148f1c678 body=194 status=ok
// SIG undefined FUN_148f1c678(void)

void FUN_148f1c678(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  lVar1 = *param_1 + (longlong)param_2 * 0x30;
  lVar6 = lVar1 + 0x10;
  *(undefined4 *)(lVar1 + 8) = 0;
  FUN_14011fb0c(lVar6);
  FUN_140038ae8(lVar6);
  lVar1 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 4) = uVar4;
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
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148f1c73a FUN_148f1c73a body=68 status=ok
// SIG undefined FUN_148f1c73a(void)

void FUN_148f1c73a(longlong param_1,uint param_2)

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
  FUN_148f1c77e(param_1);
  return;
}



// FUNCTION 148f1c77e FUN_148f1c77e body=478 status=ok
// SIG undefined FUN_148f1c77e(void)

void FUN_148f1c77e(longlong *param_1)

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



// FUNCTION 148f1c95e FUN_148f1c95e body=95 status=ok
// SIG undefined FUN_148f1c95e(void)

void FUN_148f1c95e(longlong *param_1,int param_2)

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
  FUN_148f1c9be();
  return;
}



// FUNCTION 148f1c9be FUN_148f1c9be body=56 status=ok
// SIG undefined FUN_148f1c9be(void)

void FUN_148f1c9be(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_148f1c9f6(param_1,param_2);
  return;
}



// FUNCTION 148f1c9f6 FUN_148f1c9f6 body=122 status=ok
// SIG undefined FUN_148f1c9f6(void)

void FUN_148f1c9f6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 148f1ca70 FUN_148f1ca70 body=203 status=ok
// SIG undefined FUN_148f1ca70(void)

longlong FUN_148f1ca70(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cbe7a40 != DAT_14cbe7a6c) {
    puVar3 = &DAT_14cbe7a70;
    if (DAT_14cbe7a78 != (undefined *)0x0) {
      puVar3 = DAT_14cbe7a78;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cbe7a80 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14cbe7a38 + (longlong)iVar1 * 0x30;
        if (*(longlong *)(DAT_14cbe7a38 + (longlong)iVar1 * 0x30) == *param_2) {
          if (lVar2 != 0) goto LAB_148f1cb1f;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x28);
      } while (iVar1 != -1);
    }
  }
  local_20 = param_2;
  FUN_148f1cb3c(&local_14,param_1);
  lVar2 = (longlong)local_14 * 0x30 + DAT_14cbe7a38;
LAB_148f1cb1f:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 148f1cb3c FUN_148f1cb3c body=303 status=ok
// SIG undefined FUN_148f1cb3c(void)

undefined4 * FUN_148f1cb3c(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f1cc6c(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  cVar2 = FUN_148f1cd82(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cbe7a40 - DAT_14cbe7a6c;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cbe7a80)) {
      param_2 = DAT_14cbe7a80 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x2c) = param_2;
      puVar4 = DAT_14cbe7a78;
      if (DAT_14cbe7a78 == (undefined *)0x0) {
        puVar4 = &DAT_14cbe7a70;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cbe7a80 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cbe7a78;
      if (DAT_14cbe7a78 == (undefined *)0x0) {
        puVar4 = &DAT_14cbe7a70;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cbe7a80 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cbe7a80 = iVar6;
      FUN_148f1c77e(&DAT_14cbe7a38);
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1cc6c FUN_148f1cc6c body=278 status=ok
// SIG undefined FUN_148f1cc6c(void)

int * FUN_148f1cc6c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbe7a68;
  iVar4 = DAT_14cbe7a40;
  if (DAT_14cbe7a6c == 0) {
    iVar2 = DAT_14cbe7a40 + 1;
    bVar7 = DAT_14cbe7a44 == DAT_14cbe7a40;
    DAT_14cbe7a40 = iVar2;
    if (bVar7) {
      FUN_140044672(&DAT_14cbe7a38,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cbe7a48,1);
    puVar3 = DAT_14cbe7a58;
    if (DAT_14cbe7a58 == (undefined *)0x0) {
      puVar3 = &DAT_14cbe7a48;
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
    lVar6 = (longlong)DAT_14cbe7a68;
    DAT_14cbe7a68 = *(int *)(DAT_14cbe7a38 + 4 + lVar6 * 0x30);
    DAT_14cbe7a6c = DAT_14cbe7a6c + -1;
    iVar4 = iVar2;
    if (DAT_14cbe7a6c != 0) {
      *(undefined4 *)(DAT_14cbe7a38 + (longlong)DAT_14cbe7a68 * 0x30) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cbe7a48;
  if (DAT_14cbe7a58 != (undefined *)0x0) {
    puVar3 = DAT_14cbe7a58;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x30 + DAT_14cbe7a38;
  return param_1;
}



// FUNCTION 148f1cd82 FUN_148f1cd82 body=192 status=ok
// SIG undefined FUN_148f1cd82(void)

undefined8 FUN_148f1cd82(uint param_1,longlong *param_2,int *param_3)

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
  undefined *puVar10;
  int iVar11;
  
  if ((DAT_14cbe7a40 - DAT_14cbe7a6c != 1) && (DAT_14cbe7a40 != DAT_14cbe7a6c)) {
    puVar10 = &DAT_14cbe7a70;
    if (DAT_14cbe7a78 != (undefined *)0x0) {
      puVar10 = DAT_14cbe7a78;
    }
    iVar11 = *(int *)(puVar10 + (ulonglong)(DAT_14cbe7a80 - 1U & param_1) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14cbe7a38 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(DAT_14cbe7a38 + (longlong)iVar11 * 0x30) == *param_2) {
          if (*(longlong *)(puVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar7 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          lVar8 = param_2[2];
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar9 = param_2[3];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_2[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_148f1c9f6(&DAT_14cbe7a38,*param_3);
          *param_3 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 148f1ce42 FUN_148f1ce42 body=95 status=ok
// SIG undefined FUN_148f1ce42(void)

void FUN_148f1ce42(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_148f1a090();
  return;
}



// FUNCTION 148f1cea2 FUN_148f1cea2 body=151 status=ok
// SIG undefined FUN_148f1cea2(void)

void FUN_148f1cea2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_148f1cf3a();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cbe82a0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x50;
  return;
}



// FUNCTION 148f1cf3a FUN_148f1cf3a body=258 status=ok
// SIG undefined FUN_148f1cf3a(void)

void FUN_148f1cf3a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe8320) {
    FUN_144b3d300(&DAT_14cbe8320);
    if (DAT_14cbe8320 == -1) {
      FUN_148f1d03e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x34;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbe82a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144360495);
      _Init_thread_footer(&DAT_14cbe8320);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1d03e FUN_148f1d03e body=226 status=ok
// SIG undefined FUN_148f1d03e(void)

longlong * FUN_148f1d03e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_148f1d122;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1d122 FUN_148f1d122 body=136 status=ok
// SIG undefined FUN_148f1d122(void)

code * FUN_148f1d122(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WeaponSightIntParamsTwo";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148f1d1aa;
}



// FUNCTION 148f1d1aa FUN_148f1d1aa body=136 status=ok
// SIG undefined FUN_148f1d1aa(void)

code * FUN_148f1d1aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WeaponSightIntParamsOne";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148f1d232;
}



// FUNCTION 148f1d232 FUN_148f1d232 body=136 status=ok
// SIG undefined FUN_148f1d232(void)

code * FUN_148f1d232(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WeaponSightFloatParamsThree";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148f1d2ba;
}



// FUNCTION 148f1d2ba FUN_148f1d2ba body=136 status=ok
// SIG undefined FUN_148f1d2ba(void)

code * FUN_148f1d2ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WeaponSightFloatParamsTwo";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148f1d342;
}



// FUNCTION 148f1d342 FUN_148f1d342 body=130 status=ok
// SIG undefined FUN_148f1d342(void)

undefined1 * FUN_148f1d342(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WeaponSightFloatParamsOne";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x35;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148f1d3c4;
}



// FUNCTION 148f1d3c8 FUN_148f1d3c8 body=29 status=ok
// SIG undefined FUN_148f1d3c8(void)

undefined8 FUN_148f1d3c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1d400 FUN_148f1d400 body=29 status=ok
// SIG undefined FUN_148f1d400(void)

bool FUN_148f1d400(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1d41e FUN_148f1d41e body=26 status=ok
// SIG undefined FUN_148f1d41e(void)

bool FUN_148f1d41e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1d438 FUN_148f1d438 body=24 status=ok
// SIG undefined FUN_148f1d438(void)

bool FUN_148f1d438(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f1d450 FUN_148f1d450 body=101 status=ok
// SIG undefined FUN_148f1d450(void)

void FUN_148f1d450(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1d4b6 FUN_148f1d4b6 body=101 status=ok
// SIG undefined FUN_148f1d4b6(void)

void FUN_148f1d4b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1d51c FUN_148f1d51c body=134 status=ok
// SIG undefined FUN_148f1d51c(void)

void FUN_148f1d51c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1ae0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f1d593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1d5a2 FUN_148f1d5a2 body=39 status=ok
// SIG undefined FUN_148f1d5a2(void)

void FUN_148f1d5a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1d5c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f1d5ca FUN_148f1d5ca body=146 status=ok
// SIG undefined FUN_148f1d5ca(void)

bool FUN_148f1d5ca(longlong param_1)

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



// FUNCTION 148f1d65e FUN_148f1d65e body=31 status=ok
// SIG undefined FUN_148f1d65e(void)

undefined8 FUN_148f1d65e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1d698 FUN_148f1d698 body=29 status=ok
// SIG undefined FUN_148f1d698(void)

bool FUN_148f1d698(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1d6b6 FUN_148f1d6b6 body=26 status=ok
// SIG undefined FUN_148f1d6b6(void)

bool FUN_148f1d6b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1d6d0 FUN_148f1d6d0 body=101 status=ok
// SIG undefined FUN_148f1d6d0(void)

void FUN_148f1d6d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1d736 FUN_148f1d736 body=101 status=ok
// SIG undefined FUN_148f1d736(void)

void FUN_148f1d736(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1d79c FUN_148f1d79c body=134 status=ok
// SIG undefined FUN_148f1d79c(void)

void FUN_148f1d79c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1b50;
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
                    /* WARNING: Could not recover jumptable at 0x000148f1d813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1d822 FUN_148f1d822 body=42 status=ok
// SIG undefined FUN_148f1d822(void)

void FUN_148f1d822(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1d849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148f1d84c FUN_148f1d84c body=138 status=ok
// SIG undefined FUN_148f1d84c(void)

longlong FUN_148f1d84c(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cbe8050 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cbe8050,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1d8d8 FUN_148f1d8d8 body=29 status=ok
// SIG undefined FUN_148f1d8d8(void)

undefined8 FUN_148f1d8d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1d910 FUN_148f1d910 body=29 status=ok
// SIG undefined FUN_148f1d910(void)

bool FUN_148f1d910(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1d92e FUN_148f1d92e body=26 status=ok
// SIG undefined FUN_148f1d92e(void)

bool FUN_148f1d92e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f1d948 FUN_148f1d948 body=24 status=ok
// SIG undefined FUN_148f1d948(void)

bool FUN_148f1d948(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f1d960 FUN_148f1d960 body=101 status=ok
// SIG undefined FUN_148f1d960(void)

void FUN_148f1d960(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1d9c6 FUN_148f1d9c6 body=101 status=ok
// SIG undefined FUN_148f1d9c6(void)

void FUN_148f1d9c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1da2c FUN_148f1da2c body=134 status=ok
// SIG undefined FUN_148f1da2c(void)

void FUN_148f1da2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1be0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f1daa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1dab2 FUN_148f1dab2 body=44 status=ok
// SIG undefined FUN_148f1dab2(void)

void FUN_148f1dab2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1dadb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148f1dade FUN_148f1dade body=156 status=ok
// SIG undefined FUN_148f1dade(void)

bool FUN_148f1dade(longlong param_1,undefined8 param_2)

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



// FUNCTION 148f1db7c FUN_148f1db7c body=9 status=ok
// SIG undefined FUN_148f1db7c(void)

void FUN_148f1db7c(longlong param_1)

{
  FUN_14893d052(param_1 + 0x10);
  return;
}



// FUNCTION 148f1db86 FUN_148f1db86 body=29 status=ok
// SIG undefined FUN_148f1db86(void)

undefined8 FUN_148f1db86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1dba4 FUN_148f1dba4 body=273 status=ok
// SIG undefined FUN_148f1dba4(void)

void FUN_148f1dba4(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x30;
    piVar3 = (int *)(*param_1 + 0x1c);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148f1dc43:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148f1dc43;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 0xc;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1dcb6 FUN_148f1dcb6 body=269 status=ok
// SIG undefined FUN_148f1dcb6(void)

void FUN_148f1dcb6(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] << 5;
    piVar3 = (int *)(*param_1 + 0x10);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148f1dd51:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148f1dd51;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 8;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1ddc4 FUN_148f1ddc4 body=48 status=ok
// SIG undefined FUN_148f1ddc4(void)

void FUN_148f1ddc4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 148f1ddf4 FUN_148f1ddf4 body=269 status=ok
// SIG undefined FUN_148f1ddf4(void)

void FUN_148f1ddf4(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x78;
    piVar3 = (int *)(*param_1 + 100);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148f1de8f:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148f1de8f;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 0x1e;
      lVar4 = lVar4 + -0x78;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1df02 FUN_148f1df02 body=273 status=ok
// SIG undefined FUN_148f1df02(void)

void FUN_148f1df02(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x30;
    piVar3 = (int *)(*param_1 + 0x1c);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148f1dfa1:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148f1dfa1;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 0xc;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1e014 FUN_148f1e014 body=31 status=ok
// SIG undefined FUN_148f1e014(void)

undefined8 FUN_148f1e014(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1e04e FUN_148f1e04e body=29 status=ok
// SIG undefined FUN_148f1e04e(void)

bool FUN_148f1e04e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1e06c FUN_148f1e06c body=93 status=ok
// SIG undefined FUN_148f1e06c(void)

void FUN_148f1e06c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1e0ca FUN_148f1e0ca body=93 status=ok
// SIG undefined FUN_148f1e0ca(void)

void FUN_148f1e0ca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1c70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f1e128 FUN_148f1e128 body=126 status=ok
// SIG undefined FUN_148f1e128(void)

void FUN_148f1e128(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1c70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1e197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1e1a6 FUN_148f1e1a6 body=35 status=ok
// SIG undefined FUN_148f1e1a6(void)

void FUN_148f1e1a6(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1e1c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148f1e1ca FUN_148f1e1ca body=83 status=ok
// SIG undefined FUN_148f1e1ca(void)

undefined8 FUN_148f1e1ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148f1e224 FUN_148f1e224 body=89 status=ok
// SIG undefined FUN_148f1e224(void)

bool FUN_148f1e224(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148f1e26f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148f1e26f:
  return lVar6 == param_2;
}



// FUNCTION 148f1e27e FUN_148f1e27e body=118 status=ok
// SIG undefined FUN_148f1e27e(void)

void FUN_148f1e27e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1d50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148f1e2f4 FUN_148f1e2f4 body=156 status=ok
// SIG undefined FUN_148f1e2f4(void)

void FUN_148f1e2f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1d50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f1e380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1e390 FUN_148f1e390 body=100 status=ok
// SIG undefined FUN_148f1e390(void)

ulonglong FUN_148f1e390(longlong param_1)

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
LAB_148f1e3e9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148f1e3e9;
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



// FUNCTION 148f1e3f4 FUN_148f1e3f4 body=29 status=ok
// SIG undefined FUN_148f1e3f4(void)

undefined8 FUN_148f1e3f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1e412 FUN_148f1e412 body=292 status=ok
// SIG undefined FUN_148f1e412(void)

void FUN_148f1e412(void)

{
  uint uVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  
  lVar2 = 0;
  iVar4 = 0;
  do {
    uVar1 = iVar4 + 0x2000;
    if (-1 < (int)(iVar4 + 1U)) {
      uVar1 = iVar4 + 1U;
    }
    iVar4 = (iVar4 - (uVar1 & 0xffffe000)) + 1;
    fVar5 = cosf((float)iVar4 * 0.0007669904);
    *(float *)((longlong)&DAT_14cbe8340 + lVar2) = (1.0 - fVar5) * 0.5;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x8000);
  pfVar3 = (float *)&DAT_14cbf0340;
  lVar2 = 0;
  do {
    iVar4 = (int)lVar2;
    lVar2 = lVar2 + 1;
    fVar5 = tanhf((float)iVar4 * 0.001953125 + -2.0);
    *pfVar3 = fVar5;
    pfVar3 = pfVar3 + 1;
  } while (lVar2 != 0x800);
  pfVar3 = (float *)&DAT_14cbf0340;
  lVar2 = 0;
  do {
    iVar4 = (int)lVar2;
    lVar2 = lVar2 + 1;
    fVar5 = tanhf((float)iVar4 * 0.001953125 + -2.0);
    *pfVar3 = fVar5;
    pfVar3 = pfVar3 + 1;
  } while (lVar2 != 0x800);
  return;
}



// FUNCTION 148f1e552 FUN_148f1e552 body=34 status=ok
// SIG undefined FUN_148f1e552(void)

void FUN_148f1e552(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = &PTR_FUN_14b9e1f70;
  return;
}



// FUNCTION 148f1e582 FUN_148f1e582 body=29 status=ok
// SIG undefined FUN_148f1e582(void)

undefined8 FUN_148f1e582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1e5ac FUN_148f1e5ac body=39 status=ok
// SIG undefined FUN_148f1e5ac(void)

void FUN_148f1e5ac(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp2738471375");
                    /* WARNING: Could not recover jumptable at 0x000148f1e5cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f1e5e2 FUN_148f1e5e2 body=38 status=ok
// SIG undefined FUN_148f1e5e2(void)

void FUN_148f1e5e2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f1e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 148f1e608 FUN_148f1e608 body=394 status=ok
// SIG undefined FUN_148f1e608(void)

void FUN_148f1e608(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(int *)(param_1 + 8) = param_2;
  fVar4 = (float)param_2;
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  if (192000.0 <= fVar4) {
    fVar4 = 192000.0;
  }
  *(float *)(param_1 + 0xc) = 1.0 / fVar4;
  fVar1 = tanf(314.15927 / fVar4);
  fVar2 = 1.0 - 1.0 / (fVar1 * fVar1);
  *(float *)(param_1 + 0x10) = fVar2 + fVar2;
  *(float *)(param_1 + 0x14) = (1.0 / fVar1 + -1.4142135) / fVar1 + 1.0;
  fVar3 = (1.0 / fVar1 + 1.4142135) / fVar1 + 1.0;
  *(float *)(param_1 + 0x18) = 1.0 / fVar3;
  fVar4 = tanf(15707.963 / fVar4);
  fVar2 = 1.0 - 1.0 / (fVar4 * fVar4);
  *(float *)(param_1 + 0x1c) = fVar2 + fVar2;
  *(float *)(param_1 + 0x20) = (1.0 / fVar4 + -1.4142135) / fVar4 + 1.0;
  *(float *)(param_1 + 0x24) = 1.0 / ((1.0 / fVar4 + 1.4142135) / fVar4 + 1.0);
  fVar3 = fVar3 * fVar1 * fVar1;
  *(float *)(param_1 + 0x48) = fVar3;
  *(float *)(param_1 + 0x4c) = 1.0 / fVar3;
  *(float *)(param_1 + 0x50) = 0.5 / fVar3;
  return;
}



// FUNCTION 148f1e7a8 FUN_148f1e7a8 body=34 status=ok
// SIG undefined FUN_148f1e7a8(void)

void FUN_148f1e7a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = &PTR_FUN_14b9e1f70;
  return;
}



// FUNCTION 148f1e7e4 FUN_148f1e7e4 body=903 status=ok
// SIG undefined FUN_148f1e7e4(void)

void FUN_148f1e7e4(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0 < (int)param_2) {
    lVar2 = *param_3;
    lVar3 = param_3[1];
    lVar4 = *param_4;
    lVar5 = param_4[1];
    fVar8 = *(float *)(param_1 + 0x2c);
    fVar12 = *(float *)(param_1 + 0x30);
    fVar10 = *(float *)(param_1 + 0x3c);
    fVar9 = *(float *)(param_1 + 0x38);
    fVar7 = *(float *)(param_1 + 0x44);
    uVar6 = 0;
    do {
      fVar1 = *(float *)(lVar3 + uVar6 * 4);
      fVar11 = *(float *)(lVar2 + uVar6 * 4) * 3.9810717 -
               (*(float *)(param_1 + 0x20) * fVar12 + *(float *)(param_1 + 0x1c) * fVar8) *
               *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x28) = fVar11;
      fVar8 = (fVar8 + fVar8 + fVar11 + fVar12) * *(float *)(param_1 + 0x24) -
              (*(float *)(param_1 + 0x14) * fVar10 + *(float *)(param_1 + 0x10) * fVar9) *
              *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x34) = fVar8;
      fVar9 = fVar9 + fVar9;
      fVar8 = fVar8 + fVar10;
      *(float *)(param_1 + 0x40) = fVar8 - fVar9;
      fVar12 = fVar8 - (fVar7 + fVar9);
      if (ABS(*(float *)(param_1 + 0x4c) * fVar12) <= *(float *)(param_1 + 0xc)) {
        fVar10 = tanhf(((fVar7 + fVar8) - fVar9) * *(float *)(param_1 + 0x50));
      }
      else {
        fVar10 = *(float *)(param_1 + 0x48);
        fVar8 = coshf(*(float *)(param_1 + 0x4c) * (fVar8 - fVar9));
        if (3.4028235e+38 <= fVar8) {
          fVar8 = 3.4028235e+38;
        }
        fVar8 = logf(fVar8);
        fVar9 = coshf(*(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x44));
        if (3.4028235e+38 <= fVar9) {
          fVar9 = 3.4028235e+38;
        }
        fVar9 = logf(fVar9);
        fVar10 = ((fVar8 - fVar9) / fVar12) * fVar10;
      }
      *(float *)(lVar4 + uVar6 * 4) = fVar10;
      fVar8 = *(float *)(param_1 + 0x58);
      fVar10 = fVar1 * 3.9810717 -
               (*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x5c) +
               *(float *)(param_1 + 0x1c) * fVar8) * *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x54) = fVar10;
      fVar12 = *(float *)(param_1 + 100);
      fVar8 = (fVar8 + fVar8 + fVar10 + *(float *)(param_1 + 0x5c)) * *(float *)(param_1 + 0x24) -
              (*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x68) +
              *(float *)(param_1 + 0x10) * fVar12) * *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x60) = fVar8;
      fVar8 = fVar8 + *(float *)(param_1 + 0x68);
      fVar12 = fVar12 + fVar12;
      *(float *)(param_1 + 0x6c) = fVar8 - fVar12;
      fVar10 = (fVar12 + *(float *)(param_1 + 0x70)) - fVar8;
      if (ABS(-*(float *)(param_1 + 0x4c) * fVar10) <= *(float *)(param_1 + 0xc)) {
        fVar8 = tanhf(((*(float *)(param_1 + 0x70) + fVar8) - fVar12) * *(float *)(param_1 + 0x50));
      }
      else {
        fVar9 = *(float *)(param_1 + 0x48);
        fVar8 = coshf(*(float *)(param_1 + 0x4c) * (fVar8 - fVar12));
        if (3.4028235e+38 <= fVar8) {
          fVar8 = 3.4028235e+38;
        }
        fVar8 = logf(fVar8);
        fVar12 = coshf(*(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x70));
        if (3.4028235e+38 <= fVar12) {
          fVar12 = 3.4028235e+38;
        }
        fVar12 = logf(fVar12);
        fVar8 = -fVar9 * ((fVar8 - fVar12) / fVar10);
      }
      *(float *)(lVar5 + uVar6 * 4) = fVar8;
      fVar8 = *(float *)(param_1 + 0x28);
      fVar12 = *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x30) = fVar12;
      *(float *)(param_1 + 0x2c) = fVar8;
      fVar10 = *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x3c) = fVar10;
      fVar9 = *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x38) = fVar9;
      fVar7 = *(float *)(param_1 + 0x40);
      *(float *)(param_1 + 0x44) = fVar7;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x54);
      *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x6c);
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
  return;
}



// FUNCTION 148f1eb88 FUN_148f1eb88 body=34 status=ok
// SIG undefined FUN_148f1eb88(void)

void FUN_148f1eb88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = &PTR_FUN_14b9e2020;
  return;
}



// FUNCTION 148f1ebb8 FUN_148f1ebb8 body=29 status=ok
// SIG undefined FUN_148f1ebb8(void)

undefined8 FUN_148f1ebb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1ebe2 FUN_148f1ebe2 body=39 status=ok
// SIG undefined FUN_148f1ebe2(void)

void FUN_148f1ebe2(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp60603527");
                    /* WARNING: Could not recover jumptable at 0x000148f1ec05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f1ec18 FUN_148f1ec18 body=38 status=ok
// SIG undefined FUN_148f1ec18(void)

void FUN_148f1ec18(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f1ec3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 148f1ec3e FUN_148f1ec3e body=352 status=ok
// SIG undefined FUN_148f1ec3e(void)

void FUN_148f1ec3e(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(int *)(param_1 + 8) = param_2;
  fVar3 = (float)param_2;
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  if (192000.0 <= fVar3) {
    fVar3 = 192000.0;
  }
  *(float *)(param_1 + 0xc) = 1.0 / fVar3;
  fVar1 = tanf(15707.963 / fVar3);
  fVar2 = 1.0 - 1.0 / (fVar1 * fVar1);
  *(float *)(param_1 + 0x10) = fVar2 + fVar2;
  *(float *)(param_1 + 0x14) = (1.0 / fVar1 + -1.4142135) / fVar1 + 1.0;
  fVar1 = (1.0 / fVar1 + 1.4142135) / fVar1 + 1.0;
  *(float *)(param_1 + 0x18) = fVar1;
  *(float *)(param_1 + 0x1c) = 1.0 / fVar1;
  fVar3 = tanf(314.15927 / fVar3);
  fVar1 = 1.0 - 1.0 / (fVar3 * fVar3);
  *(float *)(param_1 + 0x20) = fVar1 + fVar1;
  *(float *)(param_1 + 0x24) = (1.0 / fVar3 + -1.4142135) / fVar3 + 1.0;
  fVar1 = (1.0 / fVar3 + 1.4142135) / fVar3 + 1.0;
  *(float *)(param_1 + 0x28) = 1.0 / fVar1;
  *(float *)(param_1 + 0x38) = 1.0 / (fVar1 * fVar3 * fVar3);
  *(float *)(param_1 + 0x50) = 0.5 / *(float *)(param_1 + 0x18);
  return;
}



// FUNCTION 148f1edc0 FUN_148f1edc0 body=34 status=ok
// SIG undefined FUN_148f1edc0(void)

void FUN_148f1edc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = &PTR_FUN_14b9e2020;
  return;
}



// FUNCTION 148f1ede4 FUN_148f1ede4 body=896 status=ok
// SIG undefined FUN_148f1ede4(void)

void FUN_148f1ede4(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (0 < (int)param_2) {
    lVar3 = *param_3;
    lVar4 = param_3[1];
    lVar5 = *param_4;
    lVar6 = param_4[1];
    fVar13 = *(float *)(param_1 + 0x30);
    fVar9 = *(float *)(param_1 + 0x34);
    fVar11 = *(float *)(param_1 + 0x44);
    fVar10 = *(float *)(param_1 + 0x40);
    fVar8 = *(float *)(param_1 + 0x4c);
    uVar7 = 0;
    do {
      fVar1 = *(float *)(lVar4 + uVar7 * 4);
      fVar12 = *(float *)(lVar3 + uVar7 * 4) * 6.3095737 -
               (*(float *)(param_1 + 0x24) * fVar9 + *(float *)(param_1 + 0x20) * fVar13) *
               *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x2c) = fVar12;
      fVar2 = *(float *)(param_1 + 0x1c);
      fVar13 = ((fVar12 - (fVar13 + fVar13)) + fVar9) * *(float *)(param_1 + 0x38) -
               (*(float *)(param_1 + 0x14) * fVar11 + *(float *)(param_1 + 0x10) * fVar10) * fVar2;
      *(float *)(param_1 + 0x3c) = fVar13;
      fVar11 = fVar10 + fVar10 + fVar13 + fVar11;
      *(float *)(param_1 + 0x48) = fVar11;
      if (ABS(-fVar2 * (fVar8 - fVar11)) <= *(float *)(param_1 + 0xc)) {
        fVar13 = tanhf((fVar8 + fVar11) * *(float *)(param_1 + 0x50));
      }
      else {
        fVar13 = *(float *)(param_1 + 0x18);
        fVar9 = coshf(fVar2 * fVar11);
        if (3.4028235e+38 <= fVar9) {
          fVar9 = 3.4028235e+38;
        }
        fVar9 = logf(fVar9);
        fVar10 = coshf(*(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x4c));
        if (3.4028235e+38 <= fVar10) {
          fVar10 = 3.4028235e+38;
        }
        fVar10 = logf(fVar10);
        fVar13 = -fVar13 * ((fVar9 - fVar10) / (fVar8 - fVar11));
      }
      *(float *)(lVar5 + uVar7 * 4) = fVar13 * 0.5011872;
      fVar13 = *(float *)(param_1 + 0x58);
      fVar10 = fVar1 * 6.3095737 -
               (*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x5c) +
               *(float *)(param_1 + 0x20) * fVar13) * *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x54) = fVar10;
      fVar9 = *(float *)(param_1 + 0x1c);
      fVar11 = *(float *)(param_1 + 100);
      fVar13 = ((fVar10 - (fVar13 + fVar13)) + *(float *)(param_1 + 0x5c)) *
               *(float *)(param_1 + 0x38) -
               (*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x68) +
               *(float *)(param_1 + 0x10) * fVar11) * fVar9;
      *(float *)(param_1 + 0x60) = fVar13;
      fVar13 = fVar11 + fVar11 + fVar13 + *(float *)(param_1 + 0x68);
      *(float *)(param_1 + 0x6c) = fVar13;
      fVar11 = fVar13 - *(float *)(param_1 + 0x70);
      if (ABS(fVar9 * fVar11) <= *(float *)(param_1 + 0xc)) {
        fVar10 = tanhf((*(float *)(param_1 + 0x70) + fVar13) * *(float *)(param_1 + 0x50));
      }
      else {
        fVar10 = *(float *)(param_1 + 0x18);
        fVar13 = coshf(fVar9 * fVar13);
        if (3.4028235e+38 <= fVar13) {
          fVar13 = 3.4028235e+38;
        }
        fVar13 = logf(fVar13);
        fVar9 = coshf(*(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x70));
        if (3.4028235e+38 <= fVar9) {
          fVar9 = 3.4028235e+38;
        }
        fVar9 = logf(fVar9);
        fVar10 = ((fVar13 - fVar9) / fVar11) * fVar10;
      }
      *(float *)(lVar6 + uVar7 * 4) = fVar10 * 0.5011872;
      fVar13 = *(float *)(param_1 + 0x2c);
      fVar9 = *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x34) = fVar9;
      *(float *)(param_1 + 0x30) = fVar13;
      fVar11 = *(float *)(param_1 + 0x40);
      *(float *)(param_1 + 0x44) = fVar11;
      fVar10 = *(float *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x40) = fVar10;
      fVar8 = *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x4c) = fVar8;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x54);
      *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x6c);
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
  }
  return;
}



// FUNCTION 148f1f172 FUN_148f1f172 body=34 status=ok
// SIG undefined FUN_148f1f172(void)

void FUN_148f1f172(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28078,0x10);
  *puVar1 = &PTR_FUN_14b9e20d0;
  return;
}



// FUNCTION 148f1f1ac FUN_148f1f1ac body=29 status=ok
// SIG undefined FUN_148f1f1ac(void)

undefined8 FUN_148f1f1ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1f1d6 FUN_148f1f1d6 body=94 status=ok
// SIG undefined FUN_148f1f1d6(void)

void FUN_148f1f1d6(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp2286063217");
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc0",param_1 + 0x10,0,0,0x3f800000,0x3a83126f);
                    /* WARNING: Could not recover jumptable at 0x000148f1f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f1f242 FUN_148f1f242 body=38 status=ok
// SIG undefined FUN_148f1f242(void)

void FUN_148f1f242(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f1f264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 148f1f268 FUN_148f1f268 body=218 status=ok
// SIG undefined FUN_148f1f268(void)

void FUN_148f1f268(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_2;
  *(int *)(param_1 + 8) = param_2;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  if (192000.0 <= fVar2) {
    fVar2 = 192000.0;
  }
  fVar1 = expf(-2.0 / fVar2);
  *(float *)(param_1 + 0xc) = fVar1;
  *(float *)(param_1 + 0x14) = 1.0 - fVar1;
  *(float *)(param_1 + 0x20) = 3.1415927 / fVar2;
  fVar2 = tanf(12566.371 / fVar2);
  fVar1 = 1.0 - 1.0 / (fVar2 * fVar2);
  *(float *)(param_1 + 0x30) = fVar1 + fVar1;
  *(float *)(param_1 + 0x34) = (1.0 / fVar2 + -1.4142135) / fVar2 + 1.0;
  *(float *)(param_1 + 0x38) = 1.0 / ((1.0 / fVar2 + 1.4142135) / fVar2 + 1.0);
  return;
}



// FUNCTION 148f1f36c FUN_148f1f36c body=34 status=ok
// SIG undefined FUN_148f1f36c(void)

void FUN_148f1f36c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28078,0x10);
  *puVar1 = &PTR_FUN_14b9e20d0;
  return;
}



// FUNCTION 148f1f390 FUN_148f1f390 body=1109 status=ok
// SIG undefined FUN_148f1f390(void)

void FUN_148f1f390(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (0 < (int)param_2) {
    lVar10 = *param_3;
    lVar11 = param_3[1];
    lVar12 = *param_4;
    lVar13 = param_4[1];
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x10);
    fVar15 = *(float *)(param_1 + 0x1c);
    uVar14 = 0;
    do {
      fVar17 = *(float *)(lVar10 + uVar14 * 4);
      fVar23 = *(float *)(lVar11 + uVar14 * 4);
      fVar15 = fVar15 * *(float *)(param_1 + 0xc) + fVar1 * fVar2;
      *(float *)(param_1 + 0x18) = fVar15;
      if (fVar15 < 0.0) {
        fVar15 = sqrtf(fVar15);
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      fVar16 = tanf((fVar15 * -10000.0 + 18000.0) * *(float *)(param_1 + 0x20));
      fVar22 = (1.0 / fVar16 + 1.4142135) / fVar16 + 1.0;
      fVar18 = 1.0 - 1.0 / (fVar16 * fVar16);
      fVar21 = (1.0 / fVar16 + -1.4142135) / fVar16 + 1.0;
      fVar16 = powf(10.0,*(float *)(param_1 + 0x18) * -1.2);
      fVar20 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x24) =
           fVar17 * fVar16 - (*(float *)(param_1 + 0x2c) * fVar21 + fVar18 * fVar20) / fVar22;
      fVar17 = 1.0 - *(float *)(param_1 + 0x18);
      if (fVar17 < 0.0) {
        fVar17 = sqrtf(fVar17);
      }
      else {
        fVar17 = SQRT(fVar17);
      }
      fVar3 = *(float *)(param_1 + 0x24);
      fVar4 = *(float *)(param_1 + 0x2c);
      uVar9 = *(uint *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x40 + (ulonglong)(uVar9 & 0x1fff) * 4) =
           *(float *)(param_1 + 0x28070) * 0.5 + ((fVar4 + fVar3 + fVar20) * fVar15) / fVar22;
      fVar5 = *(float *)(param_1 + 0x30);
      fVar6 = *(float *)(param_1 + 0x34);
      fVar7 = *(float *)(param_1 + 0x8044);
      fVar8 = *(float *)(param_1 + 0x38);
      fVar19 = *(float *)(param_1 + 0x40 + (ulonglong)(uVar9 + 0xd40 & 0x1fff) * 4) -
               (fVar6 * *(float *)(param_1 + 0x8048) + fVar5 * fVar7) * fVar8;
      *(float *)(param_1 + 0x8040) = fVar19;
      fVar19 = (fVar7 + fVar7 + fVar19 + *(float *)(param_1 + 0x8048)) * fVar8;
      *(float *)(param_1 + 0x804c) = fVar19;
      fVar7 = *(float *)(param_1 + 0x8058);
      fVar23 = fVar23 * fVar16 -
               (fVar21 * *(float *)(param_1 + 0x805c) + (fVar18 + fVar18) * fVar7) / fVar22;
      *(float *)(param_1 + 0x8054) = fVar23;
      *(float *)(param_1 + 0x8060 + (ulonglong)(uVar9 & 0x7fff) * 4) =
           *(float *)(param_1 + 0x8050) * 0.5 +
           ((fVar23 + *(float *)(param_1 + 0x805c) + fVar7 + fVar7) * fVar15) / fVar22;
      fVar15 = *(float *)(param_1 + 0x28064);
      fVar23 = *(float *)(param_1 + 0x8060 + (ulonglong)(uVar9 + 0x3e60 & 0x7fff) * 4) -
               (fVar6 * *(float *)(param_1 + 0x28068) + fVar5 * fVar15) * fVar8;
      *(float *)(param_1 + 0x28060) = fVar23;
      *(float *)(param_1 + 0x2806c) =
           (fVar15 + fVar15 + fVar23 + *(float *)(param_1 + 0x28068)) * fVar8;
      *(float *)(lVar12 + uVar14 * 4) = ((fVar20 + fVar3 + fVar4) * fVar17) / fVar22 + fVar19;
      *(float *)(lVar13 + uVar14 * 4) =
           ((fVar7 + fVar7 + *(float *)(param_1 + 0x8054) + *(float *)(param_1 + 0x805c)) * fVar17)
           / fVar22 + *(float *)(param_1 + 0x2806c);
      fVar15 = *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x1c) = fVar15;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x24);
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined8 *)(param_1 + 0x8044) = *(undefined8 *)(param_1 + 0x8040);
      *(undefined4 *)(param_1 + 0x8050) = *(undefined4 *)(param_1 + 0x804c);
      *(undefined8 *)(param_1 + 0x8058) = *(undefined8 *)(param_1 + 0x8054);
      *(undefined8 *)(param_1 + 0x28064) = *(undefined8 *)(param_1 + 0x28060);
      *(undefined4 *)(param_1 + 0x28070) = *(undefined4 *)(param_1 + 0x2806c);
      uVar14 = uVar14 + 1;
    } while (param_2 != uVar14);
  }
  return;
}



// FUNCTION 148f1f802 FUN_148f1f802 body=34 status=ok
// SIG undefined FUN_148f1f802(void)

void FUN_148f1f802(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1770e8,0x10);
  *puVar1 = &PTR_FUN_14b9e2190;
  return;
}



// FUNCTION 148f1f83c FUN_148f1f83c body=29 status=ok
// SIG undefined FUN_148f1f83c(void)

undefined8 FUN_148f1f83c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1f866 FUN_148f1f866 body=148 status=ok
// SIG undefined FUN_148f1f866(void)

void FUN_148f1f866(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp3693994125");
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc0",param_1 + 0x10,0x40800000,0x40800000,0x41200000,0x3dcccccd);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc1",param_1 + 0x5dc50,0,0,0x3dcccccd,0x3a83126f);
                    /* WARNING: Could not recover jumptable at 0x000148f1f8f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f1f8fe FUN_148f1f8fe body=200 status=ok
// SIG undefined FUN_148f1f8fe(void)

void FUN_148f1f8fe(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  lVar2 = 0;
  iVar3 = 0;
  do {
    uVar1 = iVar3 + 0x2000;
    if (-1 < (int)(iVar3 + 1U)) {
      uVar1 = iVar3 + 1U;
    }
    iVar3 = (iVar3 - (uVar1 & 0xffffe000)) + 1;
    fVar4 = cosf((float)iVar3 * 0.0007669904);
    *(float *)((longlong)&DAT_14cbe8340 + lVar2) = (1.0 - fVar4) * 0.5;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x8000);
                    /* WARNING: Could not recover jumptable at 0x000148f1f9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  return;
}



// FUNCTION 148f1f9c6 FUN_148f1f9c6 body=38 status=ok
// SIG undefined FUN_148f1f9c6(void)

void FUN_148f1f9c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f1f9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 148f1f9ec FUN_148f1f9ec body=90 status=ok
// SIG undefined FUN_148f1f9ec(void)

void FUN_148f1f9ec(longlong param_1,int param_2)

{
  float fVar1;
  
  *(int *)(param_1 + 0x14) = param_2;
  fVar1 = (float)param_2;
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  if (192000.0 <= fVar1) {
    fVar1 = 192000.0;
  }
  *(float *)(param_1 + 0x18) = fVar1;
  *(float *)(param_1 + 0x2c) = fVar1 + fVar1;
  memset((void *)(param_1 + 0x40),0,0x5dc00);
  memset((void *)(param_1 + 0x5dce4),0,0x119400);
  return;
}



// FUNCTION 148f1fa8a FUN_148f1fa8a body=34 status=ok
// SIG undefined FUN_148f1fa8a(void)

void FUN_148f1fa8a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1770e8,0x10);
  *puVar1 = &PTR_FUN_14b9e2190;
  return;
}



// FUNCTION 148f1faae FUN_148f1faae body=2455 status=ok
// SIG undefined FUN_148f1faae(void)

void FUN_148f1faae(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  if (0 < (int)param_2) {
    lVar8 = *param_3;
    lVar9 = param_3[1];
    lVar10 = param_3[2];
    lVar11 = param_3[3];
    lVar12 = *param_4;
    lVar13 = param_4[1];
    lVar14 = param_4[2];
    lVar15 = param_4[3];
    fVar1 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x18);
    fVar40 = *(float *)(param_1 + 0x2c) / fVar1;
    fVar3 = *(float *)(param_1 + 0x5dc50);
    iVar25 = *(int *)(param_1 + 0xc);
    iVar28 = *(int *)(param_1 + 0x20);
    iVar20 = *(int *)(param_1 + 0x28);
    uVar27 = 0;
    do {
      uVar4 = *(undefined4 *)(lVar8 + uVar27 * 4);
      uVar5 = *(undefined4 *)(lVar9 + uVar27 * 4);
      uVar6 = *(undefined4 *)(lVar10 + uVar27 * 4);
      uVar7 = *(undefined4 *)(lVar11 + uVar27 * 4);
      *(undefined4 *)(param_1 + 8) = 1;
      iVar22 = (iVar25 + iVar28) % (int)(fVar2 / fVar1);
      *(int *)(param_1 + 0x1c) = iVar22;
      bVar30 = iVar22 <= iVar28;
      if (3 < iVar20) {
        iVar20 = 0;
      }
      *(uint *)(param_1 + 0x24) = iVar20 + (uint)bVar30;
      bVar29 = iVar20 + (uint)bVar30 == 4;
      fVar42 = fVar40;
      if (iVar25 == 1 && (!bVar30 || !bVar29)) {
        fVar42 = *(float *)(param_1 + 0x34);
      }
      *(float *)(param_1 + 0x30) = fVar42;
      fVar36 = 0.0;
      if ((!bVar30 || !bVar29) && (fVar36 = *(float *)(param_1 + 0x3c) + 1.0, fVar42 <= fVar36)) {
        fVar36 = fVar42;
      }
      fVar31 = 1.0;
      if (1.0 <= fVar42) {
        fVar31 = fVar42;
      }
      *(float *)(param_1 + 0x38) = fVar36;
      uVar17 = (uint)((fVar36 / fVar31) * 8192.0);
      if (0x1ffe < (int)uVar17) {
        uVar17 = 0x1fff;
      }
      uVar18 = (ulonglong)uVar17;
      if ((int)uVar17 < 1) {
        uVar18 = 0;
      }
      fVar42 = (float)(&DAT_14cbe8340)[uVar18];
      iVar20 = iVar25 * 96000;
      if (iVar20 < 2) {
        iVar20 = 1;
      }
      iVar20 = (*(int *)(param_1 + 0x5dc44) + 1) % iVar20;
      *(int *)(param_1 + 0x5dc40) = iVar20;
      *(undefined4 *)(param_1 + 0x40 + (longlong)iVar20 * 4) = uVar4;
      iVar20 = *(int *)(param_1 + 0x5dc4c) * 0x41c64e6d + 0x3039;
      *(int *)(param_1 + 0x5dc48) = iVar20;
      fVar36 = (float)iVar20 * fVar3 * 4.656613e-10 + 1.0;
      if (iVar25 == 1 && (!bVar30 || !bVar29)) {
        fVar32 = *(float *)(param_1 + 0x5dc58);
        fVar38 = (float)(*(int *)(param_1 + 0x5dc40) + -1);
        fVar37 = *(float *)(param_1 + 0x5dc60);
      }
      else {
        fVar37 = (float)(*(int *)(param_1 + 0x5dc40) + -1);
        fVar32 = fVar36;
        fVar38 = fVar37;
      }
      bVar16 = iVar22 <= iVar28;
      *(float *)(param_1 + 0x5dc54) = fVar32;
      *(float *)(param_1 + 0x5dc5c) = fVar37;
      fVar31 = fmodf(fVar37 - (fVar32 * *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x38)) /
                              fVar31,96000.0);
      fVar31 = fmodf(fVar31 + 96000.0,96000.0);
      iVar20 = (uint)(bVar30 && bVar29) + *(int *)(param_1 + 0x5dc68);
      *(int *)(param_1 + 0x5dc64) = iVar20;
      if (0 < iVar20) {
        iVar20 = 1;
      }
      bVar30 = *(int *)(param_1 + 0x24) == 2;
      fVar32 = fVar40;
      if (iVar25 == 1 && (!bVar30 || !bVar16)) {
        fVar32 = *(float *)(param_1 + 0x5dc70);
      }
      *(float *)(param_1 + 0x5dc6c) = fVar32;
      fVar37 = 0.0;
      if ((!bVar30 || !bVar16) && (fVar37 = *(float *)(param_1 + 0x5dc78) + 1.0, fVar32 <= fVar37))
      {
        fVar37 = fVar32;
      }
      fVar34 = 1.0;
      if (1.0 <= fVar32) {
        fVar34 = fVar32;
      }
      uVar17 = (uint)((fVar37 / fVar34) * 8192.0);
      if (0x1ffe < (int)uVar17) {
        uVar17 = 0x1fff;
      }
      uVar18 = (ulonglong)uVar17;
      if ((int)uVar17 < 1) {
        uVar18 = 0;
      }
      *(float *)(param_1 + 0x5dc74) = fVar37;
      fVar43 = (float)(&DAT_14cbe8340)[uVar18];
      fVar41 = fVar38;
      fVar35 = fVar36;
      if (iVar25 == 1 && (!bVar30 || !bVar16)) {
        fVar35 = *(float *)(param_1 + 0x5dc80);
        fVar41 = *(float *)(param_1 + 0x5dc88);
      }
      bVar29 = iVar22 <= iVar28;
      *(float *)(param_1 + 0x5dc7c) = fVar35;
      *(float *)(param_1 + 0x5dc84) = fVar41;
      fVar32 = fmodf(fVar41 - (fVar37 * fVar32 * fVar35) / fVar34,96000.0);
      fVar32 = fmodf(fVar32 + 96000.0,96000.0);
      iVar24 = (uint)(bVar30 && bVar16) + *(int *)(param_1 + 0x5dc90);
      *(int *)(param_1 + 0x5dc8c) = iVar24;
      if (0 < iVar24) {
        iVar24 = 1;
      }
      bVar30 = *(int *)(param_1 + 0x24) == 1;
      fVar37 = fVar40;
      if (iVar25 == 1 && (!bVar30 || !bVar29)) {
        fVar37 = *(float *)(param_1 + 0x5dc98);
      }
      *(float *)(param_1 + 0x5dc94) = fVar37;
      fVar34 = 0.0;
      if ((!bVar30 || !bVar29) && (fVar34 = *(float *)(param_1 + 0x5dca0) + 1.0, fVar37 <= fVar34))
      {
        fVar34 = fVar37;
      }
      fVar35 = 1.0;
      if (1.0 <= fVar37) {
        fVar35 = fVar37;
      }
      uVar17 = (uint)((fVar34 / fVar35) * 8192.0);
      if (0x1ffe < (int)uVar17) {
        uVar17 = 0x1fff;
      }
      uVar18 = (ulonglong)uVar17;
      if ((int)uVar17 < 1) {
        uVar18 = 0;
      }
      *(float *)(param_1 + 0x5dc9c) = fVar34;
      fVar41 = (float)(&DAT_14cbe8340)[uVar18];
      fVar39 = fVar38;
      fVar33 = fVar36;
      if (iVar25 == 1 && (!bVar30 || !bVar29)) {
        fVar33 = *(float *)(param_1 + 0x5dca8);
        fVar39 = *(float *)(param_1 + 0x5dcb0);
      }
      bVar16 = iVar22 <= iVar28;
      *(float *)(param_1 + 0x5dca4) = fVar33;
      *(float *)(param_1 + 0x5dcac) = fVar39;
      fVar37 = fmodf(fVar39 - (fVar34 * fVar37 * fVar33) / fVar35,96000.0);
      fVar37 = fmodf(fVar37 + 96000.0,96000.0);
      iVar28 = (uint)(bVar30 && bVar29) + *(int *)(param_1 + 0x5dcb8);
      *(int *)(param_1 + 0x5dcb4) = iVar28;
      if (0 < iVar28) {
        iVar28 = 1;
      }
      bVar30 = *(int *)(param_1 + 0x24) == 3;
      fVar34 = fVar40;
      if (iVar25 == 1 && (!bVar30 || !bVar16)) {
        fVar34 = *(float *)(param_1 + 0x5dcc0);
      }
      *(float *)(param_1 + 0x5dcbc) = fVar34;
      fVar35 = 0.0;
      if ((!bVar30 || !bVar16) && (fVar35 = *(float *)(param_1 + 0x5dcc8) + 1.0, fVar34 <= fVar35))
      {
        fVar35 = fVar34;
      }
      fVar33 = 1.0;
      if (1.0 <= fVar34) {
        fVar33 = fVar34;
      }
      uVar17 = (uint)((fVar35 / fVar33) * 8192.0);
      if (0x1ffe < (int)uVar17) {
        uVar17 = 0x1fff;
      }
      uVar18 = (ulonglong)uVar17;
      if ((int)uVar17 < 1) {
        uVar18 = 0;
      }
      *(float *)(param_1 + 0x5dcc4) = fVar35;
      fVar39 = (float)(&DAT_14cbe8340)[uVar18];
      if (iVar25 == 1 && (!bVar30 || !bVar16)) {
        fVar36 = *(float *)(param_1 + 0x5dcd0);
        fVar38 = *(float *)(param_1 + 0x5dcd8);
      }
      *(float *)(param_1 + 0x5dccc) = fVar36;
      *(float *)(param_1 + 0x5dcd4) = fVar38;
      fVar36 = fmodf(fVar38 - (fVar35 * fVar34 * fVar36) / fVar33,96000.0);
      fVar36 = fmodf(fVar36 + 96000.0,96000.0);
      iVar25 = (uint)(bVar30 && bVar16) + *(int *)(param_1 + 0x5dce0);
      *(int *)(param_1 + 0x5dcdc) = iVar25;
      if (0 < iVar25) {
        iVar25 = 1;
      }
      lVar19 = (longlong)(int)fVar36;
      lVar21 = (longlong)(int)fVar37;
      lVar23 = (longlong)(int)fVar32;
      lVar26 = (longlong)(int)fVar31;
      *(float *)(lVar12 + uVar27 * 4) =
           *(float *)(param_1 + 0x40 + lVar26 * 4) * (float)iVar20 * fVar42 +
           *(float *)(param_1 + 0x40 + lVar23 * 4) * (float)iVar24 * fVar43 +
           *(float *)(param_1 + 0x40 + lVar19 * 4) * (float)iVar25 * fVar39 +
           *(float *)(param_1 + 0x40 + lVar21 * 4) * (float)iVar28 * fVar41;
      *(undefined4 *)(param_1 + 0x5dce4 + (longlong)*(int *)(param_1 + 0x5dc40) * 4) = uVar5;
      fVar42 = fVar42 * (float)iVar20;
      fVar39 = fVar39 * (float)iVar25;
      fVar43 = fVar43 * (float)iVar24;
      fVar41 = fVar41 * (float)iVar28;
      *(float *)(lVar13 + uVar27 * 4) =
           *(float *)(param_1 + 0x5dce4 + lVar26 * 4) * fVar42 +
           *(float *)(param_1 + 0x5dce4 + lVar19 * 4) * fVar39 +
           *(float *)(param_1 + 0x5dce4 + lVar21 * 4) * fVar41 +
           *(float *)(param_1 + 0x5dce4 + lVar23 * 4) * fVar43;
      *(undefined4 *)(param_1 + 0xbb8e4 + (longlong)*(int *)(param_1 + 0x5dc40) * 4) = uVar6;
      *(float *)(lVar14 + uVar27 * 4) =
           *(float *)(param_1 + 0xbb8e4 + lVar26 * 4) * fVar42 +
           *(float *)(param_1 + 0xbb8e4 + lVar19 * 4) * fVar39 +
           *(float *)(param_1 + 0xbb8e4 + lVar21 * 4) * fVar41 +
           *(float *)(param_1 + 0xbb8e4 + lVar23 * 4) * fVar43;
      *(undefined4 *)(param_1 + 0x1194e4 + (longlong)*(int *)(param_1 + 0x5dc40) * 4) = uVar7;
      *(float *)(lVar15 + uVar27 * 4) =
           fVar42 * *(float *)(param_1 + 0x1194e4 + lVar26 * 4) +
           fVar43 * *(float *)(param_1 + 0x1194e4 + lVar23 * 4) +
           fVar39 * *(float *)(param_1 + 0x1194e4 + lVar19 * 4) +
           fVar41 * *(float *)(param_1 + 0x1194e4 + lVar21 * 4);
      iVar25 = *(int *)(param_1 + 8);
      iVar28 = *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0xc) = iVar25;
      *(int *)(param_1 + 0x20) = iVar28;
      iVar20 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x28) = iVar20;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x5dc44) = *(undefined4 *)(param_1 + 0x5dc40);
      *(undefined4 *)(param_1 + 0x5dc4c) = *(undefined4 *)(param_1 + 0x5dc48);
      *(undefined4 *)(param_1 + 0x5dc58) = *(undefined4 *)(param_1 + 0x5dc54);
      *(undefined4 *)(param_1 + 0x5dc60) = *(undefined4 *)(param_1 + 0x5dc5c);
      *(undefined4 *)(param_1 + 0x5dc68) = *(undefined4 *)(param_1 + 0x5dc64);
      *(undefined4 *)(param_1 + 0x5dc70) = *(undefined4 *)(param_1 + 0x5dc6c);
      *(undefined4 *)(param_1 + 0x5dc78) = *(undefined4 *)(param_1 + 0x5dc74);
      *(undefined4 *)(param_1 + 0x5dc80) = *(undefined4 *)(param_1 + 0x5dc7c);
      *(undefined4 *)(param_1 + 0x5dc88) = *(undefined4 *)(param_1 + 0x5dc84);
      *(undefined4 *)(param_1 + 0x5dc90) = *(undefined4 *)(param_1 + 0x5dc8c);
      *(undefined4 *)(param_1 + 0x5dc98) = *(undefined4 *)(param_1 + 0x5dc94);
      *(undefined4 *)(param_1 + 0x5dca0) = *(undefined4 *)(param_1 + 0x5dc9c);
      *(undefined4 *)(param_1 + 0x5dca8) = *(undefined4 *)(param_1 + 0x5dca4);
      *(undefined4 *)(param_1 + 0x5dcb0) = *(undefined4 *)(param_1 + 0x5dcac);
      *(undefined4 *)(param_1 + 0x5dcb8) = *(undefined4 *)(param_1 + 0x5dcb4);
      *(undefined4 *)(param_1 + 0x5dcc0) = *(undefined4 *)(param_1 + 0x5dcbc);
      *(undefined4 *)(param_1 + 0x5dcc8) = *(undefined4 *)(param_1 + 0x5dcc4);
      *(undefined4 *)(param_1 + 0x5dcd0) = *(undefined4 *)(param_1 + 0x5dccc);
      *(undefined4 *)(param_1 + 0x5dcd8) = *(undefined4 *)(param_1 + 0x5dcd4);
      *(undefined4 *)(param_1 + 0x5dce0) = *(undefined4 *)(param_1 + 0x5dcdc);
      uVar27 = uVar27 + 1;
    } while (param_2 != uVar27);
  }
  return;
}



// FUNCTION 148f2047e FUN_148f2047e body=34 status=ok
// SIG undefined FUN_148f2047e(void)

void FUN_148f2047e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f204be FUN_148f204be body=34 status=ok
// SIG undefined FUN_148f204be(void)

void FUN_148f204be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f20514 FUN_148f20514 body=34 status=ok
// SIG undefined FUN_148f20514(void)

void FUN_148f20514(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2390;
  return;
}



// FUNCTION 148f2054e FUN_148f2054e body=29 status=ok
// SIG undefined FUN_148f2054e(void)

undefined8 FUN_148f2054e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f20578 FUN_148f20578 body=748 status=ok
// SIG undefined FUN_148f20578(void)

void FUN_148f20578(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp85450108");
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc0",param_1 + 0x4e21c,0x3f800000,0x3f800000,0x42480000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc1",param_1 + 0x4e244,0x3f800000,0x3a83126f,0x40400000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc10",param_1 + 0x4f37c,0x3f800000,0x3f800000,0x42c80000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc11",param_1 + 0x4f380,0x3f800000,0x3c23d70a,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc12",param_1 + 0x4f384,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc13",param_1 + 0x8f388,0x3dcccccd,0x3c23d70a,0x3e99999a,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc14",param_1 + 0x8f38c,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc15",param_1 + 0x8f390,0x3f800000,0,0x41200000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc2",param_1 + 0x4e300,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc3",param_1 + 0x4e31c,0x3f800000,0x3f800000,0x43fa0000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc4",param_1 + 0x4e34c,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc5",param_1 + 0x4f354,0x3f800000,0x3c23d70a,0x41a00000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc6",param_1 + 0x4f360,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc7",param_1 + 0x10,0,0,0x3f7d70a4,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc8",param_1 + 0x4f364,0x3f800000,0x3f800000,0x43fa0000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc9",param_1 + 0x4f378,0x3f800000,0,0x3f800000,0x3c23d70a);
                    /* WARNING: Could not recover jumptable at 0x000148f20860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f20876 FUN_148f20876 body=38 status=ok
// SIG undefined FUN_148f20876(void)

void FUN_148f20876(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f20898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 148f2089c FUN_148f2089c body=105 status=ok
// SIG undefined FUN_148f2089c(void)

void FUN_148f2089c(longlong param_1,int param_2)

{
  float fVar1;
  
  *(int *)(param_1 + 0x4e220) = param_2;
  memset((void *)(param_1 + 0x14),0,320000);
  fVar1 = (float)param_2;
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  if (192000.0 <= fVar1) {
    fVar1 = 192000.0;
  }
  *(float *)(param_1 + 0x4e224) = fVar1;
  *(float *)(param_1 + 0x4e228) = 1.0 / fVar1;
  *(float *)(param_1 + 0x4e320) = 3.1415927 / fVar1;
  return;
}



// FUNCTION 148f2096e FUN_148f2096e body=185 status=ok
// SIG undefined FUN_148f2096e(void)

void FUN_148f2096e(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x4e214) = 0;
  *(undefined8 *)(param_1 + 0x4f358) = 0;
  memset((void *)(param_1 + 0x4f388),0,0x40000);
  *(undefined8 *)(param_1 + 0x4e22c) = 0;
  *(undefined8 *)(param_1 + 0x4e234) = 0;
  *(undefined8 *)(param_1 + 0x4e23c) = 0;
  memset((void *)(param_1 + 0x4e248),0,0xb8);
  *(undefined8 *)(param_1 + 0x4e304) = 0;
  *(undefined8 *)(param_1 + 0x4e30c) = 0;
  *(undefined8 *)(param_1 + 0x4e314) = 0;
  *(undefined8 *)(param_1 + 0x4e324) = 0;
  *(undefined8 *)(param_1 + 0x4e32c) = 0;
  *(undefined8 *)(param_1 + 0x4e334) = 0;
  *(undefined8 *)(param_1 + 0x4e33c) = 0;
  *(undefined8 *)(param_1 + 0x4e344) = 0;
  memset((void *)(param_1 + 0x4e350),0,0x1004);
  *(undefined8 *)(param_1 + 0x4f368) = 0;
  *(undefined8 *)(param_1 + 0x4f370) = 0;
  *(undefined8 *)(param_1 + 0x8f394) = 0;
  *(undefined8 *)(param_1 + 0x8f39c) = 0;
  return;
}



// FUNCTION 148f20a28 FUN_148f20a28 body=34 status=ok
// SIG undefined FUN_148f20a28(void)

void FUN_148f20a28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2390;
  return;
}



// FUNCTION 148f20a4c FUN_148f20a4c body=3914 status=ok
// SIG undefined FUN_148f20a4c(void)

void FUN_148f20a4c(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  
  lVar21 = *param_3;
  lVar22 = *param_4;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x4e21c);
  fVar3 = *(float *)(param_1 + 0x4e228);
  fVar4 = *(float *)(param_1 + 0x4e244);
  fVar5 = *(float *)(param_1 + 0x4e300);
  fVar30 = tanf(*(float *)(param_1 + 0x4e320) * *(float *)(param_1 + 0x4e31c));
  if (0 < (int)param_2) {
    fVar35 = 80000.0 / fVar2;
    fVar45 = 1.0;
    fVar36 = fVar30 / (fVar30 * fVar30 + 1.0);
    fVar6 = *(float *)(param_1 + 0x4e34c);
    fVar7 = *(float *)(param_1 + 0x4e224);
    fVar8 = *(float *)(param_1 + 0x4e228);
    fVar9 = *(float *)(param_1 + 0x4f354);
    fVar10 = *(float *)(param_1 + 0x4f360);
    fVar11 = *(float *)(param_1 + 0x4f378);
    fVar12 = *(float *)(param_1 + 0x4f384);
    fVar13 = *(float *)(param_1 + 0x4f380);
    fVar14 = *(float *)(param_1 + 0x8f388);
    fVar15 = *(float *)(param_1 + 0x8f38c);
    iVar25 = *(int *)(param_1 + 0x4e218);
    uVar29 = 0;
    fVar16 = *(float *)(param_1 + 0x4f364);
    fVar17 = *(float *)(param_1 + 0x4f37c);
    fVar18 = *(float *)(param_1 + 0x8f390);
    fVar43 = *(float *)(param_1 + 0x4e308);
    do {
      fVar34 = *(float *)(lVar21 + uVar29 * 4);
      *(undefined4 *)(param_1 + 8) = 1;
      *(int *)(param_1 + 0x4e214) = iVar25 + 1;
      *(float *)(param_1 + 0x14 + (longlong)(iVar25 % 80000) * 4) = fVar34;
      iVar19 = *(int *)(param_1 + 0xc);
      fVar31 = 0.0;
      if (iVar19 == 1) {
        fVar31 = *(float *)(param_1 + 0x4e230) + fVar3 * fVar2;
      }
      auVar39 = roundss(ZEXT416(0),ZEXT416((uint)fVar31),9);
      fVar31 = fVar31 - auVar39._0_4_;
      *(float *)(param_1 + 0x4e22c) = fVar31;
      fVar31 = fmodf(fVar31 + 0.75,1.0);
      fVar32 = fmodf(fVar31 + 1.0,1.0);
      fVar31 = *(float *)(param_1 + 0x4e238);
      bVar23 = *(int *)(param_1 + 0x4e240) < 1;
      iVar28 = *(int *)(param_1 + 0x4e254) * 0x41c64e6d + 0x3039;
      *(float *)(param_1 + 0x4e234) = fVar32;
      *(uint *)(param_1 + 0x4e23c) = (uint)(fVar32 < fVar31);
      fVar33 = (float)(bVar23 && fVar32 < fVar31);
      fVar37 = (float)(!bVar23 || fVar31 <= fVar32);
      *(float *)(param_1 + 0x4e248) = *(float *)(param_1 + 0x4e24c) * fVar37 + fVar4 * fVar33;
      *(int *)(param_1 + 0x4e250) = iVar28;
      fVar44 = ABS((float)iVar28 * 4.656613e-10);
      fVar42 = fVar44 * 1000.0;
      *(float *)(param_1 + 0x4e258) = *(float *)(param_1 + 0x4e25c) * fVar37 + fVar42 * fVar33;
      fVar46 = 0.0;
      if (fVar31 <= fVar32) {
        fVar46 = *(float *)(param_1 + 0x4e264) + 1.0;
        if (fVar35 <= fVar46) {
          fVar46 = fVar35;
        }
      }
      *(float *)(param_1 + 0x4e260) = fVar46;
      fVar47 = (float)(iVar25 % 80000) + fVar35;
      *(float *)(param_1 + 0x4e268) = fVar37 * *(float *)(param_1 + 0x4e26c) + fVar33 * fVar47;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c) + 0.5,1.0);
      fVar46 = fmodf(fVar31 + 1.0,1.0);
      bVar24 = fVar46 < *(float *)(param_1 + 0x4e274);
      bVar23 = *(int *)(param_1 + 0x4e27c) < 1;
      fVar33 = (float)(bVar23 && bVar24);
      fVar37 = (float)(!bVar23 || !bVar24);
      *(float *)(param_1 + 0x4e270) = fVar46;
      *(uint *)(param_1 + 0x4e278) = (uint)bVar24;
      *(float *)(param_1 + 0x4e280) = *(float *)(param_1 + 0x4e284) * fVar37 + fVar4 * fVar33;
      *(float *)(param_1 + 0x4e288) = *(float *)(param_1 + 0x4e28c) * fVar37 + fVar42 * fVar33;
      fVar31 = 0.0;
      if (*(float *)(param_1 + 0x4e274) <= fVar46) {
        fVar31 = *(float *)(param_1 + 0x4e294) + 1.0;
        if (fVar35 <= fVar31) {
          fVar31 = fVar35;
        }
      }
      *(float *)(param_1 + 0x4e290) = fVar31;
      *(float *)(param_1 + 0x4e298) = fVar37 * *(float *)(param_1 + 0x4e29c) + fVar33 * fVar47;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c) + 0.25,1.0);
      fVar33 = fmodf(fVar31 + 1.0,1.0);
      bVar24 = fVar33 < *(float *)(param_1 + 0x4e2a4);
      bVar23 = *(int *)(param_1 + 0x4e2ac) < 1;
      *(float *)(param_1 + 0x4e2a0) = fVar33;
      fVar37 = (float)(bVar23 && bVar24);
      fVar38 = (float)(!bVar23 || !bVar24);
      *(uint *)(param_1 + 0x4e2a8) = (uint)bVar24;
      *(float *)(param_1 + 0x4e2b0) = *(float *)(param_1 + 0x4e2b4) * fVar38 + fVar4 * fVar37;
      *(float *)(param_1 + 0x4e2b8) = *(float *)(param_1 + 0x4e2bc) * fVar38 + fVar42 * fVar37;
      fVar31 = 0.0;
      if (*(float *)(param_1 + 0x4e2a4) <= fVar33) {
        fVar31 = *(float *)(param_1 + 0x4e2c4) + 1.0;
        if (fVar35 <= fVar31) {
          fVar31 = fVar35;
        }
      }
      *(float *)(param_1 + 0x4e2c0) = fVar31;
      *(float *)(param_1 + 0x4e2c8) = fVar38 * *(float *)(param_1 + 0x4e2cc) + fVar37 * fVar47;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c),1.0);
      fVar42 = fmodf(fVar31 + 1.0,1.0);
      fVar31 = *(float *)(param_1 + 0x4e2d4);
      bVar23 = *(int *)(param_1 + 0x4e2dc) < 1;
      fVar41 = (float)(bVar23 && fVar42 < fVar31);
      fVar38 = (float)(!bVar23 || fVar31 <= fVar42);
      *(float *)(param_1 + 0x4e2d0) = fVar42;
      *(uint *)(param_1 + 0x4e2d8) = (uint)(fVar42 < fVar31);
      *(float *)(param_1 + 0x4e2e0) = *(float *)(param_1 + 0x4e2e4) * fVar38 + fVar4 * fVar41;
      *(float *)(param_1 + 0x4e2e8) =
           *(float *)(param_1 + 0x4e2ec) * fVar38 + fVar44 * fVar41 * 1000.0;
      fVar37 = 0.0;
      if (fVar31 <= fVar42) {
        fVar37 = *(float *)(param_1 + 0x4e2f4) + 1.0;
        if (fVar35 <= fVar37) {
          fVar37 = fVar35;
        }
      }
      *(float *)(param_1 + 0x4e2f0) = fVar37;
      *(float *)(param_1 + 0x4e2f8) = fVar38 * *(float *)(param_1 + 0x4e2fc) + fVar47 * fVar41;
      fVar42 = cosf(fVar42 * 6.2831855);
      fVar31 = *(float *)(param_1 + 0x4e2e0);
      fVar37 = 100.0;
      if (*(float *)(param_1 + 0x4e2e8) <= 100.0) {
        fVar37 = *(float *)(param_1 + 0x4e2e8);
      }
      fVar44 = fVar45;
      if (1.0 <= fVar31) {
        fVar44 = fVar31;
      }
      fVar31 = fmodf((*(float *)(param_1 + 0x4e2f0) * fVar31 + *(float *)(param_1 + 0x4e2f8)) -
                     (fVar44 * fVar35 + fVar37),80000.0);
      fVar31 = fmodf(fVar31 + 80000.0,80000.0);
      fVar31 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar31 * 4);
      fVar44 = cosf(fVar33 * 6.2831855);
      fVar33 = *(float *)(param_1 + 0x4e2b0);
      fVar37 = 100.0;
      if (*(float *)(param_1 + 0x4e2b8) <= 100.0) {
        fVar37 = *(float *)(param_1 + 0x4e2b8);
      }
      fVar47 = fVar45;
      if (1.0 <= fVar33) {
        fVar47 = fVar33;
      }
      fVar33 = fmodf((*(float *)(param_1 + 0x4e2c0) * fVar33 + *(float *)(param_1 + 0x4e2c8)) -
                     (fVar47 * fVar35 + fVar37),80000.0);
      fVar33 = fmodf(fVar33 + 80000.0,80000.0);
      fVar33 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar33 * 4);
      fVar47 = cosf(fVar46 * 6.2831855);
      fVar46 = *(float *)(param_1 + 0x4e280);
      fVar37 = 100.0;
      if (*(float *)(param_1 + 0x4e288) <= 100.0) {
        fVar37 = *(float *)(param_1 + 0x4e288);
      }
      fVar38 = fVar45;
      if (1.0 <= fVar46) {
        fVar38 = fVar46;
      }
      fVar46 = fmodf((*(float *)(param_1 + 0x4e290) * fVar46 + *(float *)(param_1 + 0x4e298)) -
                     (fVar38 * fVar35 + fVar37),80000.0);
      fVar46 = fmodf(fVar46 + 80000.0,80000.0);
      fVar46 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar46 * 4);
      fVar38 = cosf(fVar32 * 6.2831855);
      fVar32 = *(float *)(param_1 + 0x4e248);
      fVar37 = 100.0;
      if (*(float *)(param_1 + 0x4e258) <= 100.0) {
        fVar37 = *(float *)(param_1 + 0x4e258);
      }
      fVar41 = fVar45;
      if (1.0 <= fVar32) {
        fVar41 = fVar32;
      }
      fVar32 = fmodf((*(float *)(param_1 + 0x4e260) * fVar32 + *(float *)(param_1 + 0x4e268)) -
                     (fVar41 * fVar35 + fVar37),80000.0);
      fVar32 = fmodf(fVar32 + 80000.0,80000.0);
      fVar33 = fVar34 * (1.0 - fVar5) +
               ((1.0 - fVar38) * *(float *)(param_1 + 0x14 + (longlong)(int)fVar32 * 4) +
               (1.0 - fVar47) * fVar46 + (1.0 - fVar44) * fVar33 + (1.0 - fVar42) * fVar31) *
               fVar5 * 0.5;
      fVar34 = *(float *)(param_1 + 0x4e30c) * -0.94657 + fVar43 * 1.94632 + fVar33;
      *(float *)(param_1 + 0x4e304) = fVar34;
      fVar46 = *(float *)(param_1 + 0x4e314) * 0.83774;
      fVar31 = (fVar34 * 0.94657 + *(float *)(param_1 + 0x4e30c) + fVar46) -
               (*(float *)(param_1 + 0x4e318) * 0.06338 + fVar43 * 1.94632);
      *(float *)(param_1 + 0x4e310) = fVar31;
      fVar43 = *(float *)(param_1 + 0x4e330);
      fVar32 = (-fVar30 * fVar43 + *(float *)(param_1 + 0x4e328)) * (fVar36 + fVar36) + fVar43;
      fVar34 = fVar45;
      if (*(int *)(param_1 + 0xc) != 0) {
        fVar34 = (fVar43 + fVar32) * -fVar30 + *(float *)(param_1 + 0x4e328);
      }
      *(float *)(param_1 + 0x4e324) = fVar34;
      *(float *)(param_1 + 0x4e32c) = fVar32;
      fVar43 = *(float *)(param_1 + 0x4e338) * 0.02569;
      fVar37 = (*(float *)(param_1 + 0x4e33c) * 0.260502 + fVar33) - fVar43;
      *(float *)(param_1 + 0x4e334) = fVar37;
      fVar42 = *(float *)(param_1 + 0x4e344) * 1.8685;
      fVar43 = (*(float *)(param_1 + 0x4e33c) + fVar42 + fVar43) -
               (*(float *)(param_1 + 0x4e348) * 0.870686 + fVar37 * 0.260502);
      *(float *)(param_1 + 0x4e340) = fVar43;
      uVar20 = *(uint *)(param_1 + 0x4e350);
      fVar34 = fVar33 * (1.0 - fVar6) +
               (((fVar43 * 0.870686 + *(float *)(param_1 + 0x4e348)) - fVar42) * fVar34 -
               ((fVar31 * 0.06338 + *(float *)(param_1 + 0x4e318)) - fVar46) * fVar32) * fVar6;
      fVar43 = *(float *)(param_1 + 0x4f36c) * -fVar1 + fVar34;
      *(float *)(param_1 + 0x4e354 + (ulonglong)(uVar20 & 0x3ff) * 4) = fVar43;
      auVar39 = ZEXT816(0);
      if (iVar19 == 1) {
        auVar39 = ZEXT416((uint)(*(float *)(param_1 + 0x4f35c) + fVar8 * fVar9));
      }
      auVar40 = roundss(ZEXT416((uint)fVar46),auVar39,9);
      fVar31 = auVar39._0_4_ - auVar40._0_4_;
      *(float *)(param_1 + 0x4f358) = fVar31;
      fVar31 = 1.0 - ABS(fVar31 + fVar31 + -1.0);
      fVar31 = ((fVar31 + fVar31 + -1.0) * fVar10 + 1.0) * fVar16;
      fVar46 = fVar31 + -1.0;
      uVar26 = (uint)fVar46;
      uVar27 = 0;
      if (0 < (int)uVar26) {
        uVar27 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar26 = 0xffffffff;
      }
      auVar39 = roundss(ZEXT416((uint)fVar46),ZEXT416((uint)fVar46),9);
      if (0x2000 < (int)uVar27) {
        uVar27 = 0x2001;
      }
      if (0x1fff < (int)uVar26) {
        uVar26 = 0;
      }
      *(float *)(param_1 + 0x4f368) =
           ((2.0 - fVar31) + auVar39._0_4_) *
           *(float *)(param_1 + 0x4e354 + (ulonglong)(uVar20 - uVar27 & 0x3ff) * 4) +
           ((-1.0 - auVar39._0_4_) + fVar31) *
           *(float *)(param_1 + 0x4e354 + (ulonglong)(~uVar26 + uVar20 & 0x3ff) * 4);
      *(float *)(param_1 + 0x4f370) = fVar43;
      fVar34 = fVar34 * (1.0 - fVar11) + *(float *)(param_1 + 0x4f374) * fVar11;
      fVar43 = tanhf(fVar17 * fVar34);
      fVar43 = fVar34 * (1.0 - fVar12) + fVar43 * fVar13 * fVar12;
      uVar20 = *(uint *)(param_1 + 0x4e350);
      *(float *)(param_1 + 0x4f388 + (ulonglong)(uVar20 & 0xffff) * 4) = fVar43;
      fVar43 = (fVar43 * (1.0 - fVar15) +
               *(float *)(param_1 + 0x4f388 +
                         (ulonglong)(uVar20 - (int)(fVar7 * fVar14) & 0xffff) * 4) * fVar15) *
               fVar18;
      *(float *)(param_1 + 0x8f394) = fVar43;
      fVar43 = (*(float *)(param_1 + 0x8f3a0) * 0.995 + fVar43) - *(float *)(param_1 + 0x8f398);
      *(float *)(param_1 + 0x8f39c) = fVar43;
      *(float *)(lVar22 + uVar29 * 4) = fVar43;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      iVar25 = *(int *)(param_1 + 0x4e214);
      *(int *)(param_1 + 0x4e218) = iVar25;
      *(undefined4 *)(param_1 + 0x4e230) = *(undefined4 *)(param_1 + 0x4e22c);
      *(undefined4 *)(param_1 + 0x4e238) = *(undefined4 *)(param_1 + 0x4e234);
      *(undefined4 *)(param_1 + 0x4e240) = *(undefined4 *)(param_1 + 0x4e23c);
      *(undefined4 *)(param_1 + 0x4e24c) = *(undefined4 *)(param_1 + 0x4e248);
      *(undefined4 *)(param_1 + 0x4e254) = *(undefined4 *)(param_1 + 0x4e250);
      *(undefined4 *)(param_1 + 0x4e25c) = *(undefined4 *)(param_1 + 0x4e258);
      *(undefined4 *)(param_1 + 0x4e264) = *(undefined4 *)(param_1 + 0x4e260);
      *(undefined4 *)(param_1 + 0x4e26c) = *(undefined4 *)(param_1 + 0x4e268);
      *(undefined4 *)(param_1 + 0x4e274) = *(undefined4 *)(param_1 + 0x4e270);
      *(undefined4 *)(param_1 + 0x4e27c) = *(undefined4 *)(param_1 + 0x4e278);
      *(undefined4 *)(param_1 + 0x4e284) = *(undefined4 *)(param_1 + 0x4e280);
      *(undefined4 *)(param_1 + 0x4e28c) = *(undefined4 *)(param_1 + 0x4e288);
      *(undefined4 *)(param_1 + 0x4e294) = *(undefined4 *)(param_1 + 0x4e290);
      *(undefined4 *)(param_1 + 0x4e29c) = *(undefined4 *)(param_1 + 0x4e298);
      *(undefined4 *)(param_1 + 0x4e2a4) = *(undefined4 *)(param_1 + 0x4e2a0);
      *(undefined4 *)(param_1 + 0x4e2ac) = *(undefined4 *)(param_1 + 0x4e2a8);
      *(undefined4 *)(param_1 + 0x4e2b4) = *(undefined4 *)(param_1 + 0x4e2b0);
      *(undefined4 *)(param_1 + 0x4e2bc) = *(undefined4 *)(param_1 + 0x4e2b8);
      *(undefined4 *)(param_1 + 0x4e2c4) = *(undefined4 *)(param_1 + 0x4e2c0);
      *(undefined4 *)(param_1 + 0x4e2cc) = *(undefined4 *)(param_1 + 0x4e2c8);
      *(undefined4 *)(param_1 + 0x4e2d4) = *(undefined4 *)(param_1 + 0x4e2d0);
      *(undefined4 *)(param_1 + 0x4e2dc) = *(undefined4 *)(param_1 + 0x4e2d8);
      *(undefined4 *)(param_1 + 0x4e2e4) = *(undefined4 *)(param_1 + 0x4e2e0);
      *(undefined4 *)(param_1 + 0x4e2ec) = *(undefined4 *)(param_1 + 0x4e2e8);
      *(undefined4 *)(param_1 + 0x4e2f4) = *(undefined4 *)(param_1 + 0x4e2f0);
      *(undefined4 *)(param_1 + 0x4e2fc) = *(undefined4 *)(param_1 + 0x4e2f8);
      *(undefined4 *)(param_1 + 0x4e30c) = *(undefined4 *)(param_1 + 0x4e308);
      fVar43 = *(float *)(param_1 + 0x4e304);
      *(float *)(param_1 + 0x4e308) = fVar43;
      *(undefined4 *)(param_1 + 0x4e318) = *(undefined4 *)(param_1 + 0x4e314);
      *(undefined4 *)(param_1 + 0x4e314) = *(undefined4 *)(param_1 + 0x4e310);
      *(undefined4 *)(param_1 + 0x4e328) = *(undefined4 *)(param_1 + 0x4e324);
      *(undefined4 *)(param_1 + 0x4e330) = *(undefined4 *)(param_1 + 0x4e32c);
      *(undefined4 *)(param_1 + 0x4e33c) = *(undefined4 *)(param_1 + 0x4e338);
      *(undefined4 *)(param_1 + 0x4e338) = *(undefined4 *)(param_1 + 0x4e334);
      *(undefined4 *)(param_1 + 0x4e348) = *(undefined4 *)(param_1 + 0x4e344);
      *(undefined4 *)(param_1 + 0x4e344) = *(undefined4 *)(param_1 + 0x4e340);
      *(int *)(param_1 + 0x4e350) = *(int *)(param_1 + 0x4e350) + 1;
      *(undefined4 *)(param_1 + 0x4f35c) = *(undefined4 *)(param_1 + 0x4f358);
      *(undefined4 *)(param_1 + 0x4f36c) = *(undefined4 *)(param_1 + 0x4f368);
      *(undefined4 *)(param_1 + 0x4f374) = *(undefined4 *)(param_1 + 0x4f370);
      *(undefined4 *)(param_1 + 0x8f398) = *(undefined4 *)(param_1 + 0x8f394);
      *(undefined4 *)(param_1 + 0x8f3a0) = *(undefined4 *)(param_1 + 0x8f39c);
      uVar29 = uVar29 + 1;
    } while (param_2 != uVar29);
  }
  return;
}



// FUNCTION 148f219d2 FUN_148f219d2 body=34 status=ok
// SIG undefined FUN_148f219d2(void)

void FUN_148f219d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2440;
  return;
}



// FUNCTION 148f219f6 FUN_148f219f6 body=3914 status=ok
// SIG undefined FUN_148f219f6(void)

void FUN_148f219f6(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  
  lVar21 = *param_3;
  lVar22 = *param_4;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x4e21c);
  fVar3 = *(float *)(param_1 + 0x4e228);
  fVar4 = *(float *)(param_1 + 0x4e244);
  fVar5 = *(float *)(param_1 + 0x4e300);
  fVar30 = tanf(*(float *)(param_1 + 0x4e320) * *(float *)(param_1 + 0x4e31c));
  if (0 < (int)param_2) {
    fVar35 = 80000.0 / fVar2;
    fVar45 = 1.0;
    fVar36 = fVar30 / (fVar30 * fVar30 + 1.0);
    fVar6 = *(float *)(param_1 + 0x4e34c);
    fVar7 = *(float *)(param_1 + 0x4e224);
    fVar8 = *(float *)(param_1 + 0x4e228);
    fVar9 = *(float *)(param_1 + 0x4f354);
    fVar10 = *(float *)(param_1 + 0x4f360);
    fVar11 = *(float *)(param_1 + 0x4f378);
    fVar12 = *(float *)(param_1 + 0x4f384);
    fVar13 = *(float *)(param_1 + 0x4f380);
    fVar14 = *(float *)(param_1 + 0x8f388);
    fVar15 = *(float *)(param_1 + 0x8f38c);
    iVar25 = *(int *)(param_1 + 0x4e218);
    uVar29 = 0;
    fVar16 = *(float *)(param_1 + 0x4f364);
    fVar17 = *(float *)(param_1 + 0x4f37c);
    fVar18 = *(float *)(param_1 + 0x8f390);
    fVar42 = *(float *)(param_1 + 0x4e308);
    do {
      fVar34 = *(float *)(lVar21 + uVar29 * 4);
      *(undefined4 *)(param_1 + 8) = 1;
      *(int *)(param_1 + 0x4e214) = iVar25 + 1;
      *(float *)(param_1 + 0x14 + (longlong)(iVar25 % 80000) * 4) = fVar34;
      iVar19 = *(int *)(param_1 + 0xc);
      fVar31 = 0.0;
      if (iVar19 == 1) {
        fVar31 = *(float *)(param_1 + 0x4e230) + fVar3 * fVar2;
      }
      auVar39 = roundss(ZEXT416(0),ZEXT416((uint)fVar31),9);
      fVar31 = fVar31 - auVar39._0_4_;
      *(float *)(param_1 + 0x4e22c) = fVar31;
      fVar31 = fmodf(fVar31 + 0.75,1.0);
      fVar32 = fmodf(fVar31 + 1.0,1.0);
      fVar31 = *(float *)(param_1 + 0x4e238);
      bVar23 = *(int *)(param_1 + 0x4e240) < 1;
      iVar28 = *(int *)(param_1 + 0x4e254) * 0x41c64e6d + 0x3039;
      *(float *)(param_1 + 0x4e234) = fVar32;
      *(uint *)(param_1 + 0x4e23c) = (uint)(fVar32 < fVar31);
      fVar33 = (float)(bVar23 && fVar32 < fVar31);
      fVar37 = (float)(!bVar23 || fVar31 <= fVar32);
      *(float *)(param_1 + 0x4e248) = *(float *)(param_1 + 0x4e24c) * fVar37 + fVar4 * fVar33;
      *(int *)(param_1 + 0x4e250) = iVar28;
      fVar44 = ABS((float)iVar28 * 4.656613e-10);
      fVar43 = fVar44 * 1000.0;
      *(float *)(param_1 + 0x4e258) = *(float *)(param_1 + 0x4e25c) * fVar37 + fVar43 * fVar33;
      fVar46 = 0.0;
      if (fVar31 <= fVar32) {
        fVar46 = *(float *)(param_1 + 0x4e264) + 1.0;
        if (fVar35 <= fVar46) {
          fVar46 = fVar35;
        }
      }
      *(float *)(param_1 + 0x4e260) = fVar46;
      fVar47 = (float)(iVar25 % 80000) + fVar35;
      *(float *)(param_1 + 0x4e268) = fVar37 * *(float *)(param_1 + 0x4e26c) + fVar33 * fVar47;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c) + 0.5,1.0);
      fVar46 = fmodf(fVar31 + 1.0,1.0);
      bVar24 = fVar46 < *(float *)(param_1 + 0x4e274);
      bVar23 = *(int *)(param_1 + 0x4e27c) < 1;
      fVar33 = (float)(bVar23 && bVar24);
      fVar37 = (float)(!bVar23 || !bVar24);
      *(float *)(param_1 + 0x4e270) = fVar46;
      *(uint *)(param_1 + 0x4e278) = (uint)bVar24;
      *(float *)(param_1 + 0x4e280) = *(float *)(param_1 + 0x4e284) * fVar37 + fVar4 * fVar33;
      *(float *)(param_1 + 0x4e288) = *(float *)(param_1 + 0x4e28c) * fVar37 + fVar43 * fVar33;
      fVar31 = 0.0;
      if (*(float *)(param_1 + 0x4e274) <= fVar46) {
        fVar31 = *(float *)(param_1 + 0x4e294) + 1.0;
        if (fVar35 <= fVar31) {
          fVar31 = fVar35;
        }
      }
      *(float *)(param_1 + 0x4e290) = fVar31;
      *(float *)(param_1 + 0x4e298) = fVar37 * *(float *)(param_1 + 0x4e29c) + fVar33 * fVar47;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c) + 0.25,1.0);
      fVar33 = fmodf(fVar31 + 1.0,1.0);
      bVar24 = fVar33 < *(float *)(param_1 + 0x4e2a4);
      bVar23 = *(int *)(param_1 + 0x4e2ac) < 1;
      *(float *)(param_1 + 0x4e2a0) = fVar33;
      fVar37 = (float)(bVar23 && bVar24);
      fVar38 = (float)(!bVar23 || !bVar24);
      *(uint *)(param_1 + 0x4e2a8) = (uint)bVar24;
      *(float *)(param_1 + 0x4e2b0) = *(float *)(param_1 + 0x4e2b4) * fVar38 + fVar4 * fVar37;
      *(float *)(param_1 + 0x4e2b8) = *(float *)(param_1 + 0x4e2bc) * fVar38 + fVar43 * fVar37;
      fVar31 = 0.0;
      if (*(float *)(param_1 + 0x4e2a4) <= fVar33) {
        fVar31 = *(float *)(param_1 + 0x4e2c4) + 1.0;
        if (fVar35 <= fVar31) {
          fVar31 = fVar35;
        }
      }
      *(float *)(param_1 + 0x4e2c0) = fVar31;
      *(float *)(param_1 + 0x4e2c8) = fVar38 * *(float *)(param_1 + 0x4e2cc) + fVar37 * fVar47;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c),1.0);
      fVar43 = fmodf(fVar31 + 1.0,1.0);
      fVar31 = *(float *)(param_1 + 0x4e2d4);
      bVar23 = *(int *)(param_1 + 0x4e2dc) < 1;
      fVar41 = (float)(bVar23 && fVar43 < fVar31);
      fVar38 = (float)(!bVar23 || fVar31 <= fVar43);
      *(float *)(param_1 + 0x4e2d0) = fVar43;
      *(uint *)(param_1 + 0x4e2d8) = (uint)(fVar43 < fVar31);
      *(float *)(param_1 + 0x4e2e0) = *(float *)(param_1 + 0x4e2e4) * fVar38 + fVar4 * fVar41;
      *(float *)(param_1 + 0x4e2e8) =
           *(float *)(param_1 + 0x4e2ec) * fVar38 + fVar44 * fVar41 * 1000.0;
      fVar37 = 0.0;
      if (fVar31 <= fVar43) {
        fVar37 = *(float *)(param_1 + 0x4e2f4) + 1.0;
        if (fVar35 <= fVar37) {
          fVar37 = fVar35;
        }
      }
      *(float *)(param_1 + 0x4e2f0) = fVar37;
      *(float *)(param_1 + 0x4e2f8) = fVar38 * *(float *)(param_1 + 0x4e2fc) + fVar47 * fVar41;
      fVar43 = cosf(fVar43 * 6.2831855);
      fVar31 = *(float *)(param_1 + 0x4e2e0);
      fVar37 = 100.0;
      if (*(float *)(param_1 + 0x4e2e8) <= 100.0) {
        fVar37 = *(float *)(param_1 + 0x4e2e8);
      }
      fVar44 = fVar45;
      if (1.0 <= fVar31) {
        fVar44 = fVar31;
      }
      fVar31 = fmodf((*(float *)(param_1 + 0x4e2f0) * fVar31 + *(float *)(param_1 + 0x4e2f8)) -
                     (fVar44 * fVar35 + fVar37),80000.0);
      fVar31 = fmodf(fVar31 + 80000.0,80000.0);
      fVar31 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar31 * 4);
      fVar44 = cosf(fVar33 * 6.2831855);
      fVar33 = *(float *)(param_1 + 0x4e2b0);
      fVar37 = 100.0;
      if (*(float *)(param_1 + 0x4e2b8) <= 100.0) {
        fVar37 = *(float *)(param_1 + 0x4e2b8);
      }
      fVar47 = fVar45;
      if (1.0 <= fVar33) {
        fVar47 = fVar33;
      }
      fVar33 = fmodf((*(float *)(param_1 + 0x4e2c0) * fVar33 + *(float *)(param_1 + 0x4e2c8)) -
                     (fVar47 * fVar35 + fVar37),80000.0);
      fVar33 = fmodf(fVar33 + 80000.0,80000.0);
      fVar33 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar33 * 4);
      fVar47 = cosf(fVar46 * 6.2831855);
      fVar46 = *(float *)(param_1 + 0x4e280);
      fVar37 = 100.0;
      if (*(float *)(param_1 + 0x4e288) <= 100.0) {
        fVar37 = *(float *)(param_1 + 0x4e288);
      }
      fVar38 = fVar45;
      if (1.0 <= fVar46) {
        fVar38 = fVar46;
      }
      fVar46 = fmodf((*(float *)(param_1 + 0x4e290) * fVar46 + *(float *)(param_1 + 0x4e298)) -
                     (fVar38 * fVar35 + fVar37),80000.0);
      fVar46 = fmodf(fVar46 + 80000.0,80000.0);
      fVar46 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar46 * 4);
      fVar38 = cosf(fVar32 * 6.2831855);
      fVar32 = *(float *)(param_1 + 0x4e248);
      fVar37 = 100.0;
      if (*(float *)(param_1 + 0x4e258) <= 100.0) {
        fVar37 = *(float *)(param_1 + 0x4e258);
      }
      fVar41 = fVar45;
      if (1.0 <= fVar32) {
        fVar41 = fVar32;
      }
      fVar32 = fmodf((*(float *)(param_1 + 0x4e260) * fVar32 + *(float *)(param_1 + 0x4e268)) -
                     (fVar41 * fVar35 + fVar37),80000.0);
      fVar32 = fmodf(fVar32 + 80000.0,80000.0);
      fVar33 = fVar34 * (1.0 - fVar5) +
               ((1.0 - fVar38) * *(float *)(param_1 + 0x14 + (longlong)(int)fVar32 * 4) +
               (1.0 - fVar47) * fVar46 + (1.0 - fVar44) * fVar33 + (1.0 - fVar43) * fVar31) *
               fVar5 * 0.5;
      fVar34 = *(float *)(param_1 + 0x4e30c) * -0.94657 + fVar42 * 1.94632 + fVar33;
      *(float *)(param_1 + 0x4e304) = fVar34;
      fVar46 = *(float *)(param_1 + 0x4e314) * 0.83774;
      fVar31 = (fVar34 * 0.94657 + *(float *)(param_1 + 0x4e30c) + fVar46) -
               (*(float *)(param_1 + 0x4e318) * 0.06338 + fVar42 * 1.94632);
      *(float *)(param_1 + 0x4e310) = fVar31;
      fVar42 = *(float *)(param_1 + 0x4e330);
      fVar32 = (-fVar30 * fVar42 + *(float *)(param_1 + 0x4e328)) * (fVar36 + fVar36) + fVar42;
      fVar34 = fVar45;
      if (*(int *)(param_1 + 0xc) != 0) {
        fVar34 = (fVar42 + fVar32) * -fVar30 + *(float *)(param_1 + 0x4e328);
      }
      *(float *)(param_1 + 0x4e324) = fVar34;
      *(float *)(param_1 + 0x4e32c) = fVar32;
      fVar42 = *(float *)(param_1 + 0x4e338) * 0.02569;
      fVar37 = (*(float *)(param_1 + 0x4e33c) * 0.260502 + fVar33) - fVar42;
      *(float *)(param_1 + 0x4e334) = fVar37;
      fVar43 = *(float *)(param_1 + 0x4e344) * 1.8685;
      fVar42 = (fVar42 + fVar43 + *(float *)(param_1 + 0x4e33c)) -
               (*(float *)(param_1 + 0x4e348) * 0.870686 + fVar37 * 0.260502);
      *(float *)(param_1 + 0x4e340) = fVar42;
      uVar20 = *(uint *)(param_1 + 0x4e350);
      fVar34 = fVar33 * (1.0 - fVar6) +
               (((fVar42 * 0.870686 + *(float *)(param_1 + 0x4e348)) - fVar43) * fVar34 -
               ((fVar31 * 0.06338 + *(float *)(param_1 + 0x4e318)) - fVar46) * fVar32) * fVar6;
      fVar42 = *(float *)(param_1 + 0x4f36c) * -fVar1 + fVar34;
      *(float *)(param_1 + 0x4e354 + (ulonglong)(uVar20 & 0x3ff) * 4) = fVar42;
      auVar39 = ZEXT816(0);
      if (iVar19 == 1) {
        auVar39 = ZEXT416((uint)(*(float *)(param_1 + 0x4f35c) + fVar8 * fVar9));
      }
      auVar40 = roundss(ZEXT416((uint)fVar46),auVar39,9);
      fVar31 = auVar39._0_4_ - auVar40._0_4_;
      *(float *)(param_1 + 0x4f358) = fVar31;
      fVar31 = 1.0 - ABS(fVar31 + fVar31 + -1.0);
      fVar31 = ((fVar31 + fVar31 + -1.0) * fVar10 + 1.0) * fVar16;
      fVar46 = fVar31 + -1.0;
      uVar26 = (uint)fVar46;
      uVar27 = 0;
      if (0 < (int)uVar26) {
        uVar27 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar26 = 0xffffffff;
      }
      auVar39 = roundss(ZEXT416((uint)fVar46),ZEXT416((uint)fVar46),9);
      if (0x2000 < (int)uVar27) {
        uVar27 = 0x2001;
      }
      if (0x1fff < (int)uVar26) {
        uVar26 = 0;
      }
      *(float *)(param_1 + 0x4f368) =
           ((2.0 - fVar31) + auVar39._0_4_) *
           *(float *)(param_1 + 0x4e354 + (ulonglong)(uVar20 - uVar27 & 0x3ff) * 4) +
           ((-1.0 - auVar39._0_4_) + fVar31) *
           *(float *)(param_1 + 0x4e354 + (ulonglong)(~uVar26 + uVar20 & 0x3ff) * 4);
      *(float *)(param_1 + 0x4f370) = fVar42;
      fVar34 = fVar34 * (1.0 - fVar11) + *(float *)(param_1 + 0x4f374) * fVar11;
      fVar42 = tanhf(fVar17 * fVar34);
      fVar42 = fVar34 * (1.0 - fVar12) + fVar42 * fVar13 * fVar12;
      uVar20 = *(uint *)(param_1 + 0x4e350);
      *(float *)(param_1 + 0x4f388 + (ulonglong)(uVar20 & 0xffff) * 4) = fVar42;
      fVar42 = (fVar42 * (1.0 - fVar15) +
               *(float *)(param_1 + 0x4f388 +
                         (ulonglong)(uVar20 - (int)(fVar7 * fVar14) & 0xffff) * 4) * fVar15) *
               fVar18;
      *(float *)(param_1 + 0x8f394) = fVar42;
      fVar42 = (*(float *)(param_1 + 0x8f3a0) * 0.995 + fVar42) - *(float *)(param_1 + 0x8f398);
      *(float *)(param_1 + 0x8f39c) = fVar42;
      *(float *)(lVar22 + uVar29 * 4) = fVar42;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      iVar25 = *(int *)(param_1 + 0x4e214);
      *(int *)(param_1 + 0x4e218) = iVar25;
      *(undefined4 *)(param_1 + 0x4e230) = *(undefined4 *)(param_1 + 0x4e22c);
      *(undefined4 *)(param_1 + 0x4e238) = *(undefined4 *)(param_1 + 0x4e234);
      *(undefined4 *)(param_1 + 0x4e240) = *(undefined4 *)(param_1 + 0x4e23c);
      *(undefined4 *)(param_1 + 0x4e24c) = *(undefined4 *)(param_1 + 0x4e248);
      *(undefined4 *)(param_1 + 0x4e254) = *(undefined4 *)(param_1 + 0x4e250);
      *(undefined4 *)(param_1 + 0x4e25c) = *(undefined4 *)(param_1 + 0x4e258);
      *(undefined4 *)(param_1 + 0x4e264) = *(undefined4 *)(param_1 + 0x4e260);
      *(undefined4 *)(param_1 + 0x4e26c) = *(undefined4 *)(param_1 + 0x4e268);
      *(undefined4 *)(param_1 + 0x4e274) = *(undefined4 *)(param_1 + 0x4e270);
      *(undefined4 *)(param_1 + 0x4e27c) = *(undefined4 *)(param_1 + 0x4e278);
      *(undefined4 *)(param_1 + 0x4e284) = *(undefined4 *)(param_1 + 0x4e280);
      *(undefined4 *)(param_1 + 0x4e28c) = *(undefined4 *)(param_1 + 0x4e288);
      *(undefined4 *)(param_1 + 0x4e294) = *(undefined4 *)(param_1 + 0x4e290);
      *(undefined4 *)(param_1 + 0x4e29c) = *(undefined4 *)(param_1 + 0x4e298);
      *(undefined4 *)(param_1 + 0x4e2a4) = *(undefined4 *)(param_1 + 0x4e2a0);
      *(undefined4 *)(param_1 + 0x4e2ac) = *(undefined4 *)(param_1 + 0x4e2a8);
      *(undefined4 *)(param_1 + 0x4e2b4) = *(undefined4 *)(param_1 + 0x4e2b0);
      *(undefined4 *)(param_1 + 0x4e2bc) = *(undefined4 *)(param_1 + 0x4e2b8);
      *(undefined4 *)(param_1 + 0x4e2c4) = *(undefined4 *)(param_1 + 0x4e2c0);
      *(undefined4 *)(param_1 + 0x4e2cc) = *(undefined4 *)(param_1 + 0x4e2c8);
      *(undefined4 *)(param_1 + 0x4e2d4) = *(undefined4 *)(param_1 + 0x4e2d0);
      *(undefined4 *)(param_1 + 0x4e2dc) = *(undefined4 *)(param_1 + 0x4e2d8);
      *(undefined4 *)(param_1 + 0x4e2e4) = *(undefined4 *)(param_1 + 0x4e2e0);
      *(undefined4 *)(param_1 + 0x4e2ec) = *(undefined4 *)(param_1 + 0x4e2e8);
      *(undefined4 *)(param_1 + 0x4e2f4) = *(undefined4 *)(param_1 + 0x4e2f0);
      *(undefined4 *)(param_1 + 0x4e2fc) = *(undefined4 *)(param_1 + 0x4e2f8);
      *(undefined4 *)(param_1 + 0x4e30c) = *(undefined4 *)(param_1 + 0x4e308);
      fVar42 = *(float *)(param_1 + 0x4e304);
      *(float *)(param_1 + 0x4e308) = fVar42;
      *(undefined4 *)(param_1 + 0x4e318) = *(undefined4 *)(param_1 + 0x4e314);
      *(undefined4 *)(param_1 + 0x4e314) = *(undefined4 *)(param_1 + 0x4e310);
      *(undefined4 *)(param_1 + 0x4e328) = *(undefined4 *)(param_1 + 0x4e324);
      *(undefined4 *)(param_1 + 0x4e330) = *(undefined4 *)(param_1 + 0x4e32c);
      *(undefined4 *)(param_1 + 0x4e33c) = *(undefined4 *)(param_1 + 0x4e338);
      *(undefined4 *)(param_1 + 0x4e338) = *(undefined4 *)(param_1 + 0x4e334);
      *(undefined4 *)(param_1 + 0x4e348) = *(undefined4 *)(param_1 + 0x4e344);
      *(undefined4 *)(param_1 + 0x4e344) = *(undefined4 *)(param_1 + 0x4e340);
      *(int *)(param_1 + 0x4e350) = *(int *)(param_1 + 0x4e350) + 1;
      *(undefined4 *)(param_1 + 0x4f35c) = *(undefined4 *)(param_1 + 0x4f358);
      *(undefined4 *)(param_1 + 0x4f36c) = *(undefined4 *)(param_1 + 0x4f368);
      *(undefined4 *)(param_1 + 0x4f374) = *(undefined4 *)(param_1 + 0x4f370);
      *(undefined4 *)(param_1 + 0x8f398) = *(undefined4 *)(param_1 + 0x8f394);
      *(undefined4 *)(param_1 + 0x8f3a0) = *(undefined4 *)(param_1 + 0x8f39c);
      uVar29 = uVar29 + 1;
    } while (param_2 != uVar29);
  }
  return;
}



// FUNCTION 148f2295c FUN_148f2295c body=34 status=ok
// SIG undefined FUN_148f2295c(void)

void FUN_148f2295c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f229a4 FUN_148f229a4 body=34 status=ok
// SIG undefined FUN_148f229a4(void)

void FUN_148f229a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x6e3d0,0x10);
  *puVar1 = &PTR_FUN_14b9e2520;
  return;
}



// FUNCTION 148f229de FUN_148f229de body=29 status=ok
// SIG undefined FUN_148f229de(void)

undefined8 FUN_148f229de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f22a08 FUN_148f22a08 body=39 status=ok
// SIG undefined FUN_148f22a08(void)

void FUN_148f22a08(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp3144294967");
                    /* WARNING: Could not recover jumptable at 0x000148f22a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f22a3e FUN_148f22a3e body=38 status=ok
// SIG undefined FUN_148f22a3e(void)

void FUN_148f22a3e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f22a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 148f22a64 FUN_148f22a64 body=151 status=ok
// SIG undefined FUN_148f22a64(void)

void FUN_148f22a64(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_2;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  if (192000.0 <= fVar2) {
    fVar2 = 192000.0;
  }
  *(int *)(param_1 + 8) = param_2;
  fVar1 = 1.0;
  if (1.0 <= fVar2 * 7.8125e-05) {
    fVar1 = fVar2 * 7.8125e-05;
  }
  *(int *)(param_1 + 0xc) = (int)fVar1;
  memset((void *)(param_1 + 0x24),0,320000);
  *(float *)(param_1 + 0x4e22c) = 0.101 / fVar2;
  *(float *)(param_1 + 0x4e300) = 0.1 / fVar2;
  *(int *)(param_1 + 0x6e3cc) = (int)(fVar2 * 0.1);
  return;
}



// FUNCTION 148f22afe FUN_148f22afe body=81 status=ok
// SIG undefined FUN_148f22afe(void)

void FUN_148f22afe(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x4e224) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  memset((void *)(param_1 + 0x4e230),0,0xd0);
  memset((void *)(param_1 + 0x4e304),0,0x200c8);
  return;
}



// FUNCTION 148f22b50 FUN_148f22b50 body=34 status=ok
// SIG undefined FUN_148f22b50(void)

void FUN_148f22b50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x6e3d0,0x10);
  *puVar1 = &PTR_FUN_14b9e2520;
  return;
}



// FUNCTION 148f22b74 FUN_148f22b74 body=4286 status=ok
// SIG undefined FUN_148f22b74(void)

void FUN_148f22b74(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  if (0 < (int)param_2) {
    lVar2 = *param_3;
    lVar3 = *param_4;
    uVar10 = 0;
    do {
      fVar16 = *(float *)(lVar2 + uVar10 * 4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(int *)(param_1 + 0x18) =
           (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14)) % *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 0x4e224) = *(int *)(param_1 + 0x4e228) + 1;
      iVar7 = *(int *)(param_1 + 0x4e228) % 80000;
      *(float *)(param_1 + 0x24 + (longlong)iVar7 * 4) = fVar16;
      iVar5 = *(int *)(param_1 + 0x14);
      auVar21 = ZEXT816(0);
      if (iVar5 == 1) {
        auVar21 = ZEXT416((uint)(*(float *)(param_1 + 0x4e22c) + *(float *)(param_1 + 0x4e234)));
      }
      auVar20 = roundss(in_XMM1,auVar21,9);
      fVar11 = auVar21._0_4_ - auVar20._0_4_;
      *(float *)(param_1 + 0x4e230) = fVar11;
      fVar11 = fmodf(fVar11 + 0.75,1.0);
      fVar12 = fmodf(fVar11 + 1.0,1.0);
      fVar11 = *(float *)(param_1 + 0x4e23c);
      bVar4 = fVar12 < fVar11;
      iVar1 = *(int *)(param_1 + 0x4e244);
      uVar8 = 2;
      if (iVar1 >= 1 || !bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0x4e24c);
      }
      iVar9 = *(int *)(param_1 + 0x4e254) * 0x41c64e6d + 0x3039;
      *(float *)(param_1 + 0x4e238) = fVar12;
      *(uint *)(param_1 + 0x4e240) = (uint)bVar4;
      fVar13 = (float)(iVar1 < 1 && bVar4);
      *(undefined4 *)(param_1 + 0x4e248) = uVar8;
      *(int *)(param_1 + 0x4e250) = iVar9;
      fVar29 = ABS((float)iVar9 * 4.656613e-10);
      fVar17 = (float)(0 < iVar1 || fVar11 <= fVar12);
      fVar28 = fVar29 * 1000.0;
      *(float *)(param_1 + 0x4e258) = *(float *)(param_1 + 0x4e25c) * fVar17 + fVar28 * fVar13;
      fVar22 = 0.0;
      if ((fVar11 <= fVar12) && (fVar22 = *(float *)(param_1 + 0x4e264) + 1.0, 792079.2 <= fVar22))
      {
        fVar22 = 792079.2;
      }
      *(float *)(param_1 + 0x4e260) = fVar22;
      fVar22 = (float)iVar7 + 792079.2;
      *(float *)(param_1 + 0x4e268) = fVar17 * *(float *)(param_1 + 0x4e26c) + fVar13 * fVar22;
      fVar11 = fmodf(*(float *)(param_1 + 0x4e230) + 0.5,1.0);
      fVar13 = fmodf(fVar11 + 1.0,1.0);
      fVar11 = *(float *)(param_1 + 0x4e274);
      bVar4 = fVar13 < fVar11;
      iVar1 = *(int *)(param_1 + 0x4e27c);
      uVar8 = 2;
      if (iVar1 >= 1 || !bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0x4e284);
      }
      *(float *)(param_1 + 0x4e270) = fVar13;
      *(uint *)(param_1 + 0x4e278) = (uint)bVar4;
      fVar17 = (float)(iVar1 < 1 && bVar4);
      fVar18 = (float)(0 < iVar1 || fVar11 <= fVar13);
      *(undefined4 *)(param_1 + 0x4e280) = uVar8;
      *(float *)(param_1 + 0x4e288) = *(float *)(param_1 + 0x4e28c) * fVar18 + fVar28 * fVar17;
      fVar23 = 0.0;
      if ((fVar11 <= fVar13) && (fVar23 = *(float *)(param_1 + 0x4e294) + 1.0, 792079.2 <= fVar23))
      {
        fVar23 = 792079.2;
      }
      *(float *)(param_1 + 0x4e290) = fVar23;
      *(float *)(param_1 + 0x4e298) = fVar18 * *(float *)(param_1 + 0x4e29c) + fVar17 * fVar22;
      fVar11 = fmodf(*(float *)(param_1 + 0x4e230) + 0.25,1.0);
      fVar17 = fmodf(fVar11 + 1.0,1.0);
      fVar11 = *(float *)(param_1 + 0x4e2a4);
      bVar4 = fVar17 < fVar11;
      iVar1 = *(int *)(param_1 + 0x4e2ac);
      uVar8 = 2;
      if (iVar1 >= 1 || !bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0x4e2b4);
      }
      *(float *)(param_1 + 0x4e2a0) = fVar17;
      *(uint *)(param_1 + 0x4e2a8) = (uint)bVar4;
      fVar18 = (float)(iVar1 < 1 && bVar4);
      fVar23 = (float)(0 < iVar1 || fVar11 <= fVar17);
      *(undefined4 *)(param_1 + 0x4e2b0) = uVar8;
      *(float *)(param_1 + 0x4e2b8) = *(float *)(param_1 + 0x4e2bc) * fVar23 + fVar28 * fVar18;
      fVar24 = 0.0;
      if ((fVar11 <= fVar17) && (fVar24 = *(float *)(param_1 + 0x4e2c4) + 1.0, 792079.2 <= fVar24))
      {
        fVar24 = 792079.2;
      }
      *(float *)(param_1 + 0x4e2c0) = fVar24;
      *(float *)(param_1 + 0x4e2c8) = fVar23 * *(float *)(param_1 + 0x4e2cc) + fVar18 * fVar22;
      fVar11 = fmodf(*(float *)(param_1 + 0x4e230),1.0);
      fVar18 = fmodf(fVar11 + 1.0,1.0);
      fVar11 = *(float *)(param_1 + 0x4e2d4);
      bVar4 = fVar18 < fVar11;
      iVar1 = *(int *)(param_1 + 0x4e2dc);
      uVar8 = 2;
      if (iVar1 >= 1 || !bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0x4e2e4);
      }
      *(float *)(param_1 + 0x4e2d0) = fVar18;
      *(uint *)(param_1 + 0x4e2d8) = (uint)bVar4;
      *(undefined4 *)(param_1 + 0x4e2e0) = uVar8;
      fVar25 = (float)(iVar1 < 1 && bVar4);
      fVar24 = (float)(0 < iVar1 || fVar11 <= fVar18);
      *(float *)(param_1 + 0x4e2e8) = *(float *)(param_1 + 0x4e2ec) * fVar24 + fVar28 * fVar25;
      fVar23 = 0.0;
      fVar27 = 0.0;
      if ((fVar11 <= fVar18) && (fVar27 = *(float *)(param_1 + 0x4e2f4) + 1.0, 792079.2 <= fVar27))
      {
        fVar27 = 792079.2;
      }
      *(float *)(param_1 + 0x4e2f0) = fVar27;
      *(float *)(param_1 + 0x4e2f8) = fVar24 * *(float *)(param_1 + 0x4e2fc) + fVar22 * fVar25;
      if (iVar5 == 1) {
        fVar23 = *(float *)(param_1 + 0x4e300) + *(float *)(param_1 + 0x4e308);
      }
      auVar21 = roundss(ZEXT816(0),ZEXT416((uint)fVar23),9);
      fVar23 = fVar23 - auVar21._0_4_;
      *(float *)(param_1 + 0x4e304) = fVar23;
      fVar11 = fmodf(fVar23 + 0.75,1.0);
      fVar22 = fmodf(fVar11 + 1.0,1.0);
      fVar11 = *(float *)(param_1 + 0x4e310);
      bVar4 = fVar22 < fVar11;
      iVar5 = *(int *)(param_1 + 0x4e318);
      uVar8 = 2;
      if (iVar5 >= 1 || !bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0x4e320);
      }
      *(float *)(param_1 + 0x4e30c) = fVar22;
      *(uint *)(param_1 + 0x4e314) = (uint)bVar4;
      fVar23 = (float)(iVar5 < 1 && bVar4);
      fVar24 = (float)(0 < iVar5 || fVar11 <= fVar22);
      *(undefined4 *)(param_1 + 0x4e31c) = uVar8;
      *(float *)(param_1 + 0x4e324) = *(float *)(param_1 + 0x4e328) * fVar24 + fVar28 * fVar23;
      fVar25 = 0.0;
      if ((fVar11 <= fVar22) && (fVar25 = *(float *)(param_1 + 0x4e330) + 1.0, 800000.0 <= fVar25))
      {
        fVar25 = 800000.0;
      }
      fVar27 = (float)(iVar7 + 800000);
      *(float *)(param_1 + 0x4e32c) = fVar25;
      *(float *)(param_1 + 0x4e334) = fVar24 * *(float *)(param_1 + 0x4e338) + fVar23 * fVar27;
      fVar11 = fmodf(*(float *)(param_1 + 0x4e304) + 0.5,1.0);
      fVar23 = fmodf(fVar11 + 1.0,1.0);
      fVar11 = *(float *)(param_1 + 0x4e340);
      bVar4 = fVar23 < fVar11;
      iVar5 = *(int *)(param_1 + 0x4e348);
      uVar8 = 2;
      if (iVar5 >= 1 || !bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0x4e350);
      }
      *(float *)(param_1 + 0x4e33c) = fVar23;
      *(uint *)(param_1 + 0x4e344) = (uint)bVar4;
      fVar24 = (float)(iVar5 < 1 && bVar4);
      fVar25 = (float)(0 < iVar5 || fVar11 <= fVar23);
      *(undefined4 *)(param_1 + 0x4e34c) = uVar8;
      *(float *)(param_1 + 0x4e354) = *(float *)(param_1 + 0x4e358) * fVar25 + fVar28 * fVar24;
      fVar26 = 0.0;
      if ((fVar11 <= fVar23) && (fVar26 = *(float *)(param_1 + 0x4e360) + 1.0, 800000.0 <= fVar26))
      {
        fVar26 = 800000.0;
      }
      *(float *)(param_1 + 0x4e35c) = fVar26;
      *(float *)(param_1 + 0x4e364) = fVar25 * *(float *)(param_1 + 0x4e368) + fVar24 * fVar27;
      fVar11 = fmodf(*(float *)(param_1 + 0x4e304) + 0.25,1.0);
      fVar24 = fmodf(fVar11 + 1.0,1.0);
      fVar11 = *(float *)(param_1 + 0x4e370);
      bVar4 = fVar24 < fVar11;
      iVar5 = *(int *)(param_1 + 0x4e378);
      uVar8 = 2;
      if (iVar5 >= 1 || !bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0x4e380);
      }
      *(float *)(param_1 + 0x4e36c) = fVar24;
      fVar25 = (float)(iVar5 < 1 && bVar4);
      fVar26 = (float)(0 < iVar5 || fVar11 <= fVar24);
      *(uint *)(param_1 + 0x4e374) = (uint)bVar4;
      *(undefined4 *)(param_1 + 0x4e37c) = uVar8;
      *(float *)(param_1 + 0x4e384) = *(float *)(param_1 + 0x4e388) * fVar26 + fVar28 * fVar25;
      fVar28 = 0.0;
      if ((fVar11 <= fVar24) && (fVar28 = *(float *)(param_1 + 0x4e390) + 1.0, 800000.0 <= fVar28))
      {
        fVar28 = 800000.0;
      }
      *(float *)(param_1 + 0x4e38c) = fVar28;
      *(float *)(param_1 + 0x4e394) = fVar26 * *(float *)(param_1 + 0x4e398) + fVar25 * fVar27;
      fVar11 = fmodf(*(float *)(param_1 + 0x4e304),1.0);
      fVar28 = fmodf(fVar11 + 1.0,1.0);
      fVar11 = *(float *)(param_1 + 0x4e3a0);
      bVar4 = fVar28 < fVar11;
      iVar5 = *(int *)(param_1 + 0x4e3a8);
      uVar8 = 2;
      if (iVar5 >= 1 || !bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0x4e3b0);
      }
      *(float *)(param_1 + 0x4e39c) = fVar28;
      *(uint *)(param_1 + 0x4e3a4) = (uint)bVar4;
      *(undefined4 *)(param_1 + 0x4e3ac) = uVar8;
      fVar26 = (float)(iVar5 < 1 && bVar4);
      fVar25 = (float)(0 < iVar5 || fVar11 <= fVar28);
      *(float *)(param_1 + 0x4e3b4) =
           *(float *)(param_1 + 0x4e3b8) * fVar25 + fVar29 * fVar26 * 1000.0;
      fVar29 = 0.0;
      if ((fVar11 <= fVar28) && (fVar29 = *(float *)(param_1 + 0x4e3c0) + 1.0, 800000.0 <= fVar29))
      {
        fVar29 = 800000.0;
      }
      *(float *)(param_1 + 0x4e3bc) = fVar29;
      *(float *)(param_1 + 0x4e3c4) = fVar25 * *(float *)(param_1 + 0x4e3c8) + fVar27 * fVar26;
      if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18)) {
        uVar6 = *(uint *)(param_1 + 0x20);
        fVar16 = *(float *)(param_1 + 0x4e3cc + (ulonglong)(uVar6 - 1 & 0x7fff) * 4);
      }
      else {
        fVar28 = cosf(fVar28 * 6.2831855);
        iVar5 = *(int *)(param_1 + 0x4e3ac);
        fVar29 = (float)iVar5;
        fVar11 = fVar16;
        if (*(float *)(param_1 + 0x4e3b4) <= fVar16) {
          fVar11 = *(float *)(param_1 + 0x4e3b4);
        }
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        fVar11 = fmodf((fVar29 * *(float *)(param_1 + 0x4e3bc) + *(float *)(param_1 + 0x4e3c4)) -
                       ((float)iVar5 * 800000.0 + fVar11),80000.0);
        fVar11 = fmodf(fVar11 + 80000.0,80000.0);
        fVar11 = *(float *)(param_1 + 0x24 + (longlong)(int)fVar11 * 4);
        fVar24 = cosf(fVar24 * 6.2831855);
        iVar5 = *(int *)(param_1 + 0x4e37c);
        fVar29 = fVar16;
        if (*(float *)(param_1 + 0x4e384) <= fVar16) {
          fVar29 = *(float *)(param_1 + 0x4e384);
        }
        iVar7 = iVar5;
        if (iVar5 < 2) {
          iVar7 = 1;
        }
        fVar29 = fmodf(((float)iVar5 * *(float *)(param_1 + 0x4e38c) + *(float *)(param_1 + 0x4e394)
                       ) - ((float)iVar7 * 800000.0 + fVar29),80000.0);
        fVar29 = fmodf(fVar29 + 80000.0,80000.0);
        fVar29 = *(float *)(param_1 + 0x24 + (longlong)(int)fVar29 * 4);
        fVar25 = cosf(fVar23 * 6.2831855);
        iVar5 = *(int *)(param_1 + 0x4e34c);
        fVar27 = (float)iVar5;
        fVar23 = fVar16;
        if (*(float *)(param_1 + 0x4e354) <= fVar16) {
          fVar23 = *(float *)(param_1 + 0x4e354);
        }
        iVar7 = 1;
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        fVar23 = fmodf((fVar27 * *(float *)(param_1 + 0x4e35c) + *(float *)(param_1 + 0x4e364)) -
                       ((float)iVar5 * 800000.0 + fVar23),80000.0);
        fVar23 = fmodf(fVar23 + 80000.0,80000.0);
        fVar23 = *(float *)(param_1 + 0x24 + (longlong)(int)fVar23 * 4);
        fVar27 = cosf(fVar22 * 6.2831855);
        iVar5 = *(int *)(param_1 + 0x4e31c);
        fVar22 = fVar16;
        if (*(float *)(param_1 + 0x4e324) <= fVar16) {
          fVar22 = *(float *)(param_1 + 0x4e324);
        }
        iVar1 = iVar5;
        if (iVar5 < 2) {
          iVar1 = iVar7;
        }
        fVar22 = fmodf(((float)iVar5 * *(float *)(param_1 + 0x4e32c) + *(float *)(param_1 + 0x4e334)
                       ) - ((float)iVar1 * 800000.0 + fVar22),80000.0);
        fVar22 = fmodf(fVar22 + 80000.0,80000.0);
        fVar22 = *(float *)(param_1 + 0x24 + (longlong)(int)fVar22 * 4);
        fVar26 = cosf(fVar18 * 6.2831855);
        iVar5 = *(int *)(param_1 + 0x4e2e0);
        fVar18 = fVar16;
        if (*(float *)(param_1 + 0x4e2e8) <= fVar16) {
          fVar18 = *(float *)(param_1 + 0x4e2e8);
        }
        iVar1 = iVar5;
        if (iVar5 < 2) {
          iVar1 = iVar7;
        }
        fVar18 = fmodf(((float)iVar5 * *(float *)(param_1 + 0x4e2f0) + *(float *)(param_1 + 0x4e2f8)
                       ) - ((float)iVar1 * 792079.2 + fVar18),80000.0);
        fVar18 = fmodf(fVar18 + 80000.0,80000.0);
        fVar18 = *(float *)(param_1 + 0x24 + (longlong)(int)fVar18 * 4);
        fVar14 = cosf(fVar17 * 6.2831855);
        iVar5 = *(int *)(param_1 + 0x4e2b0);
        fVar17 = fVar16;
        if (*(float *)(param_1 + 0x4e2b8) <= fVar16) {
          fVar17 = *(float *)(param_1 + 0x4e2b8);
        }
        iVar1 = iVar5;
        if (iVar5 < 2) {
          iVar1 = iVar7;
        }
        fVar17 = fmodf(((float)iVar5 * *(float *)(param_1 + 0x4e2c0) + *(float *)(param_1 + 0x4e2c8)
                       ) - ((float)iVar1 * 792079.2 + fVar17),80000.0);
        fVar17 = fmodf(fVar17 + 80000.0,80000.0);
        fVar17 = *(float *)(param_1 + 0x24 + (longlong)(int)fVar17 * 4);
        fVar15 = cosf(fVar13 * 6.2831855);
        iVar5 = *(int *)(param_1 + 0x4e280);
        fVar19 = (float)iVar5;
        fVar13 = fVar16;
        if (*(float *)(param_1 + 0x4e288) <= fVar16) {
          fVar13 = *(float *)(param_1 + 0x4e288);
        }
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        fVar13 = fmodf((fVar19 * *(float *)(param_1 + 0x4e290) + *(float *)(param_1 + 0x4e298)) -
                       ((float)iVar5 * 792079.2 + fVar13),80000.0);
        fVar13 = fmodf(fVar13 + 80000.0,80000.0);
        fVar13 = *(float *)(param_1 + 0x24 + (longlong)(int)fVar13 * 4);
        fVar19 = cosf(fVar12 * 6.2831855);
        iVar5 = *(int *)(param_1 + 0x4e248);
        fVar12 = fVar16;
        if (*(float *)(param_1 + 0x4e258) <= fVar16) {
          fVar12 = *(float *)(param_1 + 0x4e258);
        }
        iVar7 = iVar5;
        if (iVar5 < 2) {
          iVar7 = 1;
        }
        fVar12 = fmodf(((float)iVar5 * *(float *)(param_1 + 0x4e260) + *(float *)(param_1 + 0x4e268)
                       ) - ((float)iVar7 * 792079.2 + fVar12),80000.0);
        fVar12 = fmodf(fVar12 + 80000.0,80000.0);
        auVar21 = roundss(ZEXT416(0),
                          ZEXT416((uint)((((1.0 - fVar19) *
                                           *(float *)(param_1 + 0x24 + (longlong)(int)fVar12 * 4) +
                                          (1.0 - fVar15) * fVar13 +
                                          (1.0 - fVar14) * fVar17 +
                                          (1.0 - fVar26) * fVar18 +
                                          (1.0 - fVar27) * fVar22 +
                                          (1.0 - fVar25) * fVar23 +
                                          (1.0 - fVar24) * fVar29 + (1.0 - fVar28) * fVar11) * 6.7 +
                                         fVar16 * -24.8) * 2048.0)),9);
        fVar16 = auVar21._0_4_ * 0.00048828125;
        uVar6 = *(uint *)(param_1 + 0x20);
      }
      *(float *)(param_1 + 0x4e3cc + (ulonglong)(uVar6 & 0x7fff) * 4) = fVar16;
      *(float *)(lVar3 + uVar10 * 4) =
           *(float *)(param_1 + 0x4e3cc +
                     (ulonglong)(uVar6 - *(int *)(param_1 + 0x6e3cc) & 0x7fff) * 4) * 0.06309573;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(undefined4 *)(param_1 + 0x4e228) = *(undefined4 *)(param_1 + 0x4e224);
      *(undefined4 *)(param_1 + 0x4e234) = *(undefined4 *)(param_1 + 0x4e230);
      *(undefined4 *)(param_1 + 0x4e23c) = *(undefined4 *)(param_1 + 0x4e238);
      *(undefined4 *)(param_1 + 0x4e244) = *(undefined4 *)(param_1 + 0x4e240);
      *(undefined4 *)(param_1 + 0x4e24c) = *(undefined4 *)(param_1 + 0x4e248);
      *(undefined4 *)(param_1 + 0x4e254) = *(undefined4 *)(param_1 + 0x4e250);
      *(undefined4 *)(param_1 + 0x4e25c) = *(undefined4 *)(param_1 + 0x4e258);
      in_XMM1 = ZEXT416(*(uint *)(param_1 + 0x4e268));
      *(undefined4 *)(param_1 + 0x4e264) = *(undefined4 *)(param_1 + 0x4e260);
      *(uint *)(param_1 + 0x4e26c) = *(uint *)(param_1 + 0x4e268);
      *(undefined4 *)(param_1 + 0x4e274) = *(undefined4 *)(param_1 + 0x4e270);
      *(undefined4 *)(param_1 + 0x4e27c) = *(undefined4 *)(param_1 + 0x4e278);
      *(undefined4 *)(param_1 + 0x4e284) = *(undefined4 *)(param_1 + 0x4e280);
      *(undefined4 *)(param_1 + 0x4e28c) = *(undefined4 *)(param_1 + 0x4e288);
      *(undefined4 *)(param_1 + 0x4e294) = *(undefined4 *)(param_1 + 0x4e290);
      *(undefined4 *)(param_1 + 0x4e29c) = *(undefined4 *)(param_1 + 0x4e298);
      *(undefined4 *)(param_1 + 0x4e2a4) = *(undefined4 *)(param_1 + 0x4e2a0);
      *(undefined4 *)(param_1 + 0x4e2ac) = *(undefined4 *)(param_1 + 0x4e2a8);
      *(undefined4 *)(param_1 + 0x4e2b4) = *(undefined4 *)(param_1 + 0x4e2b0);
      *(undefined4 *)(param_1 + 0x4e2bc) = *(undefined4 *)(param_1 + 0x4e2b8);
      *(undefined4 *)(param_1 + 0x4e2c4) = *(undefined4 *)(param_1 + 0x4e2c0);
      *(undefined4 *)(param_1 + 0x4e2cc) = *(undefined4 *)(param_1 + 0x4e2c8);
      *(undefined4 *)(param_1 + 0x4e2d4) = *(undefined4 *)(param_1 + 0x4e2d0);
      *(undefined4 *)(param_1 + 0x4e2dc) = *(undefined4 *)(param_1 + 0x4e2d8);
      *(undefined4 *)(param_1 + 0x4e2e4) = *(undefined4 *)(param_1 + 0x4e2e0);
      *(undefined4 *)(param_1 + 0x4e2ec) = *(undefined4 *)(param_1 + 0x4e2e8);
      *(undefined4 *)(param_1 + 0x4e2f4) = *(undefined4 *)(param_1 + 0x4e2f0);
      *(undefined4 *)(param_1 + 0x4e2fc) = *(undefined4 *)(param_1 + 0x4e2f8);
      *(undefined4 *)(param_1 + 0x4e308) = *(undefined4 *)(param_1 + 0x4e304);
      *(undefined4 *)(param_1 + 0x4e310) = *(undefined4 *)(param_1 + 0x4e30c);
      *(undefined4 *)(param_1 + 0x4e318) = *(undefined4 *)(param_1 + 0x4e314);
      *(undefined4 *)(param_1 + 0x4e320) = *(undefined4 *)(param_1 + 0x4e31c);
      *(undefined4 *)(param_1 + 0x4e328) = *(undefined4 *)(param_1 + 0x4e324);
      *(undefined4 *)(param_1 + 0x4e330) = *(undefined4 *)(param_1 + 0x4e32c);
      *(undefined4 *)(param_1 + 0x4e338) = *(undefined4 *)(param_1 + 0x4e334);
      *(undefined4 *)(param_1 + 0x4e340) = *(undefined4 *)(param_1 + 0x4e33c);
      *(undefined4 *)(param_1 + 0x4e348) = *(undefined4 *)(param_1 + 0x4e344);
      *(undefined4 *)(param_1 + 0x4e350) = *(undefined4 *)(param_1 + 0x4e34c);
      *(undefined4 *)(param_1 + 0x4e358) = *(undefined4 *)(param_1 + 0x4e354);
      *(undefined4 *)(param_1 + 0x4e360) = *(undefined4 *)(param_1 + 0x4e35c);
      *(undefined4 *)(param_1 + 0x4e368) = *(undefined4 *)(param_1 + 0x4e364);
      *(undefined4 *)(param_1 + 0x4e370) = *(undefined4 *)(param_1 + 0x4e36c);
      *(undefined4 *)(param_1 + 0x4e378) = *(undefined4 *)(param_1 + 0x4e374);
      *(undefined4 *)(param_1 + 0x4e380) = *(undefined4 *)(param_1 + 0x4e37c);
      *(undefined4 *)(param_1 + 0x4e388) = *(undefined4 *)(param_1 + 0x4e384);
      *(undefined4 *)(param_1 + 0x4e390) = *(undefined4 *)(param_1 + 0x4e38c);
      *(undefined4 *)(param_1 + 0x4e398) = *(undefined4 *)(param_1 + 0x4e394);
      *(undefined4 *)(param_1 + 0x4e3a0) = *(undefined4 *)(param_1 + 0x4e39c);
      *(undefined4 *)(param_1 + 0x4e3a8) = *(undefined4 *)(param_1 + 0x4e3a4);
      *(undefined4 *)(param_1 + 0x4e3b0) = *(undefined4 *)(param_1 + 0x4e3ac);
      *(undefined4 *)(param_1 + 0x4e3b8) = *(undefined4 *)(param_1 + 0x4e3b4);
      *(undefined4 *)(param_1 + 0x4e3c0) = *(undefined4 *)(param_1 + 0x4e3bc);
      *(undefined4 *)(param_1 + 0x4e3c8) = *(undefined4 *)(param_1 + 0x4e3c4);
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
  }
  return;
}



// FUNCTION 148f23c4e FUN_148f23c4e body=34 status=ok
// SIG undefined FUN_148f23c4e(void)

void FUN_148f23c4e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f23ca4 FUN_148f23ca4 body=34 status=ok
// SIG undefined FUN_148f23ca4(void)

void FUN_148f23ca4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2390;
  return;
}



// FUNCTION 148f23cfa FUN_148f23cfa body=34 status=ok
// SIG undefined FUN_148f23cfa(void)

void FUN_148f23cfa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f23d50 FUN_148f23d50 body=34 status=ok
// SIG undefined FUN_148f23d50(void)

void FUN_148f23d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2390;
  return;
}



// FUNCTION 148f23da6 FUN_148f23da6 body=34 status=ok
// SIG undefined FUN_148f23da6(void)

void FUN_148f23da6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f23dfc FUN_148f23dfc body=34 status=ok
// SIG undefined FUN_148f23dfc(void)

void FUN_148f23dfc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f23e76 FUN_148f23e76 body=289 status=ok
// SIG undefined FUN_148f23e76(void)

void FUN_148f23e76(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp3570821926");
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc0",param_1 + 0x50,0x3f800000,0x3f800000,0x41400000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc1",param_1 + 0x3c,0xc1400000,0xc2400000,0,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc15",param_1 + 0x5c,0,0xc1400000,0x41400000,0x3e800000)
  ;
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc2",param_1 + 0x34,0x3ba3d70a,0x3a83126f,0x3f800000,0x3a83126f);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc3",param_1 + 0x44,0x3d4ccccd,0x3a83126f,0x3f800000,0x3a83126f);
                    /* WARNING: Could not recover jumptable at 0x000148f23f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f23fa6 FUN_148f23fa6 body=34 status=ok
// SIG undefined FUN_148f23fa6(void)

void FUN_148f23fa6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = &PTR_FUN_14b9e26f0;
  return;
}



// FUNCTION 148f23fca FUN_148f23fca body=931 status=ok
// SIG undefined FUN_148f23fca(void)

void FUN_148f23fca(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar3 = *param_3;
  lVar4 = *param_4;
  fVar1 = *(float *)(param_1 + 0x34);
  fVar13 = 0.0;
  fVar14 = 0.0;
  if (1.1920929e-07 <= ABS(fVar1 * 0.5)) {
    fVar14 = expf(-*(float *)(param_1 + 0x38) / (fVar1 * 0.5));
  }
  fVar2 = *(float *)(param_1 + 0x3c);
  if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0x44))) {
    fVar13 = expf(-*(float *)(param_1 + 0x38) / *(float *)(param_1 + 0x44));
  }
  fVar15 = 0.0;
  if (1.1920929e-07 <= ABS(fVar1)) {
    fVar15 = expf(-*(float *)(param_1 + 0x38) / fVar1);
  }
  fVar1 = *(float *)(param_1 + 0x40);
  fVar16 = *(float *)(param_1 + 0x50);
  fVar7 = powf(10.0,*(float *)(param_1 + 0x5c) * 0.05);
  if (0 < (int)param_2) {
    if (fVar16 <= 1.1920929e-07) {
      fVar16 = 1.1920929e-07;
    }
    fVar10 = *(float *)(param_1 + 0x20);
    fVar11 = *(float *)(param_1 + 0x24);
    fVar8 = *(float *)(param_1 + 0x30);
    fVar17 = *(float *)(param_1 + 0x2c);
    fVar9 = *(float *)(param_1 + 0x4c);
    uVar5 = 0;
    do {
      fVar12 = *(float *)(lVar3 + uVar5 * 4) -
               (*(float *)(param_1 + 0x14) * fVar11 + fVar10 * *(float *)(param_1 + 0x10)) *
               *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x1c) = fVar12;
      fVar10 = ((*(float *)(param_1 + 0x14) * fVar8 + *(float *)(param_1 + 0x10) * fVar17) -
               ((fVar12 - (fVar10 + fVar10)) + fVar11) * *(float *)(param_1 + 0xc)) *
               -*(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x28) = fVar10;
      fVar11 = ABS(((fVar10 - (fVar17 + fVar17)) + fVar8) * *(float *)(param_1 + 0x40));
      uVar6 = -(uint)(fVar9 < fVar11);
      fVar10 = (float)(~uVar6 & (uint)fVar13 | uVar6 & (uint)fVar15);
      fVar10 = (1.0 - fVar10) * fVar11 + fVar10 * fVar9;
      *(float *)(param_1 + 0x48) = fVar10;
      if (fVar10 <= 1.1754944e-38) {
        fVar10 = 1.1754944e-38;
      }
      fVar10 = log10f(fVar10);
      fVar11 = fVar10 * 20.0 + -fVar2;
      fVar10 = 0.0;
      if (0.0 <= fVar11) {
        fVar10 = fVar11;
      }
      fVar10 = *(float *)(param_1 + 0x58) * fVar14 + fVar10 * (1.0 / fVar16 + -1.0) * (1.0 - fVar14)
      ;
      *(float *)(param_1 + 0x54) = fVar10;
      fVar10 = powf(10.0,fVar10 * 0.05);
      *(float *)(lVar4 + uVar5 * 4) =
           ((*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30)) - (fVar17 + fVar17)) *
           fVar10 * fVar1 * fVar7;
      fVar10 = *(float *)(param_1 + 0x1c);
      fVar11 = *(float *)(param_1 + 0x20);
      *(float *)(param_1 + 0x24) = fVar11;
      *(float *)(param_1 + 0x20) = fVar10;
      fVar8 = *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x30) = fVar8;
      fVar17 = *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x2c) = fVar17;
      fVar9 = *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x4c) = fVar9;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return;
}



// FUNCTION 148f243a6 FUN_148f243a6 body=136 status=ok
// SIG undefined FUN_148f243a6(void)

void FUN_148f243a6(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  
  pfVar3 = (float *)&DAT_14cbf0340;
  lVar2 = 0;
  do {
    iVar1 = (int)lVar2;
    lVar2 = lVar2 + 1;
    fVar4 = tanhf((float)iVar1 * 0.001953125 + -2.0);
    *pfVar3 = fVar4;
    pfVar3 = pfVar3 + 1;
  } while (lVar2 != 0x800);
                    /* WARNING: Could not recover jumptable at 0x000148f2442b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  return;
}



// FUNCTION 148f2442e FUN_148f2442e body=34 status=ok
// SIG undefined FUN_148f2442e(void)

void FUN_148f2442e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20e0,0x10);
  *puVar1 = &PTR_FUN_14b9e27a0;
  return;
}



// FUNCTION 148f2446e FUN_148f2446e body=34 status=ok
// SIG undefined FUN_148f2446e(void)

void FUN_148f2446e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f244c4 FUN_148f244c4 body=34 status=ok
// SIG undefined FUN_148f244c4(void)

void FUN_148f244c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f2451a FUN_148f2451a body=34 status=ok
// SIG undefined FUN_148f2451a(void)

void FUN_148f2451a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 148f24570 FUN_148f24570 body=34 status=ok
// SIG undefined FUN_148f24570(void)

void FUN_148f24570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = &PTR_FUN_14b9e26f0;
  return;
}



// FUNCTION 148f245c6 FUN_148f245c6 body=34 status=ok
// SIG undefined FUN_148f245c6(void)

void FUN_148f245c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20e0,0x10);
  *puVar1 = &PTR_FUN_14b9e27a0;
  return;
}



// FUNCTION 148f2461c FUN_148f2461c body=34 status=ok
// SIG undefined FUN_148f2461c(void)

void FUN_148f2461c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = &PTR_FUN_14b9e26f0;
  return;
}



// FUNCTION 148f24672 FUN_148f24672 body=34 status=ok
// SIG undefined FUN_148f24672(void)

void FUN_148f24672(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = &PTR_FUN_14b9e2970;
  return;
}



// FUNCTION 148f246ac FUN_148f246ac body=29 status=ok
// SIG undefined FUN_148f246ac(void)

undefined8 FUN_148f246ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f246d6 FUN_148f246d6 body=289 status=ok
// SIG undefined FUN_148f246d6(void)

void FUN_148f246d6(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp105663315");
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc0",param_1 + 0x50,0x3f800000,0x3f800000,0x41400000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc1",param_1 + 0x3c,0xc1400000,0xc2400000,0,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc15",param_1 + 0x5c,0,0xc1400000,0x41400000,0x3e800000)
  ;
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc2",param_1 + 0x34,0x3ba3d70a,0x3a83126f,0x3f800000,0x3a83126f);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc3",param_1 + 0x44,0x3d4ccccd,0x3a83126f,0x3f800000,0x3a83126f);
                    /* WARNING: Could not recover jumptable at 0x000148f247f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f24806 FUN_148f24806 body=38 status=ok
// SIG undefined FUN_148f24806(void)

void FUN_148f24806(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f24828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 148f2482c FUN_148f2482c body=199 status=ok
// SIG undefined FUN_148f2482c(void)

void FUN_148f2482c(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)param_2;
  *(int *)(param_1 + 8) = param_2;
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  if (192000.0 <= fVar3) {
    fVar3 = 192000.0;
  }
  fVar1 = tanf(314.15927 / fVar3);
  fVar2 = 1.0 / (fVar1 * fVar1);
  *(float *)(param_1 + 0xc) = fVar2;
  fVar2 = 1.0 - fVar2;
  *(float *)(param_1 + 0x10) = fVar2 + fVar2;
  *(float *)(param_1 + 0x14) = (1.0 / fVar1 + -1.4142135) / fVar1 + 1.0;
  fVar2 = (1.0 / fVar1 + 1.4142135) / fVar1 + 1.0;
  *(float *)(param_1 + 0x18) = 1.0 / fVar2;
  *(float *)(param_1 + 0x38) = 1.0 / fVar3;
  *(float *)(param_1 + 0x40) = 1.0 / (fVar2 * fVar1 * fVar1);
  return;
}



// FUNCTION 148f2492e FUN_148f2492e body=34 status=ok
// SIG undefined FUN_148f2492e(void)

void FUN_148f2492e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = &PTR_FUN_14b9e2970;
  return;
}



// FUNCTION 148f24952 FUN_148f24952 body=927 status=ok
// SIG undefined FUN_148f24952(void)

void FUN_148f24952(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar3 = *param_3;
  lVar4 = *param_4;
  fVar1 = *(float *)(param_1 + 0x34);
  fVar13 = 0.0;
  fVar15 = 0.0;
  if (1.1920929e-07 <= ABS(fVar1 * 0.5)) {
    fVar15 = expf(-*(float *)(param_1 + 0x38) / (fVar1 * 0.5));
  }
  fVar2 = *(float *)(param_1 + 0x3c);
  if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0x44))) {
    fVar13 = expf(-*(float *)(param_1 + 0x38) / *(float *)(param_1 + 0x44));
  }
  fVar16 = 0.0;
  if (1.1920929e-07 <= ABS(fVar1)) {
    fVar16 = expf(-*(float *)(param_1 + 0x38) / fVar1);
  }
  fVar1 = *(float *)(param_1 + 0x40);
  fVar14 = *(float *)(param_1 + 0x50);
  fVar7 = powf(10.0,*(float *)(param_1 + 0x5c) * 0.05);
  if (0 < (int)param_2) {
    if (fVar14 <= 1.1920929e-07) {
      fVar14 = 1.1920929e-07;
    }
    fVar11 = *(float *)(param_1 + 0x20);
    fVar12 = *(float *)(param_1 + 0x24);
    fVar8 = *(float *)(param_1 + 0x30);
    fVar17 = *(float *)(param_1 + 0x2c);
    fVar9 = *(float *)(param_1 + 0x4c);
    uVar5 = 0;
    do {
      fVar10 = *(float *)(lVar3 + uVar5 * 4) -
               (*(float *)(param_1 + 0x14) * fVar12 + fVar11 * *(float *)(param_1 + 0x10)) *
               *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x1c) = fVar10;
      fVar11 = (((fVar10 - (fVar11 + fVar11)) + fVar12) * *(float *)(param_1 + 0xc) -
               (*(float *)(param_1 + 0x14) * fVar8 + *(float *)(param_1 + 0x10) * fVar17)) *
               *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x28) = fVar11;
      fVar12 = ABS(((fVar11 - (fVar17 + fVar17)) + fVar8) * *(float *)(param_1 + 0x40));
      uVar6 = -(uint)(fVar9 < fVar12);
      fVar11 = (float)(~uVar6 & (uint)fVar13 | uVar6 & (uint)fVar16);
      fVar11 = (1.0 - fVar11) * fVar12 + fVar11 * fVar9;
      *(float *)(param_1 + 0x48) = fVar11;
      if (fVar11 <= 1.1754944e-38) {
        fVar11 = 1.1754944e-38;
      }
      fVar11 = log10f(fVar11);
      fVar12 = fVar11 * 20.0 + -fVar2;
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar12;
      }
      fVar11 = *(float *)(param_1 + 0x58) * fVar15 + fVar11 * (1.0 / fVar14 + -1.0) * (1.0 - fVar15)
      ;
      *(float *)(param_1 + 0x54) = fVar11;
      fVar11 = powf(10.0,fVar11 * 0.05);
      *(float *)(lVar4 + uVar5 * 4) =
           ((*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30)) - (fVar17 + fVar17)) *
           fVar11 * fVar1 * fVar7;
      fVar11 = *(float *)(param_1 + 0x1c);
      fVar12 = *(float *)(param_1 + 0x20);
      *(float *)(param_1 + 0x24) = fVar12;
      *(float *)(param_1 + 0x20) = fVar11;
      fVar8 = *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x30) = fVar8;
      fVar17 = *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x2c) = fVar17;
      fVar9 = *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x4c) = fVar9;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return;
}



// FUNCTION 148f24d0e FUN_148f24d0e body=34 status=ok
// SIG undefined FUN_148f24d0e(void)

void FUN_148f24d0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar1 = &PTR_FUN_14b9e2a20;
  return;
}



// FUNCTION 148f24d3e FUN_148f24d3e body=29 status=ok
// SIG undefined FUN_148f24d3e(void)

undefined8 FUN_148f24d3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f24d68 FUN_148f24d68 body=39 status=ok
// SIG undefined FUN_148f24d68(void)

void FUN_148f24d68(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp1580231104");
                    /* WARNING: Could not recover jumptable at 0x000148f24d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148f24d9e FUN_148f24d9e body=38 status=ok
// SIG undefined FUN_148f24d9e(void)

void FUN_148f24d9e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f24dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 148f24dc4 FUN_148f24dc4 body=169 status=ok
// SIG undefined FUN_148f24dc4(void)

void FUN_148f24dc4(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_2;
  *(int *)(param_1 + 8) = param_2;
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  if (192000.0 <= fVar1) {
    fVar1 = 192000.0;
  }
  fVar1 = tanf(314.15927 / fVar1);
  fVar2 = 1.0 - 1.0 / (fVar1 * fVar1);
  *(float *)(param_1 + 0xc) = fVar2 + fVar2;
  *(float *)(param_1 + 0x10) = (1.0 / fVar1 + -1.4142135) / fVar1 + 1.0;
  fVar2 = (1.0 / fVar1 + 1.4142135) / fVar1 + 1.0;
  *(float *)(param_1 + 0x14) = 1.0 / fVar2;
  *(float *)(param_1 + 0x24) = 1.0 / (fVar2 * fVar1 * fVar1);
  return;
}



// FUNCTION 148f24e82 FUN_148f24e82 body=34 status=ok
// SIG undefined FUN_148f24e82(void)

void FUN_148f24e82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar1 = &PTR_FUN_14b9e2a20;
  return;
}



// FUNCTION 148f24ea6 FUN_148f24ea6 body=220 status=ok
// SIG undefined FUN_148f24ea6(void)

void FUN_148f24ea6(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_2) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    lVar3 = *param_4;
    lVar4 = param_4[1];
    fVar7 = *(float *)(param_1 + 0x1c);
    fVar8 = *(float *)(param_1 + 0x20);
    uVar5 = 0;
    do {
      fVar6 = *(float *)(lVar2 + uVar5 * 4);
      fVar9 = *(float *)(lVar1 + uVar5 * 4) -
              (*(float *)(param_1 + 0x10) * fVar8 + *(float *)(param_1 + 0xc) * fVar7) *
              *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x18) = fVar9;
      *(float *)(lVar3 + uVar5 * 4) =
           ((fVar9 + fVar8) - (fVar7 + fVar7)) * *(float *)(param_1 + 0x24);
      fVar7 = *(float *)(param_1 + 0x2c);
      fVar6 = fVar6 - (*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x30) +
                      *(float *)(param_1 + 0xc) * fVar7) * *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x28) = fVar6;
      *(float *)(lVar4 + uVar5 * 4) =
           ((fVar6 + *(float *)(param_1 + 0x30)) - (fVar7 + fVar7)) * *(float *)(param_1 + 0x24);
      fVar7 = *(float *)(param_1 + 0x18);
      fVar8 = *(float *)(param_1 + 0x1c);
      *(float *)(param_1 + 0x20) = fVar8;
      *(float *)(param_1 + 0x1c) = fVar7;
      *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x28);
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return;
}



// FUNCTION 148f24f9e FUN_148f24f9e body=34 status=ok
// SIG undefined FUN_148f24f9e(void)

void FUN_148f24f9e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar1 = &PTR_FUN_14b9e2a20;
  return;
}



// FUNCTION 148f24fc8 FUN_148f24fc8 body=9 status=ok
// SIG undefined FUN_148f24fc8(void)

void FUN_148f24fc8(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 148f24fd8 FUN_148f24fd8 body=93 status=ok
// SIG undefined FUN_148f24fd8(void)

void FUN_148f24fd8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    plVar1 = (longlong *)*plVar3;
    if (*(char *)(*plVar3 + 0x19) == '\0') {
      do {
        plVar2 = plVar1;
        plVar1 = (longlong *)plVar2[2];
      } while (*(char *)(plVar2[2] + 0x19) == '\0');
    }
    else {
      plVar2 = (longlong *)plVar3[1];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        do {
          plVar1 = plVar2;
          plVar2 = plVar1;
          if (plVar3 != (longlong *)*plVar1) break;
          *param_1 = (longlong)plVar1;
          plVar2 = (longlong *)plVar1[1];
          plVar3 = plVar1;
        } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
        if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
          return;
        }
      }
    }
  }
  else {
    plVar2 = (longlong *)plVar3[2];
  }
  *param_1 = (longlong)plVar2;
  return;
}



// FUNCTION 148f25036 FUN_148f25036 body=45 status=ok
// SIG undefined FUN_148f25036(void)

longlong FUN_148f25036(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = __std_type_info_compare(param_2 + 8,0x14c7647c8);
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x10;
  }
  return lVar2;
}



// FUNCTION 148f25064 FUN_148f25064 body=36 status=ok
// SIG undefined FUN_148f25064(void)

undefined8 FUN_148f25064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f250a4 FUN_148f250a4 body=93 status=ok
// SIG undefined FUN_148f250a4(void)

void FUN_148f250a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e2b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f25102 FUN_148f25102 body=123 status=ok
// SIG undefined FUN_148f25102(void)

void FUN_148f25102(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e2b50;
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



// FUNCTION 148f2517e FUN_148f2517e body=21 status=ok
// SIG undefined FUN_148f2517e(void)

undefined8 FUN_148f2517e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f25194 FUN_148f25194 body=175 status=ok
// SIG undefined FUN_148f25194(void)

void FUN_148f25194(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
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
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25244 FUN_148f25244 body=114 status=ok
// SIG undefined FUN_148f25244(void)

void FUN_148f25244(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f29c14(param_1 + 0x40,&local_40,*(undefined4 *)(param_1 + 0x28));
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f252b8 FUN_148f252b8 body=347 status=ok
// SIG undefined FUN_148f252b8(void)

void FUN_148f252b8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_38 = local_28;
  local_40 = local_29;
  FUN_148f29d1a(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25414 FUN_148f25414 body=219 status=ok
// SIG undefined FUN_148f25414(void)

void FUN_148f25414(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = DAT_14cbf2348;
  uStack_54 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = puVar1[2];
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  local_30 = 0;
  uStack_28 = 0;
  FUN_148f29f04(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f254f4 FUN_148f254f4 body=415 status=ok
// SIG undefined FUN_148f254f4(void)

void FUN_148f254f4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = DAT_14cbf2348;
  uStack_34 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_58 = CONCAT44(uStack_34,local_38);
  uVar1 = FUN_148f25694(param_1,local_24,&local_68,local_4d);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25694 FUN_148f25694 body=169 status=ok
// SIG undefined FUN_148f25694(void)

void FUN_148f25694(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = param_3[2];
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_58 = *(undefined8 *)(param_1 + 0x40);
  local_50 = *(longlong *)(param_1 + 0x48);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = *(undefined4 *)(param_1 + 0x58);
  local_48 = *(undefined8 *)(param_1 + 0x50);
  local_68 = &local_38;
  local_60 = param_4;
  FUN_148f2a04c(&local_58,uVar1,uVar2,param_2);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2573e FUN_148f2573e body=132 status=ok
// SIG undefined FUN_148f2573e(void)

void FUN_148f2573e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147526316(param_1 + 0x40);
  if (lVar3 == 0) {
    uVar6 = 0;
    FUN_1415b7ec4(
                 L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
                 );
    puVar4 = &DAT_14cbf2348;
    uVar2 = 0xffffffff;
    uVar5 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(lVar3 + 0x60);
    uVar7 = *(undefined4 *)(lVar3 + 100);
    uVar5 = *(undefined4 *)(lVar3 + 0x68);
    uVar6 = *(undefined4 *)(lVar3 + 0x6c);
    puVar4 = (undefined4 *)(lVar3 + 0x70);
    uVar2 = *(undefined4 *)(lVar3 + 0x74);
  }
  uVar1 = *puVar4;
  *param_3 = uVar8;
  param_3[1] = uVar7;
  param_3[2] = uVar5;
  param_3[3] = uVar6;
  param_3[4] = uVar1;
  param_3[5] = uVar2;
  return;
}



// FUNCTION 148f257c2 FUN_148f257c2 body=143 status=ok
// SIG undefined FUN_148f257c2(void)

void FUN_148f257c2(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25852 FUN_148f25852 body=270 status=ok
// SIG undefined FUN_148f25852(void)

void FUN_148f25852(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25966 FUN_148f25966 body=37 status=ok
// SIG undefined FUN_148f25966(void)

void FUN_148f25966(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f2598c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2598c FUN_148f2598c body=102 status=ok
// SIG undefined FUN_148f2598c(void)

byte FUN_148f2598c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  
  iVar1 = DAT_14cbf2348;
  lVar2 = FUN_147526316(param_1 + 0x40);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
                  ,2,0);
    piVar3 = &DAT_14cbf2348;
    bVar5 = true;
    bVar4 = true;
  }
  else {
    piVar3 = (int *)(lVar2 + 0x70);
    bVar4 = ((*(int *)(lVar2 + 100) == 0 && *(int *)(lVar2 + 0x60) == 0) &&
            *(int *)(lVar2 + 0x68) == 0) && *(int *)(lVar2 + 0x6c) == 0;
    bVar5 = *(int *)(lVar2 + 0x74) == -1;
  }
  return *piVar3 == iVar1 & bVar4 & bVar5;
}



// FUNCTION 148f25a08 FUN_148f25a08 body=89 status=ok
// SIG undefined FUN_148f25a08(void)

void FUN_148f25a08(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x38);
  if (cVar1 != '\0') {
    FUN_14479d2ce(param_1 + 0x38);
  }
  plVar2 = (longlong *)FUN_147526316(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f25a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x68))(plVar2);
    return;
  }
  FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
                ,2,0);
  return;
}



// FUNCTION 148f25a62 FUN_148f25a62 body=160 status=ok
// SIG undefined FUN_148f25a62(void)

void FUN_148f25a62(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25b04 FUN_148f25b04 body=190 status=ok
// SIG undefined FUN_148f25b04(void)

void FUN_148f25b04(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cbf2348;
  uStack_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = CONCAT44(uStack_24,local_28);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  FUN_148f25bc4(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25bc4 FUN_148f25bc4 body=136 status=ok
// SIG undefined FUN_148f25bc4(void)

void FUN_148f25bc4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_2[2];
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_58 = *(undefined8 *)(param_1 + 0x40);
  local_50 = *(longlong *)(param_1 + 0x48);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = *(undefined4 *)(param_1 + 0x58);
  local_48 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2a358(&local_58,uVar1,&local_38);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25c50 FUN_148f25c50 body=175 status=ok
// SIG undefined FUN_148f25c50(void)

void FUN_148f25c50(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
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
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25d04 FUN_148f25d04 body=44 status=ok
// SIG undefined FUN_148f25d04(void)

void FUN_148f25d04(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f2a41a(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28));
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f25d30 FUN_148f25d30 body=347 status=ok
// SIG undefined FUN_148f25d30(void)

void FUN_148f25d30(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_38 = local_28;
  local_40 = local_29;
  FUN_148f2a4ac(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25e90 FUN_148f25e90 body=167 status=ok
// SIG undefined FUN_148f25e90(void)

void FUN_148f25e90(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2a696(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f25f42 FUN_148f25f42 body=404 status=ok
// SIG undefined FUN_148f25f42(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148f25f42(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_68 [43];
  undefined1 local_3d;
  undefined4 local_3c;
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_38[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  iVar2 = local_38[0];
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  piVar4 = local_38 + 1;
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_148f260d8(param_1,piVar4,iVar2 != 0,local_3d);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f260d8 FUN_148f260d8 body=136 status=ok
// SIG undefined FUN_148f260d8(void)

void FUN_148f260d8(longlong param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_40;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_48 = &local_9;
  local_40 = param_4;
  local_9 = param_3;
  FUN_148f2a76c(&local_30,uVar2,uVar3,uVar1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26162 FUN_148f26162 body=144 status=ok
// SIG undefined FUN_148f26162(void)

void FUN_148f26162(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined8 *)(param_1 + 0x40);
  local_30 = *(longlong *)(param_1 + 0x48);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = *(undefined4 *)(param_1 + 0x58);
  local_28 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2aa90(&local_4c,&local_38,uVar1);
  param_3[4] = local_3c;
  *param_3 = local_4c;
  param_3[1] = uStack_48;
  param_3[2] = uStack_44;
  param_3[3] = uStack_40;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f261f4 FUN_148f261f4 body=407 status=ok
// SIG undefined FUN_148f261f4(void)

void FUN_148f261f4(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = local_6c & 0xffffff00;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 60000;
  uStack_5c = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_78 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = uStack_5c;
  local_38 = local_6c;
  uStack_34 = uStack_68;
  uStack_30 = uStack_64;
  uStack_2c = uStack_60;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_58 = *(undefined8 *)(param_1 + 0x40);
  local_50 = *(longlong *)(param_1 + 0x48);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = *(undefined4 *)(param_1 + 0x58);
  local_48 = *(undefined8 *)(param_1 + 0x50);
  local_98 = local_78;
  FUN_148f2abe6(&local_88,&local_58,uVar1,&local_38);
  if (&local_88 == param_3) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_88;
    *(undefined4 *)(param_3 + 1) = local_80;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_7c;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26390 FUN_148f26390 body=37 status=ok
// SIG undefined FUN_148f26390(void)

void FUN_148f26390(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f263b6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f263b6 FUN_148f263b6 body=112 status=ok
// SIG undefined FUN_148f263b6(void)

byte FUN_148f263b6(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  byte local_12;
  byte local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x40);
  local_30 = *(longlong *)(param_1 + 0x48);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = *(undefined4 *)(param_1 + 0x58);
  local_28 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2aede(&local_12);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_12 & local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26428 FUN_148f26428 body=143 status=ok
// SIG undefined FUN_148f26428(void)

void FUN_148f26428(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f264b8 FUN_148f264b8 body=270 status=ok
// SIG undefined FUN_148f264b8(void)

void FUN_148f264b8(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f265c8 FUN_148f265c8 body=75 status=ok
// SIG undefined FUN_148f265c8(void)

void FUN_148f265c8(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147526316(param_1 + 0x40);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_147526316(param_1 + 0x40);
    uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f26618 FUN_148f26618 body=133 status=ok
// SIG undefined FUN_148f26618(void)

void FUN_148f26618(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = *(undefined8 *)(param_1 + 0x40);
  local_38 = *(longlong *)(param_1 + 0x48);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_1 + 0x58);
  local_30 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2aede(&local_1a);
  *param_3 = local_19;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2669e FUN_148f2669e body=122 status=ok
// SIG undefined FUN_148f2669e(void)

void FUN_148f2669e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(longlong *)(param_1 + 0x48);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x58);
  local_18 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2af42(&local_28,uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2671a FUN_148f2671a body=160 status=ok
// SIG undefined FUN_148f2671a(void)

void FUN_148f2671a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f267c0 FUN_148f267c0 body=158 status=ok
// SIG undefined FUN_148f267c0(void)

void FUN_148f267c0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f26860(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26860 FUN_148f26860 body=115 status=ok
// SIG undefined FUN_148f26860(void)

void FUN_148f26860(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_9 = param_2;
  FUN_148f2afe8(&local_30,uVar1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f268d8 FUN_148f268d8 body=175 status=ok
// SIG undefined FUN_148f268d8(void)

void FUN_148f268d8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
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
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26988 FUN_148f26988 body=44 status=ok
// SIG undefined FUN_148f26988(void)

void FUN_148f26988(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f2b09a(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28));
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f269b4 FUN_148f269b4 body=347 status=ok
// SIG undefined FUN_148f269b4(void)

void FUN_148f269b4(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_38 = local_28;
  local_40 = local_29;
  FUN_148f2b194(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26b10 FUN_148f26b10 body=160 status=ok
// SIG undefined FUN_148f26b10(void)

void FUN_148f26b10(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b37e(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34),
                local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26bb4 FUN_148f26bb4 body=461 status=ok
// SIG undefined FUN_148f26bb4(void)

void FUN_148f26bb4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [34];
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  local_36 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_36);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_36);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148f26d82(param_1,puVar3,local_2d,local_35);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26d82 FUN_148f26d82 body=136 status=ok
// SIG undefined FUN_148f26d82(void)

void FUN_148f26d82(longlong param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_40;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_48 = &local_9;
  local_40 = param_4;
  local_9 = param_3;
  FUN_148f2b4ac(&local_30,uVar2,uVar3,uVar1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26e0c FUN_148f26e0c body=37 status=ok
// SIG undefined FUN_148f26e0c(void)

void FUN_148f26e0c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f26e32();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f26e32 FUN_148f26e32 body=119 status=ok
// SIG undefined FUN_148f26e32(void)

undefined1 FUN_148f26e32(longlong param_1)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x40);
  local_30 = *(longlong *)(param_1 + 0x48);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = *(undefined4 *)(param_1 + 0x58);
  local_28 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2b7b4(&local_12);
  uVar1 = 0;
  if (local_11 != '\0') {
    uVar1 = local_12;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26eaa FUN_148f26eaa body=143 status=ok
// SIG undefined FUN_148f26eaa(void)

void FUN_148f26eaa(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f26f3a FUN_148f26f3a body=270 status=ok
// SIG undefined FUN_148f26f3a(void)

void FUN_148f26f3a(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2704e FUN_148f2704e body=133 status=ok
// SIG undefined FUN_148f2704e(void)

void FUN_148f2704e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = *(undefined8 *)(param_1 + 0x40);
  local_38 = *(longlong *)(param_1 + 0x48);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_1 + 0x58);
  local_30 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2b7b4(&local_1a);
  *param_3 = local_19;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f270d4 FUN_148f270d4 body=122 status=ok
// SIG undefined FUN_148f270d4(void)

void FUN_148f270d4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(longlong *)(param_1 + 0x48);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x58);
  local_18 = *(undefined8 *)(param_1 + 0x50);
  FUN_148f2b818(&local_28,uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27150 FUN_148f27150 body=160 status=ok
// SIG undefined FUN_148f27150(void)

void FUN_148f27150(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f271f2 FUN_148f271f2 body=151 status=ok
// SIG undefined FUN_148f271f2(void)

void FUN_148f271f2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2728a(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2728a FUN_148f2728a body=115 status=ok
// SIG undefined FUN_148f2728a(void)

void FUN_148f2728a(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(longlong *)(param_1 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_9 = param_2;
  FUN_148f2b8be(&local_30,uVar1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2730a FUN_148f2730a body=99 status=ok
// SIG undefined FUN_148f2730a(void)

void FUN_148f2730a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined4 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,local_38,*(undefined4 *)(param_1 + 0x28));
  *param_3 = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2736e FUN_148f2736e body=99 status=ok
// SIG undefined FUN_148f2736e(void)

void FUN_148f2736e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,local_38,*(undefined4 *)(param_1 + 0x28));
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f273d2 FUN_148f273d2 body=95 status=ok
// SIG undefined FUN_148f273d2(void)

void FUN_148f273d2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [28];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,local_38,*(undefined4 *)(param_1 + 0x28));
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27432 FUN_148f27432 body=99 status=ok
// SIG undefined FUN_148f27432(void)

void FUN_148f27432(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [12];
  undefined4 local_2c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,local_38,*(undefined4 *)(param_1 + 0x28));
  *param_3 = local_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27496 FUN_148f27496 body=99 status=ok
// SIG undefined FUN_148f27496(void)

void FUN_148f27496(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [20];
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,local_38,*(undefined4 *)(param_1 + 0x28));
  *param_3 = local_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f274fa FUN_148f274fa body=95 status=ok
// SIG undefined FUN_148f274fa(void)

void FUN_148f274fa(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [29];
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,local_38,*(undefined4 *)(param_1 + 0x28));
  *param_3 = local_1b;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2755a FUN_148f2755a body=95 status=ok
// SIG undefined FUN_148f2755a(void)

void FUN_148f2755a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,local_38,*(undefined4 *)(param_1 + 0x28));
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f275ba FUN_148f275ba body=175 status=ok
// SIG undefined FUN_148f275ba(void)

void FUN_148f275ba(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
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
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2766a FUN_148f2766a body=98 status=ok
// SIG undefined FUN_148f2766a(void)

void FUN_148f2766a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,local_38,*(undefined4 *)(param_1 + 0x28));
  *param_3 = local_38[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f276ce FUN_148f276ce body=237 status=ok
// SIG undefined FUN_148f276ce(void)

void FUN_148f276ce(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  uVar1 = local_7c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,&local_50,*(undefined4 *)(param_1 + 0x28));
  uStack_48 = uVar1;
  local_68 = local_40;
  uStack_60 = uStack_38;
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_70 = uVar1;
  uStack_6c = uStack_44;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f277bc FUN_148f277bc body=237 status=ok
// SIG undefined FUN_148f277bc(void)

void FUN_148f277bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  uVar1 = local_7c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,&local_50,*(undefined4 *)(param_1 + 0x28));
  local_40 = uVar1;
  local_78 = local_50;
  uStack_70 = uStack_48;
  local_68 = uVar1;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f278aa FUN_148f278aa body=241 status=ok
// SIG undefined FUN_148f278aa(void)

void FUN_148f278aa(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_69 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  uVar1 = local_69;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,&local_48,*(undefined4 *)(param_1 + 0x28));
  local_2c = uVar1;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  local_50 = local_30;
  local_4c = uVar1;
  local_4b = local_2b;
  local_49 = local_29;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2799c FUN_148f2799c body=237 status=ok
// SIG undefined FUN_148f2799c(void)

void FUN_148f2799c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  uVar1 = local_7c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,&local_50,*(undefined4 *)(param_1 + 0x28));
  uStack_44 = uVar1;
  local_68 = local_40;
  uStack_60 = uStack_38;
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = uVar1;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27a8a FUN_148f27a8a body=237 status=ok
// SIG undefined FUN_148f27a8a(void)

void FUN_148f27a8a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  uVar1 = local_7c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,&local_50,*(undefined4 *)(param_1 + 0x28));
  uStack_3c = uVar1;
  local_78 = local_50;
  uStack_70 = uStack_48;
  local_68 = local_40;
  uStack_64 = uVar1;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27b78 FUN_148f27b78 body=241 status=ok
// SIG undefined FUN_148f27b78(void)

void FUN_148f27b78(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_69 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  uVar1 = local_69;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,&local_48,*(undefined4 *)(param_1 + 0x28));
  local_2b = uVar1;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  local_50 = local_30;
  local_4c = local_2c;
  local_4b = uVar1;
  local_4a = local_2a;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27c6a FUN_148f27c6a body=241 status=ok
// SIG undefined FUN_148f27c6a(void)

void FUN_148f27c6a(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_2f;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_69 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  uVar1 = local_69;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,&local_48,*(undefined4 *)(param_1 + 0x28));
  local_30 = uVar1;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  local_58 = local_38;
  local_50 = uVar1;
  local_4f = local_2f;
  local_4b = local_2b;
  local_49 = local_29;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27d5c FUN_148f27d5c body=347 status=ok
// SIG undefined FUN_148f27d5c(void)

void FUN_148f27d5c(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_38 = local_28;
  local_40 = local_29;
  FUN_148f2bb9e(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x2c),
                *(undefined8 *)(param_1 + 0x34));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27eb8 FUN_148f27eb8 body=237 status=ok
// SIG undefined FUN_148f27eb8(void)

void FUN_148f27eb8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar1 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2b970(param_1 + 0x40,&local_50,*(undefined4 *)(param_1 + 0x28));
  local_50 = uVar1;
  local_68 = local_40;
  uStack_60 = uStack_38;
  local_50._0_4_ = (undefined4)uVar1;
  local_50._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  local_50 = uVar1;
  FUN_148f2ba62(param_1 + 0x40,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x34));
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f27faa FUN_148f27faa body=474 status=ok
// SIG undefined FUN_148f27faa(void)

void FUN_148f27faa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  local_3e = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3e);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3e);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3e;
  uVar2 = FUN_148f28186(param_1,puVar3,local_38,local_3d);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f28186 FUN_148f28186 body=151 status=ok
// SIG undefined FUN_148f28186(void)

void FUN_148f28186(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(longlong *)(param_1 + 0x40);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_48 = param_5;
  local_58 = &local_18;
  local_50 = param_4;
  local_18 = param_3;
  FUN_148f2bd88(&local_38,uVar3,uVar2,uVar1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2821e FUN_148f2821e body=144 status=ok
// SIG undefined FUN_148f2821e(void)

void FUN_148f2821e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(longlong *)(param_1 + 0x40);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f2bfc2(&local_4c,&local_38,uVar1);
  param_3[4] = local_3c;
  *param_3 = local_4c;
  param_3[1] = uStack_48;
  param_3[2] = uStack_44;
  param_3[3] = uStack_40;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f282b0 FUN_148f282b0 body=407 status=ok
// SIG undefined FUN_148f282b0(void)

void FUN_148f282b0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = local_6c & 0xffffff00;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 60000;
  uStack_5c = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_78 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = uStack_5c;
  local_38 = local_6c;
  uStack_34 = uStack_68;
  uStack_30 = uStack_64;
  uStack_2c = uStack_60;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  local_50 = *(longlong *)(param_1 + 0x40);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = *(undefined4 *)(param_1 + 0x50);
  local_48 = *(undefined8 *)(param_1 + 0x48);
  local_98 = local_78;
  FUN_148f2c08c(&local_88,&local_58,uVar1,&local_38);
  if (&local_88 == param_3) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_88;
    *(undefined4 *)(param_3 + 1) = local_80;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_7c;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f28448 FUN_148f28448 body=39 status=ok
// SIG undefined FUN_148f28448(void)

void FUN_148f28448(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f28470();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f28470 FUN_148f28470 body=124 status=ok
// SIG undefined FUN_148f28470(void)

void FUN_148f28470(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_1 + 0x38);
  local_38 = *(longlong *)(param_1 + 0x40);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_1 + 0x50);
  local_30 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f2c2de(&local_20);
  if (local_18 == '\0') {
    local_20 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20);
  }
  return;
}



// FUNCTION 148f284ee FUN_148f284ee body=143 status=ok
// SIG undefined FUN_148f284ee(void)

void FUN_148f284ee(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2857e FUN_148f2857e body=270 status=ok
// SIG undefined FUN_148f2857e(void)

void FUN_148f2857e(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,plVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2868e FUN_148f2868e body=75 status=ok
// SIG undefined FUN_148f2868e(void)

void FUN_148f2868e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147526316(param_1 + 0x38);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_147526316(param_1 + 0x38);
    uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f286da FUN_148f286da body=70 status=ok
// SIG undefined FUN_148f286da(void)

void FUN_148f286da(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147526316(param_1 + 0x38);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get post-infinity extrapolation."
                  ,2,0);
    uVar1 = 5;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x51);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f28720 FUN_148f28720 body=70 status=ok
// SIG undefined FUN_148f28720(void)

void FUN_148f28720(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147526316(param_1 + 0x38);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get pre-infinity extrapolation."
                  ,2,0);
    uVar1 = 5;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x50);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 148f2876a FUN_148f2876a body=133 status=ok
// SIG undefined FUN_148f2876a(void)

void FUN_148f2876a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *(undefined8 *)(param_1 + 0x38);
  local_40 = *(longlong *)(param_1 + 0x40);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
    UNLOCK();
  }
  local_30 = *(undefined4 *)(param_1 + 0x50);
  local_38 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f2c2de(local_28);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f287f0 FUN_148f287f0 body=122 status=ok
// SIG undefined FUN_148f287f0(void)

void FUN_148f287f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_20 = *(longlong *)(param_1 + 0x40);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = *(undefined4 *)(param_1 + 0x50);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  FUN_148f2c348(&local_28,uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2886c FUN_148f2886c body=160 status=ok
// SIG undefined FUN_148f2886c(void)

void FUN_148f2886c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f2890e FUN_148f2890e body=157 status=ok
// SIG undefined FUN_148f2890e(void)

void FUN_148f2890e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f289ac(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f289ac FUN_148f289ac body=117 status=ok
// SIG undefined FUN_148f289ac(void)

void FUN_148f289ac(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_28 = *(longlong *)(param_1 + 0x40);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = *(undefined4 *)(param_1 + 0x50);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_10 = param_2;
  FUN_148f2c3f2(&local_30,uVar1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f28a22 FUN_148f28a22 body=184 status=ok
// SIG undefined FUN_148f28a22(void)

void FUN_148f28a22(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  uVar1 = local_21;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147526316(param_1 + 0x38);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set post-infinity extrapolation."
                  ,2,0);
  }
  else {
    *(undefined1 *)(lVar2 + 0x51) = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f28adc FUN_148f28adc body=184 status=ok
// SIG undefined FUN_148f28adc(void)

void FUN_148f28adc(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  uVar1 = local_21;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147526316(param_1 + 0x38);
  if (lVar2 == 0) {
    FUN_1415b7ec4(L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set pre-infinity extrapolation."
                  ,2,0);
  }
  else {
    *(undefined1 *)(lVar2 + 0x50) = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f28b98 FUN_148f28b98 body=175 status=ok
// SIG undefined FUN_148f28b98(void)

void FUN_148f28b98(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
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
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30,local_21);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f28c48 FUN_148f28c48 body=115 status=ok
// SIG undefined FUN_148f28c48(void)

void FUN_148f28c48(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f2c4aa(param_1 + 0x40,local_40,*(undefined4 *)(param_1 + 0x28));
  FUN_14768a44e(param_3,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


