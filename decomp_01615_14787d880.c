// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14787d880 FUN_14787d880 body=59 status=ok
// SIG undefined FUN_14787d880(void)

undefined8 FUN_14787d880(longlong *param_1)

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



// FUNCTION 14787d9d0 FUN_14787d9d0 body=59 status=ok
// SIG undefined FUN_14787d9d0(void)

undefined8 FUN_14787d9d0(longlong *param_1)

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



// FUNCTION 14787db06 FUN_14787db06 body=91 status=ok
// SIG undefined FUN_14787db06(void)

undefined1 FUN_14787db06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      puVar2 = (undefined8 *)(param_3 + lVar4);
      puVar3 = (undefined8 *)(param_2 + lVar4);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_1403fbf4e(param_2 + lVar4 + 0x60,param_3 + lVar4 + 0x60);
      lVar4 = lVar4 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14787db8a FUN_14787db8a body=59 status=ok
// SIG undefined FUN_14787db8a(void)

undefined8 FUN_14787db8a(longlong *param_1)

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



// FUNCTION 14787dbd0 FUN_14787dbd0 body=38 status=ok
// SIG undefined FUN_14787dbd0(void)

void FUN_14787dbd0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14787dc5e FUN_14787dc5e body=63 status=ok
// SIG undefined FUN_14787dc5e(void)

undefined1 FUN_14787dc5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14787ddd0(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 14787dcc6 FUN_14787dcc6 body=59 status=ok
// SIG undefined FUN_14787dcc6(void)

undefined8 FUN_14787dcc6(longlong *param_1)

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



// FUNCTION 14787dd12 FUN_14787dd12 body=40 status=ok
// SIG undefined FUN_14787dd12(void)

void FUN_14787dd12(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_14583a336(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 14787dd8c FUN_14787dd8c body=67 status=ok
// SIG undefined FUN_14787dd8c(void)

void FUN_14787dd8c(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  FUN_147af9022(param_2,param_1);
  FUN_14072b458(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014787ddcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xba8))(param_2,param_1);
  return;
}



// FUNCTION 14787ddd0 FUN_14787ddd0 body=213 status=ok
// SIG undefined FUN_14787ddd0(void)

longlong FUN_14787ddd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_147764d36();
  FUN_147765084(param_1 + 0x110,param_2 + 0x110);
  lVar1 = *(longlong *)(param_2 + 0x160);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x160);
    }
  }
  *(longlong *)(param_1 + 0x160) = lVar1;
  puVar2 = (undefined8 *)(param_2 + 0x170);
  puVar3 = (undefined8 *)(param_1 + 0x170);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1403fbf4e(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_14787dea6(param_1 + 0x1e0,param_2 + 0x1e0);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x1f0,param_2 + 0x1f0);
  }
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  FUN_14787defe(param_1 + 0x218,param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
  return param_1;
}



// FUNCTION 14787dea6 FUN_14787dea6 body=88 status=ok
// SIG undefined FUN_14787dea6(void)

undefined8 * FUN_14787dea6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14787df56(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 7);
      }
    }
  }
  return param_1;
}



// FUNCTION 14787defe FUN_14787defe body=88 status=ok
// SIG undefined FUN_14787defe(void)

undefined8 * FUN_14787defe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140976db2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14787df56 FUN_14787df56 body=98 status=ok
// SIG undefined FUN_14787df56(void)

void FUN_14787df56(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14787dfee FUN_14787dfee body=54 status=ok
// SIG undefined FUN_14787dfee(void)

undefined1 FUN_14787dfee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14787e04c FUN_14787e04c body=59 status=ok
// SIG undefined FUN_14787e04c(void)

undefined8 FUN_14787e04c(longlong *param_1)

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



// FUNCTION 14787e092 FUN_14787e092 body=37 status=ok
// SIG undefined FUN_14787e092(void)

void FUN_14787e092(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14787e174 FUN_14787e174 body=59 status=ok
// SIG undefined FUN_14787e174(void)

undefined8 FUN_14787e174(longlong *param_1)

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



// FUNCTION 14787e298 FUN_14787e298 body=79 status=ok
// SIG undefined FUN_14787e298(void)

void FUN_14787e298(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1447addd0(param_2 + 4,0x10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787e364 FUN_14787e364 body=47 status=ok
// SIG undefined FUN_14787e364(void)

undefined1 FUN_14787e364(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_14787e486(param_2,param_3);
  FUN_14787e706(param_2,param_3 + 8);
  return 1;
}



// FUNCTION 14787e3e6 FUN_14787e3e6 body=59 status=ok
// SIG undefined FUN_14787e3e6(void)

undefined8 FUN_14787e3e6(longlong *param_1)

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



// FUNCTION 14787e486 FUN_14787e486 body=638 status=ok
// SIG undefined FUN_14787e486(void)

void FUN_14787e486(longlong *param_1,ulonglong *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 local_29;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar6 = (ulonglong *)param_1[1];
      pcVar2 = (char *)*puVar6 + 1;
      if ((char *)puVar6[1] < pcVar2) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,1);
        cVar4 = (char)local_38;
      }
      else {
        cVar4 = *(char *)*puVar6;
        local_38 = CONCAT71(local_38._1_7_,cVar4);
        *puVar6 = (ulonglong)pcVar2;
      }
      if (cVar4 == '\x02') {
        local_28 = 0;
        puVar3 = (ulonglong *)param_1[1];
        puVar6 = (ulonglong *)*puVar3 + 1;
        if ((ulonglong *)puVar3[1] < puVar6) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_28,8);
            uVar8 = local_28;
          }
          else {
            thunk_FUN_146821949(param_1,&local_28);
            uVar8 = local_28;
          }
        }
        else {
          uVar8 = *(ulonglong *)*puVar3;
          *puVar3 = (ulonglong)puVar6;
          local_28 = uVar8;
        }
      }
      else {
        if (cVar4 != '\x01') {
          *param_2 = 0;
          goto LAB_14787e4ad;
        }
        local_28 = 0;
        (**(code **)(*param_1 + 0x150))(param_1,&local_28);
        uVar8 = local_28;
        if (local_28 == 0) {
          uVar8 = 0;
        }
        else {
          uVar7 = FUN_145b3d64a();
          uVar8 = FUN_144718840(uVar8,uVar7);
        }
      }
      *param_2 = uVar8;
    }
    goto LAB_14787e4ad;
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
LAB_14787e5de:
    local_38 = local_38 & 0xffffffffffffff00;
    puVar6 = (ulonglong *)param_1[1];
    uVar8 = *puVar6 + 1;
    if (uVar8 <= puVar6[1]) {
LAB_14787e6d9:
      *puVar6 = uVar8;
      goto LAB_14787e4ad;
    }
    lVar5 = *param_1;
    uVar7 = 1;
  }
  else {
    uVar8 = (**(code **)(*(longlong *)*param_2 + 8))();
    if (uVar8 != 0) {
      local_38 = CONCAT71(local_38._1_7_,1);
      puVar6 = (ulonglong *)param_1[1];
      puVar1 = (undefined1 *)*puVar6 + 1;
      local_28 = uVar8;
      if ((undefined1 *)puVar6[1] < puVar1) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,1);
      }
      else {
        local_38 = CONCAT71(local_38._1_7_,*(undefined1 *)*puVar6);
        *puVar6 = (ulonglong)puVar1;
      }
      (**(code **)(*param_1 + 0x150))(param_1,&local_28);
      goto LAB_14787e4ad;
    }
    if ((*param_2 == 0) || ((*(byte *)((longlong)param_1 + 0x29) & 1) != 0)) goto LAB_14787e5de;
    local_29 = 2;
    puVar6 = (ulonglong *)param_1[1];
    puVar1 = (undefined1 *)*puVar6 + 1;
    if ((undefined1 *)puVar6[1] < puVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_29,1);
    }
    else {
      local_29 = *(undefined1 *)*puVar6;
      *puVar6 = (ulonglong)puVar1;
    }
    local_38 = *param_2;
    puVar6 = (ulonglong *)param_1[1];
    uVar8 = *puVar6 + 8;
    if (uVar8 <= puVar6[1]) goto LAB_14787e6d9;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      thunk_FUN_146821949(param_1,&local_38);
      goto LAB_14787e4ad;
    }
    lVar5 = *param_1;
    uVar7 = 8;
  }
  (**(code **)(lVar5 + 0x170))(param_1,&local_38,uVar7);
LAB_14787e4ad:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14787e706 FUN_14787e706 body=638 status=ok
// SIG undefined FUN_14787e706(void)

void FUN_14787e706(longlong *param_1,ulonglong *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 local_29;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar6 = (ulonglong *)param_1[1];
      pcVar2 = (char *)*puVar6 + 1;
      if ((char *)puVar6[1] < pcVar2) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,1);
        cVar4 = (char)local_38;
      }
      else {
        cVar4 = *(char *)*puVar6;
        local_38 = CONCAT71(local_38._1_7_,cVar4);
        *puVar6 = (ulonglong)pcVar2;
      }
      if (cVar4 == '\x02') {
        local_28 = 0;
        puVar3 = (ulonglong *)param_1[1];
        puVar6 = (ulonglong *)*puVar3 + 1;
        if ((ulonglong *)puVar3[1] < puVar6) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_28,8);
            uVar8 = local_28;
          }
          else {
            thunk_FUN_146821949(param_1,&local_28);
            uVar8 = local_28;
          }
        }
        else {
          uVar8 = *(ulonglong *)*puVar3;
          *puVar3 = (ulonglong)puVar6;
          local_28 = uVar8;
        }
      }
      else {
        if (cVar4 != '\x01') {
          *param_2 = 0;
          goto LAB_14787e72d;
        }
        local_28 = 0;
        (**(code **)(*param_1 + 0x150))(param_1,&local_28);
        uVar8 = local_28;
        if (local_28 == 0) {
          uVar8 = 0;
        }
        else {
          uVar7 = FUN_145b3d734();
          uVar8 = FUN_144718840(uVar8,uVar7);
        }
      }
      *param_2 = uVar8;
    }
    goto LAB_14787e72d;
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
LAB_14787e85e:
    local_38 = local_38 & 0xffffffffffffff00;
    puVar6 = (ulonglong *)param_1[1];
    uVar8 = *puVar6 + 1;
    if (uVar8 <= puVar6[1]) {
LAB_14787e959:
      *puVar6 = uVar8;
      goto LAB_14787e72d;
    }
    lVar5 = *param_1;
    uVar7 = 1;
  }
  else {
    uVar8 = (**(code **)(*(longlong *)*param_2 + 8))();
    if (uVar8 != 0) {
      local_38 = CONCAT71(local_38._1_7_,1);
      puVar6 = (ulonglong *)param_1[1];
      puVar1 = (undefined1 *)*puVar6 + 1;
      local_28 = uVar8;
      if ((undefined1 *)puVar6[1] < puVar1) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,1);
      }
      else {
        local_38 = CONCAT71(local_38._1_7_,*(undefined1 *)*puVar6);
        *puVar6 = (ulonglong)puVar1;
      }
      (**(code **)(*param_1 + 0x150))(param_1,&local_28);
      goto LAB_14787e72d;
    }
    if ((*param_2 == 0) || ((*(byte *)((longlong)param_1 + 0x29) & 1) != 0)) goto LAB_14787e85e;
    local_29 = 2;
    puVar6 = (ulonglong *)param_1[1];
    puVar1 = (undefined1 *)*puVar6 + 1;
    if ((undefined1 *)puVar6[1] < puVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_29,1);
    }
    else {
      local_29 = *(undefined1 *)*puVar6;
      *puVar6 = (ulonglong)puVar1;
    }
    local_38 = *param_2;
    puVar6 = (ulonglong *)param_1[1];
    uVar8 = *puVar6 + 8;
    if (uVar8 <= puVar6[1]) goto LAB_14787e959;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      thunk_FUN_146821949(param_1,&local_38);
      goto LAB_14787e72d;
    }
    lVar5 = *param_1;
    uVar7 = 8;
  }
  (**(code **)(lVar5 + 0x170))(param_1,&local_38,uVar7);
LAB_14787e72d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14787ea06 FUN_14787ea06 body=59 status=ok
// SIG undefined FUN_14787ea06(void)

undefined8 FUN_14787ea06(longlong *param_1)

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



// FUNCTION 14787eaa8 FUN_14787eaa8 body=106 status=ok
// SIG undefined FUN_14787eaa8(void)

undefined8 FUN_14787eaa8(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x48,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x48)) {
    uVar5 = uVar2 / 0x48 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x48,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14787eb12 FUN_14787eb12 body=47 status=ok
// SIG undefined FUN_14787eb12(void)

void FUN_14787eb12(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_14787eb42(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14787eb42 FUN_14787eb42 body=136 status=ok
// SIG undefined FUN_14787eb42(void)

undefined8 * FUN_14787eb42(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  plVar2 = (longlong *)param_2[3];
  param_1[3] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar3 = param_2[6];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x31);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x39);
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x31) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x39) = uVar5;
  return param_1;
}



// FUNCTION 14787ec1a FUN_14787ec1a body=1065 status=ok
// SIG undefined FUN_14787ec1a(void)

void FUN_14787ec1a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined1 local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  int local_b4;
  longlong local_b0;
  longlong local_a8 [3];
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_89 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  puVar4 = &local_89;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  iVar1 = local_b4;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = local_b0;
  if ((local_b0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  _Src = local_58;
  local_c8 = local_78;
  local_d8 = local_88;
  uStack_d0 = uStack_80;
  local_f8 = local_70;
  uStack_f4 = uStack_6c;
  uStack_f0 = uStack_68;
  uStack_ec = uStack_64;
  local_e8 = local_60;
  local_108 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_50;
  local_100 = (int)uStack_50;
  if (lVar3 == 0) {
    local_fc = 0;
  }
  else {
    FUN_1446dd670(&local_108,uStack_50 & 0xffffffff,0);
    memcpy(local_108,_Src,lVar3 * 2);
  }
  local_110 = iVar1 != 0;
  local_118 = &local_c0;
  local_120 = local_a8;
  local_128 = puVar4;
  uVar2 = FUN_147b992a0(local_40,&local_108,&local_f8,&local_d8);
  *param_3 = uVar2;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f052 FUN_14787f052 body=1123 status=ok
// SIG undefined FUN_14787f052(void)

void FUN_14787f052(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined1 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  int local_c4;
  longlong local_c0;
  longlong local_b8 [3];
  undefined1 local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  puVar4 = &local_99;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  iVar1 = local_c4;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d0 = local_c0;
  if ((local_c0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  _Src = pvStack_50;
  local_d8 = local_88;
  local_e8 = local_98;
  uStack_e0 = uStack_90;
  local_108 = local_80;
  uStack_100 = uStack_78;
  local_f8 = local_70;
  local_130 = local_68;
  local_128 = (undefined4)uStack_60;
  uStack_124 = uStack_60._4_4_;
  uStack_120 = (undefined4)local_58;
  uStack_11c = local_58._4_4_;
  local_118 = (void *)0x0;
  lVar3 = (longlong)(int)local_48;
  local_110 = (int)local_48;
  if (lVar3 == 0) {
    local_10c = 0;
  }
  else {
    FUN_1446dd670(&local_118,local_48 & 0xffffffff,0);
    memcpy(local_118,_Src,lVar3 * 2);
  }
  local_140 = iVar1 != 0;
  local_148 = &local_d0;
  local_150 = local_b8;
  local_158 = puVar4;
  uVar2 = FUN_147b99648(local_40,&local_130,&local_108,&local_e8);
  *param_3 = uVar2;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (pvStack_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f4e2 FUN_14787f4e2 body=88 status=ok
// SIG undefined FUN_14787f4e2(void)

void FUN_14787f4e2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459c5316(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f540 FUN_14787f540 body=158 status=ok
// SIG undefined FUN_14787f540(void)

void FUN_14787f540(undefined8 param_1,longlong param_2)

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
  FUN_1479e3f68(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f5e4 FUN_14787f5e4 body=158 status=ok
// SIG undefined FUN_14787f5e4(void)

void FUN_14787f5e4(undefined8 param_1,longlong param_2)

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
  FUN_1479e3f1e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f688 FUN_14787f688 body=158 status=ok
// SIG undefined FUN_14787f688(void)

void FUN_14787f688(undefined8 param_1,longlong param_2)

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
  FUN_1479e3ed0(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f72c FUN_14787f72c body=158 status=ok
// SIG undefined FUN_14787f72c(void)

void FUN_14787f72c(undefined8 param_1,longlong param_2)

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
  FUN_1479e406e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f7d0 FUN_14787f7d0 body=158 status=ok
// SIG undefined FUN_14787f7d0(void)

void FUN_14787f7d0(undefined8 param_1,longlong param_2)

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
  FUN_1479e3fb2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f870 FUN_14787f870 body=152 status=ok
// SIG undefined FUN_14787f870(void)

void FUN_14787f870(undefined8 param_1,longlong param_2)

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
  FUN_1479e3ffa(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f90e FUN_14787f90e body=158 status=ok
// SIG undefined FUN_14787f90e(void)

void FUN_14787f90e(undefined8 param_1,longlong param_2)

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
  FUN_1479e3e3a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787f9b2 FUN_14787f9b2 body=158 status=ok
// SIG undefined FUN_14787f9b2(void)

void FUN_14787f9b2(undefined8 param_1,longlong param_2)

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
  FUN_1479e3e84(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787fa52 FUN_14787fa52 body=154 status=ok
// SIG undefined FUN_14787fa52(void)

void FUN_14787fa52(undefined8 param_1,longlong param_2)

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
  FUN_1479e4036(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787fb48 FUN_14787fb48 body=75 status=ok
// SIG undefined FUN_14787fb48(void)

void FUN_14787fb48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14098242c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787fb98 FUN_14787fb98 body=75 status=ok
// SIG undefined FUN_14787fb98(void)

void FUN_14787fb98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147b9a3a4(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787fbf8 FUN_14787fbf8 body=75 status=ok
// SIG undefined FUN_14787fbf8(void)

void FUN_14787fbf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147ba57e2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787fca0 FUN_14787fca0 body=115 status=ok
// SIG undefined FUN_14787fca0(void)

void FUN_14787fca0(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14356d31c(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787fd7c FUN_14787fd7c body=115 status=ok
// SIG undefined FUN_14787fd7c(void)

void FUN_14787fd7c(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14356dbc6(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787fe08 FUN_14787fe08 body=115 status=ok
// SIG undefined FUN_14787fe08(void)

void FUN_14787fe08(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14356d83c(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14787fe9c FUN_14787fe9c body=45 status=ok
// SIG undefined FUN_14787fe9c(void)

longlong FUN_14787fe9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14787fee0 FUN_14787fee0 body=48 status=ok
// SIG undefined FUN_14787fee0(void)

longlong FUN_14787fee0(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14787ff10 FUN_14787ff10 body=48 status=ok
// SIG undefined FUN_14787ff10(void)

longlong FUN_14787ff10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14787ff44 FUN_14787ff44 body=45 status=ok
// SIG undefined FUN_14787ff44(void)

longlong FUN_14787ff44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14787ff84 FUN_14787ff84 body=32 status=ok
// SIG undefined FUN_14787ff84(void)

undefined8 FUN_14787ff84(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetBentNormal");
  return param_2;
}



// FUNCTION 14787ffa4 FUN_14787ffa4 body=32 status=ok
// SIG undefined FUN_14787ffa4(void)

undefined8 FUN_14787ffa4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"BentNormal");
  return param_2;
}



// FUNCTION 14787ffd6 FUN_14787ffd6 body=32 status=ok
// SIG undefined FUN_14787ffd6(void)

undefined8 FUN_14787ffd6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"ClearCoatBottomNormal");
  return param_2;
}



// FUNCTION 14787fff6 FUN_14787fff6 body=87 status=ok
// SIG undefined FUN_14787fff6(void)

void FUN_14787fff6(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  *(undefined1 *)(param_2 + 2) = 1;
  FUN_140056680(param_2 + 4,&DAT_149dfb77a);
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0x100;
  param_2[9] = 0;
  *(undefined1 *)((longlong)param_2 + 0x51) = 0;
  return;
}



// FUNCTION 14788004e FUN_14788004e body=74 status=ok
// SIG undefined FUN_14788004e(void)

void FUN_14788004e(undefined8 param_1,undefined2 *param_2)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 8) = 1;
  *(undefined8 *)(param_2 + 0xc) = 0;
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0x100;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined1 *)((longlong)param_2 + 0x51) = 0;
  return;
}



// FUNCTION 1478800c6 FUN_1478800c6 body=54 status=ok
// SIG undefined FUN_1478800c6(void)

undefined1 FUN_1478800c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478801e8(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147880124 FUN_147880124 body=59 status=ok
// SIG undefined FUN_147880124(void)

undefined8 FUN_147880124(longlong *param_1)

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



// FUNCTION 14788016a FUN_14788016a body=48 status=ok
// SIG undefined FUN_14788016a(void)

void FUN_14788016a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(char *)(param_2 + 0x51) == '\x01') {
      *(undefined1 *)(param_2 + 0x51) = 0;
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1478801e8 FUN_1478801e8 body=249 status=ok
// SIG undefined FUN_1478801e8(void)

undefined2 * FUN_1478801e8(undefined2 *param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  lVar3 = *(longlong *)(param_2 + 4);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 4);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 4) = lVar3;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0xc);
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0xc);
    }
  }
  *(longlong *)(param_1 + 0xc) = lVar3;
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x1c);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0x1c);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x1c) = lVar3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x24);
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0x24);
    }
  }
  *(longlong *)(param_1 + 0x24) = lVar3;
  if (param_2 != param_1) {
    if (*(char *)((longlong)param_2 + 0x51) == '\x01') {
      *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
      uVar2 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x51) != '\x01') {
        return param_1;
      }
      uVar2 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x51) = uVar2;
  }
  return param_1;
}



// FUNCTION 1478803da FUN_1478803da body=63 status=ok
// SIG undefined FUN_1478803da(void)

undefined1 FUN_1478803da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c4cfbe(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 147880442 FUN_147880442 body=59 status=ok
// SIG undefined FUN_147880442(void)

undefined8 FUN_147880442(longlong *param_1)

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



// FUNCTION 14788048e FUN_14788048e body=40 status=ok
// SIG undefined FUN_14788048e(void)

void FUN_14788048e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1474b86e2(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14788052e FUN_14788052e body=90 status=ok
// SIG undefined FUN_14788052e(void)

undefined1 FUN_14788052e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 1478805b0 FUN_1478805b0 body=59 status=ok
// SIG undefined FUN_1478805b0(void)

undefined8 FUN_1478805b0(longlong *param_1)

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



// FUNCTION 147880672 FUN_147880672 body=47 status=ok
// SIG undefined FUN_147880672(void)

void FUN_147880672(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1478806b8 FUN_1478806b8 body=54 status=ok
// SIG undefined FUN_1478806b8(void)

undefined1 FUN_1478806b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478807b2(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147880716 FUN_147880716 body=59 status=ok
// SIG undefined FUN_147880716(void)

undefined8 FUN_147880716(longlong *param_1)

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



// FUNCTION 1478807b2 FUN_1478807b2 body=112 status=ok
// SIG undefined FUN_1478807b2(void)

longlong FUN_1478807b2(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_147880822();
  FUN_147880872(param_1 + 0x10,param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x20);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x20) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar2;
  return param_1;
}



// FUNCTION 147880822 FUN_147880822 body=79 status=ok
// SIG undefined FUN_147880822(void)

undefined8 * FUN_147880822(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478808c2(param_1,iVar1);
      FUN_147880924(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147880872 FUN_147880872 body=79 status=ok
// SIG undefined FUN_147880872(void)

undefined8 * FUN_147880872(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147880972(param_1,iVar1);
      FUN_1478809d4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478808c2 FUN_1478808c2 body=98 status=ok
// SIG undefined FUN_1478808c2(void)

void FUN_1478808c2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147880924 FUN_147880924 body=78 status=ok
// SIG undefined FUN_147880924(void)

void FUN_147880924(longlong param_1,longlong param_2,int param_3)

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
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147880972 FUN_147880972 body=98 status=ok
// SIG undefined FUN_147880972(void)

void FUN_147880972(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478809d4 FUN_1478809d4 body=78 status=ok
// SIG undefined FUN_1478809d4(void)

void FUN_1478809d4(longlong param_1,longlong param_2,int param_3)

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
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147880a24 FUN_147880a24 body=51 status=ok
// SIG undefined FUN_147880a24(void)

void FUN_147880a24(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 147880acc FUN_147880acc body=115 status=ok
// SIG undefined FUN_147880acc(void)

void FUN_147880acc(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14356e15a(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147880b44 FUN_147880b44 body=117 status=ok
// SIG undefined FUN_147880b44(void)

void FUN_147880b44(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bb3126(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147880c46 FUN_147880c46 body=115 status=ok
// SIG undefined FUN_147880c46(void)

void FUN_147880c46(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14356de06(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147880d36 FUN_147880d36 body=63 status=ok
// SIG undefined FUN_147880d36(void)

undefined8 FUN_147880d36(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/Engine/Public/Materials/MaterialExpressionCustomOutput.h",0x16,
                L"Pure virtual not implemented (%s)",
                L"UMaterialExpressionCustomOutput::GetFunctionName");
  FUN_140056680(param_2,L"GetCustomOutput");
  return param_2;
}



// FUNCTION 147880d82 FUN_147880d82 body=74 status=ok
// SIG undefined FUN_147880d82(void)

void * FUN_147880d82(undefined8 param_1,void *param_2)

{
  FUN_140033559(".\\Runtime/Engine/Public/Materials/MaterialExpressionGenericConstant.h",0xf,
                L"Pure virtual not implemented (%s)",
                L"UMaterialExpressionGenericConstant::GetConstantValue");
  memset(param_2,0,0xa8);
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0x10;
  return param_2;
}



// FUNCTION 147880e96 FUN_147880e96 body=59 status=ok
// SIG undefined FUN_147880e96(void)

undefined8 FUN_147880e96(longlong *param_1)

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



// FUNCTION 147880fb8 FUN_147880fb8 body=59 status=ok
// SIG undefined FUN_147880fb8(void)

undefined8 FUN_147880fb8(longlong *param_1)

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



// FUNCTION 147881072 FUN_147881072 body=47 status=ok
// SIG undefined FUN_147881072(void)

void FUN_147881072(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1478810b8 FUN_1478810b8 body=67 status=ok
// SIG undefined FUN_1478810b8(void)

undefined1 FUN_1478810b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147881124 FUN_147881124 body=59 status=ok
// SIG undefined FUN_147881124(void)

undefined8 FUN_147881124(longlong *param_1)

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



// FUNCTION 1478811c2 FUN_1478811c2 body=51 status=ok
// SIG undefined FUN_1478811c2(void)

void FUN_1478811c2(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147881276 FUN_147881276 body=59 status=ok
// SIG undefined FUN_147881276(void)

undefined8 FUN_147881276(longlong *param_1)

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



// FUNCTION 147881370 FUN_147881370 body=115 status=ok
// SIG undefined FUN_147881370(void)

void FUN_147881370(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14356db82(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147881530 FUN_147881530 body=132 status=ok
// SIG undefined FUN_147881530(void)

undefined1 FUN_147881530(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    bVar15 = DAT_14c950c29;
    do {
      lVar16 = *(longlong *)(param_3 + lVar17);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_14689c22e();
          lVar16 = *(longlong *)(param_3 + lVar17);
          bVar15 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar17);
      *plVar1 = lVar16;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar17);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar17);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar17);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      *(undefined4 *)(plVar1 + 5) = uVar11;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar12;
      *(undefined4 *)(plVar1 + 6) = uVar13;
      *(undefined4 *)((longlong)plVar1 + 0x34) = uVar14;
      plVar1[7] = *(longlong *)(param_3 + 0x38 + lVar17);
      lVar17 = lVar17 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478815dc FUN_1478815dc body=59 status=ok
// SIG undefined FUN_1478815dc(void)

undefined8 FUN_1478815dc(longlong *param_1)

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



// FUNCTION 1478816c2 FUN_1478816c2 body=123 status=ok
// SIG undefined FUN_1478816c2(void)

undefined1 FUN_1478816c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    bVar15 = DAT_14c950c29;
    do {
      lVar16 = *(longlong *)(param_3 + lVar17);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_14689c22e();
          lVar16 = *(longlong *)(param_3 + lVar17);
          bVar15 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar17);
      *plVar1 = lVar16;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar17);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar17);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x24 + lVar17);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar11;
      *(undefined4 *)(plVar1 + 5) = uVar12;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar13;
      *(undefined4 *)(plVar1 + 6) = uVar14;
      lVar17 = lVar17 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147881766 FUN_147881766 body=59 status=ok
// SIG undefined FUN_147881766(void)

undefined8 FUN_147881766(longlong *param_1)

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



// FUNCTION 147881830 FUN_147881830 body=101 status=ok
// SIG undefined FUN_147881830(void)

undefined1 FUN_147881830(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478818be FUN_1478818be body=59 status=ok
// SIG undefined FUN_1478818be(void)

undefined8 FUN_1478818be(longlong *param_1)

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



// FUNCTION 147881a70 FUN_147881a70 body=115 status=ok
// SIG undefined FUN_147881a70(void)

void FUN_147881a70(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14356f032(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147881bf8 FUN_147881bf8 body=115 status=ok
// SIG undefined FUN_147881bf8(void)

void FUN_147881bf8(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14356ecba(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147881dbc FUN_147881dbc body=75 status=ok
// SIG undefined FUN_147881dbc(void)

void FUN_147881dbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1417df8f2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147881e10 FUN_147881e10 body=75 status=ok
// SIG undefined FUN_147881e10(void)

void FUN_147881e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147bb32ea(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147881f50 FUN_147881f50 body=32 status=ok
// SIG undefined FUN_147881f50(void)

undefined8 FUN_147881f50(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetTangentOutput");
  return param_2;
}



// FUNCTION 147881f70 FUN_147881f70 body=32 status=ok
// SIG undefined FUN_147881f70(void)

undefined8 FUN_147881f70(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CustomEyeTangent");
  return param_2;
}



// FUNCTION 147881f94 FUN_147881f94 body=32 status=ok
// SIG undefined FUN_147881f94(void)

undefined8 FUN_147881f94(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"VertexInterpolator");
  return param_2;
}



// FUNCTION 147881fc0 FUN_147881fc0 body=42 status=ok
// SIG undefined FUN_147881fc0(void)

undefined8 FUN_147881fc0(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialFunctionInterface.h",0x6a,
                L"Pure virtual not implemented (%s)",
                L"UMaterialFunctionInterface::GetMaterialFunctionUsage");
  return 0;
}



// FUNCTION 147881fea FUN_147881fea body=42 status=ok
// SIG undefined FUN_147881fea(void)

undefined8 FUN_147881fea(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialFunctionInterface.h",0x77,
                L"Pure virtual not implemented (%s)",
                L"UMaterialFunctionInterface::ValidateFunctionUsage");
  return 0;
}



// FUNCTION 147882014 FUN_147882014 body=42 status=ok
// SIG undefined FUN_147882014(void)

undefined8 FUN_147882014(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialFunctionInterface.h",0xb7,
                L"Pure virtual not implemented (%s)",L"UMaterialFunction::GetBaseFunction");
  return 0;
}



// FUNCTION 14788203e FUN_14788203e body=42 status=ok
// SIG undefined FUN_14788203e(void)

undefined8 FUN_14788203e(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Materials/MaterialFunctionInterface.h",0xb4,
                L"Pure virtual not implemented (%s)",L"UMaterialFunction::GetBaseFunction");
  return 0;
}



// FUNCTION 1478820fa FUN_1478820fa body=59 status=ok
// SIG undefined FUN_1478820fa(void)

undefined8 FUN_1478820fa(longlong *param_1)

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



// FUNCTION 1478821ec FUN_1478821ec body=59 status=ok
// SIG undefined FUN_1478821ec(void)

undefined8 FUN_1478821ec(longlong *param_1)

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



// FUNCTION 1478822b0 FUN_1478822b0 body=75 status=ok
// SIG undefined FUN_1478822b0(void)

void FUN_1478822b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147bbebfc(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478822fc FUN_1478822fc body=38 status=ok
// SIG undefined FUN_1478822fc(void)

void FUN_1478822fc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1415a833e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147882322 FUN_147882322 body=41 status=ok
// SIG undefined FUN_147882322(void)

void FUN_147882322(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x408))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14788234c FUN_14788234c body=90 status=ok
// SIG undefined FUN_14788234c(void)

void FUN_14788234c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(*param_1 + 0x360))();
  *param_3 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478823a8 FUN_1478823a8 body=350 status=ok
// SIG undefined FUN_1478823a8(void)

void FUN_1478823a8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  FUN_147bbdeb6(param_1,&local_48,local_21,local_30);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147882508 FUN_147882508 body=42 status=ok
// SIG undefined FUN_147882508(void)

void FUN_147882508(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2f8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147882532 FUN_147882532 body=166 status=ok
// SIG undefined FUN_147882532(void)

void FUN_147882532(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  uVar1 = (**(code **)(*param_1 + 0x308))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478825da FUN_1478825da body=42 status=ok
// SIG undefined FUN_1478825da(void)

void FUN_1478825da(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x300))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147882614 FUN_147882614 body=518 status=ok
// SIG undefined FUN_147882614(void)

void FUN_147882614(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a64e42();
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
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_3c != 0;
  local_58 = local_38;
  (**(code **)(*param_1 + 0x560))(param_1,iVar2 != 0,iVar1 != 0,local_34);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147882826 FUN_147882826 body=75 status=ok
// SIG undefined FUN_147882826(void)

void FUN_147882826(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140969ec6(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147882a64 FUN_147882a64 body=42 status=ok
// SIG undefined FUN_147882a64(void)

undefined8 FUN_147882a64(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Animation/MeshDeformer.h",0x1a,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 0;
}



// FUNCTION 147882a8e FUN_147882a8e body=42 status=ok
// SIG undefined FUN_147882a8e(void)

undefined8 FUN_147882a8e(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Animation/MeshDeformer.h",0x20,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 0;
}



// FUNCTION 147882ab8 FUN_147882ab8 body=41 status=ok
// SIG undefined FUN_147882ab8(void)

void FUN_147882ab8(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Animation/MeshDeformerInstance.h",0x2c,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 147882ae2 FUN_147882ae2 body=41 status=ok
// SIG undefined FUN_147882ae2(void)

void FUN_147882ae2(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Animation/MeshDeformerInstance.h",0x2f,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 147882b0c FUN_147882b0c body=41 status=ok
// SIG undefined FUN_147882b0c(void)

void FUN_147882b0c(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Animation/MeshDeformerInstance.h",0x4e,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return;
}



// FUNCTION 147882b36 FUN_147882b36 body=42 status=ok
// SIG undefined FUN_147882b36(void)

undefined8 FUN_147882b36(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Animation/MeshDeformerInstance.h",0x51,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return 0;
}



// FUNCTION 147882b60 FUN_147882b60 body=48 status=ok
// SIG undefined FUN_147882b60(void)

undefined8 FUN_147882b60(undefined8 param_1)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Animation/MeshDeformerInstance.h",0x56,
                L"Pure virtual not implemented (%s)",&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 147882b90 FUN_147882b90 body=48 status=ok
// SIG undefined FUN_147882b90(void)

longlong FUN_147882b90(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147882bc0 FUN_147882bc0 body=48 status=ok
// SIG undefined FUN_147882bc0(void)

longlong FUN_147882bc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147882c64 FUN_147882c64 body=59 status=ok
// SIG undefined FUN_147882c64(void)

undefined8 FUN_147882c64(longlong *param_1)

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



// FUNCTION 147882d6e FUN_147882d6e body=59 status=ok
// SIG undefined FUN_147882d6e(void)

undefined8 FUN_147882d6e(longlong *param_1)

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



// FUNCTION 147882e6e FUN_147882e6e body=54 status=ok
// SIG undefined FUN_147882e6e(void)

undefined1 FUN_147882e6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147882f80(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147882ecc FUN_147882ecc body=59 status=ok
// SIG undefined FUN_147882ecc(void)

undefined8 FUN_147882ecc(longlong *param_1)

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



// FUNCTION 147882f12 FUN_147882f12 body=32 status=ok
// SIG undefined FUN_147882f12(void)

void FUN_147882f12(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1401b9894(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147882f80 FUN_147882f80 body=108 status=ok
// SIG undefined FUN_147882f80(void)

longlong FUN_147882f80(longlong param_1,longlong param_2)

{
  FUN_1447cd5a6();
  FUN_1407b2780(param_1 + 0x10,param_2 + 0x10);
  FUN_1447cd5a6(param_1 + 0x20,param_2 + 0x20);
  FUN_1447cd5a6(param_1 + 0x30,param_2 + 0x30);
  FUN_1403fbf4e(param_1 + 0x40,param_2 + 0x40);
  FUN_147882fec(param_1 + 0x50,param_2 + 0x50);
  FUN_1403fbf4e(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 147882fec FUN_147882fec body=84 status=ok
// SIG undefined FUN_147882fec(void)

undefined8 * FUN_147882fec(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147883040(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 147883040 FUN_147883040 body=90 status=ok
// SIG undefined FUN_147883040(void)

void FUN_147883040(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478830c8 FUN_1478830c8 body=47 status=ok
// SIG undefined FUN_1478830c8(void)

void FUN_1478830c8(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14788310a FUN_14788310a body=81 status=ok
// SIG undefined FUN_14788310a(void)

undefined8 FUN_14788310a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_147883214(param_2 + -0x10,param_3 + -0x10);
      FUN_14788326c(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147883178 FUN_147883178 body=59 status=ok
// SIG undefined FUN_147883178(void)

undefined8 FUN_147883178(longlong *param_1)

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



// FUNCTION 147883214 FUN_147883214 body=88 status=ok
// SIG undefined FUN_147883214(void)

undefined8 * FUN_147883214(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478832c4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14788326c FUN_14788326c body=88 status=ok
// SIG undefined FUN_14788326c(void)

undefined8 * FUN_14788326c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147883326(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478832c4 FUN_1478832c4 body=98 status=ok
// SIG undefined FUN_1478832c4(void)

void FUN_1478832c4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147883326 FUN_147883326 body=98 status=ok
// SIG undefined FUN_147883326(void)

void FUN_147883326(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14788338a FUN_14788338a body=51 status=ok
// SIG undefined FUN_14788338a(void)

void FUN_14788338a(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 147883416 FUN_147883416 body=67 status=ok
// SIG undefined FUN_147883416(void)

undefined1 FUN_147883416(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14043ea4a(param_2,param_3);
    FUN_14043ea4a(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 147883486 FUN_147883486 body=59 status=ok
// SIG undefined FUN_147883486(void)

undefined8 FUN_147883486(longlong *param_1)

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



// FUNCTION 1478834cc FUN_1478834cc body=32 status=ok
// SIG undefined FUN_1478834cc(void)

void FUN_1478834cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1401fc47e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1478835bc FUN_1478835bc body=63 status=ok
// SIG undefined FUN_1478835bc(void)

undefined1 FUN_1478835bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478836e4(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 147883624 FUN_147883624 body=59 status=ok
// SIG undefined FUN_147883624(void)

undefined8 FUN_147883624(longlong *param_1)

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



// FUNCTION 147883670 FUN_147883670 body=38 status=ok
// SIG undefined FUN_147883670(void)

void FUN_147883670(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_1401b97de(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 1478836e4 FUN_1478836e4 body=175 status=ok
// SIG undefined FUN_1478836e4(void)

longlong FUN_1478836e4(longlong param_1,longlong param_2)

{
  FUN_14043ea4a();
  FUN_14043ea4a(param_1 + 0x10,param_2 + 0x10);
  FUN_147882f80(param_1 + 0x48,param_2 + 0x48);
  FUN_1447cd5a6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_1407b2780(param_1 + 200,param_2 + 200);
  FUN_1447cd5a6(param_1 + 0xd8,param_2 + 0xd8);
  FUN_1447cd5a6(param_1 + 0xe8,param_2 + 0xe8);
  FUN_1403fbf4e(param_1 + 0xf8,param_2 + 0xf8);
  FUN_147882fec(param_1 + 0x108,param_2 + 0x108);
  FUN_1403fbf4e(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 1478837bc FUN_1478837bc body=68 status=ok
// SIG undefined FUN_1478837bc(void)

undefined8 FUN_1478837bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa0);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147883828 FUN_147883828 body=59 status=ok
// SIG undefined FUN_147883828(void)

undefined8 FUN_147883828(longlong *param_1)

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



// FUNCTION 147883990 FUN_147883990 body=76 status=ok
// SIG undefined FUN_147883990(void)

void FUN_147883990(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2);
  FUN_144a5dc74(param_2 + 2);
  FUN_144a5dc74(param_2 + 4);
  FUN_144a5dc74(param_2 + 6);
  return;
}



// FUNCTION 1478839dc FUN_1478839dc body=51 status=ok
// SIG undefined FUN_1478839dc(void)

void FUN_1478839dc(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  FUN_144a5dc74(param_2 + 0x10);
  FUN_144a5dc74(param_2 + 0x20);
  FUN_144a5dc74(param_2 + 0x30);
  return;
}



// FUNCTION 147883a2e FUN_147883a2e body=54 status=ok
// SIG undefined FUN_147883a2e(void)

undefined1 FUN_147883a2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147883b42(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147883a8c FUN_147883a8c body=59 status=ok
// SIG undefined FUN_147883a8c(void)

undefined8 FUN_147883a8c(longlong *param_1)

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



// FUNCTION 147883ad2 FUN_147883ad2 body=34 status=ok
// SIG undefined FUN_147883ad2(void)

void FUN_147883ad2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14583ec6c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147883b42 FUN_147883b42 body=213 status=ok
// SIG undefined FUN_147883b42(void)

longlong * FUN_147883b42(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  plVar1 = (longlong *)param_2[6];
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != plVar1) {
    param_1[6] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  return param_1;
}



// FUNCTION 147883c84 FUN_147883c84 body=59 status=ok
// SIG undefined FUN_147883c84(void)

undefined8 FUN_147883c84(longlong *param_1)

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



// FUNCTION 147883d26 FUN_147883d26 body=37 status=ok
// SIG undefined FUN_147883d26(void)

void FUN_147883d26(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x128);
  FUN_145c71ed4(param_2);
  return;
}



// FUNCTION 147883d6c FUN_147883d6c body=68 status=ok
// SIG undefined FUN_147883d6c(void)

undefined8 FUN_147883d6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x128);
      lVar1 = lVar1 + 0x128;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147883dd8 FUN_147883dd8 body=59 status=ok
// SIG undefined FUN_147883dd8(void)

undefined8 FUN_147883dd8(longlong *param_1)

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



// FUNCTION 147883ef2 FUN_147883ef2 body=59 status=ok
// SIG undefined FUN_147883ef2(void)

undefined8 FUN_147883ef2(longlong *param_1)

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



// FUNCTION 147883fb4 FUN_147883fb4 body=48 status=ok
// SIG undefined FUN_147883fb4(void)

void FUN_147883fb4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147883ffa FUN_147883ffa body=115 status=ok
// SIG undefined FUN_147883ffa(void)

undefined8 FUN_147883ffa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_1406fa324(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[3];
      FUN_1406fa324(param_2 + lVar3 + 0x20,param_3 + lVar3 + 0x20);
      lVar3 = lVar3 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147884096 FUN_147884096 body=59 status=ok
// SIG undefined FUN_147884096(void)

undefined8 FUN_147884096(longlong *param_1)

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



// FUNCTION 147884134 FUN_147884134 body=52 status=ok
// SIG undefined FUN_147884134(void)

void FUN_147884134(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1478841d4 FUN_1478841d4 body=59 status=ok
// SIG undefined FUN_1478841d4(void)

undefined8 FUN_1478841d4(longlong *param_1)

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



// FUNCTION 14788429e FUN_14788429e body=54 status=ok
// SIG undefined FUN_14788429e(void)

undefined1 FUN_14788429e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14788439c(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1478842fc FUN_1478842fc body=59 status=ok
// SIG undefined FUN_1478842fc(void)

undefined8 FUN_1478842fc(longlong *param_1)

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



// FUNCTION 14788439c FUN_14788439c body=105 status=ok
// SIG undefined FUN_14788439c(void)

longlong * FUN_14788439c(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  *(undefined2 *)((longlong)param_1 + 0xc) = *(undefined2 *)((longlong)param_2 + 0xc);
  *(int *)(param_1 + 1) = (int)param_2[1];
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 14788443e FUN_14788443e body=183 status=ok
// SIG undefined FUN_14788443e(void)

undefined8 FUN_14788443e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      memcpy((void *)(param_2 + lVar14),(void *)(param_3 + lVar14),0xbe);
      puVar1 = (undefined4 *)(param_3 + 0xc0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0xd0 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0xe0 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0xc0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0xd0 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0xe0 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      FUN_140820a14(param_2 + lVar14 + 0xf0,param_3 + lVar14 + 0xf0);
      *(undefined1 *)(param_2 + 0x100 + lVar14) = *(undefined1 *)(param_3 + 0x100 + lVar14);
      lVar14 = lVar14 + 0x108;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14788451e FUN_14788451e body=59 status=ok
// SIG undefined FUN_14788451e(void)

undefined8 FUN_14788451e(longlong *param_1)

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



// FUNCTION 14788456a FUN_14788456a body=47 status=ok
// SIG undefined FUN_14788456a(void)

void FUN_14788456a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 147884622 FUN_147884622 body=163 status=ok
// SIG undefined FUN_147884622(void)

undefined8 FUN_147884622(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      memcpy((void *)(param_2 + lVar14),(void *)(param_3 + lVar14),0xc0);
      puVar1 = (undefined4 *)(param_3 + 0xc0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0xd0 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0xe0 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0xc0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0xd0 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0xe0 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      FUN_140820a14(param_2 + lVar14 + 0xf0,param_3 + lVar14 + 0xf0);
      lVar14 = lVar14 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478846ee FUN_1478846ee body=59 status=ok
// SIG undefined FUN_1478846ee(void)

undefined8 FUN_1478846ee(longlong *param_1)

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



// FUNCTION 14788473a FUN_14788473a body=47 status=ok
// SIG undefined FUN_14788473a(void)

void FUN_14788473a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 14788483c FUN_14788483c body=59 status=ok
// SIG undefined FUN_14788483c(void)

undefined8 FUN_14788483c(longlong *param_1)

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



// FUNCTION 147884960 FUN_147884960 body=59 status=ok
// SIG undefined FUN_147884960(void)

undefined8 FUN_147884960(longlong *param_1)

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



// FUNCTION 147884a48 FUN_147884a48 body=54 status=ok
// SIG undefined FUN_147884a48(void)

undefined1 FUN_147884a48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147884ba8(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147884aa6 FUN_147884aa6 body=59 status=ok
// SIG undefined FUN_147884aa6(void)

undefined8 FUN_147884aa6(longlong *param_1)

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



// FUNCTION 147884aec FUN_147884aec body=34 status=ok
// SIG undefined FUN_147884aec(void)

void FUN_147884aec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_147884b5c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147884b5c FUN_147884b5c body=75 status=ok
// SIG undefined FUN_147884b5c(void)

void FUN_147884b5c(longlong *param_1)

{
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



// FUNCTION 147884ba8 FUN_147884ba8 body=69 status=ok
// SIG undefined FUN_147884ba8(void)

longlong FUN_147884ba8(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 147884bf2 FUN_147884bf2 body=75 status=ok
// SIG undefined FUN_147884bf2(void)

void FUN_147884bf2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1435849dc(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147884df6 FUN_147884df6 body=43 status=ok
// SIG undefined FUN_147884df6(void)

void FUN_147884df6(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 200))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147884e22 FUN_147884e22 body=100 status=ok
// SIG undefined FUN_147884e22(void)

void FUN_147884e22(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xc0))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147884e8c FUN_147884e8c body=41 status=ok
// SIG undefined FUN_147884e8c(void)

void FUN_147884e8c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xd0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147884eba FUN_147884eba body=41 status=ok
// SIG undefined FUN_147884eba(void)

void FUN_147884eba(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xd8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147884ee8 FUN_147884ee8 body=41 status=ok
// SIG undefined FUN_147884ee8(void)

void FUN_147884ee8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xf0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147884f16 FUN_147884f16 body=41 status=ok
// SIG undefined FUN_147884f16(void)

void FUN_147884f16(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xe0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147884f44 FUN_147884f44 body=41 status=ok
// SIG undefined FUN_147884f44(void)

void FUN_147884f44(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147884f74 FUN_147884f74 body=256 status=ok
// SIG undefined FUN_147884f74(void)

void FUN_147884f74(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x58))(param_1,puVar2,local_3c != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147885076 FUN_147885076 body=161 status=ok
// SIG undefined FUN_147885076(void)

void FUN_147885076(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x60))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14788515c FUN_14788515c body=55 status=ok
// SIG undefined FUN_14788515c(void)

void FUN_14788515c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac4f20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac4f20 = FUN_14171c317(FUN_146388129,uVar1,L"EPingType");
  }
  return;
}



// FUNCTION 147885193 FUN_147885193 body=55 status=ok
// SIG undefined FUN_147885193(void)

void FUN_147885193(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac4f38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac4f38 = FUN_14171c317(FUN_146388158,uVar1,L"EPingAverageType");
  }
  return;
}



// FUNCTION 147885364 FUN_147885364 body=75 status=ok
// SIG undefined FUN_147885364(void)

void FUN_147885364(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147bfe48a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14788545a FUN_14788545a body=45 status=ok
// SIG undefined FUN_14788545a(void)

longlong FUN_14788545a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147885536 FUN_147885536 body=59 status=ok
// SIG undefined FUN_147885536(void)

undefined8 FUN_147885536(longlong *param_1)

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



// FUNCTION 147885644 FUN_147885644 body=59 status=ok
// SIG undefined FUN_147885644(void)

undefined8 FUN_147885644(longlong *param_1)

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



// FUNCTION 14788570e FUN_14788570e body=143 status=ok
// SIG undefined FUN_14788570e(void)

undefined1 FUN_14788570e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    bVar14 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar16);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar16);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x1b + lVar16);
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x1b + lVar16);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar16);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(param_2 + lVar16);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar15 = *(longlong *)(param_3 + 0x30 + lVar16);
      if ((bVar14 & 1) != 0) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_14689c22e();
          lVar15 = *(longlong *)(param_3 + 0x30 + lVar16);
          bVar14 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar16 + 0x30) = lVar15;
      *(undefined8 *)(param_2 + lVar16 + 0x38) = *(undefined8 *)(param_3 + 0x38 + lVar16);
      lVar16 = lVar16 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478857c6 FUN_1478857c6 body=59 status=ok
// SIG undefined FUN_1478857c6(void)

undefined8 FUN_1478857c6(longlong *param_1)

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



// FUNCTION 147885868 FUN_147885868 body=67 status=ok
// SIG undefined FUN_147885868(void)

void FUN_147885868(undefined8 param_1,longlong param_2)

{
  FUN_145be65b2(param_2);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0xc049000000000000;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0x4049000000000000;
  *(undefined8 *)(param_2 + 0x68) = 0;
  return;
}



// FUNCTION 1478858ac FUN_1478858ac body=67 status=ok
// SIG undefined FUN_1478858ac(void)

void FUN_1478858ac(undefined8 param_1,longlong param_2)

{
  FUN_145be65b2(param_2);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0xc049000000000000;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0x4049000000000000;
  *(undefined8 *)(param_2 + 0x68) = 0;
  return;
}



// FUNCTION 147885908 FUN_147885908 body=177 status=ok
// SIG undefined FUN_147885908(void)

undefined1 FUN_147885908(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
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
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte bVar22;
  longlong lVar23;
  longlong lVar24;
  
  if (param_4 != 0) {
    lVar24 = 0;
    bVar22 = DAT_14c950c29;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar24);
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x10 + lVar24);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x1b + lVar24);
      uVar14 = puVar3[1];
      uVar15 = puVar3[2];
      uVar16 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x1b + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      puVar3 = (undefined4 *)(param_2 + 0x10 + lVar24);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(param_2 + lVar24);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      lVar23 = *(longlong *)(param_3 + 0x30 + lVar24);
      if ((bVar22 & 1) != 0) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_14689c22e();
          lVar23 = *(longlong *)(param_3 + 0x30 + lVar24);
          bVar22 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar24;
      *(longlong *)(lVar1 + 0x30) = lVar23;
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_3 + 0x38 + lVar24);
      puVar2 = (undefined8 *)(param_3 + 0x40 + lVar24);
      uVar17 = puVar2[1];
      puVar5 = (undefined8 *)(param_3 + 0x50 + lVar24);
      uVar18 = *puVar5;
      uVar19 = puVar5[1];
      puVar5 = (undefined8 *)(param_3 + 0x60 + lVar24);
      uVar20 = *puVar5;
      uVar21 = puVar5[1];
      *(undefined8 *)(lVar1 + 0x40) = *puVar2;
      *(undefined8 *)(lVar1 + 0x48) = uVar17;
      *(undefined8 *)(lVar1 + 0x50) = uVar18;
      *(undefined8 *)(lVar1 + 0x58) = uVar19;
      *(undefined8 *)(lVar1 + 0x60) = uVar20;
      *(undefined8 *)(lVar1 + 0x68) = uVar21;
      lVar24 = lVar24 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478859e2 FUN_1478859e2 body=59 status=ok
// SIG undefined FUN_1478859e2(void)

undefined8 FUN_1478859e2(longlong *param_1)

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



// FUNCTION 147885a84 FUN_147885a84 body=124 status=ok
// SIG undefined FUN_147885a84(void)

void FUN_147885a84(undefined8 param_1,longlong param_2)

{
  FUN_145be65b2(param_2);
  *(undefined8 *)(param_2 + 0x40) = 0xc039000000000000;
  *(undefined8 *)(param_2 + 0x48) = 0xc049000000000000;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0x4039000000000000;
  *(undefined8 *)(param_2 + 0x60) = 0xc049000000000000;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0xc039000000000000;
  *(undefined8 *)(param_2 + 0x78) = 0x4049000000000000;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0x4039000000000000;
  *(undefined8 *)(param_2 + 0x90) = 0x4049000000000000;
  *(undefined8 *)(param_2 + 0x98) = 0;
  return;
}



// FUNCTION 147885b00 FUN_147885b00 body=124 status=ok
// SIG undefined FUN_147885b00(void)

void FUN_147885b00(undefined8 param_1,longlong param_2)

{
  FUN_145be65b2(param_2);
  *(undefined8 *)(param_2 + 0x40) = 0xc039000000000000;
  *(undefined8 *)(param_2 + 0x48) = 0xc049000000000000;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0x4039000000000000;
  *(undefined8 *)(param_2 + 0x60) = 0xc049000000000000;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0xc039000000000000;
  *(undefined8 *)(param_2 + 0x78) = 0x4049000000000000;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0x4039000000000000;
  *(undefined8 *)(param_2 + 0x90) = 0x4049000000000000;
  *(undefined8 *)(param_2 + 0x98) = 0;
  return;
}



// FUNCTION 147885b94 FUN_147885b94 body=175 status=ok
// SIG undefined FUN_147885b94(void)

undefined1 FUN_147885b94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  byte bVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  
  if (param_4 != 0) {
    lVar19 = 0;
    bVar15 = DAT_14c950c29;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar19);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar19);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x1b + lVar19);
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x1b + lVar19);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar19);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar2 = (undefined4 *)(param_2 + lVar19);
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar16 = *(longlong *)(param_3 + 0x30 + lVar19);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_14689c22e();
          lVar16 = *(longlong *)(param_3 + 0x30 + lVar19);
          bVar15 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar19;
      *(longlong *)(lVar1 + 0x30) = lVar16;
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_3 + 0x38 + lVar19);
      puVar17 = (undefined8 *)(param_3 + 0x40 + lVar19);
      puVar18 = (undefined8 *)(lVar1 + 0x40);
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      lVar19 = lVar19 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147885c6c FUN_147885c6c body=59 status=ok
// SIG undefined FUN_147885c6c(void)

undefined8 FUN_147885c6c(longlong *param_1)

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



// FUNCTION 147885d6c FUN_147885d6c body=78 status=ok
// SIG undefined FUN_147885d6c(void)

void FUN_147885d6c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x18,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147885e20 FUN_147885e20 body=260 status=ok
// SIG undefined FUN_147885e20(void)

undefined8 FUN_147885e20(float *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x14);
  iVar2 = 1 << ((char)local_4c + 1U & 0x1f);
  iVar1 = 1 << ((char)local_4c + 2U & 0x1f);
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_50,iVar1);
  (**(code **)(*param_2 + 0x180))(param_2,&local_54,iVar1);
  (**(code **)(*param_2 + 0x180))(param_2,&local_58,iVar1);
  *param_1 = (float)(local_50 - iVar2);
  param_1[1] = (float)(local_54 - iVar2);
  param_1[2] = (float)(local_58 - iVar2);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)(local_58 - iVar2) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147885f78 FUN_147885f78 body=78 status=ok
// SIG undefined FUN_147885f78(void)

void FUN_147885f78(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x18,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14788602c FUN_14788602c body=282 status=ok
// SIG undefined FUN_14788602c(void)

undefined8 FUN_14788602c(float *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x18);
  iVar2 = 1 << ((char)local_4c + 1U & 0x1f);
  iVar1 = 1 << ((char)local_4c + 2U & 0x1f);
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_50,iVar1);
  (**(code **)(*param_2 + 0x180))(param_2,&local_54,iVar1);
  (**(code **)(*param_2 + 0x180))(param_2,&local_58,iVar1);
  *param_1 = (float)(local_50 - iVar2) / 10.0;
  param_1[1] = (float)(local_54 - iVar2) / 10.0;
  param_1[2] = (float)(local_58 - iVar2) / 10.0;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)(local_58 - iVar2) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14788619a FUN_14788619a body=78 status=ok
// SIG undefined FUN_14788619a(void)

void FUN_14788619a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x18,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14788624e FUN_14788624e body=282 status=ok
// SIG undefined FUN_14788624e(void)

undefined8 FUN_14788624e(float *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_4c,0x1e);
  iVar2 = 1 << ((char)local_4c + 1U & 0x1f);
  iVar1 = 1 << ((char)local_4c + 2U & 0x1f);
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_50,iVar1);
  (**(code **)(*param_2 + 0x180))(param_2,&local_54,iVar1);
  (**(code **)(*param_2 + 0x180))(param_2,&local_58,iVar1);
  *param_1 = (float)(local_50 - iVar2) / 100.0;
  param_1[1] = (float)(local_54 - iVar2) / 100.0;
  param_1[2] = (float)(local_58 - iVar2) / 100.0;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)(local_58 - iVar2) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478863bc FUN_1478863bc body=78 status=ok
// SIG undefined FUN_1478863bc(void)

void FUN_1478863bc(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x18,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478864e2 FUN_1478864e2 body=59 status=ok
// SIG undefined FUN_1478864e2(void)

undefined8 FUN_1478864e2(longlong *param_1)

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



// FUNCTION 14788663e FUN_14788663e body=59 status=ok
// SIG undefined FUN_14788663e(void)

undefined8 FUN_14788663e(longlong *param_1)

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



// FUNCTION 14788672a FUN_14788672a body=38 status=ok
// SIG undefined FUN_14788672a(void)

undefined8 FUN_14788672a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147886778 FUN_147886778 body=59 status=ok
// SIG undefined FUN_147886778(void)

undefined8 FUN_147886778(longlong *param_1)

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



// FUNCTION 147886932 FUN_147886932 body=38 status=ok
// SIG undefined FUN_147886932(void)

undefined8 FUN_147886932(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147886980 FUN_147886980 body=59 status=ok
// SIG undefined FUN_147886980(void)

undefined8 FUN_147886980(longlong *param_1)

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



// FUNCTION 147886b00 FUN_147886b00 body=38 status=ok
// SIG undefined FUN_147886b00(void)

undefined8 FUN_147886b00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147886b4e FUN_147886b4e body=59 status=ok
// SIG undefined FUN_147886b4e(void)

undefined8 FUN_147886b4e(longlong *param_1)

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



// FUNCTION 147886c6c FUN_147886c6c body=59 status=ok
// SIG undefined FUN_147886c6c(void)

undefined8 FUN_147886c6c(longlong *param_1)

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



// FUNCTION 147886d9e FUN_147886d9e body=59 status=ok
// SIG undefined FUN_147886d9e(void)

undefined8 FUN_147886d9e(longlong *param_1)

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



// FUNCTION 147886e84 FUN_147886e84 body=91 status=ok
// SIG undefined FUN_147886e84(void)

undefined1 FUN_147886e84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x10);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_14689c22e();
        lVar1 = *(longlong *)(param_3 + 0x10);
      }
    }
    param_3 = param_3 + 0x18;
    *(longlong *)(param_2 + 0x10) = lVar1;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147886f08 FUN_147886f08 body=59 status=ok
// SIG undefined FUN_147886f08(void)

undefined8 FUN_147886f08(longlong *param_1)

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



// FUNCTION 147886f4e FUN_147886f4e body=37 status=ok
// SIG undefined FUN_147886f4e(void)

void FUN_147886f4e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14788701c FUN_14788701c body=78 status=ok
// SIG undefined FUN_14788701c(void)

undefined8 FUN_14788701c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_14054c6c4();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147887092 FUN_147887092 body=59 status=ok
// SIG undefined FUN_147887092(void)

undefined8 FUN_147887092(longlong *param_1)

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



// FUNCTION 1478870d8 FUN_1478870d8 body=38 status=ok
// SIG undefined FUN_1478870d8(void)

void FUN_1478870d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14788714e FUN_14788714e body=61 status=ok
// SIG undefined FUN_14788714e(void)

void FUN_14788714e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478874c4 FUN_1478874c4 body=43 status=ok
// SIG undefined FUN_1478874c4(void)

undefined8 FUN_1478874c4(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Particles/Lifetime/ParticleModuleLifetimeBase.h",0x23,
                L"Pure virtual not implemented (%s)",
                L"UParticleModuleLifetimeBase::GetLifetimeValue");
  return 0;
}



// FUNCTION 147887584 FUN_147887584 body=59 status=ok
// SIG undefined FUN_147887584(void)

undefined8 FUN_147887584(longlong *param_1)

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



// FUNCTION 14788767e FUN_14788767e body=78 status=ok
// SIG undefined FUN_14788767e(void)

undefined8 FUN_14788767e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1478877ae(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478876f4 FUN_1478876f4 body=59 status=ok
// SIG undefined FUN_1478876f4(void)

undefined8 FUN_1478876f4(longlong *param_1)

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



// FUNCTION 14788773a FUN_14788773a body=38 status=ok
// SIG undefined FUN_14788773a(void)

void FUN_14788773a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1478877ae FUN_1478877ae body=79 status=ok
// SIG undefined FUN_1478877ae(void)

undefined8 * FUN_1478877ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478877fe(param_1,iVar1);
      FUN_147887860(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478877fe FUN_1478877fe body=98 status=ok
// SIG undefined FUN_1478877fe(void)

void FUN_1478877fe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147887860 FUN_147887860 body=78 status=ok
// SIG undefined FUN_147887860(void)

void FUN_147887860(longlong param_1,longlong param_2,int param_3)

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
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147887930 FUN_147887930 body=59 status=ok
// SIG undefined FUN_147887930(void)

undefined8 FUN_147887930(longlong *param_1)

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



// FUNCTION 147887afa FUN_147887afa body=115 status=ok
// SIG undefined FUN_147887afa(void)

void FUN_147887afa(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_147c11db2(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147887e3a FUN_147887e3a body=59 status=ok
// SIG undefined FUN_147887e3a(void)

undefined8 FUN_147887e3a(longlong *param_1)

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



// FUNCTION 147887f48 FUN_147887f48 body=78 status=ok
// SIG undefined FUN_147887f48(void)

undefined1 FUN_147887f48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_147863152();
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147887fbe FUN_147887fbe body=59 status=ok
// SIG undefined FUN_147887fbe(void)

undefined8 FUN_147887fbe(longlong *param_1)

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



// FUNCTION 147888004 FUN_147888004 body=38 status=ok
// SIG undefined FUN_147888004(void)

void FUN_147888004(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1478880fe FUN_1478880fe body=59 status=ok
// SIG undefined FUN_1478880fe(void)

undefined8 FUN_1478880fe(longlong *param_1)

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



// FUNCTION 147888280 FUN_147888280 body=128 status=ok
// SIG undefined FUN_147888280(void)

undefined8 FUN_147888280(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar3);
      if ((bVar2 & 1) != 0) {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_14689c22e();
          lVar1 = *(longlong *)(param_3 + lVar3);
          bVar2 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar1;
      memcpy((longlong *)(param_2 + lVar3) + 2,(void *)(param_3 + lVar3 + 0x10),0xb1);
      lVar3 = lVar3 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147888328 FUN_147888328 body=59 status=ok
// SIG undefined FUN_147888328(void)

undefined8 FUN_147888328(longlong *param_1)

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



// FUNCTION 147888404 FUN_147888404 body=63 status=ok
// SIG undefined FUN_147888404(void)

undefined1 FUN_147888404(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14788852e(param_2,param_3);
    param_3 = param_3 + 0x350;
    param_2 = param_2 + 0x350;
  }
  return 1;
}



// FUNCTION 14788846c FUN_14788846c body=59 status=ok
// SIG undefined FUN_14788846c(void)

undefined8 FUN_14788846c(longlong *param_1)

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


