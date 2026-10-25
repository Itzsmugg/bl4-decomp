// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145803e78 FUN_145803e78 body=7 status=ok
// SIG undefined FUN_145803e78(void)

bool FUN_145803e78(undefined8 param_1,longlong param_2)

{
  return param_2 != 0;
}



// FUNCTION 145803e80 FUN_145803e80 body=71 status=ok
// SIG undefined FUN_145803e80(void)

void FUN_145803e80(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1410ea0c4(param_2 + 1,0,0x42b40000);
  param_2[2] = 0x437a0000437a0000;
  *(undefined4 *)(param_2 + 3) = 0x42c80000;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 145803ec8 FUN_145803ec8 body=38 status=ok
// SIG undefined FUN_145803ec8(void)

undefined8 FUN_145803ec8(undefined8 param_1,int param_2)

{
  FUN_145803eee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145803eee FUN_145803eee body=210 status=ok
// SIG undefined FUN_145803eee(void)

void FUN_145803eee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14aa261a0;
  FUN_1449db362(param_1 + 0x2a);
  puVar3 = (undefined8 *)param_1[0x25];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x24];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x23];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0x22];
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
  plVar4 = (longlong *)param_1[0x20];
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
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ea8ea(param_1);
  return;
}



// FUNCTION 145803fc0 FUN_145803fc0 body=40 status=ok
// SIG undefined FUN_145803fc0(void)

undefined8 FUN_145803fc0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145803fee FUN_145803fee body=132 status=ok
// SIG undefined FUN_145803fee(void)

void FUN_145803fee(longlong param_1,int param_2)

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



// FUNCTION 14580407e FUN_14580407e body=36 status=ok
// SIG undefined FUN_14580407e(void)

undefined8 * FUN_14580407e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6bb860;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  return param_1;
}



// FUNCTION 1458040c0 FUN_1458040c0 body=325 status=ok
// SIG undefined FUN_1458040c0(void)

void FUN_1458040c0(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14580420c FUN_14580420c body=57 status=ok
// SIG undefined FUN_14580420c(void)

void FUN_14580420c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb232f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb232f0 = FUN_140002ddd(FUN_14643d541,uVar1,L"GpsTest_FlightNavTrace");
  }
  return;
}



// FUNCTION 145804245 FUN_145804245 body=74 status=ok
// SIG undefined FUN_145804245(void)

void FUN_145804245(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-6] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145804290 FUN_145804290 body=12 status=ok
// SIG undefined FUN_145804290(void)

void FUN_145804290(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145804299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14580429c FUN_14580429c body=31 status=ok
// SIG undefined FUN_14580429c(void)

undefined8 FUN_14580429c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458042bc FUN_1458042bc body=434 status=ok
// SIG undefined FUN_1458042bc(void)

undefined1 FUN_1458042bc(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410f2562(&local_40);
  puVar4 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar6 = local_40;
  }
  FUN_140002266(&local_30,L"%sPaks/%s-",puVar6,&DAT_14c764000);
  iVar5 = 0;
  if (local_28 != 0) {
    puVar4 = local_30;
    iVar5 = local_28 + -1;
  }
  cVar1 = FUN_144a791f8(param_1,puVar4,iVar5,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    FUN_1410f2562(&local_30);
    iVar5 = local_28 + -1;
    puVar4 = local_30;
    if (local_28 == 0) {
      puVar4 = &DAT_149dfb77a;
      iVar5 = 0;
    }
    cVar1 = FUN_144a791f8(param_1,puVar4,iVar5,1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar2 = 3;
    if (cVar1 == '\0') {
      FUN_1414927bc(&local_30);
      iVar5 = local_28 + -1;
      puVar4 = local_30;
      if (local_28 == 0) {
        puVar4 = &DAT_149dfb77a;
        iVar5 = 0;
      }
      cVar1 = FUN_144a791f8(param_1,puVar4,iVar5,1);
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar2 = 2;
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)FUN_14047ac8c();
        iVar5 = 0;
        if (*(int *)(puVar3 + 1) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*puVar3;
          iVar5 = *(int *)(puVar3 + 1) + -1;
        }
        uVar2 = FUN_144a791f8(param_1,puVar4,iVar5,1);
      }
    }
  }
  else {
    uVar2 = 4;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145804476 FUN_145804476 body=41 status=ok
// SIG undefined FUN_145804476(void)

void FUN_145804476(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1458044ae FUN_1458044ae body=45 status=ok
// SIG undefined FUN_1458044ae(void)

undefined8 FUN_1458044ae(undefined8 param_1,int param_2)

{
  FUN_1458044dc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1458044dc FUN_1458044dc body=57 status=ok
// SIG undefined FUN_1458044dc(void)

void FUN_1458044dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0f8fd0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145804522 FUN_145804522 body=40 status=ok
// SIG undefined FUN_145804522(void)

undefined8 FUN_145804522(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145804566 FUN_145804566 body=40 status=ok
// SIG undefined FUN_145804566(void)

undefined8 FUN_145804566(undefined8 param_1,int param_2)

{
  FUN_14075380c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580458e FUN_14580458e body=40 status=ok
// SIG undefined FUN_14580458e(void)

undefined8 FUN_14580458e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458045b6 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458045bc FUN_1458045bc body=29 status=ok
// SIG undefined FUN_1458045bc(void)

void FUN_1458045bc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1458045da FUN_1458045da body=54 status=ok
// SIG undefined FUN_1458045da(void)

undefined8 * FUN_1458045da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c1220;
  FUN_1412de826(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145804610 FUN_145804610 body=95 status=ok
// SIG undefined FUN_145804610(void)

ulonglong FUN_145804610(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145804652:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145804652;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145804676 FUN_145804676 body=40 status=ok
// SIG undefined FUN_145804676(void)

undefined8 FUN_145804676(undefined8 param_1,int param_2)

{
  FUN_14580469e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580469e FUN_14580469e body=57 status=ok
// SIG undefined FUN_14580469e(void)

void FUN_14580469e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae019b0;
  FUN_1406fc1fc(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458046d8 FUN_1458046d8 body=61 status=ok
// SIG undefined FUN_1458046d8(void)

longlong FUN_1458046d8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148aa14a4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_145804715(lVar2);
  return lVar2;
}



// FUNCTION 145804715 FUN_145804715 body=36 status=ok
// SIG undefined FUN_145804715(void)

void FUN_145804715(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 145804748 FUN_145804748 body=59 status=ok
// SIG undefined FUN_145804748(void)

undefined8 * FUN_145804748(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145804784 FUN_145804784 body=80 status=ok
// SIG undefined FUN_145804784(void)

longlong * FUN_145804784(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1410fadde(*param_1,(int)param_1[1]);
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



// FUNCTION 1458047d4 FUN_1458047d4 body=160 status=ok
// SIG undefined FUN_1458047d4(void)

void FUN_1458047d4(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x38))();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145804874 FUN_145804874 body=40 status=ok
// SIG undefined FUN_145804874(void)

undefined8 FUN_145804874(undefined8 param_1,int param_2)

{
  FUN_14580489c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580489c FUN_14580489c body=71 status=ok
// SIG undefined FUN_14580489c(void)

void FUN_14580489c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3df030;
  FUN_1410faf4f(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458048ee FUN_1458048ee body=149 status=ok
// SIG undefined FUN_1458048ee(void)

undefined8 * FUN_1458048ee(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145804984();
  *param_1 = &PTR_FUN_14acb5a70;
  *(undefined4 *)(param_1 + 0x16) = 0xaaad1006;
  param_1[0x17] = "wwise_auxilary_busses";
  param_1[0x18] = &PTR_s_auxilary_bus_14c7626f0;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  FUN_1400b22c2(local_28,"GbxAudio.AuxBus");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145804984 FUN_145804984 body=139 status=ok
// SIG undefined FUN_145804984(void)

undefined8 * FUN_145804984(undefined8 *param_1)

{
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14acb29e0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  return param_1;
}



// FUNCTION 145804a10 FUN_145804a10 body=85 status=ok
// SIG undefined FUN_145804a10(void)

void FUN_145804a10(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145804a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 145804a66 FUN_145804a66 body=122 status=ok
// SIG undefined FUN_145804a66(void)

void FUN_145804a66(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145804ae2(param_1,iVar1);
    }
    FUN_1410fbb7b((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14768b9b4(param_1,param_2,iVar1 - param_2);
    FUN_14768ba16(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145804ae2 FUN_145804ae2 body=147 status=ok
// SIG undefined FUN_145804ae2(void)

void FUN_145804ae2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 145804b80 FUN_145804b80 body=75 status=ok
// SIG undefined FUN_145804b80(void)

undefined8 * FUN_145804b80(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a77ae00;
  param_1[5] = &PTR_FUN_14a77b3e0;
  param_1[6] = &PTR_LAB_14a77b420;
  param_1[0x55] = 0x3dcccccd3dcccccd;
  param_1[0x56] = 0x3e4ccccd3dcccccd;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  return param_1;
}



// FUNCTION 145804bcc FUN_145804bcc body=24 status=ok
// SIG undefined FUN_145804bcc(void)

void FUN_145804bcc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145804be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145804be4 FUN_145804be4 body=38 status=ok
// SIG undefined FUN_145804be4(void)

undefined8 FUN_145804be4(undefined8 param_1,int param_2)

{
  FUN_145804c0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145804c0a FUN_145804c0a body=87 status=ok
// SIG undefined FUN_145804c0a(void)

void FUN_145804c0a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b400390;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145804c62(param_1 + 4);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145804c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145804c62 FUN_145804c62 body=53 status=ok
// SIG undefined FUN_145804c62(void)

void FUN_145804c62(longlong *param_1)

{
  FUN_1410fdae8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145804ca2 FUN_145804ca2 body=119 status=ok
// SIG undefined FUN_145804ca2(void)

void FUN_145804ca2(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 145804d1a FUN_145804d1a body=180 status=ok
// SIG undefined FUN_145804d1a(void)

longlong FUN_145804d1a(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_145804da6;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145804dd0(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x38 + *param_1;
LAB_145804da6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 145804dd0 FUN_145804dd0 body=291 status=ok
// SIG undefined FUN_145804dd0(void)

undefined4 * FUN_145804dd0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145804fc0(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_145804ef4(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
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
      FUN_1410feae0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145804ef4 FUN_145804ef4 body=203 status=ok
// SIG undefined FUN_145804ef4(void)

void FUN_145804ef4(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

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
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          if (*(longlong *)(puVar1 + 8) != 0) {
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
          FUN_148835242(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          break;
        }
        iVar15 = puVar1[0xc];
        uVar13 = 0;
      } while (iVar15 != -1);
      goto LAB_145804f67;
    }
  }
  uVar13 = 0;
LAB_145804f67:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 145804fc0 FUN_145804fc0 body=236 status=ok
// SIG undefined FUN_145804fc0(void)

int * FUN_145804fc0(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1458050ba FUN_1458050ba body=69 status=ok
// SIG undefined FUN_1458050ba(void)

undefined8 * FUN_1458050ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b094f10;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fee06(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145805126 FUN_145805126 body=91 status=ok
// SIG undefined FUN_145805126(void)

void FUN_145805126(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5ba88);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145805182 FUN_145805182 body=84 status=ok
// SIG undefined FUN_145805182(void)

void FUN_145805182(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)param_1 + 0x19);
  while (cVar1 == '\0') {
    FUN_145805182(param_1[2]);
    plVar2 = (longlong *)*param_1;
    plVar3 = (longlong *)param_1[0xc];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_1 + 5);
      param_1[0xc] = 0;
    }
    FUN_1400020a8(param_1);
    param_1 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 1458051f4 FUN_1458051f4 body=38 status=ok
// SIG undefined FUN_1458051f4(void)

undefined8 FUN_1458051f4(undefined8 param_1,int param_2)

{
  FUN_14580521a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580521a FUN_14580521a body=591 status=ok
// SIG undefined FUN_14580521a(void)

void FUN_14580521a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
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
  *param_1 = &PTR_FUN_149f616b0;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  plVar6 = param_1 + 0x1f;
  puVar1 = param_1 + 0x21;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = puVar1;
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar6;
  if ((iStack_54 != iVar5) || (uStack_60 != puVar1)) {
    do {
      lVar2 = *local_90;
      lVar4 = (longlong)iStack_74;
      puVar3 = *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 *)(lVar2 + lVar4 * 0x18 + 8) = 0;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar5) || ((undefined8 *)CONCAT44(uStack_7c,uStack_80) != puVar1)) ||
            (local_90 != plVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(plVar6);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1410feffa(param_1 + 0xb);
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[2] != 0) {
    plVar6 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14580546a FUN_14580546a body=51 status=ok
// SIG undefined FUN_14580546a(void)

longlong FUN_14580546a(longlong param_1,int param_2)

{
  FUN_14580549e(param_1 + 0x78);
  FUN_14580549e(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580549e FUN_14580549e body=65 status=ok
// SIG undefined FUN_14580549e(void)

void FUN_14580549e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1410ff070(param_1 + 0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458054e0 FUN_1458054e0 body=38 status=ok
// SIG undefined FUN_1458054e0(void)

undefined8 FUN_1458054e0(undefined8 param_1,int param_2)

{
  FUN_141101d54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145805506 FUN_145805506 body=49 status=ok
// SIG undefined FUN_145805506(void)

void FUN_145805506(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 145805538 FUN_145805538 body=102 status=ok
// SIG undefined FUN_145805538(void)

ulonglong FUN_145805538(longlong param_1)

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
LAB_145805581:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145805581;
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



// FUNCTION 14580559e FUN_14580559e body=107 status=ok
// SIG undefined FUN_14580559e(void)

void FUN_14580559e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      uVar3 = FUN_1410862f0();
      uVar2 = FUN_1411023a4(lVar1);
      FUN_141102374(lVar4,uVar2,uVar3,0);
    }
    FUN_14580560a(lVar4,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14580560a FUN_14580560a body=18 status=ok
// SIG undefined FUN_14580560a(void)

void FUN_14580560a(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14480f766(param_1 + 0x208);
    return;
  }
  return;
}



// FUNCTION 14580561c FUN_14580561c body=65 status=ok
// SIG undefined FUN_14580561c(void)

void FUN_14580561c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141103bac(puVar1);
  *puVar1 = &PTR_FUN_14b5f4a10;
  puVar1[5] = &PTR_FUN_14b5f4cc0;
  puVar1[10] = &PTR_FUN_14b5f4cf0;
  puVar1[0xb] = &PTR_FUN_14b5f4d20;
  return;
}



// FUNCTION 14580566c FUN_14580566c body=227 status=ok
// SIG undefined FUN_14580566c(void)

void FUN_14580566c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x20c) == '\0') {
    FUN_14580583a();
    FUN_145805c18(param_1);
    FUN_145805750(param_1);
    if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
      if (lVar2 != 0) {
        lVar3 = FUN_144a2f878();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          (**(code **)(*(longlong *)(lVar2 + 0x3c60) + 0x50))(lVar2 + 0x3c60);
          cVar1 = (**(code **)(*(longlong *)(lVar2 + 0x3c60) + 0x38))(lVar2 + 0x3c60);
          if (cVar1 != '\0') {
            FUN_145805f82(param_1,param_2,param_3,param_4);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1b8) = param_5;
    *(undefined1 *)(param_1 + 0x1bc) = 1;
    *(undefined1 *)(param_1 + 0x20c) = 1;
  }
  return;
}



// FUNCTION 145805750 FUN_145805750 body=232 status=ok
// SIG undefined FUN_145805750(void)

void FUN_145805750(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x1d8);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x1e0);
    if (plVar5 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_38 = plVar5;
    }
    local_40 = lVar4 + 8;
    local_30 = &local_19;
    local_19 = 1;
    local_28 = &local_40;
    FUN_14104af82(&local_30,param_1 + 0xf8);
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580583a FUN_14580583a body=826 status=ok
// SIG undefined FUN_14580583a(void)

void FUN_14580583a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_140fbc46a();
  lVar5 = FUN_14095dd8e(lVar5 + 0x80);
  if (((lVar5 == 0) || (lVar4 = *(longlong *)(lVar5 + 0xd0), lVar4 == 0)) ||
     (*(longlong *)(lVar5 + 0xe8) == 0)) goto LAB_145805a46;
  uVar6 = FUN_144a792bc(lVar5 + 0xe8);
  lVar5 = FUN_140bbbe48(uVar6);
  if (lVar5 == 0) goto LAB_145805a46;
  FUN_1411048fe(param_1,&local_38,lVar4,0);
  if (local_38 != 0) {
    local_48 = *(longlong **)(param_1 + 0x1d8);
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)FUN_14001cc68(0x58,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b9a2b90;
      plVar8 = plVar7 + 2;
      plVar7[8] = 0;
      plVar7[9] = 0;
      *(undefined1 *)((longlong)plVar7 + 0x24) = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 2;
      plVar7[2] = (longlong)&PTR_FUN_14b9a2ba8;
      plVar7[3] = (longlong)&PTR_LAB_14b9a2bc0;
      plVar7[10] = lVar5;
      local_48 = plVar8;
      local_40 = plVar7;
      FUN_145805b76(&local_48,plVar8);
      if (plVar7 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x1d8) = 0x10;
        plVar8 = *(longlong **)(param_1 + 0x1e0);
        if (plVar8 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x1e0) = 0;
LAB_145805b0a:
          LOCK();
          plVar7 = plVar8 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
joined_r0x000145805b41:
            if (iVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0x1d8) = plVar8;
        plVar8 = *(longlong **)(param_1 + 0x1e0);
        if (plVar7 == plVar8) {
          LOCK();
          plVar8 = plVar7 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
            plVar8 = plVar7;
            goto joined_r0x000145805b41;
          }
        }
        else {
          *(longlong **)(param_1 + 0x1e0) = plVar7;
          if (plVar8 != (longlong *)0x0) goto LAB_145805b0a;
        }
      }
      plVar8 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_40 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_48 = *(longlong **)(param_1 + 0x1d8);
    }
    plVar8 = *(longlong **)(param_1 + 0x1e0);
    if (plVar8 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      local_40 = plVar8;
    }
    FUN_141104a9c(local_38,&local_48);
    plVar7 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    plVar7 = local_30;
    *(longlong *)(param_1 + 0x1e8) = local_38;
    plVar8 = *(longlong **)(param_1 + 0x1f0);
    if (plVar8 != local_30) {
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x1f0);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x1f0) = plVar7;
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
LAB_145805a46:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145805b76 FUN_145805b76 body=162 status=ok
// SIG undefined FUN_145805b76(void)

void FUN_145805b76(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x30) != 0) && (*(longlong *)(param_2 + 0x38) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x38) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x30) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x30) = param_2;
    if (*(longlong **)(param_2 + 0x38) == plVar2) goto LAB_145805bb5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x38) = plVar2;
      goto LAB_145805bb5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x38) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145805bb5:
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
                    /* WARNING: Could not recover jumptable at 0x000145805c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145805c18 FUN_145805c18 body=872 status=ok
// SIG undefined FUN_145805c18(void)

void FUN_145805c18(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 ***pppuVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_150;
  undefined1 *local_148;
  undefined1 local_139;
  undefined8 local_138;
  longlong *local_130;
  undefined1 local_128 [40];
  undefined4 local_100;
  undefined1 local_f8 [40];
  undefined4 local_d0;
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined8 **local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar8 = FUN_140fbc46a();
  if ((longlong)*(int *)(lVar8 + 0xf0) != 0) {
    plVar13 = *(longlong **)(lVar8 + 0xe8);
    lVar8 = (longlong)*(int *)(lVar8 + 0xf0) * 0x70;
    do {
      if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong **)(param_1 + 0x10) == (longlong *)0x0))
      {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
      }
      local_c8[0] = 0;
      local_a0 = 0;
      FUN_1456bb102(local_c8,uVar9);
      FUN_1448729ea(plVar13 + 4,local_98,local_c8);
      uVar14 = FUN_144a7b41a(local_98,0x3f800000);
      lVar6 = plVar13[3];
      if (*(longlong *)(param_1 + 8) == 0) {
        uVar9 = 0;
      }
      else if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
      }
      local_128[0] = 0;
      local_100 = 0;
      FUN_1456bb102(local_128,uVar9);
      local_f8[0] = 0;
      local_d0 = 0;
      lVar10 = plVar13[1];
      if (lVar10 == 0) {
        uVar9 = FUN_14016979c();
        lVar10 = FUN_14477b664(uVar9);
        plVar13[1] = lVar10;
      }
      lVar12 = plVar13[2];
      if (lVar12 == 0) {
        if (lVar10 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          if (*plVar13 != 0) {
            plVar5 = *(longlong **)(lVar10 + 0xb8);
            if (plVar5 == (longlong *)0x0) {
LAB_145805f73:
              lVar12 = 0;
            }
            else {
              cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5);
              if (cVar7 == '\0') goto LAB_145805f73;
              uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
              lVar12 = FUN_144aff482(uVar9,plVar13);
            }
            plVar13[2] = lVar12;
          }
        }
      }
      local_148 = &local_139;
      local_150 = 1;
      local_158 = uVar14;
      FUN_140c40077(&local_138,lVar12,local_128,
                    CONCAT71((int7)((ulonglong)local_98 >> 8),(char)lVar6) & 0xffffffff);
      FUN_144a5ac3a(local_f8);
      FUN_144a5ac3a(local_128);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppuVar11 = local_98;
        if (0x18 < local_80) {
          pppuVar11 = (undefined8 ***)local_98[0];
        }
        (*pcVar4)(pppuVar11);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(local_98[0]);
      }
      FUN_144a5ac3a(local_c8);
      cVar7 = FUN_141105466(&local_138);
      if (cVar7 != '\0') {
        iVar3 = *(int *)(param_1 + 0x200);
        *(uint *)(param_1 + 0x200) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x204) < iVar3 + 1U) {
          FUN_140c41468((longlong *)(param_1 + 0x1f8),iVar3);
        }
        lVar6 = *(longlong *)(param_1 + 0x1f8);
        *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = local_138;
        *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
      }
      plVar5 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_130 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar13 = plVar13 + 0xe;
      lVar8 = lVar8 + -0x70;
    } while (lVar8 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145805f82 FUN_145805f82 body=734 status=ok
// SIG undefined FUN_145805f82(void)

void FUN_145805f82(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x20b) != '\0') goto LAB_145806123;
  lVar7 = FUN_140fbc46a();
  lVar10 = *(longlong *)(lVar7 + 0xb0);
  if (lVar10 == 0) {
    uVar8 = FUN_145c6ef2e();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(lVar7 + 0xb0) = lVar10;
  }
  lVar9 = *(longlong *)(lVar7 + 0xb8);
  if (lVar9 == 0) {
    if ((lVar10 == 0) || (*(longlong *)(lVar7 + 0xa8) == 0)) goto LAB_145806123;
    plVar11 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
      *(undefined8 *)(lVar7 + 0xb8) = 0;
      goto LAB_145806123;
    }
    uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
    lVar9 = FUN_144aff482(uVar8,(longlong *)(lVar7 + 0xa8));
    *(longlong *)(lVar7 + 0xb8) = lVar9;
    if (lVar9 == 0) goto LAB_145806123;
  }
  FUN_1405fab15(&local_60);
  *(undefined4 *)(local_60 + 8) = param_4;
  *(undefined1 *)(local_60 + 0xc) = 1;
  uVar8 = FUN_145806262(param_1);
  FUN_1405fd34a(&local_70,uVar8);
  if (local_68 != (longlong *)0x0) {
    iVar5 = (int)local_68[1];
    do {
      if (iVar5 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_68[1];
      bVar12 = iVar5 == iVar3;
      if (bVar12) {
        *(int *)(local_68 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar11 = local_68;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    lVar10 = local_70;
    if (plVar11 != (longlong *)0x0) {
      if (local_70 != 0) {
        local_80 = local_60;
        local_78 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
        }
        if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong **)(param_1 + 0x10) == (longlong *)0x0)
           ) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        }
        local_70 = param_2;
        if (param_2 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        local_68 = param_3;
        if ((param_3 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(param_3);
        }
        local_98 = &local_80;
        local_90 = 0xffffffff;
        uVar6 = FUN_140600e02(lVar10,lVar9,&local_70,uVar8);
        *(undefined4 *)(param_1 + 0x1d0) = uVar6;
        *(undefined1 *)(param_1 + 0x1d4) = 1;
      }
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_58 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_145806123:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145806262 FUN_145806262 body=22 status=ok
// SIG undefined FUN_145806262(void)

undefined8 FUN_145806262(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014580626e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x180))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145806278 FUN_145806278 body=146 status=ok
// SIG undefined FUN_145806278(void)

void FUN_145806278(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x268,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x268)) {
      uVar5 = uVar4 / 0x268 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x268,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14580630c FUN_14580630c body=37 status=ok
// SIG undefined FUN_14580630c(void)

void FUN_14580630c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145806332();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145806332 FUN_145806332 body=7 status=ok
// SIG undefined FUN_145806332(void)

undefined1 FUN_145806332(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x16c);
}



// FUNCTION 14580633a FUN_14580633a body=71 status=ok
// SIG undefined FUN_14580633a(void)

void FUN_14580633a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = FUN_1410fa0b8(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145806351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  _Dst = (void *)FUN_1458063b4(&DAT_14cbc8b10);
  memset(_Dst,0,0x218);
  FUN_1412f3376(_Dst);
  return;
}



// FUNCTION 145806382 FUN_145806382 body=49 status=ok
// SIG undefined FUN_145806382(void)

void FUN_145806382(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1458063b4(&DAT_14cbc8b10);
  memset(_Dst,0,0x218);
  FUN_1412f3376(_Dst);
  return;
}



// FUNCTION 1458063b4 FUN_1458063b4 body=94 status=ok
// SIG undefined FUN_1458063b4(void)

void FUN_1458063b4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x2180,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x43;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 145806412 FUN_145806412 body=183 status=ok
// SIG undefined FUN_145806412(void)

void FUN_145806412(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_1410ea50c();
  if (*(int *)(param_1 + 0x17c) != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    lVar3 = FUN_140391a3c(uVar2);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar4 = &PTR_FUN_14b9bfa70;
      FUN_14039144e(lVar3,puVar4);
      lVar3 = *(longlong *)(param_1 + 0x288);
      if (lVar3 != 0) {
        uVar2 = FUN_14479d2ce(param_1 + 0x30);
        lVar5 = FUN_1407f492e(uVar2);
        if (lVar5 != 0) {
          lVar6 = FUN_144a5dd5e();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            uVar1 = FUN_141107632(lVar5);
            *(undefined1 *)(lVar3 + 0x1e5) = uVar1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1458064ca FUN_1458064ca body=40 status=ok
// SIG undefined FUN_1458064ca(void)

undefined8 FUN_1458064ca(undefined8 param_1,int param_2)

{
  FUN_1458064f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458064f2 FUN_1458064f2 body=119 status=ok
// SIG undefined FUN_1458064f2(void)

void FUN_1458064f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae5c810;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145806578 FUN_145806578 body=40 status=ok
// SIG undefined FUN_145806578(void)

undefined8 FUN_145806578(undefined8 param_1,int param_2)

{
  FUN_141108dd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458065a0 FUN_1458065a0 body=137 status=ok
// SIG undefined FUN_1458065a0(void)

void FUN_1458065a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      local_18 = &local_28;
      local_20 = &LAB_14434717a;
      local_28 = param_1;
      FUN_144966906(lVar2 + 0x138);
    }
  }
  FUN_141109556(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580662a FUN_14580662a body=21 status=ok
// SIG undefined FUN_14580662a(void)

void FUN_14580662a(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x1128);
    return;
  }
  return;
}



// FUNCTION 145806640 FUN_145806640 body=48 status=ok
// SIG undefined FUN_145806640(void)

void FUN_145806640(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145806670 FUN_145806670 body=234 status=ok
// SIG undefined FUN_145806670(void)

void FUN_145806670(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1411096ca();
  if (*(longlong *)(param_1 + 0x980) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    uVar2 = FUN_140da6e0e(*(undefined8 *)(lVar3 + 0x260));
    local_28 = 0;
    FUN_14485c47a(&local_28,param_1);
    FUN_14580676a(uVar2,local_28);
    puVar1 = *(undefined8 **)(param_1 + 0x980);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x980) = 0;
      (**(code **)*puVar1)(puVar1,1);
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_1406cc378();
    }
  }
  if ((*(char *)(param_1 + 0x9b8) == '\x01') && (*(longlong *)(param_1 + 800) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580676a FUN_14580676a body=134 status=ok
// SIG undefined FUN_14580676a(void)

void FUN_14580676a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_18 = &local_20;
  FUN_1411096f8(param_1 + 8);
  lVar2 = FUN_14479d2ce(&local_20);
  if (*(longlong *)(lVar2 + 0x980) != 0) {
    lVar2 = FUN_14479d2ce(&local_20);
    puVar1 = *(undefined8 **)(lVar2 + 0x980);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0x980) = 0;
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145806800 FUN_145806800 body=40 status=ok
// SIG undefined FUN_145806800(void)

undefined8 FUN_145806800(undefined8 param_1,int param_2)

{
  FUN_140f8ceac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580682e FUN_14580682e body=57 status=ok
// SIG undefined FUN_14580682e(void)

void FUN_14580682e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21598 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21598 = FUN_140002ddd(FUN_146433843,uVar1,L"GbxBrainAspect_IsNavReachable");
  }
  return;
}



// FUNCTION 145806872 FUN_145806872 body=51 status=ok
// SIG undefined FUN_145806872(void)

undefined8 * FUN_145806872(undefined8 *param_1)

{
  FUN_140751bbe();
  *param_1 = &PTR_FUN_14b0ae830;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1458068ac FUN_1458068ac body=57 status=ok
// SIG undefined FUN_1458068ac(void)

void FUN_1458068ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba73e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba73e0 = FUN_140002ddd(FUN_1465cba18,uVar1,L"OakBodyNodeState_FirstPerson");
  }
  return;
}



// FUNCTION 1458068f0 FUN_1458068f0 body=43 status=ok
// SIG undefined FUN_1458068f0(void)

undefined8 * FUN_1458068f0(undefined8 *param_1)

{
  FUN_14110ae2a();
  *param_1 = &PTR_FUN_14a75a1c0;
  param_1[5] = &PTR_FUN_14a75a4f0;
  return param_1;
}



// FUNCTION 14580691c FUN_14580691c body=40 status=ok
// SIG undefined FUN_14580691c(void)

undefined8 FUN_14580691c(undefined8 param_1,int param_2)

{
  FUN_14110aed4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145806944 FUN_145806944 body=24 status=ok
// SIG undefined FUN_145806944(void)

void FUN_145806944(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145806958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14580695c FUN_14580695c body=38 status=ok
// SIG undefined FUN_14580695c(void)

undefined8 FUN_14580695c(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145806982 FUN_145806982 body=79 status=ok
// SIG undefined FUN_145806982(void)

void FUN_145806982(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14aa75290;
  FUN_1458069d1(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458069cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458069d1 FUN_1458069d1 body=60 status=ok
// SIG undefined FUN_1458069d1(void)

void FUN_1458069d1(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145806a0e FUN_145806a0e body=38 status=ok
// SIG undefined FUN_145806a0e(void)

undefined8 FUN_145806a0e(undefined8 param_1,int param_2)

{
  FUN_145806a34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145806a34 FUN_145806a34 body=132 status=ok
// SIG undefined FUN_145806a34(void)

void FUN_145806a34(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba26610;
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 145806ad0 FUN_145806ad0 body=31 status=ok
// SIG undefined FUN_145806ad0(void)

undefined8 FUN_145806ad0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145806af0 FUN_145806af0 body=31 status=ok
// SIG undefined FUN_145806af0(void)

undefined8 FUN_145806af0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145806b10 FUN_145806b10 body=506 status=ok
// SIG undefined FUN_145806b10(void)

void FUN_145806b10(longlong param_1,int param_2,longlong *param_3,double *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [12];
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (0 < *(int *)(param_1 + 0x408)) {
    lVar1 = param_1 + 0x40;
    lVar9 = 0;
    uVar10 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar8 = lVar1;
      }
      if (*(int *)(lVar8 + lVar9) == param_2) {
        FUN_14485c47a(local_f8,*param_3);
        lVar4 = 0;
        if (*param_3 != 0) {
          lVar4 = param_3[1];
        }
        if ((((*(longlong *)(lVar8 + 0x10 + lVar9) == lVar4) &&
             (ABS(*(double *)(lVar8 + 0x18 + lVar9) - *param_4) <= 9.999999747378752e-05)) &&
            (ABS(*(double *)(lVar8 + 0x20 + lVar9) - param_4[1]) <= 9.999999747378752e-05)) &&
           (ABS(*(double *)(lVar8 + 0x28 + lVar9) - param_4[2]) <= 9.999999747378752e-05)) {
          puVar5 = (undefined8 *)(lVar8 + lVar9);
          puVar7 = local_f8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          local_98 = *(undefined4 *)(lVar8 + 0x60 + lVar9);
          local_90 = *(undefined8 *)(lVar8 + 0x68 + lVar9);
          local_88 = *(longlong **)(lVar8 + 0x70 + lVar9);
          if (local_88 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_88 + 1) = (int)local_88[1] + 1;
            UNLOCK();
            plVar6 = local_88;
          }
          FUN_145806dca(lVar1,uVar10 & 0xffffffff);
          FUN_145806d0c(lVar1);
          FUN_145806e58(param_1,local_f8);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar6 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar3 = (int *)((longlong)plVar6 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          break;
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x78;
    } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0x408));
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145806d0c FUN_145806d0c body=67 status=ok
// SIG undefined FUN_145806d0c(void)

void FUN_145806d0c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145806d50(*(undefined4 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3cc));
  if (iVar1 == *(int *)(param_1 + 0x3cc)) {
    return;
  }
  *(int *)(param_1 + 0x3cc) = iVar1;
  FUN_148db5484(param_1,*(undefined4 *)(param_1 + 0x3c8),iVar1);
  return;
}



// FUNCTION 145806d50 FUN_145806d50 body=121 status=ok
// SIG undefined FUN_145806d50(void)

ulonglong FUN_145806d50(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x78) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x78,0);
      uVar1 = uVar1 / 0x78;
    }
  }
  return uVar1;
}



// FUNCTION 145806dca FUN_145806dca body=142 status=ok
// SIG undefined FUN_145806dca(void)

void FUN_145806dca(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  
  lVar5 = *(longlong *)(param_1 + 0x3c0);
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    lVar5 = param_1;
  }
  plVar3 = *(longlong **)(lVar5 + 0x70 + (longlong)(int)param_2 * 0x78);
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
  iVar4 = *(int *)(param_1 + 0x3c8);
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar5 + (longlong)(int)param_2 * 0x78);
    memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)(int)(~param_2 + iVar4) * 0x78);
    iVar4 = *(int *)(param_1 + 0x3c8);
  }
  *(int *)(param_1 + 0x3c8) = iVar4 + -1;
  return;
}



// FUNCTION 145806e58 FUN_145806e58 body=502 status=ok
// SIG undefined FUN_145806e58(void)

void FUN_145806e58(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_145806f45;
  uVar6 = FUN_1409f270e(param_1,*param_2);
  lVar5 = FUN_14479d2ce(param_1 + 0x20);
  uVar2 = param_2[0x10];
  uVar1 = param_2[0xc];
  local_48 = *(undefined8 *)(param_2 + 10);
  local_58 = param_2[6];
  uStack_54 = param_2[7];
  uStack_50 = param_2[8];
  uStack_4c = param_2[9];
  if (*(longlong *)(param_2 + 4) == 0) {
LAB_14580703f:
    lVar7 = 0;
  }
  else {
    cVar4 = FUN_144729dda(param_2 + 2);
    lVar7 = 0;
    if ((cVar4 != '\0') && (*(longlong **)(param_2 + 4) != (longlong *)0x0)) {
      lVar7 = (**(code **)(**(longlong **)(param_2 + 4) + 8))();
      if (lVar7 != 0) {
        lVar8 = FUN_144a6c4d8();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_145806f28;
      }
      goto LAB_14580703f;
    }
  }
LAB_145806f28:
  local_68 = uVar1;
  local_60 = uVar2;
  FUN_1409f25ec(lVar5 + 0x34a8,uVar6,lVar7,&local_58);
LAB_145806f45:
  if (*(longlong *)(param_2 + 4) != 0) {
    cVar4 = FUN_144729dda(param_2 + 2);
    if ((cVar4 != '\0') && (plVar3 = *(longlong **)(param_2 + 4), plVar3 != (longlong *)0x0)) {
      lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
      if (lVar5 != 0) {
        lVar7 = FUN_144a2f878();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
           (*(longlong *)(param_2 + 0x12) != 0)) {
          FUN_14480f766(lVar5 + 0x4e80);
        }
      }
      (**(code **)(*plVar3 + 0x30))(plVar3);
      lVar5 = FUN_14479d2ce(param_2 + 0x17);
      if (lVar5 != 0) {
        plVar9 = (longlong *)FUN_14479d2ce(param_2 + 0x17);
        (**(code **)(*plVar9 + 0x2b0))(plVar9);
      }
      if (((*(longlong *)(param_2 + 0xe) != 0) &&
          (*(char *)(*(longlong *)(param_2 + 0xe) + 0x130) == '\x01')) &&
         (*(char *)(param_2 + 0x16) == '\x01')) {
        lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145807106 FUN_145807106 body=31 status=ok
// SIG undefined FUN_145807106(void)

undefined8 FUN_145807106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145807126 FUN_145807126 body=40 status=ok
// SIG undefined FUN_145807126(void)

undefined8 FUN_145807126(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580714e thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145807162 FUN_145807162 body=31 status=ok
// SIG undefined FUN_145807162(void)

undefined8 FUN_145807162(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145807190 FUN_145807190 body=31 status=ok
// SIG undefined FUN_145807190(void)

undefined8 FUN_145807190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458071be FUN_1458071be body=31 status=ok
// SIG undefined FUN_1458071be(void)

undefined8 FUN_1458071be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458071de FUN_1458071de body=40 status=ok
// SIG undefined FUN_1458071de(void)

undefined8 FUN_1458071de(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145807206 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145807232 FUN_145807232 body=53 status=ok
// SIG undefined FUN_145807232(void)

void FUN_145807232(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x71) = 0;
  lVar1 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar1 == 0) {
    return;
  }
  FUN_145807268(lVar1 + 0xb0,0);
  return;
}



// FUNCTION 145807268 FUN_145807268 body=61 status=ok
// SIG undefined FUN_145807268(void)

void FUN_145807268(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458072a6 FUN_1458072a6 body=9 status=ok
// SIG undefined FUN_1458072a6(void)

void FUN_1458072a6(longlong param_1)

{
  FUN_1458072b0(param_1 + 0x10);
  return;
}



// FUNCTION 1458072b0 FUN_1458072b0 body=57 status=ok
// SIG undefined FUN_1458072b0(void)

void FUN_1458072b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4735a0;
  FUN_14110c090(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 1458072ea FUN_1458072ea body=40 status=ok
// SIG undefined FUN_1458072ea(void)

undefined8 FUN_1458072ea(undefined8 param_1,int param_2)

{
  FUN_145807312();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145807312 FUN_145807312 body=87 status=ok
// SIG undefined FUN_145807312(void)

void FUN_145807312(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5475d0;
  param_1[5] = &PTR_FUN_14a547900;
  plVar3 = (longlong *)param_1[0x32];
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
  FUN_14110c0da(param_1);
  return;
}



// FUNCTION 14580736a FUN_14580736a body=36 status=ok
// SIG undefined FUN_14580736a(void)

byte FUN_14580736a(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_14110c710();
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = (DAT_14c872bf0 ^ 1) & DAT_14c9ab010;
  }
  return bVar2;
}



// FUNCTION 14580738e FUN_14580738e body=43 status=ok
// SIG undefined FUN_14580738e(void)

undefined8 FUN_14580738e(undefined8 param_1,int param_2)

{
  FUN_1458073ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 1458073ba FUN_1458073ba body=222 status=ok
// SIG undefined FUN_1458073ba(void)

void FUN_1458073ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c3150;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145807498(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14580752f(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14580756d(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1458074be(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145807498 FUN_145807498 body=38 status=ok
// SIG undefined FUN_145807498(void)

void FUN_145807498(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14110ce80(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1458074be FUN_1458074be body=38 status=ok
// SIG undefined FUN_1458074be(void)

void FUN_1458074be(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458074e4(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1458074e4 FUN_1458074e4 body=75 status=ok
// SIG undefined FUN_1458074e4(void)

void FUN_1458074e4(longlong *param_1)

{
  FUN_14110cefd(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145807524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14580752f FUN_14580752f body=62 status=ok
// SIG undefined FUN_14580752f(void)

void FUN_14580752f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14580756d FUN_14580756d body=63 status=ok
// SIG undefined FUN_14580756d(void)

void FUN_14580756d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458075e0 FUN_1458075e0 body=901 status=ok
// SIG undefined FUN_1458075e0(void)

void FUN_1458075e0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14110d204();
  lVar4 = FUN_144a126be(param_1);
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0) != 0)) {
    local_40 = FUN_147473294;
    local_38 = 0;
    FUN_145807b26(&local_48,param_1);
    *(undefined8 *)(param_1 + 0x68) = local_48;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa7a80) && (FUN_144b3d300(&DAT_14caa7a80), DAT_14caa7a80 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14caa7a78 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite",1);
    _Init_thread_footer(&DAT_14caa7a80);
  }
  if (DAT_14caa7a78 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*DAT_14caa7a78 + 0xd0))();
    lVar4 = plVar5[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar1 = *plVar5;
      lVar9 = 0;
      do {
        if (((*(int *)(lVar1 + 8 + lVar9) != 0) &&
            (plVar5 = *(longlong **)(lVar1 + lVar9), plVar5 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1), cVar3 != '\0'))
        goto LAB_145807741;
        lVar9 = lVar9 + 0x10;
      } while ((longlong)(int)lVar4 * 0x10 != lVar9);
    }
    uVar6 = (**(code **)(*DAT_14caa7a78 + 0xd0))();
    local_40 = FUN_14326f364;
    local_38 = 0;
    FUN_145807a4a(uVar6,&local_48,param_1);
  }
LAB_145807741:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa7a90) && (FUN_144b3d300(&DAT_14caa7a90), DAT_14caa7a90 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14caa7a88 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"landscape.RenderNanite",1);
    _Init_thread_footer(&DAT_14caa7a90);
  }
  if (DAT_14caa7a88 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*DAT_14caa7a88 + 0xd0))();
    lVar4 = plVar5[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar1 = *plVar5;
      lVar9 = 0;
      do {
        if (((*(int *)(lVar1 + 8 + lVar9) != 0) &&
            (plVar5 = *(longlong **)(lVar1 + lVar9), plVar5 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1), cVar3 != '\0'))
        goto LAB_145807806;
        lVar9 = lVar9 + 0x10;
      } while ((longlong)(int)lVar4 * 0x10 != lVar9);
    }
    uVar6 = (**(code **)(*DAT_14caa7a88 + 0xd0))();
    local_40 = FUN_14326f364;
    local_38 = 0;
    FUN_145807a4a(uVar6,&local_48,param_1);
  }
LAB_145807806:
  uVar6 = FUN_14001cc68(0x50,0x10);
  FUN_1458079e6(uVar6);
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  uVar7 = FUN_14001cc68(0xb0,0x10);
  uVar8 = FUN_144a126be(param_1);
  FUN_145807992(uVar7,uVar8,uVar6);
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  local_40 = (code *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  pcVar2 = local_40;
  local_38 = 2;
  *(undefined ***)local_40 = &PTR_LAB_14a3d72b0;
  uVar6 = FUN_144a3f946();
  *(undefined8 *)(pcVar2 + 0x10) = uVar6;
  *(undefined ***)pcVar2 = &PTR_FUN_14a3d7240;
  FUN_145807cd6(&local_48,&local_40);
  FUN_1449db362(&local_40);
  *(undefined8 *)(param_1 + 0x80) = local_48;
  uVar6 = FUN_140b631de();
  local_40 = FUN_1412b81ec;
  local_38 = 0;
  FUN_145807bfa(uVar6,&local_48,param_1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145807966 FUN_145807966 body=43 status=ok
// SIG undefined FUN_145807966(void)

char FUN_145807966(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_144a792c0(param_1 + -0x30,0x30);
  cVar2 = '\x02';
  if (cVar1 == '\0') {
    cVar2 = (*(byte *)(param_1 + 8) ^ 1) * '\x02';
  }
  return cVar2;
}



// FUNCTION 145807992 FUN_145807992 body=83 status=ok
// SIG undefined FUN_145807992(void)

void FUN_145807992(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = param_3;
  return;
}



// FUNCTION 1458079e6 FUN_1458079e6 body=100 status=ok
// SIG undefined FUN_1458079e6(void)

undefined8 * FUN_1458079e6(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  iVar1 = DAT_14caa7b20;
  lVar2 = (longlong)(int)DAT_14caa7b20;
  DAT_14caa7b20 = DAT_14caa7b20 + 1;
  if (DAT_14caa7b24 < DAT_14caa7b20) {
    FUN_145807eda(iVar1);
  }
  *(undefined8 **)(DAT_14caa7b18 + lVar2 * 8) = param_1;
  return param_1;
}



// FUNCTION 145807a4a FUN_145807a4a body=218 status=ok
// SIG undefined FUN_145807a4a(void)

undefined8
FUN_145807a4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e170a0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a3d71d0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14110d2ba(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145807b26 FUN_145807b26 body=211 status=ok
// SIG undefined FUN_145807b26(void)

undefined8 FUN_145807b26(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14a3d7160;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a3d70f0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145807dcc(param_1,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145807bfa FUN_145807bfa body=218 status=ok
// SIG undefined FUN_145807bfa(void)

undefined8
FUN_145807bfa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a3d7320;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145807cd6 FUN_145807cd6 body=233 status=ok
// SIG undefined FUN_145807cd6(void)

undefined8 * FUN_145807cd6(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb02738,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb02740;
      lVar6 = (longlong)(int)DAT_14cb02740;
      DAT_14cb02740 = DAT_14cb02740 + 1;
      if (DAT_14cb02744 < DAT_14cb02740) {
        FUN_1447a71f6(&DAT_14cb02738,uVar3);
      }
      lVar2 = DAT_14cb02738;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb02738 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145807dcc FUN_145807dcc body=233 status=ok
// SIG undefined FUN_145807dcc(void)

undefined8 * FUN_145807dcc(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb12228,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb12230;
      lVar6 = (longlong)(int)DAT_14cb12230;
      DAT_14cb12230 = DAT_14cb12230 + 1;
      if (DAT_14cb12234 < DAT_14cb12230) {
        FUN_1447a71f6(&DAT_14cb12228,uVar3);
      }
      lVar2 = DAT_14cb12228;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb12228 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145807ec2 FUN_145807ec2 body=24 status=ok
// SIG undefined FUN_145807ec2(void)

bool FUN_145807ec2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145807eda FUN_145807eda body=140 status=ok
// SIG undefined FUN_145807eda(void)

void FUN_145807eda(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14caa7b20;
  if (param_1 <= (int)DAT_14caa7b20) {
    if (DAT_14caa7b24 == 0) {
      uVar2 = 4;
      if (4 < DAT_14caa7b20) {
        uVar2 = DAT_14caa7b20;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14caa7b20 + ((ulonglong)((longlong)(int)DAT_14caa7b20 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14caa7b24 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14caa7b18,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145807f66 FUN_145807f66 body=35 status=ok
// SIG undefined FUN_145807f66(void)

void FUN_145807f66(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145807f8a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14beb08a0;
  return;
}



// FUNCTION 145807f8a FUN_145807f8a body=48 status=ok
// SIG undefined FUN_145807f8a(void)

undefined8 * FUN_145807f8a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a79d540;
  FUN_140056680(param_1 + 5,&DAT_149e01fe8);
  return param_1;
}



// FUNCTION 145807fba FUN_145807fba body=82 status=ok
// SIG undefined FUN_145807fba(void)

longlong * FUN_145807fba(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  
  *param_1 = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  param_1[1] = param_3;
  if ((bVar1 & 1) != 0) {
    FUN_1456cec3c(param_3);
  }
  return param_1;
}



// FUNCTION 14580800c FUN_14580800c body=225 status=ok
// SIG undefined FUN_14580800c(void)

void FUN_14580800c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = *(uint *)(*param_2 + 0x50);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (uVar2 << 0x10 | uVar2 & 0xffff) + ((uVar2 & 0xffff) >> 4) +
                             ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10)) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 8) + (longlong)iVar5 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar5 * 0x80) == uVar2) {
          if (lVar6 != 0) {
            plVar3 = (longlong *)(lVar6 + 0x58);
            uVar4 = (ulonglong)*(int *)(lVar6 + 0x60);
            uVar2 = *(int *)(lVar6 + 0x60) + 1;
            *(uint *)(lVar6 + 0x60) = uVar2;
            if (uVar2 <= *(uint *)(lVar6 + 100)) goto LAB_1458080a9;
            goto LAB_14580809f;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x78);
      } while (iVar5 != -1);
    }
  }
  plVar3 = (longlong *)(param_1 + 0x70);
  uVar4 = (ulonglong)*(int *)(param_1 + 0x78);
  uVar2 = *(int *)(param_1 + 0x78) + 1;
  *(uint *)(param_1 + 0x78) = uVar2;
  if (*(uint *)(param_1 + 0x7c) < uVar2) {
LAB_14580809f:
    FUN_14110ea14(plVar3,uVar4 & 0xffffffff);
  }
LAB_1458080a9:
  lVar6 = *plVar3;
  *(longlong *)(lVar6 + uVar4 * 0x10) = *param_2;
  lVar1 = param_2[1];
  *(longlong *)(lVar6 + 8 + uVar4 * 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1458080ee FUN_1458080ee body=132 status=ok
// SIG undefined FUN_1458080ee(void)

void FUN_1458080ee(longlong param_1,int param_2)

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



// FUNCTION 14580817e FUN_14580817e body=64 status=ok
// SIG undefined FUN_14580817e(void)

undefined8 * FUN_14580817e(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14a612d20;
  param_1[6] = &PTR_FUN_14a612fc0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 1458081c4 FUN_1458081c4 body=56 status=ok
// SIG undefined FUN_1458081c4(void)

void FUN_1458081c4(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cab2628;
  if (DAT_14cab2628 != 0) {
    DAT_14cab2628 = 0;
    FUN_1458081fc(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1458081fc FUN_1458081fc body=60 status=ok
// SIG undefined FUN_1458081fc(void)

void FUN_1458081fc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_145808238(param_1 + 0x170);
  FUN_1458082c8(param_1);
  return;
}



// FUNCTION 145808238 FUN_145808238 body=53 status=ok
// SIG undefined FUN_145808238(void)

void FUN_145808238(longlong *param_1)

{
  FUN_14580826e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14580826e FUN_14580826e body=89 status=ok
// SIG undefined FUN_14580826e(void)

void FUN_14580826e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 1458082c8 FUN_1458082c8 body=58 status=ok
// SIG undefined FUN_1458082c8(void)

void FUN_1458082c8(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14110ee9b(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14580832c FUN_14580832c body=882 status=ok
// SIG undefined FUN_14580832c(void)

void FUN_14580832c(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  code *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_14580844a;
  lVar13 = *(longlong *)(param_1 + 0x180);
  iVar2 = *(int *)(lVar13 + 0x144);
  if (((longlong)iVar2 < 0) || (*(int *)(lVar13 + 0x138) <= iVar2)) {
LAB_145808393:
    bVar10 = false;
  }
  else {
    cVar11 = FUN_14486ea84(*(longlong *)(lVar13 + 0x130) + (longlong)iVar2 * 0x58 + 0x10);
    if ((cVar11 != '\0') || (*(longlong *)(param_2 + 0xac8) == 0)) goto LAB_145808393;
    FUN_143d09494(*(longlong *)(param_2 + 0xac8) + 0x4780,
                  *(longlong *)(lVar13 + 0x130) +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x144) * 0x58 + 0x10);
    cVar11 = FUN_14486ea84(*(longlong *)(lVar13 + 0x130) +
                           (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x144) * 0x58 + 0x10)
    ;
    if (cVar11 == '\0') goto LAB_145808393;
    lVar12 = *(longlong *)(lVar13 + 0x130);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x144) * 0x58;
    local_68 = lVar12 + lVar14 + 0x38;
    FUN_1457d0920(param_1,lVar12 + lVar14 + 0x10,lVar12 + 0x30 + lVar14);
    bVar10 = true;
    if (*(longlong *)(param_1 + 0x108) == 0) {
      lVar13 = FUN_14008e0ae(*(longlong *)(lVar13 + 0x130) +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x144) * 0x58 +
                             0x10);
      local_58 = FUN_14605866a;
      local_50 = 0;
      FUN_1457d0b48(lVar13 + 0x228,&local_48,param_1);
      *(undefined8 *)(param_1 + 0x108) = local_48;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x58);
  cVar11 = FUN_14486ea84(puVar1);
  if (cVar11 == '\0') {
    uVar3 = *(undefined4 *)(param_2 + 0x9c8);
    uVar4 = *(undefined4 *)(param_2 + 0x9cc);
    uVar5 = *(undefined4 *)(param_2 + 0x9d0);
    uVar6 = *(undefined4 *)(param_2 + 0x9d4);
    uVar7 = *(undefined4 *)(param_2 + 0x9dc);
    uVar8 = *(undefined4 *)(param_2 + 0x9e0);
    uVar9 = *(undefined4 *)(param_2 + 0x9e4);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x9d8);
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
    *(undefined4 *)(param_1 + 0x70) = uVar8;
    *(undefined4 *)(param_1 + 0x74) = uVar9;
    *puVar1 = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    *(undefined4 *)(param_1 + 100) = uVar6;
    cVar11 = FUN_14486ea84(puVar1);
    if (cVar11 != '\0') {
      local_68 = param_1 + 0x88;
      FUN_1457d0920(param_1,puVar1,param_1 + 0x78,param_1 + 0x80);
      bVar10 = true;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x90);
  cVar11 = FUN_14486ea84(puVar1);
  if (cVar11 == '\0') {
    uVar3 = *(undefined4 *)(param_2 + 0x9e8);
    uVar4 = *(undefined4 *)(param_2 + 0x9ec);
    uVar5 = *(undefined4 *)(param_2 + 0x9f0);
    uVar6 = *(undefined4 *)(param_2 + 0x9f4);
    uVar7 = *(undefined4 *)(param_2 + 0x9fc);
    uVar8 = *(undefined4 *)(param_2 + 0xa00);
    uVar9 = *(undefined4 *)(param_2 + 0xa04);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x9f8);
    *(undefined4 *)(param_1 + 0xa4) = uVar7;
    *(undefined4 *)(param_1 + 0xa8) = uVar8;
    *(undefined4 *)(param_1 + 0xac) = uVar9;
    *puVar1 = uVar3;
    *(undefined4 *)(param_1 + 0x94) = uVar4;
    *(undefined4 *)(param_1 + 0x98) = uVar5;
    *(undefined4 *)(param_1 + 0x9c) = uVar6;
    cVar11 = FUN_14486ea84(puVar1);
    if (cVar11 != '\0') {
      local_68 = param_1 + 0xc0;
      FUN_1457d0920(param_1,puVar1,param_1 + 0xb0,param_1 + 0xb8);
      lVar13 = *(longlong *)(param_1 + 0x20);
      bVar10 = true;
      if (lVar13 != 0) {
        lVar12 = FUN_144a2f878();
        if (((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) &&
           (*(char *)(lVar13 + 0x178) != '\x03')) {
          FUN_14008e0ae(puVar1);
          FUN_14008e0ae(puVar1);
          FUN_145e39b3e(param_1,puVar1);
          lVar13 = FUN_14008e0ae(puVar1);
          FUN_140280c1c(param_1,puVar1,*(undefined4 *)(lVar13 + 200));
        }
      }
    }
  }
  puVar1 = (undefined4 *)(param_1 + 200);
  cVar11 = FUN_14486ea84(puVar1);
  if (cVar11 == '\0') {
    uVar3 = *(undefined4 *)(param_2 + 0xa08);
    uVar4 = *(undefined4 *)(param_2 + 0xa0c);
    uVar5 = *(undefined4 *)(param_2 + 0xa10);
    uVar6 = *(undefined4 *)(param_2 + 0xa14);
    uVar7 = *(undefined4 *)(param_2 + 0xa1c);
    uVar8 = *(undefined4 *)(param_2 + 0xa20);
    uVar9 = *(undefined4 *)(param_2 + 0xa24);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xa18);
    *(undefined4 *)(param_1 + 0xdc) = uVar7;
    *(undefined4 *)(param_1 + 0xe0) = uVar8;
    *(undefined4 *)(param_1 + 0xe4) = uVar9;
    *puVar1 = uVar3;
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
    *(undefined4 *)(param_1 + 0xd0) = uVar5;
    *(undefined4 *)(param_1 + 0xd4) = uVar6;
    cVar11 = FUN_14486ea84(puVar1);
    if (cVar11 == '\0') goto LAB_145808436;
    local_68 = param_1 + 0xf8;
    FUN_1457d0920(param_1,puVar1,param_1 + 0xe8,param_1 + 0xf0);
LAB_145808685:
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_140da129a();
    }
  }
  else {
LAB_145808436:
    if (bVar10) goto LAB_145808685;
  }
  FUN_1458086a0(param_1,param_2);
LAB_14580844a:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458086a0 FUN_1458086a0 body=295 status=ok
// SIG undefined FUN_1458086a0(void)

void FUN_1458086a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x180);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x128) != 0)) {
    puVar7 = *(undefined8 **)(lVar3 + 0x120);
    puVar8 = puVar7 + (longlong)*(int *)(lVar3 + 0x128) * 2;
    do {
      plVar4 = (longlong *)puVar7[1];
      if (plVar4 == (longlong *)0x0) {
        plStack_40 = (longlong *)0x0;
LAB_145808794:
        local_48 = 0;
        FUN_140dcad76(param_2,&local_48);
      }
      else {
        local_48 = *puVar7;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) {
            plStack_40 = (longlong *)0x0;
            goto LAB_145808794;
          }
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar9);
        plStack_40 = plVar4;
        if (plVar4 == (longlong *)0x0) goto LAB_145808794;
        FUN_140dcad76(param_2,&local_48);
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar8);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458087c8 FUN_1458087c8 body=86 status=ok
// SIG undefined FUN_1458087c8(void)

void FUN_1458087c8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140a6bffe();
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN_141110854(param_2);
    FUN_140a6c1c4(param_2,lVar1);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1a0))(*(longlong **)(param_1 + 0x70),param_2);
    FUN_141110864(param_2);
    return;
  }
  return;
}



// FUNCTION 14580881e FUN_14580881e body=401 status=ok
// SIG undefined FUN_14580881e(void)

undefined4 * FUN_14580881e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145808a56(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_40 = uVar7;
  if ((uVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar7);
    uVar7 = *local_40;
  }
  bVar2 = DAT_14c950c29;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar2 & 1) != 0) && (uVar7 != 0)) {
    FUN_1456cec3c(uVar7);
  }
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_1458089b0(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145808b3e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458089b0 FUN_1458089b0 body=164 status=ok
// SIG undefined FUN_1458089b0(void)

undefined8 FUN_1458089b0(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

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
    iVar5 = FUN_141112ffe(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_145782860(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1458089d4;
    }
  }
  uVar6 = 0;
LAB_1458089d4:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145808a56 FUN_145808a56 body=231 status=ok
// SIG undefined FUN_145808a56(void)

int * FUN_145808a56(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145808b3e FUN_145808b3e body=517 status=ok
// SIG undefined FUN_145808b3e(void)

void FUN_145808b3e(longlong *param_1)

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



// FUNCTION 145808d52 FUN_145808d52 body=40 status=ok
// SIG undefined FUN_145808d52(void)

undefined8 FUN_145808d52(undefined8 param_1,int param_2)

{
  FUN_141115e4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145808d7a FUN_145808d7a body=38 status=ok
// SIG undefined FUN_145808d7a(void)

undefined8 FUN_145808d7a(undefined8 param_1,int param_2)

{
  FUN_1411160c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145808da0 FUN_145808da0 body=53 status=ok
// SIG undefined FUN_145808da0(void)

void FUN_145808da0(longlong *param_1)

{
  FUN_14580916a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145808dd6 FUN_145808dd6 body=53 status=ok
// SIG undefined FUN_145808dd6(void)

void FUN_145808dd6(longlong *param_1)

{
  FUN_141116772();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145808e0c FUN_145808e0c body=53 status=ok
// SIG undefined FUN_145808e0c(void)

void FUN_145808e0c(longlong *param_1)

{
  FUN_14580905c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145808e42 FUN_145808e42 body=53 status=ok
// SIG undefined FUN_145808e42(void)

void FUN_145808e42(longlong *param_1)

{
  FUN_145808fa8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145808e78 FUN_145808e78 body=53 status=ok
// SIG undefined FUN_145808e78(void)

void FUN_145808e78(longlong *param_1)

{
  FUN_145808f50();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145808eae FUN_145808eae body=53 status=ok
// SIG undefined FUN_145808eae(void)

void FUN_145808eae(longlong *param_1)

{
  FUN_1458090b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145808ee4 FUN_145808ee4 body=53 status=ok
// SIG undefined FUN_145808ee4(void)

void FUN_145808ee4(longlong *param_1)

{
  FUN_145809002();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145808f1a FUN_145808f1a body=53 status=ok
// SIG undefined FUN_145808f1a(void)

void FUN_145808f1a(longlong *param_1)

{
  FUN_141116576();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145808f50 FUN_145808f50 body=88 status=ok
// SIG undefined FUN_145808f50(void)

void FUN_145808f50(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145808fa8 FUN_145808fa8 body=89 status=ok
// SIG undefined FUN_145808fa8(void)

void FUN_145808fa8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145809002 FUN_145809002 body=90 status=ok
// SIG undefined FUN_145809002(void)

void FUN_145809002(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14580905c FUN_14580905c body=90 status=ok
// SIG undefined FUN_14580905c(void)

void FUN_14580905c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458090b6 FUN_1458090b6 body=178 status=ok
// SIG undefined FUN_1458090b6(void)

void FUN_1458090b6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x10;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  local_20 = 0;
  local_30 = lVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_38);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(lVar1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580916a FUN_14580916a body=353 status=ok
// SIG undefined FUN_14580916a(void)

void FUN_14580916a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458092da FUN_1458092da body=45 status=ok
// SIG undefined FUN_1458092da(void)

undefined8 FUN_1458092da(undefined8 param_1,int param_2)

{
  FUN_145809308();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 145809308 FUN_145809308 body=230 status=ok
// SIG undefined FUN_145809308(void)

void FUN_145809308(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b26be90;
  FUN_141116a9c(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1458093ee(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145809416(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458093ee FUN_1458093ee body=40 status=ok
// SIG undefined FUN_1458093ee(void)

void FUN_1458093ee(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14583f4dc(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145809416 FUN_145809416 body=75 status=ok
// SIG undefined FUN_145809416(void)

void FUN_145809416(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145809462 FUN_145809462 body=84 status=ok
// SIG undefined FUN_145809462(void)

void FUN_145809462(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140e81e1c(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001458094b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458094c4 FUN_1458094c4 body=36 status=ok
// SIG undefined FUN_1458094c4(void)

undefined8 FUN_1458094c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1458094f6 FUN_1458094f6 body=40 status=ok
// SIG undefined FUN_1458094f6(void)

undefined8 FUN_1458094f6(undefined8 param_1,int param_2)

{
  FUN_141116ac4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580952c FUN_14580952c body=40 status=ok
// SIG undefined FUN_14580952c(void)

undefined8 FUN_14580952c(undefined8 param_1,int param_2)

{
  FUN_145809554();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145809554 FUN_145809554 body=76 status=ok
// SIG undefined FUN_145809554(void)

void FUN_145809554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b748bc0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458095a0 FUN_1458095a0 body=40 status=ok
// SIG undefined FUN_1458095a0(void)

undefined8 FUN_1458095a0(undefined8 param_1,int param_2)

{
  FUN_1458095c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458095c8 FUN_1458095c8 body=45 status=ok
// SIG undefined FUN_1458095c8(void)

void FUN_1458095c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a79d540;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458095fc FUN_1458095fc body=57 status=ok
// SIG undefined FUN_1458095fc(void)

void FUN_1458095fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb935e8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb935e8 = FUN_140002ddd(FUN_146571cdc,uVar1,L"GpsGenerator_TargetingOwner");
  }
  return;
}



// FUNCTION 14580963c FUN_14580963c body=57 status=ok
// SIG undefined FUN_14580963c(void)

void FUN_14580963c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c68 = FUN_140002ddd(FUN_1465ac005,uVar1,L"GbxBrainAspect_Charge");
  }
  return;
}



// FUNCTION 145809676 FUN_145809676 body=81 status=ok
// SIG undefined FUN_145809676(void)

undefined8 * FUN_145809676(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x680);
  uVar2 = *(undefined8 *)(param_1 + 0x678);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_148812c84(param_2,iVar1);
    FUN_148812cdd(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 1458096d2 FUN_1458096d2 body=221 status=ok
// SIG undefined FUN_1458096d2(void)

undefined8 * FUN_1458096d2(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac0ff60;
  param_1[0x40] = 0;
  FUN_141118a4c(param_1 + 0x41);
  FUN_141118a4c(param_1 + 0x48);
  param_1[0x4f] = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x40] = lVar1;
  *(undefined1 *)(param_1 + 0x1f) = 2;
  lVar1 = FUN_145869c20();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1e) = 0x447a0000;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfe;
  if (*(char *)((longlong)param_1 + 0x4a) != '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x4a) = 3;
  }
  *(undefined1 *)((longlong)param_1 + 0xf9) = 4;
  return param_1;
}



// FUNCTION 1458097b0 FUN_1458097b0 body=180 status=ok
// SIG undefined FUN_1458097b0(void)

undefined8 * FUN_1458097b0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ac05a30;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_141118a4c(param_1 + 10);
  FUN_14111896e(param_1 + 0x11);
  FUN_14111896e(param_1 + 0x18);
  FUN_14111896e(param_1 + 0x20);
  FUN_14111896e(param_1 + 0x27);
  FUN_14111896e(param_1 + 0x2e);
  FUN_14111896e(param_1 + 0x35);
  param_1[0x3d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 2;
  *(undefined4 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) | 1;
  return param_1;
}



// FUNCTION 145809864 FUN_145809864 body=62 status=ok
// SIG undefined FUN_145809864(void)

undefined8 * FUN_145809864(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b539ed0;
  FUN_1458098a2(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458098a2 FUN_1458098a2 body=57 status=ok
// SIG undefined FUN_1458098a2(void)

void FUN_1458098a2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53d700;
  FUN_1410aba21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_141118b20(param_1);
  return;
}



// FUNCTION 1458098ea FUN_1458098ea body=40 status=ok
// SIG undefined FUN_1458098ea(void)

undefined8 FUN_1458098ea(undefined8 param_1,int param_2)

{
  FUN_1407538a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145809920 FUN_145809920 body=40 status=ok
// SIG undefined FUN_145809920(void)

undefined8 FUN_145809920(undefined8 param_1,int param_2)

{
  FUN_140f71356();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145809956 FUN_145809956 body=40 status=ok
// SIG undefined FUN_145809956(void)

undefined8 FUN_145809956(undefined8 param_1,int param_2)

{
  FUN_140f4522c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580997e FUN_14580997e body=351 status=ok
// SIG undefined FUN_14580997e(void)

void FUN_14580997e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar3 = FUN_1400b465c();
  plVar4 = (longlong *)FUN_14001cc68(0x108,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b98fa30;
  plVar5 = plVar4 + 2;
  FUN_145809b90(plVar5,uVar3);
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_145809af0(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 == (longlong *)0x0) goto LAB_145809a1c;
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_145809a86:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145809a1c;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x38) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_145809a1c;
      goto LAB_145809a86;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145809a1c;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_145809a1c:
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 145809af0 FUN_145809af0 body=159 status=ok
// SIG undefined FUN_145809af0(void)

void FUN_145809af0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_145809b2d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_145809b2d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145809b2d:
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
                    /* WARNING: Could not recover jumptable at 0x000145809b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145809b90 FUN_145809b90 body=178 status=ok
// SIG undefined FUN_145809b90(void)

undefined8 * FUN_145809b90(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5);
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 14580a48e FUN_14580a48e body=304 status=ok
// SIG undefined FUN_14580a48e(void)

undefined4 *
FUN_14580a48e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
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
  FUN_14111b270(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_14111b1d8(param_1,uVar4,local_48);
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
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_14111b44c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580a5c0 FUN_14580a5c0 body=512 status=ok
// SIG undefined FUN_14580a5c0(void)

void FUN_14580a5c0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong *local_d8;
  code *local_d0;
  longlong *local_c8;
  undefined2 **local_c0 [2];
  undefined2 *local_b0;
  int local_a8;
  undefined8 local_a4;
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
  longlong local_48 [2];
  code *local_38;
  ulonglong **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)FUN_140773fe2();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14111b7b0(param_1);
    lVar3 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar2);
    if (lVar3 != 0) {
      local_48[0] = 0;
      local_48[1] = 0;
      local_b0 = (undefined2 *)0x3000300000000;
      local_a8 = CONCAT13(local_a8._3_1_,0x30003);
      local_a4 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_30 = (ulonglong **)local_c0;
      local_38 = FUN_143ef2b5a;
      local_c0[0] = &local_b0;
      bifrost::account::get(*(undefined8 *)(lVar3 + 0x2b8));
      uVar7 = (ulonglong)local_b0 >> 0x18 & 0xff;
      FUN_14111b87a(&local_b0);
      if (uVar7 < 3) {
        FUN_14020fad6(local_48,&DAT_14b991b08 + *(int *)(&DAT_14b991b08 + uVar7 * 4));
      }
      FUN_140056680(&local_b0,L"Oak2");
      pwVar4 = L"InGameplay";
      if (*(char *)(param_1 + 0x98) != '\0') {
        pwVar4 = L"InMenus";
      }
      FUN_140056680(&local_38,pwVar4);
      pcVar6 = (code *)&DAT_149dfb77a;
      if ((int)local_30 != 0) {
        pcVar6 = local_38;
      }
      puVar5 = &DAT_149dfb77a;
      if (local_a8 != 0) {
        puVar5 = local_b0;
      }
      FUN_140002266(local_c0,L"%s_%s",puVar5,pcVar6);
      local_c8 = &local_e0;
      local_d8 = local_48;
      local_d0 = FUN_1441e2aee;
      local_e0 = param_1;
      FUN_14580a7c1(lVar3,local_c0);
      if (local_c0[0] != (undefined2 **)0x0) {
        FUN_1400020a8();
      }
      if (local_38 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580a7c1 FUN_14580a7c1 body=145 status=ok
// SIG undefined FUN_14580a7c1(void)

void FUN_14580a7c1(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 *local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401e7e86(local_40);
  local_60 = *param_3;
  local_48 = &local_60;
  local_58 = param_3[1];
  local_50 = FUN_143effa86;
  FUN_14482e566(local_40);
  bifrost::telemetry::activity::updateStatus(*(undefined8 *)(param_1 + 0x2b8),local_30,&local_50);
  FUN_1401e7e48(local_40);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580a854 FUN_14580a854 body=422 status=ok
// SIG undefined FUN_14580a854(void)

longlong * FUN_14580a854(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14580a92a:
    *puVar3 = &PTR_LAB_14b4e4d10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fb30;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_14151a0e0;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14580a92a;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4e4d10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fb30;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_14151a0e0;
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
  return param_1;
}



// FUNCTION 14580a9fa FUN_14580a9fa body=422 status=ok
// SIG undefined FUN_14580a9fa(void)

longlong * FUN_14580a9fa(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14580aad0:
    *puVar3 = &PTR_LAB_14b991970;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fa50;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_145e1d3a0;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14580aad0;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b991970;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fa50;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_145e1d3a0;
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
  return param_1;
}



// FUNCTION 14580aba0 FUN_14580aba0 body=422 status=ok
// SIG undefined FUN_14580aba0(void)

longlong * FUN_14580aba0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14580ac76:
    *puVar3 = &PTR_LAB_14b3e62a0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fac0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_145926eee;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14580ac76;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3e62a0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b98fac0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_145926eee;
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
  return param_1;
}



// FUNCTION 14580ad46 FUN_14580ad46 body=448 status=ok
// SIG undefined FUN_14580ad46(void)

void FUN_14580ad46(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14580af08 FUN_14580af08 body=49 status=ok
// SIG undefined FUN_14580af08(void)

void FUN_14580af08(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14111bd62(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014580af1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_140e93524(&DAT_14cb81690);
  FUN_141155a34(uVar2);
  return;
}



// FUNCTION 14580af3a FUN_14580af3a body=28 status=ok
// SIG undefined FUN_14580af3a(void)

void FUN_14580af3a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e93524(&DAT_14cb81690);
  FUN_141155a34(uVar1);
  return;
}



// FUNCTION 14580af56 FUN_14580af56 body=38 status=ok
// SIG undefined FUN_14580af56(void)

void FUN_14580af56(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014580af78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 14580afb6 FUN_14580afb6 body=199 status=ok
// SIG undefined FUN_14580afb6(void)

void FUN_14580afb6(longlong param_1,int param_2)

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



// FUNCTION 14580b07e FUN_14580b07e body=88 status=ok
// SIG undefined FUN_14580b07e(void)

void FUN_14580b07e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar1 = param_1 + 0x40;
  }
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x408) * 0x78;
    do {
      FUN_145806e58(param_1,lVar1);
      lVar1 = lVar1 + 0x78;
      lVar2 = lVar2 + -0x78;
    } while (lVar2 != 0);
  }
  FUN_14580b0d6(param_1 + 0x40,0);
  return;
}



// FUNCTION 14580b0d6 FUN_14580b0d6 body=81 status=ok
// SIG undefined FUN_14580b0d6(void)

void FUN_14580b0d6(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x3cc)) {
    lVar1 = *(longlong *)(param_1 + 0x3c0);
    if (*(longlong *)(param_1 + 0x3c0) == 0) {
      lVar1 = param_1;
    }
    FUN_14111beba(lVar1,*(undefined4 *)(param_1 + 0x3c8));
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    return;
  }
  FUN_148db5626(param_1);
  return;
}



// FUNCTION 14580b128 FUN_14580b128 body=40 status=ok
// SIG undefined FUN_14580b128(void)

undefined8 FUN_14580b128(undefined8 param_1,int param_2)

{
  FUN_14580b150();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580b150 FUN_14580b150 body=307 status=ok
// SIG undefined FUN_14580b150(void)

void FUN_14580b150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5c0bd0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x16);
  FUN_14580b283(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14580b283(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_14580b283(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14580b2eb(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14111bf7d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14580b2c2(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14580b283 FUN_14580b283 body=63 status=ok
// SIG undefined FUN_14580b283(void)

void FUN_14580b283(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14580b2c2 FUN_14580b2c2 body=41 status=ok
// SIG undefined FUN_14580b2c2(void)

void FUN_14580b2c2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14111bf08(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 14580b2eb FUN_14580b2eb body=63 status=ok
// SIG undefined FUN_14580b2eb(void)

void FUN_14580b2eb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14580b32a FUN_14580b32a body=68 status=ok
// SIG undefined FUN_14580b32a(void)

longlong FUN_14580b32a(void)

{
  longlong lVar1;
  
  if (DAT_14c952728 == 0) {
    FUN_1457eb309();
    lVar1 = FUN_14588a04e();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952728 = lVar1;
  }
  return DAT_14c952728;
}



// FUNCTION 14580b376 FUN_14580b376 body=33 status=ok
// SIG undefined FUN_14580b376(void)

void FUN_14580b376(undefined8 param_1)

{
  FUN_14580b398();
  FUN_1413d8be4(&DAT_14cb896f8,param_1);
  return;
}



// FUNCTION 14580b398 FUN_14580b398 body=1 status=ok
// SIG undefined FUN_14580b398(void)

void FUN_14580b398(void)

{
  return;
}



// FUNCTION 14580b39a FUN_14580b39a body=75 status=ok
// SIG undefined FUN_14580b39a(void)

undefined8 * FUN_14580b39a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad7f420;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14580b3e6(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580b3e6 FUN_14580b3e6 body=53 status=ok
// SIG undefined FUN_14580b3e6(void)

void FUN_14580b3e6(longlong *param_1)

{
  FUN_14580b41c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14580b41c FUN_14580b41c body=90 status=ok
// SIG undefined FUN_14580b41c(void)

void FUN_14580b41c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14580b476 FUN_14580b476 body=68 status=ok
// SIG undefined FUN_14580b476(void)

int FUN_14580b476(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1409547a8(param_1,iVar1);
  }
  FUN_1409543f7((longlong)iVar1 * 0xe0 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 14580b4ba FUN_14580b4ba body=96 status=ok
// SIG undefined FUN_14580b4ba(void)

void FUN_14580b4ba(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 14580b51a FUN_14580b51a body=49 status=ok
// SIG undefined FUN_14580b51a(void)

longlong FUN_14580b51a(void)

{
  if (DAT_14cb91e80 == 0) {
    FUN_140f50038(&DAT_14cb91e80,&PTR_s__Script_GbxUICoreGame_14b466658);
  }
  return DAT_14cb91e80;
}



// FUNCTION 14580b54c FUN_14580b54c body=71 status=ok
// SIG undefined FUN_14580b54c(void)

undefined8 * FUN_14580b54c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14580b593 FUN_14580b593 body=293 status=ok
// SIG undefined FUN_14580b593(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14580b593(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbc1970 == (longlong *)0x0) {
    _DAT_14cbc1980 = 0;
    uRam000000014cbc1988 = 0;
    _DAT_14cbc1990 = 0xffffffff;
    _DAT_14cbc1978 = &PTR_FUN_14b775140;
    _DAT_14cbc1998 = 0;
    uRam000000014cbc19a0 = 0;
    _DAT_14cbc19a8 = 0;
    uRam000000014cbc19b0 = 0;
    _DAT_14cbc19b8 = 0;
    uRam000000014cbc19c0 = 0;
    _DAT_14cbc19c8 = 0;
    uRam000000014cbc19d0 = 0;
    _DAT_14cbc19d8 = 0;
    uRam000000014cbc19e0 = 0;
    DAT_14cbc1970 = (longlong *)&DAT_14cbc1978;
  }
  plVar1 = DAT_14cbc1970;
  lVar3 = FUN_144a7b9b0(DAT_14cbc1970 + 1);
  if (lVar3 == 0) {
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_14580b5d6;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_io",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar2 = FUN_1449e3c20(plVar1);
    if (cVar2 == '\0') goto LAB_14580b5d6;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_14580b5d6:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580b6ba FUN_14580b6ba body=40 status=ok
// SIG undefined FUN_14580b6ba(void)

undefined8 FUN_14580b6ba(undefined8 param_1,int param_2)

{
  FUN_1411203da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580b6ee FUN_14580b6ee body=29 status=ok
// SIG undefined FUN_14580b6ee(void)

void FUN_14580b6ee(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    FUN_14585e15a();
    return;
  }
  return;
}



// FUNCTION 14580b70c FUN_14580b70c body=45 status=ok
// SIG undefined FUN_14580b70c(void)

undefined8 FUN_14580b70c(undefined8 param_1,int param_2)

{
  FUN_14580b73a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14580b73a FUN_14580b73a body=57 status=ok
// SIG undefined FUN_14580b73a(void)

void FUN_14580b73a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b297f30;
  FUN_14112093f(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14580b780 FUN_14580b780 body=57 status=ok
// SIG undefined FUN_14580b780(void)

void FUN_14580b780(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67b38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67b38 = FUN_140002ddd(FUN_146518949,uVar1,L"GbxSymphonicAmbientAudioProvider");
  }
  return;
}



// FUNCTION 14580b7c8 FUN_14580b7c8 body=45 status=ok
// SIG undefined FUN_14580b7c8(void)

undefined8 FUN_14580b7c8(undefined8 param_1,int param_2)

{
  FUN_14580b7f6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14580b7f6 FUN_14580b7f6 body=65 status=ok
// SIG undefined FUN_14580b7f6(void)

void FUN_14580b7f6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5f6300;
  plVar3 = (longlong *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x00014580b833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14580b838 FUN_14580b838 body=135 status=ok
// SIG undefined FUN_14580b838(void)

longlong FUN_14580b838(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14580b8c0();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_14580b885;
  }
  local_30 = param_3;
  FUN_14580bb40(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_14580b885:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x18 + 8;
}



// FUNCTION 14580b8c0 FUN_14580b8c0 body=185 status=ok
// SIG undefined FUN_14580b8c0(void)

int FUN_14580b8c0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_14088c7fa(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14580b8e9;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14580b8e9:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 14580ba76 FUN_14580ba76 body=85 status=ok
// SIG undefined FUN_14580ba76(void)

void FUN_14580ba76(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14580bacc();
  return;
}



// FUNCTION 14580bacc FUN_14580bacc body=116 status=ok
// SIG undefined FUN_14580bacc(void)

void FUN_14580bacc(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14580bb40 FUN_14580bb40 body=275 status=ok
// SIG undefined FUN_14580bb40(void)

undefined4 * FUN_14580bb40(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_14580bcda(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_14580bc54(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_14580bdbe(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580bc54 FUN_14580bc54 body=132 status=ok
// SIG undefined FUN_14580bc54(void)

undefined8 FUN_14580bc54(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_1411219b2();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_14580bacc(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_14580bc78;
    }
  }
  uVar6 = 0;
LAB_14580bc78:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580bcda FUN_14580bcda body=227 status=ok
// SIG undefined FUN_14580bcda(void)

int * FUN_14580bcda(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 14580bdbe FUN_14580bdbe body=445 status=ok
// SIG undefined FUN_14580bdbe(void)

void FUN_14580bdbe(longlong *param_1)

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
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 14580bf7c FUN_14580bf7c body=29 status=ok
// SIG undefined FUN_14580bf7c(void)

undefined8 FUN_14580bf7c(longlong param_1,undefined8 param_2)

{
  FUN_141121e90(param_2,param_1 + 8);
  return param_2;
}



// FUNCTION 14580bf9a FUN_14580bf9a body=179 status=ok
// SIG undefined FUN_14580bf9a(void)

void FUN_14580bf9a(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [16];
  char local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_58 = '\0';
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (undefined4)DAT_14c8464e0;
  uStack_3c = DAT_14c8464e0._4_4_;
  uStack_38 = (undefined4)DAT_14c8464e8;
  uStack_34 = DAT_14c8464e8._4_4_;
  local_30 = DAT_14c8464f0;
  local_28 = 0;
  local_20 = 0;
  FUN_14598cbba(&local_70);
  uVar1 = FUN_14477b072(param_1,DAT_14cb5ba68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_70);
  if (local_58 == '\x01') {
    FUN_1449db362(local_68);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580c05c FUN_14580c05c body=40 status=ok
// SIG undefined FUN_14580c05c(void)

undefined8 FUN_14580c05c(undefined8 param_1,int param_2)

{
  FUN_14580c084();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580c084 FUN_14580c084 body=71 status=ok
// SIG undefined FUN_14580c084(void)

void FUN_14580c084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b802420;
  FUN_14580c0cb(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14580c0cb FUN_14580c0cb body=41 status=ok
// SIG undefined FUN_14580c0cb(void)

void FUN_14580c0cb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1411101e0(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 14580c102 FUN_14580c102 body=31 status=ok
// SIG undefined FUN_14580c102(void)

undefined8 FUN_14580c102(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580c12c FUN_14580c12c body=2822 status=ok
// SIG undefined FUN_14580c12c(void)

longlong * FUN_14580c12c(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  uVar6 = DAT_14cb998a0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = FUN_140d012c2();
  FUN_140486538(param_2,uVar6);
  FUN_14048646a(param_2 + 0x20,uVar6,uVar5,0);
  uVar6 = DAT_14cb998a8;
  uVar5 = FUN_144a78c84();
  FUN_140486538(param_2,uVar6);
  FUN_14048646a(param_2 + 0x20,uVar6,uVar5,0);
  FUN_14580ce00(param_1,param_2);
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *param_1 = (longlong)&PTR_FUN_14b8d8810;
  param_1[0x72] = (longlong)&PTR_FUN_14b8d9090;
  param_1[0x87] = (longlong)&PTR_FUN_14b8d90f0;
  param_1[0x88] = (longlong)&PTR_FUN_14b8d9160;
  param_1[0x89] = (longlong)&PTR_FUN_14b8d91d0;
  param_1[0x8a] = (longlong)&PTR_FUN_14b8d9200;
  param_1[0x8b] = (longlong)&PTR_FUN_14b8d9230;
  param_1[0x8c] = (longlong)&PTR_FUN_14b8d9260;
  param_1[0x93] = (longlong)&PTR_FUN_14b8d9310;
  param_1[0x94] = (longlong)&PTR_FUN_14b8d9340;
  param_1[0x95] = (longlong)&PTR_FUN_14b8d9400;
  param_1[0x96] = (longlong)&PTR_FUN_14b8d9420;
  param_1[0x97] = (longlong)&PTR_FUN_14b8d9460;
  param_1[0x98] = (longlong)&PTR_FUN_14b8d9480;
  param_1[0x99] = (longlong)&PTR_FUN_14b8d94a0;
  param_1[0x9a] = (longlong)&PTR_FUN_14b8d94c0;
  param_1[0x9b] = (longlong)&PTR_FUN_14b8d94e0;
  param_1[0x9c] = (longlong)&PTR_FUN_14b8d9530;
  param_1[0x9d] = (longlong)&PTR_FUN_14b8d9550;
  param_1[0x9e] = (longlong)&PTR_FUN_14b8d95c0;
  param_1[0x9f] = (longlong)&PTR_FUN_14b8d9600;
  param_1[0xa0] = (longlong)&PTR_FUN_14b8d9650;
  param_1[0xa1] = (longlong)&PTR_FUN_14b8d96a0;
  param_1[0xa2] = (longlong)&PTR_FUN_14b8d96c0;
  param_1[0xa3] = (longlong)&PTR_FUN_14b8d97a0;
  param_1[0xa4] = (longlong)&PTR_FUN_14b8d9830;
  param_1[0xa5] = (longlong)&PTR_FUN_14b8d98a0;
  param_1[0xa6] = (longlong)&PTR_FUN_14b8d98e0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  FUN_1406524d8(param_1 + 0xcb);
  FUN_141123976(param_1 + 0x104);
  FUN_1411237f4(param_1 + 0x17a);
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  *(undefined4 *)(param_1 + 0x1a3) = 2;
  *(undefined8 *)((longlong)param_1 + 0xd1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd44) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4c) = 0x200000000;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xd54) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd61) = 0;
  *(undefined2 *)(param_1 + 0x1b2) = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  FUN_140cd77a2(param_1 + 0x1b9);
  FUN_140650534(param_1 + 0x284);
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  *(undefined4 *)(param_1 + 0x2a5) = 2;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x152c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1534) = 0;
  *(undefined2 *)(param_1 + 0x2a8) = 0xffff;
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  *(undefined2 *)(param_1 + 0x2ab) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x1567) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156b) = 1;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  *(undefined4 *)(param_1 + 0x2b1) = 2;
  param_1[0x2bf] = 0;
  param_1[0x2c0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x159c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15ec) = 0;
  param_1[699] = 0;
  param_1[700] = 0;
  param_1[0x2b9] = 0;
  param_1[0x2ba] = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b8] = 0;
  *(undefined4 *)(param_1 + 0x2c1) = 2;
  *(undefined8 *)((longlong)param_1 + 0x160c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x161c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x162c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x163c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1644) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x164c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x165c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x166c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x167c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1684) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1694) = 0;
  *(undefined8 *)((longlong)param_1 + 0x169c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16bc) = 0xffffffff00000000;
  *(undefined1 *)((longlong)param_1 + 0x16c4) = 0;
  param_1[0x2dd] = 0;
  param_1[0x2de] = 0;
  param_1[0x2db] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2da] = 0;
  *(undefined4 *)(param_1 + 0x2df) = 1;
  param_1[0x2e4] = 0;
  *(undefined1 *)(param_1 + 0x2e5) = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e8] = DAT_14c846508;
  lVar8 = DAT_14c846500;
  param_1[0x2e6] = DAT_14c8464f8;
  param_1[0x2e7] = lVar8;
  plVar9 = &DAT_14c846480;
  plVar10 = param_1 + 0x2ea;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar10 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar10 = plVar10 + 1;
  }
  param_1[0x2f8] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x2f6) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x17b4) = uVar2;
  *(undefined4 *)(param_1 + 0x2f7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x17bc) = uVar4;
  *(undefined1 *)(param_1 + 0x2fa) = 0;
  FUN_1411c3dfa(param_1 + 0x2fc);
  param_1[0x2fc] = (longlong)&PTR_FUN_14b8d99e0;
  param_1[0x348] = 0;
  *(undefined4 *)(param_1 + 0x349) = 0;
  param_1[0x340] = 0;
  param_1[0x341] = 0;
  param_1[0x342] = 0;
  param_1[0x344] = 0;
  param_1[0x345] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a54) = 0;
  param_1[0x34c] = 0;
  *(undefined4 *)(param_1 + 0x34d) = 0;
  param_1[0x352] = 0;
  *(undefined4 *)(param_1 + 0x353) = 0;
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1aa4) = 0;
  param_1[0x356] = 0;
  *(undefined4 *)(param_1 + 0x357) = 0;
  *(undefined1 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x359) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1acc) = 0;
  param_1[0x35a] = -0x407fffff40800000;
  *(undefined4 *)(param_1 + 0x35b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1adc) = 0;
  param_1[0x360] = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x35c] = 0;
  param_1[0x35d] = 0;
  param_1[0x361] = -1;
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = -1;
  param_1[0x365] = 0;
  param_1[0x366] = 0;
  param_1[0x367] = -1;
  param_1[0x368] = 0;
  param_1[0x369] = 0;
  param_1[0x36a] = -1;
  param_1[0x36b] = 0;
  param_1[0x36c] = 0;
  param_1[0x36d] = 0;
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  param_1[0x370] = 0;
  param_1[0x371] = -1;
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  param_1[0x374] = -1;
  param_1[0x375] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = -1;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = -1;
  param_1[0x37b] = 0;
  *(undefined2 *)(param_1 + 0x37c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1be4) = 0xffffffff;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  *(undefined4 *)(param_1 + 0x37f) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x385) = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  FUN_14580cd1a();
  FUN_14112365e(param_1 + 0x386);
  param_1[0x39e] = (longlong)&PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x39f) = 0;
  FUN_1405bceb4(param_1 + 0x39e);
  param_1[0x386] = (longlong)&PTR_FUN_14b8d9a90;
  param_1[0x39e] = (longlong)&PTR_LAB_14b8d9aa0;
  *(undefined2 *)(param_1 + 0x3a0) = 0;
  param_1[0x3b0] = 0;
  param_1[0x3b1] = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b3] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b8] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3bc] = 0;
  param_1[0x3bd] = 0;
  param_1[0x3a1] = 0;
  param_1[0x3a2] = 0;
  param_1[0x3a3] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a6] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3ac] = 0;
  param_1[0x3ad] = 0;
  param_1[0x3ae] = 0;
  *(undefined4 *)(param_1 + 0x3be) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1df4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e04) = 0x200000000;
  memset((void *)((longlong)param_1 + 0x1e0c),0,0xa4);
  *(undefined4 *)(param_1 + 0x3d6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1eb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ebc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1ecc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ed4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1edc) = 0;
  param_1[0x3dc] = 2;
  FUN_140f23ff6(param_1 + 0x3dd);
  param_1[0x3ff] = 0;
  param_1[0x400] = 0;
  FUN_140f26b6e(param_1 + 0x401);
  param_1[0x43a] = 0;
  param_1[0x43b] = 0;
  param_1[0x43c] = 2;
  *(undefined1 *)(param_1 + 0x43d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21ec) = 0;
  param_1[0x448] = 0;
  *(undefined4 *)(param_1 + 0x449) = 0;
  param_1[0x43f] = 0;
  param_1[0x440] = 0;
  param_1[0x441] = 0;
  param_1[0x442] = 0;
  param_1[0x443] = 0;
  param_1[0x444] = 0;
  param_1[0x445] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2254) = 0;
  param_1[0x44c] = 0;
  *(undefined4 *)(param_1 + 0x44d) = 0;
  param_1[0x44e] = 0;
  param_1[0x44f] = 0;
  param_1[0x450] = 0;
  param_1[0x451] = 0;
  param_1[0x452] = 0;
  param_1[0x453] = 0;
  FUN_1411236d4(param_1 + 0x454);
  param_1[0x496] = 0;
  param_1[0x497] = 0;
  lVar8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x498] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x499] = lVar8;
  param_1[0x49a] = DAT_14c8464f0;
  param_1[0x49d] = DAT_14c8464f0;
  lVar8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x49b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x49c] = lVar8;
  *(undefined4 *)(param_1 + 0x49e) = 0;
  lVar8 = DAT_14c8463f8;
  param_1[0x49f] = DAT_14c8463f0;
  param_1[0x4a0] = lVar8;
  param_1[0x4a1] = 0;
  param_1[0x4a2] = 0;
  param_1[0x4a3] = 0;
  param_1[0x4a4] = 0;
  param_1[0x4a5] = 0;
  param_1[0x4a6] = 0;
  param_1[0x4a7] = 0;
  param_1[0x4a8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254c) = 0;
  *(undefined4 *)(param_1 + 0x4ab) = 0;
  *(undefined1 *)((longlong)param_1 + 0x255c) = 0;
  *(undefined1 *)(param_1 + 0x4ad) = 0;
  param_1[0x4ac] = 0;
  param_1[0x4ae] = 0;
  param_1[0x4af] = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x258c) = 0;
  param_1[0x4b3] = 2;
  *(undefined2 *)(param_1 + 0x4b4) = 0;
  param_1[0x4b9] = 0;
  *(undefined4 *)(param_1 + 0x4ba) = 0;
  param_1[0x4b5] = 0;
  param_1[0x4b6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25dc) = 0;
  param_1[0x4bd] = 0;
  *(undefined4 *)(param_1 + 0x4be) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2614) = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x4c3) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x261c) = uVar2;
  *(undefined4 *)(param_1 + 0x4c4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2624) = uVar4;
  param_1[0x4c5] = DAT_14c8464f0;
  param_1[0x4c6] = 0;
  param_1[0x4c7] = 0;
  FUN_1446f470e(&local_68,L"DefaultDebugDrawComponent",1);
  uVar6 = FUN_14580cc34();
  local_70 = 0;
  local_78 = 1;
  lVar8 = FUN_14048696c(param_1,local_68,uVar6,uVar6);
  param_1[0x343] = lVar8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_14580cb78;
  lVar8 = FUN_1447210f0(param_1);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x152) != '\x02')) {
    FUN_140c4b7f0(param_1 + 0x2af,param_1 + 0x9a);
  }
  if (param_1 == (longlong *)0x0) {
LAB_14580cc2c:
    lVar7 = 0;
  }
  else {
    uVar6 = FUN_140f26902();
    lVar8 = (**(code **)(*param_1 + 0x288))(param_1,uVar6);
    if (lVar8 == 0) goto LAB_14580cc2c;
    uVar6 = FUN_140f26902();
    lVar7 = FUN_144718840(lVar8,uVar6);
    if (lVar8 == lVar7) goto LAB_14580cc2c;
  }
  FUN_140f269e8(param_1 + 0x401,lVar7);
LAB_14580cb78:
  if (param_1[0x85] != 0) {
    pbVar1 = (byte *)(param_1[0x85] + 0x2d4);
    *pbVar1 = *pbVar1 & 0xfe;
    *(byte *)(param_1[0x85] + 0x2d4) = *(byte *)(param_1[0x85] + 0x2d4) & 0xbf;
    lVar8 = param_1[0x85];
    if (lVar8 != 0) {
      lVar7 = FUN_144a78c84();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        FUN_140d52e40(lVar8,&DAT_14cbc2c58,1,1);
        uVar6 = FUN_141270945();
        FUN_141270910(lVar8,uVar6);
      }
    }
  }
  FUN_141323f6e(param_1 + 0x2bf,param_2);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580cc34 FUN_14580cc34 body=228 status=ok
// SIG undefined FUN_14580cc34(void)

longlong FUN_14580cc34(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8a18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_1474898c7;
    local_40 = FUN_14632a11b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/ChaosSolverEngine",L"ChaosDebugDrawComponent",&DAT_14caa8a18,
                  &DAT_1474898c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8a18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580cd1a FUN_14580cd1a body=228 status=ok
// SIG undefined FUN_14580cd1a(void)

longlong FUN_14580cd1a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbcfe0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465f0cd8;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_148ca0a5d;
    local_40 = &LAB_14660d7cc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVehicleSubsystem",&DAT_14cbbcfe0,&DAT_148ca0a5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbcfe0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580ce00 FUN_14580ce00 body=435 status=ok
// SIG undefined FUN_14580ce00(void)

undefined8 * FUN_14580ce00(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_140f27f16();
  *param_1 = &PTR_FUN_14b520370;
  param_1[0x72] = &PTR_FUN_14b520b20;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  uVar2 = DAT_14cb998a8;
  uVar3 = FUN_144a74fb4();
  plVar4 = (longlong *)FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  param_1[0x85] = plVar4;
  (**(code **)(*plVar4 + 0x728))(plVar4,DAT_14cacfd68,1);
  *(byte *)(param_1[0x85] + 0x418) = *(byte *)(param_1[0x85] + 0x418) & 0xfe;
  *(byte *)(param_1[0x85] + 1099) = *(byte *)(param_1[0x85] + 1099) | 0x20;
  *(byte *)(param_1[0x85] + 1099) = *(byte *)(param_1[0x85] + 1099) | 1;
  FUN_14127091c(param_1[0x85],1);
  FUN_140381810(param_1[0x85],0);
  lVar6 = param_1[0x85];
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_1[0x85];
    }
  }
  param_1[0x39] = lVar6;
  uVar2 = DAT_14cb998a0;
  uVar3 = FUN_141123890();
  uVar5 = FUN_140859b94();
  lVar6 = FUN_14048696c(param_1,uVar2,uVar5,uVar3,1,0);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  param_1[0x86] = lVar6;
  FUN_140b361ee(lVar6,1);
  lVar6 = param_1[0x85];
  lVar1 = param_1[0x86];
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_1[0x85];
    }
  }
  *(longlong *)(lVar1 + 0x110) = lVar6;
  return param_1;
}



// FUNCTION 14580cfb4 FUN_14580cfb4 body=146 status=ok
// SIG undefined FUN_14580cfb4(void)

void FUN_14580cfb4(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14580d048();
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_140338614();
    lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_140338614();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar2 != lVar3) goto LAB_14580d00b;
    }
  }
  lVar3 = 0;
LAB_14580d00b:
  FUN_1412d3686(&local_28,lVar3);
  *(undefined4 *)(param_1 + 0xc70) = local_28;
  *(undefined4 *)(param_1 + 0xc74) = uStack_24;
  *(undefined4 *)(param_1 + 0xc78) = uStack_20;
  *(undefined4 *)(param_1 + 0xc7c) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580d048 FUN_14580d048 body=85 status=ok
// SIG undefined FUN_14580d048(void)

void FUN_14580d048(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123d8e(param_1 + 0x9a0,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0x9d0,param_2,uVar1);
  return;
}



// FUNCTION 14580d09e FUN_14580d09e body=26 status=ok
// SIG undefined FUN_14580d09e(void)

void FUN_14580d09e(undefined8 param_1)

{
  FUN_1411250a2();
  FUN_140fa7ee4(param_1);
  return;
}



// FUNCTION 14580d0b8 FUN_14580d0b8 body=67 status=ok
// SIG undefined FUN_14580d0b8(void)

void FUN_14580d0b8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1459b63d6(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140e01c5c(param_1);
    return;
  }
  FUN_14580d0fc(param_1);
  FUN_1459b63d6(param_1,0);
  return;
}


