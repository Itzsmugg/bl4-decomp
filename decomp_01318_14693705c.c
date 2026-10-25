// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14693705c FUN_14693705c body=427 status=ok
// SIG undefined FUN_14693705c(void)

longlong *
FUN_14693705c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_6;
  FUN_1406da352(local_78,param_3,param_4,param_5);
  plVar4 = (longlong *)FUN_14695001a(param_1,local_68,local_78);
  if (*plVar4 != 0) goto LAB_1469370d2;
  plVar5 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149eda370;
  local_88 = param_6;
  FUN_146936dbe(plVar5 + 2,param_3,param_4,param_5);
  if (plVar5 == (longlong *)0x0) {
    *plVar4 = 0x10;
    plVar6 = (longlong *)plVar4[1];
    if (plVar6 == (longlong *)0x0) goto LAB_1469370d2;
    plVar4[1] = 0;
LAB_14693717d:
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
    if (plVar5 == (longlong *)0x0) goto LAB_1469370d2;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *plVar4 = (longlong)(plVar5 + 2);
    plVar6 = (longlong *)plVar4[1];
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      plVar4[1] = (longlong)plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_14693717d;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_1469370d2:
  *param_2 = *plVar4;
  lVar3 = plVar4[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146937212 FUN_146937212 body=54 status=ok
// SIG undefined FUN_146937212(void)

undefined8 FUN_146937212(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = FUN_144b63c10(param_1,&DAT_14c96848d);
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  uVar4 = *(undefined8 *)(lVar6 + 0x30);
  uVar5 = *(undefined8 *)(lVar6 + 0x38);
  *param_3 = *(undefined8 *)(lVar6 + 0x10);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  param_3[4] = uVar4;
  param_3[5] = uVar5;
  return 1;
}



// FUNCTION 146937248 FUN_146937248 body=168 status=ok
// SIG undefined FUN_146937248(void)

int FUN_146937248(undefined8 param_1,undefined8 param_2,int param_3,int *param_4,uint param_5,
                 int *param_6,uint param_7)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_144b63c40();
  uVar2 = FUN_144b642c0(uVar2);
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar1 = FUN_144b42f90(uVar2,*param_4);
      *param_6 = iVar1;
      iVar3 = *param_4;
      if (iVar1 == 0 && iVar3 != 0) {
        iVar1 = FUN_144b42f90(uVar2,0xfffd);
        *param_6 = iVar1;
        iVar3 = *param_4;
      }
      if (iVar3 != 0 && iVar1 == 0) {
        return iVar4;
      }
      param_4 = (int *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      iVar4 = iVar4 + 1;
    } while (param_3 != iVar4);
  }
  return param_3;
}



// FUNCTION 1469372f0 FUN_1469372f0 body=96 status=ok
// SIG undefined FUN_1469372f0(void)

bool FUN_1469372f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 4;
  local_38 = 4;
  local_30 = param_4;
  local_c = param_3;
  iVar1 = FUN_146937248(param_1,4,1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146937351 FUN_146937351 body=344 status=ok
// SIG undefined FUN_146937351(void)

void FUN_146937351(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4,
                  uint param_5,int *param_6,uint param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  int local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = FUN_144b63c40();
  uVar6 = FUN_144b642c0(uVar6);
  uVar7 = FUN_144b63c40(param_1);
  uVar5 = FUN_144b64300(uVar7);
  puVar8 = (undefined4 *)FUN_144b63c10(param_1,&DAT_14c96848d);
  local_60 = 0;
  local_4c = 0;
  FUN_144b63d00(param_1,&local_60);
  iVar3 = local_60;
  local_78 = *puVar8;
  local_70 = puVar8[1];
  FUN_1406da070(*(undefined8 *)(puVar8 + 2),&local_60,uVar6,uVar5);
  if (param_3 != 0) {
    uVar6 = CONCAT44(uStack_5c,local_60);
    do {
      local_4c = 0;
      cVar4 = FUN_1406d7a52(uVar6,*param_4,&local_4c);
      iVar9 = -local_4c;
      if (-1 < iVar3) {
        iVar9 = local_4c;
      }
      iVar9 = iVar9 + 0x200 >> 10;
      if (cVar4 == '\0') {
        iVar9 = 0;
      }
      *param_6 = iVar9;
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469374aa FUN_1469374aa body=98 status=ok
// SIG undefined FUN_1469374aa(void)

undefined4 FUN_1469374aa(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 *local_30;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_18;
  local_18 = 0;
  local_28 = 4;
  local_38 = 4;
  local_14 = param_3;
  FUN_146937351(param_1,param_2,1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693750d FUN_14693750d body=347 status=ok
// SIG undefined FUN_14693750d(void)

void FUN_14693750d(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4,
                  uint param_5,int *param_6,uint param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = FUN_144b63c40();
  uVar6 = FUN_144b642c0(uVar6);
  uVar7 = FUN_144b63c40(param_1);
  uVar5 = FUN_144b64300(uVar7);
  puVar8 = (undefined4 *)FUN_144b63c10(param_1,&DAT_14c96848d);
  local_60 = 0;
  local_4c = 0;
  FUN_144b63d00(param_1,&local_60,&local_4c);
  iVar3 = local_4c;
  local_78 = *puVar8;
  local_70 = puVar8[1];
  FUN_1406da070(*(undefined8 *)(puVar8 + 2),&local_60,uVar6,uVar5 | 0x10);
  if (param_3 != 0) {
    uVar6 = CONCAT44(uStack_5c,local_60);
    do {
      local_4c = 0;
      cVar4 = FUN_1406d7a52(uVar6,*param_4,&local_4c);
      iVar9 = -local_4c;
      if (iVar3 < 0) {
        iVar9 = local_4c;
      }
      iVar9 = iVar9 + 0x200 >> 10;
      if (cVar4 == '\0') {
        iVar9 = 0;
      }
      *param_6 = iVar9;
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146937669 FUN_146937669 body=98 status=ok
// SIG undefined FUN_146937669(void)

undefined4 FUN_146937669(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 *local_30;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_18;
  local_18 = 0;
  local_28 = 4;
  local_38 = 4;
  local_14 = param_3;
  FUN_14693750d(param_1,param_2,1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469376cc FUN_1469376cc body=348 status=ok
// SIG undefined FUN_1469376cc(void)

undefined4
FUN_1469376cc(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  int local_a0;
  int local_9c [4];
  int local_8c;
  int local_88;
  int local_80;
  int local_7c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_144b63c40();
  uVar5 = FUN_144b642c0(uVar5);
  uVar6 = FUN_144b63c40(param_1);
  uVar4 = FUN_144b64300(uVar6);
  puVar7 = (undefined4 *)FUN_144b63c10(param_1,&DAT_14c96848d);
  local_b8 = *puVar7;
  local_b0 = puVar7[1];
  FUN_14693705c(*(undefined8 *)(puVar7 + 2),&local_48,uVar5,uVar4);
  local_58 = 0;
  uStack_50 = 0;
  cVar3 = FUN_146936e50(local_48,param_3);
  uVar4 = 0;
  if (cVar3 != '\0') {
    *param_4 = local_8c - local_80;
    *param_5 = local_7c + local_88;
    local_9c[0] = 0;
    local_a0 = 0;
    FUN_144b63d00(param_1,local_9c);
    if (local_9c[0] < 0) {
      *param_4 = -*param_4;
    }
    if (local_a0 < 0) {
      *param_5 = -*param_5;
    }
    uVar4 = 1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146937829 FUN_146937829 body=207 status=ok
// SIG undefined FUN_146937829(void)

undefined4
FUN_146937829(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_144b63c40();
  uVar4 = FUN_144b642c0(uVar4);
  puVar5 = (undefined4 *)FUN_144b63c10(param_1,&DAT_14c96848d);
  local_48 = puVar5[1];
  FUN_1406d9de0(*(undefined8 *)(puVar5 + 2),&local_38,uVar4,*puVar5);
  if ((local_38 == 0) ||
     (cVar3 = FUN_1406d7e20(local_38,param_3,param_4,local_40), uVar6 = local_40[0], cVar3 == '\0'))
  {
    uVar6 = 0;
  }
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1469378f9 FUN_1469378f9 body=354 status=ok
// SIG undefined FUN_1469378f9(void)

undefined4 FUN_1469378f9(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  int local_a0;
  int local_9c [2];
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_144b63c40();
  uVar5 = FUN_144b642c0(uVar5);
  uVar6 = FUN_144b63c40(param_1);
  uVar4 = FUN_144b64300(uVar6);
  puVar7 = (undefined4 *)FUN_144b63c10(param_1,&DAT_14c96848d);
  local_b8 = *puVar7;
  local_b0 = puVar7[1];
  FUN_14693705c(*(undefined8 *)(puVar7 + 2),&local_48,uVar5,uVar4);
  local_58 = 0;
  uStack_50 = 0;
  cVar3 = FUN_146936e50(local_48,param_3);
  uVar4 = 0;
  if (cVar3 != '\0') {
    *param_4 = local_8c;
    param_4[1] = local_88;
    param_4[2] = local_94;
    param_4[3] = -local_90;
    local_9c[0] = 0;
    local_a0 = 0;
    FUN_144b63d00(param_1,local_9c);
    if (local_9c[0] < 0) {
      *param_4 = -*param_4;
      param_4[2] = -param_4[2];
    }
    if (local_a0 < 0) {
      param_4[1] = -param_4[1];
      param_4[3] = -param_4[3];
    }
    uVar4 = 1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146937a5c FUN_146937a5c body=312 status=ok
// SIG undefined FUN_146937a5c(void)

undefined4
FUN_146937a5c(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_90 [64];
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = FUN_144b63c40();
  uVar5 = FUN_144b642c0(uVar5);
  uVar6 = FUN_144b63c40(param_1);
  uVar4 = FUN_144b64300(uVar6);
  puVar7 = (undefined4 *)FUN_144b63c10(param_1,&DAT_14c96848d);
  local_a8 = *puVar7;
  local_a0 = puVar7[1];
  FUN_14693705c(*(undefined8 *)(puVar7 + 2),&local_40,uVar5,uVar4);
  local_50 = 0;
  uStack_48 = 0;
  cVar3 = FUN_146936e50(local_40,param_3,local_90);
  uVar4 = 0;
  if ((cVar3 != '\0') && (uVar4 = 0, param_4 < (uint)uStack_48)) {
    *param_5 = *(undefined4 *)(local_50 + (longlong)(int)param_4 * 8);
    *param_6 = *(undefined4 *)(local_50 + 4 + (longlong)(int)param_4 * 8);
    uVar4 = 1;
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146937b96 FUN_146937b96 body=876 status=ok
// SIG undefined FUN_146937b96(void)

undefined8
FUN_146937b96(undefined8 *param_1,longlong *param_2,undefined4 param_3,longlong *param_4,
             float param_5)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong *local_b0;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar12 = 0.0;
  if (0.0 <= *(float *)(param_4 + 9)) {
    fVar12 = *(float *)(param_4 + 9);
  }
  fVar13 = 0.0;
  if (0.0 <= param_5) {
    fVar13 = param_5;
  }
  lVar1 = *param_2;
  iVar4 = FUN_144b42fe0(((int)(fVar12 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar13 * 65536.0));
  FUN_14011ecb7(lVar1,iVar4 + 0x20 >> 6);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar7 = FUN_144b641f0(lVar1,0);
  FUN_144b642e0(uVar7,param_3);
  local_9c = 0;
  local_a0 = 0;
  FUN_144b63d00(uVar7);
  local_a8 = *param_4;
  if ((local_a8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar3 = FUN_140af803e(&local_a8);
  local_b0 = param_4;
  if (cVar3 == '\0') {
    uVar10 = FUN_146936c9c(*param_2,(char)param_2[0x23]);
    uVar5 = FUN_140af7d6f(*param_2,(char)param_2[0x23]);
LAB_146937d82:
    iVar4 = FUN_140af7db2(*param_2,(char)param_2[0x23]);
  }
  else {
    if ((char)param_2[0x17] == '\0') {
      uVar10 = FUN_146936c9c(*param_2,(char)param_2[0x23]);
    }
    else {
      iVar4 = FUN_144b42fe0(*(undefined4 *)((longlong)param_2 + 0xbc),
                            *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + 0x20));
      uVar10 = iVar4 + 0x3fU & 0xffffffc0;
    }
    if (*(char *)((longlong)param_2 + 0xb9) == '\0') {
      uVar5 = FUN_140af7d6f(*param_2,(char)param_2[0x23]);
    }
    else {
      uVar5 = FUN_144b42fe0((int)param_2[0x18],
                            *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + 0x20));
      uVar5 = uVar5 & 0xffffffc0;
    }
    if ((char)param_2[0x17] == '\0') {
      if (*(char *)((longlong)param_2 + 0xb9) == '\0') goto LAB_146937d82;
      uVar11 = FUN_146936c9c(*param_2,(char)param_2[0x23]);
    }
    else {
      iVar4 = FUN_144b42fe0(*(undefined4 *)((longlong)param_2 + 0xbc),
                            *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + 0x20));
      uVar11 = iVar4 + 0x3fU & 0xffffffc0;
    }
    if (*(char *)((longlong)param_2 + 0xb9) == '\x01') {
      uVar6 = FUN_144b42fe0((int)param_2[0x18],
                            *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + 0x20));
      uVar6 = uVar6 & 0xffffffc0;
    }
    else {
      uVar6 = FUN_140af7d6f(*param_2,(char)param_2[0x23]);
    }
    iVar4 = uVar11 - uVar6;
  }
  iVar4 = (uVar5 - uVar10) + iVar4;
  iVar2 = -iVar4;
  uVar11 = -uVar5;
  uVar6 = -uVar10;
  if (-1 < local_a0) {
    iVar2 = iVar4;
    uVar11 = uVar5;
    uVar6 = uVar10;
  }
  uVar8 = FUN_144b63a00(uVar7);
  FUN_144b63b30(uVar7);
  FUN_144b63c50(uVar8,param_1[1],0,0);
  uVar7 = *param_1;
  lVar1 = local_b0[9];
  puVar9 = (undefined4 *)FUN_14001cc68(0x40,0x10);
  *puVar9 = (int)lVar1;
  puVar9[1] = param_5;
  *(undefined8 *)(puVar9 + 2) = uVar7;
  puVar9[4] = uVar6;
  puVar9[5] = uVar11;
  puVar9[6] = iVar2;
  puVar9[7] = (undefined4)local_98;
  puVar9[8] = local_98._4_4_;
  puVar9[9] = (undefined4)uStack_90;
  puVar9[10] = uStack_90._4_4_;
  puVar9[0xb] = (undefined4)local_88;
  puVar9[0xc] = local_88._4_4_;
  puVar9[0xd] = (undefined4)uStack_80;
  puVar9[0xe] = uStack_80._4_4_;
  puVar9[0xf] = local_78;
  local_b8 = 1;
  FUN_144b63bf0(uVar8,&DAT_14c96848d,puVar9,&LAB_146937208);
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146937f08 FUN_146937f08 body=189 status=ok
// SIG undefined FUN_146937f08(void)

undefined8
FUN_146937f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined8 local_48;
  int local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)FUN_1447a1f4a(param_3);
  local_88 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    local_88 = 0;
  }
  local_48 = *puVar1;
  local_58 = local_34;
  local_70 = param_5;
  local_60 = 2;
  local_68 = 0xffffffff;
  local_78 = 0;
  local_80 = param_4;
  local_40 = local_88;
  FUN_140499f08(param_1,param_2,&local_48,0);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146937fc6 FUN_146937fc6 body=146 status=ok
// SIG undefined FUN_146937fc6(void)

undefined4
FUN_146937fc6(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_2[2];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_38 = &local_14;
  local_14 = 0;
  local_50 = param_5;
  local_40 = 1;
  local_58 = 0;
  local_60 = param_3;
  local_48 = param_4;
  FUN_140499f08(param_5,local_30,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693805a FUN_14693805a body=92 status=ok
// SIG undefined FUN_14693805a(void)

void FUN_14693805a(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined2 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144955c2e(*(undefined8 *)(param_1 + 0x50),param_2,param_3,&DAT_14c96b1c0);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_2 + 0x54));
  FUN_1448304f6(uVar1,param_4,uVar2 & 0xffffffff);
  FUN_1448304f6(uVar1,param_5,uVar2 & 0xffffffff);
  FUN_14483063e();
  return;
}



// FUNCTION 1469380ba FUN_1469380ba body=111 status=ok
// SIG undefined FUN_1469380ba(void)

undefined8 FUN_1469380ba(longlong param_1,short param_2,short param_3,short *param_4)

{
  byte bVar1;
  longlong lVar2;
  
  if ((0 < param_3 && 0 < param_2) &&
     (lVar2 = FUN_1408fb762(param_1 + 8,param_2,param_3), lVar2 != 0)) {
    param_4[2] = (ushort)*(byte *)(lVar2 + 0x20) + (short)*(undefined4 *)(lVar2 + 0x10);
    param_4[3] = (ushort)*(byte *)(lVar2 + 0x20) + (short)*(undefined4 *)(lVar2 + 0x14);
    *param_4 = (short)*(undefined4 *)(lVar2 + 0x18) + (ushort)*(byte *)(lVar2 + 0x20) * -2;
    bVar1 = *(byte *)(lVar2 + 0x20);
    param_4[1] = (short)*(undefined4 *)(lVar2 + 0x1c) + (ushort)bVar1 * -2;
    return CONCAT71((uint7)(uint3)((uint)bVar1 * 2 >> 8),1);
  }
  return 0;
}



// FUNCTION 14693812a FUN_14693812a body=221 status=ok
// SIG undefined FUN_14693812a(void)

void FUN_14693812a(longlong param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = (int)*param_2;
  if ((0 < iVar1) && (iVar2 = (int)param_2[1], 0 < iVar2)) {
    uVar4 = (uint)(*(int *)(param_1 + 0x44) != 0);
    if (((int)uVar4 <= (int)param_2[2]) && ((int)uVar4 <= (int)param_2[3])) {
      iVar3 = 0;
      if ((ulonglong)*(uint *)(param_1 + 0x50) < 3) {
        iVar3 = *(int *)(&DAT_149eda730 + (ulonglong)*(uint *)(param_1 + 0x50) * 4);
      }
      if (*(int *)(param_2 + 8) == iVar2 * iVar1 * iVar3) {
        local_28 = *(int *)(param_1 + 0x44) != 0;
        local_2c = iVar2 + (uint)(byte)local_28 * 2;
        local_30 = iVar1 + (uint)(byte)local_28 * 2;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = (int)param_2[2] - uVar4;
        local_34 = (int)param_2[3] - uVar4;
        FUN_1408fb934(param_1 + 8,&local_48,param_2 + 4);
        FUN_1469739dc(param_1 + 8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146938208 FUN_146938208 body=126 status=ok
// SIG undefined FUN_146938208(void)

undefined2 * FUN_146938208(undefined2 *param_1,uint param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458a38a4(local_30);
  puVar1 = (undefined2 *)(local_30[0] + (ulonglong)(param_2 & 0xffff) * 0x28);
  *param_1 = *puVar1;
  plVar2 = *(longlong **)(puVar1 + 4);
  *(longlong **)(param_1 + 4) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar1 + 8);
  uVar3 = *(undefined4 *)(puVar1 + 0xe);
  uVar4 = *(undefined4 *)(puVar1 + 0x10);
  uVar5 = *(undefined4 *)(puVar1 + 0x12);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar1 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x12) = uVar5;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146938288 FUN_146938288 body=452 status=ok
// SIG undefined FUN_146938288(void)

longlong * FUN_146938288(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_58 [38];
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (lVar3 != 0) goto LAB_1469382c4;
  if (*(char *)(param_1 + 0x120) != '\x01') {
    lVar3 = 0;
    goto LAB_1469382c4;
  }
  lVar4 = FUN_1428643b4(param_1);
  local_31 = FUN_1462794cc(lVar4);
  local_32 = FUN_1406d9a7c(lVar4);
  lVar3 = *(longlong *)(lVar4 + 0x20);
  if (lVar3 != 0) {
    uVar5 = FUN_1406d9ab2();
    plVar6 = (longlong *)FUN_144718840(lVar3,uVar5);
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_14695115e(plVar7,lVar4,&local_32,&local_31);
  plVar6 = (longlong *)0x0;
  if (plVar7 != (longlong *)&DAT_fffffffffffffff0) {
    plVar6 = plVar7 + 4;
  }
  if (plVar7 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x90) = plVar6;
    plVar6 = *(longlong **)(param_1 + 0x98);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
LAB_1469383bd:
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
      if (plVar7 != (longlong *)0x0) goto LAB_1469383e1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x90) = plVar6;
    plVar6 = *(longlong **)(param_1 + 0x98);
    if (plVar7 == plVar6) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
      *(longlong **)(param_1 + 0x98) = plVar7;
      if (plVar6 != (longlong *)0x0) goto LAB_1469383bd;
    }
LAB_1469383e1:
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  lVar3 = *(longlong *)(param_1 + 0x90);
LAB_1469382c4:
  *param_2 = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x98);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693844e FUN_14693844e body=32 status=ok
// SIG undefined FUN_14693844e(void)

undefined8 FUN_14693844e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FLegacySlateFontInfoCache");
  return param_2;
}



// FUNCTION 14693848c FUN_14693848c body=90 status=ok
// SIG undefined FUN_14693848c(void)

void FUN_14693848c(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 8,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001469384e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x18,0,0);
  return;
}



// FUNCTION 1469384e6 FUN_1469384e6 body=498 status=ok
// SIG undefined FUN_1469384e6(void)

void FUN_1469384e6(int param_1,int param_2,longlong *param_3,int param_4,int param_5,
                  longlong *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  
  FUN_1401211f6(param_6,param_5 * param_4,1);
  if (0 < param_5) {
    uVar11 = param_2 - 1;
    uVar10 = param_1 - 1;
    fVar20 = 0.0;
    uVar6 = 0;
    iVar8 = 0;
    do {
      if (0 < param_4) {
        uVar13 = (ulonglong)uVar6;
        uVar2 = (int)(fVar20 + 0.5);
        if ((int)uVar11 <= (int)(fVar20 + 0.5)) {
          uVar2 = uVar11;
        }
        iVar14 = 0;
        uVar19 = 0;
        if (0 < (int)uVar2) {
          uVar19 = (ulonglong)uVar2;
        }
        uVar4 = (uint)((float)param_2 / (float)param_5 + fVar20 + 0.5);
        if ((int)uVar11 <= (int)uVar4) {
          uVar4 = uVar11;
        }
        uVar17 = 0;
        if (0 < (int)uVar4) {
          uVar17 = uVar4;
        }
        fVar21 = 0.0;
        do {
          fVar22 = (float)param_1 / (float)param_4 + fVar21;
          uVar3 = (int)(fVar21 + 0.5);
          if ((int)uVar10 <= (int)(fVar21 + 0.5)) {
            uVar3 = uVar10;
          }
          uVar7 = (uint)(fVar22 + 0.5);
          if ((int)uVar10 <= (int)uVar7) {
            uVar7 = uVar10;
          }
          uVar15 = 0;
          if (0 < (int)uVar7) {
            uVar15 = uVar7;
          }
          dVar23 = 0.0;
          iVar5 = 0;
          if ((int)uVar3 <= (int)uVar15) {
            iVar5 = 0;
            if ((int)uVar3 < 1) {
              uVar3 = 0;
            }
            pbVar18 = (byte *)(*param_3 + (longlong)param_1 * uVar19 + (ulonglong)uVar3);
            uVar9 = (ulonglong)uVar3;
            do {
              pbVar12 = pbVar18;
              lVar16 = uVar19 - 1;
              if ((int)uVar2 <= (int)uVar17) {
                do {
                  dVar23 = dVar23 + (double)*pbVar12;
                  iVar5 = iVar5 + 1;
                  lVar16 = lVar16 + 1;
                  pbVar12 = pbVar12 + param_1;
                } while (lVar16 < (int)uVar4);
              }
              pbVar18 = pbVar18 + 1;
              bVar1 = (longlong)uVar9 < (longlong)(int)uVar7;
              uVar9 = uVar9 + 1;
            } while (bVar1);
          }
          *(char *)(*param_6 + uVar13) = (char)(int)(dVar23 / (double)iVar5);
          uVar13 = uVar13 + 1;
          iVar14 = iVar14 + 1;
          fVar21 = fVar22;
        } while (iVar14 != param_4);
      }
      fVar20 = (float)param_2 / (float)param_5 + fVar20;
      iVar8 = iVar8 + 1;
      uVar6 = uVar6 + param_4;
    } while (iVar8 != param_5);
  }
  return;
}



// FUNCTION 1469386d8 FUN_1469386d8 body=712 status=ok
// SIG undefined FUN_1469386d8(void)

void FUN_1469386d8(int param_1,int param_2,longlong *param_3,int param_4,int param_5,
                  longlong *param_6)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  int local_b0;
  
  FUN_1401211f6(param_6,param_4 * param_5 * 4,1);
  if (0 < param_5) {
    uVar15 = param_2 - 1;
    uVar14 = param_1 - 1;
    local_b0 = 0;
    iVar10 = 0;
    fVar24 = 0.0;
    do {
      fVar23 = (float)param_2 / (float)param_5 + fVar24;
      if (0 < param_4) {
        uVar6 = (int)(fVar24 + 0.5);
        if ((int)uVar15 <= (int)(fVar24 + 0.5)) {
          uVar6 = uVar15;
        }
        iVar19 = 0;
        uVar16 = 0;
        if (0 < (int)uVar6) {
          uVar16 = (ulonglong)uVar6;
        }
        uVar8 = (uint)(fVar23 + 0.5);
        if ((int)uVar15 <= (int)uVar8) {
          uVar8 = uVar15;
        }
        uVar21 = 0;
        if (0 < (int)uVar8) {
          uVar21 = uVar8;
        }
        fVar24 = 0.0;
        iVar22 = local_b0;
        do {
          fVar25 = (float)param_1 / (float)param_4 + fVar24;
          uVar7 = (int)(fVar24 + 0.5);
          if ((int)uVar14 <= (int)(fVar24 + 0.5)) {
            uVar7 = uVar14;
          }
          uVar9 = (uint)(fVar25 + 0.5);
          if ((int)uVar14 <= (int)uVar9) {
            uVar9 = uVar14;
          }
          uVar18 = 0;
          if (0 < (int)uVar9) {
            uVar18 = uVar9;
          }
          dVar26 = 0.0;
          dVar2 = 0.0;
          dVar3 = 0.0;
          dVar4 = 0.0;
          iVar13 = 0;
          if ((int)uVar7 <= (int)uVar18) {
            iVar13 = 0;
            if ((int)uVar7 < 1) {
              uVar7 = 0;
            }
            pbVar11 = (byte *)(*param_3 + ((longlong)param_1 * uVar16 + (ulonglong)uVar7) * 4 + 3);
            uVar12 = (ulonglong)uVar7;
            dVar2 = 0.0;
            dVar3 = 0.0;
            dVar4 = 0.0;
            do {
              pbVar17 = pbVar11;
              lVar20 = uVar16 - 1;
              if ((int)uVar6 <= (int)uVar21) {
                do {
                  dVar4 = dVar4 + (double)pbVar17[-3];
                  dVar3 = dVar3 + (double)pbVar17[-2];
                  dVar2 = dVar2 + (double)pbVar17[-1];
                  dVar26 = dVar26 + (double)*pbVar17;
                  iVar13 = iVar13 + 1;
                  lVar20 = lVar20 + 1;
                  pbVar17 = pbVar17 + (longlong)param_1 * 4;
                } while (lVar20 < (int)uVar8);
              }
              pbVar11 = pbVar11 + 4;
              bVar1 = (longlong)uVar12 < (longlong)(int)uVar9;
              uVar12 = uVar12 + 1;
            } while (bVar1);
          }
          uVar12 = (ulonglong)(uint)(iVar22 * 4);
          dVar5 = (double)iVar13;
          *(char *)(*param_6 + uVar12) = (char)(int)(dVar4 / dVar5);
          *(char *)(*param_6 + 1 + uVar12) = (char)(int)(dVar3 / dVar5);
          *(char *)(*param_6 + 2 + uVar12) = (char)(int)(dVar2 / dVar5);
          *(char *)(*param_6 + 3 + uVar12) = (char)(int)(dVar26 / dVar5);
          iVar22 = iVar22 + 1;
          iVar19 = iVar19 + 1;
          fVar24 = fVar25;
        } while (iVar19 != param_4);
      }
      iVar10 = iVar10 + 1;
      local_b0 = local_b0 + param_4;
      fVar24 = fVar23;
    } while (iVar10 != param_5);
  }
  return;
}



// FUNCTION 1469389a0 FUN_1469389a0 body=269 status=ok
// SIG undefined FUN_1469389a0(void)

longlong FUN_1469389a0(double *param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  if (((param_2 == 0.0) && (!NAN(param_2))) || (ABS(param_2) * 1000000000000.0 < ABS(param_3))) {
    if ((param_3 == 0.0) && (!NAN(param_3))) {
      return -(ulonglong)(param_4 == 0.0);
    }
    *param_1 = -param_4 / param_3;
  }
  else {
    dVar1 = param_3 * param_3 + param_2 * -4.0 * param_4;
    if (0.0 < dVar1) {
      if (dVar1 < 0.0) {
        dVar1 = sqrt(dVar1);
      }
      else {
        dVar1 = SQRT(dVar1);
      }
      *param_1 = (dVar1 - param_3) / (param_2 + param_2);
      param_1[1] = (-param_3 - dVar1) / (param_2 + param_2);
      return 2;
    }
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      return 0;
    }
    *param_1 = -param_3 / (param_2 + param_2);
  }
  return 1;
}



// FUNCTION 146938aad FUN_146938aad body=766 status=ok
// SIG undefined FUN_146938aad(void)

undefined8
FUN_146938aad(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (((param_2 != 0.0) || (NAN(param_2))) && (dVar1 = param_3 / param_2, ABS(dVar1) < 1000000.0)) {
    dVar5 = dVar1 * dVar1;
    dVar3 = ((param_4 / param_2) * -3.0 + dVar5) * 0.1111111111111111;
    dVar6 = ((dVar5 + dVar5 + (param_4 / param_2) * -9.0) * dVar1 + (param_5 / param_2) * 27.0) *
            0.018518518518518517;
    dVar5 = dVar3 * dVar3 * dVar3;
    dVar1 = dVar1 * 0.3333333333333333;
    if (dVar5 <= dVar6 * dVar6) {
      dVar5 = dVar6 * dVar6 - dVar5;
      if (dVar5 < 0.0) {
        dVar5 = sqrt(dVar5);
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      dVar5 = pow(ABS(dVar6) + dVar5,0.3333333333333333);
      dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)-dVar5 |
                      -(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar5);
      dVar5 = (double)(~-(ulonglong)(-dVar5 == dVar5) & (ulonglong)(dVar3 / dVar6));
      dVar3 = dVar6 + dVar5;
      *param_1 = dVar3 - dVar1;
      if (((dVar6 == dVar5) && (!NAN(dVar6) && !NAN(dVar5))) ||
         (uVar2 = 1, ABS(dVar6 - dVar5) < ABS(dVar3) * 1e-12)) {
        param_1[1] = dVar3 * -0.5 - dVar1;
        uVar2 = 2;
      }
    }
    else {
      if (dVar5 < 0.0) {
        dVar5 = sqrt(dVar5);
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      dVar4 = -1.0;
      if (-1.0 <= dVar6 / dVar5) {
        dVar4 = dVar6 / dVar5;
      }
      dVar5 = 1.0;
      if (dVar4 <= 1.0) {
        dVar5 = dVar4;
      }
      dVar5 = acos(dVar5);
      if (dVar3 < 0.0) {
        dVar3 = sqrt(dVar3);
      }
      else {
        dVar3 = SQRT(dVar3);
      }
      dVar3 = dVar3 * -2.0;
      dVar6 = cos(dVar5 * 0.3333333333333333);
      *param_1 = dVar6 * dVar3 - dVar1;
      dVar6 = cos((dVar5 + 6.283185307179586) * 0.3333333333333333);
      param_1[1] = dVar6 * dVar3 - dVar1;
      dVar5 = cos((dVar5 + -6.283185307179586) * 0.3333333333333333);
      param_1[2] = dVar5 * dVar3 - dVar1;
      uVar2 = 3;
    }
    return uVar2;
  }
  uVar2 = FUN_1469389a0(param_1,param_3,param_4);
  return uVar2;
}



// FUNCTION 146938dac FUN_146938dac body=192 status=ok
// SIG undefined FUN_146938dac(void)

void FUN_146938dac(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined8 *puVar2;
  double *pdVar3;
  
  dVar1 = (*param_2 - *param_1) * (param_3[1] - param_2[1]) -
          (param_2[1] - param_1[1]) * (*param_3 - *param_2);
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *(undefined4 *)(puVar2 + 1) = 7;
    *puVar2 = &PTR_FUN_149ed3660;
    dVar1 = param_1[1];
    puVar2[2] = *param_1;
    puVar2[3] = dVar1;
    dVar1 = param_2[1];
    puVar2[4] = *param_2;
    puVar2[5] = dVar1;
    pdVar3 = (double *)(puVar2 + 6);
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar2 + 1) = 7;
    *puVar2 = &PTR_FUN_149ed35d0;
    dVar1 = param_1[1];
    puVar2[2] = *param_1;
    puVar2[3] = dVar1;
    pdVar3 = (double *)(puVar2 + 4);
  }
  dVar1 = param_3[1];
  *pdVar3 = *param_3;
  pdVar3[1] = dVar1;
  return;
}



// FUNCTION 146938e6c FUN_146938e6c body=549 status=ok
// SIG undefined FUN_146938e6c(void)

void FUN_146938e6c(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar6 = *param_3;
  dVar3 = param_3[1];
  dVar7 = (dVar1 - *param_1) * (dVar3 - dVar2) - (dVar2 - param_1[1]) * (dVar6 - dVar1);
  if ((((dVar7 != 0.0) || (NAN(dVar7))) ||
      (dVar7 = (dVar6 - dVar1) * (param_4[1] - dVar3) - (*param_4 - dVar6) * (dVar3 - dVar2),
      dVar7 != 0.0)) || (NAN(dVar7))) {
    dVar6 = dVar6 * 1.5 - *param_4 * 0.5;
    dVar1 = dVar1 * 1.5 - *param_1 * 0.5;
    if ((dVar1 == dVar6) && (!NAN(dVar1) && !NAN(dVar6))) {
      dVar6 = dVar3 * 1.5 - param_4[1] * 0.5;
      dVar2 = dVar2 * 1.5 - param_1[1] * 0.5;
      if ((dVar2 == dVar6) && (!NAN(dVar2) && !NAN(dVar6))) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *(undefined4 *)(puVar4 + 1) = 7;
        *puVar4 = &PTR_FUN_149ed3660;
        dVar6 = param_1[1];
        puVar4[2] = *param_1;
        puVar4[3] = dVar6;
        puVar4[4] = dVar1;
        puVar4[5] = dVar2;
        pdVar5 = (double *)(puVar4 + 6);
        goto LAB_146938fec;
      }
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *(undefined4 *)(puVar4 + 1) = 7;
    *puVar4 = &PTR_FUN_149ed36f0;
    dVar1 = param_1[1];
    puVar4[2] = *param_1;
    puVar4[3] = dVar1;
    dVar1 = param_2[1];
    puVar4[4] = *param_2;
    puVar4[5] = dVar1;
    dVar1 = param_3[1];
    puVar4[6] = *param_3;
    puVar4[7] = dVar1;
    pdVar5 = (double *)(puVar4 + 8);
  }
  else {
    puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar4 + 1) = 7;
    *puVar4 = &PTR_FUN_149ed35d0;
    dVar1 = param_1[1];
    puVar4[2] = *param_1;
    puVar4[3] = dVar1;
    pdVar5 = (double *)(puVar4 + 4);
  }
LAB_146938fec:
  dVar1 = param_4[1];
  *pdVar5 = *param_4;
  pdVar5[1] = dVar1;
  return;
}



// FUNCTION 146939092 FUN_146939092 body=558 status=ok
// SIG undefined FUN_146939092(void)

void FUN_146939092(longlong *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0.0 <= param_4) {
    if (param_4 <= 1.0) goto LAB_146939281;
    (**(code **)(*param_1 + 0x28))(param_1,&local_80,0x3ff0000000000000);
    dVar2 = SQRT(local_80 * local_80 + local_78 * local_78);
    local_80 = local_80 / dVar2;
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
      local_80 = 0.0;
    }
    dVar1 = local_78 / dVar2;
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
      dVar1 = 1.0;
    }
    (**(code **)(*param_1 + 0x20))(param_1,&local_a0,0x3ff0000000000000);
    local_88 = param_3[1] - local_98;
    local_90 = *param_3 - local_a0;
    if (local_90 * local_80 + dVar1 * local_88 <= 0.0) goto LAB_146939281;
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1,&local_80,0);
    dVar2 = SQRT(local_80 * local_80 + local_78 * local_78);
    local_80 = local_80 / dVar2;
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
      local_80 = 0.0;
    }
    dVar1 = local_78 / dVar2;
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
      dVar1 = 1.0;
    }
    (**(code **)(*param_1 + 0x20))(param_1,&local_90,0);
    local_88 = param_3[1] - local_88;
    local_90 = *param_3 - local_90;
    if (0.0 <= local_90 * local_80 + dVar1 * local_88) goto LAB_146939281;
  }
  dVar2 = local_90 * dVar1 - local_80 * local_88;
  if (ABS(dVar2) <= ABS(*param_2)) {
    *param_2 = dVar2;
    param_2[1] = 0.0;
  }
LAB_146939281:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469392c2 FUN_1469392c2 body=61 status=ok
// SIG undefined FUN_1469392c2(void)

void FUN_1469392c2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_149ed35d0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = uVar1;
  return;
}



// FUNCTION 146939300 FUN_146939300 body=69 status=ok
// SIG undefined FUN_146939300(void)

void FUN_146939300(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_149ed3660;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  puVar2[7] = uVar1;
  return;
}



// FUNCTION 146939346 FUN_146939346 body=77 status=ok
// SIG undefined FUN_146939346(void)

void FUN_146939346(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_149ed36f0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  puVar2[7] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  puVar2[9] = uVar1;
  return;
}



// FUNCTION 1469393fa FUN_1469393fa body=151 status=ok
// SIG undefined FUN_1469393fa(void)

double * FUN_1469393fa(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x38);
  dVar4 = 1.0 - param_3;
  dVar3 = *(double *)(param_1 + 0x18);
  *param_2 = (*(double *)(param_1 + 0x10) * dVar4 + *(double *)(param_1 + 0x20) * param_3) * dVar4 +
             (dVar4 * *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x30) * param_3) * param_3
  ;
  param_2[1] = (dVar3 * dVar4 + dVar1 * param_3) * dVar4 +
               (dVar4 * dVar1 + dVar2 * param_3) * param_3;
  return param_2;
}



// FUNCTION 146939492 FUN_146939492 body=297 status=ok
// SIG undefined FUN_146939492(void)

double * FUN_146939492(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *(double *)(param_1 + 0x38);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar5 = 1.0 - param_3;
  dVar6 = dVar5 * dVar2 + dVar1 * param_3;
  dVar7 = dVar5 * *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x30) * param_3;
  dVar3 = *(double *)(param_1 + 0x48);
  dVar4 = *(double *)(param_1 + 0x18);
  *param_2 = ((*(double *)(param_1 + 0x10) * dVar5 + *(double *)(param_1 + 0x20) * param_3) * dVar5
             + dVar7 * param_3) * dVar5 +
             (dVar5 * dVar7 +
             (*(double *)(param_1 + 0x30) * dVar5 + *(double *)(param_1 + 0x40) * param_3) * param_3
             ) * param_3;
  param_2[1] = ((dVar4 * dVar5 + dVar2 * param_3) * dVar5 + dVar6 * param_3) * dVar5 +
               (dVar5 * dVar6 + (dVar1 * dVar5 + dVar3 * param_3) * param_3) * param_3;
  return param_2;
}



// FUNCTION 1469395de FUN_1469395de body=208 status=ok
// SIG undefined FUN_1469395de(void)

void FUN_1469395de(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18)) * (1.0 - param_3) +
          (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x28)) * param_3;
  dVar2 = (1.0 - param_3) * (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10)) +
          (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x20)) * param_3;
  if (dVar1 == 0.0 && dVar2 == 0.0) {
    dVar1 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x18);
    dVar2 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x10);
  }
  *param_2 = dVar2;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 1469396ae FUN_1469396ae body=448 status=ok
// SIG undefined FUN_1469396ae(void)

void FUN_1469396ae(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x38);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x28);
  dVar5 = 1.0 - param_3;
  dVar6 = ((dVar4 - *(double *)(param_1 + 0x18)) * dVar5 + (dVar2 - dVar4) * param_3) * dVar5 +
          (dVar5 * (dVar2 - dVar4) + (*(double *)(param_1 + 0x48) - dVar2) * param_3) * param_3;
  dVar5 = ((dVar3 - *(double *)(param_1 + 0x10)) * dVar5 + (dVar1 - dVar3) * param_3) * dVar5 +
          (dVar5 * (dVar1 - dVar3) + (*(double *)(param_1 + 0x40) - dVar1) * param_3) * param_3;
  if ((((dVar5 == 0.0) && (!NAN(dVar5))) && (dVar6 == 0.0)) && (!NAN(dVar6))) {
    if ((param_3 != 0.0) || (NAN(param_3))) {
      if ((param_3 == 1.0) && (!NAN(param_3))) {
        dVar6 = *(double *)(param_1 + 0x48) - dVar4;
        dVar5 = *(double *)(param_1 + 0x40) - dVar3;
      }
    }
    else {
      dVar6 = dVar2 - *(double *)(param_1 + 0x18);
      dVar5 = dVar1 - *(double *)(param_1 + 0x10);
    }
  }
  *param_2 = dVar5;
  param_2[1] = dVar6;
  return;
}



// FUNCTION 1469398b4 FUN_1469398b4 body=137 status=ok
// SIG undefined FUN_1469398b4(void)

double * FUN_1469398b4(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x38);
  dVar3 = *(double *)(param_1 + 0x48);
  dVar5 = dVar2 - dVar1;
  dVar6 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x18);
  *param_2 = (1.0 - param_3) * (dVar6 - (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10)))
             + ((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x30)) - dVar6) * param_3;
  param_2[1] = (dVar5 - (dVar1 - dVar4)) * (1.0 - param_3) + ((dVar3 - dVar2) - dVar5) * param_3;
  return param_2;
}



// FUNCTION 14693993e FUN_14693993e body=565 status=ok
// SIG undefined FUN_14693993e(void)

void FUN_14693993e(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar8 = param_3[1] - *(double *)(param_1 + 0x18);
  dVar7 = *param_3 - *(double *)(param_1 + 0x10);
  dVar10 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
  dVar9 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
  dVar3 = dVar9 * dVar9 + dVar10 * dVar10;
  dVar13 = (dVar7 * dVar9 + dVar8 * dVar10) / dVar3;
  *param_4 = dVar13;
  lVar5 = (ulonglong)(0.5 < dVar13) * 0x10;
  dVar11 = *(double *)(param_1 + 0x18 + lVar5) - param_3[1];
  dVar2 = *(double *)(param_1 + 0x10 + lVar5) - *param_3;
  dVar1 = SQRT(dVar2 * dVar2 + dVar11 * dVar11);
  dVar3 = SQRT(dVar3);
  if ((0.0 < dVar13) && (dVar13 < 1.0)) {
    dVar12 = 0.0;
    dVar13 = dVar10 / dVar3;
    if ((dVar3 == 0.0) && (!NAN(dVar3))) {
      dVar13 = 0.0;
    }
    dVar4 = dVar9 / dVar3;
    if ((dVar3 == 0.0) && (!NAN(dVar3))) {
      dVar4 = 1.0;
    }
    dVar13 = dVar13 * dVar7 - dVar4 * dVar8;
    if (ABS(dVar13) < dVar1) goto LAB_146939b3d;
  }
  dVar13 = -dVar1;
  dVar2 = dVar2 / dVar1;
  if ((dVar1 == dVar13) && (!NAN(dVar1) && !NAN(dVar13))) {
    dVar2 = 0.0;
  }
  dVar11 = dVar11 / dVar1;
  if ((dVar1 == dVar13) && (!NAN(dVar1) && !NAN(dVar13))) {
    dVar11 = 1.0;
  }
  dVar12 = dVar10 / dVar3;
  if ((dVar3 == 0.0) && (!NAN(dVar3))) {
    dVar12 = 1.0;
  }
  dVar4 = dVar9 / dVar3;
  if ((dVar3 == 0.0) && (!NAN(dVar3))) {
    dVar4 = 0.0;
  }
  dVar12 = ABS(dVar11 * dVar12 + dVar4 * dVar2);
  uVar6 = -(ulonglong)(0.0 < dVar7 * dVar10 - dVar9 * dVar8);
  dVar13 = (double)(~uVar6 & (ulonglong)dVar13 | (ulonglong)dVar1 & uVar6);
LAB_146939b3d:
  *param_2 = dVar13;
  param_2[1] = dVar12;
  return;
}



// FUNCTION 146939b74 FUN_146939b74 body=1228 status=ok
// SIG undefined FUN_146939b74(void)

ulonglong * FUN_146939b74(longlong param_1,ulonglong *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar12 = *(double *)(param_1 + 0x10);
  dVar10 = *(double *)(param_1 + 0x18);
  dVar5 = param_3[1] - dVar10;
  dVar16 = *param_3 - dVar12;
  dVar4 = param_3[1] - *(double *)(param_1 + 0x38);
  dVar3 = *param_3 - *(double *)(param_1 + 0x30);
  dVar17 = *(double *)(param_1 + 0x20);
  dVar9 = *(double *)(param_1 + 0x28);
  dVar2 = (dVar9 - dVar10) + (dVar9 - dVar10);
  dVar13 = (dVar17 - dVar12) + (dVar17 - dVar12);
  dVar10 = (*(double *)(param_1 + 0x38) - (dVar9 + dVar9)) + dVar10;
  dVar12 = (*(double *)(param_1 + 0x30) - (dVar17 + dVar17)) + dVar12;
  dVar9 = dVar16 * dVar16 + dVar5 * dVar5;
  dVar17 = dVar3 * dVar3 + dVar4 * dVar4;
  local_f0 = dVar16;
  local_e8 = dVar5;
  local_e0 = dVar13;
  local_d8 = dVar2;
  local_d0 = dVar12;
  local_c8 = dVar10;
  dVar6 = (double)FUN_14693a041();
  if ((dVar6 <= 0.0) || (1.0 <= dVar6)) {
LAB_146939d90:
    if (dVar17 < dVar9) {
      dVar10 = dVar2 + dVar10 + dVar10;
      dVar12 = dVar13 + dVar12 + dVar12;
      if ((((dVar12 == 0.0) && (!NAN(dVar12))) && (dVar10 == 0.0)) && (!NAN(dVar10))) {
        dVar10 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x18);
        dVar12 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x10);
      }
      dVar9 = dVar12 * dVar12 + dVar10 * dVar10;
      *param_4 = (dVar3 * dVar12 + dVar4 * dVar10) / dVar9 + 1.0;
      dVar9 = SQRT(dVar9);
      dVar13 = dVar12 / dVar9;
      if ((dVar9 == 0.0) && (!NAN(dVar9))) {
        dVar13 = 0.0;
      }
      dVar2 = dVar10 / dVar9;
      if ((dVar9 == 0.0) && (!NAN(dVar9))) {
        dVar2 = 1.0;
      }
      dVar17 = SQRT(dVar17);
      dVar16 = -dVar17;
      dVar9 = dVar3 / dVar17;
      if ((dVar17 == dVar16) && (!NAN(dVar17) && !NAN(dVar16))) {
        dVar9 = 0.0;
      }
      dVar5 = dVar4 / dVar17;
      if ((dVar17 == dVar16) && (!NAN(dVar17) && !NAN(dVar16))) {
        dVar5 = 1.0;
      }
      dVar9 = dVar9 * dVar13 + dVar5 * dVar2;
      uVar7 = -(ulonglong)(0.0 < dVar3 * dVar10 - dVar12 * dVar4);
      uVar7 = ~uVar7 & (ulonglong)dVar16 | (ulonglong)dVar17 & uVar7;
      goto LAB_146939fc1;
    }
    if ((((dVar13 == 0.0) && (!NAN(dVar13))) && (dVar2 == 0.0)) && (!NAN(dVar2))) {
      dVar2 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x18);
      dVar13 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x10);
    }
    dVar12 = dVar13 * dVar13 + dVar2 * dVar2;
    dVar10 = SQRT(dVar12);
    *param_4 = (dVar16 * dVar13 + dVar5 * dVar2) / dVar12;
    dVar12 = dVar2 / dVar10;
    if ((dVar10 == 0.0) && (!NAN(dVar10))) {
      dVar12 = 1.0;
    }
    dVar17 = dVar13 / dVar10;
    if ((dVar10 == 0.0) && (!NAN(dVar10))) {
      dVar17 = 0.0;
    }
    dVar1 = SQRT(dVar9);
    dVar10 = -dVar1;
    uVar14 = SUB84(dVar1,0);
    uVar15 = (uint)((ulonglong)dVar10 >> 0x20);
    dVar9 = dVar5 / dVar1;
    if ((dVar1 == dVar10) && (!NAN(dVar1) && !NAN(dVar10))) {
      dVar9 = 1.0;
    }
    dVar3 = dVar16 / dVar1;
    if ((dVar1 == dVar10) && (!NAN(dVar1) && !NAN(dVar10))) {
      dVar3 = 0.0;
    }
    dVar9 = -(dVar9 * dVar12 + dVar3 * dVar17);
    dVar12 = dVar16 * dVar2 - dVar13 * dVar5;
  }
  else {
    dVar8 = dVar5 - (dVar10 * dVar6 + dVar2) * dVar6;
    dVar11 = dVar16 - (dVar12 * dVar6 + dVar13) * dVar6;
    dVar1 = dVar11 * dVar11 + dVar8 * dVar8;
    if ((dVar9 <= dVar1) || (dVar17 <= dVar1)) goto LAB_146939d90;
    *param_4 = dVar6;
    dVar12 = dVar11 * (dVar2 + (dVar10 + dVar10) * dVar6) -
             (dVar13 + (dVar12 + dVar12) * dVar6) * dVar8;
    dVar1 = SQRT(dVar1);
    uVar15 = (uint)((ulonglong)dVar1 >> 0x20) ^ 0x80000000;
    uVar14 = SUB84(dVar1,0);
    dVar9 = 0.0;
  }
  uVar7 = ~-(ulonglong)(0.0 < dVar12) & CONCAT44(uVar15,uVar14) |
          (ulonglong)dVar1 & -(ulonglong)(0.0 < dVar12);
LAB_146939fc1:
  *param_2 = uVar7;
  param_2[1] = (ulonglong)dVar9;
  if ((local_c0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693a041 FUN_14693a041 body=773 status=ok
// SIG undefined FUN_14693a041(void)

double FUN_14693a041(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = *param_2;
  dVar7 = param_2[1];
  dVar6 = dVar3 * dVar3 + dVar7 * dVar7;
  dVar5 = *param_3;
  dVar1 = param_3[1];
  dVar4 = dVar5 * dVar5 + dVar1 * dVar1;
  if (dVar4 * 100000000.0 <= dVar6) {
    dVar2 = (dVar3 * *param_1 + dVar7 * param_1[1]) / dVar6;
  }
  else {
    dVar4 = 0.5 / dVar4;
    dVar2 = (dVar3 * dVar5 + dVar7 * dVar1) * dVar4 * 3.0;
    dVar5 = dVar5 * *param_1 + dVar1 * param_1[1];
    dVar6 = (dVar6 - (dVar5 + dVar5)) * dVar4;
    dVar5 = dVar2 * dVar2;
    dVar1 = (dVar6 * -3.0 + dVar5) * 0.1111111111111111;
    dVar7 = ((dVar6 * -9.0 + dVar5 + dVar5) * dVar2 +
            (*param_1 * dVar3 + dVar7 * param_1[1]) * dVar4 * -27.0) * 0.018518518518518517;
    dVar3 = dVar1 * dVar1 * dVar1;
    dVar2 = dVar2 * 0.3333333333333333;
    if (dVar7 * dVar7 < dVar3) {
      if (dVar3 < 0.0) {
        dVar3 = sqrt(dVar3);
      }
      else {
        dVar3 = SQRT(dVar3);
      }
      dVar3 = acos(dVar7 / dVar3);
      if (dVar1 < 0.0) {
        dVar1 = sqrt(dVar1);
      }
      else {
        dVar1 = SQRT(dVar1);
      }
      dVar3 = dVar3 * 0.3333333333333333;
      dVar1 = dVar1 * -2.0;
      if (0.0 <= dVar7) {
        dVar7 = cos(dVar3);
        dVar7 = dVar7 * dVar1 - dVar2;
        if (0.0 <= dVar7) {
          return dVar7;
        }
        dVar3 = dVar3 + 2.0943951023931957;
      }
      else {
        dVar7 = cos(dVar3 + 2.0943951023931957);
        dVar7 = dVar7 * dVar1 - dVar2;
        if (dVar7 <= 1.0) {
          return dVar7;
        }
      }
      dVar3 = cos(dVar3);
      dVar2 = dVar3 * dVar1 + -dVar2;
    }
    else {
      dVar3 = dVar7 * dVar7 - dVar3;
      if (dVar3 < 0.0) {
        dVar3 = sqrt(dVar3);
      }
      else {
        dVar3 = SQRT(dVar3);
      }
      dVar3 = pow(ABS(dVar7) + dVar3,0.3333333333333333);
      dVar3 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)-dVar3 |
                      (ulonglong)dVar3 & -(ulonglong)(dVar7 < 0.0));
      dVar2 = (dVar1 / dVar3 + dVar3) - dVar2;
    }
  }
  return dVar2;
}



// FUNCTION 14693a346 FUN_14693a346 body=1573 status=ok
// SIG undefined FUN_14693a346(void)

ulonglong * FUN_14693a346(longlong param_1,ulonglong *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_188 [32];
  double *local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
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
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_128 = *(double *)(param_1 + 0x10);
  local_138 = *(double *)(param_1 + 0x18);
  local_160 = param_3[1] - local_138;
  dVar3 = *param_3 - local_128;
  local_118 = *(double *)(param_1 + 0x40);
  local_110 = *(double *)(param_1 + 0x48);
  local_158 = param_3[1] - local_110;
  local_150 = *param_3 - local_118;
  local_120 = *(double *)(param_1 + 0x20);
  local_130 = *(double *)(param_1 + 0x28);
  dVar11 = (local_130 - local_138) * 3.0;
  dVar9 = (local_120 - local_128) * 3.0;
  dVar8 = dVar3 * dVar3 + local_160 * local_160;
  dVar7 = local_150 * local_150 + local_158 * local_158;
  local_140 = *(double *)(param_1 + 0x38);
  local_148 = *(double *)(param_1 + 0x30);
  dVar6 = (local_140 - local_130) * 3.0;
  dVar5 = (local_148 - local_120) * 3.0;
  dVar12 = dVar6 - dVar11;
  dVar2 = dVar5 - dVar9;
  dVar10 = (local_110 - dVar6) - local_138;
  dVar6 = (local_118 - dVar5) - local_128;
  local_168 = &local_c8;
  local_108 = dVar3;
  local_100 = local_160;
  local_f8 = dVar9;
  local_f0 = dVar11;
  local_e8 = dVar2;
  local_e0 = dVar12;
  local_d8 = dVar6;
  local_d0 = dVar10;
  dVar5 = (double)FUN_14693a96c();
  if ((((dVar5 <= 0.0) || (1.0 <= dVar5)) || (dVar8 <= local_c8)) || (dVar7 <= local_c8)) {
    if (dVar8 <= dVar7) {
      if (dVar9 == 0.0 && dVar11 == 0.0) {
        dVar11 = local_140 - local_138;
        dVar9 = local_148 - local_128;
      }
      dVar7 = dVar9 * dVar9 + dVar11 * dVar11;
      dVar6 = SQRT(dVar7);
      *param_4 = (dVar3 * dVar9 + local_160 * dVar11) / dVar7;
      dVar7 = dVar11 / dVar6;
      if ((dVar6 == 0.0) && (!NAN(dVar6))) {
        dVar7 = 1.0;
      }
      dVar12 = dVar9 / dVar6;
      if ((dVar6 == 0.0) && (!NAN(dVar6))) {
        dVar12 = 0.0;
      }
      dVar8 = SQRT(dVar8);
      dVar6 = -dVar8;
      dVar10 = local_160 / dVar8;
      if ((dVar8 == dVar6) && (!NAN(dVar8) && !NAN(dVar6))) {
        dVar10 = 1.0;
      }
      dVar5 = dVar3 / dVar8;
      if ((dVar8 == dVar6) && (!NAN(dVar8) && !NAN(dVar6))) {
        dVar5 = 0.0;
      }
      dVar1 = -(dVar10 * dVar7 + dVar5 * dVar12);
      uVar4 = -(ulonglong)(0.0 < dVar3 * dVar11 - dVar9 * local_160);
      uVar4 = ~uVar4 & (ulonglong)dVar6 | (ulonglong)dVar8 & uVar4;
    }
    else {
      dVar11 = dVar11 + dVar12 + dVar12 + dVar10 * 3.0;
      dVar8 = dVar9 + dVar2 + dVar2 + dVar6 * 3.0;
      if (dVar11 == 0.0 && dVar8 == 0.0) {
        dVar11 = local_110 - local_130;
        dVar8 = local_118 - local_120;
      }
      dVar9 = dVar8 * dVar8 + dVar11 * dVar11;
      *param_4 = (local_150 * dVar8 + local_158 * dVar11) / dVar9 + 1.0;
      dVar9 = SQRT(dVar9);
      dVar6 = dVar8 / dVar9;
      if ((dVar9 == 0.0) && (!NAN(dVar9))) {
        dVar6 = 0.0;
      }
      dVar12 = dVar11 / dVar9;
      if ((dVar9 == 0.0) && (!NAN(dVar9))) {
        dVar12 = 1.0;
      }
      dVar7 = SQRT(dVar7);
      dVar10 = -dVar7;
      dVar9 = local_150 / dVar7;
      if ((dVar7 == dVar10) && (!NAN(dVar7) && !NAN(dVar10))) {
        dVar9 = 0.0;
      }
      dVar5 = local_158 / dVar7;
      if ((dVar7 == dVar10) && (!NAN(dVar7) && !NAN(dVar10))) {
        dVar5 = 1.0;
      }
      dVar1 = dVar9 * dVar6 + dVar5 * dVar12;
      uVar4 = -(ulonglong)(0.0 < local_150 * dVar11 - dVar8 * local_158);
      uVar4 = ~uVar4 & (ulonglong)dVar10 | (ulonglong)dVar7 & uVar4;
    }
  }
  else {
    *param_4 = dVar5;
    dVar8 = local_160 - ((dVar10 * dVar5 + dVar12) * dVar5 + dVar11) * dVar5;
    dVar1 = 0.0;
    if (local_c8 < 0.0) {
      local_c8 = sqrt(local_c8);
    }
    else {
      local_c8 = SQRT(local_c8);
    }
    uVar4 = -(ulonglong)
             (0.0 < (dVar3 - ((dVar6 * dVar5 + dVar2) * dVar5 + dVar9) * dVar5) *
                    ((dVar12 + dVar12 + dVar10 * 3.0 * dVar5) * dVar5 + dVar11) -
                    dVar8 * ((dVar2 + dVar2 + dVar6 * 3.0 * dVar5) * dVar5 + dVar9));
    uVar4 = ~uVar4 & (ulonglong)-local_c8 | (ulonglong)local_c8 & uVar4;
  }
  *param_2 = uVar4;
  param_2[1] = (ulonglong)dVar1;
  if ((local_c0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693a96c FUN_14693a96c body=758 status=ok
// SIG undefined FUN_14693a96c(void)

double FUN_14693a96c(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                    )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double local_c0;
  double local_b8;
  
  local_b8 = *param_1 * *param_1 + param_1[1] * param_1[1];
  *param_5 = local_b8;
  iVar10 = 0;
  local_c0 = 0.0;
  dVar5 = 0.0;
  do {
    dVar4 = dVar5 * 0.25;
    dVar6 = *param_1 - ((*param_4 * dVar4 + *param_3) * dVar4 + *param_2) * dVar4;
    dVar7 = param_1[1] - ((param_4[1] * dVar4 + param_3[1]) * dVar4 + param_2[1]) * dVar4;
    iVar11 = 4;
    do {
      dVar12 = *param_4;
      dVar1 = param_4[1];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar9 = (dVar1 * 3.0 * dVar4 + dVar3 + dVar3) * dVar4 + param_2[1];
      dVar8 = (dVar12 * 3.0 * dVar4 + dVar2 + dVar2) * dVar4 + *param_2;
      dVar4 = (dVar6 * dVar8 + dVar7 * dVar9) /
              ((dVar8 * dVar8 + dVar9 * dVar9) -
              ((dVar12 * 6.0 * dVar4 + dVar2 + dVar2) * dVar6 +
              (dVar1 * 6.0 * dVar4 + dVar3 + dVar3) * dVar7)) + dVar4;
      if ((dVar4 <= 0.0) || (1.0 <= dVar4)) break;
      dVar6 = *param_1 - (*param_2 + (dVar2 + dVar12 * dVar4) * dVar4) * dVar4;
      dVar7 = param_1[1] - (param_2[1] + (dVar3 + dVar1 * dVar4) * dVar4) * dVar4;
      dVar12 = dVar6 * dVar6 + dVar7 * dVar7;
      if (dVar12 < local_b8) {
        *param_5 = dVar12;
        local_c0 = dVar4;
        local_b8 = dVar12;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    dVar5 = dVar5 + 1.0;
    iVar10 = iVar10 + 1;
    if (iVar10 == 5) {
      return local_c0;
    }
  } while( true );
}



// FUNCTION 14693ad78 FUN_14693ad78 body=770 status=ok
// SIG undefined FUN_14693ad78(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14693ad78(longlong param_1,undefined8 *param_2,undefined4 *param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_c8 [24];
  double adStack_b0 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = (uint)(*(double *)(param_1 + 0x18) <= param_4 && param_4 != *(double *)(param_1 + 0x18)) *
          2 - 1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar16 = (undefined4)uVar1;
  uVar17 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *param_2 = uVar1;
  dVar15 = *(double *)(param_1 + 0x18);
  uVar12 = 0;
  uVar9 = uVar7;
  if (((dVar15 == param_4) && (!NAN(dVar15) && !NAN(param_4))) &&
     ((dVar15 < *(double *)(param_1 + 0x28) ||
      ((uVar9 = 1, dVar15 == *(double *)(param_1 + 0x28) && (dVar15 < *(double *)(param_1 + 0x38))))
      ))) {
    *param_3 = 1;
    uVar16 = (undefined4)*(undefined8 *)(param_1 + 0x10);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    dVar15 = *(double *)(param_1 + 0x18);
    uVar12 = 1;
    uVar9 = uVar7;
  }
  dVar2 = *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x28) - dVar15;
  dVar5 = (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x28)) - dVar6;
  uVar7 = FUN_1469389a0(adStack_b0 + 1,dVar5,dVar6 + dVar6,dVar15 - param_4);
  dVar15 = adStack_b0[1];
  if ((int)uVar7 < 2) {
    if (uVar7 == 1) goto LAB_14693ae8b;
  }
  else {
    if (adStack_b0[2] < adStack_b0[1]) {
      adStack_b0[1] = adStack_b0[2];
      adStack_b0[2] = dVar15;
    }
LAB_14693ae8b:
    dVar15 = dVar2 - (double)CONCAT44(uVar17,uVar16);
    uVar8 = 1;
    uVar13 = uVar12;
    do {
      dVar4 = adStack_b0[uVar8];
      uVar12 = uVar13;
      if ((0.0 <= dVar4) && (dVar4 <= 1.0)) {
        param_2[uVar13] =
             dVar4 * dVar4 * ((dVar3 - dVar2) - dVar15) +
             (dVar4 + dVar4) * dVar15 + *(double *)(param_1 + 0x10);
        if (0.0 <= (dVar4 * dVar5 + dVar6) * (double)(int)uVar9) {
          uVar12 = (ulonglong)((int)uVar13 + 1);
          param_3[uVar13] = uVar9;
          uVar9 = -uVar9;
        }
      }
    } while ((uVar8 < uVar7) && (uVar8 = uVar8 + 1, uVar13 = uVar12, (int)uVar12 < 2));
  }
  dVar15 = *(double *)(param_1 + 0x38);
  uVar7 = uVar9;
  if ((dVar15 != param_4) || (NAN(dVar15) || NAN(param_4))) {
LAB_14693af8d:
    iVar10 = (int)uVar12;
    if (uVar7 == (-(uint)(param_4 < *(double *)(param_1 + 0x38)) | 1)) goto LAB_14693afa1;
    if (iVar10 < 1) {
      if (ABS(*(double *)(param_1 + 0x38) - param_4) < ABS(*(double *)(param_1 + 0x18) - param_4)) {
        param_2[iVar10] = *(undefined8 *)(param_1 + 0x30);
      }
      uVar12 = (ulonglong)(iVar10 + 1);
      param_3[iVar10] = uVar7;
      goto LAB_14693afa1;
    }
  }
  else {
    iVar10 = (int)uVar12;
    uVar7 = 0xffffffff;
    if (0 >= iVar10 || 0 >= (int)uVar9) {
      uVar7 = uVar9;
    }
    uVar11 = iVar10 - (uint)(0 < iVar10 && 0 < (int)uVar9);
    uVar12 = (ulonglong)uVar11;
    if (*(double *)(param_1 + 0x28) <= dVar15) {
      if (((dVar15 == *(double *)(param_1 + 0x28)) && (dVar15 < *(double *)(param_1 + 0x18))) &&
         ((int)uVar11 < 2)) goto LAB_14693af52;
      goto LAB_14693af8d;
    }
    if ((int)uVar11 < 2) {
LAB_14693af52:
      param_2[uVar12] = *(undefined8 *)(param_1 + 0x30);
      bVar14 = (int)uVar7 < 0;
      uVar7 = uVar9;
      if (bVar14) {
        param_3[uVar12] = 0xffffffff;
        uVar7 = 1;
        uVar12 = (ulonglong)(uVar11 + 1);
      }
      goto LAB_14693af8d;
    }
    uVar12 = 2;
    iVar10 = 2;
    if (uVar7 == (-(uint)(param_4 < dVar15) | 1)) goto LAB_14693afa1;
  }
  uVar12 = (ulonglong)(iVar10 - 1);
LAB_14693afa1:
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14693b07c FUN_14693b07c body=770 status=ok
// SIG undefined FUN_14693b07c(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14693b07c(longlong param_1,undefined8 *param_2,undefined4 *param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_c8 [24];
  double adStack_b0 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = (uint)(*(double *)(param_1 + 0x10) <= param_4 && param_4 != *(double *)(param_1 + 0x10)) *
          2 - 1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = (undefined4)uVar1;
  uVar17 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *param_2 = uVar1;
  dVar15 = *(double *)(param_1 + 0x10);
  uVar12 = 0;
  uVar9 = uVar7;
  if (((dVar15 == param_4) && (!NAN(dVar15) && !NAN(param_4))) &&
     ((dVar15 < *(double *)(param_1 + 0x20) ||
      ((uVar9 = 1, dVar15 == *(double *)(param_1 + 0x20) && (dVar15 < *(double *)(param_1 + 0x30))))
      ))) {
    *param_3 = 1;
    dVar15 = *(double *)(param_1 + 0x10);
    uVar16 = (undefined4)*(undefined8 *)(param_1 + 0x18);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    uVar12 = 1;
    uVar9 = uVar7;
  }
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x38);
  dVar6 = *(double *)(param_1 + 0x20) - dVar15;
  dVar5 = (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x20)) - dVar6;
  uVar7 = FUN_1469389a0(adStack_b0 + 1,dVar5,dVar6 + dVar6,dVar15 - param_4);
  dVar15 = adStack_b0[1];
  if ((int)uVar7 < 2) {
    if (uVar7 == 1) goto LAB_14693b18f;
  }
  else {
    if (adStack_b0[2] < adStack_b0[1]) {
      adStack_b0[1] = adStack_b0[2];
      adStack_b0[2] = dVar15;
    }
LAB_14693b18f:
    dVar15 = dVar2 - (double)CONCAT44(uVar17,uVar16);
    uVar8 = 1;
    uVar13 = uVar12;
    do {
      dVar4 = adStack_b0[uVar8];
      uVar12 = uVar13;
      if ((0.0 <= dVar4) && (dVar4 <= 1.0)) {
        param_2[uVar13] =
             dVar4 * dVar4 * ((dVar3 - dVar2) - dVar15) +
             (dVar4 + dVar4) * dVar15 + *(double *)(param_1 + 0x18);
        if (0.0 <= (dVar4 * dVar5 + dVar6) * (double)(int)uVar9) {
          uVar12 = (ulonglong)((int)uVar13 + 1);
          param_3[uVar13] = uVar9;
          uVar9 = -uVar9;
        }
      }
    } while ((uVar8 < uVar7) && (uVar8 = uVar8 + 1, uVar13 = uVar12, (int)uVar12 < 2));
  }
  dVar15 = *(double *)(param_1 + 0x30);
  uVar7 = uVar9;
  if ((dVar15 != param_4) || (NAN(dVar15) || NAN(param_4))) {
LAB_14693b291:
    iVar10 = (int)uVar12;
    if (uVar7 == (-(uint)(param_4 < *(double *)(param_1 + 0x30)) | 1)) goto LAB_14693b2a5;
    if (iVar10 < 1) {
      if (ABS(*(double *)(param_1 + 0x30) - param_4) < ABS(*(double *)(param_1 + 0x10) - param_4)) {
        param_2[iVar10] = *(undefined8 *)(param_1 + 0x38);
      }
      uVar12 = (ulonglong)(iVar10 + 1);
      param_3[iVar10] = uVar7;
      goto LAB_14693b2a5;
    }
  }
  else {
    iVar10 = (int)uVar12;
    uVar7 = 0xffffffff;
    if (0 >= iVar10 || 0 >= (int)uVar9) {
      uVar7 = uVar9;
    }
    uVar11 = iVar10 - (uint)(0 < iVar10 && 0 < (int)uVar9);
    uVar12 = (ulonglong)uVar11;
    if (*(double *)(param_1 + 0x20) <= dVar15) {
      if (((dVar15 == *(double *)(param_1 + 0x20)) && (dVar15 < *(double *)(param_1 + 0x10))) &&
         ((int)uVar11 < 2)) goto LAB_14693b256;
      goto LAB_14693b291;
    }
    if ((int)uVar11 < 2) {
LAB_14693b256:
      param_2[uVar12] = *(undefined8 *)(param_1 + 0x38);
      bVar14 = (int)uVar7 < 0;
      uVar7 = uVar9;
      if (bVar14) {
        param_3[uVar12] = 0xffffffff;
        uVar7 = 1;
        uVar12 = (ulonglong)(uVar11 + 1);
      }
      goto LAB_14693b291;
    }
    uVar12 = 2;
    iVar10 = 2;
    if (uVar7 == (-(uint)(param_4 < dVar15) | 1)) goto LAB_14693b2a5;
  }
  uVar12 = (ulonglong)(iVar10 - 1);
LAB_14693b2a5:
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14693b380 FUN_14693b380 body=1057 status=ok
// SIG undefined FUN_14693b380(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_14693b380(longlong param_1,undefined8 *param_2,undefined4 *param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_108 [32];
  double local_e8;
  double adStack_e0 [4];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar11 = (uint)(*(double *)(param_1 + 0x18) <= param_4 && param_4 != *(double *)(param_1 + 0x18))
           * 2 - 1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = (undefined4)uVar1;
  uVar19 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *param_2 = uVar1;
  local_e8 = *(double *)(param_1 + 0x18);
  iVar15 = 0;
  uVar14 = uVar11;
  iVar16 = 0;
  if ((local_e8 == param_4) && (iVar16 = iVar15, !NAN(local_e8) && !NAN(param_4))) {
    dVar2 = *(double *)(param_1 + 0x28);
    if (dVar2 <= local_e8) {
      uVar14 = 1;
      iVar16 = 0;
      if (((local_e8 != dVar2) || (iVar16 = iVar15, NAN(local_e8) || NAN(dVar2))) ||
         ((*(double *)(param_1 + 0x38) <= local_e8 &&
          ((local_e8 != *(double *)(param_1 + 0x38) || (*(double *)(param_1 + 0x48) <= local_e8)))))
         ) goto LAB_14693b441;
    }
    *param_3 = 1;
    uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x10);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    local_e8 = *(double *)(param_1 + 0x18);
    uVar14 = uVar11;
    iVar16 = 1;
  }
LAB_14693b441:
  dVar2 = *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar9 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x28);
  dVar6 = *(double *)(param_1 + 0x28) - local_e8;
  dVar4 = *(double *)(param_1 + 0x40);
  dVar10 = dVar9 - dVar6;
  dVar9 = ((*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x38)) - dVar9) - dVar10;
  local_e8 = local_e8 - param_4;
  uVar11 = FUN_146938aad(adStack_e0 + 1,dVar9,dVar10 * 3.0,dVar6 * 3.0);
  dVar8 = adStack_e0[3];
  dVar7 = adStack_e0[1];
  if ((int)uVar11 < 2) {
    if (uVar11 == 1) goto LAB_14693b56d;
  }
  else {
    if (adStack_e0[2] < adStack_e0[1]) {
      adStack_e0[1] = adStack_e0[2];
      adStack_e0[2] = dVar7;
    }
    dVar5 = adStack_e0[2];
    dVar7 = adStack_e0[1];
    if ((uVar11 != 2) && (adStack_e0[3] < adStack_e0[2])) {
      adStack_e0[2] = adStack_e0[3];
      adStack_e0[3] = dVar5;
      if (dVar8 < adStack_e0[1]) {
        adStack_e0[1] = dVar8;
        adStack_e0[2] = dVar7;
      }
    }
LAB_14693b56d:
    dVar7 = dVar3 - dVar2;
    dVar2 = dVar2 - (double)CONCAT44(uVar19,uVar18);
    dVar8 = dVar7 - dVar2;
    uVar13 = 1;
    do {
      dVar5 = adStack_e0[uVar13];
      if ((0.0 <= dVar5) && (dVar5 <= 1.0)) {
        param_2[iVar16] =
             dVar5 * dVar5 * dVar5 * (((dVar4 - dVar3) - dVar7) - dVar8) +
             dVar5 * dVar5 * 3.0 * dVar8 + dVar5 * 3.0 * dVar2 + *(double *)(param_1 + 0x10);
        if (0.0 <= (dVar5 * dVar5 * dVar9 + (dVar5 + dVar5) * dVar10 + dVar6) * (double)(int)uVar14)
        {
          param_3[iVar16] = uVar14;
          uVar14 = -uVar14;
          iVar16 = iVar16 + 1;
        }
      }
    } while ((uVar13 < uVar11) && (uVar13 = uVar13 + 1, iVar16 < 3));
  }
  dVar2 = *(double *)(param_1 + 0x48);
  uVar11 = uVar14;
  if ((dVar2 != param_4) || (NAN(dVar2) || NAN(param_4))) {
LAB_14693b6bf:
    if (uVar11 == (-(uint)(param_4 < *(double *)(param_1 + 0x48)) | 1)) goto LAB_14693b6d3;
    if (iVar16 < 1) {
      if (ABS(*(double *)(param_1 + 0x48) - param_4) < ABS(*(double *)(param_1 + 0x18) - param_4)) {
        param_2[iVar16] = *(undefined8 *)(param_1 + 0x40);
      }
      lVar12 = (longlong)iVar16;
      iVar16 = iVar16 + 1;
      param_3[lVar12] = uVar11;
      goto LAB_14693b6d3;
    }
  }
  else {
    uVar11 = 0xffffffff;
    if (0 >= iVar16 || 0 >= (int)uVar14) {
      uVar11 = uVar14;
    }
    iVar16 = iVar16 - (uint)(0 < iVar16 && 0 < (int)uVar14);
    dVar3 = *(double *)(param_1 + 0x38);
    if (dVar3 <= dVar2) {
      if ((dVar2 == dVar3) && (!NAN(dVar2) && !NAN(dVar3))) {
        if (dVar2 < *(double *)(param_1 + 0x28)) goto LAB_14693b667;
        if (((dVar2 != *(double *)(param_1 + 0x28)) || (*(double *)(param_1 + 0x18) <= dVar2)) ||
           (2 < iVar16)) goto LAB_14693b6bf;
        goto LAB_14693b670;
      }
      goto LAB_14693b6bf;
    }
LAB_14693b667:
    if (iVar16 < 3) {
LAB_14693b670:
      param_2[iVar16] = *(undefined8 *)(param_1 + 0x40);
      bVar17 = (int)uVar11 < 0;
      uVar11 = uVar14;
      if (bVar17) {
        param_3[iVar16] = 0xffffffff;
        uVar11 = 1;
        iVar16 = iVar16 + 1;
      }
      goto LAB_14693b6bf;
    }
    iVar16 = 3;
    if (uVar11 == (-(uint)(param_4 < dVar2) | 1)) goto LAB_14693b6d3;
  }
  iVar16 = iVar16 + -1;
LAB_14693b6d3:
  if ((local_c0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar16;
}



// FUNCTION 14693b7a2 FUN_14693b7a2 body=1057 status=ok
// SIG undefined FUN_14693b7a2(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_14693b7a2(longlong param_1,undefined8 *param_2,undefined4 *param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_108 [32];
  double local_e8;
  double adStack_e0 [4];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar11 = (uint)(*(double *)(param_1 + 0x10) <= param_4 && param_4 != *(double *)(param_1 + 0x10))
           * 2 - 1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar18 = (undefined4)uVar1;
  uVar19 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *param_2 = uVar1;
  local_e8 = *(double *)(param_1 + 0x10);
  iVar15 = 0;
  uVar14 = uVar11;
  iVar16 = 0;
  if ((local_e8 == param_4) && (iVar16 = iVar15, !NAN(local_e8) && !NAN(param_4))) {
    dVar2 = *(double *)(param_1 + 0x20);
    if (dVar2 <= local_e8) {
      uVar14 = 1;
      iVar16 = 0;
      if (((local_e8 != dVar2) || (iVar16 = iVar15, NAN(local_e8) || NAN(dVar2))) ||
         ((*(double *)(param_1 + 0x30) <= local_e8 &&
          ((local_e8 != *(double *)(param_1 + 0x30) || (*(double *)(param_1 + 0x40) <= local_e8)))))
         ) goto LAB_14693b863;
    }
    *param_3 = 1;
    local_e8 = *(double *)(param_1 + 0x10);
    uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x18);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    uVar14 = uVar11;
    iVar16 = 1;
  }
LAB_14693b863:
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x38);
  dVar9 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x20) - local_e8;
  dVar4 = *(double *)(param_1 + 0x48);
  dVar10 = dVar9 - dVar6;
  dVar9 = ((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x30)) - dVar9) - dVar10;
  local_e8 = local_e8 - param_4;
  uVar11 = FUN_146938aad(adStack_e0 + 1,dVar9,dVar10 * 3.0,dVar6 * 3.0);
  dVar8 = adStack_e0[3];
  dVar7 = adStack_e0[1];
  if ((int)uVar11 < 2) {
    if (uVar11 == 1) goto LAB_14693b98f;
  }
  else {
    if (adStack_e0[2] < adStack_e0[1]) {
      adStack_e0[1] = adStack_e0[2];
      adStack_e0[2] = dVar7;
    }
    dVar5 = adStack_e0[2];
    dVar7 = adStack_e0[1];
    if ((uVar11 != 2) && (adStack_e0[3] < adStack_e0[2])) {
      adStack_e0[2] = adStack_e0[3];
      adStack_e0[3] = dVar5;
      if (dVar8 < adStack_e0[1]) {
        adStack_e0[1] = dVar8;
        adStack_e0[2] = dVar7;
      }
    }
LAB_14693b98f:
    dVar7 = dVar3 - dVar2;
    dVar2 = dVar2 - (double)CONCAT44(uVar19,uVar18);
    dVar8 = dVar7 - dVar2;
    uVar13 = 1;
    do {
      dVar5 = adStack_e0[uVar13];
      if ((0.0 <= dVar5) && (dVar5 <= 1.0)) {
        param_2[iVar16] =
             dVar5 * dVar5 * dVar5 * (((dVar4 - dVar3) - dVar7) - dVar8) +
             dVar5 * dVar5 * 3.0 * dVar8 + dVar5 * 3.0 * dVar2 + *(double *)(param_1 + 0x18);
        if (0.0 <= (dVar5 * dVar5 * dVar9 + (dVar5 + dVar5) * dVar10 + dVar6) * (double)(int)uVar14)
        {
          param_3[iVar16] = uVar14;
          uVar14 = -uVar14;
          iVar16 = iVar16 + 1;
        }
      }
    } while ((uVar13 < uVar11) && (uVar13 = uVar13 + 1, iVar16 < 3));
  }
  dVar2 = *(double *)(param_1 + 0x40);
  uVar11 = uVar14;
  if ((dVar2 != param_4) || (NAN(dVar2) || NAN(param_4))) {
LAB_14693bae1:
    if (uVar11 == (-(uint)(param_4 < *(double *)(param_1 + 0x40)) | 1)) goto LAB_14693baf5;
    if (iVar16 < 1) {
      if (ABS(*(double *)(param_1 + 0x40) - param_4) < ABS(*(double *)(param_1 + 0x10) - param_4)) {
        param_2[iVar16] = *(undefined8 *)(param_1 + 0x48);
      }
      lVar12 = (longlong)iVar16;
      iVar16 = iVar16 + 1;
      param_3[lVar12] = uVar11;
      goto LAB_14693baf5;
    }
  }
  else {
    uVar11 = 0xffffffff;
    if (0 >= iVar16 || 0 >= (int)uVar14) {
      uVar11 = uVar14;
    }
    iVar16 = iVar16 - (uint)(0 < iVar16 && 0 < (int)uVar14);
    dVar3 = *(double *)(param_1 + 0x30);
    if (dVar3 <= dVar2) {
      if ((dVar2 == dVar3) && (!NAN(dVar2) && !NAN(dVar3))) {
        if (dVar2 < *(double *)(param_1 + 0x20)) goto LAB_14693ba89;
        if (((dVar2 != *(double *)(param_1 + 0x20)) || (*(double *)(param_1 + 0x10) <= dVar2)) ||
           (2 < iVar16)) goto LAB_14693bae1;
        goto LAB_14693ba92;
      }
      goto LAB_14693bae1;
    }
LAB_14693ba89:
    if (iVar16 < 3) {
LAB_14693ba92:
      param_2[iVar16] = *(undefined8 *)(param_1 + 0x48);
      bVar17 = (int)uVar11 < 0;
      uVar11 = uVar14;
      if (bVar17) {
        param_3[iVar16] = 0xffffffff;
        uVar11 = 1;
        iVar16 = iVar16 + 1;
      }
      goto LAB_14693bae1;
    }
    iVar16 = 3;
    if (uVar11 == (-(uint)(param_4 < dVar2) | 1)) goto LAB_14693baf5;
  }
  iVar16 = iVar16 + -1;
LAB_14693baf5:
  if ((local_c0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar16;
}



// FUNCTION 14693bc46 FUN_14693bc46 body=531 status=ok
// SIG undefined FUN_14693bc46(void)

void FUN_14693bc46(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  )

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar3 = (double)param_1[2];
  dVar1 = (double)param_1[3];
  if (dVar3 < *param_2) {
    *param_2 = dVar3;
  }
  if (dVar1 < *param_3) {
    *param_3 = dVar1;
  }
  if (*param_4 <= dVar3 && dVar3 != *param_4) {
    *param_4 = dVar3;
  }
  if (*param_5 <= dVar1 && dVar1 != *param_5) {
    *param_5 = dVar1;
  }
  dVar3 = (double)param_1[6];
  dVar1 = (double)param_1[7];
  if (dVar3 < *param_2) {
    *param_2 = dVar3;
  }
  if (dVar1 < *param_3) {
    *param_3 = dVar1;
  }
  if (*param_4 <= dVar3 && dVar3 != *param_4) {
    *param_4 = dVar3;
  }
  if (*param_5 <= dVar1 && dVar1 != *param_5) {
    *param_5 = dVar1;
  }
  dVar3 = ((double)param_1[5] - (double)param_1[3]) - ((double)param_1[7] - (double)param_1[5]);
  dVar2 = (double)param_1[4] - (double)param_1[2];
  dVar1 = dVar2 - ((double)param_1[6] - (double)param_1[4]);
  if ((((dVar1 != 0.0) || (NAN(dVar1))) && (dVar2 = dVar2 / dVar1, 0.0 < dVar2)) && (dVar2 < 1.0)) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_70);
    if (local_70 < *param_2) {
      *param_2 = local_70;
    }
    if (local_68 < *param_3) {
      *param_3 = local_68;
    }
    if (*param_4 <= local_70 && local_70 != *param_4) {
      *param_4 = local_70;
    }
    if (*param_5 <= local_68 && local_68 != *param_5) {
      *param_5 = local_68;
    }
  }
  if ((dVar3 != 0.0) || (NAN(dVar3))) {
    dVar3 = ((double)param_1[5] - (double)param_1[3]) / dVar3;
    if ((0.0 < dVar3) && (dVar3 < 1.0)) {
      (**(code **)(*param_1 + 0x20))(param_1,&local_80);
      if (local_80 < *param_2) {
        *param_2 = local_80;
      }
      if (local_78 < *param_3) {
        *param_3 = local_78;
      }
      if (*param_4 <= local_80 && local_80 != *param_4) {
        *param_4 = local_80;
      }
      if (*param_5 <= local_78 && local_78 != *param_5) {
        *param_5 = local_78;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693be5a FUN_14693be5a body=749 status=ok
// SIG undefined FUN_14693be5a(void)

void FUN_14693be5a(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8 [3];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar1 = (double)param_1[2];
  dVar2 = (double)param_1[3];
  if (dVar1 < *param_2) {
    *param_2 = dVar1;
  }
  if (dVar2 < *param_3) {
    *param_3 = dVar2;
  }
  if (*param_4 <= dVar1 && dVar1 != *param_4) {
    *param_4 = dVar1;
  }
  if (*param_5 <= dVar2 && dVar2 != *param_5) {
    *param_5 = dVar2;
  }
  dVar1 = (double)param_1[8];
  dVar2 = (double)param_1[9];
  if (dVar1 < *param_2) {
    *param_2 = dVar1;
  }
  if (dVar2 < *param_3) {
    *param_3 = dVar2;
  }
  if (*param_4 <= dVar1 && dVar1 != *param_4) {
    *param_4 = dVar1;
  }
  if (*param_5 <= dVar2 && dVar2 != *param_5) {
    *param_5 = dVar2;
  }
  dVar1 = (double)param_1[3];
  dVar2 = (double)param_1[4];
  dVar3 = (double)param_1[5];
  dVar6 = dVar3 - dVar1;
  dVar4 = (double)param_1[7];
  dVar7 = (dVar4 - dVar3) - dVar6;
  dVar10 = ((double)param_1[6] - dVar2) - (dVar2 - (double)param_1[2]);
  dVar5 = (double)param_1[9];
  uVar8 = FUN_1469389a0(local_b8,(((double)param_1[8] - (double)param_1[6] * 3.0) + dVar2 * 3.0) -
                                 (double)param_1[2],dVar10 + dVar10);
  if (0 < (int)uVar8) {
    uVar9 = 0;
    do {
      if ((0.0 < local_b8[uVar9]) && (local_b8[uVar9] < 1.0)) {
        (**(code **)(*param_1 + 0x20))(param_1,&local_c8);
        if (local_c8 < *param_2) {
          *param_2 = local_c8;
        }
        if (local_c0 < *param_3) {
          *param_3 = local_c0;
        }
        if (*param_4 <= local_c8 && local_c8 != *param_4) {
          *param_4 = local_c8;
        }
        if (*param_5 <= local_c0 && local_c0 != *param_5) {
          *param_5 = local_c0;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
  }
  uVar8 = FUN_1469389a0(local_b8,((dVar5 - dVar4 * 3.0) + dVar3 * 3.0) - dVar1,dVar7 + dVar7,dVar6);
  if (0 < (int)uVar8) {
    uVar9 = 0;
    do {
      if ((0.0 < local_b8[uVar9]) && (local_b8[uVar9] < 1.0)) {
        (**(code **)(*param_1 + 0x20))(param_1,&local_d8);
        if (local_d8 < *param_2) {
          *param_2 = local_d8;
        }
        if (local_d0 < *param_3) {
          *param_3 = local_d0;
        }
        if (*param_4 <= local_d8 && local_d8 != *param_4) {
          *param_4 = local_d8;
        }
        if (*param_5 <= local_d0 && local_d0 != *param_5) {
          *param_5 = local_d0;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693c148 FUN_14693c148 body=72 status=ok
// SIG undefined FUN_14693c148(void)

void FUN_14693c148(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  local_18._0_4_ = (undefined4)uVar1;
  local_18._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar2;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x20) = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0x24) = local_18._4_4_;
  *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_10;
  *(undefined4 *)(param_1 + 0x2c) = uStack_10._4_4_;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
  local_18 = uVar1;
  uStack_10 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693c192 FUN_14693c192 body=72 status=ok
// SIG undefined FUN_14693c192(void)

void FUN_14693c192(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
  local_18._0_4_ = (undefined4)uVar1;
  local_18._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar2;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0x34) = local_18._4_4_;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)uStack_10;
  *(undefined4 *)(param_1 + 0x3c) = uStack_10._4_4_;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
  local_18 = uVar1;
  uStack_10 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693c1dc FUN_14693c1dc body=98 status=ok
// SIG undefined FUN_14693c1dc(void)

void FUN_14693c1dc(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
  local_18._0_4_ = (undefined4)uVar1;
  local_18._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar2;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x40) = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0x44) = local_18._4_4_;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_10;
  *(undefined4 *)(param_1 + 0x4c) = uStack_10._4_4_;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x38);
  local_18._0_4_ = (undefined4)uVar3;
  local_18._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar4;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0x34) = local_18._4_4_;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)uStack_10;
  *(undefined4 *)(param_1 + 0x3c) = uStack_10._4_4_;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
  local_18 = uVar3;
  uStack_10 = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693c248 FUN_14693c248 body=277 status=ok
// SIG undefined FUN_14693c248(void)

void FUN_14693c248(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar7 = *(double *)(param_1 + 0x20);
  dVar1 = *(double *)(param_1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x38) - dVar1;
  dVar3 = *(double *)(param_1 + 0x30) - dVar7;
  dVar5 = *(double *)(param_1 + 0x18) - dVar1;
  dVar4 = *(double *)(param_1 + 0x10) - dVar7;
  dVar6 = ((param_2[1] - *(double *)(param_1 + 0x18)) * dVar4 -
          (*param_2 - *(double *)(param_1 + 0x10)) * dVar5) / (dVar4 * dVar2 - dVar3 * dVar5);
  dVar7 = dVar6 * dVar3 + dVar7;
  *(double *)(param_1 + 0x20) = dVar7;
  dVar1 = dVar2 * dVar6 + dVar1;
  *(double *)(param_1 + 0x28) = dVar1;
  dVar2 = param_2[1];
  *(double *)(param_1 + 0x10) = *param_2;
  *(double *)(param_1 + 0x18) = dVar2;
  if ((*(double *)(param_1 + 0x10) - dVar7) * dVar4 + (*(double *)(param_1 + 0x18) - dVar1) * dVar5
      < 0.0) {
    *(undefined8 *)(param_1 + 0x20) = local_58;
    *(undefined8 *)(param_1 + 0x28) = uStack_50;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693c396 FUN_14693c396 body=277 status=ok
// SIG undefined FUN_14693c396(void)

void FUN_14693c396(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar7 = *(double *)(param_1 + 0x20);
  dVar1 = *(double *)(param_1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x18) - dVar1;
  dVar3 = *(double *)(param_1 + 0x10) - dVar7;
  dVar5 = *(double *)(param_1 + 0x38) - dVar1;
  dVar4 = *(double *)(param_1 + 0x30) - dVar7;
  dVar6 = ((param_2[1] - *(double *)(param_1 + 0x38)) * dVar4 -
          (*param_2 - *(double *)(param_1 + 0x30)) * dVar5) / (dVar4 * dVar2 - dVar3 * dVar5);
  dVar7 = dVar6 * dVar3 + dVar7;
  *(double *)(param_1 + 0x20) = dVar7;
  dVar1 = dVar2 * dVar6 + dVar1;
  *(double *)(param_1 + 0x28) = dVar1;
  dVar2 = param_2[1];
  *(double *)(param_1 + 0x30) = *param_2;
  *(double *)(param_1 + 0x38) = dVar2;
  if ((*(double *)(param_1 + 0x30) - dVar7) * dVar4 + (*(double *)(param_1 + 0x38) - dVar1) * dVar5
      < 0.0) {
    *(undefined8 *)(param_1 + 0x20) = local_58;
    *(undefined8 *)(param_1 + 0x28) = uStack_50;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693c4dc FUN_14693c4dc body=379 status=ok
// SIG undefined FUN_14693c4dc(void)

void FUN_14693c4dc(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  lVar1 = param_1[1];
  (**(code **)(*param_1 + 0x20))(param_1,&local_80,0x55555555);
  *(int *)(puVar2 + 1) = (int)lVar1;
  *puVar2 = &PTR_FUN_149ed35d0;
  lVar1 = param_1[3];
  puVar2[2] = param_1[2];
  puVar2[3] = lVar1;
  *(undefined4 *)(puVar2 + 4) = local_80;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_7c;
  *(undefined4 *)(puVar2 + 5) = uStack_78;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_74;
  *param_2 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  lVar1 = param_1[1];
  (**(code **)(*param_1 + 0x20))(param_1,&local_90,0x55555555);
  (**(code **)(*param_1 + 0x20))(param_1,&local_a0,0x55555555);
  *(int *)(puVar2 + 1) = (int)lVar1;
  *puVar2 = &PTR_FUN_149ed35d0;
  puVar2[2] = local_a0;
  puVar2[3] = uStack_98;
  *(undefined4 *)(puVar2 + 4) = local_90;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_8c;
  *(undefined4 *)(puVar2 + 5) = uStack_88;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_84;
  *param_3 = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  lVar1 = param_1[1];
  local_b8 = (undefined4)param_1[4];
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_b0 = (undefined4)param_1[5];
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  (**(code **)(*param_1 + 0x20))(param_1,&local_c8,0x55555555);
  *(int *)(puVar2 + 1) = (int)lVar1;
  *puVar2 = &PTR_FUN_149ed35d0;
  puVar2[2] = local_c8;
  puVar2[3] = uStack_c0;
  *(undefined4 *)(puVar2 + 4) = local_b8;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_b4;
  *(undefined4 *)(puVar2 + 5) = uStack_b0;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_ac;
  *param_4 = puVar2;
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693c658 FUN_14693c658 body=737 status=ok
// SIG undefined FUN_14693c658(void)

void FUN_14693c658(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar7 = param_1[1];
  (**(code **)(*param_1 + 0x20))(param_1,&local_d0,0x3fd5555555555555);
  dVar1 = (double)param_1[5];
  dVar2 = (double)param_1[3];
  dVar3 = (double)param_1[4];
  dVar4 = (double)param_1[2];
  *(int *)(puVar8 + 1) = (int)lVar7;
  *puVar8 = &PTR_FUN_149ed3660;
  lVar7 = param_1[3];
  puVar8[2] = param_1[2];
  puVar8[3] = lVar7;
  puVar8[4] = dVar4 * 0.6666666666666667 + dVar3 * 0.3333333333333333;
  puVar8[5] = dVar2 * 0.6666666666666667 + dVar1 * 0.3333333333333333;
  *(undefined4 *)(puVar8 + 6) = local_d0;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_cc;
  *(undefined4 *)(puVar8 + 7) = uStack_c8;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_c4;
  *param_2 = puVar8;
  puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar7 = param_1[1];
  (**(code **)(*param_1 + 0x20))(param_1,&local_e0,0x3fe5555555555555);
  dVar1 = (double)param_1[7];
  dVar2 = (double)param_1[5];
  dVar3 = (double)param_1[3];
  dVar4 = (double)param_1[6];
  dVar5 = (double)param_1[4];
  dVar6 = (double)param_1[2];
  (**(code **)(*param_1 + 0x20))(param_1,&local_f0,0x3fd5555555555555);
  *(int *)(puVar8 + 1) = (int)lVar7;
  *puVar8 = &PTR_FUN_149ed3660;
  puVar8[2] = local_f0;
  puVar8[3] = uStack_e8;
  puVar8[4] = (dVar6 * 0.4444444444444444 + dVar5 * 0.5555555555555556) * 0.5 +
              (dVar4 * 0.4444444444444444 + dVar5 * 0.5555555555555556) * 0.5;
  puVar8[5] = (dVar3 * 0.4444444444444444 + dVar2 * 0.5555555555555556) * 0.5 +
              (dVar1 * 0.4444444444444444 + dVar2 * 0.5555555555555556) * 0.5;
  *(undefined4 *)(puVar8 + 6) = local_e0;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_dc;
  *(undefined4 *)(puVar8 + 7) = uStack_d8;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_d4;
  *param_3 = puVar8;
  puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  lVar7 = param_1[1];
  local_108 = param_1[6];
  uStack_100 = param_1[7];
  dVar1 = (double)param_1[4];
  dVar2 = (double)param_1[6];
  dVar3 = (double)param_1[5];
  dVar4 = (double)param_1[7];
  (**(code **)(*param_1 + 0x20))(param_1,&local_118,0x3fe5555555555555);
  *(int *)(puVar8 + 1) = (int)lVar7;
  *puVar8 = &PTR_FUN_149ed3660;
  puVar8[2] = local_118;
  puVar8[3] = uStack_110;
  puVar8[4] = dVar2 * 0.6666666666666666 + dVar1 * 0.33333333333333337;
  puVar8[5] = dVar4 * 0.6666666666666666 + dVar3 * 0.33333333333333337;
  *(undefined4 *)(puVar8 + 6) = (undefined4)local_108;
  *(undefined4 *)((longlong)puVar8 + 0x34) = local_108._4_4_;
  *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_100._4_4_;
  *param_4 = puVar8;
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693c93a FUN_14693c93a body=1462 status=ok
// SIG undefined FUN_14693c93a(void)

void FUN_14693c93a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar6 = param_1[1];
  (**(code **)(*param_1 + 0x20))(param_1,&local_100,0x3fd5555555555555);
  dVar1 = (double)param_1[4];
  dVar2 = (double)param_1[5];
  dVar3 = (double)param_1[7];
  dVar4 = (double)param_1[3];
  uVar9 = SUB84(dVar4,0);
  uVar10 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar14 = (double)param_1[2];
  dVar16 = dVar4 * 0.6666666666666667 + dVar2 * 0.3333333333333333;
  dVar15 = dVar14 * 0.6666666666666667 + dVar1 * 0.3333333333333333;
  bVar8 = dVar4 != dVar2 || dVar14 != dVar1;
  if (bVar8) {
    dVar14 = dVar15;
  }
  dVar4 = (double)param_1[6];
  *(int *)(puVar7 + 1) = (int)lVar6;
  *puVar7 = &PTR_FUN_149ed36f0;
  if (bVar8) {
    uVar9 = SUB84(dVar16,0);
    uVar10 = (undefined4)((ulonglong)dVar16 >> 0x20);
  }
  lVar6 = param_1[3];
  puVar7[2] = param_1[2];
  puVar7[3] = lVar6;
  puVar7[4] = dVar14;
  puVar7[5] = CONCAT44(uVar10,uVar9);
  puVar7[6] = dVar15 * 0.6666666666666667 +
              (dVar1 * 0.6666666666666667 + dVar4 * 0.3333333333333333) * 0.3333333333333333;
  puVar7[7] = (dVar2 * 0.6666666666666667 + dVar3 * 0.3333333333333333) * 0.3333333333333333 +
              dVar16 * 0.6666666666666667;
  *(undefined4 *)(puVar7 + 8) = local_100;
  *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_fc;
  *(undefined4 *)(puVar7 + 9) = uStack_f8;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_f4;
  *param_2 = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar6 = param_1[1];
  (**(code **)(*param_1 + 0x20))(param_1,&local_110,0x3fe5555555555555);
  dVar1 = (double)param_1[8];
  dVar2 = (double)param_1[9];
  dVar3 = (double)param_1[6];
  dVar4 = (double)param_1[7];
  dVar14 = (double)param_1[4];
  dVar15 = (double)param_1[5];
  dVar17 = dVar15 * 0.33333333333333337 + dVar4 * 0.6666666666666666;
  dVar16 = (double)param_1[2];
  dVar5 = (double)param_1[3];
  dVar11 = dVar15 * 0.6666666666666667 + dVar4 * 0.3333333333333333;
  (**(code **)(*param_1 + 0x20))(param_1,&local_120,0x3fd5555555555555);
  *(int *)(puVar7 + 1) = (int)lVar6;
  *puVar7 = &PTR_FUN_149ed36f0;
  dVar12 = dVar14 * 0.33333333333333337 + dVar3 * 0.6666666666666666;
  dVar13 = dVar14 * 0.6666666666666667 + dVar3 * 0.3333333333333333;
  *(undefined4 *)(puVar7 + 2) = local_120;
  *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_11c;
  *(undefined4 *)(puVar7 + 3) = uStack_118;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_114;
  puVar7[4] = ((dVar16 * 0.6666666666666667 + dVar14 * 0.3333333333333333) * 0.6666666666666667 +
              dVar13 * 0.3333333333333333) * 0.33333333333333337 +
              (dVar13 * 0.6666666666666667 +
              (dVar3 * 0.6666666666666667 + dVar1 * 0.3333333333333333) * 0.3333333333333333) *
              0.6666666666666666;
  puVar7[5] = ((dVar5 * 0.6666666666666667 + dVar15 * 0.3333333333333333) * 0.6666666666666667 +
              dVar11 * 0.3333333333333333) * 0.33333333333333337 +
              (dVar11 * 0.6666666666666667 +
              (dVar4 * 0.6666666666666667 + dVar2 * 0.3333333333333333) * 0.3333333333333333) *
              0.6666666666666666;
  puVar7[6] = ((dVar16 * 0.33333333333333337 + dVar14 * 0.6666666666666666) * 0.33333333333333337 +
              dVar12 * 0.6666666666666666) * 0.6666666666666667 +
              (dVar12 * 0.33333333333333337 +
              (dVar3 * 0.33333333333333337 + dVar1 * 0.6666666666666666) * 0.6666666666666666) *
              0.3333333333333333;
  puVar7[7] = ((dVar5 * 0.33333333333333337 + dVar15 * 0.6666666666666666) * 0.33333333333333337 +
              dVar17 * 0.6666666666666666) * 0.6666666666666667 +
              (dVar17 * 0.33333333333333337 +
              (dVar4 * 0.33333333333333337 + dVar2 * 0.6666666666666666) * 0.6666666666666666) *
              0.3333333333333333;
  *(undefined4 *)(puVar7 + 8) = local_110;
  *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_10c;
  *(undefined4 *)(puVar7 + 9) = uStack_108;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_104;
  *param_3 = puVar7;
  puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar6 = param_1[1];
  local_138 = param_1[8];
  uStack_130 = param_1[9];
  dVar1 = (double)param_1[8];
  dVar2 = (double)param_1[9];
  dVar3 = (double)param_1[6];
  dVar4 = (double)param_1[7];
  if ((((dVar3 != dVar1) || (NAN(dVar3) || NAN(dVar1))) || (dVar4 != dVar2)) ||
     (NAN(dVar4) || NAN(dVar2))) {
    dVar15 = dVar4 * 0.33333333333333337 + dVar2 * 0.6666666666666666;
    dVar14 = dVar1 * 0.6666666666666666 + dVar3 * 0.33333333333333337;
    dVar2 = dVar15;
    dVar1 = dVar14;
  }
  else {
    dVar14 = dVar1 * 0.6666666666666666 + dVar3 * 0.33333333333333337;
    dVar15 = dVar2 * 0.6666666666666666 + dVar4 * 0.33333333333333337;
  }
  dVar16 = (double)param_1[4];
  dVar5 = (double)param_1[5];
  (**(code **)(*param_1 + 0x20))(param_1,&local_148,0x3fe5555555555555);
  *(int *)(puVar7 + 1) = (int)lVar6;
  *puVar7 = &PTR_FUN_149ed36f0;
  puVar7[2] = local_148;
  puVar7[3] = uStack_140;
  puVar7[4] = dVar14 * 0.6666666666666666 +
              (dVar3 * 0.6666666666666666 + dVar16 * 0.33333333333333337) * 0.33333333333333337;
  puVar7[5] = dVar15 * 0.6666666666666666 +
              (dVar4 * 0.6666666666666666 + dVar5 * 0.33333333333333337) * 0.33333333333333337;
  puVar7[6] = dVar1;
  puVar7[7] = dVar2;
  *(undefined4 *)(puVar7 + 8) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar7 + 0x44) = local_138._4_4_;
  *(undefined4 *)(puVar7 + 9) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_130._4_4_;
  *param_4 = puVar7;
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693cef2 FUN_14693cef2 body=944 status=ok
// SIG undefined FUN_14693cef2(void)

void FUN_14693cef2(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  ,double param_6)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*param_1 != param_1[1]) {
    plVar1 = *(longlong **)(param_1[1] + -8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_100,0x3ff0000000000000);
    puVar5 = (undefined8 *)*param_1;
    if (puVar5 != (undefined8 *)param_1[1]) {
      dVar6 = SQRT(local_100 * local_100 + local_f8 * local_f8);
      dVar2 = local_f8 / dVar6;
      if ((dVar6 == 0.0) && (!NAN(dVar6))) {
        dVar2 = 0.0;
      }
      dVar3 = local_100 / dVar6;
      if ((dVar6 == 0.0) && (!NAN(dVar6))) {
        dVar3 = 0.0;
      }
      do {
        (**(code **)(*(longlong *)*puVar5 + 0x28))((longlong *)*puVar5,&local_100,0);
        dVar7 = SQRT(local_100 * local_100 + local_f8 * local_f8);
        dVar6 = -local_f8 / dVar7;
        if ((dVar7 == 0.0) && (!NAN(dVar7))) {
          dVar6 = -0.0;
        }
        dVar4 = -local_100 / dVar7;
        if ((dVar7 == 0.0) && (!NAN(dVar7))) {
          dVar4 = -0.0;
        }
        if (0.0 <= dVar3 * dVar6 - dVar4 * dVar2) {
          dVar8 = (1.0 - (dVar3 * dVar4 + dVar2 * dVar6)) * 0.5;
          dVar7 = 1.0;
          if (0.0 < dVar8) {
            if (dVar8 < 0.0) {
              dVar8 = sqrt(dVar8);
            }
            else {
              dVar8 = SQRT(dVar8);
            }
            dVar7 = 1.0;
            if (1.0 / dVar8 <= 1.0) {
              dVar7 = 1.0 / dVar8;
            }
          }
          dVar2 = dVar2 + dVar6;
          dVar3 = dVar3 + dVar4;
          dVar6 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
          dVar3 = dVar3 / dVar6;
          if ((dVar6 == 0.0) && (!NAN(dVar6))) {
            dVar3 = 0.0;
          }
          dVar2 = dVar2 / dVar6;
          if ((dVar6 == 0.0) && (!NAN(dVar6))) {
            dVar2 = 0.0;
          }
          (**(code **)(*(longlong *)*puVar5 + 0x20))((longlong *)*puVar5,&local_110);
          dVar2 = dVar2 * dVar7 * param_6 + local_108;
          dVar6 = dVar3 * dVar7 * param_6 + local_110;
          if (dVar6 < *param_2) {
            *param_2 = dVar6;
          }
          if (dVar2 < *param_3) {
            *param_3 = dVar2;
          }
          if (*param_4 <= dVar6 && dVar6 != *param_4) {
            *param_4 = dVar6;
          }
          if (*param_5 <= dVar2 && dVar2 != *param_5) {
            *param_5 = dVar2;
          }
        }
        (**(code **)(*(longlong *)*puVar5 + 0x28))((longlong *)*puVar5,&local_100);
        dVar6 = SQRT(local_100 * local_100 + local_f8 * local_f8);
        dVar2 = local_f8 / dVar6;
        if ((dVar6 == 0.0) && (!NAN(dVar6))) {
          dVar2 = 0.0;
        }
        dVar3 = local_100 / dVar6;
        if ((dVar6 == 0.0) && (!NAN(dVar6))) {
          dVar3 = 0.0;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != (undefined8 *)param_1[1]);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14693d2a4 FUN_14693d2a4 body=655 status=ok
// SIG undefined FUN_14693d2a4(void)

int FUN_14693d2a4(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar4 == puVar1) {
    iVar2 = 0;
    goto LAB_14693d48f;
  }
  lVar3 = (longlong)puVar1 - (longlong)puVar4 >> 3;
  if (lVar3 == 2) {
    (**(code **)(*(longlong *)*puVar4 + 0x20))((longlong *)*puVar4,&local_68,0);
    (**(code **)(**(longlong **)*param_1 + 0x20))
              (*(longlong **)*param_1,&local_78,0x3fe0000000000000);
    (**(code **)(**(longlong **)(*param_1 + 8) + 0x20))(*(longlong **)(*param_1 + 8),&local_88,0);
    (**(code **)(**(longlong **)(*param_1 + 8) + 0x20))
              (*(longlong **)(*param_1 + 8),&local_98,0x3fe0000000000000);
    uVar7 = SUB84(dStack_60,0);
    uVar8 = (undefined4)((ulonglong)dStack_60 >> 0x20);
    dVar5 = local_68 - local_98;
    dVar6 = (local_80 + local_90) * (local_98 - local_88) +
            (dStack_70 + local_80) * (local_88 - local_78) +
            (dStack_60 + dStack_70) * (local_78 - local_68) + 0.0;
    local_80 = local_90;
LAB_14693d46b:
    dVar6 = ((double)CONCAT44(uVar8,uVar7) + local_80) * dVar5 + dVar6;
  }
  else {
    if (lVar3 == 1) {
      (**(code **)(*(longlong *)*puVar4 + 0x20))((longlong *)*puVar4,&local_68,0);
      (**(code **)(**(longlong **)*param_1 + 0x20))
                (*(longlong **)*param_1,&local_78,0x3fd5555555555555);
      (**(code **)(**(longlong **)*param_1 + 0x20))
                (*(longlong **)*param_1,&local_88,0x3fe5555555555555);
      uVar7 = SUB84(dStack_60,0);
      uVar8 = (undefined4)((ulonglong)dStack_60 >> 0x20);
      dVar5 = local_68 - local_88;
      dVar6 = (dStack_70 + local_80) * (local_88 - local_78) +
              (dStack_60 + dStack_70) * (local_78 - local_68) + 0.0;
      goto LAB_14693d46b;
    }
    dVar6 = 0.0;
    (**(code **)(*(longlong *)puVar1[-1] + 0x20))((longlong *)puVar1[-1],&local_68,0);
    puVar4 = (undefined8 *)*param_1;
    if (puVar4 != (undefined8 *)param_1[1]) {
      dVar6 = 0.0;
      do {
        (**(code **)(*(longlong *)*puVar4 + 0x20))((longlong *)*puVar4,&local_78,0);
        dVar6 = dVar6 + (dStack_60 + dStack_70) * (local_78 - local_68);
        local_68 = local_78;
        dStack_60 = dStack_70;
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined8 *)param_1[1]);
    }
  }
  iVar2 = (uint)(0.0 < dVar6) - (uint)(dVar6 < 0.0);
LAB_14693d48f:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 14693d534 FUN_14693d534 body=135 status=ok
// SIG undefined FUN_14693d534(void)

void FUN_14693d534(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  puVar7 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  if (1 < (int)((ulonglong)((longlong)puVar6 - (longlong)puVar7) >> 3)) {
    uVar3 = (ulonglong)((uint)((ulonglong)((longlong)puVar6 - (longlong)puVar7) >> 4) & 0x7fffffff);
    uVar5 = uVar3 + 1;
    lVar4 = -uVar3;
    do {
      lVar1 = *param_1;
      lVar8 = ((ulonglong)(param_1[1] - lVar1) >> 3) + lVar4;
      uVar2 = *(undefined8 *)(lVar1 + -0x10 + uVar5 * 8);
      *(undefined8 *)(lVar1 + -0x10 + uVar5 * 8) = *(undefined8 *)(lVar1 + lVar8 * 8);
      *(undefined8 *)(lVar1 + lVar8 * 8) = uVar2;
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + 1;
    } while (1 < uVar5);
    puVar7 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
  }
  if (puVar7 != puVar6) {
    do {
      (**(code **)(*(longlong *)*puVar7 + 0x68))();
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined8 *)param_1[1]);
  }
  return;
}



// FUNCTION 14693d5bc FUN_14693d5bc body=360 status=ok
// SIG undefined FUN_14693d5bc(void)

void FUN_14693d5bc(double *param_1,double *param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = SQRT((*param_2 - *param_1) * (*param_2 - *param_1) +
               (param_2[1] - param_1[1]) * (param_2[1] - param_1[1])) * 1.001;
  uVar1 = -(ulonglong)(0.0 < param_1[2]);
  dVar3 = (double)(~uVar1 & 0xbff0000000000000 | uVar1 & 0x3ff0000000000000) * dVar2 + param_1[2];
  param_1[2] = dVar3;
  param_1[4] = (double)((ulonglong)dVar3 | 0x8000000000000000);
  param_1[5] = ABS(dVar3);
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  uVar1 = -(ulonglong)(0.0 < param_1[8]);
  dVar3 = (double)(~uVar1 & 0xbff0000000000000 |
                  (ulonglong)((uint)(uVar1 >> 0x20) & 0x3ff00000) << 0x20) * dVar2 + param_1[8];
  param_1[8] = dVar3;
  param_1[10] = (double)((ulonglong)dVar3 | 0x8000000000000000);
  param_1[0xb] = ABS(dVar3);
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  uVar1 = -(ulonglong)(0.0 < param_1[0xe]);
  dVar2 = (double)(~uVar1 & 0xbff0000000000000 | uVar1 & 0x3ff0000000000000) * dVar2 + param_1[0xe];
  param_1[0xe] = dVar2;
  param_1[0x10] = (double)((ulonglong)dVar2 | 0x8000000000000000);
  param_1[0x11] = ABS(dVar2);
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  dVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar2;
  return;
}



// FUNCTION 14693d724 FUN_14693d724 body=162 status=ok
// SIG undefined FUN_14693d724(void)

undefined8 * FUN_14693d724(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1469403fc(param_1 + 0x10,param_1);
  uVar2 = FUN_1469403fc(param_1 + 0x40,param_1);
  uVar3 = FUN_1469403fc(param_1 + 0x70,param_1);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  FUN_1469412d8(param_1,local_50);
  param_2[3] = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14693d7c8 FUN_14693d7c8 body=225 status=ok
// SIG undefined FUN_14693d7c8(void)

undefined8 * FUN_14693d7c8(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14693d8aa(param_1 + 2,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  lVar2 = *param_2;
  lVar3 = lVar2;
  if (lVar2 != param_2[1]) {
    do {
      local_3c = FUN_14693d2a4(lVar3);
      puVar1 = (undefined4 *)param_1[3];
      if (puVar1 == (undefined4 *)param_1[4]) {
        FUN_14694af78(param_1 + 2,puVar1,&local_3c);
      }
      else {
        *puVar1 = local_3c;
        param_1[3] = param_1[3] + 4;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != param_2[1]);
    lVar2 = *param_2;
  }
  FUN_14694b048(param_1 + 5,(lVar3 - lVar2 >> 3) * -0x5555555555555555);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14693d8aa FUN_14693d8aa body=127 status=ok
// SIG undefined FUN_14693d8aa(void)

void FUN_14693d8aa(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (param_2 <= (ulonglong)(param_1[2] - lVar1 >> 2)) {
    return;
  }
  if (param_2 >> 0x3e == 0) {
    lVar2 = param_1[1];
    _Dst = (void *)FUN_14627a224(param_1,param_2);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_14694af0e(param_1,_Dst,lVar2 - lVar1 >> 2,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694aefc();
}



// FUNCTION 14693d92a FUN_14693d92a body=989 status=ok
// SIG undefined FUN_14693d92a(void)

double FUN_14693d92a(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double *pdVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  dVar1 = param_1[5];
  dVar9 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]) * -1.001 + -1.79769313486232e+308;
  uVar4 = (uint)((ulonglong)((longlong)param_1[6] - (longlong)dVar1) >> 5);
  dVar12 = dVar9;
  dVar10 = dVar9;
  if (0 < (int)uVar4) {
    pdVar6 = (double *)((longlong)dVar1 + 0x18);
    uVar8 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar18 = 0;
    uVar22 = 0;
    uVar23 = 0;
    dVar13 = dVar9;
    do {
      dVar12 = pdVar6[-1];
      dVar5 = *pdVar6;
      uVar20 = SUB84(dVar5,0);
      uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar11 = ABS(dVar12);
      dVar2 = ABS(dVar10);
      uVar17 = uVar20;
      uVar19 = uVar21;
      dVar3 = dVar12;
      if (dVar2 <= dVar11) {
        uVar17 = uVar16;
        uVar19 = uVar18;
        dVar3 = dVar10;
        if (((dVar11 == dVar2) && (!NAN(dVar11) && !NAN(dVar2))) &&
           (dVar5 <= (double)CONCAT44(uVar18,uVar16) && (double)CONCAT44(uVar18,uVar16) != dVar5)) {
          uVar17 = uVar20;
          uVar19 = uVar21;
          dVar3 = dVar12;
        }
      }
      dVar10 = dVar3;
      iVar7 = *(int *)((longlong)param_1[2] + uVar8 * 4);
      if ((iVar7 < 1) || (dVar12 < 0.0)) {
        if ((-1 < iVar7) || (0.0 < dVar12)) goto LAB_14693da59;
        dVar2 = ABS(dVar13);
        if (dVar2 <= dVar11) {
          if (((dVar11 != dVar2) || (NAN(dVar11) || NAN(dVar2))) ||
             ((double)CONCAT44(uVar23,uVar22) < dVar5 || (double)CONCAT44(uVar23,uVar22) == dVar5))
          goto LAB_14693da59;
        }
      }
      else {
        dVar2 = ABS(dVar9);
        if (dVar2 <= dVar11) {
          if (((dVar11 != dVar2) || (NAN(dVar11) || NAN(dVar2))) ||
             ((double)CONCAT44(uVar15,uVar14) < dVar5 || (double)CONCAT44(uVar15,uVar14) == dVar5))
          goto LAB_14693da59;
        }
        dVar9 = dVar12;
        uVar14 = uVar20;
        uVar15 = uVar21;
LAB_14693da59:
        dVar12 = dVar13;
        uVar20 = uVar22;
        uVar21 = uVar23;
      }
      uVar8 = uVar8 + 1;
      pdVar6 = pdVar6 + 4;
      uVar16 = uVar17;
      uVar18 = uVar19;
      uVar22 = uVar20;
      uVar23 = uVar21;
      dVar13 = dVar12;
    } while ((uVar4 & 0x7fffffff) != uVar8);
  }
  if ((dVar9 < 0.0) || (dVar13 = ABS(dVar12), dVar13 < ABS(dVar9))) {
    if (0.0 < dVar12) {
      return dVar10;
    }
    if (ABS(dVar9) <= ABS(dVar12)) {
      return dVar10;
    }
    if ((int)uVar4 < 1) goto LAB_14693dc9e;
    dVar5 = param_1[2];
    pdVar6 = (double *)((longlong)dVar1 + 0x10);
    uVar8 = 0;
    do {
      dVar11 = dVar12;
      if ((*(int *)((longlong)dVar5 + uVar8 * 4) < 0) &&
         (dVar11 = *pdVar6, ABS(dVar9) <= ABS(dVar11) || dVar12 <= dVar11)) {
        dVar11 = dVar12;
      }
      uVar8 = uVar8 + 1;
      pdVar6 = pdVar6 + 4;
      dVar12 = dVar11;
    } while ((uVar4 & 0x7fffffff) != uVar8);
    iVar7 = -1;
  }
  else {
    dVar12 = dVar9;
    if ((int)uVar4 < 1) goto LAB_14693dc9e;
    dVar5 = param_1[2];
    pdVar6 = (double *)((longlong)dVar1 + 0x10);
    uVar8 = 0;
    do {
      dVar11 = dVar9;
      if ((0 < *(int *)((longlong)dVar5 + uVar8 * 4)) &&
         (dVar11 = *pdVar6, dVar13 <= ABS(dVar11) || dVar11 <= dVar9)) {
        dVar11 = dVar9;
      }
      uVar8 = uVar8 + 1;
      pdVar6 = pdVar6 + 4;
      dVar9 = dVar11;
    } while ((uVar4 & 0x7fffffff) != uVar8);
    iVar7 = 1;
  }
  dVar12 = dVar11;
  if (0 < (int)uVar4) {
    pdVar6 = (double *)((longlong)dVar1 + 0x10);
    uVar8 = 0;
    do {
      if (((*(int *)((longlong)dVar5 + uVar8 * 4) != iVar7) &&
          (dVar12 = *pdVar6, 0.0 <= dVar11 * dVar12)) && (ABS(dVar12) < ABS(dVar11))) {
        dVar11 = dVar12;
      }
      uVar8 = uVar8 + 1;
      pdVar6 = pdVar6 + 4;
      dVar12 = dVar11;
    } while ((uVar4 & 0x7fffffff) != uVar8);
  }
LAB_14693dc9e:
  return (double)((ulonglong)dVar10 & -(ulonglong)(dVar12 == dVar10) |
                 ~-(ulonglong)(dVar12 == dVar10) & (ulonglong)dVar12);
}



// FUNCTION 14693dd08 FUN_14693dd08 body=225 status=ok
// SIG undefined FUN_14693dd08(void)

undefined8 * FUN_14693dd08(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14693d8aa(param_1 + 2,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  lVar2 = *param_2;
  lVar3 = lVar2;
  if (lVar2 != param_2[1]) {
    do {
      local_3c = FUN_14693d2a4(lVar3);
      puVar1 = (undefined4 *)param_1[3];
      if (puVar1 == (undefined4 *)param_1[4]) {
        FUN_14694af78(param_1 + 2,puVar1,&local_3c);
      }
      else {
        *puVar1 = local_3c;
        param_1[3] = param_1[3] + 4;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != param_2[1]);
    lVar2 = *param_2;
  }
  FUN_14694b258(param_1 + 5,(lVar3 - lVar2 >> 3) * -0x5555555555555555);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14693ddea FUN_14693ddea body=188 status=ok
// SIG undefined FUN_14693ddea(void)

void FUN_14693ddea(double *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar2;
  pdVar1 = (double *)param_1[5];
  if (pdVar1 != (double *)param_1[6]) {
    do {
      dVar2 = SQRT((*param_2 - pdVar1[6]) * (*param_2 - pdVar1[6]) +
                   (param_2[1] - pdVar1[7]) * (param_2[1] - pdVar1[7])) * 1.001 *
              (double)(&DAT_149931160)[0.0 < *pdVar1] + *pdVar1;
      *pdVar1 = dVar2;
      pdVar1[2] = (double)((ulonglong)dVar2 | 0x8000000000000000);
      pdVar1[3] = ABS(dVar2);
      pdVar1[4] = 0.0;
      pdVar1[5] = 0.0;
      dVar2 = param_2[1];
      pdVar1[6] = *param_2;
      pdVar1[7] = dVar2;
      pdVar1 = pdVar1 + 8;
    } while (pdVar1 != (double *)param_1[6]);
  }
  return;
}



// FUNCTION 14693dea6 FUN_14693dea6 body=1665 status=ok
// SIG undefined FUN_14693dea6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14693dea6(double *param_1)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar19 [16];
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_1e8 [40];
  undefined8 local_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar14 = param_1[5];
  uVar8 = 0;
  dStack_130 = 0.0;
  dStack_170 = 0.0;
  dStack_1b0 = 0.0;
  local_1b8 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]) * -1.001 + -1.79769313486232e+308;
  dVar15 = ABS(local_1b8);
  local_128 = (double)(DAT_149931e80 | (ulonglong)local_1b8);
  local_108 = *param_1;
  dStack_100 = param_1[1];
  local_148 = *(undefined4 *)param_1;
  uStack_144 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_140 = *(undefined4 *)(param_1 + 1);
  uStack_13c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_188 = *param_1;
  dStack_180 = param_1[1];
  uVar9 = (uint)((ulonglong)((longlong)param_1[6] - (longlong)dVar14) >> 6);
  uVar21 = SUB84(local_128,0);
  uVar22 = (undefined4)((ulonglong)local_128 >> 0x20);
  local_178 = local_1b8;
  local_138 = local_1b8;
  if ((int)uVar9 < 1) {
    local_1c0 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar10 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar12 = 0;
    local_168 = local_128;
    local_120 = dVar15;
    local_1a0 = dVar15;
    local_160 = dVar15;
  }
  else {
    lVar7 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar10 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar8 = 0;
    local_1c0 = 0;
    uVar26 = uVar21;
    uVar27 = uVar22;
    dVar23 = local_128;
    dVar16 = dVar15;
    dVar17 = dVar15;
    do {
      dVar13 = (double)FUN_1469403fc((longlong)dVar14 + lVar7,(longlong)dVar14 + lVar7 + 0x30);
      dVar14 = param_1[5];
      pdVar1 = (double *)((longlong)dVar14 + lVar7);
      dVar20 = ABS(*(double *)((longlong)dVar14 + lVar7));
      dVar5 = ABS(local_138);
      if (dVar5 <= dVar20) {
        if (((dVar20 == dVar5) && (!NAN(dVar20) && !NAN(dVar5))) &&
           (pdVar2 = (double *)((longlong)dVar14 + 8 + lVar7),
           *pdVar2 <= dStack_130 && dStack_130 != *pdVar2)) goto LAB_14693e054;
      }
      else {
LAB_14693e054:
        local_138 = *pdVar1;
        dStack_130 = pdVar1[1];
        uVar12 = *(undefined8 *)((longlong)dVar14 + 0x20 + lVar7);
        uVar3 = *(undefined8 *)((longlong)dVar14 + 0x28 + lVar7);
        uVar28 = (undefined4)uVar3;
        uVar29 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      local_128 = *(double *)((longlong)dVar14 + 0x10 + lVar7);
      dVar5 = *(double *)((longlong)dVar14 + 0x18 + lVar7);
      iVar6 = *(int *)((longlong)param_1[2] + uVar11 * 4);
      if ((dVar13 < 0.0) || (iVar6 < 1)) {
        if ((dVar13 <= 0.0) && (iVar6 < 0)) {
          dVar13 = ABS(local_1b8);
          if (dVar13 <= dVar20) {
            if (((dVar20 == dVar13) && (!NAN(dVar20) && !NAN(dVar13))) &&
               (pdVar2 = (double *)((longlong)dVar14 + 8 + lVar7),
               *pdVar2 <= dStack_1b0 && dStack_1b0 != *pdVar2)) goto LAB_14693e0f4;
          }
          else {
LAB_14693e0f4:
            local_1b8 = *pdVar1;
            dStack_1b0 = pdVar1[1];
            uVar8 = *(undefined8 *)((longlong)dVar14 + 0x20 + lVar7);
            local_1c0 = *(undefined8 *)((longlong)dVar14 + 0x28 + lVar7);
          }
          dVar13 = local_128;
          if (local_128 <= (double)CONCAT44(uVar22,uVar21)) {
            dVar13 = (double)CONCAT44(uVar22,uVar21);
          }
          if (dVar5 < dVar17) {
            dVar17 = dVar5;
          }
          uVar21 = SUB84(dVar13,0);
          uVar22 = (undefined4)((ulonglong)dVar13 >> 0x20);
        }
        local_168 = (double)CONCAT44(uVar27,uVar26);
      }
      else {
        dVar13 = ABS(local_178);
        if (dVar13 <= dVar20) {
          if (((dVar20 == dVar13) && (!NAN(dVar20) && !NAN(dVar13))) &&
             (pdVar2 = (double *)((longlong)dVar14 + 8 + lVar7),
             *pdVar2 <= dStack_170 && dStack_170 != *pdVar2)) goto LAB_14693e0a4;
        }
        else {
LAB_14693e0a4:
          local_178 = *pdVar1;
          dStack_170 = pdVar1[1];
          uVar10 = *(undefined8 *)((longlong)dVar14 + 0x20 + lVar7);
          uVar3 = *(undefined8 *)((longlong)dVar14 + 0x28 + lVar7);
          uVar24 = (undefined4)uVar3;
          uVar25 = (undefined4)((ulonglong)uVar3 >> 0x20);
        }
        local_168 = local_128;
        if (local_128 <= (double)CONCAT44(uVar27,uVar26)) {
          local_168 = (double)CONCAT44(uVar27,uVar26);
        }
        if (dVar5 < dVar16) {
          dVar16 = dVar5;
        }
      }
      if (local_128 <= dVar23) {
        local_128 = dVar23;
      }
      if (dVar15 <= dVar5) {
        dVar5 = dVar15;
      }
      dVar15 = dVar5;
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + 0x40;
      uVar26 = SUB84(local_168,0);
      uVar27 = (undefined4)((ulonglong)local_168 >> 0x20);
      dVar23 = local_128;
      local_120 = dVar15;
      local_1a0 = dVar17;
      local_160 = dVar16;
    } while ((uVar9 & 0x7fffffff) != uVar11);
  }
  local_110 = CONCAT44(uVar29,uVar28);
  local_150 = CONCAT44(uVar25,uVar24);
  local_190 = local_1c0;
  local_1a8 = CONCAT44(uVar22,uVar21);
  local_198 = uVar8;
  local_158 = uVar10;
  local_118 = uVar12;
  dVar14 = (double)FUN_1469403fc(&local_138,&local_108);
  uVar21 = SUB84(dVar14,0);
  uVar22 = (undefined4)((ulonglong)dVar14 >> 0x20);
  dVar15 = (double)FUN_1469403fc(&local_178,&local_148);
  uVar24 = SUB84(dVar15,0);
  uVar25 = (undefined4)((ulonglong)dVar15 >> 0x20);
  uVar28 = (undefined4)extraout_XMM0_Qb_00;
  uVar29 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  dVar16 = (double)FUN_1469403fc(&local_1b8,&local_188);
  if ((dVar15 < 0.0) || (ABS(dVar16) < ABS(dVar15))) {
    if ((0.0 < dVar16) || (ABS(dVar15) <= ABS(dVar16))) goto LAB_14693e49e;
    if (0 < (int)uVar9) {
      lVar7 = 0;
      uVar11 = 0;
      uVar8 = extraout_XMM0_Qb_01;
      do {
        dVar17 = dVar16;
        uVar12 = uVar8;
        if ((*(int *)((longlong)param_1[2] + uVar11 * 4) < 0) &&
           (dVar17 = (double)FUN_1469403fc((longlong)param_1[5] + lVar7,
                                           (longlong)param_1[5] + lVar7 + 0x30),
           uVar12 = extraout_XMM0_Qb_02, ABS(dVar15) <= ABS(dVar17) || dVar16 <= dVar17)) {
          dVar17 = dVar16;
          uVar12 = uVar8;
        }
        uVar8 = uVar12;
        dVar16 = dVar17;
        uVar11 = uVar11 + 1;
        lVar7 = lVar7 + 0x40;
      } while ((uVar9 & 0x7fffffff) != uVar11);
      iVar6 = -1;
      uVar24 = SUB84(dVar16,0);
      uVar25 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar28 = (undefined4)uVar8;
      uVar29 = (undefined4)((ulonglong)uVar8 >> 0x20);
      goto LAB_14693e3f2;
    }
    uVar24 = SUB84(dVar16,0);
    uVar25 = (undefined4)((ulonglong)dVar16 >> 0x20);
    uVar28 = (undefined4)extraout_XMM0_Qb_01;
    uVar29 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  }
  else if (0 < (int)uVar9) {
    lVar7 = 0;
    uVar11 = 0;
    do {
      if (0 < *(int *)((longlong)param_1[2] + uVar11 * 4)) {
        auVar18._0_8_ =
             (double)FUN_1469403fc((longlong)param_1[5] + lVar7,(longlong)param_1[5] + lVar7 + 0x30)
        ;
        auVar18._8_8_ = extraout_XMM0_Qb_03;
        if (ABS(dVar16) <= ABS(auVar18._0_8_) || auVar18._0_8_ <= (double)CONCAT44(uVar25,uVar24)) {
          auVar18._4_4_ = uVar25;
          auVar18._0_4_ = uVar24;
          auVar18._12_4_ = uVar29;
          auVar18._8_4_ = uVar28;
        }
        uVar24 = auVar18._0_4_;
        uVar25 = auVar18._4_4_;
        uVar28 = auVar18._8_4_;
        uVar29 = auVar18._12_4_;
      }
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + 0x40;
    } while ((uVar9 & 0x7fffffff) != uVar11);
    iVar6 = 1;
LAB_14693e3f2:
    if (0 < (int)uVar9) {
      lVar7 = 0;
      uVar11 = 0;
      do {
        if (((*(int *)((longlong)param_1[2] + uVar11 * 4) != iVar6) &&
            (dVar15 = (double)FUN_1469403fc((longlong)param_1[5] + lVar7,
                                            (longlong)param_1[5] + lVar7 + 0x30),
            0.0 <= (double)CONCAT44(uVar25,uVar24) * dVar15)) &&
           (ABS(dVar15) < ABS((double)CONCAT44(uVar25,uVar24)))) {
          uVar24 = SUB84(dVar15,0);
          uVar25 = (undefined4)((ulonglong)dVar15 >> 0x20);
          uVar28 = (undefined4)extraout_XMM0_Qb_04;
          uVar29 = (undefined4)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
        }
        uVar11 = uVar11 + 1;
        lVar7 = lVar7 + 0x40;
      } while ((uVar9 & 0x7fffffff) != uVar11);
    }
  }
  uVar11 = -(ulonglong)(dVar14 == (double)CONCAT44(uVar25,uVar24));
  auVar19._0_8_ = ~uVar11 & CONCAT44(uVar25,uVar24);
  auVar19._8_8_ = ~extraout_XMM0_Qb & CONCAT44(uVar29,uVar28);
  auVar4._8_4_ = (int)extraout_XMM0_Qb;
  auVar4._0_8_ = uVar11 & (ulonglong)dVar14;
  auVar4._12_4_ = (int)(extraout_XMM0_Qb >> 0x20);
  uVar21 = SUB164(auVar19 | auVar4,0);
  uVar22 = SUB164(auVar19 | auVar4,4);
LAB_14693e49e:
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar22,uVar21);
}



// FUNCTION 14693e528 FUN_14693e528 body=225 status=ok
// SIG undefined FUN_14693e528(void)

undefined8 * FUN_14693e528(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14693d8aa(param_1 + 2,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  lVar2 = *param_2;
  lVar3 = lVar2;
  if (lVar2 != param_2[1]) {
    do {
      local_3c = FUN_14693d2a4(lVar3);
      puVar1 = (undefined4 *)param_1[3];
      if (puVar1 == (undefined4 *)param_1[4]) {
        FUN_14694af78(param_1 + 2,puVar1,&local_3c);
      }
      else {
        *puVar1 = local_3c;
        param_1[3] = param_1[3] + 4;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != param_2[1]);
    lVar2 = *param_2;
  }
  FUN_14694b49a(param_1 + 5,(lVar3 - lVar2 >> 3) * -0x5555555555555555);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14693e60a FUN_14693e60a body=5090 status=ok
// SIG undefined FUN_14693e60a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14693e60a(double *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double *pdVar17;
  double dVar18;
  double *pdVar19;
  longlong lVar20;
  int iVar21;
  undefined8 uVar22;
  double *pdVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStack_498 [32];
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  double local_378;
  undefined8 uStack_370;
  longlong local_368;
  undefined8 *local_360;
  double local_358;
  double local_350;
  double local_348;
  undefined8 local_340;
  double local_338;
  double local_330;
  double local_328;
  undefined8 local_320;
  double local_318;
  double local_310;
  double local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  dVar18 = param_1[5];
  local_368 = ((longlong)param_1[6] - (longlong)dVar18 >> 5) * -0x3333333333333333;
  dStack_180 = 0.0;
  dStack_150 = 0.0;
  dStack_120 = 0.0;
  dStack_220 = 0.0;
  dStack_1f0 = 0.0;
  dStack_1c0 = 0.0;
  dStack_2c0 = 0.0;
  dStack_290 = 0.0;
  dStack_260 = 0.0;
  local_2c8 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]) * -1.001 + -1.79769313486232e+308;
  local_420 = ABS(local_2c8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_2c8;
  auVar50 = _DAT_149931e80 | auVar8;
  dVar35 = auVar50._0_8_;
  local_168 = 0;
  uStack_160 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_198 = *param_1;
  dStack_190 = param_1[1];
  local_208 = 0;
  uStack_200 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_238 = *(undefined4 *)param_1;
  uStack_234 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_230 = *(undefined4 *)(param_1 + 1);
  uStack_22c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_2d8 = *param_1;
  dStack_2d0 = param_1[1];
  uVar24 = (uint)local_368;
  uVar28 = auVar50._0_4_;
  uVar32 = auVar50._4_4_;
  local_430 = dVar35;
  local_428 = dVar35;
  local_418 = local_420;
  local_410 = dVar35;
  local_408 = local_420;
  local_400 = local_420;
  local_360 = param_2;
  local_298 = local_2c8;
  local_268 = local_2c8;
  local_228 = local_2c8;
  local_1f8 = local_2c8;
  local_1c8 = local_2c8;
  local_188 = local_2c8;
  local_158 = local_2c8;
  local_128 = local_2c8;
  if ((int)uVar24 < 1) {
    local_3a0 = 0;
    local_3a8 = 0;
    local_3b0 = 0;
    local_3d0 = 0;
    local_3d8 = 0;
    local_3e0 = 0;
    uVar22 = 0;
    uVar26 = 0;
    uVar25 = 0;
    local_3b8 = 0;
    local_3c0 = 0;
    local_3c8 = 0;
    local_3f8 = 0;
    local_3e8 = 0;
    local_3f0 = 0;
    local_380 = 0;
    local_388 = 0;
    local_390 = 0;
    uVar30 = uVar28;
    uVar36 = uVar32;
    dVar42 = dVar35;
    uVar43 = uVar28;
    uVar45 = uVar32;
    local_478 = dVar35;
    local_470 = dVar35;
    local_468 = local_420;
    dVar14 = local_420;
    dVar11 = local_420;
    dVar7 = local_420;
    dVar16 = local_420;
  }
  else {
    lVar20 = 0;
    uVar27 = 0;
    uVar25 = 0;
    local_390 = 0;
    uVar26 = 0;
    local_388 = 0;
    uVar22 = 0;
    local_380 = 0;
    local_3e0 = 0;
    local_3f0 = 0;
    local_3d8 = 0;
    local_3e8 = 0;
    local_3d0 = 0;
    local_3b0 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_3f8 = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    local_3b8 = 0;
    uVar47 = uVar28;
    uVar48 = uVar32;
    uVar31 = uVar28;
    uVar40 = uVar32;
    local_458 = local_420;
    local_450 = dVar35;
    local_448 = local_420;
    local_440 = dVar35;
    local_2b8 = dVar35;
    dStack_2b0 = local_420;
    local_288 = dVar35;
    dStack_280 = local_420;
    local_258 = dVar35;
    dStack_250 = local_420;
    local_218 = dVar35;
    dStack_210 = local_420;
    local_1e8 = dVar35;
    dStack_1e0 = local_420;
    local_1b8 = dVar35;
    dStack_1b0 = local_420;
    local_178 = dVar35;
    dStack_170 = local_420;
    local_148 = dVar35;
    dStack_140 = local_420;
    local_118 = dVar35;
    dStack_110 = local_420;
    dVar14 = local_420;
    dVar15 = local_420;
    dVar16 = local_420;
    do {
      local_478 = (double)CONCAT44(uVar32,uVar28);
      FUN_14693d724((longlong)dVar18 + lVar20,&local_2f8);
      dVar18 = param_1[5];
      lVar1 = (longlong)dVar18 + lVar20;
      pdVar23 = (double *)(lVar1 + 0x10);
      dVar11 = ABS(*pdVar23);
      dVar35 = ABS(local_188);
      if (dVar35 <= dVar11) {
        if (((dVar11 == dVar35) && (!NAN(dVar11) && !NAN(dVar35))) &&
           (pdVar19 = (double *)((longlong)dVar18 + 0x18 + lVar20),
           *pdVar19 <= dStack_180 && dStack_180 != *pdVar19)) goto LAB_14693e9f6;
      }
      else {
LAB_14693e9f6:
        local_188 = *pdVar23;
        dStack_180 = *(double *)(lVar1 + 0x18);
        uVar25 = *(undefined8 *)((longlong)dVar18 + 0x30 + lVar20);
        local_390 = *(undefined8 *)((longlong)dVar18 + 0x38 + lVar20);
      }
      lVar2 = (longlong)dVar18 + lVar20;
      pdVar19 = (double *)(lVar2 + 0x40);
      dVar35 = *(double *)(lVar2 + 0x20);
      local_438 = *(double *)(lVar2 + 0x28);
      dVar10 = ABS(*pdVar19);
      dVar42 = ABS(local_158);
      if (dVar42 <= dVar10) {
        if (((dVar10 == dVar42) && (!NAN(dVar10) && !NAN(dVar42))) &&
           (pdVar17 = (double *)((longlong)dVar18 + 0x48 + lVar20),
           *pdVar17 <= dStack_150 && dStack_150 != *pdVar17)) goto LAB_14693ea4b;
      }
      else {
LAB_14693ea4b:
        local_158 = *pdVar19;
        dStack_150 = *(double *)(lVar2 + 0x48);
        uVar26 = *(undefined8 *)((longlong)dVar18 + 0x60 + lVar20);
        local_388 = *(undefined8 *)((longlong)dVar18 + 0x68 + lVar20);
      }
      lVar3 = (longlong)dVar18 + lVar20;
      pdVar17 = (double *)(lVar3 + 0x70);
      dVar5 = *(double *)(lVar3 + 0x50);
      uVar30 = SUB84(dVar5,0);
      uVar36 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar6 = *(double *)(lVar3 + 0x58);
      dVar9 = ABS(*pdVar17);
      dVar42 = ABS(local_128);
      if (dVar42 <= dVar9) {
        if (((dVar9 == dVar42) && (!NAN(dVar9) && !NAN(dVar42))) &&
           (pdVar4 = (double *)((longlong)dVar18 + 0x78 + lVar20),
           *pdVar4 <= dStack_120 && dStack_120 != *pdVar4)) goto LAB_14693ea9f;
      }
      else {
LAB_14693ea9f:
        local_128 = *pdVar17;
        dStack_120 = *(double *)(lVar3 + 0x78);
        uVar22 = *(undefined8 *)((longlong)dVar18 + 0x90 + lVar20);
        local_380 = *(undefined8 *)((longlong)dVar18 + 0x98 + lVar20);
      }
      dVar42 = *(double *)((longlong)dVar18 + 0x80 + lVar20);
      dVar7 = *(double *)((longlong)dVar18 + 0x88 + lVar20);
      iVar21 = *(int *)((longlong)param_1[2] + uVar27 * 4);
      uVar43 = SUB84(dVar35,0);
      uVar45 = (undefined4)((ulonglong)dVar35 >> 0x20);
      uVar41 = SUB84(dVar42,0);
      uVar29 = (undefined4)((ulonglong)dVar42 >> 0x20);
      uVar34 = (undefined4)((ulonglong)local_440 >> 0x20);
      uVar28 = SUB84(local_2e8,0);
      uVar32 = (undefined4)((ulonglong)local_2e8 >> 0x20);
      if (iVar21 < 1) {
        if (iVar21 < 0) {
          local_398 = CONCAT44(uVar40,uVar31);
          uStack_370 = 0;
          dVar13 = (double)CONCAT44(uStack_2f4,local_2f8);
          dVar12 = (double)CONCAT44(uStack_2ec,uStack_2f0);
          uVar33 = uStack_2f0;
          uVar44 = uStack_2ec;
          if (dVar12 <= dVar13) {
            uVar33 = local_2f8;
            uVar44 = uStack_2f4;
          }
          if ((double)CONCAT44(uVar44,uVar33) <= local_2e8) {
            uVar28 = uVar33;
            uVar32 = uVar44;
          }
          if (dVar13 <= dVar12) {
            dVar12 = dVar13;
          }
          if ((double)CONCAT44(uVar32,uVar28) <= dVar12) {
            uVar28 = SUB84(dVar12,0);
            uVar32 = (undefined4)((ulonglong)dVar12 >> 0x20);
          }
          local_378 = dVar14;
          if ((double)CONCAT44(uVar32,uVar28) <= 0.0) {
            dVar12 = ABS(local_2c8);
            if (dVar12 <= dVar11) {
              if (((dVar11 == dVar12) && (!NAN(dVar11) && !NAN(dVar12))) &&
                 (pdVar4 = (double *)((longlong)dVar18 + 0x18 + lVar20),
                 *pdVar4 <= dStack_2c0 && dStack_2c0 != *pdVar4)) goto LAB_14693ee98;
            }
            else {
LAB_14693ee98:
              local_2c8 = *pdVar23;
              dStack_2c0 = *(double *)(lVar1 + 0x18);
              local_3e0 = *(undefined8 *)((longlong)dVar18 + 0x30 + lVar20);
              local_3f0 = *(undefined8 *)((longlong)dVar18 + 0x38 + lVar20);
            }
            dVar11 = ABS(local_298);
            if (dVar11 <= dVar10) {
              if (((dVar10 == dVar11) && (!NAN(dVar10) && !NAN(dVar11))) &&
                 (pdVar23 = (double *)((longlong)dVar18 + 0x48 + lVar20),
                 *pdVar23 <= dStack_290 && dStack_290 != *pdVar23)) goto LAB_14693eee4;
            }
            else {
LAB_14693eee4:
              local_298 = *pdVar19;
              dStack_290 = *(double *)(lVar2 + 0x48);
              local_3d8 = *(undefined8 *)((longlong)dVar18 + 0x60 + lVar20);
              local_3e8 = *(undefined8 *)((longlong)dVar18 + 0x68 + lVar20);
            }
            dVar11 = ABS(local_268);
            if (dVar11 <= dVar9) {
              if (((dVar9 == dVar11) && (!NAN(dVar9) && !NAN(dVar11))) &&
                 (pdVar23 = (double *)((longlong)dVar18 + 0x78 + lVar20),
                 *pdVar23 <= dStack_260 && dStack_260 != *pdVar23)) goto LAB_14693ef2a;
            }
            else {
LAB_14693ef2a:
              local_268 = *pdVar17;
              dStack_260 = *(double *)(lVar3 + 0x78);
              local_3d0 = *(undefined8 *)((longlong)dVar18 + 0x90 + lVar20);
              local_3f8 = *(undefined8 *)((longlong)dVar18 + 0x98 + lVar20);
            }
            if (dVar35 <= local_410) {
              uVar43 = SUB84(local_410,0);
              uVar45 = (undefined4)((ulonglong)local_410 >> 0x20);
            }
            local_410 = (double)CONCAT44(uVar45,uVar43);
            dVar11 = local_438;
            if (local_408 <= local_438) {
              dVar11 = local_408;
            }
            local_408 = dVar11;
            uVar28 = uVar30;
            uVar32 = uVar36;
            if (dVar5 <= local_430) {
              uVar28 = SUB84(local_430,0);
              uVar32 = (undefined4)((ulonglong)local_430 >> 0x20);
            }
            dVar11 = dVar6;
            if (local_420 <= dVar6) {
              dVar11 = local_420;
            }
            local_420 = dVar11;
            if (dVar42 <= local_428) {
              uVar41 = SUB84(local_428,0);
              uVar29 = (undefined4)((ulonglong)local_428 >> 0x20);
            }
            if (dVar7 < local_418) {
              local_418 = dVar7;
            }
            local_428 = (double)CONCAT44(uVar29,uVar41);
            local_430 = (double)CONCAT44(uVar32,uVar28);
          }
        }
LAB_14693f14f:
        local_468 = local_458;
        local_470 = local_450;
        uVar43 = SUB84(local_440,0);
        uVar45 = uVar34;
      }
      else {
        uStack_370 = 0;
        dVar12 = (double)CONCAT44(uStack_2f4,local_2f8);
        dVar13 = (double)CONCAT44(uStack_2ec,uStack_2f0);
        dVar49 = dVar13;
        if (dVar13 <= dVar12) {
          dVar49 = dVar12;
        }
        if (dVar49 <= local_2e8) {
          uVar28 = SUB84(dVar49,0);
          uVar32 = (undefined4)((ulonglong)dVar49 >> 0x20);
        }
        uVar33 = uStack_2f0;
        uVar44 = uStack_2ec;
        if (dVar12 <= dVar13) {
          uVar33 = local_2f8;
          uVar44 = uStack_2f4;
        }
        if ((double)CONCAT44(uVar32,uVar28) <= (double)CONCAT44(uVar44,uVar33)) {
          uVar28 = uVar33;
          uVar32 = uVar44;
        }
        local_378 = dVar14;
        if ((double)CONCAT44(uVar32,uVar28) < 0.0) goto LAB_14693f14f;
        dVar12 = ABS(local_228);
        if (dVar12 <= dVar11) {
          if (((dVar11 == dVar12) && (!NAN(dVar11) && !NAN(dVar12))) &&
             (pdVar4 = (double *)((longlong)dVar18 + 0x18 + lVar20),
             *pdVar4 <= dStack_220 && dStack_220 != *pdVar4)) goto LAB_14693ecf4;
        }
        else {
LAB_14693ecf4:
          local_228 = *pdVar23;
          dStack_220 = *(double *)(lVar1 + 0x18);
          local_3b0 = *(undefined8 *)((longlong)dVar18 + 0x30 + lVar20);
          local_3c8 = *(undefined8 *)((longlong)dVar18 + 0x38 + lVar20);
        }
        dVar11 = ABS(local_1f8);
        if (dVar11 <= dVar10) {
          if (((dVar10 == dVar11) && (!NAN(dVar10) && !NAN(dVar11))) &&
             (pdVar23 = (double *)((longlong)dVar18 + 0x48 + lVar20),
             *pdVar23 <= dStack_1f0 && dStack_1f0 != *pdVar23)) goto LAB_14693ed4b;
        }
        else {
LAB_14693ed4b:
          local_1f8 = *pdVar19;
          dStack_1f0 = *(double *)(lVar2 + 0x48);
          local_3a8 = *(undefined8 *)((longlong)dVar18 + 0x60 + lVar20);
          local_3c0 = *(undefined8 *)((longlong)dVar18 + 0x68 + lVar20);
        }
        dVar11 = ABS(local_1c8);
        if (dVar11 <= dVar9) {
          if (((dVar9 == dVar11) && (!NAN(dVar9) && !NAN(dVar11))) &&
             (pdVar23 = (double *)((longlong)dVar18 + 0x78 + lVar20),
             *pdVar23 <= dStack_1c0 && dStack_1c0 != *pdVar23)) goto LAB_14693ed9b;
        }
        else {
LAB_14693ed9b:
          local_1c8 = *pdVar17;
          dStack_1c0 = *(double *)(lVar3 + 0x78);
          local_3a0 = *(undefined8 *)((longlong)dVar18 + 0x90 + lVar20);
          local_3b8 = *(undefined8 *)((longlong)dVar18 + 0x98 + lVar20);
        }
        if (dVar35 <= local_440) {
          uVar43 = SUB84(local_440,0);
          uVar45 = uVar34;
        }
        dVar11 = local_438;
        if (local_448 <= local_438) {
          dVar11 = local_448;
        }
        uVar28 = uVar30;
        uVar32 = uVar36;
        if (dVar5 <= local_450) {
          uVar28 = SUB84(local_450,0);
          uVar32 = (undefined4)((ulonglong)local_450 >> 0x20);
        }
        local_470 = (double)CONCAT44(uVar32,uVar28);
        local_468 = dVar6;
        if (local_458 <= dVar6) {
          local_468 = local_458;
        }
        if (dVar42 <= local_478) {
          uVar41 = SUB84(local_478,0);
          uVar29 = (undefined4)((ulonglong)local_478 >> 0x20);
        }
        local_478 = (double)CONCAT44(uVar29,uVar41);
        local_448 = dVar11;
        if (dVar7 < local_400) {
          local_400 = dVar7;
        }
      }
      if (dVar35 <= auVar50._0_8_) {
        dVar35 = auVar50._0_8_;
      }
      dVar11 = local_438;
      if (dVar14 <= local_438) {
        dVar11 = dVar14;
      }
      dVar14 = dVar11;
      if (dVar5 <= (double)CONCAT44(uVar40,uVar31)) {
        uVar30 = uVar31;
        uVar36 = uVar40;
      }
      if (dVar16 <= dVar6) {
        dVar6 = dVar16;
      }
      dVar16 = dVar6;
      if (dVar42 <= (double)CONCAT44(uVar48,uVar47)) {
        dVar42 = (double)CONCAT44(uVar48,uVar47);
      }
      if (dVar15 <= dVar7) {
        dVar7 = dVar15;
      }
      uVar27 = uVar27 + 1;
      lVar20 = lVar20 + 0xa0;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = dVar35;
      uVar47 = SUB84(dVar42,0);
      uVar48 = (undefined4)((ulonglong)dVar42 >> 0x20);
      local_440 = (double)CONCAT44(uVar45,uVar43);
      local_450 = local_470;
      local_458 = local_468;
      uVar28 = SUB84(local_478,0);
      uVar32 = (undefined4)((ulonglong)local_478 >> 0x20);
      uVar31 = uVar30;
      uVar40 = uVar36;
      local_460 = dVar15;
      dVar15 = dVar7;
      dVar11 = local_448;
    } while ((uVar24 & 0x7fffffff) != uVar27);
  }
  dStack_140 = dVar16;
  dStack_110 = dVar7;
  dStack_210 = dVar11;
  dStack_170 = dVar14;
  uStack_160 = local_390;
  uStack_130 = local_388;
  local_148 = (double)CONCAT44(uVar36,uVar30);
  uStack_100 = local_380;
  local_2a8 = local_3e0;
  uStack_2a0 = local_3f0;
  local_2b8 = local_410;
  dStack_2b0 = local_408;
  local_278 = local_3d8;
  uStack_270 = local_3e8;
  local_288 = local_430;
  dStack_280 = local_420;
  local_248 = local_3d0;
  uStack_240 = local_3f8;
  local_258 = local_428;
  dStack_250 = local_418;
  local_208 = local_3b0;
  uStack_200 = local_3c8;
  local_218 = (double)CONCAT44(uVar45,uVar43);
  local_1d8 = local_3a8;
  uStack_1d0 = local_3c0;
  local_1e8 = local_470;
  dStack_1e0 = local_468;
  local_1a8 = local_3a0;
  uStack_1a0 = local_3b8;
  local_1b8 = local_478;
  dStack_1b0 = local_400;
  local_178 = dVar35;
  local_168 = uVar25;
  local_138 = uVar26;
  local_118 = dVar42;
  local_108 = uVar22;
  FUN_14693d724(&local_198,&local_2f8);
  FUN_14693d724(&local_238,&local_318);
  FUN_14693d724(&local_2d8,&local_338);
  uVar30 = SUB84(local_308,0);
  uVar36 = (undefined4)((ulonglong)local_308 >> 0x20);
  uVar47 = SUB84(local_318,0);
  uVar48 = (undefined4)((ulonglong)local_318 >> 0x20);
  uVar43 = SUB84(local_310,0);
  uVar45 = (undefined4)((ulonglong)local_310 >> 0x20);
  uVar28 = uVar43;
  uVar32 = uVar45;
  if (local_310 <= local_318) {
    uVar28 = uVar47;
    uVar32 = uVar48;
  }
  uVar31 = uVar30;
  uVar40 = uVar36;
  if ((double)CONCAT44(uVar32,uVar28) <= local_308) {
    uVar31 = uVar28;
    uVar40 = uVar32;
  }
  uVar28 = uVar43;
  uVar32 = uVar45;
  if (local_318 <= local_310) {
    uVar28 = uVar47;
    uVar32 = uVar48;
  }
  if ((double)CONCAT44(uVar40,uVar31) <= (double)CONCAT44(uVar32,uVar28)) {
    uVar31 = uVar28;
    uVar40 = uVar32;
  }
  auVar51._8_8_ = 0;
  auVar51._0_8_ = local_328;
  uVar28 = (undefined4)((ulonglong)local_338 >> 0x20);
  uVar32 = SUB84(local_330,0);
  uVar41 = (undefined4)((ulonglong)local_330 >> 0x20);
  dVar35 = local_330;
  if (local_330 <= local_338) {
    dVar35 = local_338;
  }
  uVar33 = (undefined4)((ulonglong)local_328 >> 0x20);
  uVar29 = SUB84(local_328,0);
  uVar34 = uVar33;
  if (dVar35 <= local_328) {
    uVar29 = SUB84(dVar35,0);
    uVar34 = (undefined4)((ulonglong)dVar35 >> 0x20);
  }
  if (local_338 <= local_330) {
    local_330 = local_338;
  }
  if ((double)CONCAT44(uVar34,uVar29) <= local_330) {
    uVar29 = SUB84(local_330,0);
    uVar34 = (undefined4)((ulonglong)local_330 >> 0x20);
  }
  uVar24 = (uint)local_368;
  if (((double)CONCAT44(uVar40,uVar31) < 0.0) ||
     (ABS((double)CONCAT44(uVar34,uVar29)) < ABS((double)CONCAT44(uVar40,uVar31)))) {
    if ((0.0 < (double)CONCAT44(uVar34,uVar29)) ||
       (ABS((double)CONCAT44(uVar40,uVar31)) <= ABS((double)CONCAT44(uVar34,uVar29)))) {
      local_360[2] = local_2e8;
      local_360[3] = uStack_2e0;
      *(undefined4 *)local_360 = local_2f8;
      *(undefined4 *)((longlong)local_360 + 4) = uStack_2f4;
      *(undefined4 *)(local_360 + 1) = uStack_2f0;
      *(undefined4 *)((longlong)local_360 + 0xc) = uStack_2ec;
      goto LAB_14693f6ba;
    }
    uVar44 = (undefined4)local_320;
    uVar46 = (undefined4)((ulonglong)local_320 >> 0x20);
    uVar30 = SUB84(local_328,0);
    uVar36 = uVar33;
    uVar43 = uVar32;
    uVar45 = uVar41;
    uVar47 = SUB84(local_338,0);
    uVar48 = uVar28;
    if (0 < (int)uVar24) {
      lVar20 = 0;
      uVar27 = 0;
      do {
        if (*(int *)((longlong)param_1[2] + uVar27 * 4) < 0) {
          FUN_14693d724((longlong)param_1[5] + lVar20,&local_358);
          uVar30 = SUB84(local_358,0);
          uVar36 = SUB84(local_350,0);
          uVar41 = (undefined4)((ulonglong)local_350 >> 0x20);
          uVar29 = (undefined4)((ulonglong)local_358 >> 0x20);
          uVar28 = uVar36;
          uVar32 = uVar41;
          if (local_350 <= local_358) {
            uVar28 = uVar30;
            uVar32 = uVar29;
          }
          uVar34 = SUB84(local_348,0);
          uVar33 = (int)((ulonglong)local_348 >> 0x20);
          if ((double)CONCAT44(uVar32,uVar28) <= local_348) {
            uVar34 = uVar28;
            uVar33 = uVar32;
          }
          uVar28 = uVar36;
          uVar32 = uVar41;
          if (local_358 <= local_350) {
            uVar28 = uVar30;
            uVar32 = uVar29;
          }
          if ((double)CONCAT44(uVar33,uVar34) <= (double)CONCAT44(uVar32,uVar28)) {
            uVar34 = uVar28;
            uVar33 = uVar32;
          }
          if (ABS((double)CONCAT44(uVar33,uVar34)) < ABS((double)CONCAT44(uVar40,uVar31))) {
            uVar28 = uVar43;
            uVar32 = uVar45;
            if ((double)CONCAT44(uVar45,uVar43) <= (double)CONCAT44(uVar48,uVar47)) {
              uVar28 = uVar47;
              uVar32 = uVar48;
            }
            dVar35 = auVar51._0_8_;
            if ((double)CONCAT44(uVar32,uVar28) <= dVar35) {
              dVar35 = (double)CONCAT44(uVar32,uVar28);
            }
            uVar28 = uVar43;
            uVar32 = uVar45;
            if ((double)CONCAT44(uVar48,uVar47) <= (double)CONCAT44(uVar45,uVar43)) {
              uVar28 = uVar47;
              uVar32 = uVar48;
            }
            if (dVar35 <= (double)CONCAT44(uVar32,uVar28)) {
              dVar35 = (double)CONCAT44(uVar32,uVar28);
            }
            if ((double)CONCAT44(uVar33,uVar34) <= dVar35 &&
                dVar35 != (double)CONCAT44(uVar33,uVar34)) {
              uVar44 = (undefined4)local_340;
              uVar46 = (undefined4)((ulonglong)local_340 >> 0x20);
              auVar51._8_8_ = 0;
              auVar51._0_8_ = local_348;
              uVar47 = uVar30;
              uVar48 = uVar29;
              uVar43 = uVar36;
              uVar45 = uVar41;
            }
          }
        }
        uVar27 = uVar27 + 1;
        lVar20 = lVar20 + 0xa0;
      } while ((uVar24 & 0x7fffffff) != uVar27);
      iVar21 = -1;
      uVar30 = auVar51._0_4_;
      uVar36 = auVar51._4_4_;
      goto LAB_14693f83a;
    }
  }
  else {
    uVar44 = (undefined4)local_300;
    uVar46 = (undefined4)((ulonglong)local_300 >> 0x20);
    if (0 < (int)uVar24) {
      lVar20 = 0;
      uVar27 = 0;
      do {
        if (0 < *(int *)((longlong)param_1[2] + uVar27 * 4)) {
          FUN_14693d724((longlong)param_1[5] + lVar20,&local_358);
          uVar31 = SUB84(local_358,0);
          uVar40 = SUB84(local_350,0);
          uVar41 = (undefined4)((ulonglong)local_350 >> 0x20);
          uVar33 = (undefined4)((ulonglong)local_358 >> 0x20);
          uVar28 = uVar40;
          uVar32 = uVar41;
          if (local_350 <= local_358) {
            uVar28 = uVar31;
            uVar32 = uVar33;
          }
          uVar37 = (undefined4)((ulonglong)local_348 >> 0x20);
          uVar39 = SUB84(local_348,0);
          uVar38 = uVar37;
          if ((double)CONCAT44(uVar32,uVar28) <= local_348) {
            uVar39 = uVar28;
            uVar38 = uVar32;
          }
          uVar28 = uVar40;
          uVar32 = uVar41;
          if (local_358 <= local_350) {
            uVar28 = uVar31;
            uVar32 = uVar33;
          }
          if ((double)CONCAT44(uVar38,uVar39) <= (double)CONCAT44(uVar32,uVar28)) {
            uVar39 = uVar28;
            uVar38 = uVar32;
          }
          if (ABS((double)CONCAT44(uVar38,uVar39)) < ABS((double)CONCAT44(uVar34,uVar29))) {
            uVar28 = uVar43;
            uVar32 = uVar45;
            if ((double)CONCAT44(uVar45,uVar43) <= (double)CONCAT44(uVar48,uVar47)) {
              uVar28 = uVar47;
              uVar32 = uVar48;
            }
            dVar35 = (double)CONCAT44(uVar36,uVar30);
            if ((double)CONCAT44(uVar32,uVar28) <= dVar35) {
              dVar35 = (double)CONCAT44(uVar32,uVar28);
            }
            uVar28 = uVar43;
            uVar32 = uVar45;
            if ((double)CONCAT44(uVar48,uVar47) <= (double)CONCAT44(uVar45,uVar43)) {
              uVar28 = uVar47;
              uVar32 = uVar48;
            }
            if (dVar35 <= (double)CONCAT44(uVar32,uVar28)) {
              dVar35 = (double)CONCAT44(uVar32,uVar28);
            }
            if (dVar35 <= (double)CONCAT44(uVar38,uVar39) &&
                (double)CONCAT44(uVar38,uVar39) != dVar35) {
              uVar44 = (undefined4)local_340;
              uVar46 = (undefined4)((ulonglong)local_340 >> 0x20);
              uVar30 = SUB84(local_348,0);
              uVar36 = uVar37;
              uVar43 = uVar40;
              uVar45 = uVar41;
              uVar47 = uVar31;
              uVar48 = uVar33;
            }
          }
        }
        uVar27 = uVar27 + 1;
        lVar20 = lVar20 + 0xa0;
      } while ((uVar24 & 0x7fffffff) != uVar27);
      iVar21 = 1;
LAB_14693f83a:
      if (0 < (int)uVar24) {
        lVar20 = 0;
        uVar27 = 0;
        do {
          if (*(int *)((longlong)param_1[2] + uVar27 * 4) != iVar21) {
            FUN_14693d724((longlong)param_1[5] + lVar20,&local_358);
            uVar31 = SUB84(local_358,0);
            uVar40 = SUB84(local_350,0);
            uVar41 = (undefined4)((ulonglong)local_350 >> 0x20);
            uVar29 = (undefined4)((ulonglong)local_358 >> 0x20);
            uVar28 = uVar40;
            uVar32 = uVar41;
            if (local_350 <= local_358) {
              uVar28 = uVar31;
              uVar32 = uVar29;
            }
            uVar39 = (undefined4)((ulonglong)local_348 >> 0x20);
            uVar34 = SUB84(local_348,0);
            uVar33 = uVar39;
            if ((double)CONCAT44(uVar32,uVar28) <= local_348) {
              uVar34 = uVar28;
              uVar33 = uVar32;
            }
            uVar28 = uVar40;
            uVar32 = uVar41;
            if (local_358 <= local_350) {
              uVar28 = uVar31;
              uVar32 = uVar29;
            }
            if ((double)CONCAT44(uVar33,uVar34) <= (double)CONCAT44(uVar32,uVar28)) {
              uVar34 = uVar28;
              uVar33 = uVar32;
            }
            dVar35 = (double)CONCAT44(uVar45,uVar43);
            if (dVar35 <= (double)CONCAT44(uVar48,uVar47)) {
              dVar35 = (double)CONCAT44(uVar48,uVar47);
            }
            uVar28 = uVar30;
            uVar32 = uVar36;
            if (dVar35 <= (double)CONCAT44(uVar36,uVar30)) {
              uVar28 = SUB84(dVar35,0);
              uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
            }
            dVar35 = (double)CONCAT44(uVar45,uVar43);
            if ((double)CONCAT44(uVar48,uVar47) <= dVar35) {
              dVar35 = (double)CONCAT44(uVar48,uVar47);
            }
            if ((double)CONCAT44(uVar32,uVar28) <= dVar35) {
              uVar28 = SUB84(dVar35,0);
              uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
            }
            if ((0.0 <= (double)CONCAT44(uVar32,uVar28) * (double)CONCAT44(uVar33,uVar34)) &&
               (ABS((double)CONCAT44(uVar33,uVar34)) < ABS((double)CONCAT44(uVar32,uVar28)))) {
              uVar44 = (undefined4)local_340;
              uVar46 = (undefined4)((ulonglong)local_340 >> 0x20);
              uVar30 = SUB84(local_348,0);
              uVar36 = uVar39;
              uVar43 = uVar40;
              uVar45 = uVar41;
              uVar47 = uVar31;
              uVar48 = uVar29;
            }
          }
          uVar27 = uVar27 + 1;
          lVar20 = lVar20 + 0xa0;
        } while ((uVar24 & 0x7fffffff) != uVar27);
      }
    }
  }
  uVar28 = uVar43;
  uVar32 = uVar45;
  if ((double)CONCAT44(uVar45,uVar43) <= (double)CONCAT44(uVar48,uVar47)) {
    uVar28 = uVar47;
    uVar32 = uVar48;
  }
  uVar31 = uVar30;
  uVar40 = uVar36;
  if ((double)CONCAT44(uVar32,uVar28) <= (double)CONCAT44(uVar36,uVar30)) {
    uVar31 = uVar28;
    uVar40 = uVar32;
  }
  uVar28 = uVar43;
  uVar32 = uVar45;
  if ((double)CONCAT44(uVar48,uVar47) <= (double)CONCAT44(uVar45,uVar43)) {
    uVar28 = uVar47;
    uVar32 = uVar48;
  }
  if ((double)CONCAT44(uVar40,uVar31) <= (double)CONCAT44(uVar32,uVar28)) {
    uVar31 = uVar28;
    uVar40 = uVar32;
  }
  uVar28 = uStack_2f0;
  uVar32 = uStack_2ec;
  if ((double)CONCAT44(uStack_2ec,uStack_2f0) <= (double)CONCAT44(uStack_2f4,local_2f8)) {
    uVar28 = local_2f8;
    uVar32 = uStack_2f4;
  }
  dVar35 = local_2e8;
  if ((double)CONCAT44(uVar32,uVar28) <= local_2e8) {
    dVar35 = (double)CONCAT44(uVar32,uVar28);
  }
  uVar28 = uStack_2f0;
  uVar32 = uStack_2ec;
  if ((double)CONCAT44(uStack_2f4,local_2f8) <= (double)CONCAT44(uStack_2ec,uStack_2f0)) {
    uVar28 = local_2f8;
    uVar32 = uStack_2f4;
  }
  if (dVar35 <= (double)CONCAT44(uVar32,uVar28)) {
    dVar35 = (double)CONCAT44(uVar32,uVar28);
  }
  if (((double)CONCAT44(uVar40,uVar31) == dVar35) &&
     (!NAN((double)CONCAT44(uVar40,uVar31)) && !NAN(dVar35))) {
    uVar44 = (undefined4)uStack_2e0;
    uVar46 = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    uVar30 = SUB84(local_2e8,0);
    uVar36 = (undefined4)((ulonglong)local_2e8 >> 0x20);
    uVar43 = uStack_2f0;
    uVar45 = uStack_2ec;
    uVar47 = local_2f8;
    uVar48 = uStack_2f4;
  }
  *local_360 = CONCAT44(uVar48,uVar47);
  local_360[1] = CONCAT44(uVar45,uVar43);
  local_360[2] = CONCAT44(uVar36,uVar30);
  local_360[3] = CONCAT44(uVar46,uVar44);
LAB_14693f6ba:
  if ((local_f0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14693f9ed FUN_14693f9ed body=2110 status=ok
// SIG undefined FUN_14693f9ed(void)

void FUN_14693f9ed(longlong *param_1)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  uint uVar19;
  int *piVar20;
  undefined8 **ppuVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_198 [40];
  longlong *local_170;
  undefined8 *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int *local_158;
  int *piStack_150;
  int *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  longlong lStack_120;
  undefined8 *local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  uint local_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_158 = (int *)0x0;
  piStack_150 = (int *)0x0;
  local_148 = (int *)0x0;
  plVar16 = (longlong *)*param_1;
  local_170 = param_1;
  if (plVar16 != (longlong *)param_1[1]) {
    uVar12 = 6;
    piVar11 = (int *)0x0;
    piVar20 = (int *)0x0;
    do {
      if (*plVar16 != plVar16[1]) {
        plVar14 = *(longlong **)(plVar16[1] + -8);
        piStack_150 = piVar20;
        (**(code **)(*plVar14 + 0x28))(plVar14,&local_168,0x3ff0000000000000);
        plVar14 = (longlong *)*plVar16;
        if (plVar14 == (longlong *)plVar16[1]) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          iVar10 = 0;
          puVar5 = (undefined8 *)0x0;
          do {
            (**(code **)(*(longlong *)*plVar14 + 0x28))((longlong *)*plVar14,&local_138,0);
            dVar28 = SQRT((double)local_138 * (double)local_138 +
                          (double)uStack_130 * (double)uStack_130);
            dVar27 = (double)uStack_130 / dVar28;
            if ((dVar28 == 0.0) && (!NAN(dVar28))) {
              dVar27 = 1.0;
            }
            dVar1 = (double)local_138 / dVar28;
            if ((dVar28 == 0.0) && (!NAN(dVar28))) {
              dVar1 = 0.0;
            }
            dVar28 = (double)CONCAT44(uStack_15c,uStack_160);
            dVar30 = SQRT((double)local_168 * (double)local_168 + dVar28 * dVar28);
            dVar28 = dVar28 / dVar30;
            if ((dVar30 == 0.0) && (!NAN(dVar30))) {
              dVar28 = 1.0;
            }
            dVar29 = (double)local_168 / dVar30;
            if ((dVar30 == 0.0) && (!NAN(dVar30))) {
              dVar29 = 0.0;
            }
            if ((dVar29 * dVar1 + dVar27 * dVar28 <= 0.0) ||
               (0.1411200080598672 < ABS(dVar29 * dVar27 - dVar1 * dVar28))) {
              local_138 = (undefined8 *)CONCAT44(local_138._4_4_,iVar10);
              local_128 = (undefined8 *)(((ulonglong)local_128 >> 8 & 0xffffff) << 8);
              uStack_130 = puVar5;
              if (piStack_150 == local_148) {
                FUN_14694bb86(&local_158);
              }
              else {
                *(undefined8 **)(piStack_150 + 4) = local_128;
                uStack_130._0_4_ = (int)puVar5;
                uStack_130._4_4_ = (int)((ulonglong)puVar5 >> 0x20);
                *piStack_150 = iVar10;
                piStack_150[1] = local_138._4_4_;
                piStack_150[2] = (int)uStack_130;
                piStack_150[3] = uStack_130._4_4_;
                piStack_150 = piStack_150 + 6;
              }
              puVar5 = (undefined8 *)0x0;
            }
            plVar3 = (longlong *)*plVar14;
            dVar28 = 0.0;
            (**(code **)(*plVar3 + 0x20))(plVar3,&local_138,0);
            iVar13 = 4;
            dVar27 = 1.0;
            do {
              (**(code **)(*plVar3 + 0x20))(plVar3,&local_100,dVar27 * 0.25);
              dVar1 = (double)CONCAT44(uStack_f4,uStack_f8) - (double)uStack_130;
              dVar30 = (double)CONCAT44(uStack_fc,local_100) - (double)local_138;
              dVar28 = dVar28 + SQRT(dVar30 * dVar30 + dVar1 * dVar1);
              local_138 = (undefined8 *)CONCAT44(uStack_fc,local_100);
              uStack_130 = (undefined8 *)CONCAT44(uStack_f4,uStack_f8);
              dVar27 = dVar27 + 1.0;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            puVar5 = (undefined8 *)((double)puVar5 + dVar28);
            (**(code **)(*(longlong *)*plVar14 + 0x28))((longlong *)*plVar14,&local_138);
            uStack_160 = (int)uStack_130;
            uStack_15c = uStack_130._4_4_;
            local_168 = local_138;
            plVar14 = plVar14 + 1;
            iVar10 = iVar10 + 1;
            piVar11 = local_158;
            piVar20 = piStack_150;
          } while (plVar14 != (longlong *)plVar16[1]);
        }
        if (piVar11 == piVar20) {
          uVar12 = (uVar12 >> 2 | uVar12 * 2) & 7;
          plVar3 = (longlong *)*plVar16;
          piVar20 = piVar11;
          if (plVar3 != plVar14) {
            do {
              *(uint *)(*plVar3 + 8) = uVar12;
              plVar3 = plVar3 + 1;
            } while (plVar3 != (longlong *)plVar16[1]);
          }
        }
        else if ((longlong)piVar20 - (longlong)piVar11 == 0x18) {
          uVar12 = uVar12 >> 2 | uVar12 * 2;
          uVar24 = uVar12 & 7;
          local_100 = uVar24;
          uStack_fc = 7;
          uVar12 = (uVar24 >> 2) + (uVar12 & 3) * 2;
          uStack_f8 = uVar12;
          iVar10 = *piVar11;
          plVar3 = (longlong *)*plVar16;
          uVar17 = (longlong)plVar14 - (longlong)plVar3 >> 3;
          if (uVar17 < 3) {
            piVar20 = piVar11;
            if (plVar14 != plVar3) {
              local_118 = (undefined8 *)0x0;
              puStack_110 = (undefined8 *)0x0;
              local_128 = (undefined8 *)0x0;
              lStack_120 = 0;
              local_138 = (undefined8 *)0x0;
              uStack_130 = (undefined8 *)0x0;
              local_108 = 0;
              (**(code **)(*(longlong *)*plVar3 + 0x80))
                        ((longlong *)*plVar3,&local_138 + iVar10 * 3,&uStack_130 + iVar10 * 3,
                         &local_128 + (longlong)iVar10 * 3);
              if ((ulonglong)(plVar16[1] - *plVar16) < 9) {
                uVar19 = 7;
                ppuVar18 = (undefined8 **)&uStack_130;
                ppuVar21 = &local_128;
                puVar5 = local_138;
              }
              else {
                plVar14 = *(longlong **)(*plVar16 + 8);
                (**(code **)(*plVar14 + 0x80))
                          (plVar14,&local_138 + (iVar10 * -3 + 3),&local_138 + (iVar10 * -3 + 4),
                           &local_138 + (iVar10 * -3 + 5));
                *(uint *)(uStack_130 + 1) = uVar24;
                *(uint *)(local_138 + 1) = uVar24;
                *(undefined4 *)(lStack_120 + 8) = 7;
                uVar24 = 7;
                ppuVar18 = &puStack_110;
                ppuVar21 = &local_118;
                puVar5 = local_128;
                uVar19 = uVar12;
              }
              *(uint *)(puVar5 + 1) = uVar24;
              *(uint *)(*ppuVar18 + 1) = uVar19;
              *(uint *)(*ppuVar21 + 1) = uVar12;
              plVar14 = (longlong *)*plVar16;
              plVar3 = (longlong *)plVar16[1];
              if (plVar14 != plVar3) {
                do {
                  puVar5 = (undefined8 *)*plVar14;
                  if (puVar5 != (undefined8 *)0x0) {
                    (**(code **)*puVar5)(puVar5,1);
                  }
                  plVar14 = plVar14 + 1;
                } while (plVar14 != plVar3);
                plVar16[1] = *plVar16;
              }
              puVar5 = local_138;
              puVar15 = &uStack_130;
              while (puVar5 != (undefined8 *)0x0) {
                local_168 = puVar5;
                if ((undefined8 *)plVar16[1] == (undefined8 *)plVar16[2]) {
                  FUN_14694add6(plVar16);
                  if (local_168 != (undefined8 *)0x0) {
                    (**(code **)*local_168)(local_168,1);
                  }
                }
                else {
                  *(undefined8 *)plVar16[1] = puVar5;
                  plVar16[1] = plVar16[1] + 8;
                }
                puVar5 = (undefined8 *)*puVar15;
                puVar15 = puVar15 + 1;
              }
            }
          }
          else {
            iVar13 = (int)uVar17;
            piVar20 = piVar11;
            if (0 < iVar13) {
              dVar27 = 0.0;
              uVar17 = uVar17 & 0xffffffff;
              do {
                *(undefined4 *)(*(longlong *)(*plVar16 + (longlong)(iVar10 % iVar13) * 8) + 8) =
                     *(undefined4 *)
                      ((longlong)&local_108 +
                      (longlong)
                      (int)((dVar27 * 2.875) / (double)(iVar13 + -1) + 3.0 + -1.4375 + 0.5) * 4);
                dVar27 = dVar27 + 1.0;
                iVar10 = iVar10 + 1;
                uVar24 = (int)uVar17 - 1;
                uVar17 = (ulonglong)uVar24;
              } while (uVar24 != 0);
            }
          }
        }
        else {
          uVar25 = ((longlong)piVar20 - (longlong)piVar11 >> 3) * -0x5555555555555555;
          uVar24 = (uint)uVar25;
          uVar17 = uVar25 & 0xffffffff;
          if (3 < (int)uVar24) {
            *(double *)(piVar11 + 2) = (double)puVar5 + *(double *)(piVar11 + 2);
            piVar20 = piVar11 + 4;
            uVar17 = uVar25 & 0xffffffff;
            uVar4 = 1;
            do {
              uVar8 = 0;
              if (uVar4 != (uVar24 & 0x7fffffff)) {
                uVar8 = uVar4 & 0xffffffff;
              }
              if ((*(double *)(piVar11 + uVar8 * 6 + 2) < *(double *)(piVar20 + -2)) &&
                 (*(double *)(piVar11 + uVar8 * 6 + 2) <
                  *(double *)
                   (piVar11 + ((ulonglong)((int)uVar4 + 1) % (uVar25 & 0xffffffff)) * 6 + 2))) {
                *(undefined1 *)piVar20 = 1;
                uVar17 = (ulonglong)((int)uVar17 - 1);
              }
              piVar20 = piVar20 + 6;
              bVar26 = uVar4 != (uVar24 & 0x7fffffff);
              uVar4 = uVar4 + 1;
            } while (bVar26);
          }
          if (0 < (int)uVar24) {
            uVar4 = (ulonglong)(uVar24 & 0x7fffffff);
            puVar9 = (uint *)(piVar11 + 5);
            uVar19 = 0;
            uVar25 = uVar4;
            do {
              if ((char)puVar9[-1] == '\0') {
                uVar6 = (int)uVar17 - 1;
                uVar17 = (ulonglong)uVar6;
                uVar22 = 0;
                if (uVar6 == 0) {
                  uVar22 = uVar19;
                }
                uVar22 = uVar22 & uVar12;
                if ((uVar22 < 5) && ((0x16U >> uVar22 & 1) != 0)) {
                  uVar12 = uVar22 ^ 7;
                }
                else {
                  uVar12 = (uVar12 >> 2 | uVar12 * 2) & 7;
                }
                *puVar9 = uVar12;
                if (uVar19 == 0) {
                  uVar19 = uVar12;
                }
              }
              puVar9 = puVar9 + 6;
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
            uVar17 = 0;
            do {
              if ((char)piVar11[uVar17 * 6 + 4] == '\x01') {
                uVar25 = 0;
                if (uVar17 + 1 != uVar4) {
                  uVar25 = uVar17 + 1 & 0xffffffff;
                }
                piVar11[uVar17 * 6 + 5] = piVar11[uVar25 * 6 + 5] & uVar12 ^ 7;
              }
              else {
                uVar12 = piVar11[uVar17 * 6 + 5];
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar4);
          }
          uVar12 = piVar11[5];
          uVar17 = (ulonglong)(plVar16[1] - *plVar16) >> 3;
          iVar10 = (int)uVar17;
          piVar20 = piVar11;
          if (0 < iVar10) {
            iVar13 = *piVar11;
            iVar23 = 0;
            uVar17 = uVar17 & 0xffffffff;
            do {
              iVar7 = iVar13 % iVar10;
              iVar2 = iVar23 + 1;
              if ((iVar2 < (int)uVar24) && (piVar11[(longlong)iVar2 * 6] == iVar7)) {
                uVar12 = piVar11[(longlong)iVar2 * 6 + 5];
                iVar23 = iVar2;
              }
              *(uint *)(*(longlong *)(*plVar16 + (longlong)iVar7 * 8) + 8) = uVar12;
              iVar13 = iVar13 + 1;
              uVar19 = (int)uVar17 - 1;
              uVar17 = (ulonglong)uVar19;
            } while (uVar19 != 0);
          }
        }
      }
      plVar16 = plVar16 + 3;
    } while (plVar16 != (longlong *)local_170[1]);
  }
  FUN_14694bd34(&local_158);
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14694022c FUN_14694022c body=242 status=ok
// SIG undefined FUN_14694022c(void)

void FUN_14694022c(double *param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  double dStack_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (ABS(param_1[2]) <
      SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
           (param_1[1] - param_2[1]) * (param_1[1] - param_2[1])) * -1.001 + param_2[2])
  goto LAB_1469402e9;
  local_48 = *(undefined4 *)param_1;
  uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_40 = *(undefined4 *)(param_1 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
  (**(code **)(*param_3 + 0x38))(param_3,&local_38,&local_48,local_28);
  dVar1 = ABS(local_38);
  dVar2 = ABS(param_1[2]);
  if (dVar2 <= dVar1) {
    if (((dVar1 == dVar2) && (!NAN(dVar1) && !NAN(dVar2))) && (dStack_30 < param_1[3]))
    goto LAB_1469402ce;
  }
  else {
LAB_1469402ce:
    param_1[2] = local_38;
    param_1[3] = dStack_30;
  }
  dVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = dVar2;
  param_2[2] = dVar1;
LAB_1469402e9:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146940320 FUN_146940320 body=219 status=ok
// SIG undefined FUN_146940320(void)

bool FUN_146940320(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = SQRT((*param_3 - *param_2) * (*param_3 - *param_2) +
               (param_3[1] - param_2[1]) * (param_3[1] - param_2[1])) * 1.001;
  if (param_2[2] - dVar3 <= ABS(*param_1)) {
    return true;
  }
  if (dVar3 <= ABS(param_2[3])) {
    if (ABS(param_2[4]) < dVar3) {
      return true;
    }
    if (0.0 < param_2[3]) {
      dVar1 = param_2[5];
      if (0.0 <= dVar1) {
        if (dVar1 - dVar3 <= param_1[3]) {
          return true;
        }
      }
      else if (param_1[2] <= dVar1 + dVar3) {
        return true;
      }
    }
    if (param_2[4] <= 0.0) {
      bVar2 = false;
    }
    else {
      dVar1 = param_2[6];
      if (0.0 <= dVar1) {
        bVar2 = param_1[3] < dVar1 - dVar3;
      }
      else {
        bVar2 = dVar3 + dVar1 < param_1[2];
      }
      bVar2 = !bVar2;
    }
    return bVar2;
  }
  return true;
}



// FUNCTION 1469403fc FUN_1469403fc body=176 status=ok
// SIG undefined FUN_1469403fc(void)

undefined8 FUN_1469403fc(double *param_1,undefined4 *param_2)

{
  double dVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  double dStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar1 = param_1[(ulonglong)(0.0 < *param_1 || *param_1 == 0.0) + 2];
  uVar4 = SUB84(dVar1,0);
  uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    local_38 = *param_1;
    dStack_30 = param_1[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_38,&local_48,param_1[5]);
    uVar3 = ~-(ulonglong)(ABS(local_38) < ABS(dVar1)) & (ulonglong)dVar1 |
            (ulonglong)local_38 & -(ulonglong)(ABS(local_38) < ABS(dVar1));
    uVar4 = (undefined4)uVar3;
    uVar5 = (undefined4)(uVar3 >> 0x20);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT44(uVar5,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469404ae FUN_1469404ae body=1468 status=ok
// SIG undefined FUN_1469404ae(void)

void FUN_1469404ae(double *param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  char cVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  pdVar1 = param_1 + 6;
  cVar13 = FUN_146940320(param_1,param_2,pdVar1);
  if (cVar13 == '\0') goto LAB_14694099e;
  local_108 = *(undefined4 *)pdVar1;
  uStack_104 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_100 = *(undefined4 *)(param_1 + 7);
  uStack_fc = *(undefined4 *)((longlong)param_1 + 0x3c);
  (**(code **)(*param_4 + 0x38))(param_4,&local_f8,&local_108,&local_e8);
  dVar2 = ABS(local_f8);
  dVar3 = ABS(*param_1);
  if (dVar3 <= dVar2) {
    if (((dVar2 == dVar3) && (!NAN(dVar2) && !NAN(dVar3))) && (dStack_f0 < param_1[1]))
    goto LAB_1469405a7;
  }
  else {
LAB_1469405a7:
    *param_1 = local_f8;
    param_1[1] = dStack_f0;
    param_1[4] = (double)param_4;
    param_1[5] = local_e8;
  }
  uVar14 = *(undefined4 *)((longlong)param_1 + 0x34);
  uVar15 = *(undefined4 *)(param_1 + 7);
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x3c);
  *param_2 = *(undefined4 *)pdVar1;
  param_2[1] = uVar14;
  param_2[2] = uVar15;
  param_2[3] = uVar12;
  *(double *)(param_2 + 4) = dVar2;
  (**(code **)(*param_4 + 0x20))(param_4,&local_118,0);
  dVar8 = param_1[7] - local_110;
  dVar7 = param_1[6] - local_118;
  (**(code **)(*param_4 + 0x20))(param_4,&local_128,0);
  dVar2 = param_1[7];
  dVar5 = param_1[6] - local_128;
  (**(code **)(*param_4 + 0x28))(param_4,&local_138,0);
  dVar3 = SQRT(local_138 * local_138 + local_130 * local_130);
  dVar4 = local_138 / dVar3;
  if ((dVar3 == 0.0) && (!NAN(dVar3))) {
    dVar4 = 0.0;
  }
  dVar11 = local_130 / dVar3;
  if ((dVar3 == 0.0) && (!NAN(dVar3))) {
    dVar11 = 0.0;
  }
  (**(code **)(*param_4 + 0x28))(param_4,&local_138,0);
  dVar3 = SQRT(local_138 * local_138 + local_130 * local_130);
  dVar9 = local_138 / dVar3;
  if ((dVar3 == 0.0) && (!NAN(dVar3))) {
    dVar9 = 0.0;
  }
  dVar10 = local_130 / dVar3;
  if ((dVar3 == 0.0) && (!NAN(dVar3))) {
    dVar10 = 0.0;
  }
  local_140 = dVar2 - local_120;
  (**(code **)(*param_3 + 0x28))(param_3,&local_138,0);
  dVar2 = SQRT(local_138 * local_138 + local_130 * local_130);
  dVar3 = local_138 / dVar2;
  if ((dVar2 == 0.0) && (!NAN(dVar2))) {
    dVar3 = 0.0;
  }
  dVar6 = local_130 / dVar2;
  if ((dVar2 == 0.0) && (!NAN(dVar2))) {
    dVar6 = 0.0;
  }
  (**(code **)(*param_5 + 0x28))(param_5,&local_138,0);
  dVar2 = SQRT(local_138 * local_138 + local_130 * local_130);
  local_138 = local_138 / dVar2;
  if ((dVar2 == 0.0) && (!NAN(dVar2))) {
    local_138 = 0.0;
  }
  local_130 = local_130 / dVar2;
  if ((dVar2 == 0.0) && (!NAN(dVar2))) {
    local_130 = 0.0;
  }
  dVar6 = dVar6 + dVar11;
  dVar3 = dVar3 + dVar4;
  dVar2 = SQRT(dVar3 * dVar3 + dVar6 * dVar6);
  dVar3 = dVar3 / dVar2;
  if ((dVar2 == 0.0) && (!NAN(dVar2))) {
    dVar3 = 0.0;
  }
  dVar6 = dVar6 / dVar2;
  if ((dVar2 == 0.0) && (!NAN(dVar2))) {
    dVar6 = 0.0;
  }
  local_130 = local_130 + dVar10;
  local_138 = local_138 + dVar9;
  dVar2 = SQRT(local_138 * local_138 + local_130 * local_130);
  local_138 = local_138 / dVar2;
  if ((dVar2 == 0.0) && (!NAN(dVar2))) {
    local_138 = 0.0;
  }
  dVar3 = dVar3 * dVar7 + dVar6 * dVar8;
  local_130 = local_130 / dVar2;
  if ((dVar2 == 0.0) && (!NAN(dVar2))) {
    local_130 = 0.0;
  }
  dVar2 = local_138 * dVar5 + local_130 * local_140;
  if (0.0 < dVar3) {
    uVar14 = SUB84(local_f8,0);
    uVar15 = (undefined4)((ulonglong)local_f8 >> 0x20);
    if ((0.0 < -dVar4 * dVar7 - dVar8 * dVar11) &&
       (dVar4 = dVar7 * -dVar11 + dVar8 * dVar4, ABS(dVar4) < ABS(local_f8))) {
      dVar7 = -dVar4;
      uVar14 = SUB84(dVar4,0);
      uVar15 = (undefined4)((ulonglong)dVar7 >> 0x20);
      if ((dVar7 <= dVar4) && (param_1[2] <= dVar7 && dVar7 != param_1[2])) {
        param_1[2] = dVar7;
      }
      if ((dVar4 <= 0.0) && (dVar7 < param_1[3])) {
        param_1[3] = dVar7;
      }
    }
    *(ulonglong *)(param_2 + 10) = CONCAT44(uVar15,uVar14);
  }
  if (dVar2 < 0.0) {
    if ((0.0 < dVar5 * dVar9 + local_140 * dVar10) &&
       (dVar4 = dVar5 * dVar10 - dVar9 * local_140, ABS(dVar4) < ABS(local_f8))) {
      if ((dVar4 <= 0.0) && (param_1[2] <= dVar4 && dVar4 != param_1[2])) {
        param_1[2] = dVar4;
      }
      local_f8 = dVar4;
      if ((0.0 <= dVar4) && (dVar4 < param_1[3])) {
        param_1[3] = dVar4;
      }
    }
    *(double *)(param_2 + 0xc) = local_f8;
  }
  *(double *)(param_2 + 6) = dVar3;
  *(double *)(param_2 + 8) = -dVar2;
LAB_14694099e:
  if ((local_e0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146940a6c FUN_146940a6c body=2155 status=ok
// SIG undefined FUN_146940a6c(void)

void FUN_146940a6c(double *param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar12 = *(uint *)(param_4 + 1);
  if (((((uVar12 & 1) == 0) || (cVar11 = FUN_146940320(param_1 + 2,param_2,param_1), cVar11 == '\0')
       ) && (((uVar12 & 2) == 0 ||
             (cVar11 = FUN_146940320(param_1 + 8,param_2,param_1), cVar11 == '\0')))) &&
     (((uVar12 & 4) == 0 || (cVar11 = FUN_146940320(param_1 + 0xe,param_2,param_1), cVar11 == '\0'))
     )) goto LAB_146940b1d;
  local_108 = *(undefined4 *)param_1;
  uStack_104 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_100 = *(undefined4 *)(param_1 + 1);
  uStack_fc = *(undefined4 *)((longlong)param_1 + 0xc);
  (**(code **)(*param_4 + 0x38))(param_4,&local_f8,&local_108,&local_e8);
  uVar12 = *(uint *)(param_4 + 1);
  if ((uVar12 & 1) != 0) {
    dVar1 = ABS(local_f8);
    dVar15 = ABS(param_1[2]);
    if (dVar15 <= dVar1) {
      if (((dVar1 != dVar15) || (NAN(dVar1) || NAN(dVar15))) || (param_1[3] <= dStack_f0))
      goto LAB_146940c1d;
    }
    param_1[2] = local_f8;
    param_1[3] = dStack_f0;
    param_1[6] = (double)param_4;
    param_1[7] = local_e8;
    uVar12 = *(uint *)(param_4 + 1);
  }
LAB_146940c1d:
  if ((uVar12 & 2) != 0) {
    dVar1 = ABS(local_f8);
    dVar15 = ABS(param_1[8]);
    if (dVar15 <= dVar1) {
      if (((dVar1 != dVar15) || (NAN(dVar1) || NAN(dVar15))) || (param_1[9] <= dStack_f0))
      goto LAB_146940c25;
    }
    param_1[8] = local_f8;
    param_1[9] = dStack_f0;
    param_1[0xc] = (double)param_4;
    param_1[0xd] = local_e8;
    uVar12 = *(uint *)(param_4 + 1);
  }
LAB_146940c25:
  if ((uVar12 & 4) == 0) {
    dVar1 = ABS(local_f8);
  }
  else {
    dVar1 = ABS(local_f8);
    dVar15 = ABS(param_1[0xe]);
    if (dVar15 <= dVar1) {
      if (((dVar1 != dVar15) || (NAN(dVar1) || NAN(dVar15))) || (param_1[0xf] <= dStack_f0))
      goto LAB_146940c35;
    }
    param_1[0xe] = local_f8;
    param_1[0xf] = dStack_f0;
    param_1[0x12] = (double)param_4;
    param_1[0x13] = local_e8;
  }
LAB_146940c35:
  uVar13 = *(undefined4 *)((longlong)param_1 + 4);
  uVar14 = *(undefined4 *)(param_1 + 1);
  uVar10 = *(undefined4 *)((longlong)param_1 + 0xc);
  *param_2 = *(undefined4 *)param_1;
  param_2[1] = uVar13;
  param_2[2] = uVar14;
  param_2[3] = uVar10;
  *(double *)(param_2 + 4) = dVar1;
  (**(code **)(*param_4 + 0x20))(param_4,&local_118,0);
  dVar7 = param_1[1] - local_110;
  dVar4 = *param_1 - local_118;
  (**(code **)(*param_4 + 0x20))(param_4,&local_128,0);
  dVar1 = param_1[1];
  dVar2 = *param_1 - local_128;
  (**(code **)(*param_4 + 0x28))(param_4,&local_138,0);
  dVar15 = SQRT(local_138 * local_138 + local_130 * local_130);
  dVar9 = local_138 / dVar15;
  if ((dVar15 == 0.0) && (!NAN(dVar15))) {
    dVar9 = 0.0;
  }
  dVar8 = local_130 / dVar15;
  if ((dVar15 == 0.0) && (!NAN(dVar15))) {
    dVar8 = 0.0;
  }
  (**(code **)(*param_4 + 0x28))(param_4,&local_138,0);
  dVar15 = SQRT(local_138 * local_138 + local_130 * local_130);
  dVar5 = local_138 / dVar15;
  if ((dVar15 == 0.0) && (!NAN(dVar15))) {
    dVar5 = 0.0;
  }
  dVar6 = local_130 / dVar15;
  if ((dVar15 == 0.0) && (!NAN(dVar15))) {
    dVar6 = 0.0;
  }
  local_140 = dVar1 - local_120;
  (**(code **)(*param_3 + 0x28))(param_3,&local_138,0);
  dVar1 = SQRT(local_138 * local_138 + local_130 * local_130);
  dVar15 = local_138 / dVar1;
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    dVar15 = 0.0;
  }
  dVar3 = local_130 / dVar1;
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    dVar3 = 0.0;
  }
  (**(code **)(*param_5 + 0x28))(param_5,&local_138,0);
  dVar1 = SQRT(local_138 * local_138 + local_130 * local_130);
  local_138 = local_138 / dVar1;
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    local_138 = 0.0;
  }
  local_130 = local_130 / dVar1;
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    local_130 = 0.0;
  }
  dVar3 = dVar3 + dVar8;
  dVar15 = dVar15 + dVar9;
  dVar1 = SQRT(dVar15 * dVar15 + dVar3 * dVar3);
  dVar15 = dVar15 / dVar1;
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    dVar15 = 0.0;
  }
  dVar3 = dVar3 / dVar1;
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    dVar3 = 0.0;
  }
  local_130 = local_130 + dVar6;
  local_138 = local_138 + dVar5;
  dVar1 = SQRT(local_138 * local_138 + local_130 * local_130);
  local_138 = local_138 / dVar1;
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    local_138 = 0.0;
  }
  dVar15 = dVar15 * dVar4 + dVar3 * dVar7;
  local_130 = local_130 / dVar1;
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    local_130 = 0.0;
  }
  dVar1 = local_138 * dVar2 + local_130 * local_140;
  if (0.0 < dVar15) {
    uVar13 = SUB84(local_f8,0);
    uVar14 = (undefined4)((ulonglong)local_f8 >> 0x20);
    if ((0.0 < -dVar9 * dVar4 - dVar7 * dVar8) &&
       (dVar4 = dVar4 * -dVar8 + dVar7 * dVar9, ABS(dVar4) < ABS(local_f8))) {
      dVar7 = -dVar4;
      uVar13 = SUB84(dVar4,0);
      uVar14 = (undefined4)((ulonglong)dVar7 >> 0x20);
      if ((*(byte *)(param_4 + 1) & 1) != 0) {
        if ((0.0 <= dVar4) && (param_1[4] <= dVar7 && dVar7 != param_1[4])) {
          param_1[4] = dVar7;
        }
        if ((dVar4 <= 0.0) && (dVar7 < param_1[5])) {
          param_1[5] = dVar7;
        }
      }
      if ((*(byte *)(param_4 + 1) & 2) != 0) {
        if ((0.0 <= dVar4) && (param_1[10] <= dVar7 && dVar7 != param_1[10])) {
          param_1[10] = dVar7;
        }
        if ((dVar4 <= 0.0) && (dVar7 < param_1[0xb])) {
          param_1[0xb] = dVar7;
        }
      }
      if ((*(byte *)(param_4 + 1) & 4) != 0) {
        if ((0.0 <= dVar4) && (param_1[0x10] <= dVar7 && dVar7 != param_1[0x10])) {
          param_1[0x10] = dVar7;
        }
        if ((dVar4 <= 0.0) && (dVar7 < param_1[0x11])) {
          param_1[0x11] = dVar7;
        }
      }
    }
    *(ulonglong *)(param_2 + 10) = CONCAT44(uVar14,uVar13);
  }
  if (dVar1 < 0.0) {
    if ((0.0 < dVar2 * dVar5 + local_140 * dVar6) &&
       (dVar2 = dVar2 * dVar6 - dVar5 * local_140, ABS(dVar2) < ABS(local_f8))) {
      if ((*(byte *)(param_4 + 1) & 1) != 0) {
        if ((dVar2 <= 0.0) && (param_1[4] <= dVar2 && dVar2 != param_1[4])) {
          param_1[4] = dVar2;
        }
        if ((0.0 <= dVar2) && (dVar2 < param_1[5])) {
          param_1[5] = dVar2;
        }
      }
      if ((*(byte *)(param_4 + 1) & 2) != 0) {
        if ((dVar2 <= 0.0) && (param_1[10] <= dVar2 && dVar2 != param_1[10])) {
          param_1[10] = dVar2;
        }
        if ((0.0 <= dVar2) && (dVar2 < param_1[0xb])) {
          param_1[0xb] = dVar2;
        }
      }
      local_f8 = dVar2;
      if ((*(byte *)(param_4 + 1) & 4) != 0) {
        if ((dVar2 <= 0.0) && (param_1[0x10] <= dVar2 && dVar2 != param_1[0x10])) {
          param_1[0x10] = dVar2;
        }
        if ((0.0 <= dVar2) && (dVar2 < param_1[0x11])) {
          param_1[0x11] = dVar2;
        }
      }
    }
    *(double *)(param_2 + 0xc) = local_f8;
  }
  *(double *)(param_2 + 6) = dVar15;
  *(double *)(param_2 + 8) = -dVar1;
LAB_146940b1d:
  if ((local_e0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469412d8 FUN_1469412d8 body=139 status=ok
// SIG undefined FUN_1469412d8(void)

void FUN_1469412d8(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_1 + 0x18);
  *param_2 = *(double *)(param_1 + 0x10);
  param_2[1] = dVar1;
  dVar2 = ABS(*(double *)(param_1 + 0x40));
  dVar1 = ABS(*param_2);
  if (dVar1 <= dVar2) {
    if (((dVar2 != dVar1) || (NAN(dVar2) || NAN(dVar1))) ||
       (param_2[1] < *(double *)(param_1 + 0x48) || param_2[1] == *(double *)(param_1 + 0x48)))
    goto LAB_146941317;
  }
  dVar1 = *(double *)(param_1 + 0x48);
  *param_2 = *(double *)(param_1 + 0x40);
  param_2[1] = dVar1;
  dVar1 = ABS(*param_2);
LAB_146941317:
  dVar2 = ABS(*(double *)(param_1 + 0x70));
  if ((dVar2 < dVar1) ||
     (((dVar2 == dVar1 && (!NAN(dVar2) && !NAN(dVar1))) &&
      (*(double *)(param_1 + 0x78) <= param_2[1] && param_2[1] != *(double *)(param_1 + 0x78))))) {
    dVar1 = *(double *)(param_1 + 0x78);
    *param_2 = *(double *)(param_1 + 0x70);
    param_2[1] = dVar1;
  }
  return;
}



// FUNCTION 146941364 FUN_146941364 body=2193 status=ok
// SIG undefined FUN_146941364(void)

void FUN_146941364(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  float *pfVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  dVar22 = (double)param_1[6];
  dVar23 = (double)param_1[2];
  dVar24 = (double)param_1[3];
  iVar9 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar9) {
    iVar7 = (int)param_2[1];
    iVar11 = 0;
    do {
      if (1 < iVar7) {
        pfVar8 = (float *)(*param_2 + (longlong)(iVar7 * iVar11 * 4 + 4) * 4);
        pfVar18 = (float *)(*param_2 + (longlong)(iVar7 * iVar11 * 4) * 4);
        iVar9 = 0;
        do {
          fVar25 = pfVar18[2];
          fVar21 = *pfVar18;
          fVar2 = pfVar18[1];
          fVar20 = fVar2;
          if (fVar2 <= fVar21) {
            fVar20 = fVar21;
          }
          fVar29 = fVar25;
          if (fVar20 <= fVar25) {
            fVar29 = fVar20;
          }
          fVar20 = fVar2;
          if (fVar21 <= fVar2) {
            fVar20 = fVar21;
          }
          if (fVar29 <= fVar20) {
            fVar29 = fVar20;
          }
          fVar20 = *pfVar8;
          fVar26 = pfVar8[1];
          fVar3 = fVar26;
          if (fVar26 <= fVar20) {
            fVar3 = fVar20;
          }
          fVar27 = pfVar8[2];
          if (fVar3 <= pfVar8[2]) {
            fVar27 = fVar3;
          }
          if (fVar20 <= fVar26) {
            fVar26 = fVar20;
          }
          if (fVar27 <= fVar26) {
            fVar27 = fVar26;
          }
          if (ABS(fVar27 + -0.5) + ABS(fVar29 + -0.5) <
              (float)(SQRT((dVar22 / dVar23) * (dVar22 / dVar23) + (0.0 / dVar24) * (0.0 / dVar24))
                     * 1.001)) {
            uVar5 = FUN_14286468f(pfVar18,pfVar8);
            lVar10 = *param_1;
            iVar7 = (int)param_1[1] * iVar11;
            if ((uVar5 & 1) == 0) {
LAB_146941564:
              if ((((uVar5 & 2) != 0) && ((fVar2 != fVar29 || (NAN(fVar2) || NAN(fVar29))))) ||
                 ((3 < uVar5 && ((fVar25 != fVar29 || (NAN(fVar25) || NAN(fVar29)))))))
              goto LAB_1469414f4;
            }
            else {
              if ((fVar21 == fVar29) && (!NAN(fVar21) && !NAN(fVar29))) goto LAB_146941564;
LAB_1469414f4:
              pbVar1 = (byte *)(lVar10 + (iVar7 + iVar9));
              *pbVar1 = *pbVar1 | 2;
              lVar10 = *param_1;
              iVar7 = (int)param_1[1] * iVar11;
            }
            if ((uVar5 & 1) == 0) {
LAB_14694154c:
              if ((((uVar5 & 2) == 0) ||
                  ((pfVar8[1] == fVar27 && (!NAN(pfVar8[1]) && !NAN(fVar27))))) &&
                 ((uVar5 < 4 || ((pfVar8[2] == fVar27 && (!NAN(pfVar8[2]) && !NAN(fVar27)))))))
              goto LAB_14694152e;
            }
            else if ((*pfVar8 == fVar27) && (!NAN(*pfVar8) && !NAN(fVar27))) goto LAB_14694154c;
            pbVar1 = (byte *)(lVar10 + (iVar7 + iVar9 + 1));
            *pbVar1 = *pbVar1 | 2;
          }
LAB_14694152e:
          iVar9 = iVar9 + 1;
          pfVar18 = pfVar18 + 4;
          pfVar8 = pfVar8 + 4;
          iVar7 = (int)param_2[1];
        } while (iVar9 < iVar7 + -1);
        iVar9 = *(int *)((longlong)param_2 + 0xc);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar9);
    dVar22 = (double)param_1[6];
    dVar23 = (double)param_1[2];
    dVar24 = (double)param_1[3];
  }
  dVar24 = (dVar22 / dVar24) * (dVar22 / dVar24);
  if (1 < iVar9) {
    iVar7 = (int)param_2[1];
    iVar12 = 1;
    iVar11 = 0;
    do {
      iVar14 = iVar11 + 1;
      if (0 < iVar7) {
        pfVar8 = (float *)(*param_2 + (longlong)(iVar7 * 4 * iVar14) * 4);
        pfVar18 = (float *)(*param_2 + (longlong)(iVar7 * 4 * iVar11) * 4);
        iVar9 = 0;
        do {
          fVar25 = pfVar18[2];
          fVar21 = *pfVar18;
          fVar2 = pfVar18[1];
          fVar20 = fVar2;
          if (fVar2 <= fVar21) {
            fVar20 = fVar21;
          }
          fVar29 = fVar25;
          if (fVar20 <= fVar25) {
            fVar29 = fVar20;
          }
          fVar20 = fVar2;
          if (fVar21 <= fVar2) {
            fVar20 = fVar21;
          }
          if (fVar29 <= fVar20) {
            fVar29 = fVar20;
          }
          fVar20 = *pfVar8;
          fVar26 = pfVar8[1];
          fVar3 = fVar26;
          if (fVar26 <= fVar20) {
            fVar3 = fVar20;
          }
          fVar27 = pfVar8[2];
          if (fVar3 <= pfVar8[2]) {
            fVar27 = fVar3;
          }
          if (fVar20 <= fVar26) {
            fVar26 = fVar20;
          }
          if (fVar27 <= fVar26) {
            fVar27 = fVar26;
          }
          if (ABS(fVar27 + -0.5) + ABS(fVar29 + -0.5) <
              (float)(SQRT((0.0 / dVar23) * (0.0 / dVar23) + dVar24) * 1.001)) {
            uVar5 = FUN_14286468f(pfVar18,pfVar8);
            lVar10 = *param_1;
            iVar7 = (int)param_1[1];
            if ((uVar5 & 1) == 0) {
LAB_146941730:
              if ((((uVar5 & 2) != 0) && ((fVar2 != fVar29 || (NAN(fVar2) || NAN(fVar29))))) ||
                 ((3 < uVar5 && ((fVar25 != fVar29 || (NAN(fVar25) || NAN(fVar29)))))))
              goto LAB_1469416ce;
            }
            else {
              if ((fVar21 == fVar29) && (!NAN(fVar21) && !NAN(fVar29))) goto LAB_146941730;
LAB_1469416ce:
              pbVar1 = (byte *)(lVar10 + (iVar7 * iVar11 + iVar9));
              *pbVar1 = *pbVar1 | 2;
              lVar10 = *param_1;
              iVar7 = (int)param_1[1];
            }
            if ((uVar5 & 1) == 0) {
LAB_146941718:
              if ((((uVar5 & 2) == 0) ||
                  ((pfVar8[1] == fVar27 && (!NAN(pfVar8[1]) && !NAN(fVar27))))) &&
                 ((uVar5 < 4 || ((pfVar8[2] == fVar27 && (!NAN(pfVar8[2]) && !NAN(fVar27)))))))
              goto LAB_1469416ff;
            }
            else if ((*pfVar8 == fVar27) && (!NAN(*pfVar8) && !NAN(fVar27))) goto LAB_146941718;
            pbVar1 = (byte *)(lVar10 + (iVar7 * iVar12 + iVar9));
            *pbVar1 = *pbVar1 | 2;
          }
LAB_1469416ff:
          pfVar18 = pfVar18 + 4;
          pfVar8 = pfVar8 + 4;
          iVar9 = iVar9 + 1;
          iVar7 = (int)param_2[1];
        } while (iVar9 < iVar7);
        iVar9 = *(int *)((longlong)param_2 + 0xc);
      }
      iVar12 = iVar12 + 1;
      iVar11 = iVar14;
    } while (iVar14 < iVar9 + -1);
    dVar23 = (double)param_1[2];
    dVar22 = (double)param_1[6];
    dVar24 = (dVar22 / (double)param_1[3]) * (dVar22 / (double)param_1[3]);
  }
  if (1 < iVar9) {
    fVar25 = (float)(SQRT((dVar22 / dVar23) * (dVar22 / dVar23) + dVar24) * 1.001);
    iVar7 = (int)param_2[1];
    iVar12 = 4;
    iVar14 = 0;
    iVar11 = 0;
    do {
      iVar17 = iVar11 + 1;
      if (1 < iVar7) {
        lVar10 = *param_2;
        lVar19 = (longlong)(iVar7 * iVar12 + 4) * 4;
        lVar15 = (longlong)(iVar7 * iVar12) * 4;
        lVar16 = (longlong)(iVar7 * iVar14 + 4) * 4;
        lVar13 = (longlong)(iVar7 * iVar14) * 4;
        iVar9 = 0;
        do {
          fVar21 = *(float *)(lVar10 + 8 + lVar13);
          fVar2 = *(float *)(lVar10 + lVar13);
          fVar20 = *(float *)(lVar10 + 4 + lVar13);
          fVar29 = fVar20;
          if (fVar20 <= fVar2) {
            fVar29 = fVar2;
          }
          fVar26 = fVar21;
          if (fVar29 <= fVar21) {
            fVar26 = fVar29;
          }
          fVar29 = fVar20;
          if (fVar2 <= fVar20) {
            fVar29 = fVar2;
          }
          if (fVar26 <= fVar29) {
            fVar26 = fVar29;
          }
          fVar29 = *(float *)(lVar10 + 8 + lVar16);
          fVar3 = *(float *)(lVar10 + lVar16);
          fVar27 = *(float *)(lVar10 + 4 + lVar16);
          fVar31 = *(float *)(lVar10 + 8 + lVar19);
          fVar4 = *(float *)(lVar10 + lVar19);
          fVar30 = *(float *)(lVar10 + 4 + lVar19);
          fVar28 = fVar30;
          if (fVar30 <= fVar4) {
            fVar28 = fVar4;
          }
          if (fVar28 <= fVar31) {
            fVar31 = fVar28;
          }
          fVar28 = *(float *)(lVar10 + 8 + lVar15);
          if (fVar4 <= fVar30) {
            fVar30 = fVar4;
          }
          if (fVar31 <= fVar30) {
            fVar31 = fVar30;
          }
          fVar4 = *(float *)(lVar10 + lVar15);
          fVar30 = *(float *)(lVar10 + 4 + lVar15);
          if (ABS(fVar31 + -0.5) + ABS(fVar26 + -0.5) < fVar25) {
            uVar5 = FUN_14286468f(lVar13 + lVar10,(float *)(lVar19 + lVar10));
            lVar6 = *param_1;
            iVar7 = (int)param_1[1];
            if ((uVar5 & 1) == 0) {
LAB_146941a60:
              if ((((uVar5 & 2) != 0) && ((fVar20 != fVar26 || (NAN(fVar20) || NAN(fVar26))))) ||
                 ((3 < uVar5 && ((fVar21 != fVar26 || (NAN(fVar21) || NAN(fVar26)))))))
              goto LAB_146941910;
            }
            else {
              if ((fVar2 == fVar26) && (!NAN(fVar2) && !NAN(fVar26))) goto LAB_146941a60;
LAB_146941910:
              pbVar1 = (byte *)(lVar6 + (iVar7 * iVar11 + iVar9));
              *pbVar1 = *pbVar1 | 2;
              lVar6 = *param_1;
              iVar7 = (int)param_1[1];
            }
            if ((uVar5 & 1) == 0) {
LAB_146941a33:
              if ((((uVar5 & 2) == 0) ||
                  ((fVar21 = *(float *)(lVar10 + 4 + lVar19), fVar21 == fVar31 &&
                   (!NAN(fVar21) && !NAN(fVar31))))) &&
                 ((uVar5 < 4 ||
                  ((fVar21 = *(float *)(lVar10 + 8 + lVar19), fVar21 == fVar31 &&
                   (!NAN(fVar21) && !NAN(fVar31))))))) goto LAB_146941965;
            }
            else {
              fVar21 = *(float *)(lVar19 + lVar10);
              if ((fVar21 == fVar31) && (!NAN(fVar21) && !NAN(fVar31))) goto LAB_146941a33;
            }
            pbVar1 = (byte *)(lVar6 + (iVar9 + iVar7 * iVar17 + 1));
            *pbVar1 = *pbVar1 | 2;
          }
LAB_146941965:
          fVar21 = fVar27;
          if (fVar27 <= fVar3) {
            fVar21 = fVar3;
          }
          if (fVar21 <= fVar29) {
            fVar29 = fVar21;
          }
          if (fVar3 <= fVar27) {
            fVar27 = fVar3;
          }
          if (fVar29 <= fVar27) {
            fVar29 = fVar27;
          }
          fVar21 = fVar30;
          if (fVar30 <= fVar4) {
            fVar21 = fVar4;
          }
          if (fVar21 <= fVar28) {
            fVar28 = fVar21;
          }
          if (fVar4 <= fVar30) {
            fVar30 = fVar4;
          }
          if (fVar28 <= fVar30) {
            fVar28 = fVar30;
          }
          if (ABS(fVar28 + -0.5) + ABS(fVar29 + -0.5) < fVar25) {
            uVar5 = FUN_14286468f((float *)(lVar10 + lVar16),(float *)(lVar15 + lVar10));
            lVar6 = *param_1;
            iVar7 = (int)param_1[1];
            if ((uVar5 & 1) == 0) {
LAB_1469419e1:
              if ((((uVar5 & 2) != 0) &&
                  ((fVar21 = *(float *)(lVar10 + 4 + lVar16), fVar21 != fVar29 ||
                   (NAN(fVar21) || NAN(fVar29))))) ||
                 ((3 < uVar5 &&
                  ((fVar21 = *(float *)(lVar10 + 8 + lVar16), fVar21 != fVar29 ||
                   (NAN(fVar21) || NAN(fVar29))))))) goto LAB_146941aa2;
            }
            else {
              fVar21 = *(float *)(lVar10 + lVar16);
              if ((fVar21 == fVar29) && (!NAN(fVar21) && !NAN(fVar29))) goto LAB_1469419e1;
LAB_146941aa2:
              pbVar1 = (byte *)(lVar6 + (iVar7 * iVar11 + iVar9 + 1));
              *pbVar1 = *pbVar1 | 2;
              lVar6 = *param_1;
              iVar7 = (int)param_1[1];
            }
            if ((uVar5 & 1) == 0) {
LAB_146941adf:
              if ((((uVar5 & 2) == 0) ||
                  ((fVar21 = *(float *)(lVar10 + 4 + lVar15), fVar21 == fVar28 &&
                   (!NAN(fVar21) && !NAN(fVar28))))) &&
                 ((uVar5 < 4 ||
                  ((fVar21 = *(float *)(lVar10 + 8 + lVar15), fVar21 == fVar28 &&
                   (!NAN(fVar21) && !NAN(fVar28))))))) goto LAB_146941a13;
            }
            else {
              fVar21 = *(float *)(lVar15 + lVar10);
              if ((fVar21 == fVar28) && (!NAN(fVar21) && !NAN(fVar28))) goto LAB_146941adf;
            }
            pbVar1 = (byte *)(lVar6 + (iVar7 * iVar17 + iVar9));
            *pbVar1 = *pbVar1 | 2;
          }
LAB_146941a13:
          iVar9 = iVar9 + 1;
          iVar7 = (int)param_2[1];
          lVar10 = lVar10 + 0x10;
        } while (iVar9 < iVar7 + -1);
        iVar9 = *(int *)((longlong)param_2 + 0xc);
      }
      iVar12 = iVar12 + 4;
      iVar14 = iVar14 + 4;
      iVar11 = iVar17;
    } while (iVar17 < iVar9 + -1);
  }
  return;
}



// FUNCTION 146941bf6 FUN_146941bf6 body=1348 status=ok
// SIG undefined FUN_146941bf6(void)

void FUN_146941bf6(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  longlong *local_150;
  int local_148;
  int local_144;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  int local_11c;
  longlong local_118;
  double local_110;
  byte local_108;
  double local_100;
  byte local_f8;
  double local_f0;
  byte local_e8;
  double local_e0;
  byte local_d8;
  double local_d0;
  byte local_c8;
  double local_c0;
  byte local_b8;
  double local_b0;
  byte local_a8;
  double local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar17 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar17) {
    dVar6 = (double)param_1[8];
    dVar20 = 0.0 / (double)param_1[3];
    dVar8 = (double)param_1[6] / (double)param_1[2];
    dVar8 = dVar8 * dVar8;
    dVar20 = SQRT(dVar20 * dVar20 + dVar8) * dVar6;
    dVar18 = (double)param_1[6] / (double)param_1[3];
    dVar19 = 0.0 / (double)param_1[2];
    dVar18 = dVar18 * dVar18;
    dVar19 = SQRT(dVar19 * dVar19 + dVar18) * dVar6;
    dVar6 = SQRT(dVar18 + dVar8) * dVar6;
    iVar16 = (int)param_2[1];
    iVar12 = 0;
    local_150 = param_2;
    iVar14 = iVar16;
    do {
      if (iVar14 < 1) {
        iVar12 = iVar12 + 1;
      }
      else {
        local_11c = iVar12 + 1;
        local_148 = iVar12 * 4 + 4;
        local_144 = iVar12 * 4 + -4;
        iVar17 = 4;
        local_118 = (longlong)iVar12;
        lVar15 = 0;
        do {
          lVar7 = *param_2;
          iVar9 = (int)lVar15;
          pfVar1 = (float *)(lVar7 + (longlong)((iVar9 + iVar14 * iVar12) * 4) * 4);
          fVar3 = *pfVar1;
          fVar4 = pfVar1[1];
          fVar5 = fVar4;
          if (fVar4 <= fVar3) {
            fVar5 = fVar3;
          }
          fVar21 = pfVar1[2];
          if (fVar5 <= pfVar1[2]) {
            fVar21 = fVar5;
          }
          if (fVar3 <= fVar4) {
            fVar4 = fVar3;
          }
          if (fVar21 <= fVar4) {
            fVar21 = fVar4;
          }
          bVar13 = *(byte *)(lVar15 + (int)param_1[1] * local_118 + *param_1) & 2;
          if (iVar9 == 0) {
            local_128 = 0;
LAB_146941ddd:
            if (iVar12 == 0) {
              local_130 = 0;
            }
            else {
              local_130 = lVar7 + (longlong)(iVar17 + iVar14 * local_144 + -4) * 4;
              local_a8 = bVar13 >> 1;
              local_b0 = dVar19;
              cVar10 = FUN_1428646dd(&local_b0,fVar21,pfVar1);
              bVar11 = 1;
              param_2 = local_150;
              iVar14 = iVar16;
              if (cVar10 != '\0') goto LAB_146941da4;
            }
            if (iVar9 < iVar14 + -1) {
              local_138 = lVar7 + (longlong)((iVar14 * iVar12 + iVar9) * 4 + 4) * 4;
              local_b8 = bVar13 >> 1;
              local_c0 = dVar20;
              cVar10 = FUN_1428646dd(&local_c0,fVar21,pfVar1);
              bVar11 = 1;
              param_2 = local_150;
              iVar14 = iVar16;
              if (cVar10 != '\0') goto LAB_146941da4;
            }
            else {
              local_138 = 0;
            }
            if (iVar12 < *(int *)((longlong)param_2 + 0xc) + -1) {
              local_140 = lVar7 + (longlong)(iVar17 + iVar14 * local_148 + -4) * 4;
              local_c8 = bVar13 >> 1;
              local_d0 = dVar19;
              cVar10 = FUN_1428646dd(&local_d0,fVar21,pfVar1);
              bVar11 = 1;
              param_2 = local_150;
              if (cVar10 != '\0') goto LAB_146941da4;
            }
            else {
              local_140 = 0;
              iVar16 = iVar14;
            }
            if (iVar12 != 0 && iVar9 != 0) {
              local_160 = lVar7 + (longlong)(iVar17 + iVar16 * local_144 + -8) * 4;
              local_d8 = bVar13 >> 1;
              local_168 = local_130;
              local_e0 = dVar6;
              cVar10 = FUN_14286486d(&local_e0,fVar21,pfVar1,local_128);
              bVar11 = 1;
              param_2 = local_150;
              if (cVar10 != '\0') goto LAB_146941da4;
              iVar16 = (int)local_150[1];
            }
            if ((iVar12 != 0) && (iVar9 < iVar16 + -1)) {
              local_160 = (longlong)(iVar16 * local_144 + iVar17) * 4 + *param_2;
              local_e8 = bVar13 >> 1;
              local_168 = local_130;
              local_f0 = dVar6;
              cVar10 = FUN_14286486d(&local_f0,fVar21,pfVar1,local_138);
              bVar11 = 1;
              param_2 = local_150;
              if (cVar10 != '\0') goto LAB_146941da4;
            }
            if ((iVar9 != 0) && (iVar12 < *(int *)((longlong)param_2 + 0xc) + -1)) {
              local_160 = (longlong)((int)param_2[1] * local_148 + iVar17 + -8) * 4 + *param_2;
              local_f8 = bVar13 >> 1;
              local_168 = local_140;
              local_100 = dVar6;
              cVar10 = FUN_14286486d(&local_100,fVar21,pfVar1,local_128);
              bVar11 = 1;
              param_2 = local_150;
              if (cVar10 != '\0') goto LAB_146941da4;
            }
            if ((iVar9 < (int)param_2[1] + -1) && (iVar12 < *(int *)((longlong)param_2 + 0xc) + -1))
            {
              local_160 = (longlong)((int)param_2[1] * local_148 + iVar17) * 4 + *param_2;
              local_108 = bVar13 >> 1;
              local_168 = local_140;
              local_110 = dVar6;
              bVar11 = FUN_14286486d(&local_110,fVar21,pfVar1,local_138);
              param_2 = local_150;
            }
            else {
              bVar11 = 0;
            }
          }
          else {
            local_128 = lVar7 + (longlong)((iVar14 * iVar12 + iVar9) * 4 + -4) * 4;
            local_98 = bVar13 >> 1;
            local_a0 = dVar20;
            cVar10 = FUN_1428646dd(&local_a0,fVar21,pfVar1);
            bVar11 = 1;
            param_2 = local_150;
            iVar14 = iVar16;
            if (cVar10 == '\0') goto LAB_146941ddd;
          }
LAB_146941da4:
          pbVar2 = (byte *)(lVar15 + (int)param_1[1] * local_118 + *param_1);
          *pbVar2 = *pbVar2 | bVar11;
          iVar16 = (int)param_2[1];
          iVar17 = iVar17 + 4;
          lVar15 = lVar15 + 1;
          iVar14 = iVar16;
        } while ((int)lVar15 < iVar16);
        iVar17 = *(int *)((longlong)param_2 + 0xc);
        iVar12 = local_11c;
      }
    } while (iVar12 < iVar17);
  }
  if ((local_90 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14694213c FUN_14694213c body=1986 status=ok
// SIG undefined FUN_14694213c(void)

void FUN_14694213c(longlong *param_1,longlong *param_2,longlong param_3)

{
  float *pfVar1;
  byte *pbVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  float fVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined1 auStack_338 [32];
  undefined4 *local_318;
  longlong local_310;
  int local_308;
  int local_304;
  undefined4 *local_300;
  longlong local_2f8;
  longlong local_2f0;
  ulonglong local_2e8;
  longlong local_2e0;
  double local_2d8;
  byte local_2d0;
  double *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  byte local_2a8;
  double *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  double local_288;
  byte local_280;
  double *local_278;
  undefined8 local_270;
  undefined8 local_268;
  double local_260;
  byte local_258;
  double *local_250;
  undefined8 local_248;
  undefined8 local_240;
  double local_238;
  byte local_230;
  double *local_228;
  undefined8 local_220;
  undefined8 local_218;
  double local_210;
  byte local_208;
  double *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  byte local_1e0;
  double *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  byte local_1b8;
  double *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  float *local_168;
  byte local_160;
  undefined1 local_110 [80];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  dVar4 = (double)param_1[8];
  dVar5 = (double)param_1[6];
  dVar23 = (double)param_1[2];
  dVar6 = (double)param_1[3];
  local_310 = param_1[9];
  local_198 = (undefined4)param_1[6];
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_190 = (undefined4)param_1[7];
  uStack_18c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_318 = &local_198;
  local_2f0 = param_3;
  FUN_146942900(&local_188);
  iVar15 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar15) {
    dVar7 = 0.0 / dVar6;
    dVar25 = dVar5 / dVar23;
    dVar25 = dVar25 * dVar25;
    dVar7 = SQRT(dVar7 * dVar7 + dVar25) * dVar4;
    dVar5 = dVar5 / dVar6;
    dVar23 = 0.0 / dVar23;
    dVar5 = dVar5 * dVar5;
    dVar23 = SQRT(dVar23 * dVar23 + dVar5) * dVar4;
    dVar4 = SQRT(dVar5 + dVar25) * dVar4;
    iVar12 = (int)param_2[1];
    uVar18 = 0;
    iVar13 = iVar12;
    do {
      uVar21 = (ulonglong)(~(uint)uVar18 + iVar15);
      if (*(char *)(local_2f0 + 0x18) == '\0') {
        uVar21 = uVar18;
      }
      if (0 < iVar13) {
        iVar20 = (int)uVar21;
        local_308 = iVar20 * 4 + 4;
        local_304 = iVar20 * 4 + -4;
        iVar15 = 4;
        lVar14 = (longlong)iVar20;
        lVar22 = 0;
        local_2e8 = uVar18;
        local_2e0 = lVar14;
        do {
          lVar16 = (int)param_1[1] * lVar14 + *param_1;
          if ((*(byte *)(lVar22 + lVar16) & 1) == 0) {
            iVar8 = (int)lVar22;
            pfVar1 = (float *)(*param_2 + (longlong)((iVar8 + iVar13 * iVar20) * 4) * 4);
            local_178 = (double)iVar8 + 0.5;
            local_180 = ((double)(int)(uint)uVar18 + 0.5) / (double)param_1[3] - (double)param_1[5];
            local_188 = local_178 / (double)param_1[2] - (double)param_1[4];
            local_160 = *(byte *)(lVar16 + lVar22) >> 1 & 1;
            fVar3 = *pfVar1;
            fVar24 = pfVar1[1];
            fVar9 = fVar24;
            if (fVar24 <= fVar3) {
              fVar9 = fVar3;
            }
            fVar26 = pfVar1[2];
            if (fVar9 <= pfVar1[2]) {
              fVar26 = fVar9;
            }
            if (fVar3 <= fVar24) {
              fVar24 = fVar3;
            }
            if (fVar26 <= fVar24) {
              fVar26 = fVar24;
            }
            local_170 = (double)iVar20 + 0.5;
            local_168 = pfVar1;
            if (iVar8 == 0) {
              local_2f8 = 0;
LAB_146942443:
              if (iVar20 < 1) {
                puVar19 = (undefined4 *)0x0;
              }
              else {
                puVar19 = (undefined4 *)
                          ((longlong)(iVar12 * local_304 + iVar15 + -4) * 4 + *param_2);
                local_1e0 = local_160;
                local_1d8 = &local_188;
                local_1d0 = 0;
                local_1c8 = 0xbff0000000000000;
                local_1e8 = dVar23;
                cVar10 = FUN_142864c2e(&local_1e8,fVar26,pfVar1,puVar19);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_14694240d;
                iVar12 = (int)param_2[1];
              }
              if (iVar8 < iVar12 + -1) {
                lVar14 = (longlong)((iVar12 * iVar20 + iVar8) * 4 + 4) * 4 + *param_2;
                local_208 = local_160;
                local_200 = &local_188;
                local_1f8 = 0x3ff0000000000000;
                local_1f0 = 0;
                local_210 = dVar7;
                cVar10 = FUN_142864c2e(&local_210,fVar26,pfVar1,lVar14);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_14694240d;
                iVar12 = (int)param_2[1];
              }
              else {
                lVar14 = 0;
              }
              if (iVar20 < *(int *)((longlong)param_2 + 0xc) + -1) {
                local_300 = (undefined4 *)
                            ((longlong)(iVar12 * local_308 + iVar15 + -4) * 4 + *param_2);
                local_230 = local_160;
                local_228 = &local_188;
                local_220 = 0;
                local_218 = 0x3ff0000000000000;
                local_238 = dVar23;
                cVar10 = FUN_142864c2e(&local_238,fVar26,pfVar1);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_14694240d;
                iVar12 = (int)param_2[1];
              }
              else {
                local_300 = (undefined4 *)0x0;
              }
              if (0 < iVar20 && iVar8 != 0) {
                local_310 = (longlong)(iVar12 * local_304 + iVar15 + -8) * 4 + *param_2;
                local_258 = local_160;
                local_250 = &local_188;
                local_248 = 0xbff0000000000000;
                local_240 = 0xbff0000000000000;
                local_318 = puVar19;
                local_260 = dVar4;
                cVar10 = FUN_142864d56(&local_260,fVar26,pfVar1,local_2f8);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_14694240d;
                iVar12 = (int)param_2[1];
              }
              if ((0 < iVar20) && (iVar8 < iVar12 + -1)) {
                local_310 = (longlong)(iVar12 * local_304 + iVar15) * 4 + *param_2;
                local_280 = local_160;
                local_278 = &local_188;
                local_270 = 0x3ff0000000000000;
                local_268 = 0xbff0000000000000;
                local_318 = puVar19;
                local_288 = dVar4;
                cVar10 = FUN_142864d56(&local_288,fVar26,pfVar1,lVar14);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_14694240d;
              }
              if ((iVar8 != 0) && (iVar20 < *(int *)((longlong)param_2 + 0xc) + -1)) {
                local_310 = (longlong)((int)param_2[1] * local_308 + iVar15 + -8) * 4 + *param_2;
                local_2a8 = local_160;
                local_2a0 = &local_188;
                local_298 = 0xbff0000000000000;
                local_290 = 0x3ff0000000000000;
                local_318 = local_300;
                local_2b0 = dVar4;
                cVar10 = FUN_142864d56(&local_2b0,fVar26,pfVar1,local_2f8);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_14694240d;
              }
              if ((iVar8 < (int)param_2[1] + -1) &&
                 (iVar20 < *(int *)((longlong)param_2 + 0xc) + -1)) {
                local_310 = (longlong)((int)param_2[1] * local_308 + iVar15) * 4 + *param_2;
                local_2d0 = local_160;
                local_2c8 = &local_188;
                local_2c0 = 0x3ff0000000000000;
                local_2b8 = 0x3ff0000000000000;
                local_318 = local_300;
                local_2d8 = dVar4;
                bVar11 = FUN_142864d56(&local_2d8,fVar26,pfVar1,lVar14);
              }
              else {
                bVar11 = 0;
              }
            }
            else {
              local_2f8 = *param_2 + (longlong)((iVar13 * iVar20 + iVar8) * 4 + -4) * 4;
              local_1b0 = &local_188;
              local_1a8 = 0xbff0000000000000;
              local_1a0 = 0;
              local_1c0 = dVar7;
              local_1b8 = local_160;
              cVar10 = FUN_142864c2e(&local_1c0,fVar26,pfVar1);
              bVar11 = 1;
              if (cVar10 == '\0') {
                iVar12 = (int)param_2[1];
                goto LAB_146942443;
              }
            }
LAB_14694240d:
            pbVar2 = (byte *)(lVar22 + (int)param_1[1] * local_2e0 + *param_1);
            *pbVar2 = *pbVar2 | bVar11;
            iVar12 = (int)param_2[1];
            lVar14 = local_2e0;
          }
          iVar15 = iVar15 + 4;
          lVar22 = lVar22 + 1;
          iVar13 = iVar12;
        } while ((int)lVar22 < iVar12);
        iVar15 = *(int *)((longlong)param_2 + 0xc);
        uVar18 = local_2e8;
      }
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
    } while ((int)uVar17 < iVar15);
  }
  FUN_14694bd88(local_110);
  if ((local_c0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146942900 FUN_146942900 body=193 status=ok
// SIG undefined FUN_146942900(void)

undefined8 *
FUN_146942900(undefined8 *param_1,undefined8 *param_2,longlong param_3,double *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  double dVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146951366(param_1 + 6,param_3);
  uVar2 = param_2[1];
  param_1[0x12] = *param_2;
  param_1[0x13] = uVar2;
  uVar2 = param_5[1];
  param_1[0x14] = *param_5;
  param_1[0x15] = uVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_6;
  dVar1 = param_4[1];
  param_1[0x16] = 1.0 / *param_4;
  param_1[0x17] = 1.0 / dVar1;
  if (*(char *)(param_3 + 0x18) == '\x01') {
    param_1[0x17] = -(1.0 / dVar1);
  }
  return param_1;
}



// FUNCTION 1469429c2 FUN_1469429c2 body=2012 status=ok
// SIG undefined FUN_1469429c2(void)

void FUN_1469429c2(longlong *param_1,longlong *param_2,longlong param_3)

{
  float *pfVar1;
  byte *pbVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  float fVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined1 auStack_338 [32];
  undefined4 *local_318;
  longlong local_310;
  int local_308;
  int local_304;
  undefined4 *local_300;
  longlong local_2f8;
  longlong local_2f0;
  ulonglong local_2e8;
  longlong local_2e0;
  double local_2d8;
  byte local_2d0;
  double *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  byte local_2a8;
  double *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  double local_288;
  byte local_280;
  double *local_278;
  undefined8 local_270;
  undefined8 local_268;
  double local_260;
  byte local_258;
  double *local_250;
  undefined8 local_248;
  undefined8 local_240;
  double local_238;
  byte local_230;
  double *local_228;
  undefined8 local_220;
  undefined8 local_218;
  double local_210;
  byte local_208;
  double *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  byte local_1e0;
  double *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  byte local_1b8;
  double *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  float *local_168;
  byte local_160;
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [80];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  dVar4 = (double)param_1[8];
  dVar5 = (double)param_1[6];
  dVar23 = (double)param_1[2];
  dVar6 = (double)param_1[3];
  local_310 = param_1[9];
  local_198 = (undefined4)param_1[6];
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_190 = (undefined4)param_1[7];
  uStack_18c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_318 = &local_198;
  local_2f0 = param_3;
  FUN_1469431a0(&local_188);
  iVar15 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar15) {
    dVar7 = 0.0 / dVar6;
    dVar25 = dVar5 / dVar23;
    dVar25 = dVar25 * dVar25;
    dVar7 = SQRT(dVar7 * dVar7 + dVar25) * dVar4;
    dVar5 = dVar5 / dVar6;
    dVar23 = 0.0 / dVar23;
    dVar5 = dVar5 * dVar5;
    dVar23 = SQRT(dVar23 * dVar23 + dVar5) * dVar4;
    dVar4 = SQRT(dVar5 + dVar25) * dVar4;
    iVar12 = (int)param_2[1];
    uVar18 = 0;
    iVar13 = iVar12;
    do {
      uVar21 = (ulonglong)(~(uint)uVar18 + iVar15);
      if (*(char *)(local_2f0 + 0x18) == '\0') {
        uVar21 = uVar18;
      }
      if (0 < iVar13) {
        iVar20 = (int)uVar21;
        local_308 = iVar20 * 4 + 4;
        local_304 = iVar20 * 4 + -4;
        iVar15 = 4;
        lVar14 = (longlong)iVar20;
        lVar22 = 0;
        local_2e8 = uVar18;
        local_2e0 = lVar14;
        do {
          lVar16 = (int)param_1[1] * lVar14 + *param_1;
          if ((*(byte *)(lVar22 + lVar16) & 1) == 0) {
            iVar8 = (int)lVar22;
            pfVar1 = (float *)(*param_2 + (longlong)((iVar8 + iVar13 * iVar20) * 4) * 4);
            local_178 = (double)iVar8 + 0.5;
            local_180 = ((double)(int)(uint)uVar18 + 0.5) / (double)param_1[3] - (double)param_1[5];
            local_188 = local_178 / (double)param_1[2] - (double)param_1[4];
            local_160 = *(byte *)(lVar16 + lVar22) >> 1 & 1;
            fVar3 = *pfVar1;
            fVar24 = pfVar1[1];
            fVar9 = fVar24;
            if (fVar24 <= fVar3) {
              fVar9 = fVar3;
            }
            fVar26 = pfVar1[2];
            if (fVar9 <= pfVar1[2]) {
              fVar26 = fVar9;
            }
            if (fVar3 <= fVar24) {
              fVar24 = fVar3;
            }
            if (fVar26 <= fVar24) {
              fVar26 = fVar24;
            }
            local_170 = (double)iVar20 + 0.5;
            local_168 = pfVar1;
            if (iVar8 == 0) {
              local_2f8 = 0;
LAB_146942cc9:
              if (iVar20 < 1) {
                puVar19 = (undefined4 *)0x0;
              }
              else {
                puVar19 = (undefined4 *)
                          ((longlong)(iVar12 * local_304 + iVar15 + -4) * 4 + *param_2);
                local_1e0 = local_160;
                local_1d8 = &local_188;
                local_1d0 = 0;
                local_1c8 = 0xbff0000000000000;
                local_1e8 = dVar23;
                cVar10 = FUN_142865117(&local_1e8,fVar26,pfVar1,puVar19);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_146942c93;
                iVar12 = (int)param_2[1];
              }
              if (iVar8 < iVar12 + -1) {
                lVar14 = (longlong)((iVar12 * iVar20 + iVar8) * 4 + 4) * 4 + *param_2;
                local_208 = local_160;
                local_200 = &local_188;
                local_1f8 = 0x3ff0000000000000;
                local_1f0 = 0;
                local_210 = dVar7;
                cVar10 = FUN_142865117(&local_210,fVar26,pfVar1,lVar14);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_146942c93;
                iVar12 = (int)param_2[1];
              }
              else {
                lVar14 = 0;
              }
              if (iVar20 < *(int *)((longlong)param_2 + 0xc) + -1) {
                local_300 = (undefined4 *)
                            ((longlong)(iVar12 * local_308 + iVar15 + -4) * 4 + *param_2);
                local_230 = local_160;
                local_228 = &local_188;
                local_220 = 0;
                local_218 = 0x3ff0000000000000;
                local_238 = dVar23;
                cVar10 = FUN_142865117(&local_238,fVar26,pfVar1);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_146942c93;
                iVar12 = (int)param_2[1];
              }
              else {
                local_300 = (undefined4 *)0x0;
              }
              if (0 < iVar20 && iVar8 != 0) {
                local_310 = (longlong)(iVar12 * local_304 + iVar15 + -8) * 4 + *param_2;
                local_258 = local_160;
                local_250 = &local_188;
                local_248 = 0xbff0000000000000;
                local_240 = 0xbff0000000000000;
                local_318 = puVar19;
                local_260 = dVar4;
                cVar10 = FUN_14286523f(&local_260,fVar26,pfVar1,local_2f8);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_146942c93;
                iVar12 = (int)param_2[1];
              }
              if ((0 < iVar20) && (iVar8 < iVar12 + -1)) {
                local_310 = (longlong)(iVar12 * local_304 + iVar15) * 4 + *param_2;
                local_280 = local_160;
                local_278 = &local_188;
                local_270 = 0x3ff0000000000000;
                local_268 = 0xbff0000000000000;
                local_318 = puVar19;
                local_288 = dVar4;
                cVar10 = FUN_14286523f(&local_288,fVar26,pfVar1,lVar14);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_146942c93;
              }
              if ((iVar8 != 0) && (iVar20 < *(int *)((longlong)param_2 + 0xc) + -1)) {
                local_310 = (longlong)((int)param_2[1] * local_308 + iVar15 + -8) * 4 + *param_2;
                local_2a8 = local_160;
                local_2a0 = &local_188;
                local_298 = 0xbff0000000000000;
                local_290 = 0x3ff0000000000000;
                local_318 = local_300;
                local_2b0 = dVar4;
                cVar10 = FUN_14286523f(&local_2b0,fVar26,pfVar1,local_2f8);
                bVar11 = 1;
                if (cVar10 != '\0') goto LAB_146942c93;
              }
              if ((iVar8 < (int)param_2[1] + -1) &&
                 (iVar20 < *(int *)((longlong)param_2 + 0xc) + -1)) {
                local_310 = (longlong)((int)param_2[1] * local_308 + iVar15) * 4 + *param_2;
                local_2d0 = local_160;
                local_2c8 = &local_188;
                local_2c0 = 0x3ff0000000000000;
                local_2b8 = 0x3ff0000000000000;
                local_318 = local_300;
                local_2d8 = dVar4;
                bVar11 = FUN_14286523f(&local_2d8,fVar26,pfVar1,lVar14);
              }
              else {
                bVar11 = 0;
              }
            }
            else {
              local_2f8 = *param_2 + (longlong)((iVar13 * iVar20 + iVar8) * 4 + -4) * 4;
              local_1b0 = &local_188;
              local_1a8 = 0xbff0000000000000;
              local_1a0 = 0;
              local_1c0 = dVar7;
              local_1b8 = local_160;
              cVar10 = FUN_142865117(&local_1c0,fVar26,pfVar1);
              bVar11 = 1;
              if (cVar10 == '\0') {
                iVar12 = (int)param_2[1];
                goto LAB_146942cc9;
              }
            }
LAB_146942c93:
            pbVar2 = (byte *)(lVar22 + (int)param_1[1] * local_2e0 + *param_1);
            *pbVar2 = *pbVar2 | bVar11;
            iVar12 = (int)param_2[1];
            lVar14 = local_2e0;
          }
          iVar15 = iVar15 + 4;
          lVar22 = lVar22 + 1;
          iVar13 = iVar12;
        } while ((int)lVar22 < iVar12);
        iVar15 = *(int *)((longlong)param_2 + 0xc);
        uVar18 = local_2e8;
      }
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
    } while ((int)uVar17 < iVar15);
  }
  FUN_14694bd88(local_110);
  FUN_14694bddc(local_128);
  FUN_14627a26c(local_140);
  if ((local_c0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469431a0 FUN_1469431a0 body=193 status=ok
// SIG undefined FUN_1469431a0(void)

undefined8 *
FUN_1469431a0(undefined8 *param_1,undefined8 *param_2,longlong param_3,double *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  double dVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14695180a(param_1 + 6,param_3);
  uVar2 = param_2[1];
  param_1[0x12] = *param_2;
  param_1[0x13] = uVar2;
  uVar2 = param_5[1];
  param_1[0x14] = *param_5;
  param_1[0x15] = uVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_6;
  dVar1 = param_4[1];
  param_1[0x16] = 1.0 / *param_4;
  param_1[0x17] = 1.0 / dVar1;
  if (*(char *)(param_3 + 0x18) == '\x01') {
    param_1[0x17] = -(1.0 / dVar1);
  }
  return param_1;
}



// FUNCTION 146943262 FUN_146943262 body=97 status=ok
// SIG undefined FUN_146943262(void)

void FUN_146943262(longlong *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = *(int *)((longlong)param_2 + 0xc) * (int)param_2[1];
  if (0 < iVar4) {
    lVar2 = *param_1;
    pfVar3 = (float *)(*param_2 + 8);
    lVar5 = 0;
    do {
      if ((*(byte *)(lVar2 + lVar5) & 1) != 0) {
        fVar1 = pfVar3[-2];
        fVar7 = pfVar3[-1];
        fVar8 = fVar7;
        if (fVar7 <= fVar1) {
          fVar8 = fVar1;
        }
        fVar6 = *pfVar3;
        if (fVar8 <= *pfVar3) {
          fVar6 = fVar8;
        }
        if (fVar1 <= fVar7) {
          fVar7 = fVar1;
        }
        if (fVar6 <= fVar7) {
          fVar6 = fVar7;
        }
        pfVar3[-2] = fVar6;
        pfVar3[-1] = fVar6;
        *pfVar3 = fVar6;
      }
      lVar5 = lVar5 + 1;
      pfVar3 = pfVar3 + 4;
    } while (iVar4 != (int)lVar5);
  }
  return;
}



// FUNCTION 1469432c3 FUN_1469432c3 body=4189 status=ok
// SIG undefined FUN_1469432c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469432c3(undefined8 *param_1,longlong *param_2,double *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  longlong *plVar11;
  float *pfVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  float *pfVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  float *pfVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  double dVar27;
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  double dVar31;
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar34 [16];
  uint uVar36;
  undefined1 auVar35 [16];
  uint uVar37;
  undefined1 in_XMM3 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar42;
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auStack_228 [40];
  longlong local_200;
  longlong *local_1f8;
  longlong local_1f0;
  float *local_1e8;
  double local_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  int local_1b4;
  int local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int local_170 [6];
  double local_158 [4];
  double local_138 [4];
  undefined1 local_118 [16];
  longlong local_108;
  ulonglong local_f0;
  
  auVar35 = _DAT_149931e80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1a8 = (undefined1  [16])0x0;
  pfVar12 = (float *)*param_1;
  local_200 = (longlong)*(int *)(param_1 + 1);
  iVar13 = *(int *)((longlong)param_1 + 0xc);
  pfVar22 = pfVar12;
  if ((char)param_2[3] == '\x01') {
    pfVar22 = pfVar12 + ((longlong)iVar13 + -1) * local_200;
    local_200 = -local_200;
  }
  uVar24 = *(int *)(param_1 + 1) * iVar13;
  if (0 < (int)uVar24) {
    pfVar17 = pfVar12 + 1;
    if (pfVar12 + 1 < pfVar12 + uVar24) {
      pfVar17 = pfVar12 + uVar24;
    }
    uVar14 = ~(ulonglong)pfVar12 + (longlong)pfVar17;
    auVar32._8_4_ = (int)uVar14;
    auVar32._0_8_ = uVar14;
    auVar32._12_4_ = (int)(uVar14 >> 0x20);
    auVar28._0_8_ = uVar14 >> 2;
    auVar28._8_8_ = auVar32._8_8_ >> 2;
    uVar18 = 0;
    auVar32 = pmovsxbq(in_XMM1,0x302);
    in_XMM2 = pmovsxbq(in_XMM2,0x100);
    auVar28 = auVar28 | _DAT_149931e80;
    do {
      lVar23 = auVar28._0_8_;
      if ((bool)(~(lVar23 < (longlong)(uVar18 ^ auVar35._0_8_)) & 1)) {
        pfVar12[uVar18] = -1e+24;
      }
      auVar41._8_4_ = (int)uVar18;
      auVar41._0_8_ = uVar18;
      auVar41._12_4_ = (int)(uVar18 >> 0x20);
      if ((longlong)((auVar41._8_8_ | in_XMM2._8_8_) ^ auVar35._8_8_) <= auVar28._8_8_) {
        pfVar12[uVar18 + 1] = -1e+24;
      }
      if ((longlong)((uVar18 | auVar32._0_8_) ^ auVar35._0_8_) <= lVar23) {
        pfVar12[uVar18 + 2] = -1e+24;
        pfVar12[uVar18 + 3] = -1e+24;
      }
      uVar18 = uVar18 + 4;
    } while (((uVar14 >> 2) + 4 & 0xfffffffffffffffc) != uVar18);
    iVar13 = *(int *)((longlong)param_1 + 0xc);
    in_XMM3 = auVar35;
  }
  auVar35 = _DAT_1499319a0;
  local_1e0 = 1.0 / param_3[1];
  dVar39 = *param_3;
  local_1d8._8_8_ = 0;
  local_1d8._0_8_ = param_3[4];
  local_1c8 = -param_3[4] * param_3[5];
  uStack_1c0 = 0x8000000000000000;
  local_118 = ZEXT816(0);
  local_108 = 0;
  local_1f8 = param_2;
  local_1e8 = pfVar22;
  if (iVar13 < 1) {
    uVar14 = (ulonglong)*(uint *)(param_1 + 1);
  }
  else {
    plVar11 = (longlong *)param_2[1];
    lVar23 = 0;
    uVar24 = DAT_1499319a0._4_4_;
    uVar5 = DAT_1499319a0._8_4_;
    uVar6 = DAT_1499319a0._12_4_;
    do {
      local_1b0 = (int)lVar23;
      auVar40._0_8_ = ((double)local_1b0 + 0.5) / param_3[1] - param_3[3];
      auVar40._8_8_ = 0;
      plVar20 = (longlong *)*local_1f8;
      if (plVar20 != plVar11) {
        lVar15 = lVar23 * local_200;
        local_1f0 = lVar23;
        do {
          puVar26 = (undefined8 *)*plVar20;
          if (puVar26 != (undefined8 *)plVar20[1]) {
            do {
              in_XMM3._8_8_ = 0;
              in_XMM3._0_8_ = auVar40._0_8_;
              uVar10 = (**(code **)(*(longlong *)*puVar26 + 0x50))
                                 ((longlong *)*puVar26,local_138,local_170);
              if (0 < (int)uVar10) {
                uVar14 = 0;
                do {
                  dVar27 = local_138[uVar14];
                  in_XMM3._0_8_ = (param_3[2] + dVar27) * *param_3;
                  in_XMM3._8_8_ = 0;
                  auVar33._0_8_ = in_XMM3._0_8_ + -0.5;
                  auVar33._8_8_ = 0;
                  auVar32 = roundsd(auVar33,auVar33,9);
                  dVar30 = auVar32._0_8_ + 0.5;
                  dVar44 = dVar30 + 1.0;
                  if ((0.0 < dVar44) &&
                     (in_XMM2._0_8_ = (double)*(int *)(param_1 + 1), in_XMM2._8_8_ = 0,
                     dVar30 < in_XMM2._0_8_)) {
                    dVar38 = (double)local_170[uVar14] * (1.0 / dVar39);
                    auVar34._0_8_ = (dVar30 - in_XMM3._0_8_) * dVar38;
                    auVar34._8_8_ = auVar32._8_8_;
                    in_XMM2._4_12_ = auVar34._4_12_;
                    in_XMM2._0_4_ = (float)auVar34._0_8_;
                    fVar46 = (float)((dVar44 - in_XMM3._0_8_) * dVar38);
                    if ((in_XMM2._0_4_ == 0.0) && (!NAN(in_XMM2._0_4_))) {
                      if ((fVar46 == 0.0) && (!NAN(fVar46))) goto LAB_14694363e;
                      in_XMM2 = ZEXT416((uint)((float)(int)((uint)(0.0 < fVar46) -
                                                           (uint)(fVar46 < 0.0)) * -1e-06));
                    }
                    fVar47 = in_XMM2._0_4_;
                    if ((fVar46 == 0.0) && (!NAN(fVar46))) {
                      fVar46 = (float)(int)((uint)(0.0 < fVar47) - (uint)(fVar47 < 0.0)) * -1e-06;
                    }
                    uVar42 = auVar35._0_4_;
                    if (0.0 < dVar30) {
                      uVar36 = in_XMM2._12_4_;
                      in_XMM3._0_4_ = (float)((uint)fVar47 & uVar42);
                      in_XMM3._4_4_ = in_XMM2._4_4_ & uVar24;
                      uVar37 = in_XMM2._8_4_;
                      in_XMM3._8_4_ = uVar37 & uVar5;
                      in_XMM3._12_4_ = uVar36 & uVar6;
                      local_1b4 = (int)dVar30;
                      fVar29 = pfVar22[lVar15 + local_1b4];
                      local_1b8 = in_XMM3._0_4_;
                      if ((float)((uint)fVar29 & uVar42) <= in_XMM3._0_4_) {
                        in_XMM2._0_8_ = (double)(in_XMM2._0_8_ ^ 0x8000000080000000);
                        in_XMM2._8_4_ = uVar37 ^ 0x80000000;
                        in_XMM2._12_4_ = uVar36 ^ 0x80000000;
                        if ((fVar29 == -fVar47) && (!NAN(fVar29) && !NAN(-fVar47))) {
                          pfVar22[lVar15 + local_1b4] = -1e+24;
                        }
                      }
                      else {
                        pfVar22[lVar15 + local_1b4] = fVar47;
                        local_1a8._8_8_ = auVar40._0_8_;
                        local_1a8._0_8_ = dVar27;
                        FUN_142865600(local_118,&local_1b8);
                      }
                    }
                    if (dVar44 < (double)*(int *)(param_1 + 1)) {
                      local_1b8 = (float)((uint)fVar46 & uVar42);
                      local_1b4 = (int)dVar44;
                      fVar47 = pfVar22[lVar15 + local_1b4];
                      in_XMM2 = ZEXT416((uint)fVar47 & uVar42);
                      if ((float)((uint)fVar47 & uVar42) <= local_1b8) {
                        if ((fVar47 == -fVar46) && (!NAN(fVar47) && !NAN(-fVar46))) {
                          pfVar22[lVar15 + local_1b4] = -1e+24;
                        }
                      }
                      else {
                        pfVar22[lVar15 + local_1b4] = fVar46;
                        local_1a8._8_8_ = auVar40._0_8_;
                        local_1a8._0_8_ = local_138[uVar14];
                        FUN_142865600(local_118,&local_1b8);
                      }
                    }
                  }
LAB_14694363e:
                  uVar14 = uVar14 + 1;
                } while (uVar10 != uVar14);
              }
              puVar26 = puVar26 + 1;
            } while (puVar26 != (undefined8 *)plVar20[1]);
            plVar11 = (longlong *)local_1f8[1];
          }
          plVar20 = plVar20 + 3;
        } while (plVar20 != plVar11);
        iVar13 = *(int *)((longlong)param_1 + 0xc);
        lVar23 = local_1f0;
      }
      auVar32 = _DAT_149931e80;
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar13);
    uVar14 = (ulonglong)*(uint *)(param_1 + 1);
    if (0 < iVar13) {
      lVar23 = 0;
      auVar35 = pmovsxbq(in_XMM2,0x302);
      auVar28 = pmovsxbq(in_XMM3,0x100);
      auVar41 = pmovsxbq(auVar40,0x404);
      uVar18 = (ulonglong)*(uint *)(param_1 + 1);
      pfVar12 = pfVar22;
      do {
        if (0 < (int)uVar18) {
          uVar19 = 3;
          uVar25 = 0;
          pfVar17 = pfVar12;
LAB_146943859:
          if ((pfVar12[uVar25] == -1e+24) && (!NAN(pfVar12[uVar25]))) goto code_r0x000146943867;
          bVar7 = 0.0 < pfVar12[uVar25];
          if ((uVar25 != 0) && (0.0 < pfVar12[uVar25])) {
            lVar15 = uVar25 - 1;
            auVar43._8_4_ = (int)lVar15;
            auVar43._0_8_ = lVar15;
            auVar43._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
            uVar14 = 0;
            auVar45 = auVar28;
            auVar48 = auVar35;
            do {
              lVar15 = SUB168(auVar43 ^ auVar32,0);
              if ((bool)(~(lVar15 < SUB168(auVar45 ^ auVar32,0)) & 1)) {
                pfVar12[uVar14] = 1e+24;
              }
              if (SUB168(auVar45 ^ auVar32,8) <= SUB168(auVar43 ^ auVar32,8)) {
                pfVar12[uVar14 + 1] = 1e+24;
              }
              if ((longlong)(auVar48._0_8_ ^ auVar32._0_8_) <= lVar15) {
                pfVar12[uVar14 + 2] = 1e+24;
                pfVar12[uVar14 + 3] = 1e+24;
              }
              uVar14 = uVar14 + 4;
              lVar15 = auVar45._8_8_;
              auVar45._0_8_ = auVar45._0_8_ + auVar41._0_8_;
              auVar45._8_8_ = lVar15 + auVar41._8_8_;
              lVar15 = auVar48._8_8_;
              auVar48._0_8_ = auVar48._0_8_ + auVar41._0_8_;
              auVar48._8_8_ = lVar15 + auVar41._8_8_;
            } while ((uVar19 & 0xfffffffffffffffc) != uVar14);
            uVar14 = (ulonglong)*(uint *)(param_1 + 1);
            pfVar22 = local_1e8;
          }
          uVar18 = uVar14;
          if ((int)uVar25 < (int)uVar14) {
            do {
              fVar46 = *pfVar17;
              if ((fVar46 != -1e+24) || (NAN(fVar46))) {
                bVar7 = 0.0 < fVar46;
              }
              else if (bVar7) {
                *pfVar17 = 1e+24;
                uVar14 = (ulonglong)*(uint *)(param_1 + 1);
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              uVar25 = uVar25 + 1;
              pfVar17 = pfVar17 + 1;
              uVar18 = uVar14;
            } while ((longlong)uVar25 < (longlong)(int)uVar14);
          }
        }
LAB_146943879:
        lVar23 = lVar23 + 1;
        pfVar12 = pfVar12 + local_200;
      } while (lVar23 < *(int *)((longlong)param_1 + 0xc));
    }
  }
  if (0 < (int)uVar14) {
    plVar11 = (longlong *)local_1f8[1];
    lVar23 = 0;
    do {
      local_1b4 = (int)lVar23;
      dVar39 = ((double)local_1b4 + 0.5) / *param_3 - param_3[2];
      plVar20 = (longlong *)*local_1f8;
      lVar15 = lVar23;
      if (plVar20 != plVar11) {
        do {
          local_1f0 = lVar15;
          puVar26 = (undefined8 *)*plVar20;
          if (puVar26 != (undefined8 *)plVar20[1]) {
            do {
              uVar24 = (**(code **)(*(longlong *)*puVar26 + 0x58))
                                 ((longlong *)*puVar26,local_158,local_170 + 3,dVar39);
              if (0 < (int)uVar24) {
                uVar14 = 0;
                do {
                  dVar27 = local_158[uVar14];
                  dVar38 = (param_3[3] + dVar27) * param_3[1];
                  auVar35._0_8_ = dVar38 + -0.5;
                  auVar35._8_8_ = 0;
                  auVar35 = roundsd(ZEXT816(0),auVar35,9);
                  dVar44 = auVar35._0_8_ + 0.5;
                  dVar30 = dVar44 + 1.0;
                  if ((0.0 < dVar44) &&
                     (dVar31 = (double)*(int *)((longlong)param_1 + 0xc), dVar30 < dVar31)) {
                    fVar46 = (float)((dVar38 - dVar44) * (double)local_170[uVar14 + 3] * local_1e0);
                    fVar47 = (float)((dVar38 - dVar30) * (double)local_170[uVar14 + 3] * local_1e0);
                    if ((fVar46 == 0.0) && (!NAN(fVar46))) {
                      if ((fVar47 == 0.0) && (!NAN(fVar47))) goto LAB_146943b0a;
                      fVar46 = (float)(int)((uint)(0.0 < fVar47) - (uint)(fVar47 < 0.0)) * -1e-06;
                    }
                    if ((fVar47 == 0.0) && (!NAN(fVar47))) {
                      fVar47 = (float)(int)((uint)(0.0 < fVar46) - (uint)(fVar46 < 0.0)) * -1e-06;
                    }
                    local_1b8 = ABS(fVar46);
                    local_1b0 = (int)dVar44;
                    if (local_1b8 < ABS(pfVar22[lVar23 + local_1b0 * local_200])) {
                      pfVar22[lVar23 + local_1b0 * local_200] = fVar46;
                      local_1a8._8_8_ = dVar27;
                      local_1a8._0_8_ = dVar39;
                      FUN_142865600(local_118,&local_1b8);
                      dVar31 = (double)*(int *)((longlong)param_1 + 0xc);
                    }
                    if (dVar30 < dVar31) {
                      local_1b8 = ABS(fVar47);
                      local_1b0 = (int)dVar30;
                      if (local_1b8 < ABS(pfVar22[lVar23 + local_1b0 * local_200])) {
                        pfVar22[lVar23 + local_1b0 * local_200] = fVar47;
                        local_1a8._8_8_ = local_158[uVar14];
                        local_1a8._0_8_ = dVar39;
                        FUN_142865600(local_118,&local_1b8);
                      }
                    }
                  }
LAB_146943b0a:
                  uVar14 = uVar14 + 1;
                } while (uVar24 != uVar14);
              }
              puVar26 = puVar26 + 1;
            } while (puVar26 != (undefined8 *)plVar20[1]);
            plVar11 = (longlong *)local_1f8[1];
          }
          plVar20 = plVar20 + 3;
          lVar15 = local_1f0;
        } while (plVar20 != plVar11);
        uVar14 = (ulonglong)*(uint *)(param_1 + 1);
        pfVar22 = local_1e8;
        lVar23 = local_1f0;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)uVar14);
  }
  if (local_118._0_8_ != local_118._8_8_) {
    dVar27 = (double)((ulonglong)((local_1c8 + 1.0) * (1.0 / (double)local_1d8._0_8_)) &
                     DAT_149931180);
    dVar39 = (double)((ulonglong)((local_1c8 + 0.0) * (1.0 / (double)local_1d8._0_8_)) &
                     DAT_149931180);
    if (dVar27 <= dVar39) {
      dVar27 = dVar39;
    }
    fVar46 = (float)dVar27;
    do {
      iVar13 = *(int *)(*(undefined1 (*) [16])local_118._0_8_ + 4);
      iVar3 = *(int *)(*(undefined1 (*) [16])local_118._0_8_ + 8);
      uVar4 = *(undefined4 *)(*(undefined1 (*) [16])local_118._0_8_ + 0xc);
      dVar39 = *(double *)*(undefined1 (*) [16])(local_118._0_8_ + 0x10);
      dVar27 = *(double *)(*(undefined1 (*) [16])(local_118._0_8_ + 0x10) + 8);
      if (0x20 < (longlong)(local_118._8_8_ - local_118._0_8_)) {
        fVar47 = *(float *)*(undefined1 (*) [16])(local_118._8_8_ + -0x20);
        uStack_188 = (undefined4)
                     ((ulonglong)*(undefined8 *)*(undefined1 (*) [16])(local_118._8_8_ + -0x10) >>
                     0x20);
        uStack_184 = (undefined4)
                     *(undefined8 *)(*(undefined1 (*) [16])(local_118._8_8_ + -0x10) + 8);
        uStack_180 = (undefined4)
                     ((ulonglong)
                      *(undefined8 *)(*(undefined1 (*) [16])(local_118._8_8_ + -0x10) + 8) >> 0x20);
        local_198 = *(undefined8 *)(*(undefined1 (*) [16])(local_118._8_8_ + -0x20) + 4);
        uVar8 = *(undefined8 *)(*(undefined1 (*) [16])(local_118._8_8_ + -0x20) + 0xc);
        uStack_18c = (undefined4)((ulonglong)uVar8 >> 0x20);
        auVar35 = *(undefined1 (*) [16])(local_118._0_8_ + 0x10);
        *(undefined1 (*) [16])(local_118._8_8_ + -0x20) = *(undefined1 (*) [16])local_118._0_8_;
        *(undefined1 (*) [16])(local_118._8_8_ + -0x10) = auVar35;
        uVar18 = local_118._8_8_ + (-0x20 - local_118._0_8_);
        uVar14 = ((longlong)uVar18 >> 5) - 1;
        uVar19 = (longlong)uVar14 >> 1;
        if ((longlong)uVar19 < 1) {
          uVar25 = 0;
        }
        else {
          uVar21 = 0;
          do {
            uVar2 = uVar21 * 2 + 2;
            uVar25 = uVar21 * 2 + 1;
            if (*(float *)*(undefined1 (*) [16])(local_118._0_8_ + uVar2 * 2 * 0x10) <
                *(float *)*(undefined1 (*) [16])(local_118._0_8_ + uVar25 * 2 * 0x10) ||
                *(float *)*(undefined1 (*) [16])(local_118._0_8_ + uVar2 * 2 * 0x10) ==
                *(float *)*(undefined1 (*) [16])(local_118._0_8_ + uVar25 * 2 * 0x10)) {
              uVar25 = uVar2;
            }
            auVar35 = *(undefined1 (*) [16])(local_118._0_8_ + uVar25 * 2 * 0x10);
            *(undefined1 (*) [16])(local_118._0_8_ + (uVar21 * 2 + 1) * 0x10) =
                 *(undefined1 (*) [16])(local_118._0_8_ + (uVar25 * 2 + 1) * 0x10);
            *(undefined1 (*) [16])(local_118._0_8_ + uVar21 * 2 * 0x10) = auVar35;
            uVar21 = uVar25;
          } while ((longlong)uVar25 < (longlong)uVar19);
        }
        if (((uVar18 & 0x20) == 0) && (uVar25 == uVar19)) {
          auVar35 = *(undefined1 (*) [16])(local_118._0_8_ + uVar14 * 2 * 0x10);
          *(undefined1 (*) [16])(local_118._0_8_ + (uVar19 * 2 + 1) * 0x10) =
               *(undefined1 (*) [16])(local_118._0_8_ + (uVar14 * 2 + 1) * 0x10);
          *(undefined1 (*) [16])(local_118._0_8_ + uVar19 * 2 * 0x10) = auVar35;
          uVar25 = uVar14;
        }
        if (0 < (longlong)uVar25) {
          do {
            uVar14 = uVar25 - 1;
            uVar18 = uVar14 >> 1;
            if (*(float *)*(undefined1 (*) [16])(local_118._0_8_ + uVar18 * 2 * 0x10) <= fVar47)
            goto LAB_146943e3c;
            auVar35 = *(undefined1 (*) [16])(local_118._0_8_ + uVar18 * 2 * 0x10);
            *(undefined1 (*) [16])(local_118._0_8_ + (uVar25 * 2 + 1) * 0x10) =
                 ((undefined1 (*) [16])(local_118._0_8_ + uVar18 * 2 * 0x10))[1];
            *(undefined1 (*) [16])(local_118._0_8_ + uVar25 * 2 * 0x10) = auVar35;
            uVar25 = uVar18;
          } while (1 < uVar14);
          uVar25 = 0;
        }
LAB_146943e3c:
        *(float *)*(undefined1 (*) [16])(local_118._0_8_ + uVar25 * 2 * 0x10) = fVar47;
        *(undefined8 *)(*(undefined1 (*) [16])(local_118._0_8_ + uVar25 * 2 * 0x10) + 4) = local_198
        ;
        *(undefined8 *)
         ((longlong)(*(undefined1 (*) [16])(local_118._0_8_ + uVar25 * 2 * 0x10) + 4) + 8) = uVar8;
        auVar9._4_4_ = uStack_188;
        auVar9._0_4_ = uStack_18c;
        auVar9._8_4_ = uStack_184;
        auVar9._12_4_ = uStack_180;
        *(undefined1 (*) [16])(local_118._0_8_ + (uVar25 * 2 + 1) * 0x10) = auVar9;
        pfVar22 = local_1e8;
      }
      lVar23 = (longlong)iVar3;
      local_118._8_8_ = (undefined1 (*) [16])(local_118._8_8_ + -0x20);
      uStack_188 = SUB84(dVar39,0);
      uStack_184 = (undefined4)((ulonglong)dVar39 >> 0x20);
      uStack_180 = SUB84(dVar27,0);
      uStack_17c = (undefined4)((ulonglong)dVar27 >> 0x20);
      uVar24 = iVar13 - 1;
      local_198 = CONCAT44(uVar24,(undefined4)local_198);
      uStack_190 = iVar3;
      uStack_18c = uVar4;
      if (0 < iVar13) {
        fVar47 = pfVar22[local_200 * lVar23 + (ulonglong)uVar24];
        if ((ABS(fVar47) == 1e+24) && (!NAN(ABS(fVar47)))) {
          dVar30 = (((double)iVar3 + 0.5) / param_3[1] - param_3[3]) - dVar27;
          dVar44 = (((double)(int)uVar24 + 0.5) / *param_3 - param_3[2]) - dVar39;
          fVar29 = (float)SQRT(dVar44 * dVar44 + dVar30 * dVar30);
          local_198 = CONCAT44(uVar24,fVar29);
          pfVar22[local_200 * lVar23 + (ulonglong)uVar24] =
               (float)(int)((uint)(0.0 < fVar47) - (uint)(fVar47 < 0.0)) * fVar29;
          if (fVar29 < fVar46) {
            FUN_142865600(local_118,&local_198);
          }
        }
      }
      lVar15 = (longlong)iVar13;
      iVar1 = iVar13 + 1;
      local_198 = CONCAT44(iVar1,(undefined4)local_198);
      if (iVar1 < *(int *)(param_1 + 1)) {
        fVar47 = pfVar22[local_200 * lVar23 + lVar15 + 1];
        if ((ABS(fVar47) == 1e+24) && (!NAN(ABS(fVar47)))) {
          dVar30 = (((double)iVar3 + 0.5) / param_3[1] - param_3[3]) - dVar27;
          dVar44 = (((double)iVar1 + 0.5) / *param_3 - param_3[2]) - dVar39;
          fVar29 = (float)SQRT(dVar44 * dVar44 + dVar30 * dVar30);
          local_198 = CONCAT44(iVar1,fVar29);
          pfVar22[local_200 * lVar23 + lVar15 + 1] =
               (float)(int)((uint)(0.0 < fVar47) - (uint)(fVar47 < 0.0)) * fVar29;
          if (fVar29 < fVar46) {
            FUN_142865600(local_118,&local_198);
          }
        }
      }
      local_198 = CONCAT44(iVar13,(undefined4)local_198);
      uStack_190 = iVar3 - 1;
      if (0 < iVar3) {
        fVar47 = pfVar22[(ulonglong)uStack_190 * local_200 + lVar15];
        if ((ABS(fVar47) == 1e+24) && (!NAN(ABS(fVar47)))) {
          dVar30 = (((double)(int)uStack_190 + 0.5) / param_3[1] - param_3[3]) - dVar27;
          dVar44 = (((double)iVar13 + 0.5) / *param_3 - param_3[2]) - dVar39;
          fVar29 = (float)SQRT(dVar44 * dVar44 + dVar30 * dVar30);
          local_198 = CONCAT44(iVar13,fVar29);
          pfVar22[(ulonglong)uStack_190 * local_200 + lVar15] =
               (float)(int)((uint)(0.0 < fVar47) - (uint)(fVar47 < 0.0)) * fVar29;
          if (fVar29 < fVar46) {
            FUN_142865600(local_118,&local_198);
          }
        }
      }
      uStack_190 = (uint)(lVar23 + 1);
      if ((int)uStack_190 < *(int *)((longlong)param_1 + 0xc)) {
        lVar23 = (lVar23 + 1) * local_200;
        fVar47 = pfVar22[lVar23 + lVar15];
        if ((ABS(fVar47) == 1e+24) && (!NAN(ABS(fVar47)))) {
          dVar27 = (((double)(int)uStack_190 + 0.5) / param_3[1] - param_3[3]) - dVar27;
          dVar39 = (((double)iVar13 + 0.5) / *param_3 - param_3[2]) - dVar39;
          fVar29 = (float)SQRT(dVar39 * dVar39 + dVar27 * dVar27);
          local_198 = CONCAT44(local_198._4_4_,fVar29);
          pfVar22[lVar23 + lVar15] =
               (float)(int)((uint)(0.0 < fVar47) - (uint)(fVar47 < 0.0)) * fVar29;
          if (fVar29 < fVar46) {
            FUN_142865600(local_118,&local_198);
          }
        }
      }
    } while (local_118._0_8_ != local_118._8_8_);
    lVar23 = (longlong)*(int *)((longlong)param_1 + 0xc) * (longlong)*(int *)(param_1 + 1);
    if (0 < (int)lVar23) {
      pfVar12 = (float *)*param_1;
      pfVar22 = pfVar12 + lVar23;
      do {
        *pfVar12 = (float)(((double)*pfVar12 + param_3[5]) * param_3[4]);
        pfVar12 = pfVar12 + 1;
      } while (pfVar12 < pfVar22);
    }
  }
  if ((undefined1 (*) [16])local_118._0_8_ != (undefined1 (*) [16])0x0) {
    pauVar16 = (undefined1 (*) [16])local_118._0_8_;
    if ((0xfff < (ulonglong)(local_108 - local_118._0_8_)) &&
       (pauVar16 = *(undefined1 (**) [16])(*(undefined1 (*) [16])(local_118._0_8_ + -0x10) + 8),
       0x1f < (ulonglong)(local_118._0_8_ + (-8 - (longlong)pauVar16)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(pauVar16);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146943867:
  uVar25 = uVar25 + 1;
  uVar19 = uVar19 + 1;
  pfVar17 = pfVar17 + 1;
  if (uVar18 == uVar25) goto LAB_146943879;
  goto LAB_146943859;
}



// FUNCTION 146944322 FUN_146944322 body=422 status=ok
// SIG undefined FUN_146944322(void)

void FUN_146944322(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = (longlong *)*param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar8 != plVar4) {
    do {
      if ((longlong *)*plVar8 != (longlong *)plVar8[1]) {
        plVar4 = (longlong *)plVar8[1] + -1;
        plVar9 = (longlong *)*plVar8;
        do {
          plVar2 = (longlong *)*plVar9;
          uVar6 = *(uint *)(plVar2 + 1) & *(uint *)(*plVar4 + 8);
          if ((uVar6 & uVar6 - 1) == 0) {
            (**(code **)(*plVar2 + 0x20))(plVar2,&local_50,0);
            auVar10._0_8_ = ((double)param_1[5] + local_48) * (double)param_1[3] + -0.5;
            auVar10._8_8_ = 0;
            auVar10 = roundsd(auVar10,auVar10,9);
            iVar3 = (int)auVar10._0_8_;
            if ((char)param_2[3] == '\x01') {
              iVar3 = (*(int *)((longlong)param_1 + 0xc) - iVar3) + -2;
            }
            auVar11._0_8_ = ((double)param_1[4] + local_50) * (double)param_1[2] + -0.5;
            auVar11._8_8_ = 0;
            auVar10 = roundsd(auVar11,auVar11,9);
            iVar5 = (int)auVar10._0_8_;
            iVar7 = (int)param_1[1];
            if ((((iVar5 < iVar7) && (-2 < iVar3)) && (iVar3 < *(int *)((longlong)param_1 + 0xc)))
               && (-2 < iVar5)) {
              if ((-1 < iVar5) && (-1 < iVar3)) {
                pbVar1 = (byte *)(*param_1 + (longlong)(iVar7 * iVar3 + iVar5));
                *pbVar1 = *pbVar1 | 2;
                iVar7 = (int)param_1[1];
              }
              uVar6 = iVar5 + 1;
              if (((int)uVar6 < iVar7) && (-1 < iVar3)) {
                pbVar1 = (byte *)(*param_1 + (ulonglong)uVar6 + (ulonglong)(uint)(iVar7 * iVar3));
                *pbVar1 = *pbVar1 | 2;
              }
              iVar3 = iVar3 + 1;
              if ((-1 < iVar5) && (iVar3 < *(int *)((longlong)param_1 + 0xc))) {
                pbVar1 = (byte *)(*param_1 + (longlong)((int)param_1[1] * iVar3 + iVar5));
                *pbVar1 = *pbVar1 | 2;
              }
              if (((int)uVar6 < (int)param_1[1]) && (iVar3 < *(int *)((longlong)param_1 + 0xc))) {
                pbVar1 = (byte *)(*param_1 +
                                 (ulonglong)uVar6 + (ulonglong)(uint)((int)param_1[1] * iVar3));
                *pbVar1 = *pbVar1 | 2;
              }
            }
          }
          plVar2 = plVar9 + 1;
          plVar4 = plVar9;
          plVar9 = plVar2;
        } while (plVar2 != (longlong *)plVar8[1]);
        plVar4 = (longlong *)param_2[1];
      }
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469444c9 FUN_1469444c9 body=461 status=ok
// SIG undefined FUN_1469444c9(void)

void FUN_1469444c9(longlong *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_138 [40];
  longlong local_110;
  double *local_108;
  double local_100;
  double local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar1 = param_3[4];
  dVar2 = param_3[5];
  local_110 = param_2;
  FUN_146951ba0(local_f0);
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar4) {
    iVar5 = (int)param_1[1];
    uVar6 = 0;
    local_108 = param_3;
    do {
      uVar3 = ~uVar6 + iVar4;
      if (*(char *)(local_110 + 0x18) == '\0') {
        uVar3 = uVar6;
      }
      if (0 < iVar5) {
        iVar4 = 0;
        iVar7 = -1;
        do {
          iVar5 = iVar5 + iVar7;
          if ((uVar6 & 1) == 0) {
            iVar5 = iVar4;
          }
          local_f8 = ((double)(int)uVar6 + 0.5) / param_3[1] - param_3[3];
          local_100 = ((double)iVar5 + 0.5) / *param_3 - param_3[2];
          dVar8 = (double)FUN_146951c02(local_f0,&local_100);
          *(float *)(*param_1 + (longlong)(int)((int)param_1[1] * uVar3 + iVar5) * 4) =
               (float)((dVar8 + dVar2) * dVar1);
          iVar4 = iVar4 + 1;
          iVar5 = (int)param_1[1];
          iVar7 = iVar7 + -1;
          param_3 = local_108;
        } while (iVar4 < iVar5);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  FUN_146951dae(local_a8);
  FUN_146951e02(local_c0);
  FUN_14627a26c(local_d8);
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146944697 FUN_146944697 body=461 status=ok
// SIG undefined FUN_146944697(void)

void FUN_146944697(longlong *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_138 [40];
  longlong local_110;
  double *local_108;
  double local_100;
  double local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar1 = param_3[4];
  dVar2 = param_3[5];
  local_110 = param_2;
  FUN_14695180a(local_f0);
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar4) {
    iVar5 = (int)param_1[1];
    uVar6 = 0;
    local_108 = param_3;
    do {
      uVar3 = ~uVar6 + iVar4;
      if (*(char *)(local_110 + 0x18) == '\0') {
        uVar3 = uVar6;
      }
      if (0 < iVar5) {
        iVar4 = 0;
        iVar7 = -1;
        do {
          iVar5 = iVar5 + iVar7;
          if ((uVar6 & 1) == 0) {
            iVar5 = iVar4;
          }
          local_f8 = ((double)(int)uVar6 + 0.5) / param_3[1] - param_3[3];
          local_100 = ((double)iVar5 + 0.5) / *param_3 - param_3[2];
          dVar8 = (double)FUN_14695186c(local_f0,&local_100);
          *(float *)(*param_1 + (longlong)(int)((int)param_1[1] * uVar3 + iVar5) * 4) =
               (float)((dVar8 + dVar2) * dVar1);
          iVar4 = iVar4 + 1;
          iVar5 = (int)param_1[1];
          iVar7 = iVar7 + -1;
          param_3 = local_108;
        } while (iVar4 < iVar5);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  FUN_14694bd88(local_a8);
  FUN_14694bddc(local_c0);
  FUN_14627a26c(local_d8);
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146944865 FUN_146944865 body=83 status=ok
// SIG undefined FUN_146944865(void)

void FUN_146944865(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  if (*param_4 == '\x01') {
    FUN_1469448b8(param_1,param_2,param_3);
  }
  else {
    FUN_146944ae2(param_1,param_2,param_3);
  }
  FUN_14286582e(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1469448b8 FUN_1469448b8 body=553 status=ok
// SIG undefined FUN_1469448b8(void)

void FUN_1469448b8(longlong *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_158 [44];
  int local_12c;
  longlong local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = param_3[4];
  dVar2 = param_3[5];
  local_128 = param_2;
  FUN_146951e56(local_f0);
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar5) {
    iVar7 = (int)param_1[1];
    uVar8 = 0;
    do {
      uVar4 = ~uVar8 + iVar5;
      if (*(char *)(local_128 + 0x18) == '\0') {
        uVar4 = uVar8;
      }
      if (0 < iVar7) {
        iVar9 = 0;
        iVar5 = -1;
        do {
          iVar7 = iVar7 + iVar5;
          if ((uVar8 & 1) == 0) {
            iVar7 = iVar9;
          }
          local_f8 = ((double)(int)uVar8 + 0.5) / param_3[1] - param_3[3];
          local_100 = ((double)iVar7 + 0.5) / *param_3 - param_3[2];
          local_12c = iVar5;
          FUN_146951eb8(local_f0,&local_120,&local_100);
          lVar3 = *param_1;
          lVar6 = (longlong)(int)(((int)param_1[1] * uVar4 + iVar7) * 4);
          *(float *)(lVar3 + lVar6 * 4) = (float)((local_120 + dVar2) * dVar1);
          *(float *)(lVar3 + 4 + lVar6 * 4) = (float)((local_118 + dVar2) * dVar1);
          *(float *)(lVar3 + 8 + lVar6 * 4) = (float)((local_110 + dVar2) * dVar1);
          *(float *)(lVar3 + 0xc + lVar6 * 4) = (float)((local_108 + dVar2) * dVar1);
          iVar9 = iVar9 + 1;
          iVar7 = (int)param_1[1];
          iVar5 = local_12c + -1;
        } while (iVar9 < iVar7);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar5);
  }
  FUN_14694bd88(local_a8);
  FUN_146951fb8(local_c0);
  FUN_14627a26c(local_d8);
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146944ae2 FUN_146944ae2 body=527 status=ok
// SIG undefined FUN_146944ae2(void)

void FUN_146944ae2(longlong *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_1b8 [44];
  int local_18c;
  longlong local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined1 local_150 [168];
  undefined1 local_a8 [24];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar1 = param_3[4];
  dVar2 = param_3[5];
  local_188 = param_2;
  FUN_14695200c(local_150);
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar5) {
    iVar7 = (int)param_1[1];
    uVar8 = 0;
    do {
      uVar4 = ~uVar8 + iVar5;
      if (*(char *)(local_188 + 0x18) == '\0') {
        uVar4 = uVar8;
      }
      if (0 < iVar7) {
        iVar9 = 0;
        iVar5 = -1;
        do {
          iVar7 = iVar7 + iVar5;
          if ((uVar8 & 1) == 0) {
            iVar7 = iVar9;
          }
          local_158 = ((double)(int)uVar8 + 0.5) / param_3[1] - param_3[3];
          local_160 = ((double)iVar7 + 0.5) / *param_3 - param_3[2];
          local_18c = iVar5;
          FUN_1469520cc(local_150,&local_180,&local_160);
          lVar3 = *param_1;
          lVar6 = (longlong)(int)(((int)param_1[1] * uVar4 + iVar7) * 4);
          *(float *)(lVar3 + lVar6 * 4) = (float)((local_180 + dVar2) * dVar1);
          *(float *)(lVar3 + 4 + lVar6 * 4) = (float)((local_178 + dVar2) * dVar1);
          *(float *)(lVar3 + 8 + lVar6 * 4) = (float)((local_170 + dVar2) * dVar1);
          *(float *)(lVar3 + 0xc + lVar6 * 4) = (float)((local_168 + dVar2) * dVar1);
          iVar9 = iVar9 + 1;
          iVar7 = (int)param_1[1];
          iVar5 = local_18c + -1;
        } while (iVar9 < iVar7);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar5);
  }
  FUN_14694bd88(local_a8);
  if ((local_90 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146944cf2 FUN_146944cf2 body=240 status=ok
// SIG undefined FUN_146944cf2(void)

undefined4 FUN_146944cf2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_1;
  lVar1 = param_1[1];
  if (lVar3 != lVar1) {
    do {
      FUN_14694b736(lVar3);
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar1);
    param_1[1] = *param_1;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0x3ff0000000000000;
  local_78 = FUN_142865a78;
  local_70 = FUN_142865af6;
  local_68 = FUN_142865bf1;
  local_60 = FUN_142865d0d;
  local_58 = 0;
  local_38 = param_1;
  uVar2 = FUN_144b5a6d0(param_2);
  lVar3 = param_1[1];
  if ((*param_1 != lVar3) && (*(longlong *)(lVar3 + -0x18) == *(longlong *)(lVar3 + -0x10))) {
    FUN_14694b736(lVar3 + -0x18);
    param_1[1] = param_1[1] + -0x18;
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146944de4 FUN_146944de4 body=524 status=ok
// SIG undefined FUN_146944de4(void)

void FUN_146944de4(double *param_1,longlong *param_2,double *param_3,ushort param_4,int param_5,
                  float param_6)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar6 = (double)((float)param_4 * param_6);
  dVar7 = *param_3 - dVar6;
  *param_3 = dVar7;
  pdVar1 = param_3 + 1;
  dVar8 = param_3[1] - dVar6;
  param_3[1] = dVar8;
  dVar10 = param_3[2] + dVar6;
  param_3[2] = dVar10;
  pdVar2 = param_3 + 3;
  dVar9 = param_3[3] + dVar6;
  param_3[3] = dVar9;
  if ((param_2 != (longlong *)0x0) && (lVar5 = *param_2, lVar5 != param_2[1])) {
    do {
      FUN_14693cef2(lVar5,param_3,pdVar1,param_3 + 2,pdVar2,dVar6);
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != param_2[1]);
    dVar7 = *param_3;
    dVar8 = param_3[1];
    dVar10 = param_3[2];
    dVar9 = param_3[3];
  }
  dVar6 = (double)((float)param_5 / (float)param_4);
  dVar7 = dVar7 * dVar6 + -0.5;
  *param_3 = dVar7;
  dVar8 = dVar8 * dVar6 + -0.5;
  param_3[1] = dVar8;
  dVar11 = dVar10 * dVar6 + 0.5;
  param_3[2] = dVar11;
  dVar10 = dVar9 * dVar6 + 0.5;
  param_3[3] = dVar10;
  if (dVar11 < dVar7) {
    *param_3 = 0.0;
    param_3[2] = 0.0;
    dVar7 = 0.0;
  }
  if (dVar10 < dVar8) {
    *pdVar1 = 0.0;
    *pdVar2 = 0.0;
  }
  iVar3 = (int)ROUND(dVar7 + dVar7 + -0.5) >> 1;
  *(int *)(param_1 + 6) = iVar3;
  iVar4 = (int)ROUND(*pdVar1 + *pdVar1 + -0.5) >> 1;
  *(int *)((longlong)param_1 + 0x34) = iVar4;
  dVar7 = param_3[2];
  *(int *)(param_1 + 7) = -((int)ROUND(-0.5 - (dVar7 + dVar7)) >> 1);
  *(int *)((longlong)param_1 + 0x3c) = -((int)ROUND(-0.5 - (*pdVar2 + *pdVar2)) >> 1);
  *param_1 = dVar6;
  param_1[1] = dVar6;
  param_1[2] = (double)-iVar3 / dVar6;
  param_1[3] = (double)-iVar4 / dVar6;
  param_1[4] = 0.5;
  param_1[5] = 1.0;
  return;
}



// FUNCTION 146944ff0 FUN_146944ff0 body=732 status=ok
// SIG undefined FUN_146944ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146944ff0(undefined8 *param_1,undefined8 param_2,float param_3,float param_4,
                       undefined4 param_5,longlong *param_6,longlong param_7)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  float local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar10 = *(longlong *)*param_1;
  if ((lVar10 != 0) && ((*(uint *)(lVar10 + 8) & 0x2001) == 1)) {
    if (((*(uint *)(lVar10 + 8) & 2) == 0) || (0 < *(int *)(lVar10 + 0x10))) {
      iVar5 = FUN_144b54d40(lVar10,param_2,0x880b);
      if ((((iVar5 == 0) && (lVar10 = *(longlong *)(*(longlong *)*param_1 + 0x78), lVar10 != 0)) &&
          (*(int *)(lVar10 + 0x60) == 0x6f75746c)) &&
         (((0 < *(int *)(lVar10 + 0x30) && (0 < *(int *)(lVar10 + 0x34))) &&
          (0 < *(short *)(lVar10 + 0x9a))))) {
        iVar5 = FUN_146944cf2(param_6,lVar10 + 0x98);
        if (iVar5 == 0) {
          plVar7 = (longlong *)*param_6;
          plVar6 = (longlong *)param_6[1];
          if (plVar7 != plVar6) {
            *(byte *)(param_6 + 3) = *(byte *)(param_6 + 3) ^ 1;
            local_a8 = -1e+240;
            uStack_a0 = -1e+240;
            local_b8 = 1e+240;
            dStack_b0 = 1e+240;
            do {
              puVar8 = (undefined8 *)*plVar7;
              if (puVar8 != (undefined8 *)plVar7[1]) {
                do {
                  local_d8 = &uStack_a0;
                  (**(code **)(*(longlong *)*puVar8 + 0x60))
                            ((longlong *)*puVar8,&local_b8,&dStack_b0,&local_a8);
                  puVar8 = puVar8 + 1;
                } while (puVar8 != (undefined8 *)plVar7[1]);
                plVar6 = (longlong *)param_6[1];
              }
              plVar7 = plVar7 + 3;
            } while (plVar7 != plVar6);
            local_c0 = (dStack_b0 - (uStack_a0 - dStack_b0)) + -1.0;
            local_c8 = (local_b8 - (local_a8 - local_b8)) + -1.0;
            dVar12 = (double)FUN_1469452ce(param_6);
            if (0.0 < dVar12) {
              lVar4 = param_6[1];
              for (lVar10 = *param_6; lVar10 != lVar4; lVar10 = lVar10 + 0x18) {
                FUN_14693d534(lVar10);
              }
            }
            uVar2 = *(ushort *)(*(longlong *)*param_1 + 0x68);
            local_88 = (undefined4)local_a8;
            uStack_84 = local_a8._4_4_;
            uStack_80 = (undefined4)uStack_a0;
            uStack_7c = uStack_a0._4_4_;
            local_98 = local_b8;
            dStack_90 = dStack_b0;
            local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,param_5);
            local_d0 = param_3;
            FUN_146944de4(param_7,param_6,&local_98,uVar2);
            fVar11 = (float)uVar2;
            dVar12 = (double)((float)((uint)fVar11 | DAT_1499319e0) * param_3);
            *(double *)(param_7 + 0x20) = 1.0 / ((double)(param_4 * fVar11) - dVar12);
            *(double *)(param_7 + 0x28) = -dVar12;
            iVar5 = *(int *)(param_7 + 0x38);
            iVar3 = *(int *)(param_7 + 0x30);
            if (iVar5 != iVar3 && *(int *)(param_7 + 0x30) <= iVar5) {
              uVar9 = CONCAT71((int7)((ulonglong)param_7 >> 8),
                               0xfffff000 <
                               (uint)(*(int *)(param_7 + 0x34) - *(int *)(param_7 + 0x3c)) &&
                               (uint)(iVar5 - iVar3) < 0x1000);
              goto LAB_146945067;
            }
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_146945067:
  plVar7 = (longlong *)param_1[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469452ce FUN_1469452ce body=248 status=ok
// SIG undefined FUN_1469452ce(void)

void FUN_1469452ce(longlong *param_1,double *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = 0;
  local_68 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]) * -1.001 + -1.79769313486232e+308;
  local_78 = *param_2;
  dStack_70 = param_2[1];
  plVar4 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar4 != plVar2) {
    do {
      puVar5 = (undefined8 *)*plVar4;
      if (puVar5 != (undefined8 *)plVar4[1]) {
        uVar3 = ((undefined8 *)plVar4[1])[-1];
        do {
          uVar1 = *puVar5;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          FUN_14694022c(&local_78,&local_98,uVar3);
          puVar5 = puVar5 + 1;
          uVar3 = uVar1;
        } while (puVar5 != (undefined8 *)plVar4[1]);
        plVar2 = (longlong *)param_1[1];
      }
      plVar4 = plVar4 + 3;
    } while (plVar4 != plVar2);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_68);
  }
  return;
}



// FUNCTION 1469453c8 FUN_1469453c8 body=238 status=ok
// SIG undefined FUN_1469453c8(void)

void FUN_1469453c8(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_1[5];
  param_1[5] = 0;
  local_38 = *(undefined4 *)(param_1 + 6);
  local_34 = *(undefined4 *)((longlong)param_1 + 0x34);
  param_1[6] = 0;
  local_68 = *param_1;
  local_60 = param_1[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + 1;
    UNLOCK();
  }
  local_48 = *(undefined4 *)(param_1 + 4);
  local_58 = *(undefined4 *)(param_1 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_50 = *(undefined4 *)(param_1 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1469454b8(param_2,&local_68,&local_40);
  plVar2 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar4 = param_1[7];
  lVar3 = param_1[8];
  if (lVar4 != lVar3) {
    do {
      FUN_14694b736(lVar4);
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar3);
    param_1[8] = param_1[7];
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469454b8 FUN_1469454b8 body=69 status=ok
// SIG undefined FUN_1469454b8(void)

void FUN_1469454b8(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  (*(code *)*param_1)(param_1[1]);
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469454fe FUN_1469454fe body=143 status=ok
// SIG undefined FUN_1469454fe(void)

void FUN_1469454fe(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar4 = param_1[7];
  lVar3 = param_1[8];
  if (lVar4 != lVar3) {
    do {
      FUN_14694b736(lVar4);
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar3);
    param_1[8] = param_1[7];
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_144893a1c(param_1 + 5,0);
    return;
  }
  return;
}



// FUNCTION 14694558e FUN_14694558e body=551 status=ok
// SIG undefined FUN_14694558e(void)

void FUN_14694558e(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  float *pfVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_d8 [40];
  float *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float *local_88;
  int local_80;
  int local_7c;
  float *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x88);
  iVar9 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x8c);
  iVar8 = 0;
  if ((ulonglong)*(uint *)(param_1 + 0x14) < 3) {
    iVar8 = *(int *)(&DAT_149eda73c + (ulonglong)*(uint *)(param_1 + 0x14) * 4);
  }
  lVar1 = param_1 + 0x58;
  iVar8 = iVar9 * iVar7 * iVar8;
  local_78 = (float *)0x0;
  uStack_70 = 0;
  FUN_144a12820(&local_78,iVar8,1);
  FUN_140393c76((ulonglong *)(param_1 + 0x28),iVar8,1);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 2) {
    FUN_14693f9ed(param_1 + 0x38);
    local_88 = local_78;
    local_90 = *(undefined8 *)(param_1 + 0x28);
    local_b0 = (float *)CONCAT71(local_b0._1_7_,1);
    local_a8 = &DAT_100000002;
    local_a0 = 0x3ff1c71c71c71c72;
    local_98 = 0x3ff1c71c71c71c72;
    local_80 = iVar7;
    local_7c = iVar9;
    FUN_146944865(&local_88,param_1 + 0x38,lVar1);
  }
  else if (iVar3 == 1) {
    local_b0 = local_78;
    local_a8 = (undefined1 *)CONCAT44(iVar9,iVar7);
    FUN_146944697(&local_b0,param_1 + 0x38,lVar1);
  }
  else if (iVar3 == 0) {
    local_b0 = local_78;
    local_a8 = (undefined1 *)CONCAT44(iVar9,iVar7);
    FUN_1469444c9(&local_b0,param_1 + 0x38,lVar1);
  }
  if (0 < iVar8) {
    pbVar4 = *(byte **)(param_1 + 0x28);
    pbVar6 = pbVar4 + iVar8;
    pfVar5 = local_78;
    do {
      fVar2 = *pfVar5;
      uVar10 = -(uint)(0.0 < fVar2) & 0x3f800000;
      *pbVar4 = ~(byte)(int)((float)((-(uint)(fVar2 <= 1.0) & (uint)fVar2 |
                                     ~-(uint)(fVar2 <= 1.0) & uVar10) & -(uint)(0.0 <= fVar2) |
                                    ~-(uint)(0.0 <= fVar2) & uVar10) * -255.0 + 255.5);
      pbVar4 = pbVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (pbVar4 < pbVar6);
  }
  if (local_78 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469457b6 FUN_1469457b6 body=532 status=ok
// SIG undefined FUN_1469457b6(void)

void FUN_1469457b6(longlong param_1,ulonglong *param_2)

{
  float fVar1;
  byte *pbVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  float *local_98;
  int local_90;
  int local_8c;
  float *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar9 = 0;
  if ((ulonglong)*(uint *)(param_1 + 0x14) < 3) {
    iVar9 = *(int *)(&DAT_149eda73c + (ulonglong)*(uint *)(param_1 + 0x14) * 4);
  }
  iVar10 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x88);
  iVar11 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x8c);
  iVar5 = iVar11 * iVar10;
  iVar8 = iVar5 * iVar9;
  local_88 = (float *)0x0;
  uStack_80 = 0;
  FUN_144a12820(&local_88,iVar5,1);
  FUN_140393c76(param_2,iVar8,1);
  local_98 = local_88;
  local_90 = iVar10;
  local_8c = iVar11;
  FUN_1469432c3(&local_98,param_1 + 0x38,param_1 + 0x58);
  if (iVar9 == 4) {
    if (0 < iVar8) {
      piVar3 = (int *)*param_2;
      piVar7 = (int *)((longlong)iVar8 + (longlong)piVar3);
      pfVar4 = local_88;
      do {
        fVar1 = *pfVar4;
        uVar12 = -(uint)(0.0 < fVar1) & 0x3f800000;
        pfVar4 = pfVar4 + 1;
        *piVar3 = (uint)(byte)~(byte)(int)((float)((-(uint)(fVar1 <= 1.0) & (uint)fVar1 |
                                                   ~-(uint)(fVar1 <= 1.0) & uVar12) &
                                                   -(uint)(0.0 <= fVar1) |
                                                  ~-(uint)(0.0 <= fVar1) & uVar12) * -255.0 + 255.5)
                  * 0x1010101;
        piVar3 = piVar3 + 1;
      } while (piVar3 < piVar7);
    }
  }
  else if ((iVar9 == 1) && (0 < iVar8)) {
    pbVar2 = (byte *)*param_2;
    pbVar6 = pbVar2 + iVar8;
    pfVar4 = local_88;
    do {
      fVar1 = *pfVar4;
      uVar12 = -(uint)(0.0 < fVar1) & 0x3f800000;
      *pbVar2 = ~(byte)(int)((float)((-(uint)(fVar1 <= 1.0) & (uint)fVar1 |
                                     ~-(uint)(fVar1 <= 1.0) & uVar12) & -(uint)(0.0 <= fVar1) |
                                    ~-(uint)(0.0 <= fVar1) & uVar12) * -255.0 + 255.5);
      pbVar2 = pbVar2 + 1;
      pfVar4 = pfVar4 + 1;
    } while (pbVar2 < pbVar6);
  }
  if (local_88 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469459cc FUN_1469459cc body=206 status=ok
// SIG undefined FUN_1469459cc(void)

int FUN_1469459cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar3 == 0) {
    iVar3 = 2;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + (longlong)iVar3 * 8);
    *(int *)(param_1 + 0x10) = iVar3 + -1;
    iVar3 = FUN_142865f1e(lVar2 + 0x80,param_2,param_3,1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
        FUN_146952276((longlong *)(param_1 + 0x18),iVar3);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8) = lVar2;
      iVar3 = 0;
      FUN_1402a8900(lVar2,0,DAT_14c8442c0,3,0,0xffffffffffffffff,0);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
        FUN_146952276((longlong *)(param_1 + 8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return iVar3;
}



// FUNCTION 146945a9a FUN_146945a9a body=247 status=ok
// SIG undefined FUN_146945a9a(void)

int FUN_146945a9a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1[2];
  if ((longlong)iVar2 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
    iVar2 = 3;
    if (iVar3 != 0) {
      iVar2 = iVar3;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1[1] + -8 + (longlong)iVar2 * 8);
    *(int *)(param_1 + 2) = iVar2 + -1;
    iVar2 = FUN_142865f1e(lVar1 + 0x80,param_2,param_3,1);
    if (iVar2 == 0) {
      FUN_1469457b6(lVar1 + 0x80,param_4);
      iVar2 = (int)param_1[4];
      *(uint *)(param_1 + 4) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar2 + 1U) {
        FUN_146952276(param_1 + 3,iVar2);
      }
      *(longlong *)(param_1[3] + (longlong)iVar2 * 8) = lVar1;
      FUN_1402a8900(lVar1,0,DAT_14c8442c0,3,0,0xffffffffffffffff,0);
      iVar2 = 0;
    }
    else {
      iVar3 = (int)param_1[2];
      *(uint *)(param_1 + 2) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x14) < iVar3 + 1U) {
        FUN_146952276(param_1 + 1,iVar3);
      }
      *(longlong *)(param_1[1] + (longlong)iVar3 * 8) = lVar1;
    }
  }
  return iVar2;
}



// FUNCTION 146945b92 FUN_146945b92 body=336 status=ok
// SIG undefined FUN_146945b92(void)

int FUN_146945b92(longlong param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar3 == 0) {
    iVar3 = 2;
  }
  else {
    local_38 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + (longlong)iVar3 * 8);
    *(int *)(param_1 + 0x10) = iVar3 + -1;
    iVar3 = FUN_142865f1e(lVar2 + 0x80,param_2,&local_38,1);
    if (iVar3 == 0) {
      if (((((short)local_38 == *param_3) && (local_38._2_2_ == param_3[1])) &&
          (local_38._4_2_ == param_3[2])) && (local_38._6_2_ == param_3[3])) {
        iVar3 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
          FUN_146952276((longlong *)(param_1 + 0x18),iVar3);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8) = lVar2;
        local_48 = 0;
        local_50 = 0xffffffffffffffff;
        local_58 = 0;
        iVar3 = 0;
        FUN_1402a8900(lVar2,0,DAT_14c8442c0,3);
        goto LAB_146945c0c;
      }
      FUN_1469454fe(lVar2 + 0x80);
      iVar3 = 4;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
      FUN_146952276((longlong *)(param_1 + 8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = lVar2;
  }
LAB_146945c0c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146945ce4 FUN_146945ce4 body=187 status=ok
// SIG undefined FUN_146945ce4(void)

int FUN_146945ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)&local_b8;
  local_100 = 0;
  uStack_f8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  local_a8 = 0x3ff0000000000000;
  local_a0 = 0x3ff0000000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x3ff0000000000000;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  iVar1 = FUN_142865f1e(&local_100,param_2,param_3,0);
  if (iVar1 == 0) {
    FUN_1469457b6(&local_100,param_4);
  }
  FUN_1412d5d5c(&local_100);
  if ((local_28 ^ (ulonglong)&local_b8) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146945da0 FUN_146945da0 body=93 status=ok
// SIG undefined FUN_146945da0(void)

void FUN_146945da0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = (int)plVar1[1];
  iVar3 = ~*(uint *)(param_1 + 1) + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*plVar1 + (longlong)(int)*(uint *)(param_1 + 1) * 8),
            (void *)(*plVar1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
    iVar2 = (int)plVar1[1];
  }
  *(int *)(plVar1 + 1) = iVar2 + -1;
  FUN_1469522fc(plVar1);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 146945dfe FUN_146945dfe body=3990 status=ok
// SIG undefined FUN_146945dfe(void)

void FUN_146945dfe(undefined8 *param_1,wchar_t *param_2,int param_3,undefined4 param_4,
                  longlong param_5,float param_6,char param_7,longlong *param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  wchar_t wVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [4];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong **pplVar13;
  float *pfVar14;
  char cVar15;
  undefined1 uVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  longlong lVar24;
  int *piVar25;
  longlong *plVar26;
  int iVar27;
  undefined1 auVar28 [4];
  ulonglong uVar29;
  uint uVar30;
  undefined4 uVar31;
  longlong lVar32;
  wchar_t *pwVar33;
  longlong lVar34;
  int *piVar35;
  uint uVar36;
  longlong lVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_318 [32];
  longlong **local_2f8;
  longlong *local_2f0;
  undefined2 local_2e8;
  undefined2 local_2e0;
  undefined8 *local_2d8;
  wchar_t *local_2d0;
  ulonglong local_2c8;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  uint local_2b0;
  uint local_2ac;
  int *local_2a8;
  size_t local_2a0;
  longlong local_298;
  int *local_290;
  longlong local_288;
  int *local_280;
  undefined8 *local_278;
  int *local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 *local_258;
  int local_250;
  int local_248;
  undefined4 local_244;
  int local_240;
  undefined4 uStack_23c;
  longlong *local_238;
  float local_220;
  float local_21c;
  longlong *local_218;
  longlong *plStack_210;
  undefined1 local_1fc [4];
  undefined8 local_1f8;
  longlong *local_1f0;
  int local_1d8 [56];
  int *local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int *local_d8;
  longlong **pplStack_d0;
  longlong **local_c8;
  float *pfStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_f8 = (int *)0x0;
  local_f0 = 0x400000000;
  uVar20 = thunk_FUN_144e3fe90();
  local_2d0 = param_2;
  local_2b8 = param_3;
  (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],param_2 + param_3,param_4);
  local_d8 = &local_248;
  pplStack_d0 = (longlong **)local_1fc;
  local_e8 = &local_258;
  local_258 = (undefined8 *)0x0;
  local_c8 = &local_218;
  local_218 = (longlong *)0x0;
  plStack_210 = (longlong *)0x0;
  pfStack_c0 = &local_21c;
  local_21c = 1.0;
  local_2d8 = param_1;
  local_248 = param_3;
  local_1fc = (undefined1  [4])param_3;
  uStack_e0 = local_1d8;
  iVar18 = (**(code **)(*(longlong *)param_1[5] + 0x78))();
  if (iVar18 == -1) {
    local_2c8 = 0;
  }
  else {
    local_2c8 = 0;
    iVar27 = 0;
    do {
      iVar19 = iVar18;
      iVar27 = iVar19 - iVar27;
      uVar21 = (ulonglong)(int)local_1fc;
      pwVar33 = local_2d0 + uVar21;
      uVar36 = (uint)(ushort)*pwVar33;
      if (1 < iVar27) {
        if ((uVar36 & 0xfc00) == 0xd800) {
          wVar4 = local_2d0[uVar21 + 1];
          uVar21 = (ulonglong)(ushort)wVar4;
          if (((ushort)wVar4 & 0xfc00) == 0xdc00) {
            uVar36 = (uint)(ushort)*pwVar33 * 0x400 + (uint)(ushort)wVar4 + 0xfca02400;
            goto LAB_146945fa8;
          }
        }
        local_2c8 = CONCAT71((int7)(uVar21 >> 8),1);
      }
LAB_146945fa8:
      uVar30 = uVar36 & 0xffff;
      cVar15 = FUN_140665610(uVar30);
      bVar38 = (uVar36 & 0xfffd) != 0x2009;
      local_220 = 1.0;
      puVar22 = (undefined8 *)FUN_1406d80a6(local_2d8[1],param_5,uVar36,&local_220);
      uVar16 = 0;
      if ((uVar30 != 0x202f && bVar38) && cVar15 == '\0') {
        uVar16 = (undefined1)*(undefined4 *)(param_5 + 0x54);
      }
      local_2f8 = (longlong **)CONCAT71(local_2f8._1_7_,uVar16);
      FUN_1406d7b94(local_2d8[2],&local_1f8,puVar22,uVar36);
      puVar3 = local_2d8;
      if (local_1f8 == (longlong *)0x0) {
        uVar31 = 0x20;
        if ((uVar30 != 0x202f && bVar38) && cVar15 == '\0') {
          uVar31 = 0xfffd;
        }
        puVar22 = (undefined8 *)FUN_1406d80a6(local_2d8[1],param_5,uVar31,&local_220);
        local_2f8 = (longlong **)CONCAT71(local_2f8._1_7_,*(undefined1 *)(param_5 + 0x54));
        FUN_1406d7b94(puVar3[2],&local_240,puVar22,uVar31);
        FUN_146946d96(&local_1f8,&local_240);
        plVar23 = local_238;
        if (local_238 != (longlong *)0x0) {
          LOCK();
          plVar26 = local_238 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar35 = (int *)((longlong)plVar23 + 0xc);
            *piVar35 = *piVar35 + -1;
            UNLOCK();
            if (*piVar35 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
        if (local_1f8 != (longlong *)0x0) goto LAB_146946043;
        plVar23 = (longlong *)0x0;
      }
      else {
LAB_146946043:
        plVar23 = local_1f8;
        if ((*(byte *)(*local_1f8 + 8) & 1) == 0) {
          local_220 = 1.0;
        }
      }
      if ((local_258 == puVar22) && (local_218 == plVar23)) {
        if ((local_21c != local_220) || (NAN(local_21c) || NAN(local_220))) goto LAB_146946084;
      }
      else {
LAB_146946084:
        FUN_1428660c6(&local_e8);
        plVar23 = plStack_210;
        local_248 = (int)local_1fc;
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
          UNLOCK();
        }
        local_218 = local_1f8;
        plStack_210 = local_1f0;
        local_258 = puVar22;
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar26 = plVar23 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar35 = (int *)((longlong)plVar23 + 0xc);
            *piVar35 = *piVar35 + -1;
            UNLOCK();
            if (*piVar35 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
        local_21c = local_220;
      }
      plVar23 = local_1f0;
      local_1fc = (undefined1  [4])((int)local_1fc + iVar27);
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar26 = local_1f0 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar35 = (int *)((longlong)plVar23 + 0xc);
          *piVar35 = *piVar35 + -1;
          UNLOCK();
          if (*piVar35 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
      iVar18 = (**(code **)(*(longlong *)local_2d8[5] + 0x78))();
      iVar27 = iVar19;
    } while (iVar18 != -1);
  }
  FUN_1428660c6(&local_e8);
  plVar23 = plStack_210;
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    plVar26 = plStack_210 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*plStack_210)(plStack_210);
      LOCK();
      piVar35 = (int *)((longlong)plVar23 + 0xc);
      *piVar35 = *piVar35 + -1;
      UNLOCK();
      if (*piVar35 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  piVar35 = local_f8;
  if (local_f8 == (int *)0x0) {
    piVar35 = local_1d8;
  }
  if ((longlong)(int)(uint)local_f0 != 0) {
    piVar25 = piVar35 + (longlong)(int)(uint)local_f0 * 0xe;
    do {
      iVar18 = *piVar35;
      local_218 = (longlong *)CONCAT44(local_218._4_4_,iVar18);
      local_1f8._0_5_ = (uint5)(uint)local_1f8;
      local_e8 = (undefined8 **)&local_1f8;
      uStack_e0 = piVar35;
      local_d8 = &local_240;
      pplStack_d0 = &local_218;
      iVar27 = piVar35[1];
      iVar19 = *piVar35;
      local_240 = iVar18;
      while (iVar18 < iVar27 + iVar19) {
        iVar18 = FUN_144b655a0(uVar20,local_2d0[iVar18]);
        if ((local_1f8._4_1_ != '\x01') || ((uint)local_1f8 != iVar18)) {
          if (local_1f8._4_1_ == '\0') {
LAB_14694634c:
            local_240 = (int)local_218;
          }
          else {
            if (((iVar18 == 0x5a696e68) || (iVar18 == 0x5a797979)) || (iVar18 == 0x5a7a7a7a))
            goto LAB_146946301;
            if ((((uint)local_1f8 != 0x5a696e68) && ((uint)local_1f8 != 0x5a797979)) &&
               ((uint)local_1f8 != 0x5a7a7a7a)) {
              FUN_1428661ce(&local_e8);
              goto LAB_14694634c;
            }
          }
          local_1f8._0_5_ = CONCAT14(1,iVar18);
        }
LAB_146946301:
        iVar18 = (int)local_218 + 1;
        local_218 = (longlong *)CONCAT44(local_218._4_4_,iVar18);
      }
      FUN_1428661ce(&local_e8);
      piVar35 = piVar35 + 0xe;
    } while (piVar35 != piVar25);
  }
  pwVar33 = local_2d0;
  if (param_7 == '\x01') {
    piVar35 = local_f8;
    if (local_f8 == (int *)0x0) {
      piVar35 = local_1d8;
    }
    local_2c8 = CONCAT71((int7)((ulonglong)local_1d8 >> 8),1);
    if (1 < (longlong)(int)(uint)local_f0) {
      uVar36 = (uint)local_f0 >> 1;
      lVar34 = 0;
      lVar37 = (longlong)(int)(uint)local_f0 * 0x38;
      do {
        lVar24 = lVar37 + -0x38;
        local_b8 = *(undefined8 *)((longlong)piVar35 + lVar34 + 0x30);
        plVar23 = (longlong *)((longlong)piVar35 + lVar34 + 0x10);
        plVar26 = (longlong *)((longlong)piVar35 + lVar34 + 0x20);
        local_c8 = (longlong **)*plVar26;
        pfStack_c0 = (float *)plVar26[1];
        local_d8 = (int *)*plVar23;
        pplStack_d0 = (longlong **)plVar23[1];
        local_e8 = *(undefined8 ***)((longlong)piVar35 + lVar34);
        uStack_e0 = (int *)((longlong *)((longlong)piVar35 + lVar34))[1];
        *(undefined8 *)((longlong)piVar35 + lVar34 + 0x30) =
             *(undefined8 *)((longlong)piVar35 + lVar37 + -8);
        uVar20 = *(undefined8 *)((longlong)piVar35 + lVar24);
        uVar5 = ((undefined8 *)((longlong)piVar35 + lVar24))[1];
        puVar22 = (undefined8 *)((longlong)piVar35 + lVar37 + -0x28);
        uVar6 = *puVar22;
        uVar7 = puVar22[1];
        puVar22 = (undefined8 *)((longlong)piVar35 + lVar37 + -0x18);
        uVar8 = puVar22[1];
        puVar3 = (undefined8 *)((longlong)piVar35 + lVar34 + 0x20);
        *puVar3 = *puVar22;
        puVar3[1] = uVar8;
        puVar22 = (undefined8 *)((longlong)piVar35 + lVar34 + 0x10);
        *puVar22 = uVar6;
        puVar22[1] = uVar7;
        *(undefined8 *)((longlong)piVar35 + lVar34) = uVar20;
        ((undefined8 *)((longlong)piVar35 + lVar34))[1] = uVar5;
        *(undefined8 *)((longlong)piVar35 + lVar37 + -8) = local_b8;
        pfVar14 = pfStack_c0;
        pplVar13 = pplStack_d0;
        piVar25 = local_d8;
        uVar31 = (undefined4)local_e8;
        uVar10 = local_e8._4_4_;
        uVar11 = (undefined4)uStack_e0;
        uVar12 = uStack_e0._4_4_;
        plVar23 = (longlong *)((longlong)piVar35 + lVar37 + -0x18);
        *plVar23 = (longlong)local_c8;
        plVar23[1] = (longlong)pfVar14;
        plVar23 = (longlong *)((longlong)piVar35 + lVar37 + -0x28);
        *plVar23 = (longlong)piVar25;
        plVar23[1] = (longlong)pplVar13;
        puVar2 = (undefined4 *)((longlong)piVar35 + lVar24);
        *puVar2 = uVar31;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        lVar34 = lVar34 + 0x38;
        lVar37 = lVar24;
      } while ((ulonglong)uVar36 * 0x38 - lVar34 != 0);
    }
  }
  uVar20 = FUN_144b61590();
  if (pwVar33 == (wchar_t *)0x0) {
    local_2a0 = 0;
  }
  else {
    local_2a0 = wcslen(pwVar33);
  }
  piVar35 = local_f8;
  if (local_f8 == (int *)0x0) {
    piVar35 = local_1d8;
  }
  if ((longlong)(int)(uint)local_f0 != 0) {
    piVar25 = piVar35 + (longlong)(int)(uint)local_f0 * 0xe;
    local_278 = local_2d8 + 7;
    local_280 = piVar25;
    do {
      if (*(longlong **)(piVar35 + 4) != (longlong *)0x0) {
        local_2b0 = *(uint *)(param_5 + 0x4c);
        uVar36 = *(uint *)(**(longlong **)(piVar35 + 4) + 8) & 0x40;
        local_2bc = (int)(short)(int)(((float)(int)local_2b0 * *(float *)(param_5 + 0x48)) / 1000.0)
        ;
        if (local_2b0 == 0) {
          local_2bc = 0;
        }
        if ((local_2c8 & 1) != 0) {
          local_2bc = 0;
          local_2b0 = uVar36;
        }
        if (uVar36 != 0) {
          local_2b0 = uVar36;
        }
        local_e8 = (undefined8 **)(ulonglong)CONCAT14(local_2b0 != 0,0x6b65726e);
        uStack_e0 = (int *)0xffffffff00000000;
        local_d8 = (int *)(ulonglong)CONCAT14(local_2bc == 0,0x6c696761);
        pplStack_d0 = (longlong **)0xffffffff00000000;
        local_1fc = (undefined1  [4])0x0;
        FUN_1406d99f9(*(undefined8 *)(piVar35 + 4),*(undefined8 *)(piVar35 + 2),local_1fc);
        auVar9 = local_1fc;
        fVar39 = (float)piVar35[8] * param_6;
        local_2f8 = (longlong **)CONCAT44(local_2f8._4_4_,fVar39);
        local_298 = FUN_146937b96(local_278,*(undefined8 *)(piVar35 + 4),local_1fc,param_5);
        if (local_298 != 0) {
          FUN_1406d996e(*(undefined8 *)(piVar35 + 2),&local_248);
          fVar40 = *(float *)(param_5 + 0x50);
          if (5.0 <= fVar40) {
            fVar40 = 5.0;
          }
          if (fVar40 <= -5.0) {
            fVar40 = -5.0;
          }
          plVar23 = (longlong *)FUN_14001cc68(0x38,0x10);
          plVar23[1] = (longlong)&DAT_100000001;
          *plVar23 = (longlong)&PTR_FUN_149eda190;
          uVar31 = *(undefined4 *)(param_5 + 0x48);
          local_1f8 = *(longlong **)(piVar35 + 4);
          local_1f0 = *(longlong **)(piVar35 + 6);
          auVar28 = auVar9;
          if (local_1f0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_1f0 + 0xc) = *(int *)((longlong)local_1f0 + 0xc) + 1;
            UNLOCK();
            auVar28 = local_1fc;
          }
          local_2e0 = (undefined2)local_244;
          local_2e8 = CONCAT11(local_2e8._1_1_,(undefined1)local_248);
          local_2f8._0_4_ = fVar39;
          local_2f0._0_4_ = fVar40;
          FUN_1406d9b98(plVar23 + 2,&local_1f8,auVar9,uVar31);
          puVar22 = local_2d8;
          local_1f8 = plVar23 + 2;
          local_1f0 = plVar23;
          local_2f8._0_4_ = fVar39;
          FUN_1406d9de0(*local_2d8,&local_240,**(undefined8 **)(piVar35 + 4),
                        *(undefined4 *)(param_5 + 0x48));
          local_2f0 = (longlong *)CONCAT44(local_2f0._4_4_,fVar39);
          local_2f8 = (longlong **)CONCAT44(local_2f8._4_4_,*(undefined4 *)(param_5 + 0x48));
          FUN_1406da070(*puVar22,&local_218,**(undefined8 **)(piVar35 + 4),auVar28);
          local_2a8 = piVar35;
          if ((longlong)piVar35[0xc] != 0) {
            piVar25 = *(int **)(piVar35 + 10);
            local_270 = piVar25 + (longlong)piVar35[0xc] * 3;
            local_2b4 = 5 - (uint)(param_7 == '\0');
            pwVar33 = local_2d0;
            uVar36 = *(uint *)(param_8 + 1);
            local_268 = uVar20;
            do {
              uVar21 = (ulonglong)uVar36;
              FUN_144b616c0(uVar20,0);
              FUN_144b616a0(uVar20,local_2b4);
              FUN_144b616b0(uVar20,piVar25[2]);
              local_2f8 = (longlong **)CONCAT44(local_2f8._4_4_,piVar25[1]);
              thunk_FUN_144b627b0(uVar20,pwVar33,local_2a0,*piVar25);
              FUN_144b64ec0(local_298,uVar20,&local_e8,2);
              local_21c = 0.0;
              local_288 = FUN_144b61710(uVar20,&local_21c);
              local_260 = FUN_144b61720(uVar20,&local_21c);
              iVar18 = (int)param_8[1] + (int)local_21c;
              if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar18);
              }
              local_290 = piVar25;
              if (*(int *)((longlong)param_8 + 0xc) < iVar18) {
                FUN_1406d9c90(param_8);
              }
              if (local_21c != 0.0) {
                lVar37 = 8;
                uVar29 = 0;
                do {
                  iVar18 = *(int *)(local_288 + lVar37);
                  wVar4 = pwVar33[iVar18];
                  local_2e8 = (undefined2)local_2bc;
                  local_2f8 = &local_218;
                  local_2f0 = param_8;
                  cVar15 = FUN_1406d88a2(local_2d8,pwVar33,iVar18,&local_1f8);
                  if (cVar15 == '\0') {
                    local_2ac = FUN_1406d79dc(param_8);
                    plVar23 = local_1f0;
                    puVar22 = (undefined8 *)((longlong)(int)local_2ac * 0xa8 + *param_8);
                    if (local_1f0 == (longlong *)0x0) {
                      *puVar22 = local_1f8;
                      plVar26 = (longlong *)puVar22[1];
                      if (plVar26 != (longlong *)0x0) {
                        puVar22[1] = 0;
LAB_146946935:
                        LOCK();
                        plVar23 = plVar26 + 1;
                        *(int *)plVar23 = (int)*plVar23 + -1;
                        UNLOCK();
                        if ((int)*plVar23 == 0) {
                          (**(code **)*plVar26)(plVar26);
                          LOCK();
                          piVar35 = (int *)((longlong)plVar26 + 0xc);
                          *piVar35 = *piVar35 + -1;
                          iVar27 = *piVar35;
                          UNLOCK();
joined_r0x000146946960:
                          if (iVar27 == 0) {
                            (**(code **)(*plVar26 + 0x10))(plVar26);
                          }
                        }
                      }
                    }
                    else {
                      LOCK();
                      *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
                      UNLOCK();
                      *puVar22 = local_1f8;
                      plVar26 = (longlong *)puVar22[1];
                      if (local_1f0 == plVar26) {
                        LOCK();
                        plVar26 = local_1f0 + 1;
                        *(int *)plVar26 = (int)*plVar26 + -1;
                        UNLOCK();
                        if ((int)*plVar26 == 0) {
                          (**(code **)*local_1f0)(local_1f0);
                          LOCK();
                          piVar35 = (int *)((longlong)plVar23 + 0xc);
                          *piVar35 = *piVar35 + -1;
                          iVar27 = *piVar35;
                          UNLOCK();
                          plVar26 = plVar23;
                          goto joined_r0x000146946960;
                        }
                      }
                      else {
                        puVar22[1] = local_1f0;
                        if (plVar26 != (longlong *)0x0) goto LAB_146946935;
                      }
                    }
                    *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(local_288 + -8 + lVar37);
                    *(int *)((longlong)puVar22 + 0x14) = iVar18;
                    *(short *)(puVar22 + 3) =
                         (short)(*(int *)(local_260 + -8 + lVar37) + 0x20U >> 6);
                    *(short *)((longlong)puVar22 + 0x1a) =
                         -(short)(*(int *)(local_260 + -4 + lVar37) + 0x20U >> 6);
                    *(short *)((longlong)puVar22 + 0x1c) =
                         (short)(*(int *)(local_260 + lVar37) + 0x20U >> 6);
                    *(short *)((longlong)puVar22 + 0x1e) =
                         -(short)(*(int *)(local_260 + 4 + lVar37) + 0x20U >> 6);
                    *(undefined2 *)(puVar22 + 4) = 0;
                    *(undefined1 *)((longlong)puVar22 + 0x22) = 0;
                    *(char *)((longlong)puVar22 + 0x23) = param_7;
                    cVar15 = FUN_140665610(wVar4);
                    pwVar33 = local_2d0;
                    bVar17 = (wVar4 != L'\x202f' && (wVar4 & 0xfffdU) != 0x2009) && cVar15 == '\0';
                    *(byte *)((longlong)puVar22 + 0x24) = bVar17;
                    if ((0 < (int)local_2ac) && (local_2b0 != 0)) {
                      lVar34 = (ulonglong)local_2ac * 0xa8 + *param_8;
                      if (local_2bc != 0) {
                        *(short *)(lVar34 + -0x90) = *(short *)(lVar34 + -0x90) + (short)local_2bc;
                        bVar17 = *(byte *)((longlong)puVar22 + 0x24);
                      }
                      if ((((bVar17 & 1) != 0) && (CONCAT44(uStack_23c,local_240) != 0)) &&
                         (cVar15 = FUN_1406d7e20(CONCAT44(uStack_23c,local_240),
                                                 *(undefined4 *)(lVar34 + -0x98),
                                                 *(undefined4 *)(puVar22 + 2),&local_258),
                         cVar15 != '\0')) {
                        *(char *)(lVar34 + -0x88) = (char)((int)local_258 + 0x20U >> 6);
                      }
                    }
                  }
                  uVar29 = uVar29 + 1;
                  lVar37 = lVar37 + 0x14;
                } while (uVar29 < (uint)local_21c);
              }
              uVar20 = local_268;
              thunk_FUN_144b61960(local_268);
              piVar25 = local_290;
              uVar30 = *(uint *)(param_8 + 1);
              if ((int)uVar36 < (int)uVar30) {
                local_258 = local_2d8;
                local_250 = local_2b8;
                if (param_7 == '\0') {
                  do {
                    lVar37 = *param_8;
                    uVar29 = (ulonglong)(int)uVar21;
                    lVar34 = uVar29 * 0xa8;
                    uVar21 = (longlong)(int)uVar30;
                    if ((longlong)(int)uVar30 < (longlong)(uVar29 + 1)) {
                      uVar21 = uVar29 + 1;
                    }
                    piVar35 = (int *)(lVar37 + lVar34 + 0xbc);
                    do {
                      if (uVar21 - 1 == uVar29) {
                        FUN_142866248(&local_258,lVar37 + lVar34,
                                      *(undefined4 *)(lVar37 + lVar34 + 0x14),piVar25[1] + *piVar25)
                        ;
                        goto LAB_146946bf1;
                      }
                      uVar29 = uVar29 + 1;
                      iVar18 = *piVar35;
                      piVar35 = piVar35 + 0x2a;
                    } while (*(int *)(lVar37 + lVar34 + 0x14) == iVar18);
                    FUN_142866248(&local_258);
                    uVar21 = uVar29;
LAB_146946bf1:
                    uVar30 = *(uint *)(param_8 + 1);
                  } while ((int)uVar21 < (int)uVar30);
                }
                else {
                  iVar18 = *local_290 + local_290[1];
                  lVar37 = *param_8;
                  do {
                    lVar32 = (longlong)(int)uVar21;
                    lVar34 = lVar32 * 0xa8;
                    lVar24 = lVar37 + lVar34;
                    FUN_142866248(&local_258,lVar24,*(undefined4 *)(lVar37 + 0x14 + lVar34),iVar18);
                    lVar37 = *param_8;
                    uVar30 = *(uint *)(param_8 + 1);
                    piVar35 = (int *)(lVar37 + lVar34 + 0xbc);
                    do {
                      lVar32 = lVar32 + 1;
                      pwVar33 = local_2d0;
                      if ((int)uVar30 <= lVar32) goto LAB_146946c03;
                      uVar36 = (int)uVar21 + 1;
                      uVar21 = (ulonglong)uVar36;
                      iVar18 = *piVar35;
                      piVar35 = piVar35 + 0x2a;
                    } while (*(int *)(lVar37 + lVar34 + 0x14) == iVar18);
                    iVar18 = *(int *)(lVar24 + 0x14);
                  } while ((int)uVar36 < (int)uVar30);
                }
              }
LAB_146946c03:
              piVar25 = piVar25 + 3;
              uVar36 = uVar30;
            } while (piVar25 != local_270);
          }
          FUN_144b63b30(local_298);
          plVar23 = plStack_210;
          if (plStack_210 != (longlong *)0x0) {
            LOCK();
            plVar26 = plStack_210 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*plStack_210)(plStack_210);
              LOCK();
              piVar35 = (int *)((longlong)plVar23 + 0xc);
              *piVar35 = *piVar35 + -1;
              UNLOCK();
              if (*piVar35 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
          }
          plVar23 = local_238;
          piVar25 = local_280;
          piVar35 = local_2a8;
          if (local_238 != (longlong *)0x0) {
            LOCK();
            plVar26 = local_238 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*local_238)(local_238);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
          }
          plVar23 = local_1f0;
          if (local_1f0 != (longlong *)0x0) {
            LOCK();
            plVar26 = local_1f0 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*local_1f0)(local_1f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
          }
        }
      }
      piVar35 = piVar35 + 0xe;
    } while (piVar35 != piVar25);
  }
  FUN_144b615f0(uVar20);
  (**(code **)(*(longlong *)local_2d8[5] + 0x50))();
  piVar35 = local_1d8;
  if (local_f8 != (int *)0x0) {
    piVar35 = local_f8;
  }
  FUN_142868c98(piVar35,local_f0 & 0xffffffff);
  if (local_f8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146946d96 FUN_146946d96 body=115 status=ok
// SIG undefined FUN_146946d96(void)

undefined8 * FUN_146946d96(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 146946e0a FUN_146946e0a body=64 status=ok
// SIG undefined FUN_146946e0a(void)

longlong FUN_146946e0a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14694d62a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa8 + *param_1;
  FUN_1406d7a18(lVar2);
  return lVar2;
}



// FUNCTION 146946e4a FUN_146946e4a body=37 status=ok
// SIG undefined FUN_146946e4a(void)

void FUN_146946e4a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149ed7760;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 146946e70 FUN_146946e70 body=92 status=ok
// SIG undefined FUN_146946e70(void)

void FUN_146946e70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14698158e();
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146946ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146946ecc thunk_FUN_146946e70 body=5 status=ok
// SIG undefined thunk_FUN_146946e70(void)

void thunk_FUN_146946e70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14698158e();
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146946ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146946ed2 FUN_146946ed2 body=292 status=ok
// SIG undefined FUN_146946ed2(void)

void FUN_146946ed2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  plVar1 = DAT_14c968098;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_146946fc9;
  (**(code **)(*DAT_14c968098 + 0x78))(DAT_14c968098,&local_60);
  fVar2 = *(float *)(param_2 + 0x24) + local_5c;
  fVar3 = *(float *)(param_2 + 0x20) + local_60;
  FUN_144b016b8(*(undefined8 *)(param_1 + 0x20),&local_60);
  if ((fVar3 != local_60) || (NAN(fVar3) || NAN(local_60))) {
LAB_146946f56:
    local_60 = fVar3;
    local_5c = fVar2;
    local_58 = fVar3;
    local_54 = fVar2;
    FUN_14698192c(*(undefined8 *)(param_1 + 0x20),&local_78);
    local_70 = local_78;
    local_88 = 0;
    (**(code **)(*plVar1 + 0x110))(plVar1,&local_68,&local_60);
    fVar2 = local_64;
    fVar3 = local_68;
  }
  else if ((fVar2 != local_5c) || (NAN(fVar2) || NAN(local_5c))) goto LAB_146946f56;
  FUN_1469807c6(*(undefined8 *)(param_1 + 0x20),CONCAT44(fVar2,fVar3));
LAB_146946fc9:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146946ff8 FUN_146946ff8 body=60 status=ok
// SIG undefined FUN_146946ff8(void)

void FUN_146946ff8(longlong param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = 0x38;
  if ((*(char *)(param_1 + 0x3c) == '\0') && (lVar3 = 0x30, *(char *)(param_1 + 0x34) != '\x01')) {
    uVar1 = 1;
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + lVar3);
    uVar2 = 1;
  }
  *param_2 = uVar2;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  return;
}



// FUNCTION 146947034 FUN_146947034 body=238 status=ok
// SIG undefined FUN_146947034(void)

void FUN_146947034(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 auStack_57 [7];
  undefined8 local_50 [2];
  undefined1 local_40 [8];
  undefined8 local_38 [2];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[4] != 0) {
    if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((char)param_1[3] == '\0') {
    (**(code **)(*param_1 + 0x28))(param_1,&local_28);
    if (local_28 != (longlong *)0x0) {
      if (param_2 == '\0') {
        puVar3 = (undefined8 *)(auStack_57 + 7);
        local_58 = DAT_14c96b23b;
        puVar4 = &local_58;
      }
      else {
        puVar3 = local_38;
        local_40[0] = DAT_14c96b23a;
        puVar4 = auStack_57 + 0x17;
      }
      puVar4[1] = 1;
      *puVar3 = 0;
      puVar3[1] = 0;
      (**(code **)(*local_28 + 0x1c0))();
    }
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
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146947140 FUN_146947140 body=47 status=ok
// SIG undefined FUN_146947140(void)

void FUN_146947140(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined4 *)(param_1 + 0x38) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 0x38) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x3c) != '\x01') goto LAB_14694715a;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x3c) = uVar1;
  }
LAB_14694715a:
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 146947170 FUN_146947170 body=11 status=ok
// SIG undefined FUN_146947170(void)

void FUN_146947170(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong lStack_78;
  longlong lStack_70;
  undefined1 auStack_68 [8];
  longlong *plStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  longlong lStack_38;
  longlong *plStack_30;
  ulonglong uStack_28;
  
  if ((char)param_1[3] != '\x01') {
    return;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x28))(param_1,&lStack_38);
  if (lStack_38 == 0) goto LAB_1469472ea;
  FUN_1469801e0(&lStack_48);
  plVar1 = plStack_40;
  if (plStack_40 == (longlong *)0x0) {
    param_1[4] = lStack_48;
    plVar5 = (longlong *)param_1[5];
    if (plVar5 != (longlong *)0x0) {
      param_1[5] = 0;
LAB_146947207:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000146947232:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    param_1[4] = lStack_48;
    plVar5 = (longlong *)param_1[5];
    if (plStack_40 == plVar5) {
      LOCK();
      plVar5 = plStack_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar1;
        goto joined_r0x000146947232;
      }
    }
    else {
      param_1[5] = (longlong)plStack_40;
      if (plVar5 != (longlong *)0x0) goto LAB_146947207;
    }
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plStack_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
      }
    }
  }
  lVar4 = param_1[4];
  lStack_58 = lStack_38;
  plStack_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_140763be6(lVar4,&lStack_58);
  plVar1 = DAT_14c968098;
  lStack_78 = param_1[4];
  lStack_70 = param_1[5];
  if (lStack_70 != 0) {
    LOCK();
    *(int *)(lStack_70 + 8) = *(int *)(lStack_70 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_68,&lStack_78,1);
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plStack_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
      }
    }
  }
LAB_1469472ea:
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
      }
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14694717c FUN_14694717c body=437 status=ok
// SIG undefined FUN_14694717c(void)

void FUN_14694717c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x28))(param_1,&local_38);
  if (local_38 == 0) goto LAB_1469472ea;
  FUN_1469801e0(&local_48);
  plVar1 = local_40;
  if (local_40 == (longlong *)0x0) {
    param_1[4] = local_48;
    plVar5 = (longlong *)param_1[5];
    if (plVar5 != (longlong *)0x0) {
      param_1[5] = 0;
LAB_146947207:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000146947232:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    param_1[4] = local_48;
    plVar5 = (longlong *)param_1[5];
    if (local_40 == plVar5) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar1;
        goto joined_r0x000146947232;
      }
    }
    else {
      param_1[5] = (longlong)local_40;
      if (plVar5 != (longlong *)0x0) goto LAB_146947207;
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  lVar4 = param_1[4];
  local_58 = local_38;
  local_50 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_140763be6(lVar4,&local_58);
  plVar1 = DAT_14c968098;
  local_78 = param_1[4];
  local_70 = param_1[5];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,local_68,&local_78,1);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
LAB_1469472ea:
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146947332 FUN_146947332 body=312 status=ok
// SIG undefined FUN_146947332(void)

longlong * FUN_146947332(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 1;
  *(undefined1 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x3c) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *puVar3 = &PTR_FUN_149ed90a0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *param_1 = (longlong)puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eda540;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = (longlong)plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  plVar4 = (longlong *)*param_1;
  *(undefined1 *)(plVar4 + 0xc) = 1;
  if (plVar4 + 8 != param_2) {
    if (plVar4[8] != 0) {
      FUN_1400020a8();
    }
    plVar4[8] = *param_2;
    *param_2 = 0;
    *(int *)(plVar4 + 9) = (int)param_2[1];
    *(undefined4 *)((longlong)plVar4 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  (**(code **)(*plVar4 + 0x58))(plVar4);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14694746a FUN_14694746a body=284 status=ok
// SIG undefined FUN_14694746a(void)

longlong * FUN_14694746a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 1;
  *(undefined1 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x3c) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *puVar3 = &PTR_FUN_149ed90a0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *param_1 = (longlong)puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eda540;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = (longlong)plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  plVar4 = (longlong *)*param_1;
  *(undefined1 *)(plVar4 + 0xc) = 2;
  FUN_1410e5bda(plVar4 + 10,param_2);
  (**(code **)(*plVar4 + 0x58))(plVar4);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146947586 FUN_146947586 body=380 status=ok
// SIG undefined FUN_146947586(void)

longlong * FUN_146947586(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 1;
  *(undefined1 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x3c) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *puVar3 = &PTR_FUN_149ed90a0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *param_1 = (longlong)puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eda540;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = (longlong)plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  plVar4 = (longlong *)*param_1;
  *(char *)(plVar4 + 0xc) = ((int)param_3[1] != 0) * '\x02' | 1 < (int)param_2[1];
  if (plVar4 + 8 != param_2) {
    if (plVar4[8] != 0) {
      FUN_1400020a8();
    }
    plVar4[8] = *param_2;
    *param_2 = 0;
    *(int *)(plVar4 + 9) = (int)param_2[1];
    *(undefined4 *)((longlong)plVar4 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  FUN_1410e5bda(plVar4 + 10,param_3);
  (**(code **)(*plVar4 + 0x58))(plVar4);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146947702 FUN_146947702 body=40 status=ok
// SIG undefined FUN_146947702(void)

void FUN_146947702(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_149ed77d0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



// FUNCTION 146947736 FUN_146947736 body=226 status=ok
// SIG undefined FUN_146947736(void)

undefined4 * FUN_146947736(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
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
  undefined4 *puVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68 [16];
  longlong *local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *param_3;
  local_70 = param_3[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_14497fa56(uVar3,local_68,&local_78);
  FUN_140f0b848();
  puVar15 = (undefined4 *)&DAT_14c96b0c0;
  if (local_20 != '\0') {
    puVar15 = local_68;
  }
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  uVar7 = puVar15[4];
  uVar8 = puVar15[5];
  uVar9 = puVar15[6];
  uVar10 = puVar15[7];
  uVar11 = puVar15[8];
  uVar12 = puVar15[9];
  uVar13 = puVar15[10];
  uVar14 = puVar15[0xb];
  *param_2 = *puVar15;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  param_2[4] = uVar7;
  param_2[5] = uVar8;
  param_2[6] = uVar9;
  param_2[7] = uVar10;
  param_2[8] = uVar11;
  param_2[9] = uVar12;
  param_2[10] = uVar13;
  param_2[0xb] = uVar14;
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(puVar15 + 0xc);
  if ((local_20 == '\x01') && (local_28 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14694781c FUN_14694781c body=50 status=ok
// SIG undefined FUN_14694781c(void)

void FUN_14694781c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x128);
  lVar2 = *(longlong *)(param_1 + 0x18) + 8;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  *param_2 = *(undefined8 *)(lVar2 + 0x38);
  lVar1 = *(longlong *)(lVar2 + 0x40);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14694784e FUN_14694784e body=152 status=ok
// SIG undefined FUN_14694784e(void)

undefined8 FUN_14694784e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"Unimplemented";
  local_30 = 0xd;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"Events";
  local_30 = 6;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_2,local_40,local_3c,L"Unimplemented");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469478f0 FUN_1469478f0 body=482 status=ok
// SIG undefined FUN_1469478f0(void)

undefined8 FUN_1469478f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14006620a(local_b0,param_1 + 0x20,1);
  FUN_140233b1a(local_a0,local_b0);
  local_60 = L"Char";
  local_58 = 4;
  FUN_1446e940c(local_d4,&local_60);
  local_60 = L"Events";
  local_58 = 6;
  FUN_1446e940c(local_d8,&local_60);
  FUN_140208bae(local_d0,local_d8,local_d4,L"Char({0})");
  FUN_14023409e(&local_c0,local_d0,1);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(local_50,local_a0);
  local_78 = &local_40;
  local_80 = &local_60;
  FUN_14010d304(&local_70);
  local_90 = local_c0;
  local_88 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_90,&local_70);
  FUN_14007f2db(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146947ad4 FUN_146947ad4 body=449 status=ok
// SIG undefined FUN_146947ad4(void)

undefined8 FUN_146947ad4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1459c4454(param_1 + 0x20,local_98,1);
  local_58 = L"Key";
  local_50 = 3;
  FUN_1446e940c(local_bc,&local_58);
  local_58 = L"Events";
  local_50 = 6;
  FUN_1446e940c(local_c0,&local_58);
  FUN_140208bae(local_b8,local_c0,local_bc,L"Key({0})");
  FUN_14023409e(&local_a8,local_b8,1);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(local_48,local_98);
  local_70 = &local_38;
  local_78 = &local_58;
  FUN_14010d304(&local_68);
  local_88 = local_a8;
  local_80 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_88,&local_68);
  FUN_14007f2db(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146947c9a FUN_146947c9a body=622 status=ok
// SIG undefined FUN_146947c9a(void)

undefined8 FUN_146947c9a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_138 [40];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  wchar_t **local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50 [4];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  local_e0 = *(undefined8 *)(param_1 + 0x28);
  local_d8 = *(longlong **)(param_1 + 0x30);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
    UNLOCK();
  }
  FUN_1459c4454(&local_e8,local_d0,1);
  local_90 = L"AnalogInput";
  local_88[0] = 0xb;
  FUN_1446e940c(local_10c,&local_90);
  local_90 = L"Events";
  local_88[0] = 6;
  FUN_1446e940c(local_110,&local_90);
  FUN_140208bae(local_108,local_110,local_10c,L"AnalogInput(key:{0}, value:{1}");
  FUN_14023409e(&local_f8,local_108,1);
  local_90 = (wchar_t *)CONCAT44(local_90._4_4_,4);
  FUN_14023423e(local_80,local_d0);
  local_70 = 2;
  local_60 = 0;
  local_58 = 0;
  local_a8 = local_50;
  local_b0 = &local_90;
  local_68 = uVar3;
  FUN_14010d304(&local_a0);
  local_c0 = local_f8;
  local_b8 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_c0,&local_a0);
  FUN_14007f2db(local_a0,local_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x30;
  do {
    plVar4 = *(longlong **)((longlong)local_88 + lVar5 + -8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      *(undefined8 *)((longlong)local_88 + lVar5 + -8) = 0;
      *(undefined4 *)((longlong)local_88 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != -0x10);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f0 + 0x10))(local_f0);
      }
    }
  }
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  plVar4 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_50[0] ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146947f0a FUN_146947f0a body=658 status=ok
// SIG undefined FUN_146947f0a(void)

undefined8 FUN_146947f0a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  longlong *local_180 [2];
  undefined8 local_170;
  longlong *local_168;
  longlong *local_160 [2];
  undefined8 local_150;
  longlong *local_148;
  wchar_t **local_140;
  ulonglong *local_138;
  longlong local_130;
  undefined4 local_128;
  wchar_t *local_120;
  undefined4 local_118 [2];
  undefined1 local_110 [16];
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80 [10];
  
  local_80[0] = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  FUN_1459c4454(param_1 + 0x40,local_160,1);
  local_120 = L"Pointer";
  local_118[0] = 7;
  FUN_1446e940c(local_184,&local_120);
  local_120 = L"Events";
  local_118[0] = 6;
  FUN_1446e940c(local_188,&local_120);
  FUN_140208bae(local_180,local_188,local_184,L"Pointer(key:{0}, pos:{1}x{2}, delta:{3}x{4})");
  FUN_14023409e(&local_170,local_180,1);
  local_120 = (wchar_t *)CONCAT44(local_120._4_4_,4);
  FUN_14023423e(local_110,local_160);
  local_100 = 2;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 2;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 2;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 2;
  local_90 = 0;
  local_88 = 0;
  local_138 = local_80;
  local_140 = &local_120;
  local_f8 = uVar4;
  local_d8 = uVar5;
  local_b8 = uVar3;
  local_98 = uVar2;
  FUN_14010d304(&local_130);
  local_150 = local_170;
  local_148 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_168 + 1) = (int)local_168[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_150,&local_130);
  FUN_14007f2db(local_130,local_128);
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  lVar7 = 0x90;
  do {
    plVar6 = *(longlong **)((longlong)local_118 + lVar7 + -8);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))();
      *(undefined8 *)((longlong)local_118 + lVar7 + -8) = 0;
      *(undefined4 *)((longlong)local_118 + lVar7) = 0;
    }
    lVar7 = lVar7 + -0x20;
  } while (lVar7 != -0x10);
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_168 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_168 + 0x10))(local_168);
      }
    }
  }
  if (local_160[0] != (longlong *)0x0) {
    (**(code **)(*local_160[0] + 0x10))();
  }
  if (local_180[0] != (longlong *)0x0) {
    (**(code **)(*local_180[0] + 0x10))();
  }
  if ((local_80[0] ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469481a2 FUN_1469481a2 body=208 status=ok
// SIG undefined FUN_1469481a2(void)

ulonglong FUN_1469481a2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  undefined7 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_1469481cc:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_1469481cc;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = *param_2;
  lVar6 = lVar9;
  if (plVar8 == (longlong *)0x0) {
    lVar6 = 0;
  }
  if (lVar6 == 0 || lVar6 == param_1) {
LAB_1469481eb:
    unaff_RBX = 0;
  }
  else {
    do {
      uVar7 = (undefined7)(unaff_RBX >> 8);
      unaff_RBX = CONCAT71(uVar7,lVar9 == param_1);
      if (lVar9 == param_1) {
        unaff_RBX = CONCAT71(uVar7,1);
        break;
      }
      plVar3 = *(longlong **)(lVar9 + 0x48);
      if (plVar3 == (longlong *)0x0) goto LAB_1469481eb;
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1469481eb;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar5 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar10);
      lVar9 = *(longlong *)(lVar9 + 0x40);
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
    } while (lVar9 != 0);
  }
  if (plVar8 != (longlong *)0x0) {
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 146948272 FUN_146948272 body=100 status=ok
// SIG undefined FUN_146948272(void)

ulonglong FUN_146948272(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong unaff_RBX;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = param_1;
  do {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(char *)((longlong)plVar6 + 0x3a));
    if (*(char *)((longlong)plVar6 + 0x3a) != '\x01') {
      param_1 = (longlong *)0x0;
      goto LAB_1469482cc;
    }
    plVar5 = (longlong *)plVar6[9];
    param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (plVar5 == (longlong *)0x0) goto LAB_1469482cc;
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_1469482cc;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
    plVar6 = (longlong *)plVar6[8];
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      param_1 = plVar5;
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        param_1 = plVar5;
      }
    }
  } while (plVar6 != (longlong *)0x0);
  param_1 = (longlong *)(unaff_RBX & 0xffffffff);
LAB_1469482cc:
  return (ulonglong)param_1 & 0xffffffff;
}



// FUNCTION 1469482d6 FUN_1469482d6 body=1088 status=ok
// SIG undefined FUN_1469482d6(void)

void FUN_1469482d6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8 [16];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar15 = *param_2;
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  lVar11 = *(longlong *)(param_1 + 0x98);
  if ((longlong)*(int *)(param_1 + 0xa0) == 0) {
    bVar17 = false;
    lVar12 = lVar11;
  }
  else {
    lVar13 = lVar11 + (longlong)*(int *)(param_1 + 0xa0) * 0x18;
    do {
      plVar8 = *(longlong **)(lVar11 + 0x10);
      if (plVar8 == (longlong *)0x0) {
LAB_1469483c0:
        lVar12 = 0;
      }
      else {
        iVar6 = (int)plVar8[1];
        do {
          if (iVar6 == 0) goto LAB_1469483c0;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar17 = iVar6 == iVar4;
          if (bVar17) {
            *(int *)(plVar8 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar17);
        lVar12 = *(longlong *)(lVar11 + 8);
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
      bVar17 = lVar12 == lVar15;
      lVar12 = lVar11;
    } while ((!bVar17) && (lVar11 = lVar11 + 0x18, lVar12 = lVar13, lVar11 != lVar13));
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar15 = *param_2;
  if ((((lVar15 == 0) || (lVar15 == param_1)) || (*(longlong *)(lVar15 + 0xa8) == 0)) ||
     (cVar5 = FUN_1469488ac(param_1), cVar5 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  if (!(bool)(bVar17 & lVar12 != 0)) {
    local_e8 = (longlong *)(param_1 + 0x98);
    local_58 = (longlong *)0x0;
    local_50 = 0x1000000001;
    local_d8[0] = param_1;
    iVar6 = 1;
    lVar15 = 0;
    local_e0 = param_1;
    do {
      plVar10 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar10 = local_d8;
      }
      lVar11 = (longlong)*(int *)(plVar10[lVar15] + 0xa0);
      if (lVar11 != 0) {
        lVar13 = *(longlong *)(plVar10[lVar15] + 0x98);
        lVar11 = lVar11 * 0x18 + lVar13;
        do {
          uVar3 = local_50;
          plVar10 = *(longlong **)(lVar13 + 0x10);
          if (plVar10 != (longlong *)0x0) {
            iVar6 = (int)plVar10[1];
            do {
              if (iVar6 == 0) goto LAB_146948586;
              LOCK();
              iVar4 = (int)plVar10[1];
              bVar17 = iVar6 == iVar4;
              if (bVar17) {
                *(int *)(plVar10 + 1) = iVar6 + 1;
                iVar4 = iVar6;
              }
              iVar6 = iVar4;
              UNLOCK();
            } while (!bVar17);
            lVar12 = *(longlong *)(lVar13 + 8);
            if (lVar12 != 0) {
              lVar14 = (longlong)(int)local_50;
              uVar7 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar7);
              if (local_50._4_4_ < uVar7) {
                FUN_14694d12e(local_d8,uVar3 & 0xffffffff);
              }
              plVar8 = local_58;
              if (local_58 == (longlong *)0x0) {
                plVar8 = local_d8;
              }
              plVar8[lVar14] = lVar12;
            }
            LOCK();
            plVar8 = plVar10 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
LAB_146948586:
          lVar13 = lVar13 + 0x18;
        } while (lVar13 != lVar11);
        iVar6 = (int)local_50;
      }
      lVar11 = local_e0;
      lVar15 = lVar15 + 1;
      lVar13 = (longlong)iVar6;
    } while (lVar15 < lVar13);
    lVar15 = *param_2;
    plVar10 = (longlong *)param_2[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      lVar13 = (longlong)(int)local_50;
      iVar6 = (int)local_50;
    }
    plVar8 = local_d8;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (iVar6 == 0) {
      bVar17 = true;
      bVar18 = false;
    }
    else {
      plVar1 = plVar8 + lVar13;
      lVar13 = lVar13 << 3;
      do {
        bVar18 = lVar15 == *plVar8;
        plVar16 = plVar8;
        if (bVar18) break;
        plVar8 = plVar8 + 1;
        lVar13 = lVar13 + -8;
        plVar16 = plVar1;
      } while (lVar13 != 0);
      bVar17 = plVar16 != (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    plVar10 = local_e8;
    if (!(bool)(bVar17 & bVar18)) {
      lVar15 = *param_2;
      iVar6 = *(int *)(lVar11 + 0xa0);
      *(uint *)(lVar11 + 0xa0) = iVar6 + 1U;
      if (*(uint *)(lVar11 + 0xa4) < iVar6 + 1U) {
        FUN_146952c28(local_e8,iVar6);
      }
      puVar9 = (undefined8 *)((longlong)iVar6 * 0x18 + *plVar10);
      lVar11 = *param_2;
      plVar10 = (longlong *)param_2[1];
      if (plVar10 == (longlong *)0x0) {
        *puVar9 = *(undefined8 *)(lVar15 + 0xa8);
        puVar9[1] = lVar11;
        puVar9[2] = 0;
      }
      else {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        *puVar9 = *(undefined8 *)(lVar15 + 0xa8);
        puVar9[1] = lVar11;
        puVar9[2] = plVar10;
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146948844 FUN_146948844 body=103 status=ok
// SIG undefined FUN_146948844(void)

void FUN_146948844(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x98) + uVar1) == param_2) {
        if ((int)(uVar1 >> 3) * -0x55555555 == -1) {
          return;
        }
        FUN_146952cbc(param_1 + 0x98);
        FUN_146952d32(param_1 + 0x98);
        return;
      }
      uVar1 = uVar1 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0xa0) * 0x18 != uVar1);
  }
  return;
}



// FUNCTION 1469488ac FUN_1469488ac body=124 status=ok
// SIG undefined FUN_1469488ac(void)

byte FUN_1469488ac(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  if ((((((*(float *)(param_1 + 200) != *(float *)(param_2 + 200)) ||
         (NAN(*(float *)(param_1 + 200)) || NAN(*(float *)(param_2 + 200)))) ||
        (*(float *)(param_1 + 0xcc) != *(float *)(param_2 + 0xcc))) ||
       ((NAN(*(float *)(param_1 + 0xcc)) || NAN(*(float *)(param_2 + 0xcc)) ||
        (*(float *)(param_1 + 0xd0) != *(float *)(param_2 + 0xd0))))) ||
      ((NAN(*(float *)(param_1 + 0xd0)) || NAN(*(float *)(param_2 + 0xd0)) ||
       ((*(float *)(param_1 + 0xd4) != *(float *)(param_2 + 0xd4) ||
        (NAN(*(float *)(param_1 + 0xd4)) || NAN(*(float *)(param_2 + 0xd4)))))))) ||
     ((*(float *)(param_1 + 0xd8) != *(float *)(param_2 + 0xd8) ||
      (NAN(*(float *)(param_1 + 0xd8)) || NAN(*(float *)(param_2 + 0xd8)))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(*(float *)(param_2 + 0xdc) == *(float *)(param_1 + 0xdc)) & 1;
  }
  return bVar1;
}



// FUNCTION 146948928 FUN_146948928 body=276 status=ok
// SIG undefined FUN_146948928(void)

void FUN_146948928(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146952e52(param_1,&local_4c,param_2);
  if ((longlong)local_4c != -1) {
    iVar1 = *(int *)(*param_1 + 8 + (longlong)local_4c * 0x18);
    FUN_146952ed8(param_1);
    lVar7 = param_1[10];
    lVar5 = (longlong)iVar1 * 0x40;
    iVar8 = *(int *)(lVar7 + 0x20 + lVar5);
    iVar3 = *(int *)(lVar7 + 0x28 + lVar5);
    if (iVar8 <= iVar3) {
      lVar7 = lVar7 + lVar5;
      iVar4 = *(int *)(lVar7 + 0x2c);
      do {
        iVar6 = *(int *)(lVar7 + 0x24);
        if (*(int *)(lVar7 + 0x24) <= iVar4) {
          do {
            local_4c = iVar1;
            FUN_1428664a6((longlong)((int)param_1[0x18] * iVar6 + iVar8) * 0x10 + param_1[0x11],
                          &local_4c,1);
            iVar4 = *(int *)(lVar7 + 0x2c);
            bVar2 = iVar6 < iVar4;
            iVar6 = iVar6 + 1;
          } while (bVar2);
          iVar3 = *(int *)(lVar7 + 0x28);
        }
        bVar2 = iVar8 < iVar3;
        iVar8 = iVar8 + 1;
      } while (bVar2);
    }
    FUN_146948a3e(param_1 + 10,iVar1,1);
  }
  FUN_146948844(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146948a3e FUN_146948a3e body=115 status=ok
// SIG undefined FUN_146948a3e(void)

void FUN_146948a3e(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)((longlong)param_2 * 0x40 + *param_1 + 0x18);
    iVar3 = param_3;
    do {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar2 = (longlong *)plVar4[-2];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar4 = plVar4 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_146952f30(param_1,param_2,param_3);
  return;
}



// FUNCTION 146948ab2 FUN_146948ab2 body=168 status=ok
// SIG undefined FUN_146948ab2(void)

void FUN_146948ab2(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(uint7)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return;
          }
          *(undefined4 *)(param_1[10] + 0x38 + (longlong)(int)puVar1[1] * 0x40) = param_3;
          return;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 146948b5a FUN_146948b5a body=132 status=ok
// SIG undefined FUN_146948b5a(void)

undefined8 FUN_146948b5a(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 146948bde FUN_146948bde body=241 status=ok
// SIG undefined FUN_146948bde(void)

void FUN_146948bde(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar9 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*puVar2 == param_2) {
          if (puVar2 + 1 == (ulonglong *)0x0 || puVar2 == (ulonglong *)0x0) {
            return;
          }
          lVar3 = param_1[10];
          lVar6 = (longlong)(int)puVar2[1] * 0x40;
          *(undefined8 *)(lVar3 + 0x10 + lVar6) = *param_3;
          plVar5 = (longlong *)param_3[1];
          plVar7 = *(longlong **)(lVar3 + 0x18 + lVar6);
          if (plVar7 == plVar5) {
            return;
          }
          plVar8 = (longlong *)(lVar3 + lVar6 + 0x18);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
            plVar7 = (longlong *)*plVar8;
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          *plVar8 = (longlong)plVar5;
          return;
        }
        iVar9 = (int)puVar2[2];
      } while (iVar9 != -1);
    }
  }
  return;
}



// FUNCTION 146948cd0 FUN_146948cd0 body=24 status=ok
// SIG undefined FUN_146948cd0(void)

void FUN_146948cd0(longlong param_1,undefined8 *param_2)

{
  if ((undefined8 *)(param_1 + 0x18) != param_2) {
    *(undefined8 *)(param_1 + 0x18) = *param_2;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 146948ce8 FUN_146948ce8 body=85 status=ok
// SIG undefined FUN_146948ce8(void)

longlong FUN_146948ce8(longlong param_1,undefined1 param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0xb0) = param_2;
  *(uint *)(param_1 + 0xb4) = (*(uint *)(param_1 + 0xb4) & 0xfffffff1) + (param_3 & 0xff) * 8 + 4;
  return param_1;
}



// FUNCTION 146948d3e FUN_146948d3e body=59 status=ok
// SIG undefined FUN_146948d3e(void)

longlong FUN_146948d3e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfd;
  plVar2 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfb;
  return param_1;
}



// FUNCTION 146948d7a FUN_146948d7a body=398 status=ok
// SIG undefined FUN_146948d7a(void)

longlong FUN_146948d7a(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  float *local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xf9 | 2;
  fVar6 = *(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x20);
  fVar5 = *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x24);
  fVar3 = *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x1c);
  local_8c = *(float *)(param_2 + 0x30);
  local_74 = fVar4 + fVar6 + local_8c;
  local_90 = *(float *)(param_2 + 0x2c);
  local_78 = fVar3 + fVar5 + local_90;
  local_98 = &local_78;
  fVar2 = *(float *)(param_2 + 0x20) * 0.0;
  fVar1 = *(float *)(param_2 + 0x1c) * 0.0;
  local_7c = fVar6 + fVar2 + local_8c;
  local_80 = fVar5 + fVar1 + local_90;
  fVar5 = *(float *)(param_2 + 0x28) * 0.0;
  fVar6 = *(float *)(param_2 + 0x24) * 0.0;
  local_84 = fVar4 + fVar5 + local_8c;
  local_88 = fVar3 + fVar6 + local_90;
  local_8c = fVar5 + fVar2 + local_8c;
  local_90 = fVar6 + fVar1 + local_90;
  FUN_1401bbd10();
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146948f0a FUN_146948f0a body=47 status=ok
// SIG undefined FUN_146948f0a(void)

longlong FUN_146948f0a(longlong param_1)

{
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xf9 | 2;
  FUN_1401bbd10(param_1);
  return param_1;
}



// FUNCTION 146948f3a FUN_146948f3a body=196 status=ok
// SIG undefined FUN_146948f3a(void)

float * FUN_146948f3a(float *param_1,float *param_2)

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
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar9 = fVar8;
  if (fVar8 <= fVar2) {
    fVar9 = fVar2;
  }
  if (fVar9 <= fVar4) {
    fVar9 = fVar4;
  }
  fVar10 = fVar6;
  if (fVar6 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = fVar7;
  if (fVar7 <= fVar1) {
    fVar9 = fVar1;
  }
  if (fVar9 <= fVar3) {
    fVar9 = fVar3;
  }
  fVar11 = fVar5;
  if (fVar5 <= fVar9) {
    fVar11 = fVar9;
  }
  if (fVar2 <= fVar8) {
    fVar8 = fVar2;
  }
  if (fVar4 <= fVar8) {
    fVar8 = fVar4;
  }
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  if (fVar1 <= fVar7) {
    fVar7 = fVar1;
  }
  if (fVar3 <= fVar7) {
    fVar7 = fVar3;
  }
  if (fVar7 <= fVar5) {
    fVar5 = fVar7;
  }
  *param_2 = fVar5;
  param_2[1] = fVar6;
  param_2[2] = fVar11;
  param_2[3] = fVar10;
  return param_2;
}



// FUNCTION 146948ffe FUN_146948ffe body=89 status=ok
// SIG undefined FUN_146948ffe(void)

undefined8 * FUN_146948ffe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146953154(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 146949058 FUN_146949058 body=289 status=ok
// SIG undefined FUN_146949058(void)

undefined1 FUN_146949058(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  if (DAT_14c75ed44 == 0) {
    uVar5 = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c96b174) && (FUN_144b3d300(&DAT_14c96b174), DAT_14c96b174 == -1)) {
      DAT_14c96b160 = DAT_14c872be0;
      DAT_14c96b170 = '\0';
      atexit((_func_5014 *)&LAB_1428668c8);
      _Init_thread_footer(&DAT_14c96b174);
    }
    if ((DAT_14c96b170 != '\x01') || (uVar5 = DAT_14c96b168, DAT_14c96b160 != DAT_14c872be0)) {
      lVar6 = FUN_140d5712e();
      uVar3 = *(undefined8 *)(lVar6 + 0x28);
      plVar4 = *(longlong **)(lVar6 + 0x30);
      if (plVar4 == (longlong *)0x0) {
        DAT_14c96b168 = FUN_1467c5074(uVar3);
        DAT_14c96b170 = '\x01';
        DAT_14c96b160 = DAT_14c872be0;
        uVar5 = DAT_14c96b168;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        DAT_14c96b168 = FUN_1467c5074(uVar3);
        DAT_14c96b170 = '\x01';
        DAT_14c96b160 = DAT_14c872be0;
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uVar5 = DAT_14c96b168;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          uVar5 = DAT_14c96b168;
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            uVar5 = DAT_14c96b168;
          }
        }
      }
    }
  }
  return uVar5;
}



// FUNCTION 14694917a FUN_14694917a body=831 status=ok
// SIG undefined FUN_14694917a(void)

undefined8 FUN_14694917a(longlong param_1,uint param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_308 [40];
  longlong local_2e0;
  uint local_2d4;
  longlong local_2d0;
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [288];
  undefined1 *local_1a0;
  int local_198;
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined1 *local_60;
  ulonglong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  cVar2 = (char)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (*(int *)(param_1 + 0x130) - 1U == param_2) {
    if (cVar2 == '\x04') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_308);
    }
  }
  else if (1 < *(int *)(param_1 + 0x130)) {
    local_188[0] = DAT_14c96b238;
    local_60 = (undefined1 *)0x0;
    local_58 = 0x400000000;
    local_50 = 0;
    local_2e0 = param_1 + 8;
    lVar6 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar6 = local_2e0;
    }
    local_2d0 = (longlong)(int)param_2 * 9;
    lVar6 = lVar6 + (longlong)(int)param_2 * 0x48;
    plVar1 = *(longlong **)(lVar6 + 0x38);
    local_2d4 = param_2;
    FUN_142877f32(plVar1,2,0);
    (**(code **)(*plVar1 + 0x238))(plVar1,lVar6,local_188);
    uVar7 = local_58 & 0xffffffff;
    if (0 < (int)(uint)local_58) {
      iVar11 = (uint)(cVar2 == '\x04') * 2 + -1;
      uVar9 = (uint)local_58 - 1;
      if (cVar2 == '\x04') {
        uVar9 = 0;
      }
      if (param_4 != '\0') {
        puVar4 = local_60;
        if (local_60 == (undefined1 *)0x0) {
          puVar4 = local_180;
        }
        lVar6 = *(longlong *)(param_1 + 0x128);
        if (*(longlong *)(param_1 + 0x128) == 0) {
          lVar6 = local_2e0;
        }
        lVar8 = 0;
        iVar3 = 0;
        do {
          if (*(longlong *)(puVar4 + lVar8 + 0x38) == *(longlong *)(lVar6 + 0x80 + local_2d0 * 8))
          goto LAB_14694930c;
          iVar3 = iVar3 + 1;
          lVar8 = lVar8 + 0x48;
        } while (uVar7 * 0x48 != lVar8);
        iVar3 = -1;
LAB_14694930c:
        uVar9 = iVar3 % (int)(uint)local_58 + iVar11;
      }
      if (uVar9 < (uint)local_58) {
        do {
          uVar10 = (ulonglong)uVar9;
          puVar4 = local_60;
          if (local_60 == (undefined1 *)0x0) {
            puVar4 = local_180;
          }
          if (*(char *)(*(longlong *)(puVar4 + uVar10 * 0x48 + 0x38) + 0x3a) == '\x01') {
            FUN_1469495b0(local_2c8,puVar4 + uVar10 * 0x48,param_3,DAT_14c96b238);
            lVar6 = (longlong)local_198;
            if (lVar6 < 1) {
              puVar4 = local_60;
              if (local_60 == (undefined1 *)0x0) {
                puVar4 = local_180;
              }
              cVar2 = (**(code **)(**(longlong **)(puVar4 + uVar10 * 0x48 + 0x38) + 400))();
              if (cVar2 == '\0') goto LAB_1469493ce;
              lVar6 = (longlong)local_198;
              puVar4 = local_1a0;
              if (local_1a0 == (undefined1 *)0x0) {
                puVar4 = local_2c0;
              }
              if (lVar6 != 0) goto LAB_146949396;
            }
            else {
              puVar4 = local_1a0;
              if (local_1a0 == (undefined1 *)0x0) {
                puVar4 = local_2c0;
              }
LAB_146949396:
              uVar7 = 0;
              while (*(char *)(*(longlong *)(puVar4 + uVar7 + 0x38) + 0x3a) == '\x01') {
                lVar8 = uVar7 + 0x48;
                uVar7 = uVar7 + 0x48;
                if (puVar4 + lVar8 == puVar4 + lVar6 * 0x48) goto LAB_146949423;
              }
              if ((int)(uVar7 >> 3) * 0x38e38e39 != -1) {
LAB_1469493ce:
                FUN_144715780(local_2c0);
                uVar7 = local_58 & 0xffffffff;
                goto LAB_146949351;
              }
            }
LAB_146949423:
            lVar6 = local_2e0;
            if (~local_2d4 + *(int *)(param_1 + 0x130) != 0) {
              FUN_14694d382(local_2e0,local_2d4 + 1);
              FUN_14694d3fc(lVar6);
            }
            puVar4 = local_60;
            if (local_60 == (undefined1 *)0x0) {
              puVar4 = local_180;
            }
            FUN_1402018be(param_1,puVar4 + uVar10 * 0x48);
            FUN_14694d4c4(local_2e0,local_2c0);
            FUN_144715780(local_2c0);
            FUN_144715780(local_180);
            uVar5 = 1;
            goto LAB_1469491c8;
          }
LAB_146949351:
          uVar9 = uVar9 + iVar11;
        } while ((-1 < (int)uVar9) && ((int)uVar9 < (int)uVar7));
      }
    }
    FUN_144715780(local_180);
  }
  uVar5 = 0;
LAB_1469491c8:
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1469495b0 FUN_1469495b0 body=292 status=ok
// SIG undefined FUN_1469495b0(void)

undefined1 * FUN_1469495b0(undefined1 *param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = (char)param_4;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0x400000000;
  param_1[0x138] = 0;
  if (param_3 == '\x04') {
    FUN_1469532bc(param_2,param_1,param_4);
  }
  else {
    FUN_146953430(param_2,param_1,param_4);
  }
  uVar1 = (ulonglong)*(int *)(param_1 + 0x130);
  if (1 < (longlong)uVar1) {
    lVar6 = uVar1 * 0x48;
    lVar8 = 0;
    uVar9 = 0;
    uVar7 = uVar1;
    do {
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + -0x48;
      if (uVar9 != (uVar7 & 0xffffffff)) {
        puVar3 = *(undefined1 **)(param_1 + 0x128);
        if (*(undefined1 **)(param_1 + 0x128) == (undefined1 *)0x0) {
          puVar3 = param_1 + 8;
        }
        puVar4 = (undefined8 *)(puVar3 + lVar8);
        puVar5 = local_78;
        for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined8 *)(puVar3 + lVar6);
        puVar5 = (undefined8 *)(puVar3 + lVar8);
        for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = local_78;
        puVar5 = (undefined8 *)(puVar3 + lVar6);
        for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        uVar1 = (ulonglong)*(uint *)(param_1 + 0x130);
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x48;
    } while ((longlong)uVar9 < (longlong)((int)(((uint)(uVar1 >> 0x1f) & 1) + (int)uVar1) >> 1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469496d6 FUN_1469496d6 body=137 status=ok
// SIG undefined FUN_1469496d6(void)

undefined8 FUN_1469496d6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140f0b848();
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  local_78 = &DAT_14c96b0c0;
  FUN_146949760(param_1,param_2,param_3,&local_68);
  FUN_14171dea8(&local_68);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146949760 FUN_146949760 body=359 status=ok
// SIG undefined FUN_146949760(void)

undefined1 *
FUN_146949760(longlong *param_1,undefined1 *param_2,undefined4 param_3,longlong param_4,
             longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar3 = DAT_14c96b238;
  *param_2 = DAT_14c96b238;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  FUN_1404dd558(param_1,param_2,0,0,uVar3);
  plVar2 = *(longlong **)(*param_1 + 8 + (longlong)((int)param_1[1] + -1) * 0x10);
  plVar8 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      plVar8 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar8 = plVar2;
    } while (!bVar11);
  }
  uVar10 = (ulonglong)*(int *)(param_2 + 0x130);
  if (0 < (longlong)uVar10) {
    lVar9 = uVar10 * 0x48 + -0x10;
    do {
      cVar5 = FUN_14694917a(param_2,uVar10 - 1 & 0xffffffff,param_3,1);
      if (cVar5 != '\0') break;
      puVar7 = *(undefined1 **)(param_2 + 0x128);
      if (*(undefined1 **)(param_2 + 0x128) == (undefined1 *)0x0) {
        puVar7 = param_2 + 8;
      }
      if (*(longlong *)(param_5 + 0x38) == *(longlong *)(puVar7 + lVar9)) {
        if (*(char *)(param_4 + 0x30) == '\x03') break;
        if (*(char *)(param_4 + 0x30) == '\x02') {
          FUN_14694917a(param_2,(int)uVar10 + -1,param_3,0);
          break;
        }
      }
      lVar9 = lVar9 + -0x48;
      bVar11 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar11);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return param_2;
}



// FUNCTION 1469498c8 FUN_1469498c8 body=45 status=ok
// SIG undefined FUN_1469498c8(void)

longlong FUN_1469498c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1458b1672(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146949906 FUN_146949906 body=29 status=ok
// SIG undefined FUN_146949906(void)

undefined8 FUN_146949906(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146949924 FUN_146949924 body=29 status=ok
// SIG undefined FUN_146949924(void)

undefined8 FUN_146949924(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146949942 FUN_146949942 body=29 status=ok
// SIG undefined FUN_146949942(void)

undefined8 FUN_146949942(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146949960 FUN_146949960 body=38 status=ok
// SIG undefined FUN_146949960(void)

undefined8 FUN_146949960(undefined8 param_1,int param_2)

{
  FUN_14695359c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469499ae FUN_1469499ae body=115 status=ok
// SIG undefined FUN_1469499ae(void)

longlong * FUN_1469499ae(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  cVar5 = (**(code **)(*param_1 + 0x50))(param_1,param_3);
  if ((cVar5 == '\0') || (plVar3 = (longlong *)param_1[2], plVar3 == (longlong *)0x0)) {
LAB_146949a10:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146949a10;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    *param_2 = param_1[1];
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 146949a22 FUN_146949a22 body=38 status=ok
// SIG undefined FUN_146949a22(void)

undefined8 FUN_146949a22(undefined8 param_1,int param_2)

{
  FUN_14695359c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146949a48 FUN_146949a48 body=129 status=ok
// SIG undefined FUN_146949a48(void)

ulonglong FUN_146949a48(undefined8 param_1,ulonglong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  
  plVar6 = (longlong *)FUN_146953612();
  iVar5 = (int)plVar6[1];
  iVar3 = (int)param_2[1];
  if (iVar5 == iVar3) {
    uVar7 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
    if (iVar5 < 2) goto LAB_146949abb;
    uVar7 = *param_2;
    lVar8 = 0;
    while( true ) {
      uVar1 = *(ushort *)(*plVar6 + lVar8);
      uVar4 = (uint)uVar1;
      uVar2 = *(ushort *)(uVar7 + lVar8);
      uVar9 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146949a8a;
        }
        iVar5 = uVar4 - uVar9;
        goto LAB_146949ac5;
      }
      if (uVar1 == 0) break;
LAB_146949a8a:
      lVar8 = lVar8 + 2;
    }
    iVar5 = 0;
LAB_146949ac5:
    bVar10 = iVar5 == 0;
  }
  else {
    uVar7 = (ulonglong)(uint)(iVar3 + iVar5);
    bVar10 = iVar3 + iVar5 == 1;
  }
  uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar10);
LAB_146949abb:
  return uVar7 & 0xffffffff;
}



// FUNCTION 146949b1a FUN_146949b1a body=54 status=ok
// SIG undefined FUN_146949b1a(void)

undefined1 FUN_146949b1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146949c52(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 146949b50 FUN_146949b50 body=31 status=ok
// SIG undefined FUN_146949b50(void)

undefined1
FUN_146949b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1469355be(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 146949b8c FUN_146949b8c body=70 status=ok
// SIG undefined FUN_146949b8c(void)

void FUN_146949b8c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14020648b(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146949bde FUN_146949bde body=37 status=ok
// SIG undefined FUN_146949bde(void)

void FUN_146949bde(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 146949c52 FUN_146949c52 body=76 status=ok
// SIG undefined FUN_146949c52(void)

longlong FUN_146949c52(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_144a787a6();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  return param_1;
}



// FUNCTION 146949cde FUN_146949cde body=70 status=ok
// SIG undefined FUN_146949cde(void)

undefined8 FUN_146949cde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_146949c52(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146949d4c FUN_146949d4c body=59 status=ok
// SIG undefined FUN_146949d4c(void)

undefined8 FUN_146949d4c(longlong *param_1)

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



// FUNCTION 146949d92 FUN_146949d92 body=38 status=ok
// SIG undefined FUN_146949d92(void)

void FUN_146949d92(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 146949e18 FUN_146949e18 body=44 status=ok
// SIG undefined FUN_146949e18(void)

void FUN_146949e18(undefined8 param_1,longlong *param_2)

{
  FUN_1410b3ba7(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146949e5a FUN_146949e5a body=54 status=ok
// SIG undefined FUN_146949e5a(void)

undefined1 FUN_146949e5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14588f37a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 146949eb8 FUN_146949eb8 body=59 status=ok
// SIG undefined FUN_146949eb8(void)

undefined8 FUN_146949eb8(longlong *param_1)

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



// FUNCTION 146949f56 FUN_146949f56 body=48 status=ok
// SIG undefined FUN_146949f56(void)

void FUN_146949f56(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1410b3ba7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 146949fa2 FUN_146949fa2 body=44 status=ok
// SIG undefined FUN_146949fa2(void)

void FUN_146949fa2(undefined8 param_1,longlong *param_2)

{
  FUN_1410b3ba7(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146949fe4 FUN_146949fe4 body=64 status=ok
// SIG undefined FUN_146949fe4(void)

undefined1 FUN_146949fe4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14588f37a(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 14694a04c FUN_14694a04c body=59 status=ok
// SIG undefined FUN_14694a04c(void)

undefined8 FUN_14694a04c(longlong *param_1)

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



// FUNCTION 14694a0ea FUN_14694a0ea body=48 status=ok
// SIG undefined FUN_14694a0ea(void)

void FUN_14694a0ea(longlong *param_1)

{
  if ((char)param_1[3] == '\x01') {
    FUN_1410b3ba7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 14694a164 FUN_14694a164 body=90 status=ok
// SIG undefined FUN_14694a164(void)

undefined1 FUN_14694a164(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14588f37a(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    FUN_14694a29c(param_2 + 0x18,param_3 + 0x18);
    FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 14694a1e6 FUN_14694a1e6 body=59 status=ok
// SIG undefined FUN_14694a1e6(void)

undefined8 FUN_14694a1e6(longlong *param_1)

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



// FUNCTION 14694a22c FUN_14694a22c body=34 status=ok
// SIG undefined FUN_14694a22c(void)

void FUN_14694a22c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1457f5696(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14694a29c FUN_14694a29c body=88 status=ok
// SIG undefined FUN_14694a29c(void)

undefined8 * FUN_14694a29c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14588f652(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14694a370 FUN_14694a370 body=59 status=ok
// SIG undefined FUN_14694a370(void)

undefined8 FUN_14694a370(longlong *param_1)

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



// FUNCTION 14694a3b6 FUN_14694a3b6 body=34 status=ok
// SIG undefined FUN_14694a3b6(void)

void FUN_14694a3b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1457f5636(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14694a428 FUN_14694a428 body=101 status=ok
// SIG undefined FUN_14694a428(void)

void FUN_14694a428(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_1428669ec(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14694a48e FUN_14694a48e body=63 status=ok
// SIG undefined FUN_14694a48e(void)

void FUN_14694a48e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14694a4ce(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14694a4ce FUN_14694a4ce body=117 status=ok
// SIG undefined FUN_14694a4ce(void)

ulonglong FUN_14694a4ce(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 14694a546 FUN_14694a546 body=83 status=ok
// SIG undefined FUN_14694a546(void)

void FUN_14694a546(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014694a58d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14694a59a FUN_14694a59a body=83 status=ok
// SIG undefined FUN_14694a59a(void)

void FUN_14694a59a(longlong param_1)

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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014694a5e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14694a5ee FUN_14694a5ee body=82 status=ok
// SIG undefined FUN_14694a5ee(void)

void FUN_14694a5ee(longlong param_1)

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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014694a63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14694a640 FUN_14694a640 body=284 status=ok
// SIG undefined FUN_14694a640(void)

undefined8 FUN_14694a640(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong in_RAX;
  uint7 uVar9;
  undefined7 uVar10;
  bool bVar11;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    cVar2 = param_1[8];
    uVar9 = (uint7)(in_RAX >> 8);
    in_RAX = CONCAT71(uVar9,cVar2);
    if (cVar2 != '\x02') {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 != iVar4 && iVar4 <= iVar5) {
        return 0;
      }
      if ((iVar5 == iVar4) && (in_RAX = (ulonglong)uVar9 << 8, cVar2 == '\0' || cVar1 == '\0')) {
        return 0;
      }
    }
  }
  cVar2 = *param_2;
  cVar3 = param_2[8];
  if (cVar2 == '\x02') {
    uVar10 = (undefined7)(in_RAX >> 8);
    bVar8 = true;
    if (cVar1 == '\x02') {
LAB_14694a757:
      bVar11 = true;
      goto LAB_14694a705;
    }
    bVar11 = true;
    if (cVar3 == '\x02') goto LAB_14694a705;
  }
  else {
    if (cVar3 != '\x02') {
      uVar6 = *(uint *)(param_2 + 0xc);
      in_RAX = (ulonglong)uVar6;
      uVar7 = *(uint *)(param_2 + 4);
      if ((uVar7 != uVar6 && (int)uVar6 <= (int)uVar7) ||
         ((uVar7 == uVar6 &&
          (in_RAX = (ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar2 == '\0'),
          cVar3 == '\0' || cVar2 == '\0')))) {
        return 0;
      }
    }
    uVar10 = (undefined7)(in_RAX >> 8);
    bVar11 = true;
    bVar8 = true;
    if (param_1[8] != '\x02') {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_2 + 4);
      bVar8 = iVar5 < iVar4;
      if (param_1[8] == '\x01') {
        bVar8 = iVar5 < iVar4;
        if (cVar2 == '\x01') {
          bVar8 = iVar5 <= iVar4;
        }
        uVar10 = 0;
        if (cVar1 == '\x02' || cVar3 == '\x02') goto LAB_14694a757;
        goto LAB_14694a6db;
      }
    }
    if (cVar1 == '\x02' || cVar3 == '\x02') goto LAB_14694a705;
  }
LAB_14694a6db:
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_2 + 0xc);
  bVar11 = iVar4 < iVar5;
  if (cVar1 == '\x01') {
    bVar11 = iVar4 < iVar5;
    if (cVar3 == '\x01') {
      bVar11 = iVar4 <= iVar5;
    }
  }
LAB_14694a705:
  return CONCAT71(uVar10,bVar8 & bVar11);
}



// FUNCTION 14694a75c FUN_14694a75c body=122 status=ok
// SIG undefined FUN_14694a75c(void)

void FUN_14694a75c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x18 + (longlong)(int)param_2 * 0x20);
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
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar5) << 5);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14694a7d6 FUN_14694a7d6 body=88 status=ok
// SIG undefined FUN_14694a7d6(void)

undefined8 * FUN_14694a7d6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14694a82e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14694a82e FUN_14694a82e body=98 status=ok
// SIG undefined FUN_14694a82e(void)

void FUN_14694a82e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14694a8e2 FUN_14694a8e2 body=128 status=ok
// SIG undefined FUN_14694a8e2(void)

undefined1 FUN_14694a8e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      uVar3 = *(undefined4 *)(param_3 + lVar8);
      *(undefined4 *)(param_2 + 3 + lVar8) = *(undefined4 *)(param_3 + 3 + lVar8);
      *(undefined4 *)(param_2 + lVar8) = uVar3;
      lVar7 = *(longlong *)(param_3 + 8 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 8 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar8;
      *(longlong *)(lVar1 + 8) = lVar7;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar3;
      *(undefined4 *)(lVar1 + 0x18) = uVar4;
      *(undefined4 *)(lVar1 + 0x1c) = uVar5;
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14694a98a FUN_14694a98a body=93 status=ok
// SIG undefined FUN_14694a98a(void)

void FUN_14694a98a(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = FUN_144a78877(0,*param_2);
  uVar1 = FUN_144a78877(uVar1,*(undefined1 *)(param_2 + 1));
  FUN_144a78877(uVar1,*(undefined1 *)((longlong)param_2 + 5));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14694aad0 FUN_14694aad0 body=70 status=ok
// SIG undefined FUN_14694aad0(void)

void FUN_14694aad0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_140864845(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14694ab22 FUN_14694ab22 body=64 status=ok
// SIG undefined FUN_14694ab22(void)

void FUN_14694ab22(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x60) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x38);
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
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14694abb2 FUN_14694abb2 body=132 status=ok
// SIG undefined FUN_14694abb2(void)

void FUN_14694abb2(longlong param_1,int param_2)

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



// FUNCTION 14694ac37 FUN_14694ac37 body=36 status=ok
// SIG undefined FUN_14694ac37(void)

void FUN_14694ac37(void)

{
  code *pcVar1;
  
  FUN_14694ac5c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14694ac5c FUN_14694ac5c body=62 status=ok
// SIG undefined FUN_14694ac5c(void)

void FUN_14694ac5c(longlong *param_1)

{
  if (*(code **)_Raise_handler_exref != (code *)0x0) {
    (**(code **)_Raise_handler_exref)(param_1);
  }
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



// FUNCTION 14694ac9c FUN_14694ac9c body=29 status=ok
// SIG undefined FUN_14694ac9c(void)

undefined8 FUN_14694ac9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694acce FUN_14694acce body=29 status=ok
// SIG undefined FUN_14694acce(void)

void FUN_14694acce(void)

{
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



// FUNCTION 14694acec FUN_14694acec body=154 status=ok
// SIG undefined FUN_14694acec(void)

void FUN_14694acec(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      do {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
      plVar2 = (longlong *)*param_1;
    }
    plVar3 = plVar2;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)plVar2)) &&
       (plVar3 = (longlong *)plVar2[-1],
       0x1f < (ulonglong)((longlong)plVar2 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(plVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 14694ad88 FUN_14694ad88 body=76 status=ok
// SIG undefined FUN_14694ad88(void)

undefined8 FUN_14694ad88(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 8);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14694add6 FUN_14694add6 body=293 status=ok
// SIG undefined FUN_14694add6(void)

void FUN_14694add6(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  lVar2 = *param_1;
  uVar6 = (param_1[1] - lVar2 >> 3) + 1;
  uVar5 = param_1[2] - lVar2 >> 3;
  uVar8 = (uVar5 >> 1) + uVar5;
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar8 = 0x1fffffffffffffff;
  }
  plVar1 = (longlong *)FUN_14694ad88(uVar8);
  *(undefined8 *)((longlong)plVar1 + ((longlong)param_2 - lVar2)) = *param_3;
  *param_3 = 0;
  plVar7 = (longlong *)*param_1;
  plVar4 = (longlong *)param_1[1];
  plVar3 = plVar1;
  if (plVar4 == param_2) {
    for (; plVar7 != param_2; plVar7 = plVar7 + 1) {
      if ((longlong *)*plVar7 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (**(code **)(*(longlong *)*plVar7 + 8))();
      }
      *plVar3 = lVar2;
      plVar3 = plVar3 + 1;
    }
  }
  else {
    if (plVar7 != param_2) {
      do {
        *plVar3 = *plVar7;
        *plVar7 = 0;
        plVar7 = plVar7 + 1;
        plVar3 = plVar3 + 1;
      } while (plVar7 != param_2);
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != param_2) {
      plVar7 = (longlong *)((longlong)plVar1 + ((longlong)param_2 - lVar2));
      do {
        plVar7 = plVar7 + 1;
        *plVar7 = *param_2;
        *param_2 = 0;
        param_2 = param_2 + 1;
      } while (param_2 != plVar4);
    }
  }
  FUN_14694acec(param_1,plVar1,uVar6,uVar8);
  return;
}



// FUNCTION 14694aefc FUN_14694aefc body=16 status=ok
// SIG undefined FUN_14694aefc(void)

void FUN_14694aefc(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14694af0e FUN_14694af0e body=104 status=ok
// SIG undefined FUN_14694af0e(void)

void FUN_14694af0e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



// FUNCTION 14694af78 FUN_14694af78 body=207 status=ok
// SIG undefined FUN_14694af78(void)

longlong FUN_14694af78(longlong *param_1,void *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  uVar5 = (param_1[1] - lVar2 >> 2) + 1;
  uVar4 = param_1[2] - lVar2 >> 2;
  uVar6 = (uVar4 >> 1) + uVar4;
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x3fffffffffffffff;
  }
  _Dst = (void *)FUN_14627a224(param_1,uVar6);
  lVar1 = (longlong)_Dst + ((longlong)param_2 - lVar2);
  *(undefined4 *)((longlong)_Dst + ((longlong)param_2 - lVar2)) = *param_3;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)(lVar1 + 4),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_14694af0e(param_1,_Dst,uVar5,uVar6);
  return lVar1;
}



// FUNCTION 14694b048 FUN_14694b048 body=106 status=ok
// SIG undefined FUN_14694b048(void)

void FUN_14694b048(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *_Dst;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar5 = (longlong)puVar2 - lVar6 >> 5;
  lVar4 = uVar5 - param_2;
  if (uVar5 >= param_2 && lVar4 != 0) {
    param_1[1] = lVar6 + param_2 * 0x20;
    return;
  }
  if (uVar5 < param_2) {
    if ((ulonglong)(param_1[2] - lVar6 >> 5) < param_2) {
      if (param_2 >> 0x3b != 0) {
        FUN_14694b18a();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar6 = param_1[1] - *param_1;
      uVar7 = lVar6 >> 5;
      uVar3 = param_1[2] - *param_1 >> 5;
      uVar5 = (uVar3 >> 1) + uVar3;
      if (uVar5 <= param_2) {
        uVar5 = param_2;
      }
      if (0x7ffffffffffffff - (uVar3 >> 1) < uVar3) {
        uVar5 = 0x7ffffffffffffff;
      }
      _Dst = (void *)FUN_14694b20c(uVar5);
      if (param_2 != uVar7) {
        puVar2 = (undefined8 *)((longlong)_Dst + lVar6);
        lVar6 = uVar7 - param_2;
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0xffefffffffffffff;
          puVar2[3] = 0;
          puVar2 = puVar2 + 4;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0);
      }
      memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
      FUN_14694b19c(param_1,_Dst,param_2,uVar5);
      return;
    }
    if (param_2 != uVar5) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0xffefffffffffffff;
        puVar2[3] = 0;
        puVar2 = puVar2 + 4;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
    param_1[1] = (longlong)puVar2;
  }
  return;
}



// FUNCTION 14694b0b2 FUN_14694b0b2 body=215 status=ok
// SIG undefined FUN_14694b0b2(void)

void FUN_14694b0b2(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *_Dst;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_2 >> 0x3b == 0) {
    lVar5 = param_1[1] - *param_1;
    uVar6 = lVar5 >> 5;
    uVar3 = param_1[2] - *param_1 >> 5;
    uVar4 = (uVar3 >> 1) + uVar3;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (0x7ffffffffffffff - (uVar3 >> 1) < uVar3) {
      uVar4 = 0x7ffffffffffffff;
    }
    _Dst = (void *)FUN_14694b20c(uVar4);
    if (param_2 != uVar6) {
      puVar2 = (undefined8 *)((longlong)_Dst + lVar5);
      lVar5 = uVar6 - param_2;
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0xffefffffffffffff;
        puVar2[3] = 0;
        puVar2 = puVar2 + 4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_14694b19c(param_1,_Dst,param_2,uVar4);
    return;
  }
  FUN_14694b18a();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14694b18a FUN_14694b18a body=16 status=ok
// SIG undefined FUN_14694b18a(void)

void FUN_14694b18a(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14694b19c FUN_14694b19c body=110 status=ok
// SIG undefined FUN_14694b19c(void)

void FUN_14694b19c(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



// FUNCTION 14694b20c FUN_14694b20c body=75 status=ok
// SIG undefined FUN_14694b20c(void)

undefined8 FUN_14694b20c(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x7f < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 << 5);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 << 5,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14694b258 FUN_14694b258 body=136 status=ok
// SIG undefined FUN_14694b258(void)

void FUN_14694b258(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *_Dst;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar5 = (longlong)puVar2 - lVar7 >> 6;
  lVar4 = uVar5 - param_2;
  if (uVar5 >= param_2 && lVar4 != 0) {
    param_1[1] = lVar7 + param_2 * 0x40;
    return;
  }
  if (uVar5 < param_2) {
    if ((ulonglong)(param_1[2] - lVar7 >> 6) < param_2) {
      if (param_2 >> 0x3a != 0) {
        FUN_14694b3ce();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = param_1[1] - *param_1;
      uVar8 = lVar7 >> 6;
      uVar3 = param_1[2] - *param_1 >> 6;
      uVar5 = (uVar3 >> 1) + uVar3;
      if (uVar5 <= param_2) {
        uVar5 = param_2;
      }
      if (0x3ffffffffffffff - (uVar3 >> 1) < uVar3) {
        uVar5 = 0x3ffffffffffffff;
      }
      _Dst = (void *)FUN_14694b450(uVar5);
      if (param_2 != uVar8) {
        puVar2 = (undefined8 *)((longlong)_Dst + lVar7);
        lVar7 = uVar8 - param_2;
        do {
          *puVar2 = 0xffefffffffffffff;
          puVar2[1] = 0;
          puVar2[2] = 0xffefffffffffffff;
          puVar2[3] = 0x7fefffffffffffff;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2 = puVar2 + 8;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
      }
      memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
      FUN_14694b3e0(param_1,_Dst,param_2,uVar5);
      return;
    }
    puVar6 = puVar2;
    if (param_2 != uVar5) {
      do {
        *puVar2 = 0xffefffffffffffff;
        puVar2[1] = 0;
        puVar2[2] = 0xffefffffffffffff;
        puVar2[3] = 0x7fefffffffffffff;
        puVar6 = puVar2 + 8;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        lVar4 = lVar4 + 1;
        puVar2 = puVar6;
      } while (lVar4 != 0);
    }
    param_1[1] = (longlong)puVar6;
  }
  return;
}



// FUNCTION 14694b2e0 FUN_14694b2e0 body=237 status=ok
// SIG undefined FUN_14694b2e0(void)

void FUN_14694b2e0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *_Dst;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_2 >> 0x3a == 0) {
    lVar5 = param_1[1] - *param_1;
    uVar6 = lVar5 >> 6;
    uVar3 = param_1[2] - *param_1 >> 6;
    uVar4 = (uVar3 >> 1) + uVar3;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (0x3ffffffffffffff - (uVar3 >> 1) < uVar3) {
      uVar4 = 0x3ffffffffffffff;
    }
    _Dst = (void *)FUN_14694b450(uVar4);
    if (param_2 != uVar6) {
      puVar2 = (undefined8 *)((longlong)_Dst + lVar5);
      lVar5 = uVar6 - param_2;
      do {
        *puVar2 = 0xffefffffffffffff;
        puVar2[1] = 0;
        puVar2[2] = 0xffefffffffffffff;
        puVar2[3] = 0x7fefffffffffffff;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = puVar2 + 8;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_14694b3e0(param_1,_Dst,param_2,uVar4);
    return;
  }
  FUN_14694b3ce();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14694b3ce FUN_14694b3ce body=16 status=ok
// SIG undefined FUN_14694b3ce(void)

void FUN_14694b3ce(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14694b3e0 FUN_14694b3e0 body=110 status=ok
// SIG undefined FUN_14694b3e0(void)

void FUN_14694b3e0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x40 + param_2;
  param_1[2] = param_4 * 0x40 + param_2;
  return;
}



// FUNCTION 14694b450 FUN_14694b450 body=72 status=ok
// SIG undefined FUN_14694b450(void)

undefined8 FUN_14694b450(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x3f < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 << 6);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 << 6,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14694b49a FUN_14694b49a body=117 status=ok
// SIG undefined FUN_14694b49a(void)

void FUN_14694b49a(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1] - lVar2 >> 5;
  lVar1 = param_2 + lVar3 * 0x3333333333333333;
  if (param_2 < (ulonglong)(lVar3 * -0x3333333333333333)) {
    param_1[1] = lVar2 + param_2 * 0xa0;
  }
  else if (lVar1 != 0) {
    if ((ulonglong)((param_1[2] - lVar2 >> 5) * -0x3333333333333333) < param_2) {
      FUN_14694b510(param_1);
      return;
    }
    lVar2 = FUN_14694b5dd(param_1[1],lVar1);
    param_1[1] = lVar2;
  }
  return;
}



// FUNCTION 14694b510 FUN_14694b510 body=205 status=ok
// SIG undefined FUN_14694b510(void)

void FUN_14694b510(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_2 < 0x19999999999999a) {
    lVar5 = param_1[1] - *param_1;
    uVar2 = (param_1[2] - *param_1 >> 5) * -0x3333333333333333;
    uVar3 = 0x199999999999999 - (uVar2 >> 1);
    uVar4 = (uVar2 >> 1) + uVar2;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
      uVar4 = 0x199999999999999;
    }
    _Dst = (void *)FUN_14694b6e2(uVar4);
    FUN_14694b5dd(lVar5 + (longlong)_Dst,(lVar5 >> 5) * 0x3333333333333333 + param_2);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_14694b66a(param_1,_Dst,param_2,uVar4);
    return;
  }
  FUN_14694b658();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14694b5dd FUN_14694b5dd body=123 status=ok
// SIG undefined FUN_14694b5dd(void)

undefined8 * FUN_14694b5dd(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    return param_1;
  }
  do {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xffefffffffffffff;
    param_1[3] = 0;
    param_1[4] = 0xffefffffffffffff;
    param_1[5] = 0x7fefffffffffffff;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0xffefffffffffffff;
    param_1[9] = 0;
    param_1[10] = 0xffefffffffffffff;
    param_1[0xb] = 0x7fefffffffffffff;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0xffefffffffffffff;
    param_1[0xf] = 0;
    param_1[0x10] = 0xffefffffffffffff;
    param_1[0x11] = 0x7fefffffffffffff;
    puVar1 = param_1 + 0x14;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_2 = param_2 + -1;
    param_1 = puVar1;
  } while (param_2 != 0);
  return puVar1;
}



// FUNCTION 14694b658 FUN_14694b658 body=16 status=ok
// SIG undefined FUN_14694b658(void)

void FUN_14694b658(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14694b66a FUN_14694b66a body=118 status=ok
// SIG undefined FUN_14694b66a(void)

void FUN_14694b66a(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0xa0 + param_2;
  param_1[2] = param_4 * 0xa0 + param_2;
  return;
}



// FUNCTION 14694b6e2 FUN_14694b6e2 body=82 status=ok
// SIG undefined FUN_14694b6e2(void)

undefined8 FUN_14694b6e2(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x199999999999999 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x19 < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0xa0);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0xa0,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14694b736 FUN_14694b736 body=128 status=ok
// SIG undefined FUN_14694b736(void)

void FUN_14694b736(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      do {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar3);
      plVar2 = (longlong *)*param_1;
    }
    plVar3 = plVar2;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)plVar2)) &&
       (plVar3 = (longlong *)plVar2[-1],
       0x1f < (ulonglong)((longlong)plVar2 + (-8 - (longlong)plVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(plVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14694b7b8 FUN_14694b7b8 body=16 status=ok
// SIG undefined FUN_14694b7b8(void)

void FUN_14694b7b8(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14694b7ca FUN_14694b7ca body=152 status=ok
// SIG undefined FUN_14694b7ca(void)

void FUN_14694b7ca(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_14694b736(lVar1);
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x18;
  param_1[2] = param_2 + param_4 * 0x18;
  return;
}



// FUNCTION 14694b864 FUN_14694b864 body=86 status=ok
// SIG undefined FUN_14694b864(void)

undefined8 FUN_14694b864(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xaa < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x18);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x18,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14694b8bc FUN_14694b8bc body=170 status=ok
// SIG undefined FUN_14694b8bc(void)

void FUN_14694b8bc(longlong *param_1,ulonglong param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *_Dst;
  void *pvVar3;
  size_t _Size;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  _Dst = (void *)param_1[1];
  uVar4 = ((longlong)_Dst - lVar2 >> 3) * -0x5555555555555555;
  if (uVar4 < param_2 || uVar4 - param_2 == 0) {
    if (uVar4 < param_2) {
      if ((ulonglong)((param_1[2] - lVar2 >> 3) * -0x5555555555555555) < param_2) {
        FUN_14694b966(param_1);
        return;
      }
      _Size = param_2 * 0x18 - ((longlong)_Dst - lVar2);
      memset(_Dst,0,_Size);
      param_1[1] = _Size + (longlong)_Dst;
    }
  }
  else {
    pvVar1 = (void *)(lVar2 + param_2 * 0x18);
    for (pvVar3 = pvVar1; pvVar3 != _Dst; pvVar3 = (void *)((longlong)pvVar3 + 0x18)) {
      FUN_14694b736(pvVar3);
    }
    param_1[1] = (longlong)pvVar1;
  }
  return;
}



// FUNCTION 14694b966 FUN_14694b966 body=252 status=ok
// SIG undefined FUN_14694b966(void)

void FUN_14694b966(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar13 = param_1[1] - *param_1;
    uVar8 = (param_1[2] - *param_1 >> 3) * -0x5555555555555555;
    uVar9 = 0xaaaaaaaaaaaaaaa - (uVar8 >> 1);
    uVar11 = (uVar8 >> 1) + uVar8;
    if (uVar11 <= param_2) {
      uVar11 = param_2;
    }
    if (uVar9 <= uVar8 && uVar8 - uVar9 != 0) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    puVar6 = (undefined8 *)FUN_14694b864(uVar11);
    lVar12 = (lVar13 >> 3) * 0x5555555555555555 + param_2;
    if (lVar12 != 0) {
      memset((void *)(lVar13 + (longlong)puVar6),0,lVar12 * 0x18);
    }
    puVar1 = (undefined8 *)param_1[1];
    puVar10 = puVar6;
    for (puVar7 = (undefined8 *)*param_1; puVar7 != puVar1; puVar7 = puVar7 + 3) {
      uVar2 = puVar7[2];
      puVar7[2] = 0;
      uVar4 = *puVar7;
      uVar5 = puVar7[1];
      *puVar7 = 0;
      puVar7[1] = 0;
      *puVar10 = uVar4;
      puVar10[1] = uVar5;
      puVar10[2] = uVar2;
      puVar10 = puVar10 + 3;
    }
    FUN_14694b7ca(param_1,puVar6,param_2,uVar11);
    return;
  }
  FUN_14694b7b8();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



// FUNCTION 14694ba62 FUN_14694ba62 body=82 status=ok
// SIG undefined FUN_14694ba62(void)

void FUN_14694ba62(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  void *_Dst;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14694aefc();
    }
    _Dst = (void *)FUN_14627a224();
    *param_1 = _Dst;
    pvVar1 = (void *)((longlong)_Dst + param_2 * 4);
    param_1[2] = pvVar1;
    memset(_Dst,0,param_2 << 2);
    param_1[1] = pvVar1;
  }
  return;
}



// FUNCTION 14694bab6 FUN_14694bab6 body=207 status=ok
// SIG undefined FUN_14694bab6(void)

longlong FUN_14694bab6(longlong *param_1,void *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  uVar5 = (param_1[1] - lVar2 >> 2) + 1;
  uVar4 = param_1[2] - lVar2 >> 2;
  uVar6 = (uVar4 >> 1) + uVar4;
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x3fffffffffffffff;
  }
  _Dst = (void *)FUN_14627a224(param_1,uVar6);
  lVar1 = (longlong)_Dst + ((longlong)param_2 - lVar2);
  *(undefined4 *)((longlong)_Dst + ((longlong)param_2 - lVar2)) = *param_3;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)(lVar1 + 4),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_14694af0e(param_1,_Dst,uVar5,uVar6);
  return lVar1;
}



// FUNCTION 14694bb86 FUN_14694bb86 body=227 status=ok
// SIG undefined FUN_14694bb86(void)

void FUN_14694bb86(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  lVar7 = (longlong)param_2 - lVar1;
  uVar6 = (param_1[1] - lVar1 >> 3) * -0x5555555555555555 + 1;
  uVar5 = (param_1[2] - lVar1 >> 3) * -0x5555555555555555;
  uVar4 = 0xaaaaaaaaaaaaaaa - (uVar5 >> 1);
  uVar8 = (uVar5 >> 1) + uVar5;
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
    uVar8 = 0xaaaaaaaaaaaaaaa;
  }
  _Dst = (void *)FUN_14694bcdc(uVar8);
  uVar3 = param_3[1];
  *(undefined8 *)((longlong)_Dst + lVar7) = *param_3;
  ((undefined8 *)((longlong)_Dst + lVar7))[1] = uVar3;
  *(undefined8 *)((longlong)_Dst + lVar7 + 0x10) = param_3[2];
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + lVar7 + 0x18),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_14694bc6a(param_1,_Dst,uVar6,uVar8);
  return;
}



// FUNCTION 14694bc6a FUN_14694bc6a body=112 status=ok
// SIG undefined FUN_14694bc6a(void)

void FUN_14694bc6a(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x18;
  param_1[2] = param_2 + param_4 * 0x18;
  return;
}



// FUNCTION 14694bcdc FUN_14694bcdc body=86 status=ok
// SIG undefined FUN_14694bcdc(void)

undefined8 FUN_14694bcdc(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xaa < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x18);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x18,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14694bd34 FUN_14694bd34 body=82 status=ok
// SIG undefined FUN_14694bd34(void)

void FUN_14694bd34(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14694bd88 FUN_14694bd88 body=82 status=ok
// SIG undefined FUN_14694bd88(void)

void FUN_14694bd88(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14694bddc FUN_14694bddc body=82 status=ok
// SIG undefined FUN_14694bddc(void)

void FUN_14694bddc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14694be30 FUN_14694be30 body=29 status=ok
// SIG undefined FUN_14694be30(void)

undefined8 FUN_14694be30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694be4e FUN_14694be4e body=120 status=ok
// SIG undefined FUN_14694be4e(void)

void FUN_14694be4e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_14694b736(lVar1);
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14694bec8 FUN_14694bec8 body=38 status=ok
// SIG undefined FUN_14694bec8(void)

undefined8 FUN_14694bec8(undefined8 param_1,int param_2)

{
  FUN_14694bf74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694bef2 FUN_14694bef2 body=129 status=ok
// SIG undefined FUN_14694bef2(void)

ulonglong FUN_14694bef2(undefined8 param_1,ulonglong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  
  plVar6 = (longlong *)FUN_14694bfbc();
  iVar5 = (int)plVar6[1];
  iVar3 = (int)param_2[1];
  if (iVar5 == iVar3) {
    uVar7 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
    if (iVar5 < 2) goto LAB_14694bf65;
    uVar7 = *param_2;
    lVar8 = 0;
    while( true ) {
      uVar1 = *(ushort *)(*plVar6 + lVar8);
      uVar4 = (uint)uVar1;
      uVar2 = *(ushort *)(uVar7 + lVar8);
      uVar9 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14694bf34;
        }
        iVar5 = uVar4 - uVar9;
        goto LAB_14694bf6f;
      }
      if (uVar1 == 0) break;
LAB_14694bf34:
      lVar8 = lVar8 + 2;
    }
    iVar5 = 0;
LAB_14694bf6f:
    bVar10 = iVar5 == 0;
  }
  else {
    uVar7 = (ulonglong)(uint)(iVar3 + iVar5);
    bVar10 = iVar3 + iVar5 == 1;
  }
  uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar10);
LAB_14694bf65:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14694bf74 FUN_14694bf74 body=71 status=ok
// SIG undefined FUN_14694bf74(void)

void FUN_14694bf74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ed90a0;
  FUN_1447a1747(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14695359c(param_1);
  return;
}



// FUNCTION 14694bfbc FUN_14694bfbc body=115 status=ok
// SIG undefined FUN_14694bfbc(void)

undefined8 * FUN_14694bfbc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96b1a0) {
    FUN_144b3d300(&DAT_14c96b1a0);
    if (DAT_14c96b1a0 == -1) {
      FUN_140056680(&DAT_14c96b190,L"FExternalDragOperation");
      atexit((_func_5014 *)&LAB_1428672bd);
      _Init_thread_footer(&DAT_14c96b1a0);
    }
  }
  return &DAT_14c96b190;
}



// FUNCTION 14694c0a4 FUN_14694c0a4 body=59 status=ok
// SIG undefined FUN_14694c0a4(void)

undefined8 FUN_14694c0a4(longlong *param_1)

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



// FUNCTION 14694c1b2 FUN_14694c1b2 body=59 status=ok
// SIG undefined FUN_14694c1b2(void)

undefined8 FUN_14694c1b2(longlong *param_1)

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



// FUNCTION 14694c322 FUN_14694c322 body=59 status=ok
// SIG undefined FUN_14694c322(void)

undefined8 FUN_14694c322(longlong *param_1)

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



// FUNCTION 14694c3c2 FUN_14694c3c2 body=29 status=ok
// SIG undefined FUN_14694c3c2(void)

undefined8 FUN_14694c3c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14694c458 FUN_14694c458 body=86 status=ok
// SIG undefined FUN_14694c458(void)

undefined8 FUN_14694c458(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1413a517a(param_2,param_3);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14694c4d6 FUN_14694c4d6 body=59 status=ok
// SIG undefined FUN_14694c4d6(void)

undefined8 FUN_14694c4d6(longlong *param_1)

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



// FUNCTION 14694c51c FUN_14694c51c body=74 status=ok
// SIG undefined FUN_14694c51c(void)

void FUN_14694c51c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_149eda6d0;
    plVar3 = (longlong *)param_2[6];
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
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14694c5b4 FUN_14694c5b4 body=83 status=ok
// SIG undefined FUN_14694c5b4(void)

undefined8 * FUN_14694c5b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eda6d0;
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 14694c608 FUN_14694c608 body=122 status=ok
// SIG undefined FUN_14694c608(void)

void FUN_14694c608(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1a = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_14694c88a(param_2,&local_38,&local_1a,0);
  *param_2 = &PTR_FUN_149eda6f0;
  *(undefined4 *)(param_2 + 8) = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14694c684 FUN_14694c684 body=122 status=ok
// SIG undefined FUN_14694c684(void)

void FUN_14694c684(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1a = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_14694c88a(param_2,&local_38,&local_1a,0);
  *param_2 = &PTR_FUN_149eda6f0;
  *(undefined4 *)(param_2 + 8) = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


