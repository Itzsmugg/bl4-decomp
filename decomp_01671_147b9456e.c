// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147b9456e FUN_147b9456e body=125 status=ok
// SIG undefined FUN_147b9456e(void)

void FUN_147b9456e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 3,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 3)) {
    uVar3 = uVar2 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,8,8);
  return;
}



// FUNCTION 147b945ec FUN_147b945ec body=48 status=ok
// SIG undefined FUN_147b945ec(void)

void FUN_147b945ec(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147b9461c FUN_147b9461c body=112 status=ok
// SIG undefined FUN_147b9461c(void)

void FUN_147b9461c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147b9468c FUN_147b9468c body=116 status=ok
// SIG undefined FUN_147b9468c(void)

void FUN_147b9468c(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_147b94b2c(param_1,param_2 + 2);
  FUN_147b94740(param_1,param_2 + 6);
  return;
}



// FUNCTION 147b94700 FUN_147b94700 body=63 status=ok
// SIG undefined FUN_147b94700(void)

longlong FUN_147b94700(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b94e7a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147b94e6d(lVar2);
  return lVar2;
}



// FUNCTION 147b94740 FUN_147b94740 body=371 status=ok
// SIG undefined FUN_147b94740(void)

longlong * FUN_147b94740(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147b913ac(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147b94a20(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147b948ed(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147b948b4(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147b949e0(param_2);
        FUN_147b948ed(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b948b4 FUN_147b948b4 body=57 status=ok
// SIG undefined FUN_147b948b4(void)

void FUN_147b948b4(undefined8 *param_1,int param_2)

{
  FUN_147b913ac(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147b94a20(param_1,param_2);
  return;
}



// FUNCTION 147b948ed FUN_147b948ed body=242 status=ok
// SIG undefined FUN_147b948ed(void)

longlong * FUN_147b948ed(longlong *param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*param_2;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *param_2 = local_24 != 0;
  }
  else {
    *param_2 = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_140077068(param_1,param_2 + 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b949e0 FUN_147b949e0 body=63 status=ok
// SIG undefined FUN_147b949e0(void)

longlong FUN_147b949e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b94a98(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_147b94a90(lVar2);
  return lVar2;
}



// FUNCTION 147b94a20 FUN_147b94a20 body=112 status=ok
// SIG undefined FUN_147b94a20(void)

void FUN_147b94a20(longlong param_1,uint param_2)

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



// FUNCTION 147b94a90 FUN_147b94a90 body=8 status=ok
// SIG undefined FUN_147b94a90(void)

void FUN_147b94a90(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 147b94a98 FUN_147b94a98 body=147 status=ok
// SIG undefined FUN_147b94a98(void)

void FUN_147b94a98(longlong param_1,int param_2)

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



// FUNCTION 147b94b2c FUN_147b94b2c body=369 status=ok
// SIG undefined FUN_147b94b2c(void)

longlong * FUN_147b94b2c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147b94d88(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147b94c9e(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147b94d88(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147b94d52(param_2);
        FUN_147b94c9e(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b94c9e FUN_147b94c9e body=180 status=ok
// SIG undefined FUN_147b94c9e(void)

undefined8 FUN_147b94c9e(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  
  plVar2 = (longlong *)FUN_14480c34d();
  puVar1 = *(undefined2 **)plVar2[1];
  if ((undefined2 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,(undefined2 *)(param_2 + 0x18),2);
    }
    else {
      thunk_FUN_1457251a8(plVar2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x18) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 2;
  }
  puVar3 = (undefined2 *)(param_2 + 0x1a);
  puVar1 = *(undefined2 **)plVar2[1];
  if ((undefined2 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,puVar3,2);
    }
    else {
      thunk_FUN_1457251a8(plVar2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 2;
  }
  return param_1;
}



// FUNCTION 147b94d52 FUN_147b94d52 body=53 status=ok
// SIG undefined FUN_147b94d52(void)

longlong FUN_147b94d52(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b94de8(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x20 + *param_1;
}



// FUNCTION 147b94d88 FUN_147b94d88 body=95 status=ok
// SIG undefined FUN_147b94d88(void)

void FUN_147b94d88(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 147b94de8 FUN_147b94de8 body=132 status=ok
// SIG undefined FUN_147b94de8(void)

void FUN_147b94de8(longlong param_1,int param_2)

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



// FUNCTION 147b94e6d FUN_147b94e6d body=12 status=ok
// SIG undefined FUN_147b94e6d(void)

void FUN_147b94e6d(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 147b94e7a FUN_147b94e7a body=147 status=ok
// SIG undefined FUN_147b94e7a(void)

void FUN_147b94e7a(longlong param_1,int param_2)

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



// FUNCTION 147b94f0e FUN_147b94f0e body=405 status=ok
// SIG undefined FUN_147b94f0e(void)

longlong * FUN_147b94f0e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140c5c1ec(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x150))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_140c5c1ec(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447d05f2(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x150))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b950a4 FUN_147b950a4 body=132 status=ok
// SIG undefined FUN_147b950a4(void)

void FUN_147b950a4(longlong param_1,int param_2)

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



// FUNCTION 147b9512a FUN_147b9512a body=131 status=ok
// SIG undefined FUN_147b9512a(void)

longlong FUN_147b9512a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147b951ad();
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
      FUN_147b957d4(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147b951ad FUN_147b951ad body=652 status=ok
// SIG undefined FUN_147b951ad(void)

longlong * FUN_147b951ad(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
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
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x150))(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_147b95520(param_1,lVar5 + (longlong)iVar8 * 0x20 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
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
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_147b91666(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_147b9543a(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        (**(code **)(*param_1 + 0x150))(param_1);
        FUN_147b95520(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b9543a FUN_147b9543a body=229 status=ok
// SIG undefined FUN_147b9543a(void)

int * FUN_147b9543a(longlong *param_1,int *param_2)

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



// FUNCTION 147b95520 FUN_147b95520 body=377 status=ok
// SIG undefined FUN_147b95520(void)

longlong * FUN_147b95520(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147b956d0(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x38e38 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147a3569f(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147b956d0(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147b9569a(param_2);
        FUN_147a3569f(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b9569a FUN_147b9569a body=54 status=ok
// SIG undefined FUN_147b9569a(void)

longlong FUN_147b9569a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b95740(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x48 + *param_1;
}



// FUNCTION 147b956d0 FUN_147b956d0 body=112 status=ok
// SIG undefined FUN_147b956d0(void)

void FUN_147b956d0(longlong param_1,uint param_2)

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



// FUNCTION 147b95740 FUN_147b95740 body=147 status=ok
// SIG undefined FUN_147b95740(void)

void FUN_147b95740(longlong param_1,int param_2)

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



// FUNCTION 147b957d4 FUN_147b957d4 body=477 status=ok
// SIG undefined FUN_147b957d4(void)

void FUN_147b957d4(longlong *param_1)

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



// FUNCTION 147b959b2 FUN_147b959b2 body=131 status=ok
// SIG undefined FUN_147b959b2(void)

longlong FUN_147b959b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147b95a35();
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
      FUN_147b96066(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147b95a35 FUN_147b95a35 body=652 status=ok
// SIG undefined FUN_147b95a35(void)

longlong * FUN_147b95a35(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
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
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x150))(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_147b95da8(param_1,lVar5 + (longlong)iVar8 * 0x20 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
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
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_147b914ca(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_147b95cc2(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        (**(code **)(*param_1 + 0x150))(param_1);
        FUN_147b95da8(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b95cc2 FUN_147b95cc2 body=229 status=ok
// SIG undefined FUN_147b95cc2(void)

int * FUN_147b95cc2(longlong *param_1,int *param_2)

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



// FUNCTION 147b95da8 FUN_147b95da8 body=369 status=ok
// SIG undefined FUN_147b95da8(void)

longlong * FUN_147b95da8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x58,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x58);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147b95f56(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x2e8ba < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147a35832(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x58;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147b95f56(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147b95f1a(param_2);
        FUN_147a35832(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b95f1a FUN_147b95f1a body=59 status=ok
// SIG undefined FUN_147b95f1a(void)

longlong FUN_147b95f1a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b95fd6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_147b95fc2(lVar2);
  return lVar2;
}



// FUNCTION 147b95f56 FUN_147b95f56 body=108 status=ok
// SIG undefined FUN_147b95f56(void)

void FUN_147b95f56(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 147b95fc2 FUN_147b95fc2 body=20 status=ok
// SIG undefined FUN_147b95fc2(void)

void FUN_147b95fc2(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



// FUNCTION 147b95fd6 FUN_147b95fd6 body=143 status=ok
// SIG undefined FUN_147b95fd6(void)

void FUN_147b95fd6(longlong param_1,int param_2)

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



// FUNCTION 147b96066 FUN_147b96066 body=477 status=ok
// SIG undefined FUN_147b96066(void)

void FUN_147b96066(longlong *param_1)

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



// FUNCTION 147b96244 FUN_147b96244 body=131 status=ok
// SIG undefined FUN_147b96244(void)

longlong FUN_147b96244(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147b962c7();
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
      FUN_147b966ea(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147b962c7 FUN_147b962c7 body=827 status=ok
// SIG undefined FUN_147b962c7(void)

longlong * FUN_147b962c7(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_5c = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar1 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar1 + 1;
    if ((int *)puVar1[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_5c,4);
      }
      else {
        FUN_14572512c(param_1,&local_5c);
      }
    }
    else {
      local_5c = *(int *)*puVar1;
      *puVar1 = (ulonglong)piVar2;
    }
    local_50 = param_2 + 2;
    local_58 = (undefined8 *)&DAT_100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = local_58;
    local_78 = local_50;
    local_70 = local_48;
    uVar4 = local_70;
    local_68 = local_40;
    local_64 = local_3c;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_88 = param_2;
    if (local_70._4_4_ < (int)local_50[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar6 = (longlong)iVar5 * 0x18 + *local_88;
        (**(code **)(*param_1 + 0x150))(param_1,lVar6);
        piVar2 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
          local_58 = (undefined8 *)CONCAT44(local_58._4_4_,(uint)*(byte *)(lVar6 + 8));
          (**(code **)(*param_1 + 0x170))(param_1,&local_58,4);
          if (1 < (uint)local_58) {
            FUN_14572541c(param_1);
          }
          *(bool *)(lVar6 + 8) = (uint)local_58 != 0;
        }
        else {
          *(bool *)(lVar6 + 8) = *piVar2 != 0;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  else {
    local_5c = 0;
    puVar1 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar1 + 1;
    if ((int *)puVar1[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_5c,4);
      }
      else {
        FUN_14572512c(param_1,&local_5c);
      }
    }
    else {
      local_5c = *(int *)*puVar1;
      *puVar1 = (ulonglong)piVar2;
    }
    FUN_147b91412(param_2,local_5c);
    uVar4 = local_70;
    if (0 < local_5c) {
      iVar5 = 0;
      do {
        FUN_147b96604(param_2,&local_88);
        puVar3 = local_80;
        *local_80 = 0;
        *(undefined1 *)(local_80 + 1) = 0;
        *(undefined4 *)(local_80 + 2) = 0xffffffff;
        (**(code **)(*param_1 + 0x150))(param_1,local_80);
        piVar2 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
          local_58 = (undefined8 *)CONCAT44(local_58._4_4_,(uint)*(byte *)(puVar3 + 1));
          (**(code **)(*param_1 + 0x170))(param_1,&local_58,4);
          if (1 < (uint)local_58) {
            FUN_14572541c(param_1);
          }
          *(bool *)(puVar3 + 1) = (uint)local_58 != 0;
        }
        else {
          *(bool *)(puVar3 + 1) = *piVar2 != 0;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar5 = iVar5 + 1;
        uVar4 = local_70;
      } while (iVar5 < local_5c);
    }
  }
  local_70 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b96604 FUN_147b96604 body=230 status=ok
// SIG undefined FUN_147b96604(void)

int * FUN_147b96604(longlong *param_1,int *param_2)

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



// FUNCTION 147b966ea FUN_147b966ea body=474 status=ok
// SIG undefined FUN_147b966ea(void)

void FUN_147b966ea(longlong *param_1)

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



// FUNCTION 147b968c6 FUN_147b968c6 body=262 status=ok
// SIG undefined FUN_147b968c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b968c6(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  undefined *local_60;
  undefined *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  if (((iVar2 == 0 && iVar1 == 0) && iVar3 == 0) && iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  uVar5 = *(undefined8 *)(param_2 + 4);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9e30);
  iVar7 = DAT_14cae9e14;
  iVar6 = DAT_14cae9de8;
  local_60 = &DAT_14cae9e58;
  local_58 = &DAT_14cae9e60;
  _DAT_14cae9e58 = param_1;
  _DAT_14cae9e60 = iVar1;
  _DAT_14cae9e64 = iVar2;
  _DAT_14cae9e68 = iVar3;
  _DAT_14cae9e6c = iVar4;
  _DAT_14cae9e70 = uVar5;
  FUN_147b96bfc(local_4c);
  if (iVar6 == iVar7) {
    FUN_140f9708a(&DAT_14c9647b8,&DAT_14cae9dd8);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147b969d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9e30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 147b96a78 FUN_147b96a78 body=155 status=ok
// SIG undefined FUN_147b96a78(void)

undefined8 FUN_147b96a78(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_147b96b14(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147b96b14 FUN_147b96b14 body=93 status=ok
// SIG undefined FUN_147b96b14(void)

void FUN_147b96b14(longlong *param_1,int param_2)

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
  FUN_147b96b72(param_1,param_2,1);
  return;
}



// FUNCTION 147b96b72 FUN_147b96b72 body=138 status=ok
// SIG undefined FUN_147b96b72(void)

void FUN_147b96b72(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147b96bfc FUN_147b96bfc body=353 status=ok
// SIG undefined FUN_147b96bfc(void)

undefined4 * FUN_147b96bfc(undefined4 *param_1,undefined8 *param_2)

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
  FUN_147b96d5e(local_40);
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
  cVar6 = FUN_147b96e6c(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar6 == '\0') {
    uVar8 = DAT_14cae9de8 - DAT_14cae9e14;
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
    if (((int)uVar8 < 1) || (iVar11 <= DAT_14cae9e28)) {
      uVar7 = DAT_14cae9e28 - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x24) = uVar7;
      puVar9 = DAT_14cae9e20;
      if (DAT_14cae9e20 == (undefined *)0x0) {
        puVar9 = &DAT_14cae9e18;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar9 + ((longlong)DAT_14cae9e28 - 1U & (longlong)(int)uVar7) * 4);
      puVar9 = DAT_14cae9e20;
      if (DAT_14cae9e20 == (undefined *)0x0) {
        puVar9 = &DAT_14cae9e18;
      }
      *(undefined4 *)(puVar9 + ((longlong)DAT_14cae9e28 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14cae9e28 = iVar11;
      FUN_147b96f12(&DAT_14cae9de0);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b96d5e FUN_147b96d5e body=270 status=ok
// SIG undefined FUN_147b96d5e(void)

int * FUN_147b96d5e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cae9e10;
  iVar4 = DAT_14cae9de8;
  if (DAT_14cae9e14 == 0) {
    iVar2 = DAT_14cae9de8 + 1;
    bVar7 = DAT_14cae9dec == DAT_14cae9de8;
    DAT_14cae9de8 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14cae9de0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cae9df0,1);
    puVar3 = DAT_14cae9e00;
    if (DAT_14cae9e00 == (undefined *)0x0) {
      puVar3 = &DAT_14cae9df0;
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
    lVar6 = (longlong)DAT_14cae9e10;
    DAT_14cae9e10 = *(int *)(DAT_14cae9de0 + 4 + lVar6 * 0x28);
    DAT_14cae9e14 = DAT_14cae9e14 + -1;
    iVar4 = iVar2;
    if (DAT_14cae9e14 != 0) {
      *(undefined4 *)(DAT_14cae9de0 + (longlong)DAT_14cae9e10 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cae9df0;
  if (DAT_14cae9e00 != (undefined *)0x0) {
    puVar3 = DAT_14cae9e00;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14cae9de0;
  return param_1;
}



// FUNCTION 147b96e6c FUN_147b96e6c body=165 status=ok
// SIG undefined FUN_147b96e6c(void)

undefined8 FUN_147b96e6c(uint param_1,longlong *param_2,int *param_3)

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
  
  if ((DAT_14cae9de8 - DAT_14cae9e14 != 1) && (DAT_14cae9de8 != DAT_14cae9e14)) {
    puVar10 = &DAT_14cae9e18;
    if (DAT_14cae9e20 != (undefined *)0x0) {
      puVar10 = DAT_14cae9e20;
    }
    iVar9 = *(int *)(puVar10 + (ulonglong)(DAT_14cae9e28 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cae9de0 + (longlong)iVar9 * 0x28);
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
          FUN_147b96b72(&DAT_14cae9de0,*param_3,1);
          *param_3 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar1[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147b96f12 FUN_147b96f12 body=474 status=ok
// SIG undefined FUN_147b96f12(void)

void FUN_147b96f12(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
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



// FUNCTION 147b970ee FUN_147b970ee body=79 status=ok
// SIG undefined FUN_147b970ee(void)

undefined8 FUN_147b970ee(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_146151b16(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 147b9713e FUN_147b9713e body=67 status=ok
// SIG undefined FUN_147b9713e(void)

void FUN_147b9713e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1408060b6(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146151b16(param_1);
    return;
  }
  FUN_147b97182(param_1);
  FUN_1408060b6(param_1,0);
  return;
}



// FUNCTION 147b97182 FUN_147b97182 body=322 status=ok
// SIG undefined FUN_147b97182(void)

void FUN_147b97182(longlong *param_1)

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



// FUNCTION 147b972c6 FUN_147b972c6 body=223 status=ok
// SIG undefined FUN_147b972c6(void)

void FUN_147b972c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = (ulonglong)DAT_14cb107f8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb10804 = DAT_14cb10804 + 1;
  do {
    lVar7 = uVar4 * 0x10 + -8;
    uVar6 = uVar4;
    while (((*(int *)(DAT_14cb107f0 + lVar7) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb107f0 + -8 + lVar7), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3,param_4),
           cVar3 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar2 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar2) {
        DAT_14cb10804 = DAT_14cb10804 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147b97374;
      }
    }
    uVar4 = uVar6 - 1;
    bVar5 = true;
  } while (1 < uVar6);
  DAT_14cb10804 = DAT_14cb10804 + -1;
LAB_147b97374:
  FUN_14474d06a(&DAT_14cb107f0,0);
  return;
}



// FUNCTION 147b973a6 FUN_147b973a6 body=147 status=ok
// SIG undefined FUN_147b973a6(void)

void FUN_147b973a6(longlong param_1,int param_2)

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



// FUNCTION 147b9743a FUN_147b9743a body=62 status=ok
// SIG undefined FUN_147b9743a(void)

void FUN_147b9743a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b97478(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147b97478 FUN_147b97478 body=112 status=ok
// SIG undefined FUN_147b97478(void)

ulonglong FUN_147b97478(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147b974b2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_147b974b2:
  return param_2 & 0xffffffff;
}



// FUNCTION 147b974ec FUN_147b974ec body=66 status=ok
// SIG undefined FUN_147b974ec(void)

void FUN_147b974ec(longlong param_1)

{
  FUN_147b9752e(*(longlong *)(param_1 + 0x20) + 0xb0,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < *(int *)(param_1 + 0x34)) {
    return;
  }
  FUN_1409edbf4(param_1 + 0x28,0);
  return;
}



// FUNCTION 147b9752e FUN_147b9752e body=95 status=ok
// SIG undefined FUN_147b9752e(void)

void FUN_147b9752e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140b51998(param_1,iVar2);
    }
    FUN_1407f2045((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 147b9759a FUN_147b9759a body=80 status=ok
// SIG undefined FUN_147b9759a(void)

void FUN_147b9759a(longlong param_1)

{
  longlong lVar1;
  
  FUN_1401b2056();
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
      return;
    }
  }
  lVar1 = FUN_144a79cc8(param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_14485c47a(lVar1 + 0x280,param_1);
  return;
}



// FUNCTION 147b975ea FUN_147b975ea body=185 status=ok
// SIG undefined FUN_147b975ea(void)

double * FUN_147b975ea(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x1c8);
  dVar6 = *(double *)(lVar4 + 0x290) * 0.5;
  dVar7 = *(double *)(lVar4 + 0x288) * 0.5;
  dVar5 = *(double *)(lVar4 + 0x280) * 0.5;
  dVar1 = *(double *)(lVar4 + 0x270);
  dVar2 = *(double *)(lVar4 + 0x260);
  dVar3 = *(double *)(lVar4 + 0x268);
  *param_2 = dVar2 - dVar5;
  param_2[1] = dVar3 - dVar7;
  param_2[2] = dVar1 - dVar6;
  param_2[3] = dVar2 + dVar5;
  param_2[4] = dVar3 + dVar7;
  param_2[5] = dVar1 + dVar6;
  *(undefined1 *)(param_2 + 6) = 1;
  return param_2;
}



// FUNCTION 147b976f8 FUN_147b976f8 body=48 status=ok
// SIG undefined FUN_147b976f8(void)

void FUN_147b976f8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 8);
  FUN_1402d084a(param_1,uVar1);
  FUN_140528391(uVar1,param_1 + 0x3d8);
  return;
}



// FUNCTION 147b9772c FUN_147b9772c body=42 status=ok
// SIG undefined FUN_147b9772c(void)

void FUN_147b9772c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0x3e4) == 0 && *(int *)(param_1 + 0x3e0) == 0) &&
      *(int *)(param_1 + 1000) == 0) && *(int *)(param_1 + 0x3ec) == 0) {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x3e0) = *param_2;
    *(undefined8 *)(param_1 + 1000) = uVar1;
  }
  return;
}



// FUNCTION 147b9776e FUN_147b9776e body=39 status=ok
// SIG undefined FUN_147b9776e(void)

void FUN_147b9776e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x78))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147b97796 FUN_147b97796 body=65 status=ok
// SIG undefined FUN_147b97796(void)

void FUN_147b97796(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x28))();
  *param_3 = *puVar4;
  uVar1 = *(undefined4 *)((longlong)puVar4 + 0xc);
  uVar2 = *(undefined4 *)(puVar4 + 2);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0x14);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar1;
  *(undefined4 *)(param_3 + 2) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar3;
  FUN_144a787a6(param_3 + 3,puVar4 + 3);
  return;
}



// FUNCTION 147b977dc FUN_147b977dc body=38 status=ok
// SIG undefined FUN_147b977dc(void)

void FUN_147b977dc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x48))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147b97820 FUN_147b97820 body=318 status=ok
// SIG undefined FUN_147b97820(void)

void FUN_147b97820(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
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
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = pvStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58;
  local_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  uStack_70 = (undefined4)local_48;
  uStack_6c = local_48._4_4_;
  local_68 = (void *)0x0;
  lVar2 = (longlong)(int)local_38;
  local_60 = (int)local_38;
  if (lVar2 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_38 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar2 * 2);
  }
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,&local_80);
  *param_3 = uVar1;
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9797a FUN_147b9797a body=53 status=ok
// SIG undefined FUN_147b9797a(void)

ulonglong FUN_147b9797a(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = param_1;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x40))();
  if (plVar2 == (longlong *)0x0) {
    bVar1 = 0;
  }
  else {
    plVar3 = plVar2;
    bVar1 = FUN_140a10ba2(plVar2,param_1);
  }
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),plVar2 != (longlong *)0x0 & bVar1) & 0xffffffff;
}



// FUNCTION 147b979b0 FUN_147b979b0 body=43 status=ok
// SIG undefined FUN_147b979b0(void)

undefined8 FUN_147b979b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_147b979dc(lVar1,param_1);
  return uVar2;
}



// FUNCTION 147b979dc FUN_147b979dc body=116 status=ok
// SIG undefined FUN_147b979dc(void)

undefined8 FUN_147b979dc(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
    iVar2 = FUN_140681374((longlong *)(param_1 + 0x128),
                          (int)((ulonglong)*puVar3 >> 0x20) * 0x17 + (int)*puVar3,puVar3);
    if ((iVar2 != -1) &&
       (lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x128),
       puVar3 = (undefined8 *)(lVar4 + 0x30), puVar3 != (undefined8 *)0x0 && lVar4 != 0)) {
      return *puVar3;
    }
  }
  return 0;
}



// FUNCTION 147b97a62 FUN_147b97a62 body=167 status=ok
// SIG undefined FUN_147b97a62(void)

void FUN_147b97a62(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x638))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b97b26 FUN_147b97b26 body=537 status=ok
// SIG undefined FUN_147b97b26(void)

void FUN_147b97b26(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar4 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar3 = local_40;
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar2 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_4c != 0;
  local_68 = iVar1 != 0;
  (**(code **)(*param_1 + 0x640))(param_1,iVar4 != 0,iVar3 != 0,iVar2 != 0);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b97d40 FUN_147b97d40 body=115 status=ok
// SIG undefined FUN_147b97d40(void)

void FUN_147b97d40(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined4 *)(param_2 + 1);
  local_30 = *param_2;
  local_24 = *param_3;
  local_1c = *(undefined4 *)(param_3 + 1);
  uVar1 = FUN_14477b072(param_1,DAT_14cae8ed0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b97dc0 FUN_147b97dc0 body=159 status=ok
// SIG undefined FUN_147b97dc0(void)

undefined8 FUN_147b97dc0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = FUN_1447210f0();
  plVar3 = (longlong *)FUN_147daa548(uVar2);
  if ((int)plVar3[1] < 1) {
    uVar2 = 0;
  }
  else {
    lVar5 = 0;
    uVar2 = 0;
    do {
      lVar4 = *(longlong *)(*plVar3 + lVar5 * 8);
      if ((((lVar4 != 0) && ((*(byte *)(lVar4 + 0x240) & 0x20) != 0)) &&
          (plVar1 = *(longlong **)(lVar4 + 0xf0), plVar1 != (longlong *)0x0)) &&
         ((lVar4 = FUN_1400796d0(plVar1[2],param_2,1), lVar4 != 0 &&
          (*(char *)(lVar4 + 0xb4) == '\0')))) {
        (**(code **)(*plVar1 + 0x248))(plVar1,lVar4,0);
        uVar2 = 1;
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)plVar3[1]);
  }
  return uVar2;
}



// FUNCTION 147b97e60 FUN_147b97e60 body=147 status=ok
// SIG undefined FUN_147b97e60(void)

void FUN_147b97e60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = FUN_1447210f0();
  if (0 < *(int *)(lVar1 + 0x238)) {
    iVar3 = 0;
    lVar4 = 0;
    do {
      plVar2 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xb60))(plVar2,param_2,param_3,param_4,param_5,param_6);
      }
      lVar4 = lVar4 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(lVar1 + 0x238));
  }
  return;
}



// FUNCTION 147b97ef8 FUN_147b97ef8 body=179 status=ok
// SIG undefined FUN_147b97ef8(void)

void FUN_147b97ef8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14355967e(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b98014 FUN_147b98014 body=92 status=ok
// SIG undefined FUN_147b98014(void)

void FUN_147b98014(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d0))(param_1,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b980c8 FUN_147b980c8 body=27 status=ok
// SIG undefined FUN_147b980c8(void)

undefined8 FUN_147b980c8(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x240)) &
            0xffffffffffffff20;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5);
  }
  return 0;
}



// FUNCTION 147b980e8 FUN_147b980e8 body=37 status=ok
// SIG undefined FUN_147b980e8(void)

void FUN_147b980e8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140898d24();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147b98112 FUN_147b98112 body=158 status=ok
// SIG undefined FUN_147b98112(void)

void FUN_147b98112(undefined8 param_1,longlong param_2)

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
  FUN_140d7233c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b981b2 FUN_147b981b2 body=154 status=ok
// SIG undefined FUN_147b981b2(void)

void FUN_147b981b2(undefined8 param_1,longlong param_2)

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
  FUN_147b9824e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9824e FUN_147b9824e body=94 status=ok
// SIG undefined FUN_147b9824e(void)

void FUN_147b9824e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0xe4) != param_2) {
    *(int *)(param_1 + 0xe4) = param_2;
    lVar1 = param_1;
    if (*(char *)(param_1 + 0x108) == '\x02') {
      FUN_140191f3c(param_1,1);
    }
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_140399198(*(longlong *)(param_1 + 0x20),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147b982ac FUN_147b982ac body=154 status=ok
// SIG undefined FUN_147b982ac(void)

void FUN_147b982ac(undefined8 param_1,longlong param_2)

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
  FUN_14489a27c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9834c FUN_147b9834c body=162 status=ok
// SIG undefined FUN_147b9834c(void)

void FUN_147b9834c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b983f4 FUN_147b983f4 body=158 status=ok
// SIG undefined FUN_147b983f4(void)

void FUN_147b983f4(undefined8 param_1,longlong param_2)

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
  FUN_14039914a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b98498 FUN_147b98498 body=41 status=ok
// SIG undefined FUN_147b98498(void)

void FUN_147b98498(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2d8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147b98518 FUN_147b98518 body=151 status=ok
// SIG undefined FUN_147b98518(void)

undefined8 *
FUN_147b98518(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5,undefined4 *param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_14a9b9980;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((longlong)param_1 + 9) = param_4;
  *(undefined1 *)((longlong)param_1 + 10) = param_5;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  uVar5 = *param_3;
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar5;
  uVar2 = param_6[1];
  uVar3 = param_6[2];
  uVar4 = param_6[3];
  *(undefined4 *)(param_1 + 4) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  lVar1 = *(longlong *)(param_6 + 4);
  param_1[6] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    uVar5 = *(undefined8 *)((longlong)param_1 + 0x14);
  }
  uVar5 = FUN_147b985b0(uVar5,param_7);
  FUN_14485c47a((longlong)param_1 + 0xc,uVar5);
  FUN_143559c98(param_1,uVar5);
  return param_1;
}



// FUNCTION 147b985b0 FUN_147b985b0 body=369 status=ok
// SIG undefined FUN_147b985b0(void)

longlong * FUN_147b985b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_1;
  if (param_1 != 0) {
    FUN_147b987b0(&local_68,&local_58,param_2);
    cVar5 = FUN_14622a6c4(&local_68);
    if (cVar5 != '\0') {
      FUN_140b1283a(&local_78,&DAT_149e065c6,&local_68);
      if (CONCAT44(uStack_64,local_68) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_78;
      uStack_64 = uStack_74;
      iStack_60 = iStack_70;
      uStack_5c = uStack_6c;
    }
    lVar4 = param_2[0x12];
    bVar3 = true;
    if ((longlong)(int)lVar4 != 0) {
      lVar1 = param_2[0x11];
      lVar7 = 0;
      do {
        param_2 = *(longlong **)(lVar1 + lVar7);
        if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_2 + 0x2d0))(param_2,local_50);
          FUN_1400021e4(local_50,&local_78);
          iVar2 = iStack_60 + -1;
          if (iStack_60 == 0) {
            iVar2 = 0;
          }
          puVar6 = &DAT_149dfb77a;
          if (iStack_60 != 0) {
            puVar6 = (undefined2 *)CONCAT44(uStack_64,local_68);
          }
          cVar5 = FUN_144a38768(&local_78,puVar6,iVar2,1);
          if (CONCAT44(uStack_74,local_78) != 0) {
            FUN_1400020a8();
          }
          if (cVar5 != '\0') {
            bVar3 = false;
            goto LAB_147b98701;
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar7);
      bVar3 = true;
    }
LAB_147b98701:
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
    if (!bVar3) goto LAB_147b985db;
  }
  param_2 = (longlong *)0x0;
LAB_147b985db:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147b98722 FUN_147b98722 body=142 status=ok
// SIG undefined FUN_147b98722(void)

ulonglong FUN_147b98722(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong unaff_RBX;
  
  if (param_2[0x2f] == 0) {
    cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (cVar1 == '\0') goto LAB_147b98754;
    if (param_2[0x2f] != 0) goto LAB_147b98739;
  }
  else {
LAB_147b98739:
    cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (((cVar1 == '\0') && (DAT_14c761470 == 0)) ||
       (((param_2[0x2f] != 0 && (cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2), cVar1 != '\0'))
        && ((*(char *)(param_1 + 9) != '\x01' || ((*(byte *)(param_2[0x2f] + 0x240) & 0x20) != 0))))
       )) goto LAB_147b98754;
  }
  unaff_RBX = 0;
LAB_147b98754:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 147b987b0 FUN_147b987b0 body=484 status=ok
// SIG undefined FUN_147b987b0(void)

longlong * FUN_147b987b0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_3 + 0xd0) < 2) {
    FUN_1400021e4(param_2,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  FUN_1468707ca(param_1,param_2);
  iVar2 = 0;
  if (*(int *)(param_3 + 0xd0) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_3 + 200);
    iVar2 = *(int *)(param_3 + 0xd0) + -1;
  }
  cVar1 = FUN_144a791f8(param_1,puVar3,iVar2,1);
  if (cVar1 == '\0') {
    FUN_140474144(&local_38,param_3 + 200,param_1);
    if (&local_38 == param_1) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
    }
  }
  cVar1 = FUN_140902d42(*param_2);
  if (cVar1 == '\0') {
    FUN_1400021e4(param_2,local_68);
    FUN_140d2be42(local_58,local_68);
    FUN_144a882a8(local_48,local_58,&DAT_149e065c6);
    FUN_144a7dea0(&local_38,local_48,param_1);
    if (&local_38 == param_1) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b98996 FUN_147b98996 body=84 status=ok
// SIG undefined FUN_147b98996(void)

undefined8 FUN_147b98996(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2d0))(param_1,local_20);
  FUN_1400021e4(local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b98a0e FUN_147b98a0e body=1172 status=ok
// SIG undefined FUN_147b98a0e(void)

void FUN_147b98a0e(longlong *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [36];
  undefined4 local_f4;
  longlong local_f0;
  undefined2 *local_e8;
  int local_e0;
  longlong local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulonglong uStack_b0;
  undefined2 *local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1 != (longlong *)0x0) {
    local_f0 = 0;
    plVar3 = param_1;
    do {
      if ((*(uint *)(plVar3 + 1) & 0x30) != 0) goto LAB_147b98a68;
      plVar3 = (longlong *)plVar3[4];
    } while (plVar3 != (longlong *)0x0);
  }
  local_f0 = param_1[4];
LAB_147b98a68:
  local_f4 = param_2;
  if (param_1[6] != 0) {
    FUN_147daa212(&local_60,param_2);
    (**(code **)(*param_1 + 0x2d0))(param_1,&local_a0);
    FUN_1400021e4(&local_a0,&local_70);
    FUN_147daa23a(&local_a0,&local_70,&local_60);
    puVar4 = local_a0;
    if (local_98 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_50,puVar4,1);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14355b86d(local_f0,local_50);
    if (*(longlong *)((longlong)param_1 + 0x54) == 0) {
      *(undefined8 *)((longlong)param_1 + 0x54) = local_50;
    }
    (**(code **)(*param_1 + 0x2d0))(param_1,&local_a0);
    FUN_1400021e4(&local_a0,&local_60);
    FUN_147daa0c0(&local_a0,&local_60,local_f4);
    puVar4 = local_a0;
    if (local_98 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_78,puVar4,1);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1468fc60e(local_78);
    if (param_3 == '\0') {
      FUN_147b98faa(param_1,local_78);
    }
    else {
      FUN_14475cc44(param_1 + 6,local_d8);
      FUN_146872764(&local_70,local_d8);
      puVar4 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar4 = local_70;
      }
      FUN_1400021e4(&local_78,&local_e8);
      puVar6 = &DAT_149dfb77a;
      if (local_e0 != 0) {
        puVar6 = local_e8;
      }
      FUN_140002266(&local_60,L"%s.%s",puVar6,puVar4);
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_a0 = local_60;
      local_98 = local_58 + -1;
      if (local_58 == 0) {
        local_98 = 0;
      }
      FUN_14475bf92(&local_c8,&local_a0);
      _Src = local_b8;
      local_a0 = (undefined2 *)0x0;
      local_98 = (int)local_c8;
      uStack_94 = local_c8._4_4_;
      uStack_90 = (undefined4)uStack_c0;
      uStack_8c = uStack_c0._4_4_;
      local_88 = (void *)0x0;
      lVar5 = (longlong)(int)uStack_b0;
      local_80 = (int)uStack_b0;
      if (lVar5 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,uStack_b0 & 0xffffffff,0);
        memcpy(local_88,_Src,lVar5 * 2);
      }
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8(local_b8);
      }
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_a0);
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (0 < (int)param_1[0xd]) {
    plVar3 = param_1 + 0xe;
    FUN_140ee6e62(plVar3);
    if ((longlong)(int)param_1[0xd] != 0) {
      puVar7 = (undefined8 *)param_1[0xc];
      lVar5 = (longlong)(int)param_1[0xd] << 3;
      do {
        iVar1 = (int)param_1[0xf];
        *(uint *)(param_1 + 0xf) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0x7c) < iVar1 + 1U) {
          FUN_1446f84a2(plVar3,iVar1);
        }
        *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = *puVar7;
        uVar2 = *puVar7;
        FUN_1400021e4(puVar7,&local_60);
        FUN_147daa0c0(&local_a0,&local_60,local_f4);
        puVar4 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar4 = local_a0;
        }
        FUN_1446f470e(&local_70,puVar4,1);
        *puVar7 = local_70;
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1468fc60e(*puVar7);
        FUN_14355b86d(local_f0,uVar2);
        puVar7 = puVar7 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b98ea4 FUN_147b98ea4 body=76 status=ok
// SIG undefined FUN_147b98ea4(void)

void FUN_147b98ea4(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_140192130(param_1 + 8,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147b98ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 147b98ef0 FUN_147b98ef0 body=185 status=ok
// SIG undefined FUN_147b98ef0(void)

undefined8 FUN_147b98ef0(undefined8 param_1,undefined8 param_2)

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
  uStack_a0 = 0x40;
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



// FUNCTION 147b98faa FUN_147b98faa body=473 status=ok
// SIG undefined FUN_147b98faa(void)

void FUN_147b98faa(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48 = param_2;
  FUN_1400021e4(&local_48,&local_58);
  FUN_141090af6(&local_90,&local_58);
  FUN_14094a6a4(&local_68,&local_90,0);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  puVar4 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  FUN_140002266(&local_c8,L"%s.%s",puVar3,puVar4);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_40 = local_c8;
  local_38 = local_c0 + -1;
  if (local_c0 == 0) {
    local_38 = 0;
  }
  FUN_14475bf92(&local_b8);
  _Src = local_a8;
  local_90 = 0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  iVar1 = (int)uStack_a0;
  lVar2 = (longlong)(int)uStack_a0;
  uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_a0);
  if ((int)uStack_a0 == 0 && uStack_70._4_4_ == 0) {
    uStack_70 = uStack_a0 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&local_78,uStack_a0 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(local_78,_Src,lVar2 * 2);
    }
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_90);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b99186 FUN_147b99186 body=281 status=ok
// SIG undefined FUN_147b99186(void)

undefined1 FUN_147b99186(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (char)param_1[0x21];
  if (cVar1 == '\x02') {
    uVar5 = 7;
  }
  else if (cVar1 == '\b') {
    uVar5 = 8;
  }
  else if (param_1[0x2f] == 0) {
    uVar5 = 2;
    if ((cVar1 != '\x03') && (uVar5 = 0, DAT_14c950c28 == '\0')) {
      (**(code **)(*param_1 + 0x2d0))(param_1,&local_20);
      uVar2 = FUN_144a7a812();
      uVar5 = 0;
      local_30 = 0;
      local_38 = 0;
      lVar3 = FUN_140be85e0(uVar2,0,local_20,0);
      if (lVar3 != 0) {
        lVar3 = FUN_1417f9c42(lVar3);
        uVar5 = lVar3 != 0;
      }
    }
  }
  else if (cVar1 == '\a') {
    uVar5 = 5;
  }
  else {
    if (cVar1 == '\x06') {
      if (param_1 != (longlong *)0x0) {
        lVar3 = 0;
        plVar4 = param_1;
        do {
          if ((*(uint *)(plVar4 + 1) & 0x30) != 0) goto LAB_147b99213;
          plVar4 = (longlong *)plVar4[4];
        } while (plVar4 != (longlong *)0x0);
      }
      lVar3 = param_1[4];
LAB_147b99213:
      cVar1 = FUN_144b2c346(lVar3);
      uVar5 = 4;
      if (cVar1 != '\0') goto LAB_147b991b8;
    }
    uVar5 = 3;
  }
LAB_147b991b8:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b992a0 FUN_147b992a0 body=934 status=ok
// SIG undefined FUN_147b992a0(void)

undefined8
FUN_147b992a0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 *param_5,longlong param_6,longlong *param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined1 local_1e0;
  longlong local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  longlong local_1b8 [5];
  int local_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  int local_168;
  undefined8 uStack_160;
  longlong local_158;
  longlong lStack_150;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined1 local_e8;
  undefined2 local_e7;
  undefined8 local_e0;
  longlong lStack_d8;
  longlong *local_c8;
  longlong local_b8 [5];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *param_5 = 0;
  lVar6 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar6 == 0) {
    uVar7 = 0;
    goto LAB_147b995af;
  }
  local_188 = 0;
  uStack_180 = 0;
  cVar5 = FUN_14622a6c4(param_2);
  if (cVar5 == '\0') {
    local_1b8[4] = *param_2;
    local_190 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      local_190 = 0;
    }
    cVar5 = FUN_1468716aa(local_1b8 + 4,0);
    if (cVar5 != '\0') goto LAB_147b9935b;
    uVar7 = 0;
    cVar5 = FUN_140f11842(param_2,&local_188,0,0);
    if (cVar5 != '\0') goto LAB_147b993c2;
  }
  else {
LAB_147b9935b:
    local_178 = 0;
    lStack_170 = 0;
    local_1b8[2] = 0;
    local_1b8[3] = 0;
    local_1e8 = local_1b8;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    local_1e0 = 1;
    FUN_1468713d2(param_2,&local_178,&local_188);
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1b8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
LAB_147b993c2:
    FUN_1446f470e(&local_1c0,L"AssetRegistry",1);
    uVar7 = FUN_144a52528();
    plVar8 = (longlong *)FUN_14493e38c(uVar7,local_1c0);
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8);
    local_1d0 = local_188;
    uVar7 = 0;
    local_1c8 = (int)uStack_180 + -1;
    if ((int)uStack_180 == 0) {
      local_1c8 = 0;
    }
    (**(code **)(*plVar8 + 0xf0))(plVar8,local_1b8);
    *param_5 = local_1b8[0] != 0;
    if (local_1b8[0] != 0) {
      FUN_1400021e4(local_1b8,local_1b8 + 2);
      FUN_144a7484c(param_4,&local_178);
      lVar4 = lStack_170;
      lVar3 = local_178;
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar7 = param_3[2];
      local_178 = lVar6;
      FUN_14064b67c(&lStack_170,local_1b8 + 2);
      local_158 = lVar3;
      lStack_150 = lVar4;
      uStack_140 = uStack_160;
      uStack_120 = 0;
      local_118 = 0x3ff0000000000000;
      uStack_110 = 0x3ff0000000000000;
      local_108 = 0x3ff0000000000000;
      uStack_100 = 0;
      lStack_f0 = 0;
      local_e8 = 0;
      local_e7 = 1;
      local_c8 = (longlong *)0x0;
      local_e0 = 0;
      lStack_d8 = 0;
      local_f8 = param_6;
      if (*(int *)(param_6 + 8) < 2) {
        local_f8 = 0;
      }
      lVar6 = *param_7;
      local_138 = uVar1;
      uStack_130 = uVar2;
      local_128 = uVar7;
      if (DAT_14c950c29 == '\x01') {
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar6 = *param_7;
        }
      }
      local_e8 = param_8;
      *param_5 = 0;
      uVar7 = 0;
      lStack_f0 = lVar6;
      if ((local_178 != 0) && (1 < local_168)) {
        uVar7 = FUN_14355bb96(&local_178,param_5);
      }
      if (lStack_d8 != 0) {
        plVar8 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar8 = local_b8;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if (lStack_170 != 0) {
        FUN_1400020a8();
      }
      if (local_1b8[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
LAB_147b995af:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147b99648 FUN_147b99648 body=410 status=ok
// SIG undefined FUN_147b99648(void)

undefined8
FUN_147b99648(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7,undefined1 param_8)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_70 = *param_7;
  if ((local_70 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_144a7484c(param_4,&local_68);
  local_d8 = local_68;
  uStack_d0 = uStack_60;
  local_c8 = local_58;
  uStack_c0 = uStack_50;
  local_b8 = *param_3;
  uStack_b0 = param_3[1];
  local_a8 = param_3[2];
  uStack_a0 = 0;
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0x3ff0000000000000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  local_100 = *param_2;
  local_f8 = *(undefined4 *)(param_2 + 1);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_f0 = *(undefined4 *)(param_2 + 2);
  uStack_ec = *(undefined4 *)((longlong)param_2 + 0x14);
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_2 + 4);
  lVar2 = (longlong)local_e0;
  _Src = (void *)param_2[3];
  if (lVar2 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar2 * 2);
  }
  local_108 = param_8;
  local_110 = &local_70;
  local_118 = param_6;
  uVar1 = FUN_147b997e4(param_1,&local_100,&local_d8,param_5);
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b997e4 FUN_147b997e4 body=505 status=ok
// SIG undefined FUN_147b997e4(void)

undefined8
FUN_147b997e4(undefined8 param_1,longlong param_2,longlong *param_3,undefined1 *param_4,
             longlong param_5,longlong *param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_1b8 [32];
  longlong local_198 [14];
  longlong local_128;
  longlong local_120;
  int local_118;
  longlong local_108 [12];
  longlong local_a8;
  longlong lStack_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_4 = 0;
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    plVar4 = local_198 + 2;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar4 = *param_3;
      param_3 = param_3 + 1;
      plVar4 = plVar4 + 1;
    }
    local_128 = *(longlong *)(param_2 + 8);
    if (local_128 == 0) {
      local_198[0] = 0;
      local_198[1] = 0;
    }
    else {
      FUN_1400021e4(&local_128,local_198);
    }
    local_128 = lVar1;
    FUN_14064b67c(&local_120,local_198);
    plVar4 = local_198 + 2;
    plVar5 = local_108;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *plVar5 = *plVar4;
      plVar4 = plVar4 + 1;
      plVar5 = plVar5 + 1;
    }
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = 0x100;
    local_96 = 0;
    local_78 = (longlong *)0x0;
    local_90 = 0;
    lStack_88 = 0;
    if (local_198[0] != 0) {
      FUN_1400020a8();
    }
    local_a8 = 0;
    if (1 < *(int *)(param_5 + 8)) {
      local_a8 = param_5;
    }
    lVar1 = *param_6;
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *param_6;
      }
    }
    lStack_a0 = lVar1;
    local_98 = CONCAT11(local_98._1_1_,param_7);
    *param_4 = 0;
    uVar2 = 0;
    if ((local_128 != 0) && (1 < local_118)) {
      uVar2 = FUN_14355bb96(&local_128,param_4);
    }
    if (lStack_88 != 0) {
      plVar4 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar4 = local_68;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b999de FUN_147b999de body=57 status=ok
// SIG undefined FUN_147b999de(void)

void FUN_147b999de(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 147b99a18 FUN_147b99a18 body=181 status=ok
// SIG undefined FUN_147b99a18(void)

void FUN_147b99a18(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401a700c(&local_38,0x106);
  uVar1 = local_38;
  uVar2 = FUN_144a7a812();
  local_48 = 0;
  FUN_140af9fb2(local_28,0,uVar2,uVar1);
  FUN_1400021e4(local_28,&local_38);
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)CONCAT44(uStack_34,local_38);
  }
  (**(code **)(*param_1 + 0x170))(param_1,puVar3,0,0x34);
  if (CONCAT44(uStack_34,local_38) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b99afc FUN_147b99afc body=99 status=ok
// SIG undefined FUN_147b99afc(void)

void FUN_147b99afc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  bVar4 = *(byte *)(param_1 + 0x157);
  if ((bVar4 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x200);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1f8);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        if (lVar3 != 0) {
          FUN_144990e4c(lVar3,0);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
      bVar4 = *(byte *)(param_1 + 0x157);
    }
    *(byte *)(param_1 + 0x157) = bVar4 & 0xfe;
  }
  return;
}



// FUNCTION 147b99b60 FUN_147b99b60 body=65 status=ok
// SIG undefined FUN_147b99b60(void)

undefined8 FUN_147b99b60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    cVar1 = FUN_1449fafdc();
    if (cVar1 != '\0') {
      lVar2 = FUN_147da9e34(param_1);
      if (lVar2 != 0) {
        uVar3 = FUN_147d5f4f0(lVar2,param_2);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 147b99cc0 FUN_147b99cc0 body=162 status=ok
// SIG undefined FUN_147b99cc0(void)

void FUN_147b99cc0(longlong param_1,longlong param_2)

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
  FUN_1479e2304(*(undefined8 *)(param_1 + 0x390),local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b99d64 FUN_147b99d64 body=165 status=ok
// SIG undefined FUN_147b99d64(void)

void FUN_147b99d64(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1406f9290(*(longlong *)(param_1 + 0x390),local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b99e0e FUN_147b99e0e body=162 status=ok
// SIG undefined FUN_147b99e0e(void)

void FUN_147b99e0e(longlong param_1,longlong param_2)

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
  FUN_1479e3e3a(*(undefined8 *)(param_1 + 0x390),local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b99eb6 FUN_147b99eb6 body=171 status=ok
// SIG undefined FUN_147b99eb6(void)

void FUN_147b99eb6(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x390),local_1c != 0,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b99f62 FUN_147b99f62 body=167 status=ok
// SIG undefined FUN_147b99f62(void)

void FUN_147b99f62(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  if (*(longlong *)(param_1 + 0x390) != 0) {
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    FUN_140802a50(*(longlong *)(param_1 + 0x390),&local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9a00a FUN_147b9a00a body=160 status=ok
// SIG undefined FUN_147b9a00a(void)

void FUN_147b9a00a(longlong param_1,longlong param_2)

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
  FUN_1479e3052(*(undefined8 *)(param_1 + 0x390),local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9a0ac FUN_147b9a0ac body=160 status=ok
// SIG undefined FUN_147b9a0ac(void)

void FUN_147b9a0ac(longlong param_1,longlong param_2)

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
  FUN_1479e3132(*(undefined8 *)(param_1 + 0x390),local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9a14e FUN_147b9a14e body=168 status=ok
// SIG undefined FUN_147b9a14e(void)

void FUN_147b9a14e(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_40;
  local_38 = local_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  FUN_1479e3246(*(undefined8 *)(param_1 + 0x390));
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9a232 FUN_147b9a232 body=104 status=ok
// SIG undefined FUN_147b9a232(void)

void FUN_147b9a232(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9260) {
    FUN_144b3d300(&DAT_14cae9260);
    if (DAT_14cae9260 == -1) {
      FUN_1446f470e(&DAT_14cae9258,L"bEnabled",1);
      _Init_thread_footer(&DAT_14cae9260);
      return;
    }
  }
  return;
}



// FUNCTION 147b9a29a FUN_147b9a29a body=140 status=ok
// SIG undefined FUN_147b9a29a(void)

void FUN_147b9a29a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"bEnabled",1);
  uVar1 = FUN_145869874();
  FUN_145869874();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9a344 FUN_147b9a344 body=50 status=ok
// SIG undefined FUN_147b9a344(void)

void FUN_147b9a344(longlong param_1)

{
  FUN_1401b2056();
  if ((*(longlong *)(param_1 + 0x390) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x390) + 0x1fb) == '\0')) {
    FUN_1479e4136();
    return;
  }
  return;
}



// FUNCTION 147b9a376 FUN_147b9a376 body=12 status=ok
// SIG undefined FUN_147b9a376(void)

void FUN_147b9a376(longlong param_1)

{
  FUN_1479e5038(*(undefined8 *)(param_1 + 0x3a0));
  return;
}



// FUNCTION 147b9a382 FUN_147b9a382 body=12 status=ok
// SIG undefined FUN_147b9a382(void)

void FUN_147b9a382(longlong param_1)

{
  FUN_1479ea8a8(*(undefined8 *)(param_1 + 0x3a0));
  return;
}



// FUNCTION 147b9a39e thunk_FUN_14493c441 body=5 status=ok
// SIG undefined thunk_FUN_14493c441(void)

void thunk_FUN_14493c441(void)

{
  FUN_14493c441();
  return;
}



// FUNCTION 147b9a3a4 FUN_147b9a3a4 body=153 status=ok
// SIG undefined FUN_147b9a3a4(void)

void FUN_147b9a3a4(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143732e68();
  local_1c = *(undefined4 *)(param_1 + 0x158);
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
  *(undefined4 *)(param_1 + 0x158) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9a43e FUN_147b9a43e body=101 status=ok
// SIG undefined FUN_147b9a43e(void)

undefined8 FUN_147b9a43e(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  bVar2 = FUN_147d6e2de(param_1,0);
  puVar1 = *(undefined4 **)(param_1 + 0x148);
  uVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
  }
  FUN_140002266(param_2,L"Lightmap: %dx%d [%s]",uVar4,uVar3,
                *(undefined8 *)((longlong)&DAT_14c873410 + (ulonglong)((uint)bVar2 * 0x30)));
  return param_2;
}



// FUNCTION 147b9a4a4 FUN_147b9a4a4 body=471 status=ok
// SIG undefined FUN_147b9a4a4(void)

undefined8 *
FUN_147b9a4a4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,char param_7,byte param_8,longlong *param_9,
             longlong param_10,undefined4 *param_11,undefined4 *param_12,undefined8 *param_13)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
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
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  
  *param_1 = &PTR_FUN_14a89a7a0;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(param_1[1] + 4) + 8) = &PTR_LAB_14a89a800;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 4) = param_6;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar18 = 0;
  if (param_7 != '\0') {
    uVar18 = (uint)(*(byte *)(param_10 + 0x2d6) >> 7);
  }
  *(uint *)(param_1 + 7) = uVar18 + (uint)param_8 * 2 | *(uint *)(param_1 + 7) & 0xfffffffc;
  param_1[8] = 0;
  iVar2 = (int)param_9[1];
  _Src = (void *)*param_9;
  *(int *)(param_1 + 9) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_147b9d154(param_1 + 8,iVar2);
    memcpy((void *)param_1[8],_Src,(longlong)iVar2 << 3);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_10;
  uVar16 = param_13[1];
  param_1[0xd] = *param_13;
  param_1[0xe] = uVar16;
  uVar5 = param_11[1];
  uVar6 = param_11[2];
  uVar7 = param_11[3];
  uVar8 = param_11[4];
  uVar9 = param_11[5];
  uVar10 = param_11[6];
  uVar11 = param_11[7];
  uVar12 = param_11[8];
  uVar13 = param_11[9];
  uVar14 = param_11[10];
  uVar15 = param_11[0xb];
  *(undefined4 *)(param_1 + 0xf) = *param_11;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar7;
  *(undefined4 *)(param_1 + 0x11) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar9;
  *(undefined4 *)(param_1 + 0x12) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar11;
  *(undefined4 *)(param_1 + 0x13) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar13;
  *(undefined4 *)(param_1 + 0x14) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar15;
  param_1[0x15] = *(undefined8 *)(param_11 + 0xc);
  FUN_1412e3d1e(param_1 + 0x16);
  uVar5 = param_12[1];
  uVar6 = param_12[2];
  uVar7 = param_12[3];
  *(undefined4 *)(param_1 + 0x18) = *param_12;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar5;
  *(undefined4 *)(param_1 + 0x19) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar7;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  lVar17 = param_9[1];
  if ((longlong)(int)lVar17 != 0) {
    lVar3 = *param_9;
    lVar19 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar19);
      iVar2 = *(int *)(param_1 + 0xb);
      *(uint *)(param_1 + 0xb) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x5c) < iVar2 + 1U) {
        FUN_140c60952(param_1 + 10,iVar2);
      }
      uVar5 = *(undefined4 *)(lVar4 + 700);
      uVar6 = *(undefined4 *)(lVar4 + 0x2c0);
      uVar7 = *(undefined4 *)(lVar4 + 0x2c4);
      puVar1 = (undefined4 *)(param_1[10] + (longlong)iVar2 * 0x10);
      *puVar1 = *(undefined4 *)(lVar4 + 0x2b8);
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar19 = lVar19 + 8;
    } while ((longlong)(int)lVar17 * 8 != lVar19);
  }
  return param_1;
}



// FUNCTION 147b9a67c FUN_147b9a67c body=87 status=ok
// SIG undefined FUN_147b9a67c(void)

void FUN_147b9a67c(longlong param_1,undefined8 param_2)

{
  FUN_140119d96(param_2,param_1 + 0x78);
  FUN_1402ac1b3(param_2,param_1 + 0xb0);
  FUN_1402ac1b3(param_2,param_1 + 0x68);
  FUN_146ed6908(param_2,param_1 + 0x50);
  FUN_1402ac1b3(param_2,param_1 + 0xc0);
  return;
}



// FUNCTION 147b9a6d4 FUN_147b9a6d4 body=169 status=ok
// SIG undefined FUN_147b9a6d4(void)

undefined8 * FUN_147b9a6d4(undefined8 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = &PTR_LAB_14a3cb890;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  uVar1 = FUN_1449277db(DAT_14c760db4);
  *(undefined1 *)(param_1 + 3) = uVar1;
  *param_1 = &PTR_FUN_14a3cb8d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f80000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f80000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3f80000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3f80000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 147b9a77e FUN_147b9a77e body=8 status=ok
// SIG undefined FUN_147b9a77e(void)

undefined8 FUN_147b9a77e(longlong param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + 0x20 + (ulonglong)param_2 * 8);
}



// FUNCTION 147b9a786 FUN_147b9a786 body=5 status=ok
// SIG undefined FUN_147b9a786(void)

undefined8 FUN_147b9a786(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 147b9a78c FUN_147b9a78c body=5 status=ok
// SIG undefined FUN_147b9a78c(void)

undefined8 FUN_147b9a78c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 147b9a792 FUN_147b9a792 body=12 status=ok
// SIG undefined FUN_147b9a792(void)

bool FUN_147b9a792(longlong param_1,uint param_2)

{
  return *(longlong *)(param_1 + 0x20 + (ulonglong)param_2 * 8) != 0;
}



// FUNCTION 147b9a79e FUN_147b9a79e body=179 status=ok
// SIG undefined FUN_147b9a79e(void)

void FUN_147b9a79e(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x38,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x40,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x48,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147b9a84e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x50,0,0);
  return;
}



// FUNCTION 147b9a852 FUN_147b9a852 body=1534 status=ok
// SIG undefined FUN_147b9a852(void)

void FUN_147b9a852(longlong param_1,longlong *param_2)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_b8 [44];
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  uVar7 = FUN_1448332aa(param_2,&DAT_149e3cb60);
  FUN_146ed6908(param_2,param_1 + 8);
  lVar15 = DAT_14cae92c0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar8 = (ulonglong)(bVar6 ^ 1);
  }
  if (*(int *)(lVar15 + uVar8 * 4) == 0) {
    cVar3 = '\0';
  }
  else {
    if (param_2[0xd] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(param_2[0xd] + 8);
    }
    cVar3 = FUN_1449d9015(DAT_14ca85550,uVar9);
  }
  local_8c = uVar7;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
LAB_147b9a917:
    lVar15 = param_2[0xd];
    if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x10) == 0)) {
      (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x20);
      puVar12 = (undefined8 *)(param_1 + 0x28);
      lVar15 = *param_2;
    }
    else {
      cVar4 = (**(code **)(**(longlong **)(lVar15 + 8) + 0xb8))(*(longlong **)(lVar15 + 8),5);
      if (param_2[0xd] == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_2[0xd] + 8);
      }
      cVar5 = (**(code **)(*plVar10 + 0xb8))(plVar10,4);
      local_88 = 0;
      puVar11 = (undefined8 *)(param_1 + 0x20);
      if (cVar5 == '\0') {
        puVar11 = &local_88;
      }
      if (cVar3 != '\0') {
        puVar11 = &local_88;
      }
      puVar12 = (undefined8 *)(param_1 + 0x28);
      if (cVar4 != '\x01' || cVar3 != '\0') {
        puVar12 = &local_88;
      }
      (**(code **)(*param_2 + 0x138))(param_2,puVar11);
      lVar15 = *param_2;
    }
    (**(code **)(lVar15 + 0x138))(param_2,puVar12);
    if (0x147 < (int)param_2[8]) {
      lVar15 = param_2[0xd];
      if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x10) == 0)) {
        (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x30);
        if (0x1dc < (int)param_2[8]) {
          puVar12 = (undefined8 *)(param_1 + 0x38);
          goto LAB_147b9ab5b;
        }
      }
      else {
        bVar6 = (**(code **)(**(longlong **)(lVar15 + 8) + 0xb8))(*(longlong **)(lVar15 + 8),4);
        local_88 = 0;
        puVar12 = (undefined8 *)(param_1 + 0x30);
        if ((bVar6 ^ 1) != 0 || cVar3 != '\0') {
          puVar12 = &local_88;
        }
        (**(code **)(*param_2 + 0x138))(param_2,puVar12);
        if (0x1dc < (int)param_2[8]) {
          puVar12 = (undefined8 *)(param_1 + 0x38);
          if ((bVar6 ^ 1) != 0 || cVar3 != '\0') {
            puVar12 = &local_88;
          }
LAB_147b9ab5b:
          (**(code **)(*param_2 + 0x138))(param_2,puVar12);
        }
      }
    }
    lVar15 = param_1 + 0xa0;
    lVar13 = 4;
    do {
      FUN_1447e46aa(param_2,lVar15 + -0x40);
      FUN_1447e46aa(param_2,lVar15);
      lVar15 = lVar15 + 0x10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  else if ((int)*(uint *)(param_2 + 8) < 0xf7) {
    iVar14 = 3;
    do {
      local_68 = 0;
      (**(code **)(*param_2 + 0x150))(param_2,&local_68);
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0x3ff0000000000000;
      FUN_140c5e5ec(param_2,&local_88);
      FUN_140c5e5ec(param_2,&local_88);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  else {
    if (0x130 < *(uint *)(param_2 + 8)) goto LAB_147b9a917;
    iVar14 = 4;
    do {
      local_68 = 0;
      (**(code **)(*param_2 + 0x150))(param_2,&local_68);
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0x3ff0000000000000;
      FUN_140c5e5ec(param_2,&local_88);
      FUN_140c5e5ec(param_2,&local_88);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  uVar9 = FUN_14010abd4(param_2,param_1 + 0xe0);
  FUN_14010abd4(uVar9,param_1 + 0xf0);
  uVar7 = local_8c;
  if (0x1c < (int)local_8c) {
    lVar15 = 0;
    do {
      piVar2 = *(int **)param_2[1];
      if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
        local_88 = CONCAT44(local_88._4_4_,(uint)*(byte *)(param_1 + 0x110 + lVar15));
        (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
        if (1 < (uint)local_88) {
          FUN_14572541c(param_2);
        }
        *(bool *)(param_1 + 0x110 + lVar15) = (uint)local_88 != 0;
      }
      else {
        *(bool *)(param_1 + 0x110 + lVar15) = *piVar2 != 0;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    FUN_1447e46aa(param_2,param_1 + 0x100);
  }
  if (0x1a < (int)uVar7) {
    if (uVar7 < 0x1f) {
LAB_147b9ad22:
      local_88 = 0;
      lVar15 = *param_2;
    }
    else {
      if (uVar7 < 0x2d) {
        if (cVar3 != '\0') {
          (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x48);
          if ((*(byte *)(param_2 + 5) & 1) != 0) {
            *(undefined8 *)(param_1 + 0x50) = 0;
          }
          goto LAB_147b9ad47;
        }
        goto LAB_147b9ad22;
      }
      if (cVar3 != '\0') {
        lVar15 = param_2[0xd];
        if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x10) == 0)) {
          (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x48);
          puVar12 = (undefined8 *)(param_1 + 0x50);
          lVar15 = *param_2;
        }
        else {
          cVar4 = (**(code **)(**(longlong **)(lVar15 + 8) + 0xb8))(*(longlong **)(lVar15 + 8),5);
          if (param_2[0xd] == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(param_2[0xd] + 8);
          }
          cVar5 = (**(code **)(*plVar10 + 0xb8))(plVar10,4);
          local_88 = 0;
          puVar11 = (undefined8 *)(param_1 + 0x48);
          if (cVar5 == '\0') {
            puVar11 = &local_88;
          }
          puVar12 = (undefined8 *)(param_1 + 0x50);
          if (cVar4 == '\0') {
            puVar12 = &local_88;
          }
          (**(code **)(*param_2 + 0x138))(param_2,puVar11);
          lVar15 = *param_2;
        }
        (**(code **)(lVar15 + 0x138))(param_2,puVar12);
        goto LAB_147b9ad47;
      }
      local_88 = 0;
      (**(code **)(*param_2 + 0x150))(param_2,&local_88);
      lVar15 = *param_2;
    }
    (**(code **)(lVar15 + 0x150))(param_2,&local_88);
    if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_147b9ad47;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_147b9ad47:
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    lVar15 = 0;
    do {
      fVar1 = *(float *)(param_1 + 0x80 + lVar15 * 4);
      fVar16 = 0.0;
      if (0.0 <= fVar1) {
        fVar16 = fVar1;
      }
      *(float *)(param_1 + 0x80 + lVar15 * 4) = fVar16;
      fVar1 = *(float *)(param_1 + 0xc0 + lVar15 * 4);
      fVar16 = 0.01;
      if (0.01 <= fVar1) {
        fVar16 = fVar1;
      }
      *(float *)(param_1 + 0xc0 + lVar15 * 4) = fVar16;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 3);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (cVar3 == '\0') {
        bVar6 = *(byte *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x20 + (ulonglong)bVar6 * 8) = 0;
        if (bVar6 == 0) {
          *(undefined8 *)(param_1 + 0x30) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b9ae52 FUN_147b9ae52 body=357 status=ok
// SIG undefined FUN_147b9ae52(void)

longlong FUN_147b9ae52(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  
  bVar1 = FUN_1449277db(param_3);
  lVar5 = DAT_14cae92c0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar6 ^ 1);
  }
  bVar6 = bVar1 ^ 1;
  if ((*(int *)(lVar5 + uVar3 * 4) == 0) ||
     (cVar2 = FUN_1449d9015(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_3 * 2),0),
     cVar2 == '\0')) {
    if ((*(longlong *)(param_1 + 0x20 + (ulonglong)bVar6 * 8) != 0) &&
       (lVar5 = FUN_1447b4020(), lVar5 != 0)) {
      FUN_147ceef06(param_2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x30),
                    *(undefined8 *)(param_1 + 0x38),param_1 + 0x60,param_1 + 0xa0,param_1 + 0xe0,
                    param_1 + 0xf0,bVar1);
      return param_2;
    }
  }
  else if (*(longlong *)(param_1 + 0x48 + (ulonglong)bVar6 * 8) != 0) {
    lVar4 = FUN_1447b4020();
    lVar5 = *(longlong *)(param_1 + 0x48 + (ulonglong)bVar6 * 8);
    if ((lVar4 != 0) || (*(char *)(lVar5 + 0x168) == '\x01')) {
      FUN_147ceeffc(param_2,lVar5,param_1 + 0x60,param_1 + 0xa0,param_1 + 0xe0,param_1 + 0xf0,bVar1)
      ;
      return param_2;
    }
  }
  FUN_144b13b96(param_2);
  *(undefined4 *)(param_2 + 0xb8) = 0;
  return param_2;
}



// FUNCTION 147b9afb8 FUN_147b9afb8 body=254 status=ok
// SIG undefined FUN_147b9afb8(void)

undefined8 * FUN_147b9afb8(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  bVar3 = FUN_1449277db(param_3);
  lVar1 = DAT_14cae92c0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar6 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar4 ^ 1);
  }
  if (((*(int *)(lVar1 + uVar6 * 4) != 0) &&
      (cVar5 = FUN_1449d9015(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_3 * 2),0),
      cVar5 != '\0')) && (*(longlong *)(param_1 + 0x48 + (ulonglong)(bVar3 ^ 1) * 8) != 0)) {
    lVar7 = FUN_1447b4020();
    lVar1 = *(longlong *)(param_1 + 0x48 + (ulonglong)(bVar3 ^ 1) * 8);
    if ((lVar7 != 0) || (*(char *)(lVar1 + 0x168) == '\x01')) {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 10) = 2;
      param_2[1] = lVar1;
      uVar2 = *(undefined8 *)(param_1 + 0xe8);
      param_2[2] = *(undefined8 *)(param_1 + 0xe0);
      param_2[3] = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 0xf8);
      param_2[4] = *(undefined8 *)(param_1 + 0xf0);
      param_2[5] = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 0x108);
      param_2[8] = *(undefined8 *)(param_1 + 0x100);
      param_2[9] = uVar2;
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x110);
      return param_2;
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  return param_2;
}



// FUNCTION 147b9b0b6 FUN_147b9b0b6 body=307 status=ok
// SIG undefined FUN_147b9b0b6(void)

void FUN_147b9b0b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98 [24];
  undefined8 local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined4 uStack_6b;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined5 uStack_40;
  undefined4 uStack_3b;
  undefined1 uStack_37;
  undefined6 uStack_36;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_146ed6908(param_2,param_1 + 8);
  uStack_36 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_37 = 0xff;
  uStack_3b = 0xffffffff;
  local_30 = DAT_14c845dbc;
  local_28 = DAT_14c845dc4;
  uStack_66 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_67 = 0xff;
  uStack_6b = 0xffffffff;
  local_60 = DAT_14c845dbc;
  local_58 = DAT_14c845dc4;
  (**(code **)(*param_2 + 0x150))(param_2,&local_80);
  local_a0 = 0;
  local_a8 = 8;
  FUN_140430222(&local_48,param_2,local_80,0);
  iVar1 = 5;
  do {
    FUN_14480c34d(param_2,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_a0 = 0;
  local_a8 = 8;
  FUN_140430222(&local_78,param_2,local_80,0);
  FUN_14102a02c(&local_78);
  FUN_14102a02c(&local_48);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9b1ea FUN_147b9b1ea body=415 status=ok
// SIG undefined FUN_147b9b1ea(void)

longlong * FUN_147b9b1ea(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (((*(byte *)(param_1 + 5) & 4) != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (lVar4 != 0) {
      local_24 = 2;
    }
  }
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_147b9b274:
    plVar5 = (longlong *)*param_2;
LAB_147b9b277:
    if (plVar5 == (longlong *)0x0) goto LAB_147b9b307;
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_147b9b307;
    if (local_24 == 1) {
      puVar3 = (undefined8 *)*param_2;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *param_2 = 0;
    }
    if (0x130 < (int)param_1[8]) goto LAB_147b9b307;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  else if (local_24 != 0) {
    if (local_24 == 1) {
      plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
      *plVar5 = (longlong)&PTR_LAB_14a3cb890;
      plVar5[1] = 0;
      plVar5[2] = 0;
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = 0;
      FUN_1449277db(DAT_14c760db4);
      *plVar5 = (longlong)&PTR_FUN_14a9bb540;
      *(undefined1 *)(plVar5 + 3) = 0;
    }
    else {
      if (local_24 != 2) goto LAB_147b9b274;
      plVar5 = (longlong *)FUN_14001cc68(0x120,0x10);
      FUN_147b9a6d4(plVar5);
    }
    *param_2 = (longlong)plVar5;
    goto LAB_147b9b277;
  }
  *param_2 = 0;
LAB_147b9b307:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9b38a FUN_147b9b38a body=65 status=ok
// SIG undefined FUN_147b9b38a(void)

void FUN_147b9b38a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a9bb400;
  if (param_1[10] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[10] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 147b9b3cc FUN_147b9b3cc body=396 status=ok
// SIG undefined FUN_147b9b3cc(void)

void FUN_147b9b3cc(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined8 local_5d;
  undefined8 uStack_55;
  undefined8 local_4d;
  undefined2 uStack_45;
  undefined6 uStack_43;
  undefined2 uStack_3d;
  undefined8 local_3b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar10 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar10 = DAT_14c760db4;
  }
  bVar2 = FUN_1449277db(uVar10);
  if ((*(longlong *)(param_1 + 0x48) == 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x30 + (ulonglong)(bVar2 ^ 1) * 8), lVar1 != 0)) {
    lVar5 = FUN_1448463c0(lVar1);
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_1448463c0(lVar1);
      local_7c = (undefined4)plVar6[0x11];
      plVar7 = (longlong *)FUN_144a7b9cd();
      (**(code **)(*plVar7 + 0x158))(plVar7,&local_7c,FUN_1435602a8,param_1);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_5e = 0xff;
      local_5d = 0;
      uStack_55 = 0;
      local_4d = 0;
      uStack_45 = 0;
      uStack_43 = 0;
      uStack_3d = 0;
      local_3b = 0;
      local_60 = 2;
      uVar3 = (**(code **)(*plVar6 + 0xd0))(plVar6);
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
      uVar3 = (**(code **)(*plVar6 + 0xd8))(plVar6);
      uStack_70 = CONCAT44(uVar3,(undefined4)uStack_70);
      local_5f = 0;
      uVar10 = 0;
      lVar5 = 0;
      do {
        iVar4 = FUN_147da7c0a(lVar1);
        if (iVar4 == -1) {
          *(undefined4 *)((longlong)&local_5d + lVar5 * 4 + 1) = 0;
        }
        else {
          uVar10 = (int)lVar5 + 1;
          local_5f = (undefined1)uVar10;
          *(undefined4 *)((longlong)&local_5d + lVar5 * 4 + 1) = local_7c;
          *(char *)((longlong)&uStack_3d + lVar5 + 1) = (char)iVar4;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 5);
      if ((char)uVar10 != '\0') {
        uVar9 = 0;
        do {
          if (*(int *)((longlong)&local_5d + uVar9 * 4 + 1) == 0) {
            *(undefined4 *)((longlong)&local_5d + uVar9 * 4 + 1) = local_7c;
            *(undefined1 *)((longlong)&uStack_3d + uVar9 + 1) = 0;
          }
          uVar9 = uVar9 + 1;
        } while ((uVar10 & 0xff) != uVar9);
      }
      uVar8 = FUN_144a7b9cd();
      uVar8 = FUN_147429f4a(uVar8,&local_78);
      *(undefined8 *)(param_1 + 0x48) = uVar8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9b55a FUN_147b9b55a body=5 status=ok
// SIG undefined FUN_147b9b55a(void)

undefined8 FUN_147b9b55a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 147b9b560 FUN_147b9b560 body=323 status=ok
// SIG undefined FUN_147b9b560(void)

void FUN_147b9b560(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(int *)(DAT_14cae92c0 + 4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + 0xc);
      if (*(byte *)(param_1 + 0xc) == 5) {
        uVar2 = DAT_14c760db4;
      }
      uVar3 = 0;
      cVar1 = FUN_1449d9015(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar2 * 2),0);
      if (cVar1 != '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x48);
      }
    }
    uVar2 = (uint)*(byte *)(param_1 + 0xc);
    if (*(byte *)(param_1 + 0xc) == 5) {
      uVar2 = DAT_14c760db4;
    }
    FUN_1461f4cb7(uVar2,param_1 + 0x10,uVar3,&local_98);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if (DAT_14ca85169 == '\0') {
      FUN_14002049c(&DAT_14ca85100,1);
      (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,&DAT_14ca85100,uVar3,&local_98);
      FUN_14002049c(&DAT_14ca85100,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,&DAT_14ca85100,uVar3,&local_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9b6a4 FUN_147b9b6a4 body=72 status=ok
// SIG undefined FUN_147b9b6a4(void)

void FUN_147b9b6a4(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar1 + 0x160))(plVar1,param_1);
    plVar1 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar1 + 0x130))(plVar1,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147b9b6ec FUN_147b9b6ec body=67 status=ok
// SIG undefined FUN_147b9b6ec(void)

void FUN_147b9b6ec(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_147b9b6a4();
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147b9b730 FUN_147b9b730 body=25 status=ok
// SIG undefined FUN_147b9b730(void)

undefined8 FUN_147b9b730(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return 0;
}



// FUNCTION 147b9b74c FUN_147b9b74c body=45 status=ok
// SIG undefined FUN_147b9b74c(void)

longlong FUN_147b9b74c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9b782 FUN_147b9b782 body=45 status=ok
// SIG undefined FUN_147b9b782(void)

longlong FUN_147b9b782(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145b06524(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9b7b6 FUN_147b9b7b6 body=45 status=ok
// SIG undefined FUN_147b9b7b6(void)

longlong FUN_147b9b7b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145898044(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9b7e8 FUN_147b9b7e8 body=29 status=ok
// SIG undefined FUN_147b9b7e8(void)

undefined8 FUN_147b9b7e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9b806 FUN_147b9b806 body=38 status=ok
// SIG undefined FUN_147b9b806(void)

undefined8 FUN_147b9b806(undefined8 param_1,int param_2)

{
  FUN_147b9b38a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9b82c FUN_147b9b82c body=57 status=ok
// SIG undefined FUN_147b9b82c(void)

undefined8 * FUN_147b9b82c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9bb430;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9b866 FUN_147b9b866 body=95 status=ok
// SIG undefined FUN_147b9b866(void)

void FUN_147b9b866(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a9bb4c0;
    *param_3 = *param_4;
    *param_4 = 0;
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    FUN_143560360(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 147b9b8c6 FUN_147b9b8c6 body=26 status=ok
// SIG undefined FUN_147b9b8c6(void)

undefined8 FUN_147b9b8c6(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1401807a6(param_2,0);
  }
  return 0;
}



// FUNCTION 147b9b90a FUN_147b9b90a body=26 status=ok
// SIG undefined FUN_147b9b90a(void)

undefined8 FUN_147b9b90a(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1401807a6(*param_2,0);
  }
  return 0;
}



// FUNCTION 147b9b924 FUN_147b9b924 body=70 status=ok
// SIG undefined FUN_147b9b924(void)

undefined8
FUN_147b9b924(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_1401807a6(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a9bb500;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 147b9b978 FUN_147b9b978 body=57 status=ok
// SIG undefined FUN_147b9b978(void)

undefined8 * FUN_147b9b978(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a3cb890;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9b9b2 FUN_147b9b9b2 body=35 status=ok
// SIG undefined FUN_147b9b9b2(void)

longlong FUN_147b9b9b2(undefined8 param_1,longlong param_2)

{
  FUN_144b13b96(param_2);
  *(undefined4 *)(param_2 + 0xb8) = 0;
  return param_2;
}



// FUNCTION 147b9b9d6 FUN_147b9b9d6 body=64 status=ok
// SIG undefined FUN_147b9b9d6(void)

undefined8 * FUN_147b9b9d6(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9ba1e FUN_147b9ba1e body=133 status=ok
// SIG undefined FUN_147b9ba1e(void)

undefined8 FUN_147b9ba1e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1468ff1f6(param_2,*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    cVar1 = FUN_144b00bde(param_2,*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      lVar2 = FUN_144a7b8cc();
      if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar2 = FUN_144a7757c();
        if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
            != lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147b9ba96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147b9baa4 FUN_147b9baa4 body=114 status=ok
// SIG undefined FUN_147b9baa4(void)

void FUN_147b9baa4(longlong *param_1,int param_2)

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



// FUNCTION 147b9bb16 FUN_147b9bb16 body=87 status=ok
// SIG undefined FUN_147b9bb16(void)

void FUN_147b9bb16(longlong *param_1,int param_2)

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
  FUN_147b9baa4();
  return;
}



// FUNCTION 147b9bb6e FUN_147b9bb6e body=38 status=ok
// SIG undefined FUN_147b9bb6e(void)

undefined8 FUN_147b9bb6e(undefined8 param_1,int param_2)

{
  FUN_145addaa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9bb9a FUN_147b9bb9a body=33 status=ok
// SIG undefined FUN_147b9bb9a(void)

void FUN_147b9bb9a(undefined8 param_1)

{
  FUN_145addb26();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147b9bbf0 FUN_147b9bbf0 body=322 status=ok
// SIG undefined FUN_147b9bbf0(void)

void FUN_147b9bbf0(longlong *param_1)

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



// FUNCTION 147b9bd4e FUN_147b9bd4e body=29 status=ok
// SIG undefined FUN_147b9bd4e(void)

bool FUN_147b9bd4e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147b9bd6c FUN_147b9bd6c body=26 status=ok
// SIG undefined FUN_147b9bd6c(void)

bool FUN_147b9bd6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147b9bd86 FUN_147b9bd86 body=93 status=ok
// SIG undefined FUN_147b9bd86(void)

void FUN_147b9bd86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9bb640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147b9bde4 FUN_147b9bde4 body=126 status=ok
// SIG undefined FUN_147b9bde4(void)

void FUN_147b9bde4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9bb640;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b9be53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b9be62 FUN_147b9be62 body=58 status=ok
// SIG undefined FUN_147b9be62(void)

void FUN_147b9be62(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147b9be99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147b9be9c FUN_147b9be9c body=130 status=ok
// SIG undefined FUN_147b9be9c(void)

longlong * FUN_147b9be9c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (longlong)(param_1 + 4);
  param_1[1] = (longlong)(param_1 + 4);
  param_1[2] = (longlong)(param_1 + 0x84);
  FUN_14005eb5c(param_2,param_1);
  puVar2 = (undefined2 *)param_1[1];
  if ((undefined2 *)param_1[2] <= puVar2 + 1) {
    FUN_140213274(param_1,1);
    puVar2 = (undefined2 *)param_1[1];
  }
  *puVar2 = 0x2e;
  param_1[1] = (longlong)(puVar2 + 1);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(param_1,*param_3,iVar1);
  return param_1;
}



// FUNCTION 147b9bf1e FUN_147b9bf1e body=124 status=ok
// SIG undefined FUN_147b9bf1e(void)

void FUN_147b9bf1e(longlong param_1,int param_2)

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
    FUN_147b9bf9c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b9bf9c FUN_147b9bf9c body=132 status=ok
// SIG undefined FUN_147b9bf9c(void)

void FUN_147b9bf9c(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147b9c020 FUN_147b9c020 body=31 status=ok
// SIG undefined FUN_147b9c020(void)

undefined8 FUN_147b9c020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9c052 FUN_147b9c052 body=93 status=ok
// SIG undefined FUN_147b9c052(void)

void FUN_147b9c052(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9bb850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147b9c0b0 FUN_147b9c0b0 body=93 status=ok
// SIG undefined FUN_147b9c0b0(void)

void FUN_147b9c0b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9bb850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147b9c10e FUN_147b9c10e body=126 status=ok
// SIG undefined FUN_147b9c10e(void)

void FUN_147b9c10e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3ea200;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9bb850;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b9c17d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b9c19c FUN_147b9c19c body=26 status=ok
// SIG undefined FUN_147b9c19c(void)

undefined8 FUN_147b9c19c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 147b9c1b6 FUN_147b9c1b6 body=132 status=ok
// SIG undefined FUN_147b9c1b6(void)

void FUN_147b9c1b6(longlong param_1,int param_2)

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



// FUNCTION 147b9c23c FUN_147b9c23c body=312 status=ok
// SIG undefined FUN_147b9c23c(void)

undefined4 * FUN_147b9c23c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_147b9c376(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147b9c45c(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_147b9c54a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9c376 FUN_147b9c376 body=229 status=ok
// SIG undefined FUN_147b9c376(void)

int * FUN_147b9c376(longlong *param_1,int *param_2)

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



// FUNCTION 147b9c45c FUN_147b9c45c body=124 status=ok
// SIG undefined FUN_147b9c45c(void)

undefined8 FUN_147b9c45c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147b9c4d8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147b9c4d8 FUN_147b9c4d8 body=114 status=ok
// SIG undefined FUN_147b9c4d8(void)

void FUN_147b9c4d8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147b9c54a FUN_147b9c54a body=477 status=ok
// SIG undefined FUN_147b9c54a(void)

void FUN_147b9c54a(longlong *param_1)

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



// FUNCTION 147b9c728 FUN_147b9c728 body=324 status=ok
// SIG undefined FUN_147b9c728(void)

undefined4 * FUN_147b9c728(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  FUN_147b9c86e(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147b9c954(param_1,uVar4,local_40,&local_4c);
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
      FUN_147b9ca46(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9c86e FUN_147b9c86e body=230 status=ok
// SIG undefined FUN_147b9c86e(void)

int * FUN_147b9c86e(longlong *param_1,int *param_2)

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



// FUNCTION 147b9c954 FUN_147b9c954 body=128 status=ok
// SIG undefined FUN_147b9c954(void)

undefined8 FUN_147b9c954(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147b9c9d4((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147b9c9d4 FUN_147b9c9d4 body=114 status=ok
// SIG undefined FUN_147b9c9d4(void)

void FUN_147b9c9d4(longlong *param_1,int param_2)

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



// FUNCTION 147b9ca46 FUN_147b9ca46 body=474 status=ok
// SIG undefined FUN_147b9ca46(void)

void FUN_147b9ca46(longlong *param_1)

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



// FUNCTION 147b9cc22 FUN_147b9cc22 body=332 status=ok
// SIG undefined FUN_147b9cc22(void)

undefined4 * FUN_147b9cc22(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
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
  FUN_147b9cd70(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined1 *)((longlong)local_40 + 10) = *(undefined1 *)(puVar1 + 1);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147b9ce56(param_1,uVar4,local_40,&local_4c);
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
      FUN_147b9cf48(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9cd70 FUN_147b9cd70 body=230 status=ok
// SIG undefined FUN_147b9cd70(void)

int * FUN_147b9cd70(longlong *param_1,int *param_2)

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



// FUNCTION 147b9ce56 FUN_147b9ce56 body=128 status=ok
// SIG undefined FUN_147b9ce56(void)

undefined8 FUN_147b9ce56(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147b9ced6((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147b9ced6 FUN_147b9ced6 body=114 status=ok
// SIG undefined FUN_147b9ced6(void)

void FUN_147b9ced6(longlong *param_1,int param_2)

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



// FUNCTION 147b9cf48 FUN_147b9cf48 body=474 status=ok
// SIG undefined FUN_147b9cf48(void)

void FUN_147b9cf48(longlong *param_1)

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



// FUNCTION 147b9d124 FUN_147b9d124 body=48 status=ok
// SIG undefined FUN_147b9d124(void)

void FUN_147b9d124(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x200,0x10);
  }
  return;
}



// FUNCTION 147b9d154 FUN_147b9d154 body=89 status=ok
// SIG undefined FUN_147b9d154(void)

void FUN_147b9d154(longlong param_1,int param_2)

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



// FUNCTION 147b9d1b2 FUN_147b9d1b2 body=215 status=ok
// SIG undefined FUN_147b9d1b2(void)

undefined8 * FUN_147b9d1b2(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 auStack_78 [10];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140ee1f3a(&local_118);
  FUN_140ee1f64(param_3,&local_118,param_2);
  *param_1 = local_118;
  param_1[1] = uStack_110;
  param_1[2] = local_108;
  param_1[3] = uStack_100;
  param_1[4] = local_f8;
  param_1[5] = uStack_f0;
  param_1[6] = local_e8;
  param_1[7] = uStack_e0;
  param_1[8] = local_d8;
  param_1[9] = uStack_d0;
  param_1[10] = local_c8;
  param_1[0xb] = uStack_c0;
  param_1[0xc] = local_b8;
  param_1[0xd] = uStack_b0;
  param_1[0xe] = local_a8;
  param_1[0xf] = uStack_a0;
  *(undefined4 *)(param_1 + 0x12) = local_88;
  *(undefined4 *)((longlong)param_1 + 0x94) = uStack_84;
  *(undefined4 *)(param_1 + 0x13) = uStack_80;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_7c;
  *(undefined4 *)(param_1 + 0x10) = local_98;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_94;
  *(undefined4 *)(param_1 + 0x11) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_8c;
  puVar2 = auStack_78;
  puVar3 = param_1 + 0x14;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9d29a FUN_147b9d29a body=477 status=ok
// SIG undefined FUN_147b9d29a(void)

void FUN_147b9d29a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_188 [32];
  undefined8 local_168 [4];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [17];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168[0] = *(undefined8 *)(param_1 + 0xd0);
  local_168[1] = *(undefined8 *)(param_1 + 0xd8);
  local_168[2] = *(undefined8 *)(param_1 + 0xe0);
  local_168[3] = *(undefined8 *)(param_1 + 0xe8);
  local_148 = *(undefined8 *)(param_1 + 0xf0);
  local_140 = *(undefined8 *)(param_1 + 0xf8);
  local_138 = *(undefined8 *)(param_1 + 0x100);
  local_130 = *(undefined8 *)(param_1 + 0x108);
  local_128 = *(undefined8 *)(param_1 + 0x110);
  local_120 = *(undefined8 *)(param_1 + 0x118);
  local_118 = *(undefined8 *)(param_1 + 0x120);
  local_110 = *(undefined8 *)(param_1 + 0x128);
  dVar1 = *param_2;
  local_108 = *(double *)(param_1 + 0x130) + dVar1;
  dVar2 = param_2[1];
  local_100 = *(double *)(param_1 + 0x138) + dVar2;
  dVar3 = param_2[2];
  local_f8 = *(double *)(param_1 + 0x140) + dVar3;
  local_f0 = *(undefined8 *)(param_1 + 0x148);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar5 = *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x20);
  puVar9 = local_168;
  puVar10 = (undefined8 *)(param_1 + 0xd0);
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_14007522e(local_e8);
  puVar9 = local_e8;
  puVar10 = (undefined8 *)(param_1 + 0x50);
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(double *)(param_1 + 0x20) = dVar1 + dVar7;
  *(double *)(param_1 + 0x28) = dVar2 + dVar6;
  *(double *)(param_1 + 0x30) = dVar3 + dVar5;
  *(double *)(param_1 + 0x38) = dVar4 + 1.0;
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9d478 FUN_147b9d478 body=175 status=ok
// SIG undefined FUN_147b9d478(void)

void FUN_147b9d478(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_147b9d528(&local_40,local_20);
  param_3[4] = local_30;
  param_3[5] = uStack_2c;
  param_3[6] = uStack_28;
  param_3[7] = uStack_24;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9d528 FUN_147b9d528 body=235 status=ok
// SIG undefined FUN_147b9d528(void)

undefined8 * FUN_147b9d528(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
  }
  else {
    uVar1 = FUN_145a1e508();
    lVar3 = *(longlong *)(param_2 + 0x1c8);
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
    uVar2 = FUN_1447210f0(param_2);
    lVar3 = FUN_147b9d92e(uVar1,*(undefined8 *)(param_2 + 0x10),uVar2,&local_38);
    if (lVar3 == 0) {
      FUN_140871de8(param_1,param_2);
      if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    FUN_147b9db06(lVar3,param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 147b9d614 FUN_147b9d614 body=535 status=ok
// SIG undefined FUN_147b9d614(void)

void FUN_147b9d614(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_108[0] = 0;
  local_108[1] = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_108);
  }
  local_110 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  uVar2 = local_a0;
  uVar1 = local_118;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_108;
  puVar6 = local_98;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = FUN_145a1e508();
  local_148 = uVar1;
  FUN_147b9d830(uVar3,&local_138,uVar2,local_98);
  param_3[4] = local_128;
  param_3[5] = uStack_124;
  param_3[6] = uStack_120;
  param_3[7] = uStack_11c;
  *param_3 = local_138;
  param_3[1] = uStack_134;
  param_3[2] = uStack_130;
  param_3[3] = uStack_12c;
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9d830 FUN_147b9d830 body=252 status=ok
// SIG undefined FUN_147b9d830(void)

undefined8 *
FUN_147b9d830(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    local_48 = *(undefined8 *)(param_4 + 0x20);
    uStack_40 = *(undefined8 *)(param_4 + 0x28);
    local_38 = *(undefined8 *)(param_4 + 0x30);
    plVar3 = (longlong *)FUN_147b9d92e((int)local_38,param_3,param_5);
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      iVar1 = (int)plVar3[0x86];
      if ((longlong)iVar1 < 1) {
        uVar2 = (undefined4)plVar3[0x88];
      }
      else {
        uVar2 = *(undefined4 *)(plVar3[0x85] + -4 + (longlong)iVar1 * 4);
        *(int *)(plVar3 + 0x86) = iVar1 + -1;
      }
      (**(code **)(*plVar3 + 0x648))(plVar3,param_4,uVar2);
      uVar2 = (**(code **)(*plVar3 + 0x680))(plVar3,uVar2);
      FUN_147ba18de(local_58,&local_30);
      FUN_147a91138(param_2,local_58,uVar2);
      goto LAB_147b9d860;
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
LAB_147b9d860:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9d92e FUN_147b9d92e body=471 status=ok
// SIG undefined FUN_147b9d92e(void)

longlong *
FUN_147b9d92e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_158 [36];
  int local_134;
  int local_130;
  int local_12c;
  undefined8 local_128 [4];
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar2 = (longlong *)FUN_147ba1458(param_1,param_2,param_4);
  if (plVar2 == (longlong *)0x0) {
    lVar3 = FUN_147ba1596(param_2);
    if (lVar3 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_98 = 0x800000101;
      puVar6 = &DAT_14c846480;
      puVar7 = local_128;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      plVar2 = *(longlong **)(lVar3 + 0x110);
      if (plVar2 == (longlong *)0x0) {
        FUN_140aa6c08(lVar3);
        plVar2 = *(longlong **)(lVar3 + 0x110);
      }
      iVar1 = (**(code **)(*plVar2 + 0x640))(plVar2);
      if (0 < iVar1) {
        FUN_147b9e408(plVar2,&local_134,param_4);
        dVar9 = (double)iVar1;
        dVar10 = (double)((float)iVar1 * 0.5);
        dVar8 = (double)local_130 * dVar9 + dVar10;
        local_f8 = (double)local_12c * dVar9 + dVar10;
        local_108._8_4_ = SUB84(dVar8,0);
        local_108._0_8_ = (double)local_134 * dVar9 + dVar10;
        local_108._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        uStack_f0 = 0;
      }
      plVar2 = (longlong *)FUN_141037e38(param_3,lVar3,local_128,&local_c8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x638))(plVar2,param_2);
      }
      if (local_88 != 0) {
        plVar5 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar5 = local_68;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9db06 FUN_147b9db06 body=515 status=ok
// SIG undefined FUN_147b9db06(void)

undefined8 FUN_147b9db06(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(*param_1 + 0x6a8))();
  if (lVar4 == 0) {
    FUN_140871de8(param_2,param_3);
    if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  (**(code **)(*param_1 + 0x6b0))(param_1,lVar4,param_3);
  plVar1 = param_1 + 0x79;
  plVar2 = param_1 + 0x7b;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar2;
  if ((int)param_1[0x7e] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar3 = (int)param_1[0x7e];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar3) || (uStack_60 != plVar2)) {
    do {
      if (*(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x18) == param_3) {
        iVar3 = *(int *)(*local_90 + (longlong)iStack_74 * 0x18);
        if (iVar3 != -1) {
          (**(code **)(*param_1 + 0x6a0))(param_1,lVar4,iVar3);
          goto LAB_147b9dc1b;
        }
        break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar3));
  }
  iVar3 = (int)param_1[0x86];
  if ((longlong)iVar3 < 1) {
    uVar5 = (undefined4)param_1[0x88];
  }
  else {
    uVar5 = *(undefined4 *)(param_1[0x85] + -4 + (longlong)iVar3 * 4);
    *(int *)(param_1 + 0x86) = iVar3 + -1;
  }
  (**(code **)(*param_1 + 0x648))(param_1,lVar4,uVar5);
  iVar3 = (**(code **)(*param_1 + 0x680))(param_1,uVar5);
LAB_147b9dc1b:
  FUN_140aeefbc(param_3,0,1);
  FUN_1400020a8(lVar4);
  FUN_147a911c0(param_2,param_1,iVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 147b9dd24 FUN_147b9dd24 body=178 status=ok
// SIG undefined FUN_147b9dd24(void)

void FUN_147b9dd24(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
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
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147b9e1e8(param_1,local_20);
  (**(code **)(*param_1 + 0x678))(param_1,uVar1,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9ddda FUN_147b9ddda body=420 status=ok
// SIG undefined FUN_147b9ddda(void)

void FUN_147b9ddda(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9470) {
    FUN_144b3d300(&DAT_14cae9470);
    if (DAT_14cae9470 == -1) {
      FUN_1446f470e(&DAT_14cae9468,L"RepresentedClass",1);
      _Init_thread_footer(&DAT_14cae9470);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae947c) {
    FUN_144b3d300(&DAT_14cae947c);
    if (DAT_14cae947c == -1) {
      FUN_1446f470e(&DAT_14cae9474,L"InstanceTransforms",1);
      _Init_thread_footer(&DAT_14cae947c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9488) {
    FUN_144b3d300(&DAT_14cae9488);
    if (DAT_14cae9488 == -1) {
      FUN_1446f470e(&DAT_14cae9480,L"FreeIndices",1);
      _Init_thread_footer(&DAT_14cae9488);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9494) {
    FUN_144b3d300(&DAT_14cae9494);
    if (DAT_14cae9494 == -1) {
      FUN_1446f470e(&DAT_14cae948c,L"ValidIndices",1);
      _Init_thread_footer(&DAT_14cae9494);
      return;
    }
  }
  return;
}



// FUNCTION 147b9df7e FUN_147b9df7e body=88 status=ok
// SIG undefined FUN_147b9df7e(void)

void FUN_147b9df7e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  plVar2 = (longlong *)FUN_145a1e508();
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_147ba8cc2(plVar2,iVar1);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  return;
}



// FUNCTION 147b9dfd6 FUN_147b9dfd6 body=50 status=ok
// SIG undefined FUN_147b9dfd6(void)

void FUN_147b9dfd6(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x3a8) = param_2;
  return;
}



// FUNCTION 147b9e00a FUN_147b9e00a body=139 status=ok
// SIG undefined FUN_147b9e00a(void)

longlong FUN_147b9e00a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar3 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    uVar2 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & *(uint *)(param_2 + 0x18))
                              * 4);
    if (uVar2 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar2 * 0x18),
            *puVar1 != *(uint *)(param_2 + 0x18)) {
        uVar2 = puVar1[4];
        if (uVar2 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
        lVar3 = *(longlong *)(puVar1 + 2);
        if (DAT_14c950c29 != '\x01') {
          return lVar3;
        }
        if (lVar3 == 0) {
          return 0;
        }
        FUN_1456cec3c(lVar3);
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 147b9e096 FUN_147b9e096 body=145 status=ok
// SIG undefined FUN_147b9e096(void)

void FUN_147b9e096(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_14111abfe(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x20e,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9e128 FUN_147b9e128 body=190 status=ok
// SIG undefined FUN_147b9e128(void)

undefined8 * FUN_147b9e128(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9b88) {
    FUN_144b3d300(&DAT_14cae9b88);
    if (DAT_14cae9b88 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"stroyed",8);
      builtin_wcsncpy(local_48 + 8,L"dActorDe",8);
      builtin_wcsncpy(local_48,L"OnSpawne",8);
      FUN_1446f470e(&DAT_14cae9b80,local_48,1);
      _Init_thread_footer(&DAT_14cae9b88);
    }
  }
  *param_1 = DAT_14cae9b80;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9e1e8 FUN_147b9e1e8 body=295 status=ok
// SIG undefined FUN_147b9e1e8(void)

undefined4 FUN_147b9e1e8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x3c8);
  lVar2 = param_1 + 0x3d8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x3f0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x3f0);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  uVar4 = 0xffffffff;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      if (*(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18) == param_2) {
        uVar4 = *(undefined4 *)(*local_80 + (longlong)iStack_64 * 0x18);
        break;
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147b9e310 FUN_147b9e310 body=96 status=ok
// SIG undefined FUN_147b9e310(void)

void FUN_147b9e310(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_14111abfe(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x20e,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9e372 FUN_147b9e372 body=75 status=ok
// SIG undefined FUN_147b9e372(void)

void FUN_147b9e372(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3ff00000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0x3ff0000000000000;
  puVar1[9] = 0x3ff0000000000000;
  puVar1[10] = 0x3ff0000000000000;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 147b9e3be FUN_147b9e3be body=62 status=ok
// SIG undefined FUN_147b9e3be(void)

void FUN_147b9e3be(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0 && param_2 != (undefined8 *)0x0) {
    puVar2 = &DAT_14c846480;
    if (*(longlong *)(param_3 + 0x1c8) != 0) {
      puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x1c8) + 0x240);
    }
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}



// FUNCTION 147b9e408 FUN_147b9e408 body=154 status=ok
// SIG undefined FUN_147b9e408(void)

undefined8 * FUN_147b9e408(longlong *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x640))();
  if (iVar3 < 1) {
    *(undefined4 *)(param_2 + 1) = DAT_14c9a52a0;
    *param_2 = DAT_14c9a5298;
  }
  else {
    dVar1 = param_3[2];
    dVar4 = (double)iVar3;
    dVar2 = param_3[1];
    *(int *)param_2 =
         (int)((ulonglong)(longlong)ROUND(*param_3 / dVar4 + *param_3 / dVar4 + -0.5) >> 1);
    *(int *)((longlong)param_2 + 4) =
         (int)((ulonglong)(longlong)ROUND(dVar2 / dVar4 + dVar2 / dVar4 + -0.5) >> 1);
    *(int *)(param_2 + 1) =
         (int)((ulonglong)(longlong)ROUND(dVar1 / dVar4 + dVar1 / dVar4 + -0.5) >> 1);
  }
  return param_2;
}



// FUNCTION 147b9e4a2 FUN_147b9e4a2 body=34 status=ok
// SIG undefined FUN_147b9e4a2(void)

void FUN_147b9e4a2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a79cc8();
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x34) = 8;
  return;
}



// FUNCTION 147b9e4c4 FUN_147b9e4c4 body=72 status=ok
// SIG undefined FUN_147b9e4c4(void)

undefined8 FUN_147b9e4c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3a8);
  if ((((lVar1 != 0) && (lVar2 = FUN_144a6c4d8(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 0x3a8);
  }
  return 0;
}



// FUNCTION 147b9e50c FUN_147b9e50c body=146 status=ok
// SIG undefined FUN_147b9e50c(void)

void FUN_147b9e50c(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  longlong local_40;
  undefined4 *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14485c47a(param_2,param_3);
  local_40 = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  local_44 = *(undefined4 *)(param_2 + 0x18);
  local_38 = &local_44;
  local_30 = &local_40;
  FUN_147ba85ee(param_1 + 0x3c8,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9e5a2 FUN_147b9e5a2 body=199 status=ok
// SIG undefined FUN_147b9e5a2(void)

bool FUN_147b9e5a2(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = FUN_144a3ff20(param_2);
  if (lVar2 != 0) {
    return true;
  }
  if (*(int *)(param_1 + 0x3d0) != *(int *)(param_1 + 0x3fc)) {
    lVar2 = param_1 + 0x400;
    if (*(longlong *)(param_1 + 0x408) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x408);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)
                              (*(int *)(param_1 + 0x410) - 1U & *(uint *)(param_2 + 0x18)) * 4);
    if (uVar3 != 0xffffffff) {
      lVar2 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x3c8) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == *(uint *)(param_2 + 0x18)) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) goto LAB_147b9e5d5;
          lVar2 = *(longlong *)(puVar1 + 2);
          if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
            FUN_1456cec3c(lVar2);
          }
          break;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
      goto LAB_147b9e5d7;
    }
  }
LAB_147b9e5d5:
  lVar2 = 0;
LAB_147b9e5d7:
  FUN_14485c47a(param_2,lVar2);
  return lVar2 != 0;
}



// FUNCTION 147b9e66a FUN_147b9e66a body=2033 status=ok
// SIG undefined FUN_147b9e66a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147b9e66a(longlong param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  char cVar31;
  longlong lVar32;
  double *pdVar33;
  int iVar34;
  double *pdVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  cVar31 = FUN_147b9e5a2(param_1 + -0x390,param_3);
  if (cVar31 != '\0') {
    lVar32 = FUN_144a3ff20(param_3);
    pdVar35 = (double *)&DAT_14c846480;
    if (*(longlong *)(lVar32 + 0x1c8) != 0) {
      pdVar35 = (double *)(*(longlong *)(lVar32 + 0x1c8) + 0x240);
    }
    for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
      *param_2 = *pdVar35;
      pdVar35 = pdVar35 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_288);
  }
  lVar32 = (longlong)*(int *)(param_3 + 0x18);
  if (((lVar32 < 0) || (*(int *)(param_1 + 0xb0) <= *(int *)(param_3 + 0x18))) ||
     (*(char *)(*(longlong *)(param_1 + 0xa8) + lVar32) != '\x01')) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 1.0;
    param_2[9] = 1.0;
    param_2[10] = 1.0;
    param_2[0xb] = 0.0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar32 = lVar32 * 0x60;
    pdVar35 = (double *)(lVar5 + lVar32);
    pdVar33 = (double *)&DAT_14c846480;
    if (*(longlong *)(param_1 + -0x1c8) != 0) {
      pdVar33 = (double *)(*(longlong *)(param_1 + -0x1c8) + 0x240);
    }
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    auVar14 = _DAT_149934d80;
    auVar42 = *(undefined1 (*) [16])(pdVar33 + 8);
    dVar6 = auVar42._0_8_;
    dVar15 = auVar42._8_8_;
    auVar50 = *(undefined1 (*) [16])(pdVar33 + 10);
    dVar7 = auVar50._0_8_;
    dVar13 = auVar50._8_8_;
    auVar45 = *(undefined1 (*) [16])(lVar5 + 0x40 + lVar32);
    dVar8 = auVar45._0_8_;
    dVar41 = auVar45._8_8_;
    auVar3 = *(undefined1 (*) [16])(lVar5 + 0x50 + lVar32);
    dVar9 = auVar3._0_8_;
    auVar42 = minpd(auVar45,auVar42);
    auVar45 = minpd(auVar3,auVar50);
    auVar50._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar50._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    iVar34 = movmskpd((int)lVar5,auVar50);
    auVar42._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
    uVar36 = movmskpd((int)lVar32,auVar42);
    if ((uVar36 & 0x3fffffff) == 0 && iVar34 == 0) {
      dVar23 = *pdVar35;
      dVar24 = pdVar35[1];
      dVar25 = pdVar35[2];
      dVar26 = pdVar35[3];
      dVar27 = *pdVar33;
      dVar28 = pdVar33[1];
      dVar29 = pdVar33[2];
      dVar30 = pdVar33[3];
      dVar16 = pdVar33[3];
      dVar40 = pdVar33[3];
      dVar1 = *pdVar33;
      dVar17 = *pdVar33;
      dVar46 = pdVar33[1];
      dVar2 = pdVar33[1];
      dVar47 = pdVar33[2];
      dVar44 = pdVar33[2];
      dVar18 = pdVar35[4] * dVar6;
      dVar49 = pdVar35[5] * dVar15;
      dVar19 = pdVar35[6] * dVar7;
      dVar20 = pdVar35[7] * dVar13;
      dVar10 = dVar49 * dVar27 - dVar28 * dVar18;
      dVar11 = dVar19 * dVar28 - dVar29 * dVar49;
      dVar21 = dVar18 * dVar29 - dVar27 * dVar19;
      dVar22 = dVar20 * dVar30 - dVar30 * dVar20;
      dVar11 = dVar11 + dVar11;
      dVar21 = dVar21 + dVar21;
      dVar10 = dVar10 + dVar10;
      dVar22 = dVar22 + dVar22;
      dVar48 = pdVar33[4];
      dVar12 = (dVar11 * dVar29 - dVar10 * dVar27) + dVar40 * dVar21 + dVar49 + pdVar33[5];
      dVar49 = pdVar33[6];
      dVar4 = pdVar33[7];
      *param_2 = dVar24 * dVar47 * -1.0 + dVar25 * dVar46 + dVar26 * dVar1 * 1.0 + dVar23 * dVar16;
      param_2[1] = dVar23 * dVar44 * 1.0 + dVar26 * dVar2 + dVar25 * dVar17 * -1.0 + dVar24 * dVar40
      ;
      param_2[2] = dVar26 * dVar47 * 1.0 +
                   ((dVar1 * dVar24 * 1.0 + dVar25 * dVar16) - dVar23 * dVar46);
      param_2[3] = dVar25 * dVar44 * -1.0 +
                   ((dVar17 * dVar23 * -1.0 + dVar26 * dVar40) - dVar24 * dVar2);
      auVar45._8_4_ = SUB84(dVar12,0);
      auVar45._0_8_ = (dVar10 * dVar28 - dVar29 * dVar21) + dVar16 * dVar11 + dVar18 + dVar48;
      auVar45._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 4) = auVar45;
      param_2[6] = (dVar21 * dVar27 - dVar28 * dVar11) + dVar16 * dVar10 + dVar19 + dVar49;
      param_2[7] = (dVar22 * dVar30 - dVar22 * dVar30) + dVar40 * dVar22 + dVar20 + dVar4;
      param_2[8] = dVar8 * dVar6;
      param_2[9] = dVar41 * dVar15;
      param_2[10] = dVar9 * dVar7;
      param_2[0xb] = auVar3._8_8_ * dVar13;
    }
    else {
      dVar1 = *pdVar33;
      dVar2 = pdVar33[1];
      dVar46 = pdVar33[2];
      dVar44 = dVar2 + dVar2;
      dVar47 = dVar46 + dVar46;
      dVar16 = dVar1 * (dVar1 + dVar1);
      local_178 = (1.0 - (dVar16 + dVar2 * dVar44)) * dVar7;
      dVar40 = pdVar33[3];
      dVar48 = dVar47 * dVar40;
      dVar49 = (dVar1 + dVar1) * pdVar33[3];
      dVar40 = dVar44 * dVar40;
      local_188 = (dVar40 + *pdVar33 * dVar47) * dVar7;
      dVar13 = dVar13 * auVar3._8_8_;
      dVar16 = (DAT_149934d80._8_8_ - (dVar46 * dVar47 + dVar16)) * dVar15;
      dVar17 = (dVar44 * dVar1 + dVar48) * dVar6;
      local_198 = (dVar47 * dVar2 + dVar49) * dVar15;
      dStack_180 = (dVar47 * dVar2 - dVar49) * dVar7;
      local_1b8 = (*pdVar33 * dVar47 - dVar40) * dVar6;
      local_1c8._8_4_ = SUB84(dVar17,0);
      local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar46 * dVar47 + dVar2 * dVar44)) * dVar6;
      local_1c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar16,0);
      local_1a8._0_8_ = (dVar44 * dVar1 - dVar48) * dVar15;
      local_1a8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      uStack_190 = 0;
      uStack_170 = 0;
      local_168 = pdVar33[4];
      dStack_160 = pdVar33[5];
      local_158 = pdVar33[6];
      uStack_150 = 0x3ff0000000000000;
      dVar17 = *pdVar35;
      dVar1 = pdVar35[1];
      dVar2 = pdVar35[2];
      dVar46 = dVar1 + dVar1;
      dVar44 = dVar2 + dVar2;
      dVar16 = dVar17 * (dVar17 + dVar17);
      local_1f8 = (1.0 - (dVar16 + dVar1 * dVar46)) * dVar9;
      dVar40 = pdVar35[3];
      dVar47 = dVar44 * dVar40;
      dVar48 = (dVar17 + dVar17) * pdVar35[3];
      dVar40 = dVar46 * dVar40;
      local_208 = (dVar40 + *pdVar35 * dVar44) * dVar9;
      dStack_200 = (dVar44 * dVar1 - dVar48) * dVar9;
      dVar15 = dVar15 * dVar41;
      local_248 = ((double)DAT_149934d80 - (dVar2 * dVar44 + dVar1 * dVar46)) * dVar8;
      dVar16 = (DAT_149934d80._8_8_ - (dVar2 * dVar44 + dVar16)) * dVar41;
      dStack_240 = (dVar46 * dVar17 + dVar47) * dVar8;
      local_218 = (dVar44 * dVar1 + dVar48) * dVar41;
      local_238 = (*pdVar35 * dVar44 - dVar40) * dVar8;
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar16,0);
      local_228._0_8_ = (dVar46 * dVar17 - dVar47) * dVar41;
      local_228._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      uStack_210 = 0;
      uStack_1f0 = 0;
      local_1e8 = pdVar35[4];
      dStack_1e0 = pdVar35[5];
      local_1d8 = pdVar35[6];
      uStack_1d0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar38._8_8_ = -(ulonglong)(0.0 <= dVar15);
      auVar38._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
      auVar42 = blendvpd(_DAT_149936790,auVar14,auVar38);
      uVar37 = -(ulonglong)(0.0 <= dVar7 * dVar9);
      dVar41 = (double)(~uVar37 & 0xbff0000000000000 | uVar37 & 0x3ff0000000000000);
      dVar40 = auVar42._0_8_;
      local_138 = local_138 * dVar40;
      local_140 = local_140 * dVar40;
      local_148 = local_148 * dVar40;
      dVar40 = auVar42._8_8_;
      local_118 = local_118 * dVar40;
      local_120 = local_120 * dVar40;
      local_128 = dVar40 * local_128;
      local_f8 = local_f8 * dVar41;
      local_100 = local_100 * dVar41;
      local_108 = dVar41 * local_108;
      FUN_14481fd10(&local_268,&local_148);
      dVar41 = local_258 * local_258 + local_268 * local_268;
      dVar40 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
      auVar43._0_8_ = dVar41 + dVar40;
      auVar43._8_8_ = dVar41 + dVar40;
      auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
      auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
      auVar42 = sqrtpd(auVar43,auVar43);
      auVar50 = divpd(auVar14,auVar42);
      auVar51._0_8_ = auVar50._0_8_ * local_258;
      auVar51._8_8_ = auVar50._8_8_ * dStack_250;
      auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar39);
      auVar14._8_4_ = SUB84(dVar15,0);
      auVar14._0_8_ = dVar6 * dVar8;
      auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 8) = auVar14;
      auVar3._8_4_ = SUB84(dVar13,0);
      auVar3._0_8_ = dVar7 * dVar9;
      auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 10) = auVar3;
      *param_2 = (double)((ulonglong)(local_268 * auVar50._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
      param_2[1] = (double)((ulonglong)(dStack_260 * auVar50._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
      *(undefined1 (*) [16])(param_2 + 2) = auVar42;
      param_2[4] = local_e8;
      param_2[5] = dStack_e0;
      param_2[6] = local_d8;
      param_2[7] = 0.0;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147b9ee5c FUN_147b9ee5c body=145 status=ok
// SIG undefined FUN_147b9ee5c(void)

longlong FUN_147b9ee5c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3a8);
  if (((((lVar1 != 0) && (lVar2 = FUN_144a6c4d8(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
      ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30 && (lVar1 = *(longlong *)(param_1 + 0x3a8), lVar1 != 0)))) &&
     ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    lVar2 = FUN_144a6c4d8();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147b9eeee FUN_147b9eeee body=145 status=ok
// SIG undefined FUN_147b9eeee(void)

longlong FUN_147b9eeee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  if (((((lVar1 != 0) && (lVar2 = FUN_144a6c4d8(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
      ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30 && (lVar1 = *(longlong *)(param_1 + 0x3b0), lVar1 != 0)))) &&
     ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    lVar2 = FUN_144a6c4d8();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147b9ef80 FUN_147b9ef80 body=77 status=ok
// SIG undefined FUN_147b9ef80(void)

void FUN_147b9ef80(longlong *param_1,undefined8 param_2,int param_3)

{
  if ((int)param_1[0x88] <= param_3) {
    (**(code **)(*param_1 + 0x698))(param_1);
  }
  (**(code **)(*param_1 + 0x6a0))(param_1,param_2,param_3);
  *(undefined1 *)(param_1[0x87] + (longlong)param_3) = 1;
  return;
}



// FUNCTION 147b9efce FUN_147b9efce body=93 status=ok
// SIG undefined FUN_147b9efce(void)

void FUN_147b9efce(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x3c0) + 1;
  *(uint *)(param_1 + 0x3c0) = uVar1;
  if (*(uint *)(param_1 + 0x3c4) < uVar1) {
    FUN_144a2c682(param_1 + 0x3b8);
  }
  uVar1 = *(int *)(param_1 + 0x440) + 1;
  *(uint *)(param_1 + 0x440) = uVar1;
  if (*(uint *)(param_1 + 0x444) < uVar1) {
    FUN_1401c3474(param_1 + 0x438);
    return;
  }
  return;
}



// FUNCTION 147b9f02c FUN_147b9f02c body=2275 status=ok
// SIG undefined FUN_147b9f02c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b9f02c(longlong param_1,double *param_2,int param_3)

{
  double *pdVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_2b8 [32];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  auVar42 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  pdVar9 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    pdVar9 = pdVar1;
  }
  auVar19 = *(undefined1 (*) [16])(pdVar9 + 8);
  auVar23 = *(undefined1 (*) [16])(pdVar9 + 10);
  auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar19._8_8_));
  auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar19._0_8_));
  iVar10 = movmskpd((int)pdVar1,auVar28);
  auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar23._8_8_));
  auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar23._0_8_));
  uVar12 = movmskpd(param_3,auVar38);
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    dStack_290 = DAT_14c8464b8;
    local_298 = DAT_14c8464b0;
    auVar15 = _DAT_14c8464c0;
    auVar19 = _DAT_14c8464d0;
    uVar45 = (undefined4)DAT_14c846480;
    uVar46 = DAT_14c846480._4_4_;
    uVar47 = (undefined4)DAT_14c846488;
    uVar48 = DAT_14c846488._4_4_;
    dVar37 = DAT_14c846490;
    dVar39 = DAT_14c846498;
    dVar27 = DAT_14c8464a0;
    dVar31 = DAT_14c8464a8;
  }
  else {
    auVar38 = divpd(_DAT_149934d80,auVar19);
    auVar28 = divpd(ZEXT816(0x3ff0000000000000),auVar23);
    auVar15._0_8_ =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar19._0_8_)) & auVar38._0_8_);
    auVar15._8_8_ =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar19._8_8_)) & auVar38._8_8_);
    dVar33 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar23._0_8_)) & auVar28._0_8_);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar33;
    dVar14 = *pdVar9;
    dVar37 = pdVar9[2] * -1.0;
    dVar39 = pdVar9[3] * 1.0;
    dVar27 = -dVar14;
    dVar31 = -pdVar9[1];
    dVar40 = pdVar9[4] * auVar15._0_8_;
    dVar41 = pdVar9[5] * auVar15._8_8_;
    dVar33 = pdVar9[6] * dVar33;
    dVar26 = dVar41 * dVar27 - dVar31 * dVar40;
    dVar29 = dVar33 * dVar31 - dVar37 * dVar41;
    dVar30 = dVar40 * dVar37 - dVar27 * dVar33;
    dVar29 = dVar29 + dVar29;
    dVar30 = dVar30 + dVar30;
    dVar26 = dVar26 + dVar26;
    local_298 = 0.0 - (dVar39 * dVar26 + dVar33 + (dVar30 * dVar27 - dVar29 * dVar31));
    dStack_290 = 0.0;
    uVar45 = SUB84(dVar14,0);
    uVar46 = (int)((ulonglong)dVar27 >> 0x20);
    uVar47 = SUB84(pdVar9[1],0);
    uVar48 = (int)((ulonglong)dVar31 >> 0x20);
    dVar27 = 0.0 - ((dVar26 * dVar31 - dVar30 * dVar37) + dVar39 * dVar29 + dVar40);
    dVar31 = 0.0 - (dVar26 * dVar14 + dVar37 * dVar29 + dVar39 * dVar30 + dVar41);
  }
  auVar23 = *(undefined1 (*) [16])(param_2 + 8);
  dVar26 = auVar23._0_8_;
  dVar30 = auVar23._8_8_;
  local_288 = *(undefined1 (*) [16])(param_2 + 10);
  auVar23 = minpd(auVar23,auVar15);
  auVar28 = minpd(local_288,auVar19);
  auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
  iVar8 = movmskpd((int)pdVar9,auVar24);
  auVar23._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
  auVar23._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
  uVar12 = movmskpd(iVar10,auVar23);
  dVar14 = auVar15._0_8_;
  dVar29 = auVar15._8_8_;
  dVar33 = auVar19._0_8_;
  uVar6 = local_288._0_8_;
  uVar7 = local_288._8_8_;
  if ((uVar12 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar40 = *param_2;
    dVar41 = param_2[1];
    dVar32 = param_2[2];
    dVar34 = param_2[3];
    dVar21 = dVar41 * dVar37 * -1.0 +
             dVar32 * (double)CONCAT44(uVar48,uVar47) +
             (double)CONCAT44(uVar46,uVar45) * dVar34 * 1.0 + dVar39 * dVar40;
    dVar22 = dVar40 * dVar37 * 1.0 +
             dVar34 * (double)CONCAT44(uVar48,uVar47) +
             (double)CONCAT44(uVar46,uVar45) * dVar32 * -1.0 + dVar39 * dVar41;
    auVar42._0_8_ =
         dVar34 * dVar37 * 1.0 +
         (((double)CONCAT44(uVar46,uVar45) * dVar41 * 1.0 + dVar39 * dVar32) -
         (double)CONCAT44(uVar48,uVar47) * dVar40);
    auVar42._8_8_ =
         dVar32 * dVar37 * -1.0 +
         (((double)CONCAT44(uVar46,uVar45) * dVar40 * -1.0 + dVar39 * dVar34) -
         (double)CONCAT44(uVar48,uVar47) * dVar41);
    dVar35 = param_2[4] * dVar14;
    dVar36 = param_2[5] * dVar29;
    dVar32 = param_2[6] * dVar33;
    dVar34 = param_2[7] * auVar19._8_8_;
    dVar25 = dVar36 * (double)CONCAT44(uVar46,uVar45) - (double)CONCAT44(uVar48,uVar47) * dVar35;
    dVar44 = dVar32 * (double)CONCAT44(uVar48,uVar47) - dVar37 * dVar36;
    dVar40 = dVar35 * dVar37 - (double)CONCAT44(uVar46,uVar45) * dVar32;
    dVar41 = dVar34 * dVar39 - dVar39 * dVar34;
    dVar44 = dVar44 + dVar44;
    dVar40 = dVar40 + dVar40;
    dVar25 = dVar25 + dVar25;
    dVar41 = dVar41 + dVar41;
    local_f8 = dVar27 + (dVar25 * (double)CONCAT44(uVar48,uVar47) - dVar37 * dVar40) +
                        dVar39 * dVar44 + dVar35;
    dStack_f0 = dVar31 + (dVar44 * dVar37 - dVar25 * (double)CONCAT44(uVar46,uVar45)) +
                         dVar39 * dVar40 + dVar36;
    local_e8 = local_298 +
               (dVar40 * (double)CONCAT44(uVar46,uVar45) - (double)CONCAT44(uVar48,uVar47) * dVar44)
               + dVar39 * dVar25 + dVar32;
    dVar37 = dStack_290 + (dVar41 * dVar39 - dVar41 * dVar39) + dVar39 * dVar41 + dVar34;
  }
  else {
    dVar41 = (double)CONCAT44(uVar46,uVar45) + (double)CONCAT44(uVar46,uVar45);
    dVar32 = (double)CONCAT44(uVar48,uVar47) + (double)CONCAT44(uVar48,uVar47);
    dVar40 = dVar37 + dVar37;
    dVar21 = (double)CONCAT44(uVar46,uVar45) * dVar41;
    dVar25 = (double)CONCAT44(uVar48,uVar47) * dVar32;
    local_1d8 = ((double)DAT_149934d80 - (dVar37 * dVar40 + dVar25)) * dVar14;
    dVar22 = (DAT_149934d80._8_8_ - (dVar37 * dVar40 + dVar21)) * dVar29;
    dVar34 = dVar32 * (double)CONCAT44(uVar46,uVar45);
    dVar35 = dVar40 * (double)CONCAT44(uVar48,uVar47);
    dVar37 = (double)CONCAT44(uVar46,uVar45) * dVar40;
    dVar41 = dVar41 * dVar39;
    dVar36 = (dVar35 - dVar41) * dVar33;
    local_188 = (1.0 - (dVar21 + dVar25)) * dVar33;
    dVar21 = dVar33 * (double)local_288._0_8_;
    dStack_1d0 = (dVar34 + dVar40 * dVar39) * dVar14;
    local_1a8 = (dVar35 + dVar41) * dVar29;
    local_1c8 = (dVar37 - dVar32 * dVar39) * dVar14;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar22,0);
    local_1b8._0_8_ = (dVar34 - dVar40 * dVar39) * dVar29;
    local_1b8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_1a0 = 0;
    local_198._8_4_ = SUB84(dVar36,0);
    local_198._0_8_ = (dVar37 + dVar32 * dVar39) * dVar33;
    local_198._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    uStack_180 = 0;
    local_168 = local_298;
    uStack_160 = 0x3ff0000000000000;
    dVar39 = *param_2;
    dVar40 = param_2[1];
    dVar41 = param_2[2];
    dVar32 = dVar40 + dVar40;
    dVar34 = dVar41 + dVar41;
    dVar22 = dVar39 * (dVar39 + dVar39);
    local_208 = (1.0 - (dVar22 + dVar40 * dVar32)) * (double)local_288._0_8_;
    dVar37 = param_2[3];
    dVar35 = dVar34 * dVar37;
    dVar36 = (dVar39 + dVar39) * param_2[3];
    dVar37 = dVar32 * dVar37;
    local_218 = (dVar37 + *param_2 * dVar34) * (double)local_288._0_8_;
    local_238 = (dVar32 * dVar39 - dVar35) * dVar30;
    dStack_210 = (dVar34 * dVar40 - dVar36) * (double)local_288._0_8_;
    local_258 = ((double)DAT_149934d80 - (dVar41 * dVar34 + dVar40 * dVar32)) * dVar26;
    dStack_230 = (DAT_149934d80._8_8_ - (dVar41 * dVar34 + dVar22)) * dVar30;
    dStack_250 = (dVar32 * dVar39 + dVar35) * dVar26;
    local_228 = (dVar34 * dVar40 + dVar36) * dVar30;
    local_248 = (*param_2 * dVar34 - dVar37) * dVar26;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_2[4];
    dStack_1f0 = param_2[5];
    local_1e8 = param_2[6];
    uStack_1e0 = 0x3ff0000000000000;
    local_178 = dVar27;
    dStack_170 = dVar31;
    FUN_1447fea8d(&local_158,&local_258);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar29 * dVar30);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar14 * dVar26);
    auVar23 = blendvpd(_DAT_149936790,auVar42,auVar16);
    uVar13 = -(ulonglong)(0.0 <= dVar21);
    dVar37 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
    dVar39 = auVar23._0_8_;
    local_148 = local_148 * dVar39;
    local_150 = local_150 * dVar39;
    local_158 = local_158 * dVar39;
    dVar39 = auVar23._8_8_;
    local_128 = local_128 * dVar39;
    local_130 = local_130 * dVar39;
    local_138 = dVar39 * local_138;
    local_108 = local_108 * dVar37;
    local_110 = local_110 * dVar37;
    local_118 = dVar37 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    auVar18._0_8_ = local_278 * local_278;
    auVar18._8_8_ = dStack_270 * dStack_270;
    dVar37 = local_268 * local_268 + auVar18._0_8_;
    dVar39 = dStack_260 * dStack_260 + auVar18._8_8_;
    auVar20._0_8_ = dVar37 + dVar39;
    auVar20._8_8_ = dVar37 + dVar39;
    auVar23 = sqrtpd(auVar18,auVar20);
    auVar42 = divpd(auVar42,auVar23);
    auVar43._0_8_ = auVar42._0_8_ * local_268;
    auVar43._8_8_ = auVar42._8_8_ * dStack_260;
    dVar21 = (double)((ulonglong)(local_278 * auVar42._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dVar22 = (double)((ulonglong)(dStack_270 * auVar42._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar17);
    dVar37 = 0.0;
  }
  dVar39 = auVar19._8_8_ * (double)uVar7;
  lVar2 = *(longlong *)(param_1 + 0x3b8);
  lVar11 = (longlong)param_3 * 0x60;
  auVar5._8_4_ = SUB84(dVar22,0);
  auVar5._0_8_ = dVar21;
  auVar5._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(lVar2 + lVar11) = auVar5;
  *(undefined1 (*) [16])(lVar2 + 0x10 + lVar11) = auVar42;
  pdVar1 = (double *)(lVar2 + 0x20 + lVar11);
  *pdVar1 = local_f8;
  pdVar1[1] = dStack_f0;
  pdVar1 = (double *)(lVar2 + 0x30 + lVar11);
  *pdVar1 = local_e8;
  pdVar1[1] = dVar37;
  auVar4._8_4_ = SUB84(dVar29 * dVar30,0);
  auVar4._0_8_ = dVar14 * dVar26;
  auVar4._12_4_ = (int)((ulonglong)(dVar29 * dVar30) >> 0x20);
  *(undefined1 (*) [16])(lVar2 + 0x40 + lVar11) = auVar4;
  auVar3._8_4_ = SUB84(dVar39,0);
  auVar3._0_8_ = dVar33 * (double)uVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  *(undefined1 (*) [16])(lVar2 + 0x50 + lVar11) = auVar3;
  if ((local_d0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9f910 FUN_147b9f910 body=240 status=ok
// SIG undefined FUN_147b9f910(void)

void FUN_147b9f910(longlong param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x440))) &&
     (*(char *)(*(longlong *)(param_1 + 0x438) + (ulonglong)param_2) == '\x01')) {
    iVar2 = *(int *)(param_1 + 0x430);
    *(uint *)(param_1 + 0x430) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x434) < iVar2 + 1U) {
      FUN_1446f48e2(param_1 + 0x428,iVar2);
    }
    *(uint *)(*(longlong *)(param_1 + 0x428) + (longlong)iVar2 * 4) = param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x438) + (ulonglong)param_2) = 0;
    if (*(int *)(param_1 + 0x3d0) != *(int *)(param_1 + 0x3fc)) {
      lVar3 = param_1 + 0x400;
      if (*(longlong *)(param_1 + 0x408) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x408);
      }
      uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x410) + 0x7fffffffU & param_2) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x3c8) + (longlong)(int)uVar4 * 0x18);
          if (*puVar1 == param_2) {
            if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
              return;
            }
            FUN_140aeefbc(*(undefined8 *)(puVar1 + 2),0,1);
            return;
          }
          uVar4 = puVar1[4];
        } while (uVar4 != 0xffffffff);
      }
    }
  }
  return;
}



// FUNCTION 147b9fa00 FUN_147b9fa00 body=372 status=ok
// SIG undefined FUN_147b9fa00(void)

void FUN_147b9fa00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"RepresentedClass",1);
  uVar1 = FUN_1459e9b82();
  FUN_1459e9b82();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InstanceTransforms",1);
  uVar1 = FUN_1459e9b82();
  FUN_1459e9b82();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"FreeIndices",1);
  uVar1 = FUN_1459e9b82();
  FUN_1459e9b82();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ValidIndices",1);
  uVar1 = FUN_1459e9b82();
  FUN_1459e9b82();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9fb90 FUN_147b9fb90 body=304 status=ok
// SIG undefined FUN_147b9fb90(void)

void FUN_147b9fb90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae94e0) {
    FUN_144b3d300(&DAT_14cae94e0);
    if (DAT_14cae94e0 == -1) {
      FUN_1446f470e(&DAT_14cae94d8,L"StaticMesh",1);
      _Init_thread_footer(&DAT_14cae94e0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae94ec) {
    FUN_144b3d300(&DAT_14cae94ec);
    if (DAT_14cae94ec == -1) {
      FUN_1446f470e(&DAT_14cae94e4,L"RenderingIndicesToDataIndices",1);
      _Init_thread_footer(&DAT_14cae94ec);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae94f8) {
    FUN_144b3d300(&DAT_14cae94f8);
    if (DAT_14cae94f8 == -1) {
      FUN_1446f470e(&DAT_14cae94f0,L"DataIndicesToRenderingIndices",1);
      _Init_thread_footer(&DAT_14cae94f8);
      return;
    }
  }
  return;
}



// FUNCTION 147b9fcc0 FUN_147b9fcc0 body=222 status=ok
// SIG undefined FUN_147b9fcc0(void)

void FUN_147b9fcc0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x478);
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar1 + 0x1fb) == '\0') {
      (**(code **)(*plVar1 + 0x588))(plVar1,1);
      plVar1 = *(longlong **)(param_1 + 0x478);
      uVar2 = FUN_1401ca522(param_1 + 0x450);
      (**(code **)(*plVar1 + 0xa78))(plVar1,uVar2);
      (**(code **)(**(longlong **)(param_1 + 0x478) + 0x588))(*(longlong **)(param_1 + 0x478),0);
    }
    else {
      uVar2 = FUN_1401ca522(param_1 + 0x450);
      (**(code **)(*plVar1 + 0xa78))(plVar1,uVar2);
    }
    lVar3 = FUN_1401ca522(param_1 + 0x450);
    if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x160))) {
      iVar4 = 0;
      do {
        plVar1 = *(longlong **)(param_1 + 0x478);
        uVar2 = FUN_144b2ab82(lVar3,iVar4);
        (**(code **)(*plVar1 + 0x638))(plVar1,iVar4,uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar3 + 0x160));
    }
  }
  return;
}



// FUNCTION 147b9fd9e FUN_147b9fd9e body=597 status=ok
// SIG undefined FUN_147b9fd9e(void)

void FUN_147b9fd9e(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x75] = param_2;
    if (param_2 != 0) goto LAB_147b9fde3;
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[0x75] = param_2;
LAB_147b9fde3:
    lVar2 = FUN_144a6c4d8();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(param_2 + 0x38))) &&
        (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar2 = param_1[0x75], lVar2 != 0)) {
      lVar3 = FUN_144a6c4d8();
      if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_1[0x75];
      }
      lVar3 = *(longlong *)(lVar2 + 0x110);
      if (lVar3 == 0) {
        FUN_140aa6c08(lVar2);
        lVar3 = *(longlong *)(lVar2 + 0x110);
        if (lVar3 == 0) goto LAB_147b9ff35;
      }
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_28 = *(undefined8 *)(lVar3 + 0x18);
        FUN_1400021e4(&local_28,&local_38);
        if (param_1 + 0x73 == &local_38) {
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_1[0x73] != 0) {
            FUN_1400020a8();
          }
          param_1[0x73] = local_38;
          local_38 = 0;
          *(undefined4 *)(param_1 + 0x74) = local_30;
          *(undefined4 *)((longlong)param_1 + 0x3a4) = local_2c;
        }
        (**(code **)(*param_1 + 0x6b8))(param_1,lVar3);
        goto LAB_147b9ff01;
      }
    }
  }
LAB_147b9ff35:
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (*(int *)((longlong)param_1 + 0x3a4) < 0) {
    FUN_1446f8c06(param_1 + 0x73,0);
  }
  puVar1 = (undefined2 *)param_1[0x73];
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  if (*(int *)((longlong)param_1 + 0x474) < 0) {
    FUN_1446f8c06(param_1 + 0x8d,0);
  }
  puVar1 = (undefined2 *)param_1[0x8d];
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  FUN_147b9fcc0(param_1);
LAB_147b9ff01:
  if ((longlong *)param_1[0x8f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8f] + 0xbe0))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba0010 FUN_147ba0010 body=84 status=ok
// SIG undefined FUN_147ba0010(void)

void FUN_147ba0010(longlong *param_1,undefined8 param_2,int param_3)

{
  if ((int)param_1[0x88] <= param_3) {
    (**(code **)(*param_1 + 0x698))(param_1);
  }
  (**(code **)(*param_1 + 0x6a0))(param_1,param_2,param_3);
  *(undefined1 *)(param_1[0x87] + (longlong)param_3) = 1;
  FUN_143563ab8(param_1);
  return;
}



// FUNCTION 147ba0064 FUN_147ba0064 body=32 status=ok
// SIG undefined FUN_147ba0064(void)

void FUN_147ba0064(undefined8 param_1,undefined4 param_2)

{
  FUN_143563c14();
  FUN_147b9f910(param_1,param_2);
  return;
}



// FUNCTION 147ba0084 FUN_147ba0084 body=299 status=ok
// SIG undefined FUN_147ba0084(void)

void FUN_147ba0084(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147b9fa00();
  FUN_1446f470e(&local_58,L"StaticMesh",1);
  uVar1 = FUN_145a722ca();
  FUN_145a722ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"RenderingIndicesToDataIndices",1);
  uVar1 = FUN_145a722ca();
  FUN_145a722ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DataIndicesToRenderingIndices",1);
  uVar1 = FUN_145a722ca();
  FUN_145a722ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba01f2 FUN_147ba01f2 body=93 status=ok
// SIG undefined FUN_147ba01f2(void)

void FUN_147ba01f2(longlong param_1)

{
  undefined2 *puVar1;
  
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  if (*(int *)(param_1 + 0x474) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x468),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x468);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  FUN_147b9fcc0(param_1);
  return;
}



// FUNCTION 147ba0250 FUN_147ba0250 body=739 status=ok
// SIG undefined FUN_147ba0250(void)

undefined8 FUN_147ba0250(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *(longlong *)(param_1 + -0xa0);
  if (lVar5 != 0) {
    lVar4 = FUN_144a6c4d8();
    if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (lVar5 = *(longlong *)(param_1 + -0xa0), lVar5 != 0)) {
      lVar4 = FUN_144a6c4d8();
      if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(param_1 + -0xa0);
      }
      local_90 = *(longlong *)(lVar5 + 0x18);
      goto LAB_147ba02b6;
    }
  }
  local_90 = *(longlong *)(param_1 + -0x430);
LAB_147ba02b6:
  FUN_1400021e4(&local_90,&local_80);
  FUN_140233b1a(&local_c0,&local_80);
  if (local_80 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  iVar2 = *(int *)(param_3 + 8);
  local_d0 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 8))();
  }
  local_c8 = local_b8;
  local_80 = L"DisplayNameFmt";
  local_78[0] = 0xe;
  FUN_1446e940c(local_f4,&local_80);
  local_80 = L"LightWeightInstanceStaticMeshManager";
  local_78[0] = 0x24;
  FUN_1446e940c(local_f8,&local_80);
  FUN_140208bae(local_f0,local_f8,local_f4,L"{0} - Instance {1}");
  FUN_14023409e(&local_e0,local_f0,1);
  local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
  FUN_14023423e(local_70,&local_d0);
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_98 = &local_40;
  local_a0 = &local_80;
  local_58 = (longlong)iVar2;
  FUN_14010d304(&local_90);
  local_b0 = local_e0;
  local_a8 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_b0,&local_90);
  FUN_14007f2db(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x30;
  do {
    plVar3 = *(longlong **)((longlong)local_78 + lVar5 + -8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)((longlong)local_78 + lVar5 + -8) = 0;
      *(undefined4 *)((longlong)local_78 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != -0x10);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  if (local_f0[0] != (longlong *)0x0) {
    (**(code **)(*local_f0[0] + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba0534 FUN_147ba0534 body=612 status=ok
// SIG undefined FUN_147ba0534(void)

undefined8 FUN_147ba0534(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = FUN_1447210f0(param_1 + -0x448);
  FUN_14010318a(param_1 + -0x448,&local_80,uVar4);
  FUN_140233b1a(&local_c0,&local_80);
  if (local_80 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_d0 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 8))();
  }
  local_c8 = local_b8;
  iVar3 = *(int *)(param_3 + 8);
  local_80 = L"TooltipFmt";
  local_78[0]._0_4_ = 10;
  FUN_1446e940c(local_f4,&local_80);
  local_80 = L"LightWeightInstanceStaticMeshManager";
  local_78[0] = CONCAT44(local_78[0]._4_4_,0x24);
  FUN_1446e940c(local_f8,&local_80);
  FUN_140208bae(local_f0,local_f8,local_f4,L"Instance {0} on {1}");
  FUN_14023409e(&local_e0,local_f0,1);
  local_80 = (wchar_t *)((ulonglong)local_80 & 0xffffffff00000000);
  local_78[1] = 0;
  local_68 = 0;
  local_60 = 4;
  local_78[0] = (longlong)iVar3;
  FUN_14023423e(local_50,&local_d0);
  local_98 = &local_40;
  local_a0 = &local_80;
  FUN_14010d304(&local_90);
  local_b0 = local_e0;
  local_a8 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_b0,&local_90);
  FUN_14007f2db(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_80 + lVar5) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_80 + lVar5) + 0x10))();
      *(undefined8 *)((longlong)&local_80 + lVar5) = 0;
      *(undefined4 *)((longlong)local_78 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != -0x10);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  if (local_f0[0] != (longlong *)0x0) {
    (**(code **)(*local_f0[0] + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba07d2 FUN_147ba07d2 body=1887 status=ok
// SIG undefined FUN_147ba07d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147ba07d2(longlong param_1,longlong param_2,double *param_3,char param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double *pdVar13;
  undefined8 uVar14;
  double *pdVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar36 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar16 = *(int *)(param_2 + 8);
  if (((longlong)iVar16 < 0) || (*(int *)(param_1 + 0x40) <= iVar16)) {
    uVar14 = 0;
  }
  else {
    pdVar13 = (double *)
              ((longlong)*(int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar16 * 4) * 0x60 +
              *(longlong *)(param_1 + -0x90));
    if (param_4 == '\0') {
      dVar25 = *pdVar13;
      dVar23 = pdVar13[1];
      auVar36 = *(undefined1 (*) [16])(pdVar13 + 2);
      local_e8 = pdVar13[4];
      dStack_e0 = pdVar13[5];
      local_d8 = pdVar13[6];
      dVar38 = pdVar13[7];
      dVar18 = pdVar13[8];
      dVar20 = pdVar13[9];
      dVar21 = pdVar13[10];
      dVar24 = pdVar13[0xb];
    }
    else {
      pdVar1 = (double *)(*(longlong *)(param_1 + -0x280) + 0x240);
      pdVar15 = (double *)&DAT_14c846480;
      if (*(longlong *)(param_1 + -0x280) != 0) {
        pdVar15 = pdVar1;
      }
      auVar26 = *(undefined1 (*) [16])(pdVar15 + 8);
      dVar18 = auVar26._0_8_;
      dVar20 = auVar26._8_8_;
      auVar27 = *(undefined1 (*) [16])(pdVar15 + 10);
      dVar3 = auVar27._0_8_;
      dVar24 = auVar27._8_8_;
      auVar29 = *(undefined1 (*) [16])(pdVar13 + 8);
      dVar4 = auVar29._0_8_;
      dVar6 = auVar29._8_8_;
      auVar19 = *(undefined1 (*) [16])(pdVar13 + 10);
      dVar5 = auVar19._0_8_;
      auVar26 = minpd(auVar29,auVar26);
      auVar29 = minpd(auVar19,auVar27);
      auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
      iVar16 = movmskpd((int)pdVar1,auVar27);
      auVar26._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      uVar17 = movmskpd((int)param_3,auVar26);
      if ((uVar17 & 0x3fffffff) == 0 && iVar16 == 0) {
        dVar31 = *pdVar13;
        dVar32 = pdVar13[1];
        dVar34 = pdVar13[2];
        dVar35 = pdVar13[3];
        dVar9 = *pdVar15;
        dVar10 = pdVar15[1];
        dVar11 = pdVar15[2];
        dVar12 = pdVar15[3];
        dVar21 = pdVar15[3];
        dVar38 = pdVar15[3];
        dVar2 = pdVar15[1];
        dVar30 = pdVar15[1];
        dVar28 = pdVar15[2];
        dVar33 = pdVar15[2];
        dVar25 = dVar32 * dVar28 * -1.0 + dVar34 * dVar2 + dVar35 * *pdVar15 * 1.0 + dVar31 * dVar21
        ;
        dVar23 = dVar31 * dVar33 * 1.0 +
                 dVar35 * dVar30 + dVar34 * *pdVar15 * -1.0 + dVar32 * dVar38;
        auVar36._0_8_ =
             dVar35 * dVar28 * 1.0 + ((*pdVar15 * dVar32 * 1.0 + dVar34 * dVar21) - dVar31 * dVar2);
        auVar36._8_8_ =
             dVar34 * dVar33 * -1.0 +
             ((*pdVar15 * dVar31 * -1.0 + dVar35 * dVar38) - dVar32 * dVar30);
        dVar2 = pdVar13[4] * dVar18;
        dVar30 = pdVar13[5] * dVar20;
        dVar33 = pdVar13[6] * dVar3;
        dVar28 = pdVar13[7] * dVar24;
        dVar34 = dVar30 * dVar9 - dVar10 * dVar2;
        dVar35 = dVar33 * dVar10 - dVar11 * dVar30;
        dVar31 = dVar2 * dVar11 - dVar9 * dVar33;
        dVar32 = dVar28 * dVar12 - dVar12 * dVar28;
        dVar35 = dVar35 + dVar35;
        dVar31 = dVar31 + dVar31;
        dVar34 = dVar34 + dVar34;
        dVar32 = dVar32 + dVar32;
        local_e8 = (dVar34 * dVar10 - dVar11 * dVar31) + dVar21 * dVar35 + dVar2 + pdVar15[4];
        dStack_e0 = (dVar35 * dVar11 - dVar34 * dVar9) + dVar38 * dVar31 + dVar30 + pdVar15[5];
        local_d8 = (dVar31 * dVar9 - dVar10 * dVar35) + dVar21 * dVar34 + dVar33 + pdVar15[6];
        dVar38 = (dVar32 * dVar12 - dVar32 * dVar12) + dVar38 * dVar32 + dVar28 + pdVar15[7];
        dVar18 = dVar4 * dVar18;
        dVar20 = dVar6 * dVar20;
        dVar21 = dVar5 * dVar3;
        dVar24 = auVar19._8_8_ * dVar24;
      }
      else {
        dVar2 = *pdVar15;
        dVar30 = pdVar15[1];
        dVar33 = pdVar15[2];
        dVar28 = dVar30 + dVar30;
        dVar31 = dVar33 + dVar33;
        dVar23 = dVar2 * (dVar2 + dVar2);
        local_178 = (1.0 - (dVar23 + dVar30 * dVar28)) * dVar3;
        dVar25 = pdVar15[3];
        dVar32 = dVar31 * dVar25;
        dVar34 = (dVar2 + dVar2) * pdVar15[3];
        dVar25 = dVar28 * dVar25;
        local_188 = (dVar25 + *pdVar15 * dVar31) * dVar3;
        dVar21 = dVar3 * dVar5;
        dVar24 = dVar24 * auVar19._8_8_;
        dVar23 = (DAT_149934d80._8_8_ - (dVar33 * dVar31 + dVar23)) * dVar20;
        dVar38 = (dVar28 * dVar2 + dVar32) * dVar18;
        local_198 = (dVar31 * dVar30 + dVar34) * dVar20;
        dStack_180 = (dVar31 * dVar30 - dVar34) * dVar3;
        local_1b8 = (*pdVar15 * dVar31 - dVar25) * dVar18;
        local_1c8._8_4_ = SUB84(dVar38,0);
        local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar33 * dVar31 + dVar30 * dVar28)) * dVar18;
        local_1c8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        uStack_1b0 = 0;
        local_1a8._8_4_ = SUB84(dVar23,0);
        local_1a8._0_8_ = (dVar28 * dVar2 - dVar32) * dVar20;
        local_1a8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        uStack_190 = 0;
        uStack_170 = 0;
        local_168 = pdVar15[4];
        dStack_160 = pdVar15[5];
        local_158 = pdVar15[6];
        uStack_150 = 0x3ff0000000000000;
        dVar38 = *pdVar13;
        dVar3 = pdVar13[1];
        dVar2 = pdVar13[2];
        dVar30 = dVar3 + dVar3;
        dVar33 = dVar2 + dVar2;
        dVar23 = dVar38 * (dVar38 + dVar38);
        local_1f8 = (1.0 - (dVar23 + dVar3 * dVar30)) * dVar5;
        dVar25 = pdVar13[3];
        dVar28 = dVar33 * dVar25;
        dVar31 = (dVar38 + dVar38) * pdVar13[3];
        dVar25 = dVar30 * dVar25;
        local_208 = (dVar25 + *pdVar13 * dVar33) * dVar5;
        dStack_200 = (dVar33 * dVar3 - dVar31) * dVar5;
        dVar18 = dVar18 * dVar4;
        dVar20 = dVar20 * dVar6;
        local_248 = ((double)DAT_149934d80 - (dVar2 * dVar33 + dVar3 * dVar30)) * dVar4;
        dVar23 = (DAT_149934d80._8_8_ - (dVar2 * dVar33 + dVar23)) * dVar6;
        dStack_240 = (dVar30 * dVar38 + dVar28) * dVar4;
        local_218 = (dVar33 * dVar3 + dVar31) * dVar6;
        local_238 = (*pdVar13 * dVar33 - dVar25) * dVar4;
        uStack_230 = 0;
        local_228._8_4_ = SUB84(dVar23,0);
        local_228._0_8_ = (dVar30 * dVar38 - dVar28) * dVar6;
        local_228._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        uStack_210 = 0;
        uStack_1f0 = 0;
        local_1e8 = pdVar13[4];
        dStack_1e0 = pdVar13[5];
        local_1d8 = pdVar13[6];
        uStack_1d0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_148);
        FUN_144a1c686(&local_148,0x3e45798ee0000000);
        auVar29._8_8_ = -(ulonglong)(0.0 <= dVar20);
        auVar29._0_8_ = -(ulonglong)(0.0 <= dVar18);
        auVar26 = blendvpd(_DAT_149936790,auVar36,auVar29);
        dVar25 = (double)(~-(ulonglong)(0.0 <= dVar21) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar21) & 0x3ff0000000000000);
        dVar23 = auVar26._0_8_;
        local_138 = local_138 * dVar23;
        local_140 = local_140 * dVar23;
        local_148 = local_148 * dVar23;
        dVar23 = auVar26._8_8_;
        local_118 = local_118 * dVar23;
        local_120 = local_120 * dVar23;
        local_128 = dVar23 * local_128;
        local_f8 = local_f8 * dVar25;
        local_100 = local_100 * dVar25;
        local_108 = dVar25 * local_108;
        FUN_14481fd10(&local_268,&local_148);
        dVar25 = local_258 * local_258 + local_268 * local_268;
        dVar23 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar22._0_8_ = dVar25 + dVar23;
        auVar22._8_8_ = dVar25 + dVar23;
        auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
        auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
        auVar26 = sqrtpd(auVar22,auVar22);
        auVar36 = divpd(auVar36,auVar26);
        auVar37._0_8_ = auVar36._0_8_ * local_258;
        auVar37._8_8_ = auVar36._8_8_ * dStack_250;
        dVar25 = (double)((ulonglong)(local_268 * auVar36._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
        dVar23 = (double)((ulonglong)(dStack_260 * auVar36._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
        auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar19);
        dVar38 = 0.0;
      }
    }
    *param_3 = dVar25;
    param_3[1] = dVar23;
    *(undefined1 (*) [16])(param_3 + 2) = auVar36;
    param_3[4] = local_e8;
    param_3[5] = dStack_e0;
    param_3[6] = local_d8;
    param_3[7] = dVar38;
    auVar8._8_4_ = SUB84(dVar20,0);
    auVar8._0_8_ = dVar18;
    auVar8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 8) = auVar8;
    auVar7._8_4_ = SUB84(dVar24,0);
    auVar7._0_8_ = dVar21;
    auVar7._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 10) = auVar7;
    uVar14 = 1;
  }
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba0f32 FUN_147ba0f32 body=112 status=ok
// SIG undefined FUN_147ba0f32(void)

undefined8
FUN_147ba0f32(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  
  if (((-1 < *(int *)(param_2 + 8)) && (*(int *)(param_2 + 8) < *(int *)(param_1 + 0x40))) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb30))(), cVar1 != '\0')) {
    FUN_1410499a6(*(undefined8 *)(param_1 + 0x30),(longlong)*(int *)(param_2 + 8),
                  (longlong)
                  *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_2 + 8) * 4) *
                  0x60 + *(longlong *)(param_1 + -0x90),0,param_5,param_6);
    return 1;
  }
  return 0;
}



// FUNCTION 147ba1012 FUN_147ba1012 body=179 status=ok
// SIG undefined FUN_147ba1012(void)

undefined8 FUN_147ba1012(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [48];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(param_1 + -0x448);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_147ba10c6(plVar3,&local_48,&local_38);
  FUN_144a521da(local_38,uStack_30 & 0xffffffff);
  lVar1 = local_38;
  lVar2 = (longlong)(int)uStack_30;
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      (**(code **)(*plVar3 + 0x650))(plVar3,*(undefined4 *)(lVar1 + lVar4));
      lVar4 = lVar4 + 4;
    } while (lVar2 * 4 != lVar4);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147ba10c6 FUN_147ba10c6 body=143 status=ok
// SIG undefined FUN_147ba10c6(void)

void FUN_147ba10c6(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_144a9ff88(param_3,(int)param_2[1]);
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_2;
    lVar6 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 8 + lVar6);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x488))) {
        lVar4 = *(longlong *)(param_1 + 0x480);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) =
             *(undefined4 *)(lVar4 + (longlong)iVar1 * 4);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 147ba1156 FUN_147ba1156 body=316 status=ok
// SIG undefined FUN_147ba1156(void)

undefined8 FUN_147ba1156(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  FUN_147ba10c6(param_1 + -0x448,&local_88,&local_78);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = local_78;
  local_a0 = (undefined4)uStack_70;
  (**(code **)(*(longlong *)(param_1 + -0x448) + 0x6c8))(param_1 + -0x448,&local_a8,&local_98);
  FUN_147b00ec8(param_3,uStack_90 & 0xffffffff);
  lVar5 = local_98;
  lVar7 = (longlong)(int)uStack_90;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(lVar5 + lVar6) * 4)
      ;
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_147b4eec8(param_3,iVar2);
      }
      lVar4 = *param_3;
      *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = uVar3;
      *(undefined4 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = uVar1;
      lVar6 = lVar6 + 4;
    } while (lVar7 * 4 != lVar6);
  }
  if (local_98 != 0) {
    FUN_1400020a8(local_98);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147ba1294 FUN_147ba1294 body=422 status=ok
// SIG undefined FUN_147ba1294(void)

void FUN_147ba1294(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_144a9ff88(param_3,(int)param_2[1]);
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    local_100 = *param_2;
    lVar5 = 0;
    do {
      iVar1 = *(int *)(local_100 + lVar5);
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0x3ff00000;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_b8 = 0x3ff0000000000000;
      uStack_b0 = 0x3ff0000000000000;
      local_a8 = 0x3ff0000000000000;
      uStack_a0 = 0;
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x60 + param_1[0x77]);
      puVar8 = local_f8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar2 = (int)param_1[0x86];
      if ((longlong)iVar2 < 1) {
        uVar6 = (undefined4)param_1[0x88];
      }
      else {
        uVar6 = *(undefined4 *)(param_1[0x85] + -4 + (longlong)iVar2 * 4);
        *(int *)(param_1 + 0x86) = iVar2 + -1;
      }
      (**(code **)(*param_1 + 0x648))(param_1,local_f8,uVar6);
      if (iVar1 != -1) {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar6;
      }
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar5);
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ba1458 FUN_147ba1458 body=317 status=ok
// SIG undefined FUN_147ba1458(void)

longlong FUN_147ba1458(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 2));
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + lVar4);
      if (((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
         (lVar3 = FUN_147b9ee5c(lVar5), lVar3 == param_2)) {
        FUN_147b9e408(lVar5,&local_54,param_3);
        lVar3 = *(longlong *)(lVar5 + 0x1c8);
        if (lVar3 == 0) {
          local_68 = DAT_14c8464f0;
          local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_70 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_78 = *(undefined8 *)(lVar3 + 0x260);
          uStack_70 = *(undefined8 *)(lVar3 + 0x268);
          local_68 = *(undefined8 *)(lVar3 + 0x270);
        }
        FUN_147b9e408(lVar5,&local_60,&local_78);
        if (((local_60 == local_54) && (local_5c == local_50)) && (local_58 == local_4c))
        goto LAB_147ba1509;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar4);
  }
  lVar5 = 0;
LAB_147ba1509:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 2));
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 147ba1596 FUN_147ba1596 body=838 status=ok
// SIG undefined FUN_147ba1596(void)

longlong FUN_147ba1596(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80;
  int local_78;
  uint local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  FUN_1457a9e34(&local_80,0x10,1,0);
  uVar13 = (ulonglong)local_70;
  if ((-1 < (int)local_70) && ((int)local_70 < local_78)) {
    do {
      lVar12 = *(longlong *)(local_80 + (uVar13 & 0xffffffff) * 8);
      lVar6 = FUN_1459e9b82();
      if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) &&
         (lVar12 = *(longlong *)(local_80 + (longlong)(int)local_70 * 8),
         (*(byte *)(lVar12 + 0xd4) & 1) == 0)) {
        local_a0[0] = *(longlong *)(lVar12 + 0x18);
        FUN_1400021e4(local_a0,local_90);
        cVar3 = FUN_144a791f8(local_90,L"SKEL_",5,1);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          local_50 = *(undefined8 *)(*(longlong *)(local_80 + (longlong)(int)local_70 * 8) + 0x18);
          FUN_1400021e4(&local_50,local_a0);
          cVar4 = FUN_144a791f8(local_a0,L"REINST_",7,1);
          if (local_a0[0] != 0) {
            FUN_1400020a8();
          }
        }
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
        uVar13 = uStack_60;
        if (cVar4 == '\0') {
          lVar12 = *(longlong *)(local_80 + (longlong)(int)local_70 * 8);
          lVar6 = (longlong)(int)uStack_60;
          uVar5 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
          if (uStack_60._4_4_ < uVar5) {
            FUN_140a0062e(&local_68,uVar13 & 0xffffffff);
          }
          local_68[lVar6] = lVar12;
        }
      }
      uVar13 = (longlong)(int)local_70;
      do {
        uVar14 = uVar13;
        uVar13 = uVar14 + 1;
        local_70 = (uint)uVar13;
        if ((longlong)local_78 <= (longlong)uVar13) break;
      } while (*(longlong *)(local_80 + uVar13 * 8) == 0);
    } while ((-2 < (longlong)uVar14) && ((int)local_70 < local_78));
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_60 == 0) {
    lVar12 = 0;
  }
  else {
    plVar1 = local_68 + (int)uStack_60;
    iVar11 = 0x7fffffff;
    plVar10 = local_68;
    lVar6 = 0;
    do {
      lVar2 = *plVar10;
      if (*(longlong *)(lVar2 + 0x110) == 0) {
        FUN_140aa6c08(lVar2);
      }
      lVar12 = lVar6;
      if (((param_1 != 0) && (lVar7 = FUN_147b9eeee(*(undefined8 *)(lVar2 + 0x110)), lVar7 != 0)) &&
         ((*(int *)(lVar7 + 0x38) <= *(int *)(param_1 + 0x38) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)))) {
        if (*(longlong *)(lVar2 + 0x110) == 0) {
          FUN_140aa6c08(lVar2);
        }
        lVar7 = FUN_147b9ee5c();
        if (lVar7 == 0) {
          if (*(longlong *)(lVar2 + 0x110) == 0) {
            FUN_140aa6c08(lVar2);
          }
          lVar7 = FUN_147b9eeee();
        }
        lVar12 = lVar2;
        if (lVar7 == param_1) break;
        iVar8 = 0;
        lVar9 = param_1;
        do {
          iVar8 = iVar8 + 1;
          lVar9 = *(longlong *)(lVar9 + 0x40);
          if (lVar9 == 0) break;
        } while (lVar9 != lVar7);
        lVar12 = lVar6;
        if (lVar9 != 0 && iVar8 < iVar11) {
          lVar12 = lVar2;
          iVar11 = iVar8;
        }
      }
      plVar10 = plVar10 + 1;
      lVar6 = lVar12;
    } while (plVar10 != plVar1);
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba18de FUN_147ba18de body=74 status=ok
// SIG undefined FUN_147ba18de(void)

undefined8 * FUN_147ba18de(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_144a87850();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 147ba1928 FUN_147ba1928 body=108 status=ok
// SIG undefined FUN_147ba1928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ba1928(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [32];
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar3 = param_1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar6 = *(undefined1 (*) [16])(param_1 + 8) & _DAT_149931180;
  auVar1._16_16_ = _DAT_149931180 & *(undefined1 (*) [16])(param_1 + 10);
  auVar1._0_16_ = auVar6;
  auVar7._0_8_ = SUB168(_DAT_149931180 & *(undefined1 (*) [16])(param_1 + 10),0);
  auVar7._8_8_ = auVar6._0_8_;
  auVar6 = maxpd(auVar6,auVar1._8_16_);
  auVar7 = maxpd(auVar6,auVar7);
  fVar4 = (float)auVar7._0_8_ * 500.0;
  dVar5 = (double)fVar4;
  param_1[8] = dVar5;
  param_1[9] = dVar5;
  param_1[10] = dVar5;
  param_1[0xb] = 0;
  *(float *)(param_1 + 0xe) = fVar4;
  return;
}



// FUNCTION 147ba1994 FUN_147ba1994 body=358 status=ok
// SIG undefined FUN_147ba1994(void)

undefined4
FUN_147ba1994(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = (**(code **)(*param_1 + 0xe0))();
  if ((char)uVar5 == '\0') {
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar6 + 5;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x30);
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar6 + 5;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar6;
    param_2[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_14a20cb90;
    *(undefined1 *)(puVar6 + 2) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
  }
  else {
    uVar4 = uStack_50._4_4_;
    uVar3 = (undefined4)uStack_50;
    uVar1 = (undefined4)local_58;
    uVar2 = local_58._4_4_;
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar6 + 5;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x30);
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar6 + 5;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar6;
    param_2[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_14a20cb90;
    *(undefined1 *)(puVar6 + 2) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
    *(undefined4 *)(puVar6 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
    *(undefined4 *)(puVar6 + 4) = uVar4;
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = local_58;
      param_5[1] = uStack_50;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba1afc FUN_147ba1afc body=138 status=ok
// SIG undefined FUN_147ba1afc(void)

float FUN_147ba1afc(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  dVar3 = (double)param_1[0x28] - *(double *)(param_2 + 0xb58);
  dVar4 = (double)param_1[0x27] - *(double *)(param_2 + 0xb50);
  dVar5 = (double)param_1[0x26] - *(double *)(param_2 + 0xb48);
  fVar6 = (float)SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4);
  fVar1 = *(float *)(param_2 + 0xb98);
  fVar2 = (float)(**(code **)(*param_1 + 0x18))();
  if (fVar6 <= 1.0) {
    fVar6 = 1.0;
  }
  return (fVar2 * fVar1) / fVar6;
}



// FUNCTION 147ba1ba2 FUN_147ba1ba2 body=1605 status=ok
// SIG undefined FUN_147ba1ba2(void)

undefined8 FUN_147ba1ba2(longlong *param_1,double *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_3e8 [32];
  double *local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  undefined8 local_378 [16];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  double local_278;
  undefined8 local_270;
  double local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 local_230;
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  double local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  (**(code **)(*param_1 + 0x1b0))(param_1,&local_390,param_2);
  local_3b0 = param_2[2] - local_380;
  local_3b8 = param_2[1] - local_388;
  dVar8 = *param_2 - local_390;
  dVar6 = local_3b0 * local_3b0 + dVar8 * dVar8 + local_3b8 * local_3b8;
  fVar12 = (float)SQRT(dVar6);
  fVar11 = (float)SQRT(param_2[5] * param_2[5] + param_2[3] * param_2[3] + param_2[4] * param_2[4]);
  if (fVar12 <= fVar11) {
    fVar10 = 1.0;
  }
  else {
    fVar10 = (1.0 / SQRT((fVar12 + fVar11) * (fVar12 - fVar11))) * fVar11;
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
  }
  local_3c8 = param_2 + 3;
  if (fVar12 <= fVar11 * 1.1) {
    if (((dVar6 != 1.0) || (dVar5 = local_3b0, dVar9 = dVar8, dVar7 = local_3b8, NAN(dVar6))) &&
       (dVar5 = DAT_14c8464f0, dVar9 = DAT_14c8464e0, dVar7 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar6)) {
      dVar6 = 1.0 / SQRT(dVar6);
      dVar5 = local_3b0 * dVar6;
      dVar9 = dVar8 * dVar6;
      dVar7 = local_3b8 * dVar6;
    }
    dVar6 = (double)fVar11;
    local_3b0 = dVar5 * dVar6 * 1.100000023841858;
    local_3b8 = dVar7 * dVar6 * 1.100000023841858;
    dVar8 = dVar9 * dVar6 * 1.100000023841858;
    local_380 = param_2[2] - local_3b0;
    local_388 = param_2[1] - local_3b8;
    local_390 = *param_2 - dVar8;
    fVar10 = 1.0;
    fVar12 = fVar11 * 1.1;
  }
  auVar1._8_4_ = SUB84(local_388,0);
  auVar1._0_8_ = -local_390;
  auVar1._12_4_ = (uint)((ulonglong)local_388 >> 0x20) ^ 0x80000000;
  *param_3 = auVar1;
  *(double *)param_3[1] = -local_380;
  local_3c0 = 1.0 / (double)fVar12;
  local_3b0 = local_3b0 * local_3c0;
  local_3b8 = local_3b8 * local_3c0;
  local_3c0 = local_3c0 * dVar8;
  FUN_144a79a9c(&local_3c0,&local_3a8);
  dVar6 = cos((local_3a0 * 3.1415927410125732) / 180.0);
  dVar8 = sin((local_3a0 * 3.1415927410125732) / 180.0);
  dVar7 = sin((local_3a0 * 3.1415927410125732) / 180.0);
  local_1f8 = cos((local_3a0 * 3.1415927410125732) / 180.0);
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0x3ff0000000000000;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0x3ff0000000000000;
  local_1f0 = -dVar7;
  local_1d8 = dVar8;
  local_1d0 = dVar6;
  dVar6 = cos((local_3a8 * 3.1415927410125732) / 180.0);
  dVar8 = sin((local_3a8 * 3.1415927410125732) / 180.0);
  dVar7 = sin((local_3a8 * 3.1415927410125732) / 180.0);
  local_278 = cos((local_3a8 * 3.1415927410125732) / 180.0);
  local_270 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0x3ff0000000000000;
  local_248 = 0;
  uStack_240 = 0;
  local_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0x3ff0000000000000;
  local_268 = -dVar7;
  local_238 = dVar8;
  local_228 = dVar6;
  FUN_1447fea8d(&local_178,&local_1f8);
  dVar6 = cos((local_398 * 3.1415927410125732) / 180.0);
  dVar8 = sin((local_398 * 3.1415927410125732) / 180.0);
  dVar7 = sin((local_398 * 3.1415927410125732) / 180.0);
  local_2d0 = cos((local_398 * 3.1415927410125732) / 180.0);
  local_2f8 = 0x3ff0000000000000;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0x3ff0000000000000;
  local_2c8 = dVar7;
  local_2b0 = -dVar8;
  local_2a8 = dVar6;
  FUN_1447fea8d(local_378,&local_178);
  puVar3 = local_378;
  pauVar4 = param_3 + 2;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)*pauVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pauVar4 = (undefined1 (*) [16])(*pauVar4 + 8);
  }
  *(double *)param_3[10] = (double)(1.0 / fVar10);
  *(double *)(param_3[10] + 8) = (double)(1.0 / fVar10);
  dVar6 = param_2[6];
  dVar8 = param_2[2];
  dVar7 = param_2[1];
  dVar5 = *local_3c8;
  dVar9 = local_3c8[1];
  local_168 = local_3c8[2];
  *(double *)param_3[0xb] = *param_2 - local_390;
  *(double *)(param_3[0xb] + 8) = dVar7 - local_388;
  *(double *)param_3[0xc] = dVar8 - local_380;
  local_178._0_4_ = SUB84(dVar5,0);
  local_178._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
  uStack_170._0_4_ = SUB84(dVar9,0);
  uStack_170._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
  *(undefined4 *)(param_3[0xc] + 8) = (undefined4)local_178;
  *(undefined4 *)(param_3[0xc] + 0xc) = local_178._4_4_;
  *(undefined4 *)param_3[0xd] = (undefined4)uStack_170;
  *(undefined4 *)(param_3[0xd] + 4) = uStack_170._4_4_;
  *(double *)(param_3[0xd] + 8) = local_168;
  *(double *)param_3[0xe] = dVar6;
  *(undefined8 *)param_3[0xf] = 0;
  *(undefined8 *)(param_3[0xf] + 8) = 0;
  *(undefined8 *)param_3[0x10] = 0x3ff0000000000000;
  *(undefined8 *)(param_3[0x10] + 8) = 0;
  *(undefined4 *)param_3[0x11] = 0x3dcccccd;
  *(int *)(param_3[0x11] + 4) = (int)param_1[0x53];
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
    local_178 = dVar5;
    uStack_170 = dVar9;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)local_168 >> 8),1);
}



// FUNCTION 147ba21fc FUN_147ba21fc body=69 status=ok
// SIG undefined FUN_147ba21fc(void)

undefined8 FUN_147ba21fc(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 == 0) {
    plVar2 = (longlong *)FUN_14479d2ce(param_1);
    if (plVar2 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar2 + 0x180))(plVar2);
      if (lVar1 != 0) goto LAB_147ba2212;
    }
    uVar3 = 0;
  }
  else {
LAB_147ba2212:
    uVar3 = *(undefined8 *)(lVar1 + 0x178);
  }
  return uVar3;
}



// FUNCTION 147ba2242 FUN_147ba2242 body=59 status=ok
// SIG undefined FUN_147ba2242(void)

longlong FUN_147ba2242(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1400f3ad8();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x440);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 147ba227e FUN_147ba227e body=80 status=ok
// SIG undefined FUN_147ba227e(void)

void FUN_147ba227e(longlong *param_1,longlong param_2,undefined4 param_3)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0xf] = param_2;
  (**(code **)(*param_1 + 0x310))(param_1,param_3);
  FUN_14036c39e(param_1 + 0x27,param_1);
  return;
}



// FUNCTION 147ba22d0 FUN_147ba22d0 body=245 status=ok
// SIG undefined FUN_147ba22d0(void)

void FUN_147ba22d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_198 [44];
  undefined1 local_16c [11];
  undefined1 local_161;
  longlong local_160;
  ulonglong *local_158;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_160,lVar2,0);
    local_161 = 10;
    puVar1 = (undefined1 *)*local_158 + 1;
    if ((undefined1 *)local_158[1] < puVar1) {
      (**(code **)(local_160 + 0x170))(&local_160,&local_161,1);
    }
    else {
      local_161 = *(undefined1 *)*local_158;
      *local_158 = (ulonglong)puVar1;
    }
    FUN_14021219d(&local_160,param_2);
    FUN_146214c9d(&local_160,param_3);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_16c,&local_160,1);
    FUN_1449daebe(&local_160);
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba23c6 FUN_147ba23c6 body=1088 status=ok
// SIG undefined FUN_147ba23c6(void)

undefined8
FUN_147ba23c6(longlong param_1,undefined8 *param_2,double *param_3,double *param_4,float *param_5)

{
  double dVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_288 [44];
  float local_25c;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double adStack_1a8 [6];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_5 == (float *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x288);
    uVar6 = *(undefined8 *)(param_1 + 0x290);
  }
  else {
    uVar6 = CONCAT44((int)param_5[1],(int)*param_5);
    uVar7 = 0;
  }
  adStack_1a8[4] = (double)param_2[2];
  adStack_1a8[2] = (double)*param_2;
  adStack_1a8[3] = (double)param_2[1];
  local_170 = param_2[5];
  adStack_1a8[5] = (double)*param_2;
  local_178 = param_2[1];
  local_158 = param_2[2];
  local_160 = param_2[4];
  local_150 = param_2[3];
  local_f0 = *(undefined4 *)(param_2 + 3);
  uStack_ec = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_e8 = *(undefined4 *)(param_2 + 4);
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_e0 = param_2[5];
  local_168 = adStack_1a8[5];
  local_148 = local_178;
  local_140 = local_158;
  local_138 = local_150;
  local_130 = local_160;
  local_128 = local_158;
  local_120 = local_150;
  local_118 = local_178;
  local_110 = local_170;
  local_108 = adStack_1a8[5];
  local_100 = local_160;
  local_f8 = local_170;
  FUN_14012d55c(local_f0,&local_218);
  *param_3 = 3.4028234663852886e+38;
  param_3[1] = 3.4028234663852886e+38;
  *param_4 = 1.1754943508222875e-38;
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  local_240 = (double)iVar2;
  param_4[1] = 1.1754943508222875e-38;
  iVar2 = (int)((ulonglong)uVar6 >> 0x20) - iVar2;
  local_248 = (double)iVar2;
  local_250 = (double)(int)uVar7;
  local_228 = local_1b8;
  dStack_220 = dStack_1b0;
  iVar5 = (int)uVar6 - (int)uVar7;
  local_258 = (double)iVar5;
  local_238 = local_1d8;
  dStack_230 = dStack_1d0;
  local_25c = (float)iVar5;
  fVar14 = (float)iVar2;
  uVar3 = 0;
  lVar4 = 0x10;
  do {
    dVar11 = *(double *)((longlong)adStack_1a8 + lVar4);
    dVar13 = *(double *)((longlong)adStack_1a8 + lVar4 + 8);
    dVar1 = *(double *)((longlong)adStack_1a8 + lVar4 + 0x10);
    dVar9 = local_200 * dVar11 + local_1e0 * dVar13 + local_1c0 * dVar1 + adStack_1a8[1];
    if (0.0 < dVar9) {
      dVar9 = (double)(float)(1.0 / dVar9);
      fVar8 = (float)(((dVar1 * local_1d8 + dVar13 * local_1f8 + dVar11 * local_218 + local_1b8) *
                       0.5 * dVar9 + 0.5) * local_258 + local_250);
      if (local_25c <= fVar8) {
        fVar8 = local_25c;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      dVar10 = (double)fVar8;
      dVar12 = *param_3;
      if (dVar10 <= *param_3) {
        dVar12 = dVar10;
      }
      *param_3 = dVar12;
      fVar8 = (float)(((dVar1 * dStack_1d0 + dVar13 * dStack_1f0 + dVar11 * dStack_210 + dStack_1b0)
                       * -0.5 * dVar9 + 0.5) * local_248 + local_240);
      if (fVar14 <= fVar8) {
        fVar8 = fVar14;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      dVar13 = (double)fVar8;
      dVar11 = param_3[1];
      if (dVar13 <= param_3[1]) {
        dVar11 = dVar13;
      }
      param_3[1] = dVar11;
      dVar11 = *param_4;
      if (*param_4 <= dVar10) {
        dVar11 = dVar10;
      }
      *param_4 = dVar11;
      dVar11 = param_4[1];
      if (param_4[1] <= dVar13) {
        dVar11 = dVar13;
      }
      param_4[1] = dVar11;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    }
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0xd0);
  if ((local_d0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),1 < (int)uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba2808 FUN_147ba2808 body=473 status=ok
// SIG undefined FUN_147ba2808(void)

undefined8 FUN_147ba2808(longlong param_1,double *param_2,double *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_80;
  double local_78;
  double dStack_70;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_4 == (float *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x288);
    uVar6 = *(undefined8 *)(param_1 + 0x290);
  }
  else {
    uVar6 = CONCAT44((int)param_4[1],(int)*param_4);
    uVar7 = 0;
  }
  FUN_14012d55c(param_1,&local_d8);
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  local_60 = dVar1 * local_c0 + dVar2 * local_a0 + dVar3 * local_80 + local_60;
  uVar8 = -(ulonglong)(local_60 == 0.0);
  dVar9 = (double)(uVar8 & 0x3f1a36e2e0000000 | ~uVar8 & (ulonglong)local_60);
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  dVar10 = (double)(iVar4 - iVar5) *
           ((dVar3 * dStack_90 + dVar2 * dStack_b0 + dVar1 * dStack_d0 + dStack_70) * -0.5 *
            (double)(float)(1.0 / dVar9) + 0.5) + (double)iVar5;
  dVar1 = (double)((int)uVar6 - (int)uVar7) *
          ((dVar3 * local_98 + dVar2 * local_b8 + dVar1 * local_d8 + local_78) * 0.5 *
           (double)(float)(1.0 / dVar9) + 0.5) + (double)(int)uVar7;
  *param_3 = dVar1;
  param_3[1] = dVar10;
  if (dVar9 < 0.0) {
    *param_3 = (double)(int)uVar6 - dVar1;
    param_3[1] = (double)iVar4 - dVar10;
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return CONCAT71((uint7)((ulonglong)uVar6 >> 0x28),0.0 <= dVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ba29e2 FUN_147ba29e2 body=231 status=ok
// SIG undefined FUN_147ba29e2(void)

void FUN_147ba29e2(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)param_1[9] != 0) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (longlong)(int)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    while (iVar4 = iVar5, iVar4 != -1) {
      lVar6 = *param_1;
      iVar5 = *(int *)(lVar6 + 0x10 + (longlong)iVar4 * 0x18);
      if (*(ulonglong *)(lVar6 + (longlong)iVar4 * 0x18) == param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_14793612a(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) =
               *(undefined8 *)(lVar6 + (longlong)iVar4 * 0x18 + 8);
          do {
            iVar4 = iVar5;
            if (iVar4 == -1) {
              return;
            }
            lVar6 = *param_1;
            iVar5 = *(int *)(lVar6 + 0x10 + (longlong)iVar4 * 0x18);
          } while (*(ulonglong *)(lVar6 + (longlong)iVar4 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return;
}


