// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484b3fe6 FUN_1484b3fe6 body=116 status=ok
// SIG undefined FUN_1484b3fe6(void)

void FUN_1484b3fe6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x9d8) == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x5a8), lVar1 != 0)
     ) {
    (**(code **)(**(longlong **)(lVar1 + 0x460) + 0xa10))
              (*(longlong **)(lVar1 + 0x460),&local_28,
               *(undefined4 *)(*(longlong *)(lVar1 + 0x210) + 8));
    *(undefined4 *)(lVar1 + 0x438) = local_28;
    *(undefined4 *)(lVar1 + 0x43c) = uStack_24;
    *(undefined4 *)(lVar1 + 0x440) = uStack_20;
    *(undefined4 *)(lVar1 + 0x444) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b405c FUN_1484b405c body=98 status=ok
// SIG undefined FUN_1484b405c(void)

void FUN_1484b405c(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x460) + 0xa10))
            (*(longlong **)(param_1 + 0x460),&local_28,
             *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8));
  *(undefined4 *)(param_1 + 0x438) = local_28;
  *(undefined4 *)(param_1 + 0x43c) = uStack_24;
  *(undefined4 *)(param_1 + 0x440) = uStack_20;
  *(undefined4 *)(param_1 + 0x444) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b40ca FUN_1484b40ca body=517 status=ok
// SIG undefined FUN_1484b40ca(void)

void FUN_1484b40ca(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_508 [32];
  undefined1 local_4e8;
  code *local_4e0;
  longlong **local_4d8;
  undefined1 local_4c9;
  longlong local_4c8;
  longlong local_4c0;
  longlong *local_4b8;
  undefined1 *local_4b0;
  undefined1 *local_4a8;
  undefined1 local_290;
  code *local_288 [2];
  undefined8 *local_278;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if (*(char *)((longlong)param_1 + 0x6a3) == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
    param_1[0x10d] = 0;
    plVar3 = (longlong *)param_1[0x10e];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x10e] = 0;
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
    if (((char)param_1[0x13b] == '\x01') && (lVar4 = param_1[0xb5], lVar4 != 0)) {
      local_4c8 = param_1[0x10d];
      local_4c0 = param_1[0x10e];
      if (local_4c0 != 0) {
        LOCK();
        *(int *)(local_4c0 + 8) = *(int *)(local_4c0 + 8) + 1;
        UNLOCK();
      }
      FUN_1484b0dee(lVar4,&local_4c8,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_508);
  }
  local_4e8 = 0;
  FUN_1411b354a(local_248,0,0,0);
  local_4b0 = &local_4c9;
  local_4c9 = 0;
  local_4d8 = &local_4b8;
  local_4e0 = FUN_143b75662;
  local_4b8 = param_1;
  local_4a8 = local_248;
  (**(code **)(*param_1 + 0xa90))(param_1);
  local_4b8 = param_1;
  FUN_146bffece(&local_4b0,local_248);
  local_290 = local_4c9;
  local_288[0] = (code *)0x0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x238,8);
  *puVar5 = &PTR_FUN_14aef0600;
  puVar5[1] = local_4b8;
  local_278 = puVar5;
  FUN_146bffece(puVar5 + 2,&local_4b0);
  *(undefined1 *)(puVar5 + 0x46) = local_290;
  if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_288[0] = FUN_143b7588a;
  }
  FUN_1484b42e6(param_1 + 0x110,local_288);
  FUN_141082778(&local_4b0);
  FUN_141082778(local_248);
  if ((local_28 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b42e6 FUN_1484b42e6 body=824 status=ok
// SIG undefined FUN_1484b42e6(void)

void FUN_1484b42e6(int *param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  void *_Dst;
  longlong **pplVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined8 uStack_e0;
  longlong **local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong *local_98;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong **local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((char)param_1[1] == '\0') {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
    iVar2 = *param_1;
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
    EnterCriticalSection(lpCriticalSection);
    plVar11 = (longlong *)(param_1 + 2);
    if (0 < param_1[4]) {
      iVar10 = 0;
      do {
        *(undefined1 *)(*(longlong *)(*plVar11 + (longlong)iVar10 * 8) + 0x18) = 1;
        if (*(char *)(*(longlong *)(*plVar11 + (longlong)iVar10 * 8) + 0x19) == '\x01') {
          FUN_1484c07a6(plVar11,iVar10);
          iVar10 = iVar10 + -1;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_1[4]);
    }
    LeaveCriticalSection(lpCriticalSection);
    plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    _Dst = (void *)FUN_14001cc68(0xc0);
    memset(_Dst,0,0xc0);
    FUN_1484c080c(_Dst);
    plVar7[2] = (longlong)_Dst;
    local_e8 = *(int **)((longlong)_Dst + 0x70);
    uVar4 = *(undefined8 *)((longlong)_Dst + 0x78);
    local_d8 = *(longlong ***)((longlong)_Dst + 0x80);
    uVar5 = *(undefined8 *)((longlong)_Dst + 0x88);
    local_c8 = *(longlong **)((longlong)_Dst + 0x90);
    uStack_c0 = *(undefined8 *)((longlong)_Dst + 0x98);
    local_b8 = *(longlong *)((longlong)_Dst + 0xa0);
    uStack_b0 = *(undefined8 *)((longlong)_Dst + 0xa8);
    uVar6 = uStack_b0;
    *(longlong **)((longlong)_Dst + 0xa0) = plVar7;
    *(ulonglong *)((longlong)_Dst + 0xa8) = CONCAT44(uStack_4c,uStack_50);
    *(undefined ***)((longlong)_Dst + 0x90) = &PTR_LAB_14aef05c0;
    *(int **)((longlong)_Dst + 0x98) = param_1;
    *(undefined8 *)((longlong)_Dst + 0x80) = 0;
    *(ulonglong *)((longlong)_Dst + 0x88) = CONCAT44(uStack_6c,uStack_70);
    *(undefined1 **)((longlong)_Dst + 0x70) = &LAB_1484c08ae;
    *(ulonglong *)((longlong)_Dst + 0x78) = CONCAT44(uStack_7c,uStack_80);
    uStack_e0._0_4_ = (undefined4)uVar4;
    uStack_e0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_d0._0_4_ = (undefined4)uVar5;
    uStack_d0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    local_58 = local_b8;
    uStack_50 = (undefined4)uStack_b0;
    uStack_4c = uStack_b0._4_4_;
    local_68 = local_c8;
    uStack_60 = uStack_c0;
    local_78 = local_d8;
    uStack_70 = (undefined4)uStack_d0;
    uStack_6c = uStack_d0._4_4_;
    local_88 = (undefined8 *)local_e8;
    uStack_80 = (undefined4)uStack_e0;
    uStack_7c = uStack_e0._4_4_;
    uStack_e0 = uVar4;
    uStack_d0 = uVar5;
    uStack_b0 = uVar6;
    if (local_e8 != (int *)0x0) {
      pplVar8 = local_78;
      if (local_d8 == (longlong **)0x0) {
        pplVar8 = &local_68;
      }
      (*(code *)(*pplVar8)[2])();
    }
    *(int *)(plVar7 + 1) = iVar2;
    local_d8 = (longlong **)*param_2;
    local_c8 = (longlong *)0x0;
    local_e8 = param_1;
    if (local_d8 != (longlong **)0x0) {
      plVar9 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar9 = (longlong *)param_2[2];
      }
      (**(code **)*plVar9)(plVar9,&local_c8);
    }
    local_88 = (undefined8 *)0x0;
    local_98 = plVar7;
    FUN_1484c090a(&local_88);
    puVar3 = (undefined8 *)*plVar7;
    *plVar7 = (longlong)local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if (local_88 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_88 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_88)(local_88,1);
        }
      }
    }
    if (local_d8 != (longlong **)0x0) {
      plVar9 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar9 = &local_b8;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    EnterCriticalSection(lpCriticalSection);
    iVar2 = param_1[4];
    param_1[4] = iVar2 + 1U;
    if ((uint)param_1[5] < iVar2 + 1U) {
      FUN_1484c0c08(plVar11,iVar2);
    }
    *(longlong **)(*plVar11 + (longlong)iVar2 * 8) = plVar7;
    LeaveCriticalSection(lpCriticalSection);
  }
  if (*param_2 != 0) {
    plVar11 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b4620 FUN_1484b4620 body=292 status=ok
// SIG undefined FUN_1484b4620(void)

undefined8 * FUN_1484b4620(undefined8 *param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb4c168) && (FUN_144b3d300(&DAT_14cb4c168), DAT_14cb4c168 == -1)) {
    DAT_14cb4c160 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,3,3,(LPCWSTR)0x0);
    atexit((_func_5014 *)&LAB_143b6f6d4);
    _Init_thread_footer(&DAT_14cb4c168);
  }
  WaitForSingleObject(DAT_14cb4c160,0xffffffff);
  if (*param_2 == '\0') {
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar4 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_2 + 0x80);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    *param_2 = cVar2;
    if (cVar2 == '\0') {
      FUN_143b6c510(param_1,param_3,param_2,param_4);
      ReleaseSemaphore(DAT_14cb4c160,1,(LPLONG)0x0);
      return param_1;
    }
  }
  ReleaseSemaphore(DAT_14cb4c160,1,(LPLONG)0x0);
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1484b4744 FUN_1484b4744 body=336 status=ok
// SIG undefined FUN_1484b4744(void)

void FUN_1484b4744(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_2;
  *param_2 = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14aef0620;
  plVar6[2] = lVar3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x840));
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x870);
  *(longlong *)(param_1 + 0x868) = lVar3;
  *(longlong **)(param_1 + 0x870) = plVar6;
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
  if ((*(char *)(param_1 + 0x9d8) == '\x01') && (*(longlong *)(param_1 + 0x5a8) != 0)) {
    local_68 = 0;
    local_58 = &PTR_LAB_14aef0640;
    local_78 = FUN_143b75966;
    local_50 = param_1;
    FUN_1407461b0(1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x840));
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b4896 FUN_1484b4896 body=244 status=ok
// SIG undefined FUN_1484b4896(void)

void FUN_1484b4896(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0xe2];
  lVar2 = param_1[0xe3];
  lVar3 = param_1[0xe4];
  lVar4 = param_1[0xe5];
  lVar5 = param_1[0xe6];
  lVar6 = param_1[0xe7];
  lVar7 = param_1[0xe8];
  lVar8 = param_1[0xe9];
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  param_1[0xe8] = param_2[6];
  param_1[0xe9] = lVar15;
  param_1[0xe6] = lVar13;
  param_1[0xe7] = lVar14;
  param_1[0xe4] = lVar11;
  param_1[0xe5] = lVar12;
  param_1[0xe2] = lVar9;
  param_1[0xe3] = lVar10;
  local_58._0_4_ = (undefined4)lVar1;
  local_58._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_48._0_4_ = (undefined4)lVar3;
  local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_38._0_4_ = (undefined4)lVar5;
  local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_28._0_4_ = (undefined4)lVar7;
  local_28._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = lVar1;
  uStack_50 = lVar2;
  local_48 = lVar3;
  uStack_40 = lVar4;
  local_38 = lVar5;
  uStack_30 = lVar6;
  local_28 = lVar7;
  uStack_20 = lVar8;
  if (param_3 == 1) {
    (**(code **)(*param_1 + 0xaa0))();
  }
  else if (param_3 == 2) {
    FUN_1484b240a();
  }
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b499c FUN_1484b499c body=292 status=ok
// SIG undefined FUN_1484b499c(void)

void FUN_1484b499c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0xe2] != 0) {
    local_98 = param_1[0xe2];
    uStack_50 = param_1[0xe3];
    local_88 = (longlong *)param_1[0xe4];
    uStack_40 = param_1[0xe5];
    local_38 = param_1[0xe6];
    uStack_30 = param_1[0xe7];
    local_28 = param_1[0xe8];
    uStack_20 = param_1[0xe9];
    lVar5 = local_28;
    lVar6 = uStack_20;
    lVar3 = local_38;
    lVar4 = uStack_30;
    local_48 = local_88;
    lVar2 = uStack_40;
    local_58 = local_98;
    lVar1 = uStack_50;
    param_1[0xe8] = CONCAT44(uStack_64,local_68);
    param_1[0xe9] = CONCAT44(uStack_5c,uStack_60);
    param_1[0xe6] = CONCAT44(uStack_74,local_78);
    param_1[0xe7] = CONCAT44(uStack_6c,uStack_70);
    param_1[0xe4] = 0;
    param_1[0xe5] = CONCAT44(uStack_7c,uStack_80);
    param_1[0xe2] = 0;
    param_1[0xe3] = CONCAT44(uStack_8c,uStack_90);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = (undefined4)uStack_20;
    uStack_5c = uStack_20._4_4_;
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_50 = lVar1;
    uStack_40 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    local_28 = lVar5;
    uStack_20 = lVar6;
    if (local_98 != 0) {
      plVar7 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar7 = (longlong *)&local_78;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (param_2 == 1) {
      (**(code **)(*param_1 + 0xaa0))(param_1);
    }
    else if (param_2 == 2) {
      FUN_1484b240a(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b4ace FUN_1484b4ace body=244 status=ok
// SIG undefined FUN_1484b4ace(void)

void FUN_1484b4ace(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0xea];
  lVar2 = param_1[0xeb];
  lVar3 = param_1[0xec];
  lVar4 = param_1[0xed];
  lVar5 = param_1[0xee];
  lVar6 = param_1[0xef];
  lVar7 = param_1[0xf0];
  lVar8 = param_1[0xf1];
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  param_1[0xf0] = param_2[6];
  param_1[0xf1] = lVar15;
  param_1[0xee] = lVar13;
  param_1[0xef] = lVar14;
  param_1[0xec] = lVar11;
  param_1[0xed] = lVar12;
  param_1[0xea] = lVar9;
  param_1[0xeb] = lVar10;
  local_58._0_4_ = (undefined4)lVar1;
  local_58._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_48._0_4_ = (undefined4)lVar3;
  local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_38._0_4_ = (undefined4)lVar5;
  local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_28._0_4_ = (undefined4)lVar7;
  local_28._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = lVar1;
  uStack_50 = lVar2;
  local_48 = lVar3;
  uStack_40 = lVar4;
  local_38 = lVar5;
  uStack_30 = lVar6;
  local_28 = lVar7;
  uStack_20 = lVar8;
  if (param_3 == 1) {
    (**(code **)(*param_1 + 0xaa0))();
  }
  else if (param_3 == 2) {
    FUN_1484b240a();
  }
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b4bd4 FUN_1484b4bd4 body=292 status=ok
// SIG undefined FUN_1484b4bd4(void)

void FUN_1484b4bd4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0xea] != 0) {
    local_98 = param_1[0xea];
    uStack_50 = param_1[0xeb];
    local_88 = (longlong *)param_1[0xec];
    uStack_40 = param_1[0xed];
    local_38 = param_1[0xee];
    uStack_30 = param_1[0xef];
    local_28 = param_1[0xf0];
    uStack_20 = param_1[0xf1];
    lVar5 = local_28;
    lVar6 = uStack_20;
    lVar3 = local_38;
    lVar4 = uStack_30;
    local_48 = local_88;
    lVar2 = uStack_40;
    local_58 = local_98;
    lVar1 = uStack_50;
    param_1[0xf0] = CONCAT44(uStack_64,local_68);
    param_1[0xf1] = CONCAT44(uStack_5c,uStack_60);
    param_1[0xee] = CONCAT44(uStack_74,local_78);
    param_1[0xef] = CONCAT44(uStack_6c,uStack_70);
    param_1[0xec] = 0;
    param_1[0xed] = CONCAT44(uStack_7c,uStack_80);
    param_1[0xea] = 0;
    param_1[0xeb] = CONCAT44(uStack_8c,uStack_90);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = (undefined4)uStack_20;
    uStack_5c = uStack_20._4_4_;
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_50 = lVar1;
    uStack_40 = lVar2;
    local_38 = lVar3;
    uStack_30 = lVar4;
    local_28 = lVar5;
    uStack_20 = lVar6;
    if (local_98 != 0) {
      plVar7 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar7 = (longlong *)&local_78;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (param_2 == 1) {
      (**(code **)(*param_1 + 0xaa0))(param_1);
    }
    else if (param_2 == 2) {
      FUN_1484b240a(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b4d06 FUN_1484b4d06 body=225 status=ok
// SIG undefined FUN_1484b4d06(void)

void FUN_1484b4d06(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0xf2];
  lVar2 = param_1[0xf3];
  lVar3 = param_1[0xf4];
  lVar4 = param_1[0xf5];
  lVar5 = param_1[0xf6];
  lVar6 = param_1[0xf7];
  lVar7 = param_1[0xf8];
  lVar8 = param_1[0xf9];
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  param_1[0xf8] = param_2[6];
  param_1[0xf9] = lVar15;
  param_1[0xf6] = lVar13;
  param_1[0xf7] = lVar14;
  param_1[0xf4] = lVar11;
  param_1[0xf5] = lVar12;
  param_1[0xf2] = lVar9;
  param_1[0xf3] = lVar10;
  local_58._0_4_ = (undefined4)lVar1;
  local_58._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_48._0_4_ = (undefined4)lVar3;
  local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_38._0_4_ = (undefined4)lVar5;
  local_38._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_28._0_4_ = (undefined4)lVar7;
  local_28._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = lVar1;
  uStack_50 = lVar2;
  local_48 = lVar3;
  uStack_40 = lVar4;
  local_38 = lVar5;
  uStack_30 = lVar6;
  local_28 = lVar7;
  uStack_20 = lVar8;
  (**(code **)(*param_1 + 0xaa0))();
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b4df8 FUN_1484b4df8 body=276 status=ok
// SIG undefined FUN_1484b4df8(void)

void FUN_1484b4df8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_1[0xf2];
  uStack_50 = param_1[0xf3];
  local_88 = (longlong *)param_1[0xf4];
  uStack_40 = param_1[0xf5];
  local_38 = param_1[0xf6];
  uStack_30 = param_1[0xf7];
  local_28 = param_1[0xf8];
  uStack_20 = param_1[0xf9];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  local_48 = local_88;
  lVar2 = uStack_40;
  local_58 = local_98;
  lVar1 = uStack_50;
  param_1[0xf8] = CONCAT44(uStack_64,local_68);
  param_1[0xf9] = CONCAT44(uStack_5c,uStack_60);
  param_1[0xf6] = CONCAT44(uStack_74,local_78);
  param_1[0xf7] = CONCAT44(uStack_6c,uStack_70);
  param_1[0xf4] = 0;
  param_1[0xf5] = CONCAT44(uStack_7c,uStack_80);
  param_1[0xf2] = 0;
  param_1[0xf3] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (**(code **)(*param_1 + 0xaa0))(param_1);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b4f0e FUN_1484b4f0e body=115 status=ok
// SIG undefined FUN_1484b4f0e(void)

void FUN_1484b4f0e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 0xfa;
  if (plVar1 != param_2) {
    lVar2 = *plVar1;
    *plVar1 = *param_2;
    *param_2 = 0;
    if (lVar2 != 0) {
      FUN_1484c0380(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  (**(code **)(*param_1 + 0xaa0))(param_1);
  lVar2 = *param_2;
  if (lVar2 == 0) {
    return;
  }
  FUN_1484c0380(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 1484b4f82 FUN_1484b4f82 body=151 status=ok
// SIG undefined FUN_1484b4f82(void)

uint * FUN_1484b4f82(longlong param_1,uint *param_2,undefined8 param_3,uint param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x710);
  if (pcVar1 == (code *)0x0) {
    *param_2 = -(param_4 & 1) | 0xffff0000;
  }
  else {
    plVar3 = (longlong *)(param_1 + 0x730);
    if (*(longlong **)(param_1 + 0x720) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x720);
    }
    local_38 = param_3;
    local_2c = param_4;
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(param_2,uVar2,&local_38,&local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b501a FUN_1484b501a body=7 status=ok
// SIG undefined FUN_1484b501a(void)

void FUN_1484b501a(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6f8) = param_2;
  return;
}



// FUNCTION 1484b507e FUN_1484b507e body=95 status=ok
// SIG undefined FUN_1484b507e(void)

undefined8 FUN_1484b507e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_143b75a00;
  local_20 = param_2;
  (**(code **)(*(longlong *)(param_1 + -0x6b8) + 0xa90))(param_1 + -0x6b8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b50de FUN_1484b50de body=103 status=ok
// SIG undefined FUN_1484b50de(void)

undefined8 FUN_1484b50de(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  code *local_20;
  undefined8 **local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_10;
  local_18 = &local_28;
  local_20 = FUN_143b75b42;
  local_10 = param_2;
  (**(code **)(*(longlong *)(param_1 + -0x6b8) + 0xa90))(param_1 + -0x6b8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b5146 FUN_1484b5146 body=14 status=ok
// SIG undefined FUN_1484b5146(void)

undefined4 FUN_1484b5146(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x170);
}



// FUNCTION 1484b5158 FUN_1484b5158 body=201 status=ok
// SIG undefined FUN_1484b5158(void)

longlong FUN_1484b5158(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a4a122(&local_30);
  cVar1 = FUN_144a792c0(param_1,0x30);
  uVar3 = 0x21;
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  local_40 = 0;
  local_48 = 0;
  lVar2 = FUN_140c9d4a9(param_1,0,uVar3,0);
  FUN_144a49ece(&local_30);
  FUN_1412e3d1e(&local_30);
  *(undefined4 *)(lVar2 + 0xe8) = local_30;
  *(undefined4 *)(lVar2 + 0xec) = uStack_2c;
  *(undefined4 *)(lVar2 + 0xf0) = uStack_28;
  *(undefined4 *)(lVar2 + 0xf4) = uStack_24;
  *(byte *)(lVar2 + 0xb8) = *(byte *)(lVar2 + 0xb8) & 0xbf;
  *(undefined1 *)(lVar2 + 0x31) = *(undefined1 *)(param_1 + 0x900);
  FUN_140078ec2(lVar2 + 0x148,DAT_14cad0ef8);
  *(byte *)(lVar2 + 0xb8) = *(byte *)(lVar2 + 0xb8) & 0x7f;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b5222 FUN_1484b5222 body=58 status=ok
// SIG undefined FUN_1484b5222(void)

longlong FUN_1484b5222(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x121];
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0xc98))();
    (**(code **)(*param_1 + 0xca0))(param_1,uVar1);
    lVar2 = param_1[0x121];
  }
  return lVar2;
}



// FUNCTION 1484b525c FUN_1484b525c body=50 status=ok
// SIG undefined FUN_1484b525c(void)

void FUN_1484b525c(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x908) = param_2;
  }
  return;
}



// FUNCTION 1484b528e FUN_1484b528e body=86 status=ok
// SIG undefined FUN_1484b528e(void)

void FUN_1484b528e(longlong *param_1,undefined8 param_2,char param_3)

{
  FUN_1401842de(param_1 + 0x129);
  FUN_14058b698(param_1 + 0x129,param_2);
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001484b52d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc68))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1484b52e4 FUN_1484b52e4 body=59 status=ok
// SIG undefined FUN_1484b52e4(void)

void FUN_1484b52e4(longlong *param_1,char param_2)

{
  FUN_147a2cbea(param_1 + 0x129);
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001484b5314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc68))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1484b5320 FUN_1484b5320 body=59 status=ok
// SIG undefined FUN_1484b5320(void)

void FUN_1484b5320(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x7a0))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x7a0))(param_1);
    (**(code **)(*plVar2 + 0x2c0))(plVar2);
    *(undefined1 *)((longlong)param_1 + 0x911) = 1;
  }
  return;
}



// FUNCTION 1484b535c FUN_1484b535c body=624 status=ok
// SIG undefined FUN_1484b535c(void)

void FUN_1484b535c(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = param_1[0x16];
  if ((((lVar7 == 0) && (lVar7 = FUN_1448abda6(param_1), lVar7 == 0)) ||
      ((bVar1 = *(byte *)(lVar7 + 0x152), bVar1 != 1 &&
       ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))))) ||
     (*(char *)((longlong)param_1 + 0x901) != '\x01')) {
    *(undefined4 *)(param_1 + 0x13a) = 0;
    if (*(int *)((longlong)param_1 + 0x9d4) != 0) {
      FUN_147c86988(param_1 + 0x139,0);
    }
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x7a0))(param_1);
    if (plVar6 == (longlong *)0x0) goto LAB_1484b555e;
    bVar4 = false;
  }
  else {
    lVar7 = param_1[0x13a];
    if ((longlong)(int)lVar7 != 0) {
      lVar3 = param_1[0x139];
      lVar9 = 0;
      do {
        FUN_147c49008(*(undefined8 *)(lVar3 + lVar9));
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar7 * 8 != lVar9);
    }
    plVar6 = (longlong *)(**(code **)(*param_1 + 0xc98))(param_1);
    if (plVar6 == (longlong *)0x0) goto LAB_1484b555e;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar6);
    }
    iVar2 = (int)param_1[0x13a];
    *(uint *)(param_1 + 0x13a) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x9d4) < iVar2 + 1U) {
      FUN_1482153d8(param_1 + 0x139,iVar2);
    }
    *(longlong **)(param_1[0x139] + (longlong)iVar2 * 8) = plVar6;
    bVar4 = true;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar6);
    }
  }
  *(char *)((longlong)plVar6 + 0x31) = (char)param_1[0x120];
  FUN_147c49028(plVar6);
  FUN_1407e1b5e(plVar6,param_1 + 0x129);
  if (bVar4) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar5 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14a5a8900;
    local_40[1] = plVar6;
    uVar8 = FUN_144a3f946();
    puVar5[2] = uVar8;
    *puVar5 = &PTR_FUN_14aef0660;
    puVar5[3] = 0;
    FUN_14485c47a(puVar5 + 3,param_1);
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[4] = &LAB_1484b55ce;
    FUN_143606f80(plVar6,&local_40);
  }
  else {
    FUN_1412e3d1e(&local_50);
    *(undefined4 *)(plVar6 + 0x1d) = local_50;
    *(undefined4 *)((longlong)plVar6 + 0xec) = uStack_4c;
    *(undefined4 *)(plVar6 + 0x1e) = uStack_48;
    *(undefined4 *)((longlong)plVar6 + 0xf4) = uStack_44;
    *(byte *)((longlong)plVar6 + 0xb9) = *(byte *)((longlong)plVar6 + 0xb9) | 4;
    (**(code **)(*plVar6 + 0x2c0))(plVar6);
    (**(code **)(*plVar6 + 0x2a0))(plVar6);
    FUN_1406cc378(param_1);
    *(undefined1 *)((longlong)param_1 + 0x911) = 0;
  }
LAB_1484b555e:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b55dc FUN_1484b55dc body=574 status=ok
// SIG undefined FUN_1484b55dc(void)

void FUN_1484b55dc(longlong param_1,char param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [39];
  char local_61;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar6 = *(int *)(param_1 + 0x9d0);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_147c80a8e(&local_58);
  }
  local_61 = param_2;
  if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_3);
  }
  iVar6 = *(int *)(param_1 + 0x9d0);
  if ((longlong)iVar6 != 0) {
    local_60 = (longlong *)(param_1 + 0x9c8);
    lVar9 = *(longlong *)(param_1 + 0x9c8);
    iVar10 = 1;
    lVar8 = 0;
    lVar11 = 0;
    bVar4 = DAT_14c950c29;
    do {
      if ((~bVar4 & 1) == 0 && param_3 != 0) {
        FUN_1456cec3c(param_3);
        bVar4 = DAT_14c950c29;
      }
      plVar2 = local_60;
      if (*(longlong *)(lVar9 + lVar8) == param_3) {
        if (iVar10 != 0) {
          if ((local_61 == '\0') &&
             (iVar6 = *(int *)(param_3 + 0x60) + *(int *)(param_3 + 0x40) + *(int *)(param_3 + 0x50)
                      + *(int *)(param_3 + 0x70) + *(int *)(param_3 + 0x80) +
                      *(int *)(param_3 + 0x90), iVar7 = iVar6 + *(int *)(param_3 + 0xa0),
             iVar7 == 0 || SCARRY4(iVar6,*(int *)(param_3 + 0xa0)) != iVar7 < 0)) {
            iVar6 = *(int *)(param_1 + 0x9d0);
            if (iVar6 - iVar10 != 0) {
              memmove((void *)(*(longlong *)(param_1 + 0x9c8) + (lVar11 >> 0x20) * 8),
                      (void *)(*(longlong *)(param_1 + 0x9c8) + (lVar11 >> 0x20) * 8 + 8),
                      (longlong)(iVar6 - iVar10) << 3);
              iVar6 = *(int *)(param_1 + 0x9d0);
            }
            *(int *)(param_1 + 0x9d0) = iVar6 + -1;
            FUN_1482157ae(plVar2);
          }
          else {
            if ((~bVar4 & 1) == 0 && param_3 != 0) {
              FUN_1456cec3c(param_3);
            }
            *(longlong *)(param_1 + 0x908) = param_3;
            FUN_1406cc378(param_1);
            if (iVar10 < *(int *)(param_1 + 0x9d0)) {
              lVar9 = (longlong)iVar10;
              do {
                uVar3 = uStack_50;
                uVar1 = *(undefined8 *)(*plVar2 + lVar9 * 8);
                lVar8 = (longlong)(int)uStack_50;
                uVar5 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
                if (uStack_50._4_4_ < uVar5) {
                  FUN_147c80aee(&local_58,uVar3 & 0xffffffff);
                }
                *(undefined8 *)(local_58 + lVar8 * 8) = uVar1;
                lVar9 = lVar9 + 1;
              } while (lVar9 < *(int *)(param_1 + 0x9d0));
            }
            FUN_14821406c(plVar2,&local_58);
          }
        }
        break;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0x100000000;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar6 * 8 != lVar8);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b5834 FUN_1484b5834 body=42 status=ok
// SIG undefined FUN_1484b5834(void)

void FUN_1484b5834(longlong param_1,char param_2)

{
  longlong lVar1;
  
  *(char *)(param_1 + 0x9d9) = param_2;
  if ((*(char *)(param_1 + 0x9d8) == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x5a8), lVar1 != 0)
     ) {
    *(byte *)(lVar1 + 0x76) = *(byte *)(lVar1 + 0x76) & 0xdf | param_2 << 5;
  }
  return;
}



// FUNCTION 1484b585e FUN_1484b585e body=674 status=ok
// SIG undefined FUN_1484b585e(void)

void FUN_1484b585e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)(param_1 + 0x98);
    if (*(int *)(param_1 + 0xa0) == -1) {
      (**(code **)(*plVar2 + 0x18))(plVar2,&DAT_14ca85100);
    }
    else {
      FUN_1447fd100(plVar2,&DAT_14ca85100);
    }
    plVar1 = (longlong *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x18) == -1) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14ca85100);
    }
    else {
      FUN_1447fd100(plVar1,&DAT_14ca85100);
    }
    plVar3 = (longlong *)(param_1 + 0xd8);
    if (*(int *)(param_1 + 0xe0) == -1) {
      (**(code **)(*plVar3 + 0x18))(plVar3,&DAT_14ca85100);
    }
    else {
      FUN_1447fd100(plVar3,&DAT_14ca85100);
    }
    local_a8 = 0x400000000;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0xffffffff;
    local_5c = 0xff;
    local_5a = 0;
    plVar4 = (longlong *)(param_1 + 0x140);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_144a7dcb2(plVar2,plVar4,&local_118);
    FUN_144a7dcdc(plVar1,plVar4,&local_118);
    FUN_14472d638(plVar1,plVar4,&local_118,0xffffffff);
    FUN_144a7dd4a(plVar3,plVar4,&local_118);
    FUN_140ba0b60(plVar4,&DAT_14ca85100,&local_118);
    if (*(int *)(param_1 + 0x148) == -1) {
      (**(code **)(*plVar4 + 0x18))(plVar4,&DAT_14ca85100);
    }
    else {
      FUN_1447fd100(plVar4,&DAT_14ca85100);
    }
    FUN_14006bf18(plVar2,&DAT_14ca85100);
    FUN_140d00208(plVar1,&DAT_14ca85100);
    FUN_14006bf18(plVar3,&DAT_14ca85100);
    FUN_14006bf18(plVar4,&DAT_14ca85100);
    if (0 < *(int *)(param_1 + 0x138)) {
      FUN_14006bf18(param_1 + 0x118,&DAT_14ca85100);
    }
    if ((*(char *)(param_1 + 0x378) == '\x01') && (0 < *(int *)(param_1 + 0x3a0))) {
      FUN_14006bf18(param_1 + 0x380,&DAT_14ca85100);
    }
    *(undefined1 *)(param_1 + 0x510) = 0;
    cVar5 = FUN_144a7ebcb();
    if ((cVar5 != '\0') && (*(char *)(param_1 + 0x3a8) == '\x01')) {
      FUN_1484bea56(param_1);
      *(undefined1 *)(param_1 + 0x510) = 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b5b02 FUN_1484b5b02 body=529 status=ok
// SIG undefined FUN_1484b5b02(void)

void FUN_1484b5b02(longlong param_1,char param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 8) != 0) {
    if (param_2 != '\0') {
      plVar1 = (longlong *)(param_1 + 0x98);
      if (*(int *)(param_1 + 0xa0) == -1) {
        (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14ca85100);
      }
      else {
        FUN_1447fd100(plVar1,&DAT_14ca85100);
      }
    }
    if (param_3 != '\0') {
      plVar1 = (longlong *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x18) == -1) {
        (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14ca85100);
      }
      else {
        FUN_1447fd100(plVar1,&DAT_14ca85100);
      }
    }
    if (param_4 != '\0') {
      plVar1 = (longlong *)(param_1 + 0xd8);
      if (*(int *)(param_1 + 0xe0) == -1) {
        (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14ca85100);
      }
      else {
        FUN_1447fd100(plVar1,&DAT_14ca85100);
      }
    }
    local_98 = 0x400000000;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0xffffffff;
    local_4c = 0xff;
    local_4a = 0;
    plVar1 = (longlong *)(param_1 + 0x140);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_144a7dcb2(param_1 + 0x98,plVar1,&local_108);
    FUN_144a7dcdc(param_1 + 0x10,plVar1,&local_108);
    FUN_14472d638(param_1 + 0x10,plVar1,&local_108,0xffffffff);
    FUN_144a7dd4a(param_1 + 0xd8,plVar1,&local_108);
    FUN_140ba0b60(plVar1,&DAT_14ca85100,&local_108);
    if (*(int *)(param_1 + 0x148) == -1) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14ca85100);
    }
    else {
      FUN_1447fd100(plVar1,&DAT_14ca85100);
    }
    *(undefined1 *)(param_1 + 0x510) = 0;
    cVar2 = FUN_144a7ebcb();
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x3a8) == '\x01')) {
      FUN_1484bea56(param_1);
      *(undefined1 *)(param_1 + 0x510) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b5d14 FUN_1484b5d14 body=970 status=ok
// SIG undefined FUN_1484b5d14(void)

void FUN_1484b5d14(longlong param_1,longlong param_2,char param_3,char param_4,char param_5,
                  char param_6)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (param_3 != '\0') {
      iVar5 = *(int *)(param_1 + 200);
      iVar1 = *(int *)(param_1 + 0xcc);
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      cVar3 = *(char *)(param_2 + 0x69);
      if (cVar3 == '\0') {
        FUN_1446f970a(param_2,1);
      }
      pvVar6 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                 (DAT_14ca83900,param_2,uVar2,0,iVar5 * iVar1,1);
      if (cVar3 == '\0') {
        FUN_1446f970a(param_2,0);
      }
      memcpy(pvVar6,*(void **)(param_1 + 0xc0),
             (ulonglong)(uint)(*(int *)(param_1 + 200) * *(int *)(param_1 + 0xcc)));
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_1446f970a(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
        FUN_1446f970a(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
      }
    }
    if (param_4 != '\0') {
      uVar4 = FUN_147cdc28c(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      cVar3 = *(char *)(param_2 + 0x69);
      if (cVar3 == '\0') {
        FUN_1446f970a(param_2,1);
      }
      pvVar6 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0,uVar4,1);
      if (cVar3 == '\0') {
        FUN_1446f970a(param_2,0);
      }
      iVar5 = FUN_147cdc28c(param_1 + 0x10);
      memcpy(pvVar6,*(void **)(param_1 + 0x70),(longlong)iVar5);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_1446f970a(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
        FUN_1446f970a(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
      }
    }
    if (param_6 != '\0') {
      iVar5 = *(int *)(param_1 + 0x108);
      iVar1 = *(int *)(param_1 + 0x10c);
      uVar2 = *(undefined8 *)(param_1 + 0xe8);
      cVar3 = *(char *)(param_2 + 0x69);
      if (cVar3 == '\0') {
        FUN_1446f970a(param_2,1);
      }
      pvVar6 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                 (DAT_14ca83900,param_2,uVar2,0,iVar5 * iVar1,1);
      if (cVar3 == '\0') {
        FUN_1446f970a(param_2,0);
      }
      memcpy(pvVar6,*(void **)(param_1 + 0x100),
             (ulonglong)(uint)(*(int *)(param_1 + 0x108) * *(int *)(param_1 + 0x10c)));
      uVar2 = *(undefined8 *)(param_1 + 0xe8);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_1446f970a(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
        FUN_1446f970a(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
      }
    }
    if (param_5 != '\0') {
      uVar4 = FUN_147cdc2ac(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      cVar3 = *(char *)(param_2 + 0x69);
      if (cVar3 == '\0') {
        FUN_1446f970a(param_2,1);
      }
      pvVar6 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0,uVar4,1);
      if (cVar3 == '\0') {
        FUN_1446f970a(param_2,0);
      }
      iVar5 = FUN_147cdc2ac(param_1 + 0x10);
      memcpy(pvVar6,*(void **)(param_1 + 0x78),(longlong)iVar5);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_1446f970a(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
        FUN_1446f970a(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
      }
    }
    *(undefined1 *)(param_1 + 0x510) = 0;
    cVar3 = FUN_144a7ebcb();
    if ((cVar3 != '\0') && (*(char *)(param_1 + 0x3a8) == '\x01')) {
      FUN_1484bea56(param_1);
      *(undefined1 *)(param_1 + 0x510) = 1;
    }
  }
  return;
}



// FUNCTION 1484b60de FUN_1484b60de body=671 status=ok
// SIG undefined FUN_1484b60de(void)

void FUN_1484b60de(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [47];
  char local_79;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = param_4;
  local_60 = param_3;
  if ((*(char *)(param_1 + 0xa2) == '\x01') && (*(int *)(param_2 + 0x374) != -1)) {
    local_70 = (ulonglong)*(uint *)(param_2 + 0x370);
    plVar9 = (longlong *)(param_2 + 0x398);
    *(undefined4 *)(param_2 + 0x3a0) = 0;
    if (*(int *)(param_2 + 0x3a4) < 0) {
      FUN_14480809c(plVar9,0);
    }
    local_78 = (longlong *)(param_2 + 0x130);
    if ((local_79 == '\0') && (*(undefined4 *)(param_2 + 0x138) = 0, *(int *)(param_2 + 0x13c) < 0))
    {
      FUN_14480809c(local_78,0);
    }
    if (0 < (int)local_70) {
      iVar7 = 0;
      uVar5 = 0;
      local_68 = plVar9;
      do {
        local_4c = *(undefined4 *)(*(longlong *)(param_2 + 0x368) + uVar5 * 4);
        local_58 = local_60;
        pcVar1 = *(code **)(param_1 + 0xb0);
        plVar4 = *(longlong **)(param_1 + 0xc0);
        if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
          plVar4 = (longlong *)(param_1 + 0xd0);
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        cVar2 = (*pcVar1)(uVar3,&local_58,&local_4c);
        if (cVar2 == '\0') {
          if (local_79 == '\0') {
            iVar8 = *(int *)(param_2 + 0x138);
            *(uint *)(param_2 + 0x138) = iVar8 + 1U;
            if (*(uint *)(param_2 + 0x13c) < iVar8 + 1U) {
              FUN_1447808da(local_78,iVar8);
            }
            *(int *)(*(longlong *)(param_2 + 0x130) + (longlong)iVar8 * 4) = iVar7;
            iVar8 = *(int *)(param_2 + 0x138);
            *(uint *)(param_2 + 0x138) = iVar8 + 1U;
            if (*(uint *)(param_2 + 0x13c) < iVar8 + 1U) {
              FUN_1447808da(local_78,iVar8);
            }
            plVar4 = local_78;
            iVar6 = (int)uVar5 * 3;
            *(int *)(*(longlong *)(param_2 + 0x130) + (longlong)iVar8 * 4) = iVar7 + 1;
            iVar8 = *(int *)(param_2 + 0x138);
            *(uint *)(param_2 + 0x138) = iVar8 + 1U;
            if (*(uint *)(param_2 + 0x13c) < iVar8 + 1U) {
              FUN_1447808da(local_78,iVar8);
              plVar9 = local_68;
            }
            goto LAB_1484b627b;
          }
        }
        else {
          iVar8 = *(int *)(param_2 + 0x3a0);
          *(uint *)(param_2 + 0x3a0) = iVar8 + 1U;
          if (*(uint *)(param_2 + 0x3a4) < iVar8 + 1U) {
            FUN_1447808da(plVar9,iVar8);
          }
          *(int *)(*(longlong *)(param_2 + 0x398) + (longlong)iVar8 * 4) = iVar7;
          iVar8 = *(int *)(param_2 + 0x3a0);
          *(uint *)(param_2 + 0x3a0) = iVar8 + 1U;
          if (*(uint *)(param_2 + 0x3a4) < iVar8 + 1U) {
            FUN_1447808da(plVar9,iVar8);
          }
          *(int *)(*(longlong *)(param_2 + 0x398) + (longlong)iVar8 * 4) = iVar7 + 1;
          iVar8 = *(int *)(param_2 + 0x3a0);
          *(uint *)(param_2 + 0x3a0) = iVar8 + 1U;
          plVar4 = plVar9;
          iVar6 = iVar7;
          if (*(uint *)(param_2 + 0x3a4) < iVar8 + 1U) {
            FUN_1447808da(plVar9,iVar8);
          }
LAB_1484b627b:
          *(int *)(*plVar4 + (longlong)iVar8 * 4) = iVar6 + 2;
        }
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + 3;
      } while (local_70 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b637e FUN_1484b637e body=614 status=ok
// SIG undefined FUN_1484b637e(void)

void FUN_1484b637e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_3;
  if (((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x374) != -1)) &&
     (0 < *(int *)(param_2 + 0x370))) {
    plVar1 = (longlong *)(param_2 + 0x130);
    *(undefined4 *)(param_2 + 0x138) = 0;
    if (*(int *)(param_2 + 0x13c) < 0) {
      FUN_14480809c(plVar1,0);
    }
    plVar2 = (longlong *)(param_2 + 0x398);
    *(undefined4 *)(param_2 + 0x3a0) = 0;
    if (*(int *)(param_2 + 0x3a4) < 0) {
      FUN_14480809c(plVar2,0);
    }
    local_68 = (longlong)*(int *)(param_2 + 0x370);
    if (0 < local_68) {
      local_70 = (longlong *)(param_1 + 0xd0);
      iVar9 = 0;
      lVar10 = 0;
      do {
        local_4c = *(undefined4 *)(*(longlong *)(param_2 + 0x368) + lVar10 * 4);
        local_58 = local_60;
        pcVar3 = *(code **)(param_1 + 0xb0);
        plVar6 = *(longlong **)(param_1 + 0xc0);
        if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
          plVar6 = local_70;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar3)(uVar5,&local_58,&local_4c);
        if (cVar4 == '\0') {
          iVar7 = *(int *)(param_2 + 0x138);
          *(uint *)(param_2 + 0x138) = iVar7 + 1U;
          if (*(uint *)(param_2 + 0x13c) < iVar7 + 1U) {
            FUN_1447808da(plVar1,iVar7);
          }
          *(int *)(*(longlong *)(param_2 + 0x130) + (longlong)iVar7 * 4) = iVar9;
          iVar7 = *(int *)(param_2 + 0x138);
          *(uint *)(param_2 + 0x138) = iVar7 + 1U;
          if (*(uint *)(param_2 + 0x13c) < iVar7 + 1U) {
            FUN_1447808da(plVar1,iVar7);
          }
          *(int *)(*(longlong *)(param_2 + 0x130) + (longlong)iVar7 * 4) = iVar9 + 1;
          iVar7 = *(int *)(param_2 + 0x138);
          *(uint *)(param_2 + 0x138) = iVar7 + 1U;
          plVar6 = plVar1;
          iVar8 = iVar9;
          if (*(uint *)(param_2 + 0x13c) < iVar7 + 1U) {
            FUN_1447808da(plVar1,iVar7);
          }
        }
        else {
          iVar7 = *(int *)(param_2 + 0x3a0);
          *(uint *)(param_2 + 0x3a0) = iVar7 + 1U;
          if (*(uint *)(param_2 + 0x3a4) < iVar7 + 1U) {
            FUN_1447808da(plVar2,iVar7);
          }
          *(int *)(*(longlong *)(param_2 + 0x398) + (longlong)iVar7 * 4) = iVar9;
          iVar7 = *(int *)(param_2 + 0x3a0);
          *(uint *)(param_2 + 0x3a0) = iVar7 + 1U;
          if (*(uint *)(param_2 + 0x3a4) < iVar7 + 1U) {
            FUN_1447808da(plVar2,iVar7);
          }
          iVar8 = (int)lVar10 * 3;
          *(int *)(*(longlong *)(param_2 + 0x398) + (longlong)iVar7 * 4) = iVar9 + 1;
          iVar7 = *(int *)(param_2 + 0x3a0);
          *(uint *)(param_2 + 0x3a0) = iVar7 + 1U;
          plVar6 = plVar2;
          if (*(uint *)(param_2 + 0x3a4) < iVar7 + 1U) {
            FUN_1447808da(plVar2,iVar7);
          }
        }
        *(int *)(*plVar6 + (longlong)iVar7 * 4) = iVar8 + 2;
        lVar10 = lVar10 + 1;
        iVar9 = iVar9 + 3;
      } while (local_68 != lVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b65e6 FUN_1484b65e6 body=123 status=ok
// SIG undefined FUN_1484b65e6(void)

void FUN_1484b65e6(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484c01ec(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x48) = param_2;
    FUN_1484c02e0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484b6662 FUN_1484b6662 body=3696 status=ok
// SIG undefined FUN_1484b6662(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484b6662(undefined4 *param_1,longlong param_2,double param_3,int param_4,int *param_5,
                  longlong param_6,longlong param_7,longlong param_8,undefined8 *param_9)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined4 uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  uint uVar32;
  double dVar33;
  ushort uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  float *local_2b0;
  float *local_2a8;
  char local_291;
  uint local_290;
  uint local_28c;
  ulonglong local_288;
  uint local_280;
  undefined4 local_27c;
  uint *local_278;
  ulonglong local_270;
  longlong local_268;
  undefined4 *local_260;
  longlong *local_258;
  double local_250;
  longlong *local_248;
  longlong local_240;
  undefined8 local_238;
  float local_230;
  int local_228 [4];
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  uint local_1e8;
  undefined4 local_1e4;
  uint local_1e0 [2];
  undefined4 local_1d8 [22];
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  *(int *)(param_2 + 8) = param_4;
  if (param_4 != 0) {
    if (param_8 == 0) {
      local_280 = 0;
    }
    else {
      local_280 = (uint)CONCAT71((int7)(local_f0 >> 8),*(char *)(param_1 + 1) == '\0');
    }
    uVar11 = *(uint *)(param_6 + 0x48);
    local_240 = (longlong)(int)uVar11;
    uVar32 = 1;
    if (1 < (int)uVar11) {
      uVar32 = uVar11;
    }
    uVar11 = param_4 * 3;
    local_180 = 0x800000000;
    local_260 = param_1;
    FUN_1484ba92c(local_1e0,uVar32,1);
    FUN_1408e3634(param_2 + 0x98,uVar11,1);
    FUN_1408e36f6(param_2 + 0x10,uVar11,uVar32,1);
    FUN_140964b22(param_2 + 0xd8,uVar11,1);
    iVar10 = *(int *)(param_2 + 0x138);
    *(uint *)(param_2 + 0x138) = iVar10 + uVar11;
    if ((uint)(*(int *)(param_2 + 0x13c) - iVar10) < uVar11) {
      FUN_1447808da(param_2 + 0x130);
    }
    puVar31 = local_260;
    local_291 = *(char *)((longlong)local_260 + 0xa2);
    if (local_291 == '\x01') {
      if (*(longlong *)(param_2 + 0x368) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_2 + 0x368) = 0;
      *(undefined8 *)(param_2 + 0x370) = 0;
    }
    auVar6 = _DAT_1499319a0;
    local_28c = *param_5 * 0x200 + param_5[1];
    if (local_28c == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_5 + 2) - 1U)) {
        uVar20 = 1;
        uVar11 = 1;
        if (1 < (int)local_28c) {
          uVar20 = (ulonglong)local_28c;
        }
        do {
          uVar14 = uVar11;
          if ((uint)uVar20 == uVar14) goto LAB_1484b68e4;
          uVar11 = uVar14 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_5 + 2))[uVar14 >> 9] +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
        uVar20 = (ulonglong)uVar14;
      }
    }
LAB_1484b68e4:
    if ((uint)uVar20 != local_28c) {
      local_248 = (longlong *)(puVar31 + 0xc);
      local_258 = (longlong *)(param_2 + 0x368);
      local_290 = 0;
      local_268 = 0;
      local_250 = param_3;
      do {
        dVar33 = local_250;
        puVar31 = local_260;
        lVar25 = *(longlong *)(*(longlong *)((longlong)param_3 + 0x130) + (uVar20 >> 9) * 8);
        uVar11 = (uint)uVar20;
        local_208 = *(undefined4 *)(lVar25 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
        local_210 = *(undefined8 *)(lVar25 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
        lVar25 = *(longlong *)(param_6 + 0x40);
        if (*(longlong *)(param_6 + 0x40) == 0) {
          lVar25 = param_6;
        }
        uVar14 = uVar11 * 3 + 2;
        local_288 = (ulonglong)(uVar14 >> 9);
        uVar19 = (ulonglong)(uVar14 & 0x1ff);
        uVar14 = uVar11 * 3 + 1;
        local_278 = (uint *)(ulonglong)(uVar14 >> 9);
        uVar24 = (ulonglong)(uVar14 & 0x1ff);
        uVar27 = (ulonglong)(uVar11 * 3 >> 9);
        uVar23 = (ulonglong)(uVar11 * 3 & 0x1ff);
        puVar21 = local_1d8;
        uVar30 = 0;
        do {
          uVar29 = 0xffffffff;
          if ((longlong)uVar30 < local_240) {
            lVar22 = *(longlong *)(lVar25 + uVar30 * 8);
            uVar9 = 0xffffffff;
            uVar17 = 0xffffffff;
            if (lVar22 != 0) {
              lVar22 = *(longlong *)(lVar22 + 0x78);
              uVar17 = *(undefined4 *)(*(longlong *)(lVar22 + local_288 * 8) + uVar19 * 4);
              uVar9 = *(undefined4 *)(*(longlong *)(lVar22 + (longlong)local_278 * 8) + uVar24 * 4);
              uVar29 = *(undefined4 *)(*(longlong *)(lVar22 + uVar27 * 8) + uVar23 * 4);
            }
          }
          else {
            uVar9 = 0xffffffff;
            uVar17 = 0xffffffff;
          }
          puVar21[-2] = uVar29;
          puVar21[-1] = uVar9;
          *puVar21 = uVar17;
          uVar30 = uVar30 + 1;
          puVar21 = puVar21 + 3;
        } while (uVar32 != uVar30);
        local_228[0] = 0;
        local_228[3] = 0;
        local_218 = 0;
        local_214 = 0;
        if (param_7 != 0) {
          lVar25 = *(longlong *)(param_7 + 0x78);
          local_214 = *(undefined4 *)(*(longlong *)(lVar25 + local_288 * 8) + uVar19 * 4);
          local_218 = *(undefined4 *)(*(longlong *)(lVar25 + (longlong)local_278 * 8) + uVar24 * 4);
          local_228[3] = *(undefined4 *)(*(longlong *)(lVar25 + uVar27 * 8) + uVar23 * 4);
        }
        local_228[1] = 0;
        local_228[2] = 0;
        if (param_8 != 0) {
          lVar25 = *(longlong *)(param_8 + 0x78);
          local_228[2] = *(undefined4 *)(*(longlong *)(lVar25 + local_288 * 8) + uVar19 * 4);
          local_228[1] = *(undefined4 *)
                          (*(longlong *)(lVar25 + (longlong)local_278 * 8) + uVar24 * 4);
          local_228[0] = *(int *)(*(longlong *)(lVar25 + uVar27 * 8) + uVar23 * 4);
        }
        local_27c = *local_260;
        local_270 = uVar20;
        if ((*(char *)((longlong)local_260 + 5) == '\x01') &&
           (pcVar4 = *(code **)(local_260 + 4), pcVar4 != (code *)0x0)) {
          local_238 = (double)CONCAT44(local_238._4_4_,uVar11);
          local_178 = local_250;
          plVar15 = *(longlong **)(local_260 + 8);
          if (*(longlong **)(local_260 + 8) == (longlong *)0x0) {
            plVar15 = local_248;
          }
          uVar12 = (**(code **)(*plVar15 + 8))();
          (*pcVar4)(&local_1e4,uVar12,&local_178,&local_238);
          local_27c = local_1e4;
          local_280 = 0;
        }
        local_268 = (longlong)(int)local_268;
        local_278 = local_1e0;
        lVar25 = 0;
        do {
          uVar11 = *(uint *)((longlong)&local_210 + lVar25 * 4);
          lVar22 = *(longlong *)
                    (*(longlong *)((longlong)dVar33 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
          uVar20 = (ulonglong)(uVar11 & 0x1ff);
          dVar1 = *(double *)(lVar22 + 0x10 + uVar20 * 0x18);
          dVar2 = *(double *)(lVar22 + 8 + uVar20 * 0x18);
          lVar5 = *(longlong *)(param_2 + 0xc0);
          uVar19 = (ulonglong)(*(int *)(param_2 + 200) * local_290);
          *(float *)(lVar5 + uVar19) = (float)*(double *)(lVar22 + uVar20 * 0x18);
          *(float *)(lVar5 + 4 + uVar19) = (float)dVar2;
          *(float *)(lVar5 + 8 + uVar19) = (float)dVar1;
          uVar29 = (undefined4)local_270;
          local_288 = lVar25;
          if (*(char *)((longlong)puVar31 + 0xa1) == '\x01') {
            FUN_146c13dec(dVar33,&local_178,local_270 & 0xffffffff);
            local_230 = (float)local_168;
            local_238 = (double)CONCAT44((float)local_170,(float)local_178);
          }
          else {
            if ((param_7 == 0) || (iVar10 = local_228[lVar25 + 3], iVar10 == -1)) {
              local_178 = DAT_14c846370;
              uVar17 = DAT_14c846378;
              if (*(char *)((longlong)dVar33 + 0x70) != '\0') {
                lVar25 = *(longlong *)
                          (*(longlong *)((longlong)dVar33 + 0x60) + (ulonglong)(uVar11 >> 9) * 8);
                local_178 = *(double *)(lVar25 + uVar20 * 0xc);
                uVar17 = *(undefined4 *)(lVar25 + 8 + uVar20 * 0xc);
              }
              local_170 = (double)CONCAT44(local_170._4_4_,uVar17);
            }
            else {
              lVar25 = *(longlong *)(param_7 + 0x48);
              lVar22 = 0;
              do {
                uVar14 = iVar10 * 3 + (int)lVar22;
                *(undefined4 *)((longlong)&local_178 + lVar22 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(lVar25 + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
                lVar22 = lVar22 + 1;
              } while (lVar22 != 3);
            }
            local_230 = local_170._0_4_;
            local_238 = local_178;
          }
          uVar20 = (ulonglong)local_290;
          local_178 = (double)CONCAT44(local_178._4_4_,(int)local_288);
          local_2a8 = &local_200;
          local_2b0 = &local_1f4;
          local_2b8 = &local_238;
          local_1e8 = uVar11;
          local_1e4 = uVar29;
          (*(code *)*param_9)(param_9[1],&local_1e8,&local_1e4,&local_178);
          fVar35 = local_230;
          fVar37 = (float)local_238;
          fVar36 = local_238._4_4_;
          lVar25 = *(longlong *)(param_2 + 0x70);
          if (*(char *)(param_2 + 0x91) == '\x01') {
            lVar22 = uVar20 * 0x10;
            iVar10 = (int)ROUND(local_1f4 * 32767.0 + local_1f4 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            uVar8 = (undefined2)iVar10;
            if (iVar10 < -0x7fff) {
              uVar8 = 0x8000;
            }
            iVar10 = (int)ROUND(local_1f0 * 32767.0 + local_1f0 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            uVar13 = (undefined2)iVar10;
            if (iVar10 < -0x7fff) {
              uVar13 = 0x8000;
            }
            *(undefined2 *)(lVar25 + lVar22) = uVar8;
            *(undefined2 *)(lVar25 + 2 + lVar22) = uVar13;
            iVar10 = (int)ROUND(local_1ec * 32767.0 + local_1ec * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            uVar8 = (undefined2)iVar10;
            if (iVar10 < -0x7fff) {
              uVar8 = 0x8000;
            }
            *(undefined2 *)(lVar25 + 4 + lVar22) = uVar8;
            *(undefined2 *)(lVar25 + 6 + lVar22) = 0x7fff;
            local_128 = (double)local_230;
            local_130 = (double)local_238._4_4_;
            local_138 = (double)(float)local_238;
            local_148 = (double)local_1f8;
            local_150 = (double)local_1fc;
            local_158 = (double)local_200;
            local_168 = (double)local_1ec;
            local_170 = (double)local_1f0;
            local_178 = (double)local_1f4;
            local_160 = 0;
            local_140 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_100 = 0x3ff0000000000000;
            dVar33 = (double)FUN_144a91046(&local_178);
            fVar37 = fVar37 * 32767.0;
            iVar10 = (int)ROUND(fVar37 + fVar37 + 0.5) >> 1;
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            uVar8 = (undefined2)iVar10;
            if (iVar10 < -0x7fff) {
              uVar8 = 0x8000;
            }
            *(undefined2 *)(lVar25 + 8 + lVar22) = uVar8;
            fVar36 = fVar36 * 32767.0;
            iVar10 = (int)ROUND(fVar36 + fVar36 + 0.5) >> 1;
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            if (iVar10 < -0x7fff) {
              iVar10 = -0x8000;
            }
            fVar35 = fVar35 * 32767.0;
            iVar18 = (int)ROUND(fVar35 + fVar35 + 0.5) >> 1;
            if (0x7ffe < iVar18) {
              iVar18 = 0x7fff;
            }
            *(short *)(lVar25 + 10 + lVar22) = (short)iVar10;
            if (iVar18 < -0x7fff) {
              iVar18 = -0x8000;
            }
            *(short *)(lVar25 + 0xc + lVar22) = (short)iVar18;
            iVar10 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar33 < 0.0) * 4)) >> 1;
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            uVar8 = (undefined2)iVar10;
            if (iVar10 < -0x7fff) {
              uVar8 = 0x8000;
            }
            *(undefined2 *)(lVar25 + 0xe + lVar22) = uVar8;
          }
          else {
            iVar10 = (int)ROUND(local_1f4 * 127.0 + local_1f4 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar10) {
              iVar10 = 0x7f;
            }
            uVar7 = (undefined1)iVar10;
            if (iVar10 < -0x7f) {
              uVar7 = 0x80;
            }
            iVar10 = (int)ROUND(local_1f0 * 127.0 + local_1f0 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar10) {
              iVar10 = 0x7f;
            }
            if (iVar10 < -0x7f) {
              iVar10 = -0x80;
            }
            *(undefined1 *)(lVar25 + uVar20 * 8) = uVar7;
            *(char *)(lVar25 + 1 + uVar20 * 8) = (char)iVar10;
            iVar10 = (int)ROUND(local_1ec * 127.0 + local_1ec * 127.0 + 0.5) >> 1;
            if (0x7e < iVar10) {
              iVar10 = 0x7f;
            }
            uVar7 = (undefined1)iVar10;
            if (iVar10 < -0x7f) {
              uVar7 = 0x80;
            }
            *(undefined1 *)(lVar25 + 2 + uVar20 * 8) = uVar7;
            *(undefined1 *)(lVar25 + 3 + uVar20 * 8) = 0x7f;
            local_128 = (double)local_230;
            local_130 = (double)local_238._4_4_;
            local_138 = (double)(float)local_238;
            local_148 = (double)local_1f8;
            local_150 = (double)local_1fc;
            local_158 = (double)local_200;
            local_168 = (double)local_1ec;
            local_170 = (double)local_1f0;
            local_178 = (double)local_1f4;
            local_160 = 0;
            local_140 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_100 = 0x3ff0000000000000;
            dVar33 = (double)FUN_144a91046(&local_178);
            fVar37 = fVar37 * 127.0;
            iVar10 = (int)ROUND(fVar37 + fVar37 + 0.5) >> 1;
            if (0x7e < iVar10) {
              iVar10 = 0x7f;
            }
            uVar7 = (undefined1)iVar10;
            if (iVar10 < -0x7f) {
              uVar7 = 0x80;
            }
            *(undefined1 *)(lVar25 + 4 + uVar20 * 8) = uVar7;
            fVar36 = fVar36 * 127.0;
            iVar10 = (int)ROUND(fVar36 + fVar36 + 0.5) >> 1;
            if (0x7e < iVar10) {
              iVar10 = 0x7f;
            }
            if (iVar10 < -0x7f) {
              iVar10 = -0x80;
            }
            fVar35 = fVar35 * 127.0;
            iVar18 = (int)ROUND(fVar35 + fVar35 + 0.5) >> 1;
            if (0x7e < iVar18) {
              iVar18 = 0x7f;
            }
            *(char *)(lVar25 + 5 + uVar20 * 8) = (char)iVar10;
            if (iVar18 < -0x7f) {
              iVar18 = -0x80;
            }
            *(char *)(lVar25 + 6 + uVar20 * 8) = (char)iVar18;
            iVar10 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar33 < 0.0) * 4)) >> 1;
            if (0x7e < iVar10) {
              iVar10 = 0x7f;
            }
            uVar7 = (undefined1)iVar10;
            if (iVar10 < -0x7f) {
              uVar7 = 0x80;
            }
            *(undefined1 *)(lVar25 + 7 + uVar20 * 8) = uVar7;
          }
          puVar31 = local_260;
          uVar11 = local_290;
          uVar19 = 0;
          puVar16 = local_278;
          do {
            uVar14 = *puVar16;
            puVar26 = (uint *)&DAT_14c84635c;
            puVar28 = &DAT_14c84635c;
            if (uVar14 != 0xffffffff) {
              lVar25 = *(longlong *)(param_6 + 0x40);
              if (*(longlong *)(param_6 + 0x40) == 0) {
                lVar25 = param_6;
              }
              lVar25 = *(longlong *)
                        (*(longlong *)(*(longlong *)(lVar25 + uVar19 * 8) + 0x48) +
                        (ulonglong)(uVar14 >> 5 & 0x3fffff8));
              uVar23 = (ulonglong)((uVar14 & 0xff) << 3);
              puVar26 = (uint *)(lVar25 + uVar23);
              puVar28 = (undefined8 *)(lVar25 + uVar23);
            }
            uVar14 = *(uint *)((longlong)puVar28 + 4);
            uVar3 = *puVar26;
            if (*(char *)(param_2 + 0x90) == '\x01') {
              lVar25 = *(longlong *)(param_2 + 0x78) +
                       (ulonglong)*(uint *)(param_2 + 0x88) * uVar20 * 8;
              *(uint *)(lVar25 + uVar19 * 8) = uVar3;
              *(uint *)(lVar25 + 4 + uVar19 * 8) = uVar14;
            }
            else {
              fVar37 = (float)(uVar3 & auVar6._0_4_);
              if ((uint)fVar37 < 0x47800000) {
                if ((uint)fVar37 < 0x38800000) {
                  uVar34 = SUB42(fVar37 + 0.5,0);
                }
                else {
                  uVar34 = (ushort)((int)fVar37 + 0x8000fff + (uint)(((uint)fVar37 >> 0xd & 1) != 0)
                                   >> 0xd);
                }
              }
              else {
                uVar34 = (0x7f800000 < (uint)fVar37 | 0x3e) << 9;
              }
              lVar22 = (ulonglong)*(uint *)(param_2 + 0x88) * uVar20 * 4;
              lVar25 = *(longlong *)(param_2 + 0x78) + lVar22;
              iVar10 = movmskps((int)lVar22,ZEXT416(uVar3));
              *(ushort *)(lVar25 + uVar19 * 4) = (ushort)(iVar10 << 0xf) | uVar34;
              fVar37 = (float)(uVar14 & auVar6._0_4_);
              if ((uint)fVar37 < 0x47800000) {
                if ((uint)fVar37 < 0x38800000) {
                  fVar36 = fVar37 + 0.5;
                }
                else {
                  fVar37 = (float)((int)fVar37 + 0x8000fff + (uint)(((uint)fVar37 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar36 = fVar37;
                }
              }
              else {
                fVar36 = (float)((0x7f800000 < (uint)fVar37 | 0x3e) << 9);
              }
              iVar10 = movmskps(fVar37,ZEXT416(uVar14));
              *(ushort *)(lVar25 + 2 + uVar19 * 4) = (ushort)(iVar10 << 0xf) | SUB42(fVar36,0);
            }
            uVar19 = uVar19 + 1;
            puVar16 = puVar16 + 3;
          } while (uVar32 != uVar19);
          uVar29 = local_27c;
          if (((local_280 & 1) != 0) && (local_228[local_288] != -1)) {
            FUN_1484ba2c4(local_260,&local_178,param_8);
            uVar29 = local_178._0_4_;
          }
          param_3 = local_250;
          uVar20 = local_270;
          *(undefined4 *)
           (*(longlong *)(param_2 + 0x100) + (ulonglong)(*(int *)(param_2 + 0x108) * uVar11)) =
               uVar29;
          *(uint *)(*(longlong *)(param_2 + 0x130) + local_268 * 4) = uVar11;
          local_268 = local_268 + 1;
          local_290 = uVar11 + 1;
          lVar25 = local_288 + 1;
          local_278 = local_278 + 1;
          dVar33 = local_250;
        } while (lVar25 != 3);
        iVar10 = (int)local_270;
        if (local_291 != '\0') {
          iVar18 = *(int *)(param_2 + 0x370);
          *(uint *)(param_2 + 0x370) = iVar18 + 1U;
          if (*(uint *)(param_2 + 0x374) < iVar18 + 1U) {
            FUN_1446f48e2(local_258,iVar18);
          }
          *(int *)(*local_258 + (longlong)iVar18 * 4) = iVar10;
        }
        uVar11 = iVar10 + 1;
        if ((int)uVar11 < (int)local_28c) {
          uVar11 = local_28c;
        }
        do {
          if (uVar11 - 1 == (int)uVar20) {
            uVar20 = (ulonglong)uVar11;
            break;
          }
          uVar14 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar14;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_5 + 2) +
                                               (ulonglong)(uVar14 >> 9) * 8) +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar20 != local_28c);
    }
    if (*(char *)((longlong)puVar31 + 0xa2) != '\0') {
      *(undefined1 *)(param_2 + 0x378) = 1;
      FUN_1484b60de(puVar31,param_2,param_3,0);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b74d4 FUN_1484b74d4 body=157 status=ok
// SIG undefined FUN_1484b74d4(void)

void FUN_1484b74d4(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a1a59e(param_1 + 0x10,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  local_28 = &local_38;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_143b7691e;
  local_50 = 0;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 8),1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b7572 FUN_1484b7572 body=671 status=ok
// SIG undefined FUN_1484b7572(void)

void FUN_1484b7572(longlong param_1,undefined8 **param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 1;
  lVar9 = 0;
  FUN_144769b64(&local_58,0);
  *local_58 = 0;
  ppuVar13 = param_2;
  if (param_2 == (undefined8 **)0x0) {
    ppuVar13 = &local_58;
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x48);
  }
  ppuVar12 = &local_58;
  if (param_2 != (undefined8 **)0x0) {
    ppuVar12 = param_2;
  }
  iVar2 = *(int *)(ppuVar12 + 1);
  FUN_1484b7812(param_3,iVar2);
  if (0 < (longlong)iVar2) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*(longlong *)(*param_3 + lVar3 * 8) + 0x10) = (*ppuVar13)[lVar3];
      lVar3 = lVar3 + 1;
    } while (iVar2 != lVar3);
  }
  local_68 = 0;
  uStack_60 = 0;
  uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar10 = 0;
  if ((uVar6 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar11 = 1;
    uVar4 = 1;
    if (1 < (int)uVar6) {
      uVar11 = uVar6;
    }
    do {
      uVar10 = uVar11;
      if (uVar11 == uVar4) break;
      uVar5 = uVar4 >> 9;
      uVar7 = uVar4 & 0x1ff;
      uVar10 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar5] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  if (uVar10 != uVar6) {
    do {
      if (lVar9 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) +
                        (ulonglong)(uVar10 & 0x1ff) * 4);
      }
      if (iVar1 < iVar2) {
        plVar8 = *(longlong **)(*param_3 + (longlong)iVar1 * 8);
        iVar1 = (int)plVar8[1];
        *(uint *)(plVar8 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar8 + 0xc) < iVar1 + 1U) {
LAB_1484b76f2:
          FUN_1446f48e2(plVar8,iVar1);
        }
      }
      else {
        iVar1 = (int)uStack_60;
        uVar11 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar11);
        if (uStack_60._4_4_ < uVar11) {
          plVar8 = &local_68;
          goto LAB_1484b76f2;
        }
        plVar8 = &local_68;
      }
      *(uint *)(*plVar8 + (longlong)iVar1 * 4) = uVar10;
      uVar11 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar6) {
        uVar11 = uVar6;
      }
      do {
        uVar4 = uVar11;
        if (uVar11 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar4 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar4;
    } while (uVar10 != uVar6);
    if (0 < (int)uStack_60) {
      iVar2 = FUN_1484b788c(param_3);
      plVar8 = *(longlong **)(*param_3 + (longlong)iVar2 * 8);
      if (plVar8 != &local_68) {
        if (*plVar8 != 0) {
          FUN_1400020a8();
        }
        *plVar8 = local_68;
        local_68 = 0;
        *(int *)(plVar8 + 1) = (int)uStack_60;
        *(uint *)((longlong)plVar8 + 0xc) = uStack_60._4_4_;
        uStack_60 = 0;
      }
      plVar8[2] = 0;
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b7812 FUN_1484b7812 body=122 status=ok
// SIG undefined FUN_1484b7812(void)

void FUN_1484b7812(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  FUN_1484becea();
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      plVar1 = *(longlong **)(*param_1 + uVar3 * 8);
      *(undefined8 **)(*param_1 + uVar3 * 8) = puVar2;
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      uVar3 = uVar3 + 1;
    } while (param_2 != uVar3);
  }
  return;
}



// FUNCTION 1484b788c FUN_1484b788c body=96 status=ok
// SIG undefined FUN_1484b788c(void)

int FUN_1484b788c(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  FUN_1484becea(param_1,iVar1 + 1);
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  plVar2 = *(longlong **)(*param_1 + (longlong)iVar1 * 8);
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar3;
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  return iVar1;
}



// FUNCTION 1484b78ec FUN_1484b78ec body=322 status=ok
// SIG undefined FUN_1484b78ec(void)

void FUN_1484b78ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 **local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  LPCRITICAL_SECTION local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  code *local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined4 local_70;
  _RTL_CRITICAL_SECTION local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = param_1;
  local_8c = param_4;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  local_a0 = puVar2;
  FUN_1484b7572(param_1,param_2,puVar2);
  uVar1 = *(undefined4 *)(puVar2 + 1);
  InitializeCriticalSection(&local_68);
  SetCriticalSectionSpinCount(&local_68,4000);
  local_80 = &local_c8;
  local_d8 = &local_78;
  local_78 = 0;
  local_70 = 0;
  local_88 = FUN_143b7695a;
  local_e0 = 0;
  local_c8 = &local_a0;
  local_c0 = &local_98;
  local_b8 = param_3;
  local_b0 = &local_8c;
  local_a8 = &local_68;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  DeleteCriticalSection(&local_68);
  puVar2 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    FUN_1484c0380(local_a0);
    FUN_1400020a8(puVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b7a30 FUN_1484b7a30 body=38 status=ok
// SIG undefined FUN_1484b7a30(void)

void FUN_1484b7a30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484b7a56();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484b7a56 FUN_1484b7a56 body=56 status=ok
// SIG undefined FUN_1484b7a56(void)

void FUN_1484b7a56(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x398) == '\x01') {
    lVar1 = FUN_1484b7ae4(param_1);
    if (lVar1 != 0) {
      FUN_143b6f78e(lVar1);
      return;
    }
  }
  FUN_1484b7d1a(param_1);
  return;
}



// FUNCTION 1484b7a8e FUN_1484b7a8e body=47 status=ok
// SIG undefined FUN_1484b7a8e(void)

void FUN_1484b7a8e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1484b7ae4();
  if (lVar1 == 0) {
    return;
  }
  FUN_1484b8070(lVar1);
  return;
}



// FUNCTION 1484b7abe FUN_1484b7abe body=38 status=ok
// SIG undefined FUN_1484b7abe(void)

void FUN_1484b7abe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1484b7ae4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484b7ae4 FUN_1484b7ae4 body=92 status=ok
// SIG undefined FUN_1484b7ae4(void)

longlong FUN_1484b7ae4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  if (lVar1 == 0) {
    if (*(char *)(param_1 + 0x398) == '\x01') {
      lVar1 = FUN_1484b7c6a(DAT_14c951640);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x3a0) = lVar1;
    }
    else {
      lVar1 = 0;
    }
  }
  return lVar1;
}



// FUNCTION 1484b7b5c FUN_1484b7b5c body=47 status=ok
// SIG undefined FUN_1484b7b5c(void)

void FUN_1484b7b5c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1484b7ae4();
  if (lVar1 == 0) {
    return;
  }
  FUN_1484b7ef6(lVar1);
  return;
}



// FUNCTION 1484b7b92 FUN_1484b7b92 body=203 status=ok
// SIG undefined FUN_1484b7b92(void)

void FUN_1484b7b92(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  if ((local_28 != 0) && (*(char *)(param_1 + 0x398) != '\0')) {
    lVar3 = FUN_1484b7ae4(param_1);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1484b7dca(lVar3,lVar1);
      uVar2 = 1;
    }
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b7c6a FUN_1484b7c6a body=175 status=ok
// SIG undefined FUN_1484b7c6a(void)

undefined8 FUN_1484b7c6a(undefined8 param_1)

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
  local_b8 = FUN_141225b54();
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



// FUNCTION 1484b7d1a FUN_1484b7d1a body=175 status=ok
// SIG undefined FUN_1484b7d1a(void)

undefined8 FUN_1484b7d1a(undefined8 param_1)

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
  local_b8 = FUN_140a1ade6();
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



// FUNCTION 1484b7dca FUN_1484b7dca body=298 status=ok
// SIG undefined FUN_1484b7dca(void)

void FUN_1484b7dca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x40) != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar1) == param_2) {
        local_46 = 0;
        local_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_50 = &local_60;
        local_58 = &LAB_143b771e8;
        local_60 = param_2;
        FUN_1484b8434(param_2,&local_58,&local_48,0);
        iVar2 = *(int *)(param_1 + 0x30);
        if ((longlong)iVar2 == 0) goto LAB_1484b7ea0;
        lVar1 = 0;
        goto LAB_1484b7e8d;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar1);
  }
  goto LAB_1484b7e0f;
  while (lVar1 = lVar1 + 8, (longlong)iVar2 * 8 - lVar1 != 0) {
LAB_1484b7e8d:
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar1) == param_2) goto LAB_1484b7e0f;
  }
LAB_1484b7ea0:
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
    iVar2 = *(int *)(param_1 + 0x30);
  }
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_1484c1958((longlong *)(param_1 + 0x28),iVar2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8) = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
LAB_1484b7e0f:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b7ef6 FUN_1484b7ef6 body=376 status=ok
// SIG undefined FUN_1484b7ef6(void)

void FUN_1484b7ef6(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 *local_90;
  longlong *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1484b8cd0((longlong *)(param_1 + 0x28),param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar5 + lVar7);
      if (lVar4 != 0) {
        local_7e = 0;
        local_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_88 = &local_98;
        local_90 = &LAB_143b771e8;
        local_98 = lVar4;
        FUN_1484b8434(lVar4,&local_90,&local_80,0);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
    iVar1 = *(int *)(param_1 + 0x30);
    lVar5 = (longlong)iVar1;
    if (lVar5 != 0) {
      plVar2 = *(longlong **)(param_1 + 0x28);
      iVar6 = 0;
      bVar8 = *plVar2 == 0;
      iVar9 = 0;
      do {
        lVar4 = (longlong)iVar9;
        iVar10 = iVar9;
        lVar7 = lVar4;
        iVar3 = iVar9 + 1;
        if (iVar9 + 1 < iVar1) {
          iVar3 = iVar1;
        }
        do {
          lVar7 = lVar7 + 1;
          iVar11 = iVar3;
          if (lVar5 <= lVar7) break;
          iVar11 = iVar10 + 1;
          iVar10 = iVar11;
        } while (bVar8 == (plVar2[lVar7] == 0));
        if (bVar8 == false) {
          if (iVar6 != iVar9) {
            memmove(plVar2 + iVar6,plVar2 + lVar4,(longlong)(iVar11 - iVar9) << 3);
          }
          iVar6 = iVar6 + (iVar11 - iVar9);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar9 = iVar11;
      } while (lVar7 < lVar5);
      *(int *)(param_1 + 0x30) = iVar6;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b8070 FUN_1484b8070 body=82 status=ok
// SIG undefined FUN_1484b8070(void)

void FUN_1484b8070(longlong param_1)

{
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_1484c1928(param_1 + 0x28);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_1484c1928(param_1 + 0x38);
  return;
}



// FUNCTION 1484b8116 FUN_1484b8116 body=142 status=ok
// SIG undefined FUN_1484b8116(void)

void FUN_1484b8116(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_36 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_40 = &local_50;
  local_48 = &LAB_143b771e8;
  local_50 = param_1;
  FUN_1484b8434();
  *param_3 = param_1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b81a6 FUN_1484b81a6 body=121 status=ok
// SIG undefined FUN_1484b81a6(void)

undefined8 FUN_1484b81a6(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2e = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = &local_48;
  local_40 = &LAB_143b771e8;
  local_48 = param_1;
  FUN_1484b8434();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b8220 FUN_1484b8220 body=142 status=ok
// SIG undefined FUN_1484b8220(void)

void FUN_1484b8220(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_36 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_40 = &local_50;
  local_48 = FUN_143b771f6;
  local_50 = param_1;
  FUN_1484b8434();
  *param_3 = param_1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b82b0 FUN_1484b82b0 body=121 status=ok
// SIG undefined FUN_1484b82b0(void)

undefined8 FUN_1484b82b0(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2e = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = &local_48;
  local_40 = FUN_143b771f6;
  local_48 = param_1;
  FUN_1484b8434();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b8358 FUN_1484b8358 body=38 status=ok
// SIG undefined FUN_1484b8358(void)

void FUN_1484b8358(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143b6f78e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484b8394 FUN_1484b8394 body=156 status=ok
// SIG undefined FUN_1484b8394(void)

void FUN_1484b8394(undefined8 param_1,longlong param_2)

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
  FUN_1484b7dca(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b8434 FUN_1484b8434 body=271 status=ok
// SIG undefined FUN_1484b8434(void)

void FUN_1484b8434(longlong param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 == '\0') {
    local_48 = *param_3;
    uStack_40 = (undefined4)param_3[1];
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_38 = (undefined4)param_3[2];
    uStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_30 = (undefined4)param_3[3];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0x1c);
    FUN_1484c183c(param_1 + 0x40,param_1);
  }
  (*(code *)*param_2)(param_2[1],*(undefined8 *)(param_1 + 0x98));
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (*(char *)(lVar1 + 0x1a8) == '\0') {
    FUN_14582eef4(lVar1,0);
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  lVar1 = *(longlong *)(lVar1 + 0x208);
  if (lVar1 == 0) {
    FUN_14582ed12();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x208);
  }
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    FUN_14582ed9a(lVar1);
  }
  if (param_4 == '\0') {
    local_48 = *param_3;
    uStack_40 = (undefined4)param_3[1];
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_38 = (undefined4)param_3[2];
    uStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_30 = (undefined4)param_3[3];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0x1c);
    FUN_1484c183c(param_1 + 0x58,param_1,&local_48);
    local_48 = param_1;
    FUN_1447cd2ec(param_1 + 0x70,&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b8544 FUN_1484b8544 body=113 status=ok
// SIG undefined FUN_1484b8544(void)

void FUN_1484b8544(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_26 = 0;
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  local_30 = &local_40;
  local_38 = FUN_143b7733c;
  local_40 = param_2;
  FUN_1484b8434();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b85b6 FUN_1484b85b6 body=43 status=ok
// SIG undefined FUN_1484b85b6(void)

undefined8 * FUN_1484b85b6(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_14582ec3a();
  return param_2;
}



// FUNCTION 1484b85e2 FUN_1484b85e2 body=55 status=ok
// SIG undefined FUN_1484b85e2(void)

void FUN_1484b85e2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0xa0) = lVar1;
  return;
}



// FUNCTION 1484b8626 FUN_1484b8626 body=134 status=ok
// SIG undefined FUN_1484b8626(void)

void FUN_1484b8626(longlong param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 *local_38;
  longlong *local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (*(char *)(param_1 + 0xa8) == '\x01')) {
    local_26 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_10 = 0;
    local_30 = &local_40;
    local_38 = &LAB_143b771e8;
    local_40 = param_1;
    FUN_1484b8434();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b86ae FUN_1484b86ae body=133 status=ok
// SIG undefined FUN_1484b86ae(void)

void FUN_1484b86ae(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 *local_50;
  code *local_48;
  undefined8 **local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_9;
  local_58 = &local_18;
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 3;
  local_40 = &local_58;
  local_48 = FUN_143b77372;
  local_36 = param_3;
  local_20 = param_2;
  local_18 = param_2;
  local_9 = param_3;
  FUN_1484b8434(param_1 + -0x28,&local_48,&local_38,0);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b8734 FUN_1484b8734 body=133 status=ok
// SIG undefined FUN_1484b8734(void)

void FUN_1484b8734(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 **local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_9;
  local_58 = &local_18;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 1;
  local_40 = &local_58;
  local_48 = &LAB_143b776f2;
  local_36 = param_3;
  local_30 = param_2;
  local_18 = param_2;
  local_9 = param_3;
  FUN_1484b8434(param_1 + -0x30,&local_48,&local_38,0);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b87ba FUN_1484b87ba body=141 status=ok
// SIG undefined FUN_1484b87ba(void)

void FUN_1484b87ba(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 *local_50;
  code *local_48;
  undefined8 **local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_9;
  local_58 = &local_18;
  local_30 = 0;
  local_20 = 0;
  local_38 = 2;
  local_40 = &local_58;
  local_48 = FUN_143b7770a;
  local_36 = param_3;
  uStack_28 = param_2;
  local_18 = param_2;
  local_9 = param_3;
  FUN_1484b8434(param_1 + -0x38,&local_48,&local_38,0);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b8848 FUN_1484b8848 body=513 status=ok
// SIG undefined FUN_1484b8848(void)

void FUN_1484b8848(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_128 [40];
  undefined2 *local_100;
  int local_f8;
  undefined **local_f0 [18];
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(int *)(*(longlong *)(param_1 + 0x98) + 0x170) != 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x98) + 0x50) != 0)) {
    FUN_140047918(param_2,L"%sCustomProperties ",
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)param_3));
    FUN_1468161aa(param_2,L"MeshData ");
    uVar1 = FUN_1484b8a4a(param_1);
    FUN_140047918(param_2,L"MESHKEY=%d ",uVar1);
    if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x170) < *DAT_14cb4c2a8) {
      local_48[0] = 0;
      local_48[1] = 0;
      memset(local_f0,0,0x90);
      FUN_144869430(local_f0);
      local_60 = 0;
      local_f0[0] = &PTR_FUN_149e1e590;
      local_50 = 0;
      local_58 = local_48;
      FUN_144a69558(local_f0,1);
      (*(code *)local_f0[0][0x1e])(local_f0,0);
      local_f0[0] = &PTR_FUN_149e1e330;
      FUN_142972772(*(undefined8 *)(param_1 + 0x98),local_f0);
      FUN_146802950(&local_100,local_48,0);
      iVar3 = local_f8 + -1;
      if (local_f8 == 0) {
        iVar3 = 0;
      }
      if (0 < iVar3) {
        lVar2 = 0;
        do {
          if (local_100[lVar2] == 0x2f) {
            local_100[lVar2] = 0x2d;
          }
          lVar2 = lVar2 + 1;
          iVar3 = local_f8 + -1;
          if (local_f8 == 0) {
            iVar3 = 0;
          }
        } while (lVar2 < iVar3);
      }
      puVar4 = local_100;
      if (local_f8 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140047918(param_2,L"MESHDATALEN=%d MESHDATA=%s",iVar3,puVar4);
      if (local_100 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_144a7fc42(local_f0);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1468161aa(param_2,&DAT_149e02010);
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484b8a4a FUN_1484b8a4a body=400 status=ok
// SIG undefined FUN_1484b8a4a(void)

int FUN_1484b8a4a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_5c;
  int *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1484bf03e();
  DAT_14cb4c31c = DAT_14cb4c31c * 0xbb38435 + 0x3619636b;
  local_5c = -DAT_14cb4c31c;
  if (-DAT_14cb4c31c < 0) {
    local_5c = DAT_14cb4c31c;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = (undefined2 *)0x0;
  local_98 = 0;
  puStack_90 = (undefined4 *)0x0;
  FUN_1402160b8();
  if (param_1 == 0) {
    local_98 = 0;
    puStack_90 = (int *)0x0;
    local_88 = 0;
    bVar5 = (longlong)local_78 < 0;
    local_78 = local_78 & 0xffffffff00000000;
    if (bVar5) {
      FUN_1446f8c06(&uStack_80,0);
    }
    if (uStack_80 != (undefined2 *)0x0) {
      *uStack_80 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_58,param_1);
    puStack_90 = local_58;
    local_88 = puStack_50;
    if (uStack_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uStack_80 = (undefined2 *)CONCAT44(uStack_44,local_48);
    local_78 = CONCAT44(uStack_3c,uStack_40);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(param_1 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        local_98 = 0;
        goto LAB_1484b8b6a;
      }
    }
    FUN_14485c47a(&local_98,param_1);
  }
LAB_1484b8b6a:
  local_58 = &local_5c;
  puStack_50 = &local_98;
  FUN_1484bf300(local_34);
  FUN_1484bf0f6();
  iVar2 = local_5c;
  if (uStack_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b8bdc FUN_1484b8bdc body=244 status=ok
// SIG undefined FUN_1484b8bdc(void)

undefined8 * FUN_1484b8bdc(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  
  *param_1 = 0;
  if (DAT_14cb4c2d0 != DAT_14cb4c2fc) {
    puVar4 = &DAT_14cb4c300;
    if (DAT_14cb4c308 != (undefined *)0x0) {
      puVar4 = DAT_14cb4c308;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(DAT_14cb4c310 - 1U & param_2) * 4);
    while (iVar1 != -1) {
      lVar2 = DAT_14cb4c2c8 + (longlong)iVar1 * 0x40;
      if (*(uint *)(DAT_14cb4c2c8 + (longlong)iVar1 * 0x40) == param_2) {
        lVar5 = lVar2 + 8;
        if ((lVar5 != 0 && lVar2 != 0) && (lVar2 = FUN_1484bf96e(lVar5), lVar2 != 0)) {
          uVar3 = FUN_14001cc68(0x220,0x10);
          FUN_1411b354a(uVar3,0,0,0,0);
          *param_1 = uVar3;
          lVar2 = FUN_1484bf96e(lVar5);
          if (lVar2 != 0) {
            FUN_146c005f0(uVar3,*(undefined8 *)(lVar2 + 0x98),1,1,1,1);
          }
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x38);
    }
  }
  FUN_1484bf0f6();
  return param_1;
}



// FUNCTION 1484b8cd0 FUN_1484b8cd0 body=79 status=ok
// SIG undefined FUN_1484b8cd0(void)

undefined8 * FUN_1484b8cd0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1484c19de(param_1,iVar1);
      FUN_1484c1a40(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1484b8d20 FUN_1484b8d20 body=38 status=ok
// SIG undefined FUN_1484b8d20(void)

undefined8 FUN_1484b8d20(undefined8 param_1,int param_2)

{
  FUN_1484acdb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8d46 FUN_1484b8d46 body=38 status=ok
// SIG undefined FUN_1484b8d46(void)

undefined8 FUN_1484b8d46(undefined8 param_1,int param_2)

{
  FUN_1484c1a92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8e02 FUN_1484b8e02 body=45 status=ok
// SIG undefined FUN_1484b8e02(void)

longlong FUN_1484b8e02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bfa934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8e36 FUN_1484b8e36 body=48 status=ok
// SIG undefined FUN_1484b8e36(void)

longlong FUN_1484b8e36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145bfa934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8e6e FUN_1484b8e6e body=48 status=ok
// SIG undefined FUN_1484b8e6e(void)

longlong FUN_1484b8e6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145bfa934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8ea6 FUN_1484b8ea6 body=48 status=ok
// SIG undefined FUN_1484b8ea6(void)

longlong FUN_1484b8ea6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145bfa934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8ede FUN_1484b8ede body=48 status=ok
// SIG undefined FUN_1484b8ede(void)

longlong FUN_1484b8ede(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x658;
  FUN_145bfa934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8f18 FUN_1484b8f18 body=48 status=ok
// SIG undefined FUN_1484b8f18(void)

longlong FUN_1484b8f18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x660;
  FUN_145bfa934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8f52 FUN_1484b8f52 body=48 status=ok
// SIG undefined FUN_1484b8f52(void)

longlong FUN_1484b8f52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x668;
  FUN_145bfa934(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8fba FUN_1484b8fba body=45 status=ok
// SIG undefined FUN_1484b8fba(void)

longlong FUN_1484b8fba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b8fee FUN_1484b8fee body=48 status=ok
// SIG undefined FUN_1484b8fee(void)

longlong FUN_1484b8fee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b9026 FUN_1484b9026 body=48 status=ok
// SIG undefined FUN_1484b9026(void)

longlong FUN_1484b9026(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b905e FUN_1484b905e body=48 status=ok
// SIG undefined FUN_1484b905e(void)

longlong FUN_1484b905e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b9096 FUN_1484b9096 body=48 status=ok
// SIG undefined FUN_1484b9096(void)

longlong FUN_1484b9096(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x658;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b90ce FUN_1484b90ce body=48 status=ok
// SIG undefined FUN_1484b90ce(void)

longlong FUN_1484b90ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x660;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b9106 FUN_1484b9106 body=48 status=ok
// SIG undefined FUN_1484b9106(void)

longlong FUN_1484b9106(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x668;
  FUN_145bfa654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b9140 FUN_1484b9140 body=45 status=ok
// SIG undefined FUN_1484b9140(void)

longlong FUN_1484b9140(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a60764(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b9174 FUN_1484b9174 body=45 status=ok
// SIG undefined FUN_1484b9174(void)

longlong FUN_1484b9174(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a60764(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b91a8 FUN_1484b91a8 body=45 status=ok
// SIG undefined FUN_1484b91a8(void)

longlong FUN_1484b91a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145a60764(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b91dc FUN_1484b91dc body=38 status=ok
// SIG undefined FUN_1484b91dc(void)

undefined8 FUN_1484b91dc(undefined8 param_1,int param_2)

{
  FUN_1484b9202();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b9202 FUN_1484b9202 body=377 status=ok
// SIG undefined FUN_1484b9202(void)

void FUN_1484b9202(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aeef618;
  if (0 < *(int *)(param_1 + 1)) {
    FUN_144725486(param_1 + 0x13);
    FUN_1412db970(param_1 + 2);
    FUN_144725486(param_1 + 0x1b);
    FUN_144725486(param_1 + 0x28);
    if (*(int *)(param_1 + 0x24) != -1) {
      FUN_144725486(param_1 + 0x23);
    }
    if (*(int *)(param_1 + 0x71) != -1) {
      FUN_144725486(param_1 + 0x70);
    }
    if (*(char *)(param_1 + 0x75) == '\x01') {
      FUN_14052082e(param_1 + 0x76);
      FUN_14052082e(param_1 + 0x8c);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa3));
  FUN_140137a98(param_1 + 0x8c);
  FUN_140137a98(param_1 + 0x76);
  param_1[0x70] = &PTR_FUN_14a83cdc0;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1 + 0x70);
  if (*(int *)((longlong)param_1 + 0x374) != -1) {
    if (param_1[0x6d] != 0) {
      FUN_1400020a8();
    }
    param_1[0x6d] = 0;
    param_1[0x6e] = 0xffffffff00000000;
  }
  FUN_1412b7f2a(param_1 + 0x28);
  param_1[0x23] = &PTR_FUN_14a83cdc0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1 + 0x23);
  FUN_140296b76(param_1 + 0x1b);
  FUN_140296ab8(param_1 + 0x13);
  FUN_140296d44(param_1 + 2);
  return;
}



// FUNCTION 1484b937c FUN_1484b937c body=117 status=ok
// SIG undefined FUN_1484b937c(void)

undefined4 * FUN_1484b937c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x2d);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x31);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x35);
  *(undefined4 *)((longlong)param_1 + 0x29) = *(undefined4 *)((longlong)param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x2d) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x31) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x35) = uVar15;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    *(undefined8 *)(param_2 + 0x12) = 0;
  }
  FUN_1484b93f2(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}



// FUNCTION 1484b93f2 FUN_1484b93f2 body=130 status=ok
// SIG undefined FUN_1484b93f2(void)

longlong * FUN_1484b93f2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  FUN_1484b9474(param_1 + 4,param_2 + 4);
  *(int *)(param_1 + 6) = (int)param_2[6];
  return param_1;
}



// FUNCTION 1484b9474 FUN_1484b9474 body=78 status=ok
// SIG undefined FUN_1484b9474(void)

longlong * FUN_1484b9474(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401edd9e(*param_1,(int)param_1[1]);
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



// FUNCTION 1484b94c2 FUN_1484b94c2 body=371 status=ok
// SIG undefined FUN_1484b94c2(void)

undefined8 * FUN_1484b94c2(longlong param_1,undefined8 *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  char cVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar8 = (char)(int)(*(longlong **)(param_1 + 0x460))[0x100];
  cVar4 = '\x02';
  if (cVar8 != -1) {
    cVar4 = cVar8;
  }
  if (cVar4 == '\x01') {
    if (param_3 == '\0') {
      lVar5 = FUN_1484b2316();
      if (lVar5 != 0) {
        param_2[2] = 0;
        param_2[4] = &PTR_LAB_14aeef720;
        param_2[5] = lVar5;
        pcVar7 = (code *)&LAB_1484b96a6;
        goto LAB_1484b95e8;
      }
    }
LAB_1484b95c3:
    param_2[2] = 0;
    param_2[4] = &PTR_LAB_14aeef740;
    param_2[5] = &LAB_1484b9724;
    pcVar7 = FUN_1484b9736;
  }
  else {
    if (cVar4 != '\x02') goto LAB_1484b95c3;
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
    if (((((lVar5 == 0) || (lVar2 = *(longlong *)(lVar5 + 0x208), lVar2 == 0)) ||
         (uVar1 = *(uint *)(lVar2 + 0x38), (int)uVar1 < 1)) ||
        ((uVar1 == 1 || (plVar3 = *(longlong **)(lVar2 + 0x30), *plVar3 == 0)))) ||
       ((uVar1 < 3 || ((plVar3[1] == 0 || (plVar3[2] == 0)))))) goto LAB_1484b95c3;
    FUN_146c3a27e(&local_38,lVar5);
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    *param_2 = 0;
    puVar6 = (undefined8 *)FUN_14001cc68(0x28,8);
    param_2[2] = puVar6;
    *puVar6 = &PTR_LAB_14aeef700;
    puVar6[3] = CONCAT44(uStack_44,local_48);
    puVar6[4] = CONCAT44(uStack_3c,uStack_40);
    *(undefined4 *)(puVar6 + 1) = local_58;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_54;
    *(undefined4 *)(puVar6 + 2) = uStack_50;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_4c;
    if (puVar6 + 1 == (undefined8 *)0x0) goto LAB_1484b95eb;
    pcVar7 = FUN_1484b9636;
  }
LAB_1484b95e8:
  *param_2 = pcVar7;
LAB_1484b95eb:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b9636 FUN_1484b9636 body=42 status=ok
// SIG undefined FUN_1484b9636(void)

void FUN_1484b9636(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_146c3a5e0(param_6,*param_3,*param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1484b966a FUN_1484b966a body=29 status=ok
// SIG undefined FUN_1484b966a(void)

void FUN_1484b966a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484b9688 FUN_1484b9688 body=29 status=ok
// SIG undefined FUN_1484b9688(void)

undefined8 FUN_1484b9688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b9706 FUN_1484b9706 body=29 status=ok
// SIG undefined FUN_1484b9706(void)

undefined8 FUN_1484b9706(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b9736 FUN_1484b9736 body=47 status=ok
// SIG undefined FUN_1484b9736(void)

void FUN_1484b9736(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  (*(code *)*param_1)(*param_2,*param_3,*param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1484b9770 FUN_1484b9770 body=12 status=ok
// SIG undefined FUN_1484b9770(void)

void FUN_1484b9770(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484b9779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484b977c FUN_1484b977c body=29 status=ok
// SIG undefined FUN_1484b977c(void)

undefined8 FUN_1484b977c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484b979a FUN_1484b979a body=2857 status=ok
// SIG undefined FUN_1484b979a(void)

void FUN_1484b979a(uint *param_1,longlong param_2,double param_3,int param_4,int *param_5,
                  longlong param_6,longlong param_7,undefined8 *param_8,char param_9,byte param_10,
                  byte param_11)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  float *local_210;
  float *local_208;
  byte local_1fe;
  byte local_1fd;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint *local_1f0;
  longlong local_1e8;
  uint *local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  int local_1c0 [6];
  undefined8 local_1a8;
  undefined4 local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 local_180;
  uint local_17c;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(int *)(param_2 + 8) != 0) {
    if (param_7 == 0) {
      local_1fc = 0;
    }
    else {
      local_1fc = (uint)CONCAT71((int7)(local_f0 >> 8),(char)param_1[1] == '\0');
    }
    param_4 = param_4 * 3;
    if ((((param_9 == '\0') || (*(int *)(param_2 + 0xcc) == param_4)) &&
        ((param_10 == 0 || (*(int *)(param_2 + 0x8c) == param_4)))) &&
       ((param_11 == 0 || (*(int *)(param_2 + 0x10c) == param_4)))) {
      uVar18 = *param_5 * 0x200 + param_5[1];
      uVar20 = 0;
      if ((uVar18 != 0) &&
         (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_5 + 2) - 1U))) {
        uVar21 = 1;
        uVar9 = 1;
        if (1 < (int)uVar18) {
          uVar21 = uVar18;
        }
        do {
          uVar20 = uVar21;
          if (uVar21 == uVar9) break;
          uVar13 = uVar9 >> 9;
          uVar17 = uVar9 & 0x1ff;
          uVar20 = uVar9;
          uVar9 = uVar9 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_5 + 2))[uVar13] +
                                             (ulonglong)uVar17 * 2) - 1U));
      }
      if (uVar20 != uVar18) {
        local_1fe = param_6 != 0 & param_10;
        local_1fd = param_7 != 0 & param_11;
        local_1f0 = param_1 + 0xc;
        uVar16 = 0;
        local_1f4 = uVar18;
        local_1e8 = param_2;
        local_1e0 = param_1;
        local_1d8 = param_3;
        do {
          lVar19 = *(longlong *)
                    (*(longlong *)((longlong)param_3 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
          local_1a0 = *(undefined4 *)(lVar19 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
          local_1a8 = *(undefined8 *)(lVar19 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
          local_1c0[3] = 0;
          local_1c0[4] = 0;
          local_1c0[5] = 0;
          if (local_1fe != 0) {
            uVar18 = uVar20 * 3 + 2;
            lVar19 = *(longlong *)(param_6 + 0x78);
            local_1c0[5] = *(undefined4 *)
                            (*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
            uVar18 = uVar20 * 3 + 1;
            local_1c0[4] = *(undefined4 *)
                            (*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
            local_1c0[3] = *(undefined4 *)
                            (*(longlong *)(lVar19 + (ulonglong)(uVar20 * 3 >> 9) * 8) +
                            (ulonglong)(uVar20 * 3 & 0x1ff) * 4);
          }
          local_1c0[0] = 0;
          local_1c0[1] = 0;
          local_1c0[2] = 0;
          if (local_1fd != 0) {
            uVar18 = uVar20 * 3 + 2;
            lVar19 = *(longlong *)(param_7 + 0x78);
            local_1c0[2] = *(undefined4 *)
                            (*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
            uVar18 = uVar20 * 3 + 1;
            local_1c0[1] = *(undefined4 *)
                            (*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
            local_1c0[0] = *(int *)(*(longlong *)(lVar19 + (ulonglong)(uVar20 * 3 >> 9) * 8) +
                                   (ulonglong)(uVar20 * 3 & 0x1ff) * 4);
          }
          local_1f8 = *param_1;
          if (((param_11 != 0) && (*(char *)((longlong)param_1 + 5) == '\x01')) &&
             (pcVar2 = *(code **)(param_1 + 4), pcVar2 != (code *)0x0)) {
            local_1d0 = (double)CONCAT44(local_1d0._4_4_,uVar20);
            puVar10 = *(uint **)(param_1 + 8);
            if (*(uint **)(param_1 + 8) == (uint *)0x0) {
              puVar10 = local_1f0;
            }
            local_178 = param_3;
            uVar7 = (**(code **)(*(longlong *)puVar10 + 8))();
            (*pcVar2)(&local_17c,uVar7,&local_178,&local_1d0);
            local_1f8 = local_17c;
            local_1fc = 0;
          }
          lVar19 = 0;
          do {
            iVar15 = (int)uVar16;
            if (param_9 != '\0') {
              uVar18 = *(uint *)((longlong)&local_1a8 + lVar19 * 4);
              lVar3 = *(longlong *)
                       (*(longlong *)((longlong)param_3 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
              uVar8 = (ulonglong)(uVar18 & 0x1ff);
              dVar22 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
              dVar1 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
              lVar14 = *(longlong *)(param_2 + 0xc0);
              uVar11 = (ulonglong)(uint)(*(int *)(param_2 + 200) * iVar15);
              *(float *)(lVar14 + uVar11) = (float)*(double *)(lVar3 + uVar8 * 0x18);
              *(float *)(lVar14 + 4 + uVar11) = (float)dVar1;
              *(float *)(lVar14 + 8 + uVar11) = (float)dVar22;
            }
            if (param_10 != 0) {
              if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
                FUN_146c13dec(param_3,&local_178,uVar20);
                local_1c8 = (float)local_168;
                local_1d0 = (double)CONCAT44((float)local_170,(float)local_178);
              }
              else {
                if ((param_6 == 0) || (iVar6 = local_1c0[lVar19 + 3], iVar6 == -1)) {
                  if (*(char *)((longlong)param_3 + 0x70) == '\0') {
                    local_170 = (double)CONCAT44(local_170._4_4_,DAT_14c846378);
                    local_178 = DAT_14c846370;
                  }
                  else {
                    uVar18 = *(uint *)((longlong)&local_1a8 + lVar19 * 4);
                    lVar3 = *(longlong *)
                             (*(longlong *)((longlong)param_3 + 0x60) + (ulonglong)(uVar18 >> 9) * 8
                             );
                    uVar8 = (ulonglong)(uVar18 & 0x1ff);
                    local_178 = *(double *)(lVar3 + uVar8 * 0xc);
                    local_170 = (double)CONCAT44(local_170._4_4_,
                                                 *(undefined4 *)(lVar3 + 8 + uVar8 * 0xc));
                  }
                }
                else {
                  lVar3 = *(longlong *)(param_6 + 0x48);
                  lVar14 = 0;
                  do {
                    uVar18 = iVar6 * 3 + (int)lVar14;
                    *(undefined4 *)((longlong)&local_178 + lVar14 * 4) =
                         *(undefined4 *)
                          (*(longlong *)(lVar3 + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 4);
                    lVar14 = lVar14 + 1;
                  } while (lVar14 != 3);
                }
                local_1c8 = local_170._0_4_;
                local_1d0 = local_178;
              }
              local_180 = *(undefined4 *)((longlong)&local_1a8 + lVar19 * 4);
              local_178 = (double)CONCAT44(local_178._4_4_,(int)lVar19);
              local_208 = &local_198;
              local_210 = &local_18c;
              local_218 = &local_1d0;
              local_17c = uVar20;
              (*(code *)*param_8)(param_8[1],&local_180,&local_17c,&local_178);
              fVar23 = local_1c8;
              fVar25 = (float)local_1d0;
              fVar24 = local_1d0._4_4_;
              lVar3 = *(longlong *)(param_2 + 0x70);
              if (*(char *)(param_2 + 0x91) == '\x01') {
                lVar14 = uVar16 * 0x10;
                iVar6 = (int)ROUND(local_18c * 32767.0 + local_18c * 32767.0 + 0.5) >> 1;
                if (0x7ffe < iVar6) {
                  iVar6 = 0x7fff;
                }
                uVar5 = (undefined2)iVar6;
                if (iVar6 < -0x7fff) {
                  uVar5 = 0x8000;
                }
                iVar6 = (int)ROUND(local_188 * 32767.0 + local_188 * 32767.0 + 0.5) >> 1;
                if (0x7ffe < iVar6) {
                  iVar6 = 0x7fff;
                }
                if (iVar6 < -0x7fff) {
                  iVar6 = -0x8000;
                }
                *(undefined2 *)(lVar3 + lVar14) = uVar5;
                *(short *)(lVar3 + 2 + lVar14) = (short)iVar6;
                iVar6 = (int)ROUND(local_184 * 32767.0 + local_184 * 32767.0 + 0.5) >> 1;
                if (0x7ffe < iVar6) {
                  iVar6 = 0x7fff;
                }
                uVar5 = (undefined2)iVar6;
                if (iVar6 < -0x7fff) {
                  uVar5 = 0x8000;
                }
                *(undefined2 *)(lVar3 + 4 + lVar14) = uVar5;
                *(undefined2 *)(lVar3 + 6 + lVar14) = 0x7fff;
                local_128 = (double)local_1c8;
                local_130 = (double)local_1d0._4_4_;
                local_138 = (double)(float)local_1d0;
                local_148 = (double)local_190;
                local_150 = (double)local_194;
                local_158 = (double)local_198;
                local_168 = (double)local_184;
                local_170 = (double)local_188;
                local_178 = (double)local_18c;
                local_160 = 0;
                local_140 = 0;
                local_110 = 0;
                uStack_108 = 0;
                local_120 = 0;
                uStack_118 = 0;
                local_100 = 0x3ff0000000000000;
                dVar22 = (double)FUN_144a91046(&local_178);
                fVar25 = fVar25 * 32767.0;
                iVar6 = (int)ROUND(fVar25 + fVar25 + 0.5) >> 1;
                if (0x7ffe < iVar6) {
                  iVar6 = 0x7fff;
                }
                uVar5 = (undefined2)iVar6;
                if (iVar6 < -0x7fff) {
                  uVar5 = 0x8000;
                }
                *(undefined2 *)(lVar3 + 8 + lVar14) = uVar5;
                fVar24 = fVar24 * 32767.0;
                iVar6 = (int)ROUND(fVar24 + fVar24 + 0.5) >> 1;
                if (0x7ffe < iVar6) {
                  iVar6 = 0x7fff;
                }
                if (iVar6 < -0x7fff) {
                  iVar6 = -0x8000;
                }
                fVar23 = fVar23 * 32767.0;
                iVar12 = (int)ROUND(fVar23 + fVar23 + 0.5) >> 1;
                if (0x7ffe < iVar12) {
                  iVar12 = 0x7fff;
                }
                *(short *)(lVar3 + 10 + lVar14) = (short)iVar6;
                if (iVar12 < -0x7fff) {
                  iVar12 = -0x8000;
                }
                *(short *)(lVar3 + 0xc + lVar14) = (short)iVar12;
                iVar6 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar22 < 0.0) * 4)) >> 1;
                if (0x7ffe < (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar22 < 0.0) * 4))
                             >> 1) {
                  iVar6 = 0x7fff;
                }
                uVar5 = (undefined2)iVar6;
                if (iVar6 < -0x7fff) {
                  uVar5 = 0x8000;
                }
                *(undefined2 *)(lVar3 + 0xe + lVar14) = uVar5;
                param_1 = local_1e0;
                param_2 = local_1e8;
                param_3 = local_1d8;
              }
              else {
                iVar6 = (int)ROUND(local_18c * 127.0 + local_18c * 127.0 + 0.5) >> 1;
                if (0x7e < iVar6) {
                  iVar6 = 0x7f;
                }
                uVar4 = (undefined1)iVar6;
                if (iVar6 < -0x7f) {
                  uVar4 = 0x80;
                }
                iVar6 = (int)ROUND(local_188 * 127.0 + local_188 * 127.0 + 0.5) >> 1;
                if (0x7e < iVar6) {
                  iVar6 = 0x7f;
                }
                if (iVar6 < -0x7f) {
                  iVar6 = -0x80;
                }
                *(undefined1 *)(lVar3 + uVar16 * 8) = uVar4;
                *(char *)(lVar3 + 1 + uVar16 * 8) = (char)iVar6;
                iVar6 = (int)ROUND(local_184 * 127.0 + local_184 * 127.0 + 0.5) >> 1;
                if (0x7e < iVar6) {
                  iVar6 = 0x7f;
                }
                uVar4 = (undefined1)iVar6;
                if (iVar6 < -0x7f) {
                  uVar4 = 0x80;
                }
                *(undefined1 *)(lVar3 + 2 + uVar16 * 8) = uVar4;
                *(undefined1 *)(lVar3 + 3 + uVar16 * 8) = 0x7f;
                local_128 = (double)local_1c8;
                local_130 = (double)local_1d0._4_4_;
                local_138 = (double)(float)local_1d0;
                local_148 = (double)local_190;
                local_150 = (double)local_194;
                local_158 = (double)local_198;
                local_168 = (double)local_184;
                local_170 = (double)local_188;
                local_178 = (double)local_18c;
                local_160 = 0;
                local_140 = 0;
                local_110 = 0;
                uStack_108 = 0;
                local_120 = 0;
                uStack_118 = 0;
                local_100 = 0x3ff0000000000000;
                dVar22 = (double)FUN_144a91046(&local_178);
                fVar25 = fVar25 * 127.0;
                iVar6 = (int)ROUND(fVar25 + fVar25 + 0.5) >> 1;
                if (0x7e < iVar6) {
                  iVar6 = 0x7f;
                }
                uVar4 = (undefined1)iVar6;
                if (iVar6 < -0x7f) {
                  uVar4 = 0x80;
                }
                *(undefined1 *)(lVar3 + 4 + uVar16 * 8) = uVar4;
                fVar24 = fVar24 * 127.0;
                iVar6 = (int)ROUND(fVar24 + fVar24 + 0.5) >> 1;
                if (0x7e < iVar6) {
                  iVar6 = 0x7f;
                }
                if (iVar6 < -0x7f) {
                  iVar6 = -0x80;
                }
                fVar23 = fVar23 * 127.0;
                iVar12 = (int)ROUND(fVar23 + fVar23 + 0.5) >> 1;
                if (0x7e < iVar12) {
                  iVar12 = 0x7f;
                }
                *(char *)(lVar3 + 5 + uVar16 * 8) = (char)iVar6;
                if (iVar12 < -0x7f) {
                  iVar12 = -0x80;
                }
                *(char *)(lVar3 + 6 + uVar16 * 8) = (char)iVar12;
                iVar6 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar22 < 0.0) * 4)) >> 1;
                if (0x7e < iVar6) {
                  iVar6 = 0x7f;
                }
                uVar4 = (undefined1)iVar6;
                if (iVar6 < -0x7f) {
                  uVar4 = 0x80;
                }
                *(undefined1 *)(lVar3 + 7 + uVar16 * 8) = uVar4;
                param_1 = local_1e0;
                param_3 = local_1d8;
              }
            }
            if (param_11 != 0) {
              uVar18 = local_1f8;
              if (((local_1fc & 1) != 0) && (local_1c0[lVar19] != -1)) {
                FUN_1484ba2c4(param_1,&local_178,param_7);
                uVar18 = local_178._0_4_;
              }
              *(uint *)(*(longlong *)(param_2 + 0x100) +
                       (ulonglong)(uint)(*(int *)(param_2 + 0x108) * iVar15)) = uVar18;
            }
            uVar16 = (ulonglong)(iVar15 + 1);
            lVar19 = lVar19 + 1;
          } while (lVar19 != 3);
          uVar18 = uVar20 + 1;
          if ((int)(uVar20 + 1) < (int)local_1f4) {
            uVar18 = local_1f4;
          }
          do {
            uVar21 = uVar18;
            if (uVar18 - 1 == uVar20) break;
            uVar20 = uVar20 + 1;
            uVar21 = uVar20;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_5 + 2) +
                                                 (ulonglong)(uVar20 >> 9) * 8) +
                                               (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
          uVar20 = uVar21;
        } while (uVar20 != local_1f4);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ba2c4 FUN_1484ba2c4 body=614 status=ok
// SIG undefined FUN_1484ba2c4(void)

undefined1 * FUN_1484ba2c4(longlong param_1,undefined1 *param_2,longlong param_3,uint param_4)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_3 + 0x48) + (ulonglong)(param_4 >> 4 & 0x3fffff8)) +
           (ulonglong)((param_4 & 0x7f) << 4));
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  if (*(char *)(param_1 + 0x50) == '\x01') {
    pcVar3 = *(code **)(param_1 + 0x60);
    plVar7 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_1 + 0x70);
    }
    uVar5 = (**(code **)(*plVar7 + 8))();
    (*pcVar3)(uVar5,&local_58);
  }
  cVar2 = *(char *)(param_1 + 0xa0);
  if (cVar2 == '\x02') {
    FUN_1414dd342(&local_68,&local_58);
    if (local_5c <= 0.0) {
      local_5c = 0.0;
    }
    if (1.0 <= local_5c) {
      local_5c = 1.0;
    }
    if (local_60 <= 0.0) {
      local_60 = 0.0;
    }
    if (1.0 <= local_60) {
      local_60 = 1.0;
    }
    if (local_64 <= 0.0) {
      local_64 = 0.0;
    }
    if (1.0 <= local_64) {
      local_64 = 1.0;
    }
    if (local_68 <= 0.0) {
      local_68 = 0.0;
    }
    if (1.0 <= local_68) {
      local_68 = 1.0;
    }
    local_68 = (float)(&DAT_14c758c60)[(int)(local_68 * 255.0 + 0.5) & 0xff];
    local_64 = (float)(&DAT_14c758c60)[(int)(local_64 * 255.0 + 0.5) & 0xff];
    fVar9 = (float)(&DAT_14c758c60)[(int)(local_60 * 255.0 + 0.5) & 0xff];
    fVar8 = (float)((int)(local_5c * 255.0 + 0.5) & 0xff) * 0.003921569;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    uVar4 = (undefined1)(int)(fVar8 * 255.0 + 0.5);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    uVar6 = (undefined1)(int)(fVar9 * 255.0 + 0.5);
  }
  else {
    FUN_1414dd342(&local_68,&local_58);
    if (cVar2 == '\x01') {
      FUN_1411ab38a(&local_68,param_2);
      goto LAB_1484ba47c;
    }
    if (local_5c <= 0.0) {
      local_5c = 0.0;
    }
    if (1.0 <= local_5c) {
      local_5c = 1.0;
    }
    uVar4 = (undefined1)(int)(local_5c * 255.0 + 0.5);
    if (local_60 <= 0.0) {
      local_60 = 0.0;
    }
    if (1.0 <= local_60) {
      local_60 = 1.0;
    }
    uVar6 = (undefined1)(int)(local_60 * 255.0 + 0.5);
  }
  if (local_64 <= 0.0) {
    local_64 = 0.0;
  }
  if (1.0 <= local_64) {
    local_64 = 1.0;
  }
  if (local_68 <= 0.0) {
    local_68 = 0.0;
  }
  if (1.0 <= local_68) {
    local_68 = 1.0;
  }
  *param_2 = uVar6;
  param_2[1] = (char)(int)(local_64 * 255.0 + 0.5);
  param_2[2] = (char)(int)(local_68 * 255.0 + 0.5);
  param_2[3] = uVar4;
LAB_1484ba47c:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ba52c FUN_1484ba52c body=1022 status=ok
// SIG undefined FUN_1484ba52c(void)

void FUN_1484ba52c(longlong param_1,int param_2,int *param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  uint local_e4;
  ulonglong local_e0;
  int *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  uint local_b0 [2];
  undefined4 local_a8 [22];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x8c) == param_2 * 3)) {
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar23 = (ulonglong)uVar1;
    if (*(int *)(param_4 + 0x48) <= (int)uVar1) {
      local_50 = 0x800000000;
      local_b8 = (longlong)*(int *)(param_4 + 0x48);
      FUN_1484ba92c(local_b0,uVar23,1);
      uVar13 = 0;
      uVar17 = *param_3 * 0x200 + param_3[1];
      if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_3 + 2) - 1U))) {
        uVar13 = 1;
        uVar20 = 1;
        if (1 < (int)uVar17) {
          uVar13 = (ulonglong)uVar17;
        }
        do {
          uVar18 = uVar20;
          if ((uint)uVar13 == uVar18) goto LAB_1484ba5f2;
          uVar20 = uVar18 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_3 + 2))[uVar18 >> 9] +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
        uVar13 = (ulonglong)uVar18;
      }
LAB_1484ba5f2:
      if ((uint)uVar13 != uVar17) {
        uVar20 = 0;
        do {
          local_e0 = uVar13;
          iVar3 = (int)local_e0;
          if (0 < (int)uVar1) {
            lVar12 = *(longlong *)(param_4 + 0x40);
            if (*(longlong *)(param_4 + 0x40) == 0) {
              lVar12 = param_4;
            }
            uVar18 = iVar3 * 3 + 2;
            local_d0 = (ulonglong)(uVar18 >> 9);
            local_c8 = (ulonglong)(uVar18 & 0x1ff);
            uVar18 = iVar3 * 3 + 1;
            local_c0 = (ulonglong)(iVar3 * 3 & 0x1ff);
            puVar21 = local_a8;
            uVar13 = 0;
            do {
              uVar16 = 0xffffffff;
              if ((longlong)uVar13 < local_b8) {
                lVar15 = *(longlong *)(lVar12 + uVar13 * 8);
                uVar4 = 0xffffffff;
                uVar8 = 0xffffffff;
                if (lVar15 != 0) {
                  lVar15 = *(longlong *)(lVar15 + 0x78);
                  uVar16 = *(undefined4 *)(*(longlong *)(lVar15 + local_d0 * 8) + local_c8 * 4);
                  uVar4 = *(undefined4 *)
                           (*(longlong *)(lVar15 + (ulonglong)(uVar18 >> 9) * 8) +
                           (ulonglong)(uVar18 & 0x1ff) * 4);
                  uVar8 = *(undefined4 *)
                           (*(longlong *)(lVar15 + (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                           local_c0 * 4);
                }
              }
              else {
                uVar4 = 0xffffffff;
                uVar8 = 0xffffffff;
              }
              puVar21[-2] = uVar8;
              puVar21[-1] = uVar4;
              *puVar21 = uVar16;
              uVar13 = uVar13 + 1;
              puVar21 = puVar21 + 3;
            } while (uVar23 != uVar13);
          }
          puVar19 = local_b0;
          lVar12 = 0;
          do {
            local_f0 = (ulonglong)uVar20;
            if (0 < (int)uVar1) {
              uVar13 = 0;
              puVar22 = puVar19;
              do {
                uVar18 = *puVar22;
                pfVar11 = (float *)&DAT_14c84635c;
                puVar14 = &DAT_14c84635c;
                if (uVar18 != 0xffffffff) {
                  lVar15 = *(longlong *)(param_4 + 0x40);
                  if (*(longlong *)(param_4 + 0x40) == 0) {
                    lVar15 = param_4;
                  }
                  lVar15 = *(longlong *)
                            (*(longlong *)(*(longlong *)(lVar15 + uVar13 * 8) + 0x48) +
                            (ulonglong)(uVar18 >> 5 & 0x3fffff8));
                  uVar7 = (ulonglong)((uVar18 & 0xff) << 3);
                  pfVar11 = (float *)(lVar15 + uVar7);
                  puVar14 = (undefined8 *)(lVar15 + uVar7);
                }
                fVar2 = *(float *)((longlong)puVar14 + 4);
                fVar10 = *pfVar11;
                if (*(char *)(param_1 + 0x90) == '\x01') {
                  lVar15 = *(longlong *)(param_1 + 0x78) +
                           (ulonglong)*(uint *)(param_1 + 0x88) * local_f0 * 8;
                  *(float *)(lVar15 + uVar13 * 8) = fVar10;
                  *(float *)(lVar15 + 4 + uVar13 * 8) = fVar2;
                }
                else {
                  fVar5 = ABS(fVar10);
                  if ((uint)fVar5 < 0x47800000) {
                    if ((uint)fVar5 < 0x38800000) {
                      fVar9 = fVar5 + 0.5;
                    }
                    else {
                      fVar5 = (float)((int)fVar5 + 0x8000fff + (uint)(((uint)fVar5 >> 0xd & 1) != 0)
                                     >> 0xd);
                      fVar9 = fVar5;
                    }
                  }
                  else {
                    fVar9 = (float)((0x7f800000 < (uint)fVar5 | 0x3e) << 9);
                  }
                  lVar15 = *(longlong *)(param_1 + 0x78) +
                           (ulonglong)*(uint *)(param_1 + 0x88) * local_f0 * 4;
                  iVar6 = movmskps(fVar5,ZEXT416((uint)fVar10));
                  *(ushort *)(lVar15 + uVar13 * 4) = (ushort)(iVar6 << 0xf) | SUB42(fVar9,0);
                  fVar10 = ABS(fVar2);
                  if ((uint)fVar10 < 0x47800000) {
                    if ((uint)fVar10 < 0x38800000) {
                      fVar5 = fVar10 + 0.5;
                    }
                    else {
                      fVar10 = (float)((int)fVar10 + 0x8000fff +
                                       (uint)(((uint)fVar10 >> 0xd & 1) != 0) >> 0xd);
                      fVar5 = fVar10;
                    }
                  }
                  else {
                    fVar5 = (float)((0x7f800000 < (uint)fVar10 | 0x3e) << 9);
                  }
                  iVar6 = movmskps(fVar10,ZEXT416((uint)fVar2));
                  *(ushort *)(lVar15 + 2 + uVar13 * 4) = (ushort)(iVar6 << 0xf) | SUB42(fVar5,0);
                }
                uVar13 = uVar13 + 1;
                puVar22 = puVar22 + 3;
              } while (uVar23 != uVar13);
            }
            uVar20 = uVar20 + 1;
            lVar12 = lVar12 + 1;
            puVar19 = puVar19 + 1;
          } while (lVar12 != 3);
          uVar18 = iVar3 + 1U;
          if ((int)(iVar3 + 1U) < (int)uVar17) {
            uVar18 = uVar17;
          }
          uVar13 = local_e0;
          do {
            if (uVar18 - 1 == (int)uVar13) {
              uVar13 = (ulonglong)uVar18;
              break;
            }
            uVar24 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar24;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_3 + 2) +
                                                 (ulonglong)(uVar24 >> 9) * 8) +
                                               (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
          local_e4 = uVar17;
          local_d8 = param_3;
        } while ((uint)uVar13 != uVar17);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ba92c FUN_1484ba92c body=113 status=ok
// SIG undefined FUN_1484ba92c(void)

void FUN_1484ba92c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x60) = param_2;
    if ((uint)(*(int *)(param_1 + 100) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484ba99e(param_1,iVar1);
    }
    FUN_146bd78b1(param_1 + (longlong)iVar1 * 0xc,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x60) = param_2, param_3 == '\x01')) {
      FUN_1484ba9be(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484ba99e FUN_1484ba99e body=31 status=ok
// SIG undefined FUN_1484ba99e(void)

void FUN_1484ba99e(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 100) = 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484ba9be FUN_1484ba9be body=14 status=ok
// SIG undefined FUN_1484ba9be(void)

void FUN_1484ba9be(longlong param_1)

{
  if (*(int *)(param_1 + 100) != 8) {
    *(undefined4 *)(param_1 + 100) = 8;
  }
  return;
}



// FUNCTION 1484ba9f4 FUN_1484ba9f4 body=12 status=ok
// SIG undefined FUN_1484ba9f4(void)

void FUN_1484ba9f4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484ba9fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484baa00 FUN_1484baa00 body=29 status=ok
// SIG undefined FUN_1484baa00(void)

undefined8 FUN_1484baa00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484baa26 FUN_1484baa26 body=365 status=ok
// SIG undefined FUN_1484baa26(void)

void FUN_1484baa26(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_c8 [32];
  void **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = *param_8;
  local_50 = param_8[1];
  local_68 = (void *)0x0;
  local_60 = (int)param_5[1];
  lVar1 = (longlong)local_60;
  _Src = (void *)*param_5;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_144a06ca8(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar1 << 2);
  }
  local_88 = param_9;
  local_78 = param_11;
  local_80 = param_10;
  local_90 = &local_58;
  local_98 = param_7;
  local_a0 = param_6;
  local_a8 = &local_68;
  FUN_1484bac54(param_1 + 0x2a0,param_2,param_3,param_4);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bab94 FUN_1484bab94 body=190 status=ok
// SIG undefined FUN_1484bab94(void)

void FUN_1484bab94(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  undefined8 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = (int)param_4[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_144a06ca8(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 << 2);
  }
  FUN_1484bb700(param_2,param_3,&local_50,param_5);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bac54 FUN_1484bac54 body=2731 status=ok
// SIG undefined FUN_1484bac54(void)

void FUN_1484bac54(undefined4 *param_1,longlong param_2,double param_3,int param_4,longlong *param_5
                  ,longlong param_6,longlong param_7,undefined8 *param_8,char param_9,byte param_10,
                  byte param_11)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  float *local_220;
  float *local_218;
  byte local_20e;
  byte local_20d;
  uint local_20c;
  undefined4 *local_208;
  undefined4 local_1fc;
  longlong *local_1f8;
  uint *local_1f0;
  uint *local_1e8;
  double local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  int local_1c0 [6];
  undefined8 local_1a8;
  undefined4 local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (*(int *)(param_2 + 8) != 0) {
    if (param_7 == 0) {
      local_20c = 0;
    }
    else {
      local_20c = (uint)CONCAT71((int7)(local_f0 >> 8),*(char *)(param_1 + 1) == '\0');
    }
    param_4 = param_4 * 3;
    if ((((param_9 == '\0') || (*(int *)(param_2 + 0xcc) == param_4)) &&
        ((param_10 == 0 || (*(int *)(param_2 + 0x8c) == param_4)))) &&
       (((param_11 == 0 || (*(int *)(param_2 + 0x10c) == param_4)) &&
        ((longlong)(int)param_5[1] != 0)))) {
      puVar17 = (uint *)*param_5;
      local_1f0 = puVar17 + (int)param_5[1];
      local_20e = param_6 != 0 & param_10;
      local_20d = param_7 != 0 & param_11;
      local_1f8 = (longlong *)(param_1 + 0xc);
      uVar20 = 0;
      local_208 = param_1;
      local_1e0 = param_3;
      do {
        uVar16 = *puVar17;
        uVar14 = (ulonglong)uVar16;
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)param_3 + 0x130) + (ulonglong)(uVar16 >> 9) * 8);
        local_1a0 = *(undefined4 *)(lVar18 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
        local_1a8 = *(undefined8 *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
        local_1c0[3] = 0;
        local_1c0[4] = 0;
        local_1c0[5] = 0;
        if (local_20e != 0) {
          uVar6 = uVar16 * 3 + 2;
          lVar18 = *(longlong *)(param_6 + 0x78);
          local_1c0[5] = *(undefined4 *)
                          (*(longlong *)(lVar18 + (ulonglong)(uVar6 >> 9) * 8) +
                          (ulonglong)(uVar6 & 0x1ff) * 4);
          uVar6 = uVar16 * 3 + 1;
          local_1c0[4] = *(undefined4 *)
                          (*(longlong *)(lVar18 + (ulonglong)(uVar6 >> 9) * 8) +
                          (ulonglong)(uVar6 & 0x1ff) * 4);
          local_1c0[3] = *(undefined4 *)
                          (*(longlong *)(lVar18 + (ulonglong)(uVar16 * 3 >> 9) * 8) +
                          (ulonglong)(uVar16 * 3 & 0x1ff) * 4);
        }
        local_1c0[0] = 0;
        local_1c0[1] = 0;
        local_1c0[2] = 0;
        if (local_20d != 0) {
          uVar6 = uVar16 * 3 + 2;
          lVar18 = *(longlong *)(param_7 + 0x78);
          local_1c0[2] = *(undefined4 *)
                          (*(longlong *)(lVar18 + (ulonglong)(uVar6 >> 9) * 8) +
                          (ulonglong)(uVar6 & 0x1ff) * 4);
          uVar6 = uVar16 * 3 + 1;
          local_1c0[1] = *(undefined4 *)
                          (*(longlong *)(lVar18 + (ulonglong)(uVar6 >> 9) * 8) +
                          (ulonglong)(uVar6 & 0x1ff) * 4);
          local_1c0[0] = *(int *)(*(longlong *)(lVar18 + (ulonglong)(uVar16 * 3 >> 9) * 8) +
                                 (ulonglong)(uVar16 * 3 & 0x1ff) * 4);
        }
        uVar15 = *param_1;
        local_1e8 = puVar17;
        if (((param_11 != 0) && (*(char *)((longlong)param_1 + 5) == '\x01')) &&
           (pcVar2 = *(code **)(param_1 + 4), pcVar2 != (code *)0x0)) {
          local_1d0 = (double)CONCAT44(local_1d0._4_4_,uVar16);
          plVar11 = *(longlong **)(param_1 + 8);
          if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
            plVar11 = local_1f8;
          }
          local_178 = param_3;
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar2)(&local_17c,uVar9,&local_178,&local_1d0);
          local_20c = 0;
          param_1 = local_208;
          uVar15 = local_17c;
        }
        lVar18 = 0;
        local_1fc = uVar15;
        local_1d8 = uVar14;
        do {
          iVar19 = (int)uVar20;
          if (param_9 != '\0') {
            uVar16 = *(uint *)((longlong)&local_1a8 + lVar18 * 4);
            lVar3 = *(longlong *)
                     (*(longlong *)((longlong)param_3 + 0x10) + (ulonglong)(uVar16 >> 9) * 8);
            uVar10 = (ulonglong)(uVar16 & 0x1ff);
            dVar22 = *(double *)(lVar3 + 0x10 + uVar10 * 0x18);
            dVar1 = *(double *)(lVar3 + 8 + uVar10 * 0x18);
            lVar21 = *(longlong *)(param_2 + 0xc0);
            uVar12 = (ulonglong)(uint)(*(int *)(param_2 + 200) * iVar19);
            *(float *)(lVar21 + uVar12) = (float)*(double *)(lVar3 + uVar10 * 0x18);
            *(float *)(lVar21 + 4 + uVar12) = (float)dVar1;
            *(float *)(lVar21 + 8 + uVar12) = (float)dVar22;
          }
          if (param_10 != 0) {
            if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
              FUN_146c13dec(param_3,&local_178,uVar14 & 0xffffffff);
              local_1c8 = (float)local_168;
              local_1d0 = (double)CONCAT44((float)local_170,(float)local_178);
            }
            else {
              if ((param_6 == 0) || (iVar7 = local_1c0[lVar18 + 3], iVar7 == -1)) {
                if (*(char *)((longlong)param_3 + 0x70) == '\0') {
                  local_170 = (double)CONCAT44(local_170._4_4_,DAT_14c846378);
                  local_178 = DAT_14c846370;
                }
                else {
                  uVar16 = *(uint *)((longlong)&local_1a8 + lVar18 * 4);
                  lVar3 = *(longlong *)
                           (*(longlong *)((longlong)param_3 + 0x60) + (ulonglong)(uVar16 >> 9) * 8);
                  uVar10 = (ulonglong)(uVar16 & 0x1ff);
                  local_178 = *(double *)(lVar3 + uVar10 * 0xc);
                  local_170 = (double)CONCAT44(local_170._4_4_,
                                               *(undefined4 *)(lVar3 + 8 + uVar10 * 0xc));
                }
              }
              else {
                lVar3 = *(longlong *)(param_6 + 0x48);
                lVar21 = 0;
                do {
                  uVar16 = iVar7 * 3 + (int)lVar21;
                  *(undefined4 *)((longlong)&local_178 + lVar21 * 4) =
                       *(undefined4 *)
                        (*(longlong *)(lVar3 + (ulonglong)(uVar16 >> 9) * 8) +
                        (ulonglong)(uVar16 & 0x1ff) * 4);
                  lVar21 = lVar21 + 1;
                } while (lVar21 != 3);
              }
              local_1c8 = local_170._0_4_;
              local_1d0 = local_178;
            }
            local_180 = *(undefined4 *)((longlong)&local_1a8 + lVar18 * 4);
            local_178 = (double)CONCAT44(local_178._4_4_,(int)lVar18);
            local_218 = &local_198;
            local_220 = &local_18c;
            local_228 = &local_1d0;
            local_17c = (int)uVar14;
            (*(code *)*param_8)(param_8[1],&local_180,&local_17c,&local_178);
            fVar23 = local_1c8;
            fVar25 = (float)local_1d0;
            fVar24 = local_1d0._4_4_;
            lVar3 = *(longlong *)(param_2 + 0x70);
            if (*(char *)(param_2 + 0x91) == '\x01') {
              lVar21 = uVar20 * 0x10;
              iVar7 = (int)ROUND(local_18c * 32767.0 + local_18c * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar7) {
                iVar7 = 0x7fff;
              }
              uVar5 = (undefined2)iVar7;
              if (iVar7 < -0x7fff) {
                uVar5 = 0x8000;
              }
              iVar7 = (int)ROUND(local_188 * 32767.0 + local_188 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar7) {
                iVar7 = 0x7fff;
              }
              if (iVar7 < -0x7fff) {
                iVar7 = -0x8000;
              }
              *(undefined2 *)(lVar3 + lVar21) = uVar5;
              *(short *)(lVar3 + 2 + lVar21) = (short)iVar7;
              iVar7 = (int)ROUND(local_184 * 32767.0 + local_184 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar7) {
                iVar7 = 0x7fff;
              }
              uVar5 = (undefined2)iVar7;
              if (iVar7 < -0x7fff) {
                uVar5 = 0x8000;
              }
              *(undefined2 *)(lVar3 + 4 + lVar21) = uVar5;
              *(undefined2 *)(lVar3 + 6 + lVar21) = 0x7fff;
              local_128 = (double)local_1c8;
              local_130 = (double)local_1d0._4_4_;
              local_138 = (double)(float)local_1d0;
              local_148 = (double)local_190;
              local_150 = (double)local_194;
              local_158 = (double)local_198;
              local_168 = (double)local_184;
              local_170 = (double)local_188;
              local_178 = (double)local_18c;
              local_160 = 0;
              local_140 = 0;
              local_110 = 0;
              uStack_108 = 0;
              local_120 = 0;
              uStack_118 = 0;
              local_100 = 0x3ff0000000000000;
              dVar22 = (double)FUN_144a91046(&local_178);
              fVar25 = fVar25 * 32767.0;
              iVar7 = (int)ROUND(fVar25 + fVar25 + 0.5) >> 1;
              if (0x7ffe < iVar7) {
                iVar7 = 0x7fff;
              }
              uVar5 = (undefined2)iVar7;
              if (iVar7 < -0x7fff) {
                uVar5 = 0x8000;
              }
              *(undefined2 *)(lVar3 + 8 + lVar21) = uVar5;
              fVar24 = fVar24 * 32767.0;
              iVar7 = (int)ROUND(fVar24 + fVar24 + 0.5) >> 1;
              if (0x7ffe < iVar7) {
                iVar7 = 0x7fff;
              }
              if (iVar7 < -0x7fff) {
                iVar7 = -0x8000;
              }
              fVar23 = fVar23 * 32767.0;
              iVar13 = (int)ROUND(fVar23 + fVar23 + 0.5) >> 1;
              if (0x7ffe < iVar13) {
                iVar13 = 0x7fff;
              }
              *(short *)(lVar3 + 10 + lVar21) = (short)iVar7;
              if (iVar13 < -0x7fff) {
                iVar13 = -0x8000;
              }
              *(short *)(lVar3 + 0xc + lVar21) = (short)iVar13;
              iVar7 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar22 < 0.0) * 4)) >> 1;
              if (0x7ffe < (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar22 < 0.0) * 4)) >>
                           1) {
                iVar7 = 0x7fff;
              }
              uVar5 = (undefined2)iVar7;
              if (iVar7 < -0x7fff) {
                uVar5 = 0x8000;
              }
              *(undefined2 *)(lVar3 + 0xe + lVar21) = uVar5;
              uVar14 = local_1d8;
              param_1 = local_208;
              param_3 = local_1e0;
              uVar15 = local_1fc;
            }
            else {
              iVar7 = (int)ROUND(local_18c * 127.0 + local_18c * 127.0 + 0.5) >> 1;
              if (0x7e < iVar7) {
                iVar7 = 0x7f;
              }
              uVar4 = (undefined1)iVar7;
              if (iVar7 < -0x7f) {
                uVar4 = 0x80;
              }
              iVar7 = (int)ROUND(local_188 * 127.0 + local_188 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar7) {
                iVar7 = 0x7f;
              }
              if (iVar7 < -0x7f) {
                iVar7 = -0x80;
              }
              *(undefined1 *)(lVar3 + uVar20 * 8) = uVar4;
              *(char *)(lVar3 + 1 + uVar20 * 8) = (char)iVar7;
              iVar7 = (int)ROUND(local_184 * 127.0 + local_184 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar7) {
                iVar7 = 0x7f;
              }
              uVar4 = (undefined1)iVar7;
              if (iVar7 < -0x7f) {
                uVar4 = 0x80;
              }
              *(undefined1 *)(lVar3 + 2 + uVar20 * 8) = uVar4;
              *(undefined1 *)(lVar3 + 3 + uVar20 * 8) = 0x7f;
              local_128 = (double)local_1c8;
              local_130 = (double)local_1d0._4_4_;
              local_138 = (double)(float)local_1d0;
              local_148 = (double)local_190;
              local_150 = (double)local_194;
              local_158 = (double)local_198;
              local_168 = (double)local_184;
              local_170 = (double)local_188;
              local_178 = (double)local_18c;
              local_160 = 0;
              local_140 = 0;
              local_110 = 0;
              uStack_108 = 0;
              local_120 = 0;
              uStack_118 = 0;
              local_100 = 0x3ff0000000000000;
              dVar22 = (double)FUN_144a91046(&local_178);
              fVar25 = fVar25 * 127.0;
              iVar7 = (int)ROUND(fVar25 + fVar25 + 0.5) >> 1;
              if (0x7e < iVar7) {
                iVar7 = 0x7f;
              }
              uVar4 = (undefined1)iVar7;
              if (iVar7 < -0x7f) {
                uVar4 = 0x80;
              }
              *(undefined1 *)(lVar3 + 4 + uVar20 * 8) = uVar4;
              fVar24 = fVar24 * 127.0;
              iVar7 = (int)ROUND(fVar24 + fVar24 + 0.5) >> 1;
              if (0x7e < iVar7) {
                iVar7 = 0x7f;
              }
              if (iVar7 < -0x7f) {
                iVar7 = -0x80;
              }
              fVar23 = fVar23 * 127.0;
              iVar13 = (int)ROUND(fVar23 + fVar23 + 0.5) >> 1;
              if (0x7e < iVar13) {
                iVar13 = 0x7f;
              }
              *(char *)(lVar3 + 5 + uVar20 * 8) = (char)iVar7;
              if (iVar13 < -0x7f) {
                iVar13 = -0x80;
              }
              *(char *)(lVar3 + 6 + uVar20 * 8) = (char)iVar13;
              iVar7 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar22 < 0.0) * 4)) >> 1;
              if (0x7e < iVar7) {
                iVar7 = 0x7f;
              }
              uVar4 = (undefined1)iVar7;
              if (iVar7 < -0x7f) {
                uVar4 = 0x80;
              }
              *(undefined1 *)(lVar3 + 7 + uVar20 * 8) = uVar4;
              uVar14 = local_1d8;
              param_1 = local_208;
              param_3 = local_1e0;
            }
          }
          if (param_11 != 0) {
            uVar8 = uVar15;
            if (((local_20c & 1) != 0) && (local_1c0[lVar18] != -1)) {
              FUN_1484ba2c4(param_1,&local_178,param_7);
              param_1 = local_208;
              uVar8 = local_178._0_4_;
            }
            *(undefined4 *)
             (*(longlong *)(param_2 + 0x100) + (ulonglong)(uint)(*(int *)(param_2 + 0x108) * iVar19)
             ) = uVar8;
          }
          uVar20 = (ulonglong)(iVar19 + 1);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 3);
        puVar17 = local_1e8 + 1;
      } while (puVar17 != local_1f0);
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484bb700 FUN_1484bb700 body=891 status=ok
// SIG undefined FUN_1484bb700(void)

void FUN_1484bb700(longlong param_1,int param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  float *pfVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  float fVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  ushort uVar22;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  int *local_e8;
  longlong *local_e0;
  int *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  uint local_b0 [2];
  undefined4 local_a8 [22];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x8c) == param_2 * 3)) {
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar21 = (ulonglong)uVar1;
    if (*(int *)(param_4 + 0x48) <= (int)uVar1) {
      local_50 = 0x800000000;
      local_b8 = (longlong)*(int *)(param_4 + 0x48);
      FUN_1484ba92c(local_b0,uVar21,1);
      local_e0 = param_3;
      if ((longlong)(int)param_3[1] != 0) {
        local_e8 = (int *)*param_3;
        local_d8 = local_e8 + (int)param_3[1];
        uVar6 = 0;
        do {
          if (0 < (int)uVar1) {
            iVar3 = *local_e8;
            lVar10 = *(longlong *)(param_4 + 0x40);
            if (*(longlong *)(param_4 + 0x40) == 0) {
              lVar10 = param_4;
            }
            uVar16 = iVar3 * 3 + 2;
            local_d0 = (ulonglong)(uVar16 >> 9);
            local_c8 = (ulonglong)(uVar16 & 0x1ff);
            uVar16 = iVar3 * 3 + 1;
            local_c0 = (ulonglong)(iVar3 * 3 & 0x1ff);
            puVar4 = local_a8;
            uVar19 = 0;
            do {
              uVar11 = 0xffffffff;
              if ((longlong)uVar19 < local_b8) {
                lVar13 = *(longlong *)(lVar10 + uVar19 * 8);
                uVar15 = 0xffffffff;
                uVar7 = 0xffffffff;
                if (lVar13 != 0) {
                  lVar13 = *(longlong *)(lVar13 + 0x78);
                  uVar11 = *(undefined4 *)(*(longlong *)(lVar13 + local_d0 * 8) + local_c8 * 4);
                  uVar15 = *(undefined4 *)
                            (*(longlong *)(lVar13 + (ulonglong)(uVar16 >> 9) * 8) +
                            (ulonglong)(uVar16 & 0x1ff) * 4);
                  uVar7 = *(undefined4 *)
                           (*(longlong *)(lVar13 + (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                           local_c0 * 4);
                }
              }
              else {
                uVar15 = 0xffffffff;
                uVar7 = 0xffffffff;
              }
              puVar4[-2] = uVar7;
              puVar4[-1] = uVar15;
              *puVar4 = uVar11;
              uVar19 = uVar19 + 1;
              puVar4 = puVar4 + 3;
            } while (uVar21 != uVar19);
          }
          puVar17 = local_b0;
          lVar10 = 0;
          do {
            local_f0 = (ulonglong)uVar6;
            if (0 < (int)uVar1) {
              uVar19 = 0;
              puVar20 = puVar17;
              do {
                uVar16 = *puVar20;
                pfVar9 = (float *)&DAT_14c84635c;
                puVar12 = &DAT_14c84635c;
                if (uVar16 != 0xffffffff) {
                  lVar13 = *(longlong *)(param_4 + 0x40);
                  if (*(longlong *)(param_4 + 0x40) == 0) {
                    lVar13 = param_4;
                  }
                  lVar13 = *(longlong *)
                            (*(longlong *)(*(longlong *)(lVar13 + uVar19 * 8) + 0x48) +
                            (ulonglong)(uVar16 >> 5 & 0x3fffff8));
                  uVar5 = (ulonglong)((uVar16 & 0xff) << 3);
                  pfVar9 = (float *)(lVar13 + uVar5);
                  puVar12 = (undefined8 *)(lVar13 + uVar5);
                }
                fVar2 = *(float *)((longlong)puVar12 + 4);
                fVar8 = *pfVar9;
                if (*(char *)(param_1 + 0x90) == '\x01') {
                  lVar13 = *(longlong *)(param_1 + 0x78) +
                           (ulonglong)*(uint *)(param_1 + 0x88) * local_f0 * 8;
                  *(float *)(lVar13 + uVar19 * 8) = fVar8;
                  *(float *)(lVar13 + 4 + uVar19 * 8) = fVar2;
                }
                else {
                  fVar18 = ABS(fVar8);
                  if ((uint)fVar18 < 0x47800000) {
                    if ((uint)fVar18 < 0x38800000) {
                      uVar22 = SUB42(fVar18 + 0.5,0);
                    }
                    else {
                      uVar22 = (ushort)((int)fVar18 + 0x8000fff +
                                        (uint)(((uint)fVar18 >> 0xd & 1) != 0) >> 0xd);
                    }
                  }
                  else {
                    uVar22 = (0x7f800000 < (uint)fVar18 | 0x3e) << 9;
                  }
                  lVar13 = (ulonglong)*(uint *)(param_1 + 0x88) * local_f0 * 4;
                  lVar14 = *(longlong *)(param_1 + 0x78) + lVar13;
                  iVar3 = movmskps((int)lVar13,ZEXT416((uint)fVar8));
                  *(ushort *)(lVar14 + uVar19 * 4) = (ushort)(iVar3 << 0xf) | uVar22;
                  fVar8 = ABS(fVar2);
                  if ((uint)fVar8 < 0x47800000) {
                    if ((uint)fVar8 < 0x38800000) {
                      fVar18 = fVar8 + 0.5;
                    }
                    else {
                      fVar8 = (float)((int)fVar8 + 0x8000fff + (uint)(((uint)fVar8 >> 0xd & 1) != 0)
                                     >> 0xd);
                      fVar18 = fVar8;
                    }
                  }
                  else {
                    fVar18 = (float)((0x7f800000 < (uint)fVar8 | 0x3e) << 9);
                  }
                  iVar3 = movmskps(fVar8,ZEXT416((uint)fVar2));
                  *(ushort *)(lVar14 + 2 + uVar19 * 4) = (ushort)(iVar3 << 0xf) | SUB42(fVar18,0);
                }
                uVar19 = uVar19 + 1;
                puVar20 = puVar20 + 3;
              } while (uVar21 != uVar19);
            }
            uVar6 = uVar6 + 1;
            lVar10 = lVar10 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar10 != 3);
          local_e8 = local_e8 + 1;
        } while (local_e8 != local_d8);
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484bbaa4 FUN_1484bbaa4 body=12 status=ok
// SIG undefined FUN_1484bbaa4(void)

void FUN_1484bbaa4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484bbaad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484bbab0 FUN_1484bbab0 body=29 status=ok
// SIG undefined FUN_1484bbab0(void)

undefined8 FUN_1484bbab0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484bbad6 FUN_1484bbad6 body=169 status=ok
// SIG undefined FUN_1484bbad6(void)

void FUN_1484bbad6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (0 < *(int *)(param_1 + 0x138)) {
    plVar1 = (longlong *)(param_1 + 0x118);
    if (*(int *)(param_1 + 0x120) == -1) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14ca85100);
    }
    else {
      FUN_1447fd100(plVar1,&DAT_14ca85100);
    }
  }
  if ((*(char *)(param_1 + 0x378) == '\x01') && (0 < *(int *)(param_1 + 0x3a0))) {
    plVar1 = (longlong *)(param_1 + 0x380);
    if (*(int *)(param_1 + 0x388) == -1) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&DAT_14ca85100);
    }
    else {
      FUN_1447fd100(plVar1,&DAT_14ca85100);
    }
  }
  *(undefined1 *)(param_1 + 0x510) = 0;
  cVar2 = FUN_144a7ebcb();
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x3a8) == '\x01')) {
    FUN_1484bea56(param_1);
    *(undefined1 *)(param_1 + 0x510) = 1;
  }
  return;
}



// FUNCTION 1484bbb92 FUN_1484bbb92 body=12 status=ok
// SIG undefined FUN_1484bbb92(void)

void FUN_1484bbb92(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484bbb9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484bbb9e FUN_1484bbb9e body=29 status=ok
// SIG undefined FUN_1484bbb9e(void)

undefined8 FUN_1484bbb9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484bbbbc FUN_1484bbbbc body=94 status=ok
// SIG undefined FUN_1484bbbbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484bbbbc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1484bbad6(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1484bbad6(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484bbc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1484bbc1a FUN_1484bbc1a body=118 status=ok
// SIG undefined FUN_1484bbc1a(void)

void FUN_1484bbc1a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146fb08e4(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1484bbc92(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484bbc92 FUN_1484bbc92 body=62 status=ok
// SIG undefined FUN_1484bbc92(void)

void FUN_1484bbc92(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484bbcd0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1484bbcd0 FUN_1484bbcd0 body=93 status=ok
// SIG undefined FUN_1484bbcd0(void)

ulonglong FUN_1484bbcd0(uint param_1,uint param_2)

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



// FUNCTION 1484bbd36 FUN_1484bbd36 body=190 status=ok
// SIG undefined FUN_1484bbd36(void)

void FUN_1484bbd36(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  undefined8 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = (int)param_4[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_144a06ca8(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 << 2);
  }
  FUN_1484bbdf6(param_2,param_3,&local_50,param_5);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bbdf6 FUN_1484bbdf6 body=875 status=ok
// SIG undefined FUN_1484bbdf6(void)

void FUN_1484bbdf6(longlong param_1,int param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  float *pfVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  float fVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  ushort uVar22;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  int *local_e8;
  longlong *local_e0;
  int *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  uint local_b0 [2];
  undefined4 local_a8 [22];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x8c) == param_2 * 3)) {
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar21 = (ulonglong)uVar1;
    if ((int)param_4[1] <= (int)uVar1) {
      local_50 = 0x800000000;
      local_b8 = (longlong)(int)param_4[1];
      FUN_1484ba92c(local_b0,uVar21,1);
      local_e0 = param_3;
      if ((longlong)(int)param_3[1] != 0) {
        local_e8 = (int *)*param_3;
        local_d8 = local_e8 + (int)param_3[1];
        uVar6 = 0;
        do {
          if (0 < (int)uVar1) {
            iVar3 = *local_e8;
            lVar10 = *param_4;
            uVar16 = iVar3 * 3 + 2;
            local_d0 = (ulonglong)(uVar16 >> 9);
            local_c8 = (ulonglong)(uVar16 & 0x1ff);
            uVar16 = iVar3 * 3 + 1;
            local_c0 = (ulonglong)(iVar3 * 3 & 0x1ff);
            puVar4 = local_a8;
            uVar19 = 0;
            do {
              uVar11 = 0xffffffff;
              if ((longlong)uVar19 < local_b8) {
                lVar13 = *(longlong *)(lVar10 + uVar19 * 8);
                uVar15 = 0xffffffff;
                uVar7 = 0xffffffff;
                if (lVar13 != 0) {
                  lVar13 = *(longlong *)(lVar13 + 0x78);
                  uVar11 = *(undefined4 *)(*(longlong *)(lVar13 + local_d0 * 8) + local_c8 * 4);
                  uVar15 = *(undefined4 *)
                            (*(longlong *)(lVar13 + (ulonglong)(uVar16 >> 9) * 8) +
                            (ulonglong)(uVar16 & 0x1ff) * 4);
                  uVar7 = *(undefined4 *)
                           (*(longlong *)(lVar13 + (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                           local_c0 * 4);
                }
              }
              else {
                uVar15 = 0xffffffff;
                uVar7 = 0xffffffff;
              }
              puVar4[-2] = uVar7;
              puVar4[-1] = uVar15;
              *puVar4 = uVar11;
              uVar19 = uVar19 + 1;
              puVar4 = puVar4 + 3;
            } while (uVar21 != uVar19);
          }
          puVar17 = local_b0;
          lVar10 = 0;
          do {
            local_f0 = (ulonglong)uVar6;
            if (0 < (int)uVar1) {
              uVar19 = 0;
              puVar20 = puVar17;
              do {
                uVar16 = *puVar20;
                pfVar9 = (float *)&DAT_14c84635c;
                puVar12 = &DAT_14c84635c;
                if (uVar16 != 0xffffffff) {
                  lVar13 = *(longlong *)
                            (*(longlong *)(*(longlong *)(*param_4 + uVar19 * 8) + 0x48) +
                            (ulonglong)(uVar16 >> 5 & 0x3fffff8));
                  uVar5 = (ulonglong)((uVar16 & 0xff) << 3);
                  pfVar9 = (float *)(lVar13 + uVar5);
                  puVar12 = (undefined8 *)(lVar13 + uVar5);
                }
                fVar2 = *(float *)((longlong)puVar12 + 4);
                fVar8 = *pfVar9;
                if (*(char *)(param_1 + 0x90) == '\x01') {
                  lVar13 = *(longlong *)(param_1 + 0x78) +
                           (ulonglong)*(uint *)(param_1 + 0x88) * local_f0 * 8;
                  *(float *)(lVar13 + uVar19 * 8) = fVar8;
                  *(float *)(lVar13 + 4 + uVar19 * 8) = fVar2;
                }
                else {
                  fVar18 = ABS(fVar8);
                  if ((uint)fVar18 < 0x47800000) {
                    if ((uint)fVar18 < 0x38800000) {
                      uVar22 = SUB42(fVar18 + 0.5,0);
                    }
                    else {
                      uVar22 = (ushort)((int)fVar18 + 0x8000fff +
                                        (uint)(((uint)fVar18 >> 0xd & 1) != 0) >> 0xd);
                    }
                  }
                  else {
                    uVar22 = (0x7f800000 < (uint)fVar18 | 0x3e) << 9;
                  }
                  lVar13 = (ulonglong)*(uint *)(param_1 + 0x88) * local_f0 * 4;
                  lVar14 = *(longlong *)(param_1 + 0x78) + lVar13;
                  iVar3 = movmskps((int)lVar13,ZEXT416((uint)fVar8));
                  *(ushort *)(lVar14 + uVar19 * 4) = (ushort)(iVar3 << 0xf) | uVar22;
                  fVar8 = ABS(fVar2);
                  if ((uint)fVar8 < 0x47800000) {
                    if ((uint)fVar8 < 0x38800000) {
                      fVar18 = fVar8 + 0.5;
                    }
                    else {
                      fVar8 = (float)((int)fVar8 + 0x8000fff + (uint)(((uint)fVar8 >> 0xd & 1) != 0)
                                     >> 0xd);
                      fVar18 = fVar8;
                    }
                  }
                  else {
                    fVar18 = (float)((0x7f800000 < (uint)fVar8 | 0x3e) << 9);
                  }
                  iVar3 = movmskps(fVar8,ZEXT416((uint)fVar2));
                  *(ushort *)(lVar14 + 2 + uVar19 * 4) = (ushort)(iVar3 << 0xf) | SUB42(fVar18,0);
                }
                uVar19 = uVar19 + 1;
                puVar20 = puVar20 + 3;
              } while (uVar21 != uVar19);
            }
            uVar6 = uVar6 + 1;
            lVar10 = lVar10 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar10 != 3);
          local_e8 = local_e8 + 1;
        } while (local_e8 != local_d8);
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484bc162 FUN_1484bc162 body=47 status=ok
// SIG undefined FUN_1484bc162(void)

void FUN_1484bc162(undefined8 *param_1,undefined8 param_2)

{
  FUN_1484b5d14(*param_1,param_2,*(undefined1 *)(param_1 + 1),*(undefined1 *)((longlong)param_1 + 9)
                ,*(undefined1 *)((longlong)param_1 + 0xb),*(undefined1 *)((longlong)param_1 + 10));
  return;
}



// FUNCTION 1484bc19c FUN_1484bc19c body=12 status=ok
// SIG undefined FUN_1484bc19c(void)

void FUN_1484bc19c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484bc1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484bc1a8 FUN_1484bc1a8 body=29 status=ok
// SIG undefined FUN_1484bc1a8(void)

undefined8 FUN_1484bc1a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484bc1c6 FUN_1484bc1c6 body=116 status=ok
// SIG undefined FUN_1484bc1c6(void)

void FUN_1484bc1c6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1484b5d14(param_1[0x15],&DAT_14ca85100,*(undefined1 *)(param_1 + 0x16),
                *(undefined1 *)((longlong)param_1 + 0xb1),*(undefined1 *)((longlong)param_1 + 0xb3),
                *(undefined1 *)((longlong)param_1 + 0xb2));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484bc230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1484bc254 FUN_1484bc254 body=12 status=ok
// SIG undefined FUN_1484bc254(void)

void FUN_1484bc254(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484bc25d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484bc260 FUN_1484bc260 body=29 status=ok
// SIG undefined FUN_1484bc260(void)

undefined8 FUN_1484bc260(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484bc27e FUN_1484bc27e body=94 status=ok
// SIG undefined FUN_1484bc27e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484bc27e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1484bbad6(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1484bbad6(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484bc2d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1484bc2dc FUN_1484bc2dc body=58 status=ok
// SIG undefined FUN_1484bc2dc(void)

longlong FUN_1484bc2dc(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FUN_1400020a8();
  }
  FUN_1484af8dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484bc36c FUN_1484bc36c body=88 status=ok
// SIG undefined FUN_1484bc36c(void)

undefined8 * FUN_1484bc36c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1484bc3c4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1484bc3c4 FUN_1484bc3c4 body=98 status=ok
// SIG undefined FUN_1484bc3c4(void)

void FUN_1484bc3c4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1484bc426 FUN_1484bc426 body=118 status=ok
// SIG undefined FUN_1484bc426(void)

void FUN_1484bc426(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484bc49e(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1484bc524(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484bc49e FUN_1484bc49e body=132 status=ok
// SIG undefined FUN_1484bc49e(void)

void FUN_1484bc49e(longlong param_1,int param_2)

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



// FUNCTION 1484bc524 FUN_1484bc524 body=62 status=ok
// SIG undefined FUN_1484bc524(void)

void FUN_1484bc524(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484bc562(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1484bc562 FUN_1484bc562 body=93 status=ok
// SIG undefined FUN_1484bc562(void)

ulonglong FUN_1484bc562(uint param_1,uint param_2)

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



// FUNCTION 1484bc5c8 FUN_1484bc5c8 body=332 status=ok
// SIG undefined FUN_1484bc5c8(void)

void FUN_1484bc5c8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined1 param_10)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_b8 [32];
  void **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = *param_9;
  local_50 = param_9[1];
  local_68 = (void *)0x0;
  local_60 = (int)param_5[1];
  lVar1 = (longlong)local_60;
  _Src = (void *)*param_5;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_144a06ca8(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar1 << 2);
  }
  local_70 = param_10;
  local_78 = &local_58;
  local_80 = param_8;
  local_88 = param_7;
  local_90 = param_6;
  local_98 = &local_68;
  FUN_1484bc716(param_1 + 0x2a0,param_2,param_3,param_4);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bc716 FUN_1484bc716 body=364 status=ok
// SIG undefined FUN_1484bc716(void)

void FUN_1484bc716(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined1 param_10)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_c8 [32];
  void **local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined1 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 1;
  FUN_146fb08e4(&local_58,0);
  *local_58 = param_6;
  local_68 = *param_9;
  local_60 = param_9[1];
  local_78 = (void *)0x0;
  local_70 = (int)param_5[1];
  lVar1 = (longlong)local_70;
  _Src = (void *)*param_5;
  if (lVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_144a06ca8(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar1 << 2);
  }
  local_80 = param_10;
  local_88 = &local_68;
  local_90 = param_8;
  local_98 = param_7;
  local_a8 = &local_78;
  local_a0 = &local_58;
  FUN_1484bc884(param_1,param_2,param_3,param_4);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bc884 FUN_1484bc884 body=3685 status=ok
// SIG undefined FUN_1484bc884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484bc884(undefined4 *param_1,longlong param_2,double param_3,int param_4,longlong *param_5
                  ,longlong *param_6,longlong param_7,longlong param_8,undefined8 *param_9,
                  char param_10)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined4 uVar31;
  double dVar32;
  ushort uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  float *local_2c0;
  float *local_2b8;
  ulonglong local_2a8;
  uint local_29c;
  undefined4 local_298;
  uint local_294;
  double local_290;
  uint *local_288;
  undefined4 *local_280;
  undefined4 local_274;
  ulonglong local_270;
  longlong local_268;
  longlong *local_260;
  longlong *local_258;
  uint *local_250;
  uint *local_248;
  longlong local_240;
  undefined8 local_238;
  float local_230;
  int local_228 [4];
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  uint local_1e8;
  undefined4 local_1e4;
  uint local_1e0 [2];
  undefined4 local_1d8 [22];
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  *(int *)(param_2 + 8) = param_4;
  if (param_4 != 0) {
    if (param_8 == 0) {
      local_29c = 0;
    }
    else {
      local_29c = (uint)CONCAT71((int7)((ulonglong)param_1 >> 8),*(char *)(param_1 + 1) == '\0');
    }
    uVar28 = *(uint *)(param_6 + 1);
    local_240 = (longlong)(int)uVar28;
    uVar20 = 1;
    if (1 < (int)uVar28) {
      uVar20 = uVar28;
    }
    uVar28 = param_4 * 3;
    local_180 = 0x800000000;
    local_290 = param_3;
    local_280 = param_1;
    FUN_1484ba92c(local_1e0,uVar20,1);
    FUN_1408e3634(param_2 + 0x98,uVar28,1);
    FUN_1408e36f6(param_2 + 0x10,uVar28,uVar20,1);
    FUN_140964b22(param_2 + 0xd8,uVar28,1);
    iVar8 = *(int *)(param_2 + 0x138);
    *(uint *)(param_2 + 0x138) = iVar8 + uVar28;
    uVar7 = *(int *)(param_2 + 0x13c) - iVar8;
    puVar9 = (undefined4 *)(ulonglong)uVar7;
    if (uVar7 < uVar28) {
      puVar9 = (undefined4 *)FUN_1447808da(param_2 + 0x130);
    }
    dVar32 = local_290;
    if ((param_10 == '\0') && (puVar9 = local_280, *(char *)((longlong)local_280 + 0xa2) != '\x01'))
    {
      local_274 = 0;
    }
    else {
      if (*(longlong *)(param_2 + 0x368) != 0) {
        puVar9 = (undefined4 *)FUN_1400020a8();
      }
      *(undefined8 *)(param_2 + 0x368) = 0;
      *(undefined8 *)(param_2 + 0x370) = 0;
      local_274 = (undefined4)CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
    }
    auVar4 = _DAT_1499319a0;
    puVar9 = local_280;
    if ((longlong)(int)param_5[1] != 0) {
      puVar10 = (uint *)*param_5;
      local_250 = puVar10 + (int)param_5[1];
      local_258 = (longlong *)(local_280 + 0xc);
      local_260 = (longlong *)(param_2 + 0x368);
      uVar28 = 0;
      lVar22 = 0;
      do {
        puVar9 = local_280;
        uVar7 = *puVar10;
        local_270 = (ulonglong)uVar7;
        lVar30 = *(longlong *)
                  (*(longlong *)((longlong)dVar32 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
        local_208 = *(undefined4 *)(lVar30 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        local_210 = *(undefined8 *)(lVar30 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        lVar30 = *param_6;
        uVar13 = uVar7 * 3 + 2;
        local_288 = (uint *)(ulonglong)(uVar13 >> 9);
        uVar14 = (ulonglong)(uVar13 & 0x1ff);
        uVar13 = uVar7 * 3 + 1;
        uVar18 = (ulonglong)(uVar13 >> 9);
        uVar23 = (ulonglong)(uVar13 & 0x1ff);
        uVar24 = (ulonglong)(uVar7 * 3 >> 9);
        local_2a8 = (ulonglong)(uVar7 * 3 & 0x1ff);
        puVar19 = local_1d8;
        uVar29 = 0;
        do {
          uVar21 = 0xffffffff;
          if ((longlong)uVar29 < local_240) {
            lVar26 = *(longlong *)(lVar30 + uVar29 * 8);
            uVar16 = 0xffffffff;
            uVar31 = 0xffffffff;
            if (lVar26 != 0) {
              lVar26 = *(longlong *)(lVar26 + 0x78);
              uVar31 = *(undefined4 *)(*(longlong *)(lVar26 + (longlong)local_288 * 8) + uVar14 * 4)
              ;
              uVar16 = *(undefined4 *)(*(longlong *)(lVar26 + uVar18 * 8) + uVar23 * 4);
              uVar21 = *(undefined4 *)(*(longlong *)(lVar26 + uVar24 * 8) + local_2a8 * 4);
            }
          }
          else {
            uVar16 = 0xffffffff;
            uVar31 = 0xffffffff;
          }
          puVar19[-2] = uVar21;
          puVar19[-1] = uVar16;
          *puVar19 = uVar31;
          uVar29 = uVar29 + 1;
          puVar19 = puVar19 + 3;
        } while (uVar20 != uVar29);
        local_228[0] = 0;
        local_228[3] = 0;
        local_218 = 0;
        local_214 = 0;
        if (param_7 != 0) {
          lVar30 = *(longlong *)(param_7 + 0x78);
          local_214 = *(undefined4 *)(*(longlong *)(lVar30 + (longlong)local_288 * 8) + uVar14 * 4);
          local_218 = *(undefined4 *)(*(longlong *)(lVar30 + uVar18 * 8) + uVar23 * 4);
          local_228[3] = *(undefined4 *)(*(longlong *)(lVar30 + uVar24 * 8) + local_2a8 * 4);
        }
        local_228[1] = 0;
        local_228[2] = 0;
        if (param_8 != 0) {
          lVar30 = *(longlong *)(param_8 + 0x78);
          local_228[2] = *(undefined4 *)
                          (*(longlong *)(lVar30 + (longlong)local_288 * 8) + uVar14 * 4);
          local_228[1] = *(undefined4 *)(*(longlong *)(lVar30 + uVar18 * 8) + uVar23 * 4);
          local_228[0] = *(int *)(*(longlong *)(lVar30 + uVar24 * 8) + local_2a8 * 4);
        }
        local_298 = *local_280;
        local_294 = uVar28;
        local_248 = puVar10;
        if ((*(char *)((longlong)local_280 + 5) == '\x01') &&
           (pcVar2 = *(code **)(local_280 + 4), pcVar2 != (code *)0x0)) {
          local_238 = (double)CONCAT44(local_238._4_4_,uVar7);
          local_178 = local_290;
          plVar15 = *(longlong **)(local_280 + 8);
          if (*(longlong **)(local_280 + 8) == (longlong *)0x0) {
            plVar15 = local_258;
          }
          local_268 = lVar22;
          uVar11 = (**(code **)(*plVar15 + 8))();
          (*pcVar2)(&local_1e4,uVar11,&local_178,&local_238);
          local_298 = local_1e4;
          local_29c = 0;
        }
        lVar22 = (longlong)(int)lVar22;
        local_288 = local_1e0;
        lVar30 = 0;
        do {
          uVar7 = *(uint *)((longlong)&local_210 + lVar30 * 4);
          lVar26 = *(longlong *)
                    (*(longlong *)((longlong)local_290 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar14 = (ulonglong)(uVar7 & 0x1ff);
          dVar32 = *(double *)(lVar26 + 0x10 + uVar14 * 0x18);
          dVar1 = *(double *)(lVar26 + 8 + uVar14 * 0x18);
          lVar3 = *(longlong *)(param_2 + 0xc0);
          uVar23 = (ulonglong)(*(int *)(param_2 + 200) * uVar28);
          *(float *)(lVar3 + uVar23) = (float)*(double *)(lVar26 + uVar14 * 0x18);
          *(float *)(lVar3 + 4 + uVar23) = (float)dVar1;
          *(float *)(lVar3 + 8 + uVar23) = (float)dVar32;
          uVar21 = (undefined4)local_270;
          local_2a8 = lVar30;
          local_268 = lVar22;
          if (*(char *)((longlong)puVar9 + 0xa1) == '\x01') {
            FUN_146c13dec(local_290,&local_178,local_270 & 0xffffffff);
            local_230 = (float)local_168;
            local_238 = (double)CONCAT44((float)local_170,(float)local_178);
          }
          else {
            if ((param_7 == 0) || (iVar8 = local_228[lVar30 + 3], iVar8 == -1)) {
              local_178 = DAT_14c846370;
              uVar31 = DAT_14c846378;
              if (*(char *)((longlong)local_290 + 0x70) != '\0') {
                lVar22 = *(longlong *)
                          (*(longlong *)((longlong)local_290 + 0x60) + (ulonglong)(uVar7 >> 9) * 8);
                local_178 = *(double *)(lVar22 + uVar14 * 0xc);
                uVar31 = *(undefined4 *)(lVar22 + 8 + uVar14 * 0xc);
              }
              local_170 = (double)CONCAT44(local_170._4_4_,uVar31);
            }
            else {
              lVar22 = *(longlong *)(param_7 + 0x48);
              lVar30 = 0;
              do {
                uVar13 = iVar8 * 3 + (int)lVar30;
                *(undefined4 *)((longlong)&local_178 + lVar30 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(lVar22 + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 4);
                lVar30 = lVar30 + 1;
              } while (lVar30 != 3);
            }
            local_230 = local_170._0_4_;
            local_238 = local_178;
          }
          uVar14 = (ulonglong)uVar28;
          local_178 = (double)CONCAT44(local_178._4_4_,(int)local_2a8);
          local_2b8 = &local_200;
          local_2c0 = &local_1f4;
          local_2c8 = &local_238;
          local_294 = uVar28;
          local_1e8 = uVar7;
          local_1e4 = uVar21;
          (*(code *)*param_9)(param_9[1],&local_1e8,&local_1e4,&local_178);
          fVar34 = local_230;
          fVar36 = (float)local_238;
          fVar35 = local_238._4_4_;
          lVar22 = *(longlong *)(param_2 + 0x70);
          if (*(char *)(param_2 + 0x91) == '\x01') {
            lVar30 = uVar14 * 0x10;
            iVar8 = (int)ROUND(local_1f4 * 32767.0 + local_1f4 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar6 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar6 = 0x8000;
            }
            iVar8 = (int)ROUND(local_1f0 * 32767.0 + local_1f0 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar12 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar12 = 0x8000;
            }
            *(undefined2 *)(lVar22 + lVar30) = uVar6;
            *(undefined2 *)(lVar22 + 2 + lVar30) = uVar12;
            iVar8 = (int)ROUND(local_1ec * 32767.0 + local_1ec * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar6 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar6 = 0x8000;
            }
            *(undefined2 *)(lVar22 + 4 + lVar30) = uVar6;
            *(undefined2 *)(lVar22 + 6 + lVar30) = 0x7fff;
            local_128 = (double)local_230;
            local_130 = (double)local_238._4_4_;
            local_138 = (double)(float)local_238;
            local_148 = (double)local_1f8;
            local_150 = (double)local_1fc;
            local_158 = (double)local_200;
            local_168 = (double)local_1ec;
            local_170 = (double)local_1f0;
            local_178 = (double)local_1f4;
            local_160 = 0;
            local_140 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_100 = 0x3ff0000000000000;
            dVar32 = (double)FUN_144a91046(&local_178);
            fVar36 = fVar36 * 32767.0;
            iVar8 = (int)ROUND(fVar36 + fVar36 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar6 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar6 = 0x8000;
            }
            *(undefined2 *)(lVar22 + 8 + lVar30) = uVar6;
            fVar35 = fVar35 * 32767.0;
            iVar8 = (int)ROUND(fVar35 + fVar35 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            if (iVar8 < -0x7fff) {
              iVar8 = -0x8000;
            }
            fVar34 = fVar34 * 32767.0;
            iVar17 = (int)ROUND(fVar34 + fVar34 + 0.5) >> 1;
            if (0x7ffe < iVar17) {
              iVar17 = 0x7fff;
            }
            *(short *)(lVar22 + 10 + lVar30) = (short)iVar8;
            if (iVar17 < -0x7fff) {
              iVar17 = -0x8000;
            }
            *(short *)(lVar22 + 0xc + lVar30) = (short)iVar17;
            iVar8 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar32 < 0.0) * 4)) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar6 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar6 = 0x8000;
            }
            *(undefined2 *)(lVar22 + 0xe + lVar30) = uVar6;
          }
          else {
            iVar8 = (int)ROUND(local_1f4 * 127.0 + local_1f4 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar5 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar5 = 0x80;
            }
            iVar8 = (int)ROUND(local_1f0 * 127.0 + local_1f0 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            if (iVar8 < -0x7f) {
              iVar8 = -0x80;
            }
            *(undefined1 *)(lVar22 + uVar14 * 8) = uVar5;
            *(char *)(lVar22 + 1 + uVar14 * 8) = (char)iVar8;
            iVar8 = (int)ROUND(local_1ec * 127.0 + local_1ec * 127.0 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar5 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar5 = 0x80;
            }
            *(undefined1 *)(lVar22 + 2 + uVar14 * 8) = uVar5;
            *(undefined1 *)(lVar22 + 3 + uVar14 * 8) = 0x7f;
            local_128 = (double)local_230;
            local_130 = (double)local_238._4_4_;
            local_138 = (double)(float)local_238;
            local_148 = (double)local_1f8;
            local_150 = (double)local_1fc;
            local_158 = (double)local_200;
            local_168 = (double)local_1ec;
            local_170 = (double)local_1f0;
            local_178 = (double)local_1f4;
            local_160 = 0;
            local_140 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_100 = 0x3ff0000000000000;
            dVar32 = (double)FUN_144a91046(&local_178);
            fVar36 = fVar36 * 127.0;
            iVar8 = (int)ROUND(fVar36 + fVar36 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar5 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar5 = 0x80;
            }
            *(undefined1 *)(lVar22 + 4 + uVar14 * 8) = uVar5;
            fVar35 = fVar35 * 127.0;
            iVar8 = (int)ROUND(fVar35 + fVar35 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            if (iVar8 < -0x7f) {
              iVar8 = -0x80;
            }
            fVar34 = fVar34 * 127.0;
            iVar17 = (int)ROUND(fVar34 + fVar34 + 0.5) >> 1;
            if (0x7e < iVar17) {
              iVar17 = 0x7f;
            }
            *(char *)(lVar22 + 5 + uVar14 * 8) = (char)iVar8;
            if (iVar17 < -0x7f) {
              iVar17 = -0x80;
            }
            *(char *)(lVar22 + 6 + uVar14 * 8) = (char)iVar17;
            iVar8 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar32 < 0.0) * 4)) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar5 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar5 = 0x80;
            }
            *(undefined1 *)(lVar22 + 7 + uVar14 * 8) = uVar5;
          }
          lVar22 = local_268;
          puVar9 = local_280;
          uVar28 = local_294;
          uVar23 = local_2a8;
          uVar18 = 0;
          puVar10 = local_288;
          do {
            uVar7 = *puVar10;
            puVar25 = (uint *)&DAT_14c84635c;
            puVar27 = &DAT_14c84635c;
            if (uVar7 != 0xffffffff) {
              lVar30 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*param_6 + uVar18 * 8) + 0x48) +
                        (ulonglong)(uVar7 >> 5 & 0x3fffff8));
              uVar24 = (ulonglong)((uVar7 & 0xff) << 3);
              puVar25 = (uint *)(lVar30 + uVar24);
              puVar27 = (undefined8 *)(lVar30 + uVar24);
            }
            uVar7 = *(uint *)((longlong)puVar27 + 4);
            uVar13 = *puVar25;
            if (*(char *)(param_2 + 0x90) == '\x01') {
              lVar30 = *(longlong *)(param_2 + 0x78) +
                       (ulonglong)*(uint *)(param_2 + 0x88) * uVar14 * 8;
              *(uint *)(lVar30 + uVar18 * 8) = uVar13;
              *(uint *)(lVar30 + 4 + uVar18 * 8) = uVar7;
            }
            else {
              fVar36 = (float)(uVar13 & auVar4._0_4_);
              if ((uint)fVar36 < 0x47800000) {
                if ((uint)fVar36 < 0x38800000) {
                  uVar33 = SUB42(fVar36 + 0.5,0);
                }
                else {
                  uVar33 = (ushort)((int)fVar36 + 0x8000fff + (uint)(((uint)fVar36 >> 0xd & 1) != 0)
                                   >> 0xd);
                }
              }
              else {
                uVar33 = (0x7f800000 < (uint)fVar36 | 0x3e) << 9;
              }
              lVar26 = (ulonglong)*(uint *)(param_2 + 0x88) * uVar14 * 4;
              lVar30 = *(longlong *)(param_2 + 0x78) + lVar26;
              iVar8 = movmskps((int)lVar26,ZEXT416(uVar13));
              *(ushort *)(lVar30 + uVar18 * 4) = (ushort)(iVar8 << 0xf) | uVar33;
              fVar36 = (float)(uVar7 & auVar4._0_4_);
              if ((uint)fVar36 < 0x47800000) {
                if ((uint)fVar36 < 0x38800000) {
                  fVar35 = fVar36 + 0.5;
                }
                else {
                  fVar36 = (float)((int)fVar36 + 0x8000fff + (uint)(((uint)fVar36 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar35 = fVar36;
                }
              }
              else {
                fVar35 = (float)((0x7f800000 < (uint)fVar36 | 0x3e) << 9);
              }
              iVar8 = movmskps(fVar36,ZEXT416(uVar7));
              *(ushort *)(lVar30 + 2 + uVar18 * 4) = (ushort)(iVar8 << 0xf) | SUB42(fVar35,0);
            }
            uVar18 = uVar18 + 1;
            puVar10 = puVar10 + 3;
          } while (uVar20 != uVar18);
          uVar21 = local_298;
          if (((local_29c & 1) != 0) && (local_228[local_2a8] != -1)) {
            FUN_1484ba2c4(local_280,&local_178,param_8);
            uVar21 = local_178._0_4_;
          }
          *(undefined4 *)
           (*(longlong *)(param_2 + 0x100) + (ulonglong)(*(int *)(param_2 + 0x108) * uVar28)) =
               uVar21;
          *(uint *)(*(longlong *)(param_2 + 0x130) + lVar22 * 4) = uVar28;
          lVar22 = lVar22 + 1;
          uVar28 = uVar28 + 1;
          lVar30 = uVar23 + 1;
          local_288 = local_288 + 1;
        } while (lVar30 != 3);
        if ((char)local_274 != '\0') {
          iVar8 = *(int *)(param_2 + 0x370);
          *(uint *)(param_2 + 0x370) = iVar8 + 1U;
          if (*(uint *)(param_2 + 0x374) < iVar8 + 1U) {
            FUN_1446f48e2(local_260,iVar8);
          }
          *(int *)(*local_260 + (longlong)iVar8 * 4) = (int)local_270;
        }
        puVar10 = local_248 + 1;
        dVar32 = local_290;
      } while (puVar10 != local_250);
    }
    if (*(char *)((longlong)puVar9 + 0xa2) != '\0') {
      *(undefined1 *)(param_2 + 0x378) = 1;
      FUN_1484b60de(puVar9,param_2,dVar32,0);
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484bd6fc FUN_1484bd6fc body=12 status=ok
// SIG undefined FUN_1484bd6fc(void)

void FUN_1484bd6fc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484bd705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484bd708 FUN_1484bd708 body=29 status=ok
// SIG undefined FUN_1484bd708(void)

undefined8 FUN_1484bd708(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484bd726 FUN_1484bd726 body=94 status=ok
// SIG undefined FUN_1484bd726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484bd726(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1484b585e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1484b585e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484bd77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1484bd784 FUN_1484bd784 body=109 status=ok
// SIG undefined FUN_1484bd784(void)

void FUN_1484bd784(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484bd942(param_1,iVar1);
    }
    FUN_1484bd92a((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1484bd9c8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484bd7f2 FUN_1484bd7f2 body=311 status=ok
// SIG undefined FUN_1484bd7f2(void)

void FUN_1484bd7f2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_b8 [32];
  void **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = *param_9;
  local_50 = param_9[1];
  local_68 = (void *)0x0;
  local_60 = (int)param_5[1];
  lVar1 = (longlong)local_60;
  _Src = (void *)*param_5;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_144a06ca8(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar1 << 2);
  }
  local_78 = &local_58;
  local_80 = param_8;
  local_88 = param_7;
  local_90 = param_6;
  local_98 = &local_68;
  FUN_1484bdadc(param_1 + 0x2a0,param_2,param_3,param_4);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bd92a FUN_1484bd92a body=23 status=ok
// SIG undefined FUN_1484bd92a(void)

void FUN_1484bd92a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 1484bd942 FUN_1484bd942 body=132 status=ok
// SIG undefined FUN_1484bd942(void)

void FUN_1484bd942(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484bd9c8 FUN_1484bd9c8 body=62 status=ok
// SIG undefined FUN_1484bd9c8(void)

void FUN_1484bd9c8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484bda06(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1484bda06 FUN_1484bda06 body=93 status=ok
// SIG undefined FUN_1484bda06(void)

ulonglong FUN_1484bda06(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1484bdadc FUN_1484bdadc body=3652 status=ok
// SIG undefined FUN_1484bdadc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484bdadc(uint *param_1,longlong param_2,double param_3,int param_4,longlong *param_5,
                  longlong param_6,longlong param_7,longlong param_8,undefined8 *param_9)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  double dVar32;
  ushort uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  float *local_2c0;
  float *local_2b8;
  char local_2a1;
  ulonglong local_2a0;
  uint *local_298;
  ulonglong local_290;
  uint local_288;
  uint local_284;
  uint *local_280;
  double local_278;
  longlong local_270;
  longlong *local_268;
  ulonglong local_260;
  uint *local_258;
  uint *local_250;
  uint *local_248;
  longlong local_240;
  undefined8 local_238;
  float local_230;
  int local_228 [4];
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  uint local_1e8;
  undefined4 local_1e4;
  uint local_1e0 [2];
  undefined4 local_1d8 [22];
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  *(int *)(param_2 + 8) = param_4;
  if (param_4 != 0) {
    if (param_8 == 0) {
      local_288 = 0;
    }
    else {
      local_288 = (uint)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1[1] == '\0');
    }
    uVar19 = *(uint *)(param_6 + 0x48);
    local_240 = (longlong)(int)uVar19;
    uVar21 = 1;
    if (1 < (int)uVar19) {
      uVar21 = uVar19;
    }
    uVar19 = param_4 * 3;
    local_180 = 0x800000000;
    local_298 = param_1;
    local_278 = param_3;
    FUN_1484ba92c(local_1e0,uVar21,1);
    FUN_1408e3634(param_2 + 0x98,uVar19,1);
    FUN_1408e36f6(param_2 + 0x10,uVar19,uVar21,1);
    FUN_140964b22(param_2 + 0xd8,uVar19,1);
    iVar8 = *(int *)(param_2 + 0x138);
    *(uint *)(param_2 + 0x138) = iVar8 + uVar19;
    if ((uint)(*(int *)(param_2 + 0x13c) - iVar8) < uVar19) {
      FUN_1447808da(param_2 + 0x130);
    }
    local_2a1 = *(char *)((longlong)local_298 + 0xa2);
    if (local_2a1 == '\x01') {
      if (*(longlong *)(param_2 + 0x368) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_2 + 0x368) = 0;
      *(undefined8 *)(param_2 + 0x370) = 0;
    }
    auVar4 = _DAT_1499319a0;
    if ((longlong)(int)param_5[1] != 0) {
      puVar10 = (uint *)*param_5;
      local_250 = puVar10 + (int)param_5[1];
      local_258 = local_298 + 0xc;
      local_268 = (longlong *)(param_2 + 0x368);
      uVar19 = 0;
      lVar31 = 0;
      do {
        uVar9 = *puVar10;
        uVar23 = (ulonglong)uVar9;
        lVar24 = *(longlong *)
                  (*(longlong *)((longlong)local_278 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
        local_208 = *(undefined4 *)(lVar24 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
        local_210 = *(undefined8 *)(lVar24 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
        lVar24 = *(longlong *)(param_6 + 0x40);
        if (*(longlong *)(param_6 + 0x40) == 0) {
          lVar24 = param_6;
        }
        uVar14 = uVar9 * 3 + 2;
        local_280 = (uint *)(ulonglong)(uVar14 >> 9);
        uVar18 = (ulonglong)(uVar14 & 0x1ff);
        uVar14 = uVar9 * 3 + 1;
        uVar25 = (ulonglong)(uVar14 >> 9);
        uVar17 = (ulonglong)(uVar14 & 0x1ff);
        uVar28 = (ulonglong)(uVar9 * 3 >> 9);
        local_2a0 = (ulonglong)(uVar9 * 3 & 0x1ff);
        puVar20 = local_1d8;
        uVar30 = 0;
        do {
          uVar22 = 0xffffffff;
          if ((longlong)uVar30 < local_240) {
            lVar27 = *(longlong *)(lVar24 + uVar30 * 8);
            uVar7 = 0xffffffff;
            uVar15 = 0xffffffff;
            if (lVar27 != 0) {
              lVar27 = *(longlong *)(lVar27 + 0x78);
              uVar15 = *(undefined4 *)(*(longlong *)(lVar27 + (longlong)local_280 * 8) + uVar18 * 4)
              ;
              uVar7 = *(undefined4 *)(*(longlong *)(lVar27 + uVar25 * 8) + uVar17 * 4);
              uVar22 = *(undefined4 *)(*(longlong *)(lVar27 + uVar28 * 8) + local_2a0 * 4);
            }
          }
          else {
            uVar7 = 0xffffffff;
            uVar15 = 0xffffffff;
          }
          puVar20[-2] = uVar22;
          puVar20[-1] = uVar7;
          *puVar20 = uVar15;
          uVar30 = uVar30 + 1;
          puVar20 = puVar20 + 3;
        } while (uVar21 != uVar30);
        local_228[0] = 0;
        local_228[3] = 0;
        local_218 = 0;
        local_214 = 0;
        if (param_7 != 0) {
          lVar24 = *(longlong *)(param_7 + 0x78);
          local_214 = *(undefined4 *)(*(longlong *)(lVar24 + (longlong)local_280 * 8) + uVar18 * 4);
          local_218 = *(undefined4 *)(*(longlong *)(lVar24 + uVar25 * 8) + uVar17 * 4);
          local_228[3] = *(undefined4 *)(*(longlong *)(lVar24 + uVar28 * 8) + local_2a0 * 4);
        }
        local_228[1] = 0;
        local_228[2] = 0;
        if (param_8 != 0) {
          lVar24 = *(longlong *)(param_8 + 0x78);
          local_228[2] = *(undefined4 *)
                          (*(longlong *)(lVar24 + (longlong)local_280 * 8) + uVar18 * 4);
          local_228[1] = *(undefined4 *)(*(longlong *)(lVar24 + uVar25 * 8) + uVar17 * 4);
          local_228[0] = *(int *)(*(longlong *)(lVar24 + uVar28 * 8) + local_2a0 * 4);
        }
        local_290 = (ulonglong)*local_298;
        local_284 = uVar19;
        local_260 = uVar23;
        local_248 = puVar10;
        if ((*(char *)((longlong)local_298 + 5) == '\x01') &&
           (pcVar2 = *(code **)(local_298 + 4), pcVar2 != (code *)0x0)) {
          local_238 = (double)CONCAT44(local_238._4_4_,uVar9);
          local_178 = local_278;
          puVar10 = *(uint **)(local_298 + 8);
          if (*(uint **)(local_298 + 8) == (uint *)0x0) {
            puVar10 = local_258;
          }
          local_270 = lVar31;
          uVar11 = (**(code **)(*(longlong *)puVar10 + 8))();
          (*pcVar2)(&local_1e4,uVar11,&local_178,&local_238);
          local_290 = CONCAT44(local_290._4_4_,local_1e4);
          local_288 = 0;
        }
        lVar31 = (longlong)(int)lVar31;
        local_280 = local_1e0;
        lVar24 = 0;
        uVar19 = local_284;
        do {
          uVar9 = *(uint *)((longlong)&local_210 + lVar24 * 4);
          lVar27 = *(longlong *)
                    (*(longlong *)((longlong)local_278 + 0x10) + (ulonglong)(uVar9 >> 9) * 8);
          uVar18 = (ulonglong)(uVar9 & 0x1ff);
          dVar32 = *(double *)(lVar27 + 0x10 + uVar18 * 0x18);
          dVar1 = *(double *)(lVar27 + 8 + uVar18 * 0x18);
          lVar3 = *(longlong *)(param_2 + 0xc0);
          uVar17 = (ulonglong)(*(int *)(param_2 + 200) * uVar19);
          *(float *)(lVar3 + uVar17) = (float)*(double *)(lVar27 + uVar18 * 0x18);
          *(float *)(lVar3 + 4 + uVar17) = (float)dVar1;
          *(float *)(lVar3 + 8 + uVar17) = (float)dVar32;
          local_2a0 = lVar24;
          local_270 = lVar31;
          if (*(char *)((longlong)local_298 + 0xa1) == '\x01') {
            FUN_146c13dec(local_278,&local_178,uVar23 & 0xffffffff);
            local_230 = (float)local_168;
            local_238 = (double)CONCAT44((float)local_170,(float)local_178);
          }
          else {
            if ((param_7 == 0) || (iVar8 = local_228[lVar24 + 3], iVar8 == -1)) {
              local_178 = DAT_14c846370;
              uVar22 = DAT_14c846378;
              if (*(char *)((longlong)local_278 + 0x70) != '\0') {
                lVar31 = *(longlong *)
                          (*(longlong *)((longlong)local_278 + 0x60) + (ulonglong)(uVar9 >> 9) * 8);
                local_178 = *(double *)(lVar31 + uVar18 * 0xc);
                uVar22 = *(undefined4 *)(lVar31 + 8 + uVar18 * 0xc);
              }
              local_170 = (double)CONCAT44(local_170._4_4_,uVar22);
            }
            else {
              lVar31 = *(longlong *)(param_7 + 0x48);
              lVar24 = 0;
              do {
                uVar14 = iVar8 * 3 + (int)lVar24;
                *(undefined4 *)((longlong)&local_178 + lVar24 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(lVar31 + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
                lVar24 = lVar24 + 1;
              } while (lVar24 != 3);
            }
            local_230 = local_170._0_4_;
            local_238 = local_178;
          }
          uVar18 = (ulonglong)uVar19;
          local_178 = (double)CONCAT44(local_178._4_4_,(int)local_2a0);
          local_2b8 = &local_200;
          local_2c0 = &local_1f4;
          local_2c8 = &local_238;
          local_284 = uVar19;
          local_1e8 = uVar9;
          local_1e4 = (int)uVar23;
          (*(code *)*param_9)(param_9[1],&local_1e8,&local_1e4,&local_178);
          fVar34 = local_230;
          fVar36 = (float)local_238;
          fVar35 = local_238._4_4_;
          lVar31 = *(longlong *)(param_2 + 0x70);
          if (*(char *)(param_2 + 0x91) == '\x01') {
            lVar24 = uVar18 * 0x10;
            iVar8 = (int)ROUND(local_1f4 * 32767.0 + local_1f4 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar6 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar6 = 0x8000;
            }
            iVar8 = (int)ROUND(local_1f0 * 32767.0 + local_1f0 * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar13 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar13 = 0x8000;
            }
            *(undefined2 *)(lVar31 + lVar24) = uVar6;
            *(undefined2 *)(lVar31 + 2 + lVar24) = uVar13;
            iVar8 = (int)ROUND(local_1ec * 32767.0 + local_1ec * 32767.0 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar6 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar6 = 0x8000;
            }
            *(undefined2 *)(lVar31 + 4 + lVar24) = uVar6;
            *(undefined2 *)(lVar31 + 6 + lVar24) = 0x7fff;
            local_128 = (double)local_230;
            local_130 = (double)local_238._4_4_;
            local_138 = (double)(float)local_238;
            local_148 = (double)local_1f8;
            local_150 = (double)local_1fc;
            local_158 = (double)local_200;
            local_168 = (double)local_1ec;
            local_170 = (double)local_1f0;
            local_178 = (double)local_1f4;
            local_160 = 0;
            local_140 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_100 = 0x3ff0000000000000;
            dVar32 = (double)FUN_144a91046(&local_178);
            fVar36 = fVar36 * 32767.0;
            iVar8 = (int)ROUND(fVar36 + fVar36 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            uVar6 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar6 = 0x8000;
            }
            *(undefined2 *)(lVar31 + 8 + lVar24) = uVar6;
            fVar35 = fVar35 * 32767.0;
            iVar8 = (int)ROUND(fVar35 + fVar35 + 0.5) >> 1;
            if (0x7ffe < iVar8) {
              iVar8 = 0x7fff;
            }
            if (iVar8 < -0x7fff) {
              iVar8 = -0x8000;
            }
            fVar34 = fVar34 * 32767.0;
            iVar16 = (int)ROUND(fVar34 + fVar34 + 0.5) >> 1;
            if (0x7ffe < iVar16) {
              iVar16 = 0x7fff;
            }
            *(short *)(lVar31 + 10 + lVar24) = (short)iVar8;
            if (iVar16 < -0x7fff) {
              iVar16 = -0x8000;
            }
            *(short *)(lVar31 + 0xc + lVar24) = (short)iVar16;
            iVar8 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar32 < 0.0) * 4)) >> 1;
            if (0x7ffe < (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar32 < 0.0) * 4)) >> 1
               ) {
              iVar8 = 0x7fff;
            }
            uVar6 = (undefined2)iVar8;
            if (iVar8 < -0x7fff) {
              uVar6 = 0x8000;
            }
            *(undefined2 *)(lVar31 + 0xe + lVar24) = uVar6;
          }
          else {
            iVar8 = (int)ROUND(local_1f4 * 127.0 + local_1f4 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar5 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar5 = 0x80;
            }
            iVar8 = (int)ROUND(local_1f0 * 127.0 + local_1f0 * 127.0 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar12 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar12 = 0x80;
            }
            *(undefined1 *)(lVar31 + uVar18 * 8) = uVar5;
            *(undefined1 *)(lVar31 + 1 + uVar18 * 8) = uVar12;
            iVar8 = (int)ROUND(local_1ec * 127.0 + local_1ec * 127.0 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar5 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar5 = 0x80;
            }
            *(undefined1 *)(lVar31 + 2 + uVar18 * 8) = uVar5;
            *(undefined1 *)(lVar31 + 3 + uVar18 * 8) = 0x7f;
            local_128 = (double)local_230;
            local_130 = (double)local_238._4_4_;
            local_138 = (double)(float)local_238;
            local_148 = (double)local_1f8;
            local_150 = (double)local_1fc;
            local_158 = (double)local_200;
            local_168 = (double)local_1ec;
            local_170 = (double)local_1f0;
            local_178 = (double)local_1f4;
            local_160 = 0;
            local_140 = 0;
            local_110 = 0;
            uStack_108 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_100 = 0x3ff0000000000000;
            dVar32 = (double)FUN_144a91046(&local_178);
            fVar36 = fVar36 * 127.0;
            iVar8 = (int)ROUND(fVar36 + fVar36 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar5 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar5 = 0x80;
            }
            *(undefined1 *)(lVar31 + 4 + uVar18 * 8) = uVar5;
            fVar35 = fVar35 * 127.0;
            iVar8 = (int)ROUND(fVar35 + fVar35 + 0.5) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            if (iVar8 < -0x7f) {
              iVar8 = -0x80;
            }
            fVar34 = fVar34 * 127.0;
            iVar16 = (int)ROUND(fVar34 + fVar34 + 0.5) >> 1;
            if (0x7e < iVar16) {
              iVar16 = 0x7f;
            }
            *(char *)(lVar31 + 5 + uVar18 * 8) = (char)iVar8;
            if (iVar16 < -0x7f) {
              iVar16 = -0x80;
            }
            *(char *)(lVar31 + 6 + uVar18 * 8) = (char)iVar16;
            iVar8 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar32 < 0.0) * 4)) >> 1;
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            uVar5 = (undefined1)iVar8;
            if (iVar8 < -0x7f) {
              uVar5 = 0x80;
            }
            *(undefined1 *)(lVar31 + 7 + uVar18 * 8) = uVar5;
          }
          uVar23 = local_260;
          lVar31 = local_270;
          uVar17 = 0;
          puVar10 = local_280;
          do {
            uVar19 = *puVar10;
            puVar26 = (uint *)&DAT_14c84635c;
            puVar29 = &DAT_14c84635c;
            if (uVar19 != 0xffffffff) {
              lVar24 = *(longlong *)(param_6 + 0x40);
              if (*(longlong *)(param_6 + 0x40) == 0) {
                lVar24 = param_6;
              }
              lVar24 = *(longlong *)
                        (*(longlong *)(*(longlong *)(lVar24 + uVar17 * 8) + 0x48) +
                        (ulonglong)(uVar19 >> 5 & 0x3fffff8));
              uVar25 = (ulonglong)((uVar19 & 0xff) << 3);
              puVar26 = (uint *)(lVar24 + uVar25);
              puVar29 = (undefined8 *)(lVar24 + uVar25);
            }
            uVar19 = *(uint *)((longlong)puVar29 + 4);
            uVar9 = *puVar26;
            if (*(char *)(param_2 + 0x90) == '\x01') {
              lVar24 = *(longlong *)(param_2 + 0x78) +
                       (ulonglong)*(uint *)(param_2 + 0x88) * uVar18 * 8;
              *(uint *)(lVar24 + uVar17 * 8) = uVar9;
              *(uint *)(lVar24 + 4 + uVar17 * 8) = uVar19;
            }
            else {
              fVar36 = (float)(uVar9 & auVar4._0_4_);
              if ((uint)fVar36 < 0x47800000) {
                if ((uint)fVar36 < 0x38800000) {
                  uVar33 = SUB42(fVar36 + 0.5,0);
                }
                else {
                  uVar33 = (ushort)((int)fVar36 + 0x8000fff + (uint)(((uint)fVar36 >> 0xd & 1) != 0)
                                   >> 0xd);
                }
              }
              else {
                uVar33 = (0x7f800000 < (uint)fVar36 | 0x3e) << 9;
              }
              lVar27 = (ulonglong)*(uint *)(param_2 + 0x88) * uVar18 * 4;
              lVar24 = *(longlong *)(param_2 + 0x78) + lVar27;
              iVar8 = movmskps((int)lVar27,ZEXT416(uVar9));
              *(ushort *)(lVar24 + uVar17 * 4) = (ushort)(iVar8 << 0xf) | uVar33;
              fVar36 = (float)(uVar19 & auVar4._0_4_);
              if ((uint)fVar36 < 0x47800000) {
                if ((uint)fVar36 < 0x38800000) {
                  fVar35 = fVar36 + 0.5;
                }
                else {
                  fVar36 = (float)((int)fVar36 + 0x8000fff + (uint)(((uint)fVar36 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar35 = fVar36;
                }
              }
              else {
                fVar35 = (float)((0x7f800000 < (uint)fVar36 | 0x3e) << 9);
              }
              iVar8 = movmskps(fVar36,ZEXT416(uVar19));
              *(ushort *)(lVar24 + 2 + uVar17 * 4) = (ushort)(iVar8 << 0xf) | SUB42(fVar35,0);
            }
            uVar17 = uVar17 + 1;
            puVar10 = puVar10 + 3;
          } while (uVar21 != uVar17);
          uVar22 = (undefined4)local_290;
          if (((local_288 & 1) != 0) && (local_228[local_2a0] != -1)) {
            FUN_1484ba2c4(local_298,&local_178,param_8);
            uVar22 = local_178._0_4_;
          }
          *(undefined4 *)
           (*(longlong *)(param_2 + 0x100) + (ulonglong)(*(int *)(param_2 + 0x108) * local_284)) =
               uVar22;
          *(uint *)(*(longlong *)(param_2 + 0x130) + lVar31 * 4) = local_284;
          lVar31 = lVar31 + 1;
          uVar19 = local_284 + 1;
          lVar24 = local_2a0 + 1;
          local_280 = local_280 + 1;
        } while (lVar24 != 3);
        if (local_2a1 != '\0') {
          uVar18 = (ulonglong)*(int *)(param_2 + 0x370);
          uVar9 = *(int *)(param_2 + 0x370) + 1;
          *(uint *)(param_2 + 0x370) = uVar9;
          if (*(uint *)(param_2 + 0x374) < uVar9) {
            local_2a0 = uVar18;
            FUN_1446f48e2(local_268,uVar18);
            uVar18 = local_2a0;
          }
          *(int *)(*local_268 + uVar18 * 4) = (int)uVar23;
        }
        puVar10 = local_248 + 1;
      } while (puVar10 != local_250);
    }
    if (*(char *)((longlong)local_298 + 0xa2) != '\0') {
      *(undefined1 *)(param_2 + 0x378) = 1;
      FUN_1484b60de(local_298,param_2,local_278,0);
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484be934 FUN_1484be934 body=12 status=ok
// SIG undefined FUN_1484be934(void)

void FUN_1484be934(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484be93d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484be940 FUN_1484be940 body=29 status=ok
// SIG undefined FUN_1484be940(void)

undefined8 FUN_1484be940(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484be95e FUN_1484be95e body=94 status=ok
// SIG undefined FUN_1484be95e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484be95e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1484b585e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1484b585e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484be9b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1484be9ce FUN_1484be9ce body=12 status=ok
// SIG undefined FUN_1484be9ce(void)

void FUN_1484be9ce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484be9d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484be9da FUN_1484be9da body=29 status=ok
// SIG undefined FUN_1484be9da(void)

undefined8 FUN_1484be9da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484be9f8 FUN_1484be9f8 body=94 status=ok
// SIG undefined FUN_1484be9f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484be9f8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1484b585e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1484b585e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484bea4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1484bea56 FUN_1484bea56 body=658 status=ok
// SIG undefined FUN_1484bea56(void)

void FUN_1484bea56(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
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
  undefined4 local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  int iStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = (longlong *)(param_1 + 0x3b0);
  FUN_14052082e();
  local_118 = (longlong *)(param_1 + 0x460);
  FUN_14052082e();
  bVar7 = true;
  do {
    bVar6 = bVar7;
    lVar8 = 0x380;
    if (bVar6) {
      lVar8 = 0x118;
    }
    iVar9 = *(int *)(param_1 + 0x20 + lVar8);
    if (iVar9 != 0) {
      plVar10 = local_118;
      if (bVar6) {
        plVar10 = local_110;
      }
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_a2 = 1;
      uStack_70 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_a1 = 0;
      uStack_a0 = 0;
      uStack_99 = 0;
      uStack_94 = 0;
      lVar4 = *(longlong *)(param_1 + 0x10 + lVar8);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        iVar9 = *(int *)(param_1 + 0x20 + lVar8);
        local_b8 = lVar4;
      }
      uStack_ac = 0;
      uStack_aa = 0;
      uStack_a4 = 1;
      lVar8 = *(longlong *)(param_1 + 0xa8);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      uVar3 = *(undefined4 *)(param_1 + 0xcc);
      uStack_98 = 1;
      iStack_a8 = iVar9 / 3;
      FUN_1471b2628(&uStack_a0,0);
      plVar5 = (longlong *)CONCAT17(uStack_99,uStack_a0);
      *plVar5 = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar5[1] = 3;
      *(undefined4 *)(plVar5 + 2) = 0xc;
      *(undefined4 *)((longlong)plVar5 + 0x14) = uVar3;
      *(undefined4 *)(plVar5 + 3) = 0;
      *(int *)((longlong)plVar5 + 0x1c) = iVar9 / 3;
      *(undefined2 *)(plVar5 + 4) = 0x100;
      *(undefined1 *)((longlong)plVar5 + 0x22) = 1;
      local_108 = local_b8;
      local_b8 = 0;
      local_100 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
      uStack_f8 = CONCAT17(uStack_a1,CONCAT16(uStack_a2,CONCAT24(uStack_a4,iStack_a8)));
      local_f0 = CONCAT17(uStack_99,uStack_a0);
      uStack_e8 = CONCAT44(uStack_94,uStack_98);
      uStack_a0 = 0;
      uStack_99 = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      local_c0 = uStack_70;
      local_d0 = uStack_80;
      uStack_cc = uStack_7c;
      uStack_c8 = uStack_78;
      uStack_c4 = uStack_74;
      local_e0 = uStack_90;
      uStack_dc = uStack_8c;
      uStack_d8 = uStack_88;
      uStack_d4 = uStack_84;
      FUN_141793e86(plVar10 + 8,&local_108);
      FUN_14005bca4(&local_108);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      if (lVar8 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar8 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar8);
        }
      }
      FUN_14005bca4(&local_b8);
    }
    bVar7 = false;
  } while (bVar6);
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484becea FUN_1484becea body=187 status=ok
// SIG undefined FUN_1484becea(void)

void FUN_1484becea(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_1484beda6(param_1);
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
    FUN_1484bee6a(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_1484bee2c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484beda6 FUN_1484beda6 body=132 status=ok
// SIG undefined FUN_1484beda6(void)

void FUN_1484beda6(longlong param_1,int param_2)

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



// FUNCTION 1484bee2c FUN_1484bee2c body=62 status=ok
// SIG undefined FUN_1484bee2c(void)

void FUN_1484bee2c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484beeb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1484bee6a FUN_1484bee6a body=69 status=ok
// SIG undefined FUN_1484bee6a(void)

void FUN_1484bee6a(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1484beeb0 FUN_1484beeb0 body=93 status=ok
// SIG undefined FUN_1484beeb0(void)

ulonglong FUN_1484beeb0(uint param_1,uint param_2)

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



// FUNCTION 1484bef9c FUN_1484bef9c body=59 status=ok
// SIG undefined FUN_1484bef9c(void)

undefined8 FUN_1484bef9c(longlong *param_1)

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



// FUNCTION 1484bf03e FUN_1484bf03e body=182 status=ok
// SIG undefined FUN_1484bf03e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484bf03e(void)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb4c37c == '\0') {
    FUN_140212f8e(&local_28);
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    FUN_14021300e(&local_20,0x7b2,1,1);
    uVar1 = (local_28 - local_20) / 10000000;
    _DAT_14cb4c318 = uVar1 << 0x20 | uVar1 & 0xffffffff;
    DAT_14cb4c37c = '\x01';
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bf0f6 FUN_1484bf0f6 body=520 status=ok
// SIG undefined FUN_1484bf0f6(void)

void FUN_1484bf0f6(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *DAT_14cb4c2c0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = 0x100000000;
  uStack_88 = &DAT_14cb4c2d8;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  uStack_78 = 0;
  if (DAT_14cb4c2f0 == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    iVar6 = DAT_14cb4c2f0;
  }
  uStack_b0 = CONCAT44(uStack_74,uStack_78);
  local_b8 = local_80;
  iStack_b4 = iStack_7c;
  local_c8 = (undefined4)local_90;
  uStack_c4 = local_90._4_4_;
  uStack_c0 = (undefined4)uStack_88;
  uStack_bc = uStack_88._4_4_;
  local_d0 = &DAT_14cb4c2c8;
  if ((iStack_7c != iVar6) || (uStack_88 != &DAT_14cb4c2d8)) {
    do {
      lVar2 = *local_d0;
      lVar5 = (longlong)iStack_b4;
      FUN_1402160b8(&local_90);
      uVar3 = uStack_a0;
      if ((double)iVar1 <
          (double)(local_90 - *(longlong *)(lVar2 + 0x30 + lVar5 * 0x40)) / 10000000.0) {
        lVar7 = (longlong)(int)uStack_a0;
        uVar4 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
        if (uStack_a0._4_4_ < uVar4) {
          FUN_1446f48e2(&local_a8,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_a8 + lVar7 * 4) = *(undefined4 *)(lVar2 + lVar5 * 0x40);
      }
      local_b8 = local_b8 & ~uStack_c4;
      FUN_1449c0562(&local_c8);
      lVar2 = local_a8;
    } while (local_d0 != &DAT_14cb4c2c8 ||
             ((undefined *)CONCAT44(uStack_bc,uStack_c0) != &DAT_14cb4c2d8 || iStack_b4 != iVar6));
    lVar5 = (longlong)(int)uStack_a0;
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        FUN_1484bf87a(*(undefined4 *)(lVar2 + lVar7));
        lVar7 = lVar7 + 4;
      } while (lVar5 * 4 != lVar7);
    }
    if (local_a8 != 0) {
      FUN_1400020a8(local_a8);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484bf300 FUN_1484bf300 body=347 status=ok
// SIG undefined FUN_1484bf300(void)

undefined4 * FUN_1484bf300(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484bf45c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  *local_38 = *(uint *)*param_2;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  uVar8 = *(uint *)((longlong)puVar1 + 0xc);
  uVar6 = *(uint *)(puVar1 + 2);
  uVar3 = *(uint *)((longlong)puVar1 + 0x14);
  local_38[4] = *(uint *)(puVar1 + 1);
  local_38[5] = uVar8;
  local_38[6] = uVar6;
  local_38[7] = uVar3;
  *(undefined8 *)(local_38 + 8) = puVar1[3];
  puVar1[3] = 0;
  local_38[10] = *(uint *)(puVar1 + 4);
  local_38[0xb] = *(uint *)((longlong)puVar1 + 0x24);
  puVar1[4] = 0;
  *(undefined8 *)(local_38 + 0xc) = puVar1[5];
  local_38[0xe] = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = *local_38;
  cVar5 = FUN_1484bf56a(uVar8,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb4c2d0 - DAT_14cb4c2fc;
    iVar10 = 1;
    if (3 < uVar6) {
      uVar9 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= DAT_14cb4c310)) {
      uVar8 = DAT_14cb4c310 - 1U & uVar8;
      local_38[0xf] = uVar8;
      puVar7 = DAT_14cb4c308;
      if (DAT_14cb4c308 == (undefined *)0x0) {
        puVar7 = &DAT_14cb4c300;
      }
      local_38[0xe] = *(uint *)(puVar7 + ((longlong)DAT_14cb4c310 - 1U & (longlong)(int)uVar8) * 4);
      puVar7 = DAT_14cb4c308;
      if (DAT_14cb4c308 == (undefined *)0x0) {
        puVar7 = &DAT_14cb4c300;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb4c310 - 1U & (longlong)(int)uVar8) * 4) = local_44
      ;
    }
    else {
      DAT_14cb4c310 = iVar10;
      FUN_1484bf6a6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bf45c FUN_1484bf45c body=269 status=ok
// SIG undefined FUN_1484bf45c(void)

int * FUN_1484bf45c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb4c2f8;
  iVar4 = DAT_14cb4c2d0;
  if (DAT_14cb4c2fc == 0) {
    iVar2 = DAT_14cb4c2d0 + 1;
    bVar7 = DAT_14cb4c2d4 == DAT_14cb4c2d0;
    DAT_14cb4c2d0 = iVar2;
    if (bVar7) {
      FUN_1406cd6a8(&DAT_14cb4c2c8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb4c2d8,1);
    puVar3 = DAT_14cb4c2e8;
    if (DAT_14cb4c2e8 == (undefined *)0x0) {
      puVar3 = &DAT_14cb4c2d8;
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
    lVar6 = (longlong)DAT_14cb4c2f8;
    DAT_14cb4c2f8 = *(int *)(DAT_14cb4c2c8 + 4 + lVar6 * 0x40);
    DAT_14cb4c2fc = DAT_14cb4c2fc + -1;
    iVar4 = iVar2;
    if (DAT_14cb4c2fc != 0) {
      *(undefined4 *)(DAT_14cb4c2c8 + (longlong)DAT_14cb4c2f8 * 0x40) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb4c2d8;
  if (DAT_14cb4c2e8 != (undefined *)0x0) {
    puVar3 = DAT_14cb4c2e8;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x40 + DAT_14cb4c2c8;
  return param_1;
}



// FUNCTION 1484bf56a FUN_1484bf56a body=188 status=ok
// SIG undefined FUN_1484bf56a(void)

undefined8 FUN_1484bf56a(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  int iVar15;
  
  if ((DAT_14cb4c2d0 - DAT_14cb4c2fc != 1) && (DAT_14cb4c2d0 != DAT_14cb4c2fc)) {
    puVar14 = &DAT_14cb4c300;
    if (DAT_14cb4c308 != (undefined *)0x0) {
      puVar14 = DAT_14cb4c308;
    }
    iVar15 = *(int *)(puVar14 + (ulonglong)(DAT_14cb4c310 - 1U & param_1) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(DAT_14cb4c2c8 + (longlong)iVar15 * 0x40);
        if (*(int *)(DAT_14cb4c2c8 + (longlong)iVar15 * 0x40) == *param_2) {
          if (*(longlong *)(piVar1 + 8) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_2;
          iVar3 = param_2[1];
          iVar4 = param_2[2];
          iVar5 = param_2[3];
          iVar6 = param_2[4];
          iVar7 = param_2[5];
          iVar8 = param_2[6];
          iVar9 = param_2[7];
          iVar10 = param_2[8];
          iVar11 = param_2[9];
          iVar12 = param_2[10];
          iVar13 = param_2[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1484bf626(*param_3);
          *param_3 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1484bf626 FUN_1484bf626 body=128 status=ok
// SIG undefined FUN_1484bf626(void)

void FUN_1484bf626(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb4c2c8;
  if (DAT_14cb4c2fc != 0) {
    *(int *)(DAT_14cb4c2c8 + (longlong)DAT_14cb4c2f8 * 0x40) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x40) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb4c2fc) {
    iVar4 = DAT_14cb4c2f8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x40) = iVar4;
  DAT_14cb4c2fc = DAT_14cb4c2fc + 1;
  puVar3 = &DAT_14cb4c2d8;
  if (DAT_14cb4c2e8 != (undefined *)0x0) {
    puVar3 = DAT_14cb4c2e8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb4c2f8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1484bf6a6 FUN_1484bf6a6 body=467 status=ok
// SIG undefined FUN_1484bf6a6(void)

void FUN_1484bf6a6(void)

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
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4c308 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb4c308,0,0,4);
  }
  uVar2 = DAT_14cb4c310;
  uVar3 = local_50;
  if (DAT_14cb4c310 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb4c300,0,DAT_14cb4c310,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb4c308;
        if (DAT_14cb4c308 == (undefined *)0x0) {
          puVar5 = &DAT_14cb4c300;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb4c310 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb4c2d8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb4c2f0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb4c2c8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x40;
        uVar9 = (longlong)(int)DAT_14cb4c310 - 1U & (longlong)*(int *)(lVar1 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x3c + lVar6) = iVar8;
        puVar5 = DAT_14cb4c308;
        if (DAT_14cb4c308 == (undefined *)0x0) {
          puVar5 = &DAT_14cb4c300;
        }
        *(undefined4 *)(lVar1 + 0x38 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb4c310 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb4c308;
        if (DAT_14cb4c308 == (undefined *)0x0) {
          puVar5 = &DAT_14cb4c300;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb4c310 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484bf87a FUN_1484bf87a body=196 status=ok
// SIG undefined FUN_1484bf87a(void)

void FUN_1484bf87a(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  
  if (DAT_14cb4c2d0 != DAT_14cb4c2fc) {
    puVar3 = &DAT_14cb4c300;
    if (DAT_14cb4c308 != (undefined *)0x0) {
      puVar3 = DAT_14cb4c308;
    }
    for (iVar1 = *(int *)(puVar3 + ((longlong)param_1 & (longlong)DAT_14cb4c310 - 1U) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x40 + DAT_14cb4c2c8 + 0x38)) {
      if (*(int *)(DAT_14cb4c2c8 + (longlong)iVar1 * 0x40) == param_1) {
        puVar3 = &DAT_14cb4c300;
        if (DAT_14cb4c308 != (undefined *)0x0) {
          puVar3 = DAT_14cb4c308;
        }
        lVar5 = (longlong)*(int *)(DAT_14cb4c2c8 + 0x3c + (longlong)iVar1 * 0x40);
        iVar4 = *(int *)(puVar3 + lVar5 * 4);
        if (iVar4 == iVar1) {
          puVar2 = (undefined4 *)(puVar3 + lVar5 * 4);
        }
        else {
          do {
            lVar5 = (longlong)iVar4;
            iVar4 = *(int *)(DAT_14cb4c2c8 + 0x38 + lVar5 * 0x40);
          } while (iVar4 != iVar1);
          puVar2 = (undefined4 *)(DAT_14cb4c2c8 + lVar5 * 0x40 + 0x38);
        }
        *puVar2 = *(undefined4 *)(DAT_14cb4c2c8 + (longlong)iVar1 * 0x40 + 0x38);
        FUN_1484bf93e();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484bf93e FUN_1484bf93e body=48 status=ok
// SIG undefined FUN_1484bf93e(void)

void FUN_1484bf93e(int param_1)

{
  if (*(longlong *)(DAT_14cb4c2c8 + 0x20 + (longlong)param_1 * 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1484bf626(param_1);
  return;
}



// FUNCTION 1484bf96e FUN_1484bf96e body=197 status=ok
// SIG undefined FUN_1484bf96e(void)

longlong FUN_1484bf96e(longlong param_1)

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
  lVar4 = FUN_140a1ade6();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1484bfa34 FUN_1484bfa34 body=38 status=ok
// SIG undefined FUN_1484bfa34(void)

undefined8 FUN_1484bfa34(undefined8 param_1,int param_2)

{
  FUN_1484bfa5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484bfa5a FUN_1484bfa5a body=196 status=ok
// SIG undefined FUN_1484bfa5a(void)

void FUN_1484bfa5a(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14aef0240;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
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
    return;
  }
  return;
}



// FUNCTION 1484bfb1e FUN_1484bfb1e body=52 status=ok
// SIG undefined FUN_1484bfb1e(void)

void FUN_1484bfb1e(longlong *param_1)

{
  FUN_1484bfb52();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484bfb52 FUN_1484bfb52 body=89 status=ok
// SIG undefined FUN_1484bfb52(void)

void FUN_1484bfb52(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 1484bfbac FUN_1484bfbac body=326 status=ok
// SIG undefined FUN_1484bfbac(void)

undefined4 *
FUN_1484bfbac(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1484bfcf4(param_1,local_50);
  uVar5 = *param_3;
  *local_48 = uVar5;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1484bfdda(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
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
      *(uint *)((longlong)local_48 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1484bfed6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484bfcf4 FUN_1484bfcf4 body=229 status=ok
// SIG undefined FUN_1484bfcf4(void)

int * FUN_1484bfcf4(longlong *param_1,int *param_2)

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



// FUNCTION 1484bfdda FUN_1484bfdda body=138 status=ok
// SIG undefined FUN_1484bfdda(void)

void FUN_1484bfdda(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1484bfe64(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1484bfe45;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1484bfe45:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1484bfe64 FUN_1484bfe64 body=114 status=ok
// SIG undefined FUN_1484bfe64(void)

void FUN_1484bfe64(longlong *param_1,int param_2)

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



// FUNCTION 1484bfed6 FUN_1484bfed6 body=477 status=ok
// SIG undefined FUN_1484bfed6(void)

void FUN_1484bfed6(longlong *param_1)

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



// FUNCTION 1484c00b4 FUN_1484c00b4 body=90 status=ok
// SIG undefined FUN_1484c00b4(void)

void FUN_1484c00b4(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1484bfe64();
  return;
}



// FUNCTION 1484c010e FUN_1484c010e body=55 status=ok
// SIG undefined FUN_1484c010e(void)

void FUN_1484c010e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aabc2e8;
  FUN_1401edd52(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484c0146 FUN_1484c0146 body=165 status=ok
// SIG undefined FUN_1484c0146(void)

void FUN_1484c0146(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = *param_4;
  local_48 = *param_3;
  local_4c = *param_2;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_58 = param_7;
  local_68 = param_5;
  uStack_60 = param_6;
  (*pcVar1)(uVar2,&local_4c,&local_48,&local_44);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c01ec FUN_1484c01ec body=110 status=ok
// SIG undefined FUN_1484c01ec(void)

void FUN_1484c01ec(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1484c025c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1484c025c FUN_1484c025c body=132 status=ok
// SIG undefined FUN_1484c025c(void)

void FUN_1484c025c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1484c02e0 FUN_1484c02e0 body=52 status=ok
// SIG undefined FUN_1484c02e0(void)

void FUN_1484c02e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484c0314(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_1484c025c(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 1484c0314 FUN_1484c0314 body=108 status=ok
// SIG undefined FUN_1484c0314(void)

ulonglong FUN_1484c0314(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1484c0380 FUN_1484c0380 body=58 status=ok
// SIG undefined FUN_1484c0380(void)

void FUN_1484c0380(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1484bee6a(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484c03ba FUN_1484c03ba body=78 status=ok
// SIG undefined FUN_1484c03ba(void)

void FUN_1484c03ba(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    FUN_1484c0408(lVar2);
    FUN_1400020a8(lVar2);
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484c03eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 1484c0408 FUN_1484c0408 body=130 status=ok
// SIG undefined FUN_1484c0408(void)

void FUN_1484c0408(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1484c048a(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    plVar1 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x80);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484c047f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1484c048a FUN_1484c048a body=44 status=ok
// SIG undefined FUN_1484c048a(void)

void FUN_1484c048a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1484c04b6 FUN_1484c04b6 body=31 status=ok
// SIG undefined FUN_1484c04b6(void)

undefined8 FUN_1484c04b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c04f0 FUN_1484c04f0 body=29 status=ok
// SIG undefined FUN_1484c04f0(void)

bool FUN_1484c04f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1484c050e FUN_1484c050e body=26 status=ok
// SIG undefined FUN_1484c050e(void)

bool FUN_1484c050e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1484c0528 FUN_1484c0528 body=101 status=ok
// SIG undefined FUN_1484c0528(void)

void FUN_1484c0528(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aef0390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aef0320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1484c058e FUN_1484c058e body=101 status=ok
// SIG undefined FUN_1484c058e(void)

void FUN_1484c058e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aef0390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aef0320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1484c05f4 FUN_1484c05f4 body=134 status=ok
// SIG undefined FUN_1484c05f4(void)

void FUN_1484c05f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aef0390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aef0320;
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
                    /* WARNING: Could not recover jumptable at 0x0001484c066b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484c067a FUN_1484c067a body=108 status=ok
// SIG undefined FUN_1484c067a(void)

void FUN_1484c067a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = param_3[4];
  uStack_34 = param_3[5];
  uStack_30 = param_3[6];
  uStack_2c = param_3[7];
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c06e8 FUN_1484c06e8 body=187 status=ok
// SIG undefined FUN_1484c06e8(void)

bool FUN_1484c06e8(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_58,0);
    lVar3 = CONCAT44(uStack_54,local_58);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_48 = param_3[4];
    uStack_44 = param_3[5];
    uStack_40 = param_3[6];
    uStack_3c = param_3[7];
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c07a6 FUN_1484c07a6 body=101 status=ok
// SIG undefined FUN_1484c07a6(void)

void FUN_1484c07a6(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
  FUN_145bfaa36(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1484c080c FUN_1484c080c body=157 status=ok
// SIG undefined FUN_1484c080c(void)

undefined1 * FUN_1484c080c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_144a5dc74(param_1 + 0x18);
  FUN_144a5dc74(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x40),4000);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined ***)(param_1 + 0x90) = &PTR_LAB_149f36510;
  *(undefined1 **)(param_1 + 0x98) = &LAB_1484c08aa;
  *(code **)(param_1 + 0x70) = FUN_146bd3274;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return param_1;
}



// FUNCTION 1484c08ec FUN_1484c08ec body=29 status=ok
// SIG undefined FUN_1484c08ec(void)

undefined8 FUN_1484c08ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c090a FUN_1484c090a body=185 status=ok
// SIG undefined FUN_1484c090a(void)

void FUN_1484c090a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x110,0x10);
  FUN_1484c09c4(puVar3,param_2);
  *puVar3 = &PTR_FUN_14aef05e0;
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = (longlong)puVar3;
  FUN_144a23f14((ulonglong)puVar3[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar3 + 0x1c));
  local_21 = 1;
  FUN_1447439e4(puVar3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c09c4 FUN_1484c09c4 body=165 status=ok
// SIG undefined FUN_1484c09c4(void)

undefined8 * FUN_1484c09c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_144a23e74(param_1,2,1);
  *param_1 = &PTR_FUN_14aef05f0;
  FUN_144a24082(param_1,L"DynamicMeshComponentDistanceField",3,0,0);
  param_1[0x16] = *param_2;
  param_1[0x18] = param_2[2];
  param_1[0x1a] = param_2[4];
  param_2[4] = 0;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[9];
  param_1[0x1e] = param_2[8];
  param_1[0x1f] = uVar3;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar2;
  if (param_1[0x18] != 0) {
    param_2[2] = 0;
  }
  param_1[0x20] = param_2[10];
  return param_1;
}



// FUNCTION 1484c0a6a FUN_1484c0a6a body=46 status=ok
// SIG undefined FUN_1484c0a6a(void)

undefined8 FUN_1484c0a6a(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  }
  return param_1;
}



// FUNCTION 1484c0a98 FUN_1484c0a98 body=73 status=ok
// SIG undefined FUN_1484c0a98(void)

void FUN_1484c0a98(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1484c0b08(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    plVar1 = (longlong *)(param_1 + 0xe0);
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xd0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001484c0ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1484c0ae2 FUN_1484c0ae2 body=38 status=ok
// SIG undefined FUN_1484c0ae2(void)

undefined8 FUN_1484c0ae2(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c0b08 FUN_1484c0b08 body=255 status=ok
// SIG undefined FUN_1484c0b08(void)

void FUN_1484c0b08(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = (int *)*param_1;
  uVar4 = *(undefined8 *)(param_1[10] + 0x10);
  pcVar2 = (code *)param_1[2];
  plVar5 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(&local_30,uVar3,uVar4);
  if ((((*(int *)(param_1[10] + 8) == *piVar1) && (*(char *)(param_1[10] + 0x18) == '\0')) &&
      ((char)piVar1[1] == '\0')) && (pcVar2 = *(code **)(piVar1 + 0x10), pcVar2 != (code *)0x0)) {
    local_38 = local_30;
    local_30 = (undefined8 *)0x0;
    plVar5 = (longlong *)(piVar1 + 0x18);
    if (*(longlong **)(piVar1 + 0x14) != (longlong *)0x0) {
      plVar5 = *(longlong **)(piVar1 + 0x14);
    }
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    (*pcVar2)(uVar4,&local_38);
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  *(undefined1 *)(param_1[10] + 0x19) = 1;
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c0c08 FUN_1484c0c08 body=132 status=ok
// SIG undefined FUN_1484c0c08(void)

void FUN_1484c0c08(longlong param_1,int param_2)

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



// FUNCTION 1484c0c8e FUN_1484c0c8e body=24 status=ok
// SIG undefined FUN_1484c0c8e(void)

void FUN_1484c0c8e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484c0ca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1484c0ca6 FUN_1484c0ca6 body=29 status=ok
// SIG undefined FUN_1484c0ca6(void)

undefined8 FUN_1484c0ca6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c0cc4 FUN_1484c0cc4 body=193 status=ok
// SIG undefined FUN_1484c0cc4(void)

void FUN_1484c0cc4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1484c0d5b;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1484c0d5b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1484c0d86 FUN_1484c0d86 body=175 status=ok
// SIG undefined FUN_1484c0d86(void)

void FUN_1484c0d86(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1484c0e0f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1484c0e0f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1484c0e36 FUN_1484c0e36 body=29 status=ok
// SIG undefined FUN_1484c0e36(void)

undefined8 FUN_1484c0e36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c0e6e FUN_1484c0e6e body=29 status=ok
// SIG undefined FUN_1484c0e6e(void)

bool FUN_1484c0e6e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1484c0e8c FUN_1484c0e8c body=26 status=ok
// SIG undefined FUN_1484c0e8c(void)

bool FUN_1484c0e8c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1484c0ea6 FUN_1484c0ea6 body=24 status=ok
// SIG undefined FUN_1484c0ea6(void)

bool FUN_1484c0ea6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1484c0ebe FUN_1484c0ebe body=101 status=ok
// SIG undefined FUN_1484c0ebe(void)

void FUN_1484c0ebe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a8900;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aef0660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1484c0f24 FUN_1484c0f24 body=101 status=ok
// SIG undefined FUN_1484c0f24(void)

void FUN_1484c0f24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a8900;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aef0660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1484c0f8a FUN_1484c0f8a body=134 status=ok
// SIG undefined FUN_1484c0f8a(void)

void FUN_1484c0f8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5a8900;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14aef0660;
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
                    /* WARNING: Could not recover jumptable at 0x0001484c1001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484c1010 FUN_1484c1010 body=46 status=ok
// SIG undefined FUN_1484c1010(void)

void FUN_1484c1010(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001484c103b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1484c103e FUN_1484c103e body=158 status=ok
// SIG undefined FUN_1484c103e(void)

bool FUN_1484c103e(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))
              (*(int *)(param_1 + 0x28) + lVar2,param_2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 1484c10de FUN_1484c10de body=169 status=ok
// SIG undefined FUN_1484c10de(void)

void FUN_1484c10de(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_2 + 1);
  local_38 = (void *)0x0;
  _Src = (void *)*param_2;
  local_30 = iVar1;
  if ((longlong)iVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144a06ca8(&local_38,iVar1,0);
    memcpy(local_38,_Src,(longlong)iVar1 * 4);
  }
  FUN_1484c1222(param_1,0,&local_38,iVar1);
  *(ulonglong *)(param_1 + 0x10) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x214) +
             *(int *)(*(longlong *)(param_1 + 8) + 0x218));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c1188 FUN_1484c1188 body=153 status=ok
// SIG undefined FUN_1484c1188(void)

void FUN_1484c1188(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x0001484c1216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1484c1222 FUN_1484c1222 body=608 status=ok
// SIG undefined FUN_1484c1222(void)

void FUN_1484c1222(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if (param_4 == 0) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    FUN_14481578e(&local_78,param_4);
    local_88 = 0;
    uStack_80 = 0;
    FUN_1447a8aa0(&local_88,param_4);
  }
  lVar4 = param_3[1];
  local_c0 = param_3;
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_3;
    lVar11 = 0;
    do {
      uVar9 = *(uint *)(lVar2 + lVar11);
      if (((-1 < (int)uVar9) &&
          (lVar10 = *(longlong *)(param_1 + 8),
          (int)uVar9 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar10 + 0x148) + (ulonglong)(uVar9 >> 9) * 8) +
                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        FUN_146beeb6c(&local_a0,lVar10,uVar9);
        dVar3 = local_90 * local_90 + local_a0 * local_a0 + local_98 * local_98;
        local_b8 = dVar3;
        sVar7 = _dtest(&local_b8);
        if ((sVar7 != 2) && (local_b8 = dVar3, sVar7 = _dtest(&local_b8), sVar7 < 1)) {
          lVar10 = (longlong)(int)uStack_70;
          uVar8 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
          if (uStack_70._4_4_ < uVar8) {
            local_c8 = lVar10;
            FUN_1446f48e2(&local_78,lVar10);
            lVar10 = local_c8;
          }
          *(uint *)(local_78 + lVar10 * 4) = uVar9;
          FUN_146beeb6c(&local_b8,*(undefined8 *)(param_1 + 8),uVar9);
          uVar6 = uStack_80;
          lVar10 = (longlong)(int)uStack_80;
          uVar9 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
          if (uStack_80._4_4_ < uVar9) {
            FUN_1403e3958(&local_88,uVar6 & 0xffffffff);
          }
          *(undefined8 *)(local_88 + 0x10 + lVar10 * 0x18) = local_a8;
          pdVar1 = (double *)(local_88 + lVar10 * 0x18);
          *pdVar1 = local_b8;
          pdVar1[1] = dStack_b0;
        }
      }
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar11);
  }
  FUN_146beec38(param_1,&local_78,&local_88,uStack_70 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  plVar5 = local_c0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484c14c2 FUN_1484c14c2 body=29 status=ok
// SIG undefined FUN_1484c14c2(void)

undefined8 FUN_1484c14c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c151a FUN_1484c151a body=29 status=ok
// SIG undefined FUN_1484c151a(void)

undefined8 FUN_1484c151a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c156c FUN_1484c156c body=29 status=ok
// SIG undefined FUN_1484c156c(void)

undefined8 FUN_1484c156c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c158c FUN_1484c158c body=31 status=ok
// SIG undefined FUN_1484c158c(void)

undefined8 FUN_1484c158c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c15c8 FUN_1484c15c8 body=93 status=ok
// SIG undefined FUN_1484c15c8(void)

void FUN_1484c15c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aef0790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1484c1626 FUN_1484c1626 body=93 status=ok
// SIG undefined FUN_1484c1626(void)

void FUN_1484c1626(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aef0790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1484c1684 FUN_1484c1684 body=126 status=ok
// SIG undefined FUN_1484c1684(void)

void FUN_1484c1684(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aef0790;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484c16f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484c170e FUN_1484c170e body=31 status=ok
// SIG undefined FUN_1484c170e(void)

undefined8 FUN_1484c170e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484c174a FUN_1484c174a body=93 status=ok
// SIG undefined FUN_1484c174a(void)

void FUN_1484c174a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aef0800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1484c17a8 FUN_1484c17a8 body=126 status=ok
// SIG undefined FUN_1484c17a8(void)

void FUN_1484c17a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aef0800;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484c1817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484c1826 FUN_1484c1826 body=21 status=ok
// SIG undefined FUN_1484c1826(void)

undefined8 FUN_1484c1826(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1484c183c FUN_1484c183c body=234 status=ok
// SIG undefined FUN_1484c183c(void)

void FUN_1484c183c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_68 = *param_3;
        uStack_64 = param_3[1];
        uStack_60 = param_3[2];
        uStack_5c = param_3[3];
        local_58 = param_3[4];
        uStack_54 = param_3[5];
        uStack_50 = param_3[6];
        uStack_4c = param_3[7];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,&local_68);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_1484c18f2;
          goto LAB_1484c1901;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1484c18f2:
    FUN_14474d06a(param_1,0);
  }
LAB_1484c1901:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c1928 FUN_1484c1928 body=48 status=ok
// SIG undefined FUN_1484c1928(void)

void FUN_1484c1928(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1484c1958 FUN_1484c1958 body=132 status=ok
// SIG undefined FUN_1484c1958(void)

void FUN_1484c1958(longlong param_1,int param_2)

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



// FUNCTION 1484c19de FUN_1484c19de body=98 status=ok
// SIG undefined FUN_1484c19de(void)

void FUN_1484c19de(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1484c1a40 FUN_1484c1a40 body=82 status=ok
// SIG undefined FUN_1484c1a40(void)

void FUN_1484c1a40(longlong param_1,longlong param_2,int param_3)

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
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1484c1a92 FUN_1484c1a92 body=138 status=ok
// SIG undefined FUN_1484c1a92(void)

void FUN_1484c1a92(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14aee6b60;
  if (param_1[6] != 0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x0001484c1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484c1c3c FUN_1484c1c3c body=1 status=ok
// SIG undefined FUN_1484c1c3c(void)

void FUN_1484c1c3c(void)

{
  return;
}



// FUNCTION 1484c1c3e FUN_1484c1c3e body=124 status=ok
// SIG undefined FUN_1484c1c3e(void)

void FUN_1484c1c3e(undefined8 param_1,int param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_38;
  local_38 = 0;
  uStack_30 = 0;
  uVar1 = FUN_1437337e4(param_3 & 0xffffffff,param_3 >> 0x20,
                        CONCAT71((int7)(param_3 >> 8),(param_2 == 7) << 3) | 2,0);
  FUN_1484c1cbc(param_1,param_2,param_3,uVar1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484c1cbc FUN_1484c1cbc body=194 status=ok
// SIG undefined FUN_1484c1cbc(void)

undefined8 FUN_1484c1cbc(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  char cVar3;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(longlong *)(param_1 + 0x18) = param_4;
  if (param_4 == 0) {
    return 0;
  }
  uVar2 = FUN_147d6e2de(param_4,0);
  *(undefined1 *)(param_1 + 0x30) = uVar2;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0xfe);
    *pbVar1 = *pbVar1 & 0xfe;
    break;
  case 5:
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0xf0) = 1;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0xfe);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0xf6) = 1;
    break;
  case 7:
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0xfe);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0xf0) = 6;
    break;
  default:
    goto switchD_1484c1d01_default;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x318))();
switchD_1484c1d01_default:
  cVar3 = FUN_1484c1d7e(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x28) == 0)) {
    return 1;
  }
  FUN_1484c1dec(param_1);
  return 1;
}



// FUNCTION 1484c1d7e FUN_1484c1d7e body=109 status=ok
// SIG undefined FUN_1484c1d7e(void)

bool FUN_1484c1d7e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) != 0)) ||
     (*(longlong *)(param_1 + 0x28) != 0)) {
    bVar3 = false;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x30);
    lVar2 = FUN_14142e422();
    lVar2 = FUN_140fc05d0(**(longlong **)(lVar2 + 0x18) + 0x20,2);
    if (cVar1 == '\x02') {
      *(longlong *)(param_1 + 0x20) = lVar2;
    }
    else {
      *(longlong *)(param_1 + 0x28) = lVar2;
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    bVar3 = true;
    if (lVar2 == 0) {
      bVar3 = *(longlong *)(param_1 + 0x28) != 0;
    }
  }
  return bVar3;
}



// FUNCTION 1484c1dec FUN_1484c1dec body=201 status=ok
// SIG undefined FUN_1484c1dec(void)

void FUN_1484c1dec(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\x02') {
    puVar6 = (undefined4 *)FUN_1484c1fca(param_1);
    if ((((*(longlong *)(param_1 + 0x20) != 0) || (*(longlong *)(param_1 + 0x28) != 0)) &&
        (*(char *)(param_1 + 0x30) == '\x02')) &&
       (lVar7 = (longlong)*(int *)(param_1 + 0xc) * (longlong)*(int *)(param_1 + 8), 0 < lVar7)) {
      uVar2 = *puVar6;
      lVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + lVar8 * 4) = uVar2;
        lVar8 = lVar8 + 1;
      } while (lVar7 - lVar8 != 0);
    }
  }
  else {
    uVar5 = *(int *)(param_1 + 0x10) - 2;
    if (uVar5 < 5) {
      uVar4 = *(undefined2 *)(&DAT_14aeff780 + (ulonglong)uVar5 * 2);
    }
    else {
      uVar4 = 0;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      if (cVar1 != '\n') {
        return;
      }
      if (*(longlong *)(param_1 + 0x28) == 0) {
        return;
      }
    }
    else if (cVar1 != '\n') {
      return;
    }
    lVar7 = (longlong)*(int *)(param_1 + 0xc) * (longlong)*(int *)(param_1 + 8);
    if (0 < lVar7) {
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x28);
        *(undefined2 *)(lVar3 + lVar8 * 8) = uVar4;
        *(undefined2 *)(lVar3 + 2 + lVar8 * 8) = uVar4;
        *(undefined2 *)(lVar3 + 4 + lVar8 * 8) = uVar4;
        *(undefined2 *)(lVar3 + 6 + lVar8 * 8) = 0x3c00;
        lVar8 = lVar8 + 1;
      } while (lVar7 - lVar8 != 0);
    }
  }
  return;
}


