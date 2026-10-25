// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14663647a FUN_14663647a body=40 status=ok
// SIG undefined FUN_14663647a(void)

undefined8 FUN_14663647a(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466364a2 FUN_1466364a2 body=72 status=ok
// SIG undefined FUN_1466364a2(void)

undefined8 * FUN_1466364a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ecae0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466364ea FUN_1466364ea body=29 status=ok
// SIG undefined FUN_1466364ea(void)

undefined8 FUN_1466364ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146636508 FUN_146636508 body=428 status=ok
// SIG undefined FUN_146636508(void)

longlong * FUN_146636508(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_1466365e8:
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
    *puVar5 = &PTR_FUN_14b9a1e00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1466365e8;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
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
    *puVar5 = &PTR_FUN_14b9a1e00;
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



// FUNCTION 1466366b4 FUN_1466366b4 body=125 status=ok
// SIG undefined FUN_1466366b4(void)

void FUN_1466366b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146636732 FUN_146636732 body=50 status=ok
// SIG undefined FUN_146636732(void)

void FUN_146636732(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14024cfe8(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146636760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146636764 FUN_146636764 body=29 status=ok
// SIG undefined FUN_146636764(void)

undefined8 FUN_146636764(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146636782 FUN_146636782 body=26 status=ok
// SIG undefined FUN_146636782(void)

bool FUN_146636782(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663679c FUN_14663679c body=24 status=ok
// SIG undefined FUN_14663679c(void)

bool FUN_14663679c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466367b4 FUN_1466367b4 body=68 status=ok
// SIG undefined FUN_1466367b4(void)

undefined8 * FUN_1466367b4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a3390;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466367f8 FUN_1466367f8 body=118 status=ok
// SIG undefined FUN_1466367f8(void)

void FUN_1466367f8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a3390;
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



// FUNCTION 14663686e FUN_14663686e body=85 status=ok
// SIG undefined FUN_14663686e(void)

void FUN_14663686e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a3410;
  return;
}



// FUNCTION 1466368c4 FUN_1466368c4 body=29 status=ok
// SIG undefined FUN_1466368c4(void)

undefined8 FUN_1466368c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466368e2 FUN_1466368e2 body=29 status=ok
// SIG undefined FUN_1466368e2(void)

bool FUN_1466368e2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146636900 FUN_146636900 body=26 status=ok
// SIG undefined FUN_146636900(void)

bool FUN_146636900(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663691a FUN_14663691a body=24 status=ok
// SIG undefined FUN_14663691a(void)

bool FUN_14663691a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146636932 FUN_146636932 body=428 status=ok
// SIG undefined FUN_146636932(void)

longlong * FUN_146636932(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_146636a12:
    *puVar5 = &PTR_LAB_14b403f60;
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
    *puVar5 = &PTR_FUN_14b9a35f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146636a12;
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
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b403f60;
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
    *puVar5 = &PTR_FUN_14b9a35f0;
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



// FUNCTION 146636ade FUN_146636ade body=66 status=ok
// SIG undefined FUN_146636ade(void)

undefined8 * FUN_146636ade(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a35f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146636b38 FUN_146636b38 body=254 status=ok
// SIG undefined FUN_146636b38(void)

undefined8
FUN_146636b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9a5780;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146636c38 FUN_146636c38 body=112 status=ok
// SIG undefined FUN_146636c38(void)

void FUN_146636c38(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c4ea();
  local_18 = 0;
  local_28 = 0;
  local_20 = 1;
  local_38 = L"DynamicNexusData";
  local_30 = &DAT_100000014;
  FUN_140c2c993(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146636caa FUN_146636caa body=100 status=ok
// SIG undefined FUN_146636caa(void)

void FUN_146636caa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  if (*(longlong *)(param_1 + 0x2640) != lVar1) {
    *(undefined8 *)(param_1 + 0x2650) = 0;
  }
  *(longlong *)(param_1 + 0x2640) = lVar1;
  if (*(longlong *)(param_1 + 0x2658) == lVar1) {
    iVar2 = *(int *)(param_1 + 0x2648);
    if (*(int *)(param_1 + 0x2660) == iVar2) goto LAB_146636cef;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2648);
  }
  *(longlong *)(param_1 + 0x2658) = lVar1;
  *(int *)(param_1 + 0x2660) = iVar2;
  *(undefined8 *)(param_1 + 0x2668) = 0;
LAB_146636cef:
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x14);
  return;
}



// FUNCTION 146636d1a FUN_146636d1a body=241 status=ok
// SIG undefined FUN_146636d1a(void)

undefined8 FUN_146636d1a(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_140880c0c();
  param_1[0x27] = 0;
  *(undefined4 *)((longlong)param_1 + 0x12e) = 0;
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar2 != 0) {
    if (*(char *)((longlong)param_1 + 300) == '\0') {
      cVar1 = FUN_1408814c2(param_1,&DAT_14cbd42e0,0);
      if (cVar1 != '\0') goto LAB_146636d4b;
    }
    cVar1 = FUN_1408838b6(param_1,lVar2,1,1);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x12d) = 1;
      lVar2 = FUN_1447210f0(param_1[7]);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x6d0);
      }
      param_1[0x27] = lVar2;
      if ((*(char *)((longlong)param_1 + 0x12e) == '\0') && (param_1[0x16] != 0)) {
        FUN_1407ab98c(param_1[0x16],1,1);
      }
    }
  }
LAB_146636d4b:
  if (((*(char *)((longlong)param_1 + 0x12d) == '\0') &&
      (*(char *)((longlong)param_1 + 0x12e) == '\0')) && (param_1[0x16] != 0)) {
    FUN_1407ab98c(param_1[0x16],0,0);
  }
  return 0;
}



// FUNCTION 146636e0c FUN_146636e0c body=26 status=ok
// SIG undefined FUN_146636e0c(void)

void FUN_146636e0c(longlong param_1)

{
  FUN_140670e16();
  *(undefined1 *)(param_1 + 0x12e) = 1;
  return;
}



// FUNCTION 146636e26 FUN_146636e26 body=208 status=ok
// SIG undefined FUN_146636e26(void)

void FUN_146636e26(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_1411e5b4e();
  if (*param_2 == DAT_14cbd42e8) {
    iVar3 = -1;
    iVar2 = FUN_14005fbd2(param_3,0xffffffff);
    if (iVar2 == -1) {
      cVar1 = *(char *)((longlong)param_1 + 300);
    }
    else {
      cVar1 = (char)(iVar2 / 100);
      *(char *)((longlong)param_1 + 300) = cVar1;
      iVar3 = iVar2 % 100;
    }
    *(int *)(param_1 + 0x25) = iVar3;
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x12e) == '\0')) {
      lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      if (lVar4 != 0) {
        cVar1 = FUN_1408838b6(param_1,lVar4,0,1);
        if (cVar1 != '\0') {
          FUN_14583aca6(param_1);
          if ((*(char *)((longlong)param_1 + 0x12e) == '\0') && (param_1[0x16] != 0)) {
            FUN_1407ab98c(param_1[0x16],1,1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146636ef6 FUN_146636ef6 body=149 status=ok
// SIG undefined FUN_146636ef6(void)

undefined8 FUN_146636ef6(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_140880c0c();
  *(undefined1 *)((longlong)param_1 + 0x12e) = 0;
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((lVar2 != 0) && (cVar1 = FUN_1408838b6(param_1,lVar2,0,1), cVar1 != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x12d) = 1;
    cVar1 = FUN_1408814c2(param_1,&DAT_14cbd42f8,0);
    if (cVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0x12e) != '\0') {
        return 0;
      }
      lVar2 = param_1[0x16];
      if (lVar2 == 0) {
        return 0;
      }
      uVar3 = 1;
      uVar4 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x12e) != '\0') {
        return 0;
      }
      lVar2 = param_1[0x16];
      if (lVar2 == 0) {
        return 0;
      }
      uVar3 = 0;
      uVar4 = 0;
    }
    FUN_1407ab98c(lVar2,uVar3,uVar4);
  }
  return 0;
}



// FUNCTION 146636f9c FUN_146636f9c body=176 status=ok
// SIG undefined FUN_146636f9c(void)

undefined8 * FUN_146636f9c(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a7c5f6(&DAT_14cbd44b8);
  if (cVar2 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"CharacterNameLevelText",0);
    FUN_140ac6c96(&local_48,&DAT_14cbd44b8);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = DAT_14cbd44b8;
  *param_1 = DAT_14cbd44b8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cbd44c0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663704e FUN_14663704e body=176 status=ok
// SIG undefined FUN_14663704e(void)

undefined8 * FUN_14663704e(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a7c5f6(&DAT_14cbd44d8);
  if (cVar2 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"PercentText",0);
    FUN_140ac6c96(&local_48,&DAT_14cbd44d8);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = DAT_14cbd44d8;
  *param_1 = DAT_14cbd44d8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = DAT_14cbd44e0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146637100 FUN_146637100 body=98 status=ok
// SIG undefined FUN_146637100(void)

longlong FUN_146637100(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2[2] == 0) {
    uVar2 = *param_2;
  }
  else {
    uVar2 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar1 = FUN_140f51fa6((longlong *)(param_1 + 0xb8),uVar2,param_2);
  if (iVar1 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0xb8);
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 146637162 FUN_146637162 body=155 status=ok
// SIG undefined FUN_146637162(void)

undefined8 * FUN_146637162(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1466371fe FUN_1466371fe body=30 status=ok
// SIG undefined FUN_1466371fe(void)

void FUN_1466371fe(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14663721c FUN_14663721c body=49 status=ok
// SIG undefined FUN_14663721c(void)

void FUN_14663721c(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000146637249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 14663724e FUN_14663724e body=30 status=ok
// SIG undefined FUN_14663724e(void)

void FUN_14663724e(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14663726c FUN_14663726c body=40 status=ok
// SIG undefined FUN_14663726c(void)

undefined8 FUN_14663726c(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637294 FUN_146637294 body=72 status=ok
// SIG undefined FUN_146637294(void)

undefined8 * FUN_146637294(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ecae0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466372dc FUN_1466372dc body=40 status=ok
// SIG undefined FUN_1466372dc(void)

undefined8 FUN_1466372dc(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637304 FUN_146637304 body=40 status=ok
// SIG undefined FUN_146637304(void)

undefined8 FUN_146637304(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663732c FUN_14663732c body=56 status=ok
// SIG undefined FUN_14663732c(void)

void FUN_14663732c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1410d3d16(param_2,param_1);
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0x38) == 0)) {
    FUN_1410d422e(param_1,param_2);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}



// FUNCTION 146637364 FUN_146637364 body=24 status=ok
// SIG undefined FUN_146637364(void)

bool FUN_146637364(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663737c FUN_14663737c body=287 status=ok
// SIG undefined FUN_14663737c(void)

void FUN_14663737c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_1407052fc(lVar2,*param_2);
    iVar11 = 0;
    iVar7 = 0;
    do {
      lVar10 = (longlong)iVar7;
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar12 = lVar2 + 8 + lVar10 * 8;
      iVar8 = iVar7;
      lVar6 = lVar10;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar13 <= lVar6) break;
        bVar5 = FUN_1407052fc(lVar12,*param_2);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 8;
        iVar9 = iVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar11 != iVar7) {
          memmove((void *)(lVar2 + (longlong)iVar11 * 8),(void *)(lVar2 + lVar10 * 8),
                  (longlong)(iVar9 - iVar7) << 3);
        }
        iVar11 = iVar11 + (iVar9 - iVar7);
      }
      iVar7 = iVar9;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar11;
  }
  return;
}



// FUNCTION 14663749c FUN_14663749c body=147 status=ok
// SIG undefined FUN_14663749c(void)

void FUN_14663749c(longlong param_1,int param_2)

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



// FUNCTION 146637530 FUN_146637530 body=9 status=ok
// SIG undefined FUN_146637530(void)

void FUN_146637530(longlong param_1)

{
  FUN_140333dee(param_1 + 0x10);
  return;
}



// FUNCTION 14663753a FUN_14663753a body=29 status=ok
// SIG undefined FUN_14663753a(void)

undefined8 FUN_14663753a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637558 FUN_146637558 body=9 status=ok
// SIG undefined FUN_146637558(void)

void FUN_146637558(longlong param_1)

{
  FUN_140333dee(param_1 + 0x10);
  return;
}



// FUNCTION 146637562 FUN_146637562 body=29 status=ok
// SIG undefined FUN_146637562(void)

undefined8 FUN_146637562(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637580 FUN_146637580 body=29 status=ok
// SIG undefined FUN_146637580(void)

undefined8 FUN_146637580(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663759e FUN_14663759e body=9 status=ok
// SIG undefined FUN_14663759e(void)

void FUN_14663759e(longlong param_1)

{
  FUN_140333dee(param_1 + 0x10);
  return;
}



// FUNCTION 1466375a8 FUN_1466375a8 body=29 status=ok
// SIG undefined FUN_1466375a8(void)

undefined8 FUN_1466375a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466375c6 FUN_1466375c6 body=29 status=ok
// SIG undefined FUN_1466375c6(void)

undefined8 FUN_1466375c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466375e4 FUN_1466375e4 body=46 status=ok
// SIG undefined FUN_1466375e4(void)

void FUN_1466375e4(longlong param_1)

{
  FUN_140f7abbb(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146637612 FUN_146637612 body=29 status=ok
// SIG undefined FUN_146637612(void)

undefined8 FUN_146637612(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637630 FUN_146637630 body=29 status=ok
// SIG undefined FUN_146637630(void)

undefined8 FUN_146637630(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663764e FUN_14663764e body=29 status=ok
// SIG undefined FUN_14663764e(void)

undefined8 FUN_14663764e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663766c FUN_14663766c body=29 status=ok
// SIG undefined FUN_14663766c(void)

undefined8 FUN_14663766c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663768a FUN_14663768a body=29 status=ok
// SIG undefined FUN_14663768a(void)

undefined8 FUN_14663768a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466376a8 FUN_1466376a8 body=29 status=ok
// SIG undefined FUN_1466376a8(void)

undefined8 FUN_1466376a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466376c6 FUN_1466376c6 body=46 status=ok
// SIG undefined FUN_1466376c6(void)

void FUN_1466376c6(longlong param_1)

{
  FUN_145acb82e(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1466376f4 FUN_1466376f4 body=29 status=ok
// SIG undefined FUN_1466376f4(void)

undefined8 FUN_1466376f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637712 FUN_146637712 body=45 status=ok
// SIG undefined FUN_146637712(void)

void FUN_146637712(longlong param_1)

{
  FUN_1457e64f1(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146637740 FUN_146637740 body=29 status=ok
// SIG undefined FUN_146637740(void)

undefined8 FUN_146637740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663775e FUN_14663775e body=29 status=ok
// SIG undefined FUN_14663775e(void)

undefined8 FUN_14663775e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663778e FUN_14663778e body=29 status=ok
// SIG undefined FUN_14663778e(void)

undefined8 FUN_14663778e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466377ac FUN_1466377ac body=29 status=ok
// SIG undefined FUN_1466377ac(void)

undefined8 FUN_1466377ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466377ca FUN_1466377ca body=29 status=ok
// SIG undefined FUN_1466377ca(void)

undefined8 FUN_1466377ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466377f2 FUN_1466377f2 body=29 status=ok
// SIG undefined FUN_1466377f2(void)

undefined8 FUN_1466377f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637810 FUN_146637810 body=29 status=ok
// SIG undefined FUN_146637810(void)

undefined8 FUN_146637810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663783c FUN_14663783c body=29 status=ok
// SIG undefined FUN_14663783c(void)

undefined8 FUN_14663783c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663785a FUN_14663785a body=29 status=ok
// SIG undefined FUN_14663785a(void)

undefined8 FUN_14663785a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637878 FUN_146637878 body=29 status=ok
// SIG undefined FUN_146637878(void)

undefined8 FUN_146637878(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637896 FUN_146637896 body=29 status=ok
// SIG undefined FUN_146637896(void)

undefined8 FUN_146637896(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466378b4 FUN_1466378b4 body=29 status=ok
// SIG undefined FUN_1466378b4(void)

undefined8 FUN_1466378b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466378d2 FUN_1466378d2 body=29 status=ok
// SIG undefined FUN_1466378d2(void)

undefined8 FUN_1466378d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466378f0 FUN_1466378f0 body=45 status=ok
// SIG undefined FUN_1466378f0(void)

void FUN_1466378f0(longlong param_1)

{
  FUN_145be4312(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14663791e FUN_14663791e body=29 status=ok
// SIG undefined FUN_14663791e(void)

undefined8 FUN_14663791e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663793c FUN_14663793c body=29 status=ok
// SIG undefined FUN_14663793c(void)

undefined8 FUN_14663793c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663795a FUN_14663795a body=29 status=ok
// SIG undefined FUN_14663795a(void)

undefined8 FUN_14663795a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637978 FUN_146637978 body=29 status=ok
// SIG undefined FUN_146637978(void)

undefined8 FUN_146637978(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637996 FUN_146637996 body=29 status=ok
// SIG undefined FUN_146637996(void)

undefined8 FUN_146637996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466379b4 FUN_1466379b4 body=29 status=ok
// SIG undefined FUN_1466379b4(void)

undefined8 FUN_1466379b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466379d2 FUN_1466379d2 body=45 status=ok
// SIG undefined FUN_1466379d2(void)

void FUN_1466379d2(longlong param_1)

{
  FUN_1412c5aa4(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146637a00 FUN_146637a00 body=29 status=ok
// SIG undefined FUN_146637a00(void)

undefined8 FUN_146637a00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637a1e FUN_146637a1e body=29 status=ok
// SIG undefined FUN_146637a1e(void)

undefined8 FUN_146637a1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637a3c FUN_146637a3c body=29 status=ok
// SIG undefined FUN_146637a3c(void)

undefined8 FUN_146637a3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637a5a FUN_146637a5a body=29 status=ok
// SIG undefined FUN_146637a5a(void)

undefined8 FUN_146637a5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637a78 FUN_146637a78 body=29 status=ok
// SIG undefined FUN_146637a78(void)

undefined8 FUN_146637a78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637a96 FUN_146637a96 body=29 status=ok
// SIG undefined FUN_146637a96(void)

undefined8 FUN_146637a96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637ab4 FUN_146637ab4 body=29 status=ok
// SIG undefined FUN_146637ab4(void)

undefined8 FUN_146637ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637ad2 FUN_146637ad2 body=29 status=ok
// SIG undefined FUN_146637ad2(void)

undefined8 FUN_146637ad2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637af0 FUN_146637af0 body=45 status=ok
// SIG undefined FUN_146637af0(void)

void FUN_146637af0(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146637b1e FUN_146637b1e body=29 status=ok
// SIG undefined FUN_146637b1e(void)

undefined8 FUN_146637b1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637b3c FUN_146637b3c body=29 status=ok
// SIG undefined FUN_146637b3c(void)

undefined8 FUN_146637b3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637b68 FUN_146637b68 body=29 status=ok
// SIG undefined FUN_146637b68(void)

undefined8 FUN_146637b68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637b86 FUN_146637b86 body=45 status=ok
// SIG undefined FUN_146637b86(void)

void FUN_146637b86(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146637bb4 FUN_146637bb4 body=29 status=ok
// SIG undefined FUN_146637bb4(void)

undefined8 FUN_146637bb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637bd2 FUN_146637bd2 body=29 status=ok
// SIG undefined FUN_146637bd2(void)

undefined8 FUN_146637bd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637bf0 FUN_146637bf0 body=29 status=ok
// SIG undefined FUN_146637bf0(void)

undefined8 FUN_146637bf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637c0e FUN_146637c0e body=45 status=ok
// SIG undefined FUN_146637c0e(void)

void FUN_146637c0e(longlong param_1)

{
  FUN_145acb82e(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146637c3c FUN_146637c3c body=29 status=ok
// SIG undefined FUN_146637c3c(void)

undefined8 FUN_146637c3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637c5a FUN_146637c5a body=29 status=ok
// SIG undefined FUN_146637c5a(void)

undefined8 FUN_146637c5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637c78 FUN_146637c78 body=29 status=ok
// SIG undefined FUN_146637c78(void)

undefined8 FUN_146637c78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637c96 FUN_146637c96 body=29 status=ok
// SIG undefined FUN_146637c96(void)

undefined8 FUN_146637c96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637cb4 FUN_146637cb4 body=29 status=ok
// SIG undefined FUN_146637cb4(void)

undefined8 FUN_146637cb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637cd2 FUN_146637cd2 body=29 status=ok
// SIG undefined FUN_146637cd2(void)

undefined8 FUN_146637cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637cf0 FUN_146637cf0 body=29 status=ok
// SIG undefined FUN_146637cf0(void)

undefined8 FUN_146637cf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637d0e FUN_146637d0e body=29 status=ok
// SIG undefined FUN_146637d0e(void)

undefined8 FUN_146637d0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637d2c FUN_146637d2c body=29 status=ok
// SIG undefined FUN_146637d2c(void)

undefined8 FUN_146637d2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637d4a FUN_146637d4a body=29 status=ok
// SIG undefined FUN_146637d4a(void)

undefined8 FUN_146637d4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637d68 FUN_146637d68 body=29 status=ok
// SIG undefined FUN_146637d68(void)

undefined8 FUN_146637d68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637d86 FUN_146637d86 body=29 status=ok
// SIG undefined FUN_146637d86(void)

undefined8 FUN_146637d86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637da4 FUN_146637da4 body=29 status=ok
// SIG undefined FUN_146637da4(void)

undefined8 FUN_146637da4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637dc2 FUN_146637dc2 body=52 status=ok
// SIG undefined FUN_146637dc2(void)

void FUN_146637dc2(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b819040;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1 + 0x10);
  return;
}



// FUNCTION 146637df6 FUN_146637df6 body=29 status=ok
// SIG undefined FUN_146637df6(void)

undefined8 FUN_146637df6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637e14 FUN_146637e14 body=29 status=ok
// SIG undefined FUN_146637e14(void)

undefined8 FUN_146637e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637e32 FUN_146637e32 body=29 status=ok
// SIG undefined FUN_146637e32(void)

undefined8 FUN_146637e32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637e50 FUN_146637e50 body=29 status=ok
// SIG undefined FUN_146637e50(void)

undefined8 FUN_146637e50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637e6e FUN_146637e6e body=29 status=ok
// SIG undefined FUN_146637e6e(void)

undefined8 FUN_146637e6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637e8c FUN_146637e8c body=29 status=ok
// SIG undefined FUN_146637e8c(void)

undefined8 FUN_146637e8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637eaa FUN_146637eaa body=29 status=ok
// SIG undefined FUN_146637eaa(void)

undefined8 FUN_146637eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637ec8 FUN_146637ec8 body=29 status=ok
// SIG undefined FUN_146637ec8(void)

undefined8 FUN_146637ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637ee6 FUN_146637ee6 body=29 status=ok
// SIG undefined FUN_146637ee6(void)

undefined8 FUN_146637ee6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637f04 FUN_146637f04 body=29 status=ok
// SIG undefined FUN_146637f04(void)

undefined8 FUN_146637f04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637f22 FUN_146637f22 body=29 status=ok
// SIG undefined FUN_146637f22(void)

undefined8 FUN_146637f22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637f40 FUN_146637f40 body=29 status=ok
// SIG undefined FUN_146637f40(void)

undefined8 FUN_146637f40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637f5e FUN_146637f5e body=29 status=ok
// SIG undefined FUN_146637f5e(void)

undefined8 FUN_146637f5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637f7c FUN_146637f7c body=29 status=ok
// SIG undefined FUN_146637f7c(void)

undefined8 FUN_146637f7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637f9a FUN_146637f9a body=29 status=ok
// SIG undefined FUN_146637f9a(void)

undefined8 FUN_146637f9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637fb8 FUN_146637fb8 body=29 status=ok
// SIG undefined FUN_146637fb8(void)

undefined8 FUN_146637fb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637fe0 FUN_146637fe0 body=29 status=ok
// SIG undefined FUN_146637fe0(void)

undefined8 FUN_146637fe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146637ffe FUN_146637ffe body=29 status=ok
// SIG undefined FUN_146637ffe(void)

undefined8 FUN_146637ffe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663801c FUN_14663801c body=29 status=ok
// SIG undefined FUN_14663801c(void)

undefined8 FUN_14663801c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663803a FUN_14663803a body=29 status=ok
// SIG undefined FUN_14663803a(void)

undefined8 FUN_14663803a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146638058 FUN_146638058 body=46 status=ok
// SIG undefined FUN_146638058(void)

void FUN_146638058(longlong param_1)

{
  FUN_140840ea5(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146638086 FUN_146638086 body=29 status=ok
// SIG undefined FUN_146638086(void)

undefined8 FUN_146638086(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466380a4 FUN_1466380a4 body=29 status=ok
// SIG undefined FUN_1466380a4(void)

undefined8 FUN_1466380a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466380c2 FUN_1466380c2 body=29 status=ok
// SIG undefined FUN_1466380c2(void)

undefined8 FUN_1466380c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466380e0 FUN_1466380e0 body=29 status=ok
// SIG undefined FUN_1466380e0(void)

undefined8 FUN_1466380e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466380fe FUN_1466380fe body=29 status=ok
// SIG undefined FUN_1466380fe(void)

undefined8 FUN_1466380fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663811c FUN_14663811c body=29 status=ok
// SIG undefined FUN_14663811c(void)

undefined8 FUN_14663811c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663813a FUN_14663813a body=29 status=ok
// SIG undefined FUN_14663813a(void)

undefined8 FUN_14663813a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146638158 FUN_146638158 body=29 status=ok
// SIG undefined FUN_146638158(void)

undefined8 FUN_146638158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146638176 FUN_146638176 body=29 status=ok
// SIG undefined FUN_146638176(void)

undefined8 FUN_146638176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146638194 FUN_146638194 body=29 status=ok
// SIG undefined FUN_146638194(void)

undefined8 FUN_146638194(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466381b2 FUN_1466381b2 body=143 status=ok
// SIG undefined FUN_1466381b2(void)

void FUN_1466381b2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146638242 FUN_146638242 body=132 status=ok
// SIG undefined FUN_146638242(void)

void FUN_146638242(longlong param_1,int param_2)

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



// FUNCTION 1466382c6 FUN_1466382c6 body=29 status=ok
// SIG undefined FUN_1466382c6(void)

undefined8 FUN_1466382c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466382e4 FUN_1466382e4 body=29 status=ok
// SIG undefined FUN_1466382e4(void)

undefined8 FUN_1466382e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146638302 FUN_146638302 body=29 status=ok
// SIG undefined FUN_146638302(void)

bool FUN_146638302(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146638320 FUN_146638320 body=26 status=ok
// SIG undefined FUN_146638320(void)

bool FUN_146638320(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663833a FUN_14663833a body=24 status=ok
// SIG undefined FUN_14663833a(void)

bool FUN_14663833a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146638352 FUN_146638352 body=101 status=ok
// SIG undefined FUN_146638352(void)

void FUN_146638352(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b422d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1466383b8 FUN_1466383b8 body=29 status=ok
// SIG undefined FUN_1466383b8(void)

bool FUN_1466383b8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466383d6 FUN_1466383d6 body=24 status=ok
// SIG undefined FUN_1466383d6(void)

bool FUN_1466383d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466383ee FUN_1466383ee body=24 status=ok
// SIG undefined FUN_1466383ee(void)

bool FUN_1466383ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146638406 FUN_146638406 body=24 status=ok
// SIG undefined FUN_146638406(void)

bool FUN_146638406(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663841e FUN_14663841e body=24 status=ok
// SIG undefined FUN_14663841e(void)

bool FUN_14663841e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146638436 FUN_146638436 body=840 status=ok
// SIG undefined FUN_146638436(void)

void FUN_146638436(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_14663870a;
  lVar4 = *(longlong *)(param_2 + 0x820);
  if (lVar4 == 0) {
    uVar3 = FUN_145ce204a();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_2 + 0x820) = lVar4;
  }
  lVar7 = *(longlong *)(param_2 + 0x818);
  if (*(longlong *)(param_2 + 0x828) == 0) {
    if ((lVar4 != 0) && (lVar7 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_2 + 0x828) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_2 + 0x818));
        *(longlong *)(param_2 + 0x828) = lVar4;
        if (lVar4 != 0) {
          lVar7 = *(longlong *)(param_2 + 0x818);
          goto LAB_1466384e5;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    goto LAB_14663870a;
  }
LAB_1466384e5:
  local_40 = lVar7;
  FUN_1400021e4(&local_40,&local_38);
  uVar6 = local_30 - 1;
  if (local_30 == 0) {
    uVar6 = 0;
  }
  if (0 < (int)uVar6) {
    uVar8 = 0;
    do {
      local_38[uVar8] = (ushort)((ushort)local_38[uVar8] - 0x41 < 0x1a) * 0x20 + local_38[uVar8];
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
  }
  puVar5 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  lVar4 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar5 + lVar4);
    uVar8 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)L"very_easy" + lVar4);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_1466386f9;
LAB_14663857a:
    lVar4 = lVar4 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_14663857a;
  }
  if (uVar9 != uVar10) {
    lVar4 = 0;
    goto LAB_1466385b3;
  }
LAB_1466386f9:
  *(undefined4 *)(param_1 + 0x1c) = 2;
  goto LAB_146638700;
LAB_1466385b3:
  uVar9 = *(ushort *)((longlong)puVar5 + lVar4);
  uVar8 = (ulonglong)uVar9;
  uVar10 = *(ushort *)((longlong)&DAT_14b9a729e + lVar4);
  if (uVar9 == uVar10) {
    if (uVar9 == 0) goto LAB_14663872b;
LAB_1466385cc:
    lVar4 = lVar4 + 2;
    goto LAB_1466385b3;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_1466385cc;
  }
  if (uVar9 != uVar10) {
    lVar4 = 0;
    goto LAB_146638605;
  }
LAB_14663872b:
  *(undefined4 *)(param_1 + 0x1c) = 3;
  goto LAB_146638700;
LAB_146638605:
  uVar9 = *(ushort *)((longlong)puVar5 + lVar4);
  uVar8 = (ulonglong)uVar9;
  uVar10 = *(ushort *)((longlong)L"normal" + lVar4);
  if (uVar9 == uVar10) {
    if (uVar9 == 0) goto LAB_146638734;
LAB_14663861e:
    lVar4 = lVar4 + 2;
    goto LAB_146638605;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_14663861e;
  }
  if (uVar9 != uVar10) {
    lVar4 = 0;
    goto LAB_146638657;
  }
LAB_146638734:
  *(undefined4 *)(param_1 + 0x1c) = 4;
  goto LAB_146638700;
LAB_146638657:
  uVar9 = *(ushort *)((longlong)puVar5 + lVar4);
  uVar8 = (ulonglong)uVar9;
  uVar10 = *(ushort *)((longlong)&DAT_14b9a72a8 + lVar4);
  if (uVar9 == uVar10) {
    if (uVar9 == 0) goto LAB_14663873d;
LAB_146638670:
    lVar4 = lVar4 + 2;
    goto LAB_146638657;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_146638670;
  }
  if (uVar9 != uVar10) {
    lVar4 = 0;
    goto LAB_1466386a9;
  }
LAB_14663873d:
  *(undefined4 *)(param_1 + 0x1c) = 5;
  goto LAB_146638700;
LAB_1466386a9:
  uVar9 = *(ushort *)((longlong)puVar5 + lVar4);
  uVar8 = (ulonglong)uVar9;
  uVar10 = *(ushort *)((longlong)L"very_hard" + lVar4);
  if (uVar9 == uVar10) {
    if (uVar9 == 0) goto LAB_14663874a;
LAB_1466386c2:
    lVar4 = lVar4 + 2;
    goto LAB_1466386a9;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_1466386c2;
  }
  if (uVar9 != uVar10) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    goto LAB_146638700;
  }
LAB_14663874a:
  *(undefined4 *)(param_1 + 0x1c) = 6;
LAB_146638700:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14663870a:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146638780 FUN_146638780 body=254 status=ok
// SIG undefined FUN_146638780(void)

undefined8
FUN_146638780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9a7dd0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146638880 FUN_146638880 body=254 status=ok
// SIG undefined FUN_146638880(void)

undefined8
FUN_146638880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e06450;
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
  *local_48 = &PTR_FUN_14b9a8250;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146638980 FUN_146638980 body=458 status=ok
// SIG undefined FUN_146638980(void)

longlong FUN_146638980(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1400d7050(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (lVar5 = FUN_1447210f0(lVar4), lVar5 != 0)) {
      lVar5 = FUN_14067bb54(lVar5);
      if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0xe8))) {
        if (*(longlong *)(lVar4 + 0xa08) == 0) {
          local_40 = '\0';
          bVar2 = true;
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xa08) + 0x1c8);
          if (lVar4 == 0) {
            puVar6 = &DAT_14c8464e0;
            local_48 = DAT_14c8464f0;
          }
          else {
            puVar6 = (undefined8 *)(lVar4 + 0x260);
            local_48 = *(undefined8 *)(lVar4 + 0x270);
          }
          local_58 = *(undefined4 *)puVar6;
          uStack_54 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_50 = *(undefined4 *)(puVar6 + 1);
          uStack_4c = *(undefined4 *)((longlong)puVar6 + 0xc);
          local_40 = '\x01';
          uVar7 = FUN_14067bd00(lVar5);
          bVar2 = true;
          lVar4 = 0;
          if ((longlong)*(int *)(lVar5 + 0xe8) != 0) {
            plVar8 = (longlong *)(*(longlong *)(lVar5 + 0xe0) + 0x10);
            lVar9 = (longlong)*(int *)(lVar5 + 0xe8) * 0x38;
            do {
              lVar4 = FUN_14882ca84(plVar8 + -2,uVar7);
              if ((char)lVar4 != '\0') {
                lVar9 = plVar8[1];
                if (lVar9 == 0) {
                  uVar7 = FUN_14067c594();
                  lVar9 = FUN_14477b664(uVar7);
                  plVar8[1] = lVar9;
                }
                lVar4 = plVar8[2];
                if (lVar4 == 0) {
                  lVar4 = 0;
                  bVar2 = false;
                  if ((lVar9 == 0) || (*plVar8 == 0)) break;
                  plVar1 = *(longlong **)(lVar9 + 0xb8);
                  if ((plVar1 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
                    lVar4 = 0;
                  }
                  else {
                    uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
                    lVar4 = FUN_144aff482(uVar7,plVar8);
                  }
                  plVar8[2] = lVar4;
                }
                bVar2 = false;
                break;
              }
              plVar8 = plVar8 + 7;
              lVar9 = lVar9 + -0x38;
            } while (lVar9 != 0);
          }
        }
        if (local_40 == '\x01') {
          local_40 = '\0';
        }
        if (!bVar2) goto LAB_1466389f3;
      }
      lVar4 = lVar5;
      goto LAB_1466389f3;
    }
  }
  lVar4 = 0;
LAB_1466389f3:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 146638b4c FUN_146638b4c body=336 status=ok
// SIG undefined FUN_146638b4c(void)

undefined8 *
FUN_146638b4c(undefined8 *param_1,undefined8 param_2,double *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  double *pdVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = *param_4;
  uVar3 = *(undefined4 *)((longlong)param_4 + 0xc);
  uVar4 = *(undefined4 *)(param_4 + 2);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x14);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  param_1[7] = 0;
  iVar2 = *(int *)(param_4 + 4);
  _Src = (void *)param_4[3];
  *(int *)(param_1 + 8) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar2,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar2 * 2);
  }
  pdVar1 = (double *)(param_1 + 2);
  FUN_1400b22c2(param_1 + 9,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0xb) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(int *)(param_1 + 1) = (int)((ulonglong)*param_1 >> 0x20) * 0x17 + (int)*param_1;
  if (*(char *)(param_3 + 2) == '\x01') {
    dVar6 = param_3[1];
    *pdVar1 = *param_3;
    param_1[3] = dVar6;
    bVar7 = true;
    if (((0.0 < *pdVar1) && (*pdVar1 < 1.0)) && (0.0 < (double)param_1[3])) {
      bVar7 = 1.0 <= (double)param_1[3];
    }
  }
  else {
    *pdVar1 = 0.0;
    param_1[3] = 0;
    bVar7 = false;
  }
  *(bool *)((longlong)param_1 + 0x5c) = bVar7;
  if (*(char *)(param_3 + 2) == '\x01') {
    *(undefined1 *)(param_3 + 2) = 0;
  }
  if (param_4[3] != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146638ca2 FUN_146638ca2 body=38 status=ok
// SIG undefined FUN_146638ca2(void)

void FUN_146638ca2(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    FUN_141237e82(param_1);
    return;
  }
  return;
}



// FUNCTION 146638cc8 FUN_146638cc8 body=302 status=ok
// SIG undefined FUN_146638cc8(void)

void FUN_146638cc8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = FUN_1408bb964(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (lVar2 != 0) {
        lVar4 = FUN_140b6d0be();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          if (*(longlong *)(param_1 + 0x80) != 0) {
            FUN_14480f766(lVar2 + 0x228);
          }
          if (*(longlong *)(param_1 + 0x88) != 0) {
            FUN_14480f766(lVar2 + 0x240);
          }
        }
      }
      lVar1 = FUN_140b64196(lVar1);
      if (lVar1 != 0) {
        uVar3 = FUN_14586d25c(lVar1);
        if (*(longlong *)(param_1 + 0x90) != 0) {
          FUN_14480f766(uVar3);
        }
      }
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar1 != 0) {
    FUN_14127b218(lVar1);
    FUN_1400020a8(lVar1);
  }
  param_1 = param_1 + -0x30;
  FUN_140457ffc(&DAT_14cbd0b90,param_1);
  FUN_140457ffc(&DAT_14cbd0b48,param_1);
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  return;
}



// FUNCTION 146638df6 FUN_146638df6 body=888 status=ok
// SIG undefined FUN_146638df6(void)

void FUN_146638df6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x68);
    lVar12 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    do {
      cVar6 = FUN_140e8a950(puVar13 + -0xc,param_2);
      if (cVar6 != '\0') {
        if (puVar13 != (undefined8 *)&DAT_00000068) {
          FUN_1402815f4(param_1,&local_b8);
          puVar4 = *(undefined8 **)(local_b8 + 0x1e0);
          AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 6));
          plVar2 = uStack_b0;
          *(int *)(puVar4 + 5) = *(int *)(puVar4 + 5) + 1;
          if (uStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_b0)(uStack_b0);
              LOCK();
              piVar14 = (int *)((longlong)plVar2 + 0xc);
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (*piVar14 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          iVar7 = *(int *)(puVar13 + -0xb);
          piVar14 = (int *)*puVar4;
          *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 2;
          if ((longlong)*(int *)(puVar4 + 1) == 0) goto LAB_1466390c7;
          lVar12 = (longlong)*(int *)(puVar4 + 1) * 0xd8;
          goto LAB_146638ee4;
        }
        break;
      }
      puVar13 = puVar13 + 0x11;
      lVar12 = lVar12 + -0x88;
    } while (lVar12 != 0);
  }
  goto LAB_1466390d0;
  while( true ) {
    piVar14 = piVar14 + 0x36;
    lVar12 = lVar12 + -0xd8;
    if (lVar12 == 0) break;
LAB_146638ee4:
    if (*piVar14 == iVar7) {
      if (piVar14 != (int *)0x0) {
        FUN_141178df0(piVar14);
        if ((char)piVar14[0x2f] == '\0') {
          iVar7 = piVar14[0x30] + 1;
LAB_146638f26:
          *(undefined1 *)(piVar14 + 0x2f) = 1;
          piVar14[0x30] = iVar7;
        }
        else if (piVar14[0x30] == 0) {
          iVar7 = 1;
          goto LAB_146638f26;
        }
        iVar7 = (**(code **)(*(longlong *)(param_2 + 0x10c0) + 0x28))(param_2 + 0x10c0);
        if (iVar7 == piVar14[0x31]) {
          if (piVar14[0x32] == 0) {
            iVar10 = 1;
            goto LAB_146638f5c;
          }
        }
        else {
          iVar10 = piVar14[0x32] + 1;
LAB_146638f5c:
          piVar14[0x31] = iVar7;
          piVar14[0x32] = iVar10;
        }
        lVar12 = FUN_1400f3ad8(param_1 + 0x44);
        if (lVar12 != 0) {
          lVar8 = FUN_144a5dd5e();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            uVar9 = FUN_1401b4c98(lVar12);
            lVar8 = FUN_144a61814(uVar9,puVar13);
            if (lVar8 != 0) {
              FUN_1405a424c(uVar9,*puVar13);
            }
            *puVar13 = 0;
            plVar2 = puVar13 + -2;
            uStack_b0 = (longlong *)0x0;
            local_b8 = param_1;
            FUN_14485c47a(&uStack_b0,param_2);
            if (*(int *)(puVar13 + -1) != 3) {
              FUN_1446efa72(plVar2,0,3,0x10);
              *(undefined4 *)(puVar13 + -1) = 3;
            }
            puVar5 = (undefined8 *)*plVar2;
            *puVar5 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 1;
            lVar8 = DAT_14c758608 + 1;
            if (lVar11 == 0) {
              LOCK();
              UNLOCK();
              lVar11 = DAT_14c758608 + 2;
              lVar8 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar8;
            puVar5[2] = lVar11;
            *puVar5 = &PTR_FUN_14b9a8f30;
            puVar5[3] = 0;
            FUN_14485c47a(puVar5 + 3,param_1);
            *(undefined4 *)(puVar5 + 4) = (undefined4)local_b8;
            *(undefined4 *)((longlong)puVar5 + 0x24) = local_b8._4_4_;
            *(undefined4 *)(puVar5 + 5) = (undefined4)uStack_b0;
            *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_b0._4_4_;
            uVar9 = FUN_1401b4c98(lVar12);
            uVar3 = *(undefined4 *)(param_1 + 0xa0);
            local_b8 = 0;
            uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
            FUN_14487d8d8(&local_b8,plVar2);
            local_78 = 1;
            local_c8 = local_c0;
            local_c0[0] = 0;
            local_bc = 0xbf800000;
            FUN_1406f4044(uVar9,puVar13,&local_b8,uVar3);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
          }
        }
      }
      break;
    }
  }
LAB_1466390c7:
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 6));
LAB_1466390d0:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146639170 FUN_146639170 body=504 status=ok
// SIG undefined FUN_146639170(void)

void FUN_146639170(longlong param_1,undefined8 param_2,char param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_4 != 0) && (param_5 != 0)) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x58) + 8;
    lVar7 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    do {
      cVar3 = FUN_140e8a950(lVar5,param_4);
      if (cVar3 != '\0') {
        if ((lVar5 != 8) && (param_3 == '\0')) {
          FUN_1402815f4(param_1,&local_50);
          puVar2 = *(undefined8 **)(local_50 + 0x1e0);
          AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
          *(int *)(puVar2 + 5) = *(int *)(puVar2 + 5) + 1;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar6 = (int *)((longlong)local_48 + 0xc);
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (*piVar6 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
            }
          }
          iVar4 = *(int *)(lVar5 + 8);
          piVar6 = (int *)*puVar2;
          *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 2;
          if ((longlong)*(int *)(puVar2 + 1) == 0) goto LAB_1466392f1;
          lVar7 = (longlong)*(int *)(puVar2 + 1) * 0xd8;
          goto LAB_14663926a;
        }
        break;
      }
      lVar5 = lVar5 + 0x88;
      lVar7 = lVar7 + -0x88;
    } while (lVar7 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    piVar6 = piVar6 + 0x36;
    lVar7 = lVar7 + -0xd8;
    if (lVar7 == 0) break;
LAB_14663926a:
    if (*piVar6 == iVar4) {
      if ((piVar6 == (int *)0x0) || (*(int *)(param_5 + 0x394) != iVar4)) break;
      lVar7 = FUN_1447210f0(param_4);
      fVar8 = (float)*(double *)(lVar7 + 0x6d0);
      if (((float)piVar6[0x28] != fVar8) || (NAN((float)piVar6[0x28]) || NAN(fVar8))) {
        iVar4 = piVar6[0x29] + 1;
LAB_1466392b9:
        piVar6[0x28] = (int)fVar8;
        piVar6[0x29] = iVar4;
      }
      else if (piVar6[0x29] == 0) {
        iVar4 = 1;
        goto LAB_1466392b9;
      }
      if ((bool)(char)piVar6[0x20] == ((&DAT_000073ed)[param_4] == '\x01')) {
        if (piVar6[0x21] != 0) break;
        iVar4 = 1;
      }
      else {
        iVar4 = piVar6[0x21] + 1;
      }
      *(bool *)(piVar6 + 0x20) = (&DAT_000073ed)[param_4] == '\x01';
      piVar6[0x21] = iVar4;
      break;
    }
  }
LAB_1466392f1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 146639382 FUN_146639382 body=406 status=ok
// SIG undefined FUN_146639382(void)

void FUN_146639382(longlong param_1,undefined8 param_2,char param_3,char param_4,longlong param_5,
                  longlong param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_5 != 0) && (param_6 != 0)) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x58) + 8;
    lVar7 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    do {
      cVar3 = FUN_140e8a950(lVar6,param_5);
      if (cVar3 != '\0') {
        if (((param_3 == '\0') && (param_4 == '\0')) && (lVar6 != 8)) {
          FUN_1402815f4(param_1,&local_50);
          puVar2 = *(undefined8 **)(local_50 + 0x1e0);
          AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 6));
          *(int *)(puVar2 + 5) = *(int *)(puVar2 + 5) + 1;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar4 = (int *)((longlong)local_48 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
            }
          }
          iVar5 = *(int *)(lVar6 + 8);
          piVar4 = (int *)*puVar2;
          *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 2;
          if ((longlong)*(int *)(puVar2 + 1) == 0) goto LAB_1466394e0;
          lVar7 = (longlong)*(int *)(puVar2 + 1) * 0xd8;
          goto LAB_146639497;
        }
        break;
      }
      lVar6 = lVar6 + 0x88;
      lVar7 = lVar7 + -0x88;
    } while (lVar7 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    piVar4 = piVar4 + 0x36;
    lVar7 = lVar7 + -0xd8;
    if (lVar7 == 0) break;
LAB_146639497:
    if (*piVar4 == iVar5) {
      if ((piVar4 == (int *)0x0) || (*(int *)(param_6 + 0x394) != iVar5)) break;
      if ((bool)(char)piVar4[0x20] == ((&DAT_000073ed)[param_5] == '\x01')) {
        if (piVar4[0x21] != 0) break;
        iVar5 = 1;
      }
      else {
        iVar5 = piVar4[0x21] + 1;
      }
      *(bool *)(piVar4 + 0x20) = (&DAT_000073ed)[param_5] == '\x01';
      piVar4[0x21] = iVar5;
      break;
    }
  }
LAB_1466394e0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 146639532 FUN_146639532 body=873 status=ok
// SIG undefined FUN_146639532(void)

void FUN_146639532(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_4 != 0) && (param_3 == '\0')) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x80);
    lVar11 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    do {
      cVar6 = FUN_140e8a950(puVar12 + -0xf,param_4);
      if (cVar6 != '\0') {
        if (puVar12 != (undefined8 *)&DAT_00000080) {
          FUN_1402815f4(param_1,&local_b8);
          puVar4 = *(undefined8 **)(local_b8 + 0x1e0);
          AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 6));
          plVar2 = uStack_b0;
          *(int *)(puVar4 + 5) = *(int *)(puVar4 + 5) + 1;
          if (uStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_b0)(uStack_b0);
              LOCK();
              piVar13 = (int *)((longlong)plVar2 + 0xc);
              *piVar13 = *piVar13 + -1;
              UNLOCK();
              if (*piVar13 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          iVar7 = *(int *)(puVar12 + -0xe);
          piVar13 = (int *)*puVar4;
          *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 2;
          if ((longlong)*(int *)(puVar4 + 1) == 0) goto LAB_1466397f4;
          lVar11 = (longlong)*(int *)(puVar4 + 1) * 0xd8;
          goto LAB_14663962c;
        }
        break;
      }
      puVar12 = puVar12 + 0x11;
      lVar11 = lVar11 + -0x88;
    } while (lVar11 != 0);
  }
  goto LAB_1466397fd;
  while( true ) {
    piVar13 = piVar13 + 0x36;
    lVar11 = lVar11 + -0xd8;
    if (lVar11 == 0) break;
LAB_14663962c:
    if (*piVar13 == iVar7) {
      if (piVar13 != (int *)0x0) {
        FUN_141178df0(piVar13);
        if ((char)piVar13[0x1e] == '\0') {
          if (piVar13[0x1f] == 0) {
            iVar7 = 1;
            goto LAB_146639668;
          }
        }
        else {
          iVar7 = piVar13[0x1f] + 1;
LAB_146639668:
          *(undefined1 *)(piVar13 + 0x1e) = 0;
          piVar13[0x1f] = iVar7;
        }
        if ((char)piVar13[0x24] == '\0') {
          iVar7 = piVar13[0x25] + 1;
LAB_146639688:
          *(undefined1 *)(piVar13 + 0x24) = 1;
          piVar13[0x25] = iVar7;
        }
        else if (piVar13[0x25] == 0) {
          iVar7 = 1;
          goto LAB_146639688;
        }
        lVar11 = FUN_1400f3ad8(param_1 + 0x44);
        if (lVar11 != 0) {
          lVar8 = FUN_144a5dd5e();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            uVar9 = FUN_1401b4c98(lVar11);
            lVar8 = FUN_144a61814(uVar9,puVar12);
            if (lVar8 != 0) {
              FUN_1405a424c(uVar9,*puVar12);
            }
            *puVar12 = 0;
            plVar2 = puVar12 + -2;
            uStack_b0 = (longlong *)0x0;
            local_b8 = param_1;
            FUN_14485c47a(&uStack_b0,param_4);
            if (*(int *)(puVar12 + -1) != 3) {
              FUN_1446efa72(plVar2,0,3,0x10);
              *(undefined4 *)(puVar12 + -1) = 3;
            }
            puVar5 = (undefined8 *)*plVar2;
            *puVar5 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar8 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar8 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar8;
            puVar5[2] = lVar10;
            *puVar5 = &PTR_FUN_14b9a9080;
            puVar5[3] = 0;
            FUN_14485c47a(puVar5 + 3,param_1);
            *(undefined4 *)(puVar5 + 4) = (undefined4)local_b8;
            *(undefined4 *)((longlong)puVar5 + 0x24) = local_b8._4_4_;
            *(undefined4 *)(puVar5 + 5) = (undefined4)uStack_b0;
            *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_b0._4_4_;
            uVar9 = FUN_1401b4c98(lVar11);
            uVar3 = *(undefined4 *)(param_1 + 0xa0);
            local_b8 = 0;
            uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
            FUN_14487d8d8(&local_b8,plVar2);
            local_78 = 1;
            local_c8 = local_c0;
            local_c0[0] = 0;
            local_bc = 0xbf800000;
            FUN_1406f4044(uVar9,puVar12,&local_b8,uVar3);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
          }
        }
      }
      break;
    }
  }
LAB_1466397f4:
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 6));
LAB_1466397fd:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14663989c FUN_14663989c body=805 status=ok
// SIG undefined FUN_14663989c(void)

undefined8
FUN_14663989c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,char param_5
             )

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_188 [32];
  longlong *local_168 [2];
  undefined1 local_158 [4];
  undefined8 local_154;
  undefined1 local_14c;
  undefined1 local_148 [16];
  longlong *local_138;
  undefined4 local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_cc;
  undefined1 local_88 [16];
  longlong local_78;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1412099d2(param_1,&DAT_14cbd5aa8);
  FUN_14125b7f0(local_158);
  local_154 = *(undefined8 *)(param_3 + 100);
  FUN_140009b9a(local_168,param_4);
  FUN_140008f88(local_148,local_168);
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  plVar1 = local_138;
  plVar6 = *(longlong **)(param_3 + 0x18);
  if (local_138 != plVar6) {
    local_138 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  local_130 = *(undefined4 *)(param_3 + 0x20);
  local_cc = *(undefined8 *)(param_3 + 0xe4);
  local_118 = *(undefined8 *)(param_3 + 0x98);
  FUN_144a787a6(local_100,param_3 + 0xb8);
  lVar5 = *(longlong *)(param_3 + 0xa8);
  if (lVar5 == 0) {
    uVar4 = FUN_14036a63e();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_3 + 0xa8) = lVar5;
  }
  plVar6 = (longlong *)(param_3 + 0xa0);
  lVar7 = *(longlong *)(param_3 + 0xb0);
  if (lVar7 == 0) {
    if ((*plVar6 != 0) && (lVar5 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar7 = FUN_144aff482(uVar4,plVar6);
          *(longlong *)(param_3 + 0xb0) = lVar7;
          if (lVar7 != 0) {
            lVar5 = *(longlong *)(param_3 + 0xa8);
            goto LAB_146639b32;
          }
          goto LAB_1466399b2;
        }
      }
      *(undefined8 *)(param_3 + 0xb0) = 0;
    }
LAB_1466399b2:
    plVar6 = (longlong *)FUN_140e82300();
    goto LAB_1466399ba;
  }
LAB_146639b32:
  if (lVar5 == 0) {
    uVar4 = FUN_14036a63e();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_3 + 0xa8) = lVar5;
    lVar7 = *(longlong *)(param_3 + 0xb0);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*plVar6 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if (plVar1 == (longlong *)0x0) {
LAB_146639bbd:
        lVar7 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar3 == '\0') goto LAB_146639bbd;
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar4,plVar6);
      }
      *(longlong *)(param_3 + 0xb0) = lVar7;
    }
  }
  plVar6 = (longlong *)(lVar7 + 0x18);
LAB_1466399ba:
  plVar2 = local_110;
  plVar1 = (longlong *)*plVar6;
  if (local_110 != plVar1) {
    local_110 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_108 = (undefined4)plVar6[1];
  local_dc = *(undefined1 *)(param_3 + 0xd8);
  local_e0 = *(undefined4 *)(param_3 + 0xdc);
  local_14c = *(undefined1 *)(param_3 + 0x60);
  FUN_144a787a6(local_f0,param_3 + 200);
  plVar6 = local_128;
  if (param_5 != '\0') {
    plVar1 = *(longlong **)(param_3 + 0x38);
    if (local_128 != plVar1) {
      local_128 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    local_120 = *(undefined4 *)(param_3 + 0x40);
    local_78 = (longlong)*(int *)(param_3 + 0x48);
    FUN_144a787a6(local_88,param_3 + 0x50);
  }
  FUN_14120969a(param_1,param_2,local_158);
  FUN_140989dc4(local_158);
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146639d5e FUN_146639d5e body=264 status=ok
// SIG undefined FUN_146639d5e(void)

undefined8 FUN_146639d5e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_145c6ff46(&local_48,1);
  uVar5 = uStack_40;
  lVar7 = (longlong)(int)uStack_40;
  uVar6 = (int)uStack_40 + 1;
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar6);
  if (uStack_40._4_4_ < uVar6) {
    FUN_140188694(&local_48,uVar5 & 0xffffffff);
  }
  lVar7 = lVar7 * 0x20;
  uVar3 = *param_3;
  *(undefined4 *)(local_48 + lVar7) = 1;
  *(undefined8 *)(local_48 + 0x10 + lVar7) = 0;
  *(undefined4 *)(local_48 + 0x18 + lVar7) = 0;
  *(undefined8 *)(local_48 + 8 + lVar7) = uVar3;
  FUN_145c6ff28(param_1,param_2,&local_48);
  FUN_14007f2db(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146639e68 FUN_146639e68 body=768 status=ok
// SIG undefined FUN_146639e68(void)

undefined8
FUN_146639e68(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5,char param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_188 [32];
  longlong *local_168 [2];
  undefined1 local_158 [4];
  undefined8 local_154;
  undefined1 local_14c;
  undefined1 local_148 [16];
  longlong *local_138;
  undefined4 local_130;
  undefined8 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_cc;
  undefined8 local_bc;
  undefined4 local_b4;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1412099d2(param_1,&DAT_14cbd5aa8);
  FUN_14125b7f0(local_158);
  local_154 = *(undefined8 *)(param_3 + 100);
  FUN_140009b9a(local_168,param_4);
  FUN_140008f88(local_148,local_168);
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  plVar1 = local_138;
  plVar7 = *(longlong **)(param_3 + 0x18);
  if (local_138 != plVar7) {
    local_138 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  local_130 = *(undefined4 *)(param_3 + 0x20);
  local_cc = *(undefined8 *)(param_3 + 0xe4);
  local_bc = *param_5;
  local_b4 = *(undefined4 *)(param_5 + 1);
  if (param_6 == '\0') goto LAB_146639f4e;
  local_118 = *(undefined8 *)(param_3 + 0x98);
  FUN_144a787a6(local_100,param_3 + 0xb8);
  lVar5 = *(longlong *)(param_3 + 0xa8);
  if (lVar5 == 0) {
    uVar4 = FUN_14036a63e();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_3 + 0xa8) = lVar5;
  }
  plVar7 = (longlong *)(param_3 + 0xa0);
  lVar6 = *(longlong *)(param_3 + 0xb0);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*plVar7 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar4,plVar7);
          *(longlong *)(param_3 + 0xb0) = lVar6;
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(param_3 + 0xa8);
            goto LAB_14663a01b;
          }
          goto LAB_14663a157;
        }
      }
      *(undefined8 *)(param_3 + 0xb0) = 0;
    }
LAB_14663a157:
    plVar7 = (longlong *)FUN_140e82300();
  }
  else {
LAB_14663a01b:
    if (lVar5 == 0) {
      uVar4 = FUN_14036a63e();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_3 + 0xa8) = lVar5;
      lVar6 = *(longlong *)(param_3 + 0xb0);
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar7 != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if (plVar1 == (longlong *)0x0) {
LAB_14663a164:
          lVar6 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar3 == '\0') goto LAB_14663a164;
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar4,plVar7);
        }
        *(longlong *)(param_3 + 0xb0) = lVar6;
      }
    }
    plVar7 = (longlong *)(lVar6 + 0x18);
  }
  plVar2 = local_110;
  plVar1 = (longlong *)*plVar7;
  if (local_110 != plVar1) {
    local_110 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_108 = (undefined4)plVar7[1];
LAB_146639f4e:
  local_dc = *(undefined1 *)(param_3 + 0xd8);
  local_e0 = *(undefined4 *)(param_3 + 0xdc);
  local_14c = *(undefined1 *)(param_3 + 0x60);
  FUN_144a787a6(local_f0,param_3 + 200);
  FUN_14120969a(param_1,param_2,local_158);
  FUN_140989dc4(local_158);
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663a16a FUN_14663a16a body=379 status=ok
// SIG undefined FUN_14663a16a(void)

void FUN_14663a16a(longlong param_1)

{
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140212f8e(&local_40);
  local_80 = (longlong *)(param_1 + 0xe8);
  local_30 = param_1 + 0xf8;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_68 = local_28;
  iStack_64 = iStack_24;
  local_60 = local_20;
  local_5c = local_1c;
  local_78 = local_38;
  local_70 = local_30;
  local_48 = 0;
  local_58 = local_80;
  local_50 = local_80;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      if (DAT_14cbd5f98 + *(longlong *)(*local_80 + 0x18 + (longlong)iStack_64 * 0x28) < local_40) {
        FUN_148e2efa8(local_58);
        local_48 = CONCAT11(local_48._1_1_,1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_148e2df2c(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663a2e6 FUN_14663a2e6 body=90 status=ok
// SIG undefined FUN_14663a2e6(void)

bool FUN_14663a2e6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x14) != 0) && (lVar1 = FUN_1400d7050(), lVar1 != 0)) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30 && (lVar1 = FUN_140c154c8(lVar1), lVar1 != 0)))) {
      return *(longlong *)(lVar1 + 0x170) != 0;
    }
  }
  return false;
}



// FUNCTION 14663a340 FUN_14663a340 body=459 status=ok
// SIG undefined FUN_14663a340(void)

void FUN_14663a340(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[-2];
  if (lVar3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_14492b4b4(lVar3);
      if (lVar2 != 0) {
        if (param_1[4] != 0) {
          FUN_14480f766(lVar2);
        }
        param_1[4] = 0;
      }
      if (param_1[3] != 0) {
        FUN_14480f766(lVar3 + 0x6170);
      }
      param_1[3] = 0;
      lVar2 = FUN_140519fd4(lVar3);
      if (lVar2 != 0) {
        if (param_1[5] != 0) {
          FUN_14480f766(lVar2);
        }
        param_1[5] = 0;
      }
      plVar1 = param_1 + -6;
      lVar2 = *(longlong *)(&DAT_00006850 + lVar3);
      if (lVar2 != 0) {
        FUN_1401073f6(lVar2 + 0x3688,plVar1);
        FUN_1401073f6(lVar2 + 0x3698,plVar1);
      }
      FUN_1458d757c(lVar3 + 0x3d4,plVar1);
      FUN_1401073f6(lVar3 + 0x7f28,plVar1);
      if (param_1[8] != 0) {
        FUN_14480f766(lVar3 + 0x3f80);
      }
      param_1[8] = 0;
    }
  }
  lVar3 = FUN_14011be0c(param_1);
  if (lVar3 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (param_1[6] != 0) {
        FUN_14480f766(lVar3 + 0x32d0);
      }
      param_1[6] = 0;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar3 != 0) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (param_1[7] != 0) {
        FUN_14480f766(lVar3 + 0x400);
      }
      param_1[7] = 0;
    }
  }
  return;
}



// FUNCTION 14663a50c FUN_14663a50c body=39 status=ok
// SIG undefined FUN_14663a50c(void)

bool FUN_14663a50c(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 14663a534 FUN_14663a534 body=3136 status=ok
// SIG undefined FUN_14663a534(void)

void FUN_14663a534(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140170020();
  uVar4 = FUN_140495e96(param_1);
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 != 0) {
    lVar1 = param_1 + -0x30;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_14167b698;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_50,"FOakUIEvent_OnCharacterSelected",1);
      FUN_140391af6(lVar5,&local_38,local_50,&local_48);
      *(undefined8 *)(param_1 + 0x20) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_144257a22;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_58,"FOakUIEvent_OnCharacterSelected_LateJoin",1);
      FUN_140391af6(lVar5,&local_38,local_58,&local_48);
      *(undefined8 *)(param_1 + 0x28) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_144257c74;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_60,"FOakUIEvent_OnCharacterFocused",1);
      FUN_140391af6(lVar5,&local_38,local_60,&local_48);
      *(undefined8 *)(param_1 + 0x18) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_148e26de8;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_68,"FOakUIEvent_OnEnterCharacterRapSheet",1);
      FUN_140391af6(lVar5,&local_38,local_68,&local_48);
      *(undefined8 *)(param_1 + 0x30) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x38) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_148e26e14;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_70,"FOakUIEvent_OnExitCharacterRapSheet",1);
      FUN_140391af6(lVar5,&local_38,local_70,&local_48);
      *(undefined8 *)(param_1 + 0x38) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_148e26e8c;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_78,"FOakUIEvent_OnCharacterRapSheetDirectionalNav",1);
      FUN_140391af6(lVar5,&local_38,local_78,&local_48);
      *(undefined8 *)(param_1 + 0x40) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_148e26f4a;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_80,"FOakUIEvent_OnCharacterRapSheetTargetChanged",1);
      FUN_140391af6(lVar5,&local_38,local_80,&local_48);
      *(undefined8 *)(param_1 + 0x48) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = &LAB_148e27000;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_88,"FOakUIEvent_OnCharacterSelectMenuActiveChanged",1);
      FUN_140391af6(lVar5,&local_38,local_88,&local_48);
      *(undefined8 *)(param_1 + 0x50) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_148e2700a;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_90,"FOakUIEvent_OnCharacterSelectChoiceFinalize",1);
      FUN_140391af6(lVar5,&local_38,local_90,&local_48);
      *(undefined8 *)(param_1 + 0x58) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_148e27140;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_98,"FOakUIEvent_OnTryOpenDLCPage",1);
      FUN_140391af6(lVar5,&local_38,local_98,&local_48);
      *(undefined8 *)(param_1 + 0x60) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_146236162;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_a0,"FOakUIEvent_UpdateWaitingOnOthersIndicatorVisibility",1);
      FUN_140391af6(lVar5,&local_38,local_a0,&local_48);
      *(undefined8 *)(param_1 + 0x68) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x70) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b9a9da0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar1);
      puVar2[4] = FUN_148e271f4;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_1446ddc76(&local_a8,"FOakUIEvent_LeaveWaitingState",1);
      FUN_140391af6(lVar5,&local_38,local_a8,&local_48);
      *(undefined8 *)(param_1 + 0x70) = local_38;
      FUN_1449db362(&local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663b176 FUN_14663b176 body=651 status=ok
// SIG undefined FUN_14663b176(void)

void FUN_14663b176(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_140495e96();
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_OnCharacterSelected",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x20);
    FUN_1446ddc76(&local_38,"FOakUIEvent_OnCharacterSelected_LateJoin",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x28);
    FUN_1446ddc76(&local_40,"FOakUIEvent_OnCharacterFocused",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x18);
    FUN_1446ddc76(&local_48,"FOakUIEvent_OnEnterCharacterRapSheet",1);
    FUN_1401cd85c(lVar2,local_48,param_1 + 0x30);
    FUN_1446ddc76(&local_50,"FOakUIEvent_OnExitCharacterRapSheet",1);
    FUN_1401cd85c(lVar2,local_50,param_1 + 0x38);
    FUN_1446ddc76(&local_58,"FOakUIEvent_OnCharacterRapSheetDirectionalNav",1);
    FUN_1401cd85c(lVar2,local_58,param_1 + 0x40);
    FUN_1446ddc76(&local_60,"FOakUIEvent_OnCharacterRapSheetTargetChanged",1);
    FUN_1401cd85c(lVar2,local_60,param_1 + 0x48);
    FUN_1446ddc76(&local_68,"FOakUIEvent_OnCharacterSelectMenuActiveChanged",1);
    FUN_1401cd85c(lVar2,local_68,param_1 + 0x50);
    FUN_1446ddc76(&local_70,"FOakUIEvent_OnCharacterSelectChoiceFinalize",1);
    FUN_1401cd85c(lVar2,local_70,param_1 + 0x58);
    FUN_1446ddc76(&local_78,"FOakUIEvent_OnTryOpenDLCPage",1);
    FUN_1401cd85c(lVar2,local_78,param_1 + 0x60);
    FUN_1446ddc76(&local_80,"FOakUIEvent_UpdateWaitingOnOthersIndicatorVisibility",1);
    FUN_1401cd85c(lVar2,local_80,param_1 + 0x68);
    FUN_1446ddc76(&local_88,"FOakUIEvent_LeaveWaitingState",1);
    FUN_1401cd85c(lVar2,local_88,param_1 + 0x70);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663b402 FUN_14663b402 body=187 status=ok
// SIG undefined FUN_14663b402(void)

void FUN_14663b402(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  *(int *)(lVar3 + 0x90) = *(int *)(lVar3 + 0x90) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (*(longlong *)(lVar3 + 0x38) == param_2) {
    iVar4 = 1;
    if (*(int *)(lVar3 + 0x40) != 0) goto LAB_14663b475;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x40) + 1;
  }
  *(longlong *)(lVar3 + 0x38) = param_2;
  *(int *)(lVar3 + 0x40) = iVar4;
LAB_14663b475:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663b4be FUN_14663b4be body=182 status=ok
// SIG undefined FUN_14663b4be(void)

ulonglong FUN_14663b4be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar3 = FUN_1400d7050();
    if (lVar3 != 0) {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        lVar4 = FUN_1402a1246(lVar3);
        if (lVar4 != 0) {
          FUN_1407934de(&local_28,lVar3);
          uVar5 = CONCAT71((int7)((ulonglong)lVar3 >> 8),local_28 != 0);
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
              }
            }
          }
          goto LAB_14663b555;
        }
      }
    }
  }
  uVar5 = 0;
LAB_14663b555:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663b576 FUN_14663b576 body=328 status=ok
// SIG undefined FUN_14663b576(void)

void FUN_14663b576(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140170020();
  uVar3 = FUN_140495e96(param_1);
  lVar4 = FUN_1404960a8(uVar3);
  if (lVar4 != 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar1 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b9aac80;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1 + -0x30);
    puVar1[4] = &LAB_144259182;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_1446ddc76(&local_48,"FOakUIEvent_CreditsMenu",1);
    FUN_140391af6(lVar4,&local_30,local_48,&local_40);
    *(undefined8 *)(param_1 + 0x60) = local_30;
    FUN_1449db362(&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663b6c0 FUN_14663b6c0 body=120 status=ok
// SIG undefined FUN_14663b6c0(void)

void FUN_14663b6c0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140495e96();
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_28,"FOakUIEvent_CreditsMenu",1);
    FUN_1401cd85c(lVar2,local_28,param_1 + 0x60);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663b73a FUN_14663b73a body=152 status=ok
// SIG undefined FUN_14663b73a(void)

void FUN_14663b73a(longlong param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141237e82();
  FUN_1402815f4(param_1 + -0x30,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x4e0);
  SRWLock = (PSRWLOCK)(lVar3 + 0x40);
  AcquireSRWLockExclusive(SRWLock);
  piVar1 = (int *)(lVar3 + 0x3c);
  *piVar1 = *piVar1 + 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014663b7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663b7d4 FUN_14663b7d4 body=93 status=ok
// SIG undefined FUN_14663b7d4(void)

void FUN_14663b7d4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + -0x10);
  if (lVar2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14663b806;
  }
  lVar2 = 0;
LAB_14663b806:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14480f766(lVar2 + 0xc10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 14663b832 FUN_14663b832 body=193 status=ok
// SIG undefined FUN_14663b832(void)

undefined8 FUN_14663b832(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [36];
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
        lVar2 = FUN_1400d7050(param_1);
        if (lVar2 == 0) {
LAB_14663b8f0:
          lVar2 = 0;
        }
        else {
          lVar3 = FUN_144a5dd5e();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_14663b8f0;
        }
        FUN_140d27df6(lVar1,local_24,lVar2);
        if (local_24[0] < 0) goto LAB_14663b8ec;
      }
      uVar4 = 1;
      goto LAB_14663b8cd;
    }
  }
LAB_14663b8ec:
  uVar4 = 0;
LAB_14663b8cd:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663b8f4 FUN_14663b8f4 body=90 status=ok
// SIG undefined FUN_14663b8f4(void)

void FUN_14663b8f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1412bdaf0(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140457ffc(lVar1 + 0x2a8,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14663b94e FUN_14663b94e body=172 status=ok
// SIG undefined FUN_14663b94e(void)

void FUN_14663b94e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_1 + 0xa0);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa0);
    FUN_140457ffc(lVar2 + 0x110,param_1 + -0x30);
  }
  uVar3 = FUN_140495e96(param_1);
  lVar2 = FUN_1404960a8(uVar3);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_28,"FGbxUIEvent_AnalogCursor",1);
    FUN_1401cd85c(lVar2,local_28,param_1 + 0x88);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663ba1c FUN_14663ba1c body=196 status=ok
// SIG undefined FUN_14663ba1c(void)

void FUN_14663ba1c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = param_1 + -0x30;
  lVar2 = FUN_1412bdaf0();
  if (lVar2 != 0) {
    lVar2 = FUN_1400d6ce6(lVar2);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 400,lVar1);
      FUN_140457ffc(lVar2 + 0x160,lVar1);
    }
  }
  plVar3 = (longlong *)FUN_145a5afee(lVar1);
  if ((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    lVar2 = (**(code **)(*plVar3 + 0x7e0))(plVar3,&DAT_14cb8dce8);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 8,lVar1);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar2 = (**(code **)(*plVar3 + 0x7e0))(plVar3,&DAT_14cb8dcf0);
      if (lVar2 != 0) {
        FUN_140457ffc(lVar2 + 8,lVar1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14663bae6 FUN_14663bae6 body=550 status=ok
// SIG undefined FUN_14663bae6(void)

void FUN_14663bae6(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140170020();
  uVar3 = FUN_140495e96(param_1);
  lVar4 = FUN_1404960a8(uVar3);
  if (lVar4 != 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9ab510;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1 + -0x30);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_145903d08;
    FUN_1446ddc76(&local_68,"FOakUIEvent_Customization_SetEntryType",1);
    FUN_140391af6(lVar4,&local_50,local_68,&local_60);
    *(undefined8 *)(param_1 + 0x20) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14b9ab510;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1 + -0x30);
    puVar1[4] = FUN_148e2934a;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_1446ddc76(&local_70,"TriggerRenameCharacter",1);
    FUN_140391af6(lVar4,&local_50,local_70,&local_60);
    *(undefined8 *)(param_1 + 0x28) = local_50;
    FUN_1449db362(&local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663bd0e FUN_14663bd0e body=183 status=ok
// SIG undefined FUN_14663bd0e(void)

void FUN_14663bd0e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_140495e96();
  lVar2 = FUN_1404960a8(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_Customization_SetEntryType",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x20);
    FUN_1446ddc76(&local_38,"TriggerRenameCharacter",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663bdc6 FUN_14663bdc6 body=1873 status=ok
// SIG undefined FUN_14663bdc6(void)

undefined8 FUN_14663bdc6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  int iVar12;
  ushort uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong local_148 [2];
  undefined2 *local_138;
  longlong lStack_130;
  longlong local_128;
  undefined4 local_120;
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined2 *local_c0;
  longlong local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [8];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)(param_1 + 0x20);
  if (lVar9 != 0) {
    lVar6 = FUN_144a5dd5e();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (*(longlong *)(lVar9 + 0x398) != 0)) {
      lVar7 = FUN_144a7b4ca();
      lVar6 = *(longlong *)(lVar9 + 0x398);
      if (lVar6 != 0) {
        uVar8 = 0;
        if ((lVar7 == 0) || (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 == 0)) goto LAB_14663c0e9;
        if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)) goto LAB_14663c13f;
        FUN_145a14650(lVar6,local_68);
        local_78 = 0;
        uStack_70 = 0;
        local_88 = (undefined2 *)0x0;
        lStack_80 = 0;
        lVar7 = *param_2;
        if (lVar7 == DAT_14cbcfbd8) {
          local_158 = 0;
          FUN_14117274e(lVar6 + 0xd50,&DAT_14cbcfbd8,&local_78,0);
          plVar11 = local_108;
LAB_14663bf0a:
          uStack_a7 = 0;
          uStack_a8 = 0;
          uStack_af = 0;
          uStack_b0 = 0;
          uStack_90 = 0;
          local_98 = 0;
          local_a0 = 0;
          local_c0 = &DAT_14b08e0e0;
          *plVar11 = local_78;
          *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_70;
          FUN_1409e3b90(&local_f8);
          local_b8 = local_f0;
          uStack_b0 = (undefined1)local_e8;
          uStack_af = (undefined7)((ulonglong)local_e8 >> 8);
          if (local_e0 == 0) {
            uStack_a8 = 0;
            uStack_a7 = 0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
            UNLOCK();
            plVar11 = (longlong *)CONCAT71(uStack_a7,uStack_a8);
            uStack_a8 = (undefined1)local_e0;
            uStack_a7 = (undefined7)((ulonglong)local_e0 >> 8);
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar11 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
          }
          local_a0 = local_d8;
          FUN_14099a466(&local_98);
          FUN_141022a1a(&local_f8);
          FUN_1409e3c80(&local_c0,&local_88,0);
LAB_14663bf93:
          FUN_141022a1a(&local_c0);
LAB_14663bf98:
          FUN_1400021e4(param_2,&local_f8);
          FUN_144a7dea0(&local_c0,&local_f8,&local_88);
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_88 = local_c0;
          local_c0 = (undefined2 *)0x0;
          iVar12 = (int)local_b8;
          lStack_80 = local_b8;
          local_b8 = 0;
          if (local_f8 != 0) {
            FUN_1400020a8();
            iVar12 = (int)lStack_80;
          }
          if (iVar12 == *(int *)(param_1 + 0x148)) {
            if (1 < iVar12) {
              lVar9 = 0;
              while( true ) {
                uVar13 = *(ushort *)((longlong)local_88 + lVar9);
                uVar14 = (ulonglong)uVar13;
                uVar15 = *(ushort *)(*(longlong *)(param_1 + 0x140) + lVar9);
                if (uVar13 != uVar15) break;
                if (uVar13 == 0) goto LAB_14663c09e;
LAB_14663c065:
                lVar9 = lVar9 + 2;
              }
              if ((uVar15 | uVar13) < 0x80) {
                uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                uVar16 = (ulonglong)uVar15;
                uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
                if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_14663c065;
              }
              if (uVar13 != uVar15) goto LAB_14663c125;
            }
            goto LAB_14663c09e;
          }
          if (*(int *)(param_1 + 0x148) + iVar12 == 1) goto LAB_14663c09e;
LAB_14663c125:
          iVar4 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar4 = 0;
          }
          FUN_1402980a2((longlong *)(param_1 + 0x140),local_88,iVar4);
          uVar8 = 1;
        }
        else {
          if (lVar7 == DAT_14cbcfbe0) {
            local_158 = 0;
            FUN_14117274e(lVar6 + 0xd50,&DAT_14cbcfbe0,&local_78,0);
            plVar11 = local_118;
            goto LAB_14663bf0a;
          }
          if (lVar7 != DAT_14cbcfbe8) goto LAB_14663bf98;
          local_158 = 0;
          FUN_14117274e(lVar6 + 0xd50,&DAT_14cbcfbe8,&local_78,0);
          uStack_a8 = 0;
          uStack_a7 = 0;
          local_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          uStack_af = 0;
          local_c0 = &DAT_14b08e0e0;
          local_98 = 0;
          uStack_90 = 0;
          local_128 = local_78;
          local_120 = (undefined4)uStack_70;
          FUN_1409e3b90(&local_f8);
          local_b8 = local_f0;
          if (local_e0 != 0) {
            LOCK();
            *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
            UNLOCK();
          }
          plVar11 = (longlong *)CONCAT71(uStack_a7,uStack_a8);
          uStack_b0 = (undefined1)local_e8;
          uStack_af = (undefined7)((ulonglong)local_e8 >> 8);
          uStack_a8 = (undefined1)local_e0;
          uStack_a7 = (undefined7)((ulonglong)local_e0 >> 8);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          local_a0 = local_d8;
          FUN_14099a466(&local_98);
          FUN_141022a1a(&local_f8);
          FUN_1409e3c80(&local_c0,&local_88,0);
          FUN_140a9b590(lVar9 + 0x3910,&local_f8,1);
          if (local_f0 == 0) {
            uVar8 = FUN_14037df6e();
            local_f0 = FUN_14477b664(uVar8);
          }
          if (local_e8 != 0) {
LAB_14663c381:
            lVar9 = local_e8;
            if (local_f0 == 0) {
              uVar8 = FUN_14037df6e();
              local_f0 = FUN_14477b664(uVar8);
              lVar9 = local_e8;
              if (((local_e8 == 0) && (lVar9 = 0, local_f0 != 0)) && (local_f8 != 0)) {
                plVar11 = *(longlong **)(local_f0 + 0xb8);
                if ((plVar11 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar5 == '\0')) {
                  lVar9 = 0;
                  local_e8 = lVar9;
                }
                else {
                  uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
                  lVar9 = FUN_144aff482(uVar8,&local_f8);
                  local_e8 = lVar9;
                }
              }
            }
            puVar10 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
              puVar10 = *(undefined4 **)(lVar9 + 8);
            }
            local_148[0] = 0;
            local_148[1] = 0;
            FUN_1400b2348(puVar10,local_148,1);
            FUN_144a7dea0(local_148 + 2,local_148,&local_88);
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_88 = local_138;
            lStack_80 = lStack_130;
            local_138 = (undefined2 *)0x0;
            lStack_130 = 0;
            if (local_148[0] != 0) {
              FUN_1400020a8();
            }
            goto LAB_14663bf93;
          }
          if (((local_f0 != 0) && (local_f8 != 0)) &&
             ((plVar11 = *(longlong **)(local_f0 + 0xb8), plVar11 != (longlong *)0x0 &&
              (cVar5 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar5 != '\0')))) {
            uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
            local_e8 = FUN_144aff482(uVar8,&local_f8);
            if (local_e8 != 0) goto LAB_14663c381;
          }
          FUN_141022a1a(&local_c0);
LAB_14663c09e:
          uVar8 = 0;
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_14028f404(local_78,uStack_70 & 0xffffffff);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14663c0e9;
      }
    }
  }
LAB_14663c13f:
  uVar8 = 0;
LAB_14663c0e9:
  if ((local_50 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14663c518 FUN_14663c518 body=231 status=ok
// SIG undefined FUN_14663c518(void)

undefined8 FUN_14663c518(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  if (lVar1 == DAT_14cbcfbd8) {
    pcVar3 = "StandInScene_Thumbnail_Player";
  }
  else if (lVar1 == DAT_14cbcfbe0) {
    pcVar3 = "StandInScene_Thumbnail_Echo4";
  }
  else {
    if (lVar1 != DAT_14cbcfbe8) {
      uVar2 = 0;
      goto LAB_14663c582;
    }
    pcVar3 = "StandInScene_Thumbnail_Vehicle";
  }
  uStack_18 = 0;
  local_20 = 0;
  local_28 = 0;
  uStack_30 = 0;
  local_38 = 0;
  uVar2 = 0;
  FUN_1446ddda2(&local_38,pcVar3,0);
  if (DAT_14cb80e90 != 0) {
    uVar2 = FUN_144837462(DAT_14cb80e90,&local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
LAB_14663c582:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14663c600 FUN_14663c600 body=133 status=ok
// SIG undefined FUN_14663c600(void)

undefined8 *
FUN_14663c600(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = 0;
  iVar1 = (int)param_6[1];
  _Src = (void *)*param_6;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14663c686 FUN_14663c686 body=29 status=ok
// SIG undefined FUN_14663c686(void)

bool FUN_14663c686(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663c6a4 FUN_14663c6a4 body=24 status=ok
// SIG undefined FUN_14663c6a4(void)

bool FUN_14663c6a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663c6bc FUN_14663c6bc body=29 status=ok
// SIG undefined FUN_14663c6bc(void)

bool FUN_14663c6bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663c6da FUN_14663c6da body=24 status=ok
// SIG undefined FUN_14663c6da(void)

bool FUN_14663c6da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663c6f2 FUN_14663c6f2 body=29 status=ok
// SIG undefined FUN_14663c6f2(void)

undefined8 FUN_14663c6f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663c710 FUN_14663c710 body=38 status=ok
// SIG undefined FUN_14663c710(void)

undefined8 FUN_14663c710(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OnCharacterSelectionConfirmed",1);
  return param_2;
}



// FUNCTION 14663c736 FUN_14663c736 body=132 status=ok
// SIG undefined FUN_14663c736(void)

void FUN_14663c736(longlong param_1,int param_2)

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



// FUNCTION 14663c7bc FUN_14663c7bc body=150 status=ok
// SIG undefined FUN_14663c7bc(void)

void FUN_14663c7bc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14663c852 FUN_14663c852 body=26 status=ok
// SIG undefined FUN_14663c852(void)

bool FUN_14663c852(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663c86c FUN_14663c86c body=24 status=ok
// SIG undefined FUN_14663c86c(void)

bool FUN_14663c86c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663c884 FUN_14663c884 body=101 status=ok
// SIG undefined FUN_14663c884(void)

void FUN_14663c884(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a81e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14663c8ea FUN_14663c8ea body=29 status=ok
// SIG undefined FUN_14663c8ea(void)

bool FUN_14663c8ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663c908 FUN_14663c908 body=26 status=ok
// SIG undefined FUN_14663c908(void)

bool FUN_14663c908(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663c922 FUN_14663c922 body=24 status=ok
// SIG undefined FUN_14663c922(void)

bool FUN_14663c922(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663c93a FUN_14663c93a body=29 status=ok
// SIG undefined FUN_14663c93a(void)

undefined8 FUN_14663c93a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14663c958 FUN_14663c958 body=38 status=ok
// SIG undefined FUN_14663c958(void)

undefined8 FUN_14663c958(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_BigMap_SetMapViewMode",1);
  return param_2;
}



// FUNCTION 14663c97e FUN_14663c97e body=132 status=ok
// SIG undefined FUN_14663c97e(void)

void FUN_14663c97e(longlong param_1,int param_2)

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



// FUNCTION 14663ca04 FUN_14663ca04 body=26 status=ok
// SIG undefined FUN_14663ca04(void)

bool FUN_14663ca04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663ca1e FUN_14663ca1e body=24 status=ok
// SIG undefined FUN_14663ca1e(void)

bool FUN_14663ca1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663ca36 FUN_14663ca36 body=24 status=ok
// SIG undefined FUN_14663ca36(void)

bool FUN_14663ca36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663ca4e FUN_14663ca4e body=26 status=ok
// SIG undefined FUN_14663ca4e(void)

bool FUN_14663ca4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663ca68 FUN_14663ca68 body=26 status=ok
// SIG undefined FUN_14663ca68(void)

bool FUN_14663ca68(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663ca82 FUN_14663ca82 body=24 status=ok
// SIG undefined FUN_14663ca82(void)

bool FUN_14663ca82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663ca9a FUN_14663ca9a body=26 status=ok
// SIG undefined FUN_14663ca9a(void)

bool FUN_14663ca9a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663cab4 FUN_14663cab4 body=24 status=ok
// SIG undefined FUN_14663cab4(void)

bool FUN_14663cab4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663cacc FUN_14663cacc body=26 status=ok
// SIG undefined FUN_14663cacc(void)

bool FUN_14663cacc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663cae6 FUN_14663cae6 body=24 status=ok
// SIG undefined FUN_14663cae6(void)

bool FUN_14663cae6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663cafe FUN_14663cafe body=120 status=ok
// SIG undefined FUN_14663cafe(void)

ulonglong FUN_14663cafe(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if (*param_1 == (int)local_20) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
    if (param_1[1] == local_20._4_4_) goto LAB_14663cb3e;
  }
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(&local_20);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
LAB_14663cb3e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14663cb78 FUN_14663cb78 body=482 status=ok
// SIG undefined FUN_14663cb78(void)

void FUN_14663cb78(longlong *param_1)

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
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 14663cd5c FUN_14663cd5c body=26 status=ok
// SIG undefined FUN_14663cd5c(void)

bool FUN_14663cd5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663cd76 FUN_14663cd76 body=26 status=ok
// SIG undefined FUN_14663cd76(void)

bool FUN_14663cd76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663cd90 FUN_14663cd90 body=26 status=ok
// SIG undefined FUN_14663cd90(void)

bool FUN_14663cd90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663cdaa FUN_14663cdaa body=26 status=ok
// SIG undefined FUN_14663cdaa(void)

bool FUN_14663cdaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663cdc4 FUN_14663cdc4 body=29 status=ok
// SIG undefined FUN_14663cdc4(void)

bool FUN_14663cdc4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663cde2 FUN_14663cde2 body=29 status=ok
// SIG undefined FUN_14663cde2(void)

bool FUN_14663cde2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663ce00 FUN_14663ce00 body=29 status=ok
// SIG undefined FUN_14663ce00(void)

bool FUN_14663ce00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663ce1e FUN_14663ce1e body=24 status=ok
// SIG undefined FUN_14663ce1e(void)

bool FUN_14663ce1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663ce36 FUN_14663ce36 body=26 status=ok
// SIG undefined FUN_14663ce36(void)

bool FUN_14663ce36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663ce50 FUN_14663ce50 body=24 status=ok
// SIG undefined FUN_14663ce50(void)

bool FUN_14663ce50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663ce68 FUN_14663ce68 body=29 status=ok
// SIG undefined FUN_14663ce68(void)

bool FUN_14663ce68(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663ce86 FUN_14663ce86 body=24 status=ok
// SIG undefined FUN_14663ce86(void)

bool FUN_14663ce86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663ce9e FUN_14663ce9e body=26 status=ok
// SIG undefined FUN_14663ce9e(void)

bool FUN_14663ce9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663ceb8 FUN_14663ceb8 body=24 status=ok
// SIG undefined FUN_14663ceb8(void)

bool FUN_14663ceb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663ced0 FUN_14663ced0 body=24 status=ok
// SIG undefined FUN_14663ced0(void)

bool FUN_14663ced0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663cee8 FUN_14663cee8 body=24 status=ok
// SIG undefined FUN_14663cee8(void)

bool FUN_14663cee8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663cf00 FUN_14663cf00 body=156 status=ok
// SIG undefined FUN_14663cf00(void)

bool FUN_14663cf00(longlong param_1,undefined4 param_2)

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



// FUNCTION 14663cf9e FUN_14663cf9e body=24 status=ok
// SIG undefined FUN_14663cf9e(void)

bool FUN_14663cf9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663cfb6 FUN_14663cfb6 body=24 status=ok
// SIG undefined FUN_14663cfb6(void)

bool FUN_14663cfb6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663cfce FUN_14663cfce body=24 status=ok
// SIG undefined FUN_14663cfce(void)

bool FUN_14663cfce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663cfe6 FUN_14663cfe6 body=29 status=ok
// SIG undefined FUN_14663cfe6(void)

bool FUN_14663cfe6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663d004 FUN_14663d004 body=29 status=ok
// SIG undefined FUN_14663d004(void)

bool FUN_14663d004(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14663d022 FUN_14663d022 body=26 status=ok
// SIG undefined FUN_14663d022(void)

bool FUN_14663d022(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663d03c FUN_14663d03c body=24 status=ok
// SIG undefined FUN_14663d03c(void)

bool FUN_14663d03c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663d054 FUN_14663d054 body=26 status=ok
// SIG undefined FUN_14663d054(void)

bool FUN_14663d054(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663d06e FUN_14663d06e body=24 status=ok
// SIG undefined FUN_14663d06e(void)

bool FUN_14663d06e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663d086 FUN_14663d086 body=26 status=ok
// SIG undefined FUN_14663d086(void)

bool FUN_14663d086(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14663d0a0 FUN_14663d0a0 body=24 status=ok
// SIG undefined FUN_14663d0a0(void)

bool FUN_14663d0a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663d0b8 FUN_14663d0b8 body=24 status=ok
// SIG undefined FUN_14663d0b8(void)

bool FUN_14663d0b8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663d0d0 FUN_14663d0d0 body=24 status=ok
// SIG undefined FUN_14663d0d0(void)

bool FUN_14663d0d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663d0e8 FUN_14663d0e8 body=24 status=ok
// SIG undefined FUN_14663d0e8(void)

bool FUN_14663d0e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14663d100 FUN_14663d100 body=26 status=ok
// SIG undefined FUN_14663d100(void)

bool FUN_14663d100(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}


