// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b5d542 FUN_148b5d542 body=524 status=ok
// SIG undefined FUN_148b5d542(void)

void FUN_148b5d542(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  code *local_80;
  longlong *local_78;
  undefined1 local_69;
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)*param_1;
  uVar6 = param_1[0x10];
  lVar4 = (**(code **)(*plVar9 + 0x2c8))(plVar9);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144a7ba4c(lVar4);
  }
  FUN_148b55e90(uVar5,uVar6);
  local_68[0] = param_1[8];
  local_58[0] = (longlong *)0x0;
  if (local_68[0] != 0) {
    puVar7 = param_1 + 0xc;
    if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[10];
    }
    (**(code **)*puVar7)(puVar7,local_58);
  }
  local_78 = local_68;
  local_80 = FUN_148b5d8fa;
  puVar7 = param_1 + 2;
  lVar4 = FUN_14479d2ce(puVar7);
  if (lVar4 == 0) {
    if (param_1[3] != 0) {
      lVar4 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar3 == '\0')) {
        FUN_14485c47a(puVar7,lVar4);
        if (lVar4 == 0) goto LAB_148b5d6a3;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar7,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_148b5d66c;
    }
  }
  else {
LAB_148b5d66c:
    lVar8 = FUN_144a797b2();
    if ((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) && (lVar8 = FUN_14110d11e(), lVar8 != 0)) &&
       (*(int *)(lVar8 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      lVar10 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30) {
        lVar10 = lVar4;
      }
      goto LAB_148b5d6a6;
    }
  }
LAB_148b5d6a3:
  lVar10 = 0;
LAB_148b5d6a6:
  lVar4 = FUN_148b5d750(plVar9,param_1[1],lVar10,&local_80);
  if (local_68[0] != 0) {
    plVar9 = local_58[0];
    if (local_58[0] == (longlong *)0x0) {
      plVar9 = local_48;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_69 = 2;
  pcVar2 = (code *)param_1[8];
  plVar9 = param_1 + 0xc;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[10];
  }
  local_68[0] = lVar4;
  uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
  (*pcVar2)(uVar6,&local_69,local_68);
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b5d750 FUN_148b5d750 body=137 status=ok
// SIG undefined FUN_148b5d750(void)

undefined8 FUN_148b5d750(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_148b6643e();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_30 = *param_4;
    local_28 = param_4[1];
    local_38 = param_3;
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    uVar2 = FUN_148b5d7da(lVar1,&local_38,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5d7da FUN_148b5d7da body=272 status=ok
// SIG undefined FUN_148b5d7da(void)

undefined8 FUN_148b5d7da(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_14110d11e();
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (lVar3 = *param_2, lVar3 != 0)) {
      lVar1 = FUN_14110d11e();
      if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *param_2;
      }
      lVar1 = FUN_14110d11e();
      if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) {
        local_30 = &local_40;
        local_38 = &LAB_148b5d8ec;
        local_48 = *param_2;
        local_40 = param_3;
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar2 = FUN_148261a56(param_1,&local_48,&local_38);
        goto LAB_148b5d827;
      }
    }
  }
  uVar2 = 0;
LAB_148b5d827:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5d8fa FUN_148b5d8fa body=103 status=ok
// SIG undefined FUN_148b5d8fa(void)

void FUN_148b5d8fa(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 1;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  local_28 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_29,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5d962 FUN_148b5d962 body=169 status=ok
// SIG undefined FUN_148b5d962(void)

undefined8 * FUN_148b5d962(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_149e020b0;
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
  param_1[2] = lVar5;
  *param_1 = &PTR_FUN_14b59f800;
  param_1[3] = 0;
  FUN_14485c47a(param_1 + 3);
  param_1[4] = *param_3;
  param_1[6] = param_3[2];
  param_1[8] = param_3[4];
  param_3[4] = 0;
  uVar1 = param_3[6];
  uVar2 = param_3[7];
  uVar3 = param_3[9];
  param_1[0xc] = param_3[8];
  param_1[0xd] = uVar3;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  if (param_1[6] != 0) {
    param_3[2] = 0;
  }
  param_1[0xe] = param_3[10];
  return param_1;
}



// FUNCTION 148b5da0c FUN_148b5da0c body=71 status=ok
// SIG undefined FUN_148b5da0c(void)

undefined8 * FUN_148b5da0c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b59f800;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5da6c FUN_148b5da6c body=29 status=ok
// SIG undefined FUN_148b5da6c(void)

bool FUN_148b5da6c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b5da8a FUN_148b5da8a body=26 status=ok
// SIG undefined FUN_148b5da8a(void)

bool FUN_148b5da8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b5daae FUN_148b5daae body=64 status=ok
// SIG undefined FUN_148b5daae(void)

void FUN_148b5daae(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  FUN_148b5dc2c(*param_2,param_1);
  return;
}



// FUNCTION 148b5daee FUN_148b5daee body=64 status=ok
// SIG undefined FUN_148b5daee(void)

void FUN_148b5daee(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  FUN_148b5dc2c(*param_2,param_1);
  return;
}



// FUNCTION 148b5db2e FUN_148b5db2e body=98 status=ok
// SIG undefined FUN_148b5db2e(void)

void FUN_148b5db2e(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 8) {
    FUN_1446efa72(param_2 + 1,0,8,0x10);
    param_2[1].LockCount = 8;
  }
  FUN_148b5dc2c(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b5db81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b5db9a FUN_148b5db9a body=144 status=ok
// SIG undefined FUN_148b5db9a(void)

undefined4 FUN_148b5db9a(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
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
  uVar2 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar2 != '\0') {
    FUN_148b5dca4(param_1 + 0x20);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5dc2c FUN_148b5dc2c body=119 status=ok
// SIG undefined FUN_148b5dc2c(void)

undefined8 * FUN_148b5dc2c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_149e020b0;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14b59f800;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = lVar1;
  param_1[8] = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x50);
    if (*(undefined8 **)(param_2 + 0x40) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_2 + 0x40);
    }
    (**(code **)*puVar2)(puVar2,param_1 + 8);
  }
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 148b5dca4 FUN_148b5dca4 body=163 status=ok
// SIG undefined FUN_148b5dca4(void)

void FUN_148b5dca4(undefined8 *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = param_1[10];
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x2c8))();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144a7ba4c(lVar2);
  }
  FUN_148b55e90(uVar3,uVar4);
  local_30 = 0;
  local_31 = 0;
  pcVar1 = (code *)param_1[2];
  plVar5 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar1)(uVar4,&local_31,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5dd48 FUN_148b5dd48 body=230 status=ok
// SIG undefined FUN_148b5dd48(void)

undefined8 * FUN_148b5dd48(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148b5de30 FUN_148b5de30 body=230 status=ok
// SIG undefined FUN_148b5de30(void)

undefined8 * FUN_148b5de30(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148b5df18 FUN_148b5df18 body=130 status=ok
// SIG undefined FUN_148b5df18(void)

void FUN_148b5df18(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b5dfd8 FUN_148b5dfd8 body=29 status=ok
// SIG undefined FUN_148b5dfd8(void)

undefined8 FUN_148b5dfd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5dff6 FUN_148b5dff6 body=48 status=ok
// SIG undefined FUN_148b5dff6(void)

void FUN_148b5dff6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 148b5e026 FUN_148b5e026 body=349 status=ok
// SIG undefined FUN_148b5e026(void)

undefined4 * FUN_148b5e026(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148b5e184(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_148b5e314(local_40 + 2,uVar1);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_148b5e270(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x104) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
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
      FUN_148b5e454(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5e184 FUN_148b5e184 body=235 status=ok
// SIG undefined FUN_148b5e184(void)

int * FUN_148b5e184(longlong *param_1,int *param_2)

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
      FUN_1417456d2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x110);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x110) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x110 + *param_1;
  return param_2;
}



// FUNCTION 148b5e270 FUN_148b5e270 body=164 status=ok
// SIG undefined FUN_148b5e270(void)

undefined8 FUN_148b5e270(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x110);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x110) == *param_3) {
          FUN_148b51f52((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x100);
          FUN_148b5e3da(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x100);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148b5e314 FUN_148b5e314 body=198 status=ok
// SIG undefined FUN_148b5e314(void)

undefined8 * FUN_148b5e314(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)param_2[1];
  param_1[1] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_140e361c2(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  lVar2 = param_2[0x1b];
  param_1[0x1b] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar3 = DAT_14c950c29;
  lVar2 = param_2[0x1c];
  param_1[0x1c] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  lVar2 = param_2[0x1d];
  param_1[0x1d] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148b5e3da FUN_148b5e3da body=122 status=ok
// SIG undefined FUN_148b5e3da(void)

void FUN_148b5e3da(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x110) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110 + 4) = uVar5;
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



// FUNCTION 148b5e454 FUN_148b5e454 body=482 status=ok
// SIG undefined FUN_148b5e454(void)

void FUN_148b5e454(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x110;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x104 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x100 + lVar7) =
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



// FUNCTION 148b5e638 FUN_148b5e638 body=138 status=ok
// SIG undefined FUN_148b5e638(void)

void FUN_148b5e638(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x110) == param_2) {
          FUN_148b5e6c2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x110 + *param_1 + 0x100);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148b5e6c2 FUN_148b5e6c2 body=138 status=ok
// SIG undefined FUN_148b5e6c2(void)

void FUN_148b5e6c2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x110;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x104 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x100 + lVar6 * 0x110);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x110 + 0x100);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x100);
  FUN_148b51f52(*param_1 + lVar2 + 0x10);
  FUN_148b5e3da(param_1,param_2);
  return;
}



// FUNCTION 148b5e74c FUN_148b5e74c body=175 status=ok
// SIG undefined FUN_148b5e74c(void)

void FUN_148b5e74c(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_148b5e7d5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148b5e7d5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148b5e7fc FUN_148b5e7fc body=415 status=ok
// SIG undefined FUN_148b5e7fc(void)

int FUN_148b5e7fc(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        local_70 = *param_3;
        local_68 = *(undefined4 *)(param_3 + 1);
        uStack_64 = *(undefined4 *)((longlong)param_3 + 0xc);
        uStack_60 = *(undefined4 *)(param_3 + 2);
        uStack_5c = *(undefined4 *)((longlong)param_3 + 0x14);
        local_58 = (void *)0x0;
        local_50 = *(int *)(param_3 + 4);
        lVar6 = (longlong)local_50;
        pvVar2 = (void *)param_3[3];
        if (lVar6 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar2,lVar6 * 2);
        }
        lVar6 = *param_1;
        lVar8 = (longlong)iVar5 * 0x38;
        local_98 = *(undefined8 *)(lVar6 + lVar8);
        puVar1 = (undefined4 *)(lVar6 + 8 + lVar8);
        local_90 = *puVar1;
        uStack_8c = puVar1[1];
        uStack_88 = puVar1[2];
        uStack_84 = puVar1[3];
        local_80 = (void *)0x0;
        local_78 = *(int *)(lVar6 + 0x20 + lVar8);
        lVar7 = (longlong)local_78;
        pvVar2 = *(void **)(lVar6 + 0x18 + lVar8);
        if (lVar7 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,pvVar2,lVar7 * 2);
        }
        cVar3 = FUN_144a7afa6(&local_90,&local_68);
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') goto LAB_148b5e828;
        iVar5 = *(int *)(*param_1 + 0x30 + lVar8);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_148b5e828:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 148b5e99c FUN_148b5e99c body=29 status=ok
// SIG undefined FUN_148b5e99c(void)

undefined8 FUN_148b5e99c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5e9d4 FUN_148b5e9d4 body=29 status=ok
// SIG undefined FUN_148b5e9d4(void)

bool FUN_148b5e9d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b5e9f2 FUN_148b5e9f2 body=26 status=ok
// SIG undefined FUN_148b5e9f2(void)

bool FUN_148b5e9f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b5ea0c FUN_148b5ea0c body=24 status=ok
// SIG undefined FUN_148b5ea0c(void)

bool FUN_148b5ea0c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b5ea24 FUN_148b5ea24 body=101 status=ok
// SIG undefined FUN_148b5ea24(void)

void FUN_148b5ea24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59cc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b5ea8a FUN_148b5ea8a body=101 status=ok
// SIG undefined FUN_148b5ea8a(void)

void FUN_148b5ea8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59cc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b5eaf0 FUN_148b5eaf0 body=134 status=ok
// SIG undefined FUN_148b5eaf0(void)

void FUN_148b5eaf0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b59cc60;
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
                    /* WARNING: Could not recover jumptable at 0x000148b5eb67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b5eb76 FUN_148b5eb76 body=42 status=ok
// SIG undefined FUN_148b5eb76(void)

void FUN_148b5eb76(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b5eb9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148b5eba0 FUN_148b5eba0 body=154 status=ok
// SIG undefined FUN_148b5eba0(void)

bool FUN_148b5eba0(longlong param_1,undefined4 param_2)

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



// FUNCTION 148b5ec3c FUN_148b5ec3c body=474 status=ok
// SIG undefined FUN_148b5ec3c(void)

void FUN_148b5ec3c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  FUN_14063ef7a();
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar5 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar8;
  *local_48 = &PTR_FUN_14b59cd10;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_2);
  *(undefined4 *)(puVar5 + 5) = uVar3;
  puVar5[4] = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a55ecf0;
  plVar7[2] = (longlong)local_48;
  local_48 = (undefined8 *)0x0;
  *(undefined4 *)(plVar7 + 3) = local_40;
  local_40 = 0;
  if (plVar7 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar9 = (longlong *)param_1[1];
    if (plVar9 == (longlong *)0x0) goto LAB_148b5ed9a;
    param_1[1] = 0;
LAB_148b5ed5b:
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_148b5ed9a;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar7 + 2);
    plVar9 = (longlong *)param_1[1];
    if (plVar7 == plVar9) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      param_1[1] = (longlong)plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_148b5ed5b;
    }
  }
  LOCK();
  plVar9 = plVar7 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_148b5ed9a:
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5ee18 FUN_148b5ee18 body=29 status=ok
// SIG undefined FUN_148b5ee18(void)

undefined8 FUN_148b5ee18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5ee50 FUN_148b5ee50 body=29 status=ok
// SIG undefined FUN_148b5ee50(void)

bool FUN_148b5ee50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b5ee6e FUN_148b5ee6e body=26 status=ok
// SIG undefined FUN_148b5ee6e(void)

bool FUN_148b5ee6e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b5ee88 FUN_148b5ee88 body=24 status=ok
// SIG undefined FUN_148b5ee88(void)

bool FUN_148b5ee88(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b5eea0 FUN_148b5eea0 body=101 status=ok
// SIG undefined FUN_148b5eea0(void)

void FUN_148b5eea0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59cd10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b5ef06 FUN_148b5ef06 body=101 status=ok
// SIG undefined FUN_148b5ef06(void)

void FUN_148b5ef06(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59cd10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b5ef6c FUN_148b5ef6c body=134 status=ok
// SIG undefined FUN_148b5ef6c(void)

void FUN_148b5ef6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b59cd10;
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
                    /* WARNING: Could not recover jumptable at 0x000148b5efe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b5eff2 FUN_148b5eff2 body=39 status=ok
// SIG undefined FUN_148b5eff2(void)

void FUN_148b5eff2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b5f015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148b5f01a FUN_148b5f01a body=146 status=ok
// SIG undefined FUN_148b5f01a(void)

bool FUN_148b5f01a(longlong param_1)

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



// FUNCTION 148b5f0ae FUN_148b5f0ae body=29 status=ok
// SIG undefined FUN_148b5f0ae(void)

undefined8 FUN_148b5f0ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5f0e6 FUN_148b5f0e6 body=29 status=ok
// SIG undefined FUN_148b5f0e6(void)

bool FUN_148b5f0e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b5f104 FUN_148b5f104 body=26 status=ok
// SIG undefined FUN_148b5f104(void)

bool FUN_148b5f104(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b5f11e FUN_148b5f11e body=24 status=ok
// SIG undefined FUN_148b5f11e(void)

bool FUN_148b5f11e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b5f136 FUN_148b5f136 body=101 status=ok
// SIG undefined FUN_148b5f136(void)

void FUN_148b5f136(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59cd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b5f19c FUN_148b5f19c body=101 status=ok
// SIG undefined FUN_148b5f19c(void)

void FUN_148b5f19c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59cd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b5f202 FUN_148b5f202 body=134 status=ok
// SIG undefined FUN_148b5f202(void)

void FUN_148b5f202(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b59cd80;
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
                    /* WARNING: Could not recover jumptable at 0x000148b5f279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b5f288 FUN_148b5f288 body=42 status=ok
// SIG undefined FUN_148b5f288(void)

void FUN_148b5f288(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b5f2af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148b5f2b2 FUN_148b5f2b2 body=154 status=ok
// SIG undefined FUN_148b5f2b2(void)

bool FUN_148b5f2b2(longlong param_1,undefined4 param_2)

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



// FUNCTION 148b5f34e FUN_148b5f34e body=29 status=ok
// SIG undefined FUN_148b5f34e(void)

undefined8 FUN_148b5f34e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5f386 FUN_148b5f386 body=29 status=ok
// SIG undefined FUN_148b5f386(void)

bool FUN_148b5f386(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b5f3a4 FUN_148b5f3a4 body=26 status=ok
// SIG undefined FUN_148b5f3a4(void)

bool FUN_148b5f3a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b5f3be FUN_148b5f3be body=24 status=ok
// SIG undefined FUN_148b5f3be(void)

bool FUN_148b5f3be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b5f3d6 FUN_148b5f3d6 body=101 status=ok
// SIG undefined FUN_148b5f3d6(void)

void FUN_148b5f3d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59cdf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b5f43c FUN_148b5f43c body=101 status=ok
// SIG undefined FUN_148b5f43c(void)

void FUN_148b5f43c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59cdf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b5f4a2 FUN_148b5f4a2 body=134 status=ok
// SIG undefined FUN_148b5f4a2(void)

void FUN_148b5f4a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b59cdf0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b5f519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b5f528 FUN_148b5f528 body=52 status=ok
// SIG undefined FUN_148b5f528(void)

void FUN_148b5f528(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b5f559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148b5f55c FUN_148b5f55c body=162 status=ok
// SIG undefined FUN_148b5f55c(void)

bool FUN_148b5f55c(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148b5f600 FUN_148b5f600 body=282 status=ok
// SIG undefined FUN_148b5f600(void)

longlong * FUN_148b5f600(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_148b5f71b();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b5f86e(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b5f6ad;
    param_1[1] = 0;
LAB_148b5f677:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b5f6ad;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b5f6ad;
      goto LAB_148b5f677;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b5f6ad;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b5f6ad:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x410;
  FUN_140a52e78(*param_1,"SGbxUIUMGScrollBoxText",
                ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/Components/GbxUIUMGScrollBoxText.cpp"
                ,0x20);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b5f71b FUN_148b5f71b body=121 status=ok
// SIG undefined FUN_148b5f71b(void)

undefined8 * FUN_148b5f71b(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x420);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b59ce60;
  memset(puVar1 + 2,0,0x410);
  FUN_146a96250(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b59ce80;
  puVar1[0x7d] = 0;
  puVar1[0x7e] = 0;
  puVar1[0x7f] = 0;
  puVar1[0x80] = 0;
  puVar1[0x81] = 0;
  puVar1[0x82] = 0;
  return puVar1;
}



// FUNCTION 148b5f79e FUN_148b5f79e body=29 status=ok
// SIG undefined FUN_148b5f79e(void)

undefined8 FUN_148b5f79e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5f7bc FUN_148b5f7bc body=38 status=ok
// SIG undefined FUN_148b5f7bc(void)

undefined8 FUN_148b5f7bc(undefined8 param_1,int param_2)

{
  FUN_148b5f7e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5f7e6 FUN_148b5f7e6 body=136 status=ok
// SIG undefined FUN_148b5f7e6(void)

void FUN_148b5f7e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b59ce80;
  FUN_144a65a1e(param_1[0x7f],*(undefined4 *)(param_1 + 0x80));
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(param_1[0x7d],*(undefined4 *)(param_1 + 0x7e));
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(param_1[0x7b],*(undefined4 *)(param_1 + 0x7c));
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_146a9631e(param_1);
  return;
}



// FUNCTION 148b5f86e FUN_148b5f86e body=167 status=ok
// SIG undefined FUN_148b5f86e(void)

void FUN_148b5f86e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b5f8e9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b5f8e9;
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
LAB_148b5f8e9:
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
                    /* WARNING: Could not recover jumptable at 0x000148b5f909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b5f92e FUN_148b5f92e body=29 status=ok
// SIG undefined FUN_148b5f92e(void)

undefined8 FUN_148b5f92e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5f94c FUN_148b5f94c body=31 status=ok
// SIG undefined FUN_148b5f94c(void)

undefined8 FUN_148b5f94c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5f988 FUN_148b5f988 body=93 status=ok
// SIG undefined FUN_148b5f988(void)

void FUN_148b5f988(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b59d6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b5f9e6 FUN_148b5f9e6 body=126 status=ok
// SIG undefined FUN_148b5f9e6(void)

void FUN_148b5f9e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b59d6b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b5fa55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b5fa64 FUN_148b5fa64 body=21 status=ok
// SIG undefined FUN_148b5fa64(void)

undefined8 FUN_148b5fa64(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b5fa7a FUN_148b5fa7a body=415 status=ok
// SIG undefined FUN_148b5fa7a(void)

int FUN_148b5fa7a(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        local_70 = *param_3;
        local_68 = *(undefined4 *)(param_3 + 1);
        uStack_64 = *(undefined4 *)((longlong)param_3 + 0xc);
        uStack_60 = *(undefined4 *)(param_3 + 2);
        uStack_5c = *(undefined4 *)((longlong)param_3 + 0x14);
        local_58 = (void *)0x0;
        local_50 = *(int *)(param_3 + 4);
        lVar6 = (longlong)local_50;
        pvVar2 = (void *)param_3[3];
        if (lVar6 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar2,lVar6 * 2);
        }
        lVar6 = *param_1;
        lVar8 = (longlong)iVar5 * 0x38;
        local_98 = *(undefined8 *)(lVar6 + lVar8);
        puVar1 = (undefined4 *)(lVar6 + 8 + lVar8);
        local_90 = *puVar1;
        uStack_8c = puVar1[1];
        uStack_88 = puVar1[2];
        uStack_84 = puVar1[3];
        local_80 = (void *)0x0;
        local_78 = *(int *)(lVar6 + 0x20 + lVar8);
        lVar7 = (longlong)local_78;
        pvVar2 = *(void **)(lVar6 + 0x18 + lVar8);
        if (lVar7 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,pvVar2,lVar7 * 2);
        }
        cVar3 = FUN_144a7afa6(&local_90,&local_68);
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') goto LAB_148b5faa6;
        iVar5 = *(int *)(*param_1 + 0x30 + lVar8);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_148b5faa6:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 148b5fc1a FUN_148b5fc1a body=48 status=ok
// SIG undefined FUN_148b5fc1a(void)

void FUN_148b5fc1a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148b5fc4a FUN_148b5fc4a body=197 status=ok
// SIG undefined FUN_148b5fc4a(void)

longlong FUN_148b5fc4a(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140e9e504();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148b5fd10 FUN_148b5fd10 body=132 status=ok
// SIG undefined FUN_148b5fd10(void)

void FUN_148b5fd10(longlong param_1,int param_2)

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



// FUNCTION 148b5fd96 FUN_148b5fd96 body=76 status=ok
// SIG undefined FUN_148b5fd96(void)

void FUN_148b5fd96(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a88242();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148b5fdd3;
    }
  }
  lVar2 = 0;
LAB_148b5fdd3:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148b5fde2 FUN_148b5fde2 body=91 status=ok
// SIG undefined FUN_148b5fde2(void)

longlong * FUN_148b5fde2(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  
  *param_1 = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  param_1[1] = param_3;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 148b5fe3e FUN_148b5fe3e body=147 status=ok
// SIG undefined FUN_148b5fe3e(void)

void FUN_148b5fe3e(longlong param_1,int param_2)

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



// FUNCTION 148b5fee0 FUN_148b5fee0 body=62 status=ok
// SIG undefined FUN_148b5fee0(void)

void FUN_148b5fee0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148b5ff1e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148b5ff1e FUN_148b5ff1e body=112 status=ok
// SIG undefined FUN_148b5ff1e(void)

ulonglong FUN_148b5ff1e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148b5ff58;
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
LAB_148b5ff58:
  return param_2 & 0xffffffff;
}



// FUNCTION 148b5ff8e FUN_148b5ff8e body=135 status=ok
// SIG undefined FUN_148b5ff8e(void)

undefined8 FUN_148b5ff8e(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  
  if (DAT_14cb9d9e0 != DAT_14cb9da0c) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar4 = &DAT_14cb9da10;
    if (DAT_14cb9da18 != (undefined *)0x0) {
      puVar4 = DAT_14cb9da18;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(DAT_14cb9da20 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    while (iVar1 != -1) {
      lVar3 = DAT_14cb9d9d8 + (longlong)iVar1 * 0x20;
      if (*(ulonglong *)(DAT_14cb9d9d8 + (longlong)iVar1 * 0x20) == param_1) goto LAB_148b5ff9e;
      iVar1 = *(int *)(lVar3 + 0x18);
    }
  }
  lVar3 = 0;
LAB_148b5ff9e:
  return *(undefined8 *)(lVar3 + 8);
}



// FUNCTION 148b60016 FUN_148b60016 body=413 status=ok
// SIG undefined FUN_148b60016(void)

undefined8 FUN_148b60016(ulonglong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong *local_30;
  longlong **local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb9d9e0 != DAT_14cb9da0c) {
    uVar6 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    puVar7 = &DAT_14cb9da10;
    if (DAT_14cb9da18 != (undefined *)0x0) {
      puVar7 = DAT_14cb9da18;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(DAT_14cb9da20 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar4 != -1) {
      lVar3 = DAT_14cb9d9d8 + (longlong)iVar4 * 0x20;
      if (*(ulonglong *)(DAT_14cb9d9d8 + (longlong)iVar4 * 0x20) == param_1) {
        if ((lVar3 != 0) && ((undefined8 *)(lVar3 + 8) != (undefined8 *)0x0)) {
          uVar8 = *(undefined8 *)(lVar3 + 8);
          goto LAB_148b60193;
        }
        break;
      }
      iVar4 = *(int *)(lVar3 + 0x18);
    }
  }
  local_38 = (longlong *)FUN_14001cc68(0x78,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14b5a32d0;
  local_40 = local_38 + 2;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[2] = (longlong)&PTR_FUN_14b59f898;
  local_38[5] = param_1;
  *(undefined2 *)(local_38 + 6) = 0;
  *(undefined8 *)((longlong)local_38 + 0x34) = 0;
  *(undefined8 *)((longlong)local_38 + 0x3c) = 0;
  *(undefined8 *)((longlong)local_38 + 0x44) = 0;
  *(undefined8 *)((longlong)local_38 + 0x4c) = 0;
  *(undefined8 *)((longlong)local_38 + 0x54) = 0;
  *(undefined8 *)((longlong)local_38 + 0x5c) = 0;
  *(undefined8 *)((longlong)local_38 + 100) = 0;
  *(undefined8 *)((longlong)local_38 + 0x6c) = 0;
  *(undefined4 *)((longlong)local_38 + 0x74) = 0;
  FUN_148b68ee8(&local_40);
  local_30 = &local_48;
  local_48 = param_1;
  local_28 = &local_40;
  FUN_148b68f90(&local_1c);
  plVar5 = local_38;
  uVar8 = *(undefined8 *)(DAT_14cb9d9d8 + 8 + (longlong)local_1c * 0x20);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_148b60193:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b601b4 FUN_148b601b4 body=136 status=ok
// SIG undefined FUN_148b601b4(void)

ulonglong FUN_148b601b4(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  
  if (DAT_14cb9d9e0 != DAT_14cb9da0c) {
    uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    puVar4 = &DAT_14cb9da10;
    if (DAT_14cb9da18 != (undefined *)0x0) {
      puVar4 = DAT_14cb9da18;
    }
    uVar2 = (ulonglong)(DAT_14cb9da20 - 1U & (uVar1 >> 0x10 ^ uVar1));
    iVar3 = *(int *)(puVar4 + uVar2 * 4);
    if (iVar3 != -1) {
      do {
        bVar5 = *(ulonglong *)(DAT_14cb9d9d8 + (longlong)iVar3 * 0x20) == param_1;
        uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar5);
        if (bVar5) {
          return uVar2;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + DAT_14cb9d9d8 + 0x18);
      } while (iVar3 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148b6023c FUN_148b6023c body=46 status=ok
// SIG undefined FUN_148b6023c(void)

undefined8 FUN_148b6023c(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_148b601b4();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_148b5ff8e(param_1);
  uVar2 = FUN_148b6026a(uVar2);
  return uVar2;
}



// FUNCTION 148b6026a FUN_148b6026a body=79 status=ok
// SIG undefined FUN_148b6026a(void)

ulonglong FUN_148b6026a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (((*(longlong *)(param_1 + 0x48) == 0) || (*(longlong *)(param_1 + 0x50) == 0)) ||
     (uVar3 = 1, *(int *)(*(longlong *)(param_1 + 0x50) + 8) < 1)) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (0 < iVar1) {
      uVar2 = *(uint *)(param_1 + 0x24);
      if ((int)uVar2 < iVar1) {
        if (uVar2 != iVar1 - 1U) {
          return 1;
        }
        uVar3 = FUN_148b60b2e(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 8))
        ;
        return uVar3 ^ 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 148b602ba FUN_148b602ba body=190 status=ok
// SIG undefined FUN_148b602ba(void)

void FUN_148b602ba(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_148b60016();
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = (void *)0x0;
  local_40 = param_2[6];
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_2 + 4);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
  }
  FUN_143fc9c98(uVar1,&local_58,param_3);
  if (*(longlong *)(param_2 + 4) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6037a FUN_148b6037a body=62 status=ok
// SIG undefined FUN_148b6037a(void)

void FUN_148b6037a(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_148b6023c();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148b6039f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  uVar2 = FUN_148b60016(param_1);
  FUN_143fc9e06(uVar2);
  return;
}



// FUNCTION 148b603b8 FUN_148b603b8 body=155 status=ok
// SIG undefined FUN_148b603b8(void)

void FUN_148b603b8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x50) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x50) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x48);
    local_20 = *(longlong *)(param_1 + 0x50);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b60464 FUN_148b60464 body=172 status=ok
// SIG undefined FUN_148b60464(void)

void FUN_148b60464(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_148b604ef;
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 == (longlong *)0x0) goto LAB_148b604ef;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1417f21ce();
    *(undefined8 *)(param_1 + 0x18) = 0;
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar3 == (longlong *)0x0) goto LAB_148b604ef;
    *(undefined8 *)(param_1 + 0x20) = 0;
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
LAB_148b604ef:
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b60512 FUN_148b60512 body=80 status=ok
// SIG undefined FUN_148b60512(void)

longlong * FUN_148b60512(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_148b694d3(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 148b60562 FUN_148b60562 body=433 status=ok
// SIG undefined FUN_148b60562(void)

undefined8
FUN_148b60562(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78 [3];
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78[2] = 0;
  local_60 = 0;
  local_58 = *param_4;
  *param_4 = 0;
  uStack_50 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_144a450dc(local_78 + 2,&local_58);
  FUN_1449db362(&local_58);
  if (DAT_14cb0a348 == '\x01') {
    local_78[0] = 0;
    local_78[1] = 0;
  }
  else {
    FUN_140056680(local_78,L"AsyncMixin");
  }
  local_58 = *param_3;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_3 + 3);
  lVar1 = (longlong)local_40;
  _Src = (void *)param_3[2];
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  local_90 = &local_38;
  local_98 = &local_58;
  FUN_140a1e2b2(&local_88);
  local_a0 = local_78;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 100;
  FUN_140421d62(param_1,param_2,&local_88,local_78 + 2);
  FUN_140861e20(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(local_78 + 2);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b60714 FUN_148b60714 body=334 status=ok
// SIG undefined FUN_148b60714(void)

void FUN_148b60714(longlong param_1)

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
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_143fc9f28();
  if (((*(longlong *)(param_1 + 0x48) == 0) || (*(longlong *)(param_1 + 0x50) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x50) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    local_38 = 2;
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
    *local_40 = &PTR_FUN_14b5a3360;
    local_40[3] = param_1;
    local_48 = 0;
    FUN_1405f67fc(uVar4,&local_30,&local_40,L"FGbxUIUMGAsyncMixin_TryScheduleStart");
    *(undefined8 *)(param_1 + 0x48) = local_30;
    local_30 = 0;
    plVar2 = *(longlong **)(param_1 + 0x50);
    *(longlong **)(param_1 + 0x50) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
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
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b60864 FUN_148b60864 body=145 status=ok
// SIG undefined FUN_148b60864(void)

void FUN_148b60864(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_148b60b2e();
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 == 0) {
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_148b60b88(*(longlong *)(param_1 + 0x28),param_2);
      }
    }
    else {
      local_38 = 0;
      local_30 = 0;
      FUN_14009d848(&local_38,param_2);
      FUN_1417f21ce(lVar1,&local_38);
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b608f6 FUN_148b608f6 body=386 status=ok
// SIG undefined FUN_148b608f6(void)

longlong * FUN_148b608f6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148b60a07:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b5a33d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148b60a07;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b5a33d0;
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



// FUNCTION 148b60a78 FUN_148b60a78 body=81 status=ok
// SIG undefined FUN_148b60a78(void)

void FUN_148b60a78(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_1 + 0x60))();
    if (((int)param_1[1] != 0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  return;
}



// FUNCTION 148b60aca FUN_148b60aca body=99 status=ok
// SIG undefined FUN_148b60aca(void)

void FUN_148b60aca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 148b60b2e FUN_148b60b2e body=90 status=ok
// SIG undefined FUN_148b60b2e(void)

ulonglong FUN_148b60b2e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar4 = CONCAT71(uVar5,1);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x30) != 0)) &&
       (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x30))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x30) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(lVar1 + 0x28);
        }
        cVar2 = (**(code **)(*plVar3 + 0x58))();
        uVar4 = CONCAT71(uVar5,cVar2 == '\x01');
      }
    }
  }
  else {
    uVar4 = CONCAT71(uVar5,*(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 148b60b88 FUN_148b60b88 body=315 status=ok
// SIG undefined FUN_148b60b88(void)

void FUN_148b60b88(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_48 [16];
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x30) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x28);
      }
      cVar2 = (**(code **)(*plVar4 + 0x58))();
      if (cVar2 != '\x01') {
        FUN_14009d848(param_1 + 0x38,param_2);
        if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
           (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
          uVar3 = FUN_1401cb356();
          local_38 = FUN_143fca2a6;
          local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
          FUN_148b60cc4(local_48,param_1);
          local_58 = 0x3e23d70a;
          FUN_1405f67fc(uVar3,&local_38,local_48,L"FAsyncCondition_BindCompleteDelegate");
          *(code **)(param_1 + 0x18) = local_38;
          local_38 = (code *)0x0;
          plVar4 = *(longlong **)(param_1 + 0x20);
          *(longlong **)(param_1 + 0x20) = local_30;
          local_30 = (longlong *)0x0;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
            if (local_30 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_30 + 0x10))();
              }
            }
          }
          FUN_1449db362(local_48);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b60cc4 FUN_148b60cc4 body=386 status=ok
// SIG undefined FUN_148b60cc4(void)

longlong * FUN_148b60cc4(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148b60dd5:
    *puVar5 = &PTR_LAB_149e02020;
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
    *puVar5 = &PTR_FUN_14b5a3440;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148b60dd5;
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
    *puVar5 = &PTR_LAB_149e02020;
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
    *puVar5 = &PTR_FUN_14b5a3440;
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



// FUNCTION 148b60f2c FUN_148b60f2c body=265 status=ok
// SIG undefined FUN_148b60f2c(void)

void FUN_148b60f2c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = *(undefined8 *)(param_1 + 0xc0);
  local_50 = *(undefined4 *)(param_1 + 200);
  uStack_4c = *(undefined4 *)(param_1 + 0xcc);
  uStack_48 = *(undefined4 *)(param_1 + 0xd0);
  uStack_44 = *(undefined4 *)(param_1 + 0xd4);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 0xe0);
  lVar1 = (longlong)local_38;
  _Src = *(void **)(param_1 + 0xd8);
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_4c;
  *(undefined4 *)(param_3 + 2) = uStack_48;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_44;
  if (&local_58 == param_3) {
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_3[3] != 0) {
      FUN_1400020a8();
    }
    param_3[3] = local_40;
    *(int *)(param_3 + 4) = local_38;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6106e FUN_148b6106e body=45 status=ok
// SIG undefined FUN_148b6106e(void)

void FUN_148b6106e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b62916(param_1 + 0xe8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b611c0 FUN_148b611c0 body=151 status=ok
// SIG undefined FUN_148b611c0(void)

void FUN_148b611c0(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x33) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61258 FUN_148b61258 body=152 status=ok
// SIG undefined FUN_148b61258(void)

void FUN_148b61258(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x50) = local_20;
  *(undefined4 *)(param_1 + 0x40) = local_30;
  *(undefined4 *)(param_1 + 0x44) = uStack_2c;
  *(undefined4 *)(param_1 + 0x48) = uStack_28;
  *(undefined4 *)(param_1 + 0x4c) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b612f6 FUN_148b612f6 body=151 status=ok
// SIG undefined FUN_148b612f6(void)

void FUN_148b612f6(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x31) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6138e FUN_148b6138e body=155 status=ok
// SIG undefined FUN_148b6138e(void)

void FUN_148b6138e(longlong param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0xb8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6142a FUN_148b6142a body=179 status=ok
// SIG undefined FUN_148b6142a(void)

void FUN_148b6142a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  *(longlong *)(param_1 + 0xa8) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b614e2 FUN_148b614e2 body=151 status=ok
// SIG undefined FUN_148b614e2(void)

void FUN_148b614e2(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x30) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6157a FUN_148b6157a body=160 status=ok
// SIG undefined FUN_148b6157a(void)

void FUN_148b6157a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6161c FUN_148b6161c body=160 status=ok
// SIG undefined FUN_148b6161c(void)

void FUN_148b6161c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b616be FUN_148b616be body=146 status=ok
// SIG undefined FUN_148b616be(void)

void FUN_148b616be(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x36) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61752 FUN_148b61752 body=431 status=ok
// SIG undefined FUN_148b61752(void)

void FUN_148b61752(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_140f4d408();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  pvVar2 = pvStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58;
  local_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  uStack_70 = (undefined4)local_48;
  uStack_6c = local_48._4_4_;
  local_68 = (void *)0x0;
  lVar4 = (longlong)(int)local_38;
  local_60 = (int)local_38;
  if (lVar4 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_38 & 0xffffffff,0);
    memcpy(local_68,pvVar2,lVar4 * 2);
  }
  iVar3 = local_60;
  pvVar2 = local_68;
  *(undefined8 *)(param_1 + 0xc0) = local_80;
  *(undefined4 *)(param_1 + 200) = local_78;
  *(undefined4 *)(param_1 + 0xcc) = uStack_74;
  *(undefined4 *)(param_1 + 0xd0) = uStack_70;
  *(undefined4 *)(param_1 + 0xd4) = uStack_6c;
  ppvVar1 = (void **)(param_1 + 0xd8);
  if (ppvVar1 != &local_68) {
    lVar4 = (longlong)local_60;
    *(int *)(param_1 + 0xe0) = local_60;
    if (local_60 == 0 && *(int *)(param_1 + 0xe4) == 0) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_60);
      if (iVar3 != 0) {
        memcpy(*ppvVar1,pvVar2,lVar4 * 2);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61906 FUN_148b61906 body=151 status=ok
// SIG undefined FUN_148b61906(void)

void FUN_148b61906(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x34) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6199e FUN_148b6199e body=160 status=ok
// SIG undefined FUN_148b6199e(void)

void FUN_148b6199e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61a40 FUN_148b61a40 body=160 status=ok
// SIG undefined FUN_148b61a40(void)

void FUN_148b61a40(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61ae2 FUN_148b61ae2 body=158 status=ok
// SIG undefined FUN_148b61ae2(void)

void FUN_148b61ae2(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x90) = local_20;
  *(undefined4 *)(param_1 + 0x80) = local_30;
  *(undefined4 *)(param_1 + 0x84) = uStack_2c;
  *(undefined4 *)(param_1 + 0x88) = uStack_28;
  *(undefined4 *)(param_1 + 0x8c) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61b82 FUN_148b61b82 body=149 status=ok
// SIG undefined FUN_148b61b82(void)

void FUN_148b61b82(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x38) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61c18 FUN_148b61c18 body=146 status=ok
// SIG undefined FUN_148b61c18(void)

void FUN_148b61c18(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x35) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61cac FUN_148b61cac body=179 status=ok
// SIG undefined FUN_148b61cac(void)

void FUN_148b61cac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  *(longlong *)(param_1 + 0xb0) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61d60 FUN_148b61d60 body=143 status=ok
// SIG undefined FUN_148b61d60(void)

void FUN_148b61d60(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x58) = local_28;
  *(undefined4 *)(param_1 + 0x5c) = uStack_24;
  *(undefined4 *)(param_1 + 0x60) = uStack_20;
  *(undefined4 *)(param_1 + 100) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61df4 FUN_148b61df4 body=151 status=ok
// SIG undefined FUN_148b61df4(void)

void FUN_148b61df4(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x32) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61e8c FUN_148b61e8c body=146 status=ok
// SIG undefined FUN_148b61e8c(void)

void FUN_148b61e8c(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x37) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61f20 FUN_148b61f20 body=152 status=ok
// SIG undefined FUN_148b61f20(void)

void FUN_148b61f20(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x78) = local_20;
  *(undefined4 *)(param_1 + 0x68) = local_30;
  *(undefined4 *)(param_1 + 0x6c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x70) = uStack_28;
  *(undefined4 *)(param_1 + 0x74) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b61fda FUN_148b61fda body=2362 status=ok
// SIG undefined FUN_148b61fda(void)

undefined8 FUN_148b61fda(longlong param_1,double *param_2,float *param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_168 [32];
  float *local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar6 = *(char *)(param_1 + 0x35);
  if (cVar6 == '\0') {
    dVar8 = *(double *)(param_1 + 0x80);
    dVar9 = *(double *)(param_1 + 0x88);
    dVar11 = *(double *)(param_1 + 0x90);
    if ((dVar8 == DAT_14c8464e0) && (!NAN(dVar8) && !NAN(DAT_14c8464e0))) {
      if ((dVar9 == DAT_14c8464e8) && (!NAN(dVar9) && !NAN(DAT_14c8464e8))) {
        if ((dVar11 == DAT_14c8464f0) && (!NAN(dVar11) && !NAN(DAT_14c8464f0)))
        goto switchD_148b620dd_default;
      }
    }
    local_f8 = dVar11 + *(double *)(param_1 + 0x78);
    local_100 = dVar9 + *(double *)(param_1 + 0x70);
    local_108 = dVar8 + *(double *)(param_1 + 0x68);
    cVar6 = FUN_147ba2808(param_2,&local_108,&local_120,param_3);
    if (cVar6 != '\0') {
      dVar8 = 1.0;
    }
    else {
      dVar8 = -1.0;
    }
    local_130 = dVar8 * *(double *)(param_1 + 0x58) + local_120;
    local_128 = *(double *)(param_1 + 0x60) + local_118;
    if ((((cVar6 == '\0') && (fVar15 = (float)local_130, (float)DAT_14c84635c < fVar15)) &&
        (fVar1 = *param_3, fVar15 < fVar1)) &&
       ((fVar14 = (float)local_128, DAT_14c84635c._4_4_ < fVar14 &&
        (fVar2 = param_3[1], fVar14 < fVar2)))) {
      fVar14 = fVar14 - fVar2 * 0.5;
      fVar15 = fVar15 - fVar1 * 0.5;
      fVar22 = fVar15 * fVar15 + fVar14 * fVar14;
      if (1e-08 < fVar22) {
        fVar14 = fVar14 * (1.0 / SQRT(fVar22));
      }
      else {
        fVar14 = 0.0;
      }
      local_128 = (double)(fVar2 * 0.5 + fVar2 * fVar14);
      local_130 = (double)(fVar1 * 0.5 +
                          fVar1 * (float)(-(uint)(1e-08 < fVar22) &
                                         (uint)(fVar15 * (1.0 / SQRT(fVar22)))));
    }
    dVar8 = (local_f8 - param_2[2]) * (local_f8 - param_2[2]) +
            (local_100 - param_2[1]) * (local_100 - param_2[1]) +
            (local_108 - *param_2) * (local_108 - *param_2);
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0xb0);
    if (plVar5 == (longlong *)0x0) {
switchD_148b620dd_default:
      uVar7 = 0;
      goto LAB_148b6283e;
    }
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      uVar18 = (undefined4)plVar5[0x4c];
      uVar19 = *(undefined4 *)((longlong)plVar5 + 0x264);
      uVar20 = (undefined4)plVar5[0x4d];
      uVar21 = *(undefined4 *)((longlong)plVar5 + 0x26c);
      uVar16 = (undefined4)plVar5[0x4e];
      uVar17 = (undefined4)((ulonglong)plVar5[0x4e] >> 0x20);
    }
    else {
      (**(code **)(*plVar5 + 0x4a8))(plVar5,&local_108,*(longlong *)(param_1 + 0xb8),0);
      uVar16 = (undefined4)CONCAT71(uStack_d7,local_d8);
      uVar17 = (undefined4)((uint7)uStack_d7 >> 0x18);
      cVar6 = *(char *)(param_1 + 0x35);
      uVar18 = (undefined4)local_e8;
      uVar19 = local_e8._4_4_;
      uVar20 = (undefined4)uStack_e0;
      uVar21 = uStack_e0._4_4_;
    }
    dVar8 = (double)CONCAT44(uVar17,uVar16) + *(double *)(param_1 + 0x78);
    dVar11 = (double)CONCAT44(uVar21,uVar20) + *(double *)(param_1 + 0x70);
    dVar9 = (double)CONCAT44(uVar19,uVar18) + *(double *)(param_1 + 0x68);
    local_120 = dVar9;
    local_118 = dVar11;
    local_110 = dVar8;
    switch(cVar6) {
    case '\x01':
      cVar6 = FUN_147ba2808(param_2,&local_120,&local_108,param_3);
      if (cVar6 != '\0') {
        dVar8 = 1.0;
      }
      else {
        dVar8 = -1.0;
      }
      local_130 = dVar8 * *(double *)(param_1 + 0x58) + local_108;
      local_128 = *(double *)(param_1 + 0x60) + local_100;
      if (((cVar6 == '\0') && (fVar15 = (float)local_130, (float)DAT_14c84635c < fVar15)) &&
         ((fVar1 = *param_3, fVar15 < fVar1 &&
          ((fVar14 = (float)local_128, DAT_14c84635c._4_4_ < fVar14 &&
           (fVar2 = param_3[1], fVar14 < fVar2)))))) {
        fVar14 = fVar14 - fVar2 * 0.5;
        fVar15 = fVar15 - fVar1 * 0.5;
        fVar22 = fVar15 * fVar15 + fVar14 * fVar14;
        if (1e-08 < fVar22) {
          fVar14 = fVar14 * (1.0 / SQRT(fVar22));
        }
        else {
          fVar14 = 0.0;
        }
        local_128 = (double)(fVar2 * 0.5 + fVar2 * fVar14);
        local_130 = (double)(fVar1 * 0.5 +
                            fVar1 * (float)(-(uint)(1e-08 < fVar22) &
                                           (uint)(fVar15 * (1.0 / SQRT(fVar22)))));
      }
      dVar8 = (local_118 - param_2[1]) * (local_118 - param_2[1]) +
              (local_120 - *param_2) * (local_120 - *param_2);
      dVar9 = local_110;
      goto LAB_148b6281d;
    case '\x02':
      dVar11 = (double)plVar5[0x2e] + (double)plVar5[0x31];
      dVar9 = (double)plVar5[0x2d] + (double)plVar5[0x30];
      dVar8 = (double)plVar5[0x2c] + (double)plVar5[0x2f];
      local_f8 = (double)plVar5[0x2e] - (double)plVar5[0x31];
      local_100 = (double)plVar5[0x2d] - (double)plVar5[0x30];
      local_108 = (double)plVar5[0x2c] - (double)plVar5[0x2f];
      break;
    case '\x03':
    case '\x05':
      local_d8 = 0;
      if (cVar6 == '\x05') {
        (**(code **)(*(longlong *)plVar5[0x15] + 0x520))((longlong *)plVar5[0x15],&local_108,0,0);
      }
      else {
        uStack_e0 = (double)plVar5[0x2e] + (double)plVar5[0x31];
        local_e8 = (double)plVar5[0x2d] + (double)plVar5[0x30];
        local_f0 = (double)plVar5[0x2c] + (double)plVar5[0x2f];
        local_f8 = (double)plVar5[0x2e] - (double)plVar5[0x31];
        local_100 = (double)plVar5[0x2d] - (double)plVar5[0x30];
        local_108 = (double)plVar5[0x2c] - (double)plVar5[0x2f];
        local_d8 = 1;
      }
      local_148 = param_3;
      cVar6 = FUN_147ba23c6(param_2,&local_108,&local_130,&local_140);
      if (cVar6 != '\0') {
        dVar12 = 1.0;
      }
      else {
        dVar12 = -1.0;
      }
      dVar13 = dVar12 * *(double *)(param_1 + 0x58) +
               (local_140 - local_130) * *(double *)(param_1 + 0x40) + local_130;
      dVar10 = (local_138 - local_128) * *(double *)(param_1 + 0x48) + local_128 +
               *(double *)(param_1 + 0x60);
      dVar12 = *param_2;
      dVar3 = param_2[1];
      dVar4 = param_2[2];
      if (((cVar6 == '\0') && (fVar15 = (float)dVar13, (float)DAT_14c84635c < fVar15)) &&
         ((fVar1 = *param_3, fVar15 < fVar1 &&
          ((fVar14 = (float)dVar10, DAT_14c84635c._4_4_ < fVar14 &&
           (fVar2 = param_3[1], fVar14 < fVar2)))))) {
        fVar14 = fVar14 - fVar2 * 0.5;
        fVar15 = fVar15 - fVar1 * 0.5;
        fVar22 = fVar15 * fVar15 + fVar14 * fVar14;
        if (1e-08 < fVar22) {
          fVar14 = fVar14 * (1.0 / SQRT(fVar22));
        }
        else {
          fVar14 = 0.0;
        }
        dVar13 = (double)(fVar1 * 0.5 +
                         fVar1 * (float)(-(uint)(1e-08 < fVar22) &
                                        (uint)(fVar15 * (1.0 / SQRT(fVar22)))));
        dVar10 = (double)(fVar2 * 0.5 + fVar2 * fVar14);
      }
      *param_4 = dVar13;
      param_4[1] = dVar10;
      param_4[2] = SQRT((dVar8 - dVar4) * (dVar8 - dVar4) +
                        (dVar11 - dVar3) * (dVar11 - dVar3) + (dVar9 - dVar12) * (dVar9 - dVar12));
      goto LAB_148b6283c;
    case '\x04':
      (**(code **)(*(longlong *)plVar5[0x15] + 0x520))((longlong *)plVar5[0x15],&local_108,0,0);
      dVar8 = local_f0;
      dVar9 = local_e8;
      dVar11 = uStack_e0;
      break;
    default:
      goto switchD_148b620dd_default;
    }
    local_f8 = (*(double *)(param_1 + 0x50) + -0.5) * (dVar11 - local_f8) +
               (local_f8 + dVar11) * 0.5;
    local_100 = (*(double *)(param_1 + 0x48) + -0.5) * (dVar9 - local_100) +
                (local_100 + dVar9) * 0.5;
    local_108 = (*(double *)(param_1 + 0x40) + -0.5) * (dVar8 - local_108) +
                (local_108 + dVar8) * 0.5;
    cVar6 = FUN_147ba2808(param_2,&local_108,&local_130,param_3);
    if (cVar6 != '\0') {
      dVar8 = 1.0;
    }
    else {
      dVar8 = -1.0;
    }
    local_130 = dVar8 * *(double *)(param_1 + 0x58) + local_130;
    local_128 = *(double *)(param_1 + 0x60) + local_128;
    if ((((cVar6 == '\0') && (fVar15 = (float)local_130, (float)DAT_14c84635c < fVar15)) &&
        (fVar1 = *param_3, fVar15 < fVar1)) &&
       ((fVar14 = (float)local_128, DAT_14c84635c._4_4_ < fVar14 &&
        (fVar2 = param_3[1], fVar14 < fVar2)))) {
      fVar14 = fVar14 - fVar2 * 0.5;
      fVar15 = fVar15 - fVar1 * 0.5;
      fVar22 = fVar15 * fVar15 + fVar14 * fVar14;
      if (1e-08 < fVar22) {
        fVar14 = fVar14 * (1.0 / SQRT(fVar22));
      }
      else {
        fVar14 = 0.0;
      }
      local_128 = (double)(fVar2 * 0.5 + fVar2 * fVar14);
      local_130 = (double)(fVar1 * 0.5 +
                          fVar1 * (float)(-(uint)(1e-08 < fVar22) &
                                         (uint)(fVar15 * (1.0 / SQRT(fVar22)))));
    }
    dVar8 = (local_100 - param_2[1]) * (local_100 - param_2[1]) +
            (local_108 - *param_2) * (local_108 - *param_2);
    dVar9 = local_f8;
LAB_148b6281d:
    dVar8 = (dVar9 - param_2[2]) * (dVar9 - param_2[2]) + dVar8;
  }
  *param_4 = local_130;
  param_4[1] = local_128;
  param_4[2] = SQRT(dVar8);
LAB_148b6283c:
  uVar7 = 1;
LAB_148b6283e:
  if ((local_a0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148b62916 FUN_148b62916 body=197 status=ok
// SIG undefined FUN_148b62916(void)

longlong FUN_148b62916(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1449db7f2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148b629e0 FUN_148b629e0 body=80 status=ok
// SIG undefined FUN_148b629e0(void)

void FUN_148b629e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x220) = 0;
  plVar3 = *(longlong **)(param_1 + 0x228);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x228) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b62a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b62a30 FUN_148b62a30 body=749 status=ok
// SIG undefined FUN_148b62a30(void)

longlong * FUN_148b62a30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_358 [32];
  undefined1 **local_338;
  undefined1 local_330 [16];
  longlong *local_320;
  undefined1 *local_318;
  longlong **local_310;
  undefined1 local_308 [8];
  longlong *local_300;
  longlong local_2f0;
  longlong *local_2e8;
  undefined1 local_2e0 [680];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar4 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar4 == 0) {
    FUN_140a53a96(local_2e0);
    local_338 = &local_318;
    FUN_140a53d66(local_308,&DAT_149efe19f,
                  ".\\../Plugins/Gearbox/GbxUIUMG/Source/GbxUIUMG/Private/IndicatorSystem/GbxUIUMGIndicatorLayer.cpp"
                  ,0x31);
    FUN_140a50bf4(local_308,&local_2f0,local_2e0);
    *param_2 = local_2f0;
    param_2[1] = (longlong)local_2e8;
    if (local_2e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
      UNLOCK();
      if (local_2e8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_2e8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_2e8)(local_2e8);
          LOCK();
          piVar1 = (int *)((longlong)local_2e8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2e8 + 0x10))(local_2e8);
          }
        }
      }
    }
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_300 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar1 = (int *)((longlong)local_300 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_300 + 0x10))(local_300);
        }
      }
    }
    FUN_140a5660c(local_2e0);
    goto LAB_148b62b24;
  }
  FUN_148b62d1e(local_2e0);
  local_320 = param_1 + 0x2e;
  FUN_141237a6a(local_330,lVar4,0);
  local_318 = local_330;
  local_310 = &local_320;
  FUN_148b69c66(local_308);
  FUN_148b62d98(local_308,&local_2f0,local_2e0);
  plVar3 = local_2e8;
  if (local_2e8 == (longlong *)0x0) {
    param_1[0x44] = local_2f0;
    plVar5 = (longlong *)param_1[0x45];
    if (plVar5 != (longlong *)0x0) {
      param_1[0x45] = 0;
LAB_148b62ce6:
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148b62cc7:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
    UNLOCK();
    param_1[0x44] = local_2f0;
    plVar5 = (longlong *)param_1[0x45];
    if (local_2e8 == plVar5) {
      LOCK();
      plVar5 = local_2e8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_2e8)(local_2e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar3;
        goto joined_r0x000148b62cc7;
      }
    }
    else {
      param_1[0x45] = (longlong)local_2e8;
      if (plVar5 != (longlong *)0x0) goto LAB_148b62ce6;
    }
  }
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2e8)(local_2e8);
      LOCK();
      piVar1 = (int *)((longlong)local_2e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2e8 + 0x10))(local_2e8);
      }
    }
  }
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_300 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)local_300 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_300 + 0x10))(local_300);
      }
    }
  }
  FUN_148b62e14(local_2e0);
  lVar4 = param_1[0x44];
  plVar3 = (longlong *)param_1[0x45];
  if (plVar3 == (longlong *)0x0) {
    *param_2 = lVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = lVar4;
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_148b62b24:
  if ((local_38 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b62d1e FUN_148b62d1e body=120 status=ok
// SIG undefined FUN_148b62d1e(void)

longlong FUN_148b62d1e(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23a);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b62d98 FUN_148b62d98 body=123 status=ok
// SIG undefined FUN_148b62d98(void)

longlong * FUN_148b62d98(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148b62f98(*param_1,*(undefined8 *)param_1[2],*(undefined8 *)((undefined8 *)param_1[2])[1]);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b62e14 FUN_148b62e14 body=56 status=ok
// SIG undefined FUN_148b62e14(void)

void FUN_148b62e14(longlong param_1)

{
  FUN_148b68c35(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 148b62e56 FUN_148b62e56 body=159 status=ok
// SIG undefined FUN_148b62e56(void)

void FUN_148b62e56(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
      FUN_148b6a84e((longlong *)(param_1 + 0x78),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x000148b62ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
    return;
  }
  return;
}



// FUNCTION 148b62ef6 FUN_148b62ef6 body=162 status=ok
// SIG undefined FUN_148b62ef6(void)

void FUN_148b62ef6(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
      FUN_148b6a84e((longlong *)(param_1 + 0x88),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x000148b62f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
    return;
  }
  return;
}



// FUNCTION 148b62f98 FUN_148b62f98 body=633 status=ok
// SIG undefined FUN_148b62f98(void)

void FUN_148b62f98(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_298 [40];
  longlong *local_270;
  undefined1 local_268;
  undefined1 local_267;
  undefined8 local_260;
  undefined8 uStack_258;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_230;
  longlong *local_228;
  undefined1 local_220;
  undefined1 local_21f;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x43) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  param_1[0x66] = param_3;
  uVar6 = FUN_140e658aa(param_1 + 0x43);
  FUN_14485c47a(param_1 + 0x5a,uVar6);
  uVar6 = FUN_1400f3ad8(param_1 + 0x43);
  FUN_1476cef92(param_1 + 0x55,uVar6);
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  local_220 = DAT_14c96b23c;
  local_21f = 1;
  local_218 = 0;
  uStack_210 = 0;
  (**(code **)(*param_1 + 0x1c0))(param_1);
  iVar9 = 10;
  local_270 = param_1;
  do {
    thunk_FUN_140a5071c(&local_208);
    local_250 = param_1 + 0x66;
    FUN_148b6aa08(&local_248,&local_250);
    FUN_148b63218(&local_248,&local_230,&local_208);
    plVar8 = local_240;
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_240 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    FUN_140a4ff8c(&local_208);
    plVar8 = local_230;
    local_268 = DAT_14c96b1e1;
    local_267 = 1;
    local_260 = 0;
    uStack_258 = 0;
    (**(code **)(*local_230 + 0x1c0))(local_230,&local_268);
    puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    FUN_142873a1a(puVar7);
    *puVar7 = &PTR_FUN_14b5a3b10;
    local_200 = 0;
    uStack_1f8 = 0;
    local_248 = plVar8;
    local_240 = local_228;
    if (local_228 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_228 + 1) = (int)local_228[1] + 1;
      UNLOCK();
      plVar8 = local_228;
    }
    local_208 = puVar7;
    FUN_148b63302(&local_208,&local_248);
    FUN_148b632aa(param_1 + 0x4b,&local_208);
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
    FUN_148b6338a(&local_208);
    plVar8 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_228 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_148b633de(local_270);
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b63212 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 148b63218 FUN_148b63218 body=145 status=ok
// SIG undefined FUN_148b63218(void)

longlong * FUN_148b63218(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x1e8) = **(undefined8 **)param_1[2];
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  FUN_144a88240(lVar1 + 0x18);
  plVar2 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar2 + 6);
  bVar4 = 0x20;
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar2 + 6);
  }
  *(byte *)(plVar2 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148b632aa FUN_148b632aa body=87 status=ok
// SIG undefined FUN_148b632aa(void)

void FUN_148b632aa(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_148b6b006(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_148b6af8a(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return;
}



// FUNCTION 148b63302 FUN_148b63302 body=136 status=ok
// SIG undefined FUN_148b63302(void)

longlong FUN_148b63302(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000148b6335b;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000148b6335b:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 148b6338a FUN_148b6338a body=83 status=ok
// SIG undefined FUN_148b6338a(void)

void FUN_148b6338a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b633d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 148b633de FUN_148b633de body=342 status=ok
// SIG undefined FUN_148b633de(void)

void FUN_148b633de(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x200) < 1) && (cVar4 = FUN_144729dda(param_1 + 0x228), cVar4 != '\0'))
     || (*(longlong *)(param_1 + 0x380) != 0)) goto LAB_148b6340a;
  local_30 = FUN_143fcab44;
  local_28 = 0;
  FUN_148b6446c(local_40,param_1);
  FUN_14697ef1e(param_1,&local_30,0,local_40);
  plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
  if (plVar3 == (longlong *)0x0) {
    *(code **)(param_1 + 0x380) = local_30;
    plVar5 = *(longlong **)(param_1 + 0x388);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x388) = 0;
LAB_148b634c7:
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148b634f2:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(code **)(param_1 + 0x380) = local_30;
    plVar5 = *(longlong **)(param_1 + 0x388);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar3;
        goto joined_r0x000148b634f2;
      }
    }
    else {
      *(longlong **)(param_1 + 0x388) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_148b634c7;
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_148b6340a:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b63536 FUN_148b63536 body=103 status=ok
// SIG undefined FUN_148b63536(void)

void FUN_148b63536(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a87f7e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148b6b0b2(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6359e FUN_148b6359e body=183 status=ok
// SIG undefined FUN_148b6359e(void)

void FUN_148b6359e(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x200);
  *(uint *)(param_1 + 0x200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x204) < iVar1 + 1U) {
    FUN_148b6a84e((longlong *)(param_1 + 0x1f8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar1 * 8) = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x210);
  *(uint *)(param_1 + 0x210) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x214) < iVar1 + 1U) {
    FUN_148b6b764(param_1 + 0x208,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar1 * 8) = param_2;
  FUN_148b63df6(param_1,param_2);
  return;
}



// FUNCTION 148b63656 FUN_148b63656 body=149 status=ok
// SIG undefined FUN_148b63656(void)

void FUN_148b63656(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  FUN_148b63814();
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_20 = &local_30;
  FUN_148b6a8d4(param_1 + 0x1f8,&local_20);
  local_20 = &local_28;
  FUN_148b6b7ea(param_1 + 0x208,&local_20);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b636ec FUN_148b636ec body=290 status=ok
// SIG undefined FUN_148b636ec(void)

void FUN_148b636ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x341) != '\0') {
    *(undefined1 *)(param_1 + 0x341) = 0;
    iVar7 = 0;
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x2a0);
      iVar8 = 0;
      if ((longlong)iVar3 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x298);
        lVar9 = 0;
        iVar8 = 0;
        do {
          iVar6 = (**(code **)**(undefined8 **)(lVar4 + lVar9))();
          iVar8 = iVar8 + iVar6;
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar3 * 8 != lVar9);
      }
      if (iVar8 <= iVar7) break;
      FUN_148b63b48(param_1 + 0x280,&local_70,iVar7);
      local_88 = DAT_14c96b1e1;
      local_87 = 1;
      local_80 = 0;
      uStack_78 = 0;
      (**(code **)(*local_70 + 0x1c0))(local_70,&local_88);
      plVar5 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      iVar7 = iVar7 + 1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b63814 FUN_148b63814 body=343 status=ok
// SIG undefined FUN_148b63814(void)

void FUN_148b63814(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = FUN_14479d2ce((undefined8 *)(param_2 + 0x28));
  if (lVar6 != 0) {
    uVar7 = FUN_145b86eb0();
    plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8,param_2);
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
    FUN_1476cf0bc(param_1 + 0x2a8,lVar6,0);
  }
  plVar8 = *(longlong **)(param_2 + 0x128);
  if (plVar8 != (longlong *)0x0) {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_148b638ab;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    lVar6 = *(longlong *)(param_2 + 0x120);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      local_38 = lVar6;
      local_30 = plVar8;
      FUN_148b64174(param_1,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = *(longlong **)(param_2 + 0x128);
      *(undefined8 *)(param_2 + 0x120) = 0;
      *(undefined8 *)(param_2 + 0x128) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_148b638ab:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b63980 FUN_148b63980 body=125 status=ok
// SIG undefined FUN_148b63980(void)

void FUN_148b63980(longlong param_1,byte param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_1 + 0x44);
  if ((bVar1 & 1) != param_2) {
    bVar1 = bVar1 & 0xf6 | param_2 | 8;
    *(byte *)(param_1 + 0x44) = bVar1;
  }
  puVar2 = &DAT_14c96b1e1;
  if ((~bVar1 & 5) == 0) {
    puVar2 = &DAT_14c96b23c;
  }
  local_20 = *puVar2;
  local_1f = 1;
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b639fe FUN_148b639fe body=130 status=ok
// SIG undefined FUN_148b639fe(void)

void FUN_148b639fe(longlong param_1,char param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_1 + 0x44);
  if (((bVar1 & 4) == 0) == (bool)param_2) {
    bVar1 = param_2 << 2 | bVar1 & 0xf3 | 8;
    *(byte *)(param_1 + 0x44) = bVar1;
  }
  puVar2 = &DAT_14c96b1e1;
  if ((~bVar1 & 5) == 0) {
    puVar2 = &DAT_14c96b23c;
  }
  local_20 = *puVar2;
  local_1f = 1;
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b63a82 FUN_148b63a82 body=129 status=ok
// SIG undefined FUN_148b63a82(void)

void FUN_148b63a82(longlong param_1,char param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_1 + 0x44);
  if (((bVar1 & 2) == 0) == (bool)param_2) {
    bVar1 = param_2 * '\x02' | bVar1 & 0xf5 | 8;
    *(byte *)(param_1 + 0x44) = bVar1;
  }
  puVar2 = &DAT_14c96b1e1;
  if ((~bVar1 & 5) == 0) {
    puVar2 = &DAT_14c96b23c;
  }
  local_20 = *puVar2;
  local_1f = 1;
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b63b04 FUN_148b63b04 body=67 status=ok
// SIG undefined FUN_148b63b04(void)

int FUN_148b63b04(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    iVar4 = 0;
    do {
      iVar3 = (**(code **)**(undefined8 **)(lVar2 + lVar5))();
      iVar4 = iVar4 + iVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return iVar4;
}



// FUNCTION 148b63b48 FUN_148b63b48 body=138 status=ok
// SIG undefined FUN_148b63b48(void)

undefined8 * FUN_148b63b48(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar7 = 0;
    iVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar7);
      iVar5 = (**(code **)*plVar4)(plVar4);
      if (param_3 < iVar5 + iVar6) {
        (**(code **)(*plVar4 + 0x10))(plVar4,param_2,param_3 - iVar6);
        return param_2;
      }
      lVar7 = lVar7 + 8;
      iVar6 = iVar5 + iVar6;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  *param_2 = DAT_14c98dec8;
  lVar3 = DAT_14c98ded0;
  param_2[1] = DAT_14c98ded0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 148b63bd2 FUN_148b63bd2 body=429 status=ok
// SIG undefined FUN_148b63bd2(void)

void FUN_148b63bd2(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  ulonglong local_60;
  
  dVar5 = DAT_14c8463f8;
  dVar10 = DAT_14c8463f0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = *(longlong **)(param_1 + 0x128);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_148b63c66:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar8[1];
    do {
      if (iVar7 == 0) goto LAB_148b63c66;
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    if (*(longlong *)(param_1 + 0x120) != 0) {
      FUN_144b013c4(*(longlong *)(param_1 + 0x120),&local_68);
      *param_2 = (double)local_68;
      param_2[1] = (double)local_64;
    }
    bVar4 = false;
  }
  cVar3 = *(char *)(param_1 + 0x36);
  if (cVar3 == '\x03') {
    *param_3 = dVar10 - *param_2;
    *param_4 = *param_2;
    dVar10 = 0.0;
LAB_148b63cc6:
    *param_5 = dVar10;
  }
  else {
    if (cVar3 == '\x02') {
      *param_3 = (dVar10 - *param_2) * 0.5;
      dVar10 = *param_2 * 0.5;
      *param_4 = dVar10;
      goto LAB_148b63cc6;
    }
    if (cVar3 == '\x01') {
      *param_3 = 0.0;
      *param_4 = 0.0;
      dVar10 = *param_2;
      goto LAB_148b63cc6;
    }
  }
  cVar3 = *(char *)(param_1 + 0x37);
  if (cVar3 == '\x03') {
    param_3[1] = dVar5 - param_2[1];
    param_4[1] = param_2[1];
    dVar10 = 0.0;
  }
  else if (cVar3 == '\x02') {
    param_3[1] = (dVar5 - param_2[1]) * 0.5;
    dVar10 = param_2[1] * 0.5;
    param_4[1] = dVar10;
  }
  else {
    if (cVar3 != '\x01') goto LAB_148b63d30;
    param_3[1] = 0.0;
    param_4[1] = 0.0;
    dVar10 = param_2[1];
  }
  param_5[1] = dVar10;
LAB_148b63d30:
  if (!bVar4) {
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
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b63da8 FUN_148b63da8 body=32 status=ok
// SIG undefined FUN_148b63da8(void)

undefined8 FUN_148b63da8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SIndicatorCanvas");
  return param_2;
}



// FUNCTION 148b63dc8 FUN_148b63dc8 body=46 status=ok
// SIG undefined FUN_148b63dc8(void)

void FUN_148b63dc8(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0,0);
  return;
}



// FUNCTION 148b63df6 FUN_148b63df6 body=689 status=ok
// SIG undefined FUN_148b63df6(void)

void FUN_148b63df6(longlong param_1,longlong param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  void *local_f0;
  uint local_e8;
  undefined4 local_e4;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  uint local_80;
  undefined4 local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a0 = *(longlong *)(param_2 + 0xc0);
  local_98 = *(undefined4 *)(param_2 + 200);
  uStack_94 = *(undefined4 *)(param_2 + 0xcc);
  uStack_90 = *(undefined4 *)(param_2 + 0xd0);
  uStack_8c = *(undefined4 *)(param_2 + 0xd4);
  local_88 = (void *)0x0;
  local_80 = *(uint *)(param_2 + 0xe0);
  lVar5 = (longlong)(int)local_80;
  pvVar1 = *(void **)(param_2 + 0xd8);
  if (lVar5 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar5 * 2);
  }
  if (CONCAT44(uStack_94,local_98) != 0) {
    local_a8 = 0;
    FUN_14485c47a(&local_a8,param_2);
    pvVar1 = local_88;
    lStack_d8 = local_a8;
    local_d0 = local_a0;
    local_c8 = local_98;
    uStack_c4 = uStack_94;
    uStack_c0 = uStack_90;
    uStack_bc = uStack_8c;
    local_b8 = (void *)0x0;
    lVar5 = (longlong)(int)local_80;
    local_b0 = CONCAT44(local_b0._4_4_,local_80);
    local_e0 = param_1;
    if (lVar5 == 0) {
      local_b0 = (ulonglong)local_80;
    }
    else {
      FUN_1446dd670(&local_b8,local_80,0);
      memcpy(local_b8,pvVar1,lVar5 * 2);
    }
    local_78[0] = (code *)0x0;
    local_68 = (longlong *)FUN_14001cc68(0x40,8);
    _Src = local_88;
    pvVar1 = local_b8;
    *local_68 = (longlong)&PTR_FUN_14b5a3c00;
    local_b8 = (void *)0x0;
    uVar2 = (undefined4)local_b0;
    uVar3 = local_b0._4_4_;
    local_b0 = 0;
    local_68[1] = local_e0;
    local_68[2] = lStack_d8;
    local_68[3] = local_d0;
    *(undefined4 *)(local_68 + 4) = local_c8;
    *(undefined4 *)((longlong)local_68 + 0x24) = uStack_c4;
    *(undefined4 *)(local_68 + 5) = uStack_c0;
    *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_bc;
    local_68[6] = (longlong)pvVar1;
    *(undefined4 *)(local_68 + 7) = uVar2;
    *(undefined4 *)((longlong)local_68 + 0x3c) = uVar3;
    if (local_68 + 1 != (longlong *)0x0) {
      local_78[0] = FUN_143fdd8e2;
    }
    local_108 = local_a0;
    local_100 = local_98;
    uStack_fc = uStack_94;
    uStack_f8 = uStack_90;
    uStack_f4 = uStack_8c;
    local_f0 = (void *)0x0;
    lVar5 = (longlong)(int)local_80;
    local_e8 = local_80;
    if (lVar5 == 0) {
      local_e4 = 0;
    }
    else {
      FUN_1446dd670(&local_f0,local_80,0);
      memcpy(local_f0,_Src,lVar5 * 2);
    }
    FUN_148b640a8(param_1 + 0x1e0,&local_108,local_78);
    if (local_78[0] != (code *)0x0) {
      plVar4 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar4 = local_58;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_148b6037a(param_1 + 0x1e0);
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b640a8 FUN_148b640a8 body=202 status=ok
// SIG undefined FUN_148b640a8(void)

void FUN_148b640a8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147737f74(local_40,param_3);
  local_68 = *(undefined4 *)(param_2 + 8);
  uStack_64 = *(undefined4 *)(param_2 + 0xc);
  uStack_60 = *(undefined4 *)(param_2 + 0x10);
  uStack_5c = *(undefined4 *)(param_2 + 0x14);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_2 + 0x20);
  lVar1 = (longlong)local_50;
  _Src = *(void **)(param_2 + 0x18);
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  FUN_148b602ba(param_1,&local_68,local_40);
  FUN_1449db362(local_40);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b64174 FUN_148b64174 body=81 status=ok
// SIG undefined FUN_148b64174(void)

void FUN_148b64174(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (0 < (longlong)*(int *)(param_1 + 0x250)) {
    lVar1 = 0;
    do {
      if (*param_2 ==
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x248) + lVar1 * 8) + 0x10)) {
        FUN_148b64428(param_1 + 0x230);
        FUN_148b633de(param_1);
        return;
      }
      lVar1 = lVar1 + 1;
    } while (*(int *)(param_1 + 0x250) != lVar1);
  }
  return;
}



// FUNCTION 148b641c6 FUN_148b641c6 body=465 status=ok
// SIG undefined FUN_148b641c6(void)

undefined8 FUN_148b641c6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar10 = *(longlong **)(param_1 + 0x10);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_148b64202:
    uVar11 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_148b64202;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    uVar11 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    bVar3 = false;
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  FUN_142873a1a(puVar9);
  *puVar9 = &PTR_FUN_14b5a3c20;
  puVar9[4] = param_3;
  uVar6 = DAT_14c8463f8._4_4_;
  uVar5 = (undefined4)DAT_14c8463f8;
  uVar4 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(puVar9 + 5) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar4;
  *(undefined4 *)(puVar9 + 6) = uVar5;
  *(undefined4 *)((longlong)puVar9 + 0x34) = uVar6;
  puVar9[7] = 0;
  *(undefined4 *)(puVar9 + 8) = 0;
  *(byte *)((longlong)puVar9 + 0x44) = *(byte *)((longlong)puVar9 + 0x44) & 0xc0 | 0xb;
  local_90 = puVar9;
  local_60 = uVar11;
  local_58 = plVar10;
  if (bVar3) {
    local_78 = 0;
    local_68 = &PTR_LAB_14b5a3c30;
    local_88 = FUN_143fde160;
    FUN_148b64398(param_2,&local_90,param_1 + 0x230);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    local_78 = 0;
    local_68 = &PTR_LAB_14b5a3c30;
    local_88 = FUN_143fde160;
    FUN_148b64398(param_2,&local_90,param_1 + 0x230);
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b64398 FUN_148b64398 body=144 status=ok
// SIG undefined FUN_148b64398(void)

longlong * FUN_148b64398(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  lVar1 = *param_4;
  param_1[6] = lVar1;
  param_1[8] = 0;
  if (lVar1 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)*plVar3)(0,param_1 + 8);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return param_1;
}



// FUNCTION 148b64428 FUN_148b64428 body=67 status=ok
// SIG undefined FUN_148b64428(void)

void FUN_148b64428(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8) = 0;
  FUN_148b6bc0e(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b64461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148b6446c FUN_148b6446c body=386 status=ok
// SIG undefined FUN_148b6446c(void)

longlong * FUN_148b6446c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148b6457d:
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_14b5a3c50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148b6457d;
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
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_14b5a3c50;
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



// FUNCTION 148b645f4 FUN_148b645f4 body=147 status=ok
// SIG undefined FUN_148b645f4(void)

undefined8 * FUN_148b645f4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148b6468a(&local_28,param_1);
  *param_2 = local_28;
  param_2[1] = local_20;
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6468a FUN_148b6468a body=326 status=ok
// SIG undefined FUN_148b6468a(void)

undefined8 * FUN_148b6468a(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x138,0x10);
  FUN_14823dde8(puVar2,param_2);
  *puVar2 = &PTR_FUN_14b5a2d10;
  puVar2[0x20] = param_2;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  *(undefined4 *)(puVar2 + 0x23) = 0x3f800000;
  *(undefined4 *)((longlong)puVar2 + 0x11c) = 0;
  *(undefined4 *)(puVar2 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x124) = 0x3f800000;
  puVar2[0x25] = 0;
  puVar2[0x26] = 0x3e4ccccd00000000;
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5a3cc0;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if ((puVar2 == (undefined8 *)0x0) ||
     (((puVar2[1] != 0 && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))))) goto LAB_148b647b9;
  if (plVar3 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) goto LAB_148b647b9;
LAB_148b64770:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    puVar2[2] = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_148b647b9;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = (longlong *)puVar2[2];
      if (plVar4 != (longlong *)0x0) goto LAB_148b64770;
      puVar2[2] = plVar3;
    }
  }
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
LAB_148b647b9:
  (**(code **)(*(longlong *)*param_1 + 0xc0))();
  return param_1;
}



// FUNCTION 148b647d0 FUN_148b647d0 body=696 status=ok
// SIG undefined FUN_148b647d0(void)

ulonglong FUN_148b647d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong unaff_RBP;
  undefined7 uVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar6 = FUN_1469a4342(param_1,param_3);
  if (cVar6 != '\0') {
    lVar4 = *(longlong *)(param_3 + 0x20);
    plVar9 = *(longlong **)(param_3 + 0x30);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    uVar10 = (undefined7)(unaff_RBP >> 8);
    unaff_RBP = CONCAT71(uVar10,1);
    if (((lVar4 != DAT_14c964e60) && (lVar4 != DAT_14c964e90)) && (lVar4 != DAT_14c964ea8)) {
      unaff_RBP = CONCAT71(uVar10,lVar4 == DAT_14c964e78);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if ((char)unaff_RBP != '\0') {
      cVar6 = FUN_148b64a8a(param_1);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      if (cVar6 != '\0') goto LAB_148b6488a;
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  if (((cVar6 == '\0') || (*(char *)(param_1[0x20] + 0x170) != '\0')) ||
     ((lVar4 = *(longlong *)(*(longlong *)(param_1[0x20] + 0x20) + 0x78), lVar4 != 0 &&
      ((plVar9 = *(longlong **)(lVar4 + 0x40), plVar9 != (longlong *)0x0 &&
       (cVar6 = (**(code **)(*plVar9 + 0x3c8))(), cVar6 != '\0')))))) {
    unaff_RBP = 0;
    goto LAB_148b6488a;
  }
  lVar4 = *(longlong *)(param_3 + 0x20);
  plVar9 = *(longlong **)(param_3 + 0x30);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  bVar11 = true;
  if (lVar4 != DAT_14c966d68) {
    lVar4 = *(longlong *)(param_3 + 0x20);
    plVar5 = *(longlong **)(param_3 + 0x30);
    if (plVar5 == (longlong *)0x0) {
      bVar11 = lVar4 == DAT_14c964d88;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar11 = lVar4 == DAT_14c964d88;
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
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)param_1[0x20];
  if (bVar11) {
    bVar3 = *(byte *)(param_3 + 10);
    local_50 = *(undefined8 *)(param_3 + 0x20);
    local_48 = *(undefined8 *)(param_3 + 0x28);
    local_40 = *(longlong *)(param_3 + 0x30);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*plVar9 + 0x2d0))(plVar9,&local_50,(uint)bVar3 * 2);
    if (cVar6 == '\0') {
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      goto LAB_148b6488a;
    }
    unaff_RBP = 0;
    cVar6 = (**(code **)(*param_1 + 0xb8))(param_1,param_3,0);
    if (cVar6 == '\0') goto LAB_148b6488a;
    plVar9 = (longlong *)param_1[0x20];
  }
  uVar8 = FUN_140e94dc2(plVar9[4]);
  lVar4 = *(longlong *)(param_3 + 0x20);
  plVar9 = *(longlong **)(param_3 + 0x30);
  if (plVar9 == (longlong *)0x0) {
    FUN_143ae540c(uVar8,lVar4 == DAT_14c966d68);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    FUN_143ae540c(uVar8,lVar4 == DAT_14c966d68);
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  uVar7 = FUN_1469a3b5c(param_1,param_2,param_3);
  unaff_RBP = (ulonglong)uVar7;
  FUN_143ae540c(uVar8,0);
LAB_148b6488a:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 148b64a8a FUN_148b64a8a body=86 status=ok
// SIG undefined FUN_148b64a8a(void)

ulonglong FUN_148b64a8a(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RBX;
  
  cVar2 = *(char *)(param_1 + 0x7b);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x7b) = 0;
    cVar4 = FUN_14823ee02();
    if (cVar4 == '\0') {
      FUN_14824371c(*(undefined8 *)(param_1 + 0x100));
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar2) & 0xffffffff;
}



// FUNCTION 148b64ae0 FUN_148b64ae0 body=337 status=ok
// SIG undefined FUN_148b64ae0(void)

undefined8 FUN_148b64ae0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar6 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  if (((cVar6 == '\0') || (*(char *)(param_1[0x20] + 0x170) != '\0')) ||
     ((lVar3 = *(longlong *)(*(longlong *)(param_1[0x20] + 0x20) + 0x78), lVar3 != 0 &&
      ((plVar4 = *(longlong **)(lVar3 + 0x40), plVar4 != (longlong *)0x0 &&
       (cVar6 = (**(code **)(*plVar4 + 0x3c8))(), cVar6 != '\0')))))) {
LAB_148b64b22:
    uVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_3 + 0x20);
    plVar4 = *(longlong **)(param_3 + 0x30);
    lVar5 = DAT_14c966d68;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      lVar5 = DAT_14c966d68;
      UNLOCK();
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
    if (lVar3 == lVar5) {
      plVar4 = (longlong *)param_1[0x20];
      local_50 = *(undefined8 *)(param_3 + 0x20);
      local_48 = *(undefined8 *)(param_3 + 0x28);
      local_40 = *(longlong *)(param_3 + 0x30);
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar4 + 0x2d0))(plVar4,&local_50,1);
      if (cVar6 == '\0') {
        uVar7 = 1;
        goto LAB_148b64b24;
      }
      cVar6 = (**(code **)(*param_1 + 0xb8))(param_1,param_3,1);
      if (cVar6 == '\0') goto LAB_148b64b22;
    }
    uVar7 = FUN_1469a3eec(param_1,param_2,param_3);
  }
LAB_148b64b24:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b64c32 FUN_148b64c32 body=171 status=ok
// SIG undefined FUN_148b64c32(void)

void FUN_148b64c32(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 0x7b) == '\0') {
    cVar3 = FUN_1469a43fa(param_1,param_3);
    if ((((cVar3 != '\0') &&
         ((0.0001 < ABS(*(float *)(param_3 + 0x30)) || (0.0001 < ABS(*(float *)(param_3 + 0x34))))))
        && ((0.0001 < ABS(*(float *)(param_3 + 0x20)) || (0.0001 < ABS(*(float *)(param_3 + 0x24))))
           )) && (*(char *)(param_1 + 0x7b) == '\0')) {
      *(undefined1 *)(param_1 + 0x7b) = 1;
      plVar2 = *(longlong **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
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
  }
  FUN_1469a4324(param_1,param_2,param_3);
  return;
}



// FUNCTION 148b64cde FUN_148b64cde body=135 status=ok
// SIG undefined FUN_148b64cde(void)

ulonglong FUN_148b64cde(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  
  if (*(char *)((longlong)param_1 + 0x7b) == '\0') {
    cVar5 = FUN_1469a4342();
    if (cVar5 != '\0') {
      cVar5 = FUN_14823dff6(param_1);
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (cVar5 == '\0') {
        lVar3 = *(longlong *)(param_2 + 0x20);
        plVar4 = *(longlong **)(param_2 + 0x30);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (lVar3 == DAT_14c966d68) {
          uVar6 = (**(code **)(*param_1 + 0xa0))(param_1);
          uVar7 = (ulonglong)uVar6;
        }
        else {
          uVar7 = 0;
        }
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
      }
      goto LAB_148b64d35;
    }
  }
  uVar7 = 0;
LAB_148b64d35:
  return uVar7 & 0xffffffff;
}



// FUNCTION 148b64d66 FUN_148b64d66 body=224 status=ok
// SIG undefined FUN_148b64d66(void)

void FUN_148b64d66(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  
  iVar7 = (**(code **)(**(longlong **)(param_1[0x20] + 0x20) + 0x328))();
  lVar5 = DAT_14c98e618;
  if (((iVar7 == 0) && (uVar8 = (**(code **)(*param_1 + 0x60))(param_1), -1 < (int)uVar8)) &&
     ((int)uVar8 < *(int *)(lVar5 + 0x318))) {
    lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x310) + (ulonglong)uVar8 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x310) + 8 + (ulonglong)uVar8 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if (((*(char *)((longlong)param_1 + 0x79) == '\0') &&
          (cVar6 = FUN_14823ef8a(param_1[0x20]), cVar6 == '\0')) &&
         (((char)param_1[0xf] != '\0' || (*(char *)((longlong)param_1 + 0x7b) == '\0')))) {
        uVar9 = 0;
        FUN_1469a9e30(lVar5,0);
      }
      FUN_1469b73f0(lVar3,uVar9 & 0xffffffff);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000148b64e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148b64e46 FUN_148b64e46 body=74 status=ok
// SIG undefined FUN_148b64e46(void)

void FUN_148b64e46(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  
  *(undefined1 *)(param_1 + 0x78) = param_2;
  cVar3 = FUN_14823ee02();
  if (cVar3 != '\0') {
    FUN_148b64a8a(param_1);
    plVar2 = *(longlong **)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148b64e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b64e90 FUN_148b64e90 body=103 status=ok
// SIG undefined FUN_148b64e90(void)

void FUN_148b64e90(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459f2428();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148b6c0a4(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b64ef8 FUN_148b64ef8 body=103 status=ok
// SIG undefined FUN_148b64ef8(void)

void FUN_148b64ef8(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1412b3ef6();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148b6c0f0(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b64f60 FUN_148b64f60 body=199 status=ok
// SIG undefined FUN_148b64f60(void)

undefined8 FUN_148b64f60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_145909e2c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b65030 FUN_148b65030 body=61 status=ok
// SIG undefined FUN_148b65030(void)

void FUN_148b65030(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (((param_3 != 0) || (param_3 = FUN_148b6506e(), param_3 != 0)) &&
     (lVar1 = FUN_148b5bece(param_3), lVar1 != 0)) {
    FUN_143fd25fe(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148b6506e FUN_148b6506e body=58 status=ok
// SIG undefined FUN_148b6506e(void)

undefined8 FUN_148b6506e(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    uVar2 = FUN_14119d4d6();
    return uVar2;
  }
  return 0;
}



// FUNCTION 148b650a8 FUN_148b650a8 body=61 status=ok
// SIG undefined FUN_148b650a8(void)

void FUN_148b650a8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (((param_3 != 0) || (param_3 = FUN_148b6506e(), param_3 != 0)) &&
     (lVar1 = FUN_148b5bece(param_3), lVar1 != 0)) {
    FUN_143fd2654(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148b650e6 FUN_148b650e6 body=108 status=ok
// SIG undefined FUN_148b650e6(void)

void FUN_148b650e6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    cVar1 = FUN_144829e72(*(longlong *)(param_1 + 0x88),&local_20);
    if (cVar1 != '\0') {
      FUN_143fd2654(param_1);
      goto LAB_148b65135;
    }
  }
  FUN_143fd25fe(param_1,local_20);
LAB_148b65135:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b65154 FUN_148b65154 body=19 status=ok
// SIG undefined FUN_148b65154(void)

ulonglong FUN_148b65154(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar4 = *(ulonglong *)(param_1 + 0x88);
  if (uVar4 == 0) {
    return 0;
  }
  SRWLock = (PSRWLOCK)(uVar4 + 0x80);
  AcquireSRWLockShared(SRWLock);
  lVar3 = *param_2;
  if ((lVar3 == 0) || (piVar1 = (int *)(uVar4 + 0x68), (longlong)*piVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    plVar2 = (longlong *)(uVar4 + 0x60);
    lVar5 = 0;
    do {
      bVar6 = *(longlong *)(*plVar2 + lVar5) == lVar3;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar6);
      if (bVar6) break;
      bVar6 = (longlong)*piVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  ReleaseSRWLockShared(SRWLock);
  return uVar4 & 0xffffffff;
}



// FUNCTION 148b65168 FUN_148b65168 body=8 status=ok
// SIG undefined FUN_148b65168(void)

void FUN_148b65168(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}



// FUNCTION 148b65170 FUN_148b65170 body=54 status=ok
// SIG undefined FUN_148b65170(void)

void FUN_148b65170(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98), lVar1 != 0)) {
    while (**(longlong **)(lVar1 + 0x38) != 0) {
      FUN_1400f3090(lVar1);
    }
  }
  return;
}



// FUNCTION 148b651a6 FUN_148b651a6 body=143 status=ok
// SIG undefined FUN_148b651a6(void)

undefined8 FUN_148b651a6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_144750a86(*(longlong *)(param_1 + 0x28),local_28,0,0);
    FUN_144a882a8(param_2,local_28,L"[UGbxUIUMGSubsystem]");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140056680(param_2,L"[UGbxUIUMGSubsystem]");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b65236 FUN_148b65236 body=317 status=ok
// SIG undefined FUN_148b65236(void)

undefined8 * FUN_148b65236(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else if (param_3 == '\0') {
    lVar1 = FUN_144b00d56(*(undefined8 *)(lVar1 + 0x10));
    *param_2 = *(undefined8 *)(lVar1 + 0x18);
  }
  else {
    local_38 = *(undefined2 **)(*(longlong *)(lVar1 + 0x10) + 0x18);
    FUN_1400021e4(&local_38,&local_48);
    puVar2 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    lVar1 = FUN_144b00d56(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10));
    local_38 = *(undefined2 **)(lVar1 + 0x18);
    FUN_1400021e4(&local_38,&local_58);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_140002266(&local_38,L"%s/%s",puVar3,puVar2);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_2,puVar2,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b65374 FUN_148b65374 body=97 status=ok
// SIG undefined FUN_148b65374(void)

bool FUN_148b65374(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140aa7b7e(*(undefined8 *)(param_1 + 0x10),&local_28,0);
  iVar1 = (int)uStack_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b653d6 FUN_148b653d6 body=185 status=ok
// SIG undefined FUN_148b653d6(void)

undefined8 FUN_148b653d6(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b65490 FUN_148b65490 body=199 status=ok
// SIG undefined FUN_148b65490(void)

undefined8 FUN_148b65490(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_1459d844e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b65558 FUN_148b65558 body=179 status=ok
// SIG undefined FUN_148b65558(void)

void FUN_148b65558(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[0x12] = (longlong)param_1;
  *(undefined2 *)(param_1 + 0xe) = 0x402;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 0xb8 | 7;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) &&
     (((byte *)param_1[0x11] == (byte *)0x0 || ((*(byte *)param_1[0x11] & 1) == 0)))) {
    FUN_1402eb876(param_1 + 0xd,*(undefined8 *)(lVar1 + 0x30));
  }
  FUN_148b65a58(local_50,param_1);
  FUN_148b6c702(local_50,param_1);
  FUN_14126834e(&DAT_14cb10a38,local_58,local_50);
  FUN_1401cb1ee(local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6560c FUN_148b6560c body=83 status=ok
// SIG undefined FUN_148b6560c(void)

void FUN_148b6560c(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x2d0))();
  if ((param_2 != 0) && (param_1[0x14] != 0)) {
    FUN_148b5c0ba(param_1[0x14],param_2);
  }
  if ((param_1[10] != 0) && ((*(uint *)(param_1[10] + 8) >> 0x1e & 1) == 0)) {
    FUN_148b5b94c();
    return;
  }
  return;
}



// FUNCTION 148b6568c FUN_148b6568c body=90 status=ok
// SIG undefined FUN_148b6568c(void)

void FUN_148b6568c(longlong param_1)

{
  FUN_148b53aab(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_148b6c3b6(param_1 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_145a362fc();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148b656e6 FUN_148b656e6 body=880 status=ok
// SIG undefined FUN_148b656e6(void)

void FUN_148b656e6(longlong param_1)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0xa0) != 0) || (*(longlong *)(param_1 + 0x58) == 0))
  goto LAB_148b65716;
  FUN_140bd4428(*(longlong *)(param_1 + 0x58),0,1);
  lVar4 = FUN_145905bd0();
  if (lVar4 == 0) goto LAB_148b65716;
  local_58 = *(undefined8 *)(lVar4 + 0x1c0);
  local_50 = *(undefined4 *)(lVar4 + 0x1c8);
  uStack_4c = *(undefined4 *)(lVar4 + 0x1cc);
  uStack_48 = *(undefined4 *)(lVar4 + 0x1d0);
  uStack_44 = *(undefined4 *)(lVar4 + 0x1d4);
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar4 + 0x1e0);
  lVar6 = (longlong)local_38;
  pvVar2 = *(void **)(lVar4 + 0x1d8);
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar2,lVar6 * 2);
  }
  lVar6 = FUN_14479d2ce(&local_58);
  if ((lVar6 == 0) && (CONCAT44(uStack_4c,local_50) != 0)) {
    lVar6 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar6 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(&local_58,lVar6);
      if (lVar6 == 0) goto LAB_148b65876;
    }
    else {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_58,lVar6);
      }
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) goto LAB_148b65876;
LAB_148b65852:
    lVar5 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) || (lVar5 = FUN_14595d8a2(), lVar5 == 0)) ||
       (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_148b65876;
    bVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30;
  }
  else {
    if (lVar6 != 0) goto LAB_148b65852;
LAB_148b65876:
    bVar7 = false;
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar7) goto LAB_148b65716;
  local_58 = *(undefined8 *)(lVar4 + 0x1c0);
  local_50 = *(undefined4 *)(lVar4 + 0x1c8);
  uStack_4c = *(undefined4 *)(lVar4 + 0x1cc);
  uStack_48 = *(undefined4 *)(lVar4 + 0x1d0);
  uStack_44 = *(undefined4 *)(lVar4 + 0x1d4);
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar4 + 0x1e0);
  lVar6 = (longlong)local_38;
  pvVar2 = *(void **)(lVar4 + 0x1d8);
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar2,lVar6 * 2);
  }
  lVar4 = FUN_14479d2ce(&local_58);
  if ((lVar4 == 0) && (CONCAT44(uStack_4c,local_50) != 0)) {
    lVar4 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(&local_58,lVar4);
      if (lVar4 == 0) goto LAB_148b659f6;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_58,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) goto LAB_148b659f6;
LAB_148b659c3:
    lVar6 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) || (lVar6 = FUN_14595d8a2(), lVar6 == 0)) ||
       (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148b659f6;
    lVar5 = 0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30) {
      lVar5 = lVar4;
    }
  }
  else {
    if (lVar4 != 0) goto LAB_148b659c3;
LAB_148b659f6:
    lVar5 = 0;
  }
  lVar4 = FUN_148b653d6(param_1,lVar5);
  if (*(longlong *)(param_1 + 0xa0) != lVar4) {
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0xa0) = lVar4;
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148b65716:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b65a58 FUN_148b65a58 body=239 status=ok
// SIG undefined FUN_148b65a58(void)

undefined8 FUN_148b65a58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1ca5b0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b5a4060;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_148b65b48;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b65b76 FUN_148b65b76 body=12 status=ok
// SIG undefined FUN_148b65b76(void)

undefined8 FUN_148b65b76(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if (param_1 == 0) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_145b897d2();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lStack_18);
  }
  uVar1 = FUN_148b6ca62(param_1 + 0x138,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b65b82 FUN_148b65b82 body=103 status=ok
// SIG undefined FUN_148b65b82(void)

void FUN_148b65b82(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b897d2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148b6ca62(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b65bf8 FUN_148b65bf8 body=850 status=ok
// SIG undefined FUN_148b65bf8(void)

void FUN_148b65bf8(longlong param_1)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x40) != 0) || (*(longlong *)(param_1 + 0x78) == 0))
  goto LAB_148b65c25;
  FUN_140bd4428(*(longlong *)(param_1 + 0x78),0,1);
  lVar4 = FUN_145905bd0();
  if (lVar4 == 0) goto LAB_148b65c25;
  local_58 = *(undefined8 *)(lVar4 + 400);
  local_50 = *(undefined4 *)(lVar4 + 0x198);
  uStack_4c = *(undefined4 *)(lVar4 + 0x19c);
  uStack_48 = *(undefined4 *)(lVar4 + 0x1a0);
  uStack_44 = *(undefined4 *)(lVar4 + 0x1a4);
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar4 + 0x1b0);
  lVar6 = (longlong)local_38;
  pvVar2 = *(void **)(lVar4 + 0x1a8);
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar2,lVar6 * 2);
  }
  lVar6 = FUN_14479d2ce(&local_58);
  if ((lVar6 == 0) && (CONCAT44(uStack_4c,local_50) != 0)) {
    lVar6 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar6 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(&local_58,lVar6);
      if (lVar6 == 0) goto LAB_148b65d81;
    }
    else {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_58,lVar6);
      }
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) goto LAB_148b65d81;
LAB_148b65d61:
    lVar5 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) || (lVar5 = FUN_145998fe0(), lVar5 == 0)) ||
       (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_148b65d81;
    bVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30;
  }
  else {
    if (lVar6 != 0) goto LAB_148b65d61;
LAB_148b65d81:
    bVar7 = false;
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar7) goto LAB_148b65c25;
  local_58 = *(undefined8 *)(lVar4 + 400);
  local_50 = *(undefined4 *)(lVar4 + 0x198);
  uStack_4c = *(undefined4 *)(lVar4 + 0x19c);
  uStack_48 = *(undefined4 *)(lVar4 + 0x1a0);
  uStack_44 = *(undefined4 *)(lVar4 + 0x1a4);
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar4 + 0x1b0);
  lVar6 = (longlong)local_38;
  pvVar2 = *(void **)(lVar4 + 0x1a8);
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar2,lVar6 * 2);
  }
  lVar4 = FUN_14479d2ce(&local_58);
  if ((lVar4 == 0) && (CONCAT44(uStack_4c,local_50) != 0)) {
    lVar4 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(&local_58,lVar4);
      if (lVar4 == 0) goto LAB_148b65ef6;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_58,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) goto LAB_148b65ef6;
LAB_148b65ec3:
    lVar6 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) || (lVar6 = FUN_145998fe0(), lVar6 == 0)) ||
       (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148b65ef6;
    lVar5 = 0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30) {
      lVar5 = lVar4;
    }
  }
  else {
    if (lVar4 != 0) goto LAB_148b65ec3;
LAB_148b65ef6:
    lVar5 = 0;
  }
  lVar4 = FUN_148b65f4b(param_1,lVar5);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148b65c25:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b65f4b FUN_148b65f4b body=185 status=ok
// SIG undefined FUN_148b65f4b(void)

undefined8 FUN_148b65f4b(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b66014 FUN_148b66014 body=244 status=ok
// SIG undefined FUN_148b66014(void)

undefined8 FUN_148b66014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_FUN_14b5a42b0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148b6610a;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b66170 FUN_148b66170 body=54 status=ok
// SIG undefined FUN_148b66170(void)

void FUN_148b66170(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x48);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x48);
    FUN_143fd4122(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 148b661a6 FUN_148b661a6 body=175 status=ok
// SIG undefined FUN_148b661a6(void)

undefined8 FUN_148b661a6(undefined8 param_1)

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
  local_b8 = FUN_1459f2514();
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



// FUNCTION 148b66256 FUN_148b66256 body=370 status=ok
// SIG undefined FUN_148b66256(void)

ulonglong FUN_148b66256(longlong param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar5 = FUN_148b65b82(param_2);
    if ((lVar5 != 0) && (*param_3 != 0)) {
      local_58 = *(longlong *)(*param_3 + 0x18);
      FUN_1400021e4();
      local_40 = *(longlong *)(param_1 + 0x38);
      if (local_40 == 0) {
        local_58 = 0;
        uStack_50 = 0;
        if ((int)local_30 != 0) {
          uStack_50._0_4_ = 0;
          goto LAB_148b66361;
        }
        param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      }
      else {
        param_3 = &local_58;
        FUN_1400021e4(&local_40,param_3);
        if ((int)local_30 == (int)uStack_50) {
          param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
          if (1 < (int)uStack_50) {
            lVar7 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_38 + lVar7);
              uVar3 = (uint)uVar1;
              uVar2 = *(ushort *)(local_58 + lVar7);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b66324;
                }
                iVar4 = uVar3 - uVar8;
                goto LAB_148b663c1;
              }
              if (uVar1 == 0) break;
LAB_148b66324:
              lVar7 = lVar7 + 2;
            }
            iVar4 = 0;
LAB_148b663c1:
            bVar9 = iVar4 == 0;
            goto LAB_148b66366;
          }
        }
        else {
LAB_148b66361:
          bVar9 = (int)local_30 + (int)uStack_50 == 1;
LAB_148b66366:
          param_3 = (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),bVar9);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if ((char)param_3 != '\0') {
        uVar6 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        if (*(int *)(param_1 + 0x78) != 0) {
          local_38 = param_1 + 0x58;
          local_30 = 0;
          local_28 = 0;
          FUN_14008db60(&local_38,lVar5 + 0x48);
        }
        goto LAB_148b66273;
      }
    }
  }
  uVar6 = 0;
LAB_148b66273:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b663ca FUN_148b663ca body=115 status=ok
// SIG undefined FUN_148b663ca(void)

undefined8 FUN_148b663ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_148b65b82(param_2);
    if ((lVar1 != 0) && (*(int *)(param_1 + 0x48) != 0)) {
      local_28[0] = param_1 + 0x28;
      local_28[1] = 0;
      local_18 = 0;
      uVar2 = FUN_14008db60(local_28,lVar1 + 0x48);
      goto LAB_148b663e5;
    }
  }
  uVar2 = 0;
LAB_148b663e5:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6643e FUN_148b6643e body=209 status=ok
// SIG undefined FUN_148b6643e(void)

longlong FUN_148b6643e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x318) != *(int *)(param_1 + 0x344)) {
    uVar3 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0x348;
    if (*(longlong *)(param_1 + 0x350) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x350);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x358) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar2 * 0x18),
            *plVar1 != param_2) {
        iVar2 = (int)plVar1[2];
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (plVar1 != (longlong *)0x0) {
        lVar4 = plVar1[1];
        if (DAT_14c950c29 != '\x01') {
          return lVar4;
        }
        if (lVar4 == 0) {
          return 0;
        }
        FUN_1456cec3c(lVar4);
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 148b66510 FUN_148b66510 body=272 status=ok
// SIG undefined FUN_148b66510(void)

void FUN_148b66510(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0x310);
  lVar2 = param_1 + 800;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x338) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x338);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      FUN_143af9cd2(*(undefined8 *)(*local_78 + 8 + (longlong)iStack_5c * 0x18),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b66622 FUN_148b66622 body=254 status=ok
// SIG undefined FUN_148b66622(void)

undefined8 FUN_148b66622(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  if ((lVar2 != 0) &&
     (((((*(int *)(param_1 + 0x18) == 0 && (*(int *)(param_1 + 0x1c) == 0)) &&
        (*(int *)(param_2 + 0x1c) == 0)) && (*(int *)(param_2 + 0x20) == 0)) ||
      (cVar4 = FUN_1401246e4(param_1 + 0x18,param_2 + 0x1c), cVar4 != '\0')))) {
    lVar5 = FUN_144a797b2();
    lVar6 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar5 = FUN_144a797b2();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (lVar6 = lVar2,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         != lVar5 + 0x30)) {
        lVar6 = 0;
      }
    }
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)) || (cVar4 = FUN_144a7ff9e(lVar6), cVar4 != '\0')) {
          return 1;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return 0;
}



// FUNCTION 148b66724 FUN_148b66724 body=74 status=ok
// SIG undefined FUN_148b66724(void)

undefined8 * FUN_148b66724(undefined8 *param_1,undefined8 *param_2)

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
    FUN_147f316e6(param_1,iVar1);
    FUN_148b6db91(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148b6676e FUN_148b6676e body=174 status=ok
// SIG undefined FUN_148b6676e(void)

undefined8
FUN_148b6676e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined1 local_50 [16];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  lVar1 = *param_4;
  if (lVar1 != 0) {
    lVar2 = FUN_1405e2bf2();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_68 = *param_4;
      goto LAB_148b667cd;
    }
  }
  local_68 = 0;
LAB_148b667cd:
  local_58 = local_50;
  local_60 = param_5;
  FUN_143fd1bd2(param_1,param_2,param_3,0);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6681e FUN_148b6681e body=106 status=ok
// SIG undefined FUN_148b6681e(void)

void FUN_148b6681e(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar3 = 0;
  bVar1 = false;
  do {
    uVar3 = (ulonglong)(int)uVar3;
    plVar4 = (longlong *)(uVar3 * 0x10 + *param_1);
    while (*plVar4 != *param_2) {
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
      if ((longlong)iVar2 <= (longlong)uVar3) {
        if (!bVar1) {
          return;
        }
        goto LAB_148b66879;
      }
    }
    FUN_148b6e278(param_1,uVar3 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar3 < iVar2);
LAB_148b66879:
  FUN_148b6e23a(param_1);
  return;
}



// FUNCTION 148b66888 FUN_148b66888 body=106 status=ok
// SIG undefined FUN_148b66888(void)

void FUN_148b66888(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar3 = 0;
  bVar1 = false;
  do {
    uVar3 = (ulonglong)(int)uVar3;
    plVar4 = (longlong *)(uVar3 * 0x10 + *param_1);
    while (*plVar4 != *param_2) {
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
      if ((longlong)iVar2 <= (longlong)uVar3) {
        if (!bVar1) {
          return;
        }
        goto LAB_148b668e3;
      }
    }
    FUN_148b6e4c6(param_1,uVar3 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar3 < iVar2);
LAB_148b668e3:
  FUN_148b6e488(param_1);
  return;
}



// FUNCTION 148b668f2 FUN_148b668f2 body=347 status=ok
// SIG undefined FUN_148b668f2(void)

undefined8
FUN_148b668f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_6;
  uVar2 = param_6[1];
  local_60 = param_3;
  uVar5 = FUN_14479d2ce();
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,4,0x10);
  puVar3 = local_70;
  local_68 = 4;
  *local_70 = &PTR_LAB_14b5a44f0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_70[2] = lVar6;
  *local_70 = &PTR_FUN_14b5a4480;
  local_70[3] = 0;
  FUN_14485c47a(local_70 + 3,uVar5);
  puVar3[4] = param_1;
  puVar3[5] = uVar1;
  puVar3[6] = uVar2;
  local_58 = 0;
  local_50 = 0;
  FUN_148b6d5a0(&local_58,&local_70);
  local_80 = param_5;
  local_88 = param_4;
  local_78 = &local_58;
  FUN_143fd6b6c(param_1,param_2,&local_60,0);
  FUN_1449db362(&local_70);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b66a4e FUN_148b66a4e body=127 status=ok
// SIG undefined FUN_148b66a4e(void)

undefined8
FUN_148b66a4e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_4;
  local_28 = param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = param_5;
  FUN_148b6676e(param_1,param_2,&local_28,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b66ace FUN_148b66ace body=214 status=ok
// SIG undefined FUN_148b66ace(void)

undefined8 *
FUN_148b66ace(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong param_5,undefined4 param_6)

{
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  undefined1 *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  if (param_5 != 0) {
    local_30 = 0;
    local_50 = *param_4;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_58 = local_40;
    local_60 = param_6;
    local_68 = &local_50;
    FUN_143fd71e0(param_1,param_2,&local_48,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  FUN_1415b7ec4(L"A null ContextObject was passed to Register Extension (Widget For Context)",2,0);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b66ba6 FUN_148b66ba6 body=107 status=ok
// SIG undefined FUN_148b66ba6(void)

undefined8
FUN_148b66ba6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = local_28;
  local_18 = 0;
  local_40 = param_5;
  local_48 = param_4;
  local_30 = param_3;
  FUN_143fd1bd2(param_1,param_2,&local_30,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b66c12 FUN_148b66c12 body=160 status=ok
// SIG undefined FUN_148b66c12(void)

undefined8 *
FUN_148b66c12(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_3;
  if (param_4 != 0) {
    local_38 = local_28;
    local_18 = 0;
    local_40 = param_6;
    local_48 = param_5;
    FUN_143fd1bd2(param_1,param_2,&local_30);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_68);
  }
  FUN_1415b7ec4(L"A null ContextObject was passed to Register Extension (Data For Context)",2,0);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b66cb4 FUN_148b66cb4 body=41 status=ok
// SIG undefined FUN_148b66cb4(void)

void FUN_148b66cb4(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    FUN_143fd6a00(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 148b66cde FUN_148b66cde body=9 status=ok
// SIG undefined FUN_148b66cde(void)

bool FUN_148b66cde(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 148b66ce8 FUN_148b66ce8 body=41 status=ok
// SIG undefined FUN_148b66ce8(void)

void FUN_148b66ce8(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    FUN_143fd68c6(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 148b66d12 FUN_148b66d12 body=9 status=ok
// SIG undefined FUN_148b66d12(void)

bool FUN_148b66d12(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 148b66d1c FUN_148b66d1c body=44 status=ok
// SIG undefined FUN_148b66d1c(void)

undefined8 FUN_148b66d1c(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x4c6) == '\0') {
    FUN_1417aae82(param_1,param_2);
  }
  else {
    FUN_14821dd98(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148b66d48 FUN_148b66d48 body=126 status=ok
// SIG undefined FUN_148b66d48(void)

void FUN_148b66d48(longlong *param_1,longlong param_2,char *param_3)

{
  byte bVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*param_3 != '\x01')) {
    return;
  }
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (lVar2 != 0) goto LAB_148b66d78;
  }
  lVar2 = 0;
LAB_148b66d78:
  param_1[7] = lVar2;
  param_1[6] = (longlong)param_1;
  bVar1 = *(byte *)((longlong)param_1 + 0x12);
  *(byte *)((longlong)param_1 + 0x12) = bVar1 & 0xbd | 2;
  *(byte *)(param_1 + 2) = param_3[1] << 2 | 2;
  *(char *)((longlong)param_1 + 0x11) = param_3[1] + '\x05';
  *(byte *)((longlong)param_1 + 0x12) = bVar1 & 0xb8 | 2 | param_3[2] | 4;
  FUN_1402eb876(param_1 + 1,*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 148b66dc6 FUN_148b66dc6 body=92 status=ok
// SIG undefined FUN_148b66dc6(void)

void FUN_148b66dc6(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(char *)((longlong)param_1 + 0x4c2) == '\0')) {
    cVar1 = FUN_144ae5576(lVar2);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_140e6538c(param_1,param_2,param_3);
  return;
}



// FUNCTION 148b66e22 FUN_148b66e22 body=254 status=ok
// SIG undefined FUN_148b66e22(void)

undefined8
FUN_148b66e22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a508d10;
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
  *local_48 = &PTR_FUN_14b5a4560;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1476f8602(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b66f5e FUN_148b66f5e body=102 status=ok
// SIG undefined FUN_148b66f5e(void)

longlong FUN_148b66f5e(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x504);
  if (cVar1 == '\x03') {
    uVar2 = 0;
    uVar4 = 0;
  }
  else if (cVar1 == '\x02') {
    uVar4 = *(undefined1 *)(param_1 + 0x505);
    uVar2 = 1;
  }
  else {
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_148b66fb2;
    }
    uVar4 = *(undefined1 *)(param_1 + 0x505);
    uVar2 = 2;
  }
  uVar3 = 1;
  FUN_14825d44e(param_2,uVar2,uVar4,1);
LAB_148b66fb2:
  *(undefined1 *)(param_2 + 6) = uVar3;
  return param_2;
}



// FUNCTION 148b66fc4 FUN_148b66fc4 body=83 status=ok
// SIG undefined FUN_148b66fc4(void)

void FUN_148b66fc4(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_14821ddbe();
  if (*(longlong *)(param_1 + 0x508) != 0) {
    uVar1 = FUN_1476c9138();
    *(undefined4 *)(param_1 + 0x420) = uVar1;
    *(undefined1 *)(param_1 + 0x428) = 4;
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    uVar1 = FUN_1476c9138();
    *(undefined4 *)(param_1 + 0x424) = uVar1;
    *(undefined1 *)(param_1 + 0x429) = 4;
  }
  return;
}



// FUNCTION 148b67018 FUN_148b67018 body=81 status=ok
// SIG undefined FUN_148b67018(void)

void FUN_148b67018(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x530) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x530) + 8) >> 0x1e & 1) == 0)) {
    cVar1 = FUN_143af6288(param_3);
    if (cVar1 != '\0') {
      FUN_148b55ff4(*(undefined8 *)(param_1 + 0x530),param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148b6706a FUN_148b6706a body=49 status=ok
// SIG undefined FUN_148b6706a(void)

void FUN_148b6706a(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1[-0x8e] + 0x2d0))(param_1 + -0x8e);
                    /* WARNING: Could not recover jumptable at 0x000148b67098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,uVar1,*(code **)(*param_1 + 0x38));
  return;
}



// FUNCTION 148b6709c FUN_148b6709c body=82 status=ok
// SIG undefined FUN_148b6709c(void)

void FUN_148b6709c(longlong *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(param_1[0x67] + 0x30))(param_1 + 0x67);
  FUN_140ec5ab0(param_1);
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_148b66d48(param_1 + 0x5f,uVar1,param_1 + 0x69);
  return;
}



// FUNCTION 148b670ee FUN_148b670ee body=44 status=ok
// SIG undefined FUN_148b670ee(void)

void FUN_148b670ee(longlong param_1)

{
  FUN_1405f3418(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x328) = 0;
  FUN_14821d3a6(param_1);
  return;
}



// FUNCTION 148b67126 FUN_148b67126 body=49 status=ok
// SIG undefined FUN_148b67126(void)

void FUN_148b67126(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1[-0x67] + 0x2d0))(param_1 + -0x67);
                    /* WARNING: Could not recover jumptable at 0x000148b67154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,uVar1,*(code **)(*param_1 + 0x38));
  return;
}



// FUNCTION 148b67158 FUN_148b67158 body=338 status=ok
// SIG undefined FUN_148b67158(void)

undefined8 FUN_148b67158(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x49] != 0) {
    (**(code **)(*param_1 + 0x308))(param_1);
    FUN_143fd8ad0(param_1);
    lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_145b85602();
      uVar3 = FUN_144718840(lVar2,uVar3);
    }
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar1 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14b5a4640;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14b5a45d0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar1[4] = FUN_143fd8f76;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_148b55846(uVar3,local_30,&local_40);
  }
  FUN_14772d312(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b672ac FUN_148b672ac body=94 status=ok
// SIG undefined FUN_148b672ac(void)

void FUN_148b672ac(longlong *param_1,undefined8 *param_2)

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
    FUN_140a0062e(param_1,iVar2);
  }
  FUN_148b6f03c((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148b67354 FUN_148b67354 body=185 status=ok
// SIG undefined FUN_148b67354(void)

undefined1 *
FUN_148b67354(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0x75] == '\x01') {
    local_30 = (undefined4)DAT_14c966e98;
    uStack_2c = DAT_14c966e98._4_4_;
    uStack_28 = (undefined4)DAT_14c966ea0;
    uStack_24 = DAT_14c966ea0._4_4_;
    local_20 = DAT_14c966ea8;
    if (DAT_14c966ea8 != 0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
      UNLOCK();
    }
    cVar1 = FUN_1407c9dec(param_4);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x4b8))(param_1);
      uVar2 = 1;
      goto LAB_148b673bc;
    }
  }
  uVar2 = 0;
LAB_148b673bc:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6740e FUN_148b6740e body=76 status=ok
// SIG undefined FUN_148b6740e(void)

void FUN_148b6740e(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (param_3 != 1 && plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_148b5274a(plVar1[7],param_2);
    return;
  }
  return;
}



// FUNCTION 148b6745a FUN_148b6745a body=157 status=ok
// SIG undefined FUN_148b6745a(void)

undefined8 FUN_148b6745a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
    if (lVar1 != 0) {
      FUN_144750a86(lVar1,local_28,0,0);
      FUN_144a882a8(param_2,local_28,L"[TickUIUMGWidget]");
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  FUN_140056680(param_2,L"[TickUIUMGWidget]");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b674f8 FUN_148b674f8 body=330 status=ok
// SIG undefined FUN_148b674f8(void)

undefined8 * FUN_148b674f8(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) ||
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(), lVar1 == 0)) {
    *param_2 = 0;
  }
  else if (param_3 == '\0') {
    lVar1 = FUN_144b00d56(*(undefined8 *)(lVar1 + 0x10));
    *param_2 = *(undefined8 *)(lVar1 + 0x18);
  }
  else {
    local_38 = *(undefined2 **)(*(longlong *)(lVar1 + 0x10) + 0x18);
    FUN_1400021e4(&local_38,&local_48);
    puVar2 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    lVar1 = FUN_144b00d56(*(undefined8 *)(lVar1 + 0x10));
    local_38 = *(undefined2 **)(lVar1 + 0x18);
    FUN_1400021e4(&local_38,&local_58);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_140002266(&local_38,L"%s/%s",puVar3,puVar2);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_2,puVar2,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b67644 FUN_148b67644 body=82 status=ok
// SIG undefined FUN_148b67644(void)

void FUN_148b67644(longlong *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(param_1[0x62] + 0x30))(param_1 + 0x62);
  FUN_140ec5ab0(param_1);
  uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_148b66d48(param_1 + 0x5a,uVar1,param_1 + 100);
  return;
}



// FUNCTION 148b67696 FUN_148b67696 body=44 status=ok
// SIG undefined FUN_148b67696(void)

void FUN_148b67696(longlong param_1)

{
  FUN_1405f3418(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x300) = 0;
  FUN_140e64ae8(param_1);
  return;
}



// FUNCTION 148b676ce FUN_148b676ce body=49 status=ok
// SIG undefined FUN_148b676ce(void)

void FUN_148b676ce(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1[-0x62] + 0x2d0))(param_1 + -0x62);
                    /* WARNING: Could not recover jumptable at 0x000148b676fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,uVar1,*(code **)(*param_1 + 0x38));
  return;
}



// FUNCTION 148b67700 FUN_148b67700 body=38 status=ok
// SIG undefined FUN_148b67700(void)

void FUN_148b67700(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b67719. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a0))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148b67726 FUN_148b67726 body=38 status=ok
// SIG undefined FUN_148b67726(void)

void FUN_148b67726(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b6773f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148b6774c FUN_148b6774c body=38 status=ok
// SIG undefined FUN_148b6774c(void)

void FUN_148b6774c(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b67765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c0))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148b67772 FUN_148b67772 body=50 status=ok
// SIG undefined FUN_148b67772(void)

void FUN_148b67772(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b6779a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,*(code **)(*plVar1 + 0x2d0));
    return;
  }
  return;
}



// FUNCTION 148b677a4 FUN_148b677a4 body=42 status=ok
// SIG undefined FUN_148b677a4(void)

void FUN_148b677a4(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))();
    if (lVar1 != 0) {
      FUN_140a68de8(*(undefined8 *)(lVar1 + 0x10),lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148b677ce FUN_148b677ce body=179 status=ok
// SIG undefined FUN_148b677ce(void)

void FUN_148b677ce(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    return;
  }
  lVar1 = FUN_145922cb0();
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return;
  }
  if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30) {
    lVar3 = *param_2;
    if (lVar3 != 0) {
      lVar1 = FUN_145922cb0();
      if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *param_2;
      }
      if ((param_1 == (longlong *)0x0) || (lVar1 = (**(code **)(*param_1 + 8))(param_1), lVar1 == 0)
         ) {
        lVar1 = 0;
      }
      uVar2 = FUN_148b67881(lVar1,lVar3);
      *param_3 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000148b6787e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1,uVar2,*(code **)(*param_1 + 0x10));
      return;
    }
    return;
  }
  return;
}



// FUNCTION 148b67881 FUN_148b67881 body=185 status=ok
// SIG undefined FUN_148b67881(void)

undefined8 FUN_148b67881(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6793e FUN_148b6793e body=171 status=ok
// SIG undefined FUN_148b6793e(void)

void FUN_148b6793e(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  code *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = FUN_148b67aea;
  local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
  local_40 = param_2;
  FUN_148b679ea(param_3 + 0x168,&local_48,param_1);
  local_48 = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  local_38 = (code *)&local_40;
  local_30 = &local_48;
  FUN_148b701f4(param_1 + 0x310,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b679ea FUN_148b679ea body=254 status=ok
// SIG undefined FUN_148b679ea(void)

undefined8
FUN_148b679ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b5a4870;
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
  *local_48 = &PTR_FUN_14b5a4800;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148b6fe48(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b67aea FUN_148b67aea body=257 status=ok
// SIG undefined FUN_148b67aea(void)

void FUN_148b67aea(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) || (*(char *)(param_2 + 0x189) == '\x01')) {
    if (param_3 == '\0') {
      if (0 < (int)param_1[0x61]) {
        *(int *)(param_1 + 0x61) = (int)param_1[0x61] + -1;
        FUN_1406ce816(param_1 + 0x60);
        (**(code **)(*param_1 + 0x2d0))(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
    else {
      FUN_1446f470e(&local_30,L"GlobalStackTransion",1);
      uVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
      FUN_148b55e12(&local_28,uVar2,local_30);
      iVar1 = (int)param_1[0x61];
      *(uint *)(param_1 + 0x61) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x30c) < iVar1 + 1U) {
        FUN_1446f84a2(param_1 + 0x60,iVar1);
      }
      *(undefined8 *)(param_1[0x60] + (longlong)iVar1 * 8) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b67bfe FUN_148b67bfe body=248 status=ok
// SIG undefined FUN_148b67bfe(void)

void FUN_148b67bfe(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_48 [32];
  float local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_1 + 0x548);
  if (cVar1 == '\0') {
    lVar3 = FUN_141283ace(DAT_14cb0d2b0);
    if (lVar3 != 0) {
      lVar4 = FUN_1459f1f8c();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_146a90724(&local_28);
        if (local_24 == '\0') {
          local_28 = 1.0;
        }
        FUN_148b0a310(lVar3,local_28);
      }
    }
  }
  else {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x548);
    FUN_146a90724(&local_28);
    if (local_24 == '\0') {
      dVar5 = 1.0;
    }
    else {
      dVar5 = (double)local_28;
    }
    (**(code **)(*plVar2 + 800))(plVar2,dVar5,0);
  }
  FUN_148b4e43e(param_1);
  FUN_14821cfc8(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b67cf8 FUN_148b67cf8 body=145 status=ok
// SIG undefined FUN_148b67cf8(void)

void FUN_148b67cf8(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1459f1f8c();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  local_20 = -(uint)(0.0 <= *(float *)(lVar2 + 0x274)) & (uint)*(float *)(lVar2 + 0x274);
  local_1c = 1;
  FUN_145bcdc2c();
  FUN_148b4e43e(param_1);
  FUN_148b67e2a(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


