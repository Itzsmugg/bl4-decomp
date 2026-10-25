// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ed9ad0 FUN_146ed9ad0 body=149 status=ok
// SIG undefined FUN_146ed9ad0(void)

void FUN_146ed9ad0(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146ed9b70 FUN_146ed9b70 body=57 status=ok
// SIG undefined FUN_146ed9b70(void)

undefined8 * FUN_146ed9b70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69400;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed9baa FUN_146ed9baa body=122 status=ok
// SIG undefined FUN_146ed9baa(void)

void FUN_146ed9baa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed9c26 FUN_146ed9c26 body=249 status=ok
// SIG undefined FUN_146ed9c26(void)

void FUN_146ed9c26(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ed9eb2(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed9d28 FUN_146ed9d28 body=185 status=ok
// SIG undefined FUN_146ed9d28(void)

void FUN_146ed9d28(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ed9f12(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed9e02 FUN_146ed9e02 body=57 status=ok
// SIG undefined FUN_146ed9e02(void)

undefined8 * FUN_146ed9e02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69400;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed9e3c FUN_146ed9e3c body=117 status=ok
// SIG undefined FUN_146ed9e3c(void)

void FUN_146ed9e3c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1403f4be0(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_1400c9c50(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ed9eb2 FUN_146ed9eb2 body=96 status=ok
// SIG undefined FUN_146ed9eb2(void)

void FUN_146ed9eb2(longlong param_1,int param_2)

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



// FUNCTION 146ed9f12 FUN_146ed9f12 body=199 status=ok
// SIG undefined FUN_146ed9f12(void)

longlong * FUN_146ed9f12(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  FUN_146ed9fda(param_2,local_2c);
  if (0 < local_2c) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_146eda17e(param_1,*param_2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar4 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed9fda FUN_146ed9fda body=128 status=ok
// SIG undefined FUN_146ed9fda(void)

void FUN_146ed9fda(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_146eda05c(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146eda0e2(param_1);
  return;
}



// FUNCTION 146eda05c FUN_146eda05c body=132 status=ok
// SIG undefined FUN_146eda05c(void)

void FUN_146eda05c(longlong param_1,int param_2)

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



// FUNCTION 146eda0e2 FUN_146eda0e2 body=62 status=ok
// SIG undefined FUN_146eda0e2(void)

void FUN_146eda0e2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146eda120(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146eda120 FUN_146eda120 body=93 status=ok
// SIG undefined FUN_146eda120(void)

ulonglong FUN_146eda120(uint param_1,uint param_2)

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



// FUNCTION 146eda17e FUN_146eda17e body=956 status=ok
// SIG undefined FUN_146eda17e(void)

void FUN_146eda17e(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146eda370;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar10 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar10 * 0x18) == local_58) goto LAB_146eda357;
            iVar10 = *(int *)(lVar7 + (longlong)iVar10 * 0x18 + 0x10);
          } while (iVar10 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      FUN_146eda53c(param_1,param_2);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146eda370;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar10 = (int)plVar9[1];
    uVar5 = iVar6 - iVar10;
    if (uVar5 != 0 && iVar10 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar10) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar10 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146eda490;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar10 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar10) {
      uVar4 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        FUN_146eda53c(param_1,param_2);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146eda370;
    }
  }
LAB_146eda490:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146eda370:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146eda357:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146eda3cc;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146eda3cc:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146eda370;
}



// FUNCTION 146eda53c FUN_146eda53c body=93 status=ok
// SIG undefined FUN_146eda53c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146eda53c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *_DAT_000001e8 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      *param_2 = puVar1;
      puVar2 = puVar1;
    }
  }
  FUN_146cafe06(puVar2,param_1);
  return;
}



// FUNCTION 146eda5a4 FUN_146eda5a4 body=38 status=ok
// SIG undefined FUN_146eda5a4(void)

void FUN_146eda5a4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146edac34(param_1 + 0x10);
  return;
}



// FUNCTION 146eda5cc FUN_146eda5cc body=279 status=ok
// SIG undefined FUN_146eda5cc(void)

void FUN_146eda5cc(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146edab12(&local_58);
    memset(local_58,0,(longlong)(int)uVar2 << 3);
    if (0 < (int)uVar2) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar5 * 4) * 8 + param_1[2]);
        if ((undefined8 *)((longlong)local_58 + lVar4) != puVar3) {
          puVar1 = *(undefined8 **)((longlong)local_58 + uVar5 * 8);
          *(undefined8 *)((longlong)local_58 + uVar5 * 8) = *puVar3;
          *puVar3 = 0;
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (uVar2 != uVar5);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_146edaa21(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eda6ee FUN_146eda6ee body=69 status=ok
// SIG undefined FUN_146eda6ee(void)

undefined8 * FUN_146eda6ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69520;
  FUN_146edaa21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eda734 FUN_146eda734 body=122 status=ok
// SIG undefined FUN_146eda734(void)

void FUN_146eda734(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eda7b0 FUN_146eda7b0 body=298 status=ok
// SIG undefined FUN_146eda7b0(void)

void FUN_146eda7b0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[uVar7 - 1];
      for (; uVar7 != 1; uVar7 = uVar7 - 1) {
        iVar5 = piVar1[uVar7 - 1];
        iVar6 = iVar2;
        if ((iVar5 != piVar1[uVar7 - 2] + 1) &&
           (iVar3 = (iVar2 - iVar5) + 1, iVar6 = piVar1[uVar7 - 2], iVar3 != 0)) {
          pvVar4 = (void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x10));
          FUN_146edaa21(pvVar4,iVar3);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar2 = iVar5 - (iVar2 + 1);
          if (iVar2 != 0) {
            memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar3 * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar5 - iVar3;
          piVar1 = (int *)*param_2;
          iVar6 = piVar1[uVar7 - 2];
        }
        iVar2 = iVar6;
      }
      iVar5 = (iVar2 - *piVar1) + 1;
      if (iVar5 != 0) {
        pvVar4 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
        FUN_146edaa21(pvVar4,iVar5);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar2 = iVar6 - (iVar2 + 1);
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 - iVar5;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146edac34(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146eda8e2 FUN_146eda8e2 body=185 status=ok
// SIG undefined FUN_146eda8e2(void)

void FUN_146eda8e2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146edac94(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eda9a2 FUN_146eda9a2 body=58 status=ok
// SIG undefined FUN_146eda9a2(void)

void FUN_146eda9a2(longlong param_1)

{
  FUN_146edaa21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146edac34(param_1 + 0x10,0);
  return;
}



// FUNCTION 146eda9dc FUN_146eda9dc body=69 status=ok
// SIG undefined FUN_146eda9dc(void)

undefined8 * FUN_146eda9dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69520;
  FUN_146edaa21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edaa21 FUN_146edaa21 body=52 status=ok
// SIG undefined FUN_146edaa21(void)

void FUN_146edaa21(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146edaa56 FUN_146edaa56 body=187 status=ok
// SIG undefined FUN_146edaa56(void)

void FUN_146edaa56(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_146edab12(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_146edaa21(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_146edab98(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146edab12 FUN_146edab12 body=132 status=ok
// SIG undefined FUN_146edab12(void)

void FUN_146edab12(longlong param_1,int param_2)

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



// FUNCTION 146edab98 FUN_146edab98 body=62 status=ok
// SIG undefined FUN_146edab98(void)

void FUN_146edab98(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146edabd6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146edabd6 FUN_146edabd6 body=93 status=ok
// SIG undefined FUN_146edabd6(void)

ulonglong FUN_146edabd6(uint param_1,uint param_2)

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



// FUNCTION 146edac34 FUN_146edac34 body=96 status=ok
// SIG undefined FUN_146edac34(void)

void FUN_146edac34(longlong param_1,int param_2)

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



// FUNCTION 146edac94 FUN_146edac94 body=227 status=ok
// SIG undefined FUN_146edac94(void)

longlong * FUN_146edac94(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146edac34(param_2);
    }
    FUN_146edaa56(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146edad7a(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146edad7a FUN_146edad7a body=169 status=ok
// SIG undefined FUN_146edad7a(void)

void FUN_146edad7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x218))
            (*(longlong **)(param_1 + 0x90),&DAT_149e3cc18);
  iVar2 = FUN_1448332aa(*(undefined8 *)(param_1 + 0x90),&DAT_149e3cc18);
  if (4 < iVar2) {
    local_28 = (undefined8 *)*param_2;
    FUN_146cae532(param_1);
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x28) & 1) != 0) {
      puVar1 = (undefined8 *)*param_2;
      if ((puVar1 != local_28) && (*param_2 = (longlong)local_28, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edae2e FUN_146edae2e body=38 status=ok
// SIG undefined FUN_146edae2e(void)

void FUN_146edae2e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146edb55c(param_1 + 0x10);
  return;
}



// FUNCTION 146edae56 FUN_146edae56 body=330 status=ok
// SIG undefined FUN_146edae56(void)

void FUN_146edae56(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar4;
  if (uVar4 != 0) {
    FUN_146edb3da(&local_58);
    memset(local_58,0,(longlong)(int)uVar4 << 4);
    if (0 < (int)uVar4) {
      lVar7 = 0;
      uVar6 = 0;
      do {
        puVar5 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar6 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)((longlong)local_58 + lVar7) != puVar5) {
          *(undefined8 *)((longlong)local_58 + lVar7) = *puVar5;
          *puVar5 = 0;
          plVar2 = (longlong *)puVar5[1];
          plVar3 = *(longlong **)((longlong)local_58 + lVar7 + 8);
          if (plVar2 != plVar3) {
            puVar5[1] = 0;
            *(longlong **)((longlong)local_58 + lVar7 + 8) = plVar2;
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
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar4 != uVar6);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_146edb30d(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edafa2 FUN_146edafa2 body=77 status=ok
// SIG undefined FUN_146edafa2(void)

void FUN_146edafa2(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  FUN_146edb5bc(param_1 + 2,param_2,uVar1);
  return;
}



// FUNCTION 146edaff0 FUN_146edaff0 body=94 status=ok
// SIG undefined FUN_146edaff0(void)

void FUN_146edaff0(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146edb63a(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146edb058 FUN_146edb058 body=69 status=ok
// SIG undefined FUN_146edb058(void)

undefined8 * FUN_146edb058(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69640;
  FUN_146edb30d(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edb09e FUN_146edb09e body=122 status=ok
// SIG undefined FUN_146edb09e(void)

void FUN_146edb09e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edb11a FUN_146edb11a body=172 status=ok
// SIG undefined FUN_146edb11a(void)

void FUN_146edb11a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146edb460(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146edb460(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146edb55c(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146edb1ce FUN_146edb1ce body=185 status=ok
// SIG undefined FUN_146edb1ce(void)

void FUN_146edb1ce(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146edb70b(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edb28e FUN_146edb28e body=58 status=ok
// SIG undefined FUN_146edb28e(void)

void FUN_146edb28e(longlong param_1)

{
  FUN_146edb30d(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146edb55c(param_1 + 0x10,0);
  return;
}



// FUNCTION 146edb2c8 FUN_146edb2c8 body=69 status=ok
// SIG undefined FUN_146edb2c8(void)

undefined8 * FUN_146edb2c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69640;
  FUN_146edb30d(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edb30d FUN_146edb30d body=73 status=ok
// SIG undefined FUN_146edb30d(void)

void FUN_146edb30d(longlong param_1,int param_2)

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



// FUNCTION 146edb356 FUN_146edb356 body=130 status=ok
// SIG undefined FUN_146edb356(void)

void FUN_146edb356(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146edb3da(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146edb460(param_1,param_2,iVar1 - param_2);
    FUN_146edb4c0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146edb3da FUN_146edb3da body=132 status=ok
// SIG undefined FUN_146edb3da(void)

void FUN_146edb3da(longlong param_1,int param_2)

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



// FUNCTION 146edb460 FUN_146edb460 body=95 status=ok
// SIG undefined FUN_146edb460(void)

void FUN_146edb460(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146edb30d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146edb4c0 FUN_146edb4c0 body=62 status=ok
// SIG undefined FUN_146edb4c0(void)

void FUN_146edb4c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146edb4fe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146edb4fe FUN_146edb4fe body=93 status=ok
// SIG undefined FUN_146edb4fe(void)

ulonglong FUN_146edb4fe(uint param_1,uint param_2)

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



// FUNCTION 146edb55c FUN_146edb55c body=96 status=ok
// SIG undefined FUN_146edb55c(void)

void FUN_146edb55c(longlong param_1,int param_2)

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



// FUNCTION 146edb5bc FUN_146edb5bc body=126 status=ok
// SIG undefined FUN_146edb5bc(void)

void FUN_146edb5bc(longlong *param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (0 < (int)param_3) {
    lVar7 = 0;
    do {
      lVar3 = *param_1;
      uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar7);
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8 + lVar7);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(lVar3 + 8 + lVar7);
      *(undefined8 *)(lVar3 + lVar7) = uVar4;
      *(longlong *)(lVar3 + 8 + lVar7) = lVar5;
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
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)param_3 << 4 != lVar7);
  }
  return;
}



// FUNCTION 146edb63a FUN_146edb63a body=209 status=ok
// SIG undefined FUN_146edb63a(void)

void FUN_146edb63a(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar7 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar7) {
    lVar10 = (longlong)param_3;
    lVar11 = (longlong)(param_3 + param_5);
    lVar9 = lVar10 << 4;
    lVar8 = lVar11 << 4;
    do {
      if ((int)param_1[1] <= lVar11) {
        return;
      }
      if (param_4 <= lVar10) {
        return;
      }
      lVar3 = *param_1;
      uVar4 = *(undefined8 *)(param_2[2] + lVar9);
      lVar5 = *(longlong *)(param_2[2] + 8 + lVar9);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(lVar3 + 8 + lVar8);
      *(undefined8 *)(lVar3 + lVar8) = uVar4;
      *(longlong *)(lVar3 + 8 + lVar8) = lVar5;
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
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 1;
      iVar7 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < iVar7);
  }
  return;
}



// FUNCTION 146edb70b FUN_146edb70b body=227 status=ok
// SIG undefined FUN_146edb70b(void)

longlong * FUN_146edb70b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146edb55c(param_2);
    }
    FUN_146edb356(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146edb7f0(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146edb7f0 FUN_146edb7f0 body=158 status=ok
// SIG undefined FUN_146edb7f0(void)

void FUN_146edb7f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_140a2860c();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    puVar6 = (undefined8 *)FUN_146edb890(*(undefined8 *)(param_1 + 0x98),&local_20);
    uVar3 = *puVar6;
    lVar4 = puVar6[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_2[1];
    *param_2 = uVar3;
    param_2[1] = lVar4;
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edb890 FUN_146edb890 body=333 status=ok
// SIG undefined FUN_146edb890(void)

undefined8 * FUN_146edb890(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x100) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar7 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar7 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar5 = (undefined8 *)puVar1[1], puVar5 != (undefined8 *)0x0)) goto LAB_146edb9b8;
          break;
        }
        iVar7 = (int)puVar1[2];
      } while (iVar7 != -1);
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = &PTR_FUN_149f696d0;
  puVar5[1] = uVar2;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_LAB_149f696e0;
  puVar6[2] = uVar2;
  puVar5[2] = puVar6;
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar5;
  FUN_146edba68((longlong *)(param_1 + 0xb8),local_24);
LAB_146edb9b8:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edb9de FUN_146edb9de body=83 status=ok
// SIG undefined FUN_146edb9de(void)

undefined8 * FUN_146edb9de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f696d0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edba4a FUN_146edba4a body=29 status=ok
// SIG undefined FUN_146edba4a(void)

undefined8 FUN_146edba4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edba68 FUN_146edba68 body=326 status=ok
// SIG undefined FUN_146edba68(void)

undefined4 * FUN_146edba68(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_146edbbb0(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146edbc96(param_1,uVar4,local_40,&local_4c);
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
      FUN_146edbd88(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edbbb0 FUN_146edbbb0 body=230 status=ok
// SIG undefined FUN_146edbbb0(void)

int * FUN_146edbbb0(longlong *param_1,int *param_2)

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



// FUNCTION 146edbc96 FUN_146edbc96 body=128 status=ok
// SIG undefined FUN_146edbc96(void)

undefined8 FUN_146edbc96(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146edbd16((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146edbd16 FUN_146edbd16 body=114 status=ok
// SIG undefined FUN_146edbd16(void)

void FUN_146edbd16(longlong *param_1,int param_2)

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



// FUNCTION 146edbd88 FUN_146edbd88 body=474 status=ok
// SIG undefined FUN_146edbd88(void)

void FUN_146edbd88(longlong *param_1)

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



// FUNCTION 146edbf6e FUN_146edbf6e body=38 status=ok
// SIG undefined FUN_146edbf6e(void)

void FUN_146edbf6e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146edc668(param_1 + 0x10);
  return;
}



// FUNCTION 146edbf96 FUN_146edbf96 body=277 status=ok
// SIG undefined FUN_146edbf96(void)

void FUN_146edbf96(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_146edc4e6(&local_58);
    memset(local_58,0,(longlong)(int)uVar1 << 4);
    if (0 < (int)uVar1) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar4 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)((longlong)local_58 + lVar3) != puVar2) {
          *(undefined8 *)((longlong)local_58 + lVar3) = *puVar2;
          *puVar2 = 0;
          FUN_145708362((undefined8 *)((longlong)local_58 + lVar3) + 1,puVar2 + 1);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar1 != uVar4);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_146edc417(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edc0ac FUN_146edc0ac body=77 status=ok
// SIG undefined FUN_146edc0ac(void)

void FUN_146edc0ac(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  FUN_146edc6c8(param_1 + 2,param_2,uVar1);
  return;
}



// FUNCTION 146edc0fa FUN_146edc0fa body=94 status=ok
// SIG undefined FUN_146edc0fa(void)

void FUN_146edc0fa(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146edc747(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146edc162 FUN_146edc162 body=69 status=ok
// SIG undefined FUN_146edc162(void)

undefined8 * FUN_146edc162(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69790;
  FUN_146edc417(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edc1a8 FUN_146edc1a8 body=122 status=ok
// SIG undefined FUN_146edc1a8(void)

void FUN_146edc1a8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edc224 FUN_146edc224 body=172 status=ok
// SIG undefined FUN_146edc224(void)

void FUN_146edc224(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146edc56c(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146edc56c(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146edc668(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146edc2d8 FUN_146edc2d8 body=185 status=ok
// SIG undefined FUN_146edc2d8(void)

void FUN_146edc2d8(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146edc819(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edc398 FUN_146edc398 body=58 status=ok
// SIG undefined FUN_146edc398(void)

void FUN_146edc398(longlong param_1)

{
  FUN_146edc417(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146edc668(param_1 + 0x10,0);
  return;
}



// FUNCTION 146edc3d2 FUN_146edc3d2 body=69 status=ok
// SIG undefined FUN_146edc3d2(void)

undefined8 * FUN_146edc3d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69790;
  FUN_146edc417(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edc417 FUN_146edc417 body=75 status=ok
// SIG undefined FUN_146edc417(void)

void FUN_146edc417(longlong param_1,int param_2)

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
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
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



// FUNCTION 146edc462 FUN_146edc462 body=130 status=ok
// SIG undefined FUN_146edc462(void)

void FUN_146edc462(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146edc4e6(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146edc56c(param_1,param_2,iVar1 - param_2);
    FUN_146edc5cc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146edc4e6 FUN_146edc4e6 body=132 status=ok
// SIG undefined FUN_146edc4e6(void)

void FUN_146edc4e6(longlong param_1,int param_2)

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



// FUNCTION 146edc56c FUN_146edc56c body=95 status=ok
// SIG undefined FUN_146edc56c(void)

void FUN_146edc56c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146edc417(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146edc5cc FUN_146edc5cc body=62 status=ok
// SIG undefined FUN_146edc5cc(void)

void FUN_146edc5cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146edc60a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146edc60a FUN_146edc60a body=93 status=ok
// SIG undefined FUN_146edc60a(void)

ulonglong FUN_146edc60a(uint param_1,uint param_2)

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



// FUNCTION 146edc668 FUN_146edc668 body=96 status=ok
// SIG undefined FUN_146edc668(void)

void FUN_146edc668(longlong param_1,int param_2)

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



// FUNCTION 146edc6c8 FUN_146edc6c8 body=127 status=ok
// SIG undefined FUN_146edc6c8(void)

void FUN_146edc6c8(longlong *param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (0 < (int)param_3) {
    lVar7 = 0;
    do {
      lVar3 = *param_1;
      uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar7);
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8 + lVar7);
      if (lVar5 != 0) {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
      plVar6 = *(longlong **)(lVar3 + 8 + lVar7);
      *(undefined8 *)(lVar3 + lVar7) = uVar4;
      *(longlong *)(lVar3 + 8 + lVar7) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)param_3 << 4 != lVar7);
  }
  return;
}



// FUNCTION 146edc747 FUN_146edc747 body=210 status=ok
// SIG undefined FUN_146edc747(void)

void FUN_146edc747(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar7 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar7) {
    lVar10 = (longlong)param_3;
    lVar11 = (longlong)(param_3 + param_5);
    lVar9 = lVar10 << 4;
    lVar8 = lVar11 << 4;
    do {
      if ((int)param_1[1] <= lVar11) {
        return;
      }
      if (param_4 <= lVar10) {
        return;
      }
      lVar3 = *param_1;
      uVar4 = *(undefined8 *)(param_2[2] + lVar9);
      lVar5 = *(longlong *)(param_2[2] + 8 + lVar9);
      if (lVar5 != 0) {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
      plVar6 = *(longlong **)(lVar3 + 8 + lVar8);
      *(undefined8 *)(lVar3 + lVar8) = uVar4;
      *(longlong *)(lVar3 + 8 + lVar8) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 1;
      iVar7 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < iVar7);
  }
  return;
}



// FUNCTION 146edc819 FUN_146edc819 body=227 status=ok
// SIG undefined FUN_146edc819(void)

longlong * FUN_146edc819(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146edc668(param_2);
    }
    FUN_146edc462(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146edc8fe(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146edc8fe FUN_146edc8fe body=155 status=ok
// SIG undefined FUN_146edc8fe(void)

void FUN_146edc8fe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_140a2860c();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    puVar6 = (undefined8 *)FUN_146edc99a(*(undefined8 *)(param_1 + 0x98),&local_20);
    uVar3 = *puVar6;
    lVar4 = puVar6[1];
    if (lVar4 != 0) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    plVar5 = (longlong *)param_2[1];
    *param_2 = uVar3;
    param_2[1] = lVar4;
    if (plVar5 != (longlong *)0x0) {
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edc99a FUN_146edc99a body=333 status=ok
// SIG undefined FUN_146edc99a(void)

undefined8 * FUN_146edc99a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x100) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar7 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar7 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar5 = (undefined8 *)puVar1[1], puVar5 != (undefined8 *)0x0)) goto LAB_146edcac2;
          break;
        }
        iVar7 = (int)puVar1[2];
      } while (iVar7 != -1);
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = &PTR_FUN_149f69820;
  puVar5[1] = uVar2;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_LAB_149f69830;
  puVar6[2] = uVar2;
  puVar5[2] = puVar6;
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar5;
  FUN_146edba68((longlong *)(param_1 + 0xb8),local_24);
LAB_146edcac2:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edcae8 FUN_146edcae8 body=38 status=ok
// SIG undefined FUN_146edcae8(void)

undefined8 FUN_146edcae8(undefined8 param_1,int param_2)

{
  FUN_146edcb44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edcb26 FUN_146edcb26 body=29 status=ok
// SIG undefined FUN_146edcb26(void)

undefined8 FUN_146edcb26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edcb44 FUN_146edcb44 body=63 status=ok
// SIG undefined FUN_146edcb44(void)

void FUN_146edcb44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f69820;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146edcb7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146edcb8e FUN_146edcb8e body=39 status=ok
// SIG undefined FUN_146edcb8e(void)

void FUN_146edcb8e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_140a2c2a8(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 146edcbb6 FUN_146edcbb6 body=215 status=ok
// SIG undefined FUN_146edcbb6(void)

void FUN_146edcbb6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_14043c6b4(&local_48);
    memset(local_48,0,(longlong)(int)uVar1 << 3);
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        *(undefined8 *)((longlong)local_48 + uVar2 * 8) =
             *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 8);
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edcc8e FUN_146edcc8e body=92 status=ok
// SIG undefined FUN_146edcc8e(void)

void FUN_146edcc8e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146edccea FUN_146edccea body=149 status=ok
// SIG undefined FUN_146edccea(void)

void FUN_146edccea(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146edcd8a FUN_146edcd8a body=57 status=ok
// SIG undefined FUN_146edcd8a(void)

undefined8 * FUN_146edcd8a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f698e0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edcdc4 FUN_146edcdc4 body=122 status=ok
// SIG undefined FUN_146edcdc4(void)

void FUN_146edcdc4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edce40 FUN_146edce40 body=249 status=ok
// SIG undefined FUN_146edce40(void)

void FUN_146edce40(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140a2c2a8(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146edcf42 FUN_146edcf42 body=185 status=ok
// SIG undefined FUN_146edcf42(void)

void FUN_146edcf42(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146edd0cc(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edd01c FUN_146edd01c body=57 status=ok
// SIG undefined FUN_146edd01c(void)

undefined8 * FUN_146edd01c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f698e0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edd056 FUN_146edd056 body=117 status=ok
// SIG undefined FUN_146edd056(void)

void FUN_146edd056(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14043c6b4(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_1400ca8e6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146edd0cc FUN_146edd0cc body=199 status=ok
// SIG undefined FUN_146edd0cc(void)

longlong * FUN_146edd0cc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  FUN_146edd194(param_2,local_2c);
  if (0 < local_2c) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_146edd338(param_1,*param_2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar4 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edd194 FUN_146edd194 body=128 status=ok
// SIG undefined FUN_146edd194(void)

void FUN_146edd194(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_146edd216(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146edd29c(param_1);
  return;
}



// FUNCTION 146edd216 FUN_146edd216 body=132 status=ok
// SIG undefined FUN_146edd216(void)

void FUN_146edd216(longlong param_1,int param_2)

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



// FUNCTION 146edd29c FUN_146edd29c body=62 status=ok
// SIG undefined FUN_146edd29c(void)

void FUN_146edd29c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146edd2da(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146edd2da FUN_146edd2da body=93 status=ok
// SIG undefined FUN_146edd2da(void)

ulonglong FUN_146edd2da(uint param_1,uint param_2)

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



// FUNCTION 146edd338 FUN_146edd338 body=956 status=ok
// SIG undefined FUN_146edd338(void)

void FUN_146edd338(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146edd52a;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar10 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar10 * 0x18) == local_58) goto LAB_146edd511;
            iVar10 = *(int *)(lVar7 + (longlong)iVar10 * 0x18 + 0x10);
          } while (iVar10 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      FUN_146edd6f6(param_1,param_2);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146edd52a;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar10 = (int)plVar9[1];
    uVar5 = iVar6 - iVar10;
    if (uVar5 != 0 && iVar10 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar10) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar10 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146edd64a;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar10 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar10) {
      uVar4 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        FUN_146edd6f6(param_1,param_2);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146edd52a;
    }
  }
LAB_146edd64a:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146edd52a:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146edd511:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146edd586;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146edd586:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146edd52a;
}



// FUNCTION 146edd6f6 FUN_146edd6f6 body=93 status=ok
// SIG undefined FUN_146edd6f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146edd6f6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *_DAT_000001e8 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      *param_2 = puVar1;
      puVar2 = puVar1;
    }
  }
  FUN_146cafe06(puVar2,param_1);
  return;
}



// FUNCTION 146edd75e FUN_146edd75e body=38 status=ok
// SIG undefined FUN_146edd75e(void)

void FUN_146edd75e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146edde62(param_1 + 0x10);
  return;
}



// FUNCTION 146edd786 FUN_146edd786 body=290 status=ok
// SIG undefined FUN_146edd786(void)

void FUN_146edd786(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146eddd40(&local_58);
    memset(local_58,0,(longlong)(int)uVar2 << 3);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar4 * 4) * 8 + param_1[2]);
        if ((undefined8 *)((longlong)local_58 + lVar5) != puVar3) {
          lVar1 = *(longlong *)((longlong)local_58 + uVar4 * 8);
          *(undefined8 *)((longlong)local_58 + uVar4 * 8) = *puVar3;
          *puVar3 = 0;
          if (lVar1 != 0) {
            FUN_146d835c4(lVar1);
            FUN_1400020a8(lVar1);
          }
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (uVar2 != uVar4);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_146eddc43(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edd8aa FUN_146edd8aa body=59 status=ok
// SIG undefined FUN_146edd8aa(void)

void FUN_146edd8aa(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000146edd8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,uVar1,*(code **)*param_1);
  return;
}



// FUNCTION 146edd8e6 FUN_146edd8e6 body=32 status=ok
// SIG undefined FUN_146edd8e6(void)

void FUN_146edd8e6(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000146edd902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 146edd910 FUN_146edd910 body=69 status=ok
// SIG undefined FUN_146edd910(void)

undefined8 * FUN_146edd910(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69a00;
  FUN_146eddc43(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edd956 FUN_146edd956 body=122 status=ok
// SIG undefined FUN_146edd956(void)

void FUN_146edd956(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edd9d2 FUN_146edd9d2 body=298 status=ok
// SIG undefined FUN_146edd9d2(void)

void FUN_146edd9d2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[uVar7 - 1];
      for (; uVar7 != 1; uVar7 = uVar7 - 1) {
        iVar5 = piVar1[uVar7 - 1];
        iVar6 = iVar2;
        if ((iVar5 != piVar1[uVar7 - 2] + 1) &&
           (iVar3 = (iVar2 - iVar5) + 1, iVar6 = piVar1[uVar7 - 2], iVar3 != 0)) {
          pvVar4 = (void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x10));
          FUN_146eddc43(pvVar4,iVar3);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar2 = iVar5 - (iVar2 + 1);
          if (iVar2 != 0) {
            memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar3 * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar5 - iVar3;
          piVar1 = (int *)*param_2;
          iVar6 = piVar1[uVar7 - 2];
        }
        iVar2 = iVar6;
      }
      iVar5 = (iVar2 - *piVar1) + 1;
      if (iVar5 != 0) {
        pvVar4 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
        FUN_146eddc43(pvVar4,iVar5);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar2 = iVar6 - (iVar2 + 1);
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 - iVar5;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146edde62(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146eddb04 FUN_146eddb04 body=185 status=ok
// SIG undefined FUN_146eddb04(void)

void FUN_146eddb04(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146eddec2(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eddbc4 FUN_146eddbc4 body=58 status=ok
// SIG undefined FUN_146eddbc4(void)

void FUN_146eddbc4(longlong param_1)

{
  FUN_146eddc43(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146edde62(param_1 + 0x10,0);
  return;
}



// FUNCTION 146eddbfe FUN_146eddbfe body=69 status=ok
// SIG undefined FUN_146eddbfe(void)

undefined8 * FUN_146eddbfe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69a00;
  FUN_146eddc43(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eddc43 FUN_146eddc43 body=64 status=ok
// SIG undefined FUN_146eddc43(void)

void FUN_146eddc43(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_146d835c4(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146eddc84 FUN_146eddc84 body=187 status=ok
// SIG undefined FUN_146eddc84(void)

void FUN_146eddc84(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_146eddd40(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_146eddc43(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_146edddc6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146eddd40 FUN_146eddd40 body=132 status=ok
// SIG undefined FUN_146eddd40(void)

void FUN_146eddd40(longlong param_1,int param_2)

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



// FUNCTION 146edddc6 FUN_146edddc6 body=62 status=ok
// SIG undefined FUN_146edddc6(void)

void FUN_146edddc6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146edde04(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146edde04 FUN_146edde04 body=93 status=ok
// SIG undefined FUN_146edde04(void)

ulonglong FUN_146edde04(uint param_1,uint param_2)

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



// FUNCTION 146edde62 FUN_146edde62 body=96 status=ok
// SIG undefined FUN_146edde62(void)

void FUN_146edde62(longlong param_1,int param_2)

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



// FUNCTION 146eddec2 FUN_146eddec2 body=227 status=ok
// SIG undefined FUN_146eddec2(void)

longlong * FUN_146eddec2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146edde62(param_2);
    }
    FUN_146eddc84(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146eddfa8(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146eddfa8 FUN_146eddfa8 body=175 status=ok
// SIG undefined FUN_146eddfa8(void)

void FUN_146eddfa8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x218))
            (*(longlong **)(param_1 + 0x90),&DAT_149e3cc18);
  iVar2 = FUN_1448332aa(*(undefined8 *)(param_1 + 0x90),&DAT_149e3cc18);
  if (4 < iVar2) {
    local_28 = *param_2;
    FUN_140049db4(param_1);
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x28) & 1) != 0) {
      lVar1 = *param_2;
      if ((lVar1 != local_28) && (*param_2 = local_28, lVar1 != 0)) {
        FUN_146d835c4(lVar1);
        FUN_1400020a8(lVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ede064 FUN_146ede064 body=39 status=ok
// SIG undefined FUN_146ede064(void)

void FUN_146ede064(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_140cb0586(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 146ede08c FUN_146ede08c body=218 status=ok
// SIG undefined FUN_146ede08c(void)

void FUN_146ede08c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_144941252(&local_48);
    memset(local_48,0,(longlong)(int)uVar1 << 3);
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        *(undefined8 *)((longlong)local_48 + uVar2 * 8) =
             *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 8);
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ede168 FUN_146ede168 body=94 status=ok
// SIG undefined FUN_146ede168(void)

void FUN_146ede168(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146ede1c6 FUN_146ede1c6 body=153 status=ok
// SIG undefined FUN_146ede1c6(void)

void FUN_146ede1c6(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146ede26a FUN_146ede26a body=57 status=ok
// SIG undefined FUN_146ede26a(void)

undefined8 * FUN_146ede26a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69b20;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ede2a4 FUN_146ede2a4 body=122 status=ok
// SIG undefined FUN_146ede2a4(void)

void FUN_146ede2a4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ede320 FUN_146ede320 body=249 status=ok
// SIG undefined FUN_146ede320(void)

void FUN_146ede320(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140cb0586(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ede422 FUN_146ede422 body=185 status=ok
// SIG undefined FUN_146ede422(void)

void FUN_146ede422(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146d9a78b(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ede4fc FUN_146ede4fc body=57 status=ok
// SIG undefined FUN_146ede4fc(void)

undefined8 * FUN_146ede4fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69b20;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ede536 FUN_146ede536 body=184 status=ok
// SIG undefined FUN_146ede536(void)

void FUN_146ede536(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x60))();
  local_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  FUN_146ede9da();
  if (0 < (int)uVar4) {
    uVar6 = 0;
    puVar5 = local_48;
    do {
      lVar7 = (longlong)*(int *)(*param_2 + uVar6 * 4);
      lVar2 = param_1[2];
      puVar5[2] = *(undefined8 *)(lVar2 + 0x10 + lVar7 * 0x18);
      puVar1 = (undefined8 *)(lVar2 + lVar7 * 0x18);
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar3;
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar4 != uVar6);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  param_1[3] = lStack_40;
  local_48 = (undefined8 *)local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ede5f0 FUN_146ede5f0 body=112 status=ok
// SIG undefined FUN_146ede5f0(void)

void FUN_146ede5f0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar6 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar6);
  if (0 < (int)uVar6) {
    lVar7 = 0;
    do {
      lVar3 = param_2[2];
      lVar4 = param_1[2];
      *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar3 + 0x10 + lVar7);
      puVar1 = (undefined8 *)(lVar3 + lVar7);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      lVar7 = lVar7 + 0x18;
    } while ((ulonglong)uVar6 * 0x18 != lVar7);
  }
  return;
}



// FUNCTION 146ede660 FUN_146ede660 body=201 status=ok
// SIG undefined FUN_146ede660(void)

void FUN_146ede660(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar8 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar8)) {
    lVar11 = (longlong)(param_5 + param_3);
    lVar12 = (longlong)param_3;
    lVar9 = lVar12 * 0x18;
    lVar10 = lVar11 * 0x18;
    do {
      if ((int)param_1[3] <= lVar11) {
        return;
      }
      if (param_4 <= lVar12) {
        return;
      }
      lVar3 = param_2[2];
      lVar4 = param_1[2];
      *(undefined8 *)(lVar4 + 0x10 + lVar10) = *(undefined8 *)(lVar3 + 0x10 + lVar9);
      puVar1 = (undefined4 *)(lVar3 + lVar9);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 1;
      iVar8 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar9 = lVar9 + 0x18;
      lVar10 = lVar10 + 0x18;
    } while (lVar12 < iVar8);
  }
  return;
}



// FUNCTION 146ede738 FUN_146ede738 body=122 status=ok
// SIG undefined FUN_146ede738(void)

void FUN_146ede738(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ede7b4 FUN_146ede7b4 body=265 status=ok
// SIG undefined FUN_146ede7b4(void)

void FUN_146ede7b4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar2 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar2 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar7 = iVar2 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar3 = (void *)((longlong)iVar6 * 0x18 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)iVar5 * 0x18),
                    (longlong)iVar7 * 0x18);
            iVar2 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar2 - iVar5;
          piVar1 = (int *)*param_2;
          iVar2 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar2;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar7 = iVar2 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar3 = (void *)((longlong)*piVar1 * 0x18 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)iVar6 * 0x18),(longlong)iVar7 * 0x18)
          ;
          iVar2 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar2 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_1447a8aa0(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ede8c6 FUN_146ede8c6 body=185 status=ok
// SIG undefined FUN_146ede8c6(void)

void FUN_146ede8c6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146edea1f(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ede9a0 FUN_146ede9a0 body=57 status=ok
// SIG undefined FUN_146ede9a0(void)

undefined8 * FUN_146ede9a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69c40;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ede9da FUN_146ede9da body=69 status=ok
// SIG undefined FUN_146ede9da(void)

int FUN_146ede9da(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1403e3958(param_1,iVar1);
  }
  FUN_14051b40a((longlong)iVar1 * 0x18 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146edea1f FUN_146edea1f body=260 status=ok
// SIG undefined FUN_146edea1f(void)

longlong * FUN_146edea1f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_1447a8aa0(param_2);
    }
    FUN_14051b394(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_14480c34d(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146edeb32 FUN_146edeb32 body=38 status=ok
// SIG undefined FUN_146edeb32(void)

void FUN_146edeb32(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146edf2ea(param_1 + 0x10);
  return;
}



// FUNCTION 146edeb5a FUN_146edeb5a body=313 status=ok
// SIG undefined FUN_146edeb5a(void)

void FUN_146edeb5a(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146edf162(&local_68);
    memset(local_68,0,(longlong)(int)uVar2 << 4);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        pvVar1 = local_68;
        puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar5 + (longlong)local_68) != puVar4) {
          if (*(longlong *)((longlong)local_68 + lVar5) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar5) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 != uVar3);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_146edf0a7(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edec94 FUN_146edec94 body=139 status=ok
// SIG undefined FUN_146edec94(void)

void FUN_146edec94(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  
  uVar2 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      if (0 < *(int *)(param_1[2] + 8 + uVar3 * 0x10)) {
        plVar4 = (longlong *)(param_1[2] + uVar3 * 0x10);
        lVar6 = 0;
        do {
          lVar7 = lVar6 * 8 + *plVar4;
          lVar9 = 0;
          bVar1 = true;
          do {
            bVar8 = bVar1;
            lVar5 = (longlong)*(int *)(lVar7 + lVar9 * 4);
            if (-1 < lVar5) {
              *(undefined4 *)(lVar7 + lVar9 * 4) = *(undefined4 *)(*param_2 + lVar5 * 4);
            }
            lVar9 = 1;
            bVar1 = false;
          } while (bVar8);
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)plVar4[1]);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 146eded20 FUN_146eded20 body=105 status=ok
// SIG undefined FUN_146eded20(void)

void FUN_146eded20(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_146edf34a(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146eded8a FUN_146eded8a body=94 status=ok
// SIG undefined FUN_146eded8a(void)

void FUN_146eded8a(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146edf3a2(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ededf2 FUN_146ededf2 body=69 status=ok
// SIG undefined FUN_146ededf2(void)

undefined8 * FUN_146ededf2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69d60;
  FUN_146edf0a7(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edee38 FUN_146edee38 body=122 status=ok
// SIG undefined FUN_146edee38(void)

void FUN_146edee38(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edeeb4 FUN_146edeeb4 body=172 status=ok
// SIG undefined FUN_146edeeb4(void)

void FUN_146edeeb4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146edf1e8(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146edf1e8(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146edf2ea(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146edef68 FUN_146edef68 body=185 status=ok
// SIG undefined FUN_146edef68(void)

void FUN_146edef68(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146edf43e(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edf028 FUN_146edf028 body=58 status=ok
// SIG undefined FUN_146edf028(void)

void FUN_146edf028(longlong param_1)

{
  FUN_146edf0a7(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146edf2ea(param_1 + 0x10,0);
  return;
}



// FUNCTION 146edf062 FUN_146edf062 body=69 status=ok
// SIG undefined FUN_146edf062(void)

undefined8 * FUN_146edf062(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69d60;
  FUN_146edf0a7(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edf0a7 FUN_146edf0a7 body=43 status=ok
// SIG undefined FUN_146edf0a7(void)

void FUN_146edf0a7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146edf0d2 FUN_146edf0d2 body=143 status=ok
// SIG undefined FUN_146edf0d2(void)

void FUN_146edf0d2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146edf162(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146edf1e8(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146edf248(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146edf162 FUN_146edf162 body=132 status=ok
// SIG undefined FUN_146edf162(void)

void FUN_146edf162(longlong param_1,int param_2)

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



// FUNCTION 146edf1e8 FUN_146edf1e8 body=95 status=ok
// SIG undefined FUN_146edf1e8(void)

void FUN_146edf1e8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146edf0a7(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146edf248 FUN_146edf248 body=63 status=ok
// SIG undefined FUN_146edf248(void)

void FUN_146edf248(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146edf288(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146edf288 FUN_146edf288 body=97 status=ok
// SIG undefined FUN_146edf288(void)

ulonglong FUN_146edf288(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146edf2ea FUN_146edf2ea body=96 status=ok
// SIG undefined FUN_146edf2ea(void)

void FUN_146edf2ea(longlong param_1,int param_2)

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



// FUNCTION 146edf34a FUN_146edf34a body=88 status=ok
// SIG undefined FUN_146edf34a(void)

undefined8 * FUN_146edf34a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146deeb7a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 146edf3a2 FUN_146edf3a2 body=156 status=ok
// SIG undefined FUN_146edf3a2(void)

void FUN_146edf3a2(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5 || param_4 <= lVar4) {
        return;
      }
      FUN_146edf34a(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146edf43e FUN_146edf43e body=252 status=ok
// SIG undefined FUN_146edf43e(void)

longlong * FUN_146edf43e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146edf2ea(param_2);
    }
    FUN_146edf0d2(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146ea4ec2(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146edf548 FUN_146edf548 body=38 status=ok
// SIG undefined FUN_146edf548(void)

void FUN_146edf548(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ea72ca(param_1 + 0x10);
  return;
}



// FUNCTION 146edf570 FUN_146edf570 body=313 status=ok
// SIG undefined FUN_146edf570(void)

void FUN_146edf570(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146e9e302(&local_68);
    memset(local_68,0,(longlong)(int)uVar2 << 4);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        pvVar1 = local_68;
        puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar5 + (longlong)local_68) != puVar4) {
          if (*(longlong *)((longlong)local_68 + lVar5) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar5) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 != uVar3);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_146d8d0e9(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edf6aa FUN_146edf6aa body=105 status=ok
// SIG undefined FUN_146edf6aa(void)

void FUN_146edf6aa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_140de4b5e(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146edf714 FUN_146edf714 body=94 status=ok
// SIG undefined FUN_146edf714(void)

void FUN_146edf714(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146edfa31(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146edf77c FUN_146edf77c body=69 status=ok
// SIG undefined FUN_146edf77c(void)

undefined8 * FUN_146edf77c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69e80;
  FUN_146d8d0e9(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edf7c2 FUN_146edf7c2 body=122 status=ok
// SIG undefined FUN_146edf7c2(void)

void FUN_146edf7c2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edf83e FUN_146edf83e body=172 status=ok
// SIG undefined FUN_146edf83e(void)

void FUN_146edf83e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146e9e388(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146e9e388(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ea72ca(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146edf8f2 FUN_146edf8f2 body=185 status=ok
// SIG undefined FUN_146edf8f2(void)

void FUN_146edf8f2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ea71cb(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edf9b2 FUN_146edf9b2 body=58 status=ok
// SIG undefined FUN_146edf9b2(void)

void FUN_146edf9b2(longlong param_1)

{
  FUN_146d8d0e9(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146ea72ca(param_1 + 0x10,0);
  return;
}



// FUNCTION 146edf9ec FUN_146edf9ec body=69 status=ok
// SIG undefined FUN_146edf9ec(void)

undefined8 * FUN_146edf9ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69e80;
  FUN_146d8d0e9(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edfa31 FUN_146edfa31 body=150 status=ok
// SIG undefined FUN_146edfa31(void)

void FUN_146edfa31(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5) {
        return;
      }
      if (param_4 <= lVar4) {
        return;
      }
      FUN_140de4b5e(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146edfad4 FUN_146edfad4 body=38 status=ok
// SIG undefined FUN_146edfad4(void)

void FUN_146edfad4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146edfff2(param_1 + 0x10);
  return;
}



// FUNCTION 146edfafc FUN_146edfafc body=279 status=ok
// SIG undefined FUN_146edfafc(void)

void FUN_146edfafc(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_140c5ddde(&local_58);
    memset(local_58,0,(longlong)(int)uVar2 << 3);
    if (0 < (int)uVar2) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar5 * 4) * 8 + param_1[2]);
        if ((undefined8 *)((longlong)local_58 + lVar4) != puVar3) {
          puVar1 = *(undefined8 **)((longlong)local_58 + uVar5 * 8);
          *(undefined8 *)((longlong)local_58 + uVar5 * 8) = *puVar3;
          *puVar3 = 0;
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (uVar2 != uVar5);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_1408bc66e(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edfc1e FUN_146edfc1e body=69 status=ok
// SIG undefined FUN_146edfc1e(void)

undefined8 * FUN_146edfc1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69fa0;
  FUN_1408bc66e(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edfc64 FUN_146edfc64 body=122 status=ok
// SIG undefined FUN_146edfc64(void)

void FUN_146edfc64(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edfce0 FUN_146edfce0 body=296 status=ok
// SIG undefined FUN_146edfce0(void)

void FUN_146edfce0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[uVar7 - 1];
      for (; uVar7 != 1; uVar7 = uVar7 - 1) {
        iVar5 = piVar1[uVar7 - 1];
        iVar6 = iVar2;
        if ((iVar5 != piVar1[uVar7 - 2] + 1) &&
           (iVar3 = (iVar2 - iVar5) + 1, iVar6 = piVar1[uVar7 - 2], iVar3 != 0)) {
          pvVar4 = (void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x10));
          FUN_1408bc66e(pvVar4,iVar3);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar2 = iVar5 - (iVar2 + 1);
          if (iVar2 != 0) {
            memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar3 * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar5 - iVar3;
          piVar1 = (int *)*param_2;
          iVar6 = piVar1[uVar7 - 2];
        }
        iVar2 = iVar6;
      }
      iVar5 = (iVar2 - *piVar1) + 1;
      if (iVar5 != 0) {
        pvVar4 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
        FUN_1408bc66e(pvVar4,iVar5);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar2 = iVar6 - (iVar2 + 1);
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 - iVar5;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146edfff2(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146edfe10 FUN_146edfe10 body=185 status=ok
// SIG undefined FUN_146edfe10(void)

void FUN_146edfe10(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ee0052(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146edfed0 FUN_146edfed0 body=58 status=ok
// SIG undefined FUN_146edfed0(void)

void FUN_146edfed0(longlong param_1)

{
  FUN_1408bc66e(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146edfff2(param_1 + 0x10,0);
  return;
}



// FUNCTION 146edff0a FUN_146edff0a body=69 status=ok
// SIG undefined FUN_146edff0a(void)

undefined8 * FUN_146edff0a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69fa0;
  FUN_1408bc66e(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146edff50 FUN_146edff50 body=63 status=ok
// SIG undefined FUN_146edff50(void)

void FUN_146edff50(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146edff90(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146edff90 FUN_146edff90 body=97 status=ok
// SIG undefined FUN_146edff90(void)

ulonglong FUN_146edff90(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146edfff2 FUN_146edfff2 body=96 status=ok
// SIG undefined FUN_146edfff2(void)

void FUN_146edfff2(longlong param_1,int param_2)

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



// FUNCTION 146ee0052 FUN_146ee0052 body=232 status=ok
// SIG undefined FUN_146ee0052(void)

longlong * FUN_146ee0052(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146edfff2(param_2);
    }
    FUN_140c5dd0e(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146ee013c(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ee013c FUN_146ee013c body=169 status=ok
// SIG undefined FUN_146ee013c(void)

void FUN_146ee013c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x218))
            (*(longlong **)(param_1 + 0x90),&DAT_149e3cc18);
  iVar2 = FUN_1448332aa(*(undefined8 *)(param_1 + 0x90),&DAT_149e3cc18);
  if (4 < iVar2) {
    local_28 = (undefined8 *)*param_2;
    FUN_146ee01e6(param_1);
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x28) & 1) != 0) {
      puVar1 = (undefined8 *)*param_2;
      if ((puVar1 != local_28) && (*param_2 = (longlong)local_28, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee01e6 FUN_146ee01e6 body=1008 status=ok
// SIG undefined FUN_146ee01e6(void)

void FUN_146ee01e6(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = *(longlong **)(param_1 + 0x90);
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar10 + 0x170))(plVar10,&local_48,4);
    uVar6 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar10);
      uVar6 = (uint)local_48;
    }
  }
  else {
    uVar6 = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (uVar6 == 0) {
    *param_2 = 0;
    goto LAB_146ee03d8;
  }
  plVar10 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar10 + 5) & 1) == 0) {
    if (((*(byte *)(plVar10 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar10 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar6 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        lVar8 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x50);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar6 >> 0x10 ^ uVar6))
                                 * 4);
        if (iVar7 != -1) {
          lVar8 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar7;
          do {
            if (*(ulonglong *)(lVar8 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146ee03bf;
            iVar11 = *(int *)(lVar8 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar10 = *(longlong **)(param_1 + 0x90);
      puVar9 = (ulonglong *)plVar10[1];
      puVar1 = (uint *)*puVar9 + 1;
      if ((uint *)puVar9[1] < puVar1) {
        if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar10,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar9;
        *puVar9 = (ulonglong)puVar1;
      }
      plVar10 = (longlong *)*param_2;
      plVar5 = (longlong *)FUN_146cae924(param_1,plVar10);
      if (plVar5 != (longlong *)0x0) {
        *param_2 = (ulonglong)plVar5;
        plVar10 = plVar5;
      }
      (**(code **)(*plVar10 + 8))(plVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146ee03d8;
  }
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar10,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar7 = local_4c + 1;
    plVar10 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar10[1];
    uVar6 = iVar7 - iVar11;
    if (uVar6 != 0 && iVar11 <= iVar7) {
      *(int *)(plVar10 + 1) = iVar7;
      if ((uint)(*(int *)((longlong)plVar10 + 0xc) - iVar11) < uVar6) {
        FUN_1456bd870(plVar10);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar10),0,(ulonglong)uVar6 << 3);
      if ((int)local_4c < 0) goto LAB_146ee04f8;
      plVar10 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar10[1];
    }
    if ((int)local_4c < iVar11) {
      uVar4 = *(ulonglong *)(*plVar10 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        plVar10 = (longlong *)*param_2;
        plVar5 = (longlong *)FUN_146cae924(param_1,plVar10);
        if (plVar5 != (longlong *)0x0) {
          *param_2 = (ulonglong)plVar5;
          plVar10 = plVar5;
        }
        (**(code **)(*plVar10 + 8))(plVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146ee03d8;
    }
  }
LAB_146ee04f8:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146ee03d8:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar7 = (int)puVar9[2], iVar7 != -1) {
LAB_146ee03bf:
    puVar9 = (ulonglong *)(lVar8 + (longlong)iVar7 * 0x18);
    if (*puVar9 == local_58) goto LAB_146ee0434;
  }
  puVar9 = (ulonglong *)0x0;
LAB_146ee0434:
  puVar3 = *(undefined4 **)plVar10[1];
  if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,puVar9 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar9 + 1) = *puVar3;
    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
  }
  goto LAB_146ee03d8;
}



// FUNCTION 146ee05d8 FUN_146ee05d8 body=247 status=ok
// SIG undefined FUN_146ee05d8(void)

void FUN_146ee05d8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (**(code **)(*param_1 + 0x60))();
  local_58 = 0;
  uStack_50 = 0;
  FUN_146ee0926(&local_58,uVar3);
  if (0 < (int)uVar3) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar6 * 4) * 8 + param_1[2]);
      if ((undefined8 *)(local_58 + lVar5) != puVar4) {
        puVar2 = *(undefined8 **)(local_58 + uVar6 * 8);
        *(undefined8 *)(local_58 + uVar6 * 8) = *puVar4;
        *puVar4 = 0;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar3 != uVar6);
  }
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = local_58;
  param_1[3] = uStack_50;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_144756766(local_48,uStack_40 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee06d0 FUN_146ee06d0 body=94 status=ok
// SIG undefined FUN_146ee06d0(void)

void FUN_146ee06d0(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ee096a(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ee0738 FUN_146ee0738 body=122 status=ok
// SIG undefined FUN_146ee0738(void)

void FUN_146ee0738(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee07b4 FUN_146ee07b4 body=296 status=ok
// SIG undefined FUN_146ee07b4(void)

void FUN_146ee07b4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[uVar7 - 1];
      for (; uVar7 != 1; uVar7 = uVar7 - 1) {
        iVar5 = piVar1[uVar7 - 1];
        iVar6 = iVar2;
        if ((iVar5 != piVar1[uVar7 - 2] + 1) &&
           (iVar3 = (iVar2 - iVar5) + 1, iVar6 = piVar1[uVar7 - 2], iVar3 != 0)) {
          pvVar4 = (void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x10));
          FUN_144756766(pvVar4,iVar3);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar2 = iVar5 - (iVar2 + 1);
          if (iVar2 != 0) {
            memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar3 * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar5 - iVar3;
          piVar1 = (int *)*param_2;
          iVar6 = piVar1[uVar7 - 2];
        }
        iVar2 = iVar6;
      }
      iVar5 = (iVar2 - *piVar1) + 1;
      if (iVar5 != 0) {
        pvVar4 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
        FUN_144756766(pvVar4,iVar5);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar2 = iVar6 - (iVar2 + 1);
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 - iVar5;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140836c88(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ee08e0 FUN_146ee08e0 body=69 status=ok
// SIG undefined FUN_146ee08e0(void)

undefined8 * FUN_146ee08e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6b230;
  FUN_144756766(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee0926 FUN_146ee0926 body=68 status=ok
// SIG undefined FUN_146ee0926(void)

int FUN_146ee0926(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140619960(param_1,iVar1);
  }
  FUN_14008dc91((longlong)iVar1 * 8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146ee096a FUN_146ee096a body=162 status=ok
// SIG undefined FUN_146ee096a(void)

void FUN_146ee096a(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar4) {
    lVar5 = (longlong)param_3;
    lVar6 = (longlong)(param_3 + param_5);
    do {
      if ((int)param_1[1] <= lVar6) {
        return;
      }
      if (param_4 <= lVar5) {
        return;
      }
      puVar2 = *(undefined8 **)(param_2[2] + lVar5 * 8);
      puVar3 = *(undefined8 **)(*param_1 + lVar6 * 8);
      if (puVar3 != puVar2) {
        *(undefined8 **)(*param_1 + lVar6 * 8) = puVar2;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
          UNLOCK();
        }
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 1;
      iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar5 < iVar4);
  }
  return;
}



// FUNCTION 146ee0a18 FUN_146ee0a18 body=38 status=ok
// SIG undefined FUN_146ee0a18(void)

void FUN_146ee0a18(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ee0f84(param_1 + 0x10);
  return;
}



// FUNCTION 146ee0a40 FUN_146ee0a40 body=313 status=ok
// SIG undefined FUN_146ee0a40(void)

void FUN_146ee0a40(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146ec8658(&local_68);
    memset(local_68,0,(longlong)(int)uVar2 << 4);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        pvVar1 = local_68;
        puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar5 + (longlong)local_68) != puVar4) {
          if (*(longlong *)((longlong)local_68 + lVar5) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar5) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 != uVar3);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_146ec862d(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee0b7a FUN_146ee0b7a body=129 status=ok
// SIG undefined FUN_146ee0b7a(void)

void FUN_146ee0b7a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      if (0 < *(int *)(param_1[2] + 8 + uVar2 * 0x10)) {
        plVar3 = (longlong *)(param_1[2] + uVar2 * 0x10);
        lVar5 = 0;
        lVar6 = 0;
        do {
          lVar7 = *plVar3 + lVar5;
          lVar8 = 0;
          do {
            lVar4 = (longlong)*(int *)(lVar7 + lVar8 * 4);
            if (-1 < lVar4) {
              *(undefined4 *)(lVar7 + lVar8 * 4) = *(undefined4 *)(*param_2 + lVar4 * 4);
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 != 3);
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0xc;
        } while (lVar6 < (int)plVar3[1]);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar1);
  }
  return;
}



// FUNCTION 146ee0bfc FUN_146ee0bfc body=105 status=ok
// SIG undefined FUN_146ee0bfc(void)

void FUN_146ee0bfc(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_146ee0fe4(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146ee0c66 FUN_146ee0c66 body=94 status=ok
// SIG undefined FUN_146ee0c66(void)

void FUN_146ee0c66(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ee103d(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ee0cce FUN_146ee0cce body=69 status=ok
// SIG undefined FUN_146ee0cce(void)

undefined8 * FUN_146ee0cce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6a0c0;
  FUN_146ec862d(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee0d14 FUN_146ee0d14 body=122 status=ok
// SIG undefined FUN_146ee0d14(void)

void FUN_146ee0d14(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee0d90 FUN_146ee0d90 body=172 status=ok
// SIG undefined FUN_146ee0d90(void)

void FUN_146ee0d90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146ec86de(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146ec86de(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ee0f84(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ee0e44 FUN_146ee0e44 body=185 status=ok
// SIG undefined FUN_146ee0e44(void)

void FUN_146ee0e44(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ee10d9(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee0f04 FUN_146ee0f04 body=58 status=ok
// SIG undefined FUN_146ee0f04(void)

void FUN_146ee0f04(longlong param_1)

{
  FUN_146ec862d(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146ee0f84(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ee0f3e FUN_146ee0f3e body=69 status=ok
// SIG undefined FUN_146ee0f3e(void)

undefined8 * FUN_146ee0f3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6a0c0;
  FUN_146ec862d(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee0f84 FUN_146ee0f84 body=96 status=ok
// SIG undefined FUN_146ee0f84(void)

void FUN_146ee0f84(longlong param_1,int param_2)

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



// FUNCTION 146ee0fe4 FUN_146ee0fe4 body=89 status=ok
// SIG undefined FUN_146ee0fe4(void)

undefined8 * FUN_146ee0fe4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146287c4e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ee103d FUN_146ee103d body=156 status=ok
// SIG undefined FUN_146ee103d(void)

void FUN_146ee103d(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5 || param_4 <= lVar4) {
        return;
      }
      FUN_146ee0fe4(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146ee10d9 FUN_146ee10d9 body=252 status=ok
// SIG undefined FUN_146ee10d9(void)

longlong * FUN_146ee10d9(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ee0f84(param_2);
    }
    FUN_146ebae88(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146ea30db(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ee11e2 FUN_146ee11e2 body=38 status=ok
// SIG undefined FUN_146ee11e2(void)

void FUN_146ee11e2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ee18fc(param_1 + 0x10);
  return;
}



// FUNCTION 146ee120a FUN_146ee120a body=313 status=ok
// SIG undefined FUN_146ee120a(void)

void FUN_146ee120a(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146ee177a(&local_68);
    memset(local_68,0,(longlong)(int)uVar2 << 4);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        pvVar1 = local_68;
        puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar5 + (longlong)local_68) != puVar4) {
          if (*(longlong *)((longlong)local_68 + lVar5) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar5) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 != uVar3);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_146ee16cb(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee1344 FUN_146ee1344 body=105 status=ok
// SIG undefined FUN_146ee1344(void)

void FUN_146ee1344(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_146bff298(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146ee13ae FUN_146ee13ae body=94 status=ok
// SIG undefined FUN_146ee13ae(void)

void FUN_146ee13ae(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ee195c(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ee1416 FUN_146ee1416 body=69 status=ok
// SIG undefined FUN_146ee1416(void)

undefined8 * FUN_146ee1416(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6a1e0;
  FUN_146ee16cb(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee145c FUN_146ee145c body=122 status=ok
// SIG undefined FUN_146ee145c(void)

void FUN_146ee145c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee14d8 FUN_146ee14d8 body=172 status=ok
// SIG undefined FUN_146ee14d8(void)

void FUN_146ee14d8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146ee1800(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146ee1800(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ee18fc(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ee158c FUN_146ee158c body=185 status=ok
// SIG undefined FUN_146ee158c(void)

void FUN_146ee158c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ee19f8(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee164c FUN_146ee164c body=58 status=ok
// SIG undefined FUN_146ee164c(void)

void FUN_146ee164c(longlong param_1)

{
  FUN_146ee16cb(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146ee18fc(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ee1686 FUN_146ee1686 body=69 status=ok
// SIG undefined FUN_146ee1686(void)

undefined8 * FUN_146ee1686(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6a1e0;
  FUN_146ee16cb(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee16cb FUN_146ee16cb body=43 status=ok
// SIG undefined FUN_146ee16cb(void)

void FUN_146ee16cb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146ee16f6 FUN_146ee16f6 body=130 status=ok
// SIG undefined FUN_146ee16f6(void)

void FUN_146ee16f6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ee177a(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146ee1800(param_1,param_2,iVar1 - param_2);
    FUN_146ee1860(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ee177a FUN_146ee177a body=132 status=ok
// SIG undefined FUN_146ee177a(void)

void FUN_146ee177a(longlong param_1,int param_2)

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



// FUNCTION 146ee1800 FUN_146ee1800 body=95 status=ok
// SIG undefined FUN_146ee1800(void)

void FUN_146ee1800(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146ee16cb(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146ee1860 FUN_146ee1860 body=62 status=ok
// SIG undefined FUN_146ee1860(void)

void FUN_146ee1860(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ee189e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146ee189e FUN_146ee189e body=93 status=ok
// SIG undefined FUN_146ee189e(void)

ulonglong FUN_146ee189e(uint param_1,uint param_2)

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



// FUNCTION 146ee18fc FUN_146ee18fc body=96 status=ok
// SIG undefined FUN_146ee18fc(void)

void FUN_146ee18fc(longlong param_1,int param_2)

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



// FUNCTION 146ee195c FUN_146ee195c body=156 status=ok
// SIG undefined FUN_146ee195c(void)

void FUN_146ee195c(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5 || param_4 <= lVar4) {
        return;
      }
      FUN_146bff298(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146ee19f8 FUN_146ee19f8 body=249 status=ok
// SIG undefined FUN_146ee19f8(void)

longlong * FUN_146ee19f8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ee18fc(param_2);
    }
    FUN_146ee16f6(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146eb4d14(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ee1b00 FUN_146ee1b00 body=38 status=ok
// SIG undefined FUN_146ee1b00(void)

void FUN_146ee1b00(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146d9b08c(param_1 + 0x10);
  return;
}



// FUNCTION 146ee1b28 FUN_146ee1b28 body=183 status=ok
// SIG undefined FUN_146ee1b28(void)

void FUN_146ee1b28(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong lStack_40;
  undefined8 *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  FUN_146ee1fee(&local_48,uVar1);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    puVar2 = local_48;
    do {
      puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar6 * 4) * 0x80 + param_1[2]);
      puVar5 = puVar2;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 0x10;
    } while (uVar1 != uVar6);
  }
  local_38 = (undefined8 *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee1be0 FUN_146ee1be0 body=107 status=ok
// SIG undefined FUN_146ee1be0(void)

void FUN_146ee1be0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      puVar4 = (undefined8 *)(param_2[2] + lVar3);
      puVar5 = (undefined8 *)(param_1[2] + lVar3);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar3 = lVar3 + 0x80;
    } while ((ulonglong)uVar1 << 7 != lVar3);
  }
  return;
}



// FUNCTION 146ee1c4c FUN_146ee1c4c body=196 status=ok
// SIG undefined FUN_146ee1c4c(void)

void FUN_146ee1c4c(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar7 = (longlong)(param_5 + param_3);
    lVar6 = (longlong)param_3;
    lVar3 = lVar6 << 7;
    lVar8 = lVar7 << 7;
    do {
      if ((int)param_1[3] <= lVar7) {
        return;
      }
      if (param_4 <= lVar6) {
        return;
      }
      puVar4 = (undefined8 *)(param_2[2] + lVar3);
      puVar5 = (undefined8 *)(param_1[2] + lVar8);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar3 = lVar3 + 0x80;
      lVar8 = lVar8 + 0x80;
    } while (lVar6 < iVar1);
  }
  return;
}



// FUNCTION 146ee1d1a FUN_146ee1d1a body=57 status=ok
// SIG undefined FUN_146ee1d1a(void)

undefined8 * FUN_146ee1d1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6a300;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee1d54 FUN_146ee1d54 body=122 status=ok
// SIG undefined FUN_146ee1d54(void)

void FUN_146ee1d54(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee1dd0 FUN_146ee1dd0 body=257 status=ok
// SIG undefined FUN_146ee1dd0(void)

void FUN_146ee1dd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar2 = (int *)*param_2;
      iVar1 = piVar2[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar7 = piVar2[uVar5 - 1];
        iVar4 = iVar1;
        if ((iVar7 != piVar2[uVar5 - 2] + 1) &&
           (iVar6 = (iVar1 - iVar7) + 1, iVar4 = piVar2[uVar5 - 2], iVar6 != 0)) {
          iVar4 = *(int *)(param_1 + 0x18);
          iVar1 = iVar4 - (iVar1 + 1);
          if (iVar1 != 0) {
            pvVar3 = (void *)((longlong)iVar7 * 0x80 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar6 * 0x80 + (longlong)pvVar3),(longlong)iVar1 << 7)
            ;
            iVar4 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar4 - iVar6;
          piVar2 = (int *)*param_2;
          iVar4 = piVar2[uVar5 - 2];
        }
        iVar1 = iVar4;
      }
      iVar7 = (iVar1 - *piVar2) + 1;
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar1 = iVar4 - (iVar1 + 1);
        if (iVar1 != 0) {
          pvVar3 = (void *)((longlong)*piVar2 * 0x80 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar7 * 0x80 + (longlong)pvVar3),(longlong)iVar1 << 7);
          iVar4 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar4 - iVar7;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146d9b08c(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ee1eda FUN_146ee1eda body=185 status=ok
// SIG undefined FUN_146ee1eda(void)

void FUN_146ee1eda(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146d9a68d(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee1fb4 FUN_146ee1fb4 body=57 status=ok
// SIG undefined FUN_146ee1fb4(void)

undefined8 * FUN_146ee1fb4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6a300;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee1fee FUN_146ee1fee body=65 status=ok
// SIG undefined FUN_146ee1fee(void)

void FUN_146ee1fee(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146d8d064(param_1,iVar1);
  }
  FUN_146d9b0ec((longlong)iVar1 * 0x80 + *param_1,param_2);
  return;
}



// FUNCTION 146ee2030 FUN_146ee2030 body=42 status=ok
// SIG undefined FUN_146ee2030(void)

void FUN_146ee2030(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0xffffffff;
  return;
}



// FUNCTION 146ee205a FUN_146ee205a body=42 status=ok
// SIG undefined FUN_146ee205a(void)

void FUN_146ee205a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0xffffffff;
  return;
}



// FUNCTION 146ee209c FUN_146ee209c body=68 status=ok
// SIG undefined FUN_146ee209c(void)

undefined8 FUN_146ee209c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc0);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146ee2108 FUN_146ee2108 body=59 status=ok
// SIG undefined FUN_146ee2108(void)

undefined8 FUN_146ee2108(longlong *param_1)

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



// FUNCTION 146ee220e FUN_146ee220e body=39 status=ok
// SIG undefined FUN_146ee220e(void)

undefined8 FUN_146ee220e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146ee225e FUN_146ee225e body=59 status=ok
// SIG undefined FUN_146ee225e(void)

undefined8 FUN_146ee225e(longlong *param_1)

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



// FUNCTION 146ee2358 FUN_146ee2358 body=39 status=ok
// SIG undefined FUN_146ee2358(void)

undefined8 FUN_146ee2358(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146ee23a8 FUN_146ee23a8 body=65 status=ok
// SIG undefined FUN_146ee23a8(void)

undefined4 FUN_146ee23a8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *(undefined4 *)(param_2 + 0x4c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee2450 FUN_146ee2450 body=57 status=ok
// SIG undefined FUN_146ee2450(void)

void FUN_146ee2450(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 146ee2500 FUN_146ee2500 body=63 status=ok
// SIG undefined FUN_146ee2500(void)

undefined1 FUN_146ee2500(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146ee2774(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 146ee2568 FUN_146ee2568 body=59 status=ok
// SIG undefined FUN_146ee2568(void)

undefined8 FUN_146ee2568(longlong *param_1)

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



// FUNCTION 146ee25b4 FUN_146ee25b4 body=40 status=ok
// SIG undefined FUN_146ee25b4(void)

void FUN_146ee25b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_146ee262a(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 146ee262a FUN_146ee262a body=145 status=ok
// SIG undefined FUN_146ee262a(void)

void FUN_146ee262a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_146ee26bc(param_1 + 0xc);
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



// FUNCTION 146ee26bc FUN_146ee26bc body=54 status=ok
// SIG undefined FUN_146ee26bc(void)

void FUN_146ee26bc(longlong *param_1)

{
  FUN_146ee26f2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ee26f2 FUN_146ee26f2 body=128 status=ok
// SIG undefined FUN_146ee26f2(void)

void FUN_146ee26f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
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


