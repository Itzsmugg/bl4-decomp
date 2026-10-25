// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144f76c10 FUN_144f76c10 body=11 status=ok
// SIG undefined FUN_144f76c10(void)

void FUN_144f76c10(undefined8 *param_1)

{
  *param_1 = hkReflect::ClonerCallback::vftable;
  return;
}



// FUNCTION 144f76c20 FUN_144f76c20 body=21 status=ok
// SIG undefined FUN_144f76c20(void)

undefined4 *
FUN_144f76c20(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  *param_2 = 0;
  *param_5 = 1;
  return param_2;
}



// FUNCTION 144f76c40 FUN_144f76c40 body=4 status=ok
// SIG undefined FUN_144f76c40(void)

undefined8 FUN_144f76c40(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 144f76c50 FUN_144f76c50 body=3 status=ok
// SIG undefined FUN_144f76c50(void)

void FUN_144f76c50(void)

{
  return;
}



// FUNCTION 144f76c60 FUN_144f76c60 body=3 status=ok
// SIG undefined FUN_144f76c60(void)

void FUN_144f76c60(void)

{
  return;
}



// FUNCTION 144f76c70 FUN_144f76c70 body=71 status=ok
// SIG undefined FUN_144f76c70(void)

undefined8 * FUN_144f76c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::ClonerCallback::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f76cc0 FUN_144f76cc0 body=859 status=ok
// SIG undefined FUN_144f76cc0(void)

void FUN_144f76cc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 local_res8;
  char *local_1f8;
  char *pcStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [80];
  undefined1 local_188 [352];
  
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar8 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar8 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar8 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar8 + 0xf0) = lVar6;
  }
  lVar6 = *(longlong *)(lVar6 + 0x3e0);
  if (lVar6 != 0) {
    local_1f8 = "TtReflect.CallAfterReflectNew";
    pcStack_1f0 = "";
    FUN_144b3f370(lVar6,&local_1f8);
  }
  if ((int)param_1[5] == 0) {
    lVar13 = param_1[1];
    if (*(char *)(lVar8 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = *(longlong *)(lVar8 + 0xf0);
    if (lVar9 == 0) {
      if (*(char *)(lVar8 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar9 = FUN_144b3f4a0();
      *(longlong *)(lVar8 + 0xf0) = lVar9;
    }
    if (*(longlong *)(lVar9 + 0x3e0) != 0) {
      local_1f8 = "MiNumVars";
      pcStack_1f0 = "";
      FUN_144be9c40(*(longlong *)(lVar9 + 0x3e0),&local_1f8,(float)(int)lVar13);
    }
    lVar8 = DAT_14c799190;
    if ((int)param_1[1] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c799190 + 0x18));
      iVar5 = (int)param_1[1] + -1;
      lVar13 = (longlong)iVar5;
      if (-1 < iVar5) {
        lVar9 = lVar13 << 5;
        do {
          lVar2 = *param_1;
          iVar5 = -*(int *)(lVar9 + 0x18 + lVar2);
          if (iVar5 < 0) {
            iVar5 = *(int *)(lVar9 + 0x18 + lVar2);
          }
          FUN_144f6a010(*(undefined8 *)(lVar9 + lVar2),*(undefined8 *)(lVar9 + 8 + lVar2),iVar5);
          lVar13 = lVar13 + -1;
          lVar9 = lVar9 + -0x20;
        } while (-1 < lVar13);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x18));
    }
    plVar12 = (longlong *)param_1[3];
    plVar1 = plVar12 + (int)param_1[4];
    for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
      uVar10 = FUN_144be8020(*plVar12);
      if (uVar10 < 2) {
        plVar3 = (longlong *)*plVar12;
        if (plVar3 == (longlong *)0x0) {
          local_1f8 = (char *)0x0;
          pcStack_1f0 = (char *)0x0;
        }
        else if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)FUN_144beec10(local_1e8,plVar3,&DAT_14c6dc390);
          local_1f8 = (char *)*puVar11;
          pcStack_1f0 = (char *)puVar11[1];
        }
        else {
          (**(code **)*plVar3)(plVar3,&local_1f8);
        }
        FUN_144bfc170(0x5c9ebbbc,"Reflect\\Util\\hkReflectClone.cpp",0x300,
                      "A cloned object of type \'{}\' has stopped being referenced before/while calling afterReflectNew"
                      ,pcStack_1f0);
      }
    }
    FUN_144f77100(param_1);
  }
  else if ((DAT_14c7990e8 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar7 = FUN_144bdc640(local_1d8);
      local_res8 = 0;
      lVar8 = FUN_144bdc480(uVar7,"AfterReflectNew should never be called from this handler",
                            &local_res8,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x2ec;
      FUN_144bdc690(local_1d8);
    }
    else {
      uVar7 = FUN_144bdc810(local_188,&DAT_14c799098,1);
      local_res8 = 0;
      lVar8 = FUN_144bdc480(uVar7,"AfterReflectNew should never be called from this handler",
                            &local_res8,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x2ec;
      FUN_144bdc8a0(local_188);
    }
  }
  if (lVar6 != 0) {
    local_1f8 = "Et";
    pcStack_1f0 = "";
    FUN_144b3f260(lVar6,&local_1f8);
  }
  return;
}



// FUNCTION 144f77020 FUN_144f77020 body=220 status=ok
// SIG undefined FUN_144f77020(void)

void FUN_144f77020(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (((int)param_1[5] == 0) && (cVar3 = FUN_144f6a0f0(param_2[1]), cVar3 != '\0')) {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_144befdb0(lVar1);
    }
    if ((uVar4 & 1) != 0) {
      FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    }
    iVar6 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar6) {
      FUN_144f819c0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar5 = (undefined8 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
    if (puVar5 == (undefined8 *)0x0) {
      *(int *)(param_1 + 1) = iVar6;
      if ((uVar4 & 1) != 0) {
        FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
      }
    }
    else {
      *puVar5 = uVar2;
      puVar5[1] = lVar1;
      puVar5[2] = uVar4;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      *(int *)(param_1 + 1) = iVar6;
    }
  }
  return;
}



// FUNCTION 144f77100 FUN_144f77100 body=164 status=ok
// SIG undefined FUN_144f77100(void)

void FUN_144f77100(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0x20 + lVar4;
  while (lVar3 = lVar2, lVar3 != lVar4) {
    lVar2 = lVar3 + -0x20;
    if ((*(byte *)(lVar3 + -0x10) & 1) != 0) {
      FUN_144be6b30(*(ulonglong *)(lVar3 + -0x10) & 0xfffffffffffffffe);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  lVar2 = param_1[3];
  lVar4 = lVar2 + (longlong)(int)param_1[4] * 8;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -8);
    lVar4 = lVar4 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  lVar4 = param_1[2];
  param_1[2] = 0;
  if (lVar4 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144f771b0 FUN_144f771b0 body=583 status=ok
// SIG undefined FUN_144f771b0(void)

void FUN_144f771b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined1 local_278 [16];
  longlong local_268;
  int local_260;
  uint local_25c;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  if ((*param_1 == 0) && (*param_2 == 0)) {
    if ((1 < DAT_14c7990e8) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar4 = FUN_144bdc640(local_1b8);
        local_res8 = 0;
        lVar5 = FUN_144bdc480(uVar4,"Attempting to clone a null var",&local_res8,0);
        *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x358;
        FUN_144bdc690(local_1b8);
      }
      else {
        uVar4 = FUN_144bdc810(local_168,&DAT_14c799098,2);
        local_res8 = 0;
        lVar5 = FUN_144bdc480(uVar4,"Attempting to clone a null var",&local_res8,0);
        *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x358;
        FUN_144bdc8a0(local_168);
      }
    }
  }
  else {
    FUN_144f78d30(local_278);
    FUN_144f81780(&local_268,&local_res8,param_2);
    if ((int)local_res8 == local_260) {
      iVar1 = local_260 + 1;
      if ((int)(local_25c & 0x7fffffff) < iVar1) {
        FUN_144f820f0(&local_268,&PTR_vftable_14c6e47a0,(longlong)iVar1);
      }
      plVar6 = (longlong *)((longlong)local_260 * 0x30 + local_268);
      local_260 = iVar1;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = *param_2;
        plVar6[1] = param_2[1];
        uVar2 = param_2[2];
        plVar6[2] = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
        plVar6[3] = *param_1;
        plVar6[4] = param_1[1];
        uVar2 = param_1[2];
        plVar6[5] = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
      }
    }
    else {
      lVar5 = (longlong)(int)local_res8 * 0x30 + local_268;
      *(longlong *)(lVar5 + 0x18) = *param_1;
      *(longlong *)(lVar5 + 0x20) = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
        FUN_144be6b30(*(ulonglong *)(lVar5 + 0x28) & 0xfffffffffffffffe);
      }
      *(longlong *)(lVar5 + 0x28) = param_1[2];
    }
    FUN_144f78fd0(local_278,param_1,param_2,param_3);
    FUN_144f78ec0(local_278);
  }
  return;
}



// FUNCTION 144f77400 FUN_144f77400 body=156 status=ok
// SIG undefined FUN_144f77400(void)

void FUN_144f77400(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = (ulonglong *)*param_1;
  if (puVar2 + (longlong)(int)param_1[1] * 3 != puVar2) {
    puVar3 = puVar2 + (longlong)(int)param_1[1] * 3 + 2;
    do {
      if ((puVar3[-3] & 1) != 0) {
        FUN_144be6b30(puVar3[-3] & 0xfffffffffffffffe);
      }
      puVar1 = puVar3 + -5;
      puVar3 = puVar3 + -3;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f774a0 FUN_144f774a0 body=386 status=ok
// SIG undefined FUN_144f774a0(void)

void FUN_144f774a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  if ((param_2 < 0) && (iVar8 = 0, 0 < (int)param_1[1])) {
    lVar9 = 0;
    do {
      lVar1 = *param_1;
      uVar2 = *(ulonglong *)(lVar9 + 0x10 + lVar1);
      lVar3 = *(longlong *)(lVar9 + lVar1);
      lVar1 = *(longlong *)(lVar9 + 8 + lVar1);
      if ((uVar2 & 1) != 0) {
        FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
      }
      if (lVar3 != 0) {
        FUN_144bf0690(&local_58,lVar1);
        uVar7 = uVar2;
        lVar5 = lVar3;
        lVar4 = lVar1;
        if ((1 < local_58) &&
           (puVar6 = (uint *)FUN_144bf04d0(&local_58,local_res18), (*puVar6 >> 6 & 1) != 0)) {
          lVar4 = *(longlong *)(lVar1 + 8);
          FUN_144bef800(lVar4,local_res20);
          if (lVar4 == 0) {
            uVar7 = 0;
          }
          else {
            local_50 = lVar3;
            local_48 = lVar4;
            uVar7 = FUN_144befdb0(lVar4);
            lVar5 = local_50;
            lVar4 = local_48;
          }
        }
        local_48 = lVar4;
        local_50 = lVar5;
        local_40 = uVar7;
        if ((local_40 & 1) != 0) {
          FUN_144be6b20(local_40 & 0xfffffffffffffffe);
        }
        FUN_144f7f900(local_res10,&local_50);
        if ((local_40 & 1) != 0) {
          FUN_144be6b30(local_40 & 0xfffffffffffffffe);
        }
        FUN_144f692e0(lVar3,lVar1);
      }
      if ((uVar2 & 1) != 0) {
        FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (iVar8 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 144f77630 FUN_144f77630 body=30 status=ok
// SIG undefined FUN_144f77630(void)

undefined8 * FUN_144f77630(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  *param_1 = hkReflect::Detail::CloneOnHeap::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 144f77650 FUN_144f77650 body=44 status=ok
// SIG undefined FUN_144f77650(void)

void FUN_144f77650(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::CloneOnHeap::vftable;
  FUN_144f77400(param_1 + 1);
  *param_1 = hkReflect::ClonerCallback::vftable;
  return;
}



// FUNCTION 144f77680 FUN_144f77680 body=2682 status=ok
// SIG undefined FUN_144f77680(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 *
FUN_144f77680(longlong *param_1,undefined4 *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  int iVar11;
  undefined *puVar12;
  ulonglong local_res20;
  ulonglong local_248 [2];
  code *local_238;
  ulonglong *local_230;
  code *local_228;
  ulonglong *local_220;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  undefined1 local_1d0 [80];
  undefined1 local_180 [344];
  
  uVar6 = 0;
  if (*param_4 == 0) {
    if ((DAT_14c7990e8 < 3) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144f78070;
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar3 = FUN_144bdc640(local_248 + 1);
      local_res20 = 0;
      lVar4 = FUN_144bdc480(uVar3,"Cannot clone null Var",&local_res20,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x3ba;
      FUN_144bdc690(local_248 + 1);
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar3 = FUN_144bdc810(local_180,&DAT_14c799098,3);
    local_res20 = 0;
    lVar4 = FUN_144bdc480(uVar3,"Cannot clone null Var",&local_res20,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x3ba;
    goto LAB_144f7805c;
  }
  if (param_4[1] == 0) {
LAB_144f77bfc:
    local_1f0 = 0;
LAB_144f77c01:
    if (*param_3 != 0) goto LAB_144f780d8;
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_4[1]);
    local_248[0] = uVar5;
    if (uVar5 == 0) {
      if ((DAT_14c7990e8 < 3) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144f78070;
      cVar2 = FUN_144bdbf80();
      local_1d8 = param_4[1];
      if (cVar2 == '\0') {
        local_res20 = local_1d8;
        uVar3 = FUN_144bdc640(local_1d0);
        local_248[1] = 1;
        local_238 = FUN_144c00d20;
        local_230 = &local_res20;
        lVar4 = FUN_144bdc480(uVar3,"Cannot find native type for \'{}\'.",local_248 + 1,0);
        *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 1000;
        FUN_144bdc690(local_1d0);
        *param_2 = 0x80040200;
        return param_2;
      }
      uVar3 = FUN_144bdc810(local_180,&DAT_14c799098,3);
      local_248[1] = 1;
      local_238 = FUN_144c00d20;
      local_230 = &local_1d8;
      lVar4 = FUN_144bdc480(uVar3,"Cannot find native type for \'{}\'.",local_248 + 1,0);
      *(undefined8 *)(lVar4 + 0x40) = 1000;
    }
    else {
      plVar8 = (longlong *)FUN_144befe50(uVar5,0x400000);
      if ((plVar8 == (longlong *)0x0) || (*plVar8 == 0)) {
        puVar9 = (ulonglong *)FUN_144befe50(uVar5,0x40);
        if (puVar9 != (ulonglong *)0x0) {
          uVar6 = *puVar9;
        }
        if (uVar6 == 0) {
          if ((DAT_14c7990e8 < 3) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144f78070;
          cVar2 = FUN_144bdbf80();
          if (cVar2 == '\0') {
            uVar3 = FUN_144bdc640(local_1d0);
            local_248[1] = 1;
            local_238 = FUN_144bf0db0;
            local_230 = local_248;
            lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' cannot be constructed for cloning.",
                                  local_248 + 1,0);
            *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
            *(undefined8 *)(lVar4 + 0x40) = 0x3f2;
            FUN_144bdc690(local_1d0);
            *param_2 = 0x80040200;
            return param_2;
          }
          uVar3 = FUN_144bdc810(local_180,&DAT_14c799098,3);
          local_248[1] = 1;
          local_238 = FUN_144bf0db0;
          local_230 = local_248;
          lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' cannot be constructed for cloning.",local_248 + 1
                                ,0);
          *(undefined8 *)(lVar4 + 0x40) = 0x3f2;
          goto LAB_144f7805c;
        }
      }
      pbVar10 = (byte *)FUN_144b45d50(local_248[0],&local_res20);
      if ((*pbVar10 & 3) == 0) {
        puVar9 = (ulonglong *)FUN_144f69260(local_248 + 1,param_4,local_248[0]);
        uVar6 = *puVar9;
        uVar5 = puVar9[2];
        uVar1 = puVar9[1];
        puVar9[2] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        *param_3 = uVar6;
        param_3[1] = uVar1;
        uVar6 = param_3[2];
        param_3[2] = uVar5;
        if ((uVar6 & 1) != 0) {
          FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
        }
        if (((ulonglong)local_230 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_230 & 0xfffffffffffffffe);
        }
        if (*param_3 != 0) {
          iVar11 = (int)param_1[2] + 1;
          if ((int)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) < iVar11) {
            FUN_144c00810(param_1 + 1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
          }
          puVar9 = (ulonglong *)(param_1[1] + (longlong)(int)param_1[2] * 0x18);
          if (puVar9 != (ulonglong *)0x0) {
            *puVar9 = *param_3;
            puVar9[1] = param_3[1];
            uVar6 = param_3[2];
            puVar9[2] = uVar6;
            if ((uVar6 & 1) != 0) {
              FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
            }
          }
          *(int *)(param_1 + 2) = iVar11;
LAB_144f780d8:
          *param_2 = 0;
          return param_2;
        }
        if ((DAT_14c7990e8 < 3) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144f78070;
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          uVar3 = FUN_144bdc640(local_1d0);
          local_248[1] = 1;
          local_238 = FUN_144bf0db0;
          local_230 = local_248;
          lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' cannot be allocated for cloning.",local_248 + 1,0
                               );
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x403;
          FUN_144bdc690(local_1d0);
          *param_2 = 0x80040200;
          return param_2;
        }
        uVar3 = FUN_144bdc810(local_180,&DAT_14c799098,3);
        local_248[1] = 1;
        local_238 = FUN_144bf0db0;
        local_230 = local_248;
        lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' cannot be allocated for cloning.",local_248 + 1,0);
        *(undefined8 *)(lVar4 + 0x40) = 0x403;
      }
      else {
        if ((DAT_14c7990e8 < 3) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144f78070;
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          uVar3 = FUN_144bdc640(local_1d0);
          local_248[1] = 1;
          local_238 = FUN_144bf0db0;
          local_230 = local_248;
          lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' is not serializable.",local_248 + 1,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x3fa;
          FUN_144bdc690(local_1d0);
          *param_2 = 0x80040200;
          return param_2;
        }
        uVar3 = FUN_144bdc810(local_180,&DAT_14c799098,3);
        local_248[1] = 1;
        local_238 = FUN_144bf0db0;
        local_230 = local_248;
        lVar4 = FUN_144bdc480(uVar3,"Type \'{}\' is not serializable.",local_248 + 1,0);
        *(undefined8 *)(lVar4 + 0x40) = 0x3fa;
      }
    }
  }
  else {
    puVar12 = &DAT_14c6dc530;
    cVar2 = FUN_144f6a410(param_4[1],&DAT_14c6dc530);
    if (cVar2 == '\0') goto LAB_144f77bfc;
    local_1f0 = *param_4;
    if (local_1f0 == 0) goto LAB_144f77c01;
    FUN_144bf04a0(local_248);
    if (local_248[0] < 2) {
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1,local_1f0);
      if (uVar6 != 0) {
        puVar7 = (uint *)FUN_144bef800(uVar6,&local_res20);
        puVar12 = (undefined *)FUN_144beffb0(*puVar7 & 0x1f);
LAB_144f77bbe:
        uVar5 = FUN_144befdb0(puVar12);
        if ((uVar5 & 1) != 0) {
          FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
        }
        *param_3 = uVar6;
        param_3[1] = (ulonglong)puVar12;
        uVar6 = param_3[2];
        param_3[2] = uVar5;
        if ((uVar6 & 1) != 0) {
          FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
        }
        goto LAB_144f780d8;
      }
      if ((DAT_14c7990e8 < 3) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144f78070;
      cVar2 = FUN_144bdbf80();
      if (cVar2 == '\0') {
        uVar3 = FUN_144bdc640(local_1d0);
        local_248[1] = 1;
        local_238 = FUN_144bf0db0;
        local_230 = &local_1f0;
        lVar4 = FUN_144bdc480(uVar3,"Cannot find native type for \'{}\'.",local_248 + 1,0);
        *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0x3da;
        FUN_144bdc690(local_1d0);
        *param_2 = 0x80040200;
        return param_2;
      }
      uVar3 = FUN_144bdc810(local_180,&DAT_14c799098,3);
      local_248[1] = 1;
      local_238 = FUN_144bf0db0;
      local_230 = &local_1f0;
      lVar4 = FUN_144bdc480(uVar3,"Cannot find native type for \'{}\'.",local_248 + 1,0);
      *(undefined8 *)(lVar4 + 0x40) = 0x3da;
    }
    else {
      uVar5 = uVar6;
      if (local_248[0] != 0) {
        uVar5 = FUN_144bef220();
      }
      local_1e8 = (**(code **)(*param_1 + 0x20))(param_1,uVar5);
      if (local_1e8 == 0) {
        if ((DAT_14c7990e8 < 3) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144f78070;
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          if (local_248[0] != 0) {
            uVar6 = FUN_144bef220();
          }
          local_res20 = uVar6;
          uVar3 = FUN_144bdc640(local_1d0,&DAT_14c799098,3);
          local_248[1] = 2;
          local_238 = FUN_144bf0db0;
          local_230 = &local_res20;
          local_228 = FUN_144f82080;
          local_220 = local_248;
          lVar4 = FUN_144bdc480(uVar3,"Cannot find native type for \'{}\' (context of \'{}\').",
                                local_248 + 1,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x3c6;
          FUN_144bdc690(local_1d0);
          *param_2 = 0x80040200;
          return param_2;
        }
        if (local_248[0] != 0) {
          uVar6 = FUN_144bef220();
        }
        local_1e0 = uVar6;
        uVar3 = FUN_144bdc810(local_180,&DAT_14c799098,3);
        local_248[1] = 2;
        local_238 = FUN_144bf0db0;
        local_230 = &local_1e0;
        local_228 = FUN_144f82080;
        local_220 = local_248;
        lVar4 = FUN_144bdc480(uVar3,"Cannot find native type for \'{}\' (context of \'{}\').",
                              local_248 + 1,0);
        *(undefined8 *)(lVar4 + 0x40) = 0x3c6;
      }
      else {
        uVar3 = FUN_144bf0530(local_248);
        FUN_144bef280(local_1e8,&local_1d8,uVar3,0);
        if (1 < local_1d8) {
          uVar6 = local_1d8;
          if (local_1d8 != 0) {
            puVar7 = (uint *)FUN_144bef800(local_1d8,&local_res20);
            puVar12 = (undefined *)FUN_144beffb0(*puVar7 & 0x1f);
          }
          goto LAB_144f77bbe;
        }
        if ((DAT_14c7990e8 < 3) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144f78070;
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          local_res20 = FUN_144bf0530(local_248);
          uVar3 = FUN_144bdc640(local_1d0,&DAT_14c799098,3);
          local_248[1] = 2;
          local_238 = FUN_144f50c70;
          local_230 = &local_res20;
          local_228 = FUN_144bf0db0;
          local_220 = &local_1e8;
          lVar4 = FUN_144bdc480(uVar3,"Cannot find decl \'{}\' in type \'{}\'.",local_248 + 1,0);
          *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar4 + 0x40) = 0x3cd;
          FUN_144bdc690(local_1d0);
          *param_2 = 0x80040200;
          return param_2;
        }
        local_1e0 = FUN_144bf0530(local_248);
        uVar3 = FUN_144bdc810(local_180,&DAT_14c799098,3);
        local_248[1] = 2;
        local_238 = FUN_144f50c70;
        local_230 = &local_1e0;
        local_228 = FUN_144bf0db0;
        local_220 = &local_1e8;
        lVar4 = FUN_144bdc480(uVar3,"Cannot find decl \'{}\' in type \'{}\'.",local_248 + 1,0);
        *(undefined8 *)(lVar4 + 0x40) = 0x3cd;
      }
    }
  }
LAB_144f7805c:
  *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_144bdc8a0(local_180);
LAB_144f78070:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f78100 FUN_144f78100 body=1398 status=ok
// SIG undefined FUN_144f78100(void)

int * FUN_144f78100(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  int local_res18 [2];
  longlong local_res20;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 local_238;
  code *pcStack_230;
  longlong *local_228;
  ulonglong local_220;
  undefined8 local_218;
  longlong lStack_210;
  ulonglong local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  FUN_144bf0690(&local_1e8,param_3[1]);
  if ((local_1e8 < 2) ||
     (puVar5 = (uint *)FUN_144bf04d0(&local_1e8,&local_res20), (*puVar5 >> 6 & 1) == 0)) {
    uVar8 = *param_3;
    lVar9 = param_3[1];
    uVar7 = param_3[2];
  }
  else {
    lVar1 = *(longlong *)(param_3[1] + 8);
    puVar6 = (undefined4 *)FUN_144bef800(lVar1,&local_res20);
    uVar8 = *param_3;
    lVar9 = 0;
    if (((byte)*puVar6 & 0x1f) == 8) {
      lVar9 = lVar1;
    }
    if (lVar9 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_144befdb0(lVar9);
    }
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  puVar11 = &local_218;
  local_218 = 0;
  lStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_4[2] & 0xfffffffffffffffe),local_res18,*param_4,param_4[1],puVar11);
  uVar13 = (undefined4)((ulonglong)puVar11 >> 0x20);
  if (local_res18[0] < 0) {
    if ((1 < DAT_14c7990e8) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar8 = FUN_144bdc640(local_1e0);
        local_res20 = 0;
        lVar9 = FUN_144bdc480(uVar8,"Could not get value from bundle array",&local_res20,0);
        *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x443;
        FUN_144bdc690(local_1e0);
        *param_2 = local_res18[0];
        goto LAB_144f78631;
      }
      uVar8 = FUN_144bdc810(local_190,&DAT_14c799098,2);
      local_res20 = 0;
      lVar9 = FUN_144bdc480(uVar8,"Could not get value from bundle array",&local_res20,0);
      *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar9 + 0x40) = 0x443;
      FUN_144bdc8a0(local_190);
    }
    *param_2 = local_res18[0];
  }
  else {
    local_1f8 = lStack_210;
    FUN_144beff00(param_3[1],&local_res20);
    lVar1 = local_res20;
    local_1f0 = local_res20;
    if (((local_res20 != 0) || (local_1f8 == 0)) ||
       (local_1f0 = (**(code **)(*param_1 + 0x20))(param_1,local_1f8), local_1f0 != 0)) {
      uVar12 = local_208;
      iVar4 = (int)local_208;
      if ((lVar1 == 0) && (local_1f8 != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (((int)local_208 != 0) || (bVar2)) {
        pbVar10 = (byte *)FUN_144b45d50(local_1f0,&local_res20);
        if ((*pbVar10 & 3) != 0) {
          if ((1 < DAT_14c7990e8) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
            cVar3 = FUN_144bdbf80();
            if (cVar3 != '\0') {
              uVar8 = FUN_144bdc810(local_190,&DAT_14c799098,2);
              local_238 = 1;
              pcStack_230 = FUN_144bf0db0;
              local_228 = &local_1f0;
              lVar9 = FUN_144bdc480(uVar8,"Element type \'{}\' is not (de)serializable.",&local_238,
                                    0);
              *(undefined8 *)(lVar9 + 0x40) = 0x463;
              goto LAB_144f7840e;
            }
            uVar8 = FUN_144bdc640(local_1e0);
            local_238 = 1;
            pcStack_230 = FUN_144bf0db0;
            local_228 = &local_1f0;
            lVar9 = FUN_144bdc480(uVar8,"Element type \'{}\' is not (de)serializable.",&local_238,0)
            ;
            *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
            *(undefined8 *)(lVar9 + 0x40) = 0x463;
            FUN_144bdc690(local_1e0);
            *param_2 = -0x7ffbfe00;
            goto LAB_144f78631;
          }
          goto LAB_144f78422;
        }
        iVar4 = (**(code **)(*(longlong *)(uVar7 & 0xfffffffffffffffe) + 0x60))
                          ((longlong *)(uVar7 & 0xfffffffffffffffe),uVar8,lVar9,local_1f0,
                           CONCAT44(uVar13,iVar4));
        if (iVar4 != 1) {
          if (iVar4 != 2) goto LAB_144f7862e;
          uVar12 = uVar12 & 0xffffffff;
          goto LAB_144f784be;
        }
        *param_2 = -0x7ffbfe00;
      }
      else {
        local_238 = 0;
        pcStack_230 = (code *)0x0;
        local_228 = (longlong *)0x0;
        local_220 = 0;
        (**(code **)(*(longlong *)(uVar7 & 0xfffffffffffffffe) + 0x48))
                  ((longlong *)(uVar7 & 0xfffffffffffffffe),&local_res20,uVar8,lVar9,&local_238);
        iVar4 = (int)local_228;
        if ((local_220 & 1) != 0) {
          FUN_144be6b30(local_220 & 0xfffffffffffffffe);
        }
        if (iVar4 < 1) {
LAB_144f7862e:
          *param_2 = 0;
          goto LAB_144f78631;
        }
        uVar12 = 0;
LAB_144f784be:
        (**(code **)(*(longlong *)(uVar7 & 0xfffffffffffffffe) + 0x50))
                  ((longlong *)(uVar7 & 0xfffffffffffffffe),param_2,uVar8,lVar9,uVar12);
      }
      if ((local_200 & 1) != 0) {
        FUN_144be6b30(local_200 & 0xfffffffffffffffe);
      }
      goto joined_r0x000144f784e9;
    }
    if ((1 < DAT_14c7990e8) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar8 = FUN_144bdc640(local_1e0);
        local_238 = 1;
        pcStack_230 = FUN_144bf0db0;
        local_228 = &local_1f8;
        lVar9 = FUN_144bdc480(uVar8,"Could not get native Type for element type {}",&local_238,0);
        *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x450;
        FUN_144bdc690(local_1e0);
        *param_2 = -0x7ffbfe00;
        goto LAB_144f78631;
      }
      uVar8 = FUN_144bdc810(local_190,&DAT_14c799098,2);
      local_238 = 1;
      pcStack_230 = FUN_144bf0db0;
      local_228 = &local_1f8;
      lVar9 = FUN_144bdc480(uVar8,"Could not get native Type for element type {}",&local_238,0);
      *(undefined8 *)(lVar9 + 0x40) = 0x450;
LAB_144f7840e:
      *(char **)(lVar9 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      FUN_144bdc8a0(local_190);
    }
LAB_144f78422:
    *param_2 = -0x7ffbfe00;
  }
LAB_144f78631:
  if ((local_200 & 1) != 0) {
    FUN_144be6b30(local_200 & 0xfffffffffffffffe);
  }
joined_r0x000144f784e9:
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144f78680 FUN_144f78680 body=122 status=ok
// SIG undefined FUN_144f78680(void)

void FUN_144f78680(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = lVar1 + (longlong)*(int *)(param_1 + 0x10) * 0x18;
  if (lVar3 == lVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  do {
    lVar2 = lVar3 + -0x18;
    if ((*(byte *)(lVar3 + -8) & 1) != 0) {
      FUN_144be6b30(*(ulonglong *)(lVar3 + -8) & 0xfffffffffffffffe);
    }
    lVar3 = lVar2;
  } while (lVar2 != lVar1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 144f78700 FUN_144f78700 body=11 status=ok
// SIG undefined FUN_144f78700(void)

void FUN_144f78700(longlong param_1,undefined4 *param_2)

{
  FUN_144f774a0(param_1 + 8,*param_2);
  return;
}



// FUNCTION 144f78710 FUN_144f78710 body=111 status=ok
// SIG undefined FUN_144f78710(void)

undefined8 * FUN_144f78710(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::CloneOnHeap::vftable;
  FUN_144f77400(param_1 + 1);
  *param_1 = hkReflect::ClonerCallback::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f78780 FUN_144f78780 body=203 status=ok
// SIG undefined FUN_144f78780(void)

undefined4 *
FUN_144f78780(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x288);
  iVar4 = (int)plVar1[1] + 1;
  if ((int)(*(uint *)((longlong)plVar1 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_144f81b20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar3 = (undefined8 *)((longlong)(int)plVar1[1] * 0x30 + *plVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *param_3;
    puVar3[1] = param_3[1];
    uVar2 = param_3[2];
    puVar3[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
    puVar3[3] = *param_4;
    puVar3[4] = param_4[1];
    uVar2 = param_4[2];
    puVar3[5] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
  }
  *(int *)(plVar1 + 1) = iVar4;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f78850 FUN_144f78850 body=482 status=ok
// SIG undefined FUN_144f78850(void)

undefined4 *
FUN_144f78850(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,int param_5,
             int param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_res18;
  longlong local_res20;
  
  uVar9 = param_3[2];
  local_res18 = *param_3;
  lVar1 = param_3[1];
  if ((uVar9 & 1) != 0) {
    FUN_144be6b20(uVar9 & 0xfffffffffffffffe);
  }
  local_res20 = *param_4;
  lVar2 = param_4[1];
  uVar10 = param_4[2];
  if ((uVar10 & 1) != 0) {
    FUN_144be6b20(uVar10 & 0xfffffffffffffffe);
  }
  if (0 < (int)param_7) {
    uVar7 = (ulonglong)param_7;
    uVar4 = uVar10;
    uVar5 = uVar9;
    do {
      plVar3 = *(longlong **)(param_1 + 0x290);
      iVar6 = (int)plVar3[1] + 1;
      if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar6) {
        FUN_144f81ce0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      plVar8 = (longlong *)((longlong)(int)plVar3[1] * 0x30 + *plVar3);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = local_res18;
        plVar8[1] = lVar1;
        plVar8[2] = uVar5;
        if ((uVar5 & 1) != 0) {
          FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
        }
        plVar8[3] = local_res20;
        plVar8[4] = lVar2;
        plVar8[5] = uVar4;
        if ((uVar4 & 1) != 0) {
          FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
        }
      }
      local_res18 = local_res18 + param_5;
      uVar9 = uVar5 & 0xfffffffffffffffe;
      *(int *)(plVar3 + 1) = iVar6;
      if ((uVar5 & 1) != 0) {
        FUN_144be6b30(uVar9);
      }
      local_res20 = local_res20 + param_6;
      uVar10 = uVar4 & 0xfffffffffffffffe;
      if ((uVar4 & 1) != 0) {
        FUN_144be6b30(uVar10);
      }
      uVar7 = uVar7 - 1;
      uVar4 = uVar10;
      uVar5 = uVar9;
    } while (uVar7 != 0);
  }
  *param_2 = 0;
  if ((uVar10 & 1) != 0) {
    FUN_144be6b30(uVar10 & 0xfffffffffffffffe);
  }
  if ((uVar9 & 1) != 0) {
    FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144f78a40 FUN_144f78a40 body=203 status=ok
// SIG undefined FUN_144f78a40(void)

undefined4 *
FUN_144f78a40(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x288);
  iVar4 = (int)plVar1[1] + 1;
  if ((int)(*(uint *)((longlong)plVar1 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_144f81b20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar3 = (undefined8 *)((longlong)(int)plVar1[1] * 0x30 + *plVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = *param_3;
    puVar3[1] = param_3[1];
    uVar2 = param_3[2];
    puVar3[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
    puVar3[3] = *param_4;
    puVar3[4] = param_4[1];
    uVar2 = param_4[2];
    puVar3[5] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
  }
  *(int *)(plVar1 + 1) = iVar4;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f78b10 FUN_144f78b10 body=123 status=ok
// SIG undefined FUN_144f78b10(void)

longlong FUN_144f78b10(longlong param_1)

{
  FUN_144f68560();
  *(code **)(param_1 + 0xb0) = FUN_144f686b0;
  *(code **)(param_1 + 0x130) = FUN_144f687b0;
  *(code **)(param_1 + 0xb8) = FUN_144f68730;
  *(code **)(param_1 + 0x178) = FUN_144f68aa0;
  *(code **)(param_1 + 0x148) = FUN_144f688c0;
  *(code **)(param_1 + 0x188) = FUN_144f68b20;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  return param_1;
}



// FUNCTION 144f78b90 FUN_144f78b90 body=380 status=ok
// SIG undefined FUN_144f78b90(void)

void FUN_144f78b90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined1 local_res8 [8];
  
  puVar1 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_res8);
  switch(*puVar1 & 0x1f) {
  case 0:
    FUN_144f7fbf0(param_1,param_2,param_3);
    return;
  case 1:
    FUN_144f7ff50(param_1,param_2,param_3);
    return;
  case 2:
    FUN_144f802b0(param_1,param_2,param_3);
    return;
  case 3:
    FUN_144f80580(param_1,param_2,param_3);
    return;
  case 4:
    FUN_144f80910(param_1,param_2,param_3);
    return;
  case 5:
    FUN_144f80be0(param_1,param_2,param_3);
    return;
  case 6:
    FUN_144f80eb0(param_1,param_2,param_3);
    return;
  case 7:
    FUN_144f811f0(param_1,param_2,param_3);
    return;
  case 8:
    FUN_144f814b0(param_1,param_2,param_3);
    return;
  default:
    FUN_144bfc170(0x261011c5,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x3c,"Bad var visitor switch");
    return;
  }
}



// FUNCTION 144f78d30 FUN_144f78d30 body=386 status=ok
// SIG undefined FUN_144f78d30(void)

undefined8 * FUN_144f78d30(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  uVar3 = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = FUN_144b3d480();
  param_1[4] = uVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  FUN_144f99f90(param_1 + 0xb);
  FUN_144f9d9d0(param_1 + 0xb);
  local_res8 = 8;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"IntAndFloatConversionPass");
  }
  uVar1 = uVar3;
  if (lVar2 != 0) {
    uVar1 = FUN_144f9e700(lVar2);
  }
  FUN_144f9a380(param_1 + 0xb,uVar1);
  local_res8 = 8;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"GenerateConvertNumericKindPass");
  }
  uVar1 = uVar3;
  if (lVar2 != 0) {
    uVar1 = FUN_144f9eef0(lVar2);
  }
  FUN_144f9a380(param_1 + 0xb,uVar1);
  local_res8 = 8;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"CheckTypeKindsPass");
  }
  if (lVar2 != 0) {
    uVar3 = FUN_144f9e990(lVar2);
  }
  FUN_144f9a380(param_1 + 0xb,uVar3);
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  return param_1;
}



// FUNCTION 144f78ec0 FUN_144f78ec0 body=269 status=ok
// SIG undefined FUN_144f78ec0(void)

void FUN_144f78ec0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  FUN_144f9a010(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x48),
               (ulonglong)(*(uint *)(param_1 + 0x54) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  puVar3 = *(ulonglong **)(param_1 + 0x38);
  if (puVar3 + (longlong)*(int *)(param_1 + 0x40) * 6 != puVar3) {
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x40) * 6 + 2;
    do {
      puVar1 = puVar4 + -6;
      if ((puVar4[-3] & 1) != 0) {
        FUN_144be6b30(puVar4[-3] & 0xfffffffffffffffe);
      }
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar2 = puVar4 + -8;
      puVar4 = puVar1;
    } while (puVar2 != puVar3);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x38),
               (ulonglong)(*(uint *)(param_1 + 0x44) & 0x7fffffff) * 0x30);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  FUN_144f7cd30(param_1 + 0x10);
  return;
}



// FUNCTION 144f78fd0 FUN_144f78fd0 body=3351 status=ok
// SIG undefined FUN_144f78fd0(void)

void FUN_144f78fd0(undefined8 *param_1,ulonglong *param_2,code **param_3,longlong *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  void *pvVar9;
  byte bVar10;
  char cVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong *puVar21;
  longlong lVar22;
  ulonglong *puVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  ulonglong *local_res10;
  code **local_res18;
  longlong *local_res20;
  ulonglong *local_378;
  code *pcStack_370;
  code **local_368;
  ulonglong *local_358;
  undefined8 uStack_350;
  uint local_348;
  ulonglong local_340;
  code *pcStack_338;
  char **local_330;
  code *pcStack_328;
  ulonglong *local_320;
  code *pcStack_318;
  code **local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  code **local_2f8;
  ulonglong *local_2f0;
  int local_2e8;
  uint local_2e4;
  longlong local_2e0;
  longlong lStack_2d8;
  int local_2d0;
  uint local_2cc;
  undefined4 local_2c8;
  char *local_2b8;
  char *pcStack_2b0;
  undefined1 local_2a8 [8];
  longlong local_2a0;
  char *local_298;
  ulonglong local_290;
  ulonglong local_288;
  ulonglong local_280;
  code *local_278;
  code *local_270;
  code *local_268;
  undefined8 local_260;
  code *pcStack_258;
  char **local_250;
  code *pcStack_248;
  ulonglong *local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  code **local_230;
  undefined1 local_228 [80];
  undefined1 local_1d8 [56];
  undefined1 local_1a0 [352];
  
  bVar8 = false;
  bVar7 = false;
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar11 = *(char *)(lVar22 + 0x114);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (cVar11 == '\0') {
    __dyn_tls_on_demand_init();
    cVar11 = *(char *)(lVar22 + 0x114);
  }
  lVar12 = *(longlong *)(lVar22 + 0xf0);
  if (lVar12 == 0) {
    if (cVar11 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar12;
  }
  local_2a0 = *(longlong *)(lVar12 + 0x3e0);
  local_358 = (ulonglong *)0x149c11110;
  uStack_350 = (code *)0x149c11117;
  local_2b8 = "LtReflect.Clone";
  pcStack_2b0 = "";
  if (local_2a0 != 0) {
    local_378 = (ulonglong *)0x149c11110;
    pcStack_370 = (code *)0x149c11117;
    local_358 = (ulonglong *)0x149c11118;
    uStack_350 = (code *)0x149c11127;
    FUN_144be9870(local_2a0,&local_358,&local_378);
  }
  local_280 = param_2[2];
  local_298 = "clone dst={} src={}";
  local_290 = *param_2;
  local_288 = param_2[1];
  if ((local_280 & 1) != 0) {
    FUN_144be6b20(local_280 & 0xfffffffffffffffe);
  }
  local_278 = *param_3;
  local_268 = param_3[2];
  local_270 = param_3[1];
  if (((ulonglong)local_268 & 1) != 0) {
    FUN_144be6b20((ulonglong)local_268 & 0xfffffffffffffffe);
  }
  local_340 = 3;
  pcStack_328 = FUN_144c00d90;
  pcStack_338 = FUN_144f50c70;
  local_330 = &local_298;
  local_320 = &local_290;
  local_310 = &local_278;
  pcStack_318 = FUN_144c00d90;
  local_260 = 3;
  pcStack_258 = FUN_144f50c70;
  pcStack_248 = FUN_144c00d90;
  uStack_238 = 0x44c00d90;
  uStack_234 = 1;
  local_250 = local_330;
  local_230 = local_310;
  local_240 = local_320;
  bVar10 = FUN_144bdbf80();
  FUN_144bdca80(local_1d8,&DAT_14c799098,&local_260,"Reflect\\Util\\hkReflectClone.cpp",200,
                bVar10 ^ 1,0);
  local_2b8 = (char *)param_1[6];
  local_2f0 = (ulonglong *)0x0;
  local_2e8 = 0;
  local_2e4 = 0x80000000;
  local_2d0 = 0;
  local_2cc = 0x80000000;
  local_2c8 = 0;
  local_2e0 = 0;
  lStack_2d8 = 0;
  if (local_2b8 == (char *)0x0) {
    param_1[6] = &local_2f0;
  }
  (**(code **)(*param_4 + 0x28))(param_4,param_1 + 2);
  *param_1 = param_4;
  cVar11 = *(char *)(lVar22 + 0x114);
  local_358 = (ulonglong *)0x149c11140;
  uStack_350 = (code *)0x149c11147;
  if (cVar11 == '\0') {
    __dyn_tls_on_demand_init();
    cVar11 = *(char *)(lVar22 + 0x114);
  }
  lVar12 = *(longlong *)(lVar22 + 0xf0);
  if (lVar12 == 0) {
    if (cVar11 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar12;
  }
  if (*(longlong *)(lVar12 + 0x3e0) != 0) {
    local_378 = local_358;
    pcStack_370 = uStack_350;
    FUN_144be99f0(*(longlong *)(lVar12 + 0x3e0),&local_378);
  }
  local_358 = (ulonglong *)0x0;
  uStack_350 = (code *)0x8000000000000000;
  FUN_144f81b20(&local_358,&PTR_vftable_14c6e47a0,1);
  puVar23 = local_358;
  puVar21 = local_res10;
  puVar14 = local_358 + (longlong)(int)uStack_350 * 6;
  if (puVar14 != (ulonglong *)0x0) {
    *puVar14 = *local_res10;
    puVar14[1] = local_res10[1];
    uVar19 = local_res10[2];
    puVar14[2] = uVar19;
    if ((uVar19 & 1) != 0) {
      FUN_144be6b20(uVar19 & 0xfffffffffffffffe);
    }
    puVar14[3] = (ulonglong)*param_3;
    puVar14[4] = (ulonglong)param_3[1];
    pcVar5 = param_3[2];
    puVar14[5] = (ulonglong)pcVar5;
    if (((ulonglong)pcVar5 & 1) != 0) {
      FUN_144be6b20((ulonglong)pcVar5 & 0xfffffffffffffffe);
    }
  }
  iVar20 = *(int *)(param_1 + 8) + 1;
  uStack_350 = (code *)CONCAT44(uStack_350._4_4_,1);
  if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < iVar20) {
    FUN_144f81b20(param_1 + 7,&PTR_vftable_14c6e47a0,(longlong)iVar20);
  }
  puVar17 = (undefined8 *)((longlong)*(int *)(param_1 + 8) * 0x30 + param_1[7]);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
  }
  *(int *)(param_1 + 8) = iVar20;
  FUN_144f7c0b0(param_1,puVar21,local_res18,1);
  local_348 = 1;
  iVar20 = *(int *)(param_1 + 8);
  iVar25 = 1;
  while ((iVar20 != 0 && (puVar21 = local_res10, -1 < *(int *)(param_1 + 1)))) {
    lVar22 = param_1[7];
    lVar12 = (longlong)*(int *)(param_1 + 8);
    local_340 = *(ulonglong *)(lVar22 + -0x30 + lVar12 * 0x30);
    pcStack_338 = *(code **)(lVar22 + -0x28 + lVar12 * 0x30);
    local_330 = *(char ***)(lVar22 + -0x20 + lVar12 * 0x30);
    if (((ulonglong)local_330 & 1) != 0) {
      FUN_144be6b20((ulonglong)local_330 & 0xfffffffffffffffe);
    }
    pcStack_328 = *(code **)(lVar22 + -0x18 + lVar12 * 0x30);
    local_320 = *(ulonglong **)(lVar22 + -0x10 + lVar12 * 0x30);
    pcStack_318 = *(code **)(lVar22 + -8 + lVar12 * 0x30);
    if (((ulonglong)pcStack_318 & 1) != 0) {
      FUN_144be6b20((ulonglong)pcStack_318 & 0xfffffffffffffffe);
    }
    puVar21 = (ulonglong *)((longlong)*(int *)(param_1 + 8) * 0x30 + param_1[7]);
    if (puVar21 != puVar21 + -6) {
      puVar14 = puVar21 + 2;
      do {
        puVar18 = puVar14 + -6;
        if ((puVar14[-3] & 1) != 0) {
          FUN_144be6b30(puVar14[-3] & 0xfffffffffffffffe);
        }
        if ((*puVar18 & 1) != 0) {
          FUN_144be6b30(*puVar18 & 0xfffffffffffffffe);
        }
        puVar1 = puVar14 + -8;
        puVar14 = puVar18;
      } while (puVar1 != puVar21 + -6);
    }
    puVar21 = local_320;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    if (pcStack_328 == (code *)0x0) {
      puVar21 = puVar23 + (longlong)iVar25 * 6;
      if (puVar21 != puVar21 + -6) {
        puVar14 = puVar21 + 2;
        do {
          puVar18 = puVar14 + -6;
          if ((puVar14[-3] & 1) != 0) {
            FUN_144be6b30(puVar14[-3] & 0xfffffffffffffffe);
          }
          if ((*puVar18 & 1) != 0) {
            FUN_144be6b30(*puVar18 & 0xfffffffffffffffe);
          }
          puVar1 = puVar14 + -8;
          puVar14 = puVar18;
        } while (puVar1 != puVar21 + -6);
      }
      iVar26 = iVar25 + -1;
      uStack_350 = (code *)CONCAT44(uStack_350._4_4_,iVar26);
    }
    else {
      local_348 = local_348 + 1;
      puVar13 = (undefined4 *)FUN_144bef800(local_320,local_2a8);
      puVar14 = (ulonglong *)0x0;
      puVar18 = puVar14;
      if (((byte)*puVar13 & 0x1f) == 8) {
        puVar18 = puVar21;
      }
      if (puVar18 != (ulonglong *)0x0) {
        puVar21 = (ulonglong *)FUN_144befe50(puVar18,1);
        if (puVar21 != (ulonglong *)0x0) {
          puVar14 = (ulonglong *)*puVar21;
        }
        if ((int)((ulonglong)puVar14 >> 8) == 0) {
          for (puVar21 = puVar23 + (longlong)iVar25 * 6; puVar21 != puVar23; puVar21 = puVar21 + -6)
          {
            if (((pcStack_328 == (code *)0x0) && (puVar21[-3] == 0)) ||
               ((pcStack_328 == (code *)puVar21[-3] && (local_320 == (ulonglong *)puVar21[-2])))) {
              if (DAT_14c7990e8 == 0) {
                cVar11 = FUN_144bdbf80();
                if (cVar11 != '\0') goto LAB_144f794eb;
              }
              else {
LAB_144f794eb:
                cVar11 = FUN_144bdbf80();
                if (cVar11 == '\0') {
                  bVar8 = true;
                  uVar16 = FUN_144bdc640(local_228);
                }
                else {
                  bVar7 = true;
                  uVar16 = FUN_144bdc810(local_1a0,&DAT_14c799098,1);
                }
                local_378 = (ulonglong *)0x1;
                pcStack_370 = FUN_144c00d90;
                local_368 = &pcStack_328;
                local_308 = 1;
                uStack_304 = 0;
                uStack_300 = 0x44c00d90;
                uStack_2fc = 1;
                local_2f8 = local_368;
                lVar22 = FUN_144bdc480(uVar16,"Found loop through array {}",&local_308,0);
                *(undefined8 *)(lVar22 + 0x40) = 0xf5;
                *(char **)(lVar22 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
                if (bVar7) {
                  bVar7 = false;
                  FUN_144bdc8a0(local_1a0);
                }
                if (bVar8) {
                  bVar8 = false;
                  FUN_144bdc690(local_228);
                }
              }
              *(undefined4 *)(param_1 + 1) = 0x80040200;
              break;
            }
          }
        }
      }
      iVar26 = iVar25 + 1;
      if ((int)(uStack_350._4_4_ & 0x7fffffff) < iVar26) {
        FUN_144f81b20(&local_358,&PTR_vftable_14c6e47a0,(longlong)iVar26);
        puVar23 = local_358;
        iVar25 = (int)uStack_350;
      }
      puVar21 = puVar23 + (longlong)iVar25 * 6;
      if (puVar21 != (ulonglong *)0x0) {
        *puVar21 = local_340;
        puVar21[1] = (ulonglong)pcStack_338;
        puVar21[2] = (ulonglong)local_330;
        if (((ulonglong)local_330 & 1) != 0) {
          FUN_144be6b20((ulonglong)local_330 & 0xfffffffffffffffe);
        }
        puVar21[3] = (ulonglong)pcStack_328;
        puVar21[4] = (ulonglong)local_320;
        puVar21[5] = (ulonglong)pcStack_318;
        if (((ulonglong)pcStack_318 & 1) != 0) {
          FUN_144be6b20((ulonglong)pcStack_318 & 0xfffffffffffffffe);
        }
      }
      iVar20 = *(int *)(param_1 + 8) + 1;
      uStack_350 = (code *)CONCAT44(uStack_350._4_4_,iVar26);
      if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < iVar20) {
        FUN_144f81b20(param_1 + 7,&PTR_vftable_14c6e47a0,(longlong)iVar20);
      }
      puVar17 = (undefined8 *)((longlong)*(int *)(param_1 + 8) * 0x30 + param_1[7]);
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
      }
      *(int *)(param_1 + 8) = iVar20;
      FUN_144f7c0b0(param_1,&local_340,&pcStack_328);
    }
    if (((ulonglong)pcStack_318 & 1) != 0) {
      FUN_144be6b30((ulonglong)pcStack_318 & 0xfffffffffffffffe);
    }
    if (((ulonglong)local_330 & 1) != 0) {
      FUN_144be6b30((ulonglong)local_330 & 0xfffffffffffffffe);
    }
    iVar20 = *(int *)(param_1 + 8);
    iVar25 = iVar26;
    puVar21 = local_res10;
  }
  puVar14 = (ulonglong *)param_1[7];
  if (puVar14 + (longlong)*(int *)(param_1 + 8) * 6 != puVar14) {
    puVar18 = puVar14 + (longlong)*(int *)(param_1 + 8) * 6 + 2;
    do {
      puVar1 = puVar18 + -6;
      if ((puVar18[-3] & 1) != 0) {
        FUN_144be6b30(puVar18[-3] & 0xfffffffffffffffe);
      }
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar2 = puVar18 + -8;
      puVar18 = puVar1;
    } while (puVar2 != puVar14);
  }
  pvVar9 = ThreadLocalStoragePointer;
  uVar19 = (ulonglong)_tls_index;
  local_378 = (ulonglong *)0x149c11168;
  pcStack_370 = (code *)0x149c11173;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar22 = *(longlong *)((longlong)pvVar9 + uVar19 * 8);
  if (*(char *)(lVar22 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)(lVar22 + 0xf0);
  if (lVar12 == 0) {
    if (*(char *)(lVar22 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar12;
  }
  if (*(longlong *)(lVar12 + 0x3e0) != 0) {
    FUN_144be9c40(*(longlong *)(lVar12 + 0x3e0),&local_378,(float)local_348);
  }
  local_378 = (ulonglong *)0x149c11174;
  pcStack_370 = (code *)0x149c11179;
  if (*(char *)(lVar22 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)(lVar22 + 0xf0);
  if (lVar12 == 0) {
    if (*(char *)(lVar22 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar12;
  }
  if (*(longlong *)(lVar12 + 0x3e0) != 0) {
    FUN_144be99f0(*(longlong *)(lVar12 + 0x3e0),&local_378);
  }
  (**(code **)(*local_res20 + 0x30))(local_res20,param_1 + 1);
  if (*(int *)(param_1 + 1) < 0) {
    if (DAT_14c7990e8 < 2) {
      cVar11 = FUN_144bdbf80();
      if (cVar11 != '\0') goto LAB_144f79a10;
    }
    else {
LAB_144f79a10:
      cVar11 = FUN_144bdbf80();
      if (cVar11 != '\0') {
        uVar16 = FUN_144bdc810(local_1a0,&DAT_14c799098,2);
      }
      else {
        uVar16 = FUN_144bdc640(local_228);
      }
      local_378 = (ulonglong *)0x1;
      pcStack_370 = FUN_144c00d90;
      local_368 = local_res18;
      local_2f8 = local_res18;
      local_308 = 1;
      uStack_304 = 0;
      uStack_300 = 0x44c00d90;
      uStack_2fc = 1;
      lVar22 = FUN_144bdc480(uVar16,"Unable to clone object {} or one of its dependencies",
                             &local_308,0);
      *(undefined8 *)(lVar22 + 0x40) = 0x139;
      *(char **)(lVar22 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      if (cVar11 != '\0') {
        FUN_144bdc8a0(local_1a0);
      }
      else {
        FUN_144bdc690(local_228);
      }
    }
    *puVar21 = 0;
    puVar21[1] = 0;
    uVar19 = puVar21[2];
    puVar21[2] = 0;
    if ((uVar19 & 1) != 0) {
      FUN_144be6b30(uVar19 & 0xfffffffffffffffe);
    }
  }
  else if (*(int *)(param_1[6] + 0x28) == 0) {
    local_378 = (ulonglong *)0x149c11180;
    pcStack_370 = (code *)0x149c11191;
    if (*(char *)(lVar22 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = *(longlong *)(lVar22 + 0xf0);
    if (lVar12 == 0) {
      if (*(char *)(lVar22 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar12 = FUN_144b3f4a0();
      *(longlong *)(lVar22 + 0xf0) = lVar12;
    }
    if (*(longlong *)(lVar12 + 0x3e0) != 0) {
      FUN_144be99f0(*(longlong *)(lVar12 + 0x3e0),&local_378);
    }
    uVar19 = puVar21[1];
    uVar6 = *puVar21;
    if (uVar19 != 0) {
      cVar11 = FUN_144b45dd0(uVar19,&DAT_14c6dc390);
      if (cVar11 != '\0') {
        puVar15 = (uint *)FUN_144b45d50(uVar19,&local_res10);
        if (((*puVar15 >> 3 & 1) == 0) && (uVar6 != 0)) {
          lVar22 = param_1[6];
          FUN_144b3d910(uVar6);
          lVar12 = *(longlong *)(lVar22 + 0x10);
          *(ulonglong *)(lVar22 + 0x10) = uVar6;
          if (lVar12 != 0) {
            FUN_144b3f230();
          }
        }
      }
    }
    puVar24 = (undefined8 *)param_1[9];
    puVar17 = puVar24 + *(int *)(param_1 + 10);
    for (; puVar24 != puVar17; puVar24 = puVar24 + 1) {
      lVar22 = param_1[6];
      uVar16 = *puVar24;
      iVar20 = *(int *)(lVar22 + 0x20) + 1;
      if ((int)(*(uint *)(lVar22 + 0x24) & 0x7fffffff) < iVar20) {
        FUN_144f81ed0(lVar22 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar20);
      }
      puVar4 = (undefined8 *)(*(longlong *)(lVar22 + 0x18) + (longlong)*(int *)(lVar22 + 0x20) * 8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = uVar16;
      }
      *(int *)(lVar22 + 0x20) = iVar20;
    }
    if (local_2b8 == (char *)0x0) {
      FUN_144f76cc0(&local_2f0);
      param_1[6] = 0;
    }
    goto LAB_144f79af5;
  }
  if (local_2b8 == (char *)0x0) {
    param_1[6] = 0;
  }
LAB_144f79af5:
  *param_1 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (puVar23 + (longlong)(int)uStack_350 * 6 != puVar23) {
    puVar21 = puVar23 + (longlong)(int)uStack_350 * 6 + 2;
    do {
      puVar14 = puVar21 + -6;
      if ((puVar21[-3] & 1) != 0) {
        FUN_144be6b30(puVar21[-3] & 0xfffffffffffffffe);
      }
      if ((*puVar14 & 1) != 0) {
        FUN_144be6b30(*puVar14 & 0xfffffffffffffffe);
      }
      puVar18 = puVar21 + -8;
      puVar21 = puVar14;
    } while (puVar18 != puVar23);
  }
  if ((-1 < (longlong)uStack_350) && (puVar23 != (ulonglong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar23,(ulonglong)(uStack_350._4_4_ & 0x7fffffff) * 0x30);
  }
  lVar12 = lStack_2d8;
  lVar22 = lStack_2d8 + (longlong)local_2d0 * 8;
  while (lVar22 != lVar12) {
    plVar3 = (longlong *)(lVar22 + -8);
    lVar22 = lVar22 + -8;
    if (*plVar3 != 0) {
      FUN_144b3f230();
    }
  }
  local_2d0 = 0;
  if ((-1 < (int)local_2cc) && (lStack_2d8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lStack_2d8,(ulonglong)(local_2cc & 0x7fffffff) << 3);
  }
  lStack_2d8 = 0;
  local_2cc = 0x80000000;
  if (local_2e0 != 0) {
    FUN_144b3f230();
  }
  puVar21 = local_2f0;
  if (local_2f0 + (longlong)local_2e8 * 4 != local_2f0) {
    puVar23 = local_2f0 + (longlong)local_2e8 * 4 + 2;
    do {
      if ((puVar23[-4] & 1) != 0) {
        FUN_144be6b30(puVar23[-4] & 0xfffffffffffffffe);
      }
      puVar14 = puVar23 + -6;
      puVar23 = puVar23 + -4;
    } while (puVar14 != puVar21);
  }
  local_2e8 = 0;
  if ((-1 < (int)local_2e4) && (local_2f0 != (ulonglong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2f0,(ulonglong)(local_2e4 & 0x7fffffff) << 5);
  }
  local_2f0 = (ulonglong *)0x0;
  local_2e4 = 0x80000000;
  FUN_144bdcaf0(local_1d8);
  if (((ulonglong)local_268 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_268 & 0xfffffffffffffffe);
  }
  if ((local_280 & 1) != 0) {
    FUN_144be6b30(local_280 & 0xfffffffffffffffe);
  }
  if (local_2a0 != 0) {
    local_378 = (ulonglong *)&DAT_14999058c;
    pcStack_370 = (code *)&DAT_14999058e;
    FUN_144be9b20(local_2a0,&local_378);
  }
  return;
}



// FUNCTION 144f79cf0 FUN_144f79cf0 body=1971 status=ok
// SIG undefined FUN_144f79cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f79cf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  int iVar17;
  char *local_res18;
  char *local_res20;
  ulonglong local_10f8;
  code *pcStack_10f0;
  char **local_10e8;
  undefined4 local_10e0;
  undefined4 uStack_10dc;
  undefined4 uStack_10d8;
  undefined4 uStack_10d4;
  char **local_10d0;
  undefined1 local_10c8 [4];
  undefined1 local_10c4 [4];
  undefined8 *local_10c0;
  undefined8 *local_10b8;
  undefined1 local_10a0 [88];
  undefined1 local_1048 [176];
  code *local_f98;
  code *local_f90;
  code *local_f18;
  code *local_f00;
  code *local_ed0;
  code *local_ec0;
  undefined8 *local_dc0;
  ulonglong **local_db8;
  undefined8 local_db0;
  undefined8 *local_da8;
  undefined1 local_d98 [336];
  ulonglong *local_c48;
  int local_c40;
  uint local_c3c;
  ulonglong local_c38 [384];
  
  local_c48 = local_c38;
  local_c40 = 0;
  local_c3c = 0x80000040;
  puVar8 = (uint *)FUN_144b45d50(param_3[1],&local_res18);
  if ((*puVar8 >> 3 & 1) == 0) {
    lVar12 = FUN_144f9a3e0(param_1 + 0xb,param_2[1],param_3[1]);
    if (lVar12 == 0) {
      if ((1 < DAT_14c7990e8) || (cVar5 = FUN_144bdbf80(), cVar5 != '\0')) {
        cVar5 = FUN_144bdbf80();
        if (cVar5 == '\0') {
          if (param_3[1] == 0) {
            local_res18 = "<No name>";
          }
          else {
            local_res18 = (char *)FUN_144beee40();
          }
          uVar10 = FUN_144bdc640(local_10a0,&DAT_14c799098,2);
          local_10f8 = 1;
          pcStack_10f0 = FUN_144f50c70;
          local_10e8 = &local_res18;
          local_10e0 = 1;
          uStack_10dc = 0;
          uStack_10d8 = 0x44f50c70;
          uStack_10d4 = 1;
          local_10d0 = local_10e8;
          lVar12 = FUN_144bdc480(uVar10,"Cannot compile type {}",&local_10e0,0);
          *(char **)(lVar12 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar12 + 0x40) = 0x182;
          FUN_144bdc690(local_10a0);
          *(undefined4 *)(param_1 + 1) = 0x80040200;
          goto LAB_144f7a3d1;
        }
        if (param_3[1] == 0) {
          local_res20 = "<No name>";
        }
        else {
          local_res20 = (char *)FUN_144beee40();
        }
        uVar10 = FUN_144bdc810(local_d98,&DAT_14c799098,2);
        local_10f8 = 1;
        pcStack_10f0 = FUN_144f50c70;
        local_10e8 = &local_res20;
        local_10e0 = 1;
        uStack_10dc = 0;
        uStack_10d8 = 0x44f50c70;
        uStack_10d4 = 1;
        local_10d0 = local_10e8;
        lVar12 = FUN_144bdc480(uVar10,"Cannot compile type {}",&local_10e0,0);
        *(undefined8 *)(lVar12 + 0x40) = 0x182;
LAB_144f7a388:
        *(char **)(lVar12 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        FUN_144bdc8a0(local_d98);
      }
    }
    else {
      FUN_144f68560(local_1048);
      uVar10 = param_3[1];
      uVar3 = *param_3;
      local_f98 = FUN_144f686b0;
      local_f18 = FUN_144f687b0;
      local_f90 = FUN_144f68730;
      local_ed0 = FUN_144f68aa0;
      local_f00 = FUN_144f688c0;
      local_ec0 = FUN_144f68b20;
      local_db8 = &local_c48;
      local_dc0 = param_1 + 7;
      local_db0 = *param_1;
      local_da8 = param_1;
      uVar6 = FUN_144beec90(param_2[1]);
      uVar4 = *param_2;
      uVar7 = FUN_144beec90(uVar10);
      FUN_144f7ce10(&local_res18,local_1048,lVar12,uVar3,uVar7,uVar4,uVar6,uVar6,uVar7,1);
      if (-1 < (int)local_res18) {
        FUN_144f77020(param_1[6],param_3);
        goto LAB_144f7a3bb;
      }
      if ((1 < DAT_14c7990e8) || (cVar5 = FUN_144bdbf80(), cVar5 != '\0')) {
        cVar5 = FUN_144bdbf80();
        if (cVar5 == '\0') {
          uVar10 = FUN_144bdc640(local_10a0);
          local_res18 = (char *)0x0;
          lVar12 = FUN_144bdc480(uVar10,"Cannot copy object",&local_res18,0);
          *(char **)(lVar12 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar12 + 0x40) = 0x18c;
          FUN_144bdc690(local_10a0);
          *(undefined4 *)(param_1 + 1) = 0x80040200;
          goto LAB_144f7a3d1;
        }
        uVar10 = FUN_144bdc810(local_d98,&DAT_14c799098,2);
        local_res18 = (char *)0x0;
        lVar12 = FUN_144bdc480(uVar10,"Cannot copy object",&local_res18,0);
        *(undefined8 *)(lVar12 + 0x40) = 0x18c;
        goto LAB_144f7a388;
      }
    }
    *(undefined4 *)(param_1 + 1) = 0x80040200;
  }
  else {
    FUN_144bf0830(&local_10c0,param_2[1],0);
    while ((puVar15 = local_10c0 + 1, local_10c0 + 1 < local_10b8 ||
           (cVar5 = FUN_144bf0850(&local_10c0), puVar15 = local_10c0, cVar5 != '\0'))) {
      local_10c0 = puVar15;
      pbVar9 = (byte *)FUN_144bf04d0(local_10c0,&local_res18);
      if ((*pbVar9 & 0x30) != 0) {
        FUN_144bebf80(param_2,&local_10f8,*local_10c0);
        uVar10 = FUN_144bf0530(local_10c0);
        FUN_144bebf10(param_3,&local_10e0,uVar10);
        iVar17 = local_c40;
        if (CONCAT44(uStack_10dc,local_10e0) != 0) {
          puVar8 = (uint *)FUN_144bef800(CONCAT44(uStack_10d4,uStack_10d8),&local_res20);
          uVar13 = *puVar8 & 0x1f;
          if (uVar13 == 3) {
LAB_144f79fa5:
            iVar17 = *(int *)(param_1 + 8) + 1;
            if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < iVar17) {
              FUN_144f81b20(param_1 + 7,&PTR_vftable_14c6e47a0,(longlong)iVar17);
            }
            puVar15 = (undefined8 *)((longlong)*(int *)(param_1 + 8) * 0x30 + param_1[7]);
            if (puVar15 != (undefined8 *)0x0) {
              *puVar15 = CONCAT44(uStack_10dc,local_10e0);
              puVar15[1] = CONCAT44(uStack_10d4,uStack_10d8);
              puVar15[2] = local_10d0;
              if (((ulonglong)local_10d0 & 1) != 0) {
                FUN_144be6b20((ulonglong)local_10d0 & 0xfffffffffffffffe);
              }
              puVar15[3] = local_10f8;
              puVar15[4] = pcStack_10f0;
              puVar15[5] = local_10e8;
              if (((ulonglong)local_10e8 & 1) != 0) {
                FUN_144be6b20((ulonglong)local_10e8 & 0xfffffffffffffffe);
              }
            }
            *(int *)(param_1 + 8) = iVar17;
            iVar17 = local_c40;
          }
          else if (uVar13 == 6) {
            iVar17 = local_c40 + 1;
            if ((int)(local_c3c & 0x7fffffff) < iVar17) {
              FUN_144f81ce0(&local_c48,&PTR_vftable_14c6e47a0,(longlong)iVar17);
            }
            puVar14 = local_c48 + (longlong)local_c40 * 6;
            if (puVar14 != (ulonglong *)0x0) {
              *puVar14 = 0;
              puVar14[1] = 0;
              puVar14[2] = 0;
              if ((CONCAT44(uStack_10d4,uStack_10d8) != 0) &&
                 (puVar11 = (undefined4 *)
                            FUN_144bef800(CONCAT44(uStack_10d4,uStack_10d8),local_10c8),
                 ((byte)*puVar11 & 0x1f) == 6)) {
                *puVar14 = CONCAT44(uStack_10dc,local_10e0);
                puVar14[1] = CONCAT44(uStack_10d4,uStack_10d8);
                if (((ulonglong)local_10d0 & 1) != 0) {
                  FUN_144be6b20((ulonglong)local_10d0 & 0xfffffffffffffffe);
                }
                if ((puVar14[2] & 1) != 0) {
                  FUN_144be6b30(puVar14[2] & 0xfffffffffffffffe);
                }
                puVar14[2] = (ulonglong)local_10d0;
              }
              puVar16 = puVar14 + 4;
              puVar14[3] = 0;
              puVar1 = puVar14 + 5;
              *puVar16 = 0;
              *puVar1 = 0;
              if ((pcStack_10f0 != (code *)0x0) &&
                 (puVar11 = (undefined4 *)FUN_144bef800(pcStack_10f0,local_10c4,puVar16,0),
                 ((byte)*puVar11 & 0x1f) == 6)) {
                puVar14[3] = local_10f8;
                *puVar16 = (ulonglong)pcStack_10f0;
                if (((ulonglong)local_10e8 & 1) != 0) {
                  FUN_144be6b20((ulonglong)local_10e8 & 0xfffffffffffffffe);
                }
                if ((*puVar1 & 1) != 0) {
                  FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
                }
                *puVar1 = (ulonglong)local_10e8;
              }
            }
          }
          else {
            if (uVar13 == 8) goto LAB_144f79fa5;
            FUN_144f78b90(param_1,&local_10f8,&local_10e0);
            iVar17 = local_c40;
          }
        }
        local_c40 = iVar17;
        if (((ulonglong)local_10d0 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_10d0 & 0xfffffffffffffffe);
        }
        if (((ulonglong)local_10e8 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_10e8 & 0xfffffffffffffffe);
        }
      }
    }
LAB_144f7a3bb:
    FUN_144f7b6a0(param_1,local_c48,local_c40);
  }
LAB_144f7a3d1:
  puVar14 = local_c48;
  if (local_c48 + (longlong)local_c40 * 6 != local_c48) {
    puVar16 = local_c48 + (longlong)local_c40 * 6 + 2;
    do {
      puVar1 = puVar16 + -6;
      if ((puVar16[-3] & 1) != 0) {
        FUN_144be6b30(puVar16[-3] & 0xfffffffffffffffe);
      }
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar2 = puVar16 + -8;
      puVar16 = puVar1;
    } while (puVar2 != puVar14);
  }
  local_c40 = 0;
  if ((-1 < (int)local_c3c) && (local_c48 != (ulonglong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_c48,(ulonglong)(local_c3c & 0x7fffffff) * 0x30);
  }
  return;
}



// FUNCTION 144f7a4b0 FUN_144f7a4b0 body=4588 status=ok
// SIG undefined FUN_144f7a4b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144f7a4b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong *puVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  bool bVar22;
  int local_res8 [2];
  char *local_res10;
  undefined4 uVar23;
  char *local_11d8;
  undefined8 local_11d0;
  code *pcStack_11c8;
  undefined8 local_11c0;
  code *pcStack_11b8;
  undefined8 local_11b0;
  code *pcStack_11a8;
  char **local_11a0;
  ulonglong local_1198;
  code *pcStack_1190;
  char **local_1188;
  ulonglong local_1180;
  code *pcStack_1178;
  char **local_1170;
  ulonglong local_1168;
  code *pcStack_1160;
  undefined8 local_1158;
  ulonglong local_1150;
  undefined8 local_1148;
  undefined8 local_1140;
  ulonglong local_1138;
  undefined8 local_1130;
  ulonglong local_1128;
  code *pcStack_1120;
  undefined8 local_1118;
  ulonglong local_1110;
  undefined1 local_1108 [80];
  undefined *local_10b8;
  undefined8 local_10b0;
  undefined *local_10a8;
  undefined8 local_10a0;
  undefined8 local_1098;
  code *pcStack_1090;
  undefined8 local_1088;
  code *pcStack_1080;
  undefined4 local_1078;
  undefined4 uStack_1074;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  char **local_1068;
  undefined1 local_1060 [16];
  undefined1 local_1050 [336];
  ulonglong *local_f00;
  int local_ef8;
  uint local_ef4;
  ulonglong local_ef0 [385];
  undefined1 local_2e8 [648];
  undefined8 *local_60;
  ulonglong **local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  puVar15 = &local_1128;
  uVar13 = 0;
  local_res8[0] = 0;
  local_1148 = *param_2;
  local_1138 = param_2[2];
  local_1140 = param_2[1];
  if ((local_1138 & 1) != 0) {
    FUN_144be6b20(local_1138 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,local_res8,param_3,&local_1148);
  if (local_res8[0] < 0) {
    if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
      cVar6 = FUN_144bdbf80();
      local_11c0 = 0;
      pcStack_11b8 = (code *)0x0;
      local_11d0 = 0;
      pcStack_11c8 = (code *)0x0;
      lVar10 = *(longlong *)(param_2[2] & 0xfffffffffffffffe);
      if (cVar6 == '\0') {
        (**(code **)(lVar10 + 0x48))();
        uVar23 = (undefined4)local_11c0;
        if (((ulonglong)pcStack_11b8 & 1) != 0) {
          FUN_144be6b30((ulonglong)pcStack_11b8 & 0xfffffffffffffffe);
        }
        local_res10 = (char *)CONCAT44(local_res10._4_4_,uVar23);
        local_11d0 = 0;
        pcStack_11c8 = (code *)0x0;
        local_11c0 = 0;
        pcStack_11b8 = (code *)0x0;
        (**(code **)(*(longlong *)(local_1138 & 0xfffffffffffffffe) + 0x48))
                  ((longlong *)(local_1138 & 0xfffffffffffffffe),&local_11d8,local_1148,local_1140,
                   &local_11d0);
        pcVar5 = pcStack_11c8;
        if (((ulonglong)pcStack_11b8 & 1) != 0) {
          FUN_144be6b30((ulonglong)pcStack_11b8 & 0xfffffffffffffffe);
        }
        if (pcVar5 == (code *)0x0) {
          local_10b0 = 0;
          local_10b8 = &DAT_149981ef8;
          ppuVar7 = &local_10b8;
        }
        else {
          local_11d0 = 0;
          pcStack_11c8 = (code *)0x0;
          local_11c0 = 0;
          pcStack_11b8 = (code *)0x0;
          (**(code **)(*(longlong *)(local_1138 & 0xfffffffffffffffe) + 0x48))
                    ((longlong *)(local_1138 & 0xfffffffffffffffe),&local_11d8,local_1148,local_1140
                     ,&local_11d0);
          pcVar5 = pcStack_11c8;
          if (((ulonglong)pcStack_11b8 & 1) != 0) {
            FUN_144be6b30((ulonglong)pcStack_11b8 & 0xfffffffffffffffe);
          }
          ppuVar7 = (undefined **)FUN_144bef0c0(pcVar5,local_1060);
        }
        uVar8 = FUN_144bef0c0(param_2[1],puVar15);
        uVar9 = FUN_144bdc640(local_1108,&DAT_14c799098,2);
        local_11d0 = 3;
        pcStack_11c8 = FUN_144c14800;
        pcStack_11b8 = FUN_144c14800;
        pcStack_11a8 = FUN_144f50970;
        local_1098 = 3;
        pcStack_1090 = FUN_144c14800;
        local_11a0 = &local_res10;
        local_11b0._0_4_ = SUB84(ppuVar7,0);
        local_11b0._4_4_ = (undefined4)((ulonglong)ppuVar7 >> 0x20);
        pcStack_1080 = FUN_144c14800;
        local_1078 = (undefined4)local_11b0;
        uStack_1074 = local_11b0._4_4_;
        uStack_1070 = 0x44f50970;
        uStack_106c = 1;
        local_11c0 = uVar8;
        local_11b0 = ppuVar7;
        local_1088 = uVar8;
        local_1068 = local_11a0;
        lVar10 = FUN_144bdc480(uVar9,
                               "Cannot allocate array elements of type \'{}\', element type \'{}\', count={}"
                               ,&local_1098,0);
        *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar10 + 0x40) = 0x19d;
        FUN_144bdc690(local_1108);
      }
      else {
        (**(code **)(lVar10 + 0x48))
                  ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_11d8,*param_2,param_2[1],
                   &local_11d0);
        local_1130._0_4_ = (undefined4)local_11c0;
        if (((ulonglong)pcStack_11b8 & 1) != 0) {
          FUN_144be6b30((ulonglong)pcStack_11b8 & 0xfffffffffffffffe);
        }
        local_11d0 = 0;
        pcStack_11c8 = (code *)0x0;
        local_11c0 = 0;
        pcStack_11b8 = (code *)0x0;
        (**(code **)(*(longlong *)(local_1138 & 0xfffffffffffffffe) + 0x48))
                  ((longlong *)(local_1138 & 0xfffffffffffffffe),&local_11d8,local_1148,local_1140,
                   &local_11d0);
        pcVar5 = pcStack_11c8;
        if (((ulonglong)pcStack_11b8 & 1) != 0) {
          FUN_144be6b30((ulonglong)pcStack_11b8 & 0xfffffffffffffffe);
        }
        if (pcVar5 == (code *)0x0) {
          local_10a0 = 0;
          local_10a8 = &DAT_149981ef8;
          ppuVar7 = &local_10a8;
        }
        else {
          local_11d0 = 0;
          pcStack_11c8 = (code *)0x0;
          local_11c0 = 0;
          pcStack_11b8 = (code *)0x0;
          (**(code **)(*(longlong *)(local_1138 & 0xfffffffffffffffe) + 0x48))
                    ((longlong *)(local_1138 & 0xfffffffffffffffe),&local_11d8,local_1148,local_1140
                     ,&local_11d0);
          pcVar5 = pcStack_11c8;
          if (((ulonglong)pcStack_11b8 & 1) != 0) {
            FUN_144be6b30((ulonglong)pcStack_11b8 & 0xfffffffffffffffe);
          }
          ppuVar7 = (undefined **)FUN_144bef0c0(pcVar5,&local_1180);
        }
        uVar8 = FUN_144bef0c0(param_2[1],&local_1198);
        uVar9 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
        local_11d0 = 3;
        pcStack_11c8 = FUN_144c14800;
        pcStack_11b8 = FUN_144c14800;
        pcStack_11a8 = FUN_144f50970;
        local_1098 = 3;
        pcStack_1090 = FUN_144c14800;
        local_11a0 = (char **)&local_1130;
        local_11b0._0_4_ = SUB84(ppuVar7,0);
        local_11b0._4_4_ = (undefined4)((ulonglong)ppuVar7 >> 0x20);
        pcStack_1080 = FUN_144c14800;
        local_1078 = (undefined4)local_11b0;
        uStack_1074 = local_11b0._4_4_;
        uStack_1070 = 0x44f50970;
        uStack_106c = 1;
        local_11c0 = uVar8;
        local_11b0 = ppuVar7;
        local_1088 = uVar8;
        local_1068 = local_11a0;
        lVar10 = FUN_144bdc480(uVar9,
                               "Cannot allocate array elements of type \'{}\', element type \'{}\', count={}"
                               ,&local_1098,0);
        *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar10 + 0x40) = 0x19d;
        FUN_144bdc8a0(local_1050);
      }
    }
    if (*(char *)((longlong)param_1 + 0xc) == '\0') {
      if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
        cVar6 = FUN_144bdbf80();
        if (cVar6 != '\0') {
          uVar8 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
        }
        else {
          uVar8 = FUN_144bdc640(local_1108);
        }
        local_res10 = (char *)0x0;
        lVar10 = FUN_144bdc480(uVar8,&DAT_14996de1b,&local_res10,0);
        *(undefined8 *)(lVar10 + 0x40) = 0x19e;
        *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        if (cVar6 != '\0') {
          FUN_144bdc8a0(local_1050);
        }
        else {
          FUN_144bdc690(local_1108);
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
      goto LAB_144f7b649;
    }
  }
  local_1158 = 0;
  local_1168 = 0;
  pcStack_1160 = (code *)0x0;
  local_1150 = 0;
  FUN_144bf0690(&local_1130,param_3[1]);
  if ((CONCAT44(local_1130._4_4_,(undefined4)local_1130) < 2) ||
     (puVar11 = (uint *)FUN_144bf04d0(&local_1130,&local_11d8), (*puVar11 >> 6 & 1) == 0)) {
    uVar8 = *param_3;
    uVar14 = param_3[1];
    uVar13 = param_3[2];
  }
  else {
    uVar3 = *(ulonglong *)(param_3[1] + 8);
    puVar12 = (undefined4 *)FUN_144bef800(uVar3,&local_11d8);
    uVar8 = *param_3;
    uVar14 = uVar13;
    if (((byte)*puVar12 & 0x1f) == 8) {
      uVar14 = uVar3;
    }
    if (uVar14 != 0) {
      uVar13 = FUN_144befdb0(uVar14);
    }
  }
  if ((uVar13 & 1) != 0) {
    FUN_144be6b20(uVar13 & 0xfffffffffffffffe);
  }
  plVar21 = (longlong *)(uVar13 & 0xfffffffffffffffe);
  (**(code **)(*plVar21 + 0x48))(plVar21,&local_res10,uVar8,uVar14,&local_1168);
  bVar22 = (int)local_res10 < 0;
  if ((uVar13 & 1) != 0) {
    FUN_144be6b30(plVar21);
  }
  if (bVar22) {
    if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
      cVar6 = FUN_144bdbf80();
      if (cVar6 != '\0') {
        uVar8 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
      }
      else {
        uVar8 = FUN_144bdc640(local_1108);
      }
      local_res10 = (char *)0x0;
      lVar10 = FUN_144bdc480(uVar8,"Cannot access array value",&local_res10,0);
      *(undefined8 *)(lVar10 + 0x40) = 0x1a2;
      *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      if (cVar6 != '\0') {
        FUN_144bdc8a0(local_1050);
      }
      else {
        FUN_144bdc690(local_1108);
      }
    }
    *(undefined4 *)(param_1 + 1) = 0x80040200;
  }
  else {
    iVar19 = (int)local_1158;
    if ((int)local_1158 != 0) {
      iVar20 = 0;
      local_1128 = 0;
      pcStack_1120 = (code *)0x0;
      local_1118 = 0;
      local_1110 = 0;
      (**(code **)(*(longlong *)(local_1138 & 0xfffffffffffffffe) + 0x48))
                ((longlong *)(local_1138 & 0xfffffffffffffffe),&local_res10,local_1148,local_1140,
                 puVar15);
      uVar23 = (undefined4)((ulonglong)puVar15 >> 0x20);
      if ((int)local_res10 < 0) {
        if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
          cVar6 = FUN_144bdbf80();
          if (cVar6 == '\0') {
            bVar18 = 0x40;
            uVar8 = FUN_144bdc640(local_1108);
          }
          else {
            bVar18 = 0x80;
            uVar8 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
          }
          local_res10 = (char *)0x0;
          lVar10 = FUN_144bdc480(uVar8,"Cannot access array value",&local_res10,0);
          *(undefined8 *)(lVar10 + 0x40) = 0x1a8;
          *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          if ((char)bVar18 < '\0') {
            FUN_144bdc8a0(local_1050);
          }
          if ((bVar18 & 0x40) != 0) {
            FUN_144bdc690(local_1108);
          }
        }
        *(undefined4 *)(param_1 + 1) = 0x80040200;
      }
      else {
        local_f00 = local_ef0;
        local_ef8 = 0;
        local_ef4 = 0x80000040;
        if (local_1168 == local_1128) {
          if ((pcStack_1160 != pcStack_1120) && (cVar6 = FUN_144bef570(), cVar6 == '\0')) {
            if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 != '\0') {
                iVar19 = 0;
                uVar8 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
              }
              else {
                iVar19 = 0x100;
                uVar8 = FUN_144bdc640(local_1108);
              }
              local_res10 = (char *)0x0;
              lVar10 = FUN_144bdc480(uVar8,"Clone on self with different subtype is not supported",
                                     &local_res10,0);
              *(undefined8 *)(lVar10 + 0x40) = 0x1ae;
              *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
              if (cVar6 != '\0') {
                FUN_144bdc8a0(local_1050);
              }
LAB_144f7adde:
              if (iVar19 != 0) {
                FUN_144bdc690(local_1108);
              }
            }
            goto LAB_144f7b158;
          }
          if ((int)local_1158 != (int)local_1118) {
            if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
              cVar6 = FUN_144bdbf80();
              if (cVar6 != '\0') {
                iVar19 = 0;
                uVar8 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
              }
              else {
                iVar19 = 0x400;
                uVar8 = FUN_144bdc640(local_1108);
              }
              local_res10 = (char *)0x0;
              lVar10 = FUN_144bdc480(uVar8,"Clone on self with different count is not supported",
                                     &local_res10,0);
              *(undefined8 *)(lVar10 + 0x40) = 0x1b0;
              *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
              if (cVar6 != '\0') {
                FUN_144bdc8a0(local_1050);
              }
              goto LAB_144f7adde;
            }
            goto LAB_144f7b158;
          }
LAB_144f7b589:
          puVar15 = local_f00;
          if (local_f00 + (longlong)local_ef8 * 6 != local_f00) {
            puVar17 = local_f00 + (longlong)local_ef8 * 6 + 2;
            do {
              puVar1 = puVar17 + -6;
              if ((puVar17[-3] & 1) != 0) {
                FUN_144be6b30(puVar17[-3] & 0xfffffffffffffffe);
              }
              if ((*puVar1 & 1) != 0) {
                FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
              }
              puVar2 = puVar17 + -8;
              puVar17 = puVar1;
            } while (puVar2 != puVar15);
          }
        }
        else {
          if ((local_1168 < (longlong)(local_1118._4_4_ * (int)local_1118) + local_1128) &&
             (local_1128 < (longlong)(local_1158._4_4_ * (int)local_1158) + local_1168)) {
            if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
              cVar6 = FUN_144bdbf80();
              bVar22 = cVar6 != '\0';
              if (bVar22) {
                uVar8 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
              }
              else {
                uVar8 = FUN_144bdc640(local_1108);
              }
              local_res10 = (char *)0x0;
              lVar10 = FUN_144bdc480(uVar8,"Cannot clone on a buffer overlapping with source array",
                                     &local_res10,0);
              *(undefined8 *)(lVar10 + 0x40) = 0x1b6;
              *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
              if (bVar22) {
                FUN_144bdc8a0(local_1050);
              }
              goto LAB_144f7b149;
            }
          }
          else {
            puVar11 = (uint *)FUN_144b45d50(param_3[1],&local_res10);
            if (((*puVar11 >> 3 & 1) != 0) ||
               (((*(byte *)(param_3 + 2) & 1) != 0 &&
                (cVar6 = (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x20))(),
                cVar6 != '\0')))) {
              if (0 < (int)local_1158) {
                do {
                  local_1180 = (longlong)(local_1118._4_4_ * iVar20) + local_1128;
                  uVar13 = (ulonglong)((uint)local_1110 & 1);
                  pcStack_1178 = pcStack_1120;
                  local_1170 = (char **)(uVar13 | local_1110 & 0xfffffffffffffffe);
                  if (uVar13 != 0) {
                    FUN_144be6b20(local_1110 & 0xfffffffffffffffe);
                  }
                  local_1198 = (longlong)(local_1158._4_4_ * iVar20) + local_1168;
                  uVar13 = (ulonglong)((uint)local_1150 & 1);
                  local_1188 = (char **)(uVar13 | local_1150 & 0xfffffffffffffffe);
                  pcStack_1190 = pcStack_1160;
                  if (uVar13 != 0) {
                    FUN_144be6b20(local_1150 & 0xfffffffffffffffe);
                  }
                  puVar11 = (uint *)FUN_144bef800(pcStack_1190,&local_res10);
                  uVar16 = *puVar11 & 0x1f;
                  if (uVar16 == 3) {
LAB_144f7b4a7:
                    iVar19 = *(int *)(param_1 + 8) + 1;
                    if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < iVar19) {
                      FUN_144f81b20(param_1 + 7,&PTR_vftable_14c6e47a0,(longlong)iVar19);
                    }
                    puVar15 = (ulonglong *)((longlong)*(int *)(param_1 + 8) * 0x30 + param_1[7]);
                    if (puVar15 != (ulonglong *)0x0) {
                      *puVar15 = local_1198;
                      puVar15[1] = (ulonglong)pcStack_1190;
                      puVar15[2] = (ulonglong)local_1188;
                      if (((ulonglong)local_1188 & 1) != 0) {
                        FUN_144be6b20((ulonglong)local_1188 & 0xfffffffffffffffe);
                      }
                      puVar15[3] = local_1180;
                      puVar15[4] = (ulonglong)pcStack_1178;
                      puVar15[5] = (ulonglong)local_1170;
                      if (((ulonglong)local_1170 & 1) != 0) {
                        FUN_144be6b20((ulonglong)local_1170 & 0xfffffffffffffffe);
                      }
                    }
                    *(int *)(param_1 + 8) = iVar19;
                    iVar19 = local_ef8;
                  }
                  else if (uVar16 == 6) {
                    iVar19 = local_ef8 + 1;
                    if ((int)(local_ef4 & 0x7fffffff) < iVar19) {
                      FUN_144f81ce0(&local_f00,&PTR_vftable_14c6e47a0,(longlong)iVar19);
                    }
                    puVar15 = local_f00 + (longlong)local_ef8 * 6;
                    if (puVar15 != (ulonglong *)0x0) {
                      *puVar15 = 0;
                      puVar15[1] = 0;
                      puVar15[2] = 0;
                      if ((pcStack_1190 != (code *)0x0) &&
                         (puVar12 = (undefined4 *)FUN_144bef800(pcStack_1190,&local_11d8),
                         ((byte)*puVar12 & 0x1f) == 6)) {
                        *puVar15 = local_1198;
                        puVar15[1] = (ulonglong)pcStack_1190;
                        if (((ulonglong)local_1188 & 1) != 0) {
                          FUN_144be6b20((ulonglong)local_1188 & 0xfffffffffffffffe);
                        }
                        if ((puVar15[2] & 1) != 0) {
                          FUN_144be6b30(puVar15[2] & 0xfffffffffffffffe);
                        }
                        puVar15[2] = (ulonglong)local_1188;
                      }
                      puVar17 = puVar15 + 4;
                      puVar15[3] = 0;
                      puVar1 = puVar15 + 5;
                      *puVar17 = 0;
                      *puVar1 = 0;
                      if ((pcStack_1178 != (code *)0x0) &&
                         (puVar12 = (undefined4 *)FUN_144bef800(pcStack_1178,&local_1130,puVar17,0),
                         ((byte)*puVar12 & 0x1f) == 6)) {
                        puVar15[3] = local_1180;
                        *puVar17 = (ulonglong)pcStack_1178;
                        if (((ulonglong)local_1170 & 1) != 0) {
                          FUN_144be6b20((ulonglong)local_1170 & 0xfffffffffffffffe);
                        }
                        if ((*puVar1 & 1) != 0) {
                          FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
                        }
                        *puVar1 = (ulonglong)local_1170;
                      }
                    }
                  }
                  else {
                    if (uVar16 == 8) goto LAB_144f7b4a7;
                    FUN_144f78b90(param_1,&local_1180,&local_1198);
                    iVar19 = local_ef8;
                  }
                  local_ef8 = iVar19;
                  if (((ulonglong)local_1188 & 1) != 0) {
                    FUN_144be6b30((ulonglong)local_1188 & 0xfffffffffffffffe);
                  }
                  if (((ulonglong)local_1170 & 1) != 0) {
                    FUN_144be6b30((ulonglong)local_1170 & 0xfffffffffffffffe);
                  }
                  iVar20 = iVar20 + 1;
                } while (iVar20 < (int)local_1158);
              }
LAB_144f7b56c:
              FUN_144f7b6a0(param_1,local_f00,local_ef8);
              goto LAB_144f7b589;
            }
            lVar10 = FUN_144f9a3e0(param_1 + 0xb,pcStack_1120,pcStack_1160);
            if (lVar10 == 0) {
              if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
                cVar6 = FUN_144bdbf80();
                if (cVar6 == '\0') {
                  if (pcStack_1160 == (code *)0x0) {
                    local_res10 = "<No name>";
                  }
                  else {
                    local_res10 = (char *)FUN_144beee40();
                  }
                  bVar22 = true;
                  bVar4 = false;
                  uVar8 = FUN_144bdc640(local_1108,&DAT_14c799098,2);
                  local_1188 = &local_res10;
                }
                else {
                  if (pcStack_1160 == (code *)0x0) {
                    local_11d8 = "<No name>";
                  }
                  else {
                    local_11d8 = (char *)FUN_144beee40();
                  }
                  bVar22 = false;
                  bVar4 = true;
                  uVar8 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
                  local_1188 = &local_11d8;
                }
                pcStack_1190 = FUN_144f50c70;
                local_1198 = 1;
                local_1180 = 1;
                pcStack_1178 = FUN_144f50c70;
                local_1170 = local_1188;
                lVar10 = FUN_144bdc480(uVar8,"Cannot compile array subtype {}",&local_1180,0);
                *(undefined8 *)(lVar10 + 0x40) = 0x1d8;
                *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
                if (bVar4) {
                  FUN_144bdc8a0(local_1050);
                }
                bVar22 = !bVar22;
LAB_144f7b149:
                if (!bVar22) {
                  FUN_144bdc690(local_1108);
                }
              }
            }
            else {
              FUN_144f78b10(local_2e8);
              local_58 = &local_f00;
              local_60 = param_1 + 7;
              local_50 = *param_1;
              local_48 = param_1;
              FUN_144f7ce10(&local_res10,local_2e8,lVar10,local_1168,
                            CONCAT44(uVar23,local_1158._4_4_ * iVar19),local_1128,
                            local_1118._4_4_ * iVar19,local_1158._4_4_,local_1118._4_4_,
                            (int)local_1118);
              if (-1 < (int)local_res10) {
                FUN_144f77020(param_1[6],param_3);
                plVar21 = (longlong *)param_1[6];
                if (((int)plVar21[5] == 0) &&
                   (cVar6 = FUN_144f6a0f0(pcStack_1160), pcVar5 = pcStack_1160, uVar13 = local_1168,
                   cVar6 != '\0')) {
                  uVar23 = (int)local_1158;
                  if (pcStack_1160 == (code *)0x0) {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = FUN_144befdb0(pcStack_1160);
                  }
                  if ((uVar14 & 1) != 0) {
                    FUN_144be6b20(uVar14 & 0xfffffffffffffffe);
                  }
                  iVar19 = (int)plVar21[1] + 1;
                  if ((int)(*(uint *)((longlong)plVar21 + 0xc) & 0x7fffffff) < iVar19) {
                    FUN_144f819c0(plVar21,&PTR_vftable_14c6e47a0,(longlong)iVar19);
                  }
                  puVar15 = (ulonglong *)((longlong)(int)plVar21[1] * 0x20 + *plVar21);
                  if (puVar15 != (ulonglong *)0x0) {
                    *puVar15 = uVar13;
                    puVar15[1] = (ulonglong)pcVar5;
                    puVar15[2] = uVar14;
                    *(undefined4 *)(puVar15 + 3) = uVar23;
                    uVar14 = 0;
                  }
                  *(int *)(plVar21 + 1) = iVar19;
                  if ((uVar14 & 1) != 0) {
                    FUN_144be6b30(uVar14 & 0xfffffffffffffffe);
                  }
                }
                goto LAB_144f7b56c;
              }
              if ((1 < DAT_14c7990e8) || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')) {
                cVar6 = FUN_144bdbf80();
                bVar22 = cVar6 != '\0';
                if (bVar22) {
                  uVar8 = FUN_144bdc810(local_1050,&DAT_14c799098,2);
                }
                else {
                  uVar8 = FUN_144bdc640(local_1108);
                }
                local_res10 = (char *)0x0;
                lVar10 = FUN_144bdc480(uVar8,"Cannot copy array",&local_res10,0);
                *(undefined8 *)(lVar10 + 0x40) = 0x1e4;
                *(char **)(lVar10 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
                if (bVar22) {
                  FUN_144bdc8a0(local_1050);
                }
                goto LAB_144f7b149;
              }
            }
          }
LAB_144f7b158:
          puVar15 = local_f00;
          *(undefined4 *)(param_1 + 1) = 0x80040200;
          if (local_f00 + (longlong)local_ef8 * 6 != local_f00) {
            puVar17 = local_f00 + (longlong)local_ef8 * 6 + 2;
            do {
              puVar1 = puVar17 + -6;
              if ((puVar17[-3] & 1) != 0) {
                FUN_144be6b30(puVar17[-3] & 0xfffffffffffffffe);
              }
              if ((*puVar1 & 1) != 0) {
                FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
              }
              puVar2 = puVar17 + -8;
              puVar17 = puVar1;
            } while (puVar2 != puVar15);
          }
        }
        local_ef8 = 0;
        if ((-1 < (int)local_ef4) && (local_f00 != (ulonglong *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_f00,(ulonglong)(local_ef4 & 0x7fffffff) * 0x30);
        }
        local_f00 = (ulonglong *)0x0;
        local_ef4 = 0x80000000;
      }
      if ((local_1110 & 1) != 0) {
        FUN_144be6b30(local_1110 & 0xfffffffffffffffe);
      }
    }
  }
  if ((local_1150 & 1) != 0) {
    FUN_144be6b30(local_1150 & 0xfffffffffffffffe);
  }
LAB_144f7b649:
  if ((local_1138 & 1) != 0) {
    FUN_144be6b30(local_1138 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f7b6a0 FUN_144f7b6a0 body=2576 status=ok
// SIG undefined FUN_144f7b6a0(void)

void FUN_144f7b6a0(undefined8 *param_1,longlong param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  code *pcVar8;
  int iVar9;
  code *pcVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  char local_res18 [8];
  int local_res20 [2];
  code *local_2a8;
  code *local_2a0;
  longlong local_298;
  code *pcStack_290;
  code **local_288;
  code *local_280;
  code **local_278;
  code *local_270;
  code *local_268;
  code *local_260;
  longlong local_258;
  longlong lStack_250;
  ulonglong local_248;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined8 local_230;
  code *local_228;
  code **local_220;
  code *local_218;
  code **local_210;
  code *local_208;
  code **local_200;
  code *local_1f8;
  undefined1 local_1f0 [4];
  undefined1 local_1ec [4];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  if (0 < param_3) {
    plVar11 = (longlong *)(param_2 + 0x20);
    local_2a0 = (code *)(longlong)param_3;
    local_260 = (code *)0x0;
    do {
      pcVar10 = local_260;
      local_res20[0] = 0;
      (**(code **)(*(longlong *)*param_1 + 0x18))
                ((longlong *)*param_1,&local_240,plVar11 + -4,plVar11 + -1,local_res20);
      if (local_240 < 0) {
        if ((1 < DAT_14c7990e8) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
          cVar1 = FUN_144bdbf80();
          local_2a8 = (code *)plVar11[-3];
          if (cVar1 == '\0') {
            local_2a0 = local_2a8;
            uVar5 = FUN_144bdc640(local_1e0);
            local_298 = 1;
            pcStack_290 = FUN_144c00cb0;
            local_288 = &local_2a0;
            lVar7 = FUN_144bdc480(uVar5,"Cloner callback failed on {}",&local_298,0);
            *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x22b;
            FUN_144bdc690(local_1e0);
          }
          else {
            uVar5 = FUN_144bdc810(local_190,&DAT_14c799098,2);
            local_298 = 1;
            pcStack_290 = FUN_144c00cb0;
            local_288 = &local_2a8;
            lVar7 = FUN_144bdc480(uVar5,"Cloner callback failed on {}",&local_298,0);
            *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x22b;
            FUN_144bdc8a0(local_190);
          }
        }
        *(undefined4 *)(param_1 + 1) = 0x80040200;
        return;
      }
      if (local_res20[0] == 1) {
        FUN_144bf0690(&local_270,plVar11[-3]);
        if ((local_270 < (code *)0x2) ||
           (puVar2 = (uint *)FUN_144bf04d0(&local_270,local_1f0), (*puVar2 >> 6 & 1) == 0)) {
          pcVar6 = (code *)plVar11[-4];
          pcVar8 = (code *)plVar11[-3];
          uVar4 = plVar11[-2];
          local_268 = pcVar6;
        }
        else {
          pcVar6 = *(code **)(plVar11[-3] + 8);
          puVar3 = (undefined4 *)FUN_144bef800(pcVar6,local_1ec);
          pcVar8 = (code *)0x0;
          if (((byte)*puVar3 & 0x1f) == 6) {
            pcVar8 = pcVar6;
          }
          pcVar6 = (code *)plVar11[-4];
          local_268 = pcVar6;
          if (pcVar8 == (code *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_144befdb0(pcVar8);
          }
        }
        if ((uVar4 & 1) != 0) {
          FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
        }
        local_258 = 0;
        lStack_250 = 0;
        local_248 = 0;
        (**(code **)(*(longlong *)(plVar11[1] & 0xfffffffffffffffeU) + 0x48))
                  ((longlong *)(plVar11[1] & 0xfffffffffffffffeU),&local_23c,plVar11[-1],*plVar11,
                   &local_258);
        if (local_23c < 0) {
          if ((1 < DAT_14c7990e8) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
            cVar1 = FUN_144bdbf80();
            local_288 = (code **)0x0;
            local_298 = 0;
            pcStack_290 = (code *)0x0;
            lVar7 = *(longlong *)(plVar11[1] & 0xfffffffffffffffeU);
            if (cVar1 == '\0') {
              (**(code **)(lVar7 + 0x48))();
              local_2a8 = pcStack_290;
              if (((ulonglong)local_288 & 1) != 0) {
                FUN_144be6b30((ulonglong)local_288 & 0xfffffffffffffffe);
              }
              local_2a0 = (code *)*plVar11;
              uVar5 = FUN_144bdc640(local_1e0,&DAT_14c799098,2);
              local_230 = 2;
              local_228 = FUN_144c00cb0;
              local_220 = &local_2a0;
              local_218 = FUN_144c00d20;
              local_210 = &local_2a8;
              lVar7 = FUN_144bdc480(uVar5,"Can\'t get var from {} pointing to {}",&local_230,0);
              *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
              *(undefined8 *)(lVar7 + 0x40) = 0x230;
              FUN_144bdc690(local_1e0);
            }
            else {
              (**(code **)(lVar7 + 0x48))
                        ((longlong *)(plVar11[1] & 0xfffffffffffffffeU),local_res18,plVar11[-1],
                         *plVar11,&local_298);
              local_270 = pcStack_290;
              if (((ulonglong)local_288 & 1) != 0) {
                FUN_144be6b30((ulonglong)local_288 & 0xfffffffffffffffe);
              }
              local_268 = (code *)*plVar11;
              uVar5 = FUN_144bdc810(local_190,&DAT_14c799098,2);
              local_230 = 2;
              local_228 = FUN_144c00cb0;
              local_220 = &local_268;
              local_218 = FUN_144c00d20;
              local_210 = &local_270;
              lVar7 = FUN_144bdc480(uVar5,"Can\'t get var from {} pointing to {}",&local_230,0);
              *(undefined8 *)(lVar7 + 0x40) = 0x230;
LAB_144f7bf35:
              *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
              FUN_144bdc8a0(local_190);
            }
          }
LAB_144f7bf49:
          *(undefined4 *)(param_1 + 1) = 0x80040200;
          goto LAB_144f7bf51;
        }
        local_298 = 0;
        pcStack_290 = (code *)0x0;
        if (local_258 != 0) {
          local_288 = (code **)0x0;
          FUN_144f81780(param_1 + 2,&local_2a8,&local_258);
          iVar12 = (int)local_2a8;
          local_res18[0] = iVar12 == *(int *)(param_1 + 3);
          if ((bool)local_res18[0]) {
            iVar9 = *(int *)(param_1 + 3) + 1;
            if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar9) {
              FUN_144f820f0(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
            }
            plVar13 = (longlong *)((longlong)*(int *)(param_1 + 3) * 0x30 + param_1[2]);
            if (plVar13 != (longlong *)0x0) {
              *plVar13 = local_258;
              plVar13[1] = lStack_250;
              plVar13[2] = local_248;
              if ((local_248 & 1) != 0) {
                FUN_144be6b20(local_248 & 0xfffffffffffffffe);
              }
              plVar13[3] = 0;
              plVar13[4] = 0;
              plVar13[5] = 0;
            }
            *(int *)(param_1 + 3) = iVar9;
          }
          cVar1 = local_res18[0];
          lVar7 = (longlong)iVar12 * 0x30 + param_1[2];
          if (((local_res18[0] != '\0') && (plVar11[-3] == *plVar11)) &&
             (puVar2 = (uint *)FUN_144b45d50(plVar11[-3],local_1e8), (*puVar2 >> 2 & 1) != 0)) {
            *(longlong *)(lVar7 + 0x18) = local_258;
            *(longlong *)(lVar7 + 0x20) = lStack_250;
            if ((local_248 & 1) != 0) {
              FUN_144be6b20(local_248 & 0xfffffffffffffffe);
            }
            if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
              FUN_144be6b30(*(ulonglong *)(lVar7 + 0x28) & 0xfffffffffffffffe);
            }
            *(ulonglong *)(lVar7 + 0x28) = local_248;
            cVar1 = '\0';
          }
          local_298 = *(longlong *)(lVar7 + 0x18);
          pcStack_290 = *(code **)(lVar7 + 0x20);
          if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
            FUN_144be6b20(*(ulonglong *)(lVar7 + 0x28) & 0xfffffffffffffffe);
          }
          if (((ulonglong)local_288 & 1) != 0) {
            FUN_144be6b30((ulonglong)local_288 & 0xfffffffffffffffe);
          }
          local_288 = *(code ***)(lVar7 + 0x28);
          if (cVar1 == '\0') {
LAB_144f7ba26:
            (**(code **)(*(longlong *)(uVar4 & 0xfffffffffffffffe) + 0x40))
                      ((longlong *)(uVar4 & 0xfffffffffffffffe),&local_238,local_268,pcVar8,
                       &local_298);
            if (-1 < local_238) {
              pcVar10 = local_260;
              if (((ulonglong)local_288 & 1) != 0) {
                FUN_144be6b30((ulonglong)local_288 & 0xfffffffffffffffe);
                pcVar10 = local_260;
              }
              goto LAB_144f7ba6b;
            }
            if ((1 < DAT_14c7990e8) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
              cVar1 = FUN_144bdbf80();
              if (cVar1 == '\0') {
                FUN_144bf0690(&local_268,plVar11[-3]);
                local_2a0 = pcStack_290;
                local_2a8 = pcVar8;
                uVar5 = FUN_144bdc640(local_1e0,&DAT_14c799098,2);
                local_230 = 3;
                local_228 = FUN_144c00d20;
                local_220 = &local_2a0;
                local_218 = FUN_144c00cb0;
                local_210 = &local_2a8;
                local_208 = FUN_144f82010;
                local_200 = &local_268;
                lVar7 = FUN_144bdc480(uVar5,
                                      "Cannot assign instance of type \'{}\' to pointer of type \'{}\' at {}"
                                      ,&local_230,0);
                *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
                *(undefined8 *)(lVar7 + 0x40) = 0x261;
                FUN_144bdc690(local_1e0);
              }
              else {
                local_270 = pcStack_290;
                FUN_144bf0690(&local_1f8,plVar11[-3]);
                local_260 = pcVar8;
                uVar5 = FUN_144bdc810(local_190,&DAT_14c799098,2);
                local_230 = 3;
                local_228 = FUN_144c00d20;
                local_220 = &local_270;
                local_218 = FUN_144c00cb0;
                local_210 = &local_260;
                local_208 = FUN_144f82010;
                local_200 = &local_1f8;
                lVar7 = FUN_144bdc480(uVar5,
                                      "Cannot assign instance of type \'{}\' to pointer of type \'{}\' at {}"
                                      ,&local_230,0);
                *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
                *(undefined8 *)(lVar7 + 0x40) = 0x261;
                FUN_144bdc8a0(local_190);
              }
            }
            *(undefined4 *)(param_1 + 1) = 0x80040200;
          }
          else {
            FUN_144f7c0b0(param_1,&local_298,&local_258,1);
            pcVar10 = pcStack_290;
            lVar7 = local_298;
            if (-1 < *(int *)(param_1 + 1)) {
              if (((pcStack_290 != (code *)0x0) &&
                  (cVar1 = FUN_144b45dd0(pcStack_290,&DAT_14c6dc390), cVar1 != '\0')) &&
                 ((puVar2 = (uint *)FUN_144b45d50(pcVar10,&local_1f8), (*puVar2 >> 3 & 1) == 0 &&
                  (lVar7 != 0)))) {
                iVar12 = *(int *)(param_1 + 10) + 1;
                if ((int)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) < iVar12) {
                  FUN_144f818d0(param_1 + 9,&PTR_vftable_14c6e47a0,(longlong)iVar12);
                }
                plVar13 = (longlong *)(param_1[9] + (longlong)*(int *)(param_1 + 10) * 8);
                if (plVar13 != (longlong *)0x0) {
                  *plVar13 = lVar7;
                }
                *(int *)(param_1 + 10) = iVar12;
              }
              goto LAB_144f7ba26;
            }
          }
          if (((ulonglong)local_288 & 1) != 0) {
            FUN_144be6b30((ulonglong)local_288 & 0xfffffffffffffffe);
          }
LAB_144f7bf51:
          if ((local_248 & 1) != 0) {
            FUN_144be6b30(local_248 & 0xfffffffffffffffe);
          }
          if ((uVar4 & 1) == 0) {
            return;
          }
          FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
          return;
        }
        local_288 = (code **)0x0;
        (**(code **)(*(longlong *)(uVar4 & 0xfffffffffffffffe) + 0x40))
                  ((longlong *)(uVar4 & 0xfffffffffffffffe),&local_234,pcVar6,pcVar8,&local_298);
        if (((ulonglong)local_288 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_288 & 0xfffffffffffffffe);
        }
        if (local_234 < 0) {
          if ((1 < DAT_14c7990e8) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
            cVar1 = FUN_144bdbf80();
            if (cVar1 != '\0') {
              FUN_144bf0690(&local_270,plVar11[-3]);
              local_268 = pcVar8;
              uVar5 = FUN_144bdc810(local_190,&DAT_14c799098,2);
              local_298 = 2;
              pcStack_290 = FUN_144c00cb0;
              local_288 = &local_268;
              local_280 = FUN_144f82010;
              local_278 = &local_270;
              lVar7 = FUN_144bdc480(uVar5,"Cannot assign null to pointer of type \'{}\' at {}",
                                    &local_298,0);
              *(undefined8 *)(lVar7 + 0x40) = 0x267;
              goto LAB_144f7bf35;
            }
            FUN_144bf0690(&local_2a8,plVar11[-3]);
            local_2a0 = pcVar8;
            uVar5 = FUN_144bdc640(local_1e0,&DAT_14c799098,2);
            local_298 = 2;
            pcStack_290 = FUN_144c00cb0;
            local_288 = &local_2a0;
            local_280 = FUN_144f82010;
            local_278 = &local_2a8;
            lVar7 = FUN_144bdc480(uVar5,"Cannot assign null to pointer of type \'{}\' at {}",
                                  &local_298,0);
            *(char **)(lVar7 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x267;
            FUN_144bdc690(local_1e0);
          }
          goto LAB_144f7bf49;
        }
LAB_144f7ba6b:
        if ((local_248 & 1) != 0) {
          FUN_144be6b30(local_248 & 0xfffffffffffffffe);
        }
        if ((uVar4 & 1) != 0) {
          FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
        }
      }
      local_260 = pcVar10 + 1;
      plVar11 = plVar11 + 6;
    } while ((longlong)local_260 < (longlong)local_2a0);
  }
  return;
}



// FUNCTION 144f7c0b0 FUN_144f7c0b0 body=3194 status=ok
// SIG undefined FUN_144f7c0b0(void)

void FUN_144f7c0b0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  char **ppcVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong *puVar10;
  int iVar11;
  int local_res8 [2];
  ulonglong local_res10;
  char *local_res18;
  int local_res20;
  ulonglong local_248;
  code *local_240;
  char **local_238;
  ulonglong local_230;
  ulonglong local_228;
  ulonglong local_220;
  char *local_218 [2];
  undefined1 local_208 [16];
  ulonglong local_1f8;
  undefined1 local_1f0 [80];
  undefined1 local_1a0 [352];
  
  local_res8[0] = 0;
  uVar1 = *param_2;
  local_1f8 = param_2[2];
  local_res20 = param_4;
  if ((local_1f8 & 1) != 0) {
    FUN_144be6b20(local_1f8 & 0xfffffffffffffffe);
  }
  local_230 = *param_3;
  local_220 = param_3[2];
  local_228 = param_3[1];
  if ((local_220 & 1) != 0) {
    FUN_144be6b20(local_220 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_res8,param_2,&local_230);
  if (local_res8[0] < 0) {
    if ((((local_230 == 0) || (local_228 == 0)) ||
        (cVar4 = FUN_144f6a410(local_228,&DAT_14c6dc530), uVar2 = local_230, cVar4 == '\0')) ||
       (local_230 == 0)) {
      puVar9 = (uint *)FUN_144b45d50(local_228,&local_res10);
      if (*(char *)((longlong)param_1 + 0xc) == '\0') {
        if ((*puVar9 >> 0xb & 1) == 0) {
          if ((1 < DAT_14c7990e8) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
            cVar4 = FUN_144bdbf80();
            if (cVar4 == '\0') {
              ppcVar6 = (char **)FUN_144bef0c0(local_228,local_208);
              uVar7 = FUN_144bdc640(local_1f0,&DAT_14c799098,2);
              local_248 = 1;
              local_240 = FUN_144c14800;
              local_238 = ppcVar6;
              lVar8 = FUN_144bdc480(uVar7,
                                    "Cannot allocate/construct instance of type \'{}\' (unregistered type?)"
                                    ,&local_248,0);
              *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
              *(undefined8 *)(lVar8 + 0x40) = 0x288;
              FUN_144bdc690(local_1f0);
              *(undefined4 *)(param_1 + 1) = 0x80040200;
              goto LAB_144f7ccc1;
            }
            ppcVar6 = (char **)FUN_144bef0c0(local_228,local_218);
            uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799098,2);
            local_248 = 1;
            local_240 = FUN_144c14800;
            local_238 = ppcVar6;
            lVar8 = FUN_144bdc480(uVar7,
                                  "Cannot allocate/construct instance of type \'{}\' (unregistered type?)"
                                  ,&local_248,0);
            *(undefined8 *)(lVar8 + 0x40) = 0x288;
            goto LAB_144f7c5df;
          }
        }
        else if ((1 < DAT_14c7990e8) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            ppcVar6 = (char **)FUN_144bef0c0(local_228,local_208);
            uVar7 = FUN_144bdc640(local_1f0,&DAT_14c799098,2);
            local_248 = 1;
            local_240 = FUN_144c14800;
            local_238 = ppcVar6;
            lVar8 = FUN_144bdc480(uVar7,
                                  "Cannot allocate/construct instance of foreign type \'{}\'. This is likely due to the type being defined in a missing (not loaded) DLL or WinMD file. Check that DLLs and WinMD files are present on disk and correctly loaded."
                                  ,&local_248,0);
            *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0x284;
            FUN_144bdc690(local_1f0);
            *(undefined4 *)(param_1 + 1) = 0x80040200;
            goto LAB_144f7ccc1;
          }
          ppcVar6 = (char **)FUN_144bef0c0(local_228,local_218);
          uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799098,2);
          local_248 = 1;
          local_240 = FUN_144c14800;
          local_238 = ppcVar6;
          lVar8 = FUN_144bdc480(uVar7,
                                "Cannot allocate/construct instance of foreign type \'{}\'. This is likely due to the type being defined in a missing (not loaded) DLL or WinMD file. Check that DLLs and WinMD files are present on disk and correctly loaded."
                                ,&local_248,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x284;
LAB_144f7c5df:
          *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          FUN_144bdc8a0(local_1a0);
        }
LAB_144f7c5f3:
        *(undefined4 *)(param_1 + 1) = 0x80040200;
        goto LAB_144f7ccc1;
      }
      if ((3 < DAT_14c7990e8) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 != '\0') {
          ppcVar6 = (char **)FUN_144bef0c0(local_228,local_218);
          uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799098,4);
          local_248 = 1;
          local_240 = FUN_144c14800;
          local_238 = ppcVar6;
          lVar8 = FUN_144bdc480(uVar7,"Skipping instance of {} (callback returned failure)",
                                &local_248,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x28b;
          goto LAB_144f7c6f6;
        }
        ppcVar6 = (char **)FUN_144bef0c0(local_228,local_208);
        uVar7 = FUN_144bdc640(local_1f0,&DAT_14c799098,4);
        local_248 = 1;
        local_240 = FUN_144c14800;
        local_238 = ppcVar6;
        lVar8 = FUN_144bdc480(uVar7,"Skipping instance of {} (callback returned failure)",&local_248
                              ,0);
        *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x28b;
        FUN_144bdc690(local_1f0);
      }
    }
    else {
      if (*(char *)((longlong)param_1 + 0xc) == '\0') {
        if ((1 < DAT_14c7990e8) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            ppcVar6 = (char **)FUN_144bef0c0(uVar2,local_218);
            uVar7 = FUN_144bdc640(local_1f0,&DAT_14c799098,2);
            local_248 = 1;
            local_240 = FUN_144c14800;
            local_238 = ppcVar6;
            lVar8 = FUN_144bdc480(uVar7,"Cannot find native type for {} (unregistered type?)",
                                  &local_248,0);
            *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0x279;
            FUN_144bdc690(local_1f0);
            *(undefined4 *)(param_1 + 1) = 0x80040200;
            goto LAB_144f7ccc1;
          }
          ppcVar6 = (char **)FUN_144bef0c0(uVar2,local_208);
          uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799098,2);
          local_248 = 1;
          local_240 = FUN_144c14800;
          local_238 = ppcVar6;
          lVar8 = FUN_144bdc480(uVar7,"Cannot find native type for {} (unregistered type?)",
                                &local_248,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x279;
          goto LAB_144f7c5df;
        }
        goto LAB_144f7c5f3;
      }
      if ((3 < DAT_14c7990e8) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          ppcVar6 = (char **)FUN_144bef0c0(uVar2,local_208);
          uVar7 = FUN_144bdc640(local_1f0,&DAT_14c799098,4);
          local_248 = 1;
          local_240 = FUN_144c14800;
          local_238 = ppcVar6;
          lVar8 = FUN_144bdc480(uVar7,"Skipping type {} (callback returned failure)",&local_248,0);
          *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          *(undefined8 *)(lVar8 + 0x40) = 0x27b;
          FUN_144bdc690(local_1f0);
        }
        else {
          ppcVar6 = (char **)FUN_144bef0c0(uVar2,local_218);
          uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799098,4);
          local_248 = 1;
          local_240 = FUN_144c14800;
          local_238 = ppcVar6;
          lVar8 = FUN_144bdc480(uVar7,"Skipping type {} (callback returned failure)",&local_248,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x27b;
LAB_144f7c6f6:
          *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          FUN_144bdc8a0(local_1a0);
        }
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    uVar2 = param_2[2];
    param_2[2] = 0;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
    }
  }
  if (uVar1 == 0) {
    if (local_230 != 0) {
      FUN_144f81780(param_1 + 2,&local_res10,&local_230);
      if ((int)local_res10 == *(int *)(param_1 + 3)) {
        iVar11 = *(int *)(param_1 + 3) + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar11) {
          FUN_144f820f0(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        puVar10 = (ulonglong *)((longlong)*(int *)(param_1 + 3) * 0x30 + param_1[2]);
        if (puVar10 != (ulonglong *)0x0) {
          *puVar10 = local_230;
          puVar10[1] = local_228;
          puVar10[2] = local_220;
          if ((local_220 & 1) != 0) {
            FUN_144be6b20(local_220 & 0xfffffffffffffffe);
          }
          puVar10[3] = *param_2;
          puVar10[4] = param_2[1];
          uVar1 = param_2[2];
          puVar10[5] = uVar1;
          if ((uVar1 & 1) != 0) {
            FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
          }
        }
        *(int *)(param_1 + 3) = iVar11;
      }
      else {
        lVar8 = (longlong)(int)local_res10 * 0x30 + param_1[2];
        *(ulonglong *)(lVar8 + 0x18) = *param_2;
        *(ulonglong *)(lVar8 + 0x20) = param_2[1];
        if ((param_2[2] & 1) != 0) {
          FUN_144be6b20(param_2[2] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(lVar8 + 0x28) & 1) != 0) {
          FUN_144be6b30(*(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffe);
        }
        *(ulonglong *)(lVar8 + 0x28) = param_2[2];
      }
    }
    if (local_230 != *param_3) {
      FUN_144f81780(param_1 + 2,&local_res10,param_3);
      if ((int)local_res10 == *(int *)(param_1 + 3)) {
        iVar11 = *(int *)(param_1 + 3) + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar11) {
          FUN_144f820f0(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        puVar10 = (ulonglong *)((longlong)*(int *)(param_1 + 3) * 0x30 + param_1[2]);
        if (puVar10 != (ulonglong *)0x0) {
          *puVar10 = *param_3;
          puVar10[1] = param_3[1];
          uVar1 = param_3[2];
          puVar10[2] = uVar1;
          if ((uVar1 & 1) != 0) {
            FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
          }
          puVar10[3] = *param_2;
          puVar10[4] = param_2[1];
          uVar1 = param_2[2];
          puVar10[5] = uVar1;
          if ((uVar1 & 1) != 0) {
            FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
          }
        }
        *(int *)(param_1 + 3) = iVar11;
      }
      else {
        lVar8 = (longlong)(int)local_res10 * 0x30 + param_1[2];
        *(ulonglong *)(lVar8 + 0x18) = *param_2;
        *(ulonglong *)(lVar8 + 0x20) = param_2[1];
        if ((param_2[2] & 1) != 0) {
          FUN_144be6b20(param_2[2] & 0xfffffffffffffffe);
        }
        if ((*(byte *)(lVar8 + 0x28) & 1) != 0) {
          FUN_144be6b30(*(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffe);
        }
        *(ulonglong *)(lVar8 + 0x28) = param_2[2];
      }
    }
  }
  if (((local_230 == 0) || (*param_2 == 0)) ||
     ((local_228 != 0 &&
      ((cVar4 = FUN_144f6a410(local_228,&DAT_14c6dc530), cVar4 != '\0' && (local_230 != 0))))))
  goto LAB_144f7ccc1;
  uVar1 = local_230;
  if (*param_2 == local_230) {
    if ((param_2[1] != local_228) && (cVar4 = FUN_144bef570(param_2[1],local_228), cVar4 == '\0')) {
      if ((1 < DAT_14c7990e8) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 != '\0') {
          uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799098,2);
        }
        else {
          uVar7 = FUN_144bdc640(local_1f0);
        }
        local_res10 = 0;
        lVar8 = FUN_144bdc480(uVar7,"Cannot clone on self with a different type",&local_res10,0);
        *(undefined8 *)(lVar8 + 0x40) = 0x2a8;
        *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
        if (cVar4 != '\0') {
          FUN_144bdc8a0(local_1a0);
        }
        else {
          FUN_144bdc690(local_1f0);
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    goto LAB_144f7ccc1;
  }
  iVar11 = FUN_144beec90();
  local_res10 = *param_2;
  iVar5 = FUN_144beec90(param_2[1]);
  if ((*param_2 < (longlong)iVar11 + uVar1) && (local_230 < local_res10 + (longlong)iVar5)) {
    if ((1 < DAT_14c7990e8) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 != '\0') {
        iVar11 = 0;
        uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799098,2);
      }
      else {
        iVar11 = 0x1000;
        uVar7 = FUN_144bdc640(local_1f0);
      }
      local_res10 = 0;
      lVar8 = FUN_144bdc480(uVar7,"Cannot clone on a buffer overlapping with source object",
                            &local_res10,0);
      *(undefined8 *)(lVar8 + 0x40) = 0x2b0;
      *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      if (cVar4 != '\0') {
        FUN_144bdc8a0(local_1a0);
      }
LAB_144f7cc9b:
      if (iVar11 != 0) {
        FUN_144bdc690(local_1f0);
      }
    }
LAB_144f7cca7:
    *(undefined4 *)(param_1 + 1) = 0x80040200;
  }
  else {
    if ((local_res20 == 1) &&
       (puVar9 = (uint *)FUN_144b45d50(param_2[1],&local_res10), (*puVar9 >> 3 & 1) == 0)) {
      FUN_144f69360(&local_res10,*param_2,param_2[1],1);
      if ((int)local_res10 < 0) {
        if ((1 < DAT_14c7990e8) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
          cVar4 = FUN_144bdbf80();
          uVar1 = param_2[1];
          if (cVar4 == '\0') {
            if (uVar1 == 0) {
              local_res18 = "<No name>";
            }
            else {
              local_res18 = (char *)FUN_144beee40();
            }
            iVar11 = 0x4000;
            bVar3 = false;
            uVar7 = FUN_144bdc640(local_1f0,&DAT_14c799098,2);
            local_238 = &local_res18;
          }
          else {
            if (uVar1 == 0) {
              local_218[0] = "<No name>";
            }
            else {
              local_218[0] = (char *)FUN_144beee40();
            }
            iVar11 = 0;
            bVar3 = true;
            uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799098,2);
            local_238 = local_218;
          }
          local_240 = FUN_144f50c70;
          local_248 = 1;
          lVar8 = FUN_144bdc480(uVar7,"Cannot construct type {}",&local_248,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x2b5;
          *(char **)(lVar8 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
          if (bVar3) {
            FUN_144bdc8a0(local_1a0);
          }
          goto LAB_144f7cc9b;
        }
        goto LAB_144f7cca7;
      }
    }
    FUN_144f78b90(param_1,&local_230,param_2);
  }
LAB_144f7ccc1:
  if ((local_220 & 1) != 0) {
    FUN_144be6b30(local_220 & 0xfffffffffffffffe);
  }
  if ((local_1f8 & 1) != 0) {
    FUN_144be6b30(local_1f8 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f7cd30 FUN_144f7cd30 body=211 status=ok
// SIG undefined FUN_144f7cd30(void)

void FUN_144f7cd30(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  
  lVar3 = param_1[2];
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
    FUN_144b3ec00(param_1 + 2);
  }
  puVar4 = (ulonglong *)*param_1;
  if (puVar4 + (longlong)(int)param_1[1] * 6 != puVar4) {
    puVar5 = puVar4 + (longlong)(int)param_1[1] * 6 + 2;
    do {
      puVar1 = puVar5 + -6;
      if ((puVar5[-3] & 1) != 0) {
        FUN_144be6b30(puVar5[-3] & 0xfffffffffffffffe);
      }
      if ((*puVar1 & 1) != 0) {
        FUN_144be6b30(*puVar1 & 0xfffffffffffffffe);
      }
      puVar2 = puVar5 + -8;
      puVar5 = puVar1;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x30);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f7ce10 FUN_144f7ce10 body=7459 status=ok
// SIG undefined FUN_144f7ce10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144f7ce10(int *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                   longlong param_6,uint param_7,uint param_8,uint param_9,int param_10)

{
  ulonglong *puVar1;
  float fVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  double dVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  int *piVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  double *pdVar20;
  uint uVar21;
  ulonglong *puVar22;
  double *pdVar23;
  size_t sVar24;
  longlong lVar25;
  size_t _Size;
  longlong *plVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong *plVar30;
  ulonglong *puVar31;
  ulonglong uVar32;
  double *pdVar33;
  longlong lVar34;
  ulonglong uVar35;
  double *_Dst;
  longlong lVar36;
  undefined8 *puVar37;
  int iVar38;
  uint uVar39;
  longlong lVar40;
  double *pdVar41;
  bool bVar42;
  char *in_stack_ffffffffffffd1f8;
  undefined4 uVar43;
  longlong *local_2dd0;
  double *local_2db8;
  longlong local_2db0;
  longlong *local_2da8;
  double *local_2da0;
  longlong local_2d98;
  longlong *local_2d90;
  ulonglong local_2d88;
  longlong *local_2d80;
  double *local_2d78;
  longlong local_2d70;
  ulonglong local_2d68;
  char *local_2d60;
  char *local_2d58;
  int local_2d50;
  int local_2d4c;
  int local_2d48;
  int local_2d44;
  int local_2d40;
  uint local_2d3c;
  uint local_2d38;
  uint local_2d34;
  uint local_2d30 [2];
  longlong local_2d28;
  undefined1 local_2d20 [4];
  undefined1 local_2d1c [4];
  undefined1 local_2d18 [4];
  undefined1 local_2d14 [4];
  undefined1 local_2d10 [4];
  undefined1 local_2d0c [4];
  undefined1 local_2d08 [4];
  undefined1 local_2d04 [4];
  undefined1 local_2d00 [4];
  undefined1 local_2cfc [4];
  undefined1 local_2cf8 [4];
  undefined1 local_2cf4 [4];
  undefined1 local_2cf0 [4];
  undefined1 local_2cec [4];
  undefined1 local_2ce8 [4];
  undefined1 local_2ce4 [4];
  undefined1 local_2ce0 [4];
  undefined1 local_2cdc [4];
  undefined1 local_2cd8 [4];
  undefined1 local_2cd4 [4];
  undefined1 local_2cd0 [4];
  undefined1 local_2ccc [4];
  undefined1 local_2cc8 [4];
  undefined1 local_2cc4 [4];
  ulonglong local_2cc0;
  undefined8 local_2cb8;
  undefined1 uStack_2cb0;
  undefined7 uStack_2caf;
  undefined1 local_2ca8 [4];
  undefined1 local_2ca4 [12];
  undefined8 local_2c98;
  undefined8 uStack_2c90;
  ulonglong *local_2c88;
  uint local_2c80;
  uint local_2c7c;
  ulonglong local_2c78 [384];
  double local_2078 [1030];
  undefined8 uStack_48;
  
  uStack_48 = 0x144f7ce42;
  local_2c88 = local_2c78;
  local_2c80 = 0;
  local_2c7c = 0x80000040;
  local_2d4c = 0;
  if (0 < param_10) {
    uVar35 = (ulonglong)(int)param_8;
    lVar40 = (longlong)(int)param_9;
    uVar27 = uVar35;
LAB_144f7ced0:
    lVar18 = (longlong)local_2d4c;
    iVar7 = *(int *)(param_3 + 0x10);
    lVar34 = lVar40 * lVar18 + param_6;
    param_7 = 0x400;
    if (param_10 - local_2d4c < 0x400) {
      param_7 = param_10 - local_2d4c;
    }
    uVar29 = (ulonglong)param_7;
    local_2d50 = 0;
LAB_144f7cf14:
    uVar43 = (undefined4)((ulonglong)in_stack_ffffffffffffd1f8 >> 0x20);
    iVar38 = (int)uVar29;
    if (local_2d50 == iVar7) goto LAB_144f7e6f5;
    lVar36 = (longlong)local_2d50 * 0x38 + *(longlong *)(param_3 + 8);
    _Dst = (double *)((ulonglong)*(ushort *)(lVar36 + 0xc) + uVar35 * lVar18 + param_4);
    pdVar41 = (double *)((ulonglong)*(ushort *)(lVar36 + 10) + lVar34);
    switch(*(undefined1 *)(lVar36 + 8)) {
    case 1:
      lVar25 = *(longlong *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(lVar25,local_2cd4);
      lVar28 = 0;
      if (((byte)*puVar14 & 0x1f) == 2) {
        lVar28 = lVar25;
      }
      if (lVar28 == 0) {
        local_2dd0 = (longlong *)0x0;
      }
      else {
        local_2dd0 = (longlong *)FUN_144befdb0(lVar28);
      }
      if (((ulonglong)local_2dd0 & 1) != 0) {
        FUN_144be6b20((ulonglong)local_2dd0 & 0xfffffffffffffffe);
      }
      lVar36 = *(longlong *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(lVar36,local_2cd0);
      lVar25 = 0;
      if (((byte)*puVar14 & 0x1f) == 2) {
        lVar25 = lVar36;
      }
      if (lVar25 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)FUN_144befdb0(lVar25);
      }
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      local_2d60 = (char *)((ulonglong)local_2d60 & 0xffffffff00000000);
      plVar13 = plVar15;
      if (0 < (int)param_7) {
LAB_144f7d1a0:
        param_5 = param_5 & 0xffffff00;
        puVar14 = &param_5;
        plVar13 = (longlong *)((ulonglong)plVar15 & 0xfffffffffffffffe);
        (**(code **)(*plVar13 + 0x30))(plVar13,local_2ccc,pdVar41,lVar25,puVar14);
        plVar26 = (longlong *)((ulonglong)local_2dd0 & 0xfffffffffffffffe);
        in_stack_ffffffffffffd1f8 = (char *)CONCAT71((int7)((ulonglong)puVar14 >> 8),(char)param_5);
        (**(code **)(*plVar26 + 0x28))(plVar26,&local_2d48,_Dst,lVar28,in_stack_ffffffffffffd1f8);
        if (-1 < local_2d48) goto code_r0x000144f7d1fb;
        *param_1 = local_2d48;
        if (((ulonglong)plVar15 & 1) != 0) {
          FUN_144be6b30(plVar13);
        }
        if (((ulonglong)local_2dd0 & 1) != 0) {
          FUN_144be6b30(plVar26);
        }
        puVar10 = local_2c88;
        puVar22 = local_2c88 + (longlong)(int)local_2c80 * 6;
        while (puVar22 != puVar10) {
          puVar22 = puVar22 + -6;
          FUN_144c1a3b0(puVar22);
        }
        goto LAB_144f7e788;
      }
      goto LAB_144f7d260;
    case 2:
      lVar25 = *(longlong *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(lVar25,local_2cc8);
      lVar28 = 0;
      if (((byte)*puVar14 & 0x1f) == 4) {
        lVar28 = lVar25;
      }
      if (lVar28 == 0) {
        local_2dd0 = (longlong *)0x0;
      }
      else {
        local_2dd0 = (longlong *)FUN_144befdb0(lVar28);
      }
      if (((ulonglong)local_2dd0 & 1) != 0) {
        FUN_144be6b20((ulonglong)local_2dd0 & 0xfffffffffffffffe);
      }
      lVar36 = *(longlong *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(lVar36,local_2cc4);
      lVar25 = 0;
      if (((byte)*puVar14 & 0x1f) == 4) {
        lVar25 = lVar36;
      }
      if (lVar25 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)FUN_144befdb0(lVar25);
      }
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      param_5 = 0;
      plVar13 = plVar15;
      if (0 < (int)param_7) {
LAB_144f7d340:
        local_2cb8 = 0;
        uStack_2cb0 = 0;
        plVar13 = (longlong *)((ulonglong)plVar15 & 0xfffffffffffffffe);
        (**(code **)(*plVar13 + 0x30))(plVar13,local_2ca8,pdVar41,lVar25,&local_2cb8);
        uStack_2c90 = CONCAT71(uStack_2caf,uStack_2cb0);
        in_stack_ffffffffffffd1f8 = (char *)&local_2c98;
        plVar26 = (longlong *)((ulonglong)local_2dd0 & 0xfffffffffffffffe);
        local_2c98 = local_2cb8;
        (**(code **)(*plVar26 + 0x28))(plVar26,&local_2d44,_Dst,lVar28,in_stack_ffffffffffffd1f8);
        if (-1 < local_2d44) goto code_r0x000144f7d3ac;
        *param_1 = local_2d44;
        if (((ulonglong)plVar15 & 1) != 0) {
          FUN_144be6b30(plVar13);
        }
        if (((ulonglong)local_2dd0 & 1) != 0) {
          FUN_144be6b30(plVar26);
        }
        puVar10 = local_2c88;
        puVar22 = local_2c88 + (longlong)(int)local_2c80 * 6;
        while (puVar22 != puVar10) {
          puVar22 = puVar22 + -6;
          FUN_144c1a3b0(puVar22);
        }
        goto LAB_144f7e788;
      }
      goto LAB_144f7d260;
    case 3:
      lVar25 = *(longlong *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(lVar25,local_2ca4);
      lVar28 = 0;
      if (((byte)*puVar14 & 0x1f) == 5) {
        lVar28 = lVar25;
      }
      if (lVar28 == 0) {
        local_2dd0 = (longlong *)0x0;
      }
      else {
        local_2dd0 = (longlong *)FUN_144befdb0(lVar28);
      }
      if (((ulonglong)local_2dd0 & 1) != 0) {
        FUN_144be6b20((ulonglong)local_2dd0 & 0xfffffffffffffffe);
      }
      lVar36 = *(longlong *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(lVar36,local_2d20);
      lVar25 = 0;
      if (((byte)*puVar14 & 0x1f) == 5) {
        lVar25 = lVar36;
      }
      if (lVar25 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)FUN_144befdb0(lVar25);
      }
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      param_5 = 0;
      plVar13 = plVar15;
      if (0 < (int)param_7) {
LAB_144f7d4c0:
        local_2d58 = (char *)0x0;
        plVar13 = (longlong *)((ulonglong)plVar15 & 0xfffffffffffffffe);
        (**(code **)(*plVar13 + 0x30))(plVar13,local_2d1c,pdVar41,lVar25,&local_2d58);
        plVar26 = (longlong *)((ulonglong)local_2dd0 & 0xfffffffffffffffe);
        in_stack_ffffffffffffd1f8 = local_2d58;
        (**(code **)(*plVar26 + 0x28))(plVar26,&local_2d40,_Dst,lVar28,local_2d58);
        if (-1 < local_2d40) goto code_r0x000144f7d515;
        *param_1 = local_2d40;
        if (((ulonglong)plVar15 & 1) != 0) {
          FUN_144be6b30(plVar13);
        }
        if (((ulonglong)local_2dd0 & 1) != 0) {
          FUN_144be6b30(plVar26);
        }
        puVar10 = local_2c88;
        puVar22 = local_2c88 + (longlong)(int)local_2c80 * 6;
        while (puVar22 != puVar10) {
          puVar22 = puVar22 + -6;
          FUN_144c1a3b0(puVar22);
        }
        goto LAB_144f7e788;
      }
LAB_144f7d260:
      if (((ulonglong)plVar13 & 1) != 0) {
        FUN_144be6b30((ulonglong)plVar13 & 0xfffffffffffffffe);
      }
      if (((ulonglong)local_2dd0 & 1) == 0) {
LAB_144f7d0e6:
        uVar29 = (ulonglong)param_7;
      }
      else {
        FUN_144be6b30((ulonglong)local_2dd0 & 0xfffffffffffffffe);
        uVar29 = (ulonglong)param_7;
      }
LAB_144f7d6c3:
      uVar27 = (ulonglong)param_8;
      break;
    case 4:
      lVar25 = *(longlong *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(lVar25,local_2d08);
      local_2d70 = 0;
      if (((byte)*puVar14 & 0x1f) == 6) {
        local_2d70 = lVar25;
      }
      local_2d78 = _Dst;
      if (local_2d70 == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = FUN_144befdb0();
      }
      local_2d68 = uVar27;
      if ((uVar27 & 1) != 0) {
        FUN_144be6b20(uVar27 & 0xfffffffffffffffe);
      }
      lVar36 = *(longlong *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(lVar36,local_2d04);
      local_2db0 = 0;
      if (((byte)*puVar14 & 0x1f) == 6) {
        local_2db0 = lVar36;
      }
      local_2db8 = pdVar41;
      if (local_2db0 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)FUN_144befdb0();
      }
      local_2da8 = plVar15;
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      in_stack_ffffffffffffd1f8 = (char *)CONCAT44(uVar43,param_8);
      piVar16 = (int *)FUN_144f78850(param_2,local_2d00,&local_2d78,&local_2db8,
                                     in_stack_ffffffffffffd1f8,param_9,param_7);
      if (-1 < *piVar16) {
        if (((ulonglong)plVar15 & 1) != 0) {
          FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
        }
        if ((uVar27 & 1) == 0) goto LAB_144f7d0e6;
        FUN_144be6b30(uVar27 & 0xfffffffffffffffe);
        uVar29 = (ulonglong)param_7;
        goto LAB_144f7d6c3;
      }
      *param_1 = *piVar16;
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      if ((uVar27 & 1) != 0) {
        FUN_144be6b30(uVar27 & 0xfffffffffffffffe);
      }
      puVar10 = local_2c88;
      puVar22 = local_2c88 + (longlong)(int)local_2c80 * 6;
      while (puVar22 != puVar10) {
        puVar22 = puVar22 + -6;
        FUN_144c1a3b0(puVar22);
      }
      goto LAB_144f7e788;
    case 5:
      if ((int)(local_2c7c & 0x7fffffff) < (int)(local_2c80 + iVar38)) {
        FUN_144c232f0(&local_2c88,&PTR_vftable_14c6e47c0,(longlong)(int)(local_2c80 + iVar38));
      }
      lVar25 = *(longlong *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(lVar25,local_2cfc);
      lVar28 = 0;
      if (((byte)*puVar14 & 0x1f) == 3) {
        lVar28 = lVar25;
      }
      if (lVar28 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)FUN_144befdb0(lVar28);
      }
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      lVar36 = *(longlong *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(lVar36,local_2cf8);
      lVar25 = 0;
      if (((byte)*puVar14 & 0x1f) == 3) {
        lVar25 = lVar36;
      }
      if (lVar25 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)FUN_144befdb0(lVar25);
      }
      if (((ulonglong)plVar13 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar13 & 0xfffffffffffffffe);
      }
      plVar26 = plVar15;
      plVar30 = plVar13;
      uVar27 = (ulonglong)param_7;
      if (0 < (int)param_7) {
        do {
          local_2d88 = uVar27;
          local_2db8 = _Dst;
          local_2db0 = lVar28;
          local_2da8 = plVar26;
          local_2d80 = plVar26;
          if (((ulonglong)plVar26 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar26 & 0xfffffffffffffffe);
          }
          local_2da0 = pdVar41;
          local_2d98 = lVar25;
          local_2d90 = plVar30;
          if (((ulonglong)plVar30 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar30 & 0xfffffffffffffffe);
          }
          param_5 = local_2c80 + 1;
          if ((int)(local_2c7c & 0x7fffffff) < (int)param_5) {
            FUN_144c232f0(&local_2c88,&PTR_vftable_14c6e47c0,(longlong)(int)param_5);
          }
          plVar15 = plVar30;
          if (local_2c88 + (longlong)(int)local_2c80 * 6 != (ulonglong *)0x0) {
            FUN_144c1a3f0(local_2c88 + (longlong)(int)local_2c80 * 6,&local_2db8);
            local_2d80 = local_2da8;
            plVar15 = local_2d90;
          }
          local_2c80 = param_5;
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          if (((ulonglong)local_2d80 & 1) != 0) {
            FUN_144be6b30((ulonglong)local_2d80 & 0xfffffffffffffffe);
          }
          _Dst = (double *)((longlong)_Dst + uVar35);
          plVar15 = (longlong *)((ulonglong)plVar26 & 0xfffffffffffffffe);
          if (((ulonglong)plVar26 & 1) != 0) {
            FUN_144be6b30(plVar15);
          }
          pdVar41 = (double *)((longlong)pdVar41 + lVar40);
          plVar13 = (longlong *)((ulonglong)plVar30 & 0xfffffffffffffffe);
          if (((ulonglong)plVar30 & 1) != 0) {
            local_2da8 = plVar15;
            FUN_144be6b30(plVar13);
          }
          local_2d88 = local_2d88 - 1;
          plVar26 = plVar15;
          plVar30 = plVar13;
          local_2da8 = plVar13;
          uVar27 = local_2d88;
        } while (local_2d88 != 0);
      }
      if (((ulonglong)plVar13 & 1) != 0) {
        FUN_144be6b30((ulonglong)plVar13 & 0xfffffffffffffffe);
      }
      if (((ulonglong)plVar15 & 1) == 0) goto LAB_144f7d0e6;
      uVar27 = (ulonglong)plVar15 & 0xfffffffffffffffe;
      goto LAB_144f7d0dc;
    case 6:
      lVar25 = *(longlong *)(lVar36 + 0x20);
      if (lVar25 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)FUN_144befdb0(lVar25);
      }
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      in_stack_ffffffffffffd1f8 = *(char **)(lVar36 + 0x18);
      if (in_stack_ffffffffffffd1f8 == (char *)0x0) {
        uVar27 = 0;
      }
      else {
        uVar27 = FUN_144befdb0(in_stack_ffffffffffffd1f8);
      }
      param_5 = CONCAT31(param_5._1_3_,(char)uVar27) & 0xffffff01;
      if ((uVar27 & 1) != 0) {
        FUN_144be6b20(uVar27 & 0xfffffffffffffffe);
      }
      piVar16 = (int *)(**(code **)(lVar36 + 0x28))
                                 (local_2cf4,_Dst,lVar25,pdVar41,in_stack_ffffffffffffd1f8,param_7);
      if (*piVar16 < 0) {
        *param_1 = *piVar16;
        if ((char)param_5 != '\0') {
          FUN_144be6b30(uVar27 & 0xfffffffffffffffe);
        }
        if (((ulonglong)plVar15 & 1) != 0) {
          FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
        }
        puVar10 = local_2c88;
        puVar22 = local_2c88 + (longlong)(int)local_2c80 * 6;
        while (puVar22 != puVar10) {
          puVar22 = puVar22 + -6;
          FUN_144c1a3b0(puVar22);
        }
        goto LAB_144f7e788;
      }
      if ((char)param_5 != '\0') goto LAB_144f7d0ca;
      goto LAB_144f7d0cf;
    case 7:
      uVar9 = *(undefined8 *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(uVar9,local_2d18);
      uVar19 = 0;
      if (((byte)*puVar14 & 0x1f) == 4) {
        uVar19 = uVar9;
      }
      FUN_144bef800(uVar19,&local_2d38);
      uVar9 = *(undefined8 *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(uVar9,local_2d14);
      uVar19 = 0;
      if (((byte)*puVar14 & 0x1f) == 4) {
        uVar19 = uVar9;
      }
      FUN_144bef800(uVar19,&local_2d3c);
      uVar17 = (local_2d38 >> 10) + 7;
      uVar39 = (local_2d3c >> 10) + 7;
      uVar21 = uVar17 >> 3;
      param_5 = CONCAT21((short)(local_2d3c >> 0x10),
                         (byte)(local_2d3c >> 8) ^ (byte)(local_2d38 >> 8)) & 0xffffff01;
      uVar11 = uVar39 >> 3;
      iVar12 = uVar21 - uVar11;
      if (iVar12 < 1) {
        if ((local_2d3c >> 8 & 1) != 0) {
          pdVar41 = (double *)((longlong)pdVar41 + (longlong)-iVar12);
        }
        if ((char)param_5 == '\0') {
          uVar27 = (ulonglong)param_8;
          if ((uVar21 == param_8) && (uVar21 == param_9)) {
            FUN_144bfbed0(_Dst,pdVar41,(longlong)(int)(uVar21 * iVar38));
          }
          else {
            uVar32 = (ulonglong)uVar21;
            if (iVar38 < 1) break;
            do {
              if (((uVar17 >> 3 == 0) || (uVar21 < 0x10)) ||
                 ((_Dst <= (double *)(((ulonglong)uVar21 - 1) + (longlong)pdVar41) &&
                  (pdVar41 <= (double *)(((ulonglong)uVar21 - 1) + (longlong)_Dst))))) {
                if (uVar32 != 0) {
                  pdVar33 = _Dst;
                  uVar27 = uVar32;
                  do {
                    *(undefined1 *)pdVar33 =
                         *(undefined1 *)(((longlong)pdVar41 - (longlong)_Dst) + (longlong)pdVar33);
                    pdVar33 = (double *)((longlong)pdVar33 + 1);
                    uVar27 = uVar27 - 1;
                  } while (uVar27 != 0);
                }
              }
              else {
                memcpy(_Dst,pdVar41,uVar32);
              }
              _Dst = (double *)((longlong)_Dst + uVar35);
              pdVar41 = (double *)((longlong)pdVar41 + lVar40);
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
            uVar29 = (ulonglong)param_7;
          }
        }
        else {
          uVar27 = uVar29;
          if (0 < iVar38) {
            do {
              if (uVar21 == 1) {
                *(undefined1 *)_Dst = *(undefined1 *)pdVar41;
              }
              else if (uVar21 == 2) {
                *(ushort *)_Dst = *(ushort *)pdVar41 >> 8 | *(ushort *)pdVar41 << 8;
              }
              else if (uVar21 == 4) {
                fVar2 = *(float *)pdVar41;
                *(uint *)_Dst =
                     (uint)fVar2 >> 0x18 | ((uint)fVar2 & 0xff0000) >> 8 |
                     ((uint)fVar2 & 0xff00) << 8 | (int)fVar2 << 0x18;
              }
              else if (uVar21 == 8) {
                dVar8 = *pdVar41;
                *_Dst = (double)((ulonglong)dVar8 >> 0x38 |
                                 ((ulonglong)dVar8 & 0xff000000000000) >> 0x28 |
                                 ((ulonglong)dVar8 & 0xff0000000000) >> 0x18 |
                                 ((ulonglong)dVar8 & 0xff00000000) >> 8 |
                                 ((ulonglong)dVar8 & 0xff000000) << 8 |
                                 ((ulonglong)dVar8 & 0xff0000) << 0x18 |
                                 ((ulonglong)dVar8 & 0xff00) << 0x28 | (longlong)dVar8 << 0x38);
              }
              pdVar41 = (double *)((longlong)pdVar41 + lVar40);
              _Dst = (double *)((longlong)_Dst + uVar35);
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
        }
      }
      else {
        local_2cc0 = (ulonglong)uVar11 - 1;
        local_2d28 = 0;
        local_2d80 = (longlong *)&DAT_00000001;
        local_2d88 = local_2cc0;
        if ((local_2d38 & 0x100) != 0) {
          local_2d28 = (ulonglong)uVar21 - (ulonglong)uVar11;
          local_2d88 = (ulonglong)uVar11;
          local_2d80 = (longlong *)(longlong)-iVar12;
        }
        uVar27 = (ulonglong)uVar11;
        if (0 < iVar38) {
          uVar17 = local_2d3c >> 9;
          do {
            local_2d60 = (char *)(local_2d88 + (longlong)_Dst);
            local_2d58 = local_2d60 + (longlong)local_2d80;
            puVar22 = (ulonglong *)(local_2d28 + (longlong)_Dst);
            if ((char)param_5 == '\0') {
              if (uVar39 >> 3 == 0) {
                FUN_144bfbed0(puVar22,pdVar41,0);
              }
              else {
                lVar36 = 0;
                if (((uVar39 >> 3 == 0) || (uVar11 < 0x10)) ||
                   ((puVar22 <= (ulonglong *)(local_2cc0 + (longlong)pdVar41) &&
                    (pdVar41 <= (double *)(local_2cc0 + (longlong)puVar22))))) {
                  if (uVar27 != 0) {
                    lVar36 = (longlong)pdVar41 - (longlong)puVar22;
                    uVar32 = uVar27;
                    do {
                      *(undefined1 *)puVar22 = *(undefined1 *)(lVar36 + (longlong)puVar22);
                      puVar22 = (ulonglong *)((longlong)puVar22 + 1);
                      uVar32 = uVar32 - 1;
                    } while (uVar32 != 0);
                  }
                }
                else {
                  memcpy(puVar22,pdVar41,uVar27);
                  do {
                    lVar36 = lVar36 + 1;
                  } while (lVar36 < (longlong)uVar27);
                }
              }
            }
            else if (uVar11 == 1) {
              *(undefined1 *)puVar22 = *(undefined1 *)pdVar41;
            }
            else if (uVar11 == 2) {
              *(ushort *)puVar22 = *(ushort *)pdVar41 >> 8 | *(ushort *)pdVar41 << 8;
            }
            else if (uVar11 == 4) {
              fVar2 = *(float *)pdVar41;
              *(uint *)puVar22 =
                   (uint)fVar2 >> 0x18 | ((uint)fVar2 & 0xff0000) >> 8 | ((uint)fVar2 & 0xff00) << 8
                   | (int)fVar2 << 0x18;
            }
            else if (uVar11 == 8) {
              dVar8 = *pdVar41;
              *puVar22 = (ulonglong)dVar8 >> 0x38 | ((ulonglong)dVar8 & 0xff000000000000) >> 0x28 |
                         ((ulonglong)dVar8 & 0xff0000000000) >> 0x18 |
                         ((ulonglong)dVar8 & 0xff00000000) >> 8 |
                         ((ulonglong)dVar8 & 0xff000000) << 8 |
                         ((ulonglong)dVar8 & 0xff0000) << 0x18 | ((ulonglong)dVar8 & 0xff00) << 0x28
                         | (longlong)dVar8 << 0x38;
            }
            if ((uVar17 & 1) != 0) {
              FUN_144bfbef0(local_2d58,*local_2d60 >> 7,(ulonglong)uVar21 - (ulonglong)uVar11);
            }
            _Dst = (double *)((longlong)_Dst + uVar35);
            pdVar41 = (double *)((longlong)pdVar41 + lVar40);
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          uVar29 = (ulonglong)param_7;
        }
      }
      goto LAB_144f7d6c3;
    case 8:
      uVar9 = *(undefined8 *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(uVar9,local_2d10);
      uVar19 = 0;
      if (((byte)*puVar14 & 0x1f) == 5) {
        uVar19 = uVar9;
      }
      FUN_144bef800(uVar19,local_2d30);
      uVar9 = *(undefined8 *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(uVar9,local_2d0c);
      uVar19 = 0;
      if (((byte)*puVar14 & 0x1f) == 5) {
        uVar19 = uVar9;
      }
      FUN_144bef800(uVar19,&local_2d34);
      pdVar33 = local_2078;
      if ((local_2d34 >> 8 & 1) == 0) {
        pdVar33 = pdVar41;
      }
      uVar21 = local_2d34;
      uVar17 = param_9;
      if ((local_2d34 & 0x100) != 0) {
        uVar17 = 8;
        pdVar20 = (double *)((longlong)local_2078 + (longlong)(iVar38 * 8));
        uVar21 = (local_2d34 >> 0xb & 0x1f) + 7 +
                 (local_2d34 >> 10 & 1) + (local_2d34 >> 0x10 & 0xff) >> 3;
        if (uVar21 == 1) {
          for (pdVar23 = local_2078; pdVar23 < pdVar20; pdVar23 = pdVar23 + 1) {
            uVar3 = *(undefined1 *)pdVar41;
            pdVar41 = (double *)((longlong)pdVar41 + lVar40);
            *(undefined1 *)pdVar23 = uVar3;
          }
        }
        else if (uVar21 == 2) {
          for (pdVar23 = local_2078; pdVar23 < pdVar20; pdVar23 = pdVar23 + 1) {
            uVar6 = *(ushort *)pdVar41;
            pdVar41 = (double *)((longlong)pdVar41 + lVar40);
            *(ushort *)pdVar23 = uVar6 >> 8 | uVar6 << 8;
          }
        }
        else if (uVar21 == 4) {
          for (pdVar23 = local_2078; pdVar23 < pdVar20; pdVar23 = pdVar23 + 1) {
            fVar2 = *(float *)pdVar41;
            pdVar41 = (double *)((longlong)pdVar41 + lVar40);
            *(uint *)pdVar23 =
                 (uint)fVar2 >> 0x18 | ((uint)fVar2 & 0xff0000) >> 8 | ((uint)fVar2 & 0xff00) << 8 |
                 (int)fVar2 << 0x18;
          }
        }
        else if (uVar21 == 8) {
          for (pdVar23 = local_2078; pdVar23 < pdVar20; pdVar23 = pdVar23 + 1) {
            dVar8 = *pdVar41;
            pdVar41 = (double *)((longlong)pdVar41 + lVar40);
            *pdVar23 = (double)((ulonglong)dVar8 >> 0x38 |
                                ((ulonglong)dVar8 & 0xff000000000000) >> 0x28 |
                                ((ulonglong)dVar8 & 0xff0000000000) >> 0x18 |
                                ((ulonglong)dVar8 & 0xff00000000) >> 8 |
                                ((ulonglong)dVar8 & 0xff000000) << 8 |
                                ((ulonglong)dVar8 & 0xff0000) << 0x18 |
                                ((ulonglong)dVar8 & 0xff00) << 0x28 | (longlong)dVar8 << 0x38);
          }
        }
        uVar21 = local_2d34 & 0xfffffeff;
      }
      pdVar41 = local_2078;
      if ((local_2d30[0] >> 8 & 1) == 0) {
        pdVar41 = _Dst;
      }
      uVar39 = param_8;
      if ((local_2d30[0] & 0x100) != 0) {
        uVar39 = 8;
      }
      uVar11 = local_2d30[0] & 0xfffffeff;
      if (uVar21 == 0x74605) {
        if (uVar11 == 0x74605) {
          pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41);
          if (pdVar41 < pdVar20) {
            do {
              uVar5 = *(undefined2 *)pdVar33;
              pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
              *(undefined2 *)pdVar41 = uVar5;
              pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
            } while (pdVar41 < pdVar20);
          }
        }
        else if (uVar11 == 0x174605) {
          pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41);
          if (pdVar41 < pdVar20) {
            do {
              sVar4 = *(short *)pdVar33;
              pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
              *(int *)pdVar41 = (int)sVar4 << 0x10;
              pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
            } while (pdVar41 < pdVar20);
          }
        }
        else if ((uVar11 == 0x345e05) &&
                (pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41),
                pdVar41 < pdVar20)) {
          do {
            sVar4 = *(short *)pdVar33;
            pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
            *pdVar41 = (double)(float)((int)sVar4 << 0x10);
            pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
          } while (pdVar41 < pdVar20);
        }
      }
      else if (uVar21 == 0x174605) {
        if (uVar11 == 0x74605) {
          pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41);
          if (pdVar41 < pdVar20) {
            do {
              fVar2 = *(float *)pdVar33;
              pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
              *(short *)pdVar41 = (short)((uint)(fVar2 * 1.0039062) >> 0x10);
              pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
            } while (pdVar41 < pdVar20);
          }
        }
        else if (uVar11 == 0x174605) {
          pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41);
          if (pdVar41 < pdVar20) {
            do {
              fVar2 = *(float *)pdVar33;
              pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
              *(float *)pdVar41 = fVar2;
              pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
            } while (pdVar41 < pdVar20);
          }
        }
        else if ((uVar11 == 0x345e05) &&
                (pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41),
                pdVar41 < pdVar20)) {
          do {
            fVar2 = *(float *)pdVar33;
            pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
            *pdVar41 = (double)fVar2;
            pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
          } while (pdVar41 < pdVar20);
        }
      }
      else if (uVar21 == 0x345e05) {
        if (uVar11 == 0x74605) {
          pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41);
          if (pdVar41 < pdVar20) {
            do {
              dVar8 = *pdVar33;
              pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
              *(short *)pdVar41 = (short)((uint)((float)dVar8 * 1.0039062) >> 0x10);
              pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
            } while (pdVar41 < pdVar20);
          }
        }
        else if (uVar11 == 0x174605) {
          pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41);
          if (pdVar41 < pdVar20) {
            do {
              dVar8 = *pdVar33;
              pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
              *(float *)pdVar41 = (float)dVar8;
              pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
            } while (pdVar41 < pdVar20);
          }
        }
        else if ((uVar11 == 0x345e05) &&
                (pdVar20 = (double *)((longlong)(int)(uVar39 * param_7) + (longlong)pdVar41),
                pdVar41 < pdVar20)) {
          do {
            dVar8 = *pdVar33;
            pdVar33 = (double *)((longlong)pdVar33 + (longlong)(int)uVar17);
            *pdVar41 = dVar8;
            pdVar41 = (double *)((longlong)pdVar41 + (longlong)(int)uVar39);
          } while (pdVar41 < pdVar20);
        }
      }
      uVar27 = (ulonglong)param_8;
      uVar29 = (ulonglong)param_7;
      if ((local_2d30[0] & 0x100) != 0) {
        pdVar41 = local_2078;
        pdVar33 = (double *)((longlong)(int)(param_7 * param_8) + (longlong)_Dst);
        uVar17 = (local_2d30[0] >> 0xb & 0x1f) + 7 +
                 (local_2d30[0] >> 10 & 1) + (local_2d30[0] >> 0x10 & 0xff) >> 3;
        if (uVar17 == 1) {
          pdVar41 = local_2078;
          for (; _Dst < pdVar33; _Dst = (double *)((longlong)_Dst + uVar35)) {
            uVar3 = *(undefined1 *)pdVar41;
            pdVar41 = pdVar41 + 1;
            *(undefined1 *)_Dst = uVar3;
          }
        }
        else if (uVar17 == 2) {
          for (; _Dst < pdVar33; _Dst = (double *)((longlong)_Dst + uVar35)) {
            uVar6 = *(ushort *)pdVar41;
            pdVar41 = pdVar41 + 1;
            *(ushort *)_Dst = uVar6 >> 8 | uVar6 << 8;
          }
        }
        else if (uVar17 == 4) {
          for (; _Dst < pdVar33; _Dst = (double *)((longlong)_Dst + uVar35)) {
            uVar17 = *(uint *)pdVar41;
            pdVar41 = pdVar41 + 1;
            *(uint *)_Dst =
                 uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18
            ;
          }
        }
        else if (uVar17 == 8) {
          for (; _Dst < pdVar33; _Dst = (double *)((longlong)_Dst + uVar35)) {
            dVar8 = *pdVar41;
            pdVar41 = pdVar41 + 1;
            *_Dst = (double)((ulonglong)dVar8 >> 0x38 |
                             ((ulonglong)dVar8 & 0xff000000000000) >> 0x28 |
                             ((ulonglong)dVar8 & 0xff0000000000) >> 0x18 |
                             ((ulonglong)dVar8 & 0xff00000000) >> 8 |
                             ((ulonglong)dVar8 & 0xff000000) << 8 |
                             ((ulonglong)dVar8 & 0xff0000) << 0x18 |
                             ((ulonglong)dVar8 & 0xff00) << 0x28 | (longlong)dVar8 << 0x38);
          }
        }
      }
      break;
    case 9:
      FUN_144beec90(*(undefined8 *)(lVar36 + 0x18));
      FUN_144beec90(*(undefined8 *)(lVar36 + 0x20));
      uVar9 = *(undefined8 *)(lVar36 + 0x20);
      iVar38 = FUN_144beec90(*(undefined8 *)(lVar36 + 0x18));
      iVar12 = FUN_144beec90(uVar9);
      uVar27 = (ulonglong)param_8;
      pdVar33 = (double *)((longlong)(int)(param_7 * param_8) + (longlong)_Dst);
      for (; _Dst < pdVar33; _Dst = (double *)((longlong)_Dst + uVar35)) {
        if (iVar38 == 1) {
          bVar42 = *(char *)pdVar41 == '\0';
        }
        else if (iVar38 == 2) {
          bVar42 = *(short *)pdVar41 == 0;
        }
        else if (iVar38 == 4) {
          bVar42 = *(float *)pdVar41 == 0.0;
        }
        else {
          bVar42 = *pdVar41 == 0.0;
        }
        bVar42 = !bVar42;
        if (iVar12 == 1) {
          *(bool *)_Dst = bVar42;
        }
        else if (iVar12 == 2) {
          *(ushort *)_Dst = (ushort)bVar42;
        }
        else if (iVar12 == 4) {
          *(uint *)_Dst = (uint)bVar42;
        }
        else {
          *_Dst = (double)(ulonglong)bVar42;
        }
        pdVar41 = (double *)((longlong)pdVar41 + lVar40);
      }
      uVar29 = (ulonglong)param_7;
      break;
    case 10:
      FUN_144beec90(*(undefined8 *)(lVar36 + 0x18));
      FUN_144beec90(*(undefined8 *)(lVar36 + 0x20));
      local_2db0 = *(longlong *)(lVar36 + 0x20);
      lVar36 = *(longlong *)(lVar36 + 0x18);
      if (local_2db0 == 0) {
        local_2da8 = (longlong *)0x0;
        local_2db8 = _Dst;
      }
      else {
        local_2db8 = _Dst;
        local_2da8 = (longlong *)FUN_144befdb0();
      }
      if (((ulonglong)local_2da8 & 1) != 0) {
        FUN_144be6b20((ulonglong)local_2da8 & 0xfffffffffffffffe);
      }
      local_2d70 = lVar36;
      if (lVar36 == 0) {
        local_2d68 = 0;
        local_2d78 = pdVar41;
      }
      else {
        local_2d78 = pdVar41;
        local_2d68 = FUN_144befdb0(lVar36);
      }
      if ((local_2d68 & 1) != 0) {
        FUN_144be6b20(local_2d68 & 0xfffffffffffffffe);
      }
      if (0 < iVar38) {
        do {
          FUN_144f685c0(param_2,&local_2db8,&local_2d78);
          local_2db8 = (double *)((longlong)local_2db8 + uVar35);
          plVar15 = (longlong *)((ulonglong)local_2da8 & 0xfffffffffffffffe);
          if (((ulonglong)local_2da8 & 1) != 0) {
            uVar27 = (ulonglong)local_2da8 & 0xfffffffffffffffe;
            local_2da8 = (longlong *)((ulonglong)local_2da8 & 0xfffffffffffffffe);
            FUN_144be6b30(uVar27);
            plVar15 = local_2da8;
          }
          local_2da8 = plVar15;
          local_2d78 = (double *)((longlong)local_2d78 + lVar40);
          uVar27 = local_2d68 & 0xfffffffffffffffe;
          if ((local_2d68 & 1) != 0) {
            uVar27 = local_2d68 & 0xfffffffffffffffe;
            local_2d68 = local_2d68 & 0xfffffffffffffffe;
            FUN_144be6b30(uVar27);
            uVar27 = local_2d68;
          }
          local_2d68 = uVar27;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        uVar29 = (ulonglong)param_7;
      }
      if ((local_2d68 & 1) != 0) {
        FUN_144be6b30(local_2d68 & 0xfffffffffffffffe);
      }
      if (((ulonglong)local_2da8 & 1) != 0) {
        FUN_144be6b30((ulonglong)local_2da8 & 0xfffffffffffffffe);
      }
      goto LAB_144f7d6c3;
    case 0xb:
      lVar25 = *(longlong *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(lVar25,local_2ce4);
      lVar28 = 0;
      if (((byte)*puVar14 & 0x1f) == 8) {
        lVar28 = lVar25;
      }
      puVar14 = (undefined4 *)FUN_144bef800(lVar28,local_2ce0);
      local_2db0 = 0;
      if (((byte)*puVar14 & 0x1f) == 8) {
        local_2db0 = lVar28;
      }
      if (local_2db0 == 0) {
        plVar15 = (longlong *)0x0;
        local_2db8 = _Dst;
      }
      else {
        local_2db8 = _Dst;
        plVar15 = (longlong *)FUN_144befdb0();
      }
      local_2da8 = plVar15;
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      lVar36 = *(longlong *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(lVar36,local_2cdc);
      local_2d70 = 0;
      if (((byte)*puVar14 & 0x1f) == 8) {
        local_2d70 = lVar36;
      }
      if (local_2d70 == 0) {
        uVar27 = 0;
        local_2d78 = pdVar41;
      }
      else {
        local_2d78 = pdVar41;
        uVar27 = FUN_144befdb0();
      }
      local_2d68 = uVar27;
      if ((uVar27 & 1) != 0) {
        FUN_144be6b20(uVar27 & 0xfffffffffffffffe);
      }
      iVar38 = 0;
      plVar13 = plVar15;
      uVar29 = uVar27;
      if (0 < (int)param_7) {
LAB_144f7d030:
        piVar16 = (int *)FUN_144f78a40(param_2,local_2cd8,&local_2db8,&local_2d78);
        if (-1 < *piVar16) goto code_r0x000144f7d053;
        *param_1 = *piVar16;
        if ((uVar29 & 1) != 0) {
          FUN_144be6b30(uVar29 & 0xfffffffffffffffe);
        }
        if (((ulonglong)plVar13 & 1) != 0) {
          FUN_144be6b30((ulonglong)plVar13 & 0xfffffffffffffffe);
        }
        puVar10 = local_2c88;
        puVar22 = local_2c88 + (longlong)(int)local_2c80 * 6;
        while (puVar22 != puVar10) {
          puVar22 = puVar22 + -6;
          FUN_144c1a3b0(puVar22);
        }
        goto LAB_144f7e788;
      }
LAB_144f7d0bd:
      if ((uVar27 & 1) != 0) {
LAB_144f7d0ca:
        FUN_144be6b30(uVar27 & 0xfffffffffffffffe);
      }
LAB_144f7d0cf:
      if (((ulonglong)plVar15 & 1) != 0) {
        uVar27 = (ulonglong)plVar15 & 0xfffffffffffffffe;
LAB_144f7d0dc:
        FUN_144be6b30(uVar27);
      }
      goto LAB_144f7d0e6;
    case 0xc:
      lVar25 = *(longlong *)(lVar36 + 0x20);
      puVar14 = (undefined4 *)FUN_144bef800(lVar25,local_2cf0);
      lVar28 = 0;
      if (((byte)*puVar14 & 0x1f) == 7) {
        lVar28 = lVar25;
      }
      puVar14 = (undefined4 *)FUN_144bef800(lVar28,local_2cec);
      lVar25 = 0;
      if (((byte)*puVar14 & 0x1f) == 7) {
        lVar25 = lVar28;
      }
      if (lVar25 == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = FUN_144befdb0(lVar25);
      }
      if ((uVar27 & 1) != 0) {
        FUN_144be6b20(uVar27 & 0xfffffffffffffffe);
      }
      lVar36 = *(longlong *)(lVar36 + 0x18);
      puVar14 = (undefined4 *)FUN_144bef800(lVar36,local_2ce8);
      lVar28 = 0;
      if (((byte)*puVar14 & 0x1f) == 7) {
        lVar28 = lVar36;
      }
      if (lVar28 == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)FUN_144befdb0(lVar28);
      }
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      plVar13 = plVar15;
      uVar29 = uVar27;
      uVar32 = (ulonglong)param_7;
      if (0 < (int)param_7) {
        do {
          local_2d88 = uVar32;
          local_2d80 = *(longlong **)(param_2 + 0x288);
          param_5 = (int)local_2d80[1] + 1;
          if ((int)(*(uint *)((longlong)local_2d80 + 0xc) & 0x7fffffff) < (int)param_5) {
            FUN_144f81b20(local_2d80,&PTR_vftable_14c6e47a0,(longlong)(int)param_5);
          }
          puVar37 = (undefined8 *)((longlong)(int)local_2d80[1] * 0x30 + *local_2d80);
          if (puVar37 != (undefined8 *)0x0) {
            *puVar37 = _Dst;
            puVar37[1] = lVar25;
            puVar37[2] = uVar29;
            if ((uVar29 & 1) != 0) {
              FUN_144be6b20(uVar29 & 0xfffffffffffffffe);
            }
            puVar37[3] = pdVar41;
            puVar37[4] = lVar28;
            puVar37[5] = plVar13;
            if (((ulonglong)plVar13 & 1) != 0) {
              FUN_144be6b20((ulonglong)plVar13 & 0xfffffffffffffffe);
            }
          }
          _Dst = (double *)((longlong)_Dst + uVar35);
          uVar27 = uVar29 & 0xfffffffffffffffe;
          *(uint *)(local_2d80 + 1) = param_5;
          if ((uVar29 & 1) != 0) {
            FUN_144be6b30(uVar27);
          }
          pdVar41 = (double *)((longlong)pdVar41 + lVar40);
          plVar15 = (longlong *)((ulonglong)plVar13 & 0xfffffffffffffffe);
          if (((ulonglong)plVar13 & 1) != 0) {
            local_2da8 = (longlong *)uVar27;
            FUN_144be6b30(plVar15);
          }
          local_2d88 = local_2d88 - 1;
          plVar13 = plVar15;
          uVar29 = uVar27;
          local_2da8 = plVar15;
          uVar32 = local_2d88;
        } while (local_2d88 != 0);
      }
      if (((ulonglong)plVar15 & 1) != 0) {
        FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
      }
      if ((uVar27 & 1) != 0) {
        uVar27 = uVar27 & 0xfffffffffffffffe;
        goto LAB_144f7d0dc;
      }
      goto LAB_144f7d0e6;
    case 0xd:
      uVar17 = *(uint *)(lVar36 + 0x18);
      _Size = (size_t)(int)uVar17;
      if ((uVar17 == (uint)uVar27) && (uVar17 == param_9)) {
        FUN_144bfbed0(_Dst,pdVar41,(longlong)(int)(uVar17 * iVar38));
        goto LAB_144f7d6c3;
      }
      if (0 < (int)param_7) {
        uVar27 = (ulonglong)param_7;
        do {
          if ((((int)uVar17 < 1) || (uVar17 < 0x10)) ||
             ((_Dst <= (double *)((longlong)pdVar41 + (longlong)(int)(uVar17 - 1)) &&
              (pdVar41 <= (double *)((longlong)_Dst + (longlong)(int)(uVar17 - 1)))))) {
            if (0 < (longlong)_Size) {
              pdVar33 = _Dst;
              sVar24 = _Size;
              do {
                *(undefined1 *)pdVar33 =
                     *(undefined1 *)(((longlong)pdVar41 - (longlong)_Dst) + (longlong)pdVar33);
                pdVar33 = (double *)((longlong)pdVar33 + 1);
                sVar24 = sVar24 - 1;
              } while (sVar24 != 0);
            }
          }
          else {
            memcpy(_Dst,pdVar41,_Size);
          }
          _Dst = (double *)((longlong)_Dst + uVar35);
          pdVar41 = (double *)((longlong)pdVar41 + lVar40);
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
        uVar29 = (ulonglong)param_7;
        goto LAB_144f7d6c3;
      }
      uVar29 = (ulonglong)param_7;
      local_2d50 = local_2d50 + 1;
      goto LAB_144f7cf14;
    }
    local_2d50 = local_2d50 + 1;
    goto LAB_144f7cf14;
  }
LAB_144f7e9ad:
  puVar31 = local_2c88 + (longlong)(int)local_2c80 * 6;
  puVar22 = local_2c88;
  puVar10 = local_2c88;
joined_r0x000144f7e9c9:
  local_2c88 = puVar10;
  if (puVar22 != puVar31) {
    piVar16 = (int *)FUN_144f78780(param_2,&param_10,puVar22,puVar22 + 3);
    puVar10 = local_2c88;
    if (-1 < *piVar16) goto code_r0x000144f7e9f0;
    *param_1 = *piVar16;
    if (local_2c88 + (longlong)(int)local_2c80 * 6 != local_2c88) {
      puVar22 = local_2c88 + (longlong)(int)local_2c80 * 6 + 2;
      do {
        puVar31 = puVar22 + -6;
        if ((puVar22[-3] & 1) != 0) {
          FUN_144be6b30(puVar22[-3] & 0xfffffffffffffffe);
        }
        if ((*puVar31 & 1) != 0) {
          FUN_144be6b30(*puVar31 & 0xfffffffffffffffe);
        }
        puVar1 = puVar22 + -8;
        puVar22 = puVar31;
      } while (puVar1 != puVar10);
    }
LAB_144f7e788:
    if ((int)local_2c7c < 0) {
      return param_1;
    }
    goto LAB_144f7ea7c;
  }
  *param_1 = 0;
  if (puVar10 + (longlong)(int)local_2c80 * 6 != puVar10) {
    puVar22 = puVar10 + (longlong)(int)local_2c80 * 6 + 2;
    do {
      puVar31 = puVar22 + -6;
      if ((puVar22[-3] & 1) != 0) {
        FUN_144be6b30(puVar22[-3] & 0xfffffffffffffffe);
      }
      if ((*puVar31 & 1) != 0) {
        FUN_144be6b30(*puVar31 & 0xfffffffffffffffe);
      }
      puVar1 = puVar22 + -8;
      puVar22 = puVar31;
    } while (puVar1 != puVar10);
  }
  if (-1 < (int)local_2c7c) {
LAB_144f7ea7c:
    local_2c80 = 0;
    if (local_2c88 != (ulonglong *)0x0) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_2c88,(ulonglong)(local_2c7c & 0x7fffffff) * 0x30);
    }
  }
  return param_1;
LAB_144f7e6f5:
  local_2d4c = local_2d4c + iVar38;
  if (param_10 <= local_2d4c) goto LAB_144f7e9ad;
  goto LAB_144f7ced0;
code_r0x000144f7d053:
  _Dst = (double *)((longlong)_Dst + uVar35);
  plVar15 = (longlong *)((ulonglong)plVar13 & 0xfffffffffffffffe);
  local_2db8 = _Dst;
  if (((ulonglong)plVar13 & 1) != 0) {
    FUN_144be6b30(plVar15);
  }
  pdVar41 = (double *)((longlong)pdVar41 + lVar40);
  uVar27 = uVar29 & 0xfffffffffffffffe;
  if ((uVar29 & 1) != 0) {
    local_2da8 = plVar15;
    local_2d78 = pdVar41;
    FUN_144be6b30(uVar27);
  }
  iVar38 = iVar38 + 1;
  plVar13 = plVar15;
  uVar29 = uVar27;
  local_2db8 = _Dst;
  local_2da8 = plVar15;
  local_2d78 = pdVar41;
  local_2d68 = uVar27;
  if ((int)param_7 <= iVar38) goto LAB_144f7d0bd;
  goto LAB_144f7d030;
code_r0x000144f7d515:
  _Dst = (double *)((longlong)_Dst + uVar35);
  if (((ulonglong)local_2dd0 & 1) != 0) {
    FUN_144be6b30(plVar26);
  }
  pdVar41 = (double *)((longlong)pdVar41 + lVar40);
  if (((ulonglong)plVar15 & 1) != 0) {
    local_2da8 = plVar26;
    FUN_144be6b30(plVar13);
  }
  param_5 = param_5 + 1;
  plVar15 = plVar13;
  local_2dd0 = plVar26;
  local_2da8 = plVar13;
  if ((int)param_7 <= (int)param_5) goto LAB_144f7d260;
  goto LAB_144f7d4c0;
code_r0x000144f7d3ac:
  _Dst = (double *)((longlong)_Dst + uVar35);
  if (((ulonglong)local_2dd0 & 1) != 0) {
    FUN_144be6b30(plVar26);
  }
  pdVar41 = (double *)((longlong)pdVar41 + lVar40);
  if (((ulonglong)plVar15 & 1) != 0) {
    local_2da8 = plVar26;
    FUN_144be6b30(plVar13);
  }
  param_5 = param_5 + 1;
  plVar15 = plVar13;
  local_2dd0 = plVar26;
  local_2da8 = plVar13;
  if ((int)param_7 <= (int)param_5) goto LAB_144f7d260;
  goto LAB_144f7d340;
code_r0x000144f7d1fb:
  _Dst = (double *)((longlong)_Dst + uVar35);
  if (((ulonglong)local_2dd0 & 1) != 0) {
    FUN_144be6b30(plVar26);
  }
  pdVar41 = (double *)((longlong)pdVar41 + lVar40);
  if (((ulonglong)plVar15 & 1) != 0) {
    local_2da8 = plVar26;
    FUN_144be6b30(plVar13);
  }
  iVar38 = (int)local_2d60 + 1;
  local_2d60 = (char *)CONCAT44(local_2d60._4_4_,iVar38);
  plVar15 = plVar13;
  local_2dd0 = plVar26;
  local_2da8 = plVar13;
  if ((int)param_7 <= iVar38) goto LAB_144f7d260;
  goto LAB_144f7d1a0;
code_r0x000144f7e9f0:
  puVar22 = puVar22 + 6;
  goto joined_r0x000144f7e9c9;
}



// FUNCTION 144f7eb70 FUN_144f7eb70 body=729 status=ok
// SIG undefined FUN_144f7eb70(void)

void FUN_144f7eb70(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 *local_238;
  undefined8 local_228 [2];
  undefined8 local_218;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  code *local_200;
  undefined8 *local_1f8;
  code *local_1f0;
  undefined8 *local_1e8;
  code *local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  local_218 = 0;
  uStack_210 = uStack_210 & 0xffffff00;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_res10,*param_2,param_2[1],
             &local_218);
  if ((int)local_res10 < 0) {
    if ((DAT_14c7990e8 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f7ee2a;
    cVar1 = FUN_144bdbf80();
    local_238 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(&local_208);
      local_248 = 1;
      uStack_240 = FUN_144f822b0;
      lVar3 = FUN_144bdc480(uVar2,"Failed to get value from Var \'{}\'",&local_248,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x1f5;
      FUN_144bdc690(&local_208);
      goto LAB_144f7ee2a;
    }
    uVar2 = FUN_144bdc810(local_168,&DAT_14c799098,2);
    local_248 = 1;
    uStack_240 = FUN_144f822b0;
    lVar3 = FUN_144bdc480(uVar2,"Failed to get value from Var \'{}\'",&local_248,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x1f5;
  }
  else {
    local_248 = local_218;
    uStack_240 = (code *)CONCAT44(uStack_20c,uStack_210);
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),&local_res10,*param_3,param_3[1],
               &local_248);
    if (-1 < (int)local_res10) {
      return;
    }
    if ((DAT_14c7990e8 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f7ee2a;
    cVar1 = FUN_144bdbf80();
    local_res20 = param_3[1];
    local_res10 = param_2[1];
    local_1f8 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(local_1b8,&DAT_14c799098);
      local_208 = 3;
      local_200 = FUN_144f822b0;
      local_1e8 = &local_res10;
      local_1f0 = FUN_144f82320;
      local_1e0 = FUN_144f82320;
      local_1d8 = &local_res20;
      lVar3 = FUN_144bdc480(uVar2,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                            &local_208,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x1fa;
      FUN_144bdc690(local_1b8);
      goto LAB_144f7ee2a;
    }
    local_248 = local_res20;
    local_228[0] = local_res10;
    uVar2 = FUN_144bdc810(local_168,&DAT_14c799098,2);
    local_208 = 3;
    local_200 = FUN_144f822b0;
    local_1e8 = local_228;
    local_1f0 = FUN_144f82320;
    local_1e0 = FUN_144f82320;
    local_1d8 = &local_248;
    lVar3 = FUN_144bdc480(uVar2,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                          &local_208,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x1fa;
  }
  *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_144bdc8a0(local_168);
LAB_144f7ee2a:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  return;
}



// FUNCTION 144f7ee50 FUN_144f7ee50 body=722 status=ok
// SIG undefined FUN_144f7ee50(void)

void FUN_144f7ee50(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_238;
  code *local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  code *local_200;
  undefined8 *local_1f8;
  code *local_1f0;
  undefined8 *local_1e8;
  code *local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  local_res20 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_res10,*param_2,param_2[1],
             &local_res20);
  if ((int)local_res10 < 0) {
    if ((DAT_14c7990e8 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f7f103;
    cVar1 = FUN_144bdbf80();
    local_228 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(&local_208);
      local_238 = 1;
      local_230 = FUN_144f82390;
      lVar3 = FUN_144bdc480(uVar2,"Failed to get value from Var \'{}\'",&local_238,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x1f5;
      FUN_144bdc690(&local_208);
      goto LAB_144f7f103;
    }
    uVar2 = FUN_144bdc810(local_168,&DAT_14c799098,2);
    local_238 = 1;
    local_230 = FUN_144f82390;
    lVar3 = FUN_144bdc480(uVar2,"Failed to get value from Var \'{}\'",&local_238,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x1f5;
  }
  else {
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),&local_res10,*param_3,param_3[1],
               local_res20);
    if (-1 < (int)local_res10) {
      return;
    }
    if ((DAT_14c7990e8 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f7f103;
    cVar1 = FUN_144bdbf80();
    local_220 = param_3[1];
    local_res10 = param_2[1];
    local_1f8 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(local_1b8,&DAT_14c799098);
      local_208 = 3;
      local_200 = FUN_144f82390;
      local_1e8 = &local_res10;
      local_1f0 = FUN_144f82400;
      local_1e0 = FUN_144f82400;
      local_1d8 = &local_220;
      lVar3 = FUN_144bdc480(uVar2,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                            &local_208,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x1fa;
      FUN_144bdc690(local_1b8);
      goto LAB_144f7f103;
    }
    local_218 = local_res10;
    local_210 = local_220;
    uVar2 = FUN_144bdc810(local_168,&DAT_14c799098,2);
    local_208 = 3;
    local_200 = FUN_144f82390;
    local_1e8 = &local_218;
    local_1f0 = FUN_144f82400;
    local_1e0 = FUN_144f82400;
    local_1d8 = &local_210;
    lVar3 = FUN_144bdc480(uVar2,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                          &local_208,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x1fa;
  }
  *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_144bdc8a0(local_168);
LAB_144f7f103:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  return;
}



// FUNCTION 144f7f130 FUN_144f7f130 body=720 status=ok
// SIG undefined FUN_144f7f130(void)

void FUN_144f7f130(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_238;
  code *local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  code *local_200;
  undefined8 *local_1f8;
  code *local_1f0;
  undefined8 *local_1e8;
  code *local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  local_res20 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_res10,*param_2,param_2[1],
             &local_res20);
  if ((int)local_res10 < 0) {
    if ((DAT_14c7990e8 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f7f3e1;
    cVar1 = FUN_144bdbf80();
    local_228 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(&local_208);
      local_238 = 1;
      local_230 = FUN_144f82470;
      lVar3 = FUN_144bdc480(uVar2,"Failed to get value from Var \'{}\'",&local_238,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x1f5;
      FUN_144bdc690(&local_208);
      goto LAB_144f7f3e1;
    }
    uVar2 = FUN_144bdc810(local_168,&DAT_14c799098,2);
    local_238 = 1;
    local_230 = FUN_144f82470;
    lVar3 = FUN_144bdc480(uVar2,"Failed to get value from Var \'{}\'",&local_238,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x1f5;
  }
  else {
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),&local_res10,*param_3,param_3[1],
               local_res20);
    if (-1 < (int)local_res10) {
      return;
    }
    if ((DAT_14c7990e8 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f7f3e1;
    cVar1 = FUN_144bdbf80();
    local_220 = param_3[1];
    local_res10 = param_2[1];
    local_1f8 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(local_1b8,&DAT_14c799098);
      local_208 = 3;
      local_200 = FUN_144f82470;
      local_1e8 = &local_res10;
      local_1f0 = FUN_144f824e0;
      local_1e0 = FUN_144f824e0;
      local_1d8 = &local_220;
      lVar3 = FUN_144bdc480(uVar2,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                            &local_208,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x1fa;
      FUN_144bdc690(local_1b8);
      goto LAB_144f7f3e1;
    }
    local_218 = local_res10;
    local_210 = local_220;
    uVar2 = FUN_144bdc810(local_168,&DAT_14c799098,2);
    local_208 = 3;
    local_200 = FUN_144f82470;
    local_1e8 = &local_218;
    local_1f0 = FUN_144f824e0;
    local_1e0 = FUN_144f824e0;
    local_1d8 = &local_210;
    lVar3 = FUN_144bdc480(uVar2,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                          &local_208,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x1fa;
  }
  *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_144bdc8a0(local_168);
LAB_144f7f3e1:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  return;
}



// FUNCTION 144f7f400 FUN_144f7f400 body=716 status=ok
// SIG undefined FUN_144f7f400(void)

void FUN_144f7f400(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_238;
  code *local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  code *local_200;
  undefined8 *local_1f8;
  code *local_1f0;
  undefined8 *local_1e8;
  code *local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  local_res10[0] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_res20,*param_2,param_2[1],
             local_res10);
  if ((int)local_res20 < 0) {
    if ((DAT_14c7990e8 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f7f6ad;
    cVar1 = FUN_144bdbf80();
    local_228 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(&local_208);
      local_238 = 1;
      local_230 = FUN_144f82550;
      lVar3 = FUN_144bdc480(uVar2,"Failed to get value from Var \'{}\'",&local_238,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x1f5;
      FUN_144bdc690(&local_208);
      goto LAB_144f7f6ad;
    }
    uVar2 = FUN_144bdc810(local_168,&DAT_14c799098,2);
    local_238 = 1;
    local_230 = FUN_144f82550;
    lVar3 = FUN_144bdc480(uVar2,"Failed to get value from Var \'{}\'",&local_238,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x1f5;
  }
  else {
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),&local_res20,*param_3,param_3[1],
               local_res10[0]);
    if (-1 < (int)local_res20) {
      return;
    }
    if ((DAT_14c7990e8 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_144f7f6ad;
    cVar1 = FUN_144bdbf80();
    local_220 = param_3[1];
    local_res20 = param_2[1];
    local_1f8 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(local_1b8,&DAT_14c799098);
      local_208 = 3;
      local_200 = FUN_144f82550;
      local_1e8 = &local_res20;
      local_1f0 = FUN_144f825c0;
      local_1e0 = FUN_144f825c0;
      local_1d8 = &local_220;
      lVar3 = FUN_144bdc480(uVar2,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                            &local_208,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x1fa;
      FUN_144bdc690(local_1b8);
      goto LAB_144f7f6ad;
    }
    local_218 = local_res20;
    local_210 = local_220;
    uVar2 = FUN_144bdc810(local_168,&DAT_14c799098,2);
    local_208 = 3;
    local_200 = FUN_144f82550;
    local_1e8 = &local_218;
    local_1f0 = FUN_144f825c0;
    local_1e0 = FUN_144f825c0;
    local_1d8 = &local_210;
    lVar3 = FUN_144bdc480(uVar2,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                          &local_208,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x1fa;
  }
  *(char **)(lVar3 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_144bdc8a0(local_168);
LAB_144f7f6ad:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  return;
}



// FUNCTION 144f7f6d0 FUN_144f7f6d0 body=229 status=ok
// SIG undefined FUN_144f7f6d0(void)

undefined4 * FUN_144f7f6d0(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*param_2 != 0) {
    *param_1 = 0;
    return param_1;
  }
  local_res8 = 0x40;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"AfterReflectNewLock");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[1] = 0xffffffff;
    *puVar1 = _anon_D306C20B::AfterReflectNewLock::vftable;
    puVar1[2] = 1;
    FUN_144bdde80(puVar1 + 3);
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)*param_2;
  if ((puVar2 != puVar1) && (*param_2 = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f7f7c0 FUN_144f7f7c0 body=95 status=ok
// SIG undefined FUN_144f7f7c0(void)

undefined4 * FUN_144f7f7c0(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f7f820 FUN_144f7f820 body=222 status=ok
// SIG undefined FUN_144f7f820(void)

void FUN_144f7f820(undefined8 *param_1)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ulonglong local_res20;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  FUN_144bf0690(&local_res20,param_1[1]);
  if ((local_res20 < 2) ||
     (puVar2 = (uint *)FUN_144bf04d0(&local_res20,local_res10), (*puVar2 >> 6 & 1) == 0)) {
    local_38 = *param_1;
    local_28 = param_1[2];
    local_30 = param_1[1];
  }
  else {
    lVar1 = *(longlong *)(param_1[1] + 8);
    FUN_144bef800(lVar1,local_res18);
    local_38 = *param_1;
    local_30 = lVar1;
    if (lVar1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_144befdb0(lVar1);
    }
  }
  if ((local_28 & 1) != 0) {
    FUN_144be6b20(local_28 & 0xfffffffffffffffe);
  }
  FUN_144f7f900(local_res8,&local_38);
  if ((local_28 & 1) != 0) {
    FUN_144be6b30(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f7f900 FUN_144f7f900 body=321 status=ok
// SIG undefined FUN_144f7f900(void)

void FUN_144f7f900(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  uint *puVar4;
  longlong *plVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  puVar4 = (uint *)FUN_144bef800(param_2[1],local_res8);
  switch(*puVar4 & 0x1f) {
  case 0:
    FUN_144f7fbd0(param_1,param_2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 1:
    FUN_144f7fbe0(param_1,param_2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 2:
  case 4:
  case 5:
  case 6:
    break;
  case 3:
    plVar5 = (longlong *)FUN_144befdb0(param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x000144f7f962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x38))(plVar5,*param_2,param_2[1]);
    return;
  case 7:
    FUN_144bf0830(&local_30,param_2[1],0);
    while ((puVar2 = local_30 + 1, local_30 + 1 < local_28 ||
           (cVar3 = FUN_144bf0850(&local_30), puVar2 = local_30, cVar3 != '\0'))) {
      local_30 = puVar2;
      pbVar6 = (byte *)FUN_144bf04d0(local_30,local_res8);
      if ((*pbVar6 & 0x20) != 0) {
        uVar7 = FUN_144bebf80(param_2,local_48,*local_30);
        FUN_144f7f820(uVar7);
        if ((local_38 & 1) != 0) {
          FUN_144be6b30(local_38 & 0xfffffffffffffffe);
        }
      }
    }
    break;
  case 8:
    FUN_144f7fa70(param_1,param_2);
    return;
  default:
    FUN_144bfc170(0x261011c5,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x3c,"Bad var visitor switch");
  }
  return;
}



// FUNCTION 144f7fa70 FUN_144f7fa70 body=348 status=ok
// SIG undefined FUN_144f7fa70(void)

void FUN_144f7fa70(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar6 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],&local_40
            );
  uVar1 = uStack_38;
  if (uStack_38 != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(uStack_38,local_res10);
    uVar3 = uVar6;
    if (((byte)*puVar2 & 0x1f) == 7) {
      uVar3 = uVar1;
    }
    if (uVar3 == 0) {
      puVar2 = (undefined4 *)FUN_144bef800(uVar1,local_res18);
      uVar3 = uVar6;
      if (((byte)*puVar2 & 0x1f) == 3) {
        uVar3 = uVar1;
      }
      if (uVar3 == 0) {
        puVar2 = (undefined4 *)FUN_144bef800(uVar1,local_res20);
        uVar3 = uVar6;
        if (((byte)*puVar2 & 0x1f) == 8) {
          uVar3 = uVar1;
        }
        if (uVar3 == 0) goto LAB_144f7fb8f;
      }
    }
    if (0 < (int)local_30) {
      do {
        local_58 = local_30._4_4_ * (int)uVar6 + local_40;
        local_50 = uStack_38;
        local_48 = (ulonglong)((byte)local_28 & 1) | local_28 & 0xfffffffffffffffe;
        if ((ulonglong)((byte)local_28 & 1) != 0) {
          FUN_144be6b20(local_28 & 0xfffffffffffffffe);
        }
        FUN_144f7f820(&local_58);
        if ((local_48 & 1) != 0) {
          FUN_144be6b30(local_48 & 0xfffffffffffffffe);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)local_30);
    }
  }
LAB_144f7fb8f:
  plVar4 = (longlong *)FUN_144befdb0(param_2[1]);
  (**(code **)(*plVar4 + 0x68))(plVar4,*param_2,param_2[1]);
  if ((local_28 & 1) != 0) {
    FUN_144be6b30(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f7fbd0 FUN_144f7fbd0 body=1 status=ok
// SIG undefined FUN_144f7fbd0(void)

void FUN_144f7fbd0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144f7fbe0 FUN_144f7fbe0 body=1 status=ok
// SIG undefined FUN_144f7fbe0(void)

void FUN_144f7fbe0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144f7fbf0 FUN_144f7fbf0 body=855 status=ok
// SIG undefined FUN_144f7fbf0(void)

void FUN_144f7fbf0(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 local_res18;
  uint local_res20 [2];
  undefined1 local_248 [4];
  uint local_244;
  uint local_240 [2];
  undefined8 local_238;
  code *local_230;
  undefined8 *local_228;
  code *local_220;
  longlong *local_218;
  code *local_210;
  uint *local_208;
  code *local_200;
  uint *local_1f8;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  uVar6 = 0;
  if (param_3[1] == 0) {
LAB_144f7fd24:
    if (DAT_14c7990e8 < 2) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') goto LAB_144f7ff03;
    }
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      puVar2 = (uint *)FUN_144bef800(param_3[1],local_248);
      local_res20[0] = *puVar2 & 0x1f;
      puVar5 = (undefined4 *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_248);
      local_1e0 = param_3[1];
      local_1e8 = *(undefined8 *)(param_2 + 8);
      local_res18 = CONCAT44(local_res18._4_4_,*puVar5) & 0xffffffff0000001f;
      uVar3 = FUN_144bdc640(local_1c8,&DAT_14c799098,2);
      local_238 = 4;
      local_230 = FUN_144f82630;
      local_208 = (uint *)&local_res18;
      local_228 = &local_1e8;
      local_220 = FUN_144c00d20;
      local_218 = &local_1e0;
      local_210 = FUN_144c19e60;
      local_200 = FUN_144c19e60;
      local_1f8 = local_res20;
      lVar4 = FUN_144bdc480(uVar3,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_238,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x151;
      FUN_144bdc690(local_1c8);
      goto LAB_144f7ff03;
    }
    puVar2 = (uint *)FUN_144bef800(param_3[1],local_248);
    local_240[0] = *puVar2 & 0x1f;
    puVar2 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_248);
    local_1d0 = param_3[1];
    local_244 = *puVar2 & 0x1f;
    local_1d8 = *(undefined8 *)(param_2 + 8);
    uVar3 = FUN_144bdc810(local_178,&DAT_14c799098,2);
    local_238 = 4;
    local_230 = FUN_144f82630;
    local_208 = &local_244;
    local_228 = &local_1d8;
    local_220 = FUN_144c00d20;
    local_218 = &local_1d0;
    local_210 = FUN_144c19e60;
    local_200 = FUN_144c19e60;
    local_1f8 = local_240;
    lVar4 = FUN_144bdc480(uVar3,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&local_238,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x151;
  }
  else {
    puVar2 = (uint *)FUN_144bef800(param_3[1],&local_res18);
    uVar6 = 0;
    if ((*puVar2 & 0x1f) != 0) goto LAB_144f7fd24;
    lVar4 = *param_3;
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
    }
    uVar6 = param_3[2];
    if (lVar4 == 0) goto LAB_144f7fd24;
    if (DAT_14c7990e8 < 2) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') goto LAB_144f7ff03;
    }
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar3 = FUN_144bdc640(&local_238);
      local_res18 = 0;
      lVar4 = FUN_144bdc480(uVar3,"Cannot clone an object of type void",&local_res18,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x21d;
      FUN_144bdc690(&local_238);
      goto LAB_144f7ff03;
    }
    uVar3 = FUN_144bdc810(local_178,&DAT_14c799098,2);
    local_res18 = 0;
    lVar4 = FUN_144bdc480(uVar3,"Cannot clone an object of type void",&local_res18,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x21d;
  }
  *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_144bdc8a0(local_178);
LAB_144f7ff03:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f7ff50 FUN_144f7ff50 body=857 status=ok
// SIG undefined FUN_144f7ff50(void)

void FUN_144f7ff50(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 local_res18;
  uint local_res20 [2];
  undefined1 local_248 [4];
  uint local_244;
  uint local_240 [2];
  undefined8 local_238;
  code *local_230;
  undefined8 *local_228;
  code *local_220;
  longlong *local_218;
  code *local_210;
  uint *local_208;
  code *local_200;
  uint *local_1f8;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  uVar6 = 0;
  if (param_3[1] == 0) {
LAB_144f80086:
    if (DAT_14c7990e8 < 2) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') goto LAB_144f80265;
    }
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      puVar5 = (uint *)FUN_144bef800(param_3[1],local_248);
      local_res20[0] = *puVar5 & 0x1f;
      puVar2 = (undefined4 *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_248);
      local_1e0 = param_3[1];
      local_1e8 = *(undefined8 *)(param_2 + 8);
      local_res18 = CONCAT44(local_res18._4_4_,*puVar2) & 0xffffffff0000001f;
      uVar3 = FUN_144bdc640(local_1c8,&DAT_14c799098,2);
      local_238 = 4;
      local_230 = FUN_144f826a0;
      local_208 = (uint *)&local_res18;
      local_228 = &local_1e8;
      local_220 = FUN_144c00d20;
      local_218 = &local_1e0;
      local_210 = FUN_144c19e60;
      local_200 = FUN_144c19e60;
      local_1f8 = local_res20;
      lVar4 = FUN_144bdc480(uVar3,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_238,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x151;
      FUN_144bdc690(local_1c8);
      goto LAB_144f80265;
    }
    puVar5 = (uint *)FUN_144bef800(param_3[1],local_248);
    local_240[0] = *puVar5 & 0x1f;
    puVar5 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_248);
    local_1d0 = param_3[1];
    local_244 = *puVar5 & 0x1f;
    local_1d8 = *(undefined8 *)(param_2 + 8);
    uVar3 = FUN_144bdc810(local_178,&DAT_14c799098,2);
    local_238 = 4;
    local_230 = FUN_144f826a0;
    local_208 = &local_244;
    local_228 = &local_1d8;
    local_220 = FUN_144c00d20;
    local_218 = &local_1d0;
    local_210 = FUN_144c19e60;
    local_200 = FUN_144c19e60;
    local_1f8 = local_240;
    lVar4 = FUN_144bdc480(uVar3,
                          "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                          ,&local_238,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x151;
  }
  else {
    puVar2 = (undefined4 *)FUN_144bef800(param_3[1],&local_res18);
    uVar6 = 0;
    if (((byte)*puVar2 & 0x1f) != 1) goto LAB_144f80086;
    lVar4 = *param_3;
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
    }
    uVar6 = param_3[2];
    if (lVar4 == 0) goto LAB_144f80086;
    if (DAT_14c7990e8 < 2) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') goto LAB_144f80265;
    }
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar3 = FUN_144bdc640(&local_238);
      local_res18 = 0;
      lVar4 = FUN_144bdc480(uVar3,"Cannot clone an object of type Opaque",&local_res18,0);
      *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar4 + 0x40) = 0x218;
      FUN_144bdc690(&local_238);
      goto LAB_144f80265;
    }
    uVar3 = FUN_144bdc810(local_178,&DAT_14c799098,2);
    local_res18 = 0;
    lVar4 = FUN_144bdc480(uVar3,"Cannot clone an object of type Opaque",&local_res18,0);
    *(undefined8 *)(lVar4 + 0x40) = 0x218;
  }
  *(char **)(lVar4 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
  FUN_144bdc8a0(local_178);
LAB_144f80265:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f802b0 FUN_144f802b0 body=705 status=ok
// SIG undefined FUN_144f802b0(void)

void FUN_144f802b0(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 local_258 [4];
  uint local_254;
  uint local_250 [2];
  undefined8 local_248;
  code *local_240;
  undefined8 *local_238;
  code *local_230;
  longlong *local_228;
  code *local_220;
  uint *local_218;
  code *local_210;
  uint *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong lStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  uVar6 = 0;
  local_1e0 = 0;
  lStack_1d8 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(param_3[1],local_res18);
    if (((byte)*puVar2 & 0x1f) == 2) {
      lStack_1d8 = param_3[1];
      lVar5 = *param_3;
      local_1e0 = lVar5;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      uVar6 = param_3[2];
      local_1d0 = uVar6;
      if (lVar5 != 0) {
        FUN_144f7f400(param_1,param_2,&local_1e0);
        goto LAB_144f8053d;
      }
    }
  }
  if (DAT_14c7990e8 < 2) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 != '\0') goto LAB_144f8036a;
  }
  else {
LAB_144f8036a:
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_258);
      local_res20[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_258);
      local_1f8 = param_3[1];
      local_res18[0] = *puVar3 & 0x1f;
      local_200 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc640(local_1c8,&DAT_14c799098,2);
      local_248 = 4;
      local_240 = FUN_144f825c0;
      local_218 = local_res18;
      local_238 = &local_200;
      local_230 = FUN_144c00d20;
      local_228 = &local_1f8;
      local_220 = FUN_144c19e60;
      local_210 = FUN_144c19e60;
      local_208 = local_res20;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_248,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc690(local_1c8);
    }
    else {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_258);
      local_250[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_258);
      local_1e8 = param_3[1];
      local_254 = *puVar3 & 0x1f;
      local_1f0 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc810(local_178,&DAT_14c799098,2);
      local_248 = 4;
      local_240 = FUN_144f825c0;
      local_218 = &local_254;
      local_238 = &local_1f0;
      local_230 = FUN_144c00d20;
      local_228 = &local_1e8;
      local_220 = FUN_144c19e60;
      local_210 = FUN_144c19e60;
      local_208 = local_250;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_248,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc8a0(local_178);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
LAB_144f8053d:
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f80580 FUN_144f80580 body=911 status=ok
// SIG undefined FUN_144f80580(void)

void FUN_144f80580(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res18 [2];
  uint local_res20 [2];
  ulonglong local_268;
  uint local_260;
  uint local_25c;
  longlong local_258;
  ulonglong local_250;
  ulonglong local_248;
  undefined8 local_240;
  code *local_238;
  undefined8 *local_230;
  code *local_228;
  longlong *local_220;
  code *local_218;
  uint *local_210;
  code *local_208;
  uint *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  uVar4 = 0;
  uVar7 = uVar4;
  if ((param_3[1] != 0) &&
     (puVar2 = (undefined4 *)FUN_144bef800(param_3[1],local_res18), uVar7 = 0,
     ((byte)*puVar2 & 0x1f) == 3)) {
    lVar6 = *param_3;
    uVar8 = param_3[1];
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
    }
    uVar7 = param_3[2];
    if (lVar6 != 0) {
      FUN_144bf0690(&local_268,uVar8);
      local_258 = lVar6;
      if ((local_268 < 2) ||
         (puVar3 = (uint *)FUN_144bf04d0(&local_268,local_res18), (*puVar3 >> 6 & 1) == 0)) {
        local_250 = uVar8;
        local_248 = uVar7;
        if ((uVar7 & 1) != 0) {
          FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
        }
        uVar4 = uVar7 & 0xff;
        uVar8 = uVar7;
      }
      else {
        uVar8 = *(ulonglong *)(uVar8 + 8);
        puVar2 = (undefined4 *)FUN_144bef800(uVar8,local_res20);
        local_250 = uVar4;
        if (((byte)*puVar2 & 0x1f) == 3) {
          local_250 = uVar8;
        }
        if (local_250 != 0) {
          uVar4 = FUN_144befdb0();
        }
        uVar8 = uVar4;
        local_248 = uVar4;
        if ((uVar4 & 1) != 0) {
          FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
        }
      }
      FUN_144f7f130(param_1,param_2,&local_258);
      if ((uVar4 & 1) != 0) {
        FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
      }
      goto LAB_144f808c4;
    }
  }
  if ((1 < DAT_14c7990e8) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      puVar3 = (uint *)FUN_144bef800(param_3[1],&local_268);
      local_res20[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),&local_268);
      local_1f0 = param_3[1];
      local_res18[0] = *puVar3 & 0x1f;
      local_1f8 = *(undefined8 *)(param_2 + 8);
      uVar5 = FUN_144bdc640(local_1d8,&DAT_14c799098,2);
      local_240 = 4;
      local_238 = FUN_144f824e0;
      local_210 = local_res18;
      local_230 = &local_1f8;
      local_228 = FUN_144c00d20;
      local_220 = &local_1f0;
      local_218 = FUN_144c19e60;
      local_208 = FUN_144c19e60;
      local_200 = local_res20;
      lVar6 = FUN_144bdc480(uVar5,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_240,0);
      *(char **)(lVar6 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x151;
      FUN_144bdc690(local_1d8);
    }
    else {
      puVar3 = (uint *)FUN_144bef800(param_3[1],&local_268);
      local_25c = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),&local_268);
      local_1e0 = param_3[1];
      local_260 = *puVar3 & 0x1f;
      local_1e8 = *(undefined8 *)(param_2 + 8);
      uVar5 = FUN_144bdc810(local_188,&DAT_14c799098,2);
      local_240 = 4;
      local_238 = FUN_144f824e0;
      local_210 = &local_260;
      local_230 = &local_1e8;
      local_228 = FUN_144c00d20;
      local_220 = &local_1e0;
      local_218 = FUN_144c19e60;
      local_208 = FUN_144c19e60;
      local_200 = &local_25c;
      lVar6 = FUN_144bdc480(uVar5,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_240,0);
      *(char **)(lVar6 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x151;
      FUN_144bdc8a0(local_188);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
LAB_144f808c4:
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f80910 FUN_144f80910 body=705 status=ok
// SIG undefined FUN_144f80910(void)

void FUN_144f80910(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 local_258 [4];
  uint local_254;
  uint local_250 [2];
  undefined8 local_248;
  code *local_240;
  undefined8 *local_238;
  code *local_230;
  longlong *local_228;
  code *local_220;
  uint *local_218;
  code *local_210;
  uint *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong lStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  uVar6 = 0;
  local_1e0 = 0;
  lStack_1d8 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(param_3[1],local_res18);
    if (((byte)*puVar2 & 0x1f) == 4) {
      lStack_1d8 = param_3[1];
      lVar5 = *param_3;
      local_1e0 = lVar5;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      uVar6 = param_3[2];
      local_1d0 = uVar6;
      if (lVar5 != 0) {
        FUN_144f7eb70(param_1,param_2,&local_1e0);
        goto LAB_144f80b9d;
      }
    }
  }
  if (DAT_14c7990e8 < 2) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 != '\0') goto LAB_144f809ca;
  }
  else {
LAB_144f809ca:
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_258);
      local_res20[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_258);
      local_1f8 = param_3[1];
      local_res18[0] = *puVar3 & 0x1f;
      local_200 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc640(local_1c8,&DAT_14c799098,2);
      local_248 = 4;
      local_240 = FUN_144f82320;
      local_218 = local_res18;
      local_238 = &local_200;
      local_230 = FUN_144c00d20;
      local_228 = &local_1f8;
      local_220 = FUN_144c19e60;
      local_210 = FUN_144c19e60;
      local_208 = local_res20;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_248,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc690(local_1c8);
    }
    else {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_258);
      local_250[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_258);
      local_1e8 = param_3[1];
      local_254 = *puVar3 & 0x1f;
      local_1f0 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc810(local_178,&DAT_14c799098,2);
      local_248 = 4;
      local_240 = FUN_144f82320;
      local_218 = &local_254;
      local_238 = &local_1f0;
      local_230 = FUN_144c00d20;
      local_228 = &local_1e8;
      local_220 = FUN_144c19e60;
      local_210 = FUN_144c19e60;
      local_208 = local_250;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_248,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc8a0(local_178);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
LAB_144f80b9d:
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f80be0 FUN_144f80be0 body=705 status=ok
// SIG undefined FUN_144f80be0(void)

void FUN_144f80be0(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 local_258 [4];
  uint local_254;
  uint local_250 [2];
  undefined8 local_248;
  code *local_240;
  undefined8 *local_238;
  code *local_230;
  longlong *local_228;
  code *local_220;
  uint *local_218;
  code *local_210;
  uint *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong lStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  uVar6 = 0;
  local_1e0 = 0;
  lStack_1d8 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(param_3[1],local_res18);
    if (((byte)*puVar2 & 0x1f) == 5) {
      lStack_1d8 = param_3[1];
      lVar5 = *param_3;
      local_1e0 = lVar5;
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      uVar6 = param_3[2];
      local_1d0 = uVar6;
      if (lVar5 != 0) {
        FUN_144f7ee50(param_1,param_2,&local_1e0);
        goto LAB_144f80e6d;
      }
    }
  }
  if (DAT_14c7990e8 < 2) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 != '\0') goto LAB_144f80c9a;
  }
  else {
LAB_144f80c9a:
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_258);
      local_res20[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_258);
      local_1f8 = param_3[1];
      local_res18[0] = *puVar3 & 0x1f;
      local_200 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc640(local_1c8,&DAT_14c799098,2);
      local_248 = 4;
      local_240 = FUN_144f82400;
      local_218 = local_res18;
      local_238 = &local_200;
      local_230 = FUN_144c00d20;
      local_228 = &local_1f8;
      local_220 = FUN_144c19e60;
      local_210 = FUN_144c19e60;
      local_208 = local_res20;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_248,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc690(local_1c8);
    }
    else {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_258);
      local_250[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_258);
      local_1e8 = param_3[1];
      local_254 = *puVar3 & 0x1f;
      local_1f0 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc810(local_178,&DAT_14c799098,2);
      local_248 = 4;
      local_240 = FUN_144f82400;
      local_218 = &local_254;
      local_238 = &local_1f0;
      local_230 = FUN_144c00d20;
      local_228 = &local_1e8;
      local_220 = FUN_144c19e60;
      local_210 = FUN_144c19e60;
      local_208 = local_250;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_248,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc8a0(local_178);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
LAB_144f80e6d:
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f80eb0 FUN_144f80eb0 body=822 status=ok
// SIG undefined FUN_144f80eb0(void)

void FUN_144f80eb0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 local_248 [4];
  uint local_244;
  uint local_240 [2];
  longlong local_238;
  code *local_230;
  undefined8 *local_228;
  code *local_220;
  longlong *local_218;
  code *local_210;
  uint *local_208;
  code *local_200;
  uint *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [80];
  undefined1 local_180 [344];
  
  puVar7 = (undefined8 *)0x0;
  if (param_3[1] != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(param_3[1],local_res18);
    if (((byte)*puVar3 & 0x1f) == 6) {
      lVar6 = *param_3;
      pcVar1 = (code *)param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      puVar7 = (undefined8 *)param_3[2];
      if (lVar6 != 0) {
        local_238 = lVar6;
        local_230 = pcVar1;
        local_228 = puVar7;
        if (((ulonglong)puVar7 & 1) != 0) {
          FUN_144be6b20((ulonglong)puVar7 & 0xfffffffffffffffe);
        }
        local_220 = (code *)*param_2;
        local_210 = (code *)param_2[2];
        local_218 = (longlong *)param_2[1];
        if (((ulonglong)local_210 & 1) != 0) {
          FUN_144be6b20((ulonglong)local_210 & 0xfffffffffffffffe);
        }
        FUN_144f7b6a0(param_1,&local_238,1);
        if (((ulonglong)local_210 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_210 & 0xfffffffffffffffe);
        }
        if (((ulonglong)local_228 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_228 & 0xfffffffffffffffe);
        }
        goto LAB_144f811a3;
      }
    }
  }
  if (DAT_14c7990e8 < 2) {
    cVar2 = FUN_144bdbf80();
    if (cVar2 != '\0') goto LAB_144f80fd0;
  }
  else {
LAB_144f80fd0:
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      puVar4 = (uint *)FUN_144bef800(param_3[1],local_248);
      local_res20[0] = *puVar4 & 0x1f;
      puVar4 = (uint *)FUN_144bef800(param_2[1],local_248);
      local_1e8 = param_3[1];
      local_res18[0] = *puVar4 & 0x1f;
      local_1f0 = param_2[1];
      uVar5 = FUN_144bdc640(local_1d0,&DAT_14c799098,2);
      local_238 = 4;
      local_230 = FUN_144c00cb0;
      local_208 = local_res18;
      local_228 = &local_1f0;
      local_220 = FUN_144c00d20;
      local_218 = &local_1e8;
      local_210 = FUN_144c19e60;
      local_200 = FUN_144c19e60;
      local_1f8 = local_res20;
      lVar6 = FUN_144bdc480(uVar5,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_238,0);
      *(char **)(lVar6 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x151;
      FUN_144bdc690(local_1d0);
    }
    else {
      puVar4 = (uint *)FUN_144bef800(param_3[1],local_248);
      local_240[0] = *puVar4 & 0x1f;
      puVar4 = (uint *)FUN_144bef800(param_2[1],local_248);
      local_1d8 = param_3[1];
      local_244 = *puVar4 & 0x1f;
      local_1e0 = param_2[1];
      uVar5 = FUN_144bdc810(local_180,&DAT_14c799098,2);
      local_238 = 4;
      local_230 = FUN_144c00cb0;
      local_208 = &local_244;
      local_228 = &local_1e0;
      local_220 = FUN_144c00d20;
      local_218 = &local_1d8;
      local_210 = FUN_144c19e60;
      local_200 = FUN_144c19e60;
      local_1f8 = local_240;
      lVar6 = FUN_144bdc480(uVar5,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_238,0);
      *(char **)(lVar6 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x151;
      FUN_144bdc8a0(local_180);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
LAB_144f811a3:
  if (((ulonglong)puVar7 & 1) != 0) {
    FUN_144be6b30((ulonglong)puVar7 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f811f0 FUN_144f811f0 body=703 status=ok
// SIG undefined FUN_144f811f0(void)

void FUN_144f811f0(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 local_248 [4];
  uint local_244;
  uint local_240 [2];
  longlong local_238;
  longlong lStack_230;
  ulonglong local_228;
  undefined8 local_220;
  code *local_218;
  undefined8 *local_210;
  code *local_208;
  longlong *local_200;
  code *local_1f8;
  uint *local_1f0;
  code *local_1e8;
  uint *local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  local_228 = 0;
  local_238 = 0;
  lStack_230 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(param_3[1],local_res18);
    if (((byte)*puVar2 & 0x1f) == 7) {
      local_238 = *param_3;
      lStack_230 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      if ((local_228 & 1) != 0) {
        FUN_144be6b30(local_228 & 0xfffffffffffffffe);
      }
      local_228 = param_3[2];
    }
    if (local_238 != 0) {
      FUN_144f79cf0(param_1,param_2,&local_238);
      goto LAB_144f81484;
    }
  }
  if (DAT_14c7990e8 < 2) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 != '\0') goto LAB_144f812b8;
  }
  else {
LAB_144f812b8:
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_248);
      local_res20[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_248);
      local_1d0 = param_3[1];
      local_res18[0] = *puVar3 & 0x1f;
      local_1d8 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc640(local_1b8,&DAT_14c799098,2);
      local_220 = 4;
      local_218 = FUN_144f82710;
      local_1f0 = local_res18;
      local_210 = &local_1d8;
      local_208 = FUN_144c00d20;
      local_200 = &local_1d0;
      local_1f8 = FUN_144c19e60;
      local_1e8 = FUN_144c19e60;
      local_1e0 = local_res20;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_220,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc690(local_1b8);
    }
    else {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_248);
      local_240[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_248);
      local_1c0 = param_3[1];
      local_244 = *puVar3 & 0x1f;
      local_1c8 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc810(local_168,&DAT_14c799098,2);
      local_220 = 4;
      local_218 = FUN_144f82710;
      local_1f0 = &local_244;
      local_210 = &local_1c8;
      local_208 = FUN_144c00d20;
      local_200 = &local_1c0;
      local_1f8 = FUN_144c19e60;
      local_1e8 = FUN_144c19e60;
      local_1e0 = local_240;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_220,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc8a0(local_168);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
LAB_144f81484:
  if ((local_228 & 1) != 0) {
    FUN_144be6b30(local_228 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f814b0 FUN_144f814b0 body=706 status=ok
// SIG undefined FUN_144f814b0(void)

void FUN_144f814b0(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 local_248 [4];
  uint local_244;
  uint local_240 [2];
  longlong local_238;
  longlong lStack_230;
  ulonglong local_228;
  undefined8 local_220;
  code *local_218;
  undefined8 *local_210;
  code *local_208;
  longlong *local_200;
  code *local_1f8;
  uint *local_1f0;
  code *local_1e8;
  uint *local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  local_228 = 0;
  local_238 = 0;
  lStack_230 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(param_3[1],local_res18);
    if (((byte)*puVar2 & 0x1f) == 8) {
      local_238 = *param_3;
      lStack_230 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      if ((local_228 & 1) != 0) {
        FUN_144be6b30(local_228 & 0xfffffffffffffffe);
      }
      local_228 = param_3[2];
    }
    if (local_238 != 0) {
      FUN_144f7a4b0(param_1,param_2,&local_238,0);
      goto LAB_144f81747;
    }
  }
  if (DAT_14c7990e8 < 2) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 != '\0') goto LAB_144f8157b;
  }
  else {
LAB_144f8157b:
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_248);
      local_res20[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_248);
      local_1d0 = param_3[1];
      local_res18[0] = *puVar3 & 0x1f;
      local_1d8 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc640(local_1b8,&DAT_14c799098,2);
      local_220 = 4;
      local_218 = FUN_144f82780;
      local_1f0 = local_res18;
      local_210 = &local_1d8;
      local_208 = FUN_144c00d20;
      local_200 = &local_1d0;
      local_1f8 = FUN_144c19e60;
      local_1e8 = FUN_144c19e60;
      local_1e0 = local_res20;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_220,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc690(local_1b8);
    }
    else {
      puVar3 = (uint *)FUN_144bef800(param_3[1],local_248);
      local_240[0] = *puVar3 & 0x1f;
      puVar3 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_248);
      local_1c0 = param_3[1];
      local_244 = *puVar3 & 0x1f;
      local_1c8 = *(undefined8 *)(param_2 + 8);
      uVar4 = FUN_144bdc810(local_168,&DAT_14c799098,2);
      local_220 = 4;
      local_218 = FUN_144f82780;
      local_1f0 = &local_244;
      local_210 = &local_1c8;
      local_208 = FUN_144c00d20;
      local_200 = &local_1c0;
      local_1f8 = FUN_144c19e60;
      local_1e8 = FUN_144c19e60;
      local_1e0 = local_240;
      lVar5 = FUN_144bdc480(uVar4,
                            "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                            ,&local_220,0);
      *(char **)(lVar5 + 0x38) = "Reflect\\Util\\hkReflectClone.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x151;
      FUN_144bdc8a0(local_168);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
LAB_144f81747:
  if ((local_228 & 1) != 0) {
    FUN_144be6b30(local_228 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144f81780 FUN_144f81780 body=328 status=ok
// SIG undefined FUN_144f81780(void)

uint * FUN_144f81780(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  
  iVar9 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar9 * 3;
  if ((iVar9 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = iVar9 * -0x61c8864f;
  uVar12 = (int)lVar1 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar10 = (uVar12 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + uVar12 ^ uVar10;
  uVar8 = (ulonglong)(uVar10 & *(uint *)(param_1 + 3));
  iVar9 = *(int *)(lVar2 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar2 + uVar8 * 8);
    if (iVar9 < 0) {
      uVar12 = *(uint *)(param_1 + 1);
      *puVar7 = uVar10;
      puVar7[1] = uVar12;
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f8189a:
      param_2[1] = (uint)((longlong)puVar7 - param_1[2] >> 3);
      return param_2;
    }
    if (*puVar7 == uVar10) {
      plVar11 = (longlong *)((longlong)(int)puVar7[1] * 0x30 + *param_1);
      lVar3 = *plVar11;
      if (((lVar3 == 0) && (lVar1 == 0)) || ((lVar3 == lVar1 && (plVar11[1] == param_3[1])))) {
        *param_2 = puVar7[1];
        goto LAB_144f8189a;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar9 = *(int *)(lVar2 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144f818d0 FUN_144f818d0 body=235 status=ok
// SIG undefined FUN_144f818d0(void)

void FUN_144f818d0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144f819c0 FUN_144f819c0 body=347 status=ok
// SIG undefined FUN_144f819c0(void)

void FUN_144f819c0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar8) {
    uVar7 = uVar8;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x20;
  lVar3 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    uVar9 = (ulonglong)uVar1;
    puVar5 = puVar2;
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-2] = *puVar5;
        puVar4[-1] = puVar5[1];
        *puVar4 = puVar5[2];
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 3);
      }
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    puVar6 = puVar2 + 2;
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_144be6b30(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar7 * 0x20 + 0x20;
  uVar9 = uVar7;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar7 + 1;
    if (uVar8 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar7 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144f81b20 FUN_144f81b20 body=437 status=ok
// SIG undefined FUN_144f81b20(void)

ulonglong FUN_144f81b20(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar12 * 2;
  uVar9 = param_3;
  if (param_3 < uVar8) {
    uVar9 = uVar8;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x30,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar5 = puVar2 + 4;
    uVar11 = (ulonglong)uVar1;
    puVar6 = (undefined8 *)(lVar4 + 0x28);
    puVar10 = puVar2;
    do {
      if (puVar6 + -5 != (undefined8 *)0x0) {
        puVar6[-5] = *puVar10;
        puVar6[-4] = puVar5[-3];
        puVar6[-3] = puVar5[-2];
        puVar5[-2] = 0;
        *puVar10 = 0;
        puVar5[-3] = 0;
        puVar6[-2] = puVar5[-1];
        puVar6[-1] = *puVar5;
        *puVar6 = puVar5[1];
        puVar5[1] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
      }
      puVar6 = puVar6 + 6;
      puVar10 = puVar10 + 6;
      puVar5 = puVar5 + 6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    puVar7 = puVar2 + 2;
    do {
      if ((puVar7[3] & 1) != 0) {
        FUN_144be6b30(puVar7[3] & 0xfffffffffffffffe);
      }
      if ((*puVar7 & 1) != 0) {
        FUN_144be6b30(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar9 * 0x30 + 0x30;
  uVar11 = uVar9;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar11 = uVar9 + 1;
    if (uVar8 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x30;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar11 = uVar11 + uVar9 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x30);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 144f81ce0 FUN_144f81ce0 body=493 status=ok
// SIG undefined FUN_144f81ce0(void)

ulonglong FUN_144f81ce0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  longlong *local_res10;
  ulonglong *local_res18;
  longlong local_res20;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar10 * 2;
  uVar11 = param_3;
  if (param_3 <= uVar8 && uVar8 - param_3 != 0) {
    uVar11 = uVar8;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar11) && (uVar11 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = uVar11 * 0x30;
  local_res20 = lVar5;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,lVar5,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar7 = (ulonglong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  local_res18 = puVar7;
  if (0 < (int)uVar1) {
    puVar6 = (ulonglong *)(lVar4 + 0x28);
    uVar12 = (ulonglong)uVar1;
    puVar9 = puVar7 + 5;
    do {
      if (puVar6 + -5 != (ulonglong *)0x0) {
        puVar6[-5] = *puVar7;
        puVar6[-4] = puVar9[-4];
        uVar2 = puVar9[-3];
        puVar6[-3] = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
        puVar6[-2] = puVar9[-2];
        puVar6[-1] = puVar9[-1];
        uVar2 = *puVar9;
        *puVar6 = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      puVar9 = puVar9 + 6;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    puVar7 = local_res18 + 2;
    do {
      if ((puVar7[3] & 1) != 0) {
        FUN_144be6b30(puVar7[3] & 0xfffffffffffffffe);
      }
      if ((*puVar7 & 1) != 0) {
        FUN_144be6b30(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + 6;
      uVar8 = uVar8 - 1;
      lVar5 = local_res20;
      param_2 = local_res10;
    } while (uVar8 != 0);
  }
  uVar8 = lVar5 + 0x30;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar11 = uVar11 + 1;
    if (uVar8 <= local_res8) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_res8 - lVar5;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar11 = uVar11 + (local_res8 - lVar5) / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 * 0x30);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 144f81ed0 FUN_144f81ed0 body=319 status=ok
// SIG undefined FUN_144f81ed0(void)

void FUN_144f81ed0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144f82010 FUN_144f82010 body=111 status=ok
// SIG undefined FUN_144f82010(void)

undefined4 *
FUN_144f82010(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dd640;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82080 FUN_144f82080 body=111 status=ok
// SIG undefined FUN_144f82080(void)

undefined4 *
FUN_144f82080(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dd510;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f820f0 FUN_144f820f0 body=437 status=ok
// SIG undefined FUN_144f820f0(void)

ulonglong FUN_144f820f0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar12 * 2;
  uVar9 = param_3;
  if (param_3 < uVar8) {
    uVar9 = uVar8;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x30,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar5 = puVar2 + 4;
    uVar11 = (ulonglong)uVar1;
    puVar6 = (undefined8 *)(lVar4 + 0x28);
    puVar10 = puVar2;
    do {
      if (puVar6 + -5 != (undefined8 *)0x0) {
        puVar6[-5] = *puVar10;
        puVar6[-4] = puVar5[-3];
        puVar6[-3] = puVar5[-2];
        puVar5[-2] = 0;
        *puVar10 = 0;
        puVar5[-3] = 0;
        puVar6[-2] = puVar5[-1];
        puVar6[-1] = *puVar5;
        *puVar6 = puVar5[1];
        puVar5[1] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
      }
      puVar6 = puVar6 + 6;
      puVar10 = puVar10 + 6;
      puVar5 = puVar5 + 6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    puVar7 = puVar2 + 2;
    do {
      if ((puVar7[3] & 1) != 0) {
        FUN_144be6b30(puVar7[3] & 0xfffffffffffffffe);
      }
      if ((*puVar7 & 1) != 0) {
        FUN_144be6b30(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar9 * 0x30 + 0x30;
  uVar11 = uVar9;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar11 = uVar9 + 1;
    if (uVar8 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x30;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar11 = uVar11 + uVar9 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x30);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 144f822b0 FUN_144f822b0 body=111 status=ok
// SIG undefined FUN_144f822b0(void)

undefined4 *
FUN_144f822b0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dc820;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82320 FUN_144f82320 body=111 status=ok
// SIG undefined FUN_144f82320(void)

undefined4 *
FUN_144f82320(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c727ba0;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82390 FUN_144f82390 body=111 status=ok
// SIG undefined FUN_144f82390(void)

undefined4 *
FUN_144f82390(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dca60;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82400 FUN_144f82400 body=111 status=ok
// SIG undefined FUN_144f82400(void)

undefined4 *
FUN_144f82400(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c727d20;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82470 FUN_144f82470 body=111 status=ok
// SIG undefined FUN_144f82470(void)

undefined4 *
FUN_144f82470(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dccb0;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f824e0 FUN_144f824e0 body=111 status=ok
// SIG undefined FUN_144f824e0(void)

undefined4 *
FUN_144f824e0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c727f20;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82550 FUN_144f82550 body=111 status=ok
// SIG undefined FUN_144f82550(void)

undefined4 *
FUN_144f82550(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6dc640;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f825c0 FUN_144f825c0 body=111 status=ok
// SIG undefined FUN_144f825c0(void)

undefined4 *
FUN_144f825c0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c7280a0;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82630 FUN_144f82630 body=111 status=ok
// SIG undefined FUN_144f82630(void)

undefined4 *
FUN_144f82630(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c728120;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f826a0 FUN_144f826a0 body=111 status=ok
// SIG undefined FUN_144f826a0(void)

undefined4 *
FUN_144f826a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c7281a0;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82710 FUN_144f82710 body=111 status=ok
// SIG undefined FUN_144f82710(void)

undefined4 *
FUN_144f82710(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c728220;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82780 FUN_144f82780 body=111 status=ok
// SIG undefined FUN_144f82780(void)

undefined4 *
FUN_144f82780(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c7282a0;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144f82860 FUN_144f82860 body=88 status=ok
// SIG undefined FUN_144f82860(void)

void FUN_144f82860(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f828c0 FUN_144f828c0 body=88 status=ok
// SIG undefined FUN_144f828c0(void)

void FUN_144f828c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f82950 FUN_144f82950 body=80 status=ok
// SIG undefined FUN_144f82950(void)

void FUN_144f82950(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f829a0 FUN_144f829a0 body=63 status=ok
// SIG undefined FUN_144f829a0(void)

void FUN_144f829a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144f829e0 FUN_144f829e0 body=97 status=ok
// SIG undefined FUN_144f829e0(void)

void FUN_144f829e0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f82a80 FUN_144f82a80 body=80 status=ok
// SIG undefined FUN_144f82a80(void)

void FUN_144f82a80(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f82ad0 FUN_144f82ad0 body=63 status=ok
// SIG undefined FUN_144f82ad0(void)

void FUN_144f82ad0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144f82b10 FUN_144f82b10 body=88 status=ok
// SIG undefined FUN_144f82b10(void)

void FUN_144f82b10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f82b70 FUN_144f82b70 body=97 status=ok
// SIG undefined FUN_144f82b70(void)

void FUN_144f82b70(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f82be0 FUN_144f82be0 body=55 status=ok
// SIG undefined FUN_144f82be0(void)

void FUN_144f82be0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145308310(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144f82c20 FUN_144f82c20 body=77 status=ok
// SIG undefined FUN_144f82c20(void)

void FUN_144f82c20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f82ca0 FUN_144f82ca0 body=18 status=ok
// SIG undefined FUN_144f82ca0(void)

undefined8 * FUN_144f82ca0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c7284c0;
  return param_2;
}



// FUNCTION 144f82cc0 FUN_144f82cc0 body=134 status=ok
// SIG undefined FUN_144f82cc0(void)

undefined8 * FUN_144f82cc0(undefined8 *param_1,ulonglong param_2)

{
  FUN_144f6ee60(param_1 + 6);
  FUN_144b49dd0(param_1 + 4);
  FUN_144b49dd0(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144f82d50 FUN_144f82d50 body=18 status=ok
// SIG undefined FUN_144f82d50(void)

undefined8 * FUN_144f82d50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c728520;
  return param_2;
}



// FUNCTION 144f82d70 FUN_144f82d70 body=62 status=ok
// SIG undefined FUN_144f82d70(void)

void FUN_144f82d70(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145308c70(param_1,&DAT_14996de1b);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144f82db0 FUN_144f82db0 body=88 status=ok
// SIG undefined FUN_144f82db0(void)

void FUN_144f82db0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x48);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -9;
      plVar2 = plVar2 + -9;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f82e10 FUN_144f82e10 body=87 status=ok
// SIG undefined FUN_144f82e10(void)

undefined8 FUN_144f82e10(undefined8 param_1,ulonglong param_2)

{
  FUN_144f83d60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 144f82e70 FUN_144f82e70 body=18 status=ok
// SIG undefined FUN_144f82e70(void)

undefined8 * FUN_144f82e70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c728580;
  return param_2;
}



// FUNCTION 144f82e90 FUN_144f82e90 body=236 status=ok
// SIG undefined FUN_144f82e90(void)

undefined8 * FUN_144f82e90(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  *param_1 = hctClothSetup20151Options::vftable;
  if (0 < *(int *)(param_1 + 4)) {
    lVar2 = 0;
    do {
      FUN_144b3f230(*(undefined8 *)(lVar2 + param_1[3]));
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 3);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144f82fb0 FUN_144f82fb0 body=100 status=ok
// SIG undefined FUN_144f82fb0(void)

void FUN_144f82fb0(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
        FUN_144f84550(param_1,param_2);
      }
      param_2 = param_2 + 0x10;
      param_1 = param_1 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144f83020 FUN_144f83020 body=241 status=ok
// SIG undefined FUN_144f83020(void)

void FUN_144f83020(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar4 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      lVar1 = *plVar4;
      lVar2 = lVar1 + (longlong)(int)plVar4[1] * 0x18;
      while (lVar2 != lVar1) {
        if (*(longlong *)(lVar2 + -8) != 0) {
          FUN_144b3f230();
        }
        FUN_144b49dd0(lVar2 + -0x10);
        FUN_144b49dd0(lVar2 + -0x18);
        lVar2 = lVar2 + -0x18;
      }
      *(undefined4 *)(plVar4 + 1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar4 + 0xc)) && (*plVar4 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar4,
                   (ulonglong)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) * 0x18);
      }
      *plVar4 = 0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0x80000000;
      plVar4 = plVar4 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144f83180 FUN_144f83180 body=266 status=ok
// SIG undefined FUN_144f83180(void)

void FUN_144f83180(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x24);
    lVar5 = (longlong)param_4;
    do {
      if (puVar6 + -9 != (uint *)0x0) {
        puVar6[-7] = 0xffffffff;
        puVar6[-6] = 0;
        puVar6[-5] = 1;
        puVar6[-4] = 0;
        *(undefined ***)(puVar6 + -9) = hctClothSetup20151Options::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        puVar4 = *(undefined8 **)((param_2 - param_1) + -0xc + (longlong)puVar6);
        if (0 < (int)uVar1) {
          puVar3 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(undefined8 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar1;
          uVar7 = (ulonglong)uVar1;
          *puVar6 = uVar1;
          do {
            if (puVar3 != (undefined8 *)0x0) {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = uVar2;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144f83290 FUN_144f83290 body=88 status=ok
// SIG undefined FUN_144f83290(void)

void FUN_144f83290(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f832f0 FUN_144f832f0 body=185 status=ok
// SIG undefined FUN_144f832f0(void)

void FUN_144f832f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0x24);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_144f847d0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 8);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144f834b0 FUN_144f834b0 body=78 status=ok
// SIG undefined FUN_144f834b0(void)

void FUN_144f834b0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144f84140(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xa8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144f83500 FUN_144f83500 body=94 status=ok
// SIG undefined FUN_144f83500(void)

void FUN_144f83500(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xa8 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x15;
      plVar2 = plVar2 + -0x15;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f83560 FUN_144f83560 body=1015 status=ok
// SIG undefined FUN_144f83560(void)

void FUN_144f83560(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0x34);
    lVar6 = (longlong)param_4;
    do {
      FUN_144be3810(puVar5 + -7,param_2 + -0x1c + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      puVar5[-5] = *(uint *)(param_2 + -0x14 + (longlong)puVar5);
      puVar5[-4] = *(uint *)((longlong)puVar5 + param_2 + -0x10);
      puVar4 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar5);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_144f84730(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[-1] = uVar2;
      }
      puVar4 = (uint *)(param_2 + 4 + (longlong)puVar5);
      puVar1 = puVar5 + 1;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0xc + (longlong)puVar5);
        if ((int)(puVar5[4] & 0x7fffffff) < (int)uVar2) {
          FUN_144f84730(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[3] = uVar2;
      }
      puVar4 = (uint *)((longlong)puVar5 + param_2 + 0x14);
      puVar1 = puVar5 + 5;
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x1c + (longlong)puVar5);
        if ((int)(puVar5[8] & 0x7fffffff) < (int)uVar2) {
          FUN_144f84730(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[7] = uVar2;
      }
      puVar1 = puVar5 + 9;
      puVar4 = (uint *)(param_2 + 0x24 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x2c + (longlong)puVar5);
        if ((int)(puVar5[0xc] & 0x7fffffff) < (int)uVar2) {
          FUN_144f84730(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[0xb] = uVar2;
      }
      puVar1 = puVar5 + 0xd;
      puVar4 = (uint *)(param_2 + 0x34 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x3c + (longlong)puVar5);
        if ((int)(puVar5[0x10] & 0x7fffffff) < (int)uVar2) {
          FUN_144f84730(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[0xf] = uVar2;
      }
      puVar1 = puVar5 + 0x11;
      puVar4 = (uint *)(param_2 + 0x44 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x4c + (longlong)puVar5);
        if ((int)(puVar5[0x14] & 0x7fffffff) < (int)uVar2) {
          FUN_144f84730(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[0x13] = uVar2;
      }
      puVar1 = puVar5 + 0x15;
      puVar4 = (uint *)(param_2 + 0x54 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x5c + (longlong)puVar5);
        if ((int)(puVar5[0x18] & 0x7fffffff) < (int)uVar2) {
          FUN_144f84730(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[0x17] = uVar2;
      }
      puVar1 = puVar5 + 0x19;
      puVar4 = (uint *)(param_2 + 100 + (longlong)puVar5);
      if (puVar4 != puVar1) {
        uVar3 = *(undefined8 *)puVar4;
        uVar2 = *(uint *)(param_2 + 0x6c + (longlong)puVar5);
        if ((int)(puVar5[0x1c] & 0x7fffffff) < (int)uVar2) {
          FUN_144f84730(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[0x1b] = uVar2;
      }
      puVar5 = puVar5 + 0x2a;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144f83990 FUN_144f83990 body=218 status=ok
// SIG undefined FUN_144f83990(void)

void FUN_144f83990(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        for (lVar3 = (longlong)*(int *)(lVar1 + 0x10) * 0x10 + lVar2; lVar3 != lVar2;
            lVar3 = lVar3 + -0x10) {
          FUN_144b49dd0(lVar3 + -8);
        }
        *(undefined4 *)(lVar1 + 0x10) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + 0x14)) && (*(longlong *)(lVar1 + 8) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(lVar1 + 8),
                     (ulonglong)(*(uint *)(lVar1 + 0x14) & 0x7fffffff) << 4);
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined4 *)(lVar1 + 0x14) = 0x80000000;
        FUN_144b49dd0(lVar1);
        (*DAT_14c787678)(0,lVar1,0);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 144f83ad0 FUN_144f83ad0 body=319 status=ok
// SIG undefined FUN_144f83ad0(void)

void FUN_144f83ad0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  
  if (0 < param_4) {
    lVar3 = param_1 + 0x20;
    param_2 = param_2 - param_1;
    uVar4 = 0;
    lVar5 = (longlong)param_4;
    do {
      if ((undefined8 *)(lVar3 + -0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + -0x18) = 0xffffffff;
        *(undefined8 *)(lVar3 + -0x10) = 1;
        *(undefined8 *)(lVar3 + -0x20) = hctClothSetupObjectData20151::vftable;
        FUN_144be3700(lVar3 + -8,param_2 + -8 + lVar3);
        FUN_144be3700(lVar3,param_2 + lVar3);
        *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(param_2 + 8 + lVar3);
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined1 *)(lVar3 + 0x18) = 0;
        cVar1 = *(char *)(param_2 + 0x18 + lVar3);
        local_38 = uVar4;
        if (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            local_38 = param_2 + 0x20 + lVar3;
          }
          else if (cVar1 == '\x02') {
            local_38 = *(ulonglong *)(param_2 + 0x20 + lVar3);
          }
        }
        local_30 = *(longlong *)(param_2 + 0x10 + lVar3);
        uVar2 = uVar4;
        if (local_30 != 0) {
          uVar2 = FUN_144befdb0();
        }
        local_28 = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
        FUN_144f6f130(lVar3 + 0x10,&local_38);
        if ((local_28 & 1) != 0) {
          FUN_144be6b30(local_28 & 0xfffffffffffffffe);
        }
      }
      lVar3 = lVar3 + 0x50;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144f83c10 FUN_144f83c10 body=88 status=ok
// SIG undefined FUN_144f83c10(void)

void FUN_144f83c10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x50 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -10;
      plVar2 = plVar2 + -10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144f83c70 FUN_144f83c70 body=233 status=ok
// SIG undefined FUN_144f83c70(void)

void FUN_144f83c70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    param_1 = param_1 + 0x20;
    do {
      FUN_144be3810(param_1 + -8,param_2 + -8 + param_1);
      FUN_144be3810(param_1,param_2 + param_1);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8 + param_1);
      cVar1 = *(char *)(param_2 + 0x18 + param_1);
      if (cVar1 == '\0') {
LAB_144f83ce6:
        local_28 = 0;
      }
      else if (cVar1 == '\x01') {
        local_28 = param_2 + 0x20 + param_1;
      }
      else {
        if (cVar1 != '\x02') goto LAB_144f83ce6;
        local_28 = *(longlong *)(param_2 + 0x20 + param_1);
      }
      local_20 = *(longlong *)(param_2 + 0x10 + param_1);
      if (local_20 == 0) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_144befdb0();
      }
      if ((local_18 & 1) != 0) {
        FUN_144be6b20(local_18 & 0xfffffffffffffffe);
      }
      FUN_144f6f130(param_1 + 0x10,&local_28);
      if ((local_18 & 1) != 0) {
        FUN_144be6b30(local_18 & 0xfffffffffffffffe);
      }
      param_1 = param_1 + 0x50;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144f83d60 FUN_144f83d60 body=981 status=ok
// SIG undefined FUN_144f83d60(void)

void FUN_144f83d60(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  *param_1 = hctClothSetupClothData20151Options::vftable;
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      FUN_144b3f230(*(undefined8 *)(param_1[5] + uVar4));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 6));
  }
  *(undefined4 *)(param_1 + 6) = 0;
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_144b3f230(*(undefined8 *)(param_1[7] + uVar4));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (0 < *(int *)(param_1 + 10)) {
    do {
      FUN_144b3f230(*(undefined8 *)(param_1[9] + uVar4));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 10));
  }
  *(undefined4 *)(param_1 + 10) = 0;
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_144b3f230(*(undefined8 *)(uVar4 + param_1[0xb]));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (0 < *(int *)(param_1 + 0xe)) {
    do {
      FUN_144b3f230(*(undefined8 *)(param_1[0xd] + uVar4));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0xe));
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      FUN_144b3f230(*(undefined8 *)(param_1[0xf] + uVar4));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar3 = uVar1;
  uVar4 = uVar1;
  if (0 < *(int *)(param_1 + 0x12)) {
    do {
      FUN_144b3f230(*(undefined8 *)(param_1[0x11] + uVar4));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x12));
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  uVar3 = uVar1;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      FUN_144b3f230(*(undefined8 *)(uVar3 + param_1[0x13]));
      uVar2 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar2;
      uVar3 = uVar3 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x13],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xa4) & 0x7fffffff) << 3);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x11],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & 0x7fffffff) << 3);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xf],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x84) & 0x7fffffff) << 3);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x74) & 0x7fffffff) << 3);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 3);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 3);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 3);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_144b49dd0(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144f84140 FUN_144f84140 body=970 status=ok
// SIG undefined FUN_144f84140(void)

undefined8 * FUN_144f84140(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hctClothSetupClothData20151Options::vftable;
  FUN_144be3700(param_1 + 3,param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x30);
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  if (0 < (int)uVar1) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[5] = uVar2;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 6) = uVar1;
    *(uint *)((longlong)param_1 + 0x34) = uVar1;
    puVar3 = (undefined8 *)param_1[5];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x40);
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (0 < (int)uVar1) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[7] = uVar2;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 8) = uVar1;
    *(uint *)((longlong)param_1 + 0x44) = uVar1;
    puVar3 = (undefined8 *)param_1[7];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x50);
  puVar4 = *(undefined8 **)(param_2 + 0x48);
  if (0 < (int)uVar1) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[9] = uVar2;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 10) = uVar1;
    *(uint *)((longlong)param_1 + 0x54) = uVar1;
    puVar3 = (undefined8 *)param_1[9];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x60);
  puVar4 = *(undefined8 **)(param_2 + 0x58);
  if (0 < (int)uVar1) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0xb] = uVar2;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
    *(uint *)((longlong)param_1 + 100) = uVar1;
    puVar3 = (undefined8 *)param_1[0xb];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x70);
  puVar4 = *(undefined8 **)(param_2 + 0x68);
  if (0 < (int)uVar1) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0xd] = uVar2;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0xe) = uVar1;
    *(uint *)((longlong)param_1 + 0x74) = uVar1;
    puVar3 = (undefined8 *)param_1[0xd];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x80);
  puVar4 = *(undefined8 **)(param_2 + 0x78);
  if (0 < (int)uVar1) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0xf] = uVar2;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x10) = uVar1;
    *(uint *)((longlong)param_1 + 0x84) = uVar1;
    puVar3 = (undefined8 *)param_1[0xf];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x90);
  puVar4 = *(undefined8 **)(param_2 + 0x88);
  if (0 < (int)uVar1) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0x11] = uVar2;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x12) = uVar1;
    *(uint *)((longlong)param_1 + 0x94) = uVar1;
    puVar3 = (undefined8 *)param_1[0x11];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0xa0);
  puVar4 = *(undefined8 **)(param_2 + 0x98);
  if (0 < (int)uVar1) {
    uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
    param_1[0x13] = uVar2;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x14) = uVar1;
    *(uint *)((longlong)param_1 + 0xa4) = uVar1;
    puVar3 = (undefined8 *)param_1[0x13];
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  return param_1;
}



// FUNCTION 144f84510 FUN_144f84510 body=18 status=ok
// SIG undefined FUN_144f84510(void)

undefined8 * FUN_144f84510(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c728970;
  return param_2;
}



// FUNCTION 144f84530 FUN_144f84530 body=18 status=ok
// SIG undefined FUN_144f84530(void)

undefined8 * FUN_144f84530(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c728a30;
  return param_2;
}



// FUNCTION 144f84550 FUN_144f84550 body=471 status=ok
// SIG undefined FUN_144f84550(void)

longlong * FUN_144f84550(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_2 != param_1) {
    iVar2 = (int)param_2[1];
    lVar7 = *param_2;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144f84870(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    if (iVar2 < (int)param_1[1]) {
      lVar11 = *param_1;
      lVar10 = lVar11 + (longlong)(int)param_1[1] * 0x18;
      while (lVar10 != lVar11 + (longlong)iVar2 * 0x18) {
        if (*(longlong *)(lVar10 + -8) != 0) {
          FUN_144b3f230();
        }
        FUN_144b49dd0(lVar10 + -0x10);
        FUN_144b49dd0(lVar10 + -0x18);
        lVar10 = lVar10 + -0x18;
      }
    }
    lVar11 = *param_1;
    iVar4 = iVar2;
    if ((int)param_1[1] < iVar2) {
      iVar4 = (int)param_1[1];
    }
    if ((lVar11 != lVar7) && (lVar10 = (longlong)iVar4, 0 < iVar4)) {
      plVar6 = (longlong *)(lVar7 + 0x10);
      lVar8 = lVar11 - lVar7;
      do {
        FUN_144be3810(lVar8 + -0x10 + (longlong)plVar6,plVar6 + -2);
        lVar5 = lVar8 + -8 + (longlong)plVar6;
        FUN_144be3810(lVar5,lVar5 + (lVar7 - lVar11));
        plVar1 = (longlong *)((longlong)plVar6 + lVar8);
        if (plVar1 != plVar6) {
          lVar5 = *plVar6;
          if (lVar5 != 0) {
            FUN_144b3d910(lVar5);
          }
          lVar3 = *plVar1;
          *plVar1 = lVar5;
          if (lVar3 != 0) {
            FUN_144b3f230();
          }
        }
        plVar6 = plVar6 + 3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    lVar7 = lVar7 + (longlong)iVar4 * 0x18;
    if (0 < iVar2 - iVar4) {
      uVar9 = (ulonglong)(uint)(iVar2 - iVar4);
      lVar11 = *param_1 + (longlong)iVar4 * 0x18;
      do {
        if (lVar11 != 0) {
          FUN_144be3700(lVar11,lVar7);
          FUN_144be3700(lVar11 + 8,lVar7 + 8);
          lVar10 = *(longlong *)(lVar7 + 0x10);
          *(longlong *)(lVar11 + 0x10) = lVar10;
          if (lVar10 != 0) {
            FUN_144b3d910();
          }
          lVar7 = lVar7 + 0x18;
        }
        uVar9 = uVar9 - 1;
        lVar11 = lVar11 + 0x18;
      } while (uVar9 != 0);
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_1;
}



// FUNCTION 144f84730 FUN_144f84730 body=159 status=ok
// SIG undefined FUN_144f84730(void)

void FUN_144f84730(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144f847d0 FUN_144f847d0 body=159 status=ok
// SIG undefined FUN_144f847d0(void)

void FUN_144f847d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144f84870 FUN_144f84870 body=308 status=ok
// SIG undefined FUN_144f84870(void)

void FUN_144f84870(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
  uVar1 = *(uint *)(param_1 + 1);
  puVar5 = (undefined8 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    uVar6 = (ulonglong)uVar1;
    puVar4 = puVar3;
    puVar8 = puVar5;
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *puVar8;
        *puVar8 = 0;
        puVar4[1] = puVar8[1];
        puVar8[1] = 0;
        lVar2 = puVar8[2];
        puVar4[2] = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
      }
      puVar4 = puVar4 + 3;
      puVar8 = puVar8 + 3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar5 = puVar5 + 1;
    do {
      if (puVar5[1] != 0) {
        FUN_144b3f230();
      }
      FUN_144b49dd0(puVar5);
      FUN_144b49dd0(puVar5 + -1);
      puVar5 = puVar5 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144f849b0 FUN_144f849b0 body=89 status=ok
// SIG undefined FUN_144f849b0(void)

undefined8 * FUN_144f849b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_144f6f130(param_1 + 4,param_3);
  return param_1;
}



// FUNCTION 144f84a10 FUN_144f84a10 body=147 status=ok
// SIG undefined FUN_144f84a10(void)

undefined8 * FUN_144f84a10(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = 0x90;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,&DAT_149991fec);
  }
  if (lVar1 != 0) {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    uVar2 = FUN_144f85e20(lVar1,&local_18);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144f84ab0 FUN_144f84ab0 body=19 status=ok
// SIG undefined FUN_144f84ab0(void)

void FUN_144f84ab0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_144f86280(*param_1,1);
    return;
  }
  return;
}



// FUNCTION 144f84ad0 FUN_144f84ad0 body=704 status=ok
// SIG undefined FUN_144f84ad0(void)

ulonglong FUN_144f84ad0(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  byte *local_res10;
  char local_res18;
  undefined7 uStackX_19;
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  puVar8 = (undefined4 *)FUN_144bef800(param_2,&local_res10);
  pbVar9 = (byte *)0x0;
  if (((byte)*puVar8 & 0x1f) == 1) {
    pbVar9 = param_2;
  }
  if (pbVar9 != (byte *)0x0) {
    iVar6 = FUN_144beec90(param_2);
    if (iVar6 != 0) {
      param_2 = &DAT_14c6ddac0;
    }
  }
  plVar3 = (longlong *)*param_1;
  local_res10 = param_2;
  lVar10 = FUN_144f87560(plVar3,&local_res10);
  if ((lVar10 != 0) && (lVar10 = (longlong)*(int *)(lVar10 + 4) * 0x10 + *plVar3, lVar10 != 0)) {
    return (ulonglong)*(uint *)(lVar10 + 8);
  }
  uVar2 = *(uint *)(plVar3 + 9);
  uVar13 = (ulonglong)uVar2;
  if ((*param_2 >> 3 & 1) != 0) {
    puVar8 = (undefined4 *)FUN_144bef0c0(param_2,local_48);
    plVar1 = plVar3 + 4;
    FUN_144f871c0(plVar1,&local_res18,puVar8);
    iVar6 = (int)CONCAT71(uStackX_19,local_res18);
    local_res18 = iVar6 == (int)plVar3[5];
    if ((bool)local_res18) {
      iVar14 = (int)plVar3[5] + 1;
      if ((int)(*(uint *)((longlong)plVar3 + 0x2c) & 0x7fffffff) < iVar14) {
        FUN_144f879a0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar14);
      }
      puVar11 = (undefined4 *)((longlong)(int)plVar3[5] * 0x20 + *plVar1);
      if (puVar11 != (undefined4 *)0x0) {
        uVar7 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        *puVar11 = *puVar8;
        puVar11[1] = uVar7;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        *(undefined8 *)(puVar11 + 5) = 0;
        *(undefined1 *)(puVar11 + 6) = 0;
      }
      *(int *)(plVar3 + 5) = iVar14;
    }
    lVar10 = (longlong)iVar6 * 0x20 + *plVar1;
    puVar8 = (undefined4 *)FUN_144bef800(param_2,local_res20);
    pbVar9 = (byte *)0x0;
    if (((byte)*puVar8 & 0x1f) == 1) {
      pbVar9 = param_2;
    }
    bVar15 = pbVar9 == (byte *)0x0;
    if (bVar15) {
      uVar7 = FUN_144f89af0(*param_1 + 0x68,param_2);
    }
    else {
      uVar7 = local_res10._0_4_;
    }
    if (local_res18 == '\0') {
      uVar13 = (ulonglong)*(int *)(lVar10 + 0x10);
      if ((bVar15) && (*(char *)(lVar10 + 0x18) == '\0')) {
        puVar8 = (undefined4 *)(lVar10 + 0x14);
        if (*(char *)(lVar10 + 0x18) == '\0') {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = uVar7;
          }
          *(undefined1 *)(lVar10 + 0x18) = 1;
        }
        else {
          *puVar8 = uVar7;
        }
        *(byte **)(*(longlong *)(*param_1 + 0x40) + uVar13 * 8) = param_2;
      }
    }
    else {
      *(uint *)(lVar10 + 0x10) = uVar2;
      if (bVar15) {
        puVar8 = (undefined4 *)(lVar10 + 0x14);
        if (*(char *)(lVar10 + 0x18) == '\0') {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = uVar7;
          }
          *(undefined1 *)(lVar10 + 0x18) = 1;
        }
        else {
          *puVar8 = uVar7;
        }
      }
      else if (*(char *)(lVar10 + 0x18) != '\0') {
        *(undefined1 *)(lVar10 + 0x18) = 0;
      }
    }
  }
  plVar3 = (longlong *)*param_1;
  FUN_144f87090(plVar3,&local_res18,&local_res10);
  iVar6 = (int)CONCAT71(uStackX_19,local_res18);
  iVar14 = (int)uVar13;
  if (iVar6 == (int)plVar3[1]) {
    iVar6 = (int)plVar3[1] + 1;
    if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar6) {
      FUN_144f878a0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar12 = (undefined8 *)((longlong)(int)plVar3[1] * 0x10 + *plVar3);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = param_2;
      *(int *)(puVar12 + 1) = iVar14;
    }
    *(int *)(plVar3 + 1) = iVar6;
  }
  else {
    *(int *)(*plVar3 + 8 + (longlong)iVar6 * 0x10) = iVar14;
  }
  lVar10 = *param_1;
  if (iVar14 == *(int *)(lVar10 + 0x48)) {
    iVar6 = *(int *)(lVar10 + 0x48) + 1;
    if ((int)(*(uint *)(lVar10 + 0x4c) & 0x7fffffff) < iVar6) {
      FUN_144bf0cc0(lVar10 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar12 = (undefined8 *)(*(longlong *)(lVar10 + 0x40) + (longlong)*(int *)(lVar10 + 0x48) * 8);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = param_2;
    }
    *(int *)(lVar10 + 0x48) = iVar6;
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 144f84d90 FUN_144f84d90 body=84 status=ok
// SIG undefined FUN_144f84d90(void)

int FUN_144f84d90(longlong *param_1)

{
  int iVar1;
  longlong local_18;
  int local_10;
  
  iVar1 = FUN_144f84ad0();
  local_18 = *(longlong *)(*(longlong *)(*param_1 + 0x40) + (longlong)iVar1 * 8);
  if (local_18 != 0) {
    *(undefined8 *)(*(longlong *)(*param_1 + 0x40) + (longlong)iVar1 * 8) = 0;
    local_10 = iVar1;
    FUN_144f86360(*param_1 + 0x50,&local_18);
  }
  return iVar1;
}



// FUNCTION 144f84df0 FUN_144f84df0 body=62 status=ok
// SIG undefined FUN_144f84df0(void)

void FUN_144f84df0(longlong *param_1,int param_2)

{
  longlong local_18;
  int local_10;
  
  local_18 = *(longlong *)(*(longlong *)(*param_1 + 0x40) + (longlong)param_2 * 8);
  if (local_18 != 0) {
    *(undefined8 *)(*(longlong *)(*param_1 + 0x40) + (longlong)param_2 * 8) = 0;
    local_10 = param_2;
    FUN_144f86360(*param_1 + 0x50,&local_18);
  }
  return;
}



// FUNCTION 144f84e30 FUN_144f84e30 body=11 status=ok
// SIG undefined FUN_144f84e30(void)

undefined8 FUN_144f84e30(longlong *param_1)

{
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(int *)(*param_1 + 100) == 0);
}



// FUNCTION 144f84e40 FUN_144f84e40 body=66 status=ok
// SIG undefined FUN_144f84e40(void)

undefined8 * FUN_144f84e40(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = *param_1;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)(lVar2 + 100) != 0) {
    puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x50) + (longlong)*(int *)(lVar2 + 0x5c) * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    iVar5 = *(int *)(lVar2 + 0x5c) + 1;
    *(int *)(lVar2 + 0x5c) = iVar5;
    *param_2 = uVar3;
    param_2[1] = uVar4;
    if (iVar5 == *(int *)(lVar2 + 0x58)) {
      *(undefined4 *)(lVar2 + 0x5c) = 0;
    }
    *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) + -1;
  }
  return param_2;
}



// FUNCTION 144f84e90 FUN_144f84e90 body=80 status=ok
// SIG undefined FUN_144f84e90(void)

undefined8 * FUN_144f84e90(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  FUN_144f77630();
  *param_1 = hkSerialize::Detail::CloneToRegistered::vftable;
  if (param_2 == 0) {
    param_2 = FUN_144beec00();
  }
  *(undefined1 *)(param_1 + 4) = param_3;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 144f84ee0 FUN_144f84ee0 body=15 status=ok
// SIG undefined FUN_144f84ee0(void)

void FUN_144f84ee0(undefined8 *param_1)

{
  *param_1 = hkSerialize::Detail::CloneToRegistered::vftable;
  FUN_144f77650();
  return;
}



// FUNCTION 144f84ef0 FUN_144f84ef0 body=841 status=ok
// SIG undefined FUN_144f84ef0(void)

longlong FUN_144f84ef0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_res8 [2];
  int local_res18 [2];
  undefined8 local_218;
  code *local_210;
  undefined8 local_208;
  code *local_200;
  int *local_1f8;
  code *local_1f0;
  int *local_1e8;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [80];
  undefined1 local_170 [344];
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  if (lVar2 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    return lVar2;
  }
  if (param_2 == 0) {
    return lVar2;
  }
  local_res8[0] = FUN_144bef1d0(lVar2);
  local_res18[0] = FUN_144bef1d0(param_2);
  if (local_res18[0] != local_res8[0]) {
    if (local_res18[0] < local_res8[0]) {
      if ((DAT_14c7996a8 == '\0') && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) {
        return 0;
      }
      cVar1 = FUN_144bdbf80();
      if (cVar1 != '\0') {
        uVar3 = FUN_144bef0c0(param_2,local_1d0);
        uVar4 = FUN_144bdc810(local_170,&DAT_14c799658,1);
        local_218 = 3;
        local_210 = FUN_144c14800;
        local_1f8 = local_res18;
        local_200 = FUN_144f50970;
        local_1f0 = FUN_144f50970;
        local_1e8 = local_res8;
        local_208 = uVar3;
        lVar2 = FUN_144bdc480(uVar4,
                              "Wrong type version found trying to clone {}. Loading the file produced version {} but the compiled in version is {}. This is often caused by missing patches or out of date assets"
                              ,&local_218,0);
        *(char **)(lVar2 + 0x38) = "Detail\\hkSerializeDetail.cpp";
        *(undefined8 *)(lVar2 + 0x40) = 0x1f8;
        FUN_144bdc8a0(local_170);
        return 0;
      }
      uVar3 = FUN_144bef0c0(param_2,local_1e0);
      uVar4 = FUN_144bdc640(local_1c0,&DAT_14c799658,1);
      local_218 = 3;
      local_210 = FUN_144c14800;
      local_1f8 = local_res18;
      local_200 = FUN_144f50970;
      local_1f0 = FUN_144f50970;
      local_1e8 = local_res8;
      local_208 = uVar3;
      lVar2 = FUN_144bdc480(uVar4,
                            "Wrong type version found trying to clone {}. Loading the file produced version {} but the compiled in version is {}. This is often caused by missing patches or out of date assets"
                            ,&local_218,0);
      *(char **)(lVar2 + 0x38) = "Detail\\hkSerializeDetail.cpp";
      *(undefined8 *)(lVar2 + 0x40) = 0x1f8;
    }
    else {
      if ((DAT_14c7996a8 == '\0') && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) {
        return 0;
      }
      cVar1 = FUN_144bdbf80();
      if (cVar1 != '\0') {
        uVar3 = FUN_144bef0c0(param_2,local_1e0);
        uVar4 = FUN_144bdc810(local_170,&DAT_14c799658,1);
        local_218 = 3;
        local_210 = FUN_144c14800;
        local_1f8 = local_res18;
        local_200 = FUN_144f50970;
        local_1f0 = FUN_144f50970;
        local_1e8 = local_res8;
        local_208 = uVar3;
        lVar2 = FUN_144bdc480(uVar4,
                              "Wrong type version found trying to clone {}. Loading the file produced version {} but the compiled in version is {}. This is often caused by loading an asset from a different branch"
                              ,&local_218,0);
        *(char **)(lVar2 + 0x38) = "Detail\\hkSerializeDetail.cpp";
        *(undefined8 *)(lVar2 + 0x40) = 0x1fd;
        FUN_144bdc8a0(local_170);
        return 0;
      }
      uVar3 = FUN_144bef0c0(param_2,local_1d0);
      uVar4 = FUN_144bdc640(local_1c0,&DAT_14c799658,1);
      local_218 = 3;
      local_210 = FUN_144c14800;
      local_1f8 = local_res18;
      local_200 = FUN_144f50970;
      local_1f0 = FUN_144f50970;
      local_1e8 = local_res8;
      local_208 = uVar3;
      lVar2 = FUN_144bdc480(uVar4,
                            "Wrong type version found trying to clone {}. Loading the file produced version {} but the compiled in version is {}. This is often caused by loading an asset from a different branch"
                            ,&local_218,0);
      *(char **)(lVar2 + 0x38) = "Detail\\hkSerializeDetail.cpp";
      *(undefined8 *)(lVar2 + 0x40) = 0x1fd;
    }
    FUN_144bdc690(local_1c0);
    return 0;
  }
  return lVar2;
}



// FUNCTION 144f85240 FUN_144f85240 body=97 status=ok
// SIG undefined FUN_144f85240(void)

undefined8 * FUN_144f85240(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSerialize::Detail::CloneToRegistered::vftable;
  FUN_144f77650();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144f852b0 FUN_144f852b0 body=49 status=ok
// SIG undefined FUN_144f852b0(void)

undefined8 * FUN_144f852b0(undefined8 *param_1,undefined8 param_2)

{
  FUN_144f76c00();
  param_1[1] = param_2;
  *param_1 = hkSerialize::Detail::ChainingCloneCallback::vftable;
  return param_1;
}



// FUNCTION 144f852f0 FUN_144f852f0 body=15 status=ok
// SIG undefined FUN_144f852f0(void)

void FUN_144f852f0(undefined8 *param_1)

{
  *param_1 = hkSerialize::Detail::ChainingCloneCallback::vftable;
  FUN_144f76c10();
  return;
}



// FUNCTION 144f85300 FUN_144f85300 body=28 status=ok
// SIG undefined FUN_144f85300(void)

undefined8 FUN_144f85300(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  return param_2;
}



// FUNCTION 144f85320 FUN_144f85320 body=28 status=ok
// SIG undefined FUN_144f85320(void)

undefined8 FUN_144f85320(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return param_2;
}



// FUNCTION 144f85340 FUN_144f85340 body=39 status=ok
// SIG undefined FUN_144f85340(void)

undefined8 FUN_144f85340(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  return param_2;
}



// FUNCTION 144f85370 FUN_144f85370 body=11 status=ok
// SIG undefined FUN_144f85370(void)

void FUN_144f85370(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f85377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  return;
}



// FUNCTION 144f85380 FUN_144f85380 body=11 status=ok
// SIG undefined FUN_144f85380(void)

void FUN_144f85380(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f85387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  return;
}



// FUNCTION 144f85390 FUN_144f85390 body=11 status=ok
// SIG undefined FUN_144f85390(void)

void FUN_144f85390(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144f85397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return;
}



// FUNCTION 144f853a0 FUN_144f853a0 body=97 status=ok
// SIG undefined FUN_144f853a0(void)

undefined8 * FUN_144f853a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSerialize::Detail::ChainingCloneCallback::vftable;
  FUN_144f76c10();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144f85410 FUN_144f85410 body=81 status=ok
// SIG undefined FUN_144f85410(void)

undefined8 * FUN_144f85410(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_144f76c00();
  param_1[1] = param_2;
  *param_1 = hkSerialize::Detail::SkipDyingCallback::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 144f85470 FUN_144f85470 body=51 status=ok
// SIG undefined FUN_144f85470(void)

void FUN_144f85470(undefined8 *param_1)

{
  *param_1 = hkSerialize::Detail::SkipDyingCallback::vftable;
  FUN_144f85b20(param_1 + 3);
  *param_1 = hkSerialize::Detail::ChainingCloneCallback::vftable;
  FUN_144f76c10(param_1);
  return;
}



// FUNCTION 144f854b0 FUN_144f854b0 body=49 status=ok
// SIG undefined FUN_144f854b0(void)

void FUN_144f854b0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_144f85890(param_1 + 0x18);
  return;
}



// FUNCTION 144f854f0 FUN_144f854f0 body=844 status=ok
// SIG undefined FUN_144f854f0(void)

int * FUN_144f854f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined4 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char cVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int local_res18 [2];
  longlong local_c8;
  longlong local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  code *local_a0;
  char *local_98;
  code *local_90;
  int *local_88;
  undefined1 local_80 [88];
  
  puVar6 = (uint *)FUN_144b45d50(param_3[1],local_res18);
  if ((*puVar6 >> 6 & 1) == 0) goto LAB_144f85800;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_4[2] & 0xfffffffffffffffe),&local_c8,*param_4,param_4[1],&local_c0);
  local_res18[0] = (int)local_c8;
  if ((int)local_c8 < 0) {
    if (DAT_14c7996a8 != '\0') {
      lVar7 = FUN_144bdc640(local_80,&DAT_14c799658,1);
      local_a8 = 2;
      *(char **)(lVar7 + 0x38) = "Detail\\hkSerializeDetail.cpp";
      local_a0 = FUN_144f61bc0;
      local_98 = "src.getValue(&pointed)";
      local_90 = FUN_144bdef40;
      local_88 = local_res18;
      *(undefined8 *)(lVar7 + 0x40) = 0x2c7;
      uVar8 = FUN_144bdc480(lVar7,"HK_RETURN_IF_FAILED({}) returning {}. ",&local_a8,0);
      local_c8 = 0;
      FUN_144bdc480(uVar8,&DAT_14996de1b,&local_c8,0);
      FUN_144bdc690(local_80);
    }
    *param_2 = local_res18[0];
    goto LAB_144f857da;
  }
  if ((local_c0 != 0) &&
     ((lVar7 = FUN_144c00490(param_1[2],&local_c0), lVar7 == 0 || (*(int *)(lVar7 + 4) < 0)))) {
    FUN_144beff00(param_3[1],&local_c8);
    lVar7 = local_c8;
    if (local_c8 == 0) {
LAB_144f85692:
      lVar7 = (**(code **)(*param_1 + 0x20))(param_1,param_4[1]);
      if ((lVar7 == 0) || (cVar5 = FUN_144b45dd0(lVar7,&DAT_14c6dc390), cVar5 == '\0'))
      goto LAB_144f857ee;
    }
    else {
      cVar5 = FUN_144b45dd0(local_c8,&DAT_14c6dc390);
      if (cVar5 == '\0') {
        puVar9 = (undefined4 *)FUN_144bef800(lVar7,local_res18);
        lVar10 = 0;
        if (((byte)*puVar9 & 0x1f) == 7) {
          lVar10 = lVar7;
        }
        if (lVar10 == 0) goto LAB_144f857ee;
        goto LAB_144f85692;
      }
    }
    plVar1 = param_1 + 3;
    FUN_144f87410(plVar1,local_res18,&local_c0);
    iVar12 = local_res18[0];
    if (local_res18[0] == (int)param_1[4]) {
      iVar13 = (int)param_1[4] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) < iVar13) {
        FUN_144f87ae0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar13);
      }
      plVar2 = (longlong *)(*plVar1 + (longlong)(int)param_1[4] * 0x28);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = local_c0;
        plVar2[1] = lStack_b8;
        plVar2[2] = local_b0;
        if ((local_b0 & 1) != 0) {
          FUN_144be6b20(local_b0 & 0xfffffffffffffffe);
        }
        plVar2[3] = 0;
        *(undefined4 *)(plVar2 + 4) = 0;
        *(undefined4 *)((longlong)plVar2 + 0x24) = 0x80000000;
      }
      *(int *)(param_1 + 4) = iVar13;
    }
    lVar11 = (longlong)iVar12;
    lVar10 = *plVar1;
    iVar12 = *(int *)(lVar10 + 0x20 + lVar11 * 0x28) + 1;
    lVar7 = lVar10 + lVar11 * 0x28;
    if ((int)(*(uint *)(lVar10 + 0x24 + lVar11 * 0x28) & 0x7fffffff) < iVar12) {
      FUN_144f87600(lVar7 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar12);
    }
    puVar3 = (undefined8 *)(*(longlong *)(lVar7 + 0x18) + (longlong)*(int *)(lVar7 + 0x20) * 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_3;
      puVar3[1] = param_3[1];
      uVar4 = param_3[2];
      puVar3[2] = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
      }
    }
    *(int *)(lVar7 + 0x20) = iVar12;
    *param_5 = 0;
    *param_2 = 0;
LAB_144f857da:
    if ((local_b0 & 1) == 0) {
      return param_2;
    }
    FUN_144be6b30(local_b0 & 0xfffffffffffffffe);
    return param_2;
  }
LAB_144f857ee:
  if ((local_b0 & 1) != 0) {
    FUN_144be6b30(local_b0 & 0xfffffffffffffffe);
  }
LAB_144f85800:
  (**(code **)(*(longlong *)param_1[1] + 0x18))
            ((longlong *)param_1[1],param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 144f85840 FUN_144f85840 body=73 status=ok
// SIG undefined FUN_144f85840(void)

void FUN_144f85840(longlong param_1,int *param_2)

{
  longlong local_18;
  int *local_10;
  
  if (-1 < *param_2) {
    local_18 = param_1;
    local_10 = param_2;
    FUN_144f86be0(&local_18);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144f85885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
  return;
}



// FUNCTION 144f85890 FUN_144f85890 body=328 status=ok
// SIG undefined FUN_144f85890(void)

void FUN_144f85890(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  if (*(int *)(param_1 + 1) != 0) {
    uVar6 = 0;
    plVar4 = (longlong *)*param_1;
    if (plVar4 + (longlong)*(int *)(param_1 + 1) * 5 != plVar4) {
      plVar10 = plVar4 + (longlong)*(int *)(param_1 + 1) * 5 + 3;
      do {
        puVar5 = (ulonglong *)plVar10[-5];
        plVar1 = plVar10 + -5;
        if (puVar5 + (longlong)(int)plVar10[-4] * 3 != puVar5) {
          puVar7 = puVar5 + (longlong)(int)plVar10[-4] * 3 + 2;
          do {
            if ((puVar7[-3] & 1) != 0) {
              FUN_144be6b30(puVar7[-3] & 0xfffffffffffffffe);
            }
            puVar2 = puVar7 + -5;
            puVar7 = puVar7 + -3;
          } while (puVar2 != puVar5);
        }
        *(undefined4 *)(plVar10 + -4) = 0;
        if ((-1 < (int)*(uint *)((longlong)plVar10 + -0x1c)) && (*plVar1 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar1,
                     (ulonglong)(*(uint *)((longlong)plVar10 + -0x1c) & 0x7fffffff) * 0x18);
        }
        *plVar1 = 0;
        *(undefined4 *)((longlong)plVar10 + -0x1c) = 0x80000000;
        if ((*(byte *)(plVar10 + -6) & 1) != 0) {
          FUN_144be6b30(plVar10[-6] & 0xfffffffffffffffe);
        }
        plVar3 = plVar10 + -8;
        plVar10 = plVar1;
      } while (plVar3 != plVar4);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (((param_1[2] != 0) && (*(int *)(param_1[2] + 4) != -2)) &&
       (uVar9 = uVar6, 0 < *(int *)(param_1 + 3) + 1)) {
      do {
        uVar8 = (int)uVar9 + 1;
        *(undefined4 *)(uVar6 + 4 + param_1[2]) = 0xffffffff;
        uVar6 = uVar6 + 8;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 3) + 1);
    }
  }
  return;
}



// FUNCTION 144f859e0 FUN_144f859e0 body=310 status=ok
// SIG undefined FUN_144f859e0(void)

void FUN_144f859e0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_144f86fc0(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0x28);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  FUN_144f86af0(*param_1 + (longlong)(int)uVar3 * 0x28,0);
  uVar5 = (int)param_1[1] - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    lVar6 = *param_1 + (longlong)(int)uVar5 * 0x28;
    lVar1 = *param_1 + (longlong)(int)uVar3 * 0x28;
    if (lVar1 != lVar6) {
      if (lVar1 != 0) {
        FUN_144f86a60(lVar1,lVar6);
      }
      FUN_144f86af0(lVar6,0);
    }
  }
  lVar6 = param_1[2];
  uVar8 = (ulonglong)(int)param_1[3];
  uVar7 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar8;
  puVar2 = (uint *)(lVar6 + uVar7 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar8 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar8 = (ulonglong)(int)param_1[3];
    uVar7 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar8;
    puVar2 = (uint *)(lVar6 + uVar7 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144f85b20 FUN_144f85b20 body=358 status=ok
// SIG undefined FUN_144f85b20(void)

void FUN_144f85b20(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  
  lVar4 = param_1[2];
  if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
    FUN_144b3ec00(param_1 + 2);
  }
  plVar5 = (longlong *)*param_1;
  if (plVar5 + (longlong)(int)param_1[1] * 5 != plVar5) {
    plVar8 = plVar5 + (longlong)(int)param_1[1] * 5 + 3;
    do {
      puVar6 = (ulonglong *)plVar8[-5];
      plVar1 = plVar8 + -5;
      if (puVar6 + (longlong)(int)plVar8[-4] * 3 != puVar6) {
        puVar7 = puVar6 + (longlong)(int)plVar8[-4] * 3 + 2;
        do {
          if ((puVar7[-3] & 1) != 0) {
            FUN_144be6b30(puVar7[-3] & 0xfffffffffffffffe);
          }
          puVar2 = puVar7 + -5;
          puVar7 = puVar7 + -3;
        } while (puVar2 != puVar6);
      }
      *(undefined4 *)(plVar8 + -4) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar8 + -0x1c)) && (*plVar1 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar1,
                   (ulonglong)(*(uint *)((longlong)plVar8 + -0x1c) & 0x7fffffff) * 0x18);
      }
      *plVar1 = 0;
      *(undefined4 *)((longlong)plVar8 + -0x1c) = 0x80000000;
      if ((*(byte *)(plVar8 + -6) & 1) != 0) {
        FUN_144be6b30(plVar8[-6] & 0xfffffffffffffffe);
      }
      plVar3 = plVar8 + -8;
      plVar8 = plVar1;
    } while (plVar3 != plVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x28);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f85c90 FUN_144f85c90 body=119 status=ok
// SIG undefined FUN_144f85c90(void)

undefined8 * FUN_144f85c90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSerialize::Detail::SkipDyingCallback::vftable;
  FUN_144f85b20(param_1 + 3);
  *param_1 = hkSerialize::Detail::ChainingCloneCallback::vftable;
  FUN_144f76c10(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144f85d10 FUN_144f85d10 body=115 status=ok
// SIG undefined FUN_144f85d10(void)

undefined * FUN_144f85d10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  char cVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR_PTR_14c729a30;
  while( true ) {
    puVar1 = *ppuVar4;
    pcVar2 = *(code **)(puVar1 + 8);
    if ((pcVar2 != (code *)0x0) && (cVar3 = (*pcVar2)(param_1,param_2), cVar3 != '\0')) break;
    ppuVar4 = ppuVar4 + 1;
    if (ppuVar4 == (undefined **)&DAT_14c729a78) {
      return (undefined *)0x0;
    }
  }
  return puVar1;
}



// FUNCTION 144f85d90 FUN_144f85d90 body=114 status=ok
// SIG undefined FUN_144f85d90(void)

/* WARNING: Removing unreachable block (ram,0x000144f85dce) */

undefined8 * FUN_144f85d90(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong local_res10 [2];
  
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    *param_2 = 0;
    local_res10[1] = 0;
    local_res10[0] = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(param_1 + 0x10))(local_res10);
    uVar1 = *puVar2;
    *puVar2 = 0;
    *param_2 = uVar1;
  }
  if (local_res10[0] != 0) {
    FUN_144b3f230();
  }
  return param_2;
}



// FUNCTION 144f85e10 FUN_144f85e10 body=4 status=ok
// SIG undefined FUN_144f85e10(void)

undefined8 FUN_144f85e10(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144f85e20 FUN_144f85e20 body=635 status=ok
// SIG undefined FUN_144f85e20(void)

longlong * FUN_144f85e20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_res18 [2];
  int local_48;
  undefined4 local_44;
  undefined1 local_40;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar7 = FUN_144b3d480();
  param_1[2] = lVar7;
  plVar1 = param_1 + 4;
  *(undefined4 *)(param_1 + 3) = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  lVar7 = FUN_144b3d480();
  param_1[6] = lVar7;
  plVar2 = param_1 + 8;
  *(undefined4 *)(param_1 + 7) = 0;
  *plVar2 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_144f89a90(param_1 + 0xd,0xffffffffffffffff);
  FUN_144f872e0(param_1,local_res18);
  if (local_res18[0] == (int)param_1[1]) {
    iVar11 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
      FUN_144f878a0(param_1,&PTR_vftable_14c6e47a0);
    }
    puVar8 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
    }
    *(int *)(param_1 + 1) = iVar11;
  }
  lVar7 = *param_2;
  uVar15 = 1;
  lVar9 = param_2[1] - lVar7;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  uVar14 = (lVar9 >> 2) - (lVar9 >> 0x3f);
  iVar13 = (int)uVar14;
  iVar11 = iVar13;
  if (iVar13 < 1) {
    iVar11 = 1;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) < iVar11) {
    FUN_144c13a80(plVar2,&PTR_vftable_14c6e47a0);
  }
  iVar3 = (int)param_1[9];
  if (iVar3 < iVar11) {
    *(int *)(param_1 + 9) = iVar11;
    uVar10 = (ulonglong)(uint)(iVar11 - iVar3);
    puVar8 = (undefined8 *)(*plVar2 + (longlong)iVar3 * 8);
    if (0 < iVar11 - iVar3) {
      do {
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
        }
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar10 != 0);
    }
  }
  else if (iVar11 < iVar3) {
    *(int *)(param_1 + 9) = iVar11;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar13) {
    FUN_144f87770(plVar1,&PTR_vftable_14c6e47a0);
  }
  uVar10 = (longlong)(iVar13 + 1) * 3;
  if ((iVar13 + 1 < 0) || (0xffffffff < uVar10)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[7] * 2;
  if (((int)param_1[7] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar10)) {
    FUN_144b2eb80(param_1 + 6);
  }
  if (1 < uVar14) {
    do {
      iVar11 = (int)uVar15;
      plVar12 = (longlong *)((longlong)iVar11 * 0x18 + lVar7);
      if (*plVar12 != 0) {
        local_40 = *(char *)((longlong)plVar12 + 0x14) != '\0';
        if ((bool)local_40) {
          local_44 = (undefined4)plVar12[2];
        }
        local_48 = iVar11;
        FUN_144f861a0(plVar1,plVar12,&local_48);
        if (*(char *)((longlong)plVar12 + 0x14) == '\0') {
          *(undefined1 **)(*plVar2 + (longlong)iVar11 * 8) = &DAT_14c6ddac0;
        }
      }
      uVar15 = (ulonglong)(iVar11 + 1);
    } while (uVar15 < uVar14);
  }
  return param_1;
}



// FUNCTION 144f860a0 FUN_144f860a0 body=123 status=ok
// SIG undefined FUN_144f860a0(void)

void FUN_144f860a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f86120 FUN_144f86120 body=123 status=ok
// SIG undefined FUN_144f86120(void)

void FUN_144f86120(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 5);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f861a0 FUN_144f861a0 body=224 status=ok
// SIG undefined FUN_144f861a0(void)

undefined8 FUN_144f861a0(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_res8 [2];
  
  FUN_144f871c0(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar5 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_144f879a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    puVar2 = (undefined8 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar1;
      *(undefined4 *)(puVar2 + 2) = *param_3;
      *(undefined1 *)(puVar2 + 3) = 0;
      if (*(char *)(param_3 + 2) != '\0') {
        *(undefined4 *)((longlong)puVar2 + 0x14) = param_3[1];
        *(undefined1 *)(puVar2 + 3) = 1;
      }
    }
    *(int *)(param_1 + 1) = iVar5;
    uVar1 = 1;
  }
  else {
    lVar3 = (longlong)local_res8[0] * 0x20 + *param_1;
    *(undefined4 *)(lVar3 + 0x10) = *param_3;
    puVar4 = (undefined4 *)(lVar3 + 0x14);
    if (*(char *)(param_3 + 2) == '\0') {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        *(undefined1 *)(lVar3 + 0x18) = 0;
      }
    }
    else if (*(char *)(lVar3 + 0x18) == '\0') {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = param_3[1];
      }
      *(undefined1 *)(lVar3 + 0x18) = 1;
    }
    else {
      *puVar4 = param_3[1];
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144f86280 FUN_144f86280 body=223 status=ok
// SIG undefined FUN_144f86280(void)

longlong FUN_144f86280(longlong param_1,ulonglong param_2)

{
  thunk_FUN_144f8a0b0(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    (*DAT_14c787678)(DAT_14c6e47a8,*(undefined8 *)(param_1 + 0x50),0);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x4c)) && (*(longlong *)(param_1 + 0x40) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x40),
               (ulonglong)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  FUN_144f86120(param_1 + 0x20);
  FUN_144f860a0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144f86360 FUN_144f86360 body=325 status=ok
// SIG undefined FUN_144f86360(void)

void FUN_144f86360(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1];
  if (iVar9 <= *(int *)((longlong)param_1 + 0x14)) {
    if (iVar9 == 0) {
      iVar3 = 0;
      iVar6 = 8;
    }
    else {
      iVar3 = iVar9 * 2;
      iVar6 = iVar3;
      if (SBORROW4(iVar9,iVar3) == -iVar9 < 0) goto LAB_144f86470;
    }
    iVar9 = iVar3;
    if (iVar3 < iVar6) {
      iVar9 = iVar6;
    }
    lVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar9 << 4);
    if ((lVar4 != 0) && (*param_1 != 0)) {
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        iVar3 = *(int *)((longlong)param_1 + 0xc);
        lVar2 = param_1[2];
        lVar7 = (longlong)iVar3 * 0x10 + *param_1;
        if (iVar3 < (int)lVar2) {
          FUN_144bfbed0(lVar4,lVar7,(longlong)*(int *)((longlong)param_1 + 0x14) << 4);
        }
        else {
          lVar8 = (longlong)((int)param_1[1] - iVar3) * 0x10;
          FUN_144bfbed0(lVar4,lVar7,lVar8);
          FUN_144bfbed0(lVar8 + lVar4,*param_1,(longlong)(int)lVar2 << 4);
        }
      }
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    if ((int)param_1[1] != 0) {
      (*DAT_14c787678)(DAT_14c6e47a8,*param_1,0);
    }
    *param_1 = lVar4;
    *(int *)(param_1 + 1) = iVar9;
  }
LAB_144f86470:
  iVar3 = (int)param_1[2];
  if (iVar3 == iVar9) {
    *(undefined4 *)(param_1 + 2) = 0;
    iVar3 = 0;
  }
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_1);
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  return;
}



// FUNCTION 144f864d0 FUN_144f864d0 body=124 status=ok
// SIG undefined FUN_144f864d0(void)

undefined8 FUN_144f864d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_28;
  longlong local_20;
  char *local_18;
  char *local_10;
  
  local_20 = param_1 + param_2;
  local_18 = "<hkpackfile ";
  local_10 = "";
  local_28 = param_1;
  lVar1 = FUN_144f5a3a0(&local_28,&local_18,0);
  if (lVar1 == 0) {
    local_18 = "<hkpackfile>";
    local_10 = "";
    lVar1 = FUN_144f5a3a0(&local_28,&local_18,0);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144f86550 FUN_144f86550 body=245 status=ok
// SIG undefined FUN_144f86550(void)

undefined8 FUN_144f86550(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int local_res18 [2];
  undefined1 local_res20 [8];
  char *local_138;
  char *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [64];
  undefined1 local_d8 [208];
  
  FUN_144f89370(local_118,param_1,param_2);
  FUN_144f95540(local_d8,local_118);
  iVar2 = FUN_144f95520(local_d8);
  while (iVar2 != 1) {
    if (iVar2 - 6U < 2) goto LAB_144f86620;
    iVar2 = FUN_144f95520(local_d8);
  }
  local_138 = "hktagfile";
  local_130 = "";
  uVar3 = FUN_144f956e0(local_d8,local_128);
  cVar1 = FUN_144f5a730(uVar3,&local_138);
  if (((cVar1 == '\0') ||
      (piVar4 = (int *)FUN_144f957d0(local_d8,local_res20,"version",local_res18), *piVar4 < 0)) ||
     (local_res18[0] != 3)) {
LAB_144f86620:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_144f955e0(local_d8);
  FUN_144f893a0(local_118);
  return uVar3;
}



// FUNCTION 144f86650 FUN_144f86650 body=245 status=ok
// SIG undefined FUN_144f86650(void)

undefined8 FUN_144f86650(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int local_res18 [2];
  undefined1 local_res20 [8];
  char *local_138;
  char *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [64];
  undefined1 local_d8 [208];
  
  FUN_144f89370(local_118,param_1,param_2);
  FUN_144f95540(local_d8,local_118);
  iVar2 = FUN_144f95520(local_d8);
  while (iVar2 != 1) {
    if (iVar2 - 6U < 2) goto LAB_144f86720;
    iVar2 = FUN_144f95520(local_d8);
  }
  local_138 = "hktagfile";
  local_130 = "";
  uVar3 = FUN_144f956e0(local_d8,local_128);
  cVar1 = FUN_144f5a730(uVar3,&local_138);
  if ((cVar1 == '\0') ||
     ((piVar4 = (int *)FUN_144f957d0(local_d8,local_res20,"version",local_res18), -1 < *piVar4 &&
      (2 < local_res18[0])))) {
LAB_144f86720:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_144f955e0(local_d8);
  FUN_144f893a0(local_118);
  return uVar3;
}



// FUNCTION 144f86750 FUN_144f86750 body=99 status=ok
// SIG undefined FUN_144f86750(void)

bool FUN_144f86750(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  if (param_2 < 8) {
    return false;
  }
  iVar1 = FUN_144bfbf00(param_1 + 4,&DAT_149c13e30,4);
  if (iVar1 != 0) {
    iVar1 = FUN_144bfbf00(param_1 + 4,&DAT_149c13e38,4);
    return iVar1 == 0;
  }
  return true;
}



// FUNCTION 144f867c0 FUN_144f867c0 body=99 status=ok
// SIG undefined FUN_144f867c0(void)

bool FUN_144f867c0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  if (param_2 < 8) {
    return false;
  }
  iVar1 = FUN_144bfbf00(param_1 + 4,&DAT_149c13e40,4);
  if (iVar1 != 0) {
    iVar1 = FUN_144bfbf00(param_1 + 4,&DAT_149c13e48,4);
    return iVar1 == 0;
  }
  return true;
}



// FUNCTION 144f868e0 FUN_144f868e0 body=62 status=ok
// SIG undefined FUN_144f868e0(void)

void FUN_144f868e0(longlong param_1,longlong param_2)

{
  undefined *local_28;
  undefined *local_20;
  longlong local_18;
  longlong local_10;
  
  local_28 = &DAT_149c13e50;
  local_20 = &DAT_149c13e53;
  local_10 = param_1 + param_2;
  local_18 = param_1;
  FUN_144f5a5d0(&local_18,&local_28);
  return;
}



// FUNCTION 144f86920 FUN_144f86920 body=62 status=ok
// SIG undefined FUN_144f86920(void)

void FUN_144f86920(longlong param_1,longlong param_2)

{
  char *local_28;
  char *local_20;
  longlong local_18;
  longlong local_10;
  
  local_28 = "<compr>";
  local_20 = "";
  local_10 = param_1 + param_2;
  local_18 = param_1;
  FUN_144f5a5d0(&local_18,&local_28);
  return;
}



// FUNCTION 144f86960 FUN_144f86960 body=251 status=ok
// SIG undefined FUN_144f86960(void)

void FUN_144f86960(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x18);
    uVar1 = *(uint *)(param_1 + 1);
    puVar2 = (undefined8 *)*param_1;
    uVar8 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      uVar7 = (ulonglong)uVar1;
      puVar5 = puVar4;
      puVar9 = puVar2;
      do {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *puVar9;
          puVar5[1] = puVar9[1];
          uVar3 = puVar9[2];
          puVar5[2] = uVar3;
          if ((uVar3 & 1) != 0) {
            FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
          }
        }
        puVar5 = puVar5 + 3;
        puVar9 = puVar9 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      puVar6 = puVar2 + 2;
      do {
        if ((*puVar6 & 1) != 0) {
          FUN_144be6b30(*puVar6 & 0xfffffffffffffffe);
        }
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *param_1 = (longlong)puVar4;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 144f86a60 FUN_144f86a60 body=131 status=ok
// SIG undefined FUN_144f86a60(void)

undefined8 * FUN_144f86a60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 3;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_144f86960(puVar1,&PTR_vftable_14c6e47a0);
  param_1[3] = *puVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *puVar1 = 0;
  param_2[4] = 0;
  return param_1;
}



// FUNCTION 144f86af0 FUN_144f86af0 body=228 status=ok
// SIG undefined FUN_144f86af0(void)

longlong FUN_144f86af0(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar2 = *(ulonglong **)(param_1 + 0x18);
  if (puVar2 + (longlong)*(int *)(param_1 + 0x20) * 3 != puVar2) {
    puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0x20) * 3 + 2;
    do {
      if ((puVar3[-3] & 1) != 0) {
        FUN_144be6b30(puVar3[-3] & 0xfffffffffffffffe);
      }
      puVar1 = puVar3 + -5;
      puVar3 = puVar3 + -3;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144f86be0 FUN_144f86be0 body=988 status=ok
// SIG undefined FUN_144f86be0(void)

void FUN_144f86be0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong local_248;
  int local_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  code *local_230;
  undefined8 *local_228;
  code *local_220;
  longlong *local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_1f8;
  undefined1 local_1f0 [80];
  undefined1 local_1a0 [352];
  
  iVar10 = *(int *)(*param_1 + 0x20) + -1;
  do {
    if (iVar10 < 0) {
      return;
    }
    lVar8 = *param_1;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    plVar3 = *(longlong **)(lVar8 + 0x10);
    lVar2 = FUN_144c00490(plVar3,*(longlong *)(lVar8 + 0x18) + (longlong)iVar10 * 0x28);
    uVar6 = 0;
    if ((lVar2 != 0) &&
       (plVar3 = (longlong *)(*plVar3 + 0x18 + (longlong)*(int *)(lVar2 + 4) * 0x30), *plVar3 != 0))
    {
      puVar11 = *(undefined8 **)(*(longlong *)(lVar8 + 0x18) + 0x18 + (longlong)iVar10 * 0x28);
      local_210 = puVar11 + (longlong)
                            *(int *)(*(longlong *)(lVar8 + 0x18) + 0x20 + (longlong)iVar10 * 0x28) *
                            3;
      if (puVar11 != local_210) {
        do {
          FUN_144bf0690(&local_248,puVar11[1]);
          if ((local_248 < 2) ||
             (puVar4 = (uint *)FUN_144bf04d0(&local_248,local_res18), (*puVar4 >> 6 & 1) == 0)) {
            uVar6 = puVar11[2];
            uVar7 = *puVar11;
            lVar8 = puVar11[1];
            bVar9 = (byte)uVar6;
            if ((uVar6 & 1) != 0) {
              FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
            }
          }
          else {
            lVar2 = *(longlong *)(puVar11[1] + 8);
            puVar5 = (undefined4 *)FUN_144bef800(lVar2,local_res20);
            uVar7 = *puVar11;
            lVar8 = 0;
            if (((byte)*puVar5 & 0x1f) == 6) {
              lVar8 = lVar2;
            }
            if (lVar8 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_144befdb0(lVar8);
            }
            bVar9 = (byte)uVar6;
            if ((uVar6 & 1) != 0) {
              FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
            }
          }
          (**(code **)(*(longlong *)(uVar6 & 0xfffffffffffffffe) + 0x40))
                    ((longlong *)(uVar6 & 0xfffffffffffffffe),local_res10,uVar7,lVar8,plVar3);
          *(undefined4 *)param_1[1] = local_res10[0];
          if ((bVar9 & 1) != 0) {
            FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
          }
          if (*(int *)param_1[1] < 0) {
            if ((1 < DAT_14c7996a8) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
              cVar1 = FUN_144bdbf80();
              local_228 = puVar11;
              local_218 = plVar3;
              if (cVar1 == '\0') {
                uVar7 = FUN_144bdc640(local_1f0);
                local_238 = 2;
                local_230 = FUN_144c00e00;
                local_220 = FUN_144c00d90;
                lVar8 = FUN_144bdc480(uVar7,"Cannot fixup weak pointer \'{}\' with target \'{}\'",
                                      &local_238,0);
                *(char **)(lVar8 + 0x38) = "Detail\\hkSerializeDetail.cpp";
                *(undefined8 *)(lVar8 + 0x40) = 0x2fc;
                FUN_144bdc690(local_1f0);
              }
              else {
                uVar7 = FUN_144bdc810(local_1a0,&DAT_14c799658,2);
                local_238 = 2;
                local_230 = FUN_144c00e00;
                local_220 = FUN_144c00d90;
                lVar8 = FUN_144bdc480(uVar7,"Cannot fixup weak pointer \'{}\' with target \'{}\'",
                                      &local_238,0);
                *(char **)(lVar8 + 0x38) = "Detail\\hkSerializeDetail.cpp";
                *(undefined8 *)(lVar8 + 0x40) = 0x2fc;
                FUN_144bdc8a0(local_1a0);
              }
            }
            if ((local_1f8 & 1) == 0) {
              return;
            }
            FUN_144be6b30(local_1f8 & 0xfffffffffffffffe);
            return;
          }
          puVar11 = puVar11 + 3;
        } while (puVar11 != local_210);
      }
      lVar8 = *param_1;
      if ((*(int *)(lVar8 + 0x30) != -1) ||
         (lVar2 = *(longlong *)(lVar8 + 0x28) + -8,
         *(int *)(*(longlong *)(lVar8 + 0x28) + -4) != iVar10)) {
        lVar2 = FUN_144f86fc0(lVar8 + 0x18,*(longlong *)(lVar8 + 0x18) + (longlong)iVar10 * 0x28);
      }
      FUN_144f859e0(lVar8 + 0x18,lVar2);
      uVar6 = local_1f8;
    }
    if ((uVar6 & 1) != 0) {
      FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
    }
    iVar10 = iVar10 + -1;
    uStack_23c = 0xffffffff;
    local_240 = iVar10;
  } while( true );
}



// FUNCTION 144f86fc0 FUN_144f86fc0 body=195 status=ok
// SIG undefined FUN_144f86fc0(void)

uint * FUN_144f86fc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar1 = *param_2;
  uVar8 = (int)lVar1 * -0x61c8864f;
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = iVar4 * -0x61c8864f;
  uVar9 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar4 * -0x4f000000;
  lVar2 = param_1[2];
  uVar8 = (uVar9 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + uVar9 ^ uVar8;
  uVar5 = (ulonglong)(uVar8 & *(uint *)(param_1 + 3));
  uVar7 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  do {
    if ((int)uVar7 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if (*puVar6 == uVar8) {
      lVar3 = *(longlong *)(*param_1 + (ulonglong)uVar7 * 0x28);
      if ((lVar3 == 0) && (lVar1 == 0)) {
        return puVar6;
      }
      if ((lVar3 == lVar1) && (*(longlong *)(*param_1 + (ulonglong)uVar7 * 0x28 + 8) == param_2[1]))
      {
        return puVar6;
      }
    }
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar7 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  } while( true );
}



// FUNCTION 144f87090 FUN_144f87090 body=302 status=ok
// SIG undefined FUN_144f87090(void)

uint * FUN_144f87090(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f87196:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144f87196;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f871c0 FUN_144f871c0 body=287 status=ok
// SIG undefined FUN_144f871c0(void)

uint * FUN_144f871c0(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  uVar7 = FUN_144bf0300(param_3);
  iVar9 = *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar7) * 8);
  puVar1 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar7) * 8);
  do {
    if (iVar9 < 0) {
      uVar3 = *(uint *)(param_1 + 1);
      *puVar1 = uVar7;
      puVar1[1] = uVar3;
      uVar7 = *(uint *)(param_1 + 1);
LAB_144f872af:
      param_2[1] = (uint)((longlong)puVar1 - param_1[2] >> 3);
      *param_2 = uVar7;
      return param_2;
    }
    if (*puVar1 == uVar7) {
      local_38 = *param_3;
      uStack_30 = param_3[1];
      puVar2 = (undefined4 *)((longlong)(int)puVar1[1] * 0x20 + *param_1);
      local_28 = *puVar2;
      uStack_24 = puVar2[1];
      uStack_20 = puVar2[2];
      uStack_1c = puVar2[3];
      iVar9 = FUN_144bf0080(&local_28,&local_38);
      if (iVar9 == 0) {
        uVar7 = puVar1[1];
        goto LAB_144f872af;
      }
    }
    lVar4 = param_1[2];
    uVar8 = ((longlong)puVar1 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar9 = *(int *)(lVar4 + 4 + uVar8 * 8);
    puVar1 = (uint *)(lVar4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144f872e0 FUN_144f872e0 body=302 status=ok
// SIG undefined FUN_144f872e0(void)

uint * FUN_144f872e0(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f873e6:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144f873e6;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f87410 FUN_144f87410 body=325 status=ok
// SIG undefined FUN_144f87410(void)

uint * FUN_144f87410(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar9 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar9 * 3;
  if ((iVar9 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = iVar9 * -0x61c8864f;
  uVar11 = (int)lVar1 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar10 = (uVar11 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + uVar11 ^ uVar10;
  uVar8 = (ulonglong)(uVar10 & *(uint *)(param_1 + 3));
  iVar9 = *(int *)(lVar2 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar2 + uVar8 * 8);
    if (iVar9 < 0) {
      uVar11 = *(uint *)(param_1 + 1);
      *puVar7 = uVar10;
      puVar7[1] = uVar11;
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f87529:
      param_2[1] = (uint)((longlong)puVar7 - param_1[2] >> 3);
      return param_2;
    }
    if (*puVar7 == uVar10) {
      uVar11 = puVar7[1];
      lVar3 = *(longlong *)(*param_1 + (longlong)(int)uVar11 * 0x28);
      if (((lVar3 == 0) && (lVar1 == 0)) ||
         ((lVar3 == lVar1 &&
          (*(longlong *)(*param_1 + (longlong)(int)uVar11 * 0x28 + 8) == param_3[1])))) {
        *param_2 = uVar11;
        goto LAB_144f87529;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar9 = *(int *)(lVar2 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144f87560 FUN_144f87560 body=152 status=ok
// SIG undefined FUN_144f87560(void)

uint * FUN_144f87560(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 0x10) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144f87600 FUN_144f87600 body=361 status=ok
// SIG undefined FUN_144f87600(void)

ulonglong FUN_144f87600(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  longlong local_res10;
  undefined8 *local_res18;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar10 = param_3;
  if (param_3 < uVar8) {
    uVar10 = uVar8;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar10 * 0x18;
  puVar4 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  puVar9 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  local_res18 = puVar9;
  if (0 < (int)uVar1) {
    uVar7 = (ulonglong)uVar1;
    puVar5 = puVar4;
    do {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        uVar2 = puVar9[2];
        puVar5[2] = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
      }
      puVar5 = puVar5 + 3;
      puVar9 = puVar9 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar6 = local_res18 + 2;
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_144be6b30(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + 3;
      uVar8 = uVar8 - 1;
      param_2 = local_res10;
    } while (uVar8 != 0);
  }
  uVar8 = uVar10 * 0x18 + 0x18;
  uVar7 = uVar10;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar7 = uVar10 + 1;
    if (uVar8 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0x18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar10;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar7 = uVar7 + uVar10 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar8;
}



// FUNCTION 144f87770 FUN_144f87770 body=298 status=ok
// SIG undefined FUN_144f87770(void)

void FUN_144f87770(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar10) {
    uVar7 = uVar10;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x20;
  lVar4 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  puVar9 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar6 = puVar9 + 5;
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    puVar5 = (undefined1 *)(lVar4 + 0x18);
    do {
      if ((undefined4 *)(puVar5 + -0x18) != (undefined4 *)0x0) {
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *(undefined4 *)(puVar5 + -0x18) = *puVar9;
        *(undefined4 *)(puVar5 + -0x14) = uVar1;
        *(undefined4 *)(puVar5 + -0x10) = uVar2;
        *(undefined4 *)(puVar5 + -0xc) = uVar3;
        *(undefined4 *)(puVar5 + -8) = puVar6[-1];
        *puVar5 = 0;
        if (*(char *)(puVar6 + 1) != '\0') {
          *(undefined4 *)(puVar5 + -4) = *puVar6;
          *puVar5 = 1;
        }
      }
      puVar5 = puVar5 + 0x20;
      puVar9 = puVar9 + 8;
      puVar6 = puVar6 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar7 * 0x20 + 0x20;
  uVar8 = uVar7;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar8 = uVar7 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  *param_1 = lVar4;
  return;
}



// FUNCTION 144f878a0 FUN_144f878a0 body=243 status=ok
// SIG undefined FUN_144f878a0(void)

void FUN_144f878a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f879a0 FUN_144f879a0 body=315 status=ok
// SIG undefined FUN_144f879a0(void)

void FUN_144f879a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar7 = param_3;
  if (param_3 < uVar10) {
    uVar7 = uVar10;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x20,&local_res8);
  puVar9 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar6 = puVar9 + 5;
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    puVar5 = (undefined1 *)(lVar4 + 0x18);
    do {
      if ((undefined4 *)(puVar5 + -0x18) != (undefined4 *)0x0) {
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *(undefined4 *)(puVar5 + -0x18) = *puVar9;
        *(undefined4 *)(puVar5 + -0x14) = uVar1;
        *(undefined4 *)(puVar5 + -0x10) = uVar2;
        *(undefined4 *)(puVar5 + -0xc) = uVar3;
        *(undefined4 *)(puVar5 + -8) = puVar6[-1];
        *puVar5 = 0;
        if (*(char *)(puVar6 + 1) != '\0') {
          *(undefined4 *)(puVar5 + -4) = *puVar6;
          *puVar5 = 1;
        }
      }
      puVar5 = puVar5 + 0x20;
      puVar9 = puVar9 + 8;
      puVar6 = puVar6 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar7 * 0x20 + 0x20;
  uVar8 = uVar7;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar8 = uVar7 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 5);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144f87ae0 FUN_144f87ae0 body=642 status=ok
// SIG undefined FUN_144f87ae0(void)

ulonglong FUN_144f87ae0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar13 = uVar7 * 2;
  uVar15 = param_3;
  if (param_3 < uVar13) {
    uVar15 = uVar13;
  }
  if ((0x7ffffffe < uVar15) && (uVar15 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar15 * 0x28);
  uVar2 = *(uint *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_1;
  uVar13 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    puVar10 = (undefined4 *)((longlong)puVar3 + 0x24);
    uVar9 = (ulonglong)uVar2;
    puVar11 = (undefined4 *)(lVar6 + 0x24);
    puVar14 = puVar3;
    do {
      if ((undefined8 *)(puVar11 + -9) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar11 + -9) = *puVar14;
        *(undefined8 *)(puVar11 + -7) = *(undefined8 *)(puVar10 + -7);
        *(undefined8 *)(puVar11 + -5) = *(undefined8 *)(puVar10 + -5);
        *(undefined8 *)(puVar10 + -5) = 0;
        *puVar14 = 0;
        *(undefined8 *)(puVar10 + -7) = 0;
        *(undefined8 *)(puVar11 + -3) = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        FUN_144f86960(puVar10 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar11 + -3) = *(undefined8 *)(puVar10 + -3);
        puVar11[-1] = puVar10[-1];
        *puVar11 = *puVar10;
        *(undefined8 *)(puVar10 + -3) = 0;
        *(undefined8 *)(puVar10 + -1) = 0;
      }
      puVar11 = puVar11 + 10;
      puVar14 = puVar14 + 5;
      puVar10 = puVar10 + 10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    plVar12 = puVar3 + 3;
    do {
      puVar4 = (ulonglong *)*plVar12;
      if (puVar4 + (longlong)(int)plVar12[1] * 3 != puVar4) {
        puVar8 = puVar4 + (longlong)(int)plVar12[1] * 3 + 2;
        do {
          if ((puVar8[-3] & 1) != 0) {
            FUN_144be6b30(puVar8[-3] & 0xfffffffffffffffe);
          }
          puVar1 = puVar8 + -5;
          puVar8 = puVar8 + -3;
        } while (puVar1 != puVar4);
      }
      *(undefined4 *)(plVar12 + 1) = 0;
      if ((-1 < *(int *)((longlong)plVar12 + 0xc)) && (*plVar12 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *plVar12 = 0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 0x80000000;
      if ((*(byte *)(plVar12 + -1) & 1) != 0) {
        FUN_144be6b30(plVar12[-1] & 0xfffffffffffffffe);
      }
      plVar12 = plVar12 + 5;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar13 = uVar15 * 0x28 + 0x28;
  uVar9 = uVar15;
  if (uVar13 <= local_res8) {
    uVar9 = uVar15 + 1;
    if (uVar13 <= local_res8 - 0x28) {
      uVar15 = (local_res8 - 0x28) + uVar15 * -0x28;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      uVar13 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar5,0);
      uVar9 = uVar9 + uVar15 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar13 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x28);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar13;
}



// FUNCTION 144f87d70 FUN_144f87d70 body=30 status=ok
// SIG undefined FUN_144f87d70(void)

undefined8 * FUN_144f87d70(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  *param_1 = hkSerialize::Bundle::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 144f87d90 FUN_144f87d90 body=117 status=ok
// SIG undefined FUN_144f87d90(void)

void FUN_144f87d90(undefined8 *param_1)

{
  *param_1 = hkSerialize::Bundle::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[1],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 3);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  param_1[1] = 0;
  return;
}



// FUNCTION 144f87e10 FUN_144f87e10 body=159 status=ok
// SIG undefined FUN_144f87e10(void)

undefined8 * FUN_144f87e10(undefined8 *param_1,uint param_2)

{
  *param_1 = hkSerialize::Bundle::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[1],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 3);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f87eb0 FUN_144f87eb0 body=31 status=ok
// SIG undefined FUN_144f87eb0(void)

undefined8 * FUN_144f87eb0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkSerialize::TypeWriter::vftable;
  return param_1;
}



// FUNCTION 144f87ed0 FUN_144f87ed0 body=11 status=ok
// SIG undefined FUN_144f87ed0(void)

void FUN_144f87ed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144f87ee0 FUN_144f87ee0 body=71 status=ok
// SIG undefined FUN_144f87ee0(void)

undefined8 * FUN_144f87ee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f87f30 FUN_144f87f30 body=31 status=ok
// SIG undefined FUN_144f87f30(void)

undefined8 * FUN_144f87f30(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkSerialize::WriteFormat::vftable;
  return param_1;
}



// FUNCTION 144f87f50 FUN_144f87f50 body=11 status=ok
// SIG undefined FUN_144f87f50(void)

void FUN_144f87f50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144f87f60 FUN_144f87f60 body=241 status=ok
// SIG undefined FUN_144f87f60(void)

undefined4 * FUN_144f87f60(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  undefined8 local_1b8;
  undefined1 local_1b0 [80];
  undefined1 local_160 [344];
  
  if (DAT_14c7997a0 < 2) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') goto LAB_144f88037;
  }
  cVar1 = FUN_144bdbf80();
  if (cVar1 == '\0') {
    uVar2 = FUN_144bdc640(local_1b0);
    local_res10[0] = 0;
    lVar3 = FUN_144bdc480(uVar2,
                          "Attempt to create a type compendium using a format that doesn\'t support it"
                          ,local_res10,0);
    *(char **)(lVar3 + 0x38) = "Core\\hkSerializeCore.cpp";
    *(undefined8 *)(lVar3 + 0x40) = 0x13a;
    *(undefined4 *)(lVar3 + 0x1c) = 0x7cd19b40;
    FUN_144bdc690(local_1b0);
  }
  else {
    uVar2 = FUN_144bdc810(local_160,&DAT_14c799750,2);
    local_1b8 = 0;
    lVar3 = FUN_144bdc480(uVar2,
                          "Attempt to create a type compendium using a format that doesn\'t support it"
                          ,&local_1b8,0);
    *(char **)(lVar3 + 0x38) = "Core\\hkSerializeCore.cpp";
    *(undefined8 *)(lVar3 + 0x40) = 0x13a;
    *(undefined4 *)(lVar3 + 0x1c) = 0x7cd19b40;
    FUN_144bdc8a0(local_160);
  }
LAB_144f88037:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f88060 FUN_144f88060 body=3 status=ok
// SIG undefined FUN_144f88060(void)

undefined8 FUN_144f88060(void)

{
  return 0;
}



// FUNCTION 144f88070 FUN_144f88070 body=10 status=ok
// SIG undefined FUN_144f88070(void)

undefined4 * FUN_144f88070(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f88080 FUN_144f88080 body=71 status=ok
// SIG undefined FUN_144f88080(void)

undefined8 * FUN_144f88080(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f880d0 FUN_144f880d0 body=31 status=ok
// SIG undefined FUN_144f880d0(void)

undefined8 * FUN_144f880d0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkSerialize::ReadFormat::vftable;
  return param_1;
}



// FUNCTION 144f880f0 FUN_144f880f0 body=11 status=ok
// SIG undefined FUN_144f880f0(void)

void FUN_144f880f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144f88100 FUN_144f88100 body=11 status=ok
// SIG undefined FUN_144f88100(void)

undefined8 * FUN_144f88100(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f88110 FUN_144f88110 body=11 status=ok
// SIG undefined FUN_144f88110(void)

undefined8 * FUN_144f88110(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144f88120 FUN_144f88120 body=71 status=ok
// SIG undefined FUN_144f88120(void)

undefined8 * FUN_144f88120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144f88170 FUN_144f88170 body=397 status=ok
// SIG undefined FUN_144f88170(void)

undefined8 * FUN_144f88170(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_res8;
  
  param_1[1] = param_2;
  puVar4 = (undefined8 *)0x0;
  *param_1 = hkSerialize::BundleBuilder::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  local_res8 = 0x40;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,&DAT_149991fec);
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x80000000;
    uVar3 = FUN_144b3d480();
    puVar2[2] = uVar3;
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x80000000;
    uVar3 = FUN_144b3d480();
    puVar2[6] = uVar3;
    *(undefined4 *)(puVar2 + 7) = 0;
    puVar4 = puVar2;
  }
  param_1[0xe] = puVar4;
  iVar5 = *(int *)(param_1 + 7) + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) < iVar5) {
    FUN_144f89080(param_1 + 6,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  iVar1 = *(int *)(param_1 + 7);
  *(int *)(param_1 + 7) = iVar5;
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + param_1[6]);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  *(undefined1 *)((longlong)*(int *)(param_1 + 7) * 0x20 + -8 + param_1[6]) = 0;
  *(undefined1 *)((longlong)*(int *)(param_1 + 7) * 0x20 + -7 + param_1[6]) = 1;
  (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_3);
  return param_1;
}



// FUNCTION 144f88300 FUN_144f88300 body=587 status=ok
// SIG undefined FUN_144f88300(void)

void FUN_144f88300(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  *param_1 = hkSerialize::BundleBuilder::vftable;
  (**(code **)(*(longlong *)param_1[1] + 0x20))();
  lVar4 = param_1[0xc];
  lVar5 = lVar4 + (longlong)*(int *)(param_1 + 0xd) * 0x18;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x18) {
    FUN_144becfe0(lVar4,3,1);
  }
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    FUN_144f88e00(lVar5 + 0x20);
    FUN_144f88d40(lVar5);
    (*DAT_14c787678)(0,lVar5,0);
  }
  puVar2 = (ulonglong *)param_1[0xc];
  if (puVar2 + (longlong)*(int *)(param_1 + 0xd) * 3 != puVar2) {
    puVar6 = puVar2 + (longlong)*(int *)(param_1 + 0xd) * 3 + 2;
    do {
      if ((puVar6[-3] & 1) != 0) {
        FUN_144be6b30(puVar6[-3] & 0xfffffffffffffffe);
      }
      puVar1 = puVar6 + -5;
      puVar6 = puVar6 + -3;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) * 0x18);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  lVar4 = param_1[10];
  lVar5 = lVar4 + (longlong)*(int *)(param_1 + 0xb) * 8;
  while (lVar5 != lVar4) {
    lVar3 = *(longlong *)(lVar5 + -8);
    lVar5 = lVar5 + -8;
    if (lVar3 != 0) {
      FUN_144b49dd0(lVar3);
      (*DAT_14c787678)(0,lVar3,0);
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 2);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  puVar2 = (ulonglong *)param_1[6];
  if (puVar2 + (longlong)*(int *)(param_1 + 7) * 4 != puVar2) {
    puVar6 = puVar2 + (longlong)*(int *)(param_1 + 7) * 4 + 2;
    do {
      if ((puVar6[-4] & 1) != 0) {
        FUN_144be6b30(puVar6[-4] & 0xfffffffffffffffe);
      }
      puVar1 = puVar6 + -6;
      puVar6 = puVar6 + -4;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 5);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  return;
}



// FUNCTION 144f88550 FUN_144f88550 body=30 status=ok
// SIG undefined FUN_144f88550(void)

void FUN_144f88550(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_144f889d0(param_1,uVar1);
  return;
}



// FUNCTION 144f88570 FUN_144f88570 body=41 status=ok
// SIG undefined FUN_144f88570(void)

void FUN_144f88570(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000144f88596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x20))(param_1,uVar2);
  return;
}



// FUNCTION 144f885a0 FUN_144f885a0 body=13 status=ok
// SIG undefined FUN_144f885a0(void)

void FUN_144f885a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}



// FUNCTION 144f885b0 FUN_144f885b0 body=258 status=ok
// SIG undefined FUN_144f885b0(void)

undefined4 * FUN_144f885b0(longlong *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
LAB_144f885c0:
  iVar2 = (int)param_1[2];
  uVar4 = (ulonglong)iVar2;
  if ((-1 < iVar2) && (iVar2 < (int)param_1[7])) {
    pcVar6 = (char *)(param_1[6] + 0x18 + uVar4 * 0x20);
    do {
      iVar2 = (int)uVar4;
      if ((pcVar6[1] == '\0') && (*pcVar6 == '\0')) goto LAB_144f8869a;
      uVar4 = (ulonglong)(iVar2 + 1U);
      pcVar6 = pcVar6 + 0x20;
    } while ((int)(iVar2 + 1U) < (int)param_1[7]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[7]) {
    pcVar6 = (char *)(param_1[6] + 0x18);
    do {
      if ((pcVar6[1] == '\0') && (*pcVar6 == '\0')) goto LAB_144f8869a;
      iVar2 = iVar2 + 1;
      pcVar6 = pcVar6 + 0x20;
    } while (iVar2 < (int)param_1[7]);
  }
  bVar1 = false;
  iVar2 = -1;
  goto LAB_144f8862c;
LAB_144f8869a:
  bVar1 = true;
LAB_144f8862c:
  *(int *)(param_1 + 2) = iVar2;
  if (!bVar1) {
    *param_2 = 0;
    return param_2;
  }
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x20 + param_1[6]);
  local_28 = *puVar5;
  local_20 = puVar5[1];
  local_18 = puVar5[2];
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  FUN_144f889d0(param_1,uVar3);
  if ((local_18 & 1) != 0) {
    FUN_144be6b30();
  }
  goto LAB_144f885c0;
}



// FUNCTION 144f886c0 FUN_144f886c0 body=336 status=ok
// SIG undefined FUN_144f886c0(void)

ulonglong FUN_144f886c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_res8[0] = 0;
  bVar5 = (code *)param_1[3] == (code *)0x0;
  if (bVar5) {
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
              ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],
               &local_68);
    puVar3 = &local_68;
    uVar4 = local_68;
  }
  else {
    puVar1 = (undefined8 *)(*(code *)param_1[3])(local_20,param_2,param_1,param_1[5]);
    uVar4 = *puVar1;
    local_30 = puVar1[1];
    local_28 = puVar1[2];
    puVar1[2] = 0;
    puVar3 = &local_38;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  local_48 = puVar3[1];
  uVar2 = puVar3[2];
  puVar3[2] = 0;
  local_40 = uVar2;
  *puVar3 = 0;
  puVar3[1] = 0;
  local_50 = uVar4;
  if (bVar5) {
    if ((local_58 & 1) != 0) {
      FUN_144be6b30(local_58 & 0xfffffffffffffffe);
    }
  }
  if (!bVar5) {
    if ((local_28 & 1) != 0) {
      FUN_144be6b30(local_28 & 0xfffffffffffffffe);
    }
  }
  if ((!bVar5) && ((local_10 & 1) != 0)) {
    FUN_144be6b30(local_10 & 0xfffffffffffffffe);
  }
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,&local_50);
  if ((local_40 & 1) != 0) {
    FUN_144be6b30(local_40 & 0xfffffffffffffffe);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144f88810 FUN_144f88810 body=290 status=ok
// SIG undefined FUN_144f88810(void)

int FUN_144f88810(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res10 [2];
  int local_res18 [4];
  
  if (*param_2 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  local_res10[0] = iVar4;
  FUN_144f88e80(*(undefined8 *)(param_1 + 0x70),local_res18,param_2,local_res10);
  iVar1 = *(int *)((longlong)local_res18[0] * 0x20 + 0x18 + **(longlong **)(param_1 + 0x70));
  if (iVar1 == iVar4) {
    iVar4 = *(int *)(param_1 + 0x38) + 1;
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar4) {
      FUN_144f89080(param_1 + 0x30,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    iVar2 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar4;
    plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
    }
    *plVar3 = *param_2;
    plVar3[1] = param_2[1];
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      FUN_144be6b20(param_2[2] & 0xfffffffffffffffe);
    }
    if ((*(byte *)(plVar3 + 2) & 1) != 0) {
      FUN_144be6b30(plVar3[2] & 0xfffffffffffffffe);
    }
    plVar3[2] = param_2[2];
    *(undefined2 *)(plVar3 + 3) = 0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = 0;
  }
  else {
    *(undefined1 *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30)) = 0;
  }
  return iVar1;
}



// FUNCTION 144f88940 FUN_144f88940 body=28 status=ok
// SIG undefined FUN_144f88940(void)

void FUN_144f88940(longlong param_1,int param_2)

{
  *(undefined1 *)((longlong)param_2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30)) = 0;
  *(undefined1 *)((longlong)param_2 * 0x20 + 0x19 + *(longlong *)(param_1 + 0x30)) = 1;
  return;
}



// FUNCTION 144f88960 FUN_144f88960 body=112 status=ok
// SIG undefined FUN_144f88960(void)

undefined4 FUN_144f88960(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x38) + 1;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar4) {
    FUN_144f89080((longlong *)(param_1 + 0x30),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar4;
  puVar3 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined2 *)(puVar3 + 3) = 0x100;
  return uVar1;
}



// FUNCTION 144f889d0 FUN_144f889d0 body=667 status=ok
// SIG undefined FUN_144f889d0(void)

void FUN_144f889d0(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int *piVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined8 local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 *local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  bVar5 = false;
  bVar4 = false;
  lVar9 = (longlong)param_2 * 0x20;
  local_res10[0] = 0;
  if (*(char *)(lVar9 + 0x19 + param_1[6]) == '\0') {
    *(undefined1 *)(lVar9 + 0x18 + param_1[6]) = 0;
    if ((param_1[4] != 0) &&
       (puVar10 = (undefined8 *)(lVar9 + param_1[6]), *(int *)((longlong)puVar10 + 0x1c) == 0)) {
      local_208 = *puVar10;
      local_200 = puVar10[1];
      local_1f8 = puVar10[2];
      if ((local_1f8 & 1) != 0) {
        FUN_144be6b20(local_1f8 & 0xfffffffffffffffe);
      }
      (*(code *)param_1[4])(&local_208,param_1,param_1[5]);
      if ((local_1f8 & 1) != 0) {
        FUN_144be6b30(local_1f8 & 0xfffffffffffffffe);
      }
    }
    iVar11 = (int)param_1[9] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) < iVar11) {
      FUN_1401f86b2(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar11);
    }
    piVar1 = (int *)(param_1[8] + (longlong)(int)param_1[9] * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_2;
    }
    *(int *)(param_1 + 9) = iVar11;
    if (iVar11 == 1) {
      piVar12 = (int *)param_1[8];
      piVar1 = piVar12 + 1;
      for (; piVar12 != piVar1; piVar12 = piVar12 + 1) {
        lVar9 = (longlong)*piVar12 * 0x20;
        if (*(char *)(lVar9 + 0x19 + param_1[6]) == '\0') {
          (**(code **)(*param_1 + 0x20))(param_1);
          lVar2 = param_1[6];
          local_208 = *(undefined8 *)(lVar2 + lVar9);
          local_200 = *(undefined8 *)(lVar2 + 8 + lVar9);
          local_1f8 = *(ulonglong *)(lVar2 + 0x10 + lVar9);
          if ((local_1f8 & 1) != 0) {
            FUN_144be6b20(local_1f8 & 0xfffffffffffffffe);
          }
          plVar3 = (longlong *)param_1[1];
          iVar11 = *(int *)(param_1[6] + 0x1c + lVar9);
          if (iVar11 == 0) {
            piVar7 = (int *)(**(code **)(*plVar3 + 0x28))(plVar3,local_res8,&local_208,param_1);
          }
          else {
            piVar7 = (int *)(**(code **)(*plVar3 + 0x30))
                                      (plVar3,local_res10,iVar11,&local_208,param_1);
          }
          if ((*piVar7 < 0) && ((DAT_14c7997a0 != '\0' || (cVar6 = FUN_144bdbf80(), cVar6 != '\0')))
             ) {
            cVar6 = FUN_144bdbf80();
            if (cVar6 == '\0') {
              bVar5 = true;
              uVar8 = FUN_144bdc640(local_1d8);
            }
            else {
              bVar4 = true;
              uVar8 = FUN_144bdc810(local_188,&DAT_14c799750,1);
            }
            local_1e0 = &local_208;
            local_1f0 = 1;
            local_1e8 = FUN_144c00d90;
            lVar9 = FUN_144bdc480(uVar8,"Failed to save {}. Will be dropped.",&local_1f0,0);
            *(undefined8 *)(lVar9 + 0x40) = 0x6e;
            *(char **)(lVar9 + 0x38) = "Core\\hkSerializeCore.cpp";
            if (bVar4) {
              bVar4 = false;
              FUN_144bdc8a0(local_188);
            }
            if (bVar5) {
              bVar5 = false;
              FUN_144bdc690(local_1d8);
            }
          }
          if ((local_1f8 & 1) != 0) {
            FUN_144be6b30(local_1f8 & 0xfffffffffffffffe);
          }
        }
      }
      *(undefined4 *)(param_1 + 9) = 0;
    }
  }
  return;
}



// FUNCTION 144f88c70 FUN_144f88c70 body=87 status=ok
// SIG undefined FUN_144f88c70(void)

undefined8 FUN_144f88c70(undefined8 param_1,ulonglong param_2)

{
  FUN_144f88300();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 144f88cd0 FUN_144f88cd0 body=14 status=ok
// SIG undefined FUN_144f88cd0(void)

undefined8 * FUN_144f88cd0(undefined8 *param_1)

{
  *param_1 = hkSerialize::NoteHandler::vftable;
  return param_1;
}



// FUNCTION 144f88ce0 FUN_144f88ce0 body=11 status=ok
// SIG undefined FUN_144f88ce0(void)

void FUN_144f88ce0(undefined8 *param_1)

{
  *param_1 = hkSerialize::NoteHandler::vftable;
  return;
}



// FUNCTION 144f88cf0 FUN_144f88cf0 body=71 status=ok
// SIG undefined FUN_144f88cf0(void)

undefined8 * FUN_144f88cf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSerialize::NoteHandler::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144f88d40 FUN_144f88d40 body=187 status=ok
// SIG undefined FUN_144f88d40(void)

void FUN_144f88d40(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  puVar3 = (ulonglong *)*param_1;
  if (puVar3 + (longlong)(int)param_1[1] * 4 != puVar3) {
    puVar4 = puVar3 + (longlong)(int)param_1[1] * 4 + 2;
    do {
      if ((puVar4[-4] & 1) != 0) {
        FUN_144be6b30(puVar4[-4] & 0xfffffffffffffffe);
      }
      puVar1 = puVar4 + -6;
      puVar4 = puVar4 + -4;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 5);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f88e00 FUN_144f88e00 body=123 status=ok
// SIG undefined FUN_144f88e00(void)

void FUN_144f88e00(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f88e80 FUN_144f88e80 body=166 status=ok
// SIG undefined FUN_144f88e80(void)

int * FUN_144f88e80(longlong *param_1,int *param_2,undefined8 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  FUN_144f88f30();
  if (*param_2 == (int)param_1[1]) {
    iVar3 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144f89200(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined8 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      uVar1 = param_3[2];
      puVar2[2] = uVar1;
      if ((uVar1 & 1) != 0) {
        FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      }
      *(undefined4 *)(puVar2 + 3) = *param_4;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  return param_2;
}



// FUNCTION 144f88f30 FUN_144f88f30 body=327 status=ok
// SIG undefined FUN_144f88f30(void)

uint * FUN_144f88f30(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  
  iVar9 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar9 * 3;
  if ((iVar9 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  uVar10 = iVar9 * -0x61c8864f;
  uVar12 = (int)lVar1 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar10 = (uVar12 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + uVar12 ^ uVar10;
  uVar8 = (ulonglong)(uVar10 & *(uint *)(param_1 + 3));
  iVar9 = *(int *)(lVar2 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar2 + uVar8 * 8);
    if (iVar9 < 0) {
      uVar12 = *(uint *)(param_1 + 1);
      *puVar7 = uVar10;
      puVar7[1] = uVar12;
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f89049:
      param_2[1] = (uint)((longlong)puVar7 - param_1[2] >> 3);
      return param_2;
    }
    if (*puVar7 == uVar10) {
      plVar11 = (longlong *)((longlong)(int)puVar7[1] * 0x20 + *param_1);
      lVar3 = *plVar11;
      if (((lVar3 == 0) && (lVar1 == 0)) || ((lVar3 == lVar1 && (plVar11[1] == param_3[1])))) {
        *param_2 = puVar7[1];
        goto LAB_144f89049;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar9 = *(int *)(lVar2 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144f89080 FUN_144f89080 body=371 status=ok
// SIG undefined FUN_144f89080(void)

void FUN_144f89080(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar10 * 2;
  uVar8 = param_3;
  if (param_3 < uVar7) {
    uVar8 = uVar7;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x20,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    uVar9 = (ulonglong)uVar1;
    puVar5 = puVar2;
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-2] = *puVar5;
        puVar4[-1] = puVar5[1];
        *puVar4 = puVar5[2];
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 3);
        *(undefined1 *)((longlong)puVar4 + 9) = *(undefined1 *)((longlong)puVar5 + 0x19);
        *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)puVar5 + 0x1c);
      }
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    puVar6 = puVar2 + 2;
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_144be6b30(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar7 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 5);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144f89200 FUN_144f89200 body=356 status=ok
// SIG undefined FUN_144f89200(void)

void FUN_144f89200(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar10 * 2;
  uVar8 = param_3;
  if (param_3 < uVar7) {
    uVar8 = uVar7;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x20,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    uVar9 = (ulonglong)uVar1;
    puVar5 = puVar2;
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-2] = *puVar5;
        puVar4[-1] = puVar5[1];
        *puVar4 = puVar5[2];
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 3);
      }
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    puVar6 = puVar2 + 2;
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_144be6b30(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar7 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 5);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144f89370 FUN_144f89370 body=42 status=ok
// SIG undefined FUN_144f89370(void)

longlong * FUN_144f89370(longlong *param_1,longlong param_2,longlong param_3)

{
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  param_1[1] = param_2 + param_3;
  param_1[7] = 0;
  *param_1 = param_2;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 144f893a0 FUN_144f893a0 body=98 status=ok
// SIG undefined FUN_144f893a0(void)

void FUN_144f893a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}



// FUNCTION 144f89410 FUN_144f89410 body=168 status=ok
// SIG undefined FUN_144f89410(void)

void FUN_144f89410(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((char)param_1[6] != '\0') {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      puVar2 = (undefined8 *)param_1[7];
      param_1[7] = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  lVar3 = *param_2;
  *param_2 = 0;
  puVar2 = (undefined8 *)param_1[7];
  param_1[7] = lVar3;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 == (longlong *)0x0) {
    lVar3 = param_2[1];
    param_1[2] = lVar3;
    *param_1 = lVar3;
    param_1[1] = lVar3 + param_2[2];
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,param_1);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



// FUNCTION 144f894c0 FUN_144f894c0 body=63 status=ok
// SIG undefined FUN_144f894c0(void)

undefined4 * FUN_144f894c0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*plVar1 + 0x38))(plVar1,local_res8,param_1,param_3);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144f89500 FUN_144f89500 body=27 status=ok
// SIG undefined FUN_144f89500(void)

undefined8 FUN_144f89500(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f8950f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
    return uVar2;
  }
  return 0xffffffffffffffff;
}



// FUNCTION 144f89520 FUN_144f89520 body=25 status=ok
// SIG undefined FUN_144f89520(void)

undefined8 FUN_144f89520(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f89532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f89540 FUN_144f89540 body=25 status=ok
// SIG undefined FUN_144f89540(void)

undefined8 FUN_144f89540(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f89552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144f89560 FUN_144f89560 body=89 status=ok
// SIG undefined FUN_144f89560(void)

longlong FUN_144f89560(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144f89586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_2,param_3);
    return lVar2;
  }
  lVar2 = param_1[1] - *param_1;
  FUN_144b3d470(param_2,*param_1,lVar2);
  *param_1 = param_1[1];
  return lVar2;
}



// FUNCTION 144f895c0 FUN_144f895c0 body=130 status=ok
// SIG undefined FUN_144f895c0(void)

void FUN_144f895c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar2 = 0;
  *(uint *)(param_1 + 0x18) = (0 < *(int *)(param_1 + 0x30)) - 1;
  iVar1 = *(int *)(param_1 + 0x40);
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),*(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar3),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + lVar3));
      iVar1 = *(int *)(param_1 + 0x40);
      lVar3 = lVar3 + 0x10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if ((iVar1 < 0) || (0 < iVar1)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 144f89650 FUN_144f89650 body=335 status=ok
// SIG undefined FUN_144f89650(void)

void FUN_144f89650(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x18) = (0 < *(int *)(param_1 + 0x30)) - 1;
  uVar3 = uVar5;
  uVar4 = uVar5;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),*(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar4),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + uVar4));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 0x10;
    } while ((int)uVar2 < *(int *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x40) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else if (0 < *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  uVar3 = uVar5;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),*(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar3),
                 *(undefined8 *)(param_1 + 0x10));
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar2;
      uVar3 = uVar3 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
              (*(longlong **)(param_1 + 8),*(longlong *)(param_1 + 0x28),
               (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 != 0))
  {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
              (*(longlong **)(param_1 + 8),lVar1,
               (ulonglong)(*(uint *)(param_1 + 0x44) & 0x7fffffff) << 4);
  }
  *(longlong *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



// FUNCTION 144f897a0 FUN_144f897a0 body=303 status=ok
// SIG undefined FUN_144f897a0(void)

longlong FUN_144f897a0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = param_2 + 0xfU & 0xfffffffffffffff0;
  *param_3 = uVar6;
  if (*(ulonglong *)(param_1 + 0x10) <= uVar6) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    iVar7 = *(int *)(param_1 + 0x40) + 1;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar7) {
      FUN_144f89990(param_1 + 0x38,*(undefined8 *)(param_1 + 8),(longlong)iVar7);
    }
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar7;
    plVar5 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
    plVar5[1] = *param_3;
    *plVar5 = lVar3;
    return lVar3;
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if (iVar7 == 0) {
LAB_144f89849:
    iVar7 = iVar7 + 1;
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar7) {
      FUN_144be8ba0(param_1 + 0x28,*(undefined8 *)(param_1 + 8),(longlong)iVar7);
    }
    iVar1 = *(int *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x28);
    *(int *)(param_1 + 0x30) = iVar7;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                      (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar4;
  }
  else {
    if (*(longlong *)(param_1 + 0x20) + uVar6 <= *(ulonglong *)(param_1 + 0x10)) goto LAB_144f8989c;
    if (iVar7 <= *(int *)(param_1 + 0x18) + 1) goto LAB_144f89849;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
LAB_144f8989c:
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x18) * 8);
  *(ulonglong *)(param_1 + 0x20) = lVar3 + *param_3;
  return lVar2 + lVar3;
}



// FUNCTION 144f898d0 FUN_144f898d0 body=181 status=ok
// SIG undefined FUN_144f898d0(void)

void FUN_144f898d0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  uVar7 = param_3 + 0xfU & 0xfffffffffffffff0;
  if (*(ulonglong *)(param_1 + 0x10) <= uVar7) {
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      plVar3 = *(longlong **)(param_1 + 0x38);
      uVar9 = uVar4;
      do {
        iVar8 = (int)uVar9;
        if (*plVar3 == param_2) {
          iVar1 = *(int *)(param_1 + 0x40);
          iVar2 = iVar1 + -1;
          *(int *)(param_1 + 0x40) = iVar2;
          if (iVar2 != iVar8) {
            puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x38));
            puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + -0x10 + (longlong)iVar1 * 0x10)
            ;
            if (puVar6 != puVar10) {
              lVar11 = (longlong)puVar10 - (longlong)puVar6;
              lVar5 = 2;
              do {
                *puVar6 = *(undefined8 *)(lVar11 + (longlong)puVar6);
                puVar6 = puVar6 + 1;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
          }
                    /* WARNING: Could not recover jumptable at 0x000144f8997f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),param_2,uVar7);
          return;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 2;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x40));
      return;
    }
  }
  return;
}



// FUNCTION 144f89990 FUN_144f89990 body=243 status=ok
// SIG undefined FUN_144f89990(void)

void FUN_144f89990(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f89a90 FUN_144f89a90 body=71 status=ok
// SIG undefined FUN_144f89a90(void)

undefined8 * FUN_144f89a90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = param_2;
  return param_1;
}



// FUNCTION 144f89ae0 thunk_FUN_144f8a0b0 body=5 status=ok
// SIG undefined thunk_FUN_144f8a0b0(void)

void thunk_FUN_144f8a0b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f89af0 FUN_144f89af0 body=278 status=ok
// SIG undefined FUN_144f89af0(void)

ulonglong FUN_144f89af0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  longlong local_res10;
  ulonglong local_res18;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10 = param_2;
  lVar3 = FUN_144f8a570(param_1,&local_res10);
  if ((lVar3 == 0) ||
     (uVar5 = *(ulonglong *)(*param_1 + 8 + (longlong)*(int *)(lVar3 + 4) * 0x10), uVar5 == 0)) {
    FUN_144f8a440(param_1,&local_res18,&local_res10);
    if ((int)local_res18 == (int)param_1[1]) {
      iVar6 = (int)param_1[1] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar6) {
        FUN_144f8a7e0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      plVar4 = (longlong *)((longlong)(int)param_1[1] * 0x10 + *param_1);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = param_2;
        plVar4[1] = 0x100000000;
      }
      *(int *)(param_1 + 1) = iVar6;
    }
    else {
      *(undefined8 *)(*param_1 + 8 + (longlong)(int)local_res18 * 0x10) = 0x100000000;
    }
    uVar1 = 0;
    if (*(longlong *)(param_2 + 8) != 0) {
      uVar1 = FUN_144f89af0(param_1);
    }
    uVar2 = FUN_144f89d00(param_1,uVar1,param_2);
    uVar5 = (ulonglong)uVar2;
    local_res18 = uVar5;
    FUN_144f8a130(param_1,&local_res10,&local_res18);
  }
  return uVar5;
}



// FUNCTION 144f89c10 FUN_144f89c10 body=231 status=ok
// SIG undefined FUN_144f89c10(void)

undefined4 FUN_144f89c10(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 local_res8 [2];
  
  puVar4 = (undefined8 *)FUN_144bef4c0(param_2);
  if ((puVar4 != (undefined8 *)0x0) && ((*(uint *)(puVar4 + 1) & 0xffff) != 0)) {
    iVar7 = 0;
    puVar2 = puVar4;
    if ((*(uint *)(puVar4 + 1) & 0xffff) != 0) {
      do {
        puVar6 = puVar2 + 2;
        if (*(char *)puVar2[3] == 't') {
          if ((((*(byte *)*puVar6 & 8) != 0) &&
              (plVar5 = (longlong *)FUN_144befea0((byte *)*puVar6,8), plVar5 != (longlong *)0x0)) &&
             (lVar1 = *plVar5, lVar1 != 0)) {
            iVar3 = FUN_144bfbbb0(lVar1);
            param_1 = FUN_144f62700(param_1,lVar1,(longlong)iVar3);
          }
          param_1 = FUN_144f89c10(param_1,*puVar6);
        }
        else {
          local_res8[0] = *(undefined4 *)puVar6;
          param_1 = FUN_144f62700(param_1,local_res8,4);
        }
        iVar7 = iVar7 + 1;
        puVar2 = puVar6;
      } while (iVar7 < (int)(uint)*(ushort *)(puVar4 + 1));
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 144f89d00 FUN_144f89d00 body=934 status=ok
// SIG undefined FUN_144f89d00(void)

ulonglong FUN_144f89d00(longlong param_1,uint param_2,ulonglong *param_3)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  int local_res10 [2];
  
  uVar13 = (ulonglong)param_2;
  uVar12 = *param_3;
  uVar17 = *(ulonglong *)(param_1 + 0x20) & uVar12;
  if (((uVar17 >> 0xe & 1) != 0) && ((uVar12 >> 0xe & 1) != 0)) {
    plVar8 = (longlong *)FUN_144befea0(param_3,0x4000);
    uVar12 = *param_3;
    if ((plVar8 != (longlong *)0x0) && (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)) {
      plVar15 = plVar8 + 1;
      iVar4 = (int)((*plVar8 << 4) >> 4);
      lVar16 = (longlong)iVar4;
      if (0 < iVar4) {
        do {
          if ((((*(byte *)*plVar15 & 8) != 0) &&
              (plVar8 = (longlong *)FUN_144befea0((byte *)*plVar15,8), plVar8 != (longlong *)0x0))
             && (lVar2 = *plVar8, lVar2 != 0)) {
            iVar4 = FUN_144bfbbb0(lVar2);
            uVar5 = FUN_144f62700(uVar13,lVar2,(longlong)iVar4);
            uVar13 = (ulonglong)uVar5;
          }
          local_res10[0] = (int)plVar15[1];
          uVar5 = FUN_144f62700(uVar13,local_res10,4);
          plVar15 = plVar15 + 2;
          uVar13 = (ulonglong)uVar5;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        uVar12 = *param_3;
      }
    }
  }
  uVar14 = 0;
  iVar4 = 0;
  if ((uVar17 & 1) != 0) {
    if (((uVar12 & 1) == 0) ||
       (puVar9 = (ulonglong *)FUN_144befea0(param_3,1), puVar9 == (ulonglong *)0x0)) {
      local_res10[0] = 0;
    }
    else {
      uVar12 = *puVar9;
      local_res10[0] = (int)uVar12;
      uVar5 = FUN_144f62700(uVar13,local_res10,4);
      uVar13 = (ulonglong)uVar5;
      if ((((byte)uVar12 & 0xf) != 8) || (((uint)(uVar12 >> 5) & 3) != 1)) goto LAB_144f89e75;
      if (((*param_3 & 2) == 0) ||
         (puVar10 = (undefined8 *)FUN_144befea0(param_3,2), puVar10 == (undefined8 *)0x0)) {
        local_res10[0] = FUN_144f89af0(param_1,0);
      }
      else {
        local_res10[0] = FUN_144f89af0(param_1,*puVar10);
      }
    }
    uVar5 = FUN_144f62700(uVar13,local_res10,4);
    uVar13 = (ulonglong)uVar5;
  }
LAB_144f89e75:
  if (((((uVar17 & 8) != 0) && ((*param_3 & 8) != 0)) &&
      (plVar8 = (longlong *)FUN_144befea0(param_3,8), plVar8 != (longlong *)0x0)) &&
     (lVar16 = *plVar8, lVar16 != 0)) {
    iVar6 = FUN_144bfbbb0(lVar16);
    uVar5 = FUN_144f62700(uVar13,lVar16,(longlong)iVar6);
    uVar13 = (ulonglong)uVar5;
  }
  if ((uVar17 >> 0xf & 1) != 0) {
    uVar5 = FUN_144f89c10(uVar13,param_3);
    uVar13 = (ulonglong)uVar5;
  }
  if ((uVar17 & 0x10) != 0) {
    iVar6 = iVar4;
    if (((*param_3 & 0x10) != 0) &&
       (puVar10 = (undefined8 *)FUN_144befea0(param_3,0x10), puVar10 != (undefined8 *)0x0)) {
      iVar6 = (int)*puVar10;
    }
    local_res10[0] = iVar6;
    uVar5 = FUN_144f62700(uVar13,local_res10,4);
    uVar13 = (ulonglong)uVar5;
  }
  if ((uVar17 >> 0x14 & 1) != 0) {
    iVar6 = iVar4;
    if ((((uint)*param_3 >> 0x14 & 1) != 0) &&
       (puVar10 = (undefined8 *)FUN_144befea0(param_3,0x100000), puVar10 != (undefined8 *)0x0)) {
      iVar6 = (int)*puVar10;
    }
    local_res10[0] = iVar6;
    uVar5 = FUN_144f62700(uVar13,local_res10,4);
    uVar13 = (ulonglong)uVar5;
  }
  if ((((uint)*param_3 >> 0x15 & 1) != 0) &&
     (puVar10 = (undefined8 *)FUN_144befea0(param_3,0x200000), puVar10 != (undefined8 *)0x0)) {
    iVar4 = (int)*puVar10;
  }
  if (iVar4 != 0) {
    local_res10[0] = iVar4;
    uVar5 = FUN_144f62700(uVar13,local_res10,4);
    uVar13 = (ulonglong)uVar5;
  }
  if (((((uint)*param_3 >> 0x17 & 1) != 0) &&
      (puVar10 = (undefined8 *)FUN_144befea0(param_3,0x800000), puVar10 != (undefined8 *)0x0)) &&
     (psVar3 = (short *)*puVar10, psVar3 != (short *)0x0)) {
    sVar1 = *psVar3;
    for (plVar8 = (longlong *)(psVar3 + 4);
        plVar8 != (longlong *)(psVar3 + ((longlong)sVar1 + 1) * 4); plVar8 = plVar8 + 1) {
      uVar11 = FUN_144bf0530(plVar8);
      iVar4 = FUN_144bfbbb0(uVar11);
      uVar7 = FUN_144f62700(uVar13,uVar11,(longlong)iVar4);
      local_res10[0] = FUN_144bf0700(plVar8);
      uVar7 = FUN_144f62700(uVar7,local_res10,4);
      local_res10[0] = FUN_144f89af0(param_1,*(undefined8 *)(*plVar8 + 8));
      uVar5 = FUN_144f62700(uVar7,local_res10,4);
      uVar13 = (ulonglong)uVar5;
    }
  }
  if ((uVar17 >> 0x19 & 1) != 0) {
    if ((((uint)*param_3 >> 0x19 & 1) != 0) &&
       (puVar10 = (undefined8 *)FUN_144befea0(param_3,0x2000000), puVar10 != (undefined8 *)0x0)) {
      uVar14 = *puVar10;
    }
    iVar4 = FUN_144bfbbb0(uVar14);
    uVar12 = FUN_144f62700(uVar13,uVar14,(longlong)iVar4);
    return uVar12;
  }
  return uVar13;
}



// FUNCTION 144f8a0b0 FUN_144f8a0b0 body=123 status=ok
// SIG undefined FUN_144f8a0b0(void)

void FUN_144f8a0b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f8a130 FUN_144f8a130 body=160 status=ok
// SIG undefined FUN_144f8a130(void)

undefined8 FUN_144f8a130(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int local_res8 [2];
  
  FUN_144f8a440(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar3 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144f8a7e0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *param_2;
      puVar2[1] = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
    uVar1 = 1;
  }
  else {
    *(undefined8 *)(*param_1 + 8 + (longlong)local_res8[0] * 0x10) = *param_3;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144f8a1d0 FUN_144f8a1d0 body=55 status=ok
// SIG undefined FUN_144f8a1d0(void)

undefined8 * FUN_144f8a1d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 144f8a210 thunk_FUN_144f8a3c0 body=5 status=ok
// SIG undefined thunk_FUN_144f8a3c0(void)

void thunk_FUN_144f8a3c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f8a220 FUN_144f8a220 body=19 status=ok
// SIG undefined FUN_144f8a220(void)

void FUN_144f8a220(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [16];
  
  FUN_144f8a240(param_1,param_2,local_res18);
  return;
}



// FUNCTION 144f8a240 FUN_144f8a240 body=374 status=ok
// SIG undefined FUN_144f8a240(void)

int FUN_144f8a240(longlong *param_1,uint *param_2,undefined1 *param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint *local_res10;
  int local_res18 [2];
  
  *param_3 = 0;
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  local_res10 = param_2;
  lVar4 = FUN_144f8a740(param_1,&local_res10);
  if ((lVar4 != 0) &&
     (iVar3 = *(int *)(*param_1 + 8 + (longlong)*(int *)(lVar4 + 4) * 0x10), iVar3 != 0)) {
    return iVar3;
  }
  iVar3 = 0;
  if ((*param_2 >> 0x17 & 1) != 0) {
    puVar5 = (undefined8 *)FUN_144befea0(param_2,0x800000);
    if ((puVar5 != (undefined8 *)0x0) && (psVar1 = (short *)*puVar5, psVar1 != (short *)0x0)) {
      iVar7 = (int)*psVar1;
      if (iVar7 < psVar1[2]) {
        do {
          uVar6 = FUN_144bf0530(psVar1 + ((longlong)iVar7 + 1) * 4);
          iVar2 = FUN_144bfbbb0(uVar6);
          iVar3 = FUN_144f62700(iVar3,uVar6,(longlong)iVar2);
          iVar7 = iVar7 + 1;
        } while (iVar7 < psVar1[2]);
      }
      goto LAB_144f8a330;
    }
  }
  if (*(longlong *)(param_2 + 2) != 0) {
    iVar3 = FUN_144f8a240(param_1,*(longlong *)(param_2 + 2),local_res18);
  }
LAB_144f8a330:
  FUN_144f8a610(param_1,local_res18,&local_res10);
  if (local_res18[0] == (int)param_1[1]) {
    iVar7 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar7) {
      FUN_144f8a8e0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar5 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_2;
      *(int *)(puVar5 + 1) = iVar3;
    }
    *(int *)(param_1 + 1) = iVar7;
  }
  else {
    *(int *)(*param_1 + 8 + (longlong)local_res18[0] * 0x10) = iVar3;
  }
  *param_3 = 1;
  return iVar3;
}



// FUNCTION 144f8a3c0 FUN_144f8a3c0 body=123 status=ok
// SIG undefined FUN_144f8a3c0(void)

void FUN_144f8a3c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144f8a440 FUN_144f8a440 body=302 status=ok
// SIG undefined FUN_144f8a440(void)

uint * FUN_144f8a440(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f8a546:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144f8a546;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f8a570 FUN_144f8a570 body=152 status=ok
// SIG undefined FUN_144f8a570(void)

uint * FUN_144f8a570(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 0x10) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144f8a610 FUN_144f8a610 body=302 status=ok
// SIG undefined FUN_144f8a610(void)

uint * FUN_144f8a610(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144f8a716:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_144f8a716;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144f8a740 FUN_144f8a740 body=152 status=ok
// SIG undefined FUN_144f8a740(void)

uint * FUN_144f8a740(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 0x10) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 144f8a7e0 FUN_144f8a7e0 body=243 status=ok
// SIG undefined FUN_144f8a7e0(void)

void FUN_144f8a7e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f8a8e0 FUN_144f8a8e0 body=243 status=ok
// SIG undefined FUN_144f8a8e0(void)

void FUN_144f8a8e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144f8a9e0 FUN_144f8a9e0 body=199 status=ok
// SIG undefined FUN_144f8a9e0(void)

undefined8 * FUN_144f8a9e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  uVar4 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar2 = FUN_144b3d480();
  param_1[2] = lVar2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3fff;
  param_1[5] = 0x1fffffff;
  param_1[6] = 1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  uVar1 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = uVar1;
  uVar1 = param_2[5];
  param_1[8] = param_2[4];
  param_1[9] = uVar1;
  param_1[10] = param_2[6];
  if (((*(int *)(param_1 + 1) != 0) && (*(undefined4 *)(param_1 + 1) = 0, lVar2 != 0)) &&
     (uVar5 = uVar4, *(int *)(lVar2 + 4) != -2)) {
    do {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *(undefined4 *)(param_1[2] + -4 + uVar5 + 8) = 0xffffffff;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 3) + 1);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 144f8aab0 FUN_144f8aab0 body=114 status=ok
// SIG undefined FUN_144f8aab0(void)

void FUN_144f8aab0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x40) = param_2[4];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = param_2[6];
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (((*(longlong *)(param_1 + 0x10) != 0) && (*(int *)(*(longlong *)(param_1 + 0x10) + 4) != -2)
        ) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x18) + 1)) {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + 8;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + -4 + lVar2) = 0xffffffff;
      } while (iVar3 < *(int *)(param_1 + 0x18) + 1);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 144f8ab30 FUN_144f8ab30 body=17 status=ok
// SIG undefined FUN_144f8ab30(void)

undefined8 FUN_144f8ab30(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28) & (ulonglong)param_2;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 == param_2);
}



// FUNCTION 144f8ab50 FUN_144f8ab50 body=545 status=ok
// SIG undefined FUN_144f8ab50(void)

undefined4 * FUN_144f8ab50(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_res8;
  ulonglong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  
  plVar3 = (longlong *)param_3[1];
  param_3 = (longlong *)*param_3;
  iVar8 = 0;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res8 = param_1;
  if (*(char *)(lVar9 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar9 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar9 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar9 + 0xf0) = lVar4;
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar9 + 8) != 0) {
    lVar9 = 0;
  }
  lVar4 = (longlong)(int)((longlong)plVar3 - (longlong)param_3 >> 3) * 8;
  local_res18 = lVar4;
  if (lVar9 == 0) {
    lVar5 = (*DAT_14c787670)(1,&local_res18,0x40);
  }
  else {
    local_res10 = lVar4 + 0x3fU & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(lVar9 + 0x28)) {
      lVar5 = *(longlong *)(lVar9 + 0x38);
      if (local_res10 + lVar5 <= *(ulonglong *)(lVar9 + 0x40)) {
        *(ulonglong *)(lVar9 + 0x38) = local_res10 + lVar5;
        goto joined_r0x000144f8ac45;
      }
    }
    lVar5 = FUN_144b454a0(lVar9,&local_res10);
  }
joined_r0x000144f8ac45:
  for (; lVar6 = local_res8, param_3 != plVar3; param_3 = param_3 + 1) {
    if (*param_3 != 0) {
      lVar6 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      plVar1 = (longlong *)(lVar5 + lVar6 * 8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = *param_3;
      }
    }
  }
  local_90 = local_res8;
  lStack_a0 = lVar5 + (longlong)iVar8 * 8;
  local_res20 = local_res8 + 0x20;
  if (*(longlong *)(local_res8 + 0x30) == 1) {
    *(code **)(local_res8 + 0x30) = FUN_144f92d00;
    *(longlong **)(local_res8 + 0x38) = &local_98;
  }
  local_a8 = lVar5;
  local_98 = local_res20;
  local_88 = lVar5;
  local_80 = lStack_a0;
  puVar7 = (undefined4 *)FUN_144f923e0(&local_res20,&local_res8,&local_a8,local_res8);
  uVar2 = *puVar7;
  *(undefined4 *)(lVar6 + 0x58) = uVar2;
  *param_2 = uVar2;
  if (*(code **)(local_98 + 0x10) == FUN_144f92d00) {
    *(undefined8 *)(local_98 + 0x10) = 1;
    *(undefined8 *)(local_98 + 0x18) = 0;
  }
  if (lVar9 == 0) {
    (*DAT_14c787678)(CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1),lVar5,lVar4);
  }
  else {
    uVar10 = lVar4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar9 + 0x28) < uVar10) || (uVar10 + lVar5 != *(longlong *)(lVar9 + 0x38)))
    {
      FUN_144be8550(lVar9,lVar5);
    }
    else {
      *(longlong *)(lVar9 + 0x38) = lVar5;
      if (*(longlong *)(lVar9 + 0x48) == lVar5) {
        FUN_144be8430(lVar9);
      }
    }
  }
  return param_2;
}



// FUNCTION 144f8ad80 FUN_144f8ad80 body=94 status=ok
// SIG undefined FUN_144f8ad80(void)

void FUN_144f8ad80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_res10;
  
  puVar1 = (undefined8 *)param_2[1];
  for (param_2 = (undefined8 *)*param_2; param_2 != puVar1; param_2 = param_2 + 1) {
    local_res10 = *param_2;
    lVar2 = FUN_144f92d80(param_1,&local_res10);
    if (lVar2 != 0) {
      FUN_144f8ade0(param_1,lVar2);
    }
  }
  return;
}



// FUNCTION 144f8ade0 FUN_144f8ade0 body=256 status=ok
// SIG undefined FUN_144f8ade0(void)

void FUN_144f8ade0(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = param_2[1];
  if (uVar4 != (int)param_1[1] - 1U) {
    lVar7 = FUN_144f92d80(param_1,(longlong)(int)param_1[1] * 8 + -8 + *param_1);
    *(uint *)(lVar7 + 4) = uVar4;
  }
  lVar7 = param_1[1];
  uVar6 = (int)lVar7 - 1;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar4) {
    puVar1 = (undefined8 *)(*param_1 + ((longlong)(int)lVar7 + -1) * 8);
    puVar2 = (undefined8 *)(*param_1 + (longlong)(int)uVar4 * 8);
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
    }
  }
  lVar7 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar8 = ((longlong)param_2 - lVar7 >> 3) + 1U & uVar9;
  puVar3 = (uint *)(lVar7 + uVar8 * 8);
  iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  while (-1 < iVar5) {
    lVar7 = lVar7 + ((ulonglong)*puVar3 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar7 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar3 - lVar7 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      param_2 = puVar3;
    }
    lVar7 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar8 = ((longlong)puVar3 - lVar7 >> 3) + 1U & uVar9;
    puVar3 = (uint *)(lVar7 + uVar8 * 8);
    iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144f8aee0 FUN_144f8aee0 body=7 status=ok
// SIG undefined FUN_144f8aee0(void)

void FUN_144f8aee0(undefined4 *param_1)

{
  *param_1 = 0x80040200;
  return;
}


