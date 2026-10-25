// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14607a792 FUN_14607a792 body=497 status=ok
// SIG undefined FUN_14607a792(void)

undefined8 FUN_14607a792(longlong param_1,ulonglong param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong local_80;
  undefined2 *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_3 = 0;
  *(undefined8 *)(param_3 + 1) = 0xffffffff00000000;
  param_3[9] = 0xff;
  *(undefined4 *)(param_3 + 10) = 0;
  *(undefined2 *)(param_3 + 0xe) = 0;
  uVar2 = 0;
  if ((*(byte *)(param_1 + 0x29) & 2) != 0) goto LAB_14607a8b6;
  local_68 = 0;
  local_60 = 0xffffffff;
  uStack_5c = 0xffffffff;
  uStack_58 = 0xffffffff;
  uStack_54 = 0xffffffff;
  local_50 = 0xffffffffffffffff;
  local_48 = 0;
  local_40 = 0xffffffff;
  uStack_3c = 0xffffffff;
  uStack_38 = 0xffffffff;
  uStack_34 = 0xffffffff;
  FUN_14607a984();
  if ((*(byte *)(param_1 + 0x29) & 2) == 0) {
    uVar4 = CONCAT44(uStack_5c,local_60);
    if (0 < (longlong)uVar4) {
      if (param_2 == 0) {
        lVar5 = 0;
      }
      else {
        uVar6 = -param_2;
        if ((longlong)-param_2 < 0) {
          uVar6 = param_2;
        }
        uVar3 = 0x7fffffffffffffff - ((longlong)param_2 >> 0x3f);
        if (uVar3 / uVar6 < uVar4) {
          FUN_14572541c(param_1,uVar3 % uVar6);
          uVar1 = CONCAT44(uStack_5c,local_60);
          FUN_1468886b0(&local_78,param_1);
          puVar8 = local_78;
          if (local_70 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          pwVar7 = 
          L"Bulkdata error when serializing \'%s\', ElementCount (%lld) and ElementSize (%lld) would cause an int64 overflow"
          ;
          uVar2 = 0x140;
          local_88 = uVar1;
          local_80 = param_2;
          goto LAB_14607a969;
        }
        lVar5 = uVar4 * param_2;
      }
      *param_3 = (char)lVar5;
      param_3[1] = (char)((ulonglong)lVar5 >> 8);
      param_3[2] = (char)((ulonglong)lVar5 >> 0x10);
      param_3[3] = (char)((ulonglong)lVar5 >> 0x18);
      param_3[4] = (char)((ulonglong)lVar5 >> 0x20);
    }
    uVar4 = 0x7fffffffffffffff;
    if (local_50 < 0x7fffffffffffffff) {
      uVar4 = local_50;
    }
    param_3[5] = (char)uVar4;
    param_3[6] = (char)(uVar4 >> 8);
    param_3[7] = (char)(uVar4 >> 0x10);
    param_3[8] = (char)(uVar4 >> 0x18);
    param_3[9] = (char)(uVar4 >> 0x20);
    *(undefined4 *)(param_3 + 0xc) = local_68;
    *param_4 = CONCAT44(uStack_34,uStack_38);
    uVar2 = CONCAT71((int7)(CONCAT44(uStack_34,uStack_38) >> 8),1);
  }
  else {
    FUN_1468886b0(&local_78,param_1);
    puVar8 = local_78;
    if (local_70 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    pwVar7 = 
    L"Bulkdata error when serializing \'%s\', could not serialize FBulkMetaResource correctly";
    uVar2 = 0x12a;
LAB_14607a969:
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/BulkData.cpp",uVar2,pwVar7,puVar8);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar2 = 0;
  }
LAB_14607a8b6:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14607a984 FUN_14607a984 body=486 status=ok
// SIG undefined FUN_14607a984(void)

longlong * FUN_14607a984(longlong *param_1,uint *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [2];
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 5) & 4) != 0) && (0x7fffffff < *(longlong *)(param_2 + 4))) {
    *(byte *)((longlong)param_2 + 1) = *(byte *)((longlong)param_2 + 1) | 0x20;
  }
  FUN_14607ab6b(param_1,param_2);
  if ((*param_2 & 0x2000) == 0) {
    FUN_1415cfc10(param_1);
    FUN_1415cfc10(param_1,param_2 + 4);
    FUN_1408383eb(param_1,param_2 + 6);
    uVar2 = *param_2;
    if (((short)uVar2 < 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
      puVar1 = (ulonglong *)param_1[1];
      if (puVar1[1] < *puVar1 + 2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,local_2c,2);
        }
        else {
          thunk_FUN_1457251a8(param_1,local_2c);
        }
      }
      else {
        *puVar1 = *puVar1 + 2;
      }
      uVar2 = *param_2 & 0xffff7fff;
      *param_2 = uVar2;
    }
    if ((uVar2 >> 0xe & 1) == 0) goto LAB_14607aa07;
    FUN_14607ab6b(param_1,param_2 + 8);
    FUN_1415cfc10(param_1,param_2 + 10);
  }
  else {
    FUN_1408383eb(param_1,param_2 + 2);
    FUN_1408383eb(param_1,param_2 + 4);
    FUN_1408383eb(param_1,param_2 + 6);
    uVar2 = *param_2;
    if (((short)uVar2 < 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
      puVar1 = (ulonglong *)param_1[1];
      if (puVar1[1] < *puVar1 + 2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,local_2a,2);
        }
        else {
          thunk_FUN_1457251a8(param_1,local_2a);
        }
      }
      else {
        *puVar1 = *puVar1 + 2;
      }
      uVar2 = *param_2 & 0xffff7fff;
      *param_2 = uVar2;
    }
    if ((uVar2 >> 0xe & 1) == 0) goto LAB_14607aa07;
    FUN_14607ab6b(param_1,param_2 + 8);
    FUN_1408383eb(param_1,param_2 + 10);
  }
  FUN_1408383eb(param_1,param_2 + 0xc);
LAB_14607aa07:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607ab6b FUN_14607ab6b body=82 status=ok
// SIG undefined FUN_14607ab6b(void)

longlong * FUN_14607ab6b(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 14607abbe FUN_14607abbe body=175 status=ok
// SIG undefined FUN_14607abbe(void)

void FUN_14607abbe(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14607ac6e();
  local_28 = 0;
  uStack_20 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_38 = 0;
  cVar1 = FUN_14063337c(&DAT_14c846b20,L"-initialuser=",&local_28,1);
  if ((cVar1 != '\0') && (1 < (int)uStack_20)) {
    FUN_148a7d046(param_1,1);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607ac6e FUN_14607ac6e body=223 status=ok
// SIG undefined FUN_14607ac6e(void)

void FUN_14607ac6e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x220) = 1;
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    local_38 = &LAB_1461bc67e;
    local_30 = 0;
    FUN_14607ad4e(lVar1 + 0x60,&local_28,param_1);
    *(undefined8 *)(param_1 + 0x198) = local_28;
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_38 = &LAB_145907afa;
      local_30 = 0;
      FUN_14607ae4e(lVar1 + 0x2a8,&local_28,param_1);
      *(undefined8 *)(param_1 + 0x1a0) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607ad4e FUN_14607ad4e body=254 status=ok
// SIG undefined FUN_14607ad4e(void)

undefined8
FUN_14607ad4e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b403f60;
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
  *local_48 = &PTR_FUN_14b4eb250;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bc922(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607ae4e FUN_14607ae4e body=254 status=ok
// SIG undefined FUN_14607ae4e(void)

undefined8
FUN_14607ae4e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e62a0;
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
  *local_48 = &PTR_FUN_14b4eb2c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141285884(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607af4e FUN_14607af4e body=276 status=ok
// SIG undefined FUN_14607af4e(void)

void FUN_14607af4e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x380) == 0) {
    lVar4 = FUN_1449e3f1e();
    if (lVar4 == 0) {
      local_48 = 0xaaad1010;
      local_50 = 0;
    }
    else {
      local_50 = *(undefined8 *)(lVar4 + 0x220);
      local_48 = *(undefined4 *)(lVar4 + 0x228);
    }
    local_40 = 0;
    FUN_14607b064(&local_38,&local_50,param_1 + 0x38,param_2);
    plVar1 = local_30;
    *(undefined8 *)(param_1 + 0x380) = local_38;
    local_38 = 0;
    plVar3 = *(longlong **)(param_1 + 0x388);
    if (local_30 != plVar3) {
      local_30 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x388) = plVar1;
      if (plVar3 == (longlong *)0x0) goto LAB_14607afe9;
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
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
LAB_14607afe9:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1415cfca2(param_1);
  return;
}



// FUNCTION 14607b064 FUN_14607b064 body=895 status=ok
// SIG undefined FUN_14607b064(void)

longlong * FUN_14607b064(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_14607b19a;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_14607b0c3:
    plVar5 = (longlong *)FUN_14607b486();
    plVar8 = plVar5 + 2;
    local_78 = plVar8;
    local_70 = plVar5;
    FUN_14607b3e4(&local_78,plVar8);
    plVar5[7] = param_4;
    FUN_14078c658(&local_50,param_3);
    *(undefined4 *)(plVar5 + 5) = local_50;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = uStack_4c;
    *(undefined4 *)(plVar5 + 6) = uStack_48;
    *(undefined4 *)((longlong)plVar5 + 0x34) = uStack_44;
    FUN_14485c47a(plVar5 + 8,param_4);
    if (plVar5 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar8 = (longlong *)param_1[1];
      if (plVar8 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_14607b2ae:
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x00014607b2e7:
          if (iVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *param_1 = (longlong)plVar8;
      plVar8 = (longlong *)param_1[1];
      if (plVar5 == plVar8) {
        LOCK();
        plVar8 = plVar5 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar8 = plVar5;
          goto joined_r0x00014607b2e7;
        }
      }
      else {
        param_1[1] = (longlong)plVar5;
        if (plVar8 != (longlong *)0x0) goto LAB_14607b2ae;
      }
    }
    plVar8 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_14607b19a;
  }
  else {
    uVar6 = FUN_1464f46ec();
    local_68 = *param_2;
    local_60 = (undefined4)param_2[1];
    local_58 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_50,&local_68,uVar6,param_3);
    lVar7 = CONCAT44(uStack_4c,local_50);
    if (lVar7 != 0) {
      uVar6 = FUN_1464f46ec();
      cVar4 = FUN_1448093f4(lVar7,uVar6);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
        if (plVar8 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_4c,local_50);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          plVar5 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_4c,local_50);
          if (plVar8 == plVar5) {
            LOCK();
            plVar5 = plVar8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar8;
LAB_14607b28e:
                (**(code **)(lVar7 + 0x10))(plVar8);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar5 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar7 = *plVar5;
                  plVar8 = plVar5;
                  goto LAB_14607b28e;
                }
              }
            }
          }
        }
        lVar7 = CONCAT44(uStack_4c,local_50);
        if ((*(longlong *)(lVar7 + 0x40) != *param_2) || (*(int *)(lVar7 + 0x48) != (int)param_2[1])
           ) {
          *(longlong *)(lVar7 + 0x40) = *param_2;
          *(int *)(lVar7 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_14607b0c3;
  }
  plVar8 = (longlong *)param_1[1];
  local_88 = lVar7;
  if (plVar8 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_80 = plVar8;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar8 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar8 + 0x3c) == '\0') {
    *(undefined1 *)((longlong)plVar8 + 0x3c) = 1;
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_14607b19a:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607b3e4 FUN_14607b3e4 body=162 status=ok
// SIG undefined FUN_14607b3e4(void)

void FUN_14607b3e4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14607b423;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14607b423;
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
LAB_14607b423:
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
                    /* WARNING: Could not recover jumptable at 0x00014607b482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14607b486 FUN_14607b486 body=177 status=ok
// SIG undefined FUN_14607b486(void)

undefined8 * FUN_14607b486(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x370);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b3f00b0;
  memset(puVar1 + 2,0,0x360);
  FUN_14126c416(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b1dcf60;
  puVar1[0x62] = &DAT_3f8000003f800000;
  puVar1[0x67] = 0;
  *(undefined4 *)(puVar1 + 0x68) = 0;
  puVar1[99] = 0;
  puVar1[100] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x344) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x34c) = 0;
  puVar1[0x6b] = 0;
  *(undefined4 *)(puVar1 + 0x6c) = 0;
  return puVar1;
}



// FUNCTION 14607b538 FUN_14607b538 body=226 status=ok
// SIG undefined FUN_14607b538(void)

longlong * FUN_14607b538(longlong *param_1)

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
  pcVar13 = FUN_1462d4f8a;
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



// FUNCTION 14607b620 FUN_14607b620 body=132 status=ok
// SIG undefined FUN_14607b620(void)

undefined1 * FUN_14607b620(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToUVScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14607b61c;
}



// FUNCTION 14607b6a4 FUN_14607b6a4 body=138 status=ok
// SIG undefined FUN_14607b6a4(void)

code * FUN_14607b6a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionTexelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14607b620;
}



// FUNCTION 14607b72e FUN_14607b72e body=43 status=ok
// SIG undefined FUN_14607b72e(void)

void FUN_14607b72e(longlong param_1)

{
  FUN_1415d0168();
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_1415d0036();
  }
  FUN_1415d02ac(param_1);
  return;
}



// FUNCTION 14607b75a FUN_14607b75a body=226 status=ok
// SIG undefined FUN_14607b75a(void)

longlong * FUN_14607b75a(longlong *param_1)

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
  pcVar13 = FUN_146309aec;
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



// FUNCTION 14607b83e FUN_14607b83e body=138 status=ok
// SIG undefined FUN_14607b83e(void)

code * FUN_14607b83e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowTexture0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000047d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146309c04;
}



// FUNCTION 14607b8c8 FUN_14607b8c8 body=144 status=ok
// SIG undefined FUN_14607b8c8(void)

code * FUN_14607b8c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x300000047a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146309c92;
}



// FUNCTION 14607b958 FUN_14607b958 body=144 status=ok
// SIG undefined FUN_14607b958(void)

code * FUN_14607b958(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x400000047b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14607b8c8;
}



// FUNCTION 14607b9e8 FUN_14607b9e8 body=45 status=ok
// SIG undefined FUN_14607b9e8(void)

undefined8 FUN_14607b9e8(undefined8 param_1,int param_2)

{
  FUN_14607ba16();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 14607ba16 FUN_14607ba16 body=107 status=ok
// SIG undefined FUN_14607ba16(void)

void FUN_14607ba16(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b235b70;
  FUN_140d9624e(param_1 + 0x23);
  FUN_140d9624e(param_1 + 0x1a);
  plVar3 = (longlong *)param_1[0x18];
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
  FUN_140d9624e(param_1 + 0xd);
  FUN_140d9629a(param_1);
  return;
}



// FUNCTION 14607ba8c FUN_14607ba8c body=292 status=ok
// SIG undefined FUN_14607ba8c(void)

undefined8 * FUN_14607ba8c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"SpawnComponent",1);
  uVar1 = FUN_145a84294();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_140485eae(param_1,param_2);
  *param_1 = &PTR_FUN_14b2e1b20;
  param_1[0x72] = &PTR_FUN_14b2e2160;
  param_1[0x73] = &PTR_FUN_14b2e2180;
  param_1[0x78] = &PTR_FUN_14b2e21a0;
  param_1[0x79] = &PTR_FUN_14b2e2210;
  param_1[0x7a] = &PTR_FUN_14b2e2240;
  param_1[0x7b] = &PTR_FUN_14b2e2270;
  param_1[0x7c] = &PTR_FUN_14b2e22e0;
  param_1[0x7d] = &PTR_FUN_14b2e22f8;
  param_1[0x7e] = &PTR_FUN_14b2e2310;
  param_1[0x7f] = &PTR_FUN_14b2e2330;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607bbbc FUN_14607bbbc body=292 status=ok
// SIG undefined FUN_14607bbbc(void)

undefined8 * FUN_14607bbbc(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"SpawnComponent",1);
  uVar1 = FUN_145a8b152();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_140485b74(param_1,param_2);
  *param_1 = &PTR_FUN_14b73dc50;
  param_1[0x72] = &PTR_FUN_14b73e290;
  param_1[0x73] = &PTR_FUN_14b73e2b0;
  param_1[0x78] = &PTR_FUN_14b73e2d0;
  param_1[0x79] = &PTR_FUN_14b73e340;
  param_1[0x7a] = &PTR_FUN_14b73e370;
  param_1[0x7b] = &PTR_FUN_14b73e3a0;
  param_1[0x7c] = &PTR_FUN_14b73e410;
  param_1[0x7d] = &PTR_FUN_14b73e428;
  param_1[0x7e] = &PTR_FUN_14b73e440;
  param_1[0x7f] = &PTR_FUN_14b73e460;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607bcec FUN_14607bcec body=292 status=ok
// SIG undefined FUN_14607bcec(void)

undefined8 * FUN_14607bcec(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"SpawnComponent",1);
  uVar1 = FUN_145a8c260();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_140485b74(param_1,param_2);
  *param_1 = &PTR_FUN_14b7b1c40;
  param_1[0x72] = &PTR_FUN_14b7b2280;
  param_1[0x73] = &PTR_FUN_14b7b22a0;
  param_1[0x78] = &PTR_FUN_14b7b22c0;
  param_1[0x79] = &PTR_FUN_14b7b2330;
  param_1[0x7a] = &PTR_FUN_14b7b2360;
  param_1[0x7b] = &PTR_FUN_14b7b2390;
  param_1[0x7c] = &PTR_FUN_14b7b2400;
  param_1[0x7d] = &PTR_FUN_14b7b2418;
  param_1[0x7e] = &PTR_FUN_14b7b2430;
  param_1[0x7f] = &PTR_FUN_14b7b2450;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607be12 FUN_14607be12 body=216 status=ok
// SIG undefined FUN_14607be12(void)

undefined8 * FUN_14607be12(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 14607bef8 FUN_14607bef8 body=135 status=ok
// SIG undefined FUN_14607bef8(void)

void FUN_14607bef8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b9d88a0;
  local_58[0] = &LAB_144322292;
  local_30 = param_1;
  FUN_1415d0667(*(undefined8 *)(param_1 + 0x400),*(undefined4 *)(param_1 + 0x408),param_3,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607bf80 FUN_14607bf80 body=261 status=ok
// SIG undefined FUN_14607bf80(void)

undefined8 *
FUN_14607bf80(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_14607c086(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607c086 FUN_14607c086 body=423 status=ok
// SIG undefined FUN_14607c086(void)

void FUN_14607c086(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14607c15c:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9cc630;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14607c15c;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9cc630;
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
                    /* WARNING: Could not recover jumptable at 0x00014607c215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14607c22e FUN_14607c22e body=261 status=ok
// SIG undefined FUN_14607c22e(void)

undefined8 *
FUN_14607c22e(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_14607c334(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607c334 FUN_14607c334 body=423 status=ok
// SIG undefined FUN_14607c334(void)

void FUN_14607c334(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14607c40a:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9ccf40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14607c40a;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9ccf40;
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
                    /* WARNING: Could not recover jumptable at 0x00014607c4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14607c4dc FUN_14607c4dc body=205 status=ok
// SIG undefined FUN_14607c4dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607c4dc(void)

{
  if ((DAT_14ca3097f & 2) == 0) {
    DAT_14ca3097f = DAT_14ca3097f | 2;
    _DAT_14ca30920 = L"FTonemapVS";
    _DAT_14ca30938 = FUN_146826540;
    _DAT_14ca30940 = FUN_146825d77;
    _DAT_14ca30948 = FUN_146825fd6;
    _DAT_14ca30950 = FUN_1407e02ea;
    _DAT_14ca30958 = FUN_146826273;
    _DAT_14ca30930 = FUN_14729a43c;
    _DAT_14ca30970 = 0xffffffff000000e0;
    _DAT_14ca30978 = 8;
    DAT_14ca3097c = 0;
    _DAT_14ca30960 = &LAB_14729a468;
    FUN_14607c5aa();
    FUN_1407e00cc(&DAT_14ca30918);
    return;
  }
  return;
}



// FUNCTION 14607c5aa FUN_14607c5aa body=123 status=ok
// SIG undefined FUN_14607c5aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607c5aa(void)

{
  _DAT_14ca34dd0 = L"BASE";
  DAT_14ca34dfa = 4;
  _DAT_14ca34dd8 = FUN_140b35ae4();
  _DAT_14ca34de0 = DAT_14ca30928;
  _DAT_14ca34de8 = &LAB_14682652b;
  DAT_14ca30928 = &DAT_14ca34dd0;
  DAT_14ca3097d = DAT_14ca3097d + '\x01';
  _DAT_14ca34df0 = 0x100000000;
  if (*(char *)(_DAT_14ca34dd8 + 100) != '\0') {
    DAT_14ca3097e = DAT_14ca3097e + '\x01';
  }
  return;
}



// FUNCTION 14607c626 FUN_14607c626 body=205 status=ok
// SIG undefined FUN_14607c626(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607c626(void)

{
  if ((DAT_14ca6f077 & 2) == 0) {
    DAT_14ca6f077 = DAT_14ca6f077 | 2;
    _DAT_14ca6f018 =
         L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg >"
    ;
    _DAT_14ca6f030 = FUN_146826540;
    _DAT_14ca6f038 = FUN_146825d77;
    _DAT_14ca6f040 = FUN_146825fd6;
    _DAT_14ca6f048 = FUN_1407e02ea;
    _DAT_14ca6f050 = FUN_146826273;
    _DAT_14ca6f028 = FUN_1473400b6;
    _DAT_14ca6f068 = 0xffffffff000000e0;
    _DAT_14ca6f070 = 8;
    DAT_14ca6f074 = 0;
    _DAT_14ca6f058 = &LAB_1473400e0;
    FUN_14607c6f4();
    FUN_1407e00cc(&DAT_14ca6f010);
    return;
  }
  return;
}



// FUNCTION 14607c6f4 FUN_14607c6f4 body=123 status=ok
// SIG undefined FUN_14607c6f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607c6f4(void)

{
  _DAT_14ca71c48 = L"BASE";
  DAT_14ca71c72 = 4;
  _DAT_14ca71c50 = FUN_140b35ae4();
  _DAT_14ca71c58 = DAT_14ca6f020;
  _DAT_14ca71c60 = &LAB_14682652b;
  DAT_14ca6f020 = &DAT_14ca71c48;
  DAT_14ca6f075 = DAT_14ca6f075 + '\x01';
  _DAT_14ca71c68 = 0x100000000;
  if (*(char *)(_DAT_14ca71c50 + 100) != '\0') {
    DAT_14ca6f076 = DAT_14ca6f076 + '\x01';
  }
  return;
}



// FUNCTION 14607c770 FUN_14607c770 body=205 status=ok
// SIG undefined FUN_14607c770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607c770(void)

{
  if ((DAT_14caad4b7 & 2) == 0) {
    DAT_14caad4b7 = DAT_14caad4b7 | 2;
    _DAT_14caad458 = L"FSlateElementVS";
    _DAT_14caad470 = FUN_146826540;
    _DAT_14caad478 = FUN_146825d77;
    _DAT_14caad480 = FUN_146825fd6;
    _DAT_14caad488 = FUN_1407e02ea;
    _DAT_14caad490 = FUN_146826273;
    _DAT_14caad468 = FUN_14750ef20;
    _DAT_14caad4a8 = 0xffffffff000000e0;
    _DAT_14caad4b0 = 8;
    DAT_14caad4b4 = 0;
    _DAT_14caad498 = &LAB_14750ef4a;
    FUN_14607c83e();
    FUN_1407e00cc(&DAT_14caad450);
    return;
  }
  return;
}



// FUNCTION 14607c83e FUN_14607c83e body=123 status=ok
// SIG undefined FUN_14607c83e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607c83e(void)

{
  _DAT_14cab0ed0 = L"BASE";
  DAT_14cab0efa = 4;
  _DAT_14cab0ed8 = FUN_140b35ae4();
  _DAT_14cab0ee0 = DAT_14caad460;
  _DAT_14cab0ee8 = &LAB_14682652b;
  DAT_14caad460 = &DAT_14cab0ed0;
  DAT_14caad4b5 = DAT_14caad4b5 + '\x01';
  _DAT_14cab0ef0 = 0x100000000;
  if (*(char *)(_DAT_14cab0ed8 + 100) != '\0') {
    DAT_14caad4b6 = DAT_14caad4b6 + '\x01';
  }
  return;
}



// FUNCTION 14607c8ba FUN_14607c8ba body=226 status=ok
// SIG undefined FUN_14607c8ba(void)

longlong * FUN_14607c8ba(longlong *param_1)

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
  pcVar13 = FUN_146314624;
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



// FUNCTION 14607c99e FUN_14607c99e body=138 status=ok
// SIG undefined FUN_14607c99e(void)

code * FUN_14607c99e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TargetCubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000037e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733779a;
}



// FUNCTION 14607ca28 FUN_14607ca28 body=144 status=ok
// SIG undefined FUN_14607ca28(void)

code * FUN_14607ca28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000380;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14607cab8;
}



// FUNCTION 14607cab8 FUN_14607cab8 body=146 status=ok
// SIG undefined FUN_14607cab8(void)

code * FUN_14607cab8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1403f0ce6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricCloudRenderViewParamsUB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRenderVolumetricCloudGlobalParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000037f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca69a28;
  return FUN_14607c99e;
}



// FUNCTION 14607cb4a FUN_14607cb4a body=181 status=ok
// SIG undefined FUN_14607cb4a(void)

longlong FUN_14607cb4a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_14607cc00(local_48,param_2,&local_38);
  local_38 = CONCAT35(local_38._5_3_,0x1bf800000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a58922(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x1ec) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x1e8) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x1f0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607cc00 FUN_14607cc00 body=428 status=ok
// SIG undefined FUN_14607cc00(void)

longlong * FUN_14607cc00(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x28);
  if (plVar6 == (longlong *)0x0) {
LAB_14607cce0:
    *puVar5 = &PTR_LAB_149f201b0;
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
    *puVar5 = &PTR_FUN_14a5aa2f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14607cce0;
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
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f201b0;
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
    *puVar5 = &PTR_FUN_14a5aa2f0;
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



// FUNCTION 14607cdb8 FUN_14607cdb8 body=294 status=ok
// SIG undefined FUN_14607cdb8(void)

undefined8 * FUN_14607cdb8(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_14a6fdb10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 1;
  *(byte *)((longlong)param_1 + 0xf2) = *(byte *)((longlong)param_1 + 0xf2) & 0xfe;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 3;
  *(byte *)((longlong)param_1 + 0x172) = *(byte *)((longlong)param_1 + 0x172) & 0xf8;
  param_1[10] = 0x3c88888942700000;
  param_1[0xb] = 0;
  param_1[0x15] = 0xbff0000000000000;
  param_1[0x16] = 0xbff0000000000000;
  param_1[0x17] = 0xbff0000000000000;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0x3ff0000000000000;
  param_1[0x1a] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined2 *)((longlong)param_1 + 0xef) = 0;
  param_1[0x10] = 0x434800003e800000;
  *(byte *)((longlong)param_1 + 0xec) = *(byte *)((longlong)param_1 + 0xec) | 0x20;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf3) = 3;
  *(undefined4 *)(param_1 + 5) = 0x20;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) & 0xf1 | 6;
  return param_1;
}



// FUNCTION 14607ceea FUN_14607ceea body=293 status=ok
// SIG undefined FUN_14607ceea(void)

undefined8 * FUN_14607ceea(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"Sprite",1);
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,0,0);
  FUN_140834366(param_1,param_2);
  *param_1 = &PTR_FUN_14ab20eb0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0x1900000000032;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 5;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607d01c FUN_14607d01c body=293 status=ok
// SIG undefined FUN_14607d01c(void)

undefined8 * FUN_14607d01c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abf1bf0;
  param_1[5] = &PTR_LAB_14abf1f20;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  FUN_1400b22c2(&local_28,"Set Tag Cooldown");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined1 **)((longlong)param_1 + 0x7c) = &DAT_40a00000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffc0 | 0x10;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607d14e FUN_14607d14e body=294 status=ok
// SIG undefined FUN_14607d14e(void)

undefined8 * FUN_14607d14e(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac11120;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x44800000;
  *(undefined4 *)(param_1 + 0x42) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x41200000;
  param_1[0x43] = &DAT_41200000;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined2 *)((longlong)param_1 + 0x22c) = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xffffffc0 | 0x1e;
  FUN_141118a4c(param_1 + 0x47);
  FUN_14111896e(param_1 + 0x4e);
  FUN_14111896e(param_1 + 0x55);
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 2;
  lVar1 = FUN_145869c20();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfe;
  if (*(char *)((longlong)param_1 + 0x4a) != '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x4a) = 3;
  }
  *(undefined1 *)((longlong)param_1 + 0xf9) = 4;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x5c] = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x22d) = 2;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xffffffe3 | 8;
  return param_1;
}



// FUNCTION 14607d274 FUN_14607d274 body=218 status=ok
// SIG undefined FUN_14607d274(void)

void FUN_14607d274(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14607d350(param_2);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_1449db7f2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14607d2c5;
  }
  lVar2 = 0;
LAB_14607d2c5:
  lVar2 = FUN_140e94dc2(lVar2);
  if (lVar2 != 0) {
    FUN_14607d3e2(lVar2 + 0x30,local_38,param_1,&LAB_140cc1b5c);
  }
  FUN_140cc1cf0(param_1,local_38);
  FUN_140cc1bde(param_1 + 0x48,local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607d350 FUN_14607d350 body=145 status=ok
// SIG undefined FUN_14607d350(void)

longlong FUN_14607d350(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140e94e78();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14134816c(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_140e94e78();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14607d3b4;
  }
  lVar1 = 0;
LAB_14607d3b4:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607d3e2 FUN_14607d3e2 body=244 status=ok
// SIG undefined FUN_14607d3e2(void)

undefined8
FUN_14607d3e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14ae6bc70;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14ae6a590;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1457bd49c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607d4e2 FUN_14607d4e2 body=294 status=ok
// SIG undefined FUN_14607d4e2(void)

longlong * FUN_14607d4e2(longlong *param_1)

{
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14b081f40;
  param_1[5] = (longlong)&PTR_LAB_14b082940;
  param_1[6] = (longlong)&PTR_LAB_14b082980;
  param_1[0x55] = (longlong)&PTR_LAB_14b0829d0;
  param_1[0x56] = (longlong)&PTR_LAB_14b082a50;
  param_1[0x57] = (longlong)&PTR_LAB_14b082a60;
  param_1[0xc4] = (longlong)&PTR_FUN_14a8bd110;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 0x644) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  FUN_140056680(param_1 + 0xcb,&DAT_149e063b2);
  *(undefined4 *)(param_1 + 0xcd) = 0x44bb8000;
  param_1[0xc4] = (longlong)&PTR_FUN_14b082ac0;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  (**(code **)(*param_1 + 0x720))(param_1,0);
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) | 8;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  return param_1;
}



// FUNCTION 14607d610 FUN_14607d610 body=296 status=ok
// SIG undefined FUN_14607d610(void)

longlong * FUN_14607d610(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14585467a();
  *param_1 = (longlong)&PTR_FUN_14bd7d990;
  param_1[5] = (longlong)&PTR_FUN_14bd7dd60;
  param_1[0x13] = (longlong)&PTR_FUN_14bd7dd80;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x149) = 0;
  *(undefined8 *)((longlong)param_1 + 0x151) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_38 = L"ConvertToPolygonsToolName";
  local_30 = 0x19;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UConvertToPolygonsTool";
  local_30 = 0x16;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Generate PolyGroups");
  (**(code **)(*param_1 + 0x370))(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607d73a FUN_14607d73a body=696 status=ok
// SIG undefined FUN_14607d73a(void)

void FUN_14607d73a(longlong param_1,longlong *param_2,undefined1 param_3,byte param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 unaff_R14;
  undefined1 auStack_68 [46];
  ushort local_3a;
  undefined4 local_38;
  undefined1 local_33;
  byte local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  uVar5 = param_7;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar6 = param_1 + 0x138;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x148);
    }
    (**(code **)(*param_2 + 0x178))(param_2,lVar6);
  }
  if (2 < param_4) {
    (**(code **)(*param_2 + 0x178))(param_2,param_1 + 0x160,2);
    (**(code **)(*param_2 + 0x178))(param_2,&param_6,3);
  }
  FUN_1400748c2(param_2,1);
  FUN_1400748c2(param_2,CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar5) & 0xffffff01);
  if (param_4 != 0) {
    local_31 = DAT_14c761650;
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar4 + 1;
    local_33 = param_3;
    local_32 = param_4;
    if ((undefined1 *)puVar4[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_31,1);
    }
    else {
      local_31 = *(undefined1 *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    puVar4 = (ulonglong *)param_2[1];
    pbVar2 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar2) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_32,1);
    }
    else {
      local_32 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar2;
    }
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar4 + 1;
    if ((undefined1 *)puVar4[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_33,1);
    }
    else {
      local_33 = *(undefined1 *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar4 + 1;
    if ((undefined1 *)puVar4[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&param_5,1);
    }
    else {
      param_5 = *(undefined1 *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (param_4 != 1) {
      local_38 = FUN_1415d1120(1);
      if (*(longlong *)(param_1 + 0x28) == 0) {
        local_3a = 0;
      }
      else {
        local_3a = (ushort)*(byte *)(*(longlong *)(param_1 + 0x28) + 0x849);
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar3 = (undefined4 *)*puVar4 + 1;
      if ((undefined4 *)puVar4[1] < puVar3) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_38,4);
        }
        else {
          FUN_14572512c(param_2,&local_38);
        }
      }
      else {
        local_38 = *(undefined4 *)*puVar4;
        *puVar4 = (ulonglong)puVar3;
      }
      puVar4 = (ulonglong *)param_2[1];
      if (puVar4[1] < *puVar4 + 2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_3a,2);
        }
        else {
          thunk_FUN_1457251a8(param_2,&local_3a);
        }
      }
      else {
        *puVar4 = *puVar4 + 2;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607d9fe FUN_14607d9fe body=599 status=ok
// SIG undefined FUN_14607d9fe(void)

undefined8 * FUN_14607d9fe(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar5);
  *param_1 = &PTR_FUN_14b384a00;
  *(undefined4 *)(param_1 + 0x16) = 0x15e56904;
  param_1[0x17] = "inv_custom";
  lVar6 = FUN_140fd1cf2();
  if (lVar6 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14607dae0;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar6);
  }
LAB_14607dae0:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Customization");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607dc56 FUN_14607dc56 body=236 status=ok
// SIG undefined FUN_14607dc56(void)

int * FUN_14607dc56(longlong *param_1,int *param_2)

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
      FUN_14607dd42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xd8);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xd8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xd8 + *param_1;
  return param_2;
}



// FUNCTION 14607dd42 FUN_14607dd42 body=146 status=ok
// SIG undefined FUN_14607dd42(void)

void FUN_14607dd42(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd8)) {
      uVar5 = uVar4 / 0xd8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14607ddd4 FUN_14607ddd4 body=258 status=ok
// SIG undefined FUN_14607ddd4(void)

void FUN_14607ddd4(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [36];
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    uVar3 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar4 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar4 * 8);
        if (local_68 != 0) {
          FUN_14607ded8(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar4 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar4 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(uVar3,&local_4a,&local_60);
        }
        uVar4 = uVar4 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607ded8 FUN_14607ded8 body=193 status=ok
// SIG undefined FUN_14607ded8(void)

longlong FUN_14607ded8(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_14607df9a(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607df9a FUN_14607df9a body=454 status=ok
// SIG undefined FUN_14607df9a(void)

int * FUN_14607df9a(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78 [2];
  byte local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*(undefined4 *)param_3,*(undefined4 *)((longlong)param_3 + 4));
  uVar2 = param_3[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if ((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) {
    *param_2 = -1;
  }
  else {
    iVar5 = *(int *)(lVar6 + 0x10);
    *param_2 = iVar5;
    if (iVar5 != -1) goto LAB_14607e123;
  }
  local_98 = (undefined8 *)*param_3;
  uStack_90 = (int *)param_3[1];
  local_68 = 0;
  local_58 = 1;
  local_88 = 0;
  uStack_80 = 0;
  local_78[0] = 0;
  local_60 = FUN_1446f8646();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  local_50 = 0;
  FUN_14607e162(param_1 + 0x68,local_a8);
  *local_a0 = (undefined4)local_98;
  local_a0[1] = local_98._4_4_;
  local_a0[2] = (undefined4)uStack_90;
  local_a0[3] = uStack_90._4_4_;
  FUN_1461bb9d2(local_a0 + 4,&local_88);
  *(undefined1 *)(local_a0 + 0x12) = local_50;
  *param_2 = local_a8[0];
  (*(code *)(&PTR_LAB_14a4c7e10)[local_68])(local_78);
  local_98 = param_3;
  uStack_90 = param_2;
  FUN_140bf3cbe(plVar1,local_a8,&local_98,0);
LAB_14607e123:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607e162 FUN_14607e162 body=239 status=ok
// SIG undefined FUN_14607e162(void)

int * FUN_14607e162(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 14607e252 FUN_14607e252 body=284 status=ok
// SIG undefined FUN_14607e252(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607e252(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd890) {
    FUN_144b3d300(&DAT_14c9cd890);
    if (DAT_14c9cd890 == -1) {
      FUN_14607e36e();
      FUN_140db5666(&DAT_14c9cd7e8,0,&DAT_14c9cd780,L"FPostProcessBenchmarkVS0",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainBenchmarkVS",0,1,FUN_14715bcf8,
                    FUN_14715bcd0,&LAB_14715bccc,&LAB_14715bcc8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14c9cd7e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c1931b);
      _Init_thread_footer(&DAT_14c9cd890);
    }
  }
  return &DAT_14c9cd7e8;
}



// FUNCTION 14607e36e FUN_14607e36e body=205 status=ok
// SIG undefined FUN_14607e36e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607e36e(void)

{
  if ((DAT_14c9cd7e7 & 2) == 0) {
    DAT_14c9cd7e7 = DAT_14c9cd7e7 | 2;
    _DAT_14c9cd788 = L"FPostProcessBenchmarkVS0";
    _DAT_14c9cd7a0 = FUN_146826540;
    _DAT_14c9cd7a8 = FUN_146825d77;
    _DAT_14c9cd7b0 = FUN_146825fd6;
    _DAT_14c9cd7b8 = FUN_1407e02ea;
    _DAT_14c9cd7c0 = FUN_146826273;
    _DAT_14c9cd798 = FUN_14715bc9a;
    _DAT_14c9cd7d8 = 0xffffffff000000e0;
    _DAT_14c9cd7e0 = 8;
    DAT_14c9cd7e4 = 0;
    _DAT_14c9cd7c8 = &LAB_14715bcc4;
    FUN_14607e43c();
    FUN_1407e00cc(&DAT_14c9cd780);
    return;
  }
  return;
}



// FUNCTION 14607e43c FUN_14607e43c body=123 status=ok
// SIG undefined FUN_14607e43c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607e43c(void)

{
  _DAT_14c9cfac0 = L"BASE";
  DAT_14c9cfaea = 4;
  _DAT_14c9cfac8 = FUN_140b35ae4();
  _DAT_14c9cfad0 = DAT_14c9cd790;
  _DAT_14c9cfad8 = &LAB_14682652b;
  DAT_14c9cd790 = &DAT_14c9cfac0;
  DAT_14c9cd7e5 = DAT_14c9cd7e5 + '\x01';
  _DAT_14c9cfae0 = 0x100000000;
  if (*(char *)(_DAT_14c9cfac8 + 100) != '\0') {
    DAT_14c9cd7e6 = DAT_14c9cd7e6 + '\x01';
  }
  return;
}



// FUNCTION 14607e4b8 FUN_14607e4b8 body=284 status=ok
// SIG undefined FUN_14607e4b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607e4b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd9b8) {
    FUN_144b3d300(&DAT_14c9cd9b8);
    if (DAT_14c9cd9b8 == -1) {
      FUN_14607e5d4();
      FUN_140db5666(&DAT_14c9cd910,0,&DAT_14c9cd8a8,L"FPostProcessBenchmarkVS1",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainBenchmarkVS",0,1,FUN_14715bd76,
                    FUN_14715bd4e,&LAB_14715bd4a,&LAB_14715bd46,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14c9cd910 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c19327);
      _Init_thread_footer(&DAT_14c9cd9b8);
    }
  }
  return &DAT_14c9cd910;
}



// FUNCTION 14607e5d4 FUN_14607e5d4 body=205 status=ok
// SIG undefined FUN_14607e5d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607e5d4(void)

{
  if ((DAT_14c9cd90f & 2) == 0) {
    DAT_14c9cd90f = DAT_14c9cd90f | 2;
    _DAT_14c9cd8b0 = L"FPostProcessBenchmarkVS1";
    _DAT_14c9cd8c8 = FUN_146826540;
    _DAT_14c9cd8d0 = FUN_146825d77;
    _DAT_14c9cd8d8 = FUN_146825fd6;
    _DAT_14c9cd8e0 = FUN_1407e02ea;
    _DAT_14c9cd8e8 = FUN_146826273;
    _DAT_14c9cd8c0 = FUN_14715bd18;
    _DAT_14c9cd900 = 0xffffffff000000e0;
    _DAT_14c9cd908 = 8;
    DAT_14c9cd90c = 0;
    _DAT_14c9cd8f0 = &LAB_14715bd42;
    FUN_14607e6a2();
    FUN_1407e00cc(&DAT_14c9cd8a8);
    return;
  }
  return;
}



// FUNCTION 14607e6a2 FUN_14607e6a2 body=123 status=ok
// SIG undefined FUN_14607e6a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607e6a2(void)

{
  _DAT_14c9cfaf0 = L"BASE";
  DAT_14c9cfb1a = 4;
  _DAT_14c9cfaf8 = FUN_140b35ae4();
  _DAT_14c9cfb00 = DAT_14c9cd8b8;
  _DAT_14c9cfb08 = &LAB_14682652b;
  DAT_14c9cd8b8 = &DAT_14c9cfaf0;
  DAT_14c9cd90d = DAT_14c9cd90d + '\x01';
  _DAT_14c9cfb10 = 0x100000000;
  if (*(char *)(_DAT_14c9cfaf8 + 100) != '\0') {
    DAT_14c9cd90e = DAT_14c9cd90e + '\x01';
  }
  return;
}



// FUNCTION 14607e71e FUN_14607e71e body=284 status=ok
// SIG undefined FUN_14607e71e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607e71e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cdae0) {
    FUN_144b3d300(&DAT_14c9cdae0);
    if (DAT_14c9cdae0 == -1) {
      FUN_14607e83a();
      FUN_140db5666(&DAT_14c9cda38,0,&DAT_14c9cd9d0,L"FPostProcessBenchmarkVS2",
                    L"/Engine/Private/GPUBenchmark.usf",L"MainBenchmarkVS",0,1,FUN_14715bdf4,
                    FUN_14715bdcc,&LAB_14715bdc8,&LAB_14715bdc4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14c9cda38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c19333);
      _Init_thread_footer(&DAT_14c9cdae0);
    }
  }
  return &DAT_14c9cda38;
}



// FUNCTION 14607e83a FUN_14607e83a body=205 status=ok
// SIG undefined FUN_14607e83a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607e83a(void)

{
  if ((DAT_14c9cda37 & 2) == 0) {
    DAT_14c9cda37 = DAT_14c9cda37 | 2;
    _DAT_14c9cd9d8 = L"FPostProcessBenchmarkVS2";
    _DAT_14c9cd9f0 = FUN_146826540;
    _DAT_14c9cd9f8 = FUN_146825d77;
    _DAT_14c9cda00 = FUN_146825fd6;
    _DAT_14c9cda08 = FUN_1407e02ea;
    _DAT_14c9cda10 = FUN_146826273;
    _DAT_14c9cd9e8 = FUN_14715bd96;
    _DAT_14c9cda28 = 0xffffffff000000e0;
    _DAT_14c9cda30 = 8;
    DAT_14c9cda34 = 0;
    _DAT_14c9cda18 = &LAB_14715bdc0;
    FUN_14607e908();
    FUN_1407e00cc(&DAT_14c9cd9d0);
    return;
  }
  return;
}



// FUNCTION 14607e908 FUN_14607e908 body=123 status=ok
// SIG undefined FUN_14607e908(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607e908(void)

{
  _DAT_14c9cfb20 = L"BASE";
  DAT_14c9cfb4a = 4;
  _DAT_14c9cfb28 = FUN_140b35ae4();
  _DAT_14c9cfb30 = DAT_14c9cd9e0;
  _DAT_14c9cfb38 = &LAB_14682652b;
  DAT_14c9cd9e0 = &DAT_14c9cfb20;
  DAT_14c9cda35 = DAT_14c9cda35 + '\x01';
  _DAT_14c9cfb40 = 0x100000000;
  if (*(char *)(_DAT_14c9cfb28 + 100) != '\0') {
    DAT_14c9cda36 = DAT_14c9cda36 + '\x01';
  }
  return;
}



// FUNCTION 14607e984 FUN_14607e984 body=205 status=ok
// SIG undefined FUN_14607e984(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607e984(void)

{
  if ((DAT_14c9e7d3f & 2) == 0) {
    DAT_14c9e7d3f = DAT_14c9e7d3f | 2;
    _DAT_14c9e7ce0 = L"FLightFunctionAtlasSlotPS";
    _DAT_14c9e7cf8 = FUN_146826540;
    _DAT_14c9e7d00 = FUN_146825d77;
    _DAT_14c9e7d08 = FUN_146825fd6;
    _DAT_14c9e7d10 = FUN_1407e02ea;
    _DAT_14c9e7d18 = FUN_146826273;
    _DAT_14c9e7cf0 = FUN_1471d074c;
    _DAT_14c9e7d30 = 0xffffffff000000f8;
    _DAT_14c9e7d38 = 8;
    DAT_14c9e7d3c = 0;
    _DAT_14c9e7d20 = &LAB_1471d0782;
    FUN_14607ea52();
    FUN_1407e00cc(&DAT_14c9e7cd8);
    return;
  }
  return;
}



// FUNCTION 14607ea52 FUN_14607ea52 body=123 status=ok
// SIG undefined FUN_14607ea52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607ea52(void)

{
  _DAT_14c9eb0e0 = L"BASE";
  DAT_14c9eb10a = 4;
  _DAT_14c9eb0e8 = FUN_141526006();
  _DAT_14c9eb0f0 = DAT_14c9e7ce8;
  _DAT_14c9eb0f8 = &LAB_14682652b;
  DAT_14c9e7ce8 = &DAT_14c9eb0e0;
  DAT_14c9e7d3d = DAT_14c9e7d3d + '\x01';
  _DAT_14c9eb100 = 0x100000000;
  if (*(char *)(_DAT_14c9eb0e8 + 100) != '\0') {
    DAT_14c9e7d3e = DAT_14c9e7d3e + '\x01';
  }
  return;
}



// FUNCTION 14607eace FUN_14607eace body=284 status=ok
// SIG undefined FUN_14607eace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607eace(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12cc8) {
    FUN_144b3d300(&DAT_14ca12cc8);
    if (DAT_14ca12cc8 == -1) {
      FUN_14607ebea();
      FUN_140db5666(&DAT_14ca12c20,0,&DAT_14ca12bb8,L"FMobileDeferredCopyPLSPS",
                    L"/Engine/Private/MobileDeferredUtils.usf",L"MobileDeferredCopyPLSPS",3,1,
                    FUN_14724fc00,FUN_14724fbd8,&LAB_14724fbb2,&LAB_14724fbae,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca12c20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dff13e);
      _Init_thread_footer(&DAT_14ca12cc8);
    }
  }
  return &DAT_14ca12c20;
}



// FUNCTION 14607ebea FUN_14607ebea body=205 status=ok
// SIG undefined FUN_14607ebea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607ebea(void)

{
  if ((DAT_14ca12c1f & 2) == 0) {
    DAT_14ca12c1f = DAT_14ca12c1f | 2;
    _DAT_14ca12bc0 = L"FMobileDeferredCopyPLSPS";
    _DAT_14ca12bd8 = FUN_146826540;
    _DAT_14ca12be0 = FUN_146825d77;
    _DAT_14ca12be8 = FUN_146825fd6;
    _DAT_14ca12bf0 = FUN_1407e02ea;
    _DAT_14ca12bf8 = FUN_146826273;
    _DAT_14ca12bd0 = FUN_14724fb7e;
    _DAT_14ca12c10 = 0xffffffff000000e0;
    _DAT_14ca12c18 = 8;
    DAT_14ca12c1c = 0;
    _DAT_14ca12c00 = &LAB_14724fbaa;
    FUN_14607ecb8();
    FUN_1407e00cc(&DAT_14ca12bb8);
    return;
  }
  return;
}



// FUNCTION 14607ecb8 FUN_14607ecb8 body=123 status=ok
// SIG undefined FUN_14607ecb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607ecb8(void)

{
  _DAT_14ca18ab8 = L"BASE";
  DAT_14ca18ae2 = 4;
  _DAT_14ca18ac0 = FUN_140b35ae4();
  _DAT_14ca18ac8 = DAT_14ca12bc8;
  _DAT_14ca18ad0 = &LAB_14682652b;
  DAT_14ca12bc8 = &DAT_14ca18ab8;
  DAT_14ca12c1d = DAT_14ca12c1d + '\x01';
  _DAT_14ca18ad8 = 0x100000000;
  if (*(char *)(_DAT_14ca18ac0 + 100) != '\0') {
    DAT_14ca12c1e = DAT_14ca12c1e + '\x01';
  }
  return;
}



// FUNCTION 14607ed34 FUN_14607ed34 body=284 status=ok
// SIG undefined FUN_14607ed34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607ed34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12df0) {
    FUN_144b3d300(&DAT_14ca12df0);
    if (DAT_14ca12df0 == -1) {
      FUN_14607ee50();
      FUN_140db5666(&DAT_14ca12d48,0,&DAT_14ca12ce0,L"FMobileDeferredCopyDepthPS",
                    L"/Engine/Private/MobileDeferredUtils.usf",L"MobileDeferredCopyDepthPS",3,1,
                    FUN_14724fd0e,FUN_14724fce6,&LAB_14724fcc0,&LAB_14724fcbc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca12d48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dff14a);
      _Init_thread_footer(&DAT_14ca12df0);
    }
  }
  return &DAT_14ca12d48;
}



// FUNCTION 14607ee50 FUN_14607ee50 body=205 status=ok
// SIG undefined FUN_14607ee50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607ee50(void)

{
  if ((DAT_14ca12d47 & 2) == 0) {
    DAT_14ca12d47 = DAT_14ca12d47 | 2;
    _DAT_14ca12ce8 = L"FMobileDeferredCopyDepthPS";
    _DAT_14ca12d00 = FUN_146826540;
    _DAT_14ca12d08 = FUN_146825d77;
    _DAT_14ca12d10 = FUN_146825fd6;
    _DAT_14ca12d18 = FUN_1407e02ea;
    _DAT_14ca12d20 = FUN_146826273;
    _DAT_14ca12cf8 = FUN_14724fc8c;
    _DAT_14ca12d38 = 0xffffffff000000e0;
    _DAT_14ca12d40 = 8;
    DAT_14ca12d44 = 0;
    _DAT_14ca12d28 = &LAB_14724fcb8;
    FUN_14607ef1e();
    FUN_1407e00cc(&DAT_14ca12ce0);
    return;
  }
  return;
}



// FUNCTION 14607ef1e FUN_14607ef1e body=123 status=ok
// SIG undefined FUN_14607ef1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607ef1e(void)

{
  _DAT_14ca18ae8 = L"BASE";
  DAT_14ca18b12 = 4;
  _DAT_14ca18af0 = FUN_140b35ae4();
  _DAT_14ca18af8 = DAT_14ca12cf0;
  _DAT_14ca18b00 = &LAB_14682652b;
  DAT_14ca12cf0 = &DAT_14ca18ae8;
  DAT_14ca12d45 = DAT_14ca12d45 + '\x01';
  _DAT_14ca18b08 = 0x100000000;
  if (*(char *)(_DAT_14ca18af0 + 100) != '\0') {
    DAT_14ca12d46 = DAT_14ca12d46 + '\x01';
  }
  return;
}



// FUNCTION 14607ef9a FUN_14607ef9a body=284 status=ok
// SIG undefined FUN_14607ef9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607ef9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12f18) {
    FUN_144b3d300(&DAT_14ca12f18);
    if (DAT_14ca12f18 == -1) {
      FUN_14607f0b6();
      FUN_140db5666(&DAT_14ca12e70,0,&DAT_14ca12e08,L"FPreTonemapMSAA_Mobile",
                    L"/Engine/Private/PostProcessMobile.usf",L"PreTonemapMSAA_Mobile",3,1,
                    FUN_14724ffd6,FUN_14724ffae,&LAB_14724ff88,&LAB_14724ff84,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca12e70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dff156);
      _Init_thread_footer(&DAT_14ca12f18);
    }
  }
  return &DAT_14ca12e70;
}



// FUNCTION 14607f0b6 FUN_14607f0b6 body=205 status=ok
// SIG undefined FUN_14607f0b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f0b6(void)

{
  if ((DAT_14ca12e6f & 2) == 0) {
    DAT_14ca12e6f = DAT_14ca12e6f | 2;
    _DAT_14ca12e10 = L"FPreTonemapMSAA_Mobile";
    _DAT_14ca12e28 = FUN_146826540;
    _DAT_14ca12e30 = FUN_146825d77;
    _DAT_14ca12e38 = FUN_146825fd6;
    _DAT_14ca12e40 = FUN_1407e02ea;
    _DAT_14ca12e48 = FUN_146826273;
    _DAT_14ca12e20 = FUN_14724ff54;
    _DAT_14ca12e60 = 0xffffffff000000e0;
    _DAT_14ca12e68 = 8;
    DAT_14ca12e6c = 0;
    _DAT_14ca12e50 = &LAB_14724ff80;
    FUN_14607f184();
    FUN_1407e00cc(&DAT_14ca12e08);
    return;
  }
  return;
}



// FUNCTION 14607f184 FUN_14607f184 body=123 status=ok
// SIG undefined FUN_14607f184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f184(void)

{
  _DAT_14ca18b18 = L"BASE";
  DAT_14ca18b42 = 4;
  _DAT_14ca18b20 = FUN_140b35ae4();
  _DAT_14ca18b28 = DAT_14ca12e18;
  _DAT_14ca18b30 = &LAB_14682652b;
  DAT_14ca12e18 = &DAT_14ca18b18;
  DAT_14ca12e6d = DAT_14ca12e6d + '\x01';
  _DAT_14ca18b38 = 0x100000000;
  if (*(char *)(_DAT_14ca18b20 + 100) != '\0') {
    DAT_14ca12e6e = DAT_14ca12e6e + '\x01';
  }
  return;
}



// FUNCTION 14607f200 FUN_14607f200 body=284 status=ok
// SIG undefined FUN_14607f200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607f200(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1e560) {
    FUN_144b3d300(&DAT_14ca1e560);
    if (DAT_14ca1e560 == -1) {
      FUN_14607f31c();
      FUN_140db5666(&DAT_14ca1e4b8,0,&DAT_14ca1e450,L"FPathTracingDefaultMS",
                    L"/Engine/Private/PathTracing/PathTracingMissShader.usf",L"PathTracingDefaultMS"
                    ,7,1,FUN_1472734e4,FUN_1472734bc,&LAB_1462f51be,&LAB_1472734b8,&LAB_1472734b2,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca1e4b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70b2b);
      _Init_thread_footer(&DAT_14ca1e560);
    }
  }
  return &DAT_14ca1e4b8;
}



// FUNCTION 14607f31c FUN_14607f31c body=205 status=ok
// SIG undefined FUN_14607f31c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f31c(void)

{
  if ((DAT_14ca1e4b7 & 2) == 0) {
    DAT_14ca1e4b7 = DAT_14ca1e4b7 | 2;
    _DAT_14ca1e458 = L"FPathTracingDefaultMS";
    _DAT_14ca1e470 = FUN_146826540;
    _DAT_14ca1e478 = FUN_146825d77;
    _DAT_14ca1e480 = FUN_146825fd6;
    _DAT_14ca1e488 = FUN_1407e02ea;
    _DAT_14ca1e490 = FUN_146826273;
    _DAT_14ca1e468 = FUN_147273482;
    _DAT_14ca1e4a8 = 0xffffffff000000e0;
    _DAT_14ca1e4b0 = 8;
    DAT_14ca1e4b4 = 0;
    _DAT_14ca1e498 = &LAB_1472734ae;
    FUN_14607f3ea();
    FUN_1407e00cc(&DAT_14ca1e450);
    return;
  }
  return;
}



// FUNCTION 14607f3ea FUN_14607f3ea body=123 status=ok
// SIG undefined FUN_14607f3ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f3ea(void)

{
  _DAT_14ca24a20 = L"BASE";
  DAT_14ca24a4a = 4;
  _DAT_14ca24a28 = FUN_140b35ae4();
  _DAT_14ca24a30 = DAT_14ca1e460;
  _DAT_14ca24a38 = &LAB_14682652b;
  DAT_14ca1e460 = &DAT_14ca24a20;
  DAT_14ca1e4b5 = DAT_14ca1e4b5 + '\x01';
  _DAT_14ca24a40 = 0x100000000;
  if (*(char *)(_DAT_14ca24a28 + 100) != '\0') {
    DAT_14ca1e4b6 = DAT_14ca1e4b6 + '\x01';
  }
  return;
}



// FUNCTION 14607f466 FUN_14607f466 body=284 status=ok
// SIG undefined FUN_14607f466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607f466(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1e688) {
    FUN_144b3d300(&DAT_14ca1e688);
    if (DAT_14ca1e688 == -1) {
      FUN_14607f582();
      FUN_140db5666(&DAT_14ca1e5e0,0,&DAT_14ca1e578,L"FGPULightmassDefaultMS",
                    L"/Engine/Private/PathTracing/PathTracingMissShader.usf",L"PathTracingDefaultMS"
                    ,7,1,FUN_1472735d4,FUN_1472735ac,&LAB_1472735a8,&LAB_1472735a4,&LAB_14727359e,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca1e5e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70b37);
      _Init_thread_footer(&DAT_14ca1e688);
    }
  }
  return &DAT_14ca1e5e0;
}



// FUNCTION 14607f582 FUN_14607f582 body=205 status=ok
// SIG undefined FUN_14607f582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f582(void)

{
  if ((DAT_14ca1e5df & 2) == 0) {
    DAT_14ca1e5df = DAT_14ca1e5df | 2;
    _DAT_14ca1e580 = L"FGPULightmassDefaultMS";
    _DAT_14ca1e598 = FUN_146826540;
    _DAT_14ca1e5a0 = FUN_146825d77;
    _DAT_14ca1e5a8 = FUN_146825fd6;
    _DAT_14ca1e5b0 = FUN_1407e02ea;
    _DAT_14ca1e5b8 = FUN_146826273;
    _DAT_14ca1e590 = FUN_14727356e;
    _DAT_14ca1e5d0 = 0xffffffff000000e0;
    _DAT_14ca1e5d8 = 8;
    DAT_14ca1e5dc = 0;
    _DAT_14ca1e5c0 = &LAB_14727359a;
    FUN_14607f650();
    FUN_1407e00cc(&DAT_14ca1e578);
    return;
  }
  return;
}



// FUNCTION 14607f650 FUN_14607f650 body=123 status=ok
// SIG undefined FUN_14607f650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f650(void)

{
  _DAT_14ca24a50 = L"BASE";
  DAT_14ca24a7a = 4;
  _DAT_14ca24a58 = FUN_140b35ae4();
  _DAT_14ca24a60 = DAT_14ca1e588;
  _DAT_14ca24a68 = &LAB_14682652b;
  DAT_14ca1e588 = &DAT_14ca24a50;
  DAT_14ca1e5dd = DAT_14ca1e5dd + '\x01';
  _DAT_14ca24a70 = 0x100000000;
  if (*(char *)(_DAT_14ca24a58 + 100) != '\0') {
    DAT_14ca1e5de = DAT_14ca1e5de + '\x01';
  }
  return;
}



// FUNCTION 14607f6cc FUN_14607f6cc body=205 status=ok
// SIG undefined FUN_14607f6cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f6cc(void)

{
  if ((DAT_14ca253d7 & 2) == 0) {
    DAT_14ca253d7 = DAT_14ca253d7 | 2;
    _DAT_14ca25378 = L"FScreenSpaceDecalMaterialVS";
    _DAT_14ca25390 = FUN_146826540;
    _DAT_14ca25398 = FUN_146825d77;
    _DAT_14ca253a0 = FUN_146825fd6;
    _DAT_14ca253a8 = FUN_1407e02ea;
    _DAT_14ca253b0 = FUN_146826273;
    _DAT_14ca25388 = FUN_147289454;
    _DAT_14ca253c8 = 0xffffffff000000f8;
    _DAT_14ca253d0 = 8;
    DAT_14ca253d4 = 0;
    _DAT_14ca253b8 = &LAB_14728948c;
    FUN_14607f79a();
    FUN_1407e00cc(&DAT_14ca25370);
    return;
  }
  return;
}



// FUNCTION 14607f79a FUN_14607f79a body=123 status=ok
// SIG undefined FUN_14607f79a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f79a(void)

{
  _DAT_14ca2bd90 = L"BASE";
  DAT_14ca2bdba = 4;
  _DAT_14ca2bd98 = FUN_141526006();
  _DAT_14ca2bda0 = DAT_14ca25380;
  _DAT_14ca2bda8 = &LAB_14682652b;
  DAT_14ca25380 = &DAT_14ca2bd90;
  DAT_14ca253d5 = DAT_14ca253d5 + '\x01';
  _DAT_14ca2bdb0 = 0x100000000;
  if (*(char *)(_DAT_14ca2bd98 + 100) != '\0') {
    DAT_14ca253d6 = DAT_14ca253d6 + '\x01';
  }
  return;
}



// FUNCTION 14607f816 FUN_14607f816 body=205 status=ok
// SIG undefined FUN_14607f816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f816(void)

{
  if ((DAT_14ca254ff & 2) == 0) {
    DAT_14ca254ff = DAT_14ca254ff | 2;
    _DAT_14ca254a0 = L"FScreenSpaceDecalMaterialPS";
    _DAT_14ca254b8 = FUN_146826540;
    _DAT_14ca254c0 = FUN_146825d77;
    _DAT_14ca254c8 = FUN_146825fd6;
    _DAT_14ca254d0 = FUN_1407e02ea;
    _DAT_14ca254d8 = FUN_146826273;
    _DAT_14ca254b0 = FUN_147289528;
    _DAT_14ca254f0 = 0xffffffff000000f8;
    _DAT_14ca254f8 = 8;
    DAT_14ca254fc = 0;
    _DAT_14ca254e0 = &LAB_147289560;
    FUN_14607f8e4();
    FUN_1407e00cc(&DAT_14ca25498);
    return;
  }
  return;
}



// FUNCTION 14607f8e4 FUN_14607f8e4 body=123 status=ok
// SIG undefined FUN_14607f8e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607f8e4(void)

{
  _DAT_14ca2bdc0 = L"BASE";
  DAT_14ca2bdea = 4;
  _DAT_14ca2bdc8 = FUN_141526006();
  _DAT_14ca2bdd0 = DAT_14ca254a8;
  _DAT_14ca2bdd8 = &LAB_14682652b;
  DAT_14ca254a8 = &DAT_14ca2bdc0;
  DAT_14ca254fd = DAT_14ca254fd + '\x01';
  _DAT_14ca2bde0 = 0x100000000;
  if (*(char *)(_DAT_14ca2bdc8 + 100) != '\0') {
    DAT_14ca254fe = DAT_14ca254fe + '\x01';
  }
  return;
}



// FUNCTION 14607f960 FUN_14607f960 body=284 status=ok
// SIG undefined FUN_14607f960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607f960(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2cac8) {
    FUN_144b3d300(&DAT_14ca2cac8);
    if (DAT_14ca2cac8 == -1) {
      FUN_14607fa7c();
      FUN_140db5666(&DAT_14ca2ca20,0,&DAT_14ca2c9b8,L"FMobileBloomSetupVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"BloomVS_Mobile",0,1,FUN_14729559a,
                    FUN_14729553a,&LAB_147295522,&LAB_14729551e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2ca20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ef8e18);
      _Init_thread_footer(&DAT_14ca2cac8);
    }
  }
  return &DAT_14ca2ca20;
}



// FUNCTION 14607fa7c FUN_14607fa7c body=205 status=ok
// SIG undefined FUN_14607fa7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607fa7c(void)

{
  if ((DAT_14ca2ca1f & 2) == 0) {
    DAT_14ca2ca1f = DAT_14ca2ca1f | 2;
    _DAT_14ca2c9c0 = L"FMobileBloomSetupVS";
    _DAT_14ca2c9d8 = FUN_146826540;
    _DAT_14ca2c9e0 = FUN_146825d77;
    _DAT_14ca2c9e8 = FUN_146825fd6;
    _DAT_14ca2c9f0 = FUN_1407e02ea;
    _DAT_14ca2c9f8 = FUN_146826273;
    _DAT_14ca2c9d0 = FUN_1472954ee;
    _DAT_14ca2ca10 = 0xffffffff000000e0;
    _DAT_14ca2ca18 = 8;
    DAT_14ca2ca1c = 0;
    _DAT_14ca2ca00 = &LAB_14729551a;
    FUN_14607fb4a();
    FUN_1407e00cc(&DAT_14ca2c9b8);
    return;
  }
  return;
}



// FUNCTION 14607fb4a FUN_14607fb4a body=123 status=ok
// SIG undefined FUN_14607fb4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607fb4a(void)

{
  _DAT_14ca34398 = L"BASE";
  DAT_14ca343c2 = 4;
  _DAT_14ca343a0 = FUN_140b35ae4();
  _DAT_14ca343a8 = DAT_14ca2c9c8;
  _DAT_14ca343b0 = &LAB_14682652b;
  DAT_14ca2c9c8 = &DAT_14ca34398;
  DAT_14ca2ca1d = DAT_14ca2ca1d + '\x01';
  _DAT_14ca343b8 = 0x100000000;
  if (*(char *)(_DAT_14ca343a0 + 100) != '\0') {
    DAT_14ca2ca1e = DAT_14ca2ca1e + '\x01';
  }
  return;
}



// FUNCTION 14607fbc6 FUN_14607fbc6 body=284 status=ok
// SIG undefined FUN_14607fbc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607fbc6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2ce40) {
    FUN_144b3d300(&DAT_14ca2ce40);
    if (DAT_14ca2ce40 == -1) {
      FUN_14607fce2();
      FUN_140db5666(&DAT_14ca2cd98,0,&DAT_14ca2cd30,L"FMobileBloomDownVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"BloomDownVS_Mobile",0,1,FUN_1472959ba
                    ,FUN_14729595a,&LAB_147295942,&LAB_14729593e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    0);
      _DAT_14ca2cd98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ef9855);
      _Init_thread_footer(&DAT_14ca2ce40);
    }
  }
  return &DAT_14ca2cd98;
}



// FUNCTION 14607fce2 FUN_14607fce2 body=205 status=ok
// SIG undefined FUN_14607fce2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607fce2(void)

{
  if ((DAT_14ca2cd97 & 2) == 0) {
    DAT_14ca2cd97 = DAT_14ca2cd97 | 2;
    _DAT_14ca2cd38 = L"FMobileBloomDownVS";
    _DAT_14ca2cd50 = FUN_146826540;
    _DAT_14ca2cd58 = FUN_146825d77;
    _DAT_14ca2cd60 = FUN_146825fd6;
    _DAT_14ca2cd68 = FUN_1407e02ea;
    _DAT_14ca2cd70 = FUN_146826273;
    _DAT_14ca2cd48 = FUN_14729590e;
    _DAT_14ca2cd88 = 0xffffffff000000e0;
    _DAT_14ca2cd90 = 8;
    DAT_14ca2cd94 = 0;
    _DAT_14ca2cd78 = &LAB_14729593a;
    FUN_14607fdb0();
    FUN_1407e00cc(&DAT_14ca2cd30);
    return;
  }
  return;
}



// FUNCTION 14607fdb0 FUN_14607fdb0 body=123 status=ok
// SIG undefined FUN_14607fdb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607fdb0(void)

{
  _DAT_14ca34428 = L"BASE";
  DAT_14ca34452 = 4;
  _DAT_14ca34430 = FUN_140b35ae4();
  _DAT_14ca34438 = DAT_14ca2cd40;
  _DAT_14ca34440 = &LAB_14682652b;
  DAT_14ca2cd40 = &DAT_14ca34428;
  DAT_14ca2cd95 = DAT_14ca2cd95 + '\x01';
  _DAT_14ca34448 = 0x100000000;
  if (*(char *)(_DAT_14ca34430 + 100) != '\0') {
    DAT_14ca2cd96 = DAT_14ca2cd96 + '\x01';
  }
  return;
}



// FUNCTION 14607fe2c FUN_14607fe2c body=284 status=ok
// SIG undefined FUN_14607fe2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607fe2c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d090) {
    FUN_144b3d300(&DAT_14ca2d090);
    if (DAT_14ca2d090 == -1) {
      FUN_14607ff48();
      FUN_140db5666(&DAT_14ca2cfe8,0,&DAT_14ca2cf80,L"FMobileBloomUpVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"BloomUpVS_Mobile",0,1,FUN_147295c26,
                    FUN_147295bc6,&LAB_147295bae,&LAB_147295baa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2cfe8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ef9f4c);
      _Init_thread_footer(&DAT_14ca2d090);
    }
  }
  return &DAT_14ca2cfe8;
}



// FUNCTION 14607ff48 FUN_14607ff48 body=205 status=ok
// SIG undefined FUN_14607ff48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607ff48(void)

{
  if ((DAT_14ca2cfe7 & 2) == 0) {
    DAT_14ca2cfe7 = DAT_14ca2cfe7 | 2;
    _DAT_14ca2cf88 = L"FMobileBloomUpVS";
    _DAT_14ca2cfa0 = FUN_146826540;
    _DAT_14ca2cfa8 = FUN_146825d77;
    _DAT_14ca2cfb0 = FUN_146825fd6;
    _DAT_14ca2cfb8 = FUN_1407e02ea;
    _DAT_14ca2cfc0 = FUN_146826273;
    _DAT_14ca2cf98 = FUN_147295b7a;
    _DAT_14ca2cfd8 = 0xffffffff000000e0;
    _DAT_14ca2cfe0 = 8;
    DAT_14ca2cfe4 = 0;
    _DAT_14ca2cfc8 = &LAB_147295ba6;
    FUN_146080016();
    FUN_1407e00cc(&DAT_14ca2cf80);
    return;
  }
  return;
}



// FUNCTION 146080016 FUN_146080016 body=123 status=ok
// SIG undefined FUN_146080016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146080016(void)

{
  _DAT_14ca34488 = L"BASE";
  DAT_14ca344b2 = 4;
  _DAT_14ca34490 = FUN_140b35ae4();
  _DAT_14ca34498 = DAT_14ca2cf90;
  _DAT_14ca344a0 = &LAB_14682652b;
  DAT_14ca2cf90 = &DAT_14ca34488;
  DAT_14ca2cfe5 = DAT_14ca2cfe5 + '\x01';
  _DAT_14ca344a8 = 0x100000000;
  if (*(char *)(_DAT_14ca34490 + 100) != '\0') {
    DAT_14ca2cfe6 = DAT_14ca2cfe6 + '\x01';
  }
  return;
}



// FUNCTION 146080092 FUN_146080092 body=284 status=ok
// SIG undefined FUN_146080092(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146080092(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d408) {
    FUN_144b3d300(&DAT_14ca2d408);
    if (DAT_14ca2d408 == -1) {
      FUN_1460801ae();
      FUN_140db5666(&DAT_14ca2d360,0,&DAT_14ca2d2f8,L"FMobileSunAlphaVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"SunAlphaVS_Mobile",0,1,FUN_14729603a,
                    FUN_147295fda,&LAB_147295fc2,&LAB_147295fbe,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2d360 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efb2c1);
      _Init_thread_footer(&DAT_14ca2d408);
    }
  }
  return &DAT_14ca2d360;
}



// FUNCTION 1460801ae FUN_1460801ae body=205 status=ok
// SIG undefined FUN_1460801ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460801ae(void)

{
  if ((DAT_14ca2d35f & 2) == 0) {
    DAT_14ca2d35f = DAT_14ca2d35f | 2;
    _DAT_14ca2d300 = L"FMobileSunAlphaVS";
    _DAT_14ca2d318 = FUN_146826540;
    _DAT_14ca2d320 = FUN_146825d77;
    _DAT_14ca2d328 = FUN_146825fd6;
    _DAT_14ca2d330 = FUN_1407e02ea;
    _DAT_14ca2d338 = FUN_146826273;
    _DAT_14ca2d310 = FUN_147295f8e;
    _DAT_14ca2d350 = 0xffffffff000000e0;
    _DAT_14ca2d358 = 8;
    DAT_14ca2d35c = 0;
    _DAT_14ca2d340 = &LAB_147295fba;
    FUN_14608027c();
    FUN_1407e00cc(&DAT_14ca2d2f8);
    return;
  }
  return;
}



// FUNCTION 14608027c FUN_14608027c body=123 status=ok
// SIG undefined FUN_14608027c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14608027c(void)

{
  _DAT_14ca34518 = L"BASE";
  DAT_14ca34542 = 4;
  _DAT_14ca34520 = FUN_140b35ae4();
  _DAT_14ca34528 = DAT_14ca2d308;
  _DAT_14ca34530 = &LAB_14682652b;
  DAT_14ca2d308 = &DAT_14ca34518;
  DAT_14ca2d35d = DAT_14ca2d35d + '\x01';
  _DAT_14ca34538 = 0x100000000;
  if (*(char *)(_DAT_14ca34520 + 100) != '\0') {
    DAT_14ca2d35e = DAT_14ca2d35e + '\x01';
  }
  return;
}



// FUNCTION 1460802f8 FUN_1460802f8 body=284 status=ok
// SIG undefined FUN_1460802f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460802f8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d658) {
    FUN_144b3d300(&DAT_14ca2d658);
    if (DAT_14ca2d658 == -1) {
      FUN_146080414();
      FUN_140db5666(&DAT_14ca2d5b0,0,&DAT_14ca2d548,L"FMobileSunBlurVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"SunBlurVS_Mobile",0,1,FUN_1472962a6,
                    FUN_147296246,&LAB_14729622e,&LAB_14729622a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2d5b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efb887);
      _Init_thread_footer(&DAT_14ca2d658);
    }
  }
  return &DAT_14ca2d5b0;
}



// FUNCTION 146080414 FUN_146080414 body=205 status=ok
// SIG undefined FUN_146080414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146080414(void)

{
  if ((DAT_14ca2d5af & 2) == 0) {
    DAT_14ca2d5af = DAT_14ca2d5af | 2;
    _DAT_14ca2d550 = L"FMobileSunBlurVS";
    _DAT_14ca2d568 = FUN_146826540;
    _DAT_14ca2d570 = FUN_146825d77;
    _DAT_14ca2d578 = FUN_146825fd6;
    _DAT_14ca2d580 = FUN_1407e02ea;
    _DAT_14ca2d588 = FUN_146826273;
    _DAT_14ca2d560 = FUN_1472961fa;
    _DAT_14ca2d5a0 = 0xffffffff000000e0;
    _DAT_14ca2d5a8 = 8;
    DAT_14ca2d5ac = 0;
    _DAT_14ca2d590 = &LAB_147296226;
    FUN_1460804e2();
    FUN_1407e00cc(&DAT_14ca2d548);
    return;
  }
  return;
}



// FUNCTION 1460804e2 FUN_1460804e2 body=123 status=ok
// SIG undefined FUN_1460804e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460804e2(void)

{
  _DAT_14ca34578 = L"BASE";
  DAT_14ca345a2 = 4;
  _DAT_14ca34580 = FUN_140b35ae4();
  _DAT_14ca34588 = DAT_14ca2d558;
  _DAT_14ca34590 = &LAB_14682652b;
  DAT_14ca2d558 = &DAT_14ca34578;
  DAT_14ca2d5ad = DAT_14ca2d5ad + '\x01';
  _DAT_14ca34598 = 0x100000000;
  if (*(char *)(_DAT_14ca34580 + 100) != '\0') {
    DAT_14ca2d5ae = DAT_14ca2d5ae + '\x01';
  }
  return;
}



// FUNCTION 14608055e FUN_14608055e body=284 status=ok
// SIG undefined FUN_14608055e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14608055e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d8a8) {
    FUN_144b3d300(&DAT_14ca2d8a8);
    if (DAT_14ca2d8a8 == -1) {
      FUN_14608067a();
      FUN_140db5666(&DAT_14ca2d800,0,&DAT_14ca2d798,L"FMobileSunMergeVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"SunMergeVS_Mobile",0,1,FUN_147296512,
                    FUN_1472964b2,&LAB_14729649a,&LAB_147296496,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2d800 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efbe3d);
      _Init_thread_footer(&DAT_14ca2d8a8);
    }
  }
  return &DAT_14ca2d800;
}



// FUNCTION 14608067a FUN_14608067a body=205 status=ok
// SIG undefined FUN_14608067a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14608067a(void)

{
  if ((DAT_14ca2d7ff & 2) == 0) {
    DAT_14ca2d7ff = DAT_14ca2d7ff | 2;
    _DAT_14ca2d7a0 = L"FMobileSunMergeVS";
    _DAT_14ca2d7b8 = FUN_146826540;
    _DAT_14ca2d7c0 = FUN_146825d77;
    _DAT_14ca2d7c8 = FUN_146825fd6;
    _DAT_14ca2d7d0 = FUN_1407e02ea;
    _DAT_14ca2d7d8 = FUN_146826273;
    _DAT_14ca2d7b0 = FUN_147296466;
    _DAT_14ca2d7f0 = 0xffffffff000000e0;
    _DAT_14ca2d7f8 = 8;
    DAT_14ca2d7fc = 0;
    _DAT_14ca2d7e0 = &LAB_147296492;
    FUN_146080748();
    FUN_1407e00cc(&DAT_14ca2d798);
    return;
  }
  return;
}



// FUNCTION 146080748 FUN_146080748 body=123 status=ok
// SIG undefined FUN_146080748(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146080748(void)

{
  _DAT_14ca345d8 = L"BASE";
  DAT_14ca34602 = 4;
  _DAT_14ca345e0 = FUN_140b35ae4();
  _DAT_14ca345e8 = DAT_14ca2d7a8;
  _DAT_14ca345f0 = &LAB_14682652b;
  DAT_14ca2d7a8 = &DAT_14ca345d8;
  DAT_14ca2d7fd = DAT_14ca2d7fd + '\x01';
  _DAT_14ca345f8 = 0x100000000;
  if (*(char *)(_DAT_14ca345e0 + 100) != '\0') {
    DAT_14ca2d7fe = DAT_14ca2d7fe + '\x01';
  }
  return;
}



// FUNCTION 1460807c4 FUN_1460807c4 body=284 status=ok
// SIG undefined FUN_1460807c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460807c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2d9d0) {
    FUN_144b3d300(&DAT_14ca2d9d0);
    if (DAT_14ca2d9d0 == -1) {
      FUN_1460808e0();
      FUN_140db5666(&DAT_14ca2d928,0,&DAT_14ca2d8c0,L"FMobileDofDownVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"DofDownVS_Mobile",0,1,FUN_147296648,
                    FUN_1472965e8,&LAB_1472965d0,&LAB_1472965cc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2d928 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efc7f4);
      _Init_thread_footer(&DAT_14ca2d9d0);
    }
  }
  return &DAT_14ca2d928;
}



// FUNCTION 1460808e0 FUN_1460808e0 body=205 status=ok
// SIG undefined FUN_1460808e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460808e0(void)

{
  if ((DAT_14ca2d927 & 2) == 0) {
    DAT_14ca2d927 = DAT_14ca2d927 | 2;
    _DAT_14ca2d8c8 = L"FMobileDofDownVS";
    _DAT_14ca2d8e0 = FUN_146826540;
    _DAT_14ca2d8e8 = FUN_146825d77;
    _DAT_14ca2d8f0 = FUN_146825fd6;
    _DAT_14ca2d8f8 = FUN_1407e02ea;
    _DAT_14ca2d900 = FUN_146826273;
    _DAT_14ca2d8d8 = FUN_14729659c;
    _DAT_14ca2d918 = 0xffffffff000000e0;
    _DAT_14ca2d920 = 8;
    DAT_14ca2d924 = 0;
    _DAT_14ca2d908 = &LAB_1472965c8;
    FUN_1460809ae();
    FUN_1407e00cc(&DAT_14ca2d8c0);
    return;
  }
  return;
}



// FUNCTION 1460809ae FUN_1460809ae body=123 status=ok
// SIG undefined FUN_1460809ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460809ae(void)

{
  _DAT_14ca34608 = L"BASE";
  DAT_14ca34632 = 4;
  _DAT_14ca34610 = FUN_140b35ae4();
  _DAT_14ca34618 = DAT_14ca2d8d0;
  _DAT_14ca34620 = &LAB_14682652b;
  DAT_14ca2d8d0 = &DAT_14ca34608;
  DAT_14ca2d925 = DAT_14ca2d925 + '\x01';
  _DAT_14ca34628 = 0x100000000;
  if (*(char *)(_DAT_14ca34610 + 100) != '\0') {
    DAT_14ca2d926 = DAT_14ca2d926 + '\x01';
  }
  return;
}



// FUNCTION 146080a2a FUN_146080a2a body=284 status=ok
// SIG undefined FUN_146080a2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146080a2a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2dc20) {
    FUN_144b3d300(&DAT_14ca2dc20);
    if (DAT_14ca2dc20 == -1) {
      FUN_146080b46();
      FUN_140db5666(&DAT_14ca2db78,0,&DAT_14ca2db10,L"FMobileDofNearVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"DofNearVS_Mobile",0,1,FUN_1472968b4,
                    FUN_147296854,&LAB_14729683c,&LAB_147296838,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2db78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efce80);
      _Init_thread_footer(&DAT_14ca2dc20);
    }
  }
  return &DAT_14ca2db78;
}



// FUNCTION 146080b46 FUN_146080b46 body=205 status=ok
// SIG undefined FUN_146080b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146080b46(void)

{
  if ((DAT_14ca2db77 & 2) == 0) {
    DAT_14ca2db77 = DAT_14ca2db77 | 2;
    _DAT_14ca2db18 = L"FMobileDofNearVS";
    _DAT_14ca2db30 = FUN_146826540;
    _DAT_14ca2db38 = FUN_146825d77;
    _DAT_14ca2db40 = FUN_146825fd6;
    _DAT_14ca2db48 = FUN_1407e02ea;
    _DAT_14ca2db50 = FUN_146826273;
    _DAT_14ca2db28 = FUN_147296808;
    _DAT_14ca2db68 = 0xffffffff000000e0;
    _DAT_14ca2db70 = 8;
    DAT_14ca2db74 = 0;
    _DAT_14ca2db58 = &LAB_147296834;
    FUN_146080c14();
    FUN_1407e00cc(&DAT_14ca2db10);
    return;
  }
  return;
}



// FUNCTION 146080c14 FUN_146080c14 body=123 status=ok
// SIG undefined FUN_146080c14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146080c14(void)

{
  _DAT_14ca34668 = L"BASE";
  DAT_14ca34692 = 4;
  _DAT_14ca34670 = FUN_140b35ae4();
  _DAT_14ca34678 = DAT_14ca2db20;
  _DAT_14ca34680 = &LAB_14682652b;
  DAT_14ca2db20 = &DAT_14ca34668;
  DAT_14ca2db75 = DAT_14ca2db75 + '\x01';
  _DAT_14ca34688 = 0x100000000;
  if (*(char *)(_DAT_14ca34670 + 100) != '\0') {
    DAT_14ca2db76 = DAT_14ca2db76 + '\x01';
  }
  return;
}



// FUNCTION 146080c90 FUN_146080c90 body=284 status=ok
// SIG undefined FUN_146080c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146080c90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2df98) {
    FUN_144b3d300(&DAT_14ca2df98);
    if (DAT_14ca2df98 == -1) {
      FUN_146080dac();
      FUN_140db5666(&DAT_14ca2def0,0,&DAT_14ca2de88,L"FMobileDofBlurVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"DofBlurVS_Mobile",0,1,FUN_147296c56,
                    FUN_147296bf6,&LAB_147296bde,&LAB_147296bda,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2def0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efd4a1);
      _Init_thread_footer(&DAT_14ca2df98);
    }
  }
  return &DAT_14ca2def0;
}



// FUNCTION 146080dac FUN_146080dac body=205 status=ok
// SIG undefined FUN_146080dac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146080dac(void)

{
  if ((DAT_14ca2deef & 2) == 0) {
    DAT_14ca2deef = DAT_14ca2deef | 2;
    _DAT_14ca2de90 = L"FMobileDofBlurVS";
    _DAT_14ca2dea8 = FUN_146826540;
    _DAT_14ca2deb0 = FUN_146825d77;
    _DAT_14ca2deb8 = FUN_146825fd6;
    _DAT_14ca2dec0 = FUN_1407e02ea;
    _DAT_14ca2dec8 = FUN_146826273;
    _DAT_14ca2dea0 = FUN_147296baa;
    _DAT_14ca2dee0 = 0xffffffff000000e0;
    _DAT_14ca2dee8 = 8;
    DAT_14ca2deec = 0;
    _DAT_14ca2ded0 = &LAB_147296bd6;
    FUN_146080e7a();
    FUN_1407e00cc(&DAT_14ca2de88);
    return;
  }
  return;
}



// FUNCTION 146080e7a FUN_146080e7a body=123 status=ok
// SIG undefined FUN_146080e7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146080e7a(void)

{
  _DAT_14ca346f8 = L"BASE";
  DAT_14ca34722 = 4;
  _DAT_14ca34700 = FUN_140b35ae4();
  _DAT_14ca34708 = DAT_14ca2de98;
  _DAT_14ca34710 = &LAB_14682652b;
  DAT_14ca2de98 = &DAT_14ca346f8;
  DAT_14ca2deed = DAT_14ca2deed + '\x01';
  _DAT_14ca34718 = 0x100000000;
  if (*(char *)(_DAT_14ca34700 + 100) != '\0') {
    DAT_14ca2deee = DAT_14ca2deee + '\x01';
  }
  return;
}



// FUNCTION 146080ef6 FUN_146080ef6 body=284 status=ok
// SIG undefined FUN_146080ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146080ef6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2e1e8) {
    FUN_144b3d300(&DAT_14ca2e1e8);
    if (DAT_14ca2e1e8 == -1) {
      FUN_146081012();
      FUN_140db5666(&DAT_14ca2e140,0,&DAT_14ca2e0d8,L"FMobileIntegrateDofVS",
                    L"/Engine/Private/PostProcessMobile.usf",L"IntegrateDOFVS_Mobile",0,1,
                    FUN_147296ec2,FUN_147296e62,&LAB_147296e4a,&LAB_147296e46,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca2e140 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efdaac);
      _Init_thread_footer(&DAT_14ca2e1e8);
    }
  }
  return &DAT_14ca2e140;
}



// FUNCTION 146081012 FUN_146081012 body=205 status=ok
// SIG undefined FUN_146081012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081012(void)

{
  if ((DAT_14ca2e13f & 2) == 0) {
    DAT_14ca2e13f = DAT_14ca2e13f | 2;
    _DAT_14ca2e0e0 = L"FMobileIntegrateDofVS";
    _DAT_14ca2e0f8 = FUN_146826540;
    _DAT_14ca2e100 = FUN_146825d77;
    _DAT_14ca2e108 = FUN_146825fd6;
    _DAT_14ca2e110 = FUN_1407e02ea;
    _DAT_14ca2e118 = FUN_146826273;
    _DAT_14ca2e0f0 = FUN_147296e16;
    _DAT_14ca2e130 = 0xffffffff000000e0;
    _DAT_14ca2e138 = 8;
    DAT_14ca2e13c = 0;
    _DAT_14ca2e120 = &LAB_147296e42;
    FUN_1460810e0();
    FUN_1407e00cc(&DAT_14ca2e0d8);
    return;
  }
  return;
}



// FUNCTION 1460810e0 FUN_1460810e0 body=123 status=ok
// SIG undefined FUN_1460810e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460810e0(void)

{
  _DAT_14ca34758 = L"BASE";
  DAT_14ca34782 = 4;
  _DAT_14ca34760 = FUN_140b35ae4();
  _DAT_14ca34768 = DAT_14ca2e0e8;
  _DAT_14ca34770 = &LAB_14682652b;
  DAT_14ca2e0e8 = &DAT_14ca34758;
  DAT_14ca2e13d = DAT_14ca2e13d + '\x01';
  _DAT_14ca34778 = 0x100000000;
  if (*(char *)(_DAT_14ca34760 + 100) != '\0') {
    DAT_14ca2e13e = DAT_14ca2e13e + '\x01';
  }
  return;
}



// FUNCTION 14608115c FUN_14608115c body=284 status=ok
// SIG undefined FUN_14608115c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14608115c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2e450) {
    FUN_144b3d300(&DAT_14ca2e450);
    if (DAT_14ca2e450 == -1) {
      FUN_146081278();
      FUN_140db5666(&DAT_14ca2e3a8,0,&DAT_14ca2e340,L"TMobileHistogramCS< true >",
                    L"/Engine/Private/PostProcessMobile.usf",L"Histogram_MainCS",5,1,FUN_147297128,
                    FUN_1472970ce,&LAB_1472970b6,&LAB_1472970b2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2e3a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efe023);
      _Init_thread_footer(&DAT_14ca2e450);
    }
  }
  return &DAT_14ca2e3a8;
}



// FUNCTION 146081278 FUN_146081278 body=205 status=ok
// SIG undefined FUN_146081278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081278(void)

{
  if ((DAT_14ca2e3a7 & 2) == 0) {
    DAT_14ca2e3a7 = DAT_14ca2e3a7 | 2;
    _DAT_14ca2e348 = L"TMobileHistogramCS< true >";
    _DAT_14ca2e360 = FUN_146826540;
    _DAT_14ca2e368 = FUN_146825d77;
    _DAT_14ca2e370 = FUN_146825fd6;
    _DAT_14ca2e378 = FUN_1407e02ea;
    _DAT_14ca2e380 = FUN_146826273;
    _DAT_14ca2e358 = FUN_147297082;
    _DAT_14ca2e398 = 0xffffffff000000e0;
    _DAT_14ca2e3a0 = 8;
    DAT_14ca2e3a4 = 0;
    _DAT_14ca2e388 = &LAB_1472970ae;
    FUN_146081346();
    FUN_1407e00cc(&DAT_14ca2e340);
    return;
  }
  return;
}



// FUNCTION 146081346 FUN_146081346 body=123 status=ok
// SIG undefined FUN_146081346(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081346(void)

{
  _DAT_14ca347b8 = L"BASE";
  DAT_14ca347e2 = 4;
  _DAT_14ca347c0 = FUN_140b35ae4();
  _DAT_14ca347c8 = DAT_14ca2e350;
  _DAT_14ca347d0 = &LAB_14682652b;
  DAT_14ca2e350 = &DAT_14ca347b8;
  DAT_14ca2e3a5 = DAT_14ca2e3a5 + '\x01';
  _DAT_14ca347d8 = 0x100000000;
  if (*(char *)(_DAT_14ca347c0 + 100) != '\0') {
    DAT_14ca2e3a6 = DAT_14ca2e3a6 + '\x01';
  }
  return;
}



// FUNCTION 1460813c2 FUN_1460813c2 body=284 status=ok
// SIG undefined FUN_1460813c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460813c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2e578) {
    FUN_144b3d300(&DAT_14ca2e578);
    if (DAT_14ca2e578 == -1) {
      FUN_1460814de();
      FUN_140db5666(&DAT_14ca2e4d0,0,&DAT_14ca2e468,L"TMobileHistogramCS< false >",
                    L"/Engine/Private/PostProcessMobile.usf",L"Histogram_MainCS",5,1,FUN_14729725a,
                    FUN_147297200,&LAB_1472971e8,&LAB_1472971e4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca2e4d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142efe02f);
      _Init_thread_footer(&DAT_14ca2e578);
    }
  }
  return &DAT_14ca2e4d0;
}



// FUNCTION 1460814de FUN_1460814de body=205 status=ok
// SIG undefined FUN_1460814de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460814de(void)

{
  if ((DAT_14ca2e4cf & 2) == 0) {
    DAT_14ca2e4cf = DAT_14ca2e4cf | 2;
    _DAT_14ca2e470 = L"TMobileHistogramCS< false >";
    _DAT_14ca2e488 = FUN_146826540;
    _DAT_14ca2e490 = FUN_146825d77;
    _DAT_14ca2e498 = FUN_146825fd6;
    _DAT_14ca2e4a0 = FUN_1407e02ea;
    _DAT_14ca2e4a8 = FUN_146826273;
    _DAT_14ca2e480 = FUN_1472971b4;
    _DAT_14ca2e4c0 = 0xffffffff000000e0;
    _DAT_14ca2e4c8 = 8;
    DAT_14ca2e4cc = 0;
    _DAT_14ca2e4b0 = &LAB_1472971e0;
    FUN_1460815ac();
    FUN_1407e00cc(&DAT_14ca2e468);
    return;
  }
  return;
}



// FUNCTION 1460815ac FUN_1460815ac body=123 status=ok
// SIG undefined FUN_1460815ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460815ac(void)

{
  _DAT_14ca34870 = L"BASE";
  DAT_14ca3489a = 4;
  _DAT_14ca34878 = FUN_140b35ae4();
  _DAT_14ca34880 = DAT_14ca2e478;
  _DAT_14ca34888 = &LAB_14682652b;
  DAT_14ca2e478 = &DAT_14ca34870;
  DAT_14ca2e4cd = DAT_14ca2e4cd + '\x01';
  _DAT_14ca34890 = 0x100000000;
  if (*(char *)(_DAT_14ca34878 + 100) != '\0') {
    DAT_14ca2e4ce = DAT_14ca2e4ce + '\x01';
  }
  return;
}



// FUNCTION 146081628 FUN_146081628 body=284 status=ok
// SIG undefined FUN_146081628(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146081628(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca38a10) {
    FUN_144b3d300(&DAT_14ca38a10);
    if (DAT_14ca38a10 == -1) {
      FUN_146081744();
      FUN_140db5666(&DAT_14ca38968,0,&DAT_14ca38900,L"FRayTracingBarycentricsCHS",
                    L"/Engine/Private/RayTracing/RayTracingBarycentrics.usf",
                    L"RayTracingBarycentricsMainCHS",8,1,FUN_1472b17aa,FUN_1472b1782,&LAB_146300d94,
                    &LAB_1472b177e,&LAB_1472b1778,&LAB_1472b1758,0xe0,0);
      _DAT_14ca38968 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65756);
      _Init_thread_footer(&DAT_14ca38a10);
    }
  }
  return &DAT_14ca38968;
}



// FUNCTION 146081744 FUN_146081744 body=205 status=ok
// SIG undefined FUN_146081744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081744(void)

{
  if ((DAT_14ca38967 & 2) == 0) {
    DAT_14ca38967 = DAT_14ca38967 | 2;
    _DAT_14ca38908 = L"FRayTracingBarycentricsCHS";
    _DAT_14ca38920 = FUN_146826540;
    _DAT_14ca38928 = FUN_146825d77;
    _DAT_14ca38930 = FUN_146825fd6;
    _DAT_14ca38938 = FUN_1407e02ea;
    _DAT_14ca38940 = FUN_146826273;
    _DAT_14ca38918 = FUN_1472b172a;
    _DAT_14ca38958 = 0xffffffff000000e0;
    _DAT_14ca38960 = 8;
    DAT_14ca38964 = 0;
    _DAT_14ca38948 = &LAB_1472b1754;
    FUN_146081812();
    FUN_1407e00cc(&DAT_14ca38900);
    return;
  }
  return;
}



// FUNCTION 146081812 FUN_146081812 body=123 status=ok
// SIG undefined FUN_146081812(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081812(void)

{
  _DAT_14ca3f440 = L"BASE";
  DAT_14ca3f46a = 4;
  _DAT_14ca3f448 = FUN_140b35ae4();
  _DAT_14ca3f450 = DAT_14ca38910;
  _DAT_14ca3f458 = &LAB_14682652b;
  DAT_14ca38910 = &DAT_14ca3f440;
  DAT_14ca38965 = DAT_14ca38965 + '\x01';
  _DAT_14ca3f460 = 0x100000000;
  if (*(char *)(_DAT_14ca3f448 + 100) != '\0') {
    DAT_14ca38966 = DAT_14ca38966 + '\x01';
  }
  return;
}



// FUNCTION 14608188e FUN_14608188e body=284 status=ok
// SIG undefined FUN_14608188e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14608188e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca38eb0) {
    FUN_144b3d300(&DAT_14ca38eb0);
    if (DAT_14ca38eb0 == -1) {
      FUN_1460819aa();
      FUN_140db5666(&DAT_14ca38e08,0,&DAT_14ca38da0,L"FBasicIntersectionMainCHS",
                    L"/Engine/Private/RayTracing/RayTracingBuiltInShaders.usf",
                    L"IntersectionMainCHS",8,1,FUN_1472b1a64,FUN_1472b1a3c,&LAB_146300dac,
                    &LAB_1472b1a38,&LAB_1472b1a32,&LAB_14712ac08,0xe0,0);
      _DAT_14ca38e08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65786);
      _Init_thread_footer(&DAT_14ca38eb0);
    }
  }
  return &DAT_14ca38e08;
}



// FUNCTION 1460819aa FUN_1460819aa body=205 status=ok
// SIG undefined FUN_1460819aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460819aa(void)

{
  if ((DAT_14ca38e07 & 2) == 0) {
    DAT_14ca38e07 = DAT_14ca38e07 | 2;
    _DAT_14ca38da8 = L"FBasicIntersectionMainCHS";
    _DAT_14ca38dc0 = FUN_146826540;
    _DAT_14ca38dc8 = FUN_146825d77;
    _DAT_14ca38dd0 = FUN_146825fd6;
    _DAT_14ca38dd8 = FUN_1407e02ea;
    _DAT_14ca38de0 = FUN_146826273;
    _DAT_14ca38db8 = FUN_1472b1a04;
    _DAT_14ca38df8 = 0xffffffff000000e0;
    _DAT_14ca38e00 = 8;
    DAT_14ca38e04 = 0;
    _DAT_14ca38de8 = &LAB_1472b1a2e;
    FUN_146081a78();
    FUN_1407e00cc(&DAT_14ca38da0);
    return;
  }
  return;
}



// FUNCTION 146081a78 FUN_146081a78 body=123 status=ok
// SIG undefined FUN_146081a78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081a78(void)

{
  _DAT_14ca3f500 = L"BASE";
  DAT_14ca3f52a = 4;
  _DAT_14ca3f508 = FUN_140b35ae4();
  _DAT_14ca3f510 = DAT_14ca38db0;
  _DAT_14ca3f518 = &LAB_14682652b;
  DAT_14ca38db0 = &DAT_14ca3f500;
  DAT_14ca38e05 = DAT_14ca38e05 + '\x01';
  _DAT_14ca3f520 = 0x100000000;
  if (*(char *)(_DAT_14ca3f508 + 100) != '\0') {
    DAT_14ca38e06 = DAT_14ca38e06 + '\x01';
  }
  return;
}



// FUNCTION 146081af4 FUN_146081af4 body=284 status=ok
// SIG undefined FUN_146081af4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146081af4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca392e8) {
    FUN_144b3d300(&DAT_14ca392e8);
    if (DAT_14ca392e8 == -1) {
      FUN_146081c10();
      FUN_140db5666(&DAT_14ca39240,0,&DAT_14ca391d8,L"FRayTracingDebugCHS",
                    L"/Engine/Private/RayTracing/RayTracingDebugCHS.usf",
                    L"closesthit=RayTracingDebugMainCHS anyhit=RayTracingDebugAHS",8,2,FUN_1472b1bf8
                    ,FUN_1472b1bd0,&LAB_146300dbc,&LAB_1472b1bcc,&LAB_1472b1bc6,&LAB_1472b1ba6,0xe0,
                    0);
      _DAT_14ca39240 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65b70);
      _Init_thread_footer(&DAT_14ca392e8);
    }
  }
  return &DAT_14ca39240;
}



// FUNCTION 146081c10 FUN_146081c10 body=205 status=ok
// SIG undefined FUN_146081c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081c10(void)

{
  if ((DAT_14ca3923f & 2) == 0) {
    DAT_14ca3923f = DAT_14ca3923f | 2;
    _DAT_14ca391e0 = L"FRayTracingDebugCHS";
    _DAT_14ca391f8 = FUN_146826540;
    _DAT_14ca39200 = FUN_146825d77;
    _DAT_14ca39208 = FUN_146825fd6;
    _DAT_14ca39210 = FUN_1407e02ea;
    _DAT_14ca39218 = FUN_146826273;
    _DAT_14ca391f0 = FUN_1472b1b78;
    _DAT_14ca39230 = 0xffffffff000000e0;
    _DAT_14ca39238 = 8;
    DAT_14ca3923c = 0;
    _DAT_14ca39220 = &LAB_1472b1ba2;
    FUN_146081cde();
    FUN_1407e00cc(&DAT_14ca391d8);
    return;
  }
  return;
}



// FUNCTION 146081cde FUN_146081cde body=123 status=ok
// SIG undefined FUN_146081cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081cde(void)

{
  _DAT_14ca3f560 = L"BASE";
  DAT_14ca3f58a = 4;
  _DAT_14ca3f568 = FUN_140b35ae4();
  _DAT_14ca3f570 = DAT_14ca391e8;
  _DAT_14ca3f578 = &LAB_14682652b;
  DAT_14ca391e8 = &DAT_14ca3f560;
  DAT_14ca3923d = DAT_14ca3923d + '\x01';
  _DAT_14ca3f580 = 0x100000000;
  if (*(char *)(_DAT_14ca3f568 + 100) != '\0') {
    DAT_14ca3923e = DAT_14ca3923e + '\x01';
  }
  return;
}



// FUNCTION 146081d5a FUN_146081d5a body=284 status=ok
// SIG undefined FUN_146081d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146081d5a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39410) {
    FUN_144b3d300(&DAT_14ca39410);
    if (DAT_14ca39410 == -1) {
      FUN_146081e76();
      FUN_140db5666(&DAT_14ca39368,0,&DAT_14ca39300,L"FRayTracingDebugMS",
                    L"/Engine/Private/RayTracing/RayTracingDebugMS.usf",L"RayTracingDebugMS",7,1,
                    FUN_1472b1cac,FUN_1472b1c84,&LAB_146300dc4,&LAB_1472b1c80,&LAB_1472b1c7a,
                    &LAB_1472b1c5a,0xe0,0);
      _DAT_14ca39368 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65b7c);
      _Init_thread_footer(&DAT_14ca39410);
    }
  }
  return &DAT_14ca39368;
}



// FUNCTION 146081e76 FUN_146081e76 body=205 status=ok
// SIG undefined FUN_146081e76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081e76(void)

{
  if ((DAT_14ca39367 & 2) == 0) {
    DAT_14ca39367 = DAT_14ca39367 | 2;
    _DAT_14ca39308 = L"FRayTracingDebugMS";
    _DAT_14ca39320 = FUN_146826540;
    _DAT_14ca39328 = FUN_146825d77;
    _DAT_14ca39330 = FUN_146825fd6;
    _DAT_14ca39338 = FUN_1407e02ea;
    _DAT_14ca39340 = FUN_146826273;
    _DAT_14ca39318 = FUN_1472b1c2c;
    _DAT_14ca39358 = 0xffffffff000000e0;
    _DAT_14ca39360 = 8;
    DAT_14ca39364 = 0;
    _DAT_14ca39348 = &LAB_1472b1c56;
    FUN_146081f44();
    FUN_1407e00cc(&DAT_14ca39300);
    return;
  }
  return;
}



// FUNCTION 146081f44 FUN_146081f44 body=123 status=ok
// SIG undefined FUN_146081f44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146081f44(void)

{
  _DAT_14ca3f590 = L"BASE";
  DAT_14ca3f5ba = 4;
  _DAT_14ca3f598 = FUN_140b35ae4();
  _DAT_14ca3f5a0 = DAT_14ca39310;
  _DAT_14ca3f5a8 = &LAB_14682652b;
  DAT_14ca39310 = &DAT_14ca3f590;
  DAT_14ca39365 = DAT_14ca39365 + '\x01';
  _DAT_14ca3f5b0 = 0x100000000;
  if (*(char *)(_DAT_14ca3f598 + 100) != '\0') {
    DAT_14ca39366 = DAT_14ca39366 + '\x01';
  }
  return;
}



// FUNCTION 146081fc0 FUN_146081fc0 body=284 status=ok
// SIG undefined FUN_146081fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146081fc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca423e8) {
    FUN_144b3d300(&DAT_14ca423e8);
    if (DAT_14ca423e8 == -1) {
      FUN_1460820dc();
      FUN_140db5666(&DAT_14ca42340,0,&DAT_14ca422d8,L"FCopyToCubeFaceVS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"CopyToCubeFaceVS",0,1,
                    FUN_1472c6546,FUN_1472c651e,&LAB_1472c651a,&LAB_1472c6516,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca42340 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f84f2f);
      _Init_thread_footer(&DAT_14ca423e8);
    }
  }
  return &DAT_14ca42340;
}



// FUNCTION 1460820dc FUN_1460820dc body=205 status=ok
// SIG undefined FUN_1460820dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460820dc(void)

{
  if ((DAT_14ca4233f & 2) == 0) {
    DAT_14ca4233f = DAT_14ca4233f | 2;
    _DAT_14ca422e0 = L"FCopyToCubeFaceVS";
    _DAT_14ca422f8 = FUN_146826540;
    _DAT_14ca42300 = FUN_146825d77;
    _DAT_14ca42308 = FUN_146825fd6;
    _DAT_14ca42310 = FUN_1407e02ea;
    _DAT_14ca42318 = FUN_146826273;
    _DAT_14ca422f0 = FUN_1472c64e8;
    _DAT_14ca42330 = 0xffffffff000000e0;
    _DAT_14ca42338 = 8;
    DAT_14ca4233c = 0;
    _DAT_14ca42320 = &LAB_1472c6512;
    FUN_1460821aa();
    FUN_1407e00cc(&DAT_14ca422d8);
    return;
  }
  return;
}



// FUNCTION 1460821aa FUN_1460821aa body=123 status=ok
// SIG undefined FUN_1460821aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460821aa(void)

{
  _DAT_14ca448e8 = L"BASE";
  DAT_14ca44912 = 4;
  _DAT_14ca448f0 = FUN_140b35ae4();
  _DAT_14ca448f8 = DAT_14ca422e8;
  _DAT_14ca44900 = &LAB_14682652b;
  DAT_14ca422e8 = &DAT_14ca448e8;
  DAT_14ca4233d = DAT_14ca4233d + '\x01';
  _DAT_14ca44908 = 0x100000000;
  if (*(char *)(_DAT_14ca448f0 + 100) != '\0') {
    DAT_14ca4233e = DAT_14ca4233e + '\x01';
  }
  return;
}



// FUNCTION 146082226 FUN_146082226 body=284 status=ok
// SIG undefined FUN_146082226(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146082226(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45bc0) {
    FUN_144b3d300(&DAT_14ca45bc0);
    if (DAT_14ca45bc0 == -1) {
      FUN_146082342();
      FUN_140db5666(&DAT_14ca45b18,0,&DAT_14ca45ab0,L"FOcclusionQueryPS",
                    L"/Engine/Private/OcclusionQueryPixelShader.usf",L"Main",3,1,FUN_1472d9ee6,
                    FUN_1472d9ebe,&LAB_1472d9eba,&LAB_1472d9eb6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca45b18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fdada8);
      _Init_thread_footer(&DAT_14ca45bc0);
    }
  }
  return &DAT_14ca45b18;
}



// FUNCTION 146082342 FUN_146082342 body=205 status=ok
// SIG undefined FUN_146082342(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082342(void)

{
  if ((DAT_14ca45b17 & 2) == 0) {
    DAT_14ca45b17 = DAT_14ca45b17 | 2;
    _DAT_14ca45ab8 = L"FOcclusionQueryPS";
    _DAT_14ca45ad0 = FUN_146826540;
    _DAT_14ca45ad8 = FUN_146825d77;
    _DAT_14ca45ae0 = FUN_146825fd6;
    _DAT_14ca45ae8 = FUN_1407e02ea;
    _DAT_14ca45af0 = FUN_146826273;
    _DAT_14ca45ac8 = FUN_1472d9e88;
    _DAT_14ca45b08 = 0xffffffff000000e0;
    _DAT_14ca45b10 = 8;
    DAT_14ca45b14 = 0;
    _DAT_14ca45af8 = &LAB_1472d9eb2;
    FUN_146082410();
    FUN_1407e00cc(&DAT_14ca45ab0);
    return;
  }
  return;
}



// FUNCTION 146082410 FUN_146082410 body=123 status=ok
// SIG undefined FUN_146082410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082410(void)

{
  _DAT_14ca47200 = L"BASE";
  DAT_14ca4722a = 4;
  _DAT_14ca47208 = FUN_140b35ae4();
  _DAT_14ca47210 = DAT_14ca45ac0;
  _DAT_14ca47218 = &LAB_14682652b;
  DAT_14ca45ac0 = &DAT_14ca47200;
  DAT_14ca45b15 = DAT_14ca45b15 + '\x01';
  _DAT_14ca47220 = 0x100000000;
  if (*(char *)(_DAT_14ca47208 + 100) != '\0') {
    DAT_14ca45b16 = DAT_14ca45b16 + '\x01';
  }
  return;
}



// FUNCTION 14608248c FUN_14608248c body=284 status=ok
// SIG undefined FUN_14608248c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14608248c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4e948) {
    FUN_144b3d300(&DAT_14ca4e948);
    if (DAT_14ca4e948 == -1) {
      FUN_1460825a8();
      FUN_140db5666(&DAT_14ca4e8a0,0,&DAT_14ca4e838,L"TScreenVSForGS<true>",
                    L"/Engine/Private/ScreenVertexShader.usf",L"MainForGS",0,1,FUN_1472ec5ce,
                    FUN_1472ec5a6,&LAB_1472ec5a2,&LAB_1472ec59e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca4e8a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143042b2d);
      _Init_thread_footer(&DAT_14ca4e948);
    }
  }
  return &DAT_14ca4e8a0;
}



// FUNCTION 1460825a8 FUN_1460825a8 body=205 status=ok
// SIG undefined FUN_1460825a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460825a8(void)

{
  if ((DAT_14ca4e89f & 2) == 0) {
    DAT_14ca4e89f = DAT_14ca4e89f | 2;
    _DAT_14ca4e840 = L"TScreenVSForGS<true>";
    _DAT_14ca4e858 = FUN_146826540;
    _DAT_14ca4e860 = FUN_146825d77;
    _DAT_14ca4e868 = FUN_146825fd6;
    _DAT_14ca4e870 = FUN_1407e02ea;
    _DAT_14ca4e878 = FUN_146826273;
    _DAT_14ca4e850 = FUN_1472ec56e;
    _DAT_14ca4e890 = 0xffffffff000000e0;
    _DAT_14ca4e898 = 8;
    DAT_14ca4e89c = 0;
    _DAT_14ca4e880 = &LAB_1472ec59a;
    FUN_146082676();
    FUN_1407e00cc(&DAT_14ca4e838);
    return;
  }
  return;
}



// FUNCTION 146082676 FUN_146082676 body=123 status=ok
// SIG undefined FUN_146082676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082676(void)

{
  _DAT_14ca56bb8 = L"BASE";
  DAT_14ca56be2 = 4;
  _DAT_14ca56bc0 = FUN_145d5cf48();
  _DAT_14ca56bc8 = DAT_14ca4e848;
  _DAT_14ca56bd0 = &LAB_14682652b;
  DAT_14ca4e848 = &DAT_14ca56bb8;
  DAT_14ca4e89d = DAT_14ca4e89d + '\x01';
  _DAT_14ca56bd8 = 0x100000000;
  if (*(char *)(_DAT_14ca56bc0 + 100) != '\0') {
    DAT_14ca4e89e = DAT_14ca4e89e + '\x01';
  }
  return;
}



// FUNCTION 1460826f2 FUN_1460826f2 body=284 status=ok
// SIG undefined FUN_1460826f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460826f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4f920) {
    FUN_144b3d300(&DAT_14ca4f920);
    if (DAT_14ca4f920 == -1) {
      FUN_14608280e();
      FUN_140db5666(&DAT_14ca4f878,0,&DAT_14ca4f810,L"FCopyShadowMapsCubeGS",
                    L"/Engine/Private/CopyShadowMaps.usf",L"CopyCubeDepthGS",4,1,FUN_1472edd76,
                    FUN_1472edd4e,&LAB_145aedfe4,&LAB_1472edd4a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca4f878 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143043434);
      _Init_thread_footer(&DAT_14ca4f920);
    }
  }
  return &DAT_14ca4f878;
}



// FUNCTION 14608280e FUN_14608280e body=205 status=ok
// SIG undefined FUN_14608280e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14608280e(void)

{
  if ((DAT_14ca4f877 & 2) == 0) {
    DAT_14ca4f877 = DAT_14ca4f877 | 2;
    _DAT_14ca4f818 = L"FCopyShadowMapsCubeGS";
    _DAT_14ca4f830 = FUN_146826540;
    _DAT_14ca4f838 = FUN_146825d77;
    _DAT_14ca4f840 = FUN_146825fd6;
    _DAT_14ca4f848 = FUN_1407e02ea;
    _DAT_14ca4f850 = FUN_146826273;
    _DAT_14ca4f828 = FUN_1472edd1a;
    _DAT_14ca4f868 = 0xffffffff000000e0;
    _DAT_14ca4f870 = 8;
    DAT_14ca4f874 = 0;
    _DAT_14ca4f858 = &LAB_1472edd46;
    FUN_1460828dc();
    FUN_1407e00cc(&DAT_14ca4f810);
    return;
  }
  return;
}



// FUNCTION 1460828dc FUN_1460828dc body=123 status=ok
// SIG undefined FUN_1460828dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460828dc(void)

{
  _DAT_14ca57158 = L"BASE";
  DAT_14ca57182 = 4;
  _DAT_14ca57160 = FUN_140b35ae4();
  _DAT_14ca57168 = DAT_14ca4f820;
  _DAT_14ca57170 = &LAB_14682652b;
  DAT_14ca4f820 = &DAT_14ca57158;
  DAT_14ca4f875 = DAT_14ca4f875 + '\x01';
  _DAT_14ca57178 = 0x100000000;
  if (*(char *)(_DAT_14ca57160 + 100) != '\0') {
    DAT_14ca4f876 = DAT_14ca4f876 + '\x01';
  }
  return;
}



// FUNCTION 146082958 FUN_146082958 body=284 status=ok
// SIG undefined FUN_146082958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146082958(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60858) {
    FUN_144b3d300(&DAT_14ca60858);
    if (DAT_14ca60858 == -1) {
      FUN_146082a74();
      FUN_140db5666(&DAT_14ca607b0,0,&DAT_14ca60748,L"FSubsurfaceTileFallbackScreenPassVS",
                    L"/Engine/Private/PostProcessSubsurfaceTile.usf",
                    L"SubsurfaceTileFallbackScreenPassVS",0,1,FUN_1473215c8,FUN_1473215a0,
                    &LAB_147321588,&LAB_147321584,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca607b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430aa82b);
      _Init_thread_footer(&DAT_14ca60858);
    }
  }
  return &DAT_14ca607b0;
}



// FUNCTION 146082a74 FUN_146082a74 body=205 status=ok
// SIG undefined FUN_146082a74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082a74(void)

{
  if ((DAT_14ca607af & 2) == 0) {
    DAT_14ca607af = DAT_14ca607af | 2;
    _DAT_14ca60750 = L"FSubsurfaceTileFallbackScreenPassVS";
    _DAT_14ca60768 = FUN_146826540;
    _DAT_14ca60770 = FUN_146825d77;
    _DAT_14ca60778 = FUN_146825fd6;
    _DAT_14ca60780 = FUN_1407e02ea;
    _DAT_14ca60788 = FUN_146826273;
    _DAT_14ca60760 = FUN_147321556;
    _DAT_14ca607a0 = 0xffffffff000000e0;
    _DAT_14ca607a8 = 8;
    DAT_14ca607ac = 0;
    _DAT_14ca60790 = &LAB_147321580;
    FUN_146082b42();
    FUN_1407e00cc(&DAT_14ca60748);
    return;
  }
  return;
}



// FUNCTION 146082b42 FUN_146082b42 body=123 status=ok
// SIG undefined FUN_146082b42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082b42(void)

{
  _DAT_14ca634a8 = L"BASE";
  DAT_14ca634d2 = 4;
  _DAT_14ca634b0 = FUN_140b35ae4();
  _DAT_14ca634b8 = DAT_14ca60758;
  _DAT_14ca634c0 = &LAB_14682652b;
  DAT_14ca60758 = &DAT_14ca634a8;
  DAT_14ca607ad = DAT_14ca607ad + '\x01';
  _DAT_14ca634c8 = 0x100000000;
  if (*(char *)(_DAT_14ca634b0 + 100) != '\0') {
    DAT_14ca607ae = DAT_14ca607ae + '\x01';
  }
  return;
}



// FUNCTION 146082bbe FUN_146082bbe body=205 status=ok
// SIG undefined FUN_146082bbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082bbe(void)

{
  if ((DAT_14ca61027 & 2) == 0) {
    DAT_14ca61027 = DAT_14ca61027 | 2;
    _DAT_14ca60fc8 = L"FTranslucentLightingInjectPS";
    _DAT_14ca60fe0 = FUN_146826540;
    _DAT_14ca60fe8 = FUN_146825d77;
    _DAT_14ca60ff0 = FUN_146825fd6;
    _DAT_14ca60ff8 = FUN_1407e02ea;
    _DAT_14ca61000 = FUN_146826273;
    _DAT_14ca60fd8 = FUN_147322bce;
    _DAT_14ca61018 = 0xffffffff000000f8;
    _DAT_14ca61020 = 8;
    DAT_14ca61024 = 0;
    _DAT_14ca61008 = &LAB_147322c04;
    FUN_146082c8c();
    FUN_1407e00cc(&DAT_14ca60fc0);
    return;
  }
  return;
}



// FUNCTION 146082c8c FUN_146082c8c body=123 status=ok
// SIG undefined FUN_146082c8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082c8c(void)

{
  _DAT_14ca637b0 = L"BASE";
  DAT_14ca637da = 4;
  _DAT_14ca637b8 = FUN_141526006();
  _DAT_14ca637c0 = DAT_14ca60fd0;
  _DAT_14ca637c8 = &LAB_14682652b;
  DAT_14ca60fd0 = &DAT_14ca637b0;
  DAT_14ca61025 = DAT_14ca61025 + '\x01';
  _DAT_14ca637d0 = 0x100000000;
  if (*(char *)(_DAT_14ca637b8 + 100) != '\0') {
    DAT_14ca61026 = DAT_14ca61026 + '\x01';
  }
  return;
}



// FUNCTION 146082d08 FUN_146082d08 body=284 status=ok
// SIG undefined FUN_146082d08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146082d08(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6ec80) {
    FUN_144b3d300(&DAT_14ca6ec80);
    if (DAT_14ca6ec80 == -1) {
      FUN_146082e24();
      FUN_140db5666(&DAT_14ca6ebd8,0,&DAT_14ca6eb70,
                    L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",L"CompressBaseColorCS",5,1,
                    FUN_14733fe92,FUN_14733fe38,FUN_146316c56,&LAB_14733fe34,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca6ebd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14312021d);
      _Init_thread_footer(&DAT_14ca6ec80);
    }
  }
  return &DAT_14ca6ebd8;
}



// FUNCTION 146082e24 FUN_146082e24 body=205 status=ok
// SIG undefined FUN_146082e24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082e24(void)

{
  if ((DAT_14ca6ebd7 & 2) == 0) {
    DAT_14ca6ebd7 = DAT_14ca6ebd7 | 2;
    _DAT_14ca6eb78 =
         L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor >";
    _DAT_14ca6eb90 = FUN_146826540;
    _DAT_14ca6eb98 = FUN_146825d77;
    _DAT_14ca6eba0 = FUN_146825fd6;
    _DAT_14ca6eba8 = FUN_1407e02ea;
    _DAT_14ca6ebb0 = FUN_146826273;
    _DAT_14ca6eb88 = FUN_14733fe06;
    _DAT_14ca6ebc8 = 0xffffffff000000e0;
    _DAT_14ca6ebd0 = 8;
    DAT_14ca6ebd4 = 0;
    _DAT_14ca6ebb8 = &LAB_14733fe30;
    FUN_146082ef2();
    FUN_1407e00cc(&DAT_14ca6eb70);
    return;
  }
  return;
}



// FUNCTION 146082ef2 FUN_146082ef2 body=123 status=ok
// SIG undefined FUN_146082ef2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146082ef2(void)

{
  _DAT_14ca71b00 = L"BASE";
  DAT_14ca71b2a = 4;
  _DAT_14ca71b08 = FUN_140b35ae4();
  _DAT_14ca71b10 = DAT_14ca6eb80;
  _DAT_14ca71b18 = &LAB_14682652b;
  DAT_14ca6eb80 = &DAT_14ca71b00;
  DAT_14ca6ebd5 = DAT_14ca6ebd5 + '\x01';
  _DAT_14ca71b20 = 0x100000000;
  if (*(char *)(_DAT_14ca71b08 + 100) != '\0') {
    DAT_14ca6ebd6 = DAT_14ca6ebd6 + '\x01';
  }
  return;
}



// FUNCTION 146082f6e FUN_146082f6e body=284 status=ok
// SIG undefined FUN_146082f6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146082f6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6eda8) {
    FUN_144b3d300(&DAT_14ca6eda8);
    if (DAT_14ca6eda8 == -1) {
      FUN_14608308a();
      FUN_140db5666(&DAT_14ca6ed00,0,&DAT_14ca6ec98,
                    L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",
                    L"CompressBaseColorNormalSpecularCS",5,1,FUN_14733ff3e,FUN_14733fee4,
                    FUN_146316c84,&LAB_14733fee0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca6ed00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143120229);
      _Init_thread_footer(&DAT_14ca6eda8);
    }
  }
  return &DAT_14ca6ed00;
}



// FUNCTION 14608308a FUN_14608308a body=205 status=ok
// SIG undefined FUN_14608308a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14608308a(void)

{
  if ((DAT_14ca6ecff & 2) == 0) {
    DAT_14ca6ecff = DAT_14ca6ecff | 2;
    _DAT_14ca6eca0 =
         L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular >"
    ;
    _DAT_14ca6ecb8 = FUN_146826540;
    _DAT_14ca6ecc0 = FUN_146825d77;
    _DAT_14ca6ecc8 = FUN_146825fd6;
    _DAT_14ca6ecd0 = FUN_1407e02ea;
    _DAT_14ca6ecd8 = FUN_146826273;
    _DAT_14ca6ecb0 = FUN_14733feb2;
    _DAT_14ca6ecf0 = 0xffffffff000000e0;
    _DAT_14ca6ecf8 = 8;
    DAT_14ca6ecfc = 0;
    _DAT_14ca6ece0 = &LAB_14733fedc;
    FUN_146083158();
    FUN_1407e00cc(&DAT_14ca6ec98);
    return;
  }
  return;
}



// FUNCTION 146083158 FUN_146083158 body=123 status=ok
// SIG undefined FUN_146083158(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083158(void)

{
  _DAT_14ca71bb8 = L"BASE";
  DAT_14ca71be2 = 4;
  _DAT_14ca71bc0 = FUN_140b35ae4();
  _DAT_14ca71bc8 = DAT_14ca6eca8;
  _DAT_14ca71bd0 = &LAB_14682652b;
  DAT_14ca6eca8 = &DAT_14ca71bb8;
  DAT_14ca6ecfd = DAT_14ca6ecfd + '\x01';
  _DAT_14ca71bd8 = 0x100000000;
  if (*(char *)(_DAT_14ca71bc0 + 100) != '\0') {
    DAT_14ca6ecfe = DAT_14ca6ecfe + '\x01';
  }
  return;
}



// FUNCTION 1460831d4 FUN_1460831d4 body=284 status=ok
// SIG undefined FUN_1460831d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460831d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6eed0) {
    FUN_144b3d300(&DAT_14ca6eed0);
    if (DAT_14ca6eed0 == -1) {
      FUN_1460832f0();
      FUN_140db5666(&DAT_14ca6ee28,0,&DAT_14ca6edc0,
                    L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Roughness >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",
                    L"CompressBaseColorNormalRoughnessCS",5,1,FUN_14733ffea,FUN_14733ff90,
                    FUN_146316cb2,&LAB_14733ff8c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca6ee28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143120235);
      _Init_thread_footer(&DAT_14ca6eed0);
    }
  }
  return &DAT_14ca6ee28;
}



// FUNCTION 1460832f0 FUN_1460832f0 body=205 status=ok
// SIG undefined FUN_1460832f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460832f0(void)

{
  if ((DAT_14ca6ee27 & 2) == 0) {
    DAT_14ca6ee27 = DAT_14ca6ee27 | 2;
    _DAT_14ca6edc8 =
         L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Roughness >"
    ;
    _DAT_14ca6ede0 = FUN_146826540;
    _DAT_14ca6ede8 = FUN_146825d77;
    _DAT_14ca6edf0 = FUN_146825fd6;
    _DAT_14ca6edf8 = FUN_1407e02ea;
    _DAT_14ca6ee00 = FUN_146826273;
    _DAT_14ca6edd8 = FUN_14733ff5e;
    _DAT_14ca6ee18 = 0xffffffff000000e0;
    _DAT_14ca6ee20 = 8;
    DAT_14ca6ee24 = 0;
    _DAT_14ca6ee08 = &LAB_14733ff88;
    FUN_1460833be();
    FUN_1407e00cc(&DAT_14ca6edc0);
    return;
  }
  return;
}



// FUNCTION 1460833be FUN_1460833be body=123 status=ok
// SIG undefined FUN_1460833be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460833be(void)

{
  _DAT_14ca71be8 = L"BASE";
  DAT_14ca71c12 = 4;
  _DAT_14ca71bf0 = FUN_140b35ae4();
  _DAT_14ca71bf8 = DAT_14ca6edd0;
  _DAT_14ca71c00 = &LAB_14682652b;
  DAT_14ca6edd0 = &DAT_14ca71be8;
  DAT_14ca6ee25 = DAT_14ca6ee25 + '\x01';
  _DAT_14ca71c08 = 0x100000000;
  if (*(char *)(_DAT_14ca71bf0 + 100) != '\0') {
    DAT_14ca6ee26 = DAT_14ca6ee26 + '\x01';
  }
  return;
}



// FUNCTION 14608343a FUN_14608343a body=284 status=ok
// SIG undefined FUN_14608343a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14608343a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6eff8) {
    FUN_144b3d300(&DAT_14ca6eff8);
    if (DAT_14ca6eff8 == -1) {
      FUN_146083556();
      FUN_140db5666(&DAT_14ca6ef50,0,&DAT_14ca6eee8,
                    L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_YCoCg >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",
                    L"CompressBaseColorNormalSpecularYCoCgCS",5,1,FUN_147340096,FUN_14734003c,
                    FUN_146316ce0,&LAB_147340038,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca6ef50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143120241);
      _Init_thread_footer(&DAT_14ca6eff8);
    }
  }
  return &DAT_14ca6ef50;
}



// FUNCTION 146083556 FUN_146083556 body=205 status=ok
// SIG undefined FUN_146083556(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083556(void)

{
  if ((DAT_14ca6ef4f & 2) == 0) {
    DAT_14ca6ef4f = DAT_14ca6ef4f | 2;
    _DAT_14ca6eef0 =
         L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_YCoCg >"
    ;
    _DAT_14ca6ef08 = FUN_146826540;
    _DAT_14ca6ef10 = FUN_146825d77;
    _DAT_14ca6ef18 = FUN_146825fd6;
    _DAT_14ca6ef20 = FUN_1407e02ea;
    _DAT_14ca6ef28 = FUN_146826273;
    _DAT_14ca6ef00 = FUN_14734000a;
    _DAT_14ca6ef40 = 0xffffffff000000e0;
    _DAT_14ca6ef48 = 8;
    DAT_14ca6ef4c = 0;
    _DAT_14ca6ef30 = &LAB_147340034;
    FUN_146083624();
    FUN_1407e00cc(&DAT_14ca6eee8);
    return;
  }
  return;
}



// FUNCTION 146083624 FUN_146083624 body=123 status=ok
// SIG undefined FUN_146083624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083624(void)

{
  _DAT_14ca71c18 = L"BASE";
  DAT_14ca71c42 = 4;
  _DAT_14ca71c20 = FUN_140b35ae4();
  _DAT_14ca71c28 = DAT_14ca6eef8;
  _DAT_14ca71c30 = &LAB_14682652b;
  DAT_14ca6eef8 = &DAT_14ca71c18;
  DAT_14ca6ef4d = DAT_14ca6ef4d + '\x01';
  _DAT_14ca71c38 = 0x100000000;
  if (*(char *)(_DAT_14ca71c20 + 100) != '\0') {
    DAT_14ca6ef4e = DAT_14ca6ef4e + '\x01';
  }
  return;
}



// FUNCTION 1460836a0 FUN_1460836a0 body=284 status=ok
// SIG undefined FUN_1460836a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460836a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6f248) {
    FUN_144b3d300(&DAT_14ca6f248);
    if (DAT_14ca6f248 == -1) {
      FUN_1460837bc();
      FUN_140db5666(&DAT_14ca6f1a0,0,&DAT_14ca6f138,
                    L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::Mask4 >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",L"CompressMask4CS",5,1,
                    FUN_1473401ee,FUN_147340194,FUN_146316d3c,&LAB_147340190,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca6f1a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143120259);
      _Init_thread_footer(&DAT_14ca6f248);
    }
  }
  return &DAT_14ca6f1a0;
}



// FUNCTION 1460837bc FUN_1460837bc body=205 status=ok
// SIG undefined FUN_1460837bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460837bc(void)

{
  if ((DAT_14ca6f19f & 2) == 0) {
    DAT_14ca6f19f = DAT_14ca6f19f | 2;
    _DAT_14ca6f140 =
         L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::Mask4 >";
    _DAT_14ca6f158 = FUN_146826540;
    _DAT_14ca6f160 = FUN_146825d77;
    _DAT_14ca6f168 = FUN_146825fd6;
    _DAT_14ca6f170 = FUN_1407e02ea;
    _DAT_14ca6f178 = FUN_146826273;
    _DAT_14ca6f150 = FUN_147340162;
    _DAT_14ca6f190 = 0xffffffff000000e0;
    _DAT_14ca6f198 = 8;
    DAT_14ca6f19c = 0;
    _DAT_14ca6f180 = &LAB_14734018c;
    FUN_14608388a();
    FUN_1407e00cc(&DAT_14ca6f138);
    return;
  }
  return;
}



// FUNCTION 14608388a FUN_14608388a body=123 status=ok
// SIG undefined FUN_14608388a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14608388a(void)

{
  _DAT_14ca71c78 = L"BASE";
  DAT_14ca71ca2 = 4;
  _DAT_14ca71c80 = FUN_140b35ae4();
  _DAT_14ca71c88 = DAT_14ca6f148;
  _DAT_14ca71c90 = &LAB_14682652b;
  DAT_14ca6f148 = &DAT_14ca71c78;
  DAT_14ca6f19d = DAT_14ca6f19d + '\x01';
  _DAT_14ca71c98 = 0x100000000;
  if (*(char *)(_DAT_14ca71c80 + 100) != '\0') {
    DAT_14ca6f19e = DAT_14ca6f19e + '\x01';
  }
  return;
}



// FUNCTION 146083906 FUN_146083906 body=284 status=ok
// SIG undefined FUN_146083906(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146083906(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6f370) {
    FUN_144b3d300(&DAT_14ca6f370);
    if (DAT_14ca6f370 == -1) {
      FUN_146083a22();
      FUN_140db5666(&DAT_14ca6f2c8,0,&DAT_14ca6f260,
                    L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::Displacement >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",L"CompressDisplacementCS",5,1,
                    FUN_14734029a,FUN_147340240,FUN_146316d6a,&LAB_14734023c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca6f2c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143120265);
      _Init_thread_footer(&DAT_14ca6f370);
    }
  }
  return &DAT_14ca6f2c8;
}



// FUNCTION 146083a22 FUN_146083a22 body=205 status=ok
// SIG undefined FUN_146083a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083a22(void)

{
  if ((DAT_14ca6f2c7 & 2) == 0) {
    DAT_14ca6f2c7 = DAT_14ca6f2c7 | 2;
    _DAT_14ca6f268 =
         L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::Displacement >";
    _DAT_14ca6f280 = FUN_146826540;
    _DAT_14ca6f288 = FUN_146825d77;
    _DAT_14ca6f290 = FUN_146825fd6;
    _DAT_14ca6f298 = FUN_1407e02ea;
    _DAT_14ca6f2a0 = FUN_146826273;
    _DAT_14ca6f278 = FUN_14734020e;
    _DAT_14ca6f2b8 = 0xffffffff000000e0;
    _DAT_14ca6f2c0 = 8;
    DAT_14ca6f2c4 = 0;
    _DAT_14ca6f2a8 = &LAB_147340238;
    FUN_146083af0();
    FUN_1407e00cc(&DAT_14ca6f260);
    return;
  }
  return;
}



// FUNCTION 146083af0 FUN_146083af0 body=123 status=ok
// SIG undefined FUN_146083af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083af0(void)

{
  _DAT_14ca71ca8 = L"BASE";
  DAT_14ca71cd2 = 4;
  _DAT_14ca71cb0 = FUN_140b35ae4();
  _DAT_14ca71cb8 = DAT_14ca6f270;
  _DAT_14ca71cc0 = &LAB_14682652b;
  DAT_14ca6f270 = &DAT_14ca71ca8;
  DAT_14ca6f2c5 = DAT_14ca6f2c5 + '\x01';
  _DAT_14ca71cc8 = 0x100000000;
  if (*(char *)(_DAT_14ca71cb0 + 100) != '\0') {
    DAT_14ca6f2c6 = DAT_14ca6f2c6 + '\x01';
  }
  return;
}



// FUNCTION 146083b6c FUN_146083b6c body=284 status=ok
// SIG undefined FUN_146083b6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146083b6c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6f498) {
    FUN_144b3d300(&DAT_14ca6f498);
    if (DAT_14ca6f498 == -1) {
      FUN_146083c88();
      FUN_140db5666(&DAT_14ca6f3f0,0,&DAT_14ca6f388,L"FShader_VirtualTextureCopy_VS",
                    L"/Engine/Private/VirtualTextureCompress.usf",L"CopyVS",0,1,FUN_14734034a,
                    FUN_1473402f0,&LAB_1473402ec,&LAB_1473402e8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca6f3f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143120271);
      _Init_thread_footer(&DAT_14ca6f498);
    }
  }
  return &DAT_14ca6f3f0;
}



// FUNCTION 146083c88 FUN_146083c88 body=205 status=ok
// SIG undefined FUN_146083c88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083c88(void)

{
  if ((DAT_14ca6f3ef & 2) == 0) {
    DAT_14ca6f3ef = DAT_14ca6f3ef | 2;
    _DAT_14ca6f390 = L"FShader_VirtualTextureCopy_VS";
    _DAT_14ca6f3a8 = FUN_146826540;
    _DAT_14ca6f3b0 = FUN_146825d77;
    _DAT_14ca6f3b8 = FUN_146825fd6;
    _DAT_14ca6f3c0 = FUN_1407e02ea;
    _DAT_14ca6f3c8 = FUN_146826273;
    _DAT_14ca6f3a0 = FUN_1473402ba;
    _DAT_14ca6f3e0 = 0xffffffff000000e0;
    _DAT_14ca6f3e8 = 8;
    DAT_14ca6f3ec = 0;
    _DAT_14ca6f3d0 = &LAB_1473402e4;
    FUN_146083d56();
    FUN_1407e00cc(&DAT_14ca6f388);
    return;
  }
  return;
}



// FUNCTION 146083d56 FUN_146083d56 body=123 status=ok
// SIG undefined FUN_146083d56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083d56(void)

{
  _DAT_14ca71cd8 = L"BASE";
  DAT_14ca71d02 = 4;
  _DAT_14ca71ce0 = FUN_140b35ae4();
  _DAT_14ca71ce8 = DAT_14ca6f398;
  _DAT_14ca71cf0 = &LAB_14682652b;
  DAT_14ca6f398 = &DAT_14ca71cd8;
  DAT_14ca6f3ed = DAT_14ca6f3ed + '\x01';
  _DAT_14ca71cf8 = 0x100000000;
  if (*(char *)(_DAT_14ca71ce0 + 100) != '\0') {
    DAT_14ca6f3ee = DAT_14ca6f3ee + '\x01';
  }
  return;
}



// FUNCTION 146083dd2 FUN_146083dd2 body=284 status=ok
// SIG undefined FUN_146083dd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146083dd2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6f5c0) {
    FUN_144b3d300(&DAT_14ca6f5c0);
    if (DAT_14ca6f5c0 == -1) {
      FUN_146083eee();
      FUN_140db5666(&DAT_14ca6f518,0,&DAT_14ca6f4b0,
                    L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::BaseColor >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",L"CopyBaseColorPS",3,1,
                    FUN_1473403fa,FUN_1473403a0,&LAB_14734039c,&LAB_147340398,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca6f518 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14312027d);
      _Init_thread_footer(&DAT_14ca6f5c0);
    }
  }
  return &DAT_14ca6f518;
}



// FUNCTION 146083eee FUN_146083eee body=205 status=ok
// SIG undefined FUN_146083eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083eee(void)

{
  if ((DAT_14ca6f517 & 2) == 0) {
    DAT_14ca6f517 = DAT_14ca6f517 | 2;
    _DAT_14ca6f4b8 =
         L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::BaseColor >";
    _DAT_14ca6f4d0 = FUN_146826540;
    _DAT_14ca6f4d8 = FUN_146825d77;
    _DAT_14ca6f4e0 = FUN_146825fd6;
    _DAT_14ca6f4e8 = FUN_1407e02ea;
    _DAT_14ca6f4f0 = FUN_146826273;
    _DAT_14ca6f4c8 = FUN_14734036a;
    _DAT_14ca6f508 = 0xffffffff000000e0;
    _DAT_14ca6f510 = 8;
    DAT_14ca6f514 = 0;
    _DAT_14ca6f4f8 = &LAB_147340394;
    FUN_146083fbc();
    FUN_1407e00cc(&DAT_14ca6f4b0);
    return;
  }
  return;
}



// FUNCTION 146083fbc FUN_146083fbc body=123 status=ok
// SIG undefined FUN_146083fbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146083fbc(void)

{
  _DAT_14ca71d08 = L"BASE";
  DAT_14ca71d32 = 4;
  _DAT_14ca71d10 = FUN_140b35ae4();
  _DAT_14ca71d18 = DAT_14ca6f4c0;
  _DAT_14ca71d20 = &LAB_14682652b;
  DAT_14ca6f4c0 = &DAT_14ca71d08;
  DAT_14ca6f515 = DAT_14ca6f515 + '\x01';
  _DAT_14ca71d28 = 0x100000000;
  if (*(char *)(_DAT_14ca71d10 + 100) != '\0') {
    DAT_14ca6f516 = DAT_14ca6f516 + '\x01';
  }
  return;
}



// FUNCTION 146084038 FUN_146084038 body=284 status=ok
// SIG undefined FUN_146084038(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146084038(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6f6e8) {
    FUN_144b3d300(&DAT_14ca6f6e8);
    if (DAT_14ca6f6e8 == -1) {
      FUN_146084154();
      FUN_140db5666(&DAT_14ca6f640,0,&DAT_14ca6f5d8,
                    L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",L"CopyBaseColorNormalSpecularPS",
                    3,1,FUN_1473404aa,FUN_147340450,&LAB_14734044c,&LAB_147340448,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca6f640 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143120289);
      _Init_thread_footer(&DAT_14ca6f6e8);
    }
  }
  return &DAT_14ca6f640;
}



// FUNCTION 146084154 FUN_146084154 body=205 status=ok
// SIG undefined FUN_146084154(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084154(void)

{
  if ((DAT_14ca6f63f & 2) == 0) {
    DAT_14ca6f63f = DAT_14ca6f63f | 2;
    _DAT_14ca6f5e0 =
         L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular >"
    ;
    _DAT_14ca6f5f8 = FUN_146826540;
    _DAT_14ca6f600 = FUN_146825d77;
    _DAT_14ca6f608 = FUN_146825fd6;
    _DAT_14ca6f610 = FUN_1407e02ea;
    _DAT_14ca6f618 = FUN_146826273;
    _DAT_14ca6f5f0 = FUN_14734041a;
    _DAT_14ca6f630 = 0xffffffff000000e0;
    _DAT_14ca6f638 = 8;
    DAT_14ca6f63c = 0;
    _DAT_14ca6f620 = &LAB_147340444;
    FUN_146084222();
    FUN_1407e00cc(&DAT_14ca6f5d8);
    return;
  }
  return;
}



// FUNCTION 146084222 FUN_146084222 body=123 status=ok
// SIG undefined FUN_146084222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084222(void)

{
  _DAT_14ca71d38 = L"BASE";
  DAT_14ca71d62 = 4;
  _DAT_14ca71d40 = FUN_140b35ae4();
  _DAT_14ca71d48 = DAT_14ca6f5e8;
  _DAT_14ca71d50 = &LAB_14682652b;
  DAT_14ca6f5e8 = &DAT_14ca71d38;
  DAT_14ca6f63d = DAT_14ca6f63d + '\x01';
  _DAT_14ca71d58 = 0x100000000;
  if (*(char *)(_DAT_14ca71d40 + 100) != '\0') {
    DAT_14ca6f63e = DAT_14ca6f63e + '\x01';
  }
  return;
}



// FUNCTION 14608429e FUN_14608429e body=284 status=ok
// SIG undefined FUN_14608429e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14608429e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6f810) {
    FUN_144b3d300(&DAT_14ca6f810);
    if (DAT_14ca6f810 == -1) {
      FUN_1460843ba();
      FUN_140db5666(&DAT_14ca6f768,0,&DAT_14ca6f700,
                    L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_YCoCg >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",
                    L"CopyBaseColorNormalSpecularYCoCgPS",3,1,FUN_14734055a,FUN_147340500,
                    &LAB_1473404fc,&LAB_1473404f8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca6f768 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143120295);
      _Init_thread_footer(&DAT_14ca6f810);
    }
  }
  return &DAT_14ca6f768;
}



// FUNCTION 1460843ba FUN_1460843ba body=205 status=ok
// SIG undefined FUN_1460843ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460843ba(void)

{
  if ((DAT_14ca6f767 & 2) == 0) {
    DAT_14ca6f767 = DAT_14ca6f767 | 2;
    _DAT_14ca6f708 =
         L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_YCoCg >"
    ;
    _DAT_14ca6f720 = FUN_146826540;
    _DAT_14ca6f728 = FUN_146825d77;
    _DAT_14ca6f730 = FUN_146825fd6;
    _DAT_14ca6f738 = FUN_1407e02ea;
    _DAT_14ca6f740 = FUN_146826273;
    _DAT_14ca6f718 = FUN_1473404ca;
    _DAT_14ca6f758 = 0xffffffff000000e0;
    _DAT_14ca6f760 = 8;
    DAT_14ca6f764 = 0;
    _DAT_14ca6f748 = &LAB_1473404f4;
    FUN_146084488();
    FUN_1407e00cc(&DAT_14ca6f700);
    return;
  }
  return;
}



// FUNCTION 146084488 FUN_146084488 body=123 status=ok
// SIG undefined FUN_146084488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084488(void)

{
  _DAT_14ca71d68 = L"BASE";
  DAT_14ca71d92 = 4;
  _DAT_14ca71d70 = FUN_140b35ae4();
  _DAT_14ca71d78 = DAT_14ca6f710;
  _DAT_14ca71d80 = &LAB_14682652b;
  DAT_14ca6f710 = &DAT_14ca71d68;
  DAT_14ca6f765 = DAT_14ca6f765 + '\x01';
  _DAT_14ca71d88 = 0x100000000;
  if (*(char *)(_DAT_14ca71d70 + 100) != '\0') {
    DAT_14ca6f766 = DAT_14ca6f766 + '\x01';
  }
  return;
}



// FUNCTION 146084504 FUN_146084504 body=284 status=ok
// SIG undefined FUN_146084504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146084504(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6f938) {
    FUN_144b3d300(&DAT_14ca6f938);
    if (DAT_14ca6f938 == -1) {
      FUN_146084620();
      FUN_140db5666(&DAT_14ca6f890,0,&DAT_14ca6f828,
                    L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",
                    L"CopyBaseColorNormalSpecularMaskYCoCgPS",3,1,FUN_14734060a,FUN_1473405b0,
                    &LAB_1473405ac,&LAB_1473405a8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca6f890 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431202a1);
      _Init_thread_footer(&DAT_14ca6f938);
    }
  }
  return &DAT_14ca6f890;
}



// FUNCTION 146084620 FUN_146084620 body=205 status=ok
// SIG undefined FUN_146084620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084620(void)

{
  if ((DAT_14ca6f88f & 2) == 0) {
    DAT_14ca6f88f = DAT_14ca6f88f | 2;
    _DAT_14ca6f830 =
         L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg >"
    ;
    _DAT_14ca6f848 = FUN_146826540;
    _DAT_14ca6f850 = FUN_146825d77;
    _DAT_14ca6f858 = FUN_146825fd6;
    _DAT_14ca6f860 = FUN_1407e02ea;
    _DAT_14ca6f868 = FUN_146826273;
    _DAT_14ca6f840 = FUN_14734057a;
    _DAT_14ca6f880 = 0xffffffff000000e0;
    _DAT_14ca6f888 = 8;
    DAT_14ca6f88c = 0;
    _DAT_14ca6f870 = &LAB_1473405a4;
    FUN_1460846ee();
    FUN_1407e00cc(&DAT_14ca6f828);
    return;
  }
  return;
}



// FUNCTION 1460846ee FUN_1460846ee body=123 status=ok
// SIG undefined FUN_1460846ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460846ee(void)

{
  _DAT_14ca71d98 = L"BASE";
  DAT_14ca71dc2 = 4;
  _DAT_14ca71da0 = FUN_140b35ae4();
  _DAT_14ca71da8 = DAT_14ca6f838;
  _DAT_14ca71db0 = &LAB_14682652b;
  DAT_14ca6f838 = &DAT_14ca71d98;
  DAT_14ca6f88d = DAT_14ca6f88d + '\x01';
  _DAT_14ca71db8 = 0x100000000;
  if (*(char *)(_DAT_14ca71da0 + 100) != '\0') {
    DAT_14ca6f88e = DAT_14ca6f88e + '\x01';
  }
  return;
}



// FUNCTION 14608476a FUN_14608476a body=284 status=ok
// SIG undefined FUN_14608476a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14608476a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6fa60) {
    FUN_144b3d300(&DAT_14ca6fa60);
    if (DAT_14ca6fa60 == -1) {
      FUN_146084886();
      FUN_140db5666(&DAT_14ca6f9b8,0,&DAT_14ca6f950,
                    L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::Mask4 >",
                    L"/Engine/Private/VirtualTextureCompress.usf",L"CopyMask4PS",3,1,FUN_1473406ba,
                    FUN_147340660,&LAB_14734065c,&LAB_147340658,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca6f9b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431202ad);
      _Init_thread_footer(&DAT_14ca6fa60);
    }
  }
  return &DAT_14ca6f9b8;
}



// FUNCTION 146084886 FUN_146084886 body=205 status=ok
// SIG undefined FUN_146084886(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084886(void)

{
  if ((DAT_14ca6f9b7 & 2) == 0) {
    DAT_14ca6f9b7 = DAT_14ca6f9b7 | 2;
    _DAT_14ca6f958 = L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::Mask4 >";
    _DAT_14ca6f970 = FUN_146826540;
    _DAT_14ca6f978 = FUN_146825d77;
    _DAT_14ca6f980 = FUN_146825fd6;
    _DAT_14ca6f988 = FUN_1407e02ea;
    _DAT_14ca6f990 = FUN_146826273;
    _DAT_14ca6f968 = FUN_14734062a;
    _DAT_14ca6f9a8 = 0xffffffff000000e0;
    _DAT_14ca6f9b0 = 8;
    DAT_14ca6f9b4 = 0;
    _DAT_14ca6f998 = &LAB_147340654;
    FUN_146084954();
    FUN_1407e00cc(&DAT_14ca6f950);
    return;
  }
  return;
}



// FUNCTION 146084954 FUN_146084954 body=123 status=ok
// SIG undefined FUN_146084954(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084954(void)

{
  _DAT_14ca71dc8 = L"BASE";
  DAT_14ca71df2 = 4;
  _DAT_14ca71dd0 = FUN_140b35ae4();
  _DAT_14ca71dd8 = DAT_14ca6f960;
  _DAT_14ca71de0 = &LAB_14682652b;
  DAT_14ca6f960 = &DAT_14ca71dc8;
  DAT_14ca6f9b5 = DAT_14ca6f9b5 + '\x01';
  _DAT_14ca71de8 = 0x100000000;
  if (*(char *)(_DAT_14ca71dd0 + 100) != '\0') {
    DAT_14ca6f9b6 = DAT_14ca6f9b6 + '\x01';
  }
  return;
}



// FUNCTION 1460849d0 FUN_1460849d0 body=284 status=ok
// SIG undefined FUN_1460849d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460849d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6fb88) {
    FUN_144b3d300(&DAT_14ca6fb88);
    if (DAT_14ca6fb88 == -1) {
      FUN_146084aec();
      FUN_140db5666(&DAT_14ca6fae0,0,&DAT_14ca6fa78,
                    L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::WorldHeight >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",L"CopyWorldHeightPS",3,1,
                    FUN_14734076a,FUN_147340710,&LAB_14734070c,&LAB_147340708,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca6fae0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431202b9);
      _Init_thread_footer(&DAT_14ca6fb88);
    }
  }
  return &DAT_14ca6fae0;
}



// FUNCTION 146084aec FUN_146084aec body=205 status=ok
// SIG undefined FUN_146084aec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084aec(void)

{
  if ((DAT_14ca6fadf & 2) == 0) {
    DAT_14ca6fadf = DAT_14ca6fadf | 2;
    _DAT_14ca6fa80 =
         L"FShader_VirtualTextureCopy_PS< ERuntimeVirtualTextureMaterialType::WorldHeight >";
    _DAT_14ca6fa98 = FUN_146826540;
    _DAT_14ca6faa0 = FUN_146825d77;
    _DAT_14ca6faa8 = FUN_146825fd6;
    _DAT_14ca6fab0 = FUN_1407e02ea;
    _DAT_14ca6fab8 = FUN_146826273;
    _DAT_14ca6fa90 = FUN_1473406da;
    _DAT_14ca6fad0 = 0xffffffff000000e0;
    _DAT_14ca6fad8 = 8;
    DAT_14ca6fadc = 0;
    _DAT_14ca6fac0 = &LAB_147340704;
    FUN_146084bba();
    FUN_1407e00cc(&DAT_14ca6fa78);
    return;
  }
  return;
}



// FUNCTION 146084bba FUN_146084bba body=123 status=ok
// SIG undefined FUN_146084bba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084bba(void)

{
  _DAT_14ca71df8 = L"BASE";
  DAT_14ca71e22 = 4;
  _DAT_14ca71e00 = FUN_140b35ae4();
  _DAT_14ca71e08 = DAT_14ca6fa88;
  _DAT_14ca71e10 = &LAB_14682652b;
  DAT_14ca6fa88 = &DAT_14ca71df8;
  DAT_14ca6fadd = DAT_14ca6fadd + '\x01';
  _DAT_14ca71e18 = 0x100000000;
  if (*(char *)(_DAT_14ca71e00 + 100) != '\0') {
    DAT_14ca6fade = DAT_14ca6fade + '\x01';
  }
  return;
}



// FUNCTION 146084c36 FUN_146084c36 body=284 status=ok
// SIG undefined FUN_146084c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146084c36(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca726a0) {
    FUN_144b3d300(&DAT_14ca726a0);
    if (DAT_14ca726a0 == -1) {
      FUN_146084d52();
      FUN_140db5666(&DAT_14ca725f8,0,&DAT_14ca72590,L"FWideCustomResolveVS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolveVS",0,1,
                    FUN_147348944,FUN_14734891c,&LAB_147348904,&LAB_147348900,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca725f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b1e3);
      _Init_thread_footer(&DAT_14ca726a0);
    }
  }
  return &DAT_14ca725f8;
}



// FUNCTION 146084d52 FUN_146084d52 body=205 status=ok
// SIG undefined FUN_146084d52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084d52(void)

{
  if ((DAT_14ca725f7 & 2) == 0) {
    DAT_14ca725f7 = DAT_14ca725f7 | 2;
    _DAT_14ca72598 = L"FWideCustomResolveVS";
    _DAT_14ca725b0 = FUN_146826540;
    _DAT_14ca725b8 = FUN_146825d77;
    _DAT_14ca725c0 = FUN_146825fd6;
    _DAT_14ca725c8 = FUN_1407e02ea;
    _DAT_14ca725d0 = FUN_146826273;
    _DAT_14ca725a8 = FUN_1473488d2;
    _DAT_14ca725e8 = 0xffffffff000000e0;
    _DAT_14ca725f0 = 8;
    DAT_14ca725f4 = 0;
    _DAT_14ca725d8 = &LAB_1473488fc;
    FUN_146084e20();
    FUN_1407e00cc(&DAT_14ca72590);
    return;
  }
  return;
}



// FUNCTION 146084e20 FUN_146084e20 body=123 status=ok
// SIG undefined FUN_146084e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084e20(void)

{
  _DAT_14ca74748 = L"BASE";
  DAT_14ca74772 = 4;
  _DAT_14ca74750 = FUN_140b35ae4();
  _DAT_14ca74758 = DAT_14ca725a0;
  _DAT_14ca74760 = &LAB_14682652b;
  DAT_14ca725a0 = &DAT_14ca74748;
  DAT_14ca725f5 = DAT_14ca725f5 + '\x01';
  _DAT_14ca74768 = 0x100000000;
  if (*(char *)(_DAT_14ca74750 + 100) != '\0') {
    DAT_14ca725f6 = DAT_14ca725f6 + '\x01';
  }
  return;
}



// FUNCTION 146084e9c FUN_146084e9c body=284 status=ok
// SIG undefined FUN_146084e9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146084e9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3268) {
    FUN_144b3d300(&DAT_14caa3268);
    if (DAT_14caa3268 == -1) {
      FUN_146084fb8();
      FUN_140db5666(&DAT_14caa31c0,0,&DAT_14caa3158,L"FLandscapeCopyTextureVS",
                    L"/Engine/Private/LandscapeLayersPS.usf",L"CopyTextureVS",0,1,FUN_14745e9d0,
                    FUN_14745e9ae,&LAB_146324924,&LAB_14745e9aa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14caa31c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e07c);
      _Init_thread_footer(&DAT_14caa3268);
    }
  }
  return &DAT_14caa31c0;
}



// FUNCTION 146084fb8 FUN_146084fb8 body=205 status=ok
// SIG undefined FUN_146084fb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146084fb8(void)

{
  if ((DAT_14caa31bf & 2) == 0) {
    DAT_14caa31bf = DAT_14caa31bf | 2;
    _DAT_14caa3160 = L"FLandscapeCopyTextureVS";
    _DAT_14caa3178 = FUN_146826540;
    _DAT_14caa3180 = FUN_146825d77;
    _DAT_14caa3188 = FUN_146825fd6;
    _DAT_14caa3190 = FUN_1407e02ea;
    _DAT_14caa3198 = FUN_146826273;
    _DAT_14caa3170 = FUN_14745e97c;
    _DAT_14caa31b0 = 0xffffffff000000e0;
    _DAT_14caa31b8 = 8;
    DAT_14caa31bc = 0;
    _DAT_14caa31a0 = &LAB_14745e9a6;
    FUN_146085086();
    FUN_1407e00cc(&DAT_14caa3158);
    return;
  }
  return;
}



// FUNCTION 146085086 FUN_146085086 body=123 status=ok
// SIG undefined FUN_146085086(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085086(void)

{
  _DAT_14caa5958 = L"BASE";
  DAT_14caa5982 = 4;
  _DAT_14caa5960 = FUN_140b35ae4();
  _DAT_14caa5968 = DAT_14caa3168;
  _DAT_14caa5970 = &LAB_14682652b;
  DAT_14caa3168 = &DAT_14caa5958;
  DAT_14caa31bd = DAT_14caa31bd + '\x01';
  _DAT_14caa5978 = 0x100000000;
  if (*(char *)(_DAT_14caa5960 + 100) != '\0') {
    DAT_14caa31be = DAT_14caa31be + '\x01';
  }
  return;
}



// FUNCTION 146085102 FUN_146085102 body=185 status=ok
// SIG undefined FUN_146085102(void)

undefined8 * FUN_146085102(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_1460851bc(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1460851bc FUN_1460851bc body=121 status=ok
// SIG undefined FUN_1460851bc(void)

longlong * FUN_1460851bc(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 8 + *param_2;
  }
  return param_1;
}



// FUNCTION 146085236 FUN_146085236 body=284 status=ok
// SIG undefined FUN_146085236(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146085236(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3928) {
    FUN_144b3d300(&DAT_14caf3928);
    if (DAT_14caf3928 == -1) {
      FUN_146085352();
      FUN_140db5666(&DAT_14caf3880,0,&DAT_14caf3818,L"FParticleCurveInjectionVS",
                    L"/Engine/Private/ParticleCurveInjectionShader.usf",L"VertexMain",0,1,
                    FUN_147c04ca2,FUN_147c04c7a,&LAB_147c04c76,&LAB_147c04c72,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14caf3880 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435c6079);
      _Init_thread_footer(&DAT_14caf3928);
    }
  }
  return &DAT_14caf3880;
}



// FUNCTION 146085352 FUN_146085352 body=205 status=ok
// SIG undefined FUN_146085352(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085352(void)

{
  if ((DAT_14caf387f & 2) == 0) {
    DAT_14caf387f = DAT_14caf387f | 2;
    _DAT_14caf3820 = L"FParticleCurveInjectionVS";
    _DAT_14caf3838 = FUN_146826540;
    _DAT_14caf3840 = FUN_146825d77;
    _DAT_14caf3848 = FUN_146825fd6;
    _DAT_14caf3850 = FUN_1407e02ea;
    _DAT_14caf3858 = FUN_146826273;
    _DAT_14caf3830 = FUN_147c04c44;
    _DAT_14caf3870 = 0xffffffff000000e0;
    _DAT_14caf3878 = 8;
    DAT_14caf387c = 0;
    _DAT_14caf3860 = &LAB_147c04c6e;
    FUN_146085420();
    FUN_1407e00cc(&DAT_14caf3818);
    return;
  }
  return;
}



// FUNCTION 146085420 FUN_146085420 body=123 status=ok
// SIG undefined FUN_146085420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085420(void)

{
  _DAT_14caf3bd0 = L"BASE";
  DAT_14caf3bfa = 4;
  _DAT_14caf3bd8 = FUN_140b35ae4();
  _DAT_14caf3be0 = DAT_14caf3828;
  _DAT_14caf3be8 = &LAB_14682652b;
  DAT_14caf3828 = &DAT_14caf3bd0;
  DAT_14caf387d = DAT_14caf387d + '\x01';
  _DAT_14caf3bf0 = 0x100000000;
  if (*(char *)(_DAT_14caf3bd8 + 100) != '\0') {
    DAT_14caf387e = DAT_14caf387e + '\x01';
  }
  return;
}



// FUNCTION 14608549c FUN_14608549c body=284 status=ok
// SIG undefined FUN_14608549c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14608549c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3a50) {
    FUN_144b3d300(&DAT_14caf3a50);
    if (DAT_14caf3a50 == -1) {
      FUN_1460855b8();
      FUN_140db5666(&DAT_14caf39a8,0,&DAT_14caf3940,L"FParticleCurveInjectionPS",
                    L"/Engine/Private/ParticleCurveInjectionShader.usf",L"PixelMain",3,1,
                    FUN_147c04d20,FUN_147c04cf8,&LAB_147c04cf4,&LAB_147c04cf0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14caf39a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435c6085);
      _Init_thread_footer(&DAT_14caf3a50);
    }
  }
  return &DAT_14caf39a8;
}



// FUNCTION 1460855b8 FUN_1460855b8 body=205 status=ok
// SIG undefined FUN_1460855b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460855b8(void)

{
  if ((DAT_14caf39a7 & 2) == 0) {
    DAT_14caf39a7 = DAT_14caf39a7 | 2;
    _DAT_14caf3948 = L"FParticleCurveInjectionPS";
    _DAT_14caf3960 = FUN_146826540;
    _DAT_14caf3968 = FUN_146825d77;
    _DAT_14caf3970 = FUN_146825fd6;
    _DAT_14caf3978 = FUN_1407e02ea;
    _DAT_14caf3980 = FUN_146826273;
    _DAT_14caf3958 = FUN_147c04cc2;
    _DAT_14caf3998 = 0xffffffff000000e0;
    _DAT_14caf39a0 = 8;
    DAT_14caf39a4 = 0;
    _DAT_14caf3988 = &LAB_147c04cec;
    FUN_146085686();
    FUN_1407e00cc(&DAT_14caf3940);
    return;
  }
  return;
}



// FUNCTION 146085686 FUN_146085686 body=123 status=ok
// SIG undefined FUN_146085686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085686(void)

{
  _DAT_14caf3c00 = L"BASE";
  DAT_14caf3c2a = 4;
  _DAT_14caf3c08 = FUN_140b35ae4();
  _DAT_14caf3c10 = DAT_14caf3950;
  _DAT_14caf3c18 = &LAB_14682652b;
  DAT_14caf3950 = &DAT_14caf3c00;
  DAT_14caf39a5 = DAT_14caf39a5 + '\x01';
  _DAT_14caf3c20 = 0x100000000;
  if (*(char *)(_DAT_14caf3c08 + 100) != '\0') {
    DAT_14caf39a6 = DAT_14caf39a6 + '\x01';
  }
  return;
}



// FUNCTION 146085702 FUN_146085702 body=284 status=ok
// SIG undefined FUN_146085702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146085702(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4768) {
    FUN_144b3d300(&DAT_14caf4768);
    if (DAT_14caf4768 == -1) {
      FUN_14608581e();
      FUN_140db5666(&DAT_14caf46c0,0,&DAT_14caf4658,L"FParticleSimulationClearPS",
                    L"/Engine/Private/ParticleSimulationShader.usf",L"PixelMain",3,1,FUN_147c0fc9c,
                    FUN_147c0fc74,&LAB_147c0fc70,&LAB_147c0fc6c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14caf46c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435d087c);
      _Init_thread_footer(&DAT_14caf4768);
    }
  }
  return &DAT_14caf46c0;
}



// FUNCTION 14608581e FUN_14608581e body=205 status=ok
// SIG undefined FUN_14608581e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14608581e(void)

{
  if ((DAT_14caf46bf & 2) == 0) {
    DAT_14caf46bf = DAT_14caf46bf | 2;
    _DAT_14caf4660 = L"FParticleSimulationClearPS";
    _DAT_14caf4678 = FUN_146826540;
    _DAT_14caf4680 = FUN_146825d77;
    _DAT_14caf4688 = FUN_146825fd6;
    _DAT_14caf4690 = FUN_1407e02ea;
    _DAT_14caf4698 = FUN_146826273;
    _DAT_14caf4670 = FUN_147c0fc3e;
    _DAT_14caf46b0 = 0xffffffff000000e0;
    _DAT_14caf46b8 = 8;
    DAT_14caf46bc = 0;
    _DAT_14caf46a0 = &LAB_147c0fc68;
    FUN_1460858ec();
    FUN_1407e00cc(&DAT_14caf4658);
    return;
  }
  return;
}



// FUNCTION 1460858ec FUN_1460858ec body=123 status=ok
// SIG undefined FUN_1460858ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460858ec(void)

{
  _DAT_14caf5848 = L"BASE";
  DAT_14caf5872 = 4;
  _DAT_14caf5850 = FUN_140b35ae4();
  _DAT_14caf5858 = DAT_14caf4668;
  _DAT_14caf5860 = &LAB_14682652b;
  DAT_14caf4668 = &DAT_14caf5848;
  DAT_14caf46bd = DAT_14caf46bd + '\x01';
  _DAT_14caf5868 = 0x100000000;
  if (*(char *)(_DAT_14caf5850 + 100) != '\0') {
    DAT_14caf46be = DAT_14caf46be + '\x01';
  }
  return;
}



// FUNCTION 146085968 FUN_146085968 body=284 status=ok
// SIG undefined FUN_146085968(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146085968(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4958) {
    FUN_144b3d300(&DAT_14caf4958);
    if (DAT_14caf4958 == -1) {
      FUN_146085a84();
      FUN_140db5666(&DAT_14caf48b0,0,&DAT_14caf4848,L"FParticleInjectionVS",
                    L"/Engine/Private/ParticleInjectionShader.usf",L"VertexMain",0,1,FUN_147c0fe0a,
                    FUN_147c0fde2,&LAB_147c0fdde,&LAB_147c0fdda,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14caf48b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435d29ed);
      _Init_thread_footer(&DAT_14caf4958);
    }
  }
  return &DAT_14caf48b0;
}



// FUNCTION 146085a84 FUN_146085a84 body=205 status=ok
// SIG undefined FUN_146085a84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085a84(void)

{
  if ((DAT_14caf48af & 2) == 0) {
    DAT_14caf48af = DAT_14caf48af | 2;
    _DAT_14caf4850 = L"FParticleInjectionVS";
    _DAT_14caf4868 = FUN_146826540;
    _DAT_14caf4870 = FUN_146825d77;
    _DAT_14caf4878 = FUN_146825fd6;
    _DAT_14caf4880 = FUN_1407e02ea;
    _DAT_14caf4888 = FUN_146826273;
    _DAT_14caf4860 = FUN_147c0fdac;
    _DAT_14caf48a0 = 0xffffffff000000e0;
    _DAT_14caf48a8 = 8;
    DAT_14caf48ac = 0;
    _DAT_14caf4890 = &LAB_147c0fdd6;
    FUN_146085b52();
    FUN_1407e00cc(&DAT_14caf4848);
    return;
  }
  return;
}



// FUNCTION 146085b52 FUN_146085b52 body=123 status=ok
// SIG undefined FUN_146085b52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085b52(void)

{
  _DAT_14caf5878 = L"BASE";
  DAT_14caf58a2 = 4;
  _DAT_14caf5880 = FUN_140b35ae4();
  _DAT_14caf5888 = DAT_14caf4858;
  _DAT_14caf5890 = &LAB_14682652b;
  DAT_14caf4858 = &DAT_14caf5878;
  DAT_14caf48ad = DAT_14caf48ad + '\x01';
  _DAT_14caf5898 = 0x100000000;
  if (*(char *)(_DAT_14caf5880 + 100) != '\0') {
    DAT_14caf48ae = DAT_14caf48ae + '\x01';
  }
  return;
}



// FUNCTION 146085bce FUN_146085bce body=284 status=ok
// SIG undefined FUN_146085bce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146085bce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4a80) {
    FUN_144b3d300(&DAT_14caf4a80);
    if (DAT_14caf4a80 == -1) {
      FUN_146085cea();
      FUN_140db5666(&DAT_14caf49d8,0,&DAT_14caf4970,L"TParticleInjectionPS<false>",
                    L"/Engine/Private/ParticleInjectionShader.usf",L"PixelMain",3,1,FUN_147c0fe88,
                    FUN_147c0fe60,&LAB_147c0fe5c,&LAB_147c0fe58,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14caf49d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435d29f9);
      _Init_thread_footer(&DAT_14caf4a80);
    }
  }
  return &DAT_14caf49d8;
}



// FUNCTION 146085cea FUN_146085cea body=205 status=ok
// SIG undefined FUN_146085cea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085cea(void)

{
  if ((DAT_14caf49d7 & 2) == 0) {
    DAT_14caf49d7 = DAT_14caf49d7 | 2;
    _DAT_14caf4978 = L"TParticleInjectionPS<false>";
    _DAT_14caf4990 = FUN_146826540;
    _DAT_14caf4998 = FUN_146825d77;
    _DAT_14caf49a0 = FUN_146825fd6;
    _DAT_14caf49a8 = FUN_1407e02ea;
    _DAT_14caf49b0 = FUN_146826273;
    _DAT_14caf4988 = FUN_147c0fe2a;
    _DAT_14caf49c8 = 0xffffffff000000e0;
    _DAT_14caf49d0 = 8;
    DAT_14caf49d4 = 0;
    _DAT_14caf49b8 = &LAB_147c0fe54;
    FUN_146085db8();
    FUN_1407e00cc(&DAT_14caf4970);
    return;
  }
  return;
}



// FUNCTION 146085db8 FUN_146085db8 body=123 status=ok
// SIG undefined FUN_146085db8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085db8(void)

{
  _DAT_14caf58a8 = L"BASE";
  DAT_14caf58d2 = 4;
  _DAT_14caf58b0 = FUN_140b35ae4();
  _DAT_14caf58b8 = DAT_14caf4980;
  _DAT_14caf58c0 = &LAB_14682652b;
  DAT_14caf4980 = &DAT_14caf58a8;
  DAT_14caf49d5 = DAT_14caf49d5 + '\x01';
  _DAT_14caf58c8 = 0x100000000;
  if (*(char *)(_DAT_14caf58b0 + 100) != '\0') {
    DAT_14caf49d6 = DAT_14caf49d6 + '\x01';
  }
  return;
}



// FUNCTION 146085e34 FUN_146085e34 body=284 status=ok
// SIG undefined FUN_146085e34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146085e34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4ba8) {
    FUN_144b3d300(&DAT_14caf4ba8);
    if (DAT_14caf4ba8 == -1) {
      FUN_146085f50();
      FUN_140db5666(&DAT_14caf4b00,0,&DAT_14caf4a98,L"TParticleInjectionPS<true>",
                    L"/Engine/Private/ParticleInjectionShader.usf",L"PixelMain",3,1,FUN_147c0ff06,
                    FUN_147c0fede,&LAB_147c0feda,&LAB_147c0fed6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14caf4b00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435d2a05);
      _Init_thread_footer(&DAT_14caf4ba8);
    }
  }
  return &DAT_14caf4b00;
}



// FUNCTION 146085f50 FUN_146085f50 body=205 status=ok
// SIG undefined FUN_146085f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146085f50(void)

{
  if ((DAT_14caf4aff & 2) == 0) {
    DAT_14caf4aff = DAT_14caf4aff | 2;
    _DAT_14caf4aa0 = L"TParticleInjectionPS<true>";
    _DAT_14caf4ab8 = FUN_146826540;
    _DAT_14caf4ac0 = FUN_146825d77;
    _DAT_14caf4ac8 = FUN_146825fd6;
    _DAT_14caf4ad0 = FUN_1407e02ea;
    _DAT_14caf4ad8 = FUN_146826273;
    _DAT_14caf4ab0 = FUN_147c0fea8;
    _DAT_14caf4af0 = 0xffffffff000000e0;
    _DAT_14caf4af8 = 8;
    DAT_14caf4afc = 0;
    _DAT_14caf4ae0 = &LAB_147c0fed2;
    FUN_14608601e();
    FUN_1407e00cc(&DAT_14caf4a98);
    return;
  }
  return;
}



// FUNCTION 14608601e FUN_14608601e body=123 status=ok
// SIG undefined FUN_14608601e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14608601e(void)

{
  _DAT_14caf58d8 = L"BASE";
  DAT_14caf5902 = 4;
  _DAT_14caf58e0 = FUN_140b35ae4();
  _DAT_14caf58e8 = DAT_14caf4aa8;
  _DAT_14caf58f0 = &LAB_14682652b;
  DAT_14caf4aa8 = &DAT_14caf58d8;
  DAT_14caf4afd = DAT_14caf4afd + '\x01';
  _DAT_14caf58f8 = 0x100000000;
  if (*(char *)(_DAT_14caf58e0 + 100) != '\0') {
    DAT_14caf4afe = DAT_14caf4afe + '\x01';
  }
  return;
}



// FUNCTION 14608609a FUN_14608609a body=119 status=ok
// SIG undefined FUN_14608609a(void)

void FUN_14608609a(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146086112(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14caf9890);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146086112 FUN_146086112 body=88 status=ok
// SIG undefined FUN_146086112(void)

undefined8 * FUN_146086112(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14608616a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14608616a FUN_14608616a body=98 status=ok
// SIG undefined FUN_14608616a(void)

void FUN_14608616a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1460861cc FUN_1460861cc body=52 status=ok
// SIG undefined FUN_1460861cc(void)

void FUN_1460861cc(longlong *param_1)

{
  FUN_146086200(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001460861f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146086200 FUN_146086200 body=101 status=ok
// SIG undefined FUN_146086200(void)

void FUN_146086200(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
  uVar1 = *(undefined4 *)(lVar2 + 0x60);
  *(undefined4 *)(lVar2 + 0x60) = 3;
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x650);
  if (plVar3 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar3 + 0x20))();
    if ((iVar4 == 1) && (plVar3 = *(longlong **)(lVar2 + 0x650), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))();
    }
  }
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00014608625e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
  return;
}



// FUNCTION 146086266 FUN_146086266 body=284 status=ok
// SIG undefined FUN_146086266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146086266(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2dbf8) {
    FUN_144b3d300(&DAT_14cb2dbf8);
    if (DAT_14cb2dbf8 == -1) {
      FUN_146086382();
      FUN_140db5666(&DAT_14cb2db50,0,&DAT_14cb2dae8,L"FNiagaraCollisionRayTraceCH",
                    L"/Plugin/FX/Niagara/Private/NiagaraRayTracingShaders.usf",
                    L"NiagaraCollisionRayTraceCH",8,1,FUN_14804bbec,FUN_14804bbc4,&LAB_146460704,
                    &LAB_14804bbc0,&LAB_14804bbba,&LAB_14712ac08,0xe0,0);
      _DAT_14cb2db50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8109);
      _Init_thread_footer(&DAT_14cb2dbf8);
    }
  }
  return &DAT_14cb2db50;
}



// FUNCTION 146086382 FUN_146086382 body=205 status=ok
// SIG undefined FUN_146086382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146086382(void)

{
  if ((DAT_14cb2db4f & 2) == 0) {
    DAT_14cb2db4f = DAT_14cb2db4f | 2;
    _DAT_14cb2daf0 = L"FNiagaraCollisionRayTraceCH";
    _DAT_14cb2db08 = FUN_146826540;
    _DAT_14cb2db10 = FUN_146825d77;
    _DAT_14cb2db18 = FUN_146825fd6;
    _DAT_14cb2db20 = FUN_1407e02ea;
    _DAT_14cb2db28 = FUN_146826273;
    _DAT_14cb2db00 = FUN_14804bb8c;
    _DAT_14cb2db40 = 0xffffffff000000e0;
    _DAT_14cb2db48 = 8;
    DAT_14cb2db4c = 0;
    _DAT_14cb2db30 = &LAB_14804bbb6;
    FUN_146086450();
    FUN_1407e00cc(&DAT_14cb2dae8);
    return;
  }
  return;
}



// FUNCTION 146086450 FUN_146086450 body=123 status=ok
// SIG undefined FUN_146086450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146086450(void)

{
  _DAT_14cb35300 = L"BASE";
  DAT_14cb3532a = 4;
  _DAT_14cb35308 = FUN_140b35ae4();
  _DAT_14cb35310 = DAT_14cb2daf8;
  _DAT_14cb35318 = &LAB_14682652b;
  DAT_14cb2daf8 = &DAT_14cb35300;
  DAT_14cb2db4d = DAT_14cb2db4d + '\x01';
  _DAT_14cb35320 = 0x100000000;
  if (*(char *)(_DAT_14cb35308 + 100) != '\0') {
    DAT_14cb2db4e = DAT_14cb2db4e + '\x01';
  }
  return;
}



// FUNCTION 1460864cc FUN_1460864cc body=284 status=ok
// SIG undefined FUN_1460864cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460864cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2dd20) {
    FUN_144b3d300(&DAT_14cb2dd20);
    if (DAT_14cb2dd20 == -1) {
      FUN_1460865e8();
      FUN_140db5666(&DAT_14cb2dc78,0,&DAT_14cb2dc10,L"FNiagaraCollisionRayTraceMiss",
                    L"/Plugin/FX/Niagara/Private/NiagaraRayTracingShaders.usf",
                    L"NiagaraCollisionRayTraceMiss",7,1,FUN_14804bc80,FUN_14804bc58,&LAB_14646070c,
                    &LAB_14804bc54,&LAB_14804bc4e,&LAB_14712ac08,0xe0,0);
      _DAT_14cb2dc78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8115);
      _Init_thread_footer(&DAT_14cb2dd20);
    }
  }
  return &DAT_14cb2dc78;
}



// FUNCTION 1460865e8 FUN_1460865e8 body=205 status=ok
// SIG undefined FUN_1460865e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460865e8(void)

{
  if ((DAT_14cb2dc77 & 2) == 0) {
    DAT_14cb2dc77 = DAT_14cb2dc77 | 2;
    _DAT_14cb2dc18 = L"FNiagaraCollisionRayTraceMiss";
    _DAT_14cb2dc30 = FUN_146826540;
    _DAT_14cb2dc38 = FUN_146825d77;
    _DAT_14cb2dc40 = FUN_146825fd6;
    _DAT_14cb2dc48 = FUN_1407e02ea;
    _DAT_14cb2dc50 = FUN_146826273;
    _DAT_14cb2dc28 = FUN_14804bc20;
    _DAT_14cb2dc68 = 0xffffffff000000e0;
    _DAT_14cb2dc70 = 8;
    DAT_14cb2dc74 = 0;
    _DAT_14cb2dc58 = &LAB_14804bc4a;
    FUN_1460866b6();
    FUN_1407e00cc(&DAT_14cb2dc10);
    return;
  }
  return;
}



// FUNCTION 1460866b6 FUN_1460866b6 body=123 status=ok
// SIG undefined FUN_1460866b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460866b6(void)

{
  _DAT_14cb35330 = L"BASE";
  DAT_14cb3535a = 4;
  _DAT_14cb35338 = FUN_140b35ae4();
  _DAT_14cb35340 = DAT_14cb2dc20;
  _DAT_14cb35348 = &LAB_14682652b;
  DAT_14cb2dc20 = &DAT_14cb35330;
  DAT_14cb2dc75 = DAT_14cb2dc75 + '\x01';
  _DAT_14cb35350 = 0x100000000;
  if (*(char *)(_DAT_14cb35338 + 100) != '\0') {
    DAT_14cb2dc76 = DAT_14cb2dc76 + '\x01';
  }
  return;
}



// FUNCTION 14608673a FUN_14608673a body=298 status=ok
// SIG undefined FUN_14608673a(void)

undefined8 * FUN_14608673a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bab6500;
  param_1[5] = 0x407f400000000000;
  param_1[6] = 0x407f400000000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  FUN_145c4ceaa(param_1 + 0x1b,0xffffffff);
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x32));
  param_1[0x33] = 0;
  return param_1;
}



// FUNCTION 146086864 FUN_146086864 body=132 status=ok
// SIG undefined FUN_146086864(void)

longlong FUN_146086864(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1460868ea();
  if ((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x20, DAT_14cb7c208 + lVar2 == 0)) {
    local_28 = param_2;
    FUN_1460869f0(&local_1c,param_1);
    lVar2 = (longlong)local_1c << 5;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + DAT_14cb7c208 + 8;
}



// FUNCTION 1460868ea FUN_1460868ea body=205 status=ok
// SIG undefined FUN_1460868ea(void)

int FUN_1460868ea(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c210 != DAT_14cb7c23c) {
    puVar2 = &DAT_14cb7c240;
    if (DAT_14cb7c248 != (undefined *)0x0) {
      puVar2 = DAT_14cb7c248;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7c250 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7c208 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_1460869b8(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_146086917;
        iVar3 = *(int *)(DAT_14cb7c208 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146086917:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1460869b8 FUN_1460869b8 body=55 status=ok
// SIG undefined FUN_1460869b8(void)

ulonglong FUN_1460869b8(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1460869f0 FUN_1460869f0 body=289 status=ok
// SIG undefined FUN_1460869f0(void)

undefined4 * FUN_1460869f0(undefined4 *param_1,uint param_2,undefined8 *param_3)

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
  FUN_146086bb8(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_146086b12(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb7c210 - DAT_14cb7c23c;
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
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb7c250)) {
      param_2 = DAT_14cb7c250 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar4 = DAT_14cb7c248;
      if (DAT_14cb7c248 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7c240;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7c250 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb7c248;
      if (DAT_14cb7c248 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7c240;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7c250 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb7c250 = iVar6;
      FUN_146086cc6();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146086b12 FUN_146086b12 body=165 status=ok
// SIG undefined FUN_146086b12(void)

undefined8 FUN_146086b12(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb7c210 - DAT_14cb7c23c != 1) {
    local_30 = *param_2;
    iVar6 = FUN_145d28000();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(DAT_14cb7c208 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(DAT_14cb7c208 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_2[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_145d28264(*param_3);
      *param_3 = iVar6;
      uVar7 = 1;
      goto LAB_146086b3d;
    }
  }
  uVar7 = 0;
LAB_146086b3d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146086bb8 FUN_146086bb8 body=269 status=ok
// SIG undefined FUN_146086bb8(void)

int * FUN_146086bb8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7c238;
  iVar3 = DAT_14cb7c210;
  if (DAT_14cb7c23c == 0) {
    iVar2 = DAT_14cb7c210 + 1;
    bVar7 = DAT_14cb7c214 == DAT_14cb7c210;
    DAT_14cb7c210 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb7c208,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7c218,1);
    puVar4 = DAT_14cb7c228;
    if (DAT_14cb7c228 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cb7c218;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb7c238;
    DAT_14cb7c238 = *(int *)(DAT_14cb7c208 + 4 + lVar6 * 0x20);
    DAT_14cb7c23c = DAT_14cb7c23c + -1;
    if (DAT_14cb7c23c != 0) {
      *(undefined4 *)(DAT_14cb7c208 + (longlong)DAT_14cb7c238 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7c218;
  if (DAT_14cb7c228 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb7c228;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb7c208;
  return param_1;
}



// FUNCTION 146086cc6 FUN_146086cc6 body=489 status=ok
// SIG undefined FUN_146086cc6(void)

void FUN_146086cc6(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7c248 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7c248,0,0,4);
  }
  uVar2 = DAT_14cb7c250;
  uVar3 = local_50;
  if (DAT_14cb7c250 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7c240,0,DAT_14cb7c250,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb7c248;
        if (DAT_14cb7c248 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c240;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb7c250 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7c218;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7c230 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7c208;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb7c250 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb7c248;
        if (DAT_14cb7c248 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c240;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb7c250 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb7c248;
        if (DAT_14cb7c248 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7c240;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7c250 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146086eb0 FUN_146086eb0 body=51 status=ok
// SIG undefined FUN_146086eb0(void)

void FUN_146086eb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1d38) != 0) {
    FUN_140c733be();
    *(undefined8 *)(param_1 + 0x1d38) = 0;
  }
  FUN_1415d1b4a(param_1);
  return;
}



// FUNCTION 146086ee4 FUN_146086ee4 body=210 status=ok
// SIG undefined FUN_146086ee4(void)

void FUN_146086ee4(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140136774();
  iVar5 = DAT_14c761454;
  if (DAT_14c761454 < 1) {
    iVar5 = *(int *)(param_1 + 0x304);
  }
  uVar1 = (ulonglong)(iVar5 + -1 + (uint)(iVar5 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar5 = 1 << ((byte)lVar2 & 0x1f);
  if (DAT_14ca84e64 <= iVar5) {
    iVar5 = DAT_14ca84e64;
  }
  iVar4 = 8;
  if (8 < iVar5) {
    iVar4 = iVar5;
  }
  *(int *)(param_1 + 0x304) = iVar4;
  if (((*(byte *)(param_1 + 0x1f8) & 0x20) != 0) && ((*(uint *)(param_1 + 8) & 0x30) == 0)) {
    cVar3 = FUN_1415d1d7c(param_1);
    if (cVar3 == '\0') goto LAB_146086f62;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
  local_20 = &local_28;
  local_28 = param_1;
  FUN_14129af20(&DAT_14cad2db0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
LAB_146086f62:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146086fb8 FUN_146086fb8 body=476 status=ok
// SIG undefined FUN_146086fb8(void)

void FUN_146086fb8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = param_1[0x7a];
  if (((lVar4 != 0) && (*(longlong **)(lVar4 + 0x3c0) == param_1)) &&
     (*(undefined8 *)(lVar4 + 0x3c0) = 0, DAT_14c76146c == '\x01')) {
    lVar4 = 0x690;
    if ((char)param_1[0x2f] == '\x03') {
      lVar4 = 0x6e0;
    }
    (**(code **)(*(longlong *)param_1[0x7a] + lVar4))();
  }
  (**(code **)(*param_1 + 0x6b0))(param_1,0);
  uVar2 = FUN_1401b4c98(param_1);
  uVar5 = (**(code **)(*param_1 + 0xaf0))(param_1);
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  puVar1 = local_a8;
  local_a0 = 3;
  *local_a8 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_a8[2] = lVar3;
  *local_a8 = &PTR_FUN_14aa4d800;
  local_a8[3] = 0;
  FUN_14485c47a(local_a8 + 3,param_1);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = &LAB_145a2c968;
  local_98 = 0;
  local_90 = 0;
  FUN_14487d8d8(&local_98,&local_a8);
  local_58 = 1;
  local_b0 = 0xbf800000;
  local_b8 = 0;
  FUN_1406f3fee(uVar2,param_1 + 0xe5,&local_98,uVar5);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  FUN_1449db362(&local_a8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146087196 FUN_146087196 body=60 status=ok
// SIG undefined FUN_146087196(void)

undefined8 FUN_146087196(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1447210f0();
  plVar1 = *(longlong **)(lVar2 + 0x178);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001460871c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x668))(plVar1,param_1);
    return uVar3;
  }
  return 0x3f800000;
}



// FUNCTION 1460871d2 FUN_1460871d2 body=286 status=ok
// SIG undefined FUN_1460871d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460871d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca020b8) {
    FUN_144b3d300(&DAT_14ca020b8);
    if (DAT_14ca020b8 == -1) {
      FUN_145bfdfd2();
      FUN_1460872f0();
      FUN_140db5666(&DAT_14ca02010,0,&DAT_14ca01fa8,L"FClearCompressedAtlasCS",
                    L"/Engine/Private/Lumen/SurfaceCache/LumenSurfaceCache.usf",
                    L"ClearCompressedAtlasCS",5,5,FUN_1472219c4,FUN_147221964,&LAB_1462e73b0,
                    &LAB_147221960,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06120);
      _DAT_14ca02010 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db7d4d);
      _Init_thread_footer(&DAT_14ca020b8);
    }
  }
  return &DAT_14ca02010;
}



// FUNCTION 1460872f0 FUN_1460872f0 body=205 status=ok
// SIG undefined FUN_1460872f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460872f0(void)

{
  if ((DAT_14ca0200f & 2) == 0) {
    DAT_14ca0200f = DAT_14ca0200f | 2;
    _DAT_14ca01fb0 = L"FClearCompressedAtlasCS";
    _DAT_14ca01fc8 = FUN_146826540;
    _DAT_14ca01fd0 = FUN_146825d77;
    _DAT_14ca01fd8 = FUN_146825fd6;
    _DAT_14ca01fe0 = FUN_1407e02ea;
    _DAT_14ca01fe8 = FUN_146826273;
    _DAT_14ca01fc0 = FUN_147221932;
    _DAT_14ca02000 = 0xffffffff000000e0;
    _DAT_14ca02008 = 8;
    DAT_14ca0200c = 0;
    _DAT_14ca01ff0 = &LAB_14722195c;
    FUN_1460873be();
    FUN_1407e00cc(&DAT_14ca01fa8);
    return;
  }
  return;
}



// FUNCTION 1460873be FUN_1460873be body=123 status=ok
// SIG undefined FUN_1460873be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460873be(void)

{
  _DAT_14ca07b28 = L"BASE";
  DAT_14ca07b52 = 4;
  _DAT_14ca07b30 = FUN_140b35ae4();
  _DAT_14ca07b38 = DAT_14ca01fb8;
  _DAT_14ca07b40 = &LAB_14682652b;
  DAT_14ca01fb8 = &DAT_14ca07b28;
  DAT_14ca0200d = DAT_14ca0200d + '\x01';
  _DAT_14ca07b48 = 0x100000000;
  if (*(char *)(_DAT_14ca07b30 + 100) != '\0') {
    DAT_14ca0200e = DAT_14ca0200e + '\x01';
  }
  return;
}



// FUNCTION 14608743a FUN_14608743a body=113 status=ok
// SIG undefined FUN_14608743a(void)

void FUN_14608743a(void)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1460874ac(local_48);
  FUN_14109bcee(&DAT_14cae4848,local_50,local_48);
  FUN_1401cb1ee(local_48);
  FUN_14123f5ce(&DAT_14c9a1e20,local_48,FUN_145d6c126);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460874ac FUN_1460874ac body=193 status=ok
// SIG undefined FUN_1460874ac(void)

LPCRITICAL_SECTION FUN_1460874ac(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 2) {
    FUN_1446efa72(param_1 + 1,0,2,0x10);
    param_1[1].LockCount = 2;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6ba10;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2980;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)FUN_148600a16;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14608756e FUN_14608756e body=209 status=ok
// SIG undefined FUN_14608756e(void)

undefined8 * FUN_14608756e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14b4cf1b0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  iVar1 = FUN_145cdd8ee();
  if (iVar1 == 24000) {
    iVar1 = 0x3800;
    if (1 < DAT_14c761e54) {
      iVar1 = 0x7000;
    }
  }
  else {
    iVar1 = (uint)(1 < DAT_14c761e54) * 0x2000 + 0x2000;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != iVar1) {
    FUN_144893a1c(param_1 + 3);
  }
  iVar1 = FUN_145cdd8ee();
  if (iVar1 == 24000) {
    uVar2 = 0x3800;
    if (1 < DAT_14c761e54) {
      uVar2 = 0x7000;
    }
  }
  else {
    uVar2 = (uint)(1 < DAT_14c761e54) * 0x2000 + 0x2000;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 4) = iVar1 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0x24) - iVar1) < uVar2) {
    FUN_1447403be(param_1 + 3);
  }
  return param_1;
}



// FUNCTION 146087640 FUN_146087640 body=38 status=ok
// SIG undefined FUN_146087640(void)

undefined8 FUN_146087640(undefined8 param_1,int param_2)

{
  FUN_1415d1ec2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146087666 FUN_146087666 body=211 status=ok
// SIG undefined FUN_146087666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146087666(void)

{
  if ((DAT_14cb2f6af & 2) == 0) {
    DAT_14cb2f6af = DAT_14cb2f6af | 2;
    _DAT_14cb2f650 = L"FNiagaraShader";
    _DAT_14cb2f668 = FUN_146826540;
    _DAT_14cb2f670 = FUN_146825d77;
    _DAT_14cb2f678 = FUN_146825fd6;
    _DAT_14cb2f680 = FUN_1407e02ea;
    _DAT_14cb2f688 = FUN_146826273;
    _DAT_14cb2f660 = FUN_14804dac4;
    _DAT_14cb2f6a0 = 0xffffffff000000f8;
    _DAT_14cb2f6a8 = 8;
    DAT_14cb2f6ac = 0;
    _DAT_14cb2f690 = &LAB_14804dafc;
    FUN_1460877b6();
    FUN_14608773a();
    FUN_1407e00cc(&DAT_14cb2f648);
  }
  return &DAT_14cb2f648;
}


