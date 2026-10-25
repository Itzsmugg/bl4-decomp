// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b7f69e FUN_143b7f69e body=29 status=ok
// SIG undefined FUN_143b7f69e(void)

undefined8 FUN_143b7f69e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7f6bc FUN_143b7f6bc body=256 status=ok
// SIG undefined FUN_143b7f6bc(void)

void FUN_143b7f6bc(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar6 = (longlong)*param_2 * 8 + *(longlong *)(lVar2 + 0x7b0);
  cVar4 = FUN_1484d7e88(*(undefined8 *)(lVar2 + 0x728),lVar6,param_1[1]);
  if (cVar4 != '\0') {
    lVar5 = FUN_1484ccc70(lVar2 + 0x738,*(undefined4 *)(lVar6 + 4));
    *(undefined4 *)(lVar5 + 8) = 0;
    if (*(int *)(lVar5 + 0xc) < 0) {
      FUN_14481578e(lVar5,0);
    }
    local_30 = &local_40;
    local_38 = FUN_143b7f7be;
    local_40 = lVar5;
    FUN_1484ccccc(*(undefined8 *)(lVar2 + 0x728),lVar6);
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[2]);
    *(int *)param_1[3] = *(int *)param_1[3] + *(int *)(lVar5 + 8);
    plVar3 = (longlong *)param_1[4];
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar3,iVar1);
    }
    *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar6 + 4);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[2]);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7f7be FUN_143b7f7be body=51 status=ok
// SIG undefined FUN_143b7f7be(void)

void FUN_143b7f7be(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b7f7f2 FUN_143b7f7f2 body=51 status=ok
// SIG undefined FUN_143b7f7f2(void)

void FUN_143b7f7f2(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b7f826 FUN_143b7f826 body=51 status=ok
// SIG undefined FUN_143b7f826(void)

void FUN_143b7f826(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b7f85a FUN_143b7f85a body=51 status=ok
// SIG undefined FUN_143b7f85a(void)

void FUN_143b7f85a(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b7f88e FUN_143b7f88e body=31 status=ok
// SIG undefined FUN_143b7f88e(void)

undefined8
FUN_143b7f88e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  FUN_1484cd84a(*param_2,param_1,*param_4);
  return param_1;
}



// FUNCTION 143b7f8d8 FUN_143b7f8d8 body=29 status=ok
// SIG undefined FUN_143b7f8d8(void)

undefined8 FUN_143b7f8d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7f8f6 FUN_143b7f8f6 body=51 status=ok
// SIG undefined FUN_143b7f8f6(void)

void FUN_143b7f8f6(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b7f92a FUN_143b7f92a body=51 status=ok
// SIG undefined FUN_143b7f92a(void)

void FUN_143b7f92a(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b7f95e FUN_143b7f95e body=51 status=ok
// SIG undefined FUN_143b7f95e(void)

void FUN_143b7f95e(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143b7f992 FUN_143b7f992 body=31 status=ok
// SIG undefined FUN_143b7f992(void)

undefined8
FUN_143b7f992(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146bcb256(*param_2,param_1,param_4);
  return param_1;
}



// FUNCTION 143b7f9dc FUN_143b7f9dc body=29 status=ok
// SIG undefined FUN_143b7f9dc(void)

undefined8 FUN_143b7f9dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7f9fa FUN_143b7f9fa body=31 status=ok
// SIG undefined FUN_143b7f9fa(void)

undefined8
FUN_143b7f9fa(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146c5cfa8(*param_2,param_1,param_4);
  return param_1;
}



// FUNCTION 143b7fa44 FUN_143b7fa44 body=29 status=ok
// SIG undefined FUN_143b7fa44(void)

undefined8 FUN_143b7fa44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b7fa62 FUN_143b7fa62 body=34 status=ok
// SIG undefined FUN_143b7fa62(void)

void FUN_143b7fa62(undefined8 *param_1,undefined8 param_2)

{
  FUN_146c005f0(*param_1,param_2,1,1,1,1);
  return;
}



// FUNCTION 143b7fa84 FUN_143b7fa84 body=619 status=ok
// SIG undefined FUN_143b7fa84(void)

longlong * FUN_143b7fa84(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  longlong *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_LAB_14aefec60;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(local_68 + 3) = param_2[4];
  *(undefined4 *)((longlong)local_68 + 0x1c) = uVar6;
  *(undefined4 *)(local_68 + 4) = uVar7;
  *(undefined4 *)((longlong)local_68 + 0x24) = uVar8;
  *(undefined4 *)(local_68 + 1) = uVar2;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar3;
  *(undefined4 *)(local_68 + 2) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x14) = uVar5;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78 = thunk_FUN_1484d8d1c;
  }
  FUN_14170b918(&local_98,param_3);
  plVar15 = plStack_90;
  lVar9 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar13 = FUN_14118da1c();
        bVar11 = FUN_14054d46e(uVar13,L"nothreading");
        DAT_14c83f0f8 = bVar11 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar10 = local_78;
    if (DAT_14c83f0f8 != 1) {
      plVar14 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar14 = &local_58;
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      (*pcVar10)(uVar13);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b7fc14;
    }
  }
  plVar14 = DAT_14c8442c0;
  puVar12 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar12[1] = 0;
  *puVar12 = TAsyncQueuedWork<void>::vftable;
  puVar12[2] = local_78;
  puVar12[4] = local_68;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(puVar12 + 8) = local_48;
  *(undefined4 *)((longlong)puVar12 + 0x44) = uStack_44;
  *(undefined4 *)(puVar12 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar12 + 0x4c) = uStack_3c;
  puVar12[6] = local_58;
  puVar12[7] = uStack_50;
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar12[10] = local_98;
  puVar12[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar12 + 0xc) = 0;
  (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,3);
LAB_143b7fc14:
  plVar14 = plStack_90;
  *param_1 = lVar9;
  param_1[1] = (longlong)plVar15;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_90 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    plVar15 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar15 = &local_58;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar15 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar15 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7fcf0 FUN_143b7fcf0 body=601 status=ok
// SIG undefined FUN_143b7fcf0(void)

longlong * FUN_143b7fcf0(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aefec80;
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = *(undefined8 *)(param_2 + 4);
  local_78 = thunk_FUN_1484d9c9a;
  FUN_14170b918(&local_98,param_3);
  plVar9 = plStack_90;
  lVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar7 = FUN_14118da1c();
        bVar5 = FUN_14054d46e(uVar7,L"nothreading");
        DAT_14c83f0f8 = bVar5 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar4 = local_78;
    if (DAT_14c83f0f8 != 1) {
      pppuVar8 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar8 = &local_58;
      }
      uVar7 = (*(code *)(*pppuVar8)[1])();
      (*pcVar4)(uVar7);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b7fe6b;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar6[1] = 0;
  *puVar6 = TAsyncQueuedWork<void>::vftable;
  puVar6[2] = local_78;
  puVar6[4] = local_68;
  local_68 = (undefined ***)0x0;
  *(undefined4 *)(puVar6 + 8) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
  *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_40._4_4_;
  puVar6[6] = local_58;
  puVar6[7] = CONCAT44(uStack_4c,uStack_50);
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar6[10] = local_98;
  puVar6[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,3);
LAB_143b7fe6b:
  plVar2 = plStack_90;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar9;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar8 = local_68;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if (*param_3 != 0) {
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b7ff4a FUN_143b7ff4a body=601 status=ok
// SIG undefined FUN_143b7ff4a(void)

longlong * FUN_143b7ff4a(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aefeca0;
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = *(undefined8 *)(param_2 + 4);
  local_78 = thunk_FUN_1484dac48;
  FUN_14170b918(&local_98,param_3);
  plVar9 = plStack_90;
  lVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar7 = FUN_14118da1c();
        bVar5 = FUN_14054d46e(uVar7,L"nothreading");
        DAT_14c83f0f8 = bVar5 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar4 = local_78;
    if (DAT_14c83f0f8 != 1) {
      pppuVar8 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar8 = &local_58;
      }
      uVar7 = (*(code *)(*pppuVar8)[1])();
      (*pcVar4)(uVar7);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b800c5;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar6[1] = 0;
  *puVar6 = TAsyncQueuedWork<void>::vftable;
  puVar6[2] = local_78;
  puVar6[4] = local_68;
  local_68 = (undefined ***)0x0;
  *(undefined4 *)(puVar6 + 8) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
  *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_40._4_4_;
  puVar6[6] = local_58;
  puVar6[7] = CONCAT44(uStack_4c,uStack_50);
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar6[10] = local_98;
  puVar6[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,3);
LAB_143b800c5:
  plVar2 = plStack_90;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar9;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar8 = local_68;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if (*param_3 != 0) {
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b801a4 FUN_143b801a4 body=601 status=ok
// SIG undefined FUN_143b801a4(void)

longlong * FUN_143b801a4(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aefecc0;
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = *(undefined8 *)(param_2 + 4);
  local_78 = thunk_FUN_1484dadec;
  FUN_14170b918(&local_98,param_3);
  plVar9 = plStack_90;
  lVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar7 = FUN_14118da1c();
        bVar5 = FUN_14054d46e(uVar7,L"nothreading");
        DAT_14c83f0f8 = bVar5 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar4 = local_78;
    if (DAT_14c83f0f8 != 1) {
      pppuVar8 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar8 = &local_58;
      }
      uVar7 = (*(code *)(*pppuVar8)[1])();
      (*pcVar4)(uVar7);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b8031f;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar6[1] = 0;
  *puVar6 = TAsyncQueuedWork<void>::vftable;
  puVar6[2] = local_78;
  puVar6[4] = local_68;
  local_68 = (undefined ***)0x0;
  *(undefined4 *)(puVar6 + 8) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
  *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_40._4_4_;
  puVar6[6] = local_58;
  puVar6[7] = CONCAT44(uStack_4c,uStack_50);
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar6[10] = local_98;
  puVar6[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,3);
LAB_143b8031f:
  plVar2 = plStack_90;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar9;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar8 = local_68;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if (*param_3 != 0) {
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b803fe FUN_143b803fe body=601 status=ok
// SIG undefined FUN_143b803fe(void)

longlong * FUN_143b803fe(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aefece0;
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = *(undefined8 *)(param_2 + 4);
  local_78 = thunk_FUN_1484db09a;
  FUN_14170b918(&local_98,param_3);
  plVar9 = plStack_90;
  lVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar7 = FUN_14118da1c();
        bVar5 = FUN_14054d46e(uVar7,L"nothreading");
        DAT_14c83f0f8 = bVar5 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar4 = local_78;
    if (DAT_14c83f0f8 != 1) {
      pppuVar8 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar8 = &local_58;
      }
      uVar7 = (*(code *)(*pppuVar8)[1])();
      (*pcVar4)(uVar7);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b80579;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar6[1] = 0;
  *puVar6 = TAsyncQueuedWork<void>::vftable;
  puVar6[2] = local_78;
  puVar6[4] = local_68;
  local_68 = (undefined ***)0x0;
  *(undefined4 *)(puVar6 + 8) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
  *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_40._4_4_;
  puVar6[6] = local_58;
  puVar6[7] = CONCAT44(uStack_4c,uStack_50);
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar6[10] = local_98;
  puVar6[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,3);
LAB_143b80579:
  plVar2 = plStack_90;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar9;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar8 = local_68;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if (*param_3 != 0) {
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b80658 FUN_143b80658 body=619 status=ok
// SIG undefined FUN_143b80658(void)

longlong * FUN_143b80658(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  longlong *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_LAB_14aefed00;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(local_68 + 3) = param_2[4];
  *(undefined4 *)((longlong)local_68 + 0x1c) = uVar6;
  *(undefined4 *)(local_68 + 4) = uVar7;
  *(undefined4 *)((longlong)local_68 + 0x24) = uVar8;
  *(undefined4 *)(local_68 + 1) = uVar2;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar3;
  *(undefined4 *)(local_68 + 2) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x14) = uVar5;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78 = thunk_FUN_1484dc0f4;
  }
  FUN_14170b918(&local_98,param_3);
  plVar15 = plStack_90;
  lVar9 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar13 = FUN_14118da1c();
        bVar11 = FUN_14054d46e(uVar13,L"nothreading");
        DAT_14c83f0f8 = bVar11 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar10 = local_78;
    if (DAT_14c83f0f8 != 1) {
      plVar14 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar14 = &local_58;
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      (*pcVar10)(uVar13);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b807e8;
    }
  }
  plVar14 = DAT_14c8442c0;
  puVar12 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar12[1] = 0;
  *puVar12 = TAsyncQueuedWork<void>::vftable;
  puVar12[2] = local_78;
  puVar12[4] = local_68;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(puVar12 + 8) = local_48;
  *(undefined4 *)((longlong)puVar12 + 0x44) = uStack_44;
  *(undefined4 *)(puVar12 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar12 + 0x4c) = uStack_3c;
  puVar12[6] = local_58;
  puVar12[7] = uStack_50;
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar12[10] = local_98;
  puVar12[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar12 + 0xc) = 0;
  (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,3);
LAB_143b807e8:
  plVar14 = plStack_90;
  *param_1 = lVar9;
  param_1[1] = (longlong)plVar15;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_90 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    plVar15 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar15 = &local_58;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar15 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar15 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b808c4 FUN_143b808c4 body=619 status=ok
// SIG undefined FUN_143b808c4(void)

longlong * FUN_143b808c4(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  longlong *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_LAB_14aefed20;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(local_68 + 3) = param_2[4];
  *(undefined4 *)((longlong)local_68 + 0x1c) = uVar6;
  *(undefined4 *)(local_68 + 4) = uVar7;
  *(undefined4 *)((longlong)local_68 + 0x24) = uVar8;
  *(undefined4 *)(local_68 + 1) = uVar2;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar3;
  *(undefined4 *)(local_68 + 2) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x14) = uVar5;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78 = thunk_FUN_1484dc29c;
  }
  FUN_14170b918(&local_98,param_3);
  plVar15 = plStack_90;
  lVar9 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar13 = FUN_14118da1c();
        bVar11 = FUN_14054d46e(uVar13,L"nothreading");
        DAT_14c83f0f8 = bVar11 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar10 = local_78;
    if (DAT_14c83f0f8 != 1) {
      plVar14 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar14 = &local_58;
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      (*pcVar10)(uVar13);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b80a54;
    }
  }
  plVar14 = DAT_14c8442c0;
  puVar12 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar12[1] = 0;
  *puVar12 = TAsyncQueuedWork<void>::vftable;
  puVar12[2] = local_78;
  puVar12[4] = local_68;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(puVar12 + 8) = local_48;
  *(undefined4 *)((longlong)puVar12 + 0x44) = uStack_44;
  *(undefined4 *)(puVar12 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar12 + 0x4c) = uStack_3c;
  puVar12[6] = local_58;
  puVar12[7] = uStack_50;
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar12[10] = local_98;
  puVar12[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar12 + 0xc) = 0;
  (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,3);
LAB_143b80a54:
  plVar14 = plStack_90;
  *param_1 = lVar9;
  param_1[1] = (longlong)plVar15;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_90 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    plVar15 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar15 = &local_58;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar15 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar15 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b80b30 FUN_143b80b30 body=635 status=ok
// SIG undefined FUN_143b80b30(void)

longlong * FUN_143b80b30(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
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
  undefined4 uVar16;
  longlong lVar17;
  code *pcVar18;
  byte bVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  longlong *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x48,8);
  *local_68 = (longlong)&PTR_LAB_14aefed40;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[8];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  uVar14 = param_2[0xd];
  uVar15 = param_2[0xe];
  uVar16 = param_2[0xf];
  *(undefined4 *)(local_68 + 7) = param_2[0xc];
  *(undefined4 *)((longlong)local_68 + 0x3c) = uVar14;
  *(undefined4 *)(local_68 + 8) = uVar15;
  *(undefined4 *)((longlong)local_68 + 0x44) = uVar16;
  *(undefined4 *)(local_68 + 5) = uVar10;
  *(undefined4 *)((longlong)local_68 + 0x2c) = uVar11;
  *(undefined4 *)(local_68 + 6) = uVar12;
  *(undefined4 *)((longlong)local_68 + 0x34) = uVar13;
  *(undefined4 *)(local_68 + 3) = uVar6;
  *(undefined4 *)((longlong)local_68 + 0x1c) = uVar7;
  *(undefined4 *)(local_68 + 4) = uVar8;
  *(undefined4 *)((longlong)local_68 + 0x24) = uVar9;
  *(undefined4 *)(local_68 + 1) = uVar2;
  *(undefined4 *)((longlong)local_68 + 0xc) = uVar3;
  *(undefined4 *)(local_68 + 2) = uVar4;
  *(undefined4 *)((longlong)local_68 + 0x14) = uVar5;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78 = thunk_FUN_1484dc4ce;
  }
  FUN_14170b918(&local_98,param_3);
  plVar23 = plStack_90;
  lVar17 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar21 = FUN_14118da1c();
        bVar19 = FUN_14054d46e(uVar21,L"nothreading");
        DAT_14c83f0f8 = bVar19 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar18 = local_78;
    if (DAT_14c83f0f8 != 1) {
      plVar22 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar22 = &local_58;
      }
      uVar21 = (**(code **)(*plVar22 + 8))();
      (*pcVar18)(uVar21);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_143b80cd0;
    }
  }
  plVar22 = DAT_14c8442c0;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar20[1] = 0;
  *puVar20 = TAsyncQueuedWork<void>::vftable;
  puVar20[2] = local_78;
  puVar20[4] = local_68;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(puVar20 + 8) = local_48;
  *(undefined4 *)((longlong)puVar20 + 0x44) = uStack_44;
  *(undefined4 *)(puVar20 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar20 + 0x4c) = uStack_3c;
  puVar20[6] = local_58;
  puVar20[7] = uStack_50;
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar20[10] = local_98;
  puVar20[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar20 + 0xc) = 0;
  (**(code **)(*plVar22 + 0x18))(plVar22,puVar20,3);
LAB_143b80cd0:
  plVar22 = plStack_90;
  *param_1 = lVar17;
  param_1[1] = (longlong)plVar23;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar23 = plStack_90 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    plVar23 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar23 = &local_58;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar23 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar23 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b80dac FUN_143b80dac body=21 status=ok
// SIG undefined FUN_143b80dac(void)

int FUN_143b80dac(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1484dc662(*param_1,*param_2);
  return iVar1 + 1;
}



// FUNCTION 143b80dcc FUN_143b80dcc body=574 status=ok
// SIG undefined FUN_143b80dcc(void)

void FUN_143b80dcc(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar8 = (ulonglong)(uVar2 >> 9);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar8 * 8) + uVar7 * 2) - 1U
                ) < 0xfffe) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar8 * 8);
      local_88 = *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18);
      puVar1 = (undefined4 *)(lVar3 + uVar7 * 0x18);
      local_98 = *puVar1;
      uStack_94 = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_8c = puVar1[3];
      FUN_147a29b10(*(undefined8 *)param_1[1],&local_f8,
                    (float)*(double *)
                            (&local_98 + (longlong)*(int *)((undefined8 *)param_1[1] + 1) * 2));
      if (*(char *)(*param_1 + 0x70) == '\x01') {
        lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar8 * 8);
        dVar9 = (double)*(float *)(lVar3 + 8 + uVar7 * 0xc);
        dVar11 = (double)*(float *)(lVar3 + 4 + uVar7 * 0xc);
        dVar10 = local_f0 * dVar9 - dVar11 * local_e8;
        dVar10 = dVar10 + dVar10;
        dVar4 = (double)*(float *)(lVar3 + uVar7 * 0xc);
        dVar6 = local_f8 * dVar11 - local_f0 * dVar4;
        dVar6 = dVar6 + dVar6;
        dVar5 = dVar4 * local_e8 - local_f8 * dVar9;
        dVar5 = dVar5 + dVar5;
        *(float *)(lVar3 + uVar7 * 0xc) =
             (float)((local_f0 * dVar6 - dVar5 * local_e8) + local_e0 * dVar10 + dVar4);
        *(float *)(lVar3 + 4 + uVar7 * 0xc) =
             (float)((local_e8 * dVar10 - dVar6 * local_f8) + local_e0 * dVar5 + dVar11);
        *(float *)(lVar3 + 8 + uVar7 * 0xc) =
             (float)((dVar5 * local_f8 - dVar10 * local_f0) + local_e0 * dVar6 + dVar9);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8100c FUN_143b8100c body=585 status=ok
// SIG undefined FUN_143b8100c(void)

void FUN_143b8100c(longlong *param_1,uint *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar3 = *param_2;
  if ((-1 < (int)uVar3) &&
     (lVar4 = *param_1, (int)uVar3 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24))) {
    uVar12 = (ulonglong)(uVar3 >> 9);
    uVar11 = (ulonglong)(uVar3 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar12 * 8) + uVar11 * 2) -
                1U) < 0xfffe) {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar12 * 8);
      dVar5 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
      local_e8 = dVar5;
      pauVar1 = (undefined1 (*) [16])(lVar4 + uVar11 * 0x18);
      dVar8 = *(double *)*pauVar1;
      dVar9 = *(double *)(*pauVar1 + 8);
      local_f8 = *pauVar1;
      plVar6 = (longlong *)param_1[1];
      dVar13 = (double)plVar6[3];
      dVar15 = (double)plVar6[2];
      dVar14 = (double)plVar6[1];
      FUN_147a29b10(*(undefined8 *)*plVar6,&local_d8,
                    (float)*(double *)(local_f8 + (longlong)*(int *)((undefined8 *)*plVar6 + 1) * 8)
                   );
      local_98 = dVar8 * dVar14 * local_98;
      dStack_90 = dVar9 * dVar15 * dStack_90;
      local_88 = dVar5 * dVar13 * local_88;
      dVar13 = dStack_90 * local_d8 - local_98 * dStack_d0;
      dVar14 = local_88 * dStack_d0 - dStack_90 * local_c8;
      dVar15 = local_98 * local_c8 - local_d8 * local_88;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      dStack_b0 = (local_c8 * dVar14 - local_d8 * dVar13) + dStack_c0 * dVar15 + dStack_90 +
                  dStack_b0;
      local_e8 = dVar13 * dStack_c0 + local_88 + (dVar15 * local_d8 - dVar14 * dStack_d0) + local_a8
      ;
      local_f8._8_4_ = SUB84(dStack_b0,0);
      local_f8._0_8_ =
           (dVar13 * dStack_d0 - dVar15 * local_c8) + dStack_c0 * dVar14 + local_98 + local_b8;
      local_f8._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
      lVar4 = *param_1;
      cVar10 = FUN_146bfed03(local_f8);
      if (cVar10 != '\0') {
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar12 * 8);
        *(double *)(lVar7 + 0x10 + uVar11 * 0x18) = local_e8;
        puVar2 = (undefined8 *)(lVar7 + uVar11 * 0x18);
        *puVar2 = local_f8._0_8_;
        puVar2[1] = local_f8._8_8_;
        if (*(char *)(lVar4 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar4 + 0x214) = *(int *)(lVar4 + 0x214) + 1;
          UNLOCK();
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b81256 FUN_143b81256 body=1097 status=ok
// SIG undefined FUN_143b81256(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b81256(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ModelingComponents",0,0,&PTR_FUN_14aef0a70);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14aef0c80 + lVar3),
                  L"/Script/ModelingComponents",*(undefined8 *)(&UNK_14aef0c88 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14aef0c90 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x70);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb4c3e8);
  if (cVar1 == '\0') {
    _DAT_14cb4c3e8 = 0;
    uRam000000014cb4c3f0 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef10f0,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ModelingComponents",0,0,&PTR_FUN_14aef1300);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef1660,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef19c0,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef1d30,1,0);
  ppuStack_50 = &PTR_FUN_14aef2990;
  local_58 = 0;
  uStack_48 = 2;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef29d0,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef30c0,2,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14aef3d40;
  local_58 = 0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef3d60,2,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef4820,3,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef4bd0,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef5100,1,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14aef6ac0;
  local_58 = 0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef6ae0,5,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef75d0,2,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef7bc0,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef7f90,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef8820,2,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef91e0,2,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aef9aa0,2,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aefa420,2,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aefa800,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aefb7d0,1,0);
  local_40 = "SMInstance";
  local_38 = 10;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb4c950 = (ulonglong)uVar2;
  local_40 = "bone";
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14aefcfe0,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b816a0 FUN_143b816a0 body=3011 status=ok
// SIG undefined FUN_143b816a0(void)

longlong * FUN_143b816a0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  undefined ***pppuVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  undefined4 local_130;
  undefined8 *local_128;
  ulonglong local_120;
  uint *local_118;
  longlong *local_110;
  longlong *local_108;
  undefined1 **local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  longlong **local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined ***local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = (longlong)&PTR_FUN_14af0f7f0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  (**(code **)(*param_2 + 0xa10))(param_2,param_1 + 0x55,*(undefined4 *)(param_1[0x42] + 8));
  uVar4 = *(undefined1 *)(param_1[0x42] + 8);
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = uVar4;
  *(undefined2 *)((longlong)param_1 + 0x2c5) = 1;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x800000000;
  param_1[0x6f] = 0;
  param_1[0x70] = 0x200000000;
  param_1[0x77] = 0;
  param_1[0x78] = 0x300000000;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x1ffffff;
  param_1[0x57] = (longlong)&PTR_FUN_14a1ca480;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 4;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4a4) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x4a6) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4e4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x4e6) = 0;
  param_1[0x9b] = (longlong)&PTR_FUN_14aa69e90;
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4f4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x4f6) = 0;
  param_1[0x9f] = 0;
  param_1[0x9d] = (longlong)&PTR_FUN_14aa6dba0;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x50c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x50e) = 0;
  param_1[0xa2] = 0;
  param_1[0xa0] = (longlong)&DAT_14aa6dc00;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xaa] = 0;
  *(undefined2 *)(param_1 + 0xab) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55a) = 1;
  *(undefined4 *)(param_1 + 0xad) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x56c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x56e) = 0;
  param_1[0xae] = 0;
  param_1[0xac] = (longlong)&PTR_FUN_14aa50910;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb3) = 1;
  *(undefined4 *)(param_1 + 0xb5) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5ac) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x5ae) = 0;
  param_1[0xb6] = 0;
  param_1[0xb4] = (longlong)&PTR_FUN_14aa61a50;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 1;
  *(undefined4 *)(param_1 + 0xbd) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5ec) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x5ee) = 0;
  param_1[0xbe] = 0;
  param_1[0xbc] = (longlong)&PTR_FUN_14a83cdc0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  iVar19 = ((int)param_2[0xd4] - *(int *)((longlong)param_2 + 0x6cc)) * 4;
  FUN_1408e3634(param_1 + 0xac,iVar19);
  FUN_1408e36f6(param_1 + 0x9b,iVar19,1,1);
  FUN_140964b22(param_1 + 0xb4,iVar19,1);
  FUN_14017c08a(param_1 + 0xbf);
  if (*(int *)((longlong)param_2 + 0x6cc) < (int)param_2[0xd4]) {
    lVar10 = param_1[0x54];
    uVar5 = (int)lVar10 + 1;
    *(uint *)(param_1 + 0x54) = uVar5;
    if (*(uint *)((longlong)param_1 + 0x2a4) < uVar5) {
      FUN_14850ab56(param_1 + 0x53);
    }
    *(undefined8 *)(param_1[0x53] + (longlong)(int)lVar10 * 0x18) = 0;
    puVar2 = (undefined8 *)(param_1[0x53] + (longlong)((int)param_1[0x54] + -1) * 0x18);
    *(undefined4 *)(puVar2 + 2) = 0;
    *(int *)((longlong)puVar2 + 0x14) = iVar19 + -1;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(int *)((longlong)puVar2 + 0xc) =
         ((int)param_2[0xd4] - *(int *)((longlong)param_2 + 0x6cc)) * 2;
    lVar10 = (**(code **)(*param_2 + 0x610))(param_2);
    if (lVar10 == 0) {
      FUN_14003fbd6();
      uVar12 = (**(code **)(*DAT_14caea080 + 0x2f0))();
    }
    else {
      plVar11 = (longlong *)(**(code **)(*param_2 + 0x610))(param_2,0);
      uVar12 = (**(code **)(*plVar11 + 0x2f0))(plVar11);
    }
    *puVar2 = uVar12;
    local_c8 = (undefined1 *)0x3ff0000000000000;
    local_c0 = 0xbff0000000000000;
    local_b8 = (undefined ***)0x0;
    local_b0 = 0x3ff0000000000000;
    local_a8 = (undefined **)0x3ff0000000000000;
    local_a0 = (longlong *)0x0;
    local_98 = 0xbff0000000000000;
    local_90 = 0x3ff0000000000000;
    local_88 = 0;
    local_80 = 0xbff0000000000000;
    local_78 = 0xbff0000000000000;
    local_70 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    iVar19 = (int)param_2[0xd4] - *(int *)((longlong)param_2 + 0x6cc);
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    if (iVar19 != 0) {
      FUN_14850abea(&local_f8);
    }
    puVar15 = (uint *)(param_2 + 0xd5);
    uVar5 = *(uint *)(param_2 + 0xd8);
    uVar25 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      uVar20 = 1;
      iVar19 = 0;
      uVar23 = 0;
      uVar6 = 0;
    }
    else {
      puVar13 = (uint *)param_2[0xd7];
      if ((uint *)param_2[0xd7] == (uint *)0x0) {
        puVar13 = puVar15;
      }
      uVar6 = *puVar13;
      if (uVar6 == 0) {
        iVar19 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar19 = uVar5 - 1;
        }
        uVar23 = 0;
        uVar20 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar20 = uVar23;
        }
        iVar19 = 0;
        do {
          if (uVar20 == uVar23) goto LAB_143b81bc5;
          iVar19 = iVar19 + 0x20;
          uVar6 = puVar13[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar6 == 0);
      }
      else {
        iVar19 = 0;
        uVar23 = 0;
      }
      uVar20 = (ulonglong)(-uVar6 & uVar6);
      uVar3 = uVar20 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar6 = (iVar19 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar6) {
        uVar6 = uVar5;
      }
    }
    if (uVar6 != uVar5) {
      uVar5 = 0xffffffff;
      local_120 = uVar25;
      local_118 = puVar15;
      do {
        uVar3 = uStack_f0;
        lVar10 = param_2[0xd3];
        lVar24 = (longlong)(int)uStack_f0;
        uVar7 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
        if (uStack_f0._4_4_ < uVar7) {
          FUN_14850ac4a(&local_f8,uVar3 & 0xffffffff);
          uVar25 = local_120;
          puVar15 = local_118;
        }
        *(longlong *)(local_f8 + lVar24 * 8) = (longlong)(int)uVar6 * 0x28 + lVar10;
        uVar5 = uVar5 & ~(uint)uVar20;
        puVar13 = (uint *)param_2[0xd7];
        if ((uint *)param_2[0xd7] == (uint *)0x0) {
          puVar13 = puVar15;
        }
        uVar7 = *(uint *)(param_2 + 0xd8);
        iVar22 = (int)uVar23;
        lVar10 = (longlong)iVar22;
        uVar6 = puVar13[lVar10] & uVar5;
        if (uVar6 == 0) {
          iVar16 = uVar7 + 0x1e;
          if (-1 < (int)(uVar7 - 1)) {
            iVar16 = uVar7 - 1;
          }
          iVar16 = iVar16 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar17 = iVar16;
          if (iVar16 < iVar22) {
            iVar17 = iVar22;
          }
          uVar25 = local_120;
          if (iVar22 < iVar16) {
            lVar24 = 0;
            do {
              uVar6 = puVar13[lVar10 + lVar24 + 1];
              if (uVar6 != 0) {
                uVar23 = (ulonglong)(iVar22 + (int)lVar24 + 1);
                uVar5 = 0xffffffff;
                goto LAB_143b81e10;
              }
              iVar19 = iVar19 + 0x20;
              lVar24 = lVar24 + 1;
            } while (iVar17 - lVar10 != lVar24);
            uVar5 = 0xffffffff;
            iVar22 = iVar17;
          }
          uVar23 = (ulonglong)(iVar22 + 1);
          uVar6 = uVar7;
        }
        else {
LAB_143b81e10:
          uVar20 = (ulonglong)(-uVar6 & uVar6);
          uVar3 = uVar20 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar6 = (iVar19 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar7 <= (int)uVar6) {
            uVar6 = uVar7;
          }
        }
      } while (uVar6 != (uint)uVar25);
    }
LAB_143b81bc5:
    local_110 = &local_f8;
    local_e0 = &local_110;
    local_100 = &local_c8;
    local_128 = &local_d8;
    local_d8 = 0;
    local_d0 = 0;
    local_e8 = &LAB_14850acd0;
    local_130 = 0;
    local_108 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",uStack_f0 & 0xffffffff,1);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar19 = *(int *)(lVar10 + 0xc60);
  local_110 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar19 != 2) {
      if (iVar19 != 1) goto LAB_143b81c62;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143b821b5;
      goto LAB_143b81c6b;
    }
  }
  else {
LAB_143b81c62:
    if (iVar19 != 0x10) {
LAB_143b81c6b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar19 = *(int *)(lVar10 + 0xc60), iVar19 == 2))
        goto LAB_143b821b5;
        if (iVar19 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143b821b5;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar15 = (uint *)*puVar2;
        if (puVar15 != (uint *)0x0) goto LAB_143b81f17;
        while( true ) {
          uVar5 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar5 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar5 | 1;
            __tlregdtor(&LAB_143b86d5a);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_143b81f17:
          puVar21 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar21 + 0x16);
          uVar5 = puVar15[0x12];
          if (puVar13 <= puVar15 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar6 = *puVar15;
            *puVar15 = *puVar15 + uVar5 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar5) != 0xffffffff) break;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar21 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar21 + 0x16);
            uVar5 = 0;
            if (puVar13 <= puVar15 + 0x4000) {
              uVar5 = 1;
              goto LAB_143b81f97;
            }
          }
        }
        uVar5 = uVar5 + 1;
LAB_143b81f97:
        *(uint **)(puVar15 + 0x10) = puVar13;
        puVar15[0x12] = uVar5;
        iVar19 = 0;
        FUN_1447247dc(puVar21,0);
        *puVar21 = &PTR_FUN_14af0fa88;
        puVar21[0x15] = local_110;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar5 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
            uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
            iVar19 = 0;
          }
          else {
            uVar25 = 2;
          }
        }
        else {
          iVar19 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar25 = 5;
        }
        if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
        }
        puVar21[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar21[9] = puVar21;
        puVar21[10] = puVar21;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar20 = 1;
          if ((char)uVar25 != '\x06') {
            uVar20 = uVar25;
          }
          uVar25 = uVar20;
          uVar12 = 0;
        }
        else {
          if ((char)uVar25 == '\x06') {
            uVar25 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar21[0xf] = uVar12;
        puVar21[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar21 + 0x1c) = iVar19;
        if (puVar21 == (undefined8 *)0x0) {
          local_c8 = (undefined1 *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_c8 = (undefined1 *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(puVar21);
          LOCK();
          piVar1 = (int *)(puVar21 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
      }
      else {
        local_138 = &local_c8;
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14af0fa30;
        local_c8 = &LAB_14850b6c8;
        local_a0 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"OverlayVertexBuffersInit",&DAT_14cb4d5d4);
        if (local_c8 != (undefined1 *)0x0) {
          pppuVar18 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar18 = &local_a8;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
      goto LAB_143b81d10;
    }
  }
LAB_143b821b5:
  FUN_14850b55c(&local_110,&DAT_14ca85100);
LAB_143b81d10:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b82264 FUN_143b82264 body=7046 status=ok
// SIG undefined FUN_143b82264(void)

/* WARNING: Removing unreachable block (ram,0x000143b82f50) */
/* WARNING: Removing unreachable block (ram,0x000143b831d7) */
/* WARNING: Removing unreachable block (ram,0x000143b82c62) */
/* WARNING: Removing unreachable block (ram,0x000143b82e60) */
/* WARNING: Removing unreachable block (ram,0x000143b830e7) */
/* WARNING: Removing unreachable block (ram,0x000143b82c4f) */
/* WARNING: Removing unreachable block (ram,0x000143b82c70) */
/* WARNING: Removing unreachable block (ram,0x000143b83454) */
/* WARNING: Removing unreachable block (ram,0x000143b8336b) */

undefined8 * FUN_143b82264(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined ***pppuVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined2 uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  undefined1 uVar27;
  longlong lVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  ushort uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_1e8 [32];
  undefined1 **local_1c8;
  int local_1c0;
  uint local_1bc;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  ulonglong local_1a8;
  uint local_1a0;
  int local_19c;
  undefined8 *local_198;
  undefined8 *local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  longlong *local_168;
  undefined8 *local_160;
  uint *local_158;
  uint *local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined1 *local_138 [2];
  undefined ***local_128;
  undefined **local_118;
  undefined8 *local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar17 = 0;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14af0fd60;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  (**(code **)(*param_2 + 0xa10))(param_2,param_1 + 0x55,*(undefined4 *)(param_1[0x42] + 8));
  uVar27 = *(undefined1 *)(param_1[0x42] + 8);
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = uVar27;
  *(undefined2 *)((longlong)param_1 + 0x2c5) = 1;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x800000000;
  param_1[0x6f] = 0;
  param_1[0x70] = 0x200000000;
  param_1[0x77] = 0;
  param_1[0x78] = 0x300000000;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x1ffffff;
  param_1[0x57] = &PTR_FUN_14a1ca480;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 4;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4a4) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x4a6) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4e4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x4e6) = 0;
  param_1[0x9b] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4f4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x4f6) = 0;
  param_1[0x9f] = 0;
  param_1[0x9d] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x50c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x50e) = 0;
  param_1[0xa2] = 0;
  param_1[0xa0] = &DAT_14aa6dc00;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xaa] = 0;
  *(undefined2 *)(param_1 + 0xab) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55a) = 1;
  *(undefined4 *)(param_1 + 0xad) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x56c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x56e) = 0;
  param_1[0xae] = 0;
  param_1[0xac] = &PTR_FUN_14aa50910;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb3) = 1;
  local_190 = param_1 + 0xb4;
  *(undefined4 *)(param_1 + 0xb5) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5ac) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x5ae) = 0;
  param_1[0xb6] = 0;
  param_1[0xb4] = &PTR_FUN_14aa61a50;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 1;
  *(undefined4 *)(param_1 + 0xbd) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x5ec) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x5ee) = 0;
  param_1[0xbe] = 0;
  param_1[0xbc] = &PTR_FUN_14a83cdc0;
  local_198 = param_1 + 0xbf;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  iVar8 = (int)param_2[0xde];
  if (iVar8 == 0) {
    uVar26 = 1;
    iVar25 = 0;
    uVar24 = 0;
    iVar19 = 0;
  }
  else {
    puVar15 = (uint *)param_2[0xdd];
    if ((uint *)param_2[0xdd] == (uint *)0x0) {
      puVar15 = (uint *)(param_2 + 0xdb);
    }
    uVar29 = *puVar15;
    if (uVar29 == 0) {
      iVar19 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar19 = iVar8 + -1;
      }
      uVar24 = 0;
      uVar26 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar26 = uVar24;
      }
      iVar25 = 0;
      do {
        if (uVar26 == uVar24) {
          iVar17 = 0;
          goto LAB_143b82734;
        }
        iVar25 = iVar25 + 0x20;
        uVar29 = puVar15[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar29 == 0);
    }
    else {
      iVar25 = 0;
      uVar24 = 0;
    }
    uVar26 = (ulonglong)(-uVar29 & uVar29);
    uVar36 = uVar26 * 2 + 1;
    lVar34 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    iVar19 = (iVar25 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar19) {
      iVar19 = iVar8;
    }
  }
  if (iVar19 != iVar8) {
    puVar15 = (uint *)(param_2 + 0xdb);
    if ((uint *)param_2[0xdd] != (uint *)0x0) {
      puVar15 = (uint *)param_2[0xdd];
    }
    iVar21 = iVar8 + 0x1e;
    if (-1 < iVar8 + -1) {
      iVar21 = iVar8 + -1;
    }
    iVar21 = iVar21 >> 5;
    uVar29 = 0xffffffff;
    iVar17 = 0;
    do {
      iVar17 = (*(int *)(param_2[0xd9] + 8 + (longlong)iVar19 * 0x38) -
               *(int *)(param_2[0xd9] + 0x34 + (longlong)iVar19 * 0x38)) * 3 + iVar17;
      uVar29 = ~(uint)uVar26 & uVar29;
      iVar19 = (int)uVar24;
      lVar34 = (longlong)iVar19;
      uVar20 = puVar15[lVar34] & uVar29;
      if (uVar20 == 0) {
        iVar30 = iVar21;
        if (iVar21 < iVar19) {
          iVar30 = iVar19;
        }
        if (iVar21 <= iVar19) break;
        lVar35 = 0;
        while( true ) {
          iVar25 = iVar25 + 0x20;
          uVar20 = puVar15[lVar34 + lVar35 + 1];
          if (uVar20 != 0) break;
          lVar35 = lVar35 + 1;
          if (iVar30 - lVar34 == lVar35) goto LAB_143b82734;
        }
        uVar24 = (ulonglong)(iVar19 + (int)lVar35 + 1);
        uVar29 = 0xffffffff;
      }
      uVar26 = (ulonglong)(-uVar20 & uVar20);
      uVar36 = uVar26 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      iVar19 = (iVar25 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar8);
  }
LAB_143b82734:
  local_1b8 = param_2;
  FUN_1408e3634(param_1 + 0xac,iVar17,CONCAT71((int7)(uVar24 >> 8),1));
  FUN_1408e36f6(param_1 + 0x9b,iVar17,1);
  FUN_140964b22(local_190,iVar17,1);
  FUN_14017c08a(local_198,iVar17,1);
  local_158 = (uint *)(local_1b8 + 0xe2);
  uVar29 = *(uint *)(local_1b8 + 0xe5);
  if (uVar29 == 0) {
    local_1a8 = 0;
    local_1c0 = 0;
    uVar24 = 1;
    uVar20 = 0;
  }
  else {
    puVar15 = (uint *)local_1b8[0xe4];
    if ((uint *)local_1b8[0xe4] == (uint *)0x0) {
      puVar15 = local_158;
    }
    uVar20 = *puVar15;
    if (uVar20 == 0) {
      iVar8 = uVar29 + 0x1e;
      if (-1 < (int)(uVar29 - 1)) {
        iVar8 = uVar29 - 1;
      }
      uVar26 = 0;
      uVar24 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar24 = uVar26;
      }
      local_1c0 = 0;
      do {
        if (uVar24 == uVar26) goto LAB_143b8283a;
        local_1c0 = local_1c0 + 0x20;
        uVar20 = puVar15[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar26 = 0;
      local_1c0 = 0;
    }
    uVar24 = (ulonglong)(-uVar20 & uVar20);
    uVar36 = uVar24 * 2 + 1;
    lVar34 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar20 = (local_1c0 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    local_1a8 = uVar26;
    if ((int)uVar29 <= (int)uVar20) {
      uVar20 = uVar29;
    }
  }
  if (uVar20 != uVar29) {
    local_160 = param_1 + 0x53;
    local_1bc = 0xffffffff;
    uVar33 = 0;
    lVar34 = 0;
    local_178 = (ulonglong)uVar29;
    do {
      plVar7 = *(longlong **)(local_1b8[0xe0] + (longlong)(int)uVar20 * 0x18);
      if (plVar7 != (longlong *)0x0) {
        plVar18 = (longlong *)
                  ((longlong)*(int *)(local_1b8[0xe0] + (longlong)(int)uVar20 * 0x18 + 8) * 0x38 +
                  local_1b8[0xd9]);
        iVar8 = *(int *)(param_1 + 0x54);
        *(uint *)(param_1 + 0x54) = iVar8 + 1U;
        local_188 = uVar24;
        if (*(uint *)((longlong)param_1 + 0x2a4) < iVar8 + 1U) {
          FUN_14850be0a(local_160,iVar8);
        }
        *(undefined8 *)(param_1[0x53] + (longlong)iVar8 * 0x18) = 0;
        lVar35 = param_1[0x53];
        lVar11 = (longlong)(*(int *)(param_1 + 0x54) + -1);
        *(uint *)(lVar35 + 0x10 + lVar11 * 0x18) = uVar33;
        *(uint *)(lVar35 + 0x14 + lVar11 * 0x18) =
             ((int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34)) * 3 + uVar33 + -1;
        *(int *)(lVar35 + 8 + lVar11 * 0x18) = (int)lVar34;
        *(int *)(lVar35 + 0xc + lVar11 * 0x18) =
             (int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34);
        uVar12 = (**(code **)(*plVar7 + 0x2f0))(plVar7);
        *(undefined8 *)(lVar35 + lVar11 * 0x18) = uVar12;
        puVar15 = (uint *)(plVar18 + 2);
        uVar29 = *(uint *)(plVar18 + 5);
        uVar24 = local_188;
        if (uVar29 == 0) {
          uVar26 = 1;
          uVar36 = 0;
          iVar8 = 0;
          uVar20 = 0;
        }
        else {
          puVar13 = (uint *)plVar18[4];
          if ((uint *)plVar18[4] == (uint *)0x0) {
            puVar13 = puVar15;
          }
          uVar20 = *puVar13;
          if (uVar20 == 0) {
            iVar8 = uVar29 + 0x1e;
            if (-1 < (int)(uVar29 - 1)) {
              iVar8 = uVar29 - 1;
            }
            uVar36 = 0;
            uVar26 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar26 = uVar36;
            }
            iVar8 = 0;
            do {
              if (uVar26 == uVar36) goto LAB_143b82b47;
              iVar8 = iVar8 + 0x20;
              uVar20 = puVar13[uVar36 + 1];
              uVar36 = uVar36 + 1;
            } while (uVar20 == 0);
          }
          else {
            uVar36 = 0;
            iVar8 = 0;
          }
          uVar26 = (ulonglong)(-uVar20 & uVar20);
          uVar3 = uVar26 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          uVar20 = (iVar8 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if ((int)uVar29 <= (int)uVar20) {
            uVar20 = uVar29;
          }
        }
        if (uVar20 != uVar29) {
          local_1b0 = 0;
          lVar34 = (longlong)(int)lVar34;
          local_1ac = 0;
          uVar31 = 0xffffffff;
          do {
            local_19c = iVar8;
            local_1a0 = uVar31;
            local_148 = uVar36;
            local_180 = uVar26;
            lVar35 = *plVar18;
            lVar32 = (longlong)(int)uVar20 * 0xe0;
            dVar4 = *(double *)(lVar35 + 0x18 + lVar32);
            dVar5 = *(double *)(lVar35 + 0x10 + lVar32);
            lVar11 = param_1[0xb1];
            uVar26 = (ulonglong)(*(int *)(param_1 + 0xb2) * uVar33);
            *(float *)(lVar11 + uVar26) = (float)*(double *)(lVar35 + 8 + lVar32);
            *(float *)(lVar11 + 4 + uVar26) = (float)dVar5;
            *(float *)(lVar11 + 8 + uVar26) = (float)dVar4;
            dVar4 = *(double *)(lVar35 + 0x60 + lVar32);
            dVar5 = *(double *)(lVar35 + 0x58 + lVar32);
            uVar20 = uVar33 + 1;
            lVar11 = param_1[0xb1];
            local_190 = (undefined8 *)CONCAT44(local_190._4_4_,uVar20);
            uVar26 = (ulonglong)(*(int *)(param_1 + 0xb2) * uVar20);
            *(float *)(lVar11 + uVar26) = (float)*(double *)(lVar35 + 0x50 + lVar32);
            *(float *)(lVar11 + 4 + uVar26) = (float)dVar5;
            *(float *)(lVar11 + 8 + uVar26) = (float)dVar4;
            dVar4 = *(double *)(lVar35 + 0xa8 + lVar32);
            dVar5 = *(double *)(lVar35 + 0xa0 + lVar32);
            uVar31 = uVar33 + 2;
            lVar11 = param_1[0xb1];
            local_198 = (undefined8 *)CONCAT44(local_198._4_4_,uVar31);
            uVar26 = (ulonglong)(*(int *)(param_1 + 0xb2) * uVar31);
            *(float *)(lVar11 + uVar26) = (float)*(double *)(lVar35 + 0x98 + lVar32);
            *(float *)(lVar11 + 4 + uVar26) = (float)dVar5;
            *(float *)(lVar11 + 8 + uVar26) = (float)dVar4;
            fVar37 = (float)*(double *)(lVar35 + 0x40 + lVar32);
            fVar40 = (float)*(double *)(lVar35 + 0x38 + lVar32);
            fVar42 = (float)*(double *)(lVar35 + 0x30 + lVar32);
            lVar11 = param_1[0xa7];
            uVar26 = (ulonglong)uVar33;
            fVar38 = 0.0 - fVar37 * 0.0;
            fVar41 = fVar38 * 0.0;
            fVar38 = (fVar40 * 0.0 + (fVar41 - fVar38)) * -0.0 +
                     fVar42 * 0.0 +
                     (fVar37 * 0.0 + fVar40 * -0.0 + fVar41) * -0.0 +
                     fVar40 * -0.0 + fVar37 + fVar41;
            if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
              lVar28 = uVar26 * 0x10;
              *(undefined2 *)(lVar11 + lVar28) = 0x7fff;
              *(undefined2 *)(lVar11 + 2 + lVar28) = 0;
              *(undefined2 *)(lVar11 + 4 + lVar28) = 0;
              *(undefined2 *)(lVar11 + 6 + lVar28) = 0x7fff;
              iVar8 = (int)ROUND(fVar42 * 32767.0 + fVar42 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar8) {
                iVar8 = 0x7fff;
              }
              uVar23 = (undefined2)iVar8;
              if (iVar8 < -0x7fff) {
                uVar23 = 0x8000;
              }
              *(undefined2 *)(lVar11 + 8 + lVar28) = uVar23;
              iVar8 = (int)ROUND(fVar40 * 32767.0 + fVar40 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar8) {
                iVar8 = 0x7fff;
              }
              if (iVar8 < -0x7fff) {
                iVar8 = -0x8000;
              }
              iVar17 = (int)ROUND(fVar37 * 32767.0 + fVar37 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar17) {
                iVar17 = 0x7fff;
              }
              *(short *)(lVar11 + 10 + lVar28) = (short)iVar8;
              uVar23 = (undefined2)iVar17;
              if (iVar17 < -0x7fff) {
                uVar23 = 0x8000;
              }
              *(undefined2 *)(lVar11 + 0xc + lVar28) = uVar23;
              iVar8 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(fVar38 < 0.0) * 4)) >> 1;
              if (0x7ffe < iVar8) {
                iVar8 = 0x7fff;
              }
              if (iVar8 < -0x7fff) {
                iVar8 = -0x8000;
              }
              *(short *)(lVar11 + 0xe + lVar28) = (short)iVar8;
            }
            else {
              *(undefined1 *)(lVar11 + uVar26 * 8) = 0x7f;
              *(undefined1 *)(lVar11 + 1 + uVar26 * 8) = 0;
              *(undefined1 *)(lVar11 + 2 + uVar26 * 8) = 0;
              *(undefined1 *)(lVar11 + 3 + uVar26 * 8) = 0x7f;
              iVar8 = (int)ROUND(fVar42 * 127.0 + fVar42 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              uVar27 = (undefined1)iVar8;
              if (iVar8 < -0x7f) {
                uVar27 = 0x80;
              }
              *(undefined1 *)(lVar11 + 4 + uVar26 * 8) = uVar27;
              iVar8 = (int)ROUND(fVar40 * 127.0 + fVar40 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              uVar27 = (undefined1)iVar8;
              if (iVar8 < -0x7f) {
                uVar27 = 0x80;
              }
              iVar8 = (int)ROUND(fVar37 * 127.0 + fVar37 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              *(undefined1 *)(lVar11 + 5 + uVar26 * 8) = uVar27;
              uVar27 = (undefined1)iVar8;
              if (iVar8 < -0x7f) {
                uVar27 = 0x80;
              }
              *(undefined1 *)(lVar11 + 6 + uVar26 * 8) = uVar27;
              iVar8 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(fVar38 < 0.0) * 4)) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              if (iVar8 < -0x7f) {
                iVar8 = -0x80;
              }
              *(char *)(lVar11 + 7 + uVar26 * 8) = (char)iVar8;
            }
            lVar35 = lVar35 + lVar32;
            fVar37 = (float)*(double *)(lVar35 + 0x88);
            fVar40 = (float)*(double *)(lVar35 + 0x80);
            fVar42 = (float)*(double *)(lVar35 + 0x78);
            lVar11 = param_1[0xa7];
            uVar36 = (ulonglong)uVar20;
            fVar38 = 0.0 - fVar37 * 0.0;
            fVar41 = fVar38 * 0.0;
            fVar38 = (fVar40 * 0.0 + (fVar41 - fVar38)) * -0.0 +
                     fVar42 * 0.0 +
                     (fVar37 * 0.0 + fVar40 * -0.0 + fVar41) * -0.0 +
                     fVar40 * -0.0 + fVar37 + fVar41;
            if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
              lVar32 = uVar36 * 0x10;
              *(undefined2 *)(lVar11 + lVar32) = 0x7fff;
              *(undefined2 *)(lVar11 + 2 + lVar32) = 0;
              *(undefined2 *)(lVar11 + 4 + lVar32) = 0;
              *(undefined2 *)(lVar11 + 6 + lVar32) = 0x7fff;
              iVar8 = (int)ROUND(fVar42 * 32767.0 + fVar42 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar8) {
                iVar8 = 0x7fff;
              }
              uVar23 = (undefined2)iVar8;
              if (iVar8 < -0x7fff) {
                uVar23 = 0x8000;
              }
              *(undefined2 *)(lVar11 + 8 + lVar32) = uVar23;
              iVar8 = (int)ROUND(fVar40 * 32767.0 + fVar40 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar8) {
                iVar8 = 0x7fff;
              }
              if (iVar8 < -0x7fff) {
                iVar8 = -0x8000;
              }
              iVar17 = (int)ROUND(fVar37 * 32767.0 + fVar37 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar17) {
                iVar17 = 0x7fff;
              }
              *(short *)(lVar11 + 10 + lVar32) = (short)iVar8;
              uVar23 = (undefined2)iVar17;
              if (iVar17 < -0x7fff) {
                uVar23 = 0x8000;
              }
              *(undefined2 *)(lVar11 + 0xc + lVar32) = uVar23;
              iVar8 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(fVar38 < 0.0) * 4)) >> 1;
              if (0x7ffe < iVar8) {
                iVar8 = 0x7fff;
              }
              if (iVar8 < -0x7fff) {
                iVar8 = -0x8000;
              }
              *(short *)(lVar11 + 0xe + lVar32) = (short)iVar8;
            }
            else {
              *(undefined1 *)(lVar11 + uVar36 * 8) = 0x7f;
              *(undefined1 *)(lVar11 + 1 + uVar36 * 8) = 0;
              *(undefined1 *)(lVar11 + 2 + uVar36 * 8) = 0;
              *(undefined1 *)(lVar11 + 3 + uVar36 * 8) = 0x7f;
              iVar8 = (int)ROUND(fVar42 * 127.0 + fVar42 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              uVar27 = (undefined1)iVar8;
              if (iVar8 < -0x7f) {
                uVar27 = 0x80;
              }
              *(undefined1 *)(lVar11 + 4 + uVar36 * 8) = uVar27;
              iVar8 = (int)ROUND(fVar40 * 127.0 + fVar40 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              uVar27 = (undefined1)iVar8;
              if (iVar8 < -0x7f) {
                uVar27 = 0x80;
              }
              iVar8 = (int)ROUND(fVar37 * 127.0 + fVar37 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              *(undefined1 *)(lVar11 + 5 + uVar36 * 8) = uVar27;
              uVar27 = (undefined1)iVar8;
              if (iVar8 < -0x7f) {
                uVar27 = 0x80;
              }
              *(undefined1 *)(lVar11 + 6 + uVar36 * 8) = uVar27;
              iVar8 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(fVar38 < 0.0) * 4)) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              if (iVar8 < -0x7f) {
                iVar8 = -0x80;
              }
              *(char *)(lVar11 + 7 + uVar36 * 8) = (char)iVar8;
            }
            fVar37 = (float)*(double *)(lVar35 + 0xd0);
            fVar40 = (float)*(double *)(lVar35 + 200);
            fVar42 = (float)*(double *)(lVar35 + 0xc0);
            lVar11 = param_1[0xa7];
            uVar3 = (ulonglong)uVar31;
            fVar38 = 0.0 - fVar37 * 0.0;
            fVar41 = fVar38 * 0.0;
            fVar38 = (fVar40 * 0.0 + (fVar41 - fVar38)) * -0.0 +
                     fVar42 * 0.0 +
                     (fVar37 * 0.0 + fVar40 * -0.0 + fVar41) * -0.0 +
                     fVar40 * -0.0 + fVar37 + fVar41;
            if (*(char *)((longlong)param_1 + 0x559) == '\x01') {
              lVar32 = uVar3 * 0x10;
              *(undefined2 *)(lVar11 + lVar32) = 0x7fff;
              *(undefined2 *)(lVar11 + 2 + lVar32) = 0;
              *(undefined2 *)(lVar11 + 4 + lVar32) = 0;
              *(undefined2 *)(lVar11 + 6 + lVar32) = 0x7fff;
              iVar8 = (int)ROUND(fVar42 * 32767.0 + fVar42 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar8) {
                iVar8 = 0x7fff;
              }
              uVar23 = (undefined2)iVar8;
              if (iVar8 < -0x7fff) {
                uVar23 = 0x8000;
              }
              *(undefined2 *)(lVar11 + 8 + lVar32) = uVar23;
              iVar8 = (int)ROUND(fVar40 * 32767.0 + fVar40 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar8) {
                iVar8 = 0x7fff;
              }
              if (iVar8 < -0x7fff) {
                iVar8 = -0x8000;
              }
              iVar17 = (int)ROUND(fVar37 * 32767.0 + fVar37 * 32767.0 + 0.5) >> 1;
              if (0x7ffe < iVar17) {
                iVar17 = 0x7fff;
              }
              *(short *)(lVar11 + 10 + lVar32) = (short)iVar8;
              uVar23 = (undefined2)iVar17;
              if (iVar17 < -0x7fff) {
                uVar23 = 0x8000;
              }
              *(undefined2 *)(lVar11 + 0xc + lVar32) = uVar23;
              iVar8 = 0x4a329b58;
              iVar17 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(fVar38 < 0.0) * 4)) >> 1;
              if (0x7ffe < iVar17) {
                iVar17 = 0x7fff;
              }
              uVar23 = (undefined2)iVar17;
              if (iVar17 < -0x7fff) {
                uVar23 = 0x8000;
              }
              *(undefined2 *)(lVar11 + 0xe + lVar32) = uVar23;
            }
            else {
              *(undefined1 *)(lVar11 + uVar3 * 8) = 0x7f;
              *(undefined1 *)(lVar11 + 1 + uVar3 * 8) = 0;
              *(undefined1 *)(lVar11 + 2 + uVar3 * 8) = 0;
              *(undefined1 *)(lVar11 + 3 + uVar3 * 8) = 0x7f;
              iVar8 = (int)ROUND(fVar42 * 127.0 + fVar42 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              uVar27 = (undefined1)iVar8;
              if (iVar8 < -0x7f) {
                uVar27 = 0x80;
              }
              *(undefined1 *)(lVar11 + 4 + uVar3 * 8) = uVar27;
              iVar8 = (int)ROUND(fVar40 * 127.0 + fVar40 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar8) {
                iVar8 = 0x7f;
              }
              if (iVar8 < -0x7f) {
                iVar8 = -0x80;
              }
              iVar17 = (int)ROUND(fVar37 * 127.0 + fVar37 * 127.0 + 0.5) >> 1;
              if (0x7e < iVar17) {
                iVar17 = 0x7f;
              }
              *(char *)(lVar11 + 5 + uVar3 * 8) = (char)iVar8;
              if (iVar17 < -0x7f) {
                iVar17 = -0x80;
              }
              *(char *)(lVar11 + 6 + uVar3 * 8) = (char)iVar17;
              iVar17 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(fVar38 < 0.0) * 4)) >> 1;
              if (0x7e < iVar17) {
                iVar17 = 0x7f;
              }
              uVar27 = (undefined1)iVar17;
              if (iVar17 < -0x7f) {
                uVar27 = 0x80;
              }
              *(undefined1 *)(lVar11 + 7 + uVar3 * 8) = uVar27;
            }
            fVar38 = (float)*(double *)(lVar35 + 0x28);
            fVar41 = (float)*(double *)(lVar35 + 0x20);
            uVar6 = *(uint *)(param_1 + 0xaa);
            lVar11 = param_1[0xa8];
            if (*(char *)(param_1 + 0xab) == '\x01') {
              lVar32 = uVar26 * uVar6;
              *(float *)(lVar11 + lVar32 * 8) = fVar41;
              *(float *)(lVar11 + 4 + lVar32 * 8) = fVar38;
            }
            else {
              fVar37 = ABS(fVar41);
              if ((uint)fVar37 < 0x47800000) {
                if ((uint)fVar37 < 0x38800000) {
                  uVar39 = SUB42(fVar37 + 0.5,0);
                }
                else {
                  uVar39 = (ushort)((int)fVar37 + 0x8000fff + (uint)(((uint)fVar37 >> 0xd & 1) != 0)
                                   >> 0xd);
                }
              }
              else {
                uVar39 = (0x7f800000 < (uint)fVar37 | 0x3e) << 9;
              }
              lVar32 = uVar26 * uVar6 * 4;
              iVar17 = movmskps(uVar6,ZEXT416((uint)fVar41));
              *(ushort *)(lVar11 + lVar32) = (ushort)(iVar17 << 0xf) | uVar39;
              fVar41 = ABS(fVar38);
              if ((uint)fVar41 < 0x47800000) {
                if ((uint)fVar41 < 0x38800000) {
                  uVar39 = SUB42(fVar41 + 0.5,0);
                }
                else {
                  uVar39 = (ushort)((int)fVar41 + 0x8000fff + (uint)(((uint)fVar41 >> 0xd & 1) != 0)
                                   >> 0xd);
                }
              }
              else {
                uVar39 = (0x7f800000 < (uint)fVar41 | 0x3e) << 9;
              }
              iVar8 = movmskps(iVar8,ZEXT416((uint)fVar38));
              *(ushort *)(lVar11 + 2 + lVar32) = (ushort)(iVar8 << 0xf) | uVar39;
            }
            fVar38 = (float)*(double *)(lVar35 + 0x70);
            fVar41 = (float)*(double *)(lVar35 + 0x68);
            uVar6 = *(uint *)(param_1 + 0xaa);
            lVar11 = param_1[0xa8];
            if (*(char *)(param_1 + 0xab) == '\x01') {
              lVar32 = uVar36 * uVar6;
              *(float *)(lVar11 + lVar32 * 8) = fVar41;
              *(float *)(lVar11 + 4 + lVar32 * 8) = fVar38;
            }
            else {
              fVar37 = ABS(fVar41);
              if ((uint)fVar37 < 0x47800000) {
                if ((uint)fVar37 < 0x38800000) {
                  uVar39 = SUB42(fVar37 + 0.5,0);
                }
                else {
                  uVar39 = (ushort)((int)fVar37 + 0x8000fff + (uint)(((uint)fVar37 >> 0xd & 1) != 0)
                                   >> 0xd);
                }
              }
              else {
                uVar39 = (0x7f800000 < (uint)fVar37 | 0x3e) << 9;
              }
              lVar32 = uVar36 * uVar6 * 4;
              iVar8 = movmskps(uVar6,ZEXT416((uint)fVar41));
              *(ushort *)(lVar11 + lVar32) = (ushort)(iVar8 << 0xf) | uVar39;
              fVar41 = ABS(fVar38);
              if ((uint)fVar41 < 0x47800000) {
                if ((uint)fVar41 < 0x38800000) {
                  fVar37 = fVar41 + 0.5;
                }
                else {
                  fVar41 = (float)((int)fVar41 + 0x8000fff + (uint)(((uint)fVar41 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar37 = fVar41;
                }
              }
              else {
                fVar37 = (float)((0x7f800000 < (uint)fVar41 | 0x3e) << 9);
              }
              iVar8 = movmskps(fVar41,ZEXT416((uint)fVar38));
              *(ushort *)(lVar11 + 2 + lVar32) = (ushort)(iVar8 << 0xf) | SUB42(fVar37,0);
            }
            fVar38 = (float)*(double *)(lVar35 + 0xb8);
            fVar41 = (float)*(double *)(lVar35 + 0xb0);
            uVar6 = *(uint *)(param_1 + 0xaa);
            lVar11 = param_1[0xa8];
            if (*(char *)(param_1 + 0xab) == '\x01') {
              lVar32 = uVar3 * uVar6;
              *(float *)(lVar11 + lVar32 * 8) = fVar41;
              *(float *)(lVar11 + 4 + lVar32 * 8) = fVar38;
            }
            else {
              fVar37 = ABS(fVar41);
              if ((uint)fVar37 < 0x47800000) {
                if ((uint)fVar37 < 0x38800000) {
                  uVar39 = SUB42(fVar37 + 0.5,0);
                }
                else {
                  uVar39 = (ushort)((int)fVar37 + 0x8000fff + (uint)(((uint)fVar37 >> 0xd & 1) != 0)
                                   >> 0xd);
                }
              }
              else {
                uVar39 = (0x7f800000 < (uint)fVar37 | 0x3e) << 9;
              }
              lVar32 = uVar3 * uVar6 * 4;
              iVar8 = movmskps(uVar6,ZEXT416((uint)fVar41));
              *(ushort *)(lVar11 + lVar32) = (ushort)(iVar8 << 0xf) | uVar39;
              fVar41 = ABS(fVar38);
              if ((uint)fVar41 < 0x47800000) {
                if ((uint)fVar41 < 0x38800000) {
                  fVar37 = fVar41 + 0.5;
                }
                else {
                  fVar41 = (float)((int)fVar41 + 0x8000fff + (uint)(((uint)fVar41 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar37 = fVar41;
                }
              }
              else {
                fVar37 = (float)((0x7f800000 < (uint)fVar41 | 0x3e) << 9);
              }
              iVar8 = movmskps(fVar41,ZEXT416((uint)fVar38));
              *(ushort *)(lVar11 + 2 + lVar32) = (ushort)(iVar8 << 0xf) | SUB42(fVar37,0);
            }
            *(undefined4 *)(param_1[0xb9] + (ulonglong)(*(int *)(param_1 + 0xba) * uVar33)) =
                 *(undefined4 *)(lVar35 + 0x48);
            *(undefined4 *)(param_1[0xb9] + (ulonglong)(*(int *)(param_1 + 0xba) * uVar20)) =
                 *(undefined4 *)(lVar35 + 0x90);
            *(undefined4 *)(param_1[0xb9] + (ulonglong)(*(int *)(param_1 + 0xba) * uVar31)) =
                 *(undefined4 *)(lVar35 + 0xd8);
            *(uint *)(param_1[0xbf] + lVar34 * 4) = uVar33;
            *(uint *)(param_1[0xbf] + 4 + lVar34 * 4) = uVar20;
            *(uint *)(param_1[0xbf] + 8 + lVar34 * 4) = uVar31;
            uVar31 = local_1a0 & ~(uint)local_180;
            puVar13 = (uint *)plVar18[4];
            if ((uint *)plVar18[4] == (uint *)0x0) {
              puVar13 = puVar15;
            }
            uVar6 = *(uint *)(plVar18 + 5);
            iVar17 = (int)local_148;
            lVar35 = (longlong)iVar17;
            uVar20 = puVar13[lVar35] & uVar31;
            uVar36 = local_148;
            iVar8 = local_19c;
            if (uVar20 == 0) {
              iVar19 = uVar6 + 0x1e;
              if (-1 < (int)(uVar6 - 1)) {
                iVar19 = uVar6 - 1;
              }
              iVar19 = iVar19 >> 5;
              iVar8 = local_19c + 0x20;
              iVar25 = iVar19;
              if (iVar19 < iVar17) {
                iVar25 = iVar17;
              }
              if (iVar17 < iVar19) {
                lVar11 = 0;
                do {
                  uVar20 = puVar13[lVar35 + lVar11 + 1];
                  if (uVar20 != 0) {
                    uVar31 = 0xffffffff;
                    uVar36 = (ulonglong)(iVar17 + (int)lVar11 + 1);
                    goto LAB_143b83953;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar25 - lVar35 != lVar11);
                uVar31 = 0xffffffff;
                iVar17 = iVar25;
              }
              uVar36 = (ulonglong)(iVar17 + 1);
              uVar26 = local_180;
              uVar20 = uVar6;
            }
            else {
LAB_143b83953:
              uVar26 = (ulonglong)(-uVar20 & uVar20);
              uVar3 = uVar26 * 2 + 1;
              lVar35 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              uVar20 = (iVar8 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
              if ((int)uVar6 <= (int)uVar20) {
                uVar20 = uVar6;
              }
            }
            uVar33 = uVar33 + 3;
            lVar34 = lVar34 + 3;
            local_170 = (ulonglong)uVar29;
            local_168 = plVar18;
            local_150 = puVar15;
          } while (uVar20 != uVar29);
        }
      }
LAB_143b82b47:
      local_1bc = local_1bc & ~(uint)uVar24;
      puVar15 = (uint *)local_1b8[0xe4];
      if ((uint *)local_1b8[0xe4] == (uint *)0x0) {
        puVar15 = local_158;
      }
      uVar29 = *(uint *)(local_1b8 + 0xe5);
      iVar8 = (int)local_1a8;
      lVar35 = (longlong)iVar8;
      uVar20 = puVar15[lVar35] & local_1bc;
      if (uVar20 == 0) {
        iVar17 = uVar29 + 0x1e;
        if (-1 < (int)(uVar29 - 1)) {
          iVar17 = uVar29 - 1;
        }
        iVar17 = iVar17 >> 5;
        local_1c0 = local_1c0 + 0x20;
        iVar19 = iVar17;
        if (iVar17 < iVar8) {
          iVar19 = iVar8;
        }
        if (iVar8 < iVar17) {
          lVar11 = 0;
          do {
            uVar20 = puVar15[lVar35 + lVar11 + 1];
            if (uVar20 != 0) {
              local_1a8 = (ulonglong)(iVar8 + (int)lVar11 + 1);
              local_1bc = 0xffffffff;
              goto LAB_143b82bf0;
            }
            local_1c0 = local_1c0 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar19 - lVar35 != lVar11);
          local_1bc = 0xffffffff;
          lVar35 = (longlong)iVar19;
        }
        local_1a8 = lVar35 + 1;
        uVar20 = uVar29;
      }
      else {
LAB_143b82bf0:
        uVar24 = (ulonglong)(-uVar20 & uVar20);
        uVar26 = uVar24 * 2 + 1;
        lVar35 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar20 = (local_1c0 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
        if ((int)uVar29 <= (int)uVar20) {
          uVar20 = uVar29;
        }
      }
    } while (uVar20 != (uint)local_178);
  }
LAB_143b8283a:
  lVar34 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar34 + 0xc60);
  local_140 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143b82868;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143b83d40;
      goto LAB_143b82871;
    }
  }
  else {
LAB_143b82868:
    if (iVar8 != 0x10) {
LAB_143b82871:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar34 + 0xc60), iVar8 == 2))
        goto LAB_143b83d40;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143b83d40;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar15 = (uint *)*puVar2;
        if (puVar15 != (uint *)0x0) goto LAB_143b83aba;
        while( true ) {
          uVar29 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar29 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar29 | 1;
            __tlregdtor(&LAB_143b86d5a);
          }
          lVar34 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar14 = *(undefined4 **)(lVar34 + 0x310);
          *(undefined8 *)(lVar34 + 0x310) = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_143b83aba:
          puVar22 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar22 + 0x16);
          uVar29 = puVar15[0x12];
          if (puVar13 <= puVar15 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar20 = *puVar15;
            *puVar15 = *puVar15 + uVar29 + 1;
            UNLOCK();
            if ((uVar20 ^ uVar29) != 0xffffffff) break;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar22 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar22 + 0x16);
            uVar29 = 0;
            if (puVar13 <= puVar15 + 0x4000) {
              uVar29 = 1;
              goto LAB_143b83b3a;
            }
          }
        }
        uVar29 = uVar29 + 1;
LAB_143b83b3a:
        *(uint **)(puVar15 + 0x10) = puVar13;
        puVar15[0x12] = uVar29;
        iVar8 = 0;
        FUN_1447247dc(puVar22,0);
        *puVar22 = &PTR_FUN_14af0ffc0;
        puVar22[0x15] = local_140;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar29 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar29 < 2) {
            uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar29];
            iVar8 = 0;
          }
          else {
            uVar24 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar24 = 5;
        }
        if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
        }
        puVar22[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar22[9] = puVar22;
        puVar22[10] = puVar22;
        lVar34 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar34 == 0) {
          uVar26 = 1;
          if ((char)uVar24 != '\x06') {
            uVar26 = uVar24;
          }
          uVar24 = uVar26;
          uVar12 = 0;
        }
        else {
          if ((char)uVar24 == '\x06') {
            uVar24 = *(ulonglong *)(lVar34 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar34 + 0x30);
        }
        puVar22[0xf] = uVar12;
        puVar22[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar22 + 0x1c) = iVar8;
        if (puVar22 == (undefined8 *)0x0) {
          local_138[0] = (undefined1 *)CONCAT71(local_138[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
          local_138[0] = (undefined1 *)CONCAT71(local_138[0]._1_7_,1);
          FUN_1447439e4(puVar22);
          LOCK();
          piVar1 = (int *)(puVar22 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar22)(puVar22,1);
          }
        }
      }
      else {
        local_1c8 = local_138;
        local_128 = (undefined ***)0x0;
        local_118 = &PTR_LAB_14af0ffa0;
        local_138[0] = &LAB_14850c00a;
        local_110 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"LineSetVertexBuffersInit",&DAT_14cb4d5e0);
        if (local_138[0] != (undefined1 *)0x0) {
          pppuVar16 = local_128;
          if (local_128 == (undefined ***)0x0) {
            pppuVar16 = &local_118;
          }
          (*(code *)(*pppuVar16)[2])();
        }
      }
      goto LAB_143b82916;
    }
  }
LAB_143b83d40:
  FUN_14850be9e(&local_140,&DAT_14ca85100);
LAB_143b82916:
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143b83deb FUN_143b83deb body=55 status=ok
// SIG undefined FUN_143b83deb(void)

void FUN_143b83deb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cb90 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cb90 = FUN_14171c317(FUN_146493e7a,uVar1,L"EUVLayoutPreviewSide");
  }
  return;
}



// FUNCTION 143b83e5e FUN_143b83e5e body=252 status=ok
// SIG undefined FUN_143b83e5e(void)

void FUN_143b83e5e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x3d0);
  pcVar3 = (code *)*param_2;
  plVar6 = param_2 + 4;
  plVar5 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,uVar2);
  uVar2 = *(undefined8 *)(lVar1 + 0x3d8);
  pcVar3 = (code *)*param_2;
  plVar5 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,uVar2);
  uVar2 = *(undefined8 *)(lVar1 + 0x3e0);
  pcVar3 = (code *)*param_2;
  plVar5 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,uVar2);
  uVar2 = *(undefined8 *)(lVar1 + 1000);
  pcVar3 = (code *)*param_2;
  plVar5 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,uVar2);
  uVar2 = *(undefined8 *)(lVar1 + 0x3f0);
  pcVar3 = (code *)*param_2;
  plVar5 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,uVar2);
  if (*param_2 != 0) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000143b83f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))(plVar6);
    return;
  }
  return;
}



// FUNCTION 143b83fd2 FUN_143b83fd2 body=100 status=ok
// SIG undefined FUN_143b83fd2(void)

void FUN_143b83fd2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000143b8402a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143b84036 FUN_143b84036 body=100 status=ok
// SIG undefined FUN_143b84036(void)

void FUN_143b84036(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000143b8408e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143b840d6 FUN_143b840d6 body=416 status=ok
// SIG undefined FUN_143b840d6(void)

ulonglong FUN_143b840d6(longlong *param_1,undefined8 *param_2,undefined4 *param_3,
                       undefined4 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar5 = param_1[1];
  uVar3 = 0;
  uVar2 = 0;
  if (1 < (int)lVar5) {
    FUN_148279e70(&local_88,*param_1,*param_1 + 0x10);
    cVar1 = FUN_146c6864c(param_2,&local_88,0x3cb0000000000000,0);
    if (cVar1 == '\0') {
      uVar4 = (ulonglong)((int)lVar5 - 1);
      uVar2 = uVar4 - 1;
      lVar5 = 0x20;
      uVar3 = 0;
      do {
        if (uVar2 == uVar3) {
          uVar2 = 0;
          goto LAB_143b84115;
        }
        FUN_148279e70(&local_88,*param_1 + lVar5 + -0x10,*param_1 + lVar5);
        cVar1 = FUN_146c6864c(param_2,&local_88,0x3cb0000000000000,0);
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (cVar1 == '\0');
      uVar2 = CONCAT71((int7)(uVar2 >> 8),uVar3 < uVar4);
    }
    else {
      uVar2 = 1;
    }
    local_108 = param_2[4];
    local_128 = *param_2;
    uStack_120 = param_2[1];
    local_118 = param_2[2];
    uStack_110 = param_2[3];
    local_100 = local_88;
    uStack_fc = uStack_84;
    uStack_f8 = uStack_80;
    uStack_f4 = uStack_7c;
    local_f0 = local_78;
    uStack_ec = uStack_74;
    uStack_e8 = uStack_70;
    uStack_e4 = uStack_6c;
    local_e0 = local_68;
    local_d8 = 0;
    local_d0 = 0x3e45798ee2308c3a;
    local_c8 = 0;
    local_c0 = 0;
    FUN_14850c2c4(&local_128);
    *param_3 = local_b8;
    param_3[1] = uStack_b4;
    param_3[2] = uStack_b0;
    param_3[3] = uStack_ac;
    *param_4 = (int)uVar3;
  }
LAB_143b84115:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b84277 FUN_143b84277 body=55 status=ok
// SIG undefined FUN_143b84277(void)

void FUN_143b84277(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cda0 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cda0 = FUN_14171c317(FUN_1464941a5,uVar1,L"ESpaceCurveControlPointTransformMode");
  }
  return;
}



// FUNCTION 143b842ae FUN_143b842ae body=55 status=ok
// SIG undefined FUN_143b842ae(void)

void FUN_143b842ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cdb8 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cdb8 = FUN_14171c317(FUN_1464941d4,uVar1,L"ESpaceCurveControlPointOriginMode");
  }
  return;
}



// FUNCTION 143b842e5 FUN_143b842e5 body=55 status=ok
// SIG undefined FUN_143b842e5(void)

void FUN_143b842e5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cdd0 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cdd0 = FUN_14171c317(FUN_146494203,uVar1,L"ESpaceCurveControlPointFalloffType");
  }
  return;
}



// FUNCTION 143b84358 FUN_143b84358 body=69 status=ok
// SIG undefined FUN_143b84358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b84358(void)

{
  _DAT_14cb4ce70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b8439a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4ce78,1);
  return;
}



// FUNCTION 143b8439e FUN_143b8439e body=260 status=ok
// SIG undefined FUN_143b8439e(void)

void FUN_143b8439e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 8) != 0) {
      FUN_143b98b6c();
      *(undefined8 *)(lVar3 + 8) = 0;
    }
    *(undefined4 *)(lVar3 + 0x10) = 0;
  }
  uVar7 = FUN_14001cc68(0x58,0x10);
  FUN_14851a294(uVar7,param_2);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  FUN_145c8faba(uVar4);
  uVar8 = 0;
  FUN_145c8faba(0);
  lVar3 = DAT_14cb4ce80;
  iVar1 = *(int *)(param_1 + 0xb8);
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar2 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar8 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar8 = 1;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  iVar2 = *(int *)(lVar3 + uVar8 * 4);
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(*(longlong *)(param_1 + 0xb0) + 0x50) = iVar1;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  return;
}



// FUNCTION 143b844a2 FUN_143b844a2 body=52 status=ok
// SIG undefined FUN_143b844a2(void)

void FUN_143b844a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_143b98b6c();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143b844d6 FUN_143b844d6 body=98 status=ok
// SIG undefined FUN_143b844d6(void)

void FUN_143b844d6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_143b98b6c();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    *(undefined4 *)(lVar1 + 0x10) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_145c8faba(uVar2);
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  return;
}



// FUNCTION 143b84538 FUN_143b84538 body=403 status=ok
// SIG undefined FUN_143b84538(void)

undefined8 ** FUN_143b84538(longlong param_1,undefined8 **param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_143b98b6c();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  param_2[2] = (undefined8 *)0x0;
  param_2[3] = (undefined8 *)0x0;
  *param_2 = (undefined8 *)0x0;
  param_2[1] = (undefined8 *)0x0;
  param_2[4] = (undefined8 *)0x3ff0000000000000;
  puVar11 = DAT_14c8464e8;
  param_2[5] = DAT_14c8464e0;
  param_2[6] = puVar11;
  param_2[7] = DAT_14c8464f0;
  uVar22 = DAT_14c846518._4_4_;
  uVar21 = (undefined4)DAT_14c846518;
  uVar20 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_2 + 8) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar20;
  *(undefined4 *)(param_2 + 9) = uVar21;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar22;
  param_2[10] = DAT_14c846520;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x50);
  if (plVar2 == (longlong *)0x0) {
    if (&local_28 == param_2) goto LAB_143b84611;
    local_28 = (undefined8 *)0x0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0xa98))();
    FUN_1484b85b6(uVar4,&local_28);
    if (&local_28 == param_2) {
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
      goto LAB_143b84611;
    }
  }
  *param_2 = local_28;
LAB_143b84611:
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (lVar3 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0x3ff00000;
    puVar11 = (undefined8 *)0x3ff0000000000000;
    uVar12 = 0;
    uVar13 = 0x3ff00000;
    uVar14 = 0;
    uVar15 = 0x3ff00000;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x1c8);
    puVar11 = &DAT_14c846480;
    if (lVar3 != 0) {
      puVar11 = (undefined8 *)(lVar3 + 0x240);
    }
    uVar20 = *(undefined4 *)puVar11;
    uVar21 = *(undefined4 *)((longlong)puVar11 + 4);
    uVar22 = *(undefined4 *)(puVar11 + 1);
    uVar23 = *(undefined4 *)((longlong)puVar11 + 0xc);
    uVar7 = *(undefined4 *)(puVar11 + 2);
    uVar8 = *(undefined4 *)((longlong)puVar11 + 0x14);
    uVar9 = *(undefined4 *)(puVar11 + 3);
    uVar10 = *(undefined4 *)((longlong)puVar11 + 0x1c);
    uVar16 = *(undefined4 *)(puVar11 + 4);
    uVar17 = *(undefined4 *)((longlong)puVar11 + 0x24);
    uVar18 = *(undefined4 *)(puVar11 + 5);
    uVar19 = *(undefined4 *)((longlong)puVar11 + 0x2c);
    uVar5 = *(undefined4 *)(puVar11 + 6);
    uVar6 = *(undefined4 *)((longlong)puVar11 + 0x34);
    uVar12 = *(undefined4 *)(puVar11 + 8);
    uVar13 = *(undefined4 *)((longlong)puVar11 + 0x44);
    uVar14 = *(undefined4 *)(puVar11 + 9);
    uVar15 = *(undefined4 *)((longlong)puVar11 + 0x4c);
    puVar11 = (undefined8 *)puVar11[10];
  }
  *(undefined4 *)(param_2 + 1) = uVar20;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar21;
  *(undefined4 *)(param_2 + 2) = uVar22;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar23;
  *(undefined4 *)(param_2 + 3) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
  *(undefined4 *)(param_2 + 4) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar10;
  *(undefined4 *)(param_2 + 5) = uVar16;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar17;
  *(undefined4 *)(param_2 + 6) = uVar18;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar19;
  param_2[7] = (undefined8 *)CONCAT44(uVar6,uVar5);
  *(undefined4 *)(param_2 + 8) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar13;
  *(undefined4 *)(param_2 + 9) = uVar14;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar15;
  param_2[10] = puVar11;
  FUN_14851bab8(lVar1,0);
  FUN_14851b2ea(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b846cc FUN_143b846cc body=85 status=ok
// SIG undefined FUN_143b846cc(void)

void FUN_143b846cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_143b98b6c();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  FUN_14851bab8(*(undefined8 *)(param_1 + 0x58),0);
  FUN_14851b2ea(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 143b84722 FUN_143b84722 body=114 status=ok
// SIG undefined FUN_143b84722(void)

void FUN_143b84722(longlong param_1,float param_2)

{
  double dVar1;
  
  dVar1 = (double)param_2 + *(double *)(param_1 + 0x18);
  *(double *)(param_1 + 0x18) = dVar1;
  if ((*(int *)(param_1 + 0x10) == 2) &&
     (dVar1 = dVar1 - *(double *)(param_1 + 0x30),
     *(double *)(param_1 + 0x48) <= dVar1 && dVar1 != *(double *)(param_1 + 0x48))) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_143b98b6c();
      *(undefined8 *)(param_1 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x50)) {
      *(undefined1 *)(param_1 + 0x54) = 0;
      FUN_14851a3fa(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}



// FUNCTION 143b84794 FUN_143b84794 body=601 status=ok
// SIG undefined FUN_143b84794(void)

void FUN_143b84794(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8 [2];
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 uStack_40;
  int local_38 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = 4;
  }
  else {
    FUN_143b849ee(*(longlong *)(param_1 + 0xb0),local_38);
    *(int *)(param_1 + 0xa0) = local_38[0];
    if ((local_38[0] == 0) || ((local_38[0] == 1 && (*(char *)(param_1 + 0x90) != '\0')))) {
      FUN_148505182(*(undefined8 *)(param_1 + 0xb0),local_a8);
      FUN_14851a80e(param_1 + 0x40,local_a8[0]);
      puVar2 = (undefined8 *)local_a8[0][1];
      local_a8[0][1] = 0;
      local_98 = (wchar_t *)local_a8[0][2];
      uStack_90 = (undefined4)local_a8[0][3];
      uStack_8c = *(undefined4 *)((longlong)local_a8[0] + 0x1c);
      local_88 = (undefined4)local_a8[0][4];
      uStack_84 = *(undefined4 *)((longlong)local_a8[0] + 0x24);
      uStack_80 = (undefined4)local_a8[0][5];
      uStack_7c = *(undefined4 *)((longlong)local_a8[0] + 0x2c);
      local_78 = (undefined4)local_a8[0][6];
      uStack_74 = *(undefined4 *)((longlong)local_a8[0] + 0x34);
      uStack_70 = (undefined4)local_a8[0][7];
      uStack_6c = *(undefined4 *)((longlong)local_a8[0] + 0x3c);
      local_68 = local_a8[0][8];
      local_58 = local_a8[0][9];
      lStack_50 = local_a8[0][10];
      local_48 = local_a8[0][0xb];
      uStack_60 = 0;
      uStack_40 = 0;
      FUN_14851b91a(*(undefined8 *)(param_1 + 0x58));
      iVar3 = 1;
      if (*(char *)(param_1 + 0xa5) == '\x01') {
        iVar3 = *(byte *)(param_1 + 0xa7) + 1;
      }
      FUN_14851bd0c(*(undefined8 *)(param_1 + 0x58),puVar2,iVar3,*(undefined1 *)(param_1 + 0xa6));
      *(undefined1 *)(param_1 + 0xa7) = 1;
      FUN_14851bab8(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0xa4));
      *(bool *)(param_1 + 0x91) = *(int *)(param_1 + 0xa0) == 0;
      *(undefined8 *)(param_1 + 0x98) = local_30;
      FUN_14851a8b2(param_1 + 0x28,param_1);
      *(undefined1 *)(param_1 + 0xbc) = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)*local_a8[0])(local_a8[0],1);
      }
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0xb0);
      if ((*(char *)(lVar1 + 0x54) == '\x01') &&
         (*(int *)(lVar1 + 0x50) <= **(int **)(lVar1 + 0x38))) {
        if (*(char *)(param_1 + 0xbc) == '\0') {
          local_98 = L"TooManyBackgroundTasks";
          uStack_90 = 0x16;
          FUN_1446e940c(local_ac,&local_98);
          local_98 = L"MeshOpPreviewHelpers";
          uStack_90 = 0x14;
          FUN_1446e940c(local_b0,&local_98);
          local_98 = 
          L"Too many background tasks: Cancelling earlier tasks before generating new preview.";
          uStack_90 = 0x52;
          FUN_140208c1e(local_a8,local_b0,local_ac,&local_98);
          if (local_a8[0] != (longlong *)0x0) {
            (**(code **)(*local_a8[0] + 0x10))();
          }
          *(undefined1 *)(param_1 + 0xbc) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xbc) = 0;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b849ee FUN_143b849ee body=211 status=ok
// SIG undefined FUN_143b849ee(void)

uint * FUN_143b849ee(longlong param_1,uint *param_2)

{
  char *pcVar1;
  longlong lVar2;
  double dVar3;
  
  *param_2 = 4;
  param_2[2] = 0;
  param_2[3] = 0xbff00000;
  if (*(char *)(param_1 + 0x54) == '\x01') {
LAB_143b84a25:
    *param_2 = 3;
    dVar3 = *(double *)(param_1 + 0x18);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) {
      dVar3 = *(double *)(param_1 + 0x18);
      lVar2 = 0x30;
      goto LAB_143b84a35;
    }
    if (*(int *)(lVar2 + 0x10) != 0) goto LAB_143b84a25;
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x20))(*(longlong **)(lVar2 + 0x18),0xffffffff,0)
      ;
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    pcVar1 = *(char **)(*(longlong *)(param_1 + 8) + 0x50);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 != '\x01')) {
      if (*(int *)(param_1 + 0x10) == 1) {
        dVar3 = *(double *)(param_1 + 0x18);
        *(double *)(param_1 + 0x28) = dVar3;
      }
      else {
        dVar3 = *(double *)(param_1 + 0x28);
      }
      *param_2 = (uint)(*(int *)(param_1 + 0x10) == 2);
    }
    else {
      *param_2 = 2;
      dVar3 = *(double *)(param_1 + 0x30);
    }
  }
  lVar2 = 0x20;
LAB_143b84a35:
  *(double *)(param_2 + 2) = dVar3 - *(double *)(param_1 + lVar2);
  return param_2;
}



// FUNCTION 143b84ac1 FUN_143b84ac1 body=55 status=ok
// SIG undefined FUN_143b84ac1(void)

void FUN_143b84ac1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4ceb0 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4ceb0 = FUN_14171c317(FUN_14649445c,uVar1,L"EModelingComponentsPlaneVisualizationMode");
  }
  return;
}



// FUNCTION 143b84af8 FUN_143b84af8 body=55 status=ok
// SIG undefined FUN_143b84af8(void)

void FUN_143b84af8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cee0 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cee0 = FUN_14171c317(FUN_1464944fd,uVar1,L"ECreateModelingObjectResult");
  }
  return;
}



// FUNCTION 143b84b2f FUN_143b84b2f body=55 status=ok
// SIG undefined FUN_143b84b2f(void)

void FUN_143b84b2f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cef8 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cef8 = FUN_14171c317(FUN_14649452e,uVar1,L"ECreateMeshObjectSourceMeshType");
  }
  return;
}



// FUNCTION 143b84b66 FUN_143b84b66 body=55 status=ok
// SIG undefined FUN_143b84b66(void)

void FUN_143b84b66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cf10 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cf10 = FUN_14171c317(FUN_14649455d,uVar1,L"ECreateObjectTypeHint");
  }
  return;
}



// FUNCTION 143b84b9d FUN_143b84b9d body=69 status=ok
// SIG undefined FUN_143b84b9d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b84b9d(void)

{
  _DAT_14cb4d018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b84bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4d020,1);
  return;
}



// FUNCTION 143b84be2 FUN_143b84be2 body=69 status=ok
// SIG undefined FUN_143b84be2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b84be2(void)

{
  _DAT_14cb4d030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b84c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4d038,1);
  return;
}



// FUNCTION 143b84c3f FUN_143b84c3f body=7245 status=ok
// SIG undefined FUN_143b84c3f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b84c3f(longlong *param_1,double *param_2,int *param_3,byte *param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  double *pdVar16;
  undefined8 uVar17;
  undefined ***pppuVar18;
  undefined1 (*pauVar19) [16];
  int iVar20;
  longlong lVar21;
  int *piVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_7e8 [32];
  ulonglong local_7c8;
  byte local_7bb;
  byte local_7ba;
  byte local_7b9;
  byte *local_7b8;
  longlong *local_7b0;
  double *local_7a8;
  int *local_7a0;
  double local_798;
  longlong local_780;
  double local_778;
  double dStack_770;
  double local_768;
  double dStack_760;
  undefined1 local_758 [16];
  undefined1 local_748 [16];
  undefined1 local_738 [16];
  undefined1 local_728 [16];
  double local_718;
  double dStack_710;
  double local_708;
  double local_700;
  double dStack_6f8;
  double local_6f0;
  longlong local_6e8;
  ulonglong uStack_6e0;
  longlong local_6d8;
  ulonglong uStack_6d0;
  double local_6c8;
  double dStack_6c0;
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [16];
  undefined1 local_698 [16];
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  double local_668;
  double dStack_660;
  undefined ***local_658;
  undefined8 uStack_650;
  undefined **local_648;
  longlong *plStack_640;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined1 local_628 [16];
  double local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined8 local_604;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined2 local_5f0;
  undefined1 uStack_5ee;
  undefined5 uStack_5ed;
  int local_5e8;
  code *local_588;
  double dStack_580;
  undefined ***local_578;
  undefined8 uStack_570;
  undefined **local_568;
  longlong *plStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  double local_540;
  double dStack_538;
  double local_530;
  double local_528;
  double local_520;
  double dStack_518;
  double local_510;
  undefined1 local_508;
  undefined1 local_507;
  ulonglong local_504;
  undefined4 local_4fc;
  code *local_4f8;
  undefined8 local_4e8;
  undefined **local_4d8;
  undefined1 *local_4d0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 local_3e4;
  undefined4 uStack_3e0;
  undefined8 uStack_3dc;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  double local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_334;
  undefined4 local_32c;
  undefined8 local_328;
  undefined2 local_320;
  undefined1 uStack_31e;
  undefined5 uStack_31d;
  int local_318;
  double local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double local_2a0;
  double dStack_298;
  undefined1 local_290 [16];
  double local_280;
  double local_278;
  double local_270;
  int local_268;
  int local_264;
  int local_260;
  undefined2 local_25c;
  float local_258;
  undefined4 local_254;
  longlong local_150;
  double local_138;
  double dStack_130;
  undefined ***local_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_7e8;
  local_7b9 = param_4[2];
  local_7ba = *param_4;
  local_7bb = param_4[1] & local_7ba;
  local_7b8 = param_4;
  local_7b0 = param_1;
  local_7a8 = param_2;
  local_7a0 = param_3;
  if ((longlong)(int)param_1[1] == 0) {
    iVar20 = 0;
  }
  else {
    lVar27 = *param_1;
    lVar25 = (longlong)(int)param_1[1] * 0x50 + lVar27;
    uVar7 = DAT_149931180;
    iVar20 = 0;
    do {
      cVar14 = (*(code *)*param_6)(param_6[1]);
      if (cVar14 != '\0') {
        dVar4 = *(double *)(lVar27 + 0x40) * local_7a8[2];
        dVar10 = *(double *)(lVar27 + 0x38) * local_7a8[1];
        dVar37 = *(double *)(lVar27 + 0x30) * *local_7a8;
        fVar29 = 1e-06;
        if (1e-06 <= *(float *)(lVar27 + 0x48)) {
          fVar29 = *(float *)(lVar27 + 0x48);
        }
        dVar30 = (double)((ulonglong)local_7a8[2] & uVar7);
        dVar31 = (double)((ulonglong)local_7a8[1] & uVar7);
        dVar11 = (double)((ulonglong)*local_7a8 & uVar7);
        uVar47 = SUB84(dVar11,0);
        uVar48 = (undefined4)((ulonglong)dVar11 >> 0x20);
        if (dVar31 <= dVar11) {
          uVar47 = SUB84(dVar31,0);
          uVar48 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        if (dVar30 <= (double)CONCAT44(uVar48,uVar47)) {
          uVar47 = SUB84(dVar30,0);
          uVar48 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        dVar11 = (double)CONCAT44(uVar48,uVar47) * (double)fVar29;
        if ((char)param_3[4] == '\x01') {
          memset(local_358 + 8,0,0x91);
          local_2a0 = 0.0;
          dStack_298 = 0.0;
          local_290 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_280 = 1.0;
          local_278 = 1.0;
          local_270 = 1.0;
          local_25c = 1;
          local_358._0_8_ = &PTR_FUN_14ae75170;
          local_254 = 1;
          local_258 = (float)dVar11;
          local_268 = *param_3;
          if (local_268 < 2) {
            local_268 = 1;
          }
          local_2b8 = dVar37;
          local_2b0 = dVar10;
          local_2a8 = dVar4;
          local_264 = local_268;
          local_260 = local_268;
          FUN_148397678(local_358);
        }
        else {
          memset(local_358 + 8,0,0x91);
          local_358._0_8_ = &PTR_FUN_14af11230;
          iVar15 = param_3[1];
          if (iVar15 < 2) {
            iVar15 = 1;
          }
          local_2b0 = (double)CONCAT44(iVar15,iVar15);
          local_2a8 = (double)((ulonglong)local_2a8 & 0xffffffffffffff00);
          local_2b8 = dVar11;
          FUN_14850e248(local_358);
          if ((longlong)local_348._0_4_ != 0) {
            pdVar16 = (double *)local_358._8_8_;
            do {
              *pdVar16 = *pdVar16 + dVar37;
              pdVar16[1] = pdVar16[1] + dVar10;
              pdVar16[2] = pdVar16[2] + dVar4;
              pdVar16 = pdVar16 + 3;
            } while (pdVar16 != (double *)(local_358._8_8_ + (longlong)local_348._0_4_ * 3 * 8));
          }
        }
        if (*local_7b8 == 0) {
          FUN_14850e2cc(local_358);
        }
        FUN_146c00d92(local_628,local_358);
        if (local_7bb != 0) {
          FUN_146c39da8(local_628);
        }
        local_138 = (double)CONCAT44(local_138._4_4_,iVar20);
        (*(code *)*param_5)(param_5[1],&local_138,lVar27,local_628);
        FUN_141082778(local_628);
        FUN_146bd8050(local_358);
        iVar20 = iVar20 + 1;
      }
      lVar27 = lVar27 + 0x50;
    } while (lVar27 != lVar25);
  }
  pdVar16 = local_7a8;
  if ((longlong)(int)local_7b0[3] != 0) {
    lVar27 = local_7b0[2];
    lVar25 = (longlong)(int)local_7b0[3] * 0x70;
    do {
      cVar14 = (*(code *)*param_6)(param_6[1]);
      if (cVar14 != '\0') {
        memset(local_358 + 8,0,0x91);
        local_358._0_8_ = &PTR_FUN_14ae97758;
        local_268 = CONCAT31(local_268._1_3_,1);
        fVar29 = *(float *)(lVar27 + 0x68);
        fVar2 = *(float *)(lVar27 + 100);
        fVar3 = *(float *)(lVar27 + 0x60);
        dVar4 = pdVar16[2];
        dVar10 = pdVar16[1];
        dVar37 = *pdVar16;
        auVar5 = *(undefined1 (*) [16])(lVar27 + 0x48);
        auVar39 = divpd(auVar5,_DAT_1499387d0);
        auVar40._8_8_ = 0;
        auVar40._0_8_ = *(double *)(lVar27 + 0x58);
        auVar40 = divpd(auVar40,_DAT_1499387d0);
        auVar39 = roundpd(auVar39,auVar39,3);
        auVar40 = roundpd(auVar40,auVar40,3);
        dVar31 = (auVar5._0_8_ - auVar39._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar32 = (auVar5._8_8_ - auVar39._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar11 = (*(double *)(lVar27 + 0x58) - auVar40._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar30 = (0.0 - auVar40._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        local_798 = sin(dVar31);
        dVar33 = sin(dVar32);
        dVar34 = sin(dVar11);
        sin(dVar30);
        dVar31 = cos(dVar31);
        dVar32 = cos(dVar32);
        dVar35 = cos(dVar11);
        cos(dVar30);
        dVar11 = dVar33 * local_798 * dVar34 + dVar32 * dVar31 * dVar35;
        local_2a0 = local_798 * dVar33 * dVar35 - dVar31 * dVar32 * dVar34;
        dStack_298 = -(local_798 * dVar32 * dVar35) - dVar31 * dVar33 * dVar34;
        local_2a8 = *(double *)(lVar27 + 0x40) * pdVar16[2];
        local_2b0 = *(double *)(lVar27 + 0x38) * pdVar16[1];
        local_2b8 = *(double *)(lVar27 + 0x30) * *pdVar16;
        local_290._8_4_ = SUB84(dVar11,0);
        local_290._0_8_ = -(dVar32 * local_798 * dVar34) + dVar33 * dVar31 * dVar35;
        local_290._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        local_280 = (double)fVar3 * 0.5 * dVar37;
        local_278 = (double)fVar2 * 0.5 * dVar10;
        local_270 = (double)fVar29 * 0.5 * dVar4;
        FUN_1483f67ec(local_358);
        if (*local_7b8 == 0) {
          FUN_14850e2cc(local_358);
        }
        FUN_146c00d92(local_628,local_358);
        if (local_7bb != 0) {
          FUN_146c39da8(local_628);
        }
        local_138 = (double)CONCAT44(local_138._4_4_,iVar20);
        iVar20 = iVar20 + 1;
        (*(code *)*param_5)(param_5[1],&local_138,lVar27,local_628);
        FUN_141082778(local_628);
        FUN_146bd8050(local_358);
      }
      lVar27 = lVar27 + 0x70;
      lVar25 = lVar25 + -0x70;
    } while (lVar25 != 0);
  }
  auVar5 = _DAT_1499387d0;
  if ((longlong)(int)local_7b0[5] != 0) {
    lVar27 = local_7b0[4];
    lVar25 = (longlong)(int)local_7b0[5] * 0x68 + lVar27;
    dVar4 = (double)DAT_1499387d0;
    dVar10 = DAT_1499387d0._8_8_;
    piVar22 = local_7a0;
    local_780 = lVar25;
    do {
      cVar14 = (*(code *)*param_6)(param_6[1]);
      if (cVar14 != '\0') {
        local_798 = (double)CONCAT44(local_798._4_4_,iVar20);
        memset(local_358 + 8,0,0x91);
        pdVar16 = local_7a8;
        local_358._0_8_ = &PTR_FUN_14ae75180;
        local_2a0 = (double)((ulonglong)local_2a0 & 0xffffffff00000000);
        fVar29 = (float)FUN_147c4b146(lVar27,local_7a8);
        local_2b8 = (double)fVar29;
        fVar29 = (float)FUN_147c4b1b2(lVar27,pdVar16);
        local_2b0 = (double)fVar29;
        local_2a8 = *(double *)(piVar22 + 2);
        local_2a0._0_5_ = (uint5)local_2a0._0_4_;
        FUN_148397c72(local_358);
        if ((longlong)local_348._0_4_ != 0) {
          pdVar16 = (double *)local_358._8_8_;
          do {
            *pdVar16 = *pdVar16 + 0.0;
            pdVar16[1] = pdVar16[1] + 0.0;
            pdVar16[2] = pdVar16[2] - local_2b0 * 0.5;
            pdVar16 = pdVar16 + 3;
          } while (pdVar16 != (double *)(local_358._8_8_ + (longlong)local_348._0_4_ * 3 * 8));
        }
        auVar39 = *(undefined1 (*) [16])(lVar27 + 0x48);
        auVar40 = divpd(auVar39,auVar5);
        auVar43._8_8_ = 0;
        auVar43._0_8_ = *(double *)(lVar27 + 0x58);
        auVar43 = divpd(auVar43,auVar5);
        auVar40 = roundpd(auVar40,auVar40,3);
        auVar43 = roundpd(auVar43,auVar43,3);
        dVar30 = (auVar39._0_8_ - auVar40._0_8_ * dVar4) * 0.008726646259971648;
        dVar31 = (auVar39._8_8_ - auVar40._8_8_ * dVar10) * 0.008726646259971648;
        dVar37 = (*(double *)(lVar27 + 0x58) - auVar43._0_8_ * dVar4) * 0.008726646259971648;
        dVar11 = (0.0 - auVar43._8_8_ * dVar10) * 0.008726646259971648;
        dVar32 = sin(dVar30);
        dVar33 = sin(dVar31);
        dVar34 = sin(dVar37);
        sin(dVar11);
        dVar35 = cos(dVar30);
        dVar36 = cos(dVar31);
        dVar37 = cos(dVar37);
        cos(dVar11);
        dVar30 = -(dVar36 * dVar32 * dVar34) + dVar33 * dVar35 * dVar37;
        dVar31 = dVar33 * dVar32 * dVar34 + dVar36 * dVar35 * dVar37;
        local_6c8 = dVar32 * dVar33 * dVar37 - dVar35 * dVar36 * dVar34;
        dStack_6c0 = -(dVar32 * dVar36 * dVar37) - dVar35 * dVar33 * dVar34;
        dVar37 = *local_7a8 * *(double *)(lVar27 + 0x30);
        dVar11 = local_7a8[1] * *(double *)(lVar27 + 0x38);
        local_698._0_8_ = *(double *)(lVar27 + 0x40) * local_7a8[2];
        local_698._8_8_ = 0;
        lVar25 = CONCAT53(uStack_31d,CONCAT12(uStack_31e,local_320));
        lVar23 = (longlong)local_318;
        local_6b8._8_4_ = SUB84(dVar31,0);
        local_6b8._0_8_ = dVar30;
        local_6b8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        local_6a8._8_4_ = SUB84(dVar11,0);
        local_6a8._0_8_ = dVar37;
        local_6a8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        local_688 = 0x3ff0000000000000;
        uStack_680 = 0x3ff0000000000000;
        local_678 = 0x3ff0000000000000;
        uStack_670 = 0;
        if ((longlong)local_348._0_4_ != 0) {
          pauVar19 = (undefined1 (*) [16])local_358._8_8_;
          do {
            dVar11 = *(double *)*pauVar19 * 1.0;
            dVar31 = *(double *)(*pauVar19 + 8) * 1.0;
            dVar34 = *(double *)pauVar19[1] * 1.0;
            dVar32 = dVar31 * local_6c8 - dVar11 * dStack_6c0;
            dVar35 = dVar34 * dStack_6c0 - dVar31 * dVar30;
            dVar33 = dVar11 * dVar30 - local_6c8 * dVar34;
            dVar35 = dVar35 + dVar35;
            dVar33 = dVar33 + dVar33;
            dVar32 = dVar32 + dVar32;
            dVar31 = (dVar30 * dVar35 - local_6c8 * dVar32) +
                     (double)local_6b8._8_8_ * dVar33 + dVar31 + (double)local_6a8._8_8_;
            auVar39._8_4_ = SUB84(dVar31,0);
            auVar39._0_8_ =
                 (dVar32 * dStack_6c0 - dVar33 * dVar30) + (double)local_6b8._8_8_ * dVar35 + dVar11
                 + dVar37;
            auVar39._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            *pauVar19 = auVar39;
            *(double *)pauVar19[1] =
                 dVar32 * (double)local_6b8._8_8_ + dVar34 +
                 (dVar33 * local_6c8 - dVar35 * dStack_6c0) + local_698._0_8_;
            pauVar19 = (undefined1 (*) [16])(pauVar19[1] + 8);
          } while (pauVar19 !=
                   (undefined1 (*) [16])(local_358._8_8_ + (longlong)local_348._0_4_ * 0x18));
        }
        if (local_318 != 0) {
          lVar21 = 0;
          do {
            local_128 = (undefined ***)(double)*(float *)(lVar25 + 8 + lVar21);
            dStack_130 = (double)*(float *)(lVar25 + 4 + lVar21);
            local_138 = (double)*(float *)(lVar25 + lVar21);
            FUN_146bed2a4(local_628,&local_6c8,&local_138);
            *(float *)(lVar25 + lVar21) = (float)(double)local_628._0_8_;
            *(float *)(lVar25 + 4 + lVar21) = (float)(double)local_628._8_8_;
            *(float *)(lVar25 + 8 + lVar21) = (float)local_618;
            lVar21 = lVar21 + 0xc;
          } while (lVar23 * 0xc != lVar21);
        }
        if (*local_7b8 == 0) {
          FUN_14850e2cc(local_358);
        }
        FUN_146c00d92(local_628,local_358);
        piVar22 = local_7a0;
        iVar20 = local_798._0_4_;
        if (local_7bb != 0) {
          FUN_146c39da8(local_628);
        }
        local_138 = (double)CONCAT44(local_138._4_4_,iVar20);
        iVar20 = iVar20 + 1;
        (*(code *)*param_5)(param_5[1],&local_138,lVar27,local_628);
        FUN_141082778(local_628);
        FUN_146bd8050(local_358);
        lVar25 = local_780;
      }
      lVar27 = lVar27 + 0x68;
    } while (lVar27 != lVar25);
  }
  local_7ba = local_7ba & local_7b9;
  if ((longlong)(int)local_7b0[7] != 0) {
    lVar27 = local_7b0[6];
    lVar25 = (longlong)(int)local_7b0[7] * 0x100 + lVar27;
    do {
      cVar14 = (*(code *)*param_6)(param_6[1],lVar27);
      if (cVar14 != '\0') {
        dVar30 = *(double *)(lVar27 + 0x90);
        dVar31 = *(double *)(lVar27 + 0x98);
        dVar32 = *(double *)(lVar27 + 0xa0);
        dVar33 = *(double *)(lVar27 + 0xa8);
        dVar34 = *(double *)(lVar27 + 0xc0);
        dVar35 = *local_7a8;
        dVar36 = local_7a8[1];
        dVar4 = local_7a8[2];
        dVar46 = *(double *)(lVar27 + 0xb0);
        dVar42 = *(double *)(lVar27 + 0xb8);
        dVar10 = dVar35 * *(double *)(lVar27 + 0xd0);
        dVar37 = dVar36 * *(double *)(lVar27 + 0xd8);
        dVar11 = local_7a8[2] * *(double *)(lVar27 + 0xe0);
        iVar15 = *(int *)(lVar27 + 0x38);
        local_7c8 = local_7c8 & 0xffffffffffffff00;
        FUN_1411b354a(local_628,0,0,0);
        if (0 < (longlong)iVar15) {
          lVar23 = 0;
          do {
            pdVar16 = (double *)(*(longlong *)(lVar27 + 0x30) + lVar23);
            dVar8 = *pdVar16 * dVar10;
            dVar9 = pdVar16[1] * dVar37;
            dVar38 = *(double *)(*(longlong *)(lVar27 + 0x30) + 0x10 + lVar23) * dVar11;
            dVar41 = dVar9 * dVar30 - dVar31 * dVar8;
            dVar45 = dVar38 * dVar31 - dVar32 * dVar9;
            dVar44 = dVar8 * dVar32 - dVar30 * dVar38;
            dVar45 = dVar45 + dVar45;
            dVar44 = dVar44 + dVar44;
            dVar41 = dVar41 + dVar41;
            dVar9 = (dVar32 * dVar45 - dVar30 * dVar41) + dVar33 * dVar44 + dVar9 + dVar42 * dVar36;
            local_348 = dVar41 * dVar33 + dVar38 + (dVar44 * dVar30 - dVar45 * dVar31) +
                        dVar34 * dVar4;
            local_358._8_4_ = SUB84(dVar9,0);
            local_358._0_8_ =
                 (dVar41 * dVar31 - dVar44 * dVar32) + dVar33 * dVar45 + dVar8 + dVar46 * dVar35;
            local_358._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            local_338 = DAT_14c846338;
            local_340 = DAT_14c846330;
            local_32c = DAT_14c846338;
            local_334 = DAT_14c846330;
            local_328 = DAT_14c84635c;
            local_320 = 0;
            uStack_31e = 0;
            FUN_146c02208(local_628,local_358);
            lVar23 = lVar23 + 0x18;
          } while ((longlong)iVar15 * 0x18 != lVar23);
        }
        uVar6 = *(uint *)(lVar27 + 0x48);
        if (2 < (int)uVar6) {
          lVar23 = 0;
          do {
            auVar5 = local_358;
            lVar21 = *(longlong *)(lVar27 + 0x40);
            local_358._4_4_ = *(undefined4 *)(lVar21 + 8 + lVar23);
            local_358._0_4_ = *(undefined4 *)(lVar21 + lVar23);
            local_358._12_4_ = auVar5._12_4_;
            local_358._8_4_ = *(undefined4 *)(lVar21 + 4 + lVar23);
            FUN_146c01152(local_628,local_358,0);
            lVar23 = lVar23 + 0xc;
          } while (((ulonglong)uVar6 * 0xaaaaaaab >> 0x1f & 0xfffffffffffffffc) * 3 != lVar23);
        }
        if (dVar37 * dVar10 * dVar11 < 0.0) {
          FUN_146c0aee0(local_628,0);
        }
        if (*local_7b8 == 1) {
          FUN_14582eef4(local_628,0);
          FUN_14582ed12(local_628);
          if (local_7bb == 0) {
            if (*(int *)(CONCAT44(uStack_41c,uStack_420) + 0x38) < 1) {
              uVar17 = 0;
            }
            else {
              uVar17 = **(undefined8 **)(CONCAT44(uStack_41c,uStack_420) + 0x30);
            }
            FUN_146c39810(uVar17,0);
          }
          else {
            FUN_146c39da8(local_628);
          }
          if (local_7ba != 0) {
            FUN_148328bf2(local_358,local_628,0,1);
            if ((local_358._8_8_ != 0) && (0 < *(int *)(local_358._0_8_ + 0x170))) {
              local_7c8 = 0;
              FUN_148337bdc(local_358._0_8_ + 0x140,local_358._0_8_,local_358._8_8_,0);
            }
          }
        }
        local_358._0_4_ = iVar20;
        (*(code *)*param_5)(param_5[1],local_358);
        iVar20 = iVar20 + 1;
        FUN_141082778(local_628);
      }
      lVar27 = lVar27 + 0x100;
    } while (lVar27 != lVar25);
  }
  local_6d8 = 0;
  uStack_6d0 = 0;
  local_6e8 = 0;
  uStack_6e0 = 0;
  if ((longlong)(int)local_7b0[0xb] != 0) {
    plVar26 = (longlong *)local_7b0[10];
    plVar24 = plVar26 + (longlong)(int)local_7b0[0xb] * 0x14;
    piVar22 = local_7a0;
    local_7b0 = plVar24;
    do {
      cVar14 = (*(code *)*param_6)(param_6[1]);
      if (cVar14 != '\0') {
        dVar32 = (double)plVar26[6];
        dVar33 = (double)plVar26[7];
        dVar34 = (double)plVar26[8];
        dVar35 = (double)plVar26[9];
        dVar11 = (double)plVar26[10] * *local_7a8;
        dVar30 = (double)plVar26[0xb] * local_7a8[1];
        dVar36 = (double)plVar26[0xd];
        dVar31 = (double)plVar26[0xc] * local_7a8[2];
        dVar10 = *local_7a8 * (double)plVar26[0xe];
        dVar37 = local_7a8[1] * (double)plVar26[0xf];
        dVar46 = (double)plVar26[0x11];
        dVar4 = local_7a8[2] * (double)plVar26[0x10];
        local_7c8 = local_7c8 & 0xffffffffffffff00;
        FUN_1411b354a(local_358,0,0,0);
        local_798 = (double)CONCAT44(local_798._4_4_,iVar20);
        if (*(char *)((longlong)piVar22 + 0x11) == '\0') {
          memset(local_628 + 8,0,0x91);
          local_628._0_8_ = &PTR_FUN_149f361f0;
          local_588 = (code *)0x0;
          local_578 = (undefined ***)0x0;
          local_548 = 0;
          local_508 = 1;
          local_507 = 1;
          local_504 = 0x1000;
          local_4fc = 5;
          local_4e8 = 0;
          local_4d8 = &PTR_LAB_149f36510;
          local_4d0 = &LAB_146bd3270;
          local_4f8 = FUN_146bd3274;
          local_4b8 = 0;
          uStack_4b0 = 0x7fffffff00000000;
          local_4a8 = 0x7fffffff7fffffff;
          uStack_4a0 = 0x8000000180000001;
          local_498 = 0x7fffffff80000001;
          uStack_490 = 0x7fffffff7fffffff;
          local_488 = 0x8000000180000001;
          local_480 = 0x80000001;
          local_478 = 0x1000000000000000;
          local_470 = 0x2000000000000000;
          local_468 = 0x4000000000000000;
          local_460 = 0x40;
          uStack_428 = 0;
          uStack_424 = 0;
          uStack_420 = 0;
          uStack_438 = 0;
          uStack_430 = 0;
          local_42c = 0;
          local_448 = 0;
          uStack_440 = 0;
          local_458 = 0;
          uStack_450 = 0;
          local_408 = 0;
          uStack_400 = 0;
          local_418 = 0;
          uStack_410 = 0;
          local_3f8 = 0;
          uStack_3e0 = 0;
          uStack_3dc = 0;
          uStack_3f0 = 0;
          uStack_3e8 = 0;
          local_3e4 = 0;
          local_3c0 = 0;
          uStack_3b8 = 0;
          local_3d0 = 0;
          uStack_3c8 = 0;
          local_3b0 = 0;
          local_3a8 = 0x40;
          local_390 = 0;
          uStack_388 = 0;
          local_3a0 = 0;
          uStack_398 = 0;
          local_380 = 0x40;
          local_368 = 0;
          uStack_360 = 0;
          local_378 = 0;
          uStack_370 = 0;
          local_530 = DAT_14c8464f0 + -8.0;
          dStack_538 = DAT_14c8464e8 + -8.0;
          local_540 = DAT_14c8464e0 + -8.0;
          dStack_518 = DAT_14c8464f0 + 8.0;
          local_520 = DAT_14c8464e8 + 8.0;
          local_528 = DAT_14c8464e0 + 8.0;
          lVar27 = plVar26[0x12];
          plVar24 = (longlong *)plVar26[0x13];
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
            UNLOCK();
          }
          dVar42 = *(double *)(lVar27 + 0x60);
          if (*(double *)(lVar27 + 0x68) <= *(double *)(lVar27 + 0x60)) {
            dVar42 = *(double *)(lVar27 + 0x68);
          }
          if (*(double *)(lVar27 + 0x70) <= dVar42) {
            dVar42 = *(double *)(lVar27 + 0x70);
          }
          local_510 = dVar42 * 0.5;
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar24 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar24)(plVar24);
              LOCK();
              piVar22 = (int *)((longlong)plVar24 + 0xc);
              *piVar22 = *piVar22 + -1;
              UNLOCK();
              if (*piVar22 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          local_548 = 0;
          lVar27 = plVar26[0x12];
          plVar24 = (longlong *)plVar26[0x13];
          if (plVar24 == (longlong *)0x0) {
            local_708 = *(double *)(lVar27 + 200);
            local_718 = *(double *)(lVar27 + 0xb8);
            dStack_710 = *(double *)(lVar27 + 0xc0);
            local_6f0 = *(double *)(lVar27 + 0xe0);
            local_700 = *(double *)(lVar27 + 0xd0);
            dStack_6f8 = *(double *)(lVar27 + 0xd8);
          }
          else {
            LOCK();
            *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
            UNLOCK();
            local_708 = *(double *)(lVar27 + 200);
            local_718 = *(double *)(lVar27 + 0xb8);
            dStack_710 = *(double *)(lVar27 + 0xc0);
            local_6f0 = *(double *)(lVar27 + 0xe0);
            local_700 = *(double *)(lVar27 + 0xd0);
            dStack_6f8 = *(double *)(lVar27 + 0xd8);
            LOCK();
            plVar1 = plVar24 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar24)(plVar24);
              LOCK();
              piVar22 = (int *)((longlong)plVar24 + 0xc);
              *piVar22 = *piVar22 + -1;
              UNLOCK();
              if (*piVar22 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          uVar13 = uStack_550;
          uVar12 = local_558;
          plStack_640 = plStack_560;
          local_648 = local_568;
          uVar17 = uStack_570;
          local_658 = local_578;
          dVar42 = dStack_580;
          local_668 = (double)local_588;
          local_528 = local_700 + 0.0001;
          local_520 = dStack_6f8 + 0.0001;
          dStack_518 = local_6f0 + 0.0001;
          local_540 = local_718 + -0.0001;
          dStack_538 = dStack_710 + -0.0001;
          local_530 = local_708 + -0.0001;
          local_504 = local_504 & 0xffffffff;
          local_108 = local_558;
          uStack_100 = uStack_550;
          ppuStack_118 = local_568;
          plStack_110 = plStack_560;
          local_128 = local_578;
          uStack_120 = uStack_570;
          local_138 = (double)local_588;
          dStack_130 = dStack_580;
          local_558 = CONCAT44(uStack_634,local_638);
          uStack_550 = CONCAT44(uStack_62c,uStack_630);
          local_568 = &PTR_LAB_14af11240;
          plStack_560 = plVar26;
          local_578 = (undefined ***)0x0;
          uStack_570 = uStack_650;
          local_588 = FUN_143b876da;
          dStack_580 = dStack_660;
          local_108._0_4_ = (undefined4)uVar12;
          local_108._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
          uStack_100._0_4_ = (undefined4)uVar13;
          uStack_100._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
          local_638 = (undefined4)local_108;
          uStack_634 = local_108._4_4_;
          uStack_630 = (undefined4)uStack_100;
          uStack_62c = uStack_100._4_4_;
          uStack_650 = uVar17;
          dStack_660 = dVar42;
          local_108 = uVar12;
          uStack_100 = uVar13;
          if (local_668 != 0.0) {
            pppuVar18 = local_658;
            if (local_658 == (undefined ***)0x0) {
              pppuVar18 = &local_648;
            }
            (*(code *)(*pppuVar18)[2])();
          }
          FUN_14295d6bc(local_628);
          if (*local_7b8 == 0) {
            FUN_14850e2cc(local_628);
          }
          lVar27 = CONCAT53(uStack_5ed,CONCAT12(uStack_5ee,local_5f0));
          lVar25 = (longlong)local_5e8;
          local_758._8_4_ = SUB84(dVar30,0);
          local_758._0_8_ = dVar11;
          local_758._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          local_748._8_4_ = SUB84(dVar36 * 0.0,0);
          local_748._0_8_ = dVar31;
          local_748._12_4_ = (int)((ulonglong)(dVar36 * 0.0) >> 0x20);
          local_738._8_4_ = SUB84(dVar37,0);
          local_738._0_8_ = dVar10;
          local_738._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
          local_728._8_4_ = SUB84(dVar46 * 0.0,0);
          local_728._0_8_ = dVar4;
          local_728._12_4_ = (int)((ulonglong)(dVar46 * 0.0) >> 0x20);
          if ((longlong)local_618._0_4_ != 0) {
            pauVar19 = (undefined1 (*) [16])local_628._8_8_;
            do {
              dVar30 = *(double *)*pauVar19 * dVar10;
              dVar36 = *(double *)(*pauVar19 + 8) * (double)local_738._8_8_;
              dVar41 = *(double *)pauVar19[1] * dVar4;
              dVar46 = dVar36 * dVar32 - dVar30 * dVar33;
              dVar45 = dVar41 * dVar33 - dVar36 * dVar34;
              dVar42 = dVar30 * dVar34 - dVar32 * dVar41;
              dVar45 = dVar45 + dVar45;
              dVar42 = dVar42 + dVar42;
              dVar46 = dVar46 + dVar46;
              dVar36 = (dVar34 * dVar45 - dVar32 * dVar46) + dVar35 * dVar42 + dVar36 +
                       (double)local_758._8_8_;
              auVar5._8_4_ = SUB84(dVar36,0);
              auVar5._0_8_ = (dVar46 * dVar33 - dVar42 * dVar34) + dVar35 * dVar45 + dVar30 + dVar11
              ;
              auVar5._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
              *pauVar19 = auVar5;
              *(double *)pauVar19[1] =
                   dVar46 * dVar35 + dVar41 + (dVar42 * dVar32 - dVar45 * dVar33) + dVar31;
              pauVar19 = (undefined1 (*) [16])(pauVar19[1] + 8);
            } while (pauVar19 !=
                     (undefined1 (*) [16])(local_628._8_8_ + (longlong)local_618._0_4_ * 0x18));
          }
          local_778 = dVar32;
          dStack_770 = dVar33;
          local_768 = dVar34;
          dStack_760 = dVar35;
          if (local_5e8 != 0) {
            lVar23 = 0;
            do {
              local_658 = (undefined ***)(double)*(float *)(lVar27 + 8 + lVar23);
              dStack_660 = (double)*(float *)(lVar27 + 4 + lVar23);
              local_668 = (double)*(float *)(lVar27 + lVar23);
              FUN_146bed2a4(&local_138,&local_778,&local_668);
              *(float *)(lVar27 + lVar23) = (float)local_138;
              *(float *)(lVar27 + 4 + lVar23) = (float)dStack_130;
              *(float *)(lVar27 + 8 + lVar23) = (float)(double)local_128;
              lVar23 = lVar23 + 0xc;
            } while (lVar25 * 0xc != lVar23);
          }
          FUN_146c00e98(local_358,local_628);
          FUN_146ba0c6a(local_628);
        }
        else {
          bVar28 = (longlong)uStack_6d0 < 0;
          uStack_6d0 = uStack_6d0 & 0xffffffff00000000;
          if (bVar28) {
            FUN_140678446(&local_6d8,0);
          }
          bVar28 = (longlong)uStack_6e0 < 0;
          uStack_6e0 = uStack_6e0 & 0xffffffff00000000;
          if (bVar28) {
            FUN_146ea3024(&local_6e8,0);
          }
          if (plVar26[0x12] != 0) {
            FUN_146dd3016(plVar26[0x12],&local_6d8,&local_6e8);
          }
          if (0 < (int)uStack_6d0) {
            lVar25 = 8;
            lVar27 = 0;
            do {
              dVar36 = (double)*(float *)(local_6d8 + -8 + lVar25) * dVar10;
              dVar46 = (double)*(float *)(local_6d8 + -4 + lVar25) * dVar37;
              dVar44 = (double)*(float *)(local_6d8 + lVar25) * dVar4;
              dVar42 = dVar46 * dVar32 - dVar33 * dVar36;
              dVar41 = dVar44 * dVar33 - dVar34 * dVar46;
              dVar45 = dVar36 * dVar34 - dVar32 * dVar44;
              dVar41 = dVar41 + dVar41;
              dVar45 = dVar45 + dVar45;
              dVar42 = dVar42 + dVar42;
              dVar46 = (dVar34 * dVar41 - dVar32 * dVar42) + dVar35 * dVar45 + dVar46 + dVar30;
              local_618 = dVar42 * dVar35 + dVar44 + (dVar45 * dVar32 - dVar41 * dVar33) + dVar31;
              local_628._8_4_ = SUB84(dVar46,0);
              local_628._0_8_ =
                   (dVar42 * dVar33 - dVar45 * dVar34) + dVar35 * dVar41 + dVar36 + dVar11;
              local_628._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
              local_608 = DAT_14c846338;
              local_610 = DAT_14c846330;
              local_5fc = DAT_14c846338;
              local_604 = DAT_14c846330;
              local_5f8 = DAT_14c84635c;
              local_5f0 = 0;
              uStack_5ee = 0;
              FUN_146c02208(local_358,local_628);
              lVar27 = lVar27 + 1;
              lVar25 = lVar25 + 0xc;
            } while (lVar27 < (int)uStack_6d0);
          }
          if (0 < (int)uStack_6e0) {
            lVar25 = 8;
            lVar27 = 0;
            do {
              local_628._8_4_ = *(undefined4 *)(local_6e8 + lVar25);
              local_628._0_8_ = *(undefined8 *)(local_6e8 + -8 + lVar25);
              FUN_146c01152(local_358,local_628,0);
              lVar27 = lVar27 + 1;
              lVar25 = lVar25 + 0xc;
            } while (lVar27 < (int)uStack_6e0);
          }
        }
        piVar22 = local_7a0;
        plVar24 = local_7b0;
        if (dVar37 * dVar10 * dVar4 < 0.0) {
          FUN_146c0aee0(local_358,0);
        }
        iVar20 = local_798._0_4_;
        if (*local_7b8 == 1) {
          FUN_14582eef4(local_358,0);
          FUN_14582ed12(local_358);
          if (local_7bb == 0) {
            if (*(int *)(local_150 + 0x38) < 1) {
              uVar17 = 0;
            }
            else {
              uVar17 = **(undefined8 **)(local_150 + 0x30);
            }
            FUN_146c39810(uVar17,0);
          }
          else {
            FUN_146c39da8(local_358);
          }
          if (local_7ba != 0) {
            FUN_148328bf2(local_628,local_358,0,1);
            if ((local_628._8_8_ != 0) && (0 < *(int *)(local_628._0_8_ + 0x170))) {
              local_7c8 = 0;
              FUN_148337bdc(local_628._0_8_ + 0x140,local_628._0_8_,local_628._8_8_,0);
            }
          }
        }
        local_628._0_4_ = iVar20;
        (*(code *)*param_5)(param_5[1],local_628);
        iVar20 = iVar20 + 1;
        FUN_141082778(local_358);
      }
      plVar26 = plVar26 + 0x14;
    } while (plVar26 != plVar24);
    if (local_6e8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_6d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_7e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b8688e FUN_143b8688e body=1228 status=ok
// SIG undefined FUN_143b8688e(void)

void FUN_143b8688e(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  
  iVar18 = *(int *)(param_2 + 8);
  if (0 < iVar18) {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    uVar16 = 0;
    do {
      if (((param_4 >> (uVar16 & 0x1f) & 1) != 0) && ((longlong)*(int *)(param_1 + 0x2a0) != 0)) {
        puVar15 = *(undefined8 **)(param_1 + 0x298);
        puVar9 = puVar15 + (longlong)*(int *)(param_1 + 0x2a0) * 3;
        do {
          iVar18 = (int)param_5[1];
          iVar5 = (int)param_5[2];
          iVar8 = (iVar5 + 0x44) / 0x44;
          *(int *)(param_5 + 2) = iVar5 + 1;
          if (iVar18 < iVar8) {
            do {
              lVar11 = FUN_14001cc68(0x3fc0,0x10);
              lVar14 = 0;
              do {
                *(undefined8 *)(lVar11 + 0xa8 + lVar14) = 0;
                puVar17 = (undefined8 *)(lVar11 + 0xb8 + lVar14);
                *puVar17 = 0;
                puVar17[1] = 0;
                *(undefined8 *)(lVar11 + 200 + lVar14) = 0;
                *(undefined8 *)(lVar11 + 0xd0 + lVar14) = 0xffffffff;
                *(undefined8 *)(lVar11 + 0xd8 + lVar14) = 0xff0000ffffffff;
                *(undefined1 *)(lVar11 + 0xe0 + lVar14) = 0;
                *(undefined4 *)(lVar11 + 0xe4 + lVar14) = 0x40c00f07;
                pbVar2 = (byte *)(lVar11 + 0xe8 + lVar14);
                *pbVar2 = *pbVar2 & 0xfc;
                *(undefined1 **)(lVar11 + 0xb0 + lVar14) = &DAT_100000001;
                FUN_14470b9e0(lVar14 + lVar11,1);
                lVar14 = lVar14 + 0xf0;
              } while (lVar14 != 0x3fc0);
              iVar6 = (int)param_5[1];
              *(uint *)(param_5 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
                FUN_14002baf6(param_5,iVar6);
              }
              *(longlong *)(*param_5 + (longlong)iVar6 * 8) = lVar11;
              iVar18 = iVar18 + 1;
            } while (iVar18 != iVar8);
          }
          lVar14 = *(longlong *)(*param_5 + (longlong)(iVar5 / 0x44) * 8);
          lVar19 = (ulonglong)(uint)(iVar5 % 0x44) * 0xf0;
          lVar11 = lVar14 + lVar19;
          lVar20 = *(longlong *)(lVar14 + 0xa8 + lVar19);
          if (lVar20 == 0) {
            lVar20 = lVar11;
          }
          *(longlong *)(lVar20 + 0x18) = param_1 + 0x5e0;
          pbVar2 = (byte *)(lVar14 + 0xe5 + lVar19);
          *pbVar2 = *pbVar2 & 0xef;
          *(longlong *)(lVar14 + 0xb8 + lVar19) = param_1 + 0x2b8;
          *(undefined8 *)(lVar14 + 0xc0 + lVar19) = *puVar15;
          plVar7 = (longlong *)param_5[0x1d];
          puVar10 = (uint *)*puVar1;
          if (puVar10 != (uint *)0x0) goto LAB_143b86a49;
          while( true ) {
            FUN_14472e504(puVar1);
            puVar10 = (uint *)*puVar1;
LAB_143b86a49:
            puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
            uVar13 = puVar10[0x12];
            if (puVar17 + 8 <= puVar10 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar3 = *puVar10;
              *puVar10 = *puVar10 + uVar13 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar13) != 0xffffffff) break;
              puVar10 = (uint *)*puVar1;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar1 = puVar10;
              puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
              uVar13 = 0;
              if (puVar17 + 8 <= puVar10 + 0x4000) {
                uVar13 = 1;
                goto LAB_143b86abf;
              }
            }
          }
          uVar13 = uVar13 + 1;
LAB_143b86abf:
          *(undefined8 **)(puVar10 + 0x10) = puVar17 + 9;
          puVar10[0x12] = uVar13;
          *(int *)(puVar17 + -1) = ((int)puVar17 + -8) - (int)puVar10;
          *(undefined4 *)((longlong)puVar17 + -4) = 0x40;
          puVar17[1] = 0;
          *puVar17 = &PTR_FUN_14a5a8d50;
          lVar14 = *plVar7;
          do {
            puVar17[1] = lVar14;
            LOCK();
            lVar19 = *plVar7;
            bVar21 = lVar14 == lVar19;
            if (bVar21) {
              *plVar7 = (longlong)puVar17;
              lVar19 = lVar14;
            }
            UNLOCK();
            lVar14 = lVar19;
          } while (!bVar21);
          puVar17[2] = &PTR_FUN_14aa71480;
          *(undefined4 *)(puVar17 + 4) = 0xffffffff;
          *(undefined2 *)((longlong)puVar17 + 0x24) = 0x105;
          *(undefined1 *)((longlong)puVar17 + 0x26) = 0;
          puVar17[3] = &PTR_FUN_14a1ca300;
          *(undefined4 *)(puVar17 + 5) = 2;
          puVar17[6] = 0;
          puVar17[7] = 0;
          bVar4 = *(byte *)(param_1 + 0x75);
          bVar12 = 1;
          if (bVar4 < 0x40) {
            if ((bVar4 & 8) == 0) {
              bVar12 = 0;
            }
            else {
              bVar12 = (bVar4 & 4) >> 2;
            }
          }
          FUN_147ceeaf2(puVar17 + 2,param_5[0x22],param_1 + 0x100,param_1 + 0x100,param_1 + 0x180,
                        param_1 + 0x180,param_1 + 0x1b8,param_1 + 0x1b8,
                        *(byte *)(param_1 + 0x77) >> 6 & 1,1,0,bVar12,0);
          *(undefined8 **)(lVar20 + 8) = puVar17 + 3;
          *(undefined4 *)(lVar20 + 0x58) = *(undefined4 *)(puVar15 + 1);
          *(undefined4 *)(lVar20 + 0x5c) = *(undefined4 *)((longlong)puVar15 + 0xc);
          *(undefined4 *)(lVar20 + 0x68) = *(undefined4 *)(puVar15 + 2);
          *(undefined4 *)(lVar20 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x14);
          *(uint *)(lVar11 + 0xe4) =
               *(uint *)(lVar11 + 0xe4) & 0xffe03fbf | (*(byte *)(param_1 + 0x6b) & 1) << 6;
          FUN_1436a14f8(param_5,uVar16,lVar11);
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar9);
        iVar18 = *(int *)(param_2 + 8);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar18);
  }
  return;
}



// FUNCTION 143b86d82 FUN_143b86d82 body=282 status=ok
// SIG undefined FUN_143b86d82(void)

undefined8 * FUN_143b86d82(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b86d5a);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b86eb8 FUN_143b86eb8 body=1228 status=ok
// SIG undefined FUN_143b86eb8(void)

void FUN_143b86eb8(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  
  iVar18 = *(int *)(param_2 + 8);
  if (0 < iVar18) {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    uVar16 = 0;
    do {
      if (((param_4 >> (uVar16 & 0x1f) & 1) != 0) && ((longlong)*(int *)(param_1 + 0x2a0) != 0)) {
        puVar15 = *(undefined8 **)(param_1 + 0x298);
        puVar9 = puVar15 + (longlong)*(int *)(param_1 + 0x2a0) * 3;
        do {
          iVar18 = (int)param_5[1];
          iVar5 = (int)param_5[2];
          iVar8 = (iVar5 + 0x44) / 0x44;
          *(int *)(param_5 + 2) = iVar5 + 1;
          if (iVar18 < iVar8) {
            do {
              lVar11 = FUN_14001cc68(0x3fc0,0x10);
              lVar14 = 0;
              do {
                *(undefined8 *)(lVar11 + 0xa8 + lVar14) = 0;
                puVar17 = (undefined8 *)(lVar11 + 0xb8 + lVar14);
                *puVar17 = 0;
                puVar17[1] = 0;
                *(undefined8 *)(lVar11 + 200 + lVar14) = 0;
                *(undefined8 *)(lVar11 + 0xd0 + lVar14) = 0xffffffff;
                *(undefined8 *)(lVar11 + 0xd8 + lVar14) = 0xff0000ffffffff;
                *(undefined1 *)(lVar11 + 0xe0 + lVar14) = 0;
                *(undefined4 *)(lVar11 + 0xe4 + lVar14) = 0x40c00f07;
                pbVar2 = (byte *)(lVar11 + 0xe8 + lVar14);
                *pbVar2 = *pbVar2 & 0xfc;
                *(undefined1 **)(lVar11 + 0xb0 + lVar14) = &DAT_100000001;
                FUN_14470b9e0(lVar14 + lVar11,1);
                lVar14 = lVar14 + 0xf0;
              } while (lVar14 != 0x3fc0);
              iVar6 = (int)param_5[1];
              *(uint *)(param_5 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
                FUN_14002baf6(param_5,iVar6);
              }
              *(longlong *)(*param_5 + (longlong)iVar6 * 8) = lVar11;
              iVar18 = iVar18 + 1;
            } while (iVar18 != iVar8);
          }
          lVar14 = *(longlong *)(*param_5 + (longlong)(iVar5 / 0x44) * 8);
          lVar19 = (ulonglong)(uint)(iVar5 % 0x44) * 0xf0;
          lVar11 = lVar14 + lVar19;
          lVar20 = *(longlong *)(lVar14 + 0xa8 + lVar19);
          if (lVar20 == 0) {
            lVar20 = lVar11;
          }
          *(longlong *)(lVar20 + 0x18) = param_1 + 0x5e0;
          pbVar2 = (byte *)(lVar14 + 0xe5 + lVar19);
          *pbVar2 = *pbVar2 & 0xef;
          *(longlong *)(lVar14 + 0xb8 + lVar19) = param_1 + 0x2b8;
          *(undefined8 *)(lVar14 + 0xc0 + lVar19) = *puVar15;
          plVar7 = (longlong *)param_5[0x1d];
          puVar10 = (uint *)*puVar1;
          if (puVar10 != (uint *)0x0) goto LAB_143b87073;
          while( true ) {
            FUN_14472e504(puVar1);
            puVar10 = (uint *)*puVar1;
LAB_143b87073:
            puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
            uVar13 = puVar10[0x12];
            if (puVar17 + 8 <= puVar10 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar3 = *puVar10;
              *puVar10 = *puVar10 + uVar13 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar13) != 0xffffffff) break;
              puVar10 = (uint *)*puVar1;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar1 = puVar10;
              puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
              uVar13 = 0;
              if (puVar17 + 8 <= puVar10 + 0x4000) {
                uVar13 = 1;
                goto LAB_143b870e9;
              }
            }
          }
          uVar13 = uVar13 + 1;
LAB_143b870e9:
          *(undefined8 **)(puVar10 + 0x10) = puVar17 + 9;
          puVar10[0x12] = uVar13;
          *(int *)(puVar17 + -1) = ((int)puVar17 + -8) - (int)puVar10;
          *(undefined4 *)((longlong)puVar17 + -4) = 0x40;
          puVar17[1] = 0;
          *puVar17 = &PTR_FUN_14a5a8d50;
          lVar14 = *plVar7;
          do {
            puVar17[1] = lVar14;
            LOCK();
            lVar19 = *plVar7;
            bVar21 = lVar14 == lVar19;
            if (bVar21) {
              *plVar7 = (longlong)puVar17;
              lVar19 = lVar14;
            }
            UNLOCK();
            lVar14 = lVar19;
          } while (!bVar21);
          puVar17[2] = &PTR_FUN_14aa71480;
          *(undefined4 *)(puVar17 + 4) = 0xffffffff;
          *(undefined2 *)((longlong)puVar17 + 0x24) = 0x105;
          *(undefined1 *)((longlong)puVar17 + 0x26) = 0;
          puVar17[3] = &PTR_FUN_14a1ca300;
          *(undefined4 *)(puVar17 + 5) = 2;
          puVar17[6] = 0;
          puVar17[7] = 0;
          bVar4 = *(byte *)(param_1 + 0x75);
          bVar12 = 1;
          if (bVar4 < 0x40) {
            if ((bVar4 & 8) == 0) {
              bVar12 = 0;
            }
            else {
              bVar12 = (bVar4 & 4) >> 2;
            }
          }
          FUN_147ceeaf2(puVar17 + 2,param_5[0x22],param_1 + 0x100,param_1 + 0x100,param_1 + 0x180,
                        param_1 + 0x180,param_1 + 0x1b8,param_1 + 0x1b8,
                        *(byte *)(param_1 + 0x77) >> 6 & 1,1,0,bVar12,0);
          *(undefined8 **)(lVar20 + 8) = puVar17 + 3;
          *(undefined4 *)(lVar20 + 0x58) = *(undefined4 *)(puVar15 + 1);
          *(undefined4 *)(lVar20 + 0x5c) = *(undefined4 *)((longlong)puVar15 + 0xc);
          *(undefined4 *)(lVar20 + 0x68) = *(undefined4 *)(puVar15 + 2);
          *(undefined4 *)(lVar20 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x14);
          *(uint *)(lVar11 + 0xe4) =
               *(uint *)(lVar11 + 0xe4) & 0xffe03fbf | (*(byte *)(param_1 + 0x6b) & 1) << 6;
          FUN_1436a14f8(param_5,uVar16,lVar11);
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar9);
        iVar18 = *(int *)(param_2 + 8);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar18);
  }
  return;
}



// FUNCTION 143b87384 FUN_143b87384 body=282 status=ok
// SIG undefined FUN_143b87384(void)

undefined8 * FUN_143b87384(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b86d5a);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b8749e FUN_143b8749e body=459 status=ok
// SIG undefined FUN_143b8749e(void)

void FUN_143b8749e(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar1 = *param_2;
  lVar4 = (longlong)(int)uVar1 * 0x10;
  FUN_148279e70(&local_88,*(longlong *)*param_1 + lVar4,*(longlong *)*param_1 + lVar4 + 0x10);
  lVar4 = (longlong)(int)uVar1 + 2;
  if ((int)lVar4 < *(int *)param_1[1] + -1) {
    uVar6 = lVar4 << 0x20 | (ulonglong)uVar1;
    lVar5 = lVar4 * 0x10;
    do {
      if ((*(byte *)param_1[2] & 1) != 0) break;
      FUN_148279e70(&local_b0,*(longlong *)*param_1 + lVar5,*(longlong *)*param_1 + lVar5 + 0x10);
      cVar3 = FUN_146c6864c(&local_88,&local_b0,0,0);
      if ((cVar3 != '\0') && ((*(byte *)param_1[2] & 1) == 0)) {
        LOCK();
        bVar7 = *(char *)param_1[2] == '\0';
        if (bVar7) {
          *(char *)param_1[2] = '\x01';
        }
        UNLOCK();
        if (bVar7) {
          local_138 = local_68;
          local_148 = local_78;
          uStack_140 = uStack_70;
          local_158 = local_88;
          uStack_150 = uStack_80;
          local_130 = local_b0;
          uStack_12c = uStack_ac;
          uStack_128 = uStack_a8;
          uStack_124 = uStack_a4;
          local_120 = local_a0;
          uStack_11c = uStack_9c;
          uStack_118 = uStack_98;
          uStack_114 = uStack_94;
          local_110 = local_90;
          local_108 = 0;
          local_100 = 0x3e45798ee2308c3a;
          local_f8 = 0;
          local_f0 = 0;
          FUN_14850c2c4(&local_158);
          puVar2 = (undefined4 *)param_1[3];
          *puVar2 = local_e8;
          puVar2[1] = uStack_e4;
          puVar2[2] = uStack_e0;
          puVar2[3] = uStack_dc;
          *(ulonglong *)param_1[4] = uVar6;
          break;
        }
      }
      lVar4 = lVar4 + 1;
      uVar6 = uVar6 + 0x100000000;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < (longlong)*(int *)param_1[1] + -1);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b876da FUN_143b876da body=185 status=ok
// SIG undefined FUN_143b876da(void)

ulonglong FUN_143b876da(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(undefined8 *)(*param_1 + 0x90);
  plVar4 = *(longlong **)(*param_1 + 0x98);
  if (plVar4 == (longlong *)0x0) {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    uVar5 = FUN_146dd48fc(uVar3,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_28 = *(undefined8 *)(param_2 + 4);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    uVar5 = FUN_146dd48fc(uVar3,&local_38);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 ^ 0x8000000000000000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b877be FUN_143b877be body=29 status=ok
// SIG undefined FUN_143b877be(void)

undefined8 FUN_143b877be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87812 FUN_143b87812 body=29 status=ok
// SIG undefined FUN_143b87812(void)

undefined8 FUN_143b87812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87866 FUN_143b87866 body=29 status=ok
// SIG undefined FUN_143b87866(void)

undefined8 FUN_143b87866(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b878ba FUN_143b878ba body=29 status=ok
// SIG undefined FUN_143b878ba(void)

undefined8 FUN_143b878ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b8790e FUN_143b8790e body=29 status=ok
// SIG undefined FUN_143b8790e(void)

undefined8 FUN_143b8790e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87962 FUN_143b87962 body=29 status=ok
// SIG undefined FUN_143b87962(void)

undefined8 FUN_143b87962(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b879b6 FUN_143b879b6 body=29 status=ok
// SIG undefined FUN_143b879b6(void)

undefined8 FUN_143b879b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87a0a FUN_143b87a0a body=29 status=ok
// SIG undefined FUN_143b87a0a(void)

undefined8 FUN_143b87a0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87a5e FUN_143b87a5e body=29 status=ok
// SIG undefined FUN_143b87a5e(void)

undefined8 FUN_143b87a5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87ab2 FUN_143b87ab2 body=29 status=ok
// SIG undefined FUN_143b87ab2(void)

undefined8 FUN_143b87ab2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87ad0 FUN_143b87ad0 body=138 status=ok
// SIG undefined FUN_143b87ad0(void)

void FUN_143b87ad0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if ((*(char *)(*(longlong *)(lVar1 + 0x120) + 0xd0) == '\x01') &&
     (*(longlong **)(lVar1 + 0x138) != (longlong *)0x0)) {
    local_18 = &local_28;
    local_20 = FUN_143b87d9c;
    local_28 = lVar1;
    (**(code **)(**(longlong **)(lVar1 + 0x138) + 8))();
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar1 + 0x128) + 0x654) = 0x3f800000;
  }
  *(undefined1 *)(lVar1 + 0x130) = 1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b87b86 FUN_143b87b86 body=29 status=ok
// SIG undefined FUN_143b87b86(void)

undefined8 FUN_143b87b86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87bda FUN_143b87bda body=29 status=ok
// SIG undefined FUN_143b87bda(void)

undefined8 FUN_143b87bda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87c2e FUN_143b87c2e body=29 status=ok
// SIG undefined FUN_143b87c2e(void)

undefined8 FUN_143b87c2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87c82 FUN_143b87c82 body=29 status=ok
// SIG undefined FUN_143b87c82(void)

undefined8 FUN_143b87c82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87cd6 FUN_143b87cd6 body=29 status=ok
// SIG undefined FUN_143b87cd6(void)

undefined8 FUN_143b87cd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87d2a FUN_143b87d2a body=29 status=ok
// SIG undefined FUN_143b87d2a(void)

undefined8 FUN_143b87d2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87d7e FUN_143b87d7e body=29 status=ok
// SIG undefined FUN_143b87d7e(void)

undefined8 FUN_143b87d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b87d9c FUN_143b87d9c body=106 status=ok
// SIG undefined FUN_143b87d9c(void)

void FUN_143b87d9c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [48];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  (**(code **)(*param_2 + 0x10))(param_2,local_50);
  *(float *)(*(longlong *)(lVar1 + 0x128) + 0x654) = (float)((local_20 + local_20) * 0.01);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b87e08 FUN_143b87e08 body=113 status=ok
// SIG undefined FUN_143b87e08(void)

void FUN_143b87e08(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  (**(code **)(*param_2 + 0x10))(param_2,&local_50);
  *(undefined8 *)(lVar1 + 0x6e0) = local_20;
  *(undefined4 *)(lVar1 + 0x6d0) = local_30;
  *(undefined4 *)(lVar1 + 0x6d4) = uStack_2c;
  *(undefined4 *)(lVar1 + 0x6d8) = uStack_28;
  *(undefined4 *)(lVar1 + 0x6dc) = uStack_24;
  *(undefined4 *)(lVar1 + 0x6c0) = local_40;
  *(undefined4 *)(lVar1 + 0x6c4) = uStack_3c;
  *(undefined4 *)(lVar1 + 0x6c8) = uStack_38;
  *(undefined4 *)(lVar1 + 0x6cc) = uStack_34;
  *(undefined4 *)(lVar1 + 0x6b0) = local_50;
  *(undefined4 *)(lVar1 + 0x6b4) = uStack_4c;
  *(undefined4 *)(lVar1 + 0x6b8) = uStack_48;
  *(undefined4 *)(lVar1 + 0x6bc) = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b87e7a FUN_143b87e7a body=4391 status=ok
// SIG undefined FUN_143b87e7a(void)

void FUN_143b87e7a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined ***pppuVar19;
  longlong lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_208 [32];
  longlong **local_1e8;
  undefined4 local_1e0;
  undefined8 **local_1d8;
  int local_1cc;
  undefined8 *local_1c8;
  float local_1bc;
  float local_1b8;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b2;
  undefined1 local_1b1;
  float local_1b0;
  undefined1 local_1ac;
  undefined1 local_1ab;
  undefined1 local_1aa;
  undefined1 local_1a9;
  float local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined1 local_1a2;
  undefined1 local_1a1;
  float local_1a0;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a;
  undefined1 local_199;
  float local_198;
  undefined1 local_194;
  undefined1 local_193;
  undefined1 local_192;
  undefined1 local_191;
  float local_190;
  undefined1 local_18c;
  undefined1 local_18b;
  undefined1 local_18a;
  undefined1 local_189;
  longlong local_188;
  ulonglong uStack_180;
  float local_170;
  int local_16c;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164 [3];
  undefined1 local_161;
  longlong *local_160;
  undefined1 *local_158;
  longlong **local_150;
  undefined8 *local_148;
  undefined4 local_140;
  longlong *local_138;
  float *local_130;
  undefined ***local_128;
  longlong **local_120;
  undefined **local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  float *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  float *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  float *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  float *local_b8;
  undefined1 *local_b0;
  longlong **local_a8;
  float *local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar7 = (longlong *)*param_1;
  puVar13 = (undefined8 *)FUN_14001cc68(0x610,0x10);
  local_160 = param_2;
  FUN_1406ff4f8(puVar13,plVar7,0);
  *puVar13 = &PTR_FUN_14af114d0;
  puVar13[0x53] = 0;
  puVar13[0x54] = 0;
  (**(code **)(*plVar7 + 0xa10))(plVar7,puVar13 + 0x55,*(undefined4 *)(puVar13[0x42] + 8));
  uVar5 = *(undefined1 *)(puVar13[0x42] + 8);
  *(undefined4 *)(puVar13 + 0x58) = 0xffffffff;
  *(undefined1 *)((longlong)puVar13 + 0x2c4) = uVar5;
  *(undefined1 *)((longlong)puVar13 + 0x2c5) = 1;
  *(undefined1 *)((longlong)puVar13 + 0x2c6) = 0;
  puVar13[0x69] = 0;
  puVar13[0x6a] = 0x800000000;
  puVar13[0x6f] = 0;
  puVar13[0x70] = 0x200000000;
  puVar13[0x77] = 0;
  puVar13[0x78] = 0x300000000;
  puVar13[0x79] = 0;
  puVar13[0x7a] = 0;
  puVar13[0x7b] = 0;
  *(undefined4 *)(puVar13 + 0x7c) = 0x1ffffff;
  puVar13[0x57] = &PTR_FUN_14a1ca480;
  *(undefined4 *)(puVar13 + 0x8b) = 0;
  puVar13[0x7d] = 0;
  puVar13[0x7e] = 0;
  puVar13[0x7f] = 0;
  puVar13[0x80] = 0;
  puVar13[0x81] = 0;
  puVar13[0x82] = 0;
  *(undefined4 *)((longlong)puVar13 + 0x45c) = 4;
  puVar13[0x8c] = 0;
  puVar13[0x8d] = 0;
  puVar13[0x8e] = 0;
  puVar13[0x8f] = 0;
  puVar13[0x90] = 0;
  puVar13[0x91] = 0;
  puVar13[0x92] = 0;
  puVar13[0x93] = 0;
  *(undefined4 *)(puVar13 + 0x94) = 0xffffffff;
  *(undefined2 *)((longlong)puVar13 + 0x4a4) = 0xff;
  *(undefined1 *)((longlong)puVar13 + 0x4a6) = 0;
  puVar13[0x95] = 0;
  puVar13[0x96] = 0;
  puVar13[0x97] = 0;
  puVar13[0x98] = 0;
  puVar13[0x99] = 0;
  *(undefined4 *)(puVar13 + 0x9a) = 0xffffffff;
  *(undefined1 *)((longlong)puVar13 + 0x4d4) = 0;
  *(undefined4 *)(puVar13 + 0x9c) = 0xffffffff;
  *(undefined2 *)((longlong)puVar13 + 0x4e4) = 0x105;
  *(undefined1 *)((longlong)puVar13 + 0x4e6) = 0;
  puVar13[0x9b] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(puVar13 + 0x9e) = 0xffffffff;
  *(undefined2 *)((longlong)puVar13 + 0x4f4) = 0x105;
  *(undefined1 *)((longlong)puVar13 + 0x4f6) = 0;
  puVar13[0x9f] = 0;
  puVar13[0x9d] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(puVar13 + 0xa1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar13 + 0x50c) = 0x105;
  *(undefined1 *)((longlong)puVar13 + 0x50e) = 0;
  puVar13[0xa2] = 0;
  puVar13[0xa0] = &DAT_14aa6dc00;
  puVar13[0xa7] = 0;
  puVar13[0xa8] = 0;
  puVar13[0xa5] = 0;
  puVar13[0xa6] = 0;
  puVar13[0xa3] = 0;
  puVar13[0xa4] = 0;
  puVar13[0xaa] = 0;
  *(undefined2 *)(puVar13 + 0xab) = 0;
  *(undefined1 *)((longlong)puVar13 + 0x55a) = 1;
  *(undefined4 *)(puVar13 + 0xad) = 0xffffffff;
  *(undefined2 *)((longlong)puVar13 + 0x56c) = 0x105;
  *(undefined1 *)((longlong)puVar13 + 0x56e) = 0;
  puVar13[0xae] = 0;
  puVar13[0xac] = &PTR_FUN_14aa50910;
  puVar13[0xb1] = 0;
  puVar13[0xb2] = 0;
  puVar13[0xaf] = 0;
  puVar13[0xb0] = 0;
  *(undefined1 *)(puVar13 + 0xb3) = 1;
  *(undefined4 *)(puVar13 + 0xb5) = 0xffffffff;
  *(undefined2 *)((longlong)puVar13 + 0x5ac) = 0x105;
  *(undefined1 *)((longlong)puVar13 + 0x5ae) = 0;
  puVar13[0xb6] = 0;
  puVar13[0xb4] = &PTR_FUN_14aa61a50;
  puVar13[0xb9] = 0;
  puVar13[0xba] = 0;
  puVar13[0xb7] = 0;
  puVar13[0xb8] = 0;
  *(undefined1 *)(puVar13 + 0xbb) = 1;
  *(undefined4 *)(puVar13 + 0xbd) = 0xffffffff;
  *(undefined2 *)((longlong)puVar13 + 0x5ec) = 0x105;
  *(undefined1 *)((longlong)puVar13 + 0x5ee) = 0;
  puVar13[0xbe] = 0;
  puVar13[0xbc] = &PTR_FUN_14a83cdc0;
  puVar13[0xbf] = 0;
  puVar13[0xc0] = 0;
  if (((param_2 == (longlong *)0x0) || (cVar9 = (**(code **)(*param_2 + 8))(param_2), cVar9 == '\0')
      ) || (iVar10 = (**(code **)(*param_2 + 0x20))(param_2), iVar10 < 1)) goto LAB_143b881a8;
  local_161 = *(undefined1 *)((longlong)plVar7 + 0x65c);
  local_164[2] = (undefined1)plVar7[0xcd];
  local_164[1] = *(undefined1 *)((longlong)plVar7 + 0x674);
  local_164[0] = (undefined1)plVar7[0xd0];
  local_165 = *(undefined1 *)((longlong)plVar7 + 0x68c);
  local_166 = (undefined1)plVar7[0xd3];
  local_16c = (**(code **)(*param_2 + 0x28))(param_2);
  local_128 = (undefined ***)&local_16c;
  iVar10 = local_16c + 0x7ffe;
  if (-1 < local_16c + 0x3fff) {
    iVar10 = local_16c + 0x3fff;
  }
  local_170 = (float)(iVar10 >> 0xe);
  local_188 = 0;
  uStack_180 = 0;
  FUN_14850f922(&local_188);
  local_150 = &local_138;
  local_120 = &local_160;
  local_118 = (undefined **)&local_161;
  local_110 = (undefined8 *)(local_164 + 2);
  local_108 = local_164 + 1;
  local_100 = (float *)local_164;
  local_1d8 = &local_148;
  local_148 = (undefined8 *)0x0;
  iVar10 = 0;
  local_140 = 0;
  local_158 = &LAB_14850fcaa;
  local_1e0 = 0;
  local_138 = &local_188;
  local_130 = &local_170;
  local_f8 = &local_165;
  local_f0 = &local_166;
  FUN_1401f8d10(L"ParallelFor Task");
  if (0 < (int)local_170) {
    lVar20 = 0;
    lVar23 = 0;
    do {
      *(int *)(local_188 + lVar20) = iVar10;
      iVar10 = iVar10 + *(int *)(local_188 + 0x10 + lVar20);
      lVar23 = lVar23 + 1;
      lVar20 = lVar20 + 0x18;
    } while (lVar23 < (int)local_170);
    if (iVar10 != 0) {
      iVar3 = iVar10 * 4;
      local_1cc = iVar10 * 6;
      local_1c8 = puVar13 + 0x53;
      FUN_1408e3634(puVar13 + 0xac,iVar3,CONCAT71((int7)((ulonglong)lVar23 >> 8),1));
      FUN_1408e36f6(puVar13 + 0x9b,iVar3,1,1);
      FUN_140964b22(puVar13 + 0xb4,iVar3,1);
      FUN_14017c08a(puVar13 + 0xbf,local_1cc,1);
      iVar6 = *(int *)(puVar13 + 0x54);
      *(uint *)(puVar13 + 0x54) = iVar6 + 1U;
      if (*(uint *)((longlong)puVar13 + 0x2a4) < iVar6 + 1U) {
        FUN_14850fe70(local_1c8,iVar6);
      }
      *(undefined8 *)(puVar13[0x53] + (longlong)iVar6 * 0x18) = 0;
      puVar2 = (undefined8 *)(puVar13[0x53] + (longlong)(*(int *)(puVar13 + 0x54) + -1) * 0x18);
      *(undefined4 *)(puVar2 + 2) = 0;
      *(int *)((longlong)puVar2 + 0x14) = iVar3 + -1;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(int *)((longlong)puVar2 + 0xc) = iVar10 * 2;
      lVar20 = (**(code **)(*plVar7 + 0x610))(plVar7,0);
      if (lVar20 == 0) {
        FUN_14003fbd6();
        uVar14 = (**(code **)(*DAT_14caea080 + 0x2f0))();
      }
      else {
        plVar15 = (longlong *)(**(code **)(*plVar7 + 0x610))(plVar7,0);
        uVar14 = (**(code **)(*plVar15 + 0x2f0))(plVar15);
      }
      *puVar2 = uVar14;
      fVar26 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x661)];
      fVar28 = (float)(&DAT_14c758c60)[*(byte *)(plVar7 + 0xcc)];
      fVar29 = (float)*(byte *)((longlong)plVar7 + 0x663) * 0.003921569;
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      fVar27 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x662)];
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      if (1.0 <= fVar27) {
        fVar27 = 1.0;
      }
      local_18c = (undefined1)(int)(fVar28 * 255.0 + 0.5);
      local_18b = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      local_18a = (undefined1)(int)(fVar27 * 255.0 + 0.5);
      local_189 = (undefined1)(int)(fVar29 * 255.0 + 0.5);
      local_1b8 = *(float *)(plVar7 + 0xcb);
      local_190 = *(float *)((longlong)plVar7 + 0x664) * local_1b8;
      local_130 = &local_190;
      fVar26 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x66e)];
      fVar28 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x66d)];
      fVar29 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x66c)];
      fVar27 = (float)*(byte *)((longlong)plVar7 + 0x66f) * 0.003921569;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      if (1.0 <= fVar27) {
        fVar27 = 1.0;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      local_110 = (undefined8 *)&local_194;
      local_194 = (undefined1)(int)(fVar29 * 255.0 + 0.5);
      local_193 = (undefined1)(int)(fVar28 * 255.0 + 0.5);
      local_192 = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      local_191 = (undefined1)(int)(fVar27 * 255.0 + 0.5);
      local_198 = *(float *)(plVar7 + 0xce) * local_1b8;
      local_118 = (undefined **)&local_198;
      fVar26 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x67a)];
      fVar28 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x679)];
      fVar29 = (float)(&DAT_14c758c60)[*(byte *)(plVar7 + 0xcf)];
      fVar27 = (float)*(byte *)((longlong)plVar7 + 0x67b) * 0.003921569;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      if (1.0 <= fVar27) {
        fVar27 = 1.0;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      local_f8 = &local_19c;
      local_19c = (undefined1)(int)(fVar29 * 255.0 + 0.5);
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      local_19b = (undefined1)(int)(fVar28 * 255.0 + 0.5);
      local_19a = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      local_199 = (undefined1)(int)(fVar27 * 255.0 + 0.5);
      local_1a0 = *(float *)((longlong)plVar7 + 0x67c) * local_1b8;
      local_100 = &local_1a0;
      fVar26 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x686)];
      fVar28 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x685)];
      fVar29 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x684)];
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      local_e0 = &local_1a4;
      local_1a4 = (undefined1)(int)(fVar29 * 255.0 + 0.5);
      local_1a3 = (undefined1)(int)(fVar28 * 255.0 + 0.5);
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      local_1a2 = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      fVar26 = (float)*(byte *)((longlong)plVar7 + 0x687) * 0.003921569;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      local_1a1 = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      local_1a8 = *(float *)(plVar7 + 0xd1) * local_1b8;
      local_e8 = &local_1a8;
      fVar26 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x692)];
      fVar28 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x691)];
      fVar29 = (float)(&DAT_14c758c60)[*(byte *)(plVar7 + 0xd2)];
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      local_c8 = &local_1ac;
      local_1ac = (undefined1)(int)(fVar29 * 255.0 + 0.5);
      local_1ab = (undefined1)(int)(fVar28 * 255.0 + 0.5);
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      local_1aa = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      fVar26 = (float)*(byte *)((longlong)plVar7 + 0x693) * 0.003921569;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      local_1a9 = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      local_1b0 = *(float *)((longlong)plVar7 + 0x694) * local_1b8;
      local_d0 = &local_1b0;
      fVar26 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x69e)];
      fVar28 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x69d)];
      fVar29 = (float)(&DAT_14c758c60)[*(byte *)((longlong)plVar7 + 0x69c)];
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      local_b0 = &local_1b4;
      local_1b4 = (undefined1)(int)(fVar29 * 255.0 + 0.5);
      local_1b3 = (undefined1)(int)(fVar28 * 255.0 + 0.5);
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      local_1b2 = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      fVar26 = (float)*(byte *)((longlong)plVar7 + 0x69f) * 0.003921569;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      local_1b1 = (undefined1)(int)(fVar26 * 255.0 + 0.5);
      local_1b8 = local_1b8 * *(float *)(plVar7 + 0xd4);
      local_b8 = &local_1b8;
      local_1bc = *(float *)(plVar7 + 0xca) * *(float *)((longlong)plVar7 + 0x654);
      local_138 = &local_188;
      local_128 = (undefined ***)&local_18c;
      local_120 = (longlong **)(local_164 + 2);
      local_108 = local_164 + 1;
      local_f0 = local_164;
      local_d8 = &local_165;
      local_c0 = &local_166;
      local_a0 = &local_1bc;
      local_a8 = &local_160;
      local_148 = (undefined8 *)0x0;
      local_158 = &LAB_14850ff04;
      local_140 = 0;
      local_150 = &local_138;
      local_1d8 = &local_148;
      local_1e0 = 0;
      local_98 = puVar13;
      FUN_1401f8d10(L"ParallelFor Task",local_170,1);
      lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar10 = *(int *)(lVar20 + 0xc60);
      local_148 = puVar13;
      if (DAT_14c86a9fc == 0) {
        if (iVar10 != 2) {
          if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            bVar25 = DVar11 == DVar12;
          }
          else {
            bVar25 = iVar10 == 0x10;
          }
          if (!bVar25) goto LAB_143b88b4a;
        }
      }
      else if (iVar10 != 0x10) {
LAB_143b88b4a:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar20 + 0xc60), iVar10 == 2))
          goto LAB_143b88ae0;
          if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_143b88ae0;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar17 = (uint *)*puVar2;
          if (puVar17 != (uint *)0x0) goto LAB_143b88c24;
          while( true ) {
            uVar18 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar18 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar18 | 1;
              __tlregdtor(&LAB_143b86d5a);
            }
            lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar16 = *(undefined4 **)(lVar20 + 0x310);
            *(undefined8 *)(lVar20 + 0x310) = 0;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar2 = puVar16;
            FUN_140217a48(puVar2);
            puVar17 = (uint *)*puVar2;
LAB_143b88c24:
            puVar22 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar21 = (uint *)(puVar22 + 0x16);
            uVar18 = puVar17[0x12];
            if (puVar21 <= puVar17 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
              LOCK();
              uVar4 = *puVar17;
              *puVar17 = *puVar17 + uVar18 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar18) != 0xffffffff) break;
              puVar17 = (uint *)*puVar2;
              *puVar17 = 0xffffffff;
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
              puVar17[0x12] = 0;
              *puVar2 = puVar17;
              puVar22 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
              puVar21 = (uint *)(puVar22 + 0x16);
              uVar18 = 0;
              if (puVar21 <= puVar17 + 0x4000) {
                uVar18 = 1;
                goto LAB_143b88ca4;
              }
            }
          }
          uVar18 = uVar18 + 1;
LAB_143b88ca4:
          *(uint **)(puVar17 + 0x10) = puVar21;
          puVar17[0x12] = uVar18;
          iVar10 = 0;
          FUN_1447247dc(puVar22,0);
          *puVar22 = &PTR_FUN_14af11770;
          puVar22[0x15] = local_148;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar18 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
              uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
              iVar10 = 0;
            }
            else {
              uVar24 = 2;
            }
          }
          else {
            iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar24 = 5;
          }
          if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
          }
          puVar22[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar22[9] = puVar22;
          puVar22[10] = puVar22;
          lVar20 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar20 == 0) {
            uVar8 = 1;
            if ((char)uVar24 != '\x06') {
              uVar8 = uVar24;
            }
            uVar24 = uVar8;
            uVar14 = 0;
          }
          else {
            if ((char)uVar24 == '\x06') {
              uVar24 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
            }
            uVar14 = *(undefined8 *)(lVar20 + 0x30);
          }
          puVar22[0xf] = uVar14;
          puVar22[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar22 + 0x1c) = iVar10;
          if (puVar22 == (undefined8 *)0x0) {
            local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
            UNLOCK();
            local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
            FUN_1447439e4(puVar22);
            LOCK();
            piVar1 = (int *)(puVar22 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar22)(puVar22,1);
            }
          }
        }
        else {
          local_128 = (undefined ***)0x0;
          local_118 = &PTR_LAB_14af11710;
          local_138 = (longlong *)&LAB_148511b40;
          local_1e8 = &local_138;
          local_110 = puVar13;
          FUN_14005a792(&DAT_14ca9a440,L"MeshWireframeVertexBuffersInit",&DAT_14cb4d5f0);
          if (local_138 != (longlong *)0x0) {
            pppuVar19 = local_128;
            if (local_128 == (undefined ***)0x0) {
              pppuVar19 = &local_118;
            }
            (*(code *)(*pppuVar19)[2])();
          }
        }
        goto LAB_143b88afc;
      }
LAB_143b88ae0:
      FUN_1485119d4(&local_148,&DAT_14ca85100);
    }
  }
LAB_143b88afc:
  FUN_14850fc0a(local_188,uStack_180 & 0xffffffff);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
LAB_143b881a8:
  *(undefined8 **)param_1[1] = puVar13;
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b88fa2 FUN_143b88fa2 body=1228 status=ok
// SIG undefined FUN_143b88fa2(void)

void FUN_143b88fa2(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  
  iVar18 = *(int *)(param_2 + 8);
  if (0 < iVar18) {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    uVar16 = 0;
    do {
      if (((param_4 >> (uVar16 & 0x1f) & 1) != 0) && ((longlong)*(int *)(param_1 + 0x2a0) != 0)) {
        puVar15 = *(undefined8 **)(param_1 + 0x298);
        puVar9 = puVar15 + (longlong)*(int *)(param_1 + 0x2a0) * 3;
        do {
          iVar18 = (int)param_5[1];
          iVar5 = (int)param_5[2];
          iVar8 = (iVar5 + 0x44) / 0x44;
          *(int *)(param_5 + 2) = iVar5 + 1;
          if (iVar18 < iVar8) {
            do {
              lVar11 = FUN_14001cc68(0x3fc0,0x10);
              lVar14 = 0;
              do {
                *(undefined8 *)(lVar11 + 0xa8 + lVar14) = 0;
                puVar17 = (undefined8 *)(lVar11 + 0xb8 + lVar14);
                *puVar17 = 0;
                puVar17[1] = 0;
                *(undefined8 *)(lVar11 + 200 + lVar14) = 0;
                *(undefined8 *)(lVar11 + 0xd0 + lVar14) = 0xffffffff;
                *(undefined8 *)(lVar11 + 0xd8 + lVar14) = 0xff0000ffffffff;
                *(undefined1 *)(lVar11 + 0xe0 + lVar14) = 0;
                *(undefined4 *)(lVar11 + 0xe4 + lVar14) = 0x40c00f07;
                pbVar2 = (byte *)(lVar11 + 0xe8 + lVar14);
                *pbVar2 = *pbVar2 & 0xfc;
                *(undefined1 **)(lVar11 + 0xb0 + lVar14) = &DAT_100000001;
                FUN_14470b9e0(lVar14 + lVar11,1);
                lVar14 = lVar14 + 0xf0;
              } while (lVar14 != 0x3fc0);
              iVar6 = (int)param_5[1];
              *(uint *)(param_5 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
                FUN_14002baf6(param_5,iVar6);
              }
              *(longlong *)(*param_5 + (longlong)iVar6 * 8) = lVar11;
              iVar18 = iVar18 + 1;
            } while (iVar18 != iVar8);
          }
          lVar14 = *(longlong *)(*param_5 + (longlong)(iVar5 / 0x44) * 8);
          lVar19 = (ulonglong)(uint)(iVar5 % 0x44) * 0xf0;
          lVar11 = lVar14 + lVar19;
          lVar20 = *(longlong *)(lVar14 + 0xa8 + lVar19);
          if (lVar20 == 0) {
            lVar20 = lVar11;
          }
          *(longlong *)(lVar20 + 0x18) = param_1 + 0x5e0;
          pbVar2 = (byte *)(lVar14 + 0xe5 + lVar19);
          *pbVar2 = *pbVar2 & 0xef;
          *(longlong *)(lVar14 + 0xb8 + lVar19) = param_1 + 0x2b8;
          *(undefined8 *)(lVar14 + 0xc0 + lVar19) = *puVar15;
          plVar7 = (longlong *)param_5[0x1d];
          puVar10 = (uint *)*puVar1;
          if (puVar10 != (uint *)0x0) goto LAB_143b8915d;
          while( true ) {
            FUN_14472e504(puVar1);
            puVar10 = (uint *)*puVar1;
LAB_143b8915d:
            puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
            uVar13 = puVar10[0x12];
            if (puVar17 + 8 <= puVar10 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar3 = *puVar10;
              *puVar10 = *puVar10 + uVar13 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar13) != 0xffffffff) break;
              puVar10 = (uint *)*puVar1;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar1 = puVar10;
              puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
              uVar13 = 0;
              if (puVar17 + 8 <= puVar10 + 0x4000) {
                uVar13 = 1;
                goto LAB_143b891d3;
              }
            }
          }
          uVar13 = uVar13 + 1;
LAB_143b891d3:
          *(undefined8 **)(puVar10 + 0x10) = puVar17 + 9;
          puVar10[0x12] = uVar13;
          *(int *)(puVar17 + -1) = ((int)puVar17 + -8) - (int)puVar10;
          *(undefined4 *)((longlong)puVar17 + -4) = 0x40;
          puVar17[1] = 0;
          *puVar17 = &PTR_FUN_14a5a8d50;
          lVar14 = *plVar7;
          do {
            puVar17[1] = lVar14;
            LOCK();
            lVar19 = *plVar7;
            bVar21 = lVar14 == lVar19;
            if (bVar21) {
              *plVar7 = (longlong)puVar17;
              lVar19 = lVar14;
            }
            UNLOCK();
            lVar14 = lVar19;
          } while (!bVar21);
          puVar17[2] = &PTR_FUN_14aa71480;
          *(undefined4 *)(puVar17 + 4) = 0xffffffff;
          *(undefined2 *)((longlong)puVar17 + 0x24) = 0x105;
          *(undefined1 *)((longlong)puVar17 + 0x26) = 0;
          puVar17[3] = &PTR_FUN_14a1ca300;
          *(undefined4 *)(puVar17 + 5) = 2;
          puVar17[6] = 0;
          puVar17[7] = 0;
          bVar4 = *(byte *)(param_1 + 0x75);
          bVar12 = 1;
          if (bVar4 < 0x40) {
            if ((bVar4 & 8) == 0) {
              bVar12 = 0;
            }
            else {
              bVar12 = (bVar4 & 4) >> 2;
            }
          }
          FUN_147ceeaf2(puVar17 + 2,param_5[0x22],param_1 + 0x100,param_1 + 0x100,param_1 + 0x180,
                        param_1 + 0x180,param_1 + 0x1b8,param_1 + 0x1b8,
                        *(byte *)(param_1 + 0x77) >> 6 & 1,0,0,bVar12,0);
          *(undefined8 **)(lVar20 + 8) = puVar17 + 3;
          *(undefined4 *)(lVar20 + 0x58) = *(undefined4 *)(puVar15 + 1);
          *(undefined4 *)(lVar20 + 0x5c) = *(undefined4 *)((longlong)puVar15 + 0xc);
          *(undefined4 *)(lVar20 + 0x68) = *(undefined4 *)(puVar15 + 2);
          *(undefined4 *)(lVar20 + 0x6c) = *(undefined4 *)((longlong)puVar15 + 0x14);
          *(uint *)(lVar11 + 0xe4) =
               *(uint *)(lVar11 + 0xe4) & 0xffe03fbf | (*(byte *)(param_1 + 0x6b) & 1) << 6;
          FUN_1436a14f8(param_5,uVar16,lVar11);
          puVar15 = puVar15 + 3;
        } while (puVar15 != puVar9);
        iVar18 = *(int *)(param_2 + 8);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar18);
  }
  return;
}



// FUNCTION 143b8946e FUN_143b8946e body=282 status=ok
// SIG undefined FUN_143b8946e(void)

undefined8 * FUN_143b8946e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143b86d5a);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143b89622 FUN_143b89622 body=29 status=ok
// SIG undefined FUN_143b89622(void)

undefined8 FUN_143b89622(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b89640 FUN_143b89640 body=73 status=ok
// SIG undefined FUN_143b89640(void)

void FUN_143b89640(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(**(longlong **)(*param_1 + 0x30) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b89694 FUN_143b89694 body=12 status=ok
// SIG undefined FUN_143b89694(void)

void FUN_143b89694(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b8969d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b896a0 FUN_143b896a0 body=29 status=ok
// SIG undefined FUN_143b896a0(void)

undefined8 FUN_143b896a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b896f4 FUN_143b896f4 body=29 status=ok
// SIG undefined FUN_143b896f4(void)

undefined8 FUN_143b896f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b89748 FUN_143b89748 body=29 status=ok
// SIG undefined FUN_143b89748(void)

undefined8 FUN_143b89748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b897c4 FUN_143b897c4 body=29 status=ok
// SIG undefined FUN_143b897c4(void)

undefined8 FUN_143b897c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b89852 FUN_143b89852 body=29 status=ok
// SIG undefined FUN_143b89852(void)

undefined8 FUN_143b89852(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b89870 FUN_143b89870 body=1182 status=ok
// SIG undefined FUN_143b89870(void)

void FUN_143b89870(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
                  uint *param_5,double *param_6,double *param_7,double *param_8,undefined4 *param_9)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  double dStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  undefined4 local_bc;
  uint local_b8;
  int local_b4;
  ulonglong local_b0;
  double dVar6;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_b8 = *param_5;
  local_bc = *param_4;
  lVar20 = *param_1;
  dVar8 = *param_7 * param_6[8];
  dVar9 = param_7[1] * param_6[9];
  dVar22 = param_7[2] * param_6[10];
  dVar5 = param_6[3];
  dVar6 = param_6[3];
  dVar13 = *param_6;
  dVar14 = param_6[1];
  dVar15 = param_6[2];
  dVar10 = dVar9 * dVar13 - dVar8 * dVar14;
  dVar11 = dVar22 * dVar14 - dVar9 * dVar15;
  dVar12 = dVar8 * dVar15 - dVar22 * dVar13;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  local_128 = (uint *)((dVar10 * dVar14 - dVar12 * dVar15) + dVar5 * dVar11 + dVar8 + param_6[4]);
  dVar8 = (dVar15 * dVar11 - dVar13 * dVar10) + dVar6 * dVar12 + dVar9 + param_6[5];
  local_118 = dVar10 * dVar5 + dVar22 + (dVar12 * dVar13 - dVar11 * dVar14) + param_6[6];
  local_d8._8_4_ = SUB84(dVar8,0);
  local_d8._0_8_ = local_128;
  local_d8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar11 = *param_8 * param_6[8];
  dVar12 = param_8[1] * param_6[9];
  dVar9 = param_8[2] * param_6[10];
  dVar22 = dVar12 * dVar13 - dVar14 * dVar11;
  dVar10 = dVar9 * dVar14 - dVar15 * dVar12;
  dVar8 = dVar11 * dVar15 - dVar13 * dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar22 = dVar22 + dVar22;
  dStack_110 = (dVar22 * dVar14 - dVar8 * dVar15) + dVar5 * dVar10 + dVar11 + param_6[4];
  dStack_108 = (dVar15 * dVar10 - dVar13 * dVar22) + dVar6 * dVar8 + dVar12 + param_6[5];
  uStack_100 = dVar22 * dVar5 + dVar9 + (dVar8 * dVar13 - dVar10 * dVar14) + param_6[6];
  local_f8._8_4_ = SUB84(dStack_108,0);
  local_f8._0_8_ = dStack_110;
  local_f8._12_4_ = (int)((ulonglong)dStack_108 >> 0x20);
  uVar3 = *(undefined4 *)(lVar20 + 0x304);
  uVar4 = *(undefined4 *)(lVar20 + 0x308);
  uStack_120 = local_d8._8_8_;
  uVar7 = *param_9;
  iVar19 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar19 + 1U;
  local_e8 = uStack_100;
  local_c8 = local_118;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar19 + 1U) {
    FUN_1485156d2(param_3,iVar19);
  }
  lVar18 = *param_3;
  lVar21 = (longlong)iVar19 * 0x40;
  pdVar1 = (double *)(lVar18 + 0x20 + lVar21);
  *pdVar1 = dStack_108;
  *(undefined4 *)(pdVar1 + 1) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_100._4_4_;
  puVar2 = (undefined4 *)(lVar18 + 0x10 + lVar21);
  *puVar2 = (undefined4)local_118;
  puVar2[1] = local_118._4_4_;
  *(double *)(puVar2 + 2) = dStack_110;
  puVar2 = (undefined4 *)(lVar18 + lVar21);
  *puVar2 = (undefined4)local_128;
  puVar2[1] = local_128._4_4_;
  puVar2[2] = (undefined4)uStack_120;
  puVar2[3] = uStack_120._4_4_;
  *(undefined4 *)(lVar18 + 0x30 + lVar21) = uVar7;
  *(undefined4 *)(lVar18 + 0x34 + lVar21) = uVar3;
  *(undefined4 *)(lVar18 + 0x38 + lVar21) = uVar4;
  FUN_1484f435e(&local_128,local_d8,local_f8);
  uVar16 = local_b8;
  FUN_146c83fd2(lVar20 + 0x130,local_b8,&local_128);
  if (local_128 != (uint *)0x0) {
    FUN_1400020a8();
  }
  plVar17 = (longlong *)FUN_140147222(lVar20 + 0x250,local_bc);
  iVar19 = (int)plVar17[1];
  *(uint *)(plVar17 + 1) = iVar19 + 1U;
  if (*(uint *)((longlong)plVar17 + 0xc) < iVar19 + 1U) {
    FUN_1446f48e2(plVar17,iVar19);
  }
  uVar3 = local_bc;
  *(uint *)(*plVar17 + (longlong)iVar19 * 4) = uVar16;
  plVar17 = (longlong *)(lVar20 + 0x2a0);
  if (*(int *)(lVar20 + 0x2a8) != *(int *)(lVar20 + 0x2d4)) {
    lVar18 = lVar20 + 0x2d8;
    if (*(longlong *)(lVar20 + 0x2e0) != 0) {
      lVar18 = *(longlong *)(lVar20 + 0x2e0);
    }
    iVar19 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar20 + 0x2e8) - 1U & uVar16) * 4);
    if (iVar19 != -1) {
      do {
        lVar20 = *plVar17 + (longlong)iVar19 * 0x10;
        if (*(uint *)(*plVar17 + (longlong)iVar19 * 0x10) == uVar16) {
          if (lVar20 != 0) goto LAB_143b89c9f;
          break;
        }
        iVar19 = *(int *)(lVar20 + 8);
      } while (iVar19 != -1);
    }
  }
  local_128 = &local_b8;
  local_138 = 0;
  FUN_1407932ac(plVar17,&local_b4,uVar16);
  lVar20 = *plVar17 + (longlong)local_b4 * 0x10;
LAB_143b89c9f:
  *(undefined4 *)(lVar20 + 4) = uVar3;
  if ((local_b0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b89d3a FUN_143b89d3a body=29 status=ok
// SIG undefined FUN_143b89d3a(void)

undefined8 FUN_143b89d3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b89d58 FUN_143b89d58 body=1000 status=ok
// SIG undefined FUN_143b89d58(void)

void FUN_143b89d58(longlong *param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  int *in_stack_00000028;
  double *in_stack_00000030;
  double *in_stack_00000038;
  double *in_stack_00000040;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_b0;
  double dVar4;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar5 = *in_stack_00000028;
  lVar6 = *param_1;
  dVar8 = *in_stack_00000038 * in_stack_00000030[8];
  dVar10 = in_stack_00000038[1] * in_stack_00000030[9];
  dVar21 = in_stack_00000038[2] * in_stack_00000030[10];
  dVar3 = in_stack_00000030[3];
  dVar4 = in_stack_00000030[3];
  dVar15 = *in_stack_00000030;
  dVar16 = in_stack_00000030[1];
  dVar17 = in_stack_00000030[2];
  dVar12 = dVar10 * dVar15 - dVar8 * dVar16;
  dVar13 = dVar21 * dVar16 - dVar10 * dVar17;
  dVar14 = dVar8 * dVar17 - dVar21 * dVar15;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  dVar9 = (dVar12 * dVar16 - dVar14 * dVar17) + dVar3 * dVar13 + dVar8 + in_stack_00000030[4];
  dVar11 = (dVar17 * dVar13 - dVar15 * dVar12) + dVar4 * dVar14 + dVar10 + in_stack_00000030[5];
  local_b8 = dVar12 * dVar3 + dVar21 + (dVar14 * dVar15 - dVar13 * dVar16) + in_stack_00000030[6];
  local_c8._8_4_ = SUB84(dVar11,0);
  local_c8._0_8_ = dVar9;
  local_c8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar13 = *in_stack_00000040 * in_stack_00000030[8];
  dVar14 = in_stack_00000040[1] * in_stack_00000030[9];
  dVar10 = in_stack_00000040[2] * in_stack_00000030[10];
  dVar21 = dVar14 * dVar15 - dVar16 * dVar13;
  dVar12 = dVar10 * dVar16 - dVar17 * dVar14;
  dVar8 = dVar13 * dVar17 - dVar15 * dVar10;
  dVar12 = dVar12 + dVar12;
  dVar8 = dVar8 + dVar8;
  dVar21 = dVar21 + dVar21;
  dVar4 = (dVar17 * dVar12 - dVar15 * dVar21) + dVar4 * dVar8 + dVar14 + in_stack_00000030[5];
  local_d8 = dVar21 * dVar3 + dVar10 + (dVar8 * dVar15 - dVar12 * dVar16) + in_stack_00000030[6];
  local_e8._8_4_ = SUB84(dVar4,0);
  local_e8._0_8_ =
       (dVar21 * dVar16 - dVar8 * dVar17) + dVar3 * dVar12 + dVar13 + in_stack_00000030[4];
  local_e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  lVar7 = *(longlong *)(lVar6 + 0x248);
  lVar19 = *(longlong *)(lVar7 + 0x698);
  lVar20 = (longlong)iVar5 * 0x40;
  *(double *)(lVar19 + 0x10 + lVar20) = local_b8;
  pdVar1 = (double *)(lVar19 + lVar20);
  *pdVar1 = dVar9;
  pdVar1[1] = dVar11;
  if ((~*(byte *)(lVar7 + 0x9c) & 3) == 0) {
    bVar18 = *(byte *)(lVar7 + 0x9d);
    if ((bVar18 & 1) == 0) {
LAB_143b8a000:
      *(byte *)(lVar7 + 0x9d) = bVar18 | 1;
      FUN_1401057d4(lVar7);
      FUN_14010586c(&DAT_14cad0140,lVar7);
    }
    else if (*(longlong *)(lVar7 + 0xb0) == 0) {
      lVar19 = FUN_1448abda6(lVar7);
      if (lVar19 == 0) {
        bVar18 = *(byte *)(lVar7 + 0x9d);
        goto LAB_143b8a000;
      }
    }
  }
  *(undefined1 *)(lVar7 + 0x690) = 1;
  lVar7 = *(longlong *)(lVar6 + 0x248);
  lVar19 = *(longlong *)(lVar7 + 0x698);
  *(double *)(lVar19 + 0x28 + lVar20) = local_d8;
  puVar2 = (undefined4 *)(lVar19 + 0x18 + lVar20);
  *puVar2 = local_e8._0_4_;
  puVar2[1] = local_e8._4_4_;
  puVar2[2] = local_e8._8_4_;
  puVar2[3] = local_e8._12_4_;
  if ((~*(byte *)(lVar7 + 0x9c) & 3) != 0) goto LAB_143b8a09b;
  bVar18 = *(byte *)(lVar7 + 0x9d);
  if ((bVar18 & 1) != 0) {
    if (*(longlong *)(lVar7 + 0xb0) != 0) goto LAB_143b8a09b;
    lVar19 = FUN_1448abda6(lVar7);
    if (lVar19 != 0) goto LAB_143b8a09b;
    bVar18 = *(byte *)(lVar7 + 0x9d);
  }
  *(byte *)(lVar7 + 0x9d) = bVar18 | 1;
  FUN_1401057d4(lVar7);
  FUN_14010586c(&DAT_14cad0140,lVar7);
LAB_143b8a09b:
  *(undefined1 *)(lVar7 + 0x690) = 1;
  FUN_1484f435e(local_f8,local_c8,local_e8);
  FUN_146c845f8(lVar6 + 0x130,iVar5,local_f8);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8a16c FUN_143b8a16c body=29 status=ok
// SIG undefined FUN_143b8a16c(void)

undefined8 FUN_143b8a16c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b8a18a FUN_143b8a18a body=1080 status=ok
// SIG undefined FUN_143b8a18a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8a18a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_1e8 [32];
  code **local_1c8;
  undefined8 *local_1c0;
  code **local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  code *local_190;
  longlong *local_188;
  code *local_180;
  undefined4 local_178;
  code *local_170;
  longlong *local_168;
  code *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined8 *local_100;
  longlong local_f8;
  longlong local_f0;
  code *local_e8;
  longlong *local_e0;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar4 = *param_1;
  lVar5 = *(longlong *)param_1[4];
  lVar6 = (longlong)(int)param_1[8] * 0x50;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  pdVar1 = (double *)(lVar5 + 0x30 + lVar6);
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0x3ff0000000000000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  lVar7 = *(longlong *)(lVar4 + 0x80);
  auVar3 = *(undefined1 (*) [16])(lVar7 + 0x18);
  uVar10 = auVar3._0_4_;
  uVar11 = auVar3._4_4_;
  dVar2 = *(double *)(lVar7 + 0x28);
  uVar12 = SUB84(dVar2,0);
  uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
  local_b8 = *pdVar1 * auVar3._0_8_;
  dStack_b0 = pdVar1[1] * auVar3._8_8_;
  local_a8 = *(double *)(lVar5 + 0x40 + lVar6) * dVar2;
  uStack_a0 = 0;
  if ((char)param_1[1] == '\x01') {
    puVar8 = local_d8;
    puVar9 = (undefined8 *)(param_1[3] + 0x20);
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    lVar7 = *(longlong *)(lVar4 + 0x80);
    uVar10 = (undefined4)*(undefined8 *)(lVar7 + 0x18);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x18) >> 0x20);
    uVar12 = (undefined4)*(undefined8 *)(lVar7 + 0x28);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x28) >> 0x20);
  }
  dVar2 = ABS((double)CONCAT44(uVar11,uVar10));
  if (ABS(*(double *)(lVar7 + 0x20)) <= ABS((double)CONCAT44(uVar11,uVar10))) {
    dVar2 = ABS(*(double *)(lVar7 + 0x20));
  }
  if (ABS((double)CONCAT44(uVar13,uVar12)) <= dVar2) {
    dVar2 = ABS((double)CONCAT44(uVar13,uVar12));
  }
  fVar14 = (float)((double)*(float *)(lVar5 + lVar6 + 0x48) * dVar2);
  local_128 = param_1[2];
  local_120 = param_1[3];
  lVar5 = (longlong)param_1 + 0x34;
  local_108 = param_1[7];
  local_100 = local_d8;
  local_f0 = param_1[5];
  local_1b8 = &local_e8;
  local_e8 = FUN_143b8a5c4;
  local_150 = 0;
  uStack_148 = 0x3f80000000000000;
  local_140 = DAT_14c846330;
  local_138 = DAT_14c846338;
  local_134 = DAT_14c846350;
  local_12c = DAT_14c846358;
  local_168 = (longlong *)CONCAT44(local_168._4_4_,DAT_14c846378);
  local_170 = DAT_14c846370;
  local_188._0_4_ = DAT_14c846384;
  local_190 = _DAT_14c84637c;
  local_158 = DAT_14c846338;
  local_160 = DAT_14c846330;
  local_1c8 = &local_170;
  local_1c0 = &local_150;
  local_1a8 = lVar5;
  local_118 = param_3;
  local_110 = lVar5;
  local_f8 = lVar4;
  local_e0 = &local_128;
  FUN_148515757((int)param_1[6],fVar14,&local_160,&local_190);
  local_128 = param_1[2];
  local_120 = param_1[3];
  local_108 = param_1[7];
  local_100 = local_d8;
  local_f0 = param_1[5];
  local_170 = FUN_143b8af98;
  local_150 = 0;
  uStack_148 = 0x3f80000000000000;
  local_140 = DAT_14c846330;
  local_138 = DAT_14c846338;
  local_134 = DAT_14c846350;
  local_12c = DAT_14c846358;
  local_188 = (longlong *)CONCAT44(local_188._4_4_,DAT_14c84636c);
  local_190 = DAT_14c846364;
  local_158 = DAT_14c846384;
  local_160 = _DAT_14c84637c;
  local_178 = DAT_14c846338;
  local_180 = DAT_14c846330;
  local_1c8 = &local_190;
  local_1c0 = &local_150;
  local_1b8 = &local_170;
  local_168 = &local_128;
  local_118 = param_3;
  local_110 = lVar5;
  local_f8 = lVar4;
  FUN_148515757((int)param_1[6],fVar14,&local_180,&local_160);
  local_128 = param_1[2];
  local_120 = param_1[3];
  local_110 = local_1a8;
  local_108 = param_1[7];
  local_100 = local_d8;
  local_f0 = param_1[5];
  local_190 = FUN_143b8b96c;
  local_150 = 0;
  uStack_148 = 0x3f80000000000000;
  local_140 = DAT_14c846330;
  local_138 = DAT_14c846338;
  local_134 = DAT_14c846350;
  local_12c = DAT_14c846358;
  local_158 = DAT_14c84636c;
  local_160 = DAT_14c846364;
  local_178 = DAT_14c846378;
  local_180 = DAT_14c846370;
  local_198 = DAT_14c846338;
  local_1a0 = DAT_14c846330;
  local_1c8 = &local_160;
  local_1c0 = &local_150;
  local_1b8 = &local_190;
  local_188 = &local_128;
  local_118 = param_3;
  local_f8 = lVar4;
  FUN_148515757((int)param_1[6],fVar14,&local_1a0,&local_180);
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8a5c4 FUN_143b8a5c4 body=2514 status=ok
// SIG undefined FUN_143b8a5c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8a5c4(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8af98 FUN_143b8af98 body=2514 status=ok
// SIG undefined FUN_143b8af98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8af98(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8b96c FUN_143b8b96c body=2514 status=ok
// SIG undefined FUN_143b8b96c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8b96c(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8c340 FUN_143b8c340 body=1063 status=ok
// SIG undefined FUN_143b8c340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8c340(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  double *pdVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined4 *local_200;
  code **local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  longlong local_168;
  double *local_160;
  longlong local_158;
  longlong local_150;
  code *local_148;
  longlong *local_140;
  float local_134;
  float local_130;
  float local_12c;
  double local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar4 = *param_1;
  lVar12 = *(longlong *)(param_1[4] + 0x10);
  lVar14 = (longlong)(int)param_1[8] * 0x70;
  lVar1 = lVar12 + lVar14;
  auVar3 = *(undefined1 (*) [16])(lVar12 + 0x48 + lVar14);
  dVar2 = *(double *)(lVar12 + 0x58 + lVar14);
  auVar18 = divpd(auVar3,_DAT_1499387d0);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar2;
  auVar19 = divpd(auVar19,_DAT_1499387d0);
  auVar18 = roundpd(auVar18,auVar18,3);
  auVar19 = roundpd(auVar19,auVar19,3);
  dVar9 = (auVar3._0_8_ - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar10 = (auVar3._8_8_ - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar7 = (dVar2 - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar8 = (0.0 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = sin(dVar9);
  dVar5 = sin(dVar10);
  dVar6 = sin(dVar7);
  sin(dVar8);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar10);
  dVar7 = cos(dVar7);
  cos(dVar8);
  dVar8 = dVar5 * dVar2 * dVar6 + dVar10 * dVar9 * dVar7;
  local_128[0] = dVar2 * dVar5 * dVar7 - dVar9 * dVar10 * dVar6;
  local_128[1] = -(dVar2 * dVar10 * dVar7) - dVar9 * dVar5 * dVar6;
  local_118._8_4_ = SUB84(dVar8,0);
  local_118._0_8_ = -(dVar10 * dVar2 * dVar6) + dVar5 * dVar9 * dVar7;
  local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  pdVar13 = (double *)(lVar12 + 0x30 + lVar14);
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0x3ff0000000000000;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  lVar11 = *(longlong *)(lVar4 + 0x80);
  auVar3 = *(undefined1 (*) [16])(lVar11 + 0x18);
  uVar16 = auVar3._0_4_;
  uVar17 = auVar3._4_4_;
  dVar2 = *(double *)(lVar11 + 0x28);
  dVar5 = pdVar13[1] * auVar3._8_8_;
  local_108._8_4_ = SUB84(dVar5,0);
  local_108._0_8_ = *pdVar13 * auVar3._0_8_;
  local_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_f8 = *(double *)(lVar12 + 0x40 + lVar14) * dVar2;
  uStack_f0 = 0;
  if ((char)param_1[1] == '\x01') {
    pdVar13 = local_128;
    pdVar15 = (double *)(param_1[3] + 0x20);
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *pdVar15 = *pdVar13;
      pdVar13 = pdVar13 + 1;
      pdVar15 = pdVar15 + 1;
    }
    lVar11 = *(longlong *)(lVar4 + 0x80);
    uVar16 = (undefined4)*(undefined8 *)(lVar11 + 0x18);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
    dVar2 = *(double *)(lVar11 + 0x28);
  }
  local_12c = (float)((double)*(float *)(lVar1 + 0x68) * dVar2 * 0.5);
  local_130 = (float)((double)*(float *)(lVar1 + 100) * *(double *)(lVar11 + 0x20) * 0.5);
  local_134 = (float)((double)*(float *)(lVar1 + 0x60) * (double)CONCAT44(uVar17,uVar16) * 0.5);
  local_188 = param_1[2];
  local_140 = &local_188;
  local_180 = param_1[3];
  local_170 = (longlong)param_1 + 0x34;
  local_168 = param_1[7];
  local_160 = local_128;
  local_150 = param_1[5];
  local_1f8 = &local_148;
  local_148 = FUN_143b8c768;
  local_200 = &local_1b0;
  local_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0x3f800000;
  local_1a0 = DAT_14c846330;
  local_198 = DAT_14c846338;
  local_194 = DAT_14c846350;
  local_18c = DAT_14c846358;
  local_208 = &local_1c0;
  local_1b8 = DAT_14c84636c;
  local_1c0 = DAT_14c846364;
  local_1c8 = DAT_14c846378;
  local_1d0 = DAT_14c846370;
  local_1d8 = DAT_14c846384;
  local_1e0 = _DAT_14c84637c;
  local_1e8 = DAT_14c846338;
  local_1f0 = DAT_14c846330;
  local_178 = param_3;
  local_158 = lVar4;
  FUN_1485159e9();
  if ((local_c0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8c768 FUN_143b8c768 body=2514 status=ok
// SIG undefined FUN_143b8c768(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8c768(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8d13c FUN_143b8d13c body=7304 status=ok
// SIG undefined FUN_143b8d13c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8d13c(double *param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  double *pdVar18;
  longlong lVar19;
  double *pdVar20;
  ulonglong uVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong uVar26;
  double dVar27;
  ulonglong extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auStack_4c8 [32];
  double *local_4a8;
  double *local_4a0;
  code **local_498;
  double *local_490;
  code **local_488;
  code **local_480;
  double local_478;
  uint local_46c;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [24];
  double local_430;
  ulonglong local_428;
  ulonglong local_418;
  ulonglong uStack_410;
  double local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  code *local_370;
  double *local_368;
  code *local_360;
  double *local_358;
  code *local_350;
  double *local_348;
  code *local_340;
  double *local_338;
  code *local_330;
  double *local_328;
  code *local_320;
  double *local_318;
  undefined8 local_310;
  float local_308;
  undefined8 local_304;
  float local_2fc;
  double local_2f8 [4];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  longlong local_160;
  double local_158;
  double *local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  dVar1 = *param_1;
  lVar2 = *(longlong *)((longlong)param_1[4] + 0x20);
  lVar19 = (longlong)*(int *)(param_1 + 8) * 0x68;
  auVar34 = *(undefined1 (*) [16])(lVar2 + 0x48 + lVar19);
  dVar23 = *(double *)(lVar2 + 0x58 + lVar19);
  auVar32 = divpd(auVar34,_DAT_1499387d0);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = dVar23;
  auVar33 = divpd(auVar33,_DAT_1499387d0);
  auVar32 = roundpd(auVar32,auVar32,3);
  auVar33 = roundpd(auVar33,auVar33,3);
  dVar48 = (auVar34._0_8_ - auVar32._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar49 = (auVar34._8_8_ - auVar32._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar45 = (dVar23 - auVar33._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar47 = (0.0 - auVar33._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  local_478 = param_3;
  dVar23 = sin(dVar48);
  dVar24 = sin(dVar49);
  dVar25 = sin(dVar45);
  sin(dVar47);
  dVar48 = cos(dVar48);
  dVar49 = cos(dVar49);
  dVar45 = cos(dVar45);
  cos(dVar47);
  local_2f8[0] = dVar23 * dVar24 * dVar45 - dVar48 * dVar49 * dVar25;
  local_2f8[1] = -(dVar23 * dVar49 * dVar45) - dVar48 * dVar24 * dVar25;
  local_2f8[2] = -(dVar49 * dVar23 * dVar25) + dVar24 * dVar48 * dVar45;
  local_2f8[3] = dVar24 * dVar23 * dVar25 + dVar49 * dVar48 * dVar45;
  pdVar18 = (double *)(lVar2 + 0x30 + lVar19);
  local_2b8 = 1.0;
  dStack_2b0 = 1.0;
  local_2a8 = 1.0;
  dStack_2a0 = 0.0;
  lVar16 = *(longlong *)((longlong)dVar1 + 0x80);
  local_2d8 = *(double *)(lVar16 + 0x18) * *pdVar18;
  dStack_2d0 = *(double *)(lVar16 + 0x20) * pdVar18[1];
  local_2c8 = *(double *)(lVar2 + 0x40 + lVar19) * *(double *)(lVar16 + 0x28);
  dStack_2c0 = 0.0;
  if (*(char *)(param_1 + 1) == '\x01') {
    pdVar18 = local_2f8;
    pdVar20 = (double *)((longlong)param_1[3] + 0x20);
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar20 = *pdVar18;
      pdVar18 = pdVar18 + 1;
      pdVar20 = pdVar20 + 1;
    }
    lVar16 = *(longlong *)((longlong)dVar1 + 0x80);
  }
  fVar22 = (float)FUN_147c4b1b2(lVar2 + lVar19,lVar16 + 0x18);
  uVar26 = FUN_147c4b146(lVar2 + lVar19,lVar16 + 0x18);
  dVar23 = local_478;
  local_304 = 0;
  local_308 = -(fVar22 * 0.5);
  local_310 = 0.0;
  local_178 = param_1[2];
  local_170 = param_1[3];
  local_168 = local_478;
  lVar2 = (longlong)param_1 + 0x34;
  local_158 = param_1[7];
  local_150 = local_2f8;
  local_140 = param_1[5];
  local_498 = &local_320;
  local_320 = FUN_143b8edc6;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0078125;
  local_1e8 = DAT_14c846330;
  uStack_1e0 = DAT_14c846338;
  uStack_1dc = (undefined4)DAT_14c846350;
  uStack_1d8._0_4_ = (undefined4)((ulonglong)DAT_14c846350 >> 0x20);
  uStack_1d8._4_4_ = DAT_14c846358;
  dStack_270._0_4_ = DAT_14c846378;
  local_278 = DAT_14c846370;
  dStack_400._0_4_ = DAT_14c846384;
  local_408 = _DAT_14c84637c;
  local_4a8 = &local_278;
  local_4a0 = &local_1f8;
  local_318 = &local_178;
  local_2fc = fVar22 * 0.5;
  local_160 = lVar2;
  local_148 = dVar1;
  FUN_148515757(*(undefined4 *)(param_1 + 6),uVar26,&local_304,&local_408);
  local_178 = param_1[2];
  local_170 = param_1[3];
  local_168 = dVar23;
  local_158 = param_1[7];
  local_150 = local_2f8;
  local_140 = param_1[5];
  local_498 = &local_330;
  local_330 = FUN_143b8f79a;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0078125;
  local_1e8 = DAT_14c846330;
  uStack_1e0 = DAT_14c846338;
  uStack_1dc = (undefined4)DAT_14c846350;
  uStack_1d8._0_4_ = (undefined4)((ulonglong)DAT_14c846350 >> 0x20);
  uStack_1d8._4_4_ = DAT_14c846358;
  dStack_270._0_4_ = DAT_14c846378;
  local_278 = DAT_14c846370;
  dStack_400._0_4_ = DAT_14c846384;
  local_408 = _DAT_14c84637c;
  local_4a8 = &local_278;
  local_4a0 = &local_1f8;
  local_328 = &local_178;
  local_160 = lVar2;
  local_148 = dVar1;
  FUN_148515757(*(undefined4 *)(param_1 + 6),uVar26,&local_310,&local_408);
  local_178 = param_1[2];
  local_170 = param_1[3];
  local_168 = dVar23;
  local_158 = param_1[7];
  local_150 = local_2f8;
  local_140 = param_1[5];
  local_488 = &local_340;
  local_340 = FUN_143b9016e;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0078125;
  local_1e8 = DAT_14c846330;
  uStack_1e0 = DAT_14c846338;
  uStack_1dc = (undefined4)DAT_14c846350;
  uStack_1d8._0_4_ = (undefined4)((ulonglong)DAT_14c846350 >> 0x20);
  uStack_1d8._4_4_ = DAT_14c846358;
  dStack_270._0_4_ = DAT_14c84636c;
  local_278 = DAT_14c846364;
  dStack_400._0_4_ = DAT_14c846378;
  local_408 = DAT_14c846370;
  local_4a8 = (double *)&local_304;
  local_4a0 = &local_408;
  local_498 = (code **)&local_278;
  local_490 = &local_1f8;
  local_338 = &local_178;
  local_160 = lVar2;
  local_148 = dVar1;
  FUN_148515e94(*(undefined4 *)(param_1 + 6),uVar26,0);
  local_178 = param_1[2];
  local_170 = param_1[3];
  local_168 = dVar23;
  local_158 = param_1[7];
  local_150 = local_2f8;
  local_140 = param_1[5];
  local_488 = &local_350;
  local_350 = FUN_143b90b42;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0078125;
  local_1e8 = DAT_14c846330;
  uStack_1e0 = DAT_14c846338;
  uStack_1dc = (undefined4)DAT_14c846350;
  uStack_1d8._0_4_ = (undefined4)((ulonglong)DAT_14c846350 >> 0x20);
  uStack_1d8._4_4_ = DAT_14c846358;
  dStack_270._0_4_ = DAT_14c84636c;
  local_278 = DAT_14c846364;
  dStack_400._0_4_ = DAT_14c846384;
  local_408 = _DAT_14c84637c;
  local_4a8 = (double *)&local_304;
  local_4a0 = &local_408;
  local_498 = (code **)&local_278;
  local_490 = &local_1f8;
  local_348 = &local_178;
  local_160 = lVar2;
  local_148 = dVar1;
  FUN_148515e94(*(undefined4 *)(param_1 + 6),uVar26,0);
  local_178 = param_1[2];
  local_170 = param_1[3];
  local_168 = dVar23;
  local_158 = param_1[7];
  local_150 = local_2f8;
  local_140 = param_1[5];
  local_488 = &local_360;
  local_360 = FUN_143b91516;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0078125;
  local_1e8 = DAT_14c846330;
  uStack_1e0 = DAT_14c846338;
  uStack_1dc = (undefined4)DAT_14c846350;
  uStack_1d8._0_4_ = (undefined4)((ulonglong)DAT_14c846350 >> 0x20);
  uStack_1d8._4_4_ = DAT_14c846358;
  dStack_270._0_4_ = DAT_14c84636c;
  local_278 = DAT_14c846364;
  dStack_400._0_4_ = DAT_14c846378;
  local_408 = DAT_14c846370;
  local_4a8 = (double *)&local_310;
  local_4a0 = &local_408;
  local_498 = (code **)&local_278;
  local_490 = &local_1f8;
  local_358 = &local_178;
  local_160 = lVar2;
  local_148 = dVar1;
  FUN_148515e94(*(undefined4 *)(param_1 + 6),uVar26,0,0xc0490fdb);
  local_178 = param_1[2];
  local_170 = param_1[3];
  local_168 = dVar23;
  local_158 = param_1[7];
  local_150 = local_2f8;
  local_140 = param_1[5];
  local_488 = &local_370;
  local_370 = FUN_143b91eea;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0078125;
  local_1e8 = DAT_14c846330;
  uStack_1e0 = DAT_14c846338;
  uStack_1dc = (undefined4)DAT_14c846350;
  uStack_1d8._0_4_ = (undefined4)((ulonglong)DAT_14c846350 >> 0x20);
  uStack_1d8._4_4_ = DAT_14c846358;
  dStack_270 = (double)CONCAT44(dStack_270._4_4_,DAT_14c84636c);
  local_278 = DAT_14c846364;
  dStack_400 = (double)CONCAT44(dStack_400._4_4_,DAT_14c846384);
  local_408 = _DAT_14c84637c;
  uVar21 = (ulonglong)*(uint *)(param_1 + 6);
  local_4a8 = (double *)&local_310;
  local_4a0 = &local_408;
  local_498 = (code **)&local_278;
  local_490 = &local_1f8;
  local_368 = &local_178;
  local_160 = lVar2;
  local_148 = dVar1;
  uVar14 = FUN_148515e94(uVar21,uVar26,0,0xc0490fdb);
  local_418 = uVar26 ^ 0x8000000080000000;
  uStack_410 = extraout_XMM0_Qb ^ 0x8000000080000000;
  uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  local_428 = uVar26;
  do {
    local_46c = (uint)uVar14;
    fVar22 = (float)local_418;
    if ((char)uVar14 == '\0') {
      fVar22 = (float)local_428;
    }
    local_480 = (code **)(double)fVar22;
    local_390 = (double)local_2fc + 0.0;
    local_398 = (double)local_304._4_4_ + 0.0;
    local_3a0 = (double)(float)local_304 + (double)local_480;
    local_378 = (double)local_308 + 0.0;
    local_380 = (double)local_310._4_4_ + 0.0;
    local_388 = (double)(float)local_310 + (double)local_480;
    puVar3 = (undefined8 *)param_1[2];
    local_448._0_8_ = param_1[5];
    local_3d8 = 0.0;
    dStack_3d0 = 0.0;
    local_3e8 = 0.0;
    dStack_3e0 = 0.0;
    auVar34 = *(undefined1 (*) [16])((longlong)dVar1 + 0xe0);
    dVar23 = auVar34._0_8_;
    dVar25 = auVar34._8_8_;
    auVar32 = *(undefined1 (*) [16])((longlong)dVar1 + 0xf0);
    dVar24 = auVar32._0_8_;
    dVar48 = auVar32._8_8_;
    auVar9._8_8_ = dStack_2b0;
    auVar9._0_8_ = local_2b8;
    auVar11._8_8_ = dStack_2a0;
    auVar11._0_8_ = local_2a8;
    auVar34 = minpd(auVar9,auVar34);
    auVar33 = minpd(auVar11,auVar32);
    auVar32._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    iVar13 = movmskpd((int)&local_408,auVar32);
    auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
    auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
    uVar15 = movmskpd((int)uVar21,auVar34);
    if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar5 = *(double *)((longlong)dVar1 + 0xa0);
      dVar6 = *(double *)((longlong)dVar1 + 0xa8);
      dVar7 = *(double *)((longlong)dVar1 + 0xb0);
      dVar8 = *(double *)((longlong)dVar1 + 0xb8);
      dVar49 = *(double *)((longlong)dVar1 + 0xb8);
      dVar45 = *(double *)((longlong)dVar1 + 0xb8);
      dVar47 = *(double *)((longlong)dVar1 + 0xa0);
      dVar27 = *(double *)((longlong)dVar1 + 0xa0);
      dVar46 = *(double *)((longlong)dVar1 + 0xa8);
      dVar38 = *(double *)((longlong)dVar1 + 0xa8);
      dVar42 = *(double *)((longlong)dVar1 + 0xb0);
      dVar43 = *(double *)((longlong)dVar1 + 0xb0);
      local_408 = local_2f8[1] * dVar42 * -1.0 +
                  local_2f8[2] * dVar46 + local_2f8[3] * dVar47 * 1.0 + local_2f8[0] * dVar49;
      dStack_400 = local_2f8[0] * dVar43 * 1.0 +
                   local_2f8[3] * dVar38 + local_2f8[2] * dVar27 * -1.0 + local_2f8[1] * dVar45;
      dVar55 = local_2d8 * dVar23;
      dVar56 = dStack_2d0 * dVar25;
      dVar53 = local_2c8 * dVar24;
      dVar54 = dStack_2c0 * dVar48;
      dVar44 = dVar56 * dVar5 - dVar6 * dVar55;
      dVar51 = dVar53 * dVar6 - dVar7 * dVar56;
      dVar52 = dVar55 * dVar7 - dVar5 * dVar53;
      dVar50 = dVar54 * dVar8 - dVar8 * dVar54;
      dVar51 = dVar51 + dVar51;
      dVar52 = dVar52 + dVar52;
      dVar44 = dVar44 + dVar44;
      dVar50 = dVar50 + dVar50;
      local_3e8 = (dVar44 * dVar6 - dVar7 * dVar52) + dVar49 * dVar51 + dVar55 +
                  *(double *)((longlong)dVar1 + 0xc0);
      dStack_3e0 = (dVar51 * dVar7 - dVar44 * dVar5) + dVar45 * dVar52 + dVar56 +
                   *(double *)((longlong)dVar1 + 200);
      local_3d8 = (dVar52 * dVar5 - dVar6 * dVar51) + dVar49 * dVar44 + dVar53 +
                  *(double *)((longlong)dVar1 + 0xd0);
      dStack_3d0 = (dVar50 * dVar8 - dVar50 * dVar8) + dVar45 * dVar50 + dVar54 +
                   *(double *)((longlong)dVar1 + 0xd8);
      local_3f8._8_8_ =
           local_2f8[2] * dVar43 * -1.0 +
           ((dVar27 * local_2f8[0] * -1.0 + local_2f8[3] * dVar45) - local_2f8[1] * dVar38);
      local_3f8._0_8_ =
           local_2f8[3] * dVar42 * 1.0 +
           ((dVar47 * local_2f8[1] * 1.0 + local_2f8[2] * dVar49) - local_2f8[0] * dVar46);
      dVar23 = local_2b8 * dVar23;
      dVar25 = dStack_2b0 * dVar25;
      dVar24 = local_2a8 * dVar24;
      dVar48 = dStack_2a0 * dVar48;
    }
    else {
      dVar47 = *(double *)((longlong)dVar1 + 0xa0);
      dVar27 = *(double *)((longlong)dVar1 + 0xa8);
      dVar46 = *(double *)((longlong)dVar1 + 0xb0);
      dVar38 = dVar27 + dVar27;
      dVar42 = dVar46 + dVar46;
      dVar50 = dVar47 * (dVar47 + dVar47);
      local_1a8 = (1.0 - (dVar50 + dVar27 * dVar38)) * dVar24;
      dVar45 = *(double *)((longlong)dVar1 + 0xa0) * dVar42;
      dVar49 = *(double *)((longlong)dVar1 + 0xb8);
      dVar43 = dVar42 * dVar49;
      dVar44 = (dVar47 + dVar47) * *(double *)((longlong)dVar1 + 0xb8);
      dVar49 = dVar38 * dVar49;
      local_1b8 = (dVar49 + dVar45) * dVar24;
      local_458._8_4_ = SUB84(dVar48 * dStack_2a0,0);
      local_458._0_8_ = dVar24 * local_2a8;
      local_458._12_4_ = (int)((ulonglong)(dVar48 * dStack_2a0) >> 0x20);
      local_1f8 = (1.0 - (dVar46 * dVar42 + dVar27 * dVar38)) * dVar23;
      dStack_1d0 = (1.0 - (dVar46 * dVar42 + dVar50)) * dVar25;
      dStack_1f0 = (dVar38 * dVar47 + dVar43) * dVar23;
      local_1c8 = (dVar42 * dVar27 + dVar44) * dVar25;
      uStack_1d8 = (dVar38 * dVar47 - dVar43) * dVar25;
      dStack_1b0 = (dVar42 * dVar27 - dVar44) * dVar24;
      local_1e8 = (dVar45 - dVar49) * dVar23;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = *(undefined8 *)((longlong)dVar1 + 0xc0);
      uStack_190 = *(undefined8 *)((longlong)dVar1 + 200);
      local_188 = *(undefined8 *)((longlong)dVar1 + 0xd0);
      uStack_180 = 0x3ff0000000000000;
      dVar48 = local_2f8[1] + local_2f8[1];
      dVar49 = local_2f8[2] + local_2f8[2];
      dVar24 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
      local_228 = (1.0 - (dVar24 + local_2f8[1] * dVar48)) * local_2a8;
      dVar45 = (local_2f8[0] + local_2f8[0]) * local_2f8[3];
      local_238 = (dVar48 * local_2f8[3] + local_2f8[0] * dVar49) * local_2a8;
      local_258 = (dVar48 * local_2f8[0] - dVar49 * local_2f8[3]) * dStack_2b0;
      dStack_230 = (dVar49 * local_2f8[1] - dVar45) * local_2a8;
      local_468 = dVar23 * local_2b8;
      dStack_460 = dVar25 * dStack_2b0;
      local_278 = (1.0 - (local_2f8[2] * dVar49 + local_2f8[1] * dVar48)) * local_2b8;
      dStack_250 = (1.0 - (local_2f8[2] * dVar49 + dVar24)) * dStack_2b0;
      dStack_270 = (dVar48 * local_2f8[0] + dVar49 * local_2f8[3]) * local_2b8;
      local_248 = (dVar49 * local_2f8[1] + dVar45) * dStack_2b0;
      local_268 = (local_2f8[0] * dVar49 - dVar48 * local_2f8[3]) * local_2b8;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_2d8;
      dStack_210 = dStack_2d0;
      local_208 = local_2c8;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
      dVar25 = dStack_460;
      dVar23 = local_468;
      auVar34 = _DAT_149934d80;
      local_430 = local_168;
      dVar48 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
      dVar24 = local_148 * local_148 + local_158 * local_158 + (double)local_150 * (double)local_150
      ;
      dVar49 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar21 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
      dVar45 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar48)) & uVar21);
      uVar21 = -(ulonglong)(0.0 <= dVar24 + -9.99999993922529e-09);
      dVar47 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar24)) & uVar21);
      dVar24 = (double)local_458._0_8_;
      dVar48 = (double)local_458._8_8_;
      uVar21 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
      dVar49 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar21);
      auVar28._8_8_ = -(ulonglong)(0.0 <= dStack_460);
      auVar28._0_8_ = -(ulonglong)(0.0 <= local_468);
      auVar32 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar28);
      dVar27 = (double)(~-(ulonglong)(0.0 <= (double)local_458._0_8_) & 0xbff0000000000000 |
                       (ulonglong)
                       ((uint)(-(ulonglong)(0.0 <= (double)local_458._0_8_) >> 0x20) & 0x3ff00000)
                       << 0x20);
      dVar46 = auVar32._0_8_;
      local_178 = local_178 * dVar45 * dVar46;
      local_170 = local_170 * dVar45 * dVar46;
      local_168 = dVar45 * local_168 * dVar46;
      dVar45 = auVar32._8_8_;
      local_148 = dVar47 * local_148 * dVar45;
      local_150 = (double *)((double)local_150 * dVar47 * dVar45);
      local_158 = dVar45 * local_158 * dVar47;
      local_128 = dVar49 * local_128 * dVar27;
      local_130 = local_130 * dVar49 * dVar27;
      local_138 = dVar27 * local_138 * dVar49;
      FUN_14481fd10(&local_298,&local_178);
      dVar49 = local_288 * local_288 + local_298 * local_298;
      dVar45 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar35._0_8_ = dVar49 + dVar45;
      auVar35._8_8_ = dVar49 + dVar45;
      auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
      auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
      auVar32 = sqrtpd(auVar35,auVar35);
      auVar34 = divpd(auVar34,auVar32);
      auVar39._0_8_ = auVar34._0_8_ * local_288;
      auVar39._8_8_ = auVar34._8_8_ * dStack_280;
      local_408 = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
      dStack_400 = (double)((ulonglong)(dStack_290 * auVar34._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
      local_3f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar29);
      local_3e8 = local_118;
      dStack_3e0 = dStack_110;
      local_3d8 = local_108;
      dStack_3d0 = 0.0;
    }
    local_3c8._8_4_ = SUB84(dVar25,0);
    local_3c8._0_8_ = dVar23;
    local_3c8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    local_3b8._8_4_ = SUB84(dVar48,0);
    local_3b8._0_8_ = dVar24;
    local_3b8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    iVar13 = *(int *)param_1[7];
    *(int *)param_1[7] = iVar13 + 1;
    dVar23 = param_1[3];
    local_178 = (double)CONCAT44(local_178._4_4_,iVar13);
    local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)((longlong)param_1 + 0x34));
    pcVar4 = (code *)*puVar3;
    plVar17 = puVar3 + 4;
    if ((longlong *)puVar3[2] != (longlong *)0x0) {
      plVar17 = (longlong *)puVar3[2];
    }
    uVar14 = (**(code **)(*plVar17 + 8))(plVar17);
    local_488 = (code **)local_448._0_8_;
    local_498 = (code **)&local_3a0;
    local_4a0 = &local_408;
    local_4a8 = &local_178;
    local_490 = &local_388;
    (*pcVar4)(uVar14,dVar23,local_478,&local_1f8);
    local_390 = (double)local_2fc + 0.0;
    local_398 = (double)local_304._4_4_ + (double)local_480;
    local_3a0 = (double)(float)local_304 + 0.0;
    local_378 = (double)local_308 + 0.0;
    local_380 = (double)local_310._4_4_ + (double)local_480;
    local_388 = (double)(float)local_310 + 0.0;
    puVar3 = (undefined8 *)param_1[2];
    local_480 = (code **)param_1[5];
    local_3d8 = 0.0;
    dStack_3d0 = 0.0;
    local_3e8 = 0.0;
    dStack_3e0 = 0.0;
    auVar34 = *(undefined1 (*) [16])((longlong)dVar1 + 0xe0);
    dVar23 = auVar34._0_8_;
    dVar25 = auVar34._8_8_;
    auVar32 = *(undefined1 (*) [16])((longlong)dVar1 + 0xf0);
    dVar24 = auVar32._0_8_;
    dVar48 = auVar32._8_8_;
    auVar10._8_8_ = dStack_2b0;
    auVar10._0_8_ = local_2b8;
    auVar12._8_8_ = dStack_2a0;
    auVar12._0_8_ = local_2a8;
    auVar34 = minpd(auVar10,auVar34);
    auVar32 = minpd(auVar12,auVar32);
    auVar36._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar36._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    iVar13 = movmskpd((int)local_480,auVar36);
    auVar40._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    uVar15 = movmskpd((int)uVar14,auVar40);
    if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar5 = *(double *)((longlong)dVar1 + 0xa0);
      dVar6 = *(double *)((longlong)dVar1 + 0xa8);
      dVar7 = *(double *)((longlong)dVar1 + 0xb0);
      dVar8 = *(double *)((longlong)dVar1 + 0xb8);
      dVar49 = *(double *)((longlong)dVar1 + 0xb8);
      dVar45 = *(double *)((longlong)dVar1 + 0xb8);
      dVar47 = *(double *)((longlong)dVar1 + 0xa0);
      dVar27 = *(double *)((longlong)dVar1 + 0xa0);
      dVar38 = *(double *)((longlong)dVar1 + 0xa8);
      dVar46 = *(double *)((longlong)dVar1 + 0xa8);
      dVar42 = *(double *)((longlong)dVar1 + 0xb0);
      dVar43 = *(double *)((longlong)dVar1 + 0xb0);
      local_408 = local_2f8[1] * dVar42 * -1.0 +
                  local_2f8[2] * dVar38 + local_2f8[3] * dVar47 * 1.0 + local_2f8[0] * dVar49;
      dStack_400 = local_2f8[0] * dVar43 * 1.0 +
                   local_2f8[3] * dVar46 + local_2f8[2] * dVar27 * -1.0 + local_2f8[1] * dVar45;
      dVar55 = local_2d8 * dVar23;
      dVar56 = dStack_2d0 * dVar25;
      dVar53 = local_2c8 * dVar24;
      dVar54 = dStack_2c0 * dVar48;
      dVar44 = dVar56 * dVar5 - dVar6 * dVar55;
      dVar51 = dVar53 * dVar6 - dVar7 * dVar56;
      dVar52 = dVar55 * dVar7 - dVar5 * dVar53;
      dVar50 = dVar54 * dVar8 - dVar8 * dVar54;
      dVar51 = dVar51 + dVar51;
      dVar52 = dVar52 + dVar52;
      dVar44 = dVar44 + dVar44;
      dVar50 = dVar50 + dVar50;
      local_3e8 = (dVar44 * dVar6 - dVar7 * dVar52) + dVar49 * dVar51 + dVar55 +
                  *(double *)((longlong)dVar1 + 0xc0);
      dStack_3e0 = (dVar51 * dVar7 - dVar44 * dVar5) + dVar45 * dVar52 + dVar56 +
                   *(double *)((longlong)dVar1 + 200);
      local_3d8 = (dVar52 * dVar5 - dVar6 * dVar51) + dVar49 * dVar44 + dVar53 +
                  *(double *)((longlong)dVar1 + 0xd0);
      dStack_3d0 = (dVar50 * dVar8 - dVar50 * dVar8) + dVar45 * dVar50 + dVar54 +
                   *(double *)((longlong)dVar1 + 0xd8);
      local_3f8._8_8_ =
           local_2f8[2] * dVar43 * -1.0 +
           ((dVar27 * local_2f8[0] * -1.0 + local_2f8[3] * dVar45) - local_2f8[1] * dVar46);
      local_3f8._0_8_ =
           local_2f8[3] * dVar42 * 1.0 +
           ((dVar47 * local_2f8[1] * 1.0 + local_2f8[2] * dVar49) - local_2f8[0] * dVar38);
      dVar23 = local_2b8 * dVar23;
      dVar25 = dStack_2b0 * dVar25;
      dVar24 = local_2a8 * dVar24;
      dVar48 = dStack_2a0 * dVar48;
    }
    else {
      dVar47 = *(double *)((longlong)dVar1 + 0xa0);
      dVar27 = *(double *)((longlong)dVar1 + 0xa8);
      dVar46 = *(double *)((longlong)dVar1 + 0xb0);
      dVar38 = dVar27 + dVar27;
      dVar42 = dVar46 + dVar46;
      dVar50 = dVar47 * (dVar47 + dVar47);
      local_1a8 = (1.0 - (dVar50 + dVar27 * dVar38)) * dVar24;
      dVar45 = *(double *)((longlong)dVar1 + 0xa0) * dVar42;
      dVar49 = *(double *)((longlong)dVar1 + 0xb8);
      dVar43 = dVar42 * dVar49;
      dVar44 = (dVar47 + dVar47) * *(double *)((longlong)dVar1 + 0xb8);
      dVar49 = dVar38 * dVar49;
      local_1b8 = (dVar49 + dVar45) * dVar24;
      local_448._8_4_ = SUB84(dVar48 * dStack_2a0,0);
      local_448._0_8_ = dVar24 * local_2a8;
      local_448._12_4_ = (int)((ulonglong)(dVar48 * dStack_2a0) >> 0x20);
      local_1f8 = (1.0 - (dVar46 * dVar42 + dVar27 * dVar38)) * dVar23;
      dStack_1d0 = (1.0 - (dVar46 * dVar42 + dVar50)) * dVar25;
      dStack_1f0 = (dVar38 * dVar47 + dVar43) * dVar23;
      local_1c8 = (dVar42 * dVar27 + dVar44) * dVar25;
      uStack_1d8 = (dVar38 * dVar47 - dVar43) * dVar25;
      dStack_1b0 = (dVar42 * dVar27 - dVar44) * dVar24;
      local_1e8 = (dVar45 - dVar49) * dVar23;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = *(undefined8 *)((longlong)dVar1 + 0xc0);
      uStack_190 = *(undefined8 *)((longlong)dVar1 + 200);
      local_188 = *(undefined8 *)((longlong)dVar1 + 0xd0);
      uStack_180 = 0x3ff0000000000000;
      dVar48 = local_2f8[1] + local_2f8[1];
      dVar49 = local_2f8[2] + local_2f8[2];
      dVar24 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
      local_228 = (1.0 - (dVar24 + local_2f8[1] * dVar48)) * local_2a8;
      dVar45 = (local_2f8[0] + local_2f8[0]) * local_2f8[3];
      local_238 = (dVar48 * local_2f8[3] + local_2f8[0] * dVar49) * local_2a8;
      local_258 = (dVar48 * local_2f8[0] - dVar49 * local_2f8[3]) * dStack_2b0;
      dStack_230 = (dVar49 * local_2f8[1] - dVar45) * local_2a8;
      local_458._8_8_ = dVar25 * dStack_2b0;
      local_458._0_8_ = dVar23 * local_2b8;
      local_278 = (1.0 - (local_2f8[2] * dVar49 + local_2f8[1] * dVar48)) * local_2b8;
      dStack_250 = (1.0 - (local_2f8[2] * dVar49 + dVar24)) * dStack_2b0;
      dStack_270 = (dVar48 * local_2f8[0] + dVar49 * local_2f8[3]) * local_2b8;
      local_248 = (dVar49 * local_2f8[1] + dVar45) * dStack_2b0;
      local_268 = (local_2f8[0] * dVar49 - dVar48 * local_2f8[3]) * local_2b8;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_2d8;
      dStack_210 = dStack_2d0;
      local_208 = local_2c8;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
      auVar34 = _DAT_149934d80;
      local_468 = local_168;
      dVar24 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
      dVar23 = local_148 * local_148 + local_158 * local_158 + (double)local_150 * (double)local_150
      ;
      dVar49 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar21 = -(ulonglong)(0.0 <= dVar24 + -9.99999993922529e-09);
      dVar45 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar24)) & uVar21);
      uVar21 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
      dVar47 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar21);
      dVar24 = (double)local_448._0_8_;
      dVar48 = (double)local_448._8_8_;
      uVar21 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
      dVar23 = (double)local_458._0_8_;
      dVar25 = (double)local_458._8_8_;
      dVar49 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar21);
      auVar30._8_8_ = -(ulonglong)(0.0 <= (double)local_458._8_8_);
      auVar30._0_8_ = -(ulonglong)(0.0 <= (double)local_458._0_8_);
      auVar32 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar30);
      dVar27 = (double)(~-(ulonglong)(0.0 <= (double)local_448._0_8_) & 0xbff0000000000000 |
                       (ulonglong)
                       ((uint)(-(ulonglong)(0.0 <= (double)local_448._0_8_) >> 0x20) & 0x3ff00000)
                       << 0x20);
      dVar46 = auVar32._0_8_;
      local_178 = local_178 * dVar45 * dVar46;
      local_170 = local_170 * dVar45 * dVar46;
      local_168 = dVar45 * local_168 * dVar46;
      dVar45 = auVar32._8_8_;
      local_148 = dVar47 * local_148 * dVar45;
      local_150 = (double *)((double)local_150 * dVar47 * dVar45);
      local_158 = dVar45 * local_158 * dVar47;
      local_128 = dVar49 * local_128 * dVar27;
      local_130 = local_130 * dVar49 * dVar27;
      local_138 = dVar27 * local_138 * dVar49;
      FUN_14481fd10(&local_298,&local_178);
      dVar49 = local_288 * local_288 + local_298 * local_298;
      dVar45 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar37._0_8_ = dVar49 + dVar45;
      auVar37._8_8_ = dVar49 + dVar45;
      auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
      auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
      auVar32 = sqrtpd(auVar37,auVar37);
      auVar34 = divpd(auVar34,auVar32);
      auVar41._0_8_ = auVar34._0_8_ * local_288;
      auVar41._8_8_ = auVar34._8_8_ * dStack_280;
      local_408 = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
      dStack_400 = (double)((ulonglong)(dStack_290 * auVar34._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
      local_3f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar31);
      local_3e8 = local_118;
      dStack_3e0 = dStack_110;
      local_3d8 = local_108;
      dStack_3d0 = 0.0;
    }
    local_3c8._8_4_ = SUB84(dVar25,0);
    local_3c8._0_8_ = dVar23;
    local_3c8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    local_3b8._8_4_ = SUB84(dVar48,0);
    local_3b8._0_8_ = dVar24;
    local_3b8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    iVar13 = *(int *)param_1[7];
    *(int *)param_1[7] = iVar13 + 1;
    dVar23 = param_1[3];
    local_178 = (double)CONCAT44(local_178._4_4_,iVar13);
    local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)((longlong)param_1 + 0x34));
    pcVar4 = (code *)*puVar3;
    plVar17 = puVar3 + 4;
    if ((longlong *)puVar3[2] != (longlong *)0x0) {
      plVar17 = (longlong *)puVar3[2];
    }
    uVar21 = (**(code **)(*plVar17 + 8))(plVar17);
    local_488 = local_480;
    local_490 = &local_388;
    local_498 = (code **)&local_3a0;
    local_4a0 = &local_408;
    local_4a8 = &local_178;
    (*pcVar4)(uVar21,dVar23,local_478,&local_1f8);
    uVar14 = 0;
  } while ((local_46c & 1) != 0);
  if ((local_f0 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8edc6 FUN_143b8edc6 body=2514 status=ok
// SIG undefined FUN_143b8edc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8edc6(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b8f79a FUN_143b8f79a body=2514 status=ok
// SIG undefined FUN_143b8f79a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b8f79a(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9016e FUN_143b9016e body=2514 status=ok
// SIG undefined FUN_143b9016e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b9016e(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b90b42 FUN_143b90b42 body=2514 status=ok
// SIG undefined FUN_143b90b42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b90b42(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b91516 FUN_143b91516 body=2514 status=ok
// SIG undefined FUN_143b91516(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b91516(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b91eea FUN_143b91eea body=2514 status=ok
// SIG undefined FUN_143b91eea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b91eea(longlong *param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 *local_380;
  double *local_378;
  double *local_370;
  longlong local_368;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  local_2a0 = (double)param_3[2];
  local_2a8 = (double)param_3[1];
  local_2b0 = (double)*param_3;
  lVar3 = param_1[7];
  local_2b8 = (double)param_2[2];
  local_2c0 = (double)param_2[1];
  local_2c8 = (double)*param_2;
  pdVar4 = (double *)param_1[5];
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = ZEXT816(0);
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar23 = auVar27._0_8_;
  dVar45 = auVar27._8_8_;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar31 = auVar28._0_8_;
  dVar9 = auVar28._8_8_;
  auVar32 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2e8 = auVar32._0_8_;
  dStack_2e0 = auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar7 = auVar24._0_8_;
  auVar27 = minpd(auVar32,auVar27);
  auVar32 = minpd(auVar24,auVar28);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar19 = movmskpd((int)param_2,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar21 = movmskpd((int)param_3,auVar27);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar10 = *pdVar4;
    dVar11 = pdVar4[1];
    dVar12 = pdVar4[2];
    dVar13 = pdVar4[3];
    dVar14 = *(double *)(lVar2 + 0xa0);
    dVar15 = *(double *)(lVar2 + 0xa8);
    dVar16 = *(double *)(lVar2 + 0xb0);
    dVar17 = *(double *)(lVar2 + 0xb8);
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar40 = *(double *)(lVar2 + 0xb8);
    dVar8 = *(double *)(lVar2 + 0xa0);
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xa8);
    dVar30 = *(double *)(lVar2 + 0xb0);
    dVar35 = *(double *)(lVar2 + 0xb0);
    dVar41 = pdVar4[4] * dVar23;
    dVar42 = pdVar4[5] * dVar45;
    dVar43 = pdVar4[6] * dVar31;
    dVar44 = pdVar4[7] * dVar9;
    dVar36 = dVar42 * dVar14 - dVar15 * dVar41;
    dVar39 = dVar43 * dVar15 - dVar16 * dVar42;
    dVar46 = dVar41 * dVar16 - dVar14 * dVar43;
    dVar47 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar39 = dVar39 + dVar39;
    dVar46 = dVar46 + dVar46;
    dVar36 = dVar36 + dVar36;
    dVar47 = dVar47 + dVar47;
    dVar42 = (dVar39 * dVar16 - dVar36 * dVar14) + dVar40 * dVar46 + dVar42 +
             *(double *)(lVar2 + 200);
    local_2f8 = (dVar46 * dVar14 - dVar15 * dVar39) + dVar26 * dVar36 + dVar43 +
                *(double *)(lVar2 + 0xd0);
    dStack_2f0 = (dVar47 * dVar17 - dVar47 * dVar17) + dVar40 * dVar47 + dVar44 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar35 * 1.0 + dVar13 * dVar38 + dVar12 * dVar34 * -1.0 + dVar11 * dVar40;
    local_328._0_8_ =
         dVar11 * dVar30 * -1.0 + dVar12 * dVar37 + dVar13 * dVar8 * 1.0 + dVar10 * dVar26;
    local_318._8_8_ =
         dVar12 * dVar35 * -1.0 + ((dVar34 * dVar10 * -1.0 + dVar13 * dVar40) - dVar11 * dVar38);
    local_318._0_8_ =
         dVar13 * dVar30 * 1.0 + ((dVar8 * dVar11 * 1.0 + dVar12 * dVar26) - dVar10 * dVar37);
    local_308._8_4_ = SUB84(dVar42,0);
    local_308._0_8_ =
         (dVar36 * dVar15 - dVar16 * dVar46) + dVar26 * dVar39 + dVar41 + *(double *)(lVar2 + 0xc0);
    local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_2e8 = local_2e8 * dVar23;
    dStack_2e0 = dStack_2e0 * dVar45;
    dVar7 = dVar7 * dVar31;
    uVar25 = SUB84(dVar7,0);
    dVar9 = auVar24._8_8_ * dVar9;
  }
  else {
    dVar34 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar38 = *(double *)(lVar2 + 0xb0);
    dVar30 = dVar37 + dVar37;
    dVar35 = dVar38 + dVar38;
    dVar40 = dVar34 * (dVar34 + dVar34);
    local_1a8 = (1.0 - (dVar40 + dVar37 * dVar30)) * dVar31;
    dVar8 = *(double *)(lVar2 + 0xa0) * dVar35;
    dVar26 = *(double *)(lVar2 + 0xb8);
    dVar36 = dVar35 * dVar26;
    dVar39 = (dVar34 + dVar34) * *(double *)(lVar2 + 0xb8);
    dVar26 = dVar30 * dVar26;
    local_1b8 = (dVar26 + dVar8) * dVar31;
    local_338 = dVar31 * dVar7;
    dStack_330 = dVar9 * auVar24._8_8_;
    local_1f8 = (1.0 - (dVar38 * dVar35 + dVar37 * dVar30)) * dVar23;
    dStack_1d0 = (1.0 - (dVar38 * dVar35 + dVar40)) * dVar45;
    dStack_1f0 = (dVar30 * dVar34 + dVar36) * dVar23;
    local_1c8 = (dVar35 * dVar37 + dVar39) * dVar45;
    local_1d8 = (dVar30 * dVar34 - dVar36) * dVar45;
    dStack_1b0 = (dVar35 * dVar37 - dVar39) * dVar31;
    local_1e8 = (dVar8 - dVar26) * dVar23;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar26 = *pdVar4;
    dVar40 = pdVar4[1];
    dVar8 = pdVar4[2];
    dVar34 = dVar40 + dVar40;
    dVar37 = dVar8 + dVar8;
    dVar9 = dVar26 * (dVar26 + dVar26);
    local_228 = (1.0 - (dVar9 + dVar40 * dVar34)) * dVar7;
    dVar31 = pdVar4[3];
    dVar38 = dVar37 * dVar31;
    dVar30 = (dVar26 + dVar26) * pdVar4[3];
    dVar31 = dVar34 * dVar31;
    local_238 = (dVar31 + *pdVar4 * dVar37) * dVar7;
    local_258 = (dVar34 * dVar26 - dVar38) * dStack_2e0;
    dStack_230 = (dVar37 * dVar40 - dVar30) * dVar7;
    local_348._8_4_ = SUB84(dVar45 * dStack_2e0,0);
    local_348._0_8_ = dVar23 * local_2e8;
    local_348._12_4_ = (int)((ulonglong)(dVar45 * dStack_2e0) >> 0x20);
    local_278 = (1.0 - (dVar8 * dVar37 + dVar40 * dVar34)) * local_2e8;
    dStack_250 = (1.0 - (dVar8 * dVar37 + dVar9)) * dStack_2e0;
    dStack_270 = (dVar34 * dVar26 + dVar38) * local_2e8;
    local_248 = (dVar37 * dVar40 + dVar30) * dStack_2e0;
    local_268 = (*pdVar4 * dVar37 - dVar31) * local_2e8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = *(undefined4 *)(pdVar4 + 6);
    uStack_204 = *(undefined4 *)((longlong)pdVar4 + 0x34);
    uStack_200 = 0;
    uStack_1fc = 0x3ff00000;
    FUN_1447fea8d(&local_178);
    dVar9 = dStack_330;
    dVar7 = local_338;
    local_350 = local_168;
    dVar31 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_358 = local_158;
    dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar26 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar45)) & uVar22);
    uVar22 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar45 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar22);
    uVar25 = SUB84(local_338,0);
    auVar32._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
    dVar23 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
    dVar40 = auVar27._0_8_;
    local_178 = local_178 * dVar26 * dVar40;
    local_170 = local_170 * dVar26 * dVar40;
    local_168 = dVar26 * local_168 * dVar40;
    dVar26 = auVar27._8_8_;
    local_148 = dVar31 * local_148 * dVar26;
    local_150 = local_150 * dVar31 * dVar26;
    local_158 = dVar26 * local_158 * dVar31;
    local_128 = dVar45 * local_128 * dVar23;
    local_130 = local_130 * dVar45 * dVar23;
    local_138 = dVar23 * local_138 * dVar45;
    FUN_14481fd10(&local_298,&local_178);
    dVar7 = (double)((ulonglong)dVar7 & 0xffffffff00000000);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar23 + dVar31;
    auVar29._8_8_ = dVar23 + dVar31;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar27 = sqrtpd(auVar29,auVar29);
    auVar27 = divpd(_DAT_149934d80,auVar27);
    auVar33._0_8_ = auVar27._0_8_ * local_288;
    auVar33._8_8_ = auVar27._8_8_ * dStack_280;
    uVar22 = (ulonglong)(dStack_290 * auVar27._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar24);
    local_2e8 = (double)local_348._0_8_;
    dStack_2e0 = (double)local_348._8_8_;
    local_328._8_4_ = (int)uVar22;
    local_328._0_8_ =
         (ulonglong)(local_298 * auVar27._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    local_328._12_4_ = (int)(uVar22 >> 0x20);
    local_308._8_8_ = uStack_110;
    local_308._0_8_ = local_118;
    local_2f8 = local_108;
    dStack_2f0 = 0.0;
  }
  uStack_2d4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  iVar19 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar19 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar19);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar20 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar1[2];
  }
  local_2d8 = uVar25;
  dStack_2d0 = dVar9;
  uVar18 = (**(code **)(*plVar20 + 8))(plVar20);
  local_370 = &local_2b0;
  local_378 = &local_2c8;
  local_388 = &local_178;
  local_380 = local_328;
  local_368 = lVar3;
  (*pcVar6)(uVar18,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b928be FUN_143b928be body=7610 status=ok
// SIG undefined FUN_143b928be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b928be(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auStack_538 [32];
  double *local_518;
  undefined1 *local_510;
  undefined8 *local_508;
  undefined8 *local_500;
  longlong local_4f8;
  double local_4e8;
  double dStack_4e0;
  undefined1 local_4d8 [16];
  double local_4c8;
  longlong local_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined8 local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  longlong local_440;
  undefined1 local_438 [16];
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  undefined8 uStack_400;
  double local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8 [16];
  longlong local_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined4 local_348;
  undefined4 uStack_344;
  double dStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
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
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  lVar3 = *param_1;
  lVar22 = *(longlong *)(param_1[4] + 0x30);
  lVar19 = (longlong)(int)param_1[8] * 0x100;
  local_440 = lVar22 + lVar19;
  pdVar2 = (double *)(lVar22 + 0x90 + lVar19);
  local_458 = *pdVar2;
  dStack_450 = pdVar2[1];
  pdVar2 = (double *)(lVar22 + 0xa0 + lVar19);
  local_468 = *pdVar2;
  dStack_460 = pdVar2[1];
  lVar4 = *(longlong *)(lVar3 + 0x80);
  pdVar2 = (double *)(lVar22 + 0xb0 + lVar19);
  local_4b8 = *pdVar2 * *(double *)(lVar4 + 0x18);
  dStack_4b0 = pdVar2[1] * *(double *)(lVar4 + 0x20);
  pdVar2 = (double *)(lVar22 + 0xc0 + lVar19);
  local_478 = *pdVar2 * *(double *)(lVar4 + 0x28);
  dStack_470 = pdVar2[1] * 0.0;
  pdVar2 = (double *)(lVar22 + 0xd0 + lVar19);
  dVar24 = *(double *)(lVar4 + 0x18) * *pdVar2;
  dVar6 = *(double *)(lVar4 + 0x20) * pdVar2[1];
  local_4d8._8_4_ = SUB84(dVar6,0);
  local_4d8._0_8_ = dVar24;
  local_4d8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  pdVar2 = (double *)(lVar22 + 0xe0 + lVar19);
  local_4e8 = *(double *)(lVar4 + 0x28) * *pdVar2;
  dStack_4e0 = pdVar2[1] * 0.0;
  if ((char)param_1[1] == '\x01') {
    lVar22 = param_1[3];
    *(double *)(lVar22 + 0x20) = local_458;
    *(double *)(lVar22 + 0x28) = dStack_450;
    *(double *)(lVar22 + 0x30) = local_468;
    *(double *)(lVar22 + 0x38) = dStack_460;
    *(double *)(lVar22 + 0x40) = local_4b8;
    *(double *)(lVar22 + 0x48) = dStack_4b0;
    *(double *)(lVar22 + 0x50) = local_478;
    *(double *)(lVar22 + 0x58) = dStack_470;
    *(double *)(lVar22 + 0x60) = dVar24;
    *(undefined8 *)(lVar22 + 0x68) = local_4d8._8_8_;
    *(double *)(lVar22 + 0x70) = local_4e8;
    *(double *)(lVar22 + 0x78) = dStack_4e0;
  }
  local_4a0 = param_3;
  if (2 < (int)*(uint *)(local_440 + 0x48)) {
    dVar31 = dStack_450 + dStack_450;
    dVar6 = local_468 + local_468;
    dVar33 = local_458 * (local_458 + local_458);
    uStack_3c0 = 0x3ff0000000000000;
    local_418 = (1.0 - (local_468 * dVar6 + dStack_450 * dVar31)) * dVar24;
    dVar37 = (1.0 - (local_468 * dVar6 + dVar33)) * (double)local_4d8._8_8_;
    local_3f8 = (1.0 - (dVar33 + dStack_450 * dVar31)) * local_4e8;
    dVar33 = (local_458 + local_458) * dStack_460;
    dStack_410 = (dVar31 * local_458 + dVar6 * dStack_460) * dVar24;
    local_3e8 = (dVar6 * dStack_450 + dVar33) * (double)local_4d8._8_8_;
    dVar33 = (dVar6 * dStack_450 - dVar33) * local_4e8;
    local_408 = (local_458 * dVar6 - dVar31 * dStack_460) * dVar24;
    uStack_3f0 = 0;
    uStack_400 = 0;
    uStack_3e0 = 0;
    local_3b8._8_4_ = SUB84(dVar37,0);
    local_3b8._0_8_ = (dVar31 * local_458 - dVar6 * dStack_460) * (double)local_4d8._8_8_;
    local_3b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    local_3d8._8_4_ = SUB84(dVar33,0);
    local_3d8._0_8_ = (dVar31 * dStack_460 + local_458 * dVar6) * local_4e8;
    local_3d8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    local_438._8_4_ = SUB84(local_468,0);
    local_438._0_8_ = dStack_460;
    local_438._12_4_ = (int)((ulonglong)local_468 >> 0x20);
    local_3a0 = ((ulonglong)*(uint *)(local_440 + 0x48) * 0xaaaaaaab >> 0x1f & 0xfffffffffffffffc) *
                3;
    lVar22 = 0;
    local_428 = dStack_450;
    dStack_420 = local_458;
    local_3c8 = local_478;
    do {
      lVar4 = *(longlong *)(local_440 + 0x30);
      lVar19 = *(longlong *)(local_440 + 0x40);
      local_328 = *(undefined8 *)(lVar4 + 0x10 + (longlong)*(int *)(lVar19 + lVar22) * 0x18);
      puVar1 = (undefined8 *)(lVar4 + (longlong)*(int *)(lVar19 + lVar22) * 0x18);
      local_338 = *puVar1;
      uStack_330 = puVar1[1];
      lVar20 = (longlong)*(int *)(lVar19 + 4 + lVar22);
      local_308 = *(undefined8 *)(lVar4 + 0x10 + lVar20 * 0x18);
      puVar1 = (undefined8 *)(lVar4 + lVar20 * 0x18);
      local_318 = *puVar1;
      uStack_310 = puVar1[1];
      iVar16 = *(int *)(lVar19 + 8 + lVar22);
      local_2e8 = *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar16 * 0x18);
      puVar1 = (undefined8 *)(lVar4 + (longlong)iVar16 * 0x18);
      local_2f8 = *puVar1;
      uStack_2f0 = puVar1[1];
      puVar1 = (undefined8 *)param_1[2];
      local_4c0 = param_1[5];
      local_368 = 0.0;
      dStack_360 = 0.0;
      local_378 = ZEXT816(0);
      auVar38 = *(undefined1 (*) [16])(lVar3 + 0xe0);
      dVar24 = auVar38._0_8_;
      dVar33 = auVar38._8_8_;
      auVar52 = *(undefined1 (*) [16])(lVar3 + 0xf0);
      dVar6 = auVar52._0_8_;
      dVar37 = auVar52._8_8_;
      auVar34 = minpd(local_4d8,auVar38);
      auVar38._8_8_ = dStack_4e0;
      auVar38._0_8_ = local_4e8;
      auVar38 = minpd(auVar38,auVar52);
      auVar52._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar52._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      iVar15 = movmskpd((int)local_378,auVar52);
      auVar34._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      uVar18 = movmskpd(iVar16 * 3,auVar34);
      local_2d8 = local_318;
      uStack_2d0 = uStack_310;
      local_2c8 = local_308;
      local_2b8 = local_338;
      uStack_2b0 = uStack_330;
      local_2a8 = local_328;
      if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar9 = *(double *)(lVar3 + 0xa0);
        dVar10 = *(double *)(lVar3 + 0xa8);
        dVar11 = *(double *)(lVar3 + 0xb0);
        dVar12 = *(double *)(lVar3 + 0xb8);
        dVar31 = *(double *)(lVar3 + 0xb8);
        dVar53 = *(double *)(lVar3 + 0xb8);
        dVar60 = *(double *)(lVar3 + 0xa0);
        dVar50 = *(double *)(lVar3 + 0xa0);
        dVar51 = *(double *)(lVar3 + 0xa8);
        dVar44 = *(double *)(lVar3 + 0xa8);
        dVar45 = *(double *)(lVar3 + 0xb0);
        dVar46 = *(double *)(lVar3 + 0xb0);
        dVar49 = dStack_420 * dVar46 * 1.0 +
                 dStack_460 * dVar44 + (double)local_438._8_8_ * dVar50 * -1.0 + dStack_450 * dVar53
        ;
        dVar56 = local_4b8 * dVar24;
        dVar57 = dStack_4b0 * dVar33;
        dVar54 = local_478 * dVar6;
        dVar55 = dStack_470 * dVar37;
        dVar58 = dVar57 * dVar9 - dVar56 * dVar10;
        dVar7 = dVar54 * dVar10 - dVar57 * dVar11;
        dVar8 = dVar56 * dVar11 - dVar54 * dVar9;
        dVar59 = dVar55 * dVar12 - dVar55 * dVar12;
        dVar7 = dVar7 + dVar7;
        dVar8 = dVar8 + dVar8;
        dVar58 = dVar58 + dVar58;
        dVar59 = dVar59 + dVar59;
        dVar57 = (dVar7 * dVar11 - dVar58 * dVar9) + dVar53 * dVar8 + dVar57 +
                 *(double *)(lVar3 + 200);
        local_368 = (dVar8 * dVar9 - dVar10 * dVar7) + dVar31 * dVar58 + dVar54 +
                    *(double *)(lVar3 + 0xd0);
        dStack_360 = (dVar59 * dVar12 - dVar59 * dVar12) + dVar53 * dVar59 + dVar55 +
                     *(double *)(lVar3 + 0xd8);
        local_398._8_4_ = SUB84(dVar49,0);
        local_398._0_8_ =
             local_428 * dVar45 * -1.0 +
             local_468 * dVar51 + (double)local_438._0_8_ * dVar60 * 1.0 + local_458 * dVar31;
        local_398._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        local_388._8_8_ =
             dVar46 * (double)local_438._8_8_ * -1.0 +
             ((dVar50 * dStack_420 * -1.0 + dStack_460 * dVar53) - dVar44 * dStack_450);
        local_388._0_8_ =
             dVar45 * (double)local_438._0_8_ * 1.0 +
             ((dVar60 * local_428 * 1.0 + local_468 * dVar31) - dVar51 * local_458);
        local_378._8_4_ = SUB84(dVar57,0);
        local_378._0_8_ =
             (dVar58 * dVar10 - dVar11 * dVar8) + dVar31 * dVar7 + dVar56 +
             *(double *)(lVar3 + 0xc0);
        local_378._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
        dVar24 = dVar24 * (double)local_4d8._0_8_;
        dVar33 = dVar33 * (double)local_4d8._8_8_;
        dVar6 = dVar6 * local_4e8;
        uVar32 = SUB84(dVar6,0);
        dVar37 = dVar37 * dStack_4e0;
      }
      else {
        local_488 = local_4e8 * dVar6;
        dStack_480 = dStack_4e0 * dVar37;
        dVar60 = *(double *)(lVar3 + 0xa0);
        dVar50 = *(double *)(lVar3 + 0xa8);
        dVar51 = *(double *)(lVar3 + 0xb0);
        dVar44 = dVar50 + dVar50;
        dVar45 = dVar51 + dVar51;
        dVar31 = dVar60 * (dVar60 + dVar60);
        local_1a8 = (1.0 - (dVar31 + dVar50 * dVar44)) * dVar6;
        dVar53 = *(double *)(lVar3 + 0xa0) * dVar45;
        dVar37 = *(double *)(lVar3 + 0xb8);
        dVar46 = dVar45 * dVar37;
        dVar49 = (dVar60 + dVar60) * *(double *)(lVar3 + 0xb8);
        dVar37 = dVar44 * dVar37;
        local_1b8 = (dVar37 + dVar53) * dVar6;
        local_1d8 = (dVar44 * dVar60 - dVar46) * dVar33;
        dStack_1b0 = (dVar45 * dVar50 - dVar49) * dVar6;
        local_498 = (double)local_4d8._0_8_ * dVar24;
        dStack_490 = (double)local_4d8._8_8_ * dVar33;
        local_1f8 = (1.0 - (dVar51 * dVar45 + dVar50 * dVar44)) * dVar24;
        dStack_1d0 = (1.0 - (dVar51 * dVar45 + dVar31)) * dVar33;
        dStack_1f0 = (dVar44 * dVar60 + dVar46) * dVar24;
        local_1c8 = (dVar45 * dVar50 + dVar49) * dVar33;
        local_1e8 = (dVar53 - dVar37) * dVar24;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = *(undefined8 *)(lVar3 + 0xc0);
        uStack_190 = *(undefined8 *)(lVar3 + 200);
        local_188 = *(undefined4 *)(lVar3 + 0xd0);
        uStack_184 = *(undefined4 *)(lVar3 + 0xd4);
        uStack_180 = 0;
        uStack_17c = 0x3ff00000;
        local_278 = local_418;
        dStack_270 = dStack_410;
        local_268 = local_408;
        uStack_260 = uStack_400;
        local_258 = local_3b8._0_8_;
        uStack_250 = local_3b8._8_8_;
        local_248 = local_3e8;
        uStack_240 = uStack_3e0;
        local_238 = local_3d8._0_8_;
        uStack_230 = local_3d8._8_8_;
        local_228 = local_3f8;
        uStack_220 = uStack_3f0;
        local_218 = local_4b8;
        dStack_210 = dStack_4b0;
        local_208 = local_3c8;
        uStack_200 = uStack_3c0;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        dVar37 = dStack_480;
        dVar6 = local_488;
        dVar33 = dStack_490;
        dVar24 = local_498;
        auVar38 = _DAT_149934d80;
        local_4c8 = local_168;
        dVar53 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
        dVar31 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar50 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        uVar23 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
        dVar53 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar53)) & uVar23);
        uVar23 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
        dVar60 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar23);
        uVar23 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
        dVar31 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar50)) & uVar23);
        uVar32 = SUB84(local_488,0);
        auVar25._8_8_ = -(ulonglong)(0.0 <= dStack_490);
        auVar25._0_8_ = -(ulonglong)(0.0 <= local_498);
        auVar52 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar25);
        dVar50 = (double)(~-(ulonglong)(0.0 <= local_488) & 0xbff0000000000000 |
                         (ulonglong)((uint)(-(ulonglong)(0.0 <= local_488) >> 0x20) & 0x3ff00000) <<
                         0x20);
        dVar51 = auVar52._0_8_;
        local_178 = local_178 * dVar53 * dVar51;
        local_170 = local_170 * dVar53 * dVar51;
        local_168 = dVar53 * local_168 * dVar51;
        dVar53 = auVar52._8_8_;
        local_148 = dVar60 * local_148 * dVar53;
        local_150 = local_150 * dVar60 * dVar53;
        local_158 = dVar53 * local_158 * dVar60;
        local_128 = dVar31 * local_128 * dVar50;
        local_130 = local_130 * dVar31 * dVar50;
        local_138 = dVar50 * local_138 * dVar31;
        FUN_14481fd10(&local_298,&local_178);
        dVar31 = local_288 * local_288 + local_298 * local_298;
        dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar39._0_8_ = dVar31 + dVar53;
        auVar39._8_8_ = dVar31 + dVar53;
        auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
        auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
        auVar52 = sqrtpd(auVar39,auVar39);
        auVar38 = divpd(auVar38,auVar52);
        auVar61._0_8_ = auVar38._0_8_ * local_288;
        auVar61._8_8_ = auVar38._8_8_ * dStack_280;
        uVar23 = (ulonglong)(dStack_290 * auVar38._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
        local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar26);
        local_398._8_4_ = (int)uVar23;
        local_398._0_8_ =
             (ulonglong)(local_298 * auVar38._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
        local_398._12_4_ = (int)(uVar23 >> 0x20);
        dVar6 = (double)((ulonglong)dVar6 & 0xffffffff00000000);
        local_378._8_8_ = uStack_110;
        local_378._0_8_ = local_118;
        local_368 = local_108;
        dStack_360 = 0.0;
      }
      uStack_344 = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_358._8_4_ = SUB84(dVar33,0);
      local_358._0_8_ = dVar24;
      local_358._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      iVar16 = *(int *)param_1[7];
      *(int *)param_1[7] = iVar16 + 1;
      lVar4 = param_1[3];
      local_178 = (double)CONCAT44(local_178._4_4_,iVar16);
      local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)((longlong)param_1 + 0x34));
      pcVar5 = (code *)*puVar1;
      plVar21 = puVar1 + 4;
      if ((longlong *)puVar1[2] != (longlong *)0x0) {
        plVar21 = (longlong *)puVar1[2];
      }
      local_348 = uVar32;
      dStack_340 = dVar37;
      uVar17 = (**(code **)(*plVar21 + 8))(plVar21);
      local_4f8 = local_4c0;
      local_500 = &local_318;
      local_508 = &local_338;
      local_510 = local_398;
      local_518 = &local_178;
      (*pcVar5)(uVar17,lVar4,local_4a0,&local_1f8);
      puVar1 = (undefined8 *)param_1[2];
      local_4c0 = param_1[5];
      local_308 = local_2e8;
      local_318 = local_2f8;
      uStack_310 = uStack_2f0;
      local_328 = local_2c8;
      local_338 = local_2d8;
      uStack_330 = uStack_2d0;
      local_368 = 0.0;
      dStack_360 = 0.0;
      local_378 = ZEXT816(0);
      auVar38 = *(undefined1 (*) [16])(lVar3 + 0xe0);
      dVar24 = auVar38._0_8_;
      dVar33 = auVar38._8_8_;
      auVar52 = *(undefined1 (*) [16])(lVar3 + 0xf0);
      dVar6 = auVar52._0_8_;
      dVar37 = auVar52._8_8_;
      auVar38 = minpd(local_4d8,auVar38);
      auVar13._8_8_ = dStack_4e0;
      auVar13._0_8_ = local_4e8;
      auVar52 = minpd(auVar13,auVar52);
      auVar35._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar35._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      iVar16 = movmskpd((int)local_378,auVar35);
      auVar40._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
      auVar40._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
      uVar18 = movmskpd((int)uVar17,auVar40);
      if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
        dVar9 = *(double *)(lVar3 + 0xa0);
        dVar10 = *(double *)(lVar3 + 0xa8);
        dVar11 = *(double *)(lVar3 + 0xb0);
        dVar12 = *(double *)(lVar3 + 0xb8);
        dVar53 = *(double *)(lVar3 + 0xb8);
        dVar31 = *(double *)(lVar3 + 0xb8);
        dVar50 = *(double *)(lVar3 + 0xa0);
        dVar60 = *(double *)(lVar3 + 0xa0);
        dVar51 = *(double *)(lVar3 + 0xa8);
        dVar44 = *(double *)(lVar3 + 0xa8);
        dVar46 = *(double *)(lVar3 + 0xb0);
        dVar45 = *(double *)(lVar3 + 0xb0);
        dVar49 = dStack_420 * dVar45 * 1.0 +
                 dStack_460 * dVar44 + (double)local_438._8_8_ * dVar60 * -1.0 + dStack_450 * dVar31
        ;
        dVar56 = local_4b8 * dVar24;
        dVar57 = dStack_4b0 * dVar33;
        dVar54 = local_478 * dVar6;
        dVar55 = dStack_470 * dVar37;
        dVar58 = dVar57 * dVar9 - dVar56 * dVar10;
        dVar7 = dVar54 * dVar10 - dVar57 * dVar11;
        dVar8 = dVar56 * dVar11 - dVar54 * dVar9;
        dVar59 = dVar55 * dVar12 - dVar55 * dVar12;
        dVar7 = dVar7 + dVar7;
        dVar8 = dVar8 + dVar8;
        dVar58 = dVar58 + dVar58;
        dVar59 = dVar59 + dVar59;
        dVar57 = (dVar7 * dVar11 - dVar58 * dVar9) + dVar31 * dVar8 + dVar57 +
                 *(double *)(lVar3 + 200);
        local_368 = (dVar8 * dVar9 - dVar10 * dVar7) + dVar53 * dVar58 + dVar54 +
                    *(double *)(lVar3 + 0xd0);
        dStack_360 = (dVar59 * dVar12 - dVar59 * dVar12) + dVar31 * dVar59 + dVar55 +
                     *(double *)(lVar3 + 0xd8);
        local_398._8_4_ = SUB84(dVar49,0);
        local_398._0_8_ =
             local_428 * dVar46 * -1.0 +
             local_468 * dVar51 + (double)local_438._0_8_ * dVar50 * 1.0 + local_458 * dVar53;
        local_398._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        local_388._8_8_ =
             dVar45 * (double)local_438._8_8_ * -1.0 +
             ((dVar60 * dStack_420 * -1.0 + dStack_460 * dVar31) - dVar44 * dStack_450);
        local_388._0_8_ =
             dVar46 * (double)local_438._0_8_ * 1.0 +
             ((dVar50 * local_428 * 1.0 + local_468 * dVar53) - dVar51 * local_458);
        local_378._8_4_ = SUB84(dVar57,0);
        local_378._0_8_ =
             (dVar58 * dVar10 - dVar11 * dVar8) + dVar53 * dVar7 + dVar56 +
             *(double *)(lVar3 + 0xc0);
        local_378._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
        dVar24 = dVar24 * (double)local_4d8._0_8_;
        dVar33 = dVar33 * (double)local_4d8._8_8_;
        dVar6 = dVar6 * local_4e8;
        uVar32 = SUB84(dVar6,0);
        dVar37 = dVar37 * dStack_4e0;
      }
      else {
        local_488 = local_4e8 * dVar6;
        dStack_480 = dStack_4e0 * dVar37;
        dVar60 = *(double *)(lVar3 + 0xa0);
        dVar50 = *(double *)(lVar3 + 0xa8);
        dVar51 = *(double *)(lVar3 + 0xb0);
        dVar44 = dVar50 + dVar50;
        dVar45 = dVar51 + dVar51;
        dVar31 = dVar60 * (dVar60 + dVar60);
        local_1a8 = (1.0 - (dVar31 + dVar50 * dVar44)) * dVar6;
        dVar53 = *(double *)(lVar3 + 0xa0) * dVar45;
        dVar37 = *(double *)(lVar3 + 0xb8);
        dVar46 = dVar45 * dVar37;
        dVar49 = (dVar60 + dVar60) * *(double *)(lVar3 + 0xb8);
        dVar37 = dVar44 * dVar37;
        local_1b8 = (dVar37 + dVar53) * dVar6;
        local_1d8 = (dVar44 * dVar60 - dVar46) * dVar33;
        dStack_1b0 = (dVar45 * dVar50 - dVar49) * dVar6;
        local_498 = (double)local_4d8._0_8_ * dVar24;
        dStack_490 = (double)local_4d8._8_8_ * dVar33;
        local_1f8 = (1.0 - (dVar51 * dVar45 + dVar50 * dVar44)) * dVar24;
        dStack_1d0 = (1.0 - (dVar51 * dVar45 + dVar31)) * dVar33;
        dStack_1f0 = (dVar44 * dVar60 + dVar46) * dVar24;
        local_1c8 = (dVar45 * dVar50 + dVar49) * dVar33;
        local_1e8 = (dVar53 - dVar37) * dVar24;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = *(undefined8 *)(lVar3 + 0xc0);
        uStack_190 = *(undefined8 *)(lVar3 + 200);
        local_188 = *(undefined4 *)(lVar3 + 0xd0);
        uStack_184 = *(undefined4 *)(lVar3 + 0xd4);
        uStack_180 = 0;
        uStack_17c = 0x3ff00000;
        local_278 = local_418;
        dStack_270 = dStack_410;
        local_268 = local_408;
        uStack_260 = uStack_400;
        local_258 = local_3b8._0_8_;
        uStack_250 = local_3b8._8_8_;
        local_248 = local_3e8;
        uStack_240 = uStack_3e0;
        local_238 = local_3d8._0_8_;
        uStack_230 = local_3d8._8_8_;
        local_228 = local_3f8;
        uStack_220 = uStack_3f0;
        local_218 = local_4b8;
        dStack_210 = dStack_4b0;
        local_208 = local_3c8;
        uStack_200 = uStack_3c0;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        dVar37 = dStack_480;
        dVar6 = local_488;
        dVar33 = dStack_490;
        dVar24 = local_498;
        auVar38 = _DAT_149934d80;
        local_4c8 = local_168;
        dVar53 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
        dVar60 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar31 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        uVar23 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
        dVar53 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar53)) & uVar23);
        uVar23 = -(ulonglong)(0.0 <= dVar60 + -9.99999993922529e-09);
        dVar60 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar60)) & uVar23);
        uVar23 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
        dVar31 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar23);
        uVar32 = SUB84(local_488,0);
        auVar27._8_8_ = -(ulonglong)(0.0 <= dStack_490);
        auVar27._0_8_ = -(ulonglong)(0.0 <= local_498);
        auVar52 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar27);
        dVar50 = (double)(~-(ulonglong)(0.0 <= local_488) & 0xbff0000000000000 |
                         (ulonglong)((uint)(-(ulonglong)(0.0 <= local_488) >> 0x20) & 0x3ff00000) <<
                         0x20);
        dVar51 = auVar52._0_8_;
        local_178 = local_178 * dVar53 * dVar51;
        local_170 = local_170 * dVar53 * dVar51;
        local_168 = dVar53 * local_168 * dVar51;
        dVar53 = auVar52._8_8_;
        local_148 = dVar60 * local_148 * dVar53;
        local_150 = local_150 * dVar60 * dVar53;
        local_158 = dVar53 * local_158 * dVar60;
        local_128 = dVar31 * local_128 * dVar50;
        local_130 = local_130 * dVar31 * dVar50;
        local_138 = dVar50 * local_138 * dVar31;
        FUN_14481fd10(&local_298,&local_178);
        dVar31 = local_288 * local_288 + local_298 * local_298;
        dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar41._0_8_ = dVar31 + dVar53;
        auVar41._8_8_ = dVar31 + dVar53;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
        auVar52 = sqrtpd(auVar41,auVar41);
        auVar38 = divpd(auVar38,auVar52);
        auVar47._0_8_ = auVar38._0_8_ * local_288;
        auVar47._8_8_ = auVar38._8_8_ * dStack_280;
        uVar23 = (ulonglong)(dStack_290 * auVar38._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
        local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar28);
        local_398._8_4_ = (int)uVar23;
        local_398._0_8_ =
             (ulonglong)(local_298 * auVar38._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
        local_398._12_4_ = (int)(uVar23 >> 0x20);
        dVar6 = (double)((ulonglong)dVar6 & 0xffffffff00000000);
        local_378._8_8_ = uStack_110;
        local_378._0_8_ = local_118;
        local_368 = local_108;
        dStack_360 = 0.0;
      }
      uStack_344 = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_358._8_8_ = dVar33;
      local_358._0_8_ = dVar24;
      iVar16 = *(int *)param_1[7];
      *(int *)param_1[7] = iVar16 + 1;
      lVar4 = param_1[3];
      local_178 = (double)CONCAT44(local_178._4_4_,iVar16);
      local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)((longlong)param_1 + 0x34));
      pcVar5 = (code *)*puVar1;
      plVar21 = puVar1 + 4;
      if ((longlong *)puVar1[2] != (longlong *)0x0) {
        plVar21 = (longlong *)puVar1[2];
      }
      local_348 = uVar32;
      dStack_340 = dVar37;
      uVar17 = (**(code **)(*plVar21 + 8))(plVar21);
      local_4f8 = local_4c0;
      local_500 = &local_318;
      local_508 = &local_338;
      local_510 = local_398;
      local_518 = &local_178;
      (*pcVar5)(uVar17,lVar4,local_4a0,&local_1f8);
      puVar1 = (undefined8 *)param_1[2];
      local_4c0 = param_1[5];
      local_308 = local_2a8;
      local_318 = local_2b8;
      uStack_310 = uStack_2b0;
      local_328 = local_2e8;
      local_338 = local_2f8;
      uStack_330 = uStack_2f0;
      local_368 = 0.0;
      dStack_360 = 0.0;
      local_378 = ZEXT816(0);
      auVar38 = *(undefined1 (*) [16])(lVar3 + 0xe0);
      dVar24 = auVar38._0_8_;
      dVar33 = auVar38._8_8_;
      auVar52 = *(undefined1 (*) [16])(lVar3 + 0xf0);
      dVar6 = auVar52._0_8_;
      dVar37 = auVar52._8_8_;
      auVar38 = minpd(local_4d8,auVar38);
      auVar14._8_8_ = dStack_4e0;
      auVar14._0_8_ = local_4e8;
      auVar52 = minpd(auVar14,auVar52);
      auVar36._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar36._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      iVar16 = movmskpd((int)local_378,auVar36);
      auVar42._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
      auVar42._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
      uVar18 = movmskpd((int)uVar17,auVar42);
      if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
        dVar9 = *(double *)(lVar3 + 0xa0);
        dVar10 = *(double *)(lVar3 + 0xa8);
        dVar11 = *(double *)(lVar3 + 0xb0);
        dVar12 = *(double *)(lVar3 + 0xb8);
        dVar53 = *(double *)(lVar3 + 0xb8);
        dVar31 = *(double *)(lVar3 + 0xb8);
        dVar50 = *(double *)(lVar3 + 0xa0);
        dVar60 = *(double *)(lVar3 + 0xa0);
        dVar51 = *(double *)(lVar3 + 0xa8);
        dVar44 = *(double *)(lVar3 + 0xa8);
        dVar45 = *(double *)(lVar3 + 0xb0);
        dVar46 = *(double *)(lVar3 + 0xb0);
        dVar49 = dStack_420 * dVar46 * 1.0 +
                 dStack_460 * dVar44 + (double)local_438._8_8_ * dVar60 * -1.0 + dStack_450 * dVar31
        ;
        dVar56 = local_4b8 * dVar24;
        dVar57 = dStack_4b0 * dVar33;
        dVar54 = local_478 * dVar6;
        dVar55 = dStack_470 * dVar37;
        dVar58 = dVar57 * dVar9 - dVar56 * dVar10;
        dVar7 = dVar54 * dVar10 - dVar57 * dVar11;
        dVar8 = dVar56 * dVar11 - dVar54 * dVar9;
        dVar59 = dVar55 * dVar12 - dVar55 * dVar12;
        dVar7 = dVar7 + dVar7;
        dVar8 = dVar8 + dVar8;
        dVar58 = dVar58 + dVar58;
        dVar59 = dVar59 + dVar59;
        dVar57 = (dVar7 * dVar11 - dVar58 * dVar9) + dVar31 * dVar8 + dVar57 +
                 *(double *)(lVar3 + 200);
        local_368 = (dVar8 * dVar9 - dVar10 * dVar7) + dVar53 * dVar58 + dVar54 +
                    *(double *)(lVar3 + 0xd0);
        dStack_360 = (dVar59 * dVar12 - dVar59 * dVar12) + dVar31 * dVar59 + dVar55 +
                     *(double *)(lVar3 + 0xd8);
        local_398._8_4_ = SUB84(dVar49,0);
        local_398._0_8_ =
             local_428 * dVar45 * -1.0 +
             local_468 * dVar51 + (double)local_438._0_8_ * dVar50 * 1.0 + local_458 * dVar53;
        local_398._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        local_388._8_8_ =
             dVar46 * (double)local_438._8_8_ * -1.0 +
             ((dVar60 * dStack_420 * -1.0 + dStack_460 * dVar31) - dVar44 * dStack_450);
        local_388._0_8_ =
             dVar45 * (double)local_438._0_8_ * 1.0 +
             ((dVar50 * local_428 * 1.0 + local_468 * dVar53) - dVar51 * local_458);
        local_378._8_4_ = SUB84(dVar57,0);
        local_378._0_8_ =
             (dVar58 * dVar10 - dVar11 * dVar8) + dVar53 * dVar7 + dVar56 +
             *(double *)(lVar3 + 0xc0);
        local_378._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
        dVar24 = dVar24 * (double)local_4d8._0_8_;
        dVar33 = dVar33 * (double)local_4d8._8_8_;
        dVar6 = dVar6 * local_4e8;
        uVar32 = SUB84(dVar6,0);
        dVar37 = dVar37 * dStack_4e0;
      }
      else {
        local_488 = local_4e8 * dVar6;
        dStack_480 = dStack_4e0 * dVar37;
        dVar60 = *(double *)(lVar3 + 0xa0);
        dVar50 = *(double *)(lVar3 + 0xa8);
        dVar51 = *(double *)(lVar3 + 0xb0);
        dVar44 = dVar50 + dVar50;
        dVar45 = dVar51 + dVar51;
        dVar31 = dVar60 * (dVar60 + dVar60);
        local_1a8 = (1.0 - (dVar31 + dVar50 * dVar44)) * dVar6;
        dVar53 = *(double *)(lVar3 + 0xa0) * dVar45;
        dVar37 = *(double *)(lVar3 + 0xb8);
        dVar46 = dVar45 * dVar37;
        dVar49 = (dVar60 + dVar60) * *(double *)(lVar3 + 0xb8);
        dVar37 = dVar44 * dVar37;
        local_1b8 = (dVar37 + dVar53) * dVar6;
        local_1d8 = (dVar44 * dVar60 - dVar46) * dVar33;
        dStack_1b0 = (dVar45 * dVar50 - dVar49) * dVar6;
        local_498 = (double)local_4d8._0_8_ * dVar24;
        dStack_490 = (double)local_4d8._8_8_ * dVar33;
        local_1f8 = (1.0 - (dVar51 * dVar45 + dVar50 * dVar44)) * dVar24;
        dStack_1d0 = (1.0 - (dVar51 * dVar45 + dVar31)) * dVar33;
        dStack_1f0 = (dVar44 * dVar60 + dVar46) * dVar24;
        local_1c8 = (dVar45 * dVar50 + dVar49) * dVar33;
        local_1e8 = (dVar53 - dVar37) * dVar24;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = *(undefined8 *)(lVar3 + 0xc0);
        uStack_190 = *(undefined8 *)(lVar3 + 200);
        local_188 = *(undefined4 *)(lVar3 + 0xd0);
        uStack_184 = *(undefined4 *)(lVar3 + 0xd4);
        uStack_180 = 0;
        uStack_17c = 0x3ff00000;
        local_278 = local_418;
        dStack_270 = dStack_410;
        local_268 = local_408;
        uStack_260 = uStack_400;
        local_258 = local_3b8._0_8_;
        uStack_250 = local_3b8._8_8_;
        local_248 = local_3e8;
        uStack_240 = uStack_3e0;
        local_238 = local_3d8._0_8_;
        uStack_230 = local_3d8._8_8_;
        local_228 = local_3f8;
        uStack_220 = uStack_3f0;
        local_218 = local_4b8;
        dStack_210 = dStack_4b0;
        local_208 = local_3c8;
        uStack_200 = uStack_3c0;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        dVar37 = dStack_480;
        dVar6 = local_488;
        dVar33 = dStack_490;
        dVar24 = local_498;
        auVar38 = _DAT_149934d80;
        local_4c8 = local_168;
        dVar53 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
        dVar60 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar31 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        uVar23 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
        dVar53 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar53)) & uVar23);
        uVar23 = -(ulonglong)(0.0 <= dVar60 + -9.99999993922529e-09);
        dVar60 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar60)) & uVar23);
        uVar23 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
        dVar31 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar23);
        uVar32 = SUB84(local_488,0);
        auVar29._8_8_ = -(ulonglong)(0.0 <= dStack_490);
        auVar29._0_8_ = -(ulonglong)(0.0 <= local_498);
        auVar52 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar29);
        dVar50 = (double)(~-(ulonglong)(0.0 <= local_488) & 0xbff0000000000000 |
                         (ulonglong)((uint)(-(ulonglong)(0.0 <= local_488) >> 0x20) & 0x3ff00000) <<
                         0x20);
        dVar51 = auVar52._0_8_;
        local_178 = local_178 * dVar53 * dVar51;
        local_170 = local_170 * dVar53 * dVar51;
        local_168 = dVar53 * local_168 * dVar51;
        dVar53 = auVar52._8_8_;
        local_148 = dVar60 * local_148 * dVar53;
        local_150 = local_150 * dVar60 * dVar53;
        local_158 = dVar53 * local_158 * dVar60;
        local_128 = dVar31 * local_128 * dVar50;
        local_130 = local_130 * dVar31 * dVar50;
        local_138 = dVar50 * local_138 * dVar31;
        FUN_14481fd10(&local_298,&local_178);
        dVar31 = local_288 * local_288 + local_298 * local_298;
        dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar43._0_8_ = dVar31 + dVar53;
        auVar43._8_8_ = dVar31 + dVar53;
        auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
        auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
        auVar52 = sqrtpd(auVar43,auVar43);
        auVar38 = divpd(auVar38,auVar52);
        auVar48._0_8_ = auVar38._0_8_ * local_288;
        auVar48._8_8_ = auVar38._8_8_ * dStack_280;
        uVar23 = (ulonglong)(dStack_290 * auVar38._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
        local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar30);
        local_398._8_4_ = (int)uVar23;
        local_398._0_8_ =
             (ulonglong)(local_298 * auVar38._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
        local_398._12_4_ = (int)(uVar23 >> 0x20);
        dVar6 = (double)((ulonglong)dVar6 & 0xffffffff00000000);
        local_378._8_8_ = uStack_110;
        local_378._0_8_ = local_118;
        local_368 = local_108;
        dStack_360 = 0.0;
      }
      uStack_344 = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_358._8_8_ = dVar33;
      local_358._0_8_ = dVar24;
      iVar16 = *(int *)param_1[7];
      *(int *)param_1[7] = iVar16 + 1;
      lVar4 = param_1[3];
      local_178 = (double)CONCAT44(local_178._4_4_,iVar16);
      local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)((longlong)param_1 + 0x34));
      pcVar5 = (code *)*puVar1;
      plVar21 = puVar1 + 4;
      if ((longlong *)puVar1[2] != (longlong *)0x0) {
        plVar21 = (longlong *)puVar1[2];
      }
      local_348 = uVar32;
      dStack_340 = dVar37;
      uVar17 = (**(code **)(*plVar21 + 8))(plVar21);
      local_4f8 = local_4c0;
      local_500 = &local_318;
      local_508 = &local_338;
      local_510 = local_398;
      local_518 = &local_178;
      (*pcVar5)(uVar17,lVar4,local_4a0,&local_1f8);
      lVar22 = lVar22 + 0xc;
    } while (local_3a0 != lVar22);
  }
  if ((local_f0 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9467a FUN_143b9467a body=1475 status=ok
// SIG undefined FUN_143b9467a(void)

void FUN_143b9467a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined8 *local_290;
  code **local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  undefined8 uStack_240;
  undefined8 local_238 [4];
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e8;
  code *local_e0;
  longlong *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar1 = *param_1;
  lVar6 = (longlong)(int)param_1[8] * 0xa0;
  local_280 = *(longlong *)(param_1[4] + 0x50) + lVar6;
  puVar8 = (undefined8 *)(*(longlong *)(param_1[4] + 0x50) + lVar6 + 0x30);
  puVar9 = local_238;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  lVar5 = *(longlong *)(lVar1 + 0x80);
  local_218 = local_218 * *(double *)(lVar5 + 0x18);
  dStack_210 = dStack_210 * *(double *)(lVar5 + 0x20);
  local_208 = local_208 * *(double *)(lVar5 + 0x28);
  dStack_200 = dStack_200 * 0.0;
  dVar15 = *(double *)(lVar5 + 0x20) * (double)local_1f8._8_8_;
  local_1f8._8_4_ = SUB84(dVar15,0);
  local_1f8._0_8_ = *(double *)(lVar5 + 0x18) * (double)local_1f8._0_8_;
  local_1f8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_1e8 = *(double *)(lVar5 + 0x28) * local_1e8;
  dStack_1e0 = dStack_1e0 * 0.0;
  if ((char)param_1[1] == '\x01') {
    puVar8 = local_238;
    puVar9 = (undefined8 *)(param_1[3] + 0x20);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  lVar5 = param_1[2];
  local_250 = param_1[3];
  local_270 = (longlong)param_1 + 0x34;
  lVar6 = param_1[7];
  local_278 = param_1[5];
  lVar2 = *(longlong *)(local_280 + 0x90);
  dVar14 = 0.0;
  dVar16 = 0.0;
  uVar10 = 0;
  uVar11 = 0;
  dVar12 = 0.0;
  dVar13 = 0.0;
  dVar15 = 0.0;
  if (lVar2 != 0) {
    dVar15 = *(double *)(lVar2 + 0xb8);
    dVar14 = *(double *)(lVar2 + 0xc0);
    dVar16 = *(double *)(lVar2 + 200);
    uVar10 = (undefined4)*(undefined8 *)(lVar2 + 0xd0);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0xd0) >> 0x20);
    dVar12 = *(double *)(lVar2 + 0xd8);
    dVar13 = *(double *)(lVar2 + 0xe0);
  }
  local_a8 = (dVar16 + dVar13) * 0.5;
  local_b0 = (dVar14 + dVar12) * 0.5;
  local_b8 = ((double)CONCAT44(uVar11,uVar10) + dVar15) * 0.5;
  local_c0 = (dVar13 - dVar16) * 0.5;
  local_c8 = (dVar12 - dVar14) * 0.5;
  local_d0 = ((double)CONCAT44(uVar11,uVar10) - dVar15) * 0.5;
  local_288 = &local_e0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0x3ff0000000000000;
  local_158 = DAT_14c8464e0;
  uStack_150 = DAT_14c8464e8;
  local_148 = DAT_14c8464f0;
  local_130 = DAT_14c846520;
  local_298 = &local_198;
  local_188 = DAT_14c8463c8;
  local_1a8 = DAT_14c846398;
  local_1c8 = DAT_14c8463b0;
  local_e0 = FUN_143b94c3e;
  local_140 = DAT_14c846510;
  uStack_138 = DAT_14c846518;
  local_198 = DAT_14c8463b8;
  uStack_190 = DAT_14c8463c0;
  local_1b8 = DAT_14c846388;
  uStack_1b0 = DAT_14c846390;
  local_1d8 = (undefined4)DAT_14c8463a0;
  uStack_1d4 = DAT_14c8463a0._4_4_;
  uStack_1d0 = (undefined4)DAT_14c8463a8;
  uStack_1cc = DAT_14c8463a8._4_4_;
  local_290 = &local_178;
  local_120 = lVar5;
  local_118 = local_250;
  local_110 = param_3;
  local_108 = local_270;
  local_100 = lVar6;
  local_f8 = local_238;
  local_f0 = lVar1;
  local_e8 = local_278;
  local_d8 = &local_120;
  FUN_1485160ea();
  local_248 = 0;
  uStack_240 = 0;
  FUN_1479b29d0(local_280,&local_248,0x3f1a36e2e0000000);
  lVar4 = local_248;
  lVar3 = local_270;
  lVar2 = local_278;
  if ((longlong)(int)uStack_240 != 0) {
    local_260 = (longlong)(int)uStack_240 * 0x38;
    lVar7 = 0;
    local_280 = param_3;
    local_268 = lVar5;
    local_258 = lVar1;
    do {
      dVar15 = *(double *)(lVar4 + 0x10 + lVar7);
      dVar14 = *(double *)(lVar4 + 0x28 + lVar7);
      dVar16 = *(double *)(lVar4 + 8 + lVar7);
      dVar12 = *(double *)(lVar4 + 0x20 + lVar7);
      dVar13 = *(double *)(lVar4 + 0x18 + lVar7);
      local_a8 = (dVar15 + dVar14) * 0.5;
      local_b0 = (dVar16 + dVar12) * 0.5;
      local_b8 = (*(double *)(lVar4 + lVar7) + dVar13) * 0.5;
      local_c0 = (dVar14 - dVar15) * 0.5;
      local_c8 = (dVar12 - dVar16) * 0.5;
      local_d0 = (dVar13 - *(double *)(lVar4 + lVar7)) * 0.5;
      local_120 = local_268;
      local_118 = local_250;
      local_110 = local_280;
      local_108 = lVar3;
      local_f8 = local_238;
      local_f0 = local_258;
      local_e8 = lVar2;
      local_e0 = FUN_143b94c3e;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_160 = 0x3ff0000000000000;
      local_148 = DAT_14c8464f0;
      local_158 = DAT_14c8464e0;
      uStack_150 = DAT_14c8464e8;
      local_130 = DAT_14c846520;
      local_140 = DAT_14c846510;
      uStack_138 = DAT_14c846518;
      local_188 = DAT_14c8463c8;
      local_198 = DAT_14c8463b8;
      uStack_190 = DAT_14c8463c0;
      local_1a8 = DAT_14c846398;
      local_1b8 = DAT_14c846388;
      uStack_1b0 = DAT_14c846390;
      local_1c8 = DAT_14c8463b0;
      local_1d8 = (undefined4)DAT_14c8463a0;
      uStack_1d4 = DAT_14c8463a0._4_4_;
      uStack_1d0 = (undefined4)DAT_14c8463a8;
      uStack_1cc = DAT_14c8463a8._4_4_;
      local_288 = &local_e0;
      local_298 = &local_198;
      local_290 = &local_178;
      local_100 = lVar6;
      local_d8 = &local_120;
      FUN_1485160ea(&local_d0,&local_b8,&local_1d8,&local_1b8);
      lVar7 = lVar7 + 0x38;
    } while (local_260 != lVar7);
  }
  if (local_248 != 0) {
    FUN_1400020a8(local_248);
  }
  if ((local_a0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b94c3e FUN_143b94c3e body=2467 status=ok
// SIG undefined FUN_143b94c3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b94c3e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStack_3b8 [32];
  double *local_398;
  double *local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  longlong local_378;
  double local_368;
  double local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[6];
  lVar3 = param_1[7];
  local_2a8 = param_3[2];
  local_2b8 = *param_3;
  uStack_2b0 = param_3[1];
  local_2c8 = param_2[2];
  local_2d8 = *param_2;
  uStack_2d0 = param_2[1];
  pdVar4 = (double *)param_1[5];
  local_308 = 0.0;
  dStack_300 = 0.0;
  local_318 = ZEXT816(0);
  auVar26 = *(undefined1 (*) [16])(lVar2 + 0xe0);
  dVar21 = auVar26._0_8_;
  dVar44 = auVar26._8_8_;
  auVar27 = *(undefined1 (*) [16])(lVar2 + 0xf0);
  dVar30 = auVar27._0_8_;
  dVar24 = auVar27._8_8_;
  auVar31 = *(undefined1 (*) [16])(pdVar4 + 8);
  local_2f8 = auVar31._0_8_;
  dStack_2f0 = auVar31._8_8_;
  auVar22 = *(undefined1 (*) [16])(pdVar4 + 10);
  dVar23 = auVar22._0_8_;
  auVar26 = minpd(auVar31,auVar26);
  auVar31 = minpd(auVar22,auVar27);
  auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
  iVar17 = movmskpd((int)param_2,auVar27);
  auVar26._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  uVar19 = movmskpd((int)param_3,auVar26);
  if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
    dVar8 = *pdVar4;
    dVar9 = pdVar4[1];
    dVar10 = pdVar4[2];
    dVar11 = pdVar4[3];
    dVar12 = *(double *)(lVar2 + 0xa0);
    dVar13 = *(double *)(lVar2 + 0xa8);
    dVar14 = *(double *)(lVar2 + 0xb0);
    dVar15 = *(double *)(lVar2 + 0xb8);
    dVar39 = *(double *)(lVar2 + 0xb8);
    dVar25 = *(double *)(lVar2 + 0xb8);
    dVar33 = *(double *)(lVar2 + 0xa0);
    dVar7 = *(double *)(lVar2 + 0xa0);
    dVar37 = *(double *)(lVar2 + 0xa8);
    dVar36 = *(double *)(lVar2 + 0xa8);
    dVar29 = *(double *)(lVar2 + 0xb0);
    dVar34 = *(double *)(lVar2 + 0xb0);
    local_338 = dVar9 * dVar29 * -1.0 + dVar10 * dVar37 + dVar11 * dVar33 * 1.0 + dVar8 * dVar39;
    dStack_330 = dVar8 * dVar34 * 1.0 + dVar11 * dVar36 + dVar10 * dVar7 * -1.0 + dVar9 * dVar25;
    dVar40 = pdVar4[4] * dVar21;
    dVar41 = pdVar4[5] * dVar44;
    dVar42 = pdVar4[6] * dVar30;
    dVar43 = pdVar4[7] * dVar24;
    dVar35 = dVar41 * dVar12 - dVar13 * dVar40;
    dVar38 = dVar42 * dVar13 - dVar14 * dVar41;
    dVar45 = dVar40 * dVar14 - dVar12 * dVar42;
    dVar46 = dVar43 * dVar15 - dVar15 * dVar43;
    dVar38 = dVar38 + dVar38;
    dVar45 = dVar45 + dVar45;
    dVar35 = dVar35 + dVar35;
    dVar46 = dVar46 + dVar46;
    dVar41 = (dVar38 * dVar14 - dVar35 * dVar12) + dVar25 * dVar45 + dVar41 +
             *(double *)(lVar2 + 200);
    local_308 = (dVar45 * dVar12 - dVar13 * dVar38) + dVar39 * dVar35 + dVar42 +
                *(double *)(lVar2 + 0xd0);
    dStack_300 = (dVar46 * dVar15 - dVar46 * dVar15) + dVar25 * dVar46 + dVar43 +
                 *(double *)(lVar2 + 0xd8);
    local_328._8_8_ =
         dVar10 * dVar34 * -1.0 + ((dVar7 * dVar8 * -1.0 + dVar11 * dVar25) - dVar9 * dVar36);
    local_328._0_8_ =
         dVar11 * dVar29 * 1.0 + ((dVar33 * dVar9 * 1.0 + dVar10 * dVar39) - dVar8 * dVar37);
    local_318._8_4_ = SUB84(dVar41,0);
    local_318._0_8_ =
         (dVar35 * dVar13 - dVar14 * dVar45) + dVar39 * dVar38 + dVar40 + *(double *)(lVar2 + 0xc0);
    local_318._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    local_2f8 = local_2f8 * dVar21;
    dStack_2f0 = dStack_2f0 * dVar44;
    dVar23 = dVar23 * dVar30;
    dVar24 = auVar22._8_8_ * dVar24;
  }
  else {
    dVar33 = *(double *)(lVar2 + 0xa0);
    dVar36 = *(double *)(lVar2 + 0xa8);
    dVar37 = *(double *)(lVar2 + 0xb0);
    dVar29 = dVar36 + dVar36;
    dVar34 = dVar37 + dVar37;
    dVar39 = dVar33 * (dVar33 + dVar33);
    local_1a8 = (1.0 - (dVar39 + dVar36 * dVar29)) * dVar30;
    dVar7 = *(double *)(lVar2 + 0xa0) * dVar34;
    dVar25 = *(double *)(lVar2 + 0xb8);
    dVar35 = dVar34 * dVar25;
    dVar38 = (dVar33 + dVar33) * *(double *)(lVar2 + 0xb8);
    dVar25 = dVar29 * dVar25;
    local_1b8 = (dVar25 + dVar7) * dVar30;
    local_348 = dVar30 * dVar23;
    dStack_340 = dVar24 * auVar22._8_8_;
    local_1f8 = (1.0 - (dVar37 * dVar34 + dVar36 * dVar29)) * dVar21;
    dStack_1d0 = (1.0 - (dVar37 * dVar34 + dVar39)) * dVar44;
    dStack_1f0 = (dVar29 * dVar33 + dVar35) * dVar21;
    local_1c8 = (dVar34 * dVar36 + dVar38) * dVar44;
    local_1d8 = (dVar29 * dVar33 - dVar35) * dVar44;
    dStack_1b0 = (dVar34 * dVar36 - dVar38) * dVar30;
    local_1e8 = (dVar7 - dVar25) * dVar21;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_190 = *(undefined8 *)(lVar2 + 200);
    local_188 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_180 = 0x3ff0000000000000;
    dVar25 = *pdVar4;
    dVar39 = pdVar4[1];
    dVar7 = pdVar4[2];
    dVar33 = dVar39 + dVar39;
    dVar36 = dVar7 + dVar7;
    dVar24 = dVar25 * (dVar25 + dVar25);
    local_228 = (1.0 - (dVar24 + dVar39 * dVar33)) * dVar23;
    dVar30 = pdVar4[3];
    dVar37 = dVar36 * dVar30;
    dVar29 = (dVar25 + dVar25) * pdVar4[3];
    dVar30 = dVar33 * dVar30;
    local_238 = (dVar30 + *pdVar4 * dVar36) * dVar23;
    local_258 = (dVar33 * dVar25 - dVar37) * dStack_2f0;
    dStack_230 = (dVar36 * dVar39 - dVar29) * dVar23;
    local_358 = dVar21 * local_2f8;
    dStack_350 = dVar44 * dStack_2f0;
    local_278 = (1.0 - (dVar7 * dVar36 + dVar39 * dVar33)) * local_2f8;
    dStack_250 = (1.0 - (dVar7 * dVar36 + dVar24)) * dStack_2f0;
    dStack_270 = (dVar33 * dVar25 + dVar37) * local_2f8;
    local_248 = (dVar36 * dVar39 + dVar29) * dStack_2f0;
    local_268 = (*pdVar4 * dVar36 - dVar30) * local_2f8;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = pdVar4[4];
    dStack_210 = pdVar4[5];
    local_208 = pdVar4[6];
    uStack_200 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_178);
    dVar24 = dStack_340;
    dVar23 = local_348;
    local_360 = local_168;
    dVar30 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
    local_368 = local_158;
    dVar44 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar21 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar20 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
    dVar25 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar20);
    uVar20 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
    dVar30 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar44)) & uVar20);
    uVar20 = -(ulonglong)(0.0 <= dVar21 + -9.99999993922529e-09);
    dVar44 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar21)) & uVar20);
    auVar31._8_8_ = -(ulonglong)(0.0 <= dStack_350);
    auVar31._0_8_ = -(ulonglong)(0.0 <= local_358);
    auVar26 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar31);
    dVar21 = (double)(~-(ulonglong)(0.0 <= local_348) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_348) & 0x3ff0000000000000);
    dVar39 = auVar26._0_8_;
    local_178 = local_178 * dVar25 * dVar39;
    local_170 = local_170 * dVar25 * dVar39;
    local_168 = dVar25 * local_168 * dVar39;
    dVar25 = auVar26._8_8_;
    local_148 = dVar30 * local_148 * dVar25;
    local_150 = local_150 * dVar30 * dVar25;
    local_158 = dVar25 * local_158 * dVar30;
    local_128 = dVar44 * local_128 * dVar21;
    local_130 = local_130 * dVar44 * dVar21;
    local_138 = dVar21 * local_138 * dVar44;
    FUN_14481fd10(&local_298,&local_178);
    dVar21 = local_288 * local_288 + local_298 * local_298;
    dVar30 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar28._0_8_ = dVar21 + dVar30;
    auVar28._8_8_ = dVar21 + dVar30;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar26 = sqrtpd(auVar28,auVar28);
    auVar26 = divpd(_DAT_149934d80,auVar26);
    auVar32._0_8_ = auVar26._0_8_ * local_288;
    auVar32._8_8_ = auVar26._8_8_ * dStack_280;
    local_338 = (double)((ulonglong)(local_298 * auVar26._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
    dStack_330 = (double)((ulonglong)(dStack_290 * auVar26._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
    local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar22);
    local_2f8 = local_358;
    dStack_2f0 = dStack_350;
    local_318._8_8_ = uStack_110;
    local_318._0_8_ = local_118;
    local_308 = local_108;
    dStack_300 = 0.0;
  }
  local_2e8._8_4_ = SUB84(dVar24,0);
  local_2e8._0_8_ = dVar23;
  local_2e8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  iVar17 = *(int *)param_1[4];
  *(int *)param_1[4] = iVar17 + 1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  local_178 = (double)CONCAT44(local_178._4_4_,iVar17);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(undefined4 *)param_1[3]);
  pcVar6 = (code *)*puVar1;
  plVar18 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar18 = (longlong *)puVar1[2];
  }
  uVar16 = (**(code **)(*plVar18 + 8))(plVar18);
  local_380 = &local_2b8;
  local_388 = &local_2d8;
  local_398 = &local_178;
  local_390 = &local_338;
  local_378 = lVar3;
  (*pcVar6)(uVar16,lVar2,lVar5,&local_1f8);
  if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b955e2 FUN_143b955e2 body=122 status=ok
// SIG undefined FUN_143b955e2(void)

void FUN_143b955e2(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0x3ff00000;
  uStack_20 = 0;
  uStack_1c = 0x3ff00000;
  local_18 = 0x3ff0000000000000;
  uStack_10 = 0;
  FUN_148415b4c(0,&local_68,1);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9569a FUN_143b9569a body=29 status=ok
// SIG undefined FUN_143b9569a(void)

undefined8 FUN_143b9569a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b956b8 FUN_143b956b8 body=81 status=ok
// SIG undefined FUN_143b956b8(void)

void FUN_143b956b8(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x3ff0000000000000;
  local_18 = 0x3ff0000000000000;
  local_10 = 0x3ff0000000000000;
  (**(code **)(*param_1 + 0x348))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9570a FUN_143b9570a body=79 status=ok
// SIG undefined FUN_143b9570a(void)

void FUN_143b9570a(longlong *param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*param_2;
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + 8 + lVar3 * 0x48);
  cVar2 = FUN_1484ffd62(*(undefined8 *)param_1[1],lVar1,
                        lVar1 + (longlong)
                                *(int *)(*(longlong *)(*param_1 + 0x60) + 0x10 + lVar3 * 0x48) *
                                0x18 + -0x18);
  if (cVar2 != '\0') {
    *(undefined1 *)(*(longlong *)param_1[2] + lVar3) = 1;
  }
  return;
}



// FUNCTION 143b9575a FUN_143b9575a body=112 status=ok
// SIG undefined FUN_143b9575a(void)

void FUN_143b9575a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined8 *)(param_2 + 0x68);
  local_28 = *(undefined8 *)(param_2 + 0x58);
  uStack_20 = *(undefined8 *)(param_2 + 0x60);
  local_38 = *(undefined8 *)(param_2 + 0x38);
  local_48 = *(undefined4 *)(param_2 + 0x28);
  uStack_44 = *(undefined4 *)(param_2 + 0x2c);
  uStack_40 = *(undefined4 *)(param_2 + 0x30);
  uStack_3c = *(undefined4 *)(param_2 + 0x34);
  FUN_1484f1816(*param_1,&local_48,&local_28,*(undefined1 *)(*(longlong *)(*param_1 + 0xd8) + 0xc0))
  ;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b957f6 FUN_143b957f6 body=29 status=ok
// SIG undefined FUN_143b957f6(void)

undefined8 FUN_143b957f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b95814 FUN_143b95814 body=47 status=ok
// SIG undefined FUN_143b95814(void)

void FUN_143b95814(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x30);
  plVar3 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143b95840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 143b9585a FUN_143b9585a body=29 status=ok
// SIG undefined FUN_143b9585a(void)

undefined8 FUN_143b9585a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b95878 FUN_143b95878 body=144 status=ok
// SIG undefined FUN_143b95878(void)

undefined1 * FUN_143b95878(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  local_38 = local_28;
  uVar2 = FUN_14848488c(lVar1 + 0x78,param_3,param_3 + 0x18,2);
  *param_1 = uVar2;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b95920 FUN_143b95920 body=29 status=ok
// SIG undefined FUN_143b95920(void)

undefined8 FUN_143b95920(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b9593e FUN_143b9593e body=184 status=ok
// SIG undefined FUN_143b9593e(void)

void FUN_143b9593e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined8 local_98 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *param_1;
  local_a8 = &local_38;
  cVar2 = FUN_14848488c(lVar3 + 0x78,param_2,param_2 + 0x18,2);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(lVar3 + 200);
    puVar4 = (undefined8 *)(*(longlong *)(plVar1[0x43] + 0x1c8) + 0x240);
    puVar5 = local_98;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_78 = local_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    local_68 = local_28;
    uStack_60 = 0;
    (**(code **)(*plVar1 + 0x330))(plVar1,local_98,1);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b95a0e FUN_143b95a0e body=29 status=ok
// SIG undefined FUN_143b95a0e(void)

undefined8 FUN_143b95a0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b95ac4 FUN_143b95ac4 body=29 status=ok
// SIG undefined FUN_143b95ac4(void)

undefined8 FUN_143b95ac4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b95b1c FUN_143b95b1c body=29 status=ok
// SIG undefined FUN_143b95b1c(void)

undefined8 FUN_143b95b1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b95b4e FUN_143b95b4e body=12 status=ok
// SIG undefined FUN_143b95b4e(void)

void FUN_143b95b4e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b95b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b95b5a FUN_143b95b5a body=29 status=ok
// SIG undefined FUN_143b95b5a(void)

undefined8 FUN_143b95b5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b95b78 FUN_143b95b78 body=41 status=ok
// SIG undefined FUN_143b95b78(void)

void FUN_143b95b78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*(longlong *)*param_1 + 0x38))
            ((longlong *)*param_1,param_2,param_3,param_1[1],param_1[3],1);
  return;
}



// FUNCTION 143b95bac FUN_143b95bac body=29 status=ok
// SIG undefined FUN_143b95bac(void)

void FUN_143b95bac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b95bca FUN_143b95bca body=121 status=ok
// SIG undefined FUN_143b95bca(void)

undefined8 * FUN_143b95bca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14af11dc0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 143b95c58 FUN_143b95c58 body=12 status=ok
// SIG undefined FUN_143b95c58(void)

void FUN_143b95c58(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b95c61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b95c64 FUN_143b95c64 body=29 status=ok
// SIG undefined FUN_143b95c64(void)

undefined8 FUN_143b95c64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b95c82 FUN_143b95c82 body=40 status=ok
// SIG undefined FUN_143b95c82(void)

void FUN_143b95c82(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,param_2,param_3,0,param_1[1],0);
  return;
}



// FUNCTION 143b95cb4 FUN_143b95cb4 body=12 status=ok
// SIG undefined FUN_143b95cb4(void)

void FUN_143b95cb4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b95cbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b95cc0 FUN_143b95cc0 body=83 status=ok
// SIG undefined FUN_143b95cc0(void)

undefined8 * FUN_143b95cc0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14af11e00;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 143b95d14 FUN_143b95d14 body=29 status=ok
// SIG undefined FUN_143b95d14(void)

undefined8 FUN_143b95d14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b95eb0 FUN_143b95eb0 body=93 status=ok
// SIG undefined FUN_143b95eb0(void)

void FUN_143b95eb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11e20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b95f0e FUN_143b95f0e body=93 status=ok
// SIG undefined FUN_143b95f0e(void)

void FUN_143b95f0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11e20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b95f6c FUN_143b95f6c body=126 status=ok
// SIG undefined FUN_143b95f6c(void)

void FUN_143b95f6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af11e20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b95fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b96020 FUN_143b96020 body=312 status=ok
// SIG undefined FUN_143b96020(void)

undefined8 FUN_143b96020(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b96152;
    if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143b96152;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143b96152:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b96109;
    lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar9 != 0) &&
       ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
      lVar9 = *(longlong *)(param_1 + 0x20);
      if (*(char *)(lVar9 + 0x125) == '\x01') {
        uVar3 = *(undefined4 *)(param_3 + 0x24);
        uVar4 = *(undefined4 *)(param_3 + 0x28);
        uVar5 = *(undefined4 *)(param_3 + 0x2c);
        uVar8 = *(undefined8 *)(param_3 + 0x30);
        *(undefined4 *)(lVar9 + 0x228) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(lVar9 + 0x22c) = uVar3;
        *(undefined4 *)(lVar9 + 0x230) = uVar4;
        *(undefined4 *)(lVar9 + 0x234) = uVar5;
        *(undefined8 *)(lVar9 + 0x238) = uVar8;
        *(undefined1 *)(lVar9 + 0x124) = 1;
      }
      *(undefined1 *)(lVar9 + 0x125) = 0;
      uVar8 = 1;
      goto LAB_143b96109;
    }
  }
  uVar8 = 0;
LAB_143b96109:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9615a FUN_143b9615a body=29 status=ok
// SIG undefined FUN_143b9615a(void)

undefined8 FUN_143b9615a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b962f6 FUN_143b962f6 body=93 status=ok
// SIG undefined FUN_143b962f6(void)

void FUN_143b962f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b96354 FUN_143b96354 body=93 status=ok
// SIG undefined FUN_143b96354(void)

void FUN_143b96354(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b963b2 FUN_143b963b2 body=126 status=ok
// SIG undefined FUN_143b963b2(void)

void FUN_143b963b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af11e90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b96421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b96466 FUN_143b96466 body=312 status=ok
// SIG undefined FUN_143b96466(void)

undefined8 FUN_143b96466(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b96598;
    if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143b96598;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143b96598:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b9654f;
    lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar9 != 0) &&
       ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
      lVar9 = *(longlong *)(param_1 + 0x20);
      if (*(char *)(lVar9 + 0x125) == '\x01') {
        uVar3 = *(undefined4 *)(param_3 + 0x24);
        uVar4 = *(undefined4 *)(param_3 + 0x28);
        uVar5 = *(undefined4 *)(param_3 + 0x2c);
        uVar8 = *(undefined8 *)(param_3 + 0x30);
        *(undefined4 *)(lVar9 + 0x228) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(lVar9 + 0x22c) = uVar3;
        *(undefined4 *)(lVar9 + 0x230) = uVar4;
        *(undefined4 *)(lVar9 + 0x234) = uVar5;
        *(undefined8 *)(lVar9 + 0x238) = uVar8;
        *(undefined1 *)(lVar9 + 0x124) = 1;
      }
      *(undefined1 *)(lVar9 + 0x125) = 0;
      uVar8 = 1;
      goto LAB_143b9654f;
    }
  }
  uVar8 = 0;
LAB_143b9654f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b965a0 FUN_143b965a0 body=29 status=ok
// SIG undefined FUN_143b965a0(void)

undefined8 FUN_143b965a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b9673c FUN_143b9673c body=93 status=ok
// SIG undefined FUN_143b9673c(void)

void FUN_143b9673c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b9679a FUN_143b9679a body=93 status=ok
// SIG undefined FUN_143b9679a(void)

void FUN_143b9679a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b967f8 FUN_143b967f8 body=126 status=ok
// SIG undefined FUN_143b967f8(void)

void FUN_143b967f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af11f00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b96867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b96884 FUN_143b96884 body=270 status=ok
// SIG undefined FUN_143b96884(void)

undefined8 FUN_143b96884(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b9698c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143b9698c;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_143b9698c:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b96944;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined2 *)(*(longlong *)(param_1 + 0x20) + 0x124) = 0;
      uVar5 = 1;
      goto LAB_143b96944;
    }
  }
  uVar5 = 0;
LAB_143b96944:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b96994 FUN_143b96994 body=29 status=ok
// SIG undefined FUN_143b96994(void)

undefined8 FUN_143b96994(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b96b30 FUN_143b96b30 body=93 status=ok
// SIG undefined FUN_143b96b30(void)

void FUN_143b96b30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b96b8e FUN_143b96b8e body=93 status=ok
// SIG undefined FUN_143b96b8e(void)

void FUN_143b96b8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af11f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b96bec FUN_143b96bec body=126 status=ok
// SIG undefined FUN_143b96bec(void)

void FUN_143b96bec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af11f70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b96c5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b96c78 FUN_143b96c78 body=270 status=ok
// SIG undefined FUN_143b96c78(void)

undefined8 FUN_143b96c78(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b96d80;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143b96d80;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_143b96d80:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b96d38;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined2 *)(*(longlong *)(param_1 + 0x20) + 0x124) = 0;
      uVar5 = 1;
      goto LAB_143b96d38;
    }
  }
  uVar5 = 0;
LAB_143b96d38:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b96d9c FUN_143b96d9c body=12 status=ok
// SIG undefined FUN_143b96d9c(void)

void FUN_143b96d9c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b96da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b96da8 FUN_143b96da8 body=29 status=ok
// SIG undefined FUN_143b96da8(void)

undefined8 FUN_143b96da8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b96dc6 FUN_143b96dc6 body=41 status=ok
// SIG undefined FUN_143b96dc6(void)

void FUN_143b96dc6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*(longlong *)*param_1 + 0x38))
            ((longlong *)*param_1,param_2,param_3,param_1[1],param_1[3],1);
  return;
}



// FUNCTION 143b96dfa FUN_143b96dfa body=29 status=ok
// SIG undefined FUN_143b96dfa(void)

void FUN_143b96dfa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b96e18 FUN_143b96e18 body=121 status=ok
// SIG undefined FUN_143b96e18(void)

undefined8 * FUN_143b96e18(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14af12000;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 143b96e92 FUN_143b96e92 body=29 status=ok
// SIG undefined FUN_143b96e92(void)

undefined8 FUN_143b96e92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b9702e FUN_143b9702e body=93 status=ok
// SIG undefined FUN_143b9702e(void)

void FUN_143b9702e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12090;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b9708c FUN_143b9708c body=93 status=ok
// SIG undefined FUN_143b9708c(void)

void FUN_143b9708c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12090;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b970ea FUN_143b970ea body=126 status=ok
// SIG undefined FUN_143b970ea(void)

void FUN_143b970ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14af12090;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af12020;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b97159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b97168 FUN_143b97168 body=76 status=ok
// SIG undefined FUN_143b97168(void)

void FUN_143b97168(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_4;
  FUN_143b972e2(param_1 + 0x20,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b971b6 FUN_143b971b6 body=299 status=ok
// SIG undefined FUN_143b971b6(void)

undefined8 FUN_143b971b6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  local_34 = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b972db;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143b972db;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143b972db:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b9728e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143b972e2(param_1 + 0x20,&local_40,param_3,&local_34);
      uVar6 = 1;
      goto LAB_143b9728e;
    }
  }
  uVar6 = 0;
LAB_143b9728e:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b972e2 FUN_143b972e2 body=290 status=ok
// SIG undefined FUN_143b972e2(void)

void FUN_143b972e2(longlong *param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar1 = *param_4;
  local_d8 = *(undefined8 *)(param_3 + 4);
  local_e8 = *param_3;
  uStack_e4 = param_3[1];
  uStack_e0 = param_3[2];
  uStack_dc = param_3[3];
  lVar2 = *param_1;
  (**(code **)(*(longlong *)*param_2 + 0x328))((longlong *)*param_2,&local_b8);
  local_58 = local_b8;
  uStack_54 = uStack_b4;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  local_48 = local_a8;
  uStack_40 = uStack_a0;
  FUN_1448052ee(&local_58,local_d0);
  FUN_1401c9a0e(local_d0,&local_58,&local_e8);
  if (*(char *)(lVar2 + 0x125) == '\x01') {
    dVar3 = (double)fVar1;
    *(double *)(lVar2 + 0x228) = (double)CONCAT44(uStack_54,local_58) * dVar3 + local_98;
    *(double *)(lVar2 + 0x230) = dVar3 * (double)CONCAT44(uStack_4c,uStack_50) + dStack_90;
    *(double *)(lVar2 + 0x238) = local_48 * dVar3 + local_88;
    *(undefined1 *)(lVar2 + 0x124) = 1;
  }
  *(undefined1 *)(lVar2 + 0x125) = 0;
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b97406 FUN_143b97406 body=29 status=ok
// SIG undefined FUN_143b97406(void)

undefined8 FUN_143b97406(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b975a2 FUN_143b975a2 body=93 status=ok
// SIG undefined FUN_143b975a2(void)

void FUN_143b975a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12170;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b97600 FUN_143b97600 body=93 status=ok
// SIG undefined FUN_143b97600(void)

void FUN_143b97600(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12170;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143b9765e FUN_143b9765e body=126 status=ok
// SIG undefined FUN_143b9765e(void)

void FUN_143b9765e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14af12170;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af12100;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b976cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143b976ea FUN_143b976ea body=270 status=ok
// SIG undefined FUN_143b976ea(void)

undefined8 FUN_143b976ea(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143b977f2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143b977f2;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_143b977f2:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143b977aa;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined2 *)(*(longlong *)(param_1 + 0x20) + 0x124) = 0;
      uVar5 = 1;
      goto LAB_143b977aa;
    }
  }
  uVar5 = 0;
LAB_143b977aa:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b977fa FUN_143b977fa body=212 status=ok
// SIG undefined FUN_143b977fa(void)

bool FUN_143b977fa(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
  uVar3 = (ulonglong)(*param_2 & 0x1ff);
  local_20 = *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc);
  local_28 = *(undefined8 *)(lVar2 + uVar3 * 0xc);
  lVar2 = param_1[1];
  uVar3 = 0;
  bVar6 = false;
  do {
    if (*(int *)(lVar2 + 0x40) != *(int *)(lVar2 + 0x6c)) {
      uVar1 = *(uint *)((longlong)&local_28 + uVar3 * 4);
      lVar4 = *(longlong *)(lVar2 + 0x78);
      if (*(longlong *)(lVar2 + 0x78) == 0) {
        lVar4 = lVar2 + 0x70;
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x80) - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar5 * 0xc) == uVar1)
          goto LAB_143b978af;
          iVar5 = *(int *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar5 * 0xc + 4);
        } while (iVar5 != -1);
      }
    }
    bVar6 = 1 < uVar3;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 3);
LAB_143b978af:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b978e6 FUN_143b978e6 body=29 status=ok
// SIG undefined FUN_143b978e6(void)

undefined8 FUN_143b978e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b97904 FUN_143b97904 body=3195 status=ok
// SIG undefined FUN_143b97904(void)

/* WARNING: Removing unreachable block (ram,0x000143b97de6) */
/* WARNING: Removing unreachable block (ram,0x000143b97df5) */
/* WARNING: Removing unreachable block (ram,0x000143b97df9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_143b97904(longlong *param_1,double *param_2,undefined8 *param_3,char *param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined **ppuVar19;
  char cVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined ***pppuVar28;
  longlong lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  double *pdVar32;
  double *pdVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar43;
  undefined1 auVar42 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auStack_2f8 [32];
  undefined8 *local_2d8;
  double local_2d0;
  double local_2c8;
  longlong local_2c0;
  undefined1 local_2b8 [16];
  double local_2a8 [2];
  undefined1 local_298 [16];
  double local_288;
  double local_278;
  double dStack_270;
  double local_268;
  uint local_254;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  double local_230;
  double local_228;
  ulonglong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined **local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158 [2];
  code *local_148;
  double dStack_140;
  undefined ***local_138;
  undefined8 uStack_130;
  undefined **local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  dVar12 = param_2[3];
  dVar14 = param_2[4];
  dVar15 = (double)param_1[10];
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x12);
  dVar11 = -dVar15;
  dVar13 = -(double)param_1[0xb];
  dVar35 = (double)param_1[0xc] * -1.0;
  dVar45 = (double)param_1[0xd] * 1.0;
  dVar38 = dVar14 * dVar11 - dVar12 * dVar13;
  dVar43 = param_2[5] * dVar13 - dVar14 * dVar35;
  dVar44 = dVar12 * dVar35 - param_2[5] * dVar11;
  dVar43 = dVar43 + dVar43;
  dVar44 = dVar44 + dVar44;
  dVar38 = dVar38 + dVar38;
  auVar42 = divpd(_DAT_149934d80,auVar3);
  local_248 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar42._0_8_);
  dStack_240 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar42._8_8_);
  dVar34 = *param_2 - (double)param_1[0xe];
  dVar37 = param_2[1] - (double)param_1[0xf];
  local_238 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x14])) &
                      (ulonglong)(1.0 / (double)param_1[0x14]));
  dVar41 = param_2[2] - (double)param_1[0x10];
  dVar39 = dVar37 * dVar11 - dVar13 * dVar34;
  dVar16 = dVar41 * dVar13 - dVar35 * dVar37;
  dVar47 = dVar34 * dVar35 - dVar41 * dVar11;
  dVar16 = dVar16 + dVar16;
  dVar47 = dVar47 + dVar47;
  dVar39 = dVar39 + dVar39;
  local_230 = ((dVar38 * dVar13 - dVar44 * dVar35) + dVar45 * dVar43 + dVar12) * local_248;
  local_228 = (dVar15 * dVar38 + dVar35 * dVar43 + dVar45 * dVar44 + dVar14) * dStack_240;
  local_248 = ((dVar39 * dVar13 - dVar47 * dVar35) + dVar45 * dVar16 + dVar34) * local_248;
  dStack_240 = (dVar15 * dVar39 + dVar35 * dVar16 + dVar45 * dVar47 + dVar37) * dStack_240;
  cVar20 = *param_4;
  lVar29 = *param_1;
  dVar38 = (dVar38 * dVar45 + param_2[5] + (dVar44 * dVar11 - dVar43 * dVar13)) * local_238;
  local_238 = (dVar39 * dVar45 + dVar41 + (dVar47 * dVar11 - dVar16 * dVar13)) * local_238;
  dVar41 = dVar38 * dVar38 + local_230 * local_230 + local_228 * local_228;
  if (9.99999993922529e-09 < dVar41) {
    dVar41 = 1.0 / SQRT(dVar41);
    local_230 = local_230 * dVar41;
    local_228 = local_228 * dVar41;
    dVar38 = dVar38 * dVar41;
    dVar41 = dVar38 * dVar38 + local_230 * local_230 + local_228 * local_228;
  }
  dVar41 = SQRT(dVar41);
  dVar35 = 1.0 / dVar41;
  if (0.0 < dVar41) {
    local_230 = local_230 * dVar35;
    local_228 = local_228 * dVar35;
  }
  else {
    local_230 = 0.0;
    local_228 = 0.0;
  }
  local_220 = -(ulonglong)(0.0 < dVar41) & (ulonglong)(dVar38 * dVar35);
  pcVar5 = (code *)param_1[2];
  plVar24 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar24 = (longlong *)param_1[4];
  }
  uVar23 = (**(code **)(*plVar24 + 8))();
  plVar24 = (longlong *)(*pcVar5)(uVar23);
  lVar7 = lStack_120;
  ppuVar19 = local_128;
  uVar23 = uStack_130;
  dVar38 = dStack_140;
  lVar6 = plVar24[1];
  local_158[0] = 0x7fefffffffffffff;
  local_148 = (code *)0x0;
  local_108 = 0;
  local_108 = cVar20 != '\0';
  if ((bool)local_108) {
    local_1e8 = local_118;
    uStack_1e0 = uStack_110;
    local_1f8 = local_128;
    lStack_1f0 = lStack_120;
    local_208 = 0;
    uStack_200 = uStack_130;
    local_218 = 0;
    uStack_210 = dStack_140;
    local_128 = &PTR_LAB_14af12220;
    lStack_120 = lVar29;
    local_138 = (undefined ***)0x0;
    uStack_130 = uStack_180;
    local_148 = FUN_143b985f0;
    dStack_140 = dStack_190;
    local_1e8._0_4_ = (undefined4)local_118;
    local_1e8._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
    uStack_1e0._0_4_ = (undefined4)uStack_110;
    uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
    local_168 = (undefined4)local_1e8;
    uStack_164 = local_1e8._4_4_;
    uStack_160 = (undefined4)uStack_1e0;
    uStack_15c = uStack_1e0._4_4_;
    local_188 = 0.0;
    uStack_180 = uVar23;
    local_198 = 0.0;
    local_128 = &PTR_LAB_14af12220;
    local_148 = FUN_143b985f0;
    local_188 = 0.0;
    dStack_190 = dVar38;
    local_198 = 0.0;
    lStack_1f0 = lVar7;
    local_1f8 = ppuVar19;
    uStack_200 = uVar23;
    local_208 = 0;
    uStack_210 = dVar38;
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
    local_218 = 0;
  }
  local_138 = (undefined ***)0x0;
  local_158[0] = 0x7fefffffffffffff;
  local_2d8 = local_158;
  uVar21 = (**(code **)(*plVar24 + 0x38))(plVar24,&local_248,&local_250,&local_254);
  if ((char)uVar21 != '\0') {
    local_2c8 = param_2[5] * local_250 + param_2[2];
    local_2d0 = param_2[4] * local_250 + param_2[1];
    local_198 = local_250 * param_2[3] + *param_2;
    pdVar33 = &local_198;
    lVar7 = *(longlong *)(lVar6 + 0x10);
    lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(local_254 >> 9) * 8);
    uVar25 = (ulonglong)local_254 & 0x1ff;
    uVar4 = *(uint *)(lVar8 + uVar25 * 0xc);
    lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar4 >> 9) * 8);
    uVar26 = (ulonglong)uVar4 & 0x1ff;
    pdVar32 = (double *)(lVar9 + uVar26 * 0x18);
    uVar4 = *(uint *)(lVar8 + 4 + uVar25 * 0xc);
    lVar10 = *(longlong *)(lVar7 + (ulonglong)(uVar4 >> 9) * 8);
    uVar27 = (ulonglong)uVar4 & 0x1ff;
    pdVar1 = (double *)(lVar10 + uVar27 * 0x18);
    uVar4 = *(uint *)(lVar8 + 8 + uVar25 * 0xc);
    lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar4 >> 9) * 8);
    uVar25 = (ulonglong)uVar4 & 0x1ff;
    pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
    dVar11 = (double)param_1[0x12];
    dVar39 = (double)param_1[0x13];
    dVar35 = *pdVar32 * dVar11;
    dVar15 = pdVar32[1] * dVar39;
    dVar43 = (double)param_1[0x14];
    dVar40 = *(double *)(lVar9 + 0x10 + uVar26 * 0x18) * dVar43;
    dVar41 = (double)param_1[0xd];
    dVar38 = (double)param_1[0xd];
    dVar44 = (double)param_1[10];
    dVar17 = (double)param_1[0xb];
    dVar18 = (double)param_1[0xc];
    dVar45 = dVar15 * dVar44 - dVar35 * dVar17;
    dVar46 = dVar40 * dVar17 - dVar15 * dVar18;
    dVar47 = dVar35 * dVar18 - dVar40 * dVar44;
    dVar46 = dVar46 + dVar46;
    dVar47 = dVar47 + dVar47;
    dVar45 = dVar45 + dVar45;
    dVar50 = *pdVar1 * dVar11;
    dVar51 = pdVar1[1] * dVar39;
    dVar14 = *(double *)(lVar10 + 0x10 + uVar27 * 0x18) * dVar43;
    dVar34 = dVar51 * dVar44 - dVar17 * dVar50;
    dVar37 = dVar14 * dVar17 - dVar18 * dVar51;
    dVar12 = dVar50 * dVar18 - dVar44 * dVar14;
    dVar37 = dVar37 + dVar37;
    dVar12 = dVar12 + dVar12;
    dVar34 = dVar34 + dVar34;
    dVar11 = dVar11 * *pdVar2;
    dVar39 = dVar39 * pdVar2[1];
    dVar43 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18) * dVar43;
    dVar48 = dVar39 * dVar44 - dVar17 * dVar11;
    dVar49 = dVar43 * dVar17 - dVar18 * dVar39;
    dVar36 = dVar11 * dVar18 - dVar44 * dVar43;
    dVar49 = dVar49 + dVar49;
    dVar36 = dVar36 + dVar36;
    dVar48 = dVar48 + dVar48;
    dVar13 = (double)param_1[0xe];
    dVar16 = (double)param_1[0xf];
    local_278 = (dVar45 * dVar17 - dVar47 * dVar18) + dVar41 * dVar46 + dVar35 + dVar13;
    dStack_270 = (dVar18 * dVar46 - dVar44 * dVar45) + dVar38 * dVar47 + dVar15 + dVar16;
    dVar35 = (dVar34 * dVar17 - dVar12 * dVar18) + dVar41 * dVar37 + dVar50 + dVar13;
    dVar15 = (dVar18 * dVar37 - dVar44 * dVar34) + dVar38 * dVar12 + dVar51 + dVar16;
    dVar13 = (dVar48 * dVar17 - dVar36 * dVar18) + dVar41 * dVar49 + dVar11 + dVar13;
    dVar16 = (dVar18 * dVar49 - dVar44 * dVar48) + dVar38 * dVar36 + dVar39 + dVar16;
    local_2a8[0] = (double)param_1[0x10];
    local_268 = dVar45 * dVar41 + dVar40 + (dVar47 * dVar44 - dVar46 * dVar17) + local_2a8[0];
    local_288 = dVar34 * dVar41 + dVar14 + (dVar12 * dVar44 - dVar37 * dVar17) + local_2a8[0];
    local_2a8[0] = dVar48 * dVar41 + dVar43 + (dVar36 * dVar44 - dVar49 * dVar17) + local_2a8[0];
    local_298._8_4_ = SUB84(dVar15,0);
    local_298._0_8_ = dVar35;
    local_298._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    dVar38 = (local_268 - local_2c8) * (local_268 - local_2c8) +
             (local_278 - local_198) * (local_278 - local_198) +
             (dStack_270 - local_2d0) * (dStack_270 - local_2d0);
    dVar35 = dVar35 - local_198;
    dVar35 = (local_288 - local_2c8) * (local_288 - local_2c8) +
             dVar35 * dVar35 + (dVar15 - local_2d0) * (dVar15 - local_2d0);
    dVar41 = dVar35;
    if (dVar38 <= dVar35) {
      dVar41 = dVar38;
    }
    dVar45 = dVar13 - local_198;
    local_2b8._8_4_ = SUB84(dVar16,0);
    local_2b8._0_8_ = dVar13;
    local_2b8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    pdVar32 = &local_278;
    if (dVar35 < dVar38) {
      pdVar32 = (double *)local_298;
    }
    if ((local_2a8[0] - local_2c8) * (local_2a8[0] - local_2c8) +
        dVar45 * dVar45 + (dVar16 - local_2d0) * (dVar16 - local_2d0) < dVar41) {
      pdVar32 = (double *)local_2b8;
    }
    local_2c0 = lVar6;
    dStack_190 = local_2d0;
    local_188 = local_2c8;
    cVar20 = FUN_1485565cf(lVar29 + 0xd0,pdVar33,pdVar32,SUB84((double)*(float *)(lVar29 + 0x120),0)
                          );
    if (cVar20 == '\0') {
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = (undefined **)0x0;
      lStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = 0;
      uStack_210 = 0.0;
      local_1b8 = 0;
      local_1b0 = *param_2;
      dStack_1a8 = param_2[1];
      local_1a0 = param_2[2];
      *param_3 = 0x3f80000000000000;
      puVar30 = &local_218;
      puVar31 = param_3 + 1;
      for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
        *puVar31 = *puVar30;
        puVar30 = puVar30 + 1;
        puVar31 = puVar31 + 1;
      }
      param_3[0x13] = local_188;
      param_3[0x11] = local_198;
      param_3[0x12] = dStack_190;
      param_3[0x14] = 0xffffffff00000000;
      param_3[0x19] = 0;
      param_3[0x17] = 0;
      param_3[0x18] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      *(undefined4 *)(param_3 + 0x1a) = 0xffffffff;
      param_3[0x1e] = 0;
      param_3[0x1f] = 0;
      *(undefined8 *)((longlong)param_3 + 0xe4) = 0;
      *(undefined8 *)((longlong)param_3 + 0xec) = 0;
      *(undefined8 *)((longlong)param_3 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_3 + 0xdc) = 0;
      uVar22 = 1;
    }
    else {
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = (undefined **)0x0;
      lStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = 0;
      uStack_210 = 0.0;
      local_1b8 = 0;
      local_1b0 = *param_2;
      dStack_1a8 = param_2[1];
      local_1a0 = param_2[2];
      *param_3 = 0x3f80000000000000;
      puVar30 = &local_218;
      puVar31 = param_3 + 1;
      for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
        *puVar31 = *puVar30;
        puVar30 = puVar30 + 1;
        puVar31 = puVar31 + 1;
      }
      param_3[0x13] = pdVar32[2];
      dVar38 = pdVar32[1];
      param_3[0x11] = *pdVar32;
      param_3[0x12] = dVar38;
      param_3[0x14] = 0xffffffff00000000;
      param_3[0x19] = 0;
      param_3[0x17] = 0;
      param_3[0x18] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      *(undefined4 *)(param_3 + 0x1a) = 0xffffffff;
      param_3[0x1e] = 0;
      param_3[0x1f] = 0;
      *(undefined8 *)((longlong)param_3 + 0xe4) = 0;
      *(undefined8 *)((longlong)param_3 + 0xec) = 0;
      *(undefined8 *)((longlong)param_3 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_3 + 0xdc) = 0;
      uVar22 = 2;
      pdVar33 = pdVar32;
    }
    local_1b8 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    uStack_1d0 = 0;
    local_1d8 = 0;
    uStack_1e0 = 0;
    local_1e8 = 0;
    lStack_1f0 = 0;
    local_1f8 = (undefined **)0x0;
    uStack_200 = 0;
    local_208 = 0;
    uStack_210 = 0.0;
    local_218 = 0;
    param_3[7] = pdVar33[2];
    dVar38 = pdVar33[1];
    param_3[5] = *pdVar33;
    param_3[6] = dVar38;
    *(undefined4 *)(param_3 + 0x15) = uVar22;
    *(float *)(param_3 + 1) =
         (float)(((double)param_3[7] - param_2[2]) * param_2[5] +
                ((double)param_3[5] - *param_2) * param_2[3] +
                ((double)param_3[6] - param_2[1]) * param_2[4]);
    FUN_146c13dec(local_2c0,&local_218,local_254);
    param_3[0xd] = local_208;
    *(undefined4 *)(param_3 + 0xb) = (undefined4)local_218;
    *(undefined4 *)((longlong)param_3 + 0x5c) = local_218._4_4_;
    *(undefined4 *)(param_3 + 0xc) = (undefined4)uStack_210;
    *(undefined4 *)((longlong)param_3 + 100) = uStack_210._4_4_;
  }
  if (local_148 != (code *)0x0) {
    pppuVar28 = local_138;
    if (local_138 == (undefined ***)0x0) {
      pppuVar28 = &local_128;
    }
    (*(code *)(*pppuVar28)[2])();
  }
  if ((local_f0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9858a FUN_143b9858a body=29 status=ok
// SIG undefined FUN_143b9858a(void)

void FUN_143b9858a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b985a8 FUN_143b985a8 body=71 status=ok
// SIG undefined FUN_143b985a8(void)

undefined8 * FUN_143b985a8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14af12200;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b985f0 FUN_143b985f0 body=104 status=ok
// SIG undefined FUN_143b985f0(void)

void FUN_143b985f0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *param_2;
  lVar1 = *param_1;
  pcVar2 = *(code **)(lVar1 + 0x90);
  plVar4 = (longlong *)(lVar1 + 0xb0);
  if (*(longlong **)(lVar1 + 0xa0) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0xa0);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b98678 FUN_143b98678 body=12 status=ok
// SIG undefined FUN_143b98678(void)

void FUN_143b98678(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143b98681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143b98684 FUN_143b98684 body=29 status=ok
// SIG undefined FUN_143b98684(void)

undefined8 FUN_143b98684(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b986a2 FUN_143b986a2 body=676 status=ok
// SIG undefined FUN_143b986a2(void)

undefined8
FUN_143b986a2(longlong *param_1,double *param_2,double *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  double *pdVar6;
  longlong *plVar7;
  double *pdVar8;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8 [14];
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138 [2];
  longlong local_128 [10];
  double *local_d8;
  double *local_d0;
  undefined2 local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [72];
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1f0 = *param_5;
  uVar2 = *param_4;
  param_1 = (longlong *)*param_1;
  local_140 = param_2[5] + param_2[2];
  local_148 = param_2[4] + param_2[1];
  local_150 = param_2[3] + *param_2;
  local_50 = 0;
  local_a0 = 0;
  local_138[0] = (**(code **)(*param_1 + 8))(param_1);
  plVar5 = param_1 + 0x1a;
  plVar7 = local_128;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar7 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar7 = plVar7 + 1;
  }
  local_d0 = &local_168;
  local_c8 = 0x101;
  local_c0 = (double)*(float *)(param_1 + 0x24);
  local_a8 = local_98;
  local_b0 = local_1f0;
  local_d8 = &local_150;
  local_b8 = uVar2;
  cVar1 = FUN_148557117(local_138);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    local_1f8 = 0;
    cVar1 = FUN_1485502e2(uVar3,param_3,param_2,uVar2);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_143b988e1;
    }
    *(undefined4 *)(param_3 + 0x15) = 1;
  }
  else {
    local_1e8[10] = 0.0;
    local_1e8[0xb] = 0.0;
    local_1e8[8] = 0.0;
    local_1e8[9] = 0.0;
    local_1e8[6] = 0.0;
    local_1e8[7] = 0.0;
    local_1e8[4] = 0.0;
    local_1e8[5] = 0.0;
    local_1e8[2] = 0.0;
    local_1e8[3] = 0.0;
    local_1e8[0] = 0.0;
    local_1e8[1] = 0.0;
    local_1e8[0xc] = 0.0;
    local_1e8[0xd] = *param_2;
    dStack_178 = param_2[1];
    local_170 = param_2[2];
    *param_3 = 0.0078125;
    pdVar6 = local_1e8;
    pdVar8 = param_3;
    for (lVar4 = 0x10; pdVar8 = pdVar8 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
      *pdVar8 = *pdVar6;
      pdVar6 = pdVar6 + 1;
    }
    param_3[0x13] = local_158;
    param_3[0x11] = local_168;
    param_3[0x12] = dStack_160;
    param_3[0x14] = -NAN;
    param_3[0x15] = 0.0;
    param_3[0x16] = 0.0;
    param_3[0x17] = 0.0;
    param_3[0x18] = 0.0;
    param_3[0x19] = 0.0;
    *(undefined4 *)(param_3 + 0x1a) = 0xffffffff;
    *(undefined8 *)((longlong)param_3 + 0xd4) = 0;
    *(undefined8 *)((longlong)param_3 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_3 + 0xe4) = 0;
    *(undefined8 *)((longlong)param_3 + 0xec) = 0;
    param_3[0x1e] = 0.0;
    param_3[0x1f] = 0.0;
    param_3[7] = local_158;
    param_3[5] = local_168;
    param_3[6] = dStack_160;
    *(float *)(param_3 + 1) =
         (float)((param_3[7] - param_2[2]) * param_2[5] +
                (param_3[5] - *param_2) * param_2[3] + (param_3[6] - param_2[1]) * param_2[4]);
    *(uint *)(param_3 + 0x15) = local_50 == 1 ^ 3;
  }
  uVar2 = 1;
LAB_143b988e1:
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9895e FUN_143b9895e body=29 status=ok
// SIG undefined FUN_143b9895e(void)

undefined8 FUN_143b9895e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b98a14 FUN_143b98a14 body=29 status=ok
// SIG undefined FUN_143b98a14(void)

undefined8 FUN_143b98a14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b98a70 FUN_143b98a70 body=29 status=ok
// SIG undefined FUN_143b98a70(void)

undefined8 FUN_143b98a70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b98ac0 FUN_143b98ac0 body=29 status=ok
// SIG undefined FUN_143b98ac0(void)

undefined8 FUN_143b98ac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b98b10 FUN_143b98b10 body=29 status=ok
// SIG undefined FUN_143b98b10(void)

undefined8 FUN_143b98b10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b98b6c FUN_143b98b6c body=101 status=ok
// SIG undefined FUN_143b98b6c(void)

void FUN_143b98b6c(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x130) = 1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14af12750;
  puVar1[2] = param_1;
  if (DAT_14c8442c0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b98bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c8442c0 + 0x18))(DAT_14c8442c0,puVar1,3,*(code **)(*DAT_14c8442c0 + 0x18));
    return;
  }
  FUN_143b98bd2(puVar1);
  return;
}



// FUNCTION 143b98bd2 FUN_143b98bd2 body=77 status=ok
// SIG undefined FUN_143b98bd2(void)

void FUN_143b98bd2(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_140187fa0(param_1[2],1,0);
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b98c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143b98c3e FUN_143b98c3e body=34 status=ok
// SIG undefined FUN_143b98c3e(void)

void FUN_143b98c3e(undefined8 *param_1,undefined8 param_2)

{
  FUN_146c005f0(*param_1,param_2,1,1,1,1);
  return;
}



// FUNCTION 143b98c60 FUN_143b98c60 body=34 status=ok
// SIG undefined FUN_143b98c60(void)

void FUN_143b98c60(undefined8 *param_1,undefined8 param_2)

{
  FUN_146c005f0(*param_1,param_2,1,1,1,1);
  return;
}



// FUNCTION 143b98c82 FUN_143b98c82 body=57 status=ok
// SIG undefined FUN_143b98c82(void)

void FUN_143b98c82(undefined8 *param_1,undefined8 param_2)

{
  FUN_146c017fa(param_2,*param_1,1,1,1,1,0);
  FUN_146c3d852(param_2);
  return;
}



// FUNCTION 143b98cbc FUN_143b98cbc body=37 status=ok
// SIG undefined FUN_143b98cbc(void)

void FUN_143b98cbc(undefined8 *param_1,undefined8 param_2)

{
  FUN_146c005f0(*(undefined8 *)*param_1,param_2,1,1,1,1);
  return;
}



// FUNCTION 143b98ce2 FUN_143b98ce2 body=81 status=ok
// SIG undefined FUN_143b98ce2(void)

void FUN_143b98ce2(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)param_1[2];
  uVar1 = (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
  *(undefined1 *)*param_1 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b98d38 FUN_143b98d38 body=238 status=ok
// SIG undefined FUN_143b98d38(void)

void FUN_143b98d38(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined1 local_b0;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)*param_1;
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    local_68[0] = (code *)CONCAT44(local_68[0]._4_4_,*(undefined4 *)(param_3 + 0x14));
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_68,param_4);
  }
  FUN_146bccf46(param_1[1]);
  local_80 = param_1[3];
  local_b8 = local_68;
  local_58 = 0;
  local_48 = &PTR_LAB_14af12940;
  local_68[0] = FUN_143b98e28;
  local_98 = 0;
  local_88 = &PTR_LAB_14af12960;
  local_a8 = FUN_143b98f32;
  local_b0 = 0;
  local_40 = local_80;
  FUN_146bcbbdc(param_1[2],param_4,param_1[1]);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b98e28 FUN_143b98e28 body=192 status=ok
// SIG undefined FUN_143b98e28(void)

undefined4 *
FUN_143b98e28(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  local_58 = *(undefined8 *)(param_4 + 4);
  local_68 = *param_4;
  uStack_64 = param_4[1];
  uStack_60 = param_4[2];
  uStack_5c = param_4[3];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      FUN_146c5cfa8(lVar1,&local_48,&local_68);
      local_58 = local_38;
      local_68 = local_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 4) = local_58;
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b98f14 FUN_143b98f14 body=29 status=ok
// SIG undefined FUN_143b98f14(void)

undefined8 FUN_143b98f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b98f32 FUN_143b98f32 body=234 status=ok
// SIG undefined FUN_143b98f32(void)

double * FUN_143b98f32(double *param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  dVar4 = *param_4;
  dVar5 = param_4[1];
  dVar3 = param_4[2];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b99048 FUN_143b99048 body=29 status=ok
// SIG undefined FUN_143b99048(void)

undefined8 FUN_143b99048(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b99069 FUN_143b99069 body=3076 status=ok
// SIG undefined FUN_143b99069(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b99069(void)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined1 local_7c [4];
  wchar_t *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cb4c9dc);
  if (cVar1 == '\0') {
    _DAT_14cb4c9dc = 0;
    uRam000000014cb4c9e4 = 0;
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af00570,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af01990,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af026f0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af02ac0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af04d50,2,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af05e50,1,&PTR_FUN_14af05e00);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14af06930;
  local_98 = 0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af06950,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af06d70,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af07680,1,0);
  local_78 = L"CollisionPrimitiveDeselection";
  local_70 = 0x1d;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCollisionPrimitivesMechanic";
  local_70 = 0x1c;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Collision Primitive Deselection";
  local_70 = 0x1f;
  FUN_140208c1e(&DAT_14cb4cc00,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83e22);
  local_78 = L"CollisionPrimitiveSelection";
  local_70 = 0x1b;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCollisionPrimitivesMechanic";
  local_70 = 0x1c;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Collision Primitive Selection";
  local_70 = 0x1d;
  FUN_140208c1e(&DAT_14cb4cc10,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83e36);
  local_78 = L"CollisionPrimitiveGeometryChange";
  local_70 = 0x20;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCollisionPrimitivesMechanic";
  local_70 = 0x1c;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Collision Primitive Geometry Change";
  local_70 = 0x23;
  FUN_140208c1e(&DAT_14cb4cc20,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83e4a);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af080c0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af087c0,1,0);
  local_78 = L"PointAddition";
  local_70 = 0xd;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCurveControlPointsMechanic";
  local_70 = 0x1b;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Point Addition";
  local_70 = 0xe;
  FUN_140208c1e(&DAT_14cb4cc60,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83f5a);
  local_78 = L"PointDeletion";
  local_70 = 0xd;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCurveControlPointsMechanic";
  local_70 = 0x1b;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Point Deletion";
  local_70 = 0xe;
  FUN_140208c1e(&DAT_14cb4cc70,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83f6e);
  local_78 = L"PointDeselection";
  local_70 = 0x10;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCurveControlPointsMechanic";
  local_70 = 0x1b;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Point Deselection";
  local_70 = 0x11;
  FUN_140208c1e(&DAT_14cb4cc80,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83f82);
  local_78 = L"PointSelection";
  local_70 = 0xe;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCurveControlPointsMechanic";
  local_70 = 0x1b;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Point Selection";
  local_70 = 0xf;
  FUN_140208c1e(&DAT_14cb4cc90,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83f96);
  local_78 = L"PointMovement";
  local_70 = 0xd;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCurveControlPointsMechanic";
  local_70 = 0x1b;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Point Movement";
  local_70 = 0xe;
  FUN_140208c1e(&DAT_14cb4cca0,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83faa);
  local_78 = L"InitializationCompleted";
  local_70 = 0x17;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UCurveControlPointsMechanic";
  local_70 = 0x1b;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"InitializationCompleted";
  local_70 = 0x17;
  FUN_140208c1e(&DAT_14cb4ccb0,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b83fbe);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af092e0,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af098d0,1,0);
  local_78 = L"LatticePointDeselection";
  local_70 = 0x17;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"ULatticeControlPointsMechanic";
  local_70 = 0x1d;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Lattice Point Deselection";
  local_70 = 0x19;
  FUN_140208c1e(&DAT_14cb4cd08,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b8409a);
  local_78 = L"LatticePointSelection";
  local_70 = 0x15;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"ULatticeControlPointsMechanic";
  local_70 = 0x1d;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Lattice Point Selection";
  local_70 = 0x17;
  FUN_140208c1e(&DAT_14cb4cd18,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b840ae);
  local_78 = L"LatticePointMovement";
  local_70 = 0x14;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"ULatticeControlPointsMechanic";
  local_70 = 0x1d;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Lattice Point Movement";
  local_70 = 0x16;
  FUN_140208c1e(&DAT_14cb4cd28,local_7c,&local_64);
  atexit((_func_5014 *)&LAB_143b840c2);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af09ef0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af0a5a0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af0ae90,2,0);
  local_88 = 3;
  ppuStack_90 = &PTR_FUN_14af0bc10;
  local_98 = 0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af0bc70,2,0);
  local_78 = L"PointDeselection";
  local_70 = 0x10;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"USpaceCurveDeformationMechanic";
  local_70 = 0x1e;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Point Deselection";
  local_70 = 0x11;
  FUN_140208c1e(&DAT_14cb4ce10,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b8431c);
  local_78 = L"PointSelection";
  local_70 = 0xe;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"USpaceCurveDeformationMechanic";
  local_70 = 0x1e;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Point Selection";
  local_70 = 0xf;
  FUN_140208c1e(&DAT_14cb4ce20,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b84330);
  local_78 = L"PointMovement";
  local_70 = 0xd;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"USpaceCurveDeformationMechanic";
  local_70 = 0x1e;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Point Movement";
  local_70 = 0xe;
  FUN_140208c1e(&DAT_14cb4ce30,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_143b84344);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af0c1a0,1,0);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af0c760,1,0);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb4ce70,L"modeling.MaxBackgroundTasksOverride",&local_78,
                L"Optional override for maximum allowed background tasks when generating preview results in tools. 0 to use default values. [def: 0]"
               );
  atexit(FUN_143b84358);
  local_78 = (wchar_t *)0x800000014af0caa6;
  local_64 = 0x12;
  local_70 = FUN_14577453c(L"ModelingComponents",&local_64);
  local_6c = 1;
  FUN_14649433e(&local_78);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14af0d580;
  local_98 = 0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af0d5a0,2,0);
  local_88 = 3;
  ppuStack_90 = &PTR_FUN_14af0f350;
  local_98 = 8;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af0f4f0,1,&PTR_FUN_14af0f3b0);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb4d018,L"modeling.CreateMesh.IgnoreProjectSettings",&local_78,
                L"If enabled, do not use the preferences set in Modeling Tools\' Project Settings when constructing new mesh objects"
               );
  atexit(FUN_143b84b9d);
  local_78 = (wchar_t *)CONCAT71(local_78._1_7_,1);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb4d030,L"modeling.CapturePostEditChangeInTransactions",&local_78,
                L"When true, PostEditChange will be included in tool-target based tool transactions."
               );
  atexit(FUN_143b84be2);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b99cc5 FUN_143b99cc5 body=55 status=ok
// SIG undefined FUN_143b99cc5(void)

void FUN_143b99cc5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4d6c8 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4d6c8 = FUN_14171c317(FUN_146495099,uVar1,L"EHandleSourcesMethod");
  }
  return;
}



// FUNCTION 143b99cfc FUN_143b99cfc body=69 status=ok
// SIG undefined FUN_143b99cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b99cfc(void)

{
  _DAT_14cb4d768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b99d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4d770,1);
  return;
}



// FUNCTION 143b99d41 FUN_143b99d41 body=1354 status=ok
// SIG undefined FUN_143b99d41(void)

void FUN_143b99d41(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char cVar19;
  undefined1 uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong lVar24;
  int iVar25;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  code *local_128;
  code *local_120;
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_1 != 0) {
    if (DAT_14cad3688 == 0) {
      local_130 = &local_f8;
      local_f8 = FUN_144b223ce;
      local_120 = FUN_14081d0ea;
      local_128 = (code *)&LAB_1417963e0;
      local_138 = &LAB_147a2f4c9;
      local_140 = &LAB_1400ea6f8;
      local_148 = L"Engine";
      local_150 = 0x200000000000;
      local_158 = 0x10000004;
      local_160 = 0x10;
      local_168 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) {
      lVar24 = *(longlong *)(param_1 + 0x660);
      if ((lVar24 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar24);
      }
      else if (lVar24 == 0) goto LAB_143b99dbe;
      plVar22 = (longlong *)FUN_14001cc68(0xe0,0x10);
      plVar22[1] = 4;
      plVar22[0x18] = 0;
      plVar22[0x19] = 0x200000000;
      *(undefined1 *)(plVar22 + 0x1a) = 0;
      plVar22[0x1b] = 0;
      *plVar22 = param_1;
      plVar22[2] = lVar24;
      *(undefined4 *)(plVar22 + 3) = 0;
      if (DAT_14cac1d70 == 0) {
        local_130 = &local_f8;
        local_f8 = FUN_144b223ce;
        local_120 = FUN_14081d0ea;
        local_128 = FUN_1432411d6;
        local_138 = &LAB_147878f54;
        local_140 = &LAB_1417ad3ba;
        local_148 = L"Engine";
        local_150 = 0;
        local_158 = 0x10000004;
        local_160 = 0x10;
        local_168 = 0xb10;
        FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da
                     );
      }
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cac1d70 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8) != DAT_14cac1d70 + 0x30)) {
        plVar22[1] = 0;
        uVar3 = *(undefined4 *)(param_1 + 0x240);
        uVar4 = *(undefined4 *)(param_1 + 0x244);
        uVar5 = *(undefined4 *)(param_1 + 0x248);
        uVar6 = *(undefined4 *)(param_1 + 0x24c);
        uVar7 = *(undefined4 *)(param_1 + 0x250);
        uVar8 = *(undefined4 *)(param_1 + 0x254);
        uVar9 = *(undefined4 *)(param_1 + 600);
        uVar10 = *(undefined4 *)(param_1 + 0x25c);
        uVar11 = *(undefined4 *)(param_1 + 0x260);
        uVar12 = *(undefined4 *)(param_1 + 0x264);
        uVar13 = *(undefined4 *)(param_1 + 0x268);
        uVar14 = *(undefined4 *)(param_1 + 0x26c);
        uVar15 = *(undefined4 *)(param_1 + 0x280);
        uVar16 = *(undefined4 *)(param_1 + 0x284);
        uVar17 = *(undefined4 *)(param_1 + 0x288);
        uVar18 = *(undefined4 *)(param_1 + 0x28c);
        lVar24 = *(longlong *)(param_1 + 0x290);
        lVar1 = *(longlong *)(param_1 + 0x270);
        *(undefined4 *)(plVar22 + 0x19) = 1;
        *(undefined4 *)(plVar22 + 4) = uVar3;
        *(undefined4 *)((longlong)plVar22 + 0x24) = uVar4;
        *(undefined4 *)(plVar22 + 5) = uVar5;
        *(undefined4 *)((longlong)plVar22 + 0x2c) = uVar6;
        *(undefined4 *)(plVar22 + 6) = uVar7;
        *(undefined4 *)((longlong)plVar22 + 0x34) = uVar8;
        *(undefined4 *)(plVar22 + 7) = uVar9;
        *(undefined4 *)((longlong)plVar22 + 0x3c) = uVar10;
        *(undefined4 *)(plVar22 + 8) = uVar11;
        *(undefined4 *)((longlong)plVar22 + 0x44) = uVar12;
        *(undefined4 *)(plVar22 + 9) = uVar13;
        *(undefined4 *)((longlong)plVar22 + 0x4c) = uVar14;
        plVar22[10] = lVar1;
        *(undefined4 *)(plVar22 + 0xb) = uVar15;
        *(undefined4 *)((longlong)plVar22 + 0x5c) = uVar16;
        *(undefined4 *)(plVar22 + 0xc) = uVar17;
        *(undefined4 *)((longlong)plVar22 + 100) = uVar18;
        plVar22[0xd] = lVar24;
        uVar20 = FUN_14851f06c(plVar22 + 4);
        *(undefined1 *)(plVar22 + 0x1a) = uVar20;
        iVar2 = *(int *)(param_2 + 0x10);
        *(uint *)(param_2 + 0x10) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x14) < iVar2 + 1U) {
          FUN_1485444bc((longlong *)(param_2 + 8),iVar2);
        }
        *(longlong **)(*(longlong *)(param_2 + 8) + (longlong)iVar2 * 8) = plVar22;
      }
      else {
        *(undefined4 *)(plVar22 + 1) = 1;
        iVar2 = *(int *)(param_1 + 0x728);
        if (0 < iVar2) {
          local_100 = plVar22 + 2;
          local_108 = (longlong *)(param_2 + 8);
          iVar25 = 0;
          do {
            if (iVar25 < *(int *)(param_1 + 0x728)) {
              local_f8 = (code *)0x0;
              uStack_f0 = 0;
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
              cVar19 = FUN_1410499a6(param_1,iVar25,&local_f8,1);
              if (cVar19 != '\0') {
                plVar23 = (longlong *)FUN_14001cc68(0xe0,0x10);
                plVar23[0x18] = 0;
                *(undefined4 *)((longlong)plVar23 + 0xcc) = 2;
                *(undefined1 *)(plVar23 + 0x1a) = 0;
                plVar23[0x1b] = 0;
                *plVar23 = *plVar22;
                lVar24 = local_100[1];
                plVar23[2] = *local_100;
                plVar23[3] = lVar24;
                *(int *)(plVar23 + 1) = (int)plVar22[1];
                *(int *)((longlong)plVar23 + 0xc) = iVar25;
                *(undefined4 *)(plVar23 + 0x19) = 1;
                *(undefined4 *)(plVar23 + 4) = (undefined4)local_f8;
                *(undefined4 *)((longlong)plVar23 + 0x24) = local_f8._4_4_;
                *(undefined4 *)(plVar23 + 5) = (undefined4)uStack_f0;
                *(undefined4 *)((longlong)plVar23 + 0x2c) = uStack_f0._4_4_;
                *(undefined4 *)(plVar23 + 6) = local_e8;
                *(undefined4 *)((longlong)plVar23 + 0x34) = uStack_e4;
                *(undefined4 *)(plVar23 + 7) = uStack_e0;
                *(undefined4 *)((longlong)plVar23 + 0x3c) = uStack_dc;
                *(undefined4 *)(plVar23 + 8) = (undefined4)local_d8;
                *(undefined4 *)((longlong)plVar23 + 0x44) = local_d8._4_4_;
                *(undefined4 *)(plVar23 + 9) = (undefined4)uStack_d0;
                *(undefined4 *)((longlong)plVar23 + 0x4c) = uStack_d0._4_4_;
                plVar23[10] = local_c8;
                *(undefined4 *)(plVar23 + 0xb) = (undefined4)local_b8;
                *(undefined4 *)((longlong)plVar23 + 0x5c) = local_b8._4_4_;
                *(undefined4 *)(plVar23 + 0xc) = (undefined4)uStack_b0;
                *(undefined4 *)((longlong)plVar23 + 100) = uStack_b0._4_4_;
                plVar23[0xd] = local_a8;
                uVar20 = FUN_14851f06c(plVar23 + 4);
                *(undefined1 *)(plVar23 + 0x1a) = uVar20;
                lVar24 = (longlong)*(int *)(param_2 + 0x10);
                uVar21 = *(int *)(param_2 + 0x10) + 1;
                *(uint *)(param_2 + 0x10) = uVar21;
                if (*(uint *)(param_2 + 0x14) < uVar21) {
                  local_110 = lVar24;
                  FUN_1485444bc(local_108,lVar24);
                  lVar24 = local_110;
                }
                *(longlong **)(*local_108 + lVar24 * 8) = plVar23;
              }
            }
            iVar25 = iVar25 + 1;
          } while (iVar2 != iVar25);
        }
        if (plVar22 != (longlong *)0x0) {
          if (plVar22[0x18] != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar22);
        }
      }
    }
  }
LAB_143b99dbe:
  if ((local_90 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b9a28c FUN_143b9a28c body=6646 status=ok
// SIG undefined FUN_143b9a28c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b9a28c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  _RTL_CRITICAL_SECTION *p_Var10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  DWORD DVar18;
  DWORD DVar19;
  undefined8 *puVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  PRTL_CRITICAL_SECTION_DEBUG p_Var24;
  undefined8 *puVar25;
  longlong *plVar26;
  int *piVar27;
  undefined8 *puVar28;
  int iVar29;
  ulonglong uVar30;
  longlong *plVar31;
  int *piVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  uint uVar38;
  longlong *plVar39;
  longlong *plVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  longlong lVar44;
  int *piVar45;
  int *piVar46;
  undefined8 *puVar47;
  longlong lVar48;
  int *piVar49;
  int *piVar50;
  longlong *plVar51;
  undefined4 *puVar52;
  longlong *plVar53;
  longlong *plVar54;
  int *piVar55;
  ulonglong uVar56;
  longlong lVar57;
  longlong *plVar58;
  undefined8 *puVar59;
  bool bVar60;
  float fVar61;
  undefined1 auStack_578 [40];
  int local_550;
  longlong *local_548;
  longlong local_538;
  longlong *local_530;
  char *local_528;
  longlong local_520;
  longlong *local_518;
  longlong *local_510;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  PRTL_CRITICAL_SECTION_DEBUG *local_4f8;
  LPCRITICAL_SECTION local_4f0;
  PRTL_CRITICAL_SECTION_DEBUG local_4e8;
  undefined8 uStack_4e0;
  PRTL_CRITICAL_SECTION_DEBUG local_4d8;
  ulonglong uStack_4d0;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined1 local_498 [16];
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined1 local_468 [36];
  uint uStack_444;
  undefined8 *local_440;
  _RTL_CRITICAL_SECTION local_438;
  undefined1 local_410 [40];
  _RTL_CRITICAL_SECTION_DEBUG local_3e8;
  undefined1 local_3b8 [8];
  undefined8 uStack_3b0;
  char *local_3a8;
  undefined4 *local_3a0;
  undefined4 *local_398;
  char *local_390;
  undefined1 *local_388;
  PRTL_CRITICAL_SECTION_DEBUG **local_380;
  undefined4 *local_378;
  undefined4 *local_370;
  undefined4 *local_368;
  undefined1 *local_360;
  LPCRITICAL_SECTION local_358;
  undefined4 *local_350;
  undefined4 *local_348;
  undefined4 *local_340;
  undefined4 *local_338;
  undefined4 *local_330;
  longlong local_328;
  undefined4 *local_320;
  undefined4 *local_318;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_520 = param_1 + 0x28;
  iVar13 = *(int *)(param_1 + 0x40);
  iVar15 = iVar13;
  local_538 = param_1;
  local_528 = param_2;
  if (iVar13 == 0) {
    uVar30 = 1;
    uVar56 = 0;
    iVar29 = 0;
    iVar12 = 0;
  }
  else {
    lVar57 = *(longlong *)(param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar57 = local_520;
    }
    uVar38 = *(uint *)lVar57;
    if (uVar38 == 0) {
      iVar12 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar12 = iVar13 + -1;
      }
      uVar56 = 0;
      uVar30 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar30 = uVar56;
      }
      iVar29 = 0;
      do {
        if (uVar30 == uVar56) goto LAB_143b9a359;
        iVar29 = iVar29 + 0x20;
        uVar38 = *(uint *)(lVar57 + 4U + uVar56 * 4);
        uVar56 = uVar56 + 1;
      } while (uVar38 == 0);
    }
    else {
      uVar56 = 0;
      iVar29 = 0;
    }
    uVar30 = (ulonglong)(-uVar38 & uVar38);
    uVar2 = uVar30 * 2 + 1;
    lVar57 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar57 == 0; lVar57 = lVar57 + -1) {
      }
    }
    iVar12 = (iVar29 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar12) {
      iVar12 = iVar13;
    }
  }
  if (iVar12 != iVar13) {
    uVar38 = 0xffffffff;
    do {
      lVar57 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar12 * 0x20U + 8);
      plVar40 = *(longlong **)(*(longlong *)(param_1 + 0x18) + ((longlong)iVar12 * 2 + 1) * 0x10);
      if (plVar40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
        UNLOCK();
      }
      if ((*(int *)(lVar57 + 8) == 0) && (lVar48 = *(longlong *)lVar57, lVar48 != 0)) {
        lVar44 = FUN_14001cc68(0x40,0x10);
        *(undefined8 *)(lVar44 + 8) = 0;
        *(undefined8 *)(lVar44 + 0x10) = 0;
        *(undefined8 *)(lVar44 + 0x18) = 0;
        *(undefined8 *)(lVar44 + 0x20) = 0;
        *(undefined4 *)(lVar44 + 0x10) = 1;
        *(undefined8 *)(lVar44 + 0x28) = 0;
        *(undefined8 *)(lVar44 + 0x30) = 0;
        *(undefined8 *)(lVar44 + 0x38) = 0;
        *(undefined ***)lVar44 = &PTR_FUN_14af17110;
        uVar4 = *(undefined4 *)(lVar57 + 4);
        uVar5 = *(undefined4 *)(lVar57 + 8);
        uVar6 = *(undefined4 *)(lVar57 + 0xc);
        *(undefined4 *)(lVar44 + 8) = *(undefined4 *)lVar57;
        *(undefined4 *)(lVar44 + 0xc) = uVar4;
        *(undefined4 *)(lVar44 + 0x10) = uVar5;
        *(undefined4 *)(lVar44 + 0x14) = uVar6;
        *(longlong *)(lVar44 + 0x18) = lVar48;
        param_1 = local_538;
      }
      else {
        lVar44 = 0;
      }
      lVar48 = *(longlong *)(lVar57 + 0x28);
      *(longlong *)(lVar57 + 0x28) = lVar44;
      if (lVar48 != 0) {
        (*(code *)**(undefined8 **)lVar48)(lVar48,1);
        param_1 = local_538;
      }
      iVar15 = *(int *)(lVar57 + 0x18);
      if ((longlong)iVar15 != 0) {
        lVar48 = *(longlong *)(lVar57 + 0x10);
        uVar3 = *(undefined8 *)(lVar57 + 0x28);
        lVar57 = 0;
        do {
          *(undefined8 *)(*(longlong *)(lVar48 + lVar57) + 0xd8) = uVar3;
          lVar57 = lVar57 + 8;
        } while ((longlong)iVar15 * 8 != lVar57);
      }
      if (plVar40 != (longlong *)0x0) {
        LOCK();
        plVar53 = plVar40 + 1;
        *(int *)plVar53 = (int)*plVar53 + -1;
        UNLOCK();
        if ((int)*plVar53 == 0) {
          (**(code **)*plVar40)(plVar40);
          LOCK();
          piVar45 = (int *)((longlong)plVar40 + 0xc);
          *piVar45 = *piVar45 + -1;
          UNLOCK();
          param_1 = local_538;
          if (*piVar45 == 0) {
            (**(code **)(*plVar40 + 0x10))(plVar40);
            param_1 = local_538;
          }
        }
      }
      uVar38 = uVar38 & ~(uint)uVar30;
      lVar57 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar57 = local_520;
      }
      iVar15 = *(int *)(param_1 + 0x40);
      iVar12 = (int)uVar56;
      lVar48 = (longlong)iVar12;
      uVar14 = *(uint *)(lVar57 + lVar48 * 4) & uVar38;
      if (uVar14 == 0) {
        iVar21 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar21 = iVar15 + -1;
        }
        iVar21 = iVar21 >> 5;
        iVar29 = iVar29 + 0x20;
        iVar16 = iVar21;
        if (iVar21 < iVar12) {
          iVar16 = iVar12;
        }
        if (iVar12 < iVar21) {
          lVar44 = 0;
          do {
            uVar14 = *(uint *)(lVar57 + 4U + lVar48 * 4 + lVar44 * 4);
            if (uVar14 != 0) {
              uVar56 = (ulonglong)(iVar12 + (int)lVar44 + 1);
              uVar38 = 0xffffffff;
              goto LAB_143b9a58b;
            }
            iVar29 = iVar29 + 0x20;
            lVar44 = lVar44 + 1;
          } while (iVar16 - lVar48 != lVar44);
          uVar38 = 0xffffffff;
          iVar12 = iVar16;
        }
        uVar56 = (ulonglong)(iVar12 + 1);
        param_1 = local_538;
        iVar12 = iVar15;
      }
      else {
LAB_143b9a58b:
        uVar30 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar30 * 2 + 1;
        lVar57 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar57 == 0; lVar57 = lVar57 + -1) {
          }
        }
        iVar12 = (iVar29 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar12) {
          iVar12 = iVar15;
        }
      }
    } while (iVar12 != iVar13);
  }
LAB_143b9a359:
  lVar48 = local_520;
  lVar57 = DAT_14cb4d778;
  if (local_528[1] == '\0') {
    local_3e8._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_3e8.CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
    if (iVar15 == 0) {
      uVar30 = 0;
      uVar56 = 1;
      iVar12 = 0;
      iVar13 = 0;
    }
    else {
      lVar57 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar57 = local_520;
      }
      uVar38 = *(uint *)lVar57;
      if (uVar38 == 0) {
        iVar13 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar13 = iVar15 + -1;
        }
        uVar30 = 0;
        uVar56 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar56 = uVar30;
        }
        iVar12 = 0;
        do {
          if (uVar56 == uVar30) goto LAB_143b9a6c5;
          iVar12 = iVar12 + 0x20;
          uVar38 = *(uint *)(lVar57 + 4U + uVar30 * 4);
          uVar30 = uVar30 + 1;
        } while (uVar38 == 0);
      }
      else {
        uVar30 = 0;
        iVar12 = 0;
      }
      uVar56 = (ulonglong)(-uVar38 & uVar38);
      uVar2 = uVar56 * 2 + 1;
      lVar57 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar57 == 0; lVar57 = lVar57 + -1) {
        }
      }
      iVar13 = (iVar12 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
      if (iVar15 <= iVar13) {
        iVar13 = iVar15;
      }
    }
    if (iVar13 != iVar15) {
      uVar38 = 0xffffffff;
      do {
        p_Var10 = local_3e8.CriticalSection;
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar13 * 0x20U + 8);
        plVar40 = *(longlong **)(*(longlong *)(param_1 + 0x18) + ((longlong)iVar13 * 2 + 1) * 0x10);
        if (plVar40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
          UNLOCK();
        }
        lVar57 = (longlong)(int)local_3e8.CriticalSection;
        uVar14 = (int)local_3e8.CriticalSection + 1;
        local_3e8.CriticalSection =
             (_RTL_CRITICAL_SECTION *)CONCAT44(local_3e8.CriticalSection._4_4_,uVar14);
        if (local_3e8.CriticalSection._4_4_ < uVar14) {
          FUN_148544cfa(&local_3e8,(ulonglong)p_Var10 & 0xffffffff);
          param_1 = local_538;
        }
        *(undefined8 *)((WORD *)local_3e8._0_8_ + lVar57 * 4) = uVar3;
        if (plVar40 != (longlong *)0x0) {
          LOCK();
          plVar53 = plVar40 + 1;
          *(int *)plVar53 = (int)*plVar53 + -1;
          UNLOCK();
          if ((int)*plVar53 == 0) {
            (**(code **)*plVar40)(plVar40);
            LOCK();
            piVar45 = (int *)((longlong)plVar40 + 0xc);
            *piVar45 = *piVar45 + -1;
            UNLOCK();
            param_1 = local_538;
            if (*piVar45 == 0) {
              (**(code **)(*plVar40 + 0x10))(plVar40);
              param_1 = local_538;
            }
          }
        }
        uVar38 = uVar38 & ~(uint)uVar56;
        lVar57 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar57 = local_520;
        }
        iVar29 = *(int *)(param_1 + 0x40);
        iVar13 = (int)uVar30;
        lVar48 = (longlong)iVar13;
        uVar14 = *(uint *)(lVar57 + lVar48 * 4) & uVar38;
        if (uVar14 == 0) {
          iVar21 = iVar29 + 0x1e;
          if (-1 < iVar29 + -1) {
            iVar21 = iVar29 + -1;
          }
          iVar21 = iVar21 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar16 = iVar21;
          if (iVar21 < iVar13) {
            iVar16 = iVar13;
          }
          if (iVar13 < iVar21) {
            lVar44 = 0;
            do {
              uVar14 = *(uint *)(lVar57 + 4U + lVar48 * 4 + lVar44 * 4);
              if (uVar14 != 0) {
                uVar30 = (ulonglong)(iVar13 + (int)lVar44 + 1);
                uVar38 = 0xffffffff;
                goto LAB_143b9a86f;
              }
              iVar12 = iVar12 + 0x20;
              lVar44 = lVar44 + 1;
            } while (iVar16 - lVar48 != lVar44);
            uVar38 = 0xffffffff;
            iVar13 = iVar16;
          }
          uVar30 = (ulonglong)(iVar13 + 1);
          param_1 = local_538;
          iVar13 = iVar29;
        }
        else {
LAB_143b9a86f:
          uVar56 = (ulonglong)(-uVar14 & uVar14);
          uVar2 = uVar56 * 2 + 1;
          lVar57 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar57 == 0; lVar57 = lVar57 + -1) {
            }
          }
          iVar13 = (iVar12 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
          if (iVar29 <= iVar13) {
            iVar13 = iVar29;
          }
        }
      } while (iVar13 != iVar15);
    }
LAB_143b9a6c5:
    InitializeCriticalSection((LPCRITICAL_SECTION)local_3b8);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)local_3b8,4000);
    LOCK();
    local_438.DebugInfo._0_4_ = 0;
    UNLOCK();
    LOCK();
    stack0xfffffffffffffbb8 = (code *)((ulonglong)uStack_444 << 0x20);
    UNLOCK();
    local_410._0_8_ = &local_3e8;
    local_498._8_8_ = local_410;
    local_410._8_8_ = local_528;
    local_548 = &local_b8;
    local_b8 = (undefined1 *)0x0;
    uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)((ulonglong)uStack_b0._4_4_ << 0x20);
    local_498._0_8_ = &LAB_143ba0e9a;
    local_550 = 0;
    FUN_1401f8d10(L"ParallelFor Task",(ulonglong)local_3e8.CriticalSection & 0xffffffff);
    DeleteCriticalSection((LPCRITICAL_SECTION)local_3b8);
    p_Var24 = (PRTL_CRITICAL_SECTION_DEBUG)local_3e8._0_8_;
  }
  else {
    iVar13 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar30 = 0;
    if (iVar13 == 0x40000002) {
      uVar56 = 0;
    }
    else {
      bVar60 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
        if (iVar13 == 1) {
          DVar18 = FUN_140ad26c0();
          DVar19 = GetCurrentThreadId();
          bVar60 = DVar18 == DVar19;
          iVar15 = *(int *)(local_538 + 0x40);
          param_1 = local_538;
        }
        else {
          bVar60 = false;
        }
      }
      uVar56 = (ulonglong)(bVar60 ^ 1);
    }
    local_468._28_4_ = (*(int *)(lVar57 + uVar56 * 4) == 0) + 1;
    local_468[0x1b] = local_528[0x23] ^ 1;
    if (local_528[0x22] != '\0') {
      local_468[0x1b] = 0;
    }
    local_468._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_468._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
    if (iVar15 == 0) {
      uVar56 = 1;
      iVar12 = 0;
      iVar13 = 0;
    }
    else {
      lVar57 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar57 = lVar48;
      }
      uVar38 = *(uint *)lVar57;
      if (uVar38 == 0) {
        iVar13 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar13 = iVar15 + -1;
        }
        uVar56 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar56 = 0;
        }
        uVar30 = 0;
        iVar12 = 0;
        do {
          if (uVar56 == uVar30) goto LAB_143b9aa3e;
          iVar12 = iVar12 + 0x20;
          uVar38 = *(uint *)(lVar57 + 4U + uVar30 * 4);
          uVar30 = uVar30 + 1;
        } while (uVar38 == 0);
      }
      else {
        uVar30 = 0;
        iVar12 = 0;
      }
      uVar56 = (ulonglong)(-uVar38 & uVar38);
      uVar2 = uVar56 * 2 + 1;
      lVar57 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar57 == 0; lVar57 = lVar57 + -1) {
        }
      }
      iVar13 = (iVar12 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
      if (iVar15 <= iVar13) {
        iVar13 = iVar15;
      }
    }
    if (iVar13 != iVar15) {
      uVar38 = 0xffffffff;
      do {
        uVar7 = local_468._8_8_;
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar13 * 0x20U + 8);
        plVar40 = *(longlong **)(*(longlong *)(param_1 + 0x18) + ((longlong)iVar13 * 2 + 1) * 0x10);
        if (plVar40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
          UNLOCK();
        }
        lVar57 = (longlong)(int)local_468._8_4_;
        uVar14 = local_468._8_4_ + 1;
        local_468._8_4_ = uVar14;
        if ((uint)local_468._12_4_ < uVar14) {
          FUN_148544cfa(local_468,uVar7 & 0xffffffff);
          param_1 = local_538;
        }
        *(undefined8 *)((WORD *)local_468._0_8_ + lVar57 * 4) = uVar3;
        if (plVar40 != (longlong *)0x0) {
          LOCK();
          plVar53 = plVar40 + 1;
          *(int *)plVar53 = (int)*plVar53 + -1;
          UNLOCK();
          if ((int)*plVar53 == 0) {
            (**(code **)*plVar40)(plVar40);
            LOCK();
            piVar45 = (int *)((longlong)plVar40 + 0xc);
            *piVar45 = *piVar45 + -1;
            UNLOCK();
            param_1 = local_538;
            if (*piVar45 == 0) {
              (**(code **)(*plVar40 + 0x10))(plVar40);
              param_1 = local_538;
            }
          }
        }
        uVar38 = uVar38 & ~(uint)uVar56;
        lVar57 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar57 = local_520;
        }
        iVar29 = *(int *)(param_1 + 0x40);
        iVar13 = (int)uVar30;
        lVar48 = (longlong)iVar13;
        uVar14 = *(uint *)(lVar57 + lVar48 * 4) & uVar38;
        if (uVar14 == 0) {
          iVar21 = iVar29 + 0x1e;
          if (-1 < iVar29 + -1) {
            iVar21 = iVar29 + -1;
          }
          iVar21 = iVar21 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar16 = iVar21;
          if (iVar21 < iVar13) {
            iVar16 = iVar13;
          }
          if (iVar13 < iVar21) {
            lVar44 = 0;
            do {
              uVar14 = *(uint *)(lVar57 + 4U + lVar48 * 4 + lVar44 * 4);
              if (uVar14 != 0) {
                uVar30 = (ulonglong)(iVar13 + (int)lVar44 + 1);
                uVar38 = 0xffffffff;
                goto LAB_143b9a9d6;
              }
              iVar12 = iVar12 + 0x20;
              lVar44 = lVar44 + 1;
            } while (iVar16 - lVar48 != lVar44);
            uVar38 = 0xffffffff;
            iVar13 = iVar16;
          }
          uVar30 = (ulonglong)(iVar13 + 1);
          param_1 = local_538;
          iVar13 = iVar29;
        }
        else {
LAB_143b9a9d6:
          uVar56 = (ulonglong)(-uVar14 & uVar14);
          uVar2 = uVar56 * 2 + 1;
          lVar57 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar57 == 0; lVar57 = lVar57 + -1) {
            }
          }
          iVar13 = (iVar12 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
          if (iVar29 <= iVar13) {
            iVar13 = iVar29;
          }
        }
      } while (iVar13 != iVar15);
    }
LAB_143b9aa3e:
    local_3e8.CriticalSection = (_RTL_CRITICAL_SECTION *)local_498;
    local_498._0_8_ = *(undefined8 *)local_528;
    local_498._8_8_ = *(undefined8 *)(local_528 + 8);
    local_488 = *(undefined4 *)(local_528 + 0x10);
    uStack_484 = *(undefined4 *)(local_528 + 0x14);
    uStack_480 = *(undefined4 *)(local_528 + 0x18);
    uStack_47c = *(undefined4 *)(local_528 + 0x1c);
    local_478._2_6_ = (undefined6)((ulonglong)*(undefined8 *)(local_528 + 0x20) >> 0x10);
    local_478._0_2_ = (ushort)(byte)*(undefined8 *)(local_528 + 0x20);
    local_3e8._0_8_ = local_468;
    uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)&local_3e8;
    plVar40 = (longlong *)local_3b8;
    local_3b8 = (undefined1  [8])0x0;
    uStack_3b0 = (PRTL_CRITICAL_SECTION_DEBUG *)((ulonglong)uStack_3b0._4_4_ << 0x20);
    local_b8 = &LAB_143ba1068;
    local_550 = local_468._28_4_;
    local_548 = plVar40;
    FUN_1401f8d10(L"ParallelFor Task",local_488,1);
    uVar3 = local_468._0_8_;
    uVar4 = local_468._8_4_;
    lVar57 = (longlong)(int)local_468._8_4_;
    uVar38 = local_468._8_4_;
    if (1 < lVar57) {
      memset(&local_3a8,0,0x2f0);
      local_3b8 = (undefined1  [8])uVar3;
      uStack_3b0 = (PRTL_CRITICAL_SECTION_DEBUG *)(uVar3 + lVar57 * 8 + -8);
      fVar61 = logf((float)(int)uVar4);
      local_3a8 = (char *)CONCAT44(local_3a8._4_4_,(int)(longlong)(fVar61 + fVar61));
      do {
        plVar26 = (longlong *)*plVar40;
        plVar53 = (longlong *)plVar40[1];
        iVar13 = (int)plVar40[2];
        iVar15 = (int)((ulonglong)((longlong)plVar53 - (longlong)plVar26) >> 3);
        uVar30 = (ulonglong)(iVar15 + 1);
        plVar31 = plVar26;
        plVar58 = plVar53;
        local_530 = plVar40;
        if (iVar13 != 0) {
LAB_143b9ab4d:
          plVar40 = local_530;
          if (8 < (int)(uint)uVar30) {
            local_520 = CONCAT44(local_520._4_4_,iVar13);
            uVar38 = (uint)uVar30 >> 1;
            lVar57 = plVar26[uVar38];
            plVar26[uVar38] = *plVar26;
            *plVar26 = lVar57;
            plVar39 = plVar53 + 1;
            plVar51 = plVar26;
            local_518 = plVar31;
            local_510 = plVar58;
            do {
              plVar40 = plVar51 + 1;
              plVar58 = plVar51 + 1;
              do {
                plVar51 = plVar58;
                plVar31 = plVar40;
                if (plVar53 < plVar51) break;
                lVar57 = *plVar51;
                iVar13 = (**(code **)(**(longlong **)(*plVar26 + 0x28) + 0x10))();
                iVar15 = (**(code **)(**(longlong **)(lVar57 + 0x28) + 0x10))();
                plVar40 = plVar31 + 1;
                plVar58 = plVar51 + 1;
              } while (iVar15 <= iVar13);
              plVar40 = plVar39 + -2;
              do {
                plVar54 = plVar39;
                plVar58 = plVar40;
                plVar39 = plVar54 + -1;
                if (plVar39 <= plVar26) break;
                lVar57 = *plVar26;
                iVar13 = (**(code **)(**(longlong **)(*plVar39 + 0x28) + 0x10))();
                iVar15 = (**(code **)(**(longlong **)(lVar57 + 0x28) + 0x10))();
                plVar40 = plVar58 + -1;
              } while (iVar15 <= iVar13);
              if (plVar39 < plVar51) goto LAB_143b9ac10;
              lVar57 = *plVar51;
              *plVar51 = *plVar39;
              *plVar39 = lVar57;
            } while( true );
          }
          for (; local_530 = plVar40, plVar58 = plVar26, plVar31 = plVar26, plVar26 < plVar53;
              plVar53 = (longlong *)((longlong)plVar53 + 0xfffffffffffffff8)) {
            while (plVar40 = plVar58, plVar31 = plVar31 + 1, plVar31 <= plVar53) {
              lVar57 = *plVar31;
              iVar13 = (**(code **)(**(longlong **)(*plVar40 + 0x28) + 0x10))();
              iVar15 = (**(code **)(**(longlong **)(lVar57 + 0x28) + 0x10))();
              plVar58 = plVar31;
              if (iVar15 <= iVar13) {
                plVar58 = plVar40;
              }
            }
            lVar57 = *plVar40;
            *plVar40 = *plVar53;
            *plVar53 = lVar57;
            plVar40 = local_530;
          }
          goto LAB_143b9aece;
        }
LAB_143b9acbe:
        iVar13 = (int)uVar30;
        plVar40 = local_530;
        if (iVar13 != 0) {
          iVar15 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
          iVar12 = iVar15;
joined_r0x000143b9acdd:
          do {
            iVar29 = iVar15 * 2 + 1;
            if (iVar29 < iVar13) {
              iVar21 = iVar15 * 2 + 2;
              if (iVar21 < iVar13) {
                lVar57 = plVar26[iVar29];
                iVar16 = (**(code **)(**(longlong **)(plVar26[iVar21] + 0x28) + 0x10))();
                iVar17 = (**(code **)(**(longlong **)(lVar57 + 0x28) + 0x10))();
                if (iVar17 <= iVar16) {
                  iVar29 = iVar21;
                }
              }
              lVar57 = plVar26[iVar29];
              iVar21 = (**(code **)(**(longlong **)(plVar26[iVar15] + 0x28) + 0x10))();
              iVar16 = (**(code **)(**(longlong **)(lVar57 + 0x28) + 0x10))();
              if (iVar21 < iVar16) {
                lVar57 = plVar26[iVar15];
                plVar26[iVar15] = plVar26[iVar29];
                plVar26[iVar29] = lVar57;
                iVar15 = iVar29;
                goto joined_r0x000143b9acdd;
              }
            }
            bVar60 = iVar12 != 0;
            iVar15 = iVar12 + -1;
            iVar12 = iVar15;
          } while (bVar60);
          plVar40 = local_530;
          if (1 < iVar13) {
            lVar57 = *plVar26;
            *plVar26 = plVar26[uVar30 - 1];
            plVar26[uVar30 - 1] = lVar57;
            if (iVar13 != 2) {
              do {
                uVar56 = uVar30 - 1;
                iVar13 = 0;
                iVar12 = 1;
                iVar15 = 0;
                do {
                  iVar13 = iVar13 + 2;
                  iVar29 = iVar12;
                  if ((longlong)iVar13 < (longlong)uVar56) {
                    lVar57 = plVar26[iVar12];
                    iVar12 = (**(code **)(**(longlong **)(plVar26[iVar13] + 0x28) + 0x10))();
                    iVar21 = (**(code **)(**(longlong **)(lVar57 + 0x28) + 0x10))();
                    if (iVar21 <= iVar12) {
                      iVar29 = iVar13;
                    }
                  }
                  lVar57 = plVar26[iVar29];
                  iVar13 = (**(code **)(**(longlong **)(plVar26[iVar15] + 0x28) + 0x10))();
                  iVar12 = (**(code **)(**(longlong **)(lVar57 + 0x28) + 0x10))();
                  if (iVar12 <= iVar13) break;
                  lVar57 = plVar26[iVar15];
                  plVar26[iVar15] = plVar26[iVar29];
                  plVar26[iVar29] = lVar57;
                  iVar13 = iVar29 * 2;
                  iVar12 = iVar29 * 2 + 1;
                  iVar15 = iVar29;
                } while ((longlong)iVar12 < (longlong)uVar56);
                lVar57 = *plVar26;
                *plVar26 = plVar26[uVar30 - 2];
                plVar26[uVar30 - 2] = lVar57;
                plVar40 = local_530;
                uVar30 = uVar56;
              } while (2 < uVar56);
            }
          }
        }
LAB_143b9aece:
        plVar40 = plVar40 + -3;
      } while (local_3b8 <= plVar40);
      uVar38 = local_468._8_4_;
    }
    local_49c = 0;
    local_4a0 = 0;
    local_4a4 = 0;
    local_4a8 = 0;
    local_4ac = 0;
    local_4b0 = 0;
    local_4b4 = 0;
    local_4b8 = 0;
    local_4bc = 0;
    local_4c0 = 0;
    local_4d8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    uStack_4d0 = 0;
    if ((int)uVar38 < 1) {
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar38);
      }
    }
    else {
      uStack_4d0 = (ulonglong)uVar38;
      FUN_143ba10e0(&local_4d8);
      FUN_143ba10c0(local_4d8,uVar38);
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)&local_3e8);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&local_3e8,4000);
    InitializeCriticalSection((LPCRITICAL_SECTION)local_410);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)local_410,4000);
    local_4e8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    uStack_4e0 = 0;
    InitializeCriticalSection(&local_438);
    SetCriticalSectionSpinCount(&local_438,4000);
    local_380 = &local_4f8;
    local_378 = &local_4fc;
    local_4fc = 0;
    local_370 = &local_500;
    local_500 = 0;
    local_368 = &local_504;
    local_504 = 0;
    local_388 = local_468 + 0x1c;
    uStack_3b0 = &local_4d8;
    local_3a8 = local_468;
    local_3a0 = &local_49c;
    local_398 = &local_4a4;
    local_390 = local_528;
    local_360 = local_468 + 0x1b;
    local_350 = &local_4c0;
    local_348 = &local_4b0;
    local_340 = &local_4a0;
    local_338 = &local_4ac;
    local_330 = &local_4bc;
    local_328 = local_538;
    local_320 = &local_4a8;
    local_318 = &local_4b8;
    local_b8 = (undefined1 *)0x0;
    uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)((ulonglong)uStack_b0 & 0xffffffff00000000);
    stack0xfffffffffffffbb8 = FUN_143ba11e8;
    local_548 = &local_b8;
    local_550 = local_468._28_4_;
    local_4f8 = &local_4e8;
    local_4f0 = &local_438;
    local_440 = (undefined8 *)local_3b8;
    local_3b8 = (undefined1  [8])&local_3e8;
    local_358 = (LPCRITICAL_SECTION)local_410;
    FUN_1401f8d10(L"ParallelFor Task",local_468._8_8_ & 0xffffffff,1);
    p_Var24 = local_4e8;
    iVar13 = (int)uStack_4e0;
    lVar57 = (longlong)(int)uStack_4e0;
    if (1 < lVar57) {
      memset(&local_3a8,0,0x2f0);
      local_3b8 = (undefined1  [8])p_Var24;
      uStack_3b0 = (PRTL_CRITICAL_SECTION_DEBUG *)((longlong)p_Var24 + lVar57 * 0x10 + -0x10);
      fVar61 = logf((float)iVar13);
      local_3a8 = (char *)CONCAT44(local_3a8._4_4_,(int)(longlong)(fVar61 + fVar61));
      puVar20 = (undefined8 *)local_3b8;
      do {
        piVar23 = (int *)*puVar20;
        piVar45 = (int *)puVar20[1];
        iVar13 = *(int *)(puVar20 + 2);
        iVar15 = (int)((ulonglong)((longlong)piVar45 - (longlong)piVar23) >> 4);
        uVar38 = iVar15 + 1;
        piVar32 = piVar23;
        piVar50 = piVar45;
        if (iVar13 != 0) {
LAB_143b9b1b6:
          if (8 < (int)uVar38) {
            uVar3 = *(undefined8 *)(piVar23 + (ulonglong)(uVar38 >> 1) * 4);
            uVar7 = *(undefined8 *)(piVar23 + (ulonglong)(uVar38 >> 1) * 4 + 2);
            uVar8 = *(undefined8 *)(piVar23 + 2);
            *(undefined8 *)(piVar23 + (ulonglong)(uVar38 >> 1) * 4) = *(undefined8 *)piVar23;
            *(undefined8 *)(piVar23 + (ulonglong)(uVar38 >> 1) * 4 + 2) = uVar8;
            *(undefined8 *)piVar23 = uVar3;
            *(undefined8 *)(piVar23 + 2) = uVar7;
            piVar49 = piVar45 + 4;
            piVar22 = piVar23;
            do {
              piVar11 = piVar22 + 4;
              piVar46 = piVar22 + 4;
              do {
                piVar22 = piVar46;
                piVar27 = piVar11;
                if (piVar45 < piVar22) break;
                piVar11 = piVar27 + 4;
                piVar46 = piVar22 + 4;
              } while (*piVar22 <= *piVar23);
              piVar11 = piVar49 + -8;
              do {
                piVar46 = piVar49;
                piVar55 = piVar11;
                piVar49 = piVar46 + -4;
                if (piVar49 <= piVar23) break;
                piVar11 = piVar55 + -4;
              } while (*piVar23 <= *piVar49);
              if (piVar49 < piVar22) goto LAB_143b9b25e;
              uVar3 = *(undefined8 *)piVar22;
              uVar7 = *(undefined8 *)(piVar22 + 2);
              uVar8 = *(undefined8 *)(piVar46 + -2);
              *(undefined8 *)piVar22 = *(undefined8 *)piVar49;
              *(undefined8 *)(piVar22 + 2) = uVar8;
              *(undefined8 *)piVar49 = uVar3;
              *(undefined8 *)(piVar46 + -2) = uVar7;
            } while( true );
          }
          if (piVar23 < piVar45) {
            do {
              piVar32 = piVar23;
              if (piVar23 + 4 <= piVar45) {
                piVar50 = piVar23 + 4;
                iVar13 = *piVar23;
                do {
                  iVar15 = *piVar50;
                  iVar12 = iVar13;
                  if (iVar13 <= iVar15) {
                    iVar12 = iVar15;
                  }
                  if (iVar13 < iVar15) {
                    piVar32 = piVar50;
                  }
                  piVar50 = piVar50 + 4;
                  iVar13 = iVar12;
                } while (piVar50 <= piVar45);
              }
              local_b8 = *(undefined1 **)piVar32;
              uStack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG **)(piVar32 + 2);
              uVar30 = (ulonglong)uStack_b0;
              uVar3 = *(undefined8 *)(piVar45 + 2);
              *(undefined8 *)piVar32 = *(undefined8 *)piVar45;
              *(undefined8 *)(piVar32 + 2) = uVar3;
              local_b8._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
              uStack_b0._4_4_ = (uint)((ulonglong)uStack_b0 >> 0x20);
              *piVar45 = (int)local_b8;
              piVar45[1] = local_b8._4_4_;
              piVar45[2] = (int)uStack_b0;
              piVar45[3] = uStack_b0._4_4_;
              piVar45 = piVar45 + -4;
              uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)uVar30;
            } while (piVar23 < piVar45);
          }
          goto LAB_143b9b512;
        }
LAB_143b9b306:
        if (uVar38 != 0) {
          iVar13 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
          iVar15 = iVar13;
joined_r0x000143b9b329:
          do {
            iVar12 = iVar13 * 2 + 1;
            if (iVar12 < (int)uVar38) {
              iVar29 = iVar13 * 2 + 2;
              if ((iVar29 < (int)uVar38) &&
                 (piVar23[(longlong)iVar12 * 4] <= piVar23[(longlong)iVar29 * 4])) {
                iVar12 = iVar29;
              }
              if (piVar23[(longlong)iVar13 * 4] < piVar23[(longlong)iVar12 * 4]) {
                piVar45 = piVar23 + (longlong)iVar13 * 4;
                piVar32 = piVar23 + (longlong)iVar12 * 4;
                local_b8 = *(undefined1 **)piVar45;
                uStack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG **)(piVar45 + 2);
                uVar30 = (ulonglong)uStack_b0;
                uVar3 = *(undefined8 *)(piVar32 + 2);
                *(undefined8 *)piVar45 = *(undefined8 *)piVar32;
                *(undefined8 *)(piVar45 + 2) = uVar3;
                local_b8._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
                uStack_b0._4_4_ = (uint)((ulonglong)uStack_b0 >> 0x20);
                *piVar32 = (int)local_b8;
                piVar32[1] = local_b8._4_4_;
                piVar32[2] = (int)uStack_b0;
                piVar32[3] = uStack_b0._4_4_;
                iVar13 = iVar12;
                uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)uVar30;
                goto joined_r0x000143b9b329;
              }
            }
            bVar60 = iVar15 != 0;
            iVar13 = iVar15 + -1;
            iVar15 = iVar13;
          } while (bVar60);
          if (1 < (int)uVar38) {
            uVar56 = (ulonglong)uVar38 - 1;
            local_b8 = *(undefined1 **)piVar23;
            uStack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG **)(piVar23 + 2);
            uVar30 = (ulonglong)uStack_b0;
            uVar3 = *(undefined8 *)(piVar23 + uVar56 * 4 + 2);
            *(undefined8 *)piVar23 = *(undefined8 *)(piVar23 + uVar56 * 4);
            *(undefined8 *)(piVar23 + 2) = uVar3;
            local_b8._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
            uStack_b0._4_4_ = (uint)((ulonglong)uStack_b0 >> 0x20);
            piVar45 = piVar23 + uVar56 * 4;
            *piVar45 = (int)local_b8;
            piVar45[1] = local_b8._4_4_;
            piVar45[2] = (int)uStack_b0;
            piVar45[3] = uStack_b0._4_4_;
            uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)uVar30;
            if (uVar38 != 2) {
              do {
                iVar13 = 0;
                iVar12 = 1;
                iVar15 = 0;
                do {
                  iVar13 = iVar13 + 2;
                  iVar29 = iVar12;
                  if (((longlong)iVar13 < (longlong)uVar56) &&
                     (piVar23[(longlong)iVar12 * 4] <= piVar23[(longlong)iVar13 * 4])) {
                    iVar29 = iVar13;
                  }
                  if (piVar23[(longlong)iVar29 * 4] <= piVar23[(longlong)iVar15 * 4]) break;
                  piVar45 = piVar23 + (longlong)iVar15 * 4;
                  piVar32 = piVar23 + (longlong)iVar29 * 4;
                  uVar3 = *(undefined8 *)piVar45;
                  uVar7 = *(undefined8 *)(piVar45 + 2);
                  uVar8 = *(undefined8 *)(piVar32 + 2);
                  *(undefined8 *)piVar45 = *(undefined8 *)piVar32;
                  *(undefined8 *)(piVar45 + 2) = uVar8;
                  *(undefined8 *)piVar32 = uVar3;
                  *(undefined8 *)(piVar32 + 2) = uVar7;
                  iVar13 = iVar29 * 2;
                  iVar12 = iVar29 * 2 + 1;
                  iVar15 = iVar29;
                } while ((longlong)iVar12 < (longlong)uVar56);
                uVar30 = uVar56 - 1;
                local_b8 = *(undefined1 **)piVar23;
                uStack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG **)(piVar23 + 2);
                uVar2 = (ulonglong)uStack_b0;
                uVar3 = *(undefined8 *)(piVar23 + uVar30 * 4 + 2);
                *(undefined8 *)piVar23 = *(undefined8 *)(piVar23 + uVar30 * 4);
                *(undefined8 *)(piVar23 + 2) = uVar3;
                local_b8._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
                uStack_b0._4_4_ = (uint)((ulonglong)uStack_b0 >> 0x20);
                piVar45 = piVar23 + uVar30 * 4;
                *piVar45 = (int)local_b8;
                piVar45[1] = local_b8._4_4_;
                piVar45[2] = (int)uStack_b0;
                piVar45[3] = uStack_b0._4_4_;
                bVar60 = 2 < uVar56;
                uVar56 = uVar30;
                uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)uVar2;
              } while (bVar60);
            }
          }
        }
LAB_143b9b512:
        puVar20 = puVar20 + -3;
      } while (local_3b8 <= puVar20);
    }
    pcVar9 = local_528;
    local_3b8 = (undefined1  [8])&local_3e8;
    local_3a8 = local_528;
    local_3a0 = &local_4b4;
    local_b8 = (undefined1 *)0x0;
    uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)((ulonglong)uStack_b0 & 0xffffffff00000000);
    stack0xfffffffffffffbb8 = FUN_143ba319c;
    local_548 = &local_b8;
    local_550 = local_468._28_4_;
    local_440 = (undefined8 *)local_3b8;
    uStack_3b0 = &local_4e8;
    FUN_1401f8d10(L"ParallelFor Task");
    p_Var24 = local_4d8;
    *(undefined1 *)(local_538 + 0x68) = 1;
    if (*pcVar9 != '\0') {
      iVar13 = (int)uStack_4d0;
      lVar57 = (longlong)(int)uStack_4d0;
      if (1 < lVar57) {
        memset(&local_3a8,0,0x2f0);
        local_3b8 = (undefined1  [8])p_Var24;
        uStack_3b0 = (PRTL_CRITICAL_SECTION_DEBUG *)((longlong)p_Var24 + lVar57 * 0x50 + -0x50);
        fVar61 = logf((float)iVar13);
        local_3a8 = (char *)CONCAT44(local_3a8._4_4_,(int)(longlong)(fVar61 + fVar61));
        puVar20 = (undefined8 *)local_3b8;
        do {
          puVar47 = (undefined8 *)*puVar20;
          puVar28 = (undefined8 *)puVar20[1];
          iVar13 = *(int *)(puVar20 + 2);
          iVar15 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar47) >> 4) * -0x33333333;
          uVar38 = iVar15 + 1;
          puVar43 = puVar28;
          puVar37 = puVar47;
          if (iVar13 != 0) {
LAB_143b9b65c:
            if (8 < (int)uVar38) {
              puVar33 = puVar47 + (ulonglong)(uVar38 >> 1) * 10;
              puVar25 = &local_b8;
              for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar25 = *puVar33;
                puVar33 = puVar33 + 1;
                puVar25 = puVar25 + 1;
              }
              puVar33 = puVar47;
              puVar25 = puVar47 + (ulonglong)(uVar38 >> 1) * 10;
              for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar25 = *puVar33;
                puVar33 = puVar33 + 1;
                puVar25 = puVar25 + 1;
              }
              puVar33 = &local_b8;
              puVar25 = puVar47;
              for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar25 = *puVar33;
                puVar33 = puVar33 + 1;
                puVar25 = puVar25 + 1;
              }
              puVar33 = puVar43 + 10;
              puVar25 = puVar47;
              do {
                puVar36 = puVar25 + 10;
                puVar41 = puVar25 + 10;
                do {
                  puVar25 = puVar41;
                  puVar59 = puVar36;
                  if (puVar43 < puVar25) break;
                  puVar36 = puVar59 + 10;
                  puVar41 = puVar25 + 10;
                } while (*(int *)(puVar47 + 8) <= *(int *)(puVar25 + 8));
                puVar36 = puVar33 + -0x14;
                do {
                  puVar41 = puVar33;
                  puVar34 = puVar36;
                  puVar33 = puVar41 + -10;
                  if (puVar33 <= puVar47) break;
                  puVar36 = puVar34 + -10;
                } while (*(int *)(puVar41 + -2) <= *(int *)(puVar47 + 8));
                lVar57 = 10;
                puVar36 = puVar47;
                puVar35 = puVar25;
                puVar42 = &local_b8;
                if (puVar33 < puVar25) goto code_r0x000143b9b72d;
                for (; lVar57 != 0; lVar57 = lVar57 + -1) {
                  *puVar42 = *puVar35;
                  puVar35 = puVar35 + 1;
                  puVar42 = puVar42 + 1;
                }
                puVar36 = puVar33;
                puVar41 = puVar25;
                for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                  *puVar41 = *puVar36;
                  puVar36 = puVar36 + 1;
                  puVar41 = puVar41 + 1;
                }
                puVar36 = &local_b8;
                puVar41 = puVar33;
                for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                  *puVar41 = *puVar36;
                  puVar36 = puVar36 + 1;
                  puVar41 = puVar41 + 1;
                }
              } while( true );
            }
            while (puVar37 = puVar47, puVar28 = puVar47, puVar47 < puVar43) {
              while (puVar33 = puVar37, puVar28 = puVar28 + 10, puVar28 <= puVar43) {
                puVar37 = puVar28;
                if (*(int *)(puVar33 + 8) <= *(int *)(puVar28 + 8)) {
                  puVar37 = puVar33;
                }
              }
              puVar28 = (undefined8 *)((longlong)puVar43 + 0xffffffffffffffb0);
              puVar37 = puVar33;
              puVar25 = &local_b8;
              for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar25 = *puVar37;
                puVar37 = puVar37 + 1;
                puVar25 = puVar25 + 1;
              }
              puVar37 = puVar43;
              for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar33 = *puVar37;
                puVar37 = puVar37 + 1;
                puVar33 = puVar33 + 1;
              }
              puVar37 = &local_b8;
              puVar33 = puVar43;
              for (lVar57 = 10; puVar43 = puVar28, lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar33 = *puVar37;
                puVar37 = puVar37 + 1;
                puVar33 = puVar33 + 1;
              }
            }
            goto LAB_143b9ba54;
          }
LAB_143b9b7da:
          if (uVar38 != 0) {
            iVar15 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
            iVar13 = iVar15;
joined_r0x000143b9b7ff:
            do {
              iVar12 = iVar13 * 2 + 1;
              if (iVar12 < (int)uVar38) {
                iVar29 = iVar13 * 2 + 2;
                if ((iVar29 < (int)uVar38) &&
                   (*(int *)(puVar47 + (longlong)iVar29 * 10 + 8) <=
                    *(int *)(puVar47 + (longlong)iVar12 * 10 + 8))) {
                  iVar12 = iVar29;
                }
                if (*(int *)(puVar47 + (longlong)iVar12 * 10 + 8) <
                    *(int *)(puVar47 + (longlong)iVar13 * 10 + 8)) {
                  puVar28 = puVar47 + (longlong)iVar13 * 10;
                  puVar43 = &local_b8;
                  for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                    *puVar43 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar43 = puVar43 + 1;
                  }
                  puVar28 = puVar47 + (longlong)iVar12 * 10;
                  puVar43 = puVar47 + (longlong)iVar13 * 10;
                  for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                    *puVar43 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar43 = puVar43 + 1;
                  }
                  puVar28 = &local_b8;
                  puVar43 = puVar47 + (longlong)iVar12 * 10;
                  for (lVar57 = 10; iVar13 = iVar12, lVar57 != 0; lVar57 = lVar57 + -1) {
                    *puVar43 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar43 = puVar43 + 1;
                  }
                  goto joined_r0x000143b9b7ff;
                }
              }
              bVar60 = iVar15 != 0;
              iVar15 = iVar15 + -1;
              iVar13 = iVar15;
            } while (bVar60);
            if (1 < (int)uVar38) {
              puVar28 = puVar47;
              puVar43 = &local_b8;
              for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar43 = *puVar28;
                puVar28 = puVar28 + 1;
                puVar43 = puVar43 + 1;
              }
              puVar28 = puVar47 + ((ulonglong)uVar38 - 1) * 10;
              puVar43 = puVar47;
              for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar43 = *puVar28;
                puVar28 = puVar28 + 1;
                puVar43 = puVar43 + 1;
              }
              puVar28 = &local_b8;
              puVar43 = puVar47 + ((ulonglong)uVar38 - 1) * 10;
              for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                *puVar43 = *puVar28;
                puVar28 = puVar28 + 1;
                puVar43 = puVar43 + 1;
              }
              uVar30 = (ulonglong)uVar38 - 1;
              if (uVar38 != 2) {
                do {
                  iVar13 = 0;
                  iVar12 = 1;
                  iVar15 = 0;
                  do {
                    iVar13 = iVar13 + 2;
                    iVar29 = iVar12;
                    if (((longlong)iVar13 < (longlong)uVar30) &&
                       (*(int *)(puVar47 + (longlong)iVar13 * 10 + 8) <=
                        *(int *)(puVar47 + (longlong)iVar12 * 10 + 8))) {
                      iVar29 = iVar13;
                    }
                    if (*(int *)(puVar47 + (longlong)iVar15 * 10 + 8) <=
                        *(int *)(puVar47 + (longlong)iVar29 * 10 + 8)) break;
                    puVar28 = puVar47 + (longlong)iVar15 * 10;
                    puVar43 = &local_b8;
                    for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                      *puVar43 = *puVar28;
                      puVar28 = puVar28 + 1;
                      puVar43 = puVar43 + 1;
                    }
                    puVar28 = puVar47 + (longlong)iVar29 * 10;
                    puVar43 = puVar47 + (longlong)iVar15 * 10;
                    for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                      *puVar43 = *puVar28;
                      puVar28 = puVar28 + 1;
                      puVar43 = puVar43 + 1;
                    }
                    puVar28 = &local_b8;
                    puVar43 = puVar47 + (longlong)iVar29 * 10;
                    for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                      *puVar43 = *puVar28;
                      puVar28 = puVar28 + 1;
                      puVar43 = puVar43 + 1;
                    }
                    iVar13 = iVar29 * 2;
                    iVar12 = iVar29 * 2 + 1;
                    iVar15 = iVar29;
                  } while ((longlong)iVar12 < (longlong)uVar30);
                  puVar28 = puVar47;
                  puVar43 = &local_b8;
                  for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                    *puVar43 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar43 = puVar43 + 1;
                  }
                  puVar28 = puVar47 + (uVar30 - 1) * 10;
                  puVar43 = puVar47;
                  for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                    *puVar43 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar43 = puVar43 + 1;
                  }
                  puVar28 = &local_b8;
                  puVar43 = puVar47 + (uVar30 - 1) * 10;
                  for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
                    *puVar43 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar43 = puVar43 + 1;
                  }
                  bVar60 = 2 < uVar30;
                  uVar30 = uVar30 - 1;
                } while (bVar60);
              }
            }
          }
LAB_143b9ba54:
          puVar20 = puVar20 + -3;
        } while (local_3b8 <= puVar20);
      }
      if (0 < (int)uStack_4d0) {
        lVar57 = 0;
        do {
          local_3b8 = (undefined1  [8])0x0;
          uStack_3b0 = (PRTL_CRITICAL_SECTION_DEBUG *)0x0;
          lVar48 = (longlong)*(int *)((longlong)local_4d8 + lVar57 * 0x50 + 0x38);
          if (lVar48 != 0) {
            puVar52 = *(undefined4 **)((longlong)local_4d8 + lVar57 * 0x50 + 0x30);
            puVar1 = puVar52 + lVar48 * 2;
            do {
              FUN_140002266(&local_b8,L" (%d,%d)",*puVar52,puVar52[1]);
              FUN_1400020e8(local_3b8,local_b8);
              if (local_b8 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              puVar52 = puVar52 + 2;
            } while (puVar52 != puVar1);
            if (local_3b8 != (undefined1  [8])0x0) {
              FUN_1400020a8();
            }
          }
          lVar57 = lVar57 + 1;
          iVar13 = (int)uStack_4d0;
          if (0x13 < (int)uStack_4d0) {
            iVar13 = 0x14;
          }
        } while (lVar57 < iVar13);
      }
    }
    DeleteCriticalSection(&local_438);
    if (local_4e8 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FUN_1400020a8();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)local_410);
    DeleteCriticalSection((LPCRITICAL_SECTION)&local_3e8);
    FUN_143ba1087(local_4d8,uStack_4d0 & 0xffffffff);
    p_Var24 = (PRTL_CRITICAL_SECTION_DEBUG)local_468._0_8_;
    if (local_4d8 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FUN_1400020a8();
      p_Var24 = (PRTL_CRITICAL_SECTION_DEBUG)local_468._0_8_;
    }
  }
  if (p_Var24 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)local_498;
  local_498._0_8_ = local_538;
  local_548 = (longlong *)local_3b8;
  local_3b8 = (undefined1  [8])0x0;
  uStack_3b0 = (PRTL_CRITICAL_SECTION_DEBUG *)((ulonglong)uStack_3b0 & 0xffffffff00000000);
  local_b8 = &LAB_143ba0eba;
  local_550 = 0;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(local_538 + 0x10),1);
  if ((local_60 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143b9ac10:
  lVar57 = *plVar26;
  *plVar26 = *plVar39;
  *plVar39 = lVar57;
  iVar13 = (int)local_520 + -1;
  plVar54 = plVar54 + -2;
  if ((longlong)plVar58 - (longlong)local_518 < (longlong)local_510 - (longlong)plVar31) {
    if (plVar51 < plVar53) {
      *local_530 = (longlong)plVar51;
      local_530[1] = (longlong)plVar53;
      *(int *)(local_530 + 2) = iVar13;
      local_530 = local_530 + 3;
    }
    plVar31 = plVar26;
    plVar40 = local_530;
    if (plVar39 <= plVar26 + 1) goto LAB_143b9aece;
  }
  else {
    plVar40 = local_530;
    if (plVar26 + 1 < plVar39) {
      *local_530 = (longlong)plVar26;
      local_530[1] = (longlong)plVar54;
      *(int *)(local_530 + 2) = iVar13;
      plVar40 = local_530 + 3;
    }
    plVar26 = plVar51;
    plVar54 = plVar53;
    plVar58 = plVar53;
    if (plVar53 <= plVar51) goto LAB_143b9aece;
  }
  local_530 = plVar40;
  iVar15 = (int)((ulonglong)((longlong)plVar58 - (longlong)plVar31) >> 3);
  uVar30 = (ulonglong)(iVar15 + 1);
  plVar53 = plVar54;
  if (iVar13 == 0) goto LAB_143b9acbe;
  goto LAB_143b9ab4d;
LAB_143b9b25e:
  local_b8 = *(undefined1 **)piVar23;
  uStack_b0 = *(PRTL_CRITICAL_SECTION_DEBUG **)(piVar23 + 2);
  uVar30 = (ulonglong)uStack_b0;
  uVar3 = *(undefined8 *)(piVar46 + -2);
  *(undefined8 *)piVar23 = *(undefined8 *)piVar49;
  *(undefined8 *)(piVar23 + 2) = uVar3;
  local_b8._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
  uStack_b0._4_4_ = (uint)((ulonglong)uStack_b0 >> 0x20);
  *piVar49 = (int)local_b8;
  piVar46[-3] = local_b8._4_4_;
  piVar46[-2] = (int)uStack_b0;
  piVar46[-1] = uStack_b0._4_4_;
  iVar13 = iVar13 + -1;
  piVar46 = piVar46 + -8;
  uStack_b0 = (PRTL_CRITICAL_SECTION_DEBUG *)uVar30;
  if ((longlong)piVar55 - (longlong)piVar32 < (longlong)piVar50 - (longlong)piVar27) {
    if (piVar22 < piVar45) {
      *puVar20 = piVar22;
      puVar20[1] = piVar45;
      *(int *)(puVar20 + 2) = iVar13;
      puVar20 = puVar20 + 3;
    }
    piVar27 = piVar23;
    if (piVar49 <= piVar23 + 4) goto LAB_143b9b512;
  }
  else {
    if (piVar23 + 4 < piVar49) {
      *puVar20 = piVar23;
      puVar20[1] = piVar46;
      *(int *)(puVar20 + 2) = iVar13;
      puVar20 = puVar20 + 3;
    }
    piVar23 = piVar22;
    piVar46 = piVar45;
    piVar55 = piVar45;
    if (piVar45 <= piVar22) goto LAB_143b9b512;
  }
  iVar15 = (int)((ulonglong)((longlong)piVar55 - (longlong)piVar27) >> 4);
  uVar38 = iVar15 + 1;
  piVar32 = piVar27;
  piVar45 = piVar46;
  piVar50 = piVar55;
  if (iVar13 == 0) goto LAB_143b9b306;
  goto LAB_143b9b1b6;
code_r0x000143b9b72d:
  for (; lVar57 != 0; lVar57 = lVar57 + -1) {
    *puVar42 = *puVar36;
    puVar36 = puVar36 + 1;
    puVar42 = puVar42 + 1;
  }
  puVar36 = puVar33;
  puVar35 = puVar47;
  for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
    *puVar35 = *puVar36;
    puVar36 = puVar36 + 1;
    puVar35 = puVar35 + 1;
  }
  puVar36 = &local_b8;
  puVar35 = puVar33;
  for (lVar57 = 10; lVar57 != 0; lVar57 = lVar57 + -1) {
    *puVar35 = *puVar36;
    puVar36 = puVar36 + 1;
    puVar35 = puVar35 + 1;
  }
  iVar13 = iVar13 + -1;
  puVar41 = puVar41 + -0x14;
  if ((longlong)puVar34 - (longlong)puVar37 < (longlong)puVar28 - (longlong)puVar59) {
    if (puVar25 < puVar43) {
      *puVar20 = puVar25;
      puVar20[1] = puVar43;
      *(int *)(puVar20 + 2) = iVar13;
      puVar20 = puVar20 + 3;
    }
    puVar28 = puVar34;
    puVar59 = puVar47;
    if (puVar33 <= puVar47 + 10) goto LAB_143b9ba54;
  }
  else {
    if (puVar47 + 10 < puVar33) {
      *puVar20 = puVar47;
      puVar20[1] = puVar41;
      *(int *)(puVar20 + 2) = iVar13;
      puVar20 = puVar20 + 3;
    }
    puVar47 = puVar25;
    puVar41 = puVar43;
    puVar28 = puVar43;
    if (puVar43 <= puVar25) goto LAB_143b9ba54;
  }
  iVar15 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar59) >> 4) * -0x33333333;
  uVar38 = iVar15 + 1;
  puVar43 = puVar41;
  puVar37 = puVar59;
  if (iVar13 == 0) goto LAB_143b9b7da;
  goto LAB_143b9b65c;
}



// FUNCTION 143b9bc84 FUN_143b9bc84 body=526 status=ok
// SIG undefined FUN_143b9bc84(void)

void FUN_143b9bc84(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
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
  undefined4 uVar17;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  longlong *local_f8;
  code *local_f0;
  longlong **local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    uVar10 = *(undefined4 *)(param_1 + 0x90);
    uVar11 = *(undefined4 *)(param_1 + 0x94);
    uVar12 = *(undefined4 *)(param_1 + 0x98);
    uVar13 = *(undefined4 *)(param_1 + 0x9c);
    uVar14 = *(undefined4 *)(param_1 + 0xa0);
    uVar15 = *(undefined4 *)(param_1 + 0xa4);
    uVar16 = *(undefined4 *)(param_1 + 0xa8);
    uVar17 = *(undefined4 *)(param_1 + 0xac);
    uVar6 = *(undefined4 *)(param_1 + 0xb4);
    uVar7 = *(undefined4 *)(param_1 + 0xb8);
    uVar8 = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
    *(undefined4 *)(param_2 + 5) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar8;
    *(undefined4 *)(param_2 + 2) = uVar14;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar15;
    *(undefined4 *)(param_2 + 3) = uVar16;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar17;
    *(undefined4 *)param_2 = uVar10;
    *(undefined4 *)((longlong)param_2 + 4) = uVar11;
    *(undefined4 *)(param_2 + 1) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar13;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_128);
  }
  local_100 = param_2;
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    uVar8 = 0xffffffff;
    uVar9 = 0x7fefffff;
    uVar6 = 0xffffffff;
    uVar7 = 0xffefffff;
    uVar10 = uVar8;
    uVar11 = uVar9;
    uVar12 = uVar6;
    uVar13 = uVar7;
    uVar14 = uVar6;
    uVar15 = uVar7;
    uVar16 = uVar8;
    uVar17 = uVar9;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 8);
    plVar1 = plVar5 + *(int *)(param_1 + 0x10);
    uVar6 = 0xffffffff;
    uVar7 = 0xffefffff;
    uVar8 = 0xffffffff;
    uVar9 = 0x7fefffff;
    uVar10 = uVar8;
    uVar11 = uVar9;
    uVar12 = uVar6;
    uVar13 = uVar7;
    uVar14 = uVar6;
    uVar15 = uVar7;
    uVar16 = uVar8;
    uVar17 = uVar9;
    do {
      lVar3 = (longlong)*(int *)(*plVar5 + 0x10);
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(*plVar5 + 8);
        lVar3 = lVar3 << 3;
        do {
          plVar2 = *(longlong **)(*plVar4 + 0xd8);
          if (plVar2 != (longlong *)0x0) {
            local_f0 = FUN_143ba31fc;
            local_f8 = plVar4;
            local_e8 = &local_f8;
            (**(code **)(*plVar2 + 0x18))(plVar2,&local_e0,&local_f0);
            if (local_e0 <= (double)CONCAT44(uVar11,uVar10)) {
              uVar10 = SUB84(local_e0,0);
              uVar11 = (undefined4)((ulonglong)local_e0 >> 0x20);
            }
            if (local_d8 <= (double)CONCAT44(uVar17,uVar16)) {
              uVar16 = SUB84(local_d8,0);
              uVar17 = (undefined4)((ulonglong)local_d8 >> 0x20);
            }
            if (local_d0 <= (double)CONCAT44(uVar9,uVar8)) {
              uVar8 = SUB84(local_d0,0);
              uVar9 = (undefined4)((ulonglong)local_d0 >> 0x20);
            }
            if ((double)CONCAT44(uVar7,uVar6) <= local_c8) {
              uVar6 = SUB84(local_c8,0);
              uVar7 = (undefined4)((ulonglong)local_c8 >> 0x20);
            }
            if ((double)CONCAT44(uVar15,uVar14) <= local_c0) {
              uVar14 = SUB84(local_c0,0);
              uVar15 = (undefined4)((ulonglong)local_c0 >> 0x20);
            }
            if ((double)CONCAT44(uVar13,uVar12) <= local_b8) {
              uVar12 = SUB84(local_b8,0);
              uVar13 = (undefined4)((ulonglong)local_b8 >> 0x20);
            }
          }
          plVar4 = plVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  *local_100 = CONCAT44(uVar11,uVar10);
  local_100[1] = CONCAT44(uVar17,uVar16);
  local_100[2] = CONCAT44(uVar9,uVar8);
  local_100[3] = CONCAT44(uVar7,uVar6);
  local_100[4] = CONCAT44(uVar15,uVar14);
  local_100[5] = CONCAT44(uVar13,uVar12);
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b9be9c FUN_143b9be9c body=189 status=ok
// SIG undefined FUN_143b9be9c(void)

void FUN_143b9be9c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong *local_60;
  code *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
    plVar1 = plVar3 + *(int *)(param_1 + 0x10);
    do {
      lVar5 = (longlong)*(int *)(*plVar3 + 0x10);
      if (lVar5 != 0) {
        plVar4 = *(longlong **)(*plVar3 + 8);
        lVar5 = lVar5 << 3;
        do {
          plVar2 = *(longlong **)(*plVar4 + 0xd8);
          if (plVar2 != (longlong *)0x0) {
            local_58 = FUN_143ba32ee;
            local_60 = plVar4;
            local_50 = &local_60;
            (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&local_58);
          }
          plVar4 = plVar4 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9bf5a FUN_143b9bf5a body=2773 status=ok
// SIG undefined FUN_143b9bf5a(void)

void FUN_143b9bf5a(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  code **ppcVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  int iVar29;
  int iVar30;
  longlong *plVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  uint uVar34;
  longlong lVar35;
  undefined8 *puVar36;
  longlong lVar37;
  bool bVar38;
  ulonglong uVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStack_3f8 [40];
  undefined4 local_3d0;
  longlong *local_3c8;
  longlong local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined4 local_388 [190];
  code *local_90;
  longlong *local_88;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  puVar1 = (uint *)(param_1 + 0x28);
  iVar18 = *(int *)(param_1 + 0x40);
  local_3b8 = param_1;
  if (iVar18 == 0) {
    uVar32 = 1;
    uVar20 = 0;
    iVar11 = 0;
    iVar30 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar34 = *puVar9;
    if (uVar34 == 0) {
      iVar11 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar11 = iVar18 + -1;
      }
      uVar20 = 0;
      uVar39 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar39 = uVar20;
      }
      iVar11 = 0;
      do {
        if (uVar39 == uVar20) goto LAB_143b9c016;
        iVar11 = iVar11 + 0x20;
        uVar34 = puVar9[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar34 == 0);
    }
    else {
      uVar20 = 0;
      iVar11 = 0;
    }
    uVar32 = (ulonglong)(-uVar34 & uVar34);
    uVar39 = uVar32 * 2 + 1;
    lVar35 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    iVar30 = (iVar11 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar30) {
      iVar30 = iVar18;
    }
  }
  if (iVar30 != iVar18) {
    uVar34 = 0xffffffff;
    do {
      plVar31 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)iVar30 * 0x20);
      if (plVar31 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar31 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar31)(plVar31);
          LOCK();
          piVar3 = (int *)((longlong)plVar31 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          param_1 = local_3b8;
          if (*piVar3 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
            param_1 = local_3b8;
          }
        }
      }
      uVar34 = uVar34 & ~(uint)uVar32;
      puVar9 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar29 = *(int *)(param_1 + 0x40);
      iVar30 = (int)uVar20;
      lVar35 = (longlong)iVar30;
      uVar14 = puVar9[lVar35] & uVar34;
      if (uVar14 == 0) {
        iVar12 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar12 = iVar29 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar30) {
          iVar13 = iVar30;
        }
        param_1 = local_3b8;
        if (iVar30 < iVar12) {
          lVar17 = 0;
          do {
            uVar14 = puVar9[lVar35 + lVar17 + 1];
            if (uVar14 != 0) {
              uVar20 = (ulonglong)(iVar30 + (int)lVar17 + 1);
              uVar34 = 0xffffffff;
              goto LAB_143b9c82f;
            }
            iVar11 = iVar11 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar13 - lVar35 != lVar17);
          uVar34 = 0xffffffff;
          iVar30 = iVar13;
        }
        uVar20 = (ulonglong)(iVar30 + 1);
        iVar30 = iVar29;
      }
      else {
LAB_143b9c82f:
        uVar32 = (ulonglong)(-uVar14 & uVar14);
        uVar39 = uVar32 * 2 + 1;
        lVar35 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        iVar30 = (iVar11 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
        if (iVar29 <= iVar30) {
          iVar30 = iVar29;
        }
      }
    } while (iVar30 != iVar18);
  }
LAB_143b9c016:
  local_3b0 = (longlong *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_148549594(local_3b0);
    param_1 = local_3b8;
  }
  plVar31 = local_3b0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar10 = *(longlong **)(param_1 + 8);
    local_3a8 = plVar10 + *(int *)(param_1 + 0x10);
    do {
      lVar35 = (longlong)*(int *)(*plVar10 + 0x10);
      if (lVar35 != 0) {
        lVar17 = *(longlong *)(*plVar10 + 8);
        lVar37 = 0;
        do {
          lVar5 = *(longlong *)(lVar17 + lVar37);
          lVar6 = *(longlong *)(lVar5 + 0xd8);
          if (lVar6 != 0) {
            lVar7 = *plVar10;
            iVar18 = *(int *)(param_1 + 0x78);
            lVar19 = (longlong)iVar18;
            *(uint *)(param_1 + 0x78) = iVar18 + 1U;
            if (*(uint *)(param_1 + 0x7c) < iVar18 + 1U) {
              FUN_1485495c4(plVar31,iVar18);
              param_1 = local_3b8;
              plVar31 = local_3b0;
            }
            lVar8 = *plVar31;
            *(longlong *)(lVar8 + lVar19 * 0x48) = lVar7;
            *(longlong *)(lVar8 + 8 + lVar19 * 0x48) = lVar5;
            *(longlong *)(lVar8 + 0x10 + lVar19 * 0x48) = lVar6;
            *(undefined8 *)(lVar8 + 0x18 + lVar19 * 0x48) = 0x7fefffffffffffff;
            *(undefined8 *)(lVar8 + 0x20 + lVar19 * 0x48) = 0x7fefffffffffffff;
            *(undefined8 *)(lVar8 + 0x28 + lVar19 * 0x48) = 0x7fefffffffffffff;
            *(undefined8 *)(lVar8 + 0x30 + lVar19 * 0x48) = 0xffefffffffffffff;
            *(undefined8 *)(lVar8 + 0x38 + lVar19 * 0x48) = 0xffefffffffffffff;
            *(undefined8 *)(lVar8 + 0x40 + lVar19 * 0x48) = 0xffefffffffffffff;
          }
          lVar37 = lVar37 + 8;
        } while (lVar35 * 8 != lVar37);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != local_3a8);
  }
  iVar18 = *(int *)(param_1 + 0x78);
  uVar20 = (ulonglong)iVar18;
  local_3a0 = param_1;
  if (1 < (longlong)uVar20) {
    lVar35 = *plVar31;
    memset(local_388,0,0x2f0);
    local_390 = lVar35 + uVar20 * 0x48 + -0x48;
    local_398 = lVar35;
    fVar40 = logf((float)iVar18);
    local_388[0] = (int)(longlong)(fVar40 + fVar40);
    plVar31 = &local_398;
    do {
      puVar16 = (undefined8 *)*plVar31;
      puVar24 = (undefined8 *)plVar31[1];
      iVar18 = (int)plVar31[2];
      iVar11 = (int)((ulonglong)((longlong)puVar24 - (longlong)puVar16) >> 3) * 0x38e38e39;
      uVar34 = iVar11 + 1;
      puVar28 = puVar16;
      puVar26 = puVar24;
      if (iVar18 != 0) {
LAB_143b9c1ad:
        if (8 < (int)uVar34) {
          puVar21 = puVar16 + (ulonglong)(uVar34 >> 1) * 9;
          ppcVar25 = &local_90;
          for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
            *ppcVar25 = (code *)*puVar21;
            puVar21 = puVar21 + 1;
            ppcVar25 = ppcVar25 + 1;
          }
          puVar21 = puVar16;
          puVar15 = puVar16 + (ulonglong)(uVar34 >> 1) * 9;
          for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar15 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar15 = puVar15 + 1;
          }
          ppcVar25 = &local_90;
          puVar21 = puVar16;
          for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar21 = *ppcVar25;
            ppcVar25 = ppcVar25 + 1;
            puVar21 = puVar21 + 1;
          }
          puVar21 = puVar24 + 9;
          puVar15 = puVar16;
          do {
            puVar23 = puVar15 + 9;
            puVar27 = puVar15 + 9;
            do {
              puVar15 = puVar27;
              puVar36 = puVar23;
              if (puVar24 < puVar15) break;
              puVar23 = puVar36 + 9;
              puVar27 = puVar15 + 9;
            } while ((ulonglong)puVar15[2] <= (ulonglong)puVar16[2]);
            puVar23 = puVar21 + -0x12;
            do {
              puVar27 = puVar21;
              puVar33 = puVar23;
              puVar21 = puVar27 + -9;
              if (puVar21 <= puVar16) break;
              puVar23 = puVar33 + -9;
            } while ((ulonglong)puVar16[2] <= (ulonglong)puVar27[-7]);
            lVar35 = 9;
            puVar23 = puVar16;
            puVar22 = puVar15;
            ppcVar25 = &local_90;
            if (puVar21 < puVar15) goto code_r0x000143b9c27d;
            for (; lVar35 != 0; lVar35 = lVar35 + -1) {
              *ppcVar25 = (code *)*puVar22;
              puVar22 = puVar22 + 1;
              ppcVar25 = ppcVar25 + 1;
            }
            puVar23 = puVar21;
            puVar27 = puVar15;
            for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
              *puVar27 = *puVar23;
              puVar23 = puVar23 + 1;
              puVar27 = puVar27 + 1;
            }
            ppcVar25 = &local_90;
            puVar23 = puVar21;
            for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
              *puVar23 = *ppcVar25;
              ppcVar25 = ppcVar25 + 1;
              puVar23 = puVar23 + 1;
            }
          } while( true );
        }
        while (puVar26 = puVar16, puVar28 = puVar16, puVar16 < puVar24) {
          while (puVar21 = puVar26, puVar28 = puVar28 + 9, puVar28 <= puVar24) {
            puVar26 = puVar28;
            if ((ulonglong)puVar28[2] <= (ulonglong)puVar21[2]) {
              puVar26 = puVar21;
            }
          }
          puVar28 = puVar24 + -9;
          puVar26 = puVar21;
          ppcVar25 = &local_90;
          for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
            *ppcVar25 = (code *)*puVar26;
            puVar26 = puVar26 + 1;
            ppcVar25 = ppcVar25 + 1;
          }
          puVar26 = puVar24;
          for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar21 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar21 = puVar21 + 1;
          }
          ppcVar25 = &local_90;
          puVar26 = puVar24;
          for (lVar35 = 9; puVar24 = puVar28, lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar26 = *ppcVar25;
            ppcVar25 = ppcVar25 + 1;
            puVar26 = puVar26 + 1;
          }
        }
        goto LAB_143b9c58a;
      }
LAB_143b9c32a:
      if (uVar34 != 0) {
        iVar11 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
        iVar18 = iVar11;
joined_r0x000143b9c352:
        do {
          iVar30 = iVar18 * 2 + 1;
          if (iVar30 < (int)uVar34) {
            iVar29 = iVar18 * 2 + 2;
            if ((iVar29 < (int)uVar34) &&
               ((ulonglong)puVar16[(longlong)iVar30 * 9 + 2] <=
                (ulonglong)puVar16[(longlong)iVar29 * 9 + 2])) {
              iVar30 = iVar29;
            }
            if ((ulonglong)puVar16[(longlong)iVar18 * 9 + 2] <
                (ulonglong)puVar16[(longlong)iVar30 * 9 + 2]) {
              puVar24 = puVar16 + (longlong)iVar18 * 9;
              ppcVar25 = &local_90;
              for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
                *ppcVar25 = (code *)*puVar24;
                puVar24 = puVar24 + 1;
                ppcVar25 = ppcVar25 + 1;
              }
              puVar24 = puVar16 + (longlong)iVar30 * 9;
              puVar28 = puVar16 + (longlong)iVar18 * 9;
              for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
                *puVar28 = *puVar24;
                puVar24 = puVar24 + 1;
                puVar28 = puVar28 + 1;
              }
              ppcVar25 = &local_90;
              puVar24 = puVar16 + (longlong)iVar30 * 9;
              for (lVar35 = 9; iVar18 = iVar30, lVar35 != 0; lVar35 = lVar35 + -1) {
                *puVar24 = *ppcVar25;
                ppcVar25 = ppcVar25 + 1;
                puVar24 = puVar24 + 1;
              }
              goto joined_r0x000143b9c352;
            }
          }
          bVar38 = iVar11 != 0;
          iVar11 = iVar11 + -1;
          iVar18 = iVar11;
        } while (bVar38);
        if (1 < (int)uVar34) {
          puVar24 = puVar16;
          ppcVar25 = &local_90;
          for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
            *ppcVar25 = (code *)*puVar24;
            puVar24 = puVar24 + 1;
            ppcVar25 = ppcVar25 + 1;
          }
          puVar24 = puVar16 + ((ulonglong)uVar34 - 1) * 9;
          puVar28 = puVar16;
          for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar28 = *puVar24;
            puVar24 = puVar24 + 1;
            puVar28 = puVar28 + 1;
          }
          ppcVar25 = &local_90;
          puVar24 = puVar16 + ((ulonglong)uVar34 - 1) * 9;
          for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar24 = *ppcVar25;
            ppcVar25 = ppcVar25 + 1;
            puVar24 = puVar24 + 1;
          }
          uVar20 = (ulonglong)uVar34 - 1;
          if (uVar34 != 2) {
            do {
              iVar18 = 0;
              iVar30 = 1;
              iVar11 = 0;
              do {
                iVar18 = iVar18 + 2;
                iVar29 = iVar30;
                if (((longlong)iVar18 < (longlong)uVar20) &&
                   ((ulonglong)puVar16[(longlong)iVar30 * 9 + 2] <=
                    (ulonglong)puVar16[(longlong)iVar18 * 9 + 2])) {
                  iVar29 = iVar18;
                }
                if ((ulonglong)puVar16[(longlong)iVar29 * 9 + 2] <=
                    (ulonglong)puVar16[(longlong)iVar11 * 9 + 2]) break;
                puVar24 = puVar16 + (longlong)iVar11 * 9;
                ppcVar25 = &local_90;
                for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
                  *ppcVar25 = (code *)*puVar24;
                  puVar24 = puVar24 + 1;
                  ppcVar25 = ppcVar25 + 1;
                }
                puVar24 = puVar16 + (longlong)iVar29 * 9;
                puVar28 = puVar16 + (longlong)iVar11 * 9;
                for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
                  *puVar28 = *puVar24;
                  puVar24 = puVar24 + 1;
                  puVar28 = puVar28 + 1;
                }
                ppcVar25 = &local_90;
                puVar24 = puVar16 + (longlong)iVar29 * 9;
                for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
                  *puVar24 = *ppcVar25;
                  ppcVar25 = ppcVar25 + 1;
                  puVar24 = puVar24 + 1;
                }
                iVar18 = iVar29 * 2;
                iVar30 = iVar29 * 2 + 1;
                iVar11 = iVar29;
              } while ((longlong)iVar30 < (longlong)uVar20);
              puVar24 = puVar16;
              ppcVar25 = &local_90;
              for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
                *ppcVar25 = (code *)*puVar24;
                puVar24 = puVar24 + 1;
                ppcVar25 = ppcVar25 + 1;
              }
              puVar24 = puVar16 + (uVar20 - 1) * 9;
              puVar28 = puVar16;
              for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
                *puVar28 = *puVar24;
                puVar24 = puVar24 + 1;
                puVar28 = puVar28 + 1;
              }
              ppcVar25 = &local_90;
              puVar24 = puVar16 + (uVar20 - 1) * 9;
              for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
                *puVar24 = *ppcVar25;
                ppcVar25 = ppcVar25 + 1;
                puVar24 = puVar24 + 1;
              }
              bVar38 = 2 < uVar20;
              uVar20 = uVar20 - 1;
            } while (bVar38);
          }
        }
      }
LAB_143b9c58a:
      plVar31 = plVar31 + -3;
    } while (&local_398 <= plVar31);
    uVar20 = (ulonglong)*(uint *)(local_3b8 + 0x78);
    local_3a0 = local_3b8;
  }
  *(undefined8 *)(local_3a0 + 0x90) = 0x7fefffffffffffff;
  *(undefined8 *)(local_3a0 + 0x98) = 0x7fefffffffffffff;
  *(undefined8 *)(local_3a0 + 0xa0) = 0x7fefffffffffffff;
  *(undefined8 *)(local_3a0 + 0xa8) = 0xffefffffffffffff;
  *(undefined8 *)(local_3a0 + 0xb0) = 0xffefffffffffffff;
  *(undefined8 *)(local_3a0 + 0xb8) = 0xffefffffffffffff;
  local_88 = &local_3a0;
  local_3c8 = &local_398;
  local_398 = 0;
  local_390 = (ulonglong)local_390._4_4_ << 0x20;
  local_90 = FUN_143ba347c;
  local_3d0 = 0;
  FUN_1401f8d10(L"ParallelFor Task",uVar20 & 0xffffffff,1);
  if ((longlong)*(int *)(local_3b8 + 0x78) != 0) {
    lVar35 = *(longlong *)(local_3b8 + 0x70);
    dVar41 = *(double *)(local_3b8 + 0x90);
    dVar42 = *(double *)(local_3b8 + 0x98);
    dVar44 = *(double *)(local_3b8 + 0xa0);
    dVar43 = *(double *)(local_3b8 + 0xa8);
    dVar45 = *(double *)(local_3b8 + 0xb0);
    dVar46 = *(double *)(local_3b8 + 0xb8);
    lVar17 = 0;
    do {
      dVar4 = *(double *)(lVar35 + 0x18 + lVar17);
      if (dVar4 <= dVar41) {
        dVar41 = dVar4;
      }
      *(double *)(local_3b8 + 0x90) = dVar41;
      dVar4 = *(double *)(lVar35 + 0x20 + lVar17);
      if (dVar4 <= dVar42) {
        dVar42 = dVar4;
      }
      *(double *)(local_3b8 + 0x98) = dVar42;
      dVar4 = *(double *)(lVar35 + 0x28 + lVar17);
      if (dVar4 <= dVar44) {
        dVar44 = dVar4;
      }
      *(double *)(local_3b8 + 0xa0) = dVar44;
      dVar4 = *(double *)(lVar35 + 0x30 + lVar17);
      if (dVar43 <= dVar4) {
        dVar43 = dVar4;
      }
      *(double *)(local_3b8 + 0xa8) = dVar43;
      dVar4 = *(double *)(lVar35 + 0x38 + lVar17);
      if (dVar45 <= dVar4) {
        dVar45 = dVar4;
      }
      *(double *)(local_3b8 + 0xb0) = dVar45;
      dVar4 = *(double *)(lVar35 + 0x40 + lVar17);
      if (dVar46 <= dVar4) {
        dVar46 = dVar4;
      }
      *(double *)(local_3b8 + 0xb8) = dVar46;
      lVar17 = lVar17 + 0x48;
    } while ((longlong)*(int *)(local_3b8 + 0x78) * 0x48 != lVar17);
  }
  plVar10 = (longlong *)FUN_14001cc68(0x1e0);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14af17ac0;
  plVar31 = plVar10 + 2;
  memset(plVar31,0,0x1d0);
  FUN_1458481c0(plVar31);
  lVar35 = local_3b8;
  if (plVar10 == (longlong *)0x0) {
    *(undefined8 *)(local_3b8 + 0x80) = 0x10;
    plVar31 = *(longlong **)(local_3b8 + 0x88);
    if (plVar31 == (longlong *)0x0) goto LAB_143b9c913;
    *(undefined8 *)(local_3b8 + 0x88) = 0;
LAB_143b9c89f:
    LOCK();
    plVar2 = plVar31 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar31)(plVar31);
      LOCK();
      piVar3 = (int *)((longlong)plVar31 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
    }
    if (plVar10 == (longlong *)0x0) goto LAB_143b9c913;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(longlong **)(local_3b8 + 0x80) = plVar31;
    plVar31 = *(longlong **)(local_3b8 + 0x88);
    if (plVar10 == plVar31) {
      LOCK();
      plVar31 = plVar10 + 1;
      *(int *)plVar31 = (int)*plVar31 + -1;
      UNLOCK();
      if ((int)*plVar31 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    else {
      *(longlong **)(local_3b8 + 0x88) = plVar10;
      if (plVar31 != (longlong *)0x0) goto LAB_143b9c89f;
    }
  }
  LOCK();
  plVar31 = plVar10 + 1;
  *(int *)plVar31 = (int)*plVar31 + -1;
  UNLOCK();
  if ((int)*plVar31 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar3 = (int *)((longlong)plVar10 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_143b9c913:
  plVar31 = local_3b0;
  dVar41 = *(double *)(local_3b8 + 0xb8) - *(double *)(local_3b8 + 0xa0);
  dVar44 = *(double *)(local_3b8 + 0xb0) - *(double *)(local_3b8 + 0x98);
  dVar41 = (double)(-(ulonglong)(0.0 <= dVar41) & (ulonglong)dVar41);
  dVar44 = (double)(-(ulonglong)(0.0 <= dVar44) & (ulonglong)dVar44);
  uVar39 = -(ulonglong)(dVar41 <= dVar44);
  dVar42 = *(double *)(local_3b8 + 0xa8) - *(double *)(local_3b8 + 0x90);
  dVar41 = (double)(~uVar39 & (ulonglong)dVar41 | uVar39 & (ulonglong)dVar44);
  dVar42 = (double)(-(ulonglong)(0.0 <= dVar42) & (ulonglong)dVar42);
  uVar39 = -(ulonglong)(dVar41 <= dVar42);
  **(double **)(local_3b8 + 0x80) =
       (double)(uVar39 & (ulonglong)dVar42 | ~uVar39 & (ulonglong)dVar41) * 0.25;
  *(undefined4 *)(*(longlong *)(local_3b8 + 0x80) + 0x10) = 5;
  if (0 < (int)uVar20) {
    lVar17 = 0x18;
    uVar39 = 0;
    do {
      FUN_146c86256(*(undefined8 *)(lVar35 + 0x80),uVar39 & 0xffffffff,*plVar31 + lVar17);
      uVar39 = uVar39 + 1;
      lVar17 = lVar17 + 0x48;
    } while ((uVar20 & 0xffffffff) != uVar39);
  }
  *(undefined1 *)(local_3b8 + 0xc0) = 1;
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143b9c27d:
  for (; lVar35 != 0; lVar35 = lVar35 + -1) {
    *ppcVar25 = (code *)*puVar23;
    puVar23 = puVar23 + 1;
    ppcVar25 = ppcVar25 + 1;
  }
  puVar23 = puVar21;
  puVar22 = puVar16;
  for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
    *puVar22 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar22 = puVar22 + 1;
  }
  ppcVar25 = &local_90;
  puVar23 = puVar21;
  for (lVar35 = 9; lVar35 != 0; lVar35 = lVar35 + -1) {
    *puVar23 = *ppcVar25;
    ppcVar25 = ppcVar25 + 1;
    puVar23 = puVar23 + 1;
  }
  iVar18 = iVar18 + -1;
  puVar27 = puVar27 + -0x12;
  if ((longlong)puVar33 - (longlong)puVar28 < (longlong)puVar26 - (longlong)puVar36) {
    if (puVar15 < puVar24) {
      *plVar31 = (longlong)puVar15;
      plVar31[1] = (longlong)puVar24;
      *(int *)(plVar31 + 2) = iVar18;
      plVar31 = plVar31 + 3;
    }
    puVar36 = puVar16;
    if (puVar21 <= puVar16 + 9) goto LAB_143b9c58a;
  }
  else {
    if (puVar16 + 9 < puVar21) {
      *plVar31 = (longlong)puVar16;
      plVar31[1] = (longlong)puVar27;
      *(int *)(plVar31 + 2) = iVar18;
      plVar31 = plVar31 + 3;
    }
    puVar16 = puVar15;
    puVar27 = puVar24;
    puVar33 = puVar24;
    if (puVar24 <= puVar15) goto LAB_143b9c58a;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar33 - (longlong)puVar36) >> 3) * 0x38e38e39;
  uVar34 = iVar11 + 1;
  puVar24 = puVar27;
  puVar28 = puVar36;
  puVar26 = puVar33;
  if (iVar18 == 0) goto LAB_143b9c32a;
  goto LAB_143b9c1ad;
}



// FUNCTION 143b9ca30 FUN_143b9ca30 body=3338 status=ok
// SIG undefined FUN_143b9ca30(void)

void FUN_143b9ca30(undefined8 *param_1)

{
  void *_Src;
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f38 [32];
  undefined8 local_f18;
  undefined4 local_f10;
  undefined4 local_f08;
  undefined8 local_f00;
  wchar_t *local_ef8;
  undefined1 *local_ef0;
  undefined1 *local_ee8;
  code **local_ee0;
  code *local_ed8;
  code *local_ed0;
  code *local_ec8;
  undefined8 **local_ec0;
  code *local_eb8;
  undefined8 **local_eb0;
  code *local_ea8;
  undefined8 **local_ea0;
  code *local_e98;
  undefined8 **local_e90;
  code *local_e88;
  undefined8 **local_e80;
  code *local_e78;
  undefined8 **local_e70;
  code *local_e68;
  undefined8 **local_e60;
  code *local_e58;
  undefined8 **local_e50;
  code *local_e48;
  undefined8 **local_e40;
  code *local_e38;
  undefined8 **local_e30;
  undefined1 local_e28 [4];
  undefined1 local_e24 [4];
  longlong *local_e20 [2];
  undefined8 *local_e10;
  longlong **local_e08;
  undefined8 *local_e00;
  code **local_df8;
  undefined8 *local_df0;
  code **local_de8;
  void *local_de0;
  int local_dd8;
  undefined4 local_dd4;
  longlong local_dd0;
  longlong local_dc8;
  undefined8 uStack_dc0;
  wchar_t *local_db8;
  undefined4 local_db0;
  longlong *local_da8 [2];
  longlong *local_d98;
  char local_d6c;
  code *local_d48;
  undefined4 local_d40 [7];
  char local_d24;
  longlong *local_d18;
  char local_cf0;
  undefined1 local_d8;
  undefined1 local_d0 [24];
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f38;
  *(undefined1 *)((longlong)param_1 + 0x131) = 0;
  uVar3 = DAT_14c872be8;
  bVar7 = (*(int *)(param_1 + 10) == 2) +
          (*(int *)((longlong)param_1 + 0x4c) == 2) + (*(int *)(param_1 + 9) == 2) +
          (*(int *)((longlong)param_1 + 0x44) == 2) +
          (*(int *)(param_1 + 8) == 2) + (*(int *)((longlong)param_1 + 0x3c) == 2) +
          (*(int *)(param_1 + 7) == 2) + (*(int *)((longlong)param_1 + 0x34) == 2) +
          (*(int *)(param_1 + 6) == 2) + (*(int *)((longlong)param_1 + 0x2c) == 2);
  if (bVar7 != 0) {
    local_d48 = (code *)0x14af15a8a;
    local_d40[0] = 0xe;
    FUN_1446e940c(&local_db8,&local_d48);
    local_d48 = (code *)0x14ad84496;
    local_d40[0] = 0xc;
    FUN_1446e940c(&local_dc8,&local_d48);
    local_d48 = (code *)0x14af15a64;
    local_d40[0] = 0x12;
    FUN_140208c1e(&local_b8,&local_dc8,&local_db8,&local_d48);
    local_f18 = uVar3;
    FUN_140997f46(local_da8,(float)bVar7,&local_b8,1);
    FUN_140997a0e(local_da8);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    FUN_14681a61e(local_da8,*(undefined1 *)(param_1 + 0x26),0);
    local_d48 = (code *)param_1[1];
    local_d40[0] = *(undefined4 *)(param_1 + 2);
    local_98 = 0;
    local_90 = 0;
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    FUN_148549790(&local_b8,&local_d48);
    local_dc8 = 0;
    uStack_dc0 = 0;
    if (*(char *)(param_1 + 5) == '\x01') {
      if (DAT_14cac9ca8 == 0) {
        local_d48 = FUN_141030f22;
        local_ed0 = FUN_14081d0ea;
        local_ed8 = FUN_14081d0ea;
        local_ee8 = &LAB_1478c0a72;
        local_ef0 = &LAB_1417b2375;
        local_ef8 = L"Engine";
        local_f00 = 0x1000000000;
        local_f08 = 0x10000004;
        local_f10 = 8;
        local_f18 = CONCAT44(local_f18._4_4_,0x390);
        local_ee0 = &local_d48;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      local_dd0 = DAT_14cac9ca8;
      if ((DAT_14cac9ca8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_14146ff3c(&local_d48,*param_1,&local_dd0,5);
      if (local_d24 == '\0') {
        do {
          if ((int)uStack_b0 != local_84) {
            uVar4 = ((uint)((ulonglong)local_d18 >> 0x14) & 0xffff ^
                    (uint)((ulonglong)local_d18 >> 4)) * -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            puVar5 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar5 = local_80;
            }
            for (iVar8 = *(int *)(puVar5 + (ulonglong)(local_70 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
                ; iVar8 != -1; iVar8 = (int)local_b8[(longlong)iVar8 * 2 + 1]) {
              if ((longlong *)local_b8[(longlong)iVar8 * 2] == local_d18) goto LAB_143b9cd88;
            }
          }
          (**(code **)(*local_d18 + 0x4c0))(local_d18,0);
          plVar1 = local_d18;
          lVar9 = (longlong)(int)uStack_dc0;
          uVar4 = (int)uStack_dc0 + 1;
          uStack_dc0 = CONCAT44(uStack_dc0._4_4_,uVar4);
          if (uStack_dc0._4_4_ < uVar4) {
            FUN_1447d05f2(&local_dc8);
          }
          *(longlong **)(local_dc8 + lVar9 * 8) = plVar1;
LAB_143b9cd88:
          FUN_14146ffc0(&local_d48);
        } while (local_d24 == '\0');
      }
      if (local_cf0 == '\x01') {
        FUN_14024445c(local_d40);
      }
    }
    FUN_14851fc24(&local_d48);
    local_d48 = (code *)*param_1;
    FUN_143b9d73c(&local_d48);
    local_de0 = (void *)0x0;
    local_dd8 = *(int *)(param_1 + 0x25);
    lVar9 = (longlong)local_dd8;
    _Src = (void *)param_1[0x24];
    if (lVar9 == 0) {
      local_dd4 = 0;
      iVar8 = 0;
    }
    else {
      FUN_1446dd670(&local_de0,local_dd8,0);
      memcpy(local_de0,_Src,lVar9 * 2);
      iVar8 = local_dd8;
    }
    local_d8 = *(undefined1 *)(param_1 + 0x23);
    iVar2 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      FUN_1402980a2(local_d0);
    }
    if (local_de0 != (void *)0x0) {
      FUN_1400020a8(local_de0);
    }
    local_db8 = L"CapturingScene_DeviceDepth";
    local_db0 = 0x1a;
    local_e10 = param_1;
    local_e08 = local_da8;
    local_e00 = param_1;
    local_df8 = &local_d48;
    local_df0 = param_1;
    local_de8 = &local_d48;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Device Depth";
    local_db0 = 0x16;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_e38 = FUN_143ba39e8;
    local_e30 = &local_e00;
    FUN_143b9da5c(&local_e10,&local_e38,0x40,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_BaseColor";
    local_db0 = 0x18;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Base Color";
    local_db0 = 0x14;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_e48 = FUN_143ba3b68;
    local_e40 = &local_df0;
    FUN_143b9da5c(&local_e10,&local_e48,1,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_WorldNormal";
    local_db0 = 0x1a;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing World Normal";
    local_db0 = 0x16;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_e58 = FUN_143ba3b68;
    local_e50 = &local_df0;
    FUN_143b9da5c(&local_e10,&local_e58,0x20,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_CombinedMRS";
    local_db0 = 0x1a;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Packed MRS";
    local_db0 = 0x14;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_e68 = FUN_143ba3b68;
    local_e60 = &local_df0;
    FUN_143b9da5c(&local_e10,&local_e68,0x80,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_Metallic";
    local_db0 = 0x17;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Metallic";
    local_db0 = 0x12;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_e78 = FUN_143ba39e8;
    local_e70 = &local_e00;
    FUN_143b9da5c(&local_e10,&local_e78,4,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_Roughness";
    local_db0 = 0x18;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Roughness";
    local_db0 = 0x13;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_e88 = FUN_143ba39e8;
    local_e80 = &local_e00;
    FUN_143b9da5c(&local_e10,&local_e88,2,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_Specular";
    local_db0 = 0x17;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Specular";
    local_db0 = 0x12;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_e98 = FUN_143ba39e8;
    local_e90 = &local_e00;
    FUN_143b9da5c(&local_e10,&local_e98,8,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_Emissive";
    local_db0 = 0x17;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Emissive";
    local_db0 = 0x12;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_ea8 = FUN_143ba3b68;
    local_ea0 = &local_df0;
    FUN_143b9da5c(&local_e10,&local_ea8,0x10,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_Opacity";
    local_db0 = 0x16;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Opacity";
    local_db0 = 0x11;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_eb8 = FUN_143ba39e8;
    local_eb0 = &local_e00;
    FUN_143b9da5c(&local_e10,&local_eb8,0x100,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    local_db8 = L"CapturingScene_SubsurfaceColor";
    local_db0 = 0x1e;
    FUN_1446e940c(local_e24,&local_db8);
    local_db8 = L"SceneCapture";
    local_db0 = 0xc;
    FUN_1446e940c(local_e28,&local_db8);
    local_db8 = L"Capturing Subsurface Color";
    local_db0 = 0x1a;
    FUN_140208c1e(local_e20,local_e28,local_e24,&local_db8);
    local_ec8 = FUN_143ba3b68;
    local_ec0 = &local_df0;
    FUN_143b9da5c(&local_e10,&local_ec8,0x200,local_e20);
    if (local_e20[0] != (longlong *)0x0) {
      (**(code **)(*local_e20[0] + 0x10))();
    }
    FUN_14851fcc0(&local_d48);
    lVar9 = local_dc8;
    lVar6 = (longlong)(int)uStack_dc0;
    if (lVar6 != 0) {
      lVar10 = 0;
      do {
        plVar1 = *(longlong **)(lVar9 + lVar10);
        (**(code **)(*plVar1 + 0x4b0))(plVar1);
        FUN_14132cf46(plVar1,0,0);
        lVar10 = lVar10 + 8;
      } while (lVar6 * 8 != lVar10);
    }
    if (local_dc8 != 0) {
      FUN_1400020a8(local_dc8);
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140d0a7fc(&local_b8);
    FUN_140997a5c(local_da8);
    if (local_d6c == '\x01') {
      local_d6c = '\0';
    }
    if (local_d98 != (longlong *)0x0) {
      (**(code **)(*local_d98 + 0x10))();
    }
    if (local_da8[0] != (longlong *)0x0) {
      (**(code **)(*local_da8[0] + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9d73c FUN_143b9d73c body=798 status=ok
// SIG undefined FUN_143b9d73c(void)

void FUN_143b9d73c(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88 [7];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = param_1;
  local_120 = param_3;
  FUN_14852326c(param_1 + 8);
  local_50 = '\0';
  if ((longlong)(int)param_2[1] != 0) {
    plVar7 = (longlong *)*param_2;
    local_118 = plVar7 + (int)param_2[1];
    do {
      lVar4 = *plVar7;
      iVar2 = *(int *)(lVar4 + 0x268);
      local_110 = plVar7;
      if (iVar2 == 0) {
        uVar15 = 1;
        uVar14 = 0;
        iVar5 = 0;
        iVar17 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar4 + 0x260);
        if (*(uint **)(lVar4 + 0x260) == (uint *)0x0) {
          puVar6 = (uint *)(lVar4 + 0x250);
        }
        uVar8 = *puVar6;
        if (uVar8 == 0) {
          iVar5 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar5 = iVar2 + -1;
          }
          uVar14 = 0;
          uVar15 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar15 = uVar14;
          }
          iVar17 = 0;
          do {
            if (uVar15 == uVar14) goto LAB_143b9d82e;
            iVar17 = iVar17 + 0x20;
            uVar8 = puVar6[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar14 = 0;
          iVar17 = 0;
        }
        uVar15 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != iVar2) {
        uVar8 = 0xffffffff;
        do {
          local_c8 = local_128;
          plStack_c0 = local_88;
          FUN_143ba03cc(&local_c8,
                        *(undefined8 *)(*(longlong *)(lVar4 + 0x240) + (longlong)iVar5 * 0x10),
                        &local_c8);
          uVar8 = ~(uint)uVar15 & uVar8;
          puVar6 = *(uint **)(lVar4 + 0x260);
          if (*(uint **)(lVar4 + 0x260) == (uint *)0x0) {
            puVar6 = (uint *)(lVar4 + 0x250);
          }
          iVar3 = *(int *)(lVar4 + 0x268);
          iVar5 = (int)uVar14;
          lVar12 = (longlong)iVar5;
          uVar11 = puVar6[lVar12] & uVar8;
          if (uVar11 == 0) {
            iVar9 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar9 = iVar3 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar5) {
              iVar10 = iVar5;
            }
            if (iVar5 < iVar9) {
              lVar13 = 0;
              do {
                uVar11 = puVar6[lVar12 + lVar13 + 1];
                if (uVar11 != 0) {
                  uVar14 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_143b9d907;
                }
                iVar17 = iVar17 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar10 - lVar12 != lVar13);
              uVar8 = 0xffffffff;
              iVar5 = iVar10;
            }
            uVar14 = (ulonglong)(iVar5 + 1);
            iVar5 = iVar3;
          }
          else {
LAB_143b9d907:
            uVar15 = (ulonglong)(-uVar11 & uVar11);
            uVar1 = uVar15 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar5 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar5) {
              iVar5 = iVar3;
            }
          }
        } while (iVar5 != iVar2);
      }
LAB_143b9d82e:
      plVar7 = local_110 + 1;
    } while (plVar7 != local_118);
  }
  lVar12 = local_128;
  lVar4 = local_120[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar13 = *local_120;
    lVar16 = 0;
    do {
      local_c8 = lVar12;
      plStack_c0 = local_88;
      FUN_143ba03cc(&local_c8,*(undefined8 *)(lVar13 + lVar16),&local_c8);
      lVar16 = lVar16 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar16);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  local_98 = 0;
  plVar7 = &local_c8;
  if (local_50 != '\0') {
    plVar7 = local_88;
  }
  local_108 = (undefined4)*plVar7;
  uStack_104 = *(undefined4 *)((longlong)plVar7 + 4);
  uStack_100 = (undefined4)plVar7[1];
  uStack_fc = *(undefined4 *)((longlong)plVar7 + 0xc);
  local_f8 = (undefined4)plVar7[2];
  uStack_f4 = *(undefined4 *)((longlong)plVar7 + 0x14);
  uStack_f0 = (undefined4)plVar7[3];
  uStack_ec = *(undefined4 *)((longlong)plVar7 + 0x1c);
  local_e8 = (undefined4)plVar7[4];
  uStack_e4 = *(undefined4 *)((longlong)plVar7 + 0x24);
  uStack_e0 = (undefined4)plVar7[5];
  uStack_dc = *(undefined4 *)((longlong)plVar7 + 0x2c);
  local_d8 = plVar7[6];
  *(longlong *)(lVar12 + 0x88) = local_d8;
  *(undefined4 *)(lVar12 + 0x78) = local_e8;
  *(undefined4 *)(lVar12 + 0x7c) = uStack_e4;
  *(undefined4 *)(lVar12 + 0x80) = uStack_e0;
  *(undefined4 *)(lVar12 + 0x84) = uStack_dc;
  *(undefined4 *)(lVar12 + 0x68) = local_f8;
  *(undefined4 *)(lVar12 + 0x6c) = uStack_f4;
  *(undefined4 *)(lVar12 + 0x70) = uStack_f0;
  *(undefined4 *)(lVar12 + 0x74) = uStack_ec;
  *(undefined4 *)(lVar12 + 0x58) = local_108;
  *(undefined4 *)(lVar12 + 0x5c) = uStack_104;
  *(undefined4 *)(lVar12 + 0x60) = uStack_100;
  *(undefined4 *)(lVar12 + 100) = uStack_fc;
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b9da5c FUN_143b9da5c body=1169 status=ok
// SIG undefined FUN_143b9da5c(void)

void FUN_143b9da5c(longlong *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  char local_94;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *param_1;
  piVar4 = (int *)(lVar1 + 0x2c);
  piVar3 = piVar4;
  if (param_3 < 0x20) {
    if (param_3 < 8) {
      if (param_3 == 2) {
        piVar3 = (int *)(lVar1 + 0x30);
      }
      else if (param_3 == 4) {
        piVar3 = (int *)(lVar1 + 0x38);
      }
    }
    else if (param_3 == 8) {
      piVar3 = (int *)(lVar1 + 0x34);
    }
    else if (param_3 == 0x10) {
      piVar3 = (int *)(lVar1 + 0x44);
    }
  }
  else if (param_3 < 0x80) {
    if (param_3 == 0x20) {
      piVar3 = (int *)(lVar1 + 0x40);
    }
    else if (param_3 == 0x40) {
      piVar3 = (int *)(lVar1 + 0x50);
    }
  }
  else if (param_3 == 0x80) {
    piVar3 = (int *)(lVar1 + 0x3c);
  }
  else if (param_3 == 0x100) {
    piVar3 = (int *)(lVar1 + 0x48);
  }
  else if (param_3 == 0x200) {
    piVar3 = (int *)(lVar1 + 0x4c);
  }
  if (*piVar3 == 2) {
    lVar6 = param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_d0 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_c8 = 0;
    FUN_140997b30(lVar6,0x3f800000,&local_d0);
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    local_e8 = DAT_14c872be8;
    FUN_140997f46(&local_d0,(float)*(int *)(lVar1 + 0x110),param_4,1);
    FUN_140997a0e(&local_d0);
    FUN_14851fa34(lVar1,param_3);
    if ((longlong)*(int *)(lVar1 + 0x110) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x108);
      lVar5 = (longlong)*(int *)(lVar1 + 0x110) * 0x50;
      do {
        cVar2 = FUN_14681a7c2(param_1[1]);
        if (cVar2 != '\0') {
          *(undefined1 *)(lVar1 + 0x131) = 1;
          goto LAB_143b9de24;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        local_e0 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        local_d8 = 0;
        FUN_140997b30(&local_d0,0x3f800000,&local_e0);
        if (local_e0 != (longlong *)0x0) {
          (**(code **)(*local_e0 + 0x10))();
        }
        local_e0 = (longlong *)CONCAT44(local_e0._4_4_,param_3);
        (*(code *)*param_2)(param_2[1],&local_e0,lVar6);
        FUN_14681a798(param_1[1]);
        lVar6 = lVar6 + 0x50;
        lVar5 = lVar5 + -0x50;
      } while (lVar5 != 0);
    }
    if (param_3 < 0x20) {
      if (param_3 < 8) {
        if (param_3 == 2) {
          piVar4 = (int *)(lVar1 + 0x30);
        }
        else if (param_3 == 4) {
          piVar4 = (int *)(lVar1 + 0x38);
        }
      }
      else if (param_3 == 8) {
        piVar4 = (int *)(lVar1 + 0x34);
      }
      else if (param_3 == 0x10) {
        piVar4 = (int *)(lVar1 + 0x44);
      }
    }
    else if (param_3 < 0x80) {
      if (param_3 == 0x20) {
        piVar4 = (int *)(lVar1 + 0x40);
      }
      else if (param_3 == 0x40) {
        piVar4 = (int *)(lVar1 + 0x50);
      }
    }
    else if (param_3 == 0x80) {
      piVar4 = (int *)(lVar1 + 0x3c);
    }
    else if (param_3 == 0x100) {
      piVar4 = (int *)(lVar1 + 0x48);
    }
    else if (param_3 == 0x200) {
      piVar4 = (int *)(lVar1 + 0x4c);
    }
    *piVar4 = 1;
LAB_143b9de24:
    FUN_140997a5c(&local_d0);
    if (local_94 == '\x01') {
      local_94 = '\0';
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b9deee FUN_143b9deee body=1792 status=ok
// SIG undefined FUN_143b9deee(void)

void FUN_143b9deee(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  longlong *plVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  undefined1 auStack_ce8 [32];
  undefined8 local_cc8;
  longlong local_cc0;
  longlong local_cb8;
  float local_cb0;
  float fStack_cac;
  float fStack_ca8;
  undefined8 uStack_ca4;
  undefined8 uStack_c9c;
  float local_c94;
  float fStack_c90;
  float local_c8c;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined1 local_c78 [1584];
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_ce8;
  if ((*(int *)(param_1 + 0x50) == 1) && (0 < *(int *)(param_1 + 0x110))) {
    lVar11 = 0;
    do {
      lVar15 = *(longlong *)(param_1 + 0x108);
      lVar13 = lVar11 * 0x50;
      local_cc0 = lVar15 + lVar13;
      local_cc8 = *(undefined8 *)(lVar15 + 0x48 + lVar13);
      FUN_1485207b6(local_c78,local_cc0,*(undefined8 *)(lVar15 + 0x40 + lVar13),
                    *(undefined8 *)(lVar15 + 0x38 + lVar13));
      iVar9 = *(int *)(lVar15 + 0x48 + lVar13);
      lVar10 = (longlong)iVar9;
      uVar8 = (ulonglong)*(int *)(lVar15 + 0x4c + lVar13);
      local_cb8 = lVar11;
      if (0 < (longlong)(uVar8 * lVar10)) {
        lVar11 = lVar11 * 0x10;
        lVar14 = 0;
        lVar13 = 0;
        lVar15 = local_cc0;
        do {
          fVar2 = *(float *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar11) + 0x58) +
                            lVar13 * 4);
          if ((0.0 < fVar2) && (fVar2 < 1.0)) {
            plVar3 = (longlong *)*param_2;
            iVar7 = *(int *)(param_1 + 0x40);
            if (iVar7 == 1) {
              bVar4 = param_2[1] != 0 || param_2[2] != 0;
              if (param_2[2] == 0 && plVar3 == (longlong *)0x0) {
                if (bVar4) {
LAB_143b9e158:
                  lVar15 = *(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar11) + 0x58);
                  local_c8c = *(float *)(lVar15 + 8 + lVar14) + -0.5;
                  fStack_c90 = *(float *)(lVar15 + 4 + lVar14) + -0.5;
                  local_c94 = *(float *)(lVar15 + lVar14) + -0.5;
                  local_c8c = local_c8c + local_c8c;
                  fStack_c90 = fStack_c90 + fStack_c90;
                  local_c94 = local_c94 + local_c94;
                  goto LAB_143b9e1a8;
                }
              }
              else {
LAB_143b9e06a:
                dVar5 = ((double)(int)(lVar13 % lVar10) + 0.5) / (double)iVar9;
                dVar16 = ((double)(int)(lVar13 / lVar10) + 0.5) / (double)(int)uVar8;
                dVar6 = dVar5 + dVar5 + -1.0;
                dVar17 = dVar16 + dVar16 + -1.0;
                dVar5 = (double)fVar2;
                auVar18._0_8_ =
                     local_608 * dVar5 + (local_648 * dVar6 - local_628 * dVar17) + local_5e8;
                auVar18._8_8_ =
                     dStack_600 * dVar5 + (dStack_640 * dVar6 - dStack_620 * dVar17) + dStack_5e0;
                dVar16 = dVar5 * local_5f8 + (dVar6 * local_638 - dVar17 * local_618) + local_5d8;
                dVar5 = dVar5 * dStack_5f0 + (dVar6 * dStack_630 - dVar17 * dStack_610) + dStack_5d0
                ;
                unaff_XMM11_Da = (float)(auVar18._0_8_ / dVar5);
                auVar19._8_4_ = SUB84(dVar5,0);
                auVar19._0_8_ = dVar16;
                auVar19._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                auVar19 = divpd(auVar18,auVar19);
                unaff_XMM12_Da = (float)auVar19._8_8_;
                unaff_XMM13_Da = (float)(dVar16 / dVar5);
                if (bVar4) goto LAB_143b9e158;
LAB_143b9e1a8:
                if (plVar3 != (longlong *)0x0) {
                  iVar9 = (int)plVar3[1];
                  lVar15 = (longlong)iVar9;
                  *(uint *)(plVar3 + 1) = iVar9 + 1U;
                  if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                    FUN_140c0b6f2(plVar3,iVar9);
                  }
                  lVar10 = *plVar3;
                  *(float *)(lVar10 + lVar15 * 0xc) = unaff_XMM11_Da;
                  *(float *)(lVar10 + 4 + lVar15 * 0xc) = unaff_XMM12_Da;
                  *(float *)(lVar10 + 8 + lVar15 * 0xc) = unaff_XMM13_Da;
                  iVar7 = *(int *)(param_1 + 0x40);
                }
                if (iVar7 != 1) goto LAB_143b9e234;
                plVar3 = (longlong *)param_2[1];
                if (plVar3 != (longlong *)0x0) {
                  iVar9 = (int)plVar3[1];
                  *(uint *)(plVar3 + 1) = iVar9 + 1U;
                  if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                    FUN_140c0b6f2(plVar3,iVar9);
                  }
                  lVar15 = *plVar3;
                  *(float *)(lVar15 + 8 + (longlong)iVar9 * 0xc) = local_c8c;
                  *(ulonglong *)(lVar15 + (longlong)iVar9 * 0xc) = CONCAT44(fStack_c90,local_c94);
                }
              }
              plVar3 = (longlong *)param_2[2];
              if (plVar3 != (longlong *)0x0) {
                uStack_c9c = 0x3f80000000000000;
                uStack_ca4 = 0;
                local_c80 = DAT_14c84636c;
                local_c88 = DAT_14c846364;
                local_cb0 = unaff_XMM11_Da;
                fStack_cac = unaff_XMM12_Da;
                fStack_ca8 = unaff_XMM13_Da;
                FUN_146bfaf56(&uStack_ca4,&local_c88,&local_c94);
                iVar9 = (int)plVar3[1];
                *(uint *)(plVar3 + 1) = iVar9 + 1U;
                if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                  FUN_148549c0a(plVar3,iVar9);
                }
                lVar15 = *plVar3;
                puVar12 = (undefined8 *)(lVar15 + 0xc + (longlong)iVar9 * 0x1c);
                *puVar12 = uStack_ca4;
                puVar12[1] = uStack_c9c;
                pfVar1 = (float *)(lVar15 + (longlong)iVar9 * 0x1c);
                *pfVar1 = local_cb0;
                pfVar1[1] = fStack_cac;
                pfVar1[2] = fStack_ca8;
                pfVar1[3] = (float)uStack_ca4;
              }
            }
            else if (plVar3 != (longlong *)0x0) {
              bVar4 = false;
              goto LAB_143b9e06a;
            }
LAB_143b9e234:
            if ((*(int *)(param_1 + 0x38) == 1) &&
               (plVar3 = (longlong *)param_2[3], plVar3 != (longlong *)0x0)) {
              lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + lVar11) + 0x58);
              iVar9 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                FUN_14475e4ac(plVar3,iVar9);
              }
              *(undefined4 *)(*plVar3 + (longlong)iVar9 * 4) = *(undefined4 *)(lVar15 + lVar13 * 4);
            }
            if ((*(int *)(param_1 + 0x30) == 1) &&
               (plVar3 = (longlong *)param_2[4], plVar3 != (longlong *)0x0)) {
              lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar11) + 0x58);
              iVar9 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                FUN_14475e4ac(plVar3,iVar9);
              }
              *(undefined4 *)(*plVar3 + (longlong)iVar9 * 4) = *(undefined4 *)(lVar15 + lVar13 * 4);
            }
            if ((*(int *)(param_1 + 0x34) == 1) &&
               (plVar3 = (longlong *)param_2[5], plVar3 != (longlong *)0x0)) {
              lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar11) + 0x58);
              iVar9 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                FUN_14475e4ac(plVar3,iVar9);
              }
              *(undefined4 *)(*plVar3 + (longlong)iVar9 * 4) = *(undefined4 *)(lVar15 + lVar13 * 4);
            }
            if ((*(int *)(param_1 + 0x3c) == 1) &&
               (plVar3 = (longlong *)param_2[6], plVar3 != (longlong *)0x0)) {
              puVar12 = (undefined8 *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + lVar11) + 0x58)
                        + lVar14);
              iVar9 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                FUN_140c0b6f2(plVar3,iVar9);
              }
              lVar15 = *plVar3;
              *(undefined4 *)(lVar15 + 8 + (longlong)iVar9 * 0xc) = *(undefined4 *)(puVar12 + 1);
              *(undefined8 *)(lVar15 + (longlong)iVar9 * 0xc) = *puVar12;
            }
            if ((*(int *)(param_1 + 0x44) == 1) &&
               (plVar3 = (longlong *)param_2[7], plVar3 != (longlong *)0x0)) {
              puVar12 = (undefined8 *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar11) + 0x58)
                        + lVar14);
              iVar9 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                FUN_140c0b6f2(plVar3,iVar9);
              }
              lVar15 = *plVar3;
              *(undefined4 *)(lVar15 + 8 + (longlong)iVar9 * 0xc) = *(undefined4 *)(puVar12 + 1);
              *(undefined8 *)(lVar15 + (longlong)iVar9 * 0xc) = *puVar12;
            }
            if ((*(int *)(param_1 + 0x2c) == 1) &&
               (plVar3 = (longlong *)param_2[8], plVar3 != (longlong *)0x0)) {
              puVar12 = (undefined8 *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar11) + 0x58)
                        + lVar14);
              iVar9 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                FUN_140c0b6f2(plVar3,iVar9);
              }
              lVar15 = *plVar3;
              *(undefined4 *)(lVar15 + 8 + (longlong)iVar9 * 0xc) = *(undefined4 *)(puVar12 + 1);
              *(undefined8 *)(lVar15 + (longlong)iVar9 * 0xc) = *puVar12;
            }
            if ((*(int *)(param_1 + 0x4c) == 1) &&
               (plVar3 = (longlong *)param_2[9], plVar3 != (longlong *)0x0)) {
              puVar12 = (undefined8 *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + lVar11) + 0x58)
                        + lVar14);
              iVar9 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                FUN_140c0b6f2(plVar3,iVar9);
              }
              lVar15 = *plVar3;
              *(undefined4 *)(lVar15 + 8 + (longlong)iVar9 * 0xc) = *(undefined4 *)(puVar12 + 1);
              *(undefined8 *)(lVar15 + (longlong)iVar9 * 0xc) = *puVar12;
            }
            if ((*(int *)(param_1 + 0x48) == 1) &&
               (plVar3 = (longlong *)param_2[10], plVar3 != (longlong *)0x0)) {
              lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 200) + lVar11) + 0x58);
              iVar9 = (int)plVar3[1];
              *(uint *)(plVar3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
                FUN_14475e4ac(plVar3,iVar9);
              }
              *(undefined4 *)(*plVar3 + (longlong)iVar9 * 4) = *(undefined4 *)(lVar15 + lVar13 * 4);
            }
            uVar8 = (ulonglong)*(uint *)(local_cc0 + 0x4c);
            lVar15 = local_cc0;
          }
          lVar13 = lVar13 + 1;
          iVar9 = *(int *)(lVar15 + 0x48);
          lVar10 = (longlong)iVar9;
          lVar14 = lVar14 + 0xc;
        } while (lVar13 < (int)uVar8 * lVar10);
      }
      lVar11 = local_cb8 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x110));
  }
  if ((local_d0 ^ (ulonglong)auStack_ce8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b9e5ef FUN_143b9e5ef body=69 status=ok
// SIG undefined FUN_143b9e5ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b9e5ef(void)

{
  _DAT_14cb4d8c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b9e631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4d8c8,1);
  return;
}



// FUNCTION 143b9e634 FUN_143b9e634 body=69 status=ok
// SIG undefined FUN_143b9e634(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b9e634(void)

{
  _DAT_14cb4d780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b9e676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4d788,1);
  return;
}



// FUNCTION 143b9e679 FUN_143b9e679 body=1202 status=ok
// SIG undefined FUN_143b9e679(void)

void FUN_143b9e679(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143b9e6b4;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143b9e6b9;
      goto LAB_143b9e6fe;
    }
  }
  else {
LAB_143b9e6b4:
    if (iVar6 != 0x10) {
LAB_143b9e6fe:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143b9e6b9;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143b9e6b9;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143b9e85e;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143ba03a5);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143b9e85e:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143b9e8de;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143b9e8de:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14af17c00;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2b3190;
        local_40 = FUN_143ba41d6;
        local_68 = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"FlushRHIThreadToUpdateTextureRenderTargetReference",
                      &DAT_14cb4d7f8);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143b9e79c;
    }
  }
LAB_143b9e6b9:
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_68,5);
LAB_143b9e79c:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9eb2c FUN_143b9eb2c body=1864 status=ok
// SIG undefined FUN_143b9eb2c(void)

ulonglong FUN_143b9eb2c(longlong *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  void *_Src;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_918 [32];
  undefined8 local_8f8;
  longlong *local_8f0;
  longlong **local_8e8;
  longlong local_8e0 [3];
  undefined1 local_8c1;
  undefined1 *local_8c0;
  undefined1 *local_8b8;
  longlong *local_8b0;
  longlong *local_8a8;
  undefined8 *local_8a0;
  undefined4 local_898;
  undefined4 uStack_894;
  int iStack_890;
  undefined4 uStack_88c;
  undefined8 local_888;
  undefined8 local_878;
  undefined8 uStack_870;
  void *local_868;
  ulonglong uStack_860;
  undefined8 local_850;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  void *local_838;
  int local_830;
  undefined4 local_82c;
  longlong local_828;
  int local_820;
  longlong *local_818;
  longlong **pplStack_810;
  undefined ***local_808 [2];
  undefined **local_7f8;
  undefined8 local_7f0;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  longlong local_7d8;
  undefined4 local_7d0;
  undefined8 local_6f8;
  int iStack_6f0;
  undefined4 uStack_6ec;
  undefined8 local_6e8;
  longlong local_6b0;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  uint local_674;
  undefined ***local_460;
  float local_2fc;
  undefined **local_278;
  longlong local_270;
  uint local_268;
  uint local_264;
  undefined8 *local_f8;
  uint local_c0;
  byte local_bc;
  byte local_a8;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_918;
  FUN_140056680(&local_828,
                L"/MeshModelingToolsetExp/Materials/PostProcess_PackedMRSA.PostProcess_PackedMRSA");
  local_878 = 0;
  uStack_870 = 0;
  local_868 = (void *)0x0;
  uStack_860 = 0;
  local_6f8 = local_828;
  iStack_6f0 = local_820 + -1;
  if (local_820 == 0) {
    iStack_6f0 = 0;
  }
  FUN_14475bf92(&local_878);
  _Src = local_868;
  local_850 = 0;
  local_848 = (undefined4)local_878;
  uStack_844 = local_878._4_4_;
  uStack_840 = (undefined4)uStack_870;
  uStack_83c = uStack_870._4_4_;
  local_838 = (void *)0x0;
  lVar9 = (longlong)(int)uStack_860;
  local_830 = (int)uStack_860;
  if (lVar9 == 0) {
    local_82c = 0;
  }
  else {
    FUN_1446dd670(&local_838,uStack_860 & 0xffffffff,0);
    memcpy(local_838,_Src,lVar9 * 2);
  }
  if (local_868 != (void *)0x0) {
    FUN_1400020a8(local_868);
  }
  lVar9 = FUN_140cc27fc(&local_850);
  if (lVar9 != 0) {
    uVar3 = *(undefined8 *)(*param_1 + 0x218);
    lVar5 = FUN_1485232b0(param_1,1);
    if (lVar5 != 0) {
      lVar6 = FUN_1447b4020(lVar5);
      lVar5 = lVar6 + 0x50;
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      local_90 = 0;
      local_88 = 0x8000000000;
      FUN_1401b5a8c(&local_c0,0);
      local_bc = local_bc & 0xf0;
      local_c0 = local_c0 & 0x7ffffffe;
      local_a8 = local_a8 & 0xfd;
      FUN_148523b05(&local_c0,*param_6);
      FUN_14031f39e(&local_6f8,lVar5,uVar3,&local_c0);
      local_690 = 0;
      uStack_688 = 0;
      local_680 = 0;
      local_674 = local_674 & 0xffffffed | 0x10;
      FUN_14031f528(&local_278,&local_6f8);
      local_278 = &PTR_FUN_14a2b3168;
      if (local_6b0 != 0) {
        FUN_1400020a8();
      }
      local_f8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *local_f8 = &PTR_FUN_14a9ad940;
      local_f8[1] = &local_278;
      local_f8[2] = &DAT_3f8000003f800000;
      local_8e8 = &local_818;
      local_7f8 = (undefined **)0x0;
      local_7f0._0_4_ = 0;
      local_818 = (longlong *)0x0;
      pplStack_810 = (longlong **)0x0;
      local_7f0._4_4_ = 0x80;
      uStack_7e8 = 0xffffffff;
      uStack_7e4 = 0;
      local_7d8 = 0;
      local_7d0 = 0;
      local_8f0 = param_1 + 1;
      local_8f8 = param_4;
      FUN_14852358e(&local_6f8,param_2,param_1 + 0x12,SUB84(param_3,0));
      local_7d0 = 0;
      if (local_7d8 != 0) {
        FUN_1400020a8();
      }
      uVar10 = (ulonglong)pplStack_810 >> 0x20;
      pplStack_810 = (longlong **)((ulonglong)pplStack_810 & 0xffffffff00000000);
      if ((int)uVar10 != 0) {
        FUN_1447a08a2(&local_818,0);
      }
      uStack_7e8 = 0xffffffff;
      uStack_7e4 = 0;
      local_7f0._0_4_ = 0;
      if (0x80 < local_7f0._4_4_) {
        local_7f0._4_4_ = 0x80;
        FUN_1446efbd8(local_808,0);
      }
      if (local_7f8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_818 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_2fc = (float)param_3;
      local_460 = &local_278;
      lVar6 = FUN_14001cc68(0x30f0,0x10);
      FUN_144891fa0(lVar6,&local_6f8);
      uVar4 = local_268;
      lVar12 = (longlong)(int)local_268;
      local_268 = local_268 + 1;
      if (local_264 < local_268) {
        FUN_144928a2e(&local_270,uVar4);
      }
      *(longlong *)(local_270 + lVar12 * 8) = lVar6;
      local_888 = local_6e8;
      local_898 = (undefined4)local_6f8;
      uStack_894 = local_6f8._4_4_;
      iStack_890 = iStack_6f0;
      uStack_88c = uStack_6ec;
      FUN_14102b2ba(lVar6);
      local_8a0 = (undefined8 *)0x0;
      *(undefined4 *)(lVar6 + 0x2f38) = 0;
      uVar4 = 0;
      iVar11 = 0;
      if (*(int *)(lVar6 + 0x2f3c) != 0) {
        FUN_1448831cc(lVar6 + 0x2f30,0);
        iVar11 = *(int *)(lVar6 + 0x2f38);
        uVar4 = *(uint *)(lVar6 + 0x2f3c);
      }
      *(uint *)(lVar6 + 0x2f38) = iVar11 + 1U;
      if (uVar4 < iVar11 + 1U) {
        FUN_144769b64(lVar6 + 0x2f30,iVar11);
      }
      *(longlong *)(*(longlong *)(lVar6 + 0x2f30) + (longlong)iVar11 * 8) = lVar9;
      FUN_14854ad9a(lVar6 + 0x2f88);
      plVar7 = (longlong *)FUN_14854b0ed();
      local_8b0 = plVar7 + 2;
      local_8a8 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      local_808[0] = (undefined ***)0x0;
      local_7f8 = &PTR_LAB_14af17c30;
      local_7f0 = &local_8a0;
      local_818 = (longlong *)&LAB_143ba4406;
      FUN_147128856(local_8b0,&local_818);
      if (local_818 != (longlong *)0x0) {
        pppuVar8 = local_808[0];
        if (local_808[0] == (undefined ***)0x0) {
          pppuVar8 = &local_7f8;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      local_8e0[0] = *(longlong *)(lVar9 + 0x18);
      local_818 = local_8e0;
      pplStack_810 = &local_8b0;
      FUN_14854b1e0(lVar6 + 0x2f88,&local_8c0);
      *(undefined1 *)(lVar6 + 0x2f70) = 1;
      FUN_14102bfb4(lVar6,&local_6f8);
      *(undefined1 *)(lVar6 + 0x2546) = 2;
      local_8e8 = (longlong **)CONCAT44(local_8e8._4_4_,0x3f800000);
      local_8f0 = (longlong *)((ulonglong)local_8f0 & 0xffffffff00000000);
      local_8f8 = CONCAT44(local_8f8._4_4_,3);
      FUN_1401fac16(&local_818,lVar5,0,*param_1);
      FUN_14376f1d8(&local_818,&DAT_149e1e318);
      FUN_143b9f275(&local_818,&local_278);
      memcpy(param_1 + 0x18,(void *)(lVar6 + 0x500),0xba0);
      uVar10 = CONCAT71((int7)((ulonglong)lVar5 >> 8),local_8a0 != (undefined8 *)0x0);
      if (local_8a0 != (undefined8 *)0x0) {
        local_8b8 = &local_8c1;
        local_8c0 = &LAB_143ba447a;
        FUN_147128b38(local_8a0,local_8e0);
        FUN_143b9f378(local_8e0,param_5,&local_8c0);
        if ((char)param_1[0x18e] == '\x01') {
          FUN_140056680(local_8e0,L"CombinedMRS");
          FUN_148523bf8(param_1,param_5,local_8e0);
          if (local_8e0[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      FUN_14010ad76(&local_818);
      plVar7 = local_8a8;
      if (local_8a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_8a8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_8a8)(local_8a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (local_8a0 != (undefined8 *)0x0) {
        (**(code **)*local_8a0)(local_8a0,1);
      }
      FUN_144891d70(&local_6f8);
      FUN_14005d108(&local_278);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143b9ec51;
    }
  }
  uVar10 = 0;
LAB_143b9ec51:
  if (local_838 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_828 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_918) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9f275 FUN_143b9f275 body=258 status=ok
// SIG undefined FUN_143b9f275(void)

void FUN_143b9f275(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  while( true ) {
    if (-1 < *DAT_14cb4d790) {
      iVar5 = *DAT_14cb4d790 + 1;
      do {
        if (DAT_14cad8310 == (longlong *)0x0) {
          FUN_1446f470e(&local_50,L"Renderer",1);
          uVar4 = local_50;
          uVar2 = FUN_144a52528();
          DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar2,uVar4);
        }
        (**(code **)(*DAT_14cad8310 + 0x40))(DAT_14cad8310,param_1,param_2);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_14080c2b4();
    lVar3 = FUN_141589436();
    iVar5 = *(int *)(lVar3 + 0x10);
    if ((longlong)iVar5 == 0) break;
    lVar3 = *(longlong *)(lVar3 + 8);
    lVar7 = 0;
    iVar6 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(lVar3 + lVar7) + 0x18))();
      iVar6 = iVar6 + iVar1;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar5 * 8 != lVar7);
    if (iVar6 < 1) break;
    uVar4 = FUN_141589436();
    FUN_1433f6fe4(uVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b9f378 FUN_143b9f378 body=233 status=ok
// SIG undefined FUN_143b9f378(void)

void FUN_143b9f378(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  undefined1 local_88 [8];
  longlong local_80;
  int *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined8 *)param_1;
  FUN_148544090(param_2,uVar1);
  lVar3 = (longlong)param_1[2] * (longlong)param_1[1] * (longlong)*param_1;
  uVar2 = FUN_146987643(local_88,lVar3);
  local_98 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = FUN_143ba09f4;
  local_a0 = 2;
  local_80 = lVar3;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  local_60 = uVar1;
  local_50 = local_88;
  FUN_1411ca36e(L"PF.CopyCaptureDataToOutputImageFormat",uVar2,1);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b9f462 FUN_143b9f462 body=1511 status=ok
// SIG undefined FUN_143b9f462(void)

bool FUN_143b9f462(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_8d8 [32];
  undefined8 local_8b8;
  longlong *local_8b0;
  longlong *local_8a8;
  longlong *local_8a0;
  longlong *local_898;
  ulonglong local_890;
  undefined2 *local_888;
  int local_880;
  undefined1 *local_878;
  undefined2 **local_870;
  undefined4 local_864;
  int local_860;
  undefined1 local_85c;
  undefined4 local_858;
  undefined2 local_854;
  undefined8 local_850;
  undefined8 local_848;
  longlong local_840;
  longlong local_838;
  undefined8 uStack_830;
  longlong local_828;
  longlong local_818;
  ulonglong uStack_810;
  undefined1 local_808 [16];
  longlong local_7f8;
  undefined4 local_7f0;
  uint local_7ec;
  undefined4 uStack_7e8;
  undefined4 local_7e4;
  longlong local_7d8;
  undefined4 local_7d0;
  char *local_6f8;
  undefined4 local_6f0;
  undefined1 local_6ec;
  longlong local_6b0;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  uint local_674;
  undefined ***local_460;
  undefined **local_278;
  longlong local_270;
  uint local_268;
  uint local_264;
  undefined8 *local_f8;
  uint local_c0;
  byte local_bc;
  uint local_b4;
  byte local_a8;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  local_6f8 = "PreTonemapHDRColor";
  local_6f0 = 0x12;
  local_6ec = 0;
  uVar3 = FUN_14001a6c0(&local_6f8,1);
  uVar1 = *param_2;
  local_6f8 = "Roughness";
  local_6f0 = 9;
  local_6ec = 0;
  uVar2 = FUN_14001a6c0(&local_6f8,1);
  lVar4 = FUN_1485232b0(param_1,*param_2 != (ulonglong)uVar2);
  if (lVar4 != 0) {
    local_890 = uVar3 & 0xffffffff;
    bVar9 = uVar1 == local_890;
    plVar5 = (longlong *)FUN_1447b4020(lVar4);
    local_90 = 0;
    local_88 = 0x8000000000;
    FUN_1401b5a8c(&local_c0,0);
    local_bc = local_bc & 0xf0;
    local_c0 = (local_c0 & 0x7ffffffe) + 1;
    local_a8 = local_a8 & 0xfd;
    FUN_148523b05(&local_c0,*param_7);
    local_c0 = local_c0 | 1;
    local_b4 = local_b4 & 0xffff7fff | (uint)bVar9 << 0xf;
    local_898 = plVar5 + 10;
    local_8a0 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      local_8a0 = local_898;
    }
    FUN_14031f39e(&local_6f8,local_8a0,*(undefined8 *)(*param_1 + 0x218),&local_c0);
    local_690 = 0;
    uStack_688 = 0;
    local_680 = 0;
    local_674 = local_674 & 0xffffffed | 0x10;
    FUN_14031f528(&local_278,&local_6f8);
    local_278 = &PTR_FUN_14a2b3168;
    if (local_6b0 != 0) {
      FUN_1400020a8();
    }
    local_8a8 = &local_818;
    local_7f8 = 0;
    local_7f0 = 0;
    local_818 = 0;
    uStack_810 = 0;
    local_7ec = 0x80;
    uStack_7e8 = 0xffffffff;
    local_7e4 = 0;
    local_7d8 = 0;
    local_7d0 = 0;
    local_8b0 = param_1 + 1;
    local_8b8 = param_5;
    FUN_14852358e(&local_6f8,param_3,param_1 + 0x12,param_4);
    local_7d0 = 0;
    if (local_7d8 != 0) {
      FUN_1400020a8();
    }
    uVar3 = uStack_810 >> 0x20;
    uStack_810 = uStack_810 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      FUN_1447a08a2(&local_818,0);
    }
    uStack_7e8 = 0xffffffff;
    local_7e4 = 0;
    local_7f0 = 0;
    if (0x80 < local_7ec) {
      local_7ec = 0x80;
      FUN_1446efbd8(local_808,0);
    }
    if (local_7f8 != 0) {
      FUN_1400020a8();
    }
    if (local_818 != 0) {
      FUN_1400020a8();
    }
    local_460 = &local_278;
    lVar6 = FUN_14001cc68(0x30f0,0x10);
    FUN_144891fa0(lVar6,&local_6f8);
    uVar2 = local_268;
    lVar8 = (longlong)(int)local_268;
    local_268 = local_268 + 1;
    if (local_264 < local_268) {
      FUN_144928a2e(&local_270,uVar2);
    }
    *(longlong *)(local_270 + lVar8 * 8) = lVar6;
    *(ulonglong *)(lVar6 + 0x1df4) = *param_2;
    local_f8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *local_f8 = &PTR_FUN_14a9ad940;
    local_f8[1] = &local_278;
    local_f8[2] = &DAT_3f8000003f800000;
    local_838 = 0;
    uStack_830 = 0;
    local_828 = 0;
    local_8b8 = CONCAT44(local_8b8._4_4_,*(undefined4 *)(lVar6 + 0x3090));
    local_8b0 = (longlong *)CONCAT44(local_8b0._4_4_,0x3f800000);
    FUN_147d8ddfa(&local_818,local_8a0,0);
    FUN_14376f1d8(&local_818,&DAT_149e1e318);
    FUN_143b9f275(&local_818,&local_278);
    memcpy(param_1 + 0x18,(void *)(lVar6 + 0x500),0xba0);
    plVar5 = param_1 + 0x18c;
    *(undefined4 *)(param_1 + 0x18d) = 0;
    if (*(int *)((longlong)param_1 + 0xc6c) < 0) {
      FUN_144750f90(plVar5,0);
    }
    bVar9 = uVar1 == local_890;
    FUN_14735c9c0(plVar5,*(int *)((longlong)param_1 + 0x94) * (int)param_1[0x12],1);
    local_860 = (uint)bVar9 * 3;
    local_840 = param_1[0x12];
    local_848 = 0;
    local_864 = 6;
    local_85c = 0;
    local_858 = 0x467a0000;
    local_854 = 0;
    local_850 = 0;
    (**(code **)(*local_898 + 0x70))(local_898,plVar5);
    local_838 = param_1[0x12];
    local_828 = param_1[0x18c];
    uStack_830 = CONCAT26(uStack_830._6_2_,0x500000001);
    local_870 = &local_888;
    local_878 = &LAB_143ba447a;
    FUN_143b9f378(&local_838,param_6);
    if ((char)param_1[0x18e] == '\x01') {
      FUN_1400021e4(param_2,&local_888);
      puVar7 = local_888;
      if (local_880 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_140056680(&local_878,puVar7);
      FUN_148523bf8(param_1,param_6,&local_878);
      if (local_878 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_888 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_14010ad76(&local_818);
    FUN_144891d70(&local_6f8);
    FUN_14005d108(&local_278);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_8d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 != 0;
}



// FUNCTION 143b9fa4a FUN_143b9fa4a body=1645 status=ok
// SIG undefined FUN_143b9fa4a(void)

bool FUN_143b9fa4a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_8e8 [32];
  undefined8 local_8c8;
  longlong *local_8c0;
  undefined ***local_8b8;
  longlong *local_8a8;
  undefined1 local_899;
  undefined1 *local_898;
  undefined1 *local_890;
  undefined8 local_884;
  undefined1 local_87c;
  undefined4 local_878;
  undefined2 local_874;
  undefined8 local_870;
  undefined8 local_868;
  longlong local_860;
  longlong local_858;
  ulonglong uStack_850;
  longlong local_848;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined8 local_828;
  undefined **local_818;
  ulonglong uStack_810;
  undefined8 local_808;
  undefined1 local_800;
  longlong local_7f8;
  undefined4 local_7f0;
  uint local_7ec;
  undefined4 uStack_7e8;
  undefined4 local_7e4;
  longlong local_7d8;
  undefined4 local_7d0;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 local_6e8;
  longlong local_6b0;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  uint local_674;
  undefined ***local_460;
  undefined4 local_400;
  undefined4 local_31c;
  undefined **local_278;
  longlong local_270;
  uint local_268;
  uint local_264;
  longlong *local_238;
  undefined4 local_1a4;
  longlong local_180;
  int local_178;
  undefined8 *local_f8;
  undefined1 local_c0 [48];
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_8e8;
  lVar3 = FUN_148523456();
  param_1[0x15] = lVar3;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_1447b4020(lVar3);
    local_90 = 0;
    local_88 = 0x8000000000;
    FUN_1401b5a8c(local_c0,0);
    FUN_148523b05(local_c0,0);
    local_8a8 = plVar4 + 10;
    if (plVar4 != (longlong *)0x0) {
      plVar4 = local_8a8;
    }
    FUN_14031f39e(&local_6f8,plVar4,*(undefined8 *)(*param_1 + 0x218),local_c0);
    local_690 = 0;
    uStack_688 = 0;
    local_680 = 0;
    local_674 = local_674 & 0xffffffe5 | 0x10;
    FUN_14031f528(&local_278,&local_6f8);
    local_278 = &PTR_FUN_14a2b3168;
    if (local_6b0 != 0) {
      FUN_1400020a8();
    }
    local_1a4 = 5;
    local_8b8 = &local_818;
    local_7f8 = 0;
    local_7f0 = 0;
    local_818 = (undefined **)0x0;
    uStack_810 = 0;
    local_7ec = 0x80;
    uStack_7e8 = 0xffffffff;
    local_7e4 = 0;
    local_7d8 = 0;
    local_7d0 = 0;
    local_8c0 = param_1 + 1;
    local_8c8 = param_4;
    FUN_14852358e(&local_6f8,param_2,param_1 + 0x12,param_3);
    local_7d0 = 0;
    if (local_7d8 != 0) {
      FUN_1400020a8();
    }
    uVar1 = uStack_810 >> 0x20;
    uStack_810 = uStack_810 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_1447a08a2(&local_818,0);
    }
    uStack_7e8 = 0xffffffff;
    local_7e4 = 0;
    local_7f0 = 0;
    if (0x80 < local_7ec) {
      local_7ec = 0x80;
      FUN_1446efbd8(&local_808,0);
    }
    if (local_7f8 != 0) {
      FUN_1400020a8();
    }
    if (local_818 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    local_31c = 0xbf800000;
    local_460 = &local_278;
    lVar5 = (**(code **)(*local_238 + 0x3d0))();
    if (lVar5 != 0) {
      lVar5 = (**(code **)(*local_238 + 0x3d0))();
      if ((*(longlong *)(lVar5 + 0x30) != 0) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x2b0) != 0)) {
        lVar5 = (**(code **)(*local_238 + 0x3d0))();
        if (*(longlong *)(lVar5 + 0x30) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x2b0);
        }
        local_400 = *(undefined4 *)(lVar5 + 0x408);
      }
    }
    lVar5 = FUN_14001cc68(0x30f0,0x10);
    FUN_144891fa0(lVar5,&local_6f8);
    uVar2 = local_268;
    lVar6 = (longlong)(int)local_268;
    local_268 = local_268 + 1;
    if (local_264 < local_268) {
      FUN_144928a2e(&local_270,uVar2);
    }
    *(longlong *)(local_270 + lVar6 * 8) = lVar5;
    *(undefined4 *)(lVar5 + 0x3020) = 0;
    FUN_144893f9a(lVar5);
    local_828 = local_6e8;
    local_838 = local_6f8;
    uStack_834 = uStack_6f4;
    uStack_830 = uStack_6f0;
    uStack_82c = uStack_6ec;
    FUN_14102b2ba(lVar5);
    FUN_14102bfb4(lVar5,&local_6f8);
    local_f8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *local_f8 = &PTR_FUN_14a9ad940;
    local_f8[1] = &local_278;
    local_f8[2] = &DAT_3f8000003f800000;
    local_808 = *(undefined8 *)(*param_1 + 0x218);
    local_818 = &PTR_FUN_14a291310;
    uStack_810 = 0;
    local_800 = 0;
    FUN_1447ff7a4(*(undefined8 *)(DAT_14cb0d2b0 + 0xff0),&local_858);
    FUN_1400f559c(&local_180,&local_858);
    FUN_144750709(local_858,uStack_850 & 0xffffffff);
    if (local_858 != 0) {
      FUN_1400020a8();
    }
    if ((longlong)local_178 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(**(longlong **)(local_180 + lVar6) + 8))
                  (*(longlong **)(local_180 + lVar6),&local_278);
        (**(code **)(**(longlong **)(local_180 + lVar6) + 0x10))
                  (*(longlong **)(local_180 + lVar6),&local_278,lVar5);
        lVar6 = lVar6 + 0x10;
      } while ((longlong)local_178 * 0x10 != lVar6);
    }
    local_858 = 0;
    uStack_850 = 0;
    local_848 = 0;
    local_8c8 = CONCAT44(local_8c8._4_4_,*(undefined4 *)(lVar5 + 0x3090));
    local_8c0 = (longlong *)CONCAT44(local_8c0._4_4_,0x3f800000);
    FUN_147d8ddfa(&local_818,plVar4,0);
    FUN_14376f1d8(&local_818,&DAT_149e1e318);
    FUN_143b9f275(&local_818,&local_278);
    memcpy(param_1 + 0x18,(void *)(lVar5 + 0x500),0xba0);
    plVar4 = param_1 + 0x18c;
    *(undefined4 *)(param_1 + 0x18d) = 0;
    if (*(int *)((longlong)param_1 + 0xc6c) < 0) {
      FUN_144750f90(plVar4,0);
    }
    FUN_14735c9c0(plVar4,*(int *)((longlong)param_1 + 0x94) * (int)param_1[0x12],1);
    local_860 = param_1[0x12];
    local_868 = 0;
    local_884 = 0x300000006;
    local_87c = 0;
    local_878 = 0x467a0000;
    local_874 = 0;
    local_870 = 0;
    (**(code **)(*local_8a8 + 0x70))(local_8a8,plVar4);
    local_858 = param_1[0x12];
    local_848 = param_1[0x18c];
    uStack_850 = CONCAT26(uStack_850._6_2_,0x500000001);
    local_890 = &local_899;
    local_898 = &LAB_143ba4486;
    FUN_143b9f378(&local_858,param_5);
    if ((char)param_1[0x18e] != '\0') {
      FUN_140056680(&local_898,L"DeviceDepth");
      FUN_148523bf8(param_1,param_5,&local_898);
      if (local_898 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_14010ad76(&local_818);
    FUN_144891d70(&local_6f8);
    FUN_14005d108(&local_278);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_8e8) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba00b8 FUN_143ba00b8 body=69 status=ok
// SIG undefined FUN_143ba00b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ba00b8(void)

{
  _DAT_14cb4d798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ba00fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4d7a0,1);
  return;
}



// FUNCTION 143ba00fd FUN_143ba00fd body=46 status=ok
// SIG undefined FUN_143ba00fd(void)

void FUN_143ba00fd(void)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    if (*(longlong *)((longlong)&DAT_14cb4d7f0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143ba012b FUN_143ba012b body=46 status=ok
// SIG undefined FUN_143ba012b(void)

void FUN_143ba012b(void)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    if (*(longlong *)((longlong)&DAT_14cb4d820 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143ba0159 FUN_143ba0159 body=46 status=ok
// SIG undefined FUN_143ba0159(void)

void FUN_143ba0159(void)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    if (*(longlong *)((longlong)&DAT_14cb4d850 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143ba0187 FUN_143ba0187 body=46 status=ok
// SIG undefined FUN_143ba0187(void)

void FUN_143ba0187(void)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    if (*(longlong *)((longlong)&DAT_14cb4d880 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143ba01b5 FUN_143ba01b5 body=69 status=ok
// SIG undefined FUN_143ba01b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ba01b5(void)

{
  _DAT_14cb4d7e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ba01f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb4d7e8,1);
  return;
}



// FUNCTION 143ba01fa FUN_143ba01fa body=97 status=ok
// SIG undefined FUN_143ba01fa(void)

void FUN_143ba01fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + 8 + lVar6);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 143ba025c FUN_143ba025c body=328 status=ok
// SIG undefined FUN_143ba025c(void)

bool FUN_143ba025c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x80))(param_1,&local_30,param_2);
  plVar4 = param_1 + 5;
  if (plVar4 != &local_30) {
    lVar1 = *plVar4;
    *plVar4 = local_30;
    local_30 = 0;
    FUN_148535726(lVar1);
  }
  FUN_148535726(local_30);
  lVar1 = *plVar4;
  if ((lVar1 != 0) && (*(char *)(param_2 + 0x21) == '\x01')) {
    lVar3 = FUN_14001cc68(0xd0,0x10);
    FUN_148535764(lVar3,lVar1);
    puVar2 = (undefined8 *)param_1[6];
    param_1[6] = lVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      lVar3 = param_1[6];
    }
    plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 6) = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar4 + 0x3c) = 0;
    plVar4[9] = 0;
    *(undefined4 *)(plVar4 + 10) = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0x4000000000000000;
    *(undefined4 *)(plVar4 + 0xd) = 2;
    *plVar4 = lVar3;
    FUN_14853d166(plVar4,1);
    lVar3 = param_1[7];
    param_1[7] = (longlong)plVar4;
    FUN_14853565a(lVar3);
    FUN_14853565a(0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba03cc FUN_143ba03cc body=1575 status=ok
// SIG undefined FUN_143ba03cc(void)

void FUN_143ba03cc(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  undefined1 local_fc [4];
  code *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 != (longlong *)0x0) {
    lVar17 = *param_1;
    if (DAT_14cac6e60 == 0) {
      local_120 = &local_f8;
      local_f8 = FUN_144a7958c;
      local_110 = FUN_14081d0ea;
      local_118 = FUN_142b47bc4;
      local_128 = &LAB_1478989f1;
      local_130 = &LAB_146391124;
      local_138 = L"Engine";
      local_140 = 0x10000000000;
      local_148 = 0x10000005;
      local_150 = 0x10;
      local_158 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) !=
        DAT_14cac6e60 + 0x30)) {
      lVar17 = FUN_140e1d66a();
      if ((*(int *)(lVar17 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
           == lVar17 + 0x30 && (lVar17 = (**(code **)(*param_2 + 0x5d8))(param_2), lVar17 != 0)))) {
        iVar4 = *(int *)(lVar17 + 0x268);
        if (iVar4 == 0) {
          uVar27 = 0;
          uVar26 = 1;
          iVar16 = 0;
          iVar22 = 0;
        }
        else {
          puVar18 = *(uint **)(lVar17 + 0x260);
          if (*(uint **)(lVar17 + 0x260) == (uint *)0x0) {
            puVar18 = (uint *)(lVar17 + 0x250);
          }
          uVar19 = *puVar18;
          if (uVar19 == 0) {
            iVar16 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar16 = iVar4 + -1;
            }
            uVar27 = 0;
            uVar26 = (ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              uVar26 = uVar27;
            }
            iVar22 = 0;
            do {
              if (uVar26 == uVar27) goto LAB_143ba04b7;
              iVar22 = iVar22 + 0x20;
              uVar19 = puVar18[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar19 == 0);
          }
          else {
            uVar27 = 0;
            iVar22 = 0;
          }
          uVar26 = (ulonglong)(-uVar19 & uVar19);
          uVar1 = uVar26 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar16 = (iVar22 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar16) {
            iVar16 = iVar4;
          }
        }
        if (iVar16 != iVar4) {
          uVar19 = 0xffffffff;
          do {
            FUN_143ba03cc(param_3,*(undefined8 *)
                                   (*(longlong *)(lVar17 + 0x240) + (longlong)iVar16 * 0x10),param_3
                         );
            uVar19 = ~(uint)uVar26 & uVar19;
            puVar18 = *(uint **)(lVar17 + 0x260);
            if (*(uint **)(lVar17 + 0x260) == (uint *)0x0) {
              puVar18 = (uint *)(lVar17 + 0x250);
            }
            iVar5 = *(int *)(lVar17 + 0x268);
            iVar16 = (int)uVar27;
            lVar24 = (longlong)iVar16;
            uVar23 = puVar18[lVar24] & uVar19;
            if (uVar23 == 0) {
              iVar20 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar20 = iVar5 + -1;
              }
              iVar20 = iVar20 >> 5;
              iVar22 = iVar22 + 0x20;
              iVar21 = iVar20;
              if (iVar20 < iVar16) {
                iVar21 = iVar16;
              }
              if (iVar16 < iVar20) {
                lVar25 = 0;
                do {
                  uVar23 = puVar18[lVar24 + lVar25 + 1];
                  if (uVar23 != 0) {
                    uVar27 = (ulonglong)(iVar16 + (int)lVar25 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_143ba0684;
                  }
                  iVar22 = iVar22 + 0x20;
                  lVar25 = lVar25 + 1;
                } while (iVar21 - lVar24 != lVar25);
                uVar19 = 0xffffffff;
                iVar16 = iVar21;
              }
              uVar27 = (ulonglong)(iVar16 + 1);
              iVar16 = iVar5;
            }
            else {
LAB_143ba0684:
              uVar26 = (ulonglong)(-uVar23 & uVar23);
              uVar1 = uVar26 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar16 = (iVar22 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if (iVar5 <= iVar16) {
                iVar16 = iVar5;
              }
            }
          } while (iVar16 != iVar4);
        }
      }
    }
    else {
      local_f8 = (code *)CONCAT44(local_f8._4_4_,(int)param_2[0x7a]);
      FUN_1472dd72a(lVar17 + 8,local_fc,&local_f8,0);
      pdVar6 = (double *)param_1[1];
      if (*(char *)(pdVar6 + 7) == '\x01') {
        dVar31 = *pdVar6;
        dVar2 = pdVar6[1];
        dVar30 = dVar31 + pdVar6[3];
        dVar11 = dVar2 + pdVar6[4];
        dVar3 = pdVar6[2];
        dVar12 = dVar3 + pdVar6[5];
        dVar7 = dVar31 - pdVar6[3];
        dVar29 = dVar2 - pdVar6[4];
        dVar28 = dVar3 - pdVar6[5];
        dVar8 = dVar7;
        if (dVar30 <= dVar7) {
          dVar8 = dVar30;
        }
        dVar9 = dVar29;
        if (dVar11 <= dVar29) {
          dVar9 = dVar11;
        }
        dVar10 = dVar28;
        if (dVar12 <= dVar28) {
          dVar10 = dVar12;
        }
        if (dVar7 <= dVar30) {
          dVar7 = dVar30;
        }
        if (dVar29 <= dVar11) {
          dVar29 = dVar11;
        }
        if (dVar28 <= dVar12) {
          dVar28 = dVar12;
        }
        dVar30 = (double)param_2[0x2e];
        dVar11 = (double)param_2[0x2c];
        dVar12 = (double)param_2[0x2d];
        dVar13 = dVar11 - (double)param_2[0x2f];
        if (dVar13 <= dVar8) {
          dVar8 = dVar13;
        }
        if (dVar7 <= dVar13) {
          dVar7 = dVar13;
        }
        dVar13 = dVar12 - (double)param_2[0x30];
        if (dVar13 <= dVar9) {
          dVar9 = dVar13;
        }
        if (dVar29 <= dVar13) {
          dVar29 = dVar13;
        }
        dVar13 = dVar30 - (double)param_2[0x31];
        if (dVar13 <= dVar10) {
          dVar10 = dVar13;
        }
        if (dVar28 <= dVar13) {
          dVar28 = dVar13;
        }
        dVar13 = (double)param_2[0x2f] + dVar11;
        if (dVar13 <= dVar8) {
          dVar8 = dVar13;
        }
        if (dVar7 <= dVar13) {
          dVar7 = dVar13;
        }
        dVar13 = (double)param_2[0x30] + dVar12;
        if (dVar13 <= dVar9) {
          dVar9 = dVar13;
        }
        if (dVar29 <= dVar13) {
          dVar29 = dVar13;
        }
        dVar13 = (double)param_2[0x31] + dVar30;
        if (dVar13 <= dVar10) {
          dVar10 = dVar13;
        }
        if (dVar28 <= dVar13) {
          dVar28 = dVar13;
        }
        dVar28 = (dVar28 - dVar10) * 0.5;
        dVar29 = (dVar29 - dVar9) * 0.5;
        dVar7 = (dVar7 - dVar8) * 0.5;
        dVar9 = dVar9 + dVar29;
        dVar8 = dVar8 + dVar7;
        dVar10 = dVar10 + dVar28;
        dVar30 = SQRT((dVar30 - dVar10) * (dVar30 - dVar10) +
                      (dVar11 - dVar8) * (dVar11 - dVar8) + (dVar12 - dVar9) * (dVar12 - dVar9)) +
                 (double)param_2[0x32];
        dVar31 = SQRT((dVar3 - dVar10) * (dVar3 - dVar10) +
                      (dVar31 - dVar8) * (dVar31 - dVar8) + (dVar2 - dVar9) * (dVar2 - dVar9)) +
                 pdVar6[6];
        *pdVar6 = dVar8;
        pdVar6[1] = dVar9;
        pdVar6[2] = dVar10;
        pdVar6[3] = dVar7;
        pdVar6[4] = dVar29;
        pdVar6[5] = dVar28;
        if (dVar31 <= dVar30) {
          dVar31 = dVar30;
        }
        dVar2 = SQRT(dVar28 * dVar28 + dVar7 * dVar7 + dVar29 * dVar29);
        if (dVar31 <= dVar2) {
          dVar2 = dVar31;
        }
        pdVar6[6] = dVar2;
      }
      else {
        pdVar6[6] = (double)param_2[0x32];
        lVar17 = param_2[0x2c];
        uVar14 = *(undefined4 *)((longlong)param_2 + 0x164);
        lVar24 = param_2[0x2d];
        uVar15 = *(undefined4 *)((longlong)param_2 + 0x16c);
        dVar31 = (double)param_2[0x2e];
        dVar2 = (double)param_2[0x2f];
        dVar3 = (double)param_2[0x31];
        pdVar6[4] = (double)param_2[0x30];
        pdVar6[5] = dVar3;
        pdVar6[2] = dVar31;
        pdVar6[3] = dVar2;
        *(int *)pdVar6 = (int)lVar17;
        *(undefined4 *)((longlong)pdVar6 + 4) = uVar14;
        *(int *)(pdVar6 + 1) = (int)lVar24;
        *(undefined4 *)((longlong)pdVar6 + 0xc) = uVar15;
        *(undefined1 *)(pdVar6 + 7) = 1;
      }
    }
  }
LAB_143ba04b7:
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ba09f4 FUN_143ba09f4 body=250 status=ok
// SIG undefined FUN_143ba09f4(void)

void FUN_143ba09f4(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (longlong)*param_2 * *param_1;
  lVar5 = *param_1 + lVar3;
  if (param_1[1] <= lVar5) {
    lVar5 = param_1[1];
  }
  if (lVar3 < lVar5) {
    do {
      lVar2 = lVar3 % (longlong)(int)param_1[5];
      local_50 = (undefined4)lVar2;
      local_4c = (int)(lVar3 / (longlong)(int)param_1[5]);
      piVar1 = (int *)param_1[2];
      if ((ulonglong)*(byte *)(piVar1 + 3) < 9) {
        lVar4 = *(longlong *)(&DAT_14af18430 + (ulonglong)*(byte *)(piVar1 + 3) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_146987bd0(local_60,((longlong)local_4c * (longlong)*piVar1 + lVar2) * lVar4 +
                             *(longlong *)(piVar1 + 4));
      lVar2 = param_1[3];
      (**(code **)param_1[4])(local_70,((undefined8 *)param_1[4])[1],local_60);
      FUN_14854416c(lVar2,&local_50,local_70);
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba0b34 FUN_143ba0b34 body=29 status=ok
// SIG undefined FUN_143ba0b34(void)

undefined8 FUN_143ba0b34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0b88 FUN_143ba0b88 body=29 status=ok
// SIG undefined FUN_143ba0b88(void)

undefined8 FUN_143ba0b88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0bdc FUN_143ba0bdc body=29 status=ok
// SIG undefined FUN_143ba0bdc(void)

undefined8 FUN_143ba0bdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0c30 FUN_143ba0c30 body=29 status=ok
// SIG undefined FUN_143ba0c30(void)

undefined8 FUN_143ba0c30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0c84 FUN_143ba0c84 body=29 status=ok
// SIG undefined FUN_143ba0c84(void)

undefined8 FUN_143ba0c84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0cd8 FUN_143ba0cd8 body=29 status=ok
// SIG undefined FUN_143ba0cd8(void)

undefined8 FUN_143ba0cd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0d2c FUN_143ba0d2c body=29 status=ok
// SIG undefined FUN_143ba0d2c(void)

undefined8 FUN_143ba0d2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0d80 FUN_143ba0d80 body=29 status=ok
// SIG undefined FUN_143ba0d80(void)

undefined8 FUN_143ba0d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0dd4 FUN_143ba0dd4 body=29 status=ok
// SIG undefined FUN_143ba0dd4(void)

undefined8 FUN_143ba0dd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0e28 FUN_143ba0e28 body=29 status=ok
// SIG undefined FUN_143ba0e28(void)

undefined8 FUN_143ba0e28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0e7c FUN_143ba0e7c body=29 status=ok
// SIG undefined FUN_143ba0e7c(void)

undefined8 FUN_143ba0e7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0ece FUN_143ba0ece body=166 status=ok
// SIG undefined FUN_143ba0ece(void)

void FUN_143ba0ece(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  code *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (longlong)*param_2;
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(*param_1 + 8) + lVar4 * 8) + 0xd8);
  if (plVar2 != (longlong *)0x0) {
    local_68 = *(longlong *)(*param_1 + 8) + lVar4 * 8;
    local_58 = &local_68;
    local_60 = FUN_143ba0f76;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    lVar3 = *(longlong *)param_1[1];
    lVar4 = lVar4 * 0x30;
    puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar4);
    *puVar1 = local_30;
    puVar1[1] = uStack_2c;
    puVar1[2] = uStack_28;
    puVar1[3] = uStack_24;
    puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
    *puVar1 = local_40;
    puVar1[1] = uStack_3c;
    puVar1[2] = uStack_38;
    puVar1[3] = uStack_34;
    puVar1 = (undefined4 *)(lVar3 + lVar4);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = uStack_48;
    puVar1[3] = uStack_44;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba0f76 FUN_143ba0f76 body=241 status=ok
// SIG undefined FUN_143ba0f76(void)

double * FUN_143ba0f76(double *param_1,undefined8 *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)*param_2;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar3 = param_3[2];
  lVar1 = lVar2 + 0x20;
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
    lVar1 = *(longlong *)(lVar2 + 0xc0);
  }
  if ((longlong)*(int *)(lVar2 + 200) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba1087 FUN_143ba1087 body=57 status=ok
// SIG undefined FUN_143ba1087(void)

void FUN_143ba1087(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 143ba10c0 FUN_143ba10c0 body=31 status=ok
// SIG undefined FUN_143ba10c0(void)

void FUN_143ba10c0(undefined8 *param_1,int param_2)

{
  do {
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x44) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 143ba10e0 FUN_143ba10e0 body=264 status=ok
// SIG undefined FUN_143ba10e0(void)

void FUN_143ba10e0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar3 = uVar2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x19a) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 / 0x50)) {
      uVar2 = uVar3 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,0,uVar2,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 143ba11e8 FUN_143ba11e8 body=6414 status=ok
// SIG undefined FUN_143ba11e8(void)

void FUN_143ba11e8(undefined8 *param_1)

{
  longlong *plVar1;
  double *pdVar2;
  longlong **pplVar3;
  longlong ****pppplVar4;
  int *piVar5;
  double dVar6;
  undefined8 *puVar7;
  undefined *****pppppuVar8;
  undefined ****ppppuVar9;
  ulonglong uVar10;
  void *pvVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong ****pppplVar15;
  longlong *plVar16;
  undefined ******ppppppuVar17;
  longlong *****ppppplVar18;
  longlong lVar19;
  longlong lVar20;
  code *pcVar21;
  longlong *plVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong *plVar28;
  bool bVar29;
  ulonglong uVar30;
  longlong ***ppplVar31;
  longlong *****ppppplVar32;
  longlong *****ppppplVar33;
  longlong *****ppppplVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStack_ad8 [32];
  undefined8 **local_ab8;
  uint local_ab0;
  undefined8 *local_aa8;
  undefined8 *local_aa0;
  undefined *****local_a98;
  undefined *****local_a90;
  longlong *local_a88;
  ulonglong local_a80;
  longlong *local_a78;
  longlong *local_a70;
  longlong local_a68;
  longlong local_a60;
  undefined *****local_a58;
  undefined ****local_a50;
  undefined ****local_a48;
  longlong *plStack_a40;
  longlong local_a38;
  undefined8 uStack_a30;
  ulonglong local_a28;
  undefined8 *local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  longlong *local_9a8;
  undefined8 uStack_9a0;
  undefined8 *local_998;
  int local_98c;
  longlong local_988;
  ulonglong uStack_980;
  int local_96c;
  longlong local_968;
  undefined8 uStack_960;
  longlong ****local_958;
  undefined8 uStack_950;
  longlong ***local_948;
  longlong local_940;
  ulonglong uStack_938;
  int local_92c;
  longlong local_928;
  ulonglong uStack_920;
  longlong local_918;
  ulonglong uStack_910;
  longlong local_908;
  undefined8 uStack_900;
  void *local_8f8;
  int local_8f0;
  undefined4 local_8ec;
  undefined *****local_8e8;
  undefined *****pppppuStack_8e0;
  undefined *local_8d8;
  longlong *****local_848;
  int local_840;
  longlong ****local_838;
  undefined8 uStack_830;
  longlong ***local_828;
  int *local_820;
  longlong *local_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined8 uStack_7f8;
  int *local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined8 local_7bc;
  undefined4 local_7b4;
  undefined8 local_7a8;
  undefined4 local_7a0;
  undefined2 local_798;
  undefined6 uStack_796;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_770;
  undefined4 local_768;
  undefined8 local_764;
  undefined4 local_75c;
  undefined8 local_750;
  undefined4 local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_720;
  undefined4 local_718;
  undefined8 local_714;
  undefined4 local_70c;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined2 local_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined8 local_6bc;
  undefined4 local_6b4;
  undefined8 local_6a8;
  undefined4 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_678;
  undefined4 local_670;
  undefined8 local_66c;
  undefined4 local_664;
  undefined8 local_658;
  undefined4 local_650;
  undefined1 local_648;
  undefined1 local_647;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_620;
  undefined4 local_618;
  undefined8 local_614;
  undefined4 local_60c;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5d0;
  undefined4 local_5c8;
  undefined8 local_5c4;
  undefined4 local_5bc;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined2 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined4 local_570;
  int local_408;
  undefined8 local_358;
  undefined8 local_348;
  undefined ***local_310 [46];
  int local_1a0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_ad8;
  local_a60 = param_1[0x12];
  EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  plVar28 = (longlong *)param_1[2];
  lVar26 = (longlong)(int)plVar28[1] + -1;
  local_a98 = (undefined *****)(lVar26 * 0x50 + *(longlong *)param_1[1]);
  ppppplVar18 = *(longlong ******)(*plVar28 + -8 + (longlong)(int)plVar28[1] * 8);
  *(int *)(plVar28 + 1) = (int)lVar26;
  iVar13 = (*(code *)(*ppppplVar18[5])[2])();
  *(int *)param_1[3] = *(int *)param_1[3] + iVar13;
  local_aa0 = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  if ((*(int *)(ppppplVar18 + 1) == 0) && (*ppppplVar18 != (longlong ****)0x0)) {
    local_310[0] = (undefined ***)(*ppppplVar18)[3];
    FUN_1400021e4(local_310,&local_838);
  }
  else {
    FUN_140056680(&local_838,L"Unknown");
  }
  if ((longlong *****)local_a98 == &local_838) {
    if (local_838 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((longlong ****)*local_a98 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
    *local_a98 = (undefined ****)local_838;
    local_838 = (longlong ****)0x0;
    *(undefined4 *)(local_a98 + 1) = (undefined4)uStack_830;
    *(undefined4 *)((longlong)local_a98 + 0xc) = uStack_830._4_4_;
  }
  local_ab8 = (undefined8 **)((ulonglong)local_ab8 & 0xffffffffffffff00);
  FUN_1411b354a(local_310,0,0,0);
  pppplVar15 = ppppplVar18[5];
  memset(&local_838,0,0xb0);
  local_790 = CONCAT44(2,(undefined4)local_790);
  (*(code *)(*pppplVar15)[8])(pppplVar15,local_310,&local_838);
  if (CONCAT62(uStack_796,local_798) != 0) {
    FUN_1400020a8();
  }
  *(int *)(local_a98 + 2) = local_1a0;
  local_8f8 = (void *)0x0;
  local_8f0 = *(int *)(ppppplVar18 + 3);
  lVar26 = (longlong)local_8f0;
  pppplVar15 = ppppplVar18[2];
  if (lVar26 == 0) {
    local_8ec = 0;
    local_908 = 0;
    uStack_900 = 0;
  }
  else {
    FUN_14854503c(&local_8f8,local_8f0);
    memcpy(local_8f8,pppplVar15,lVar26 << 3);
    pvVar11 = local_8f8;
    lVar26 = (longlong)local_8f0;
    local_908 = 0;
    uStack_900 = 0;
    if (lVar26 != 0) {
      lVar24 = 0;
      do {
        uVar25 = uStack_900;
        lVar19 = *(longlong *)((longlong)pvVar11 + lVar24);
        lVar20 = (longlong)(int)uStack_900;
        uVar14 = (int)uStack_900 + 1;
        uStack_900 = CONCAT44(uStack_900._4_4_,uVar14);
        if (uStack_900._4_4_ < uVar14) {
          FUN_148544de4(&local_908,uVar25 & 0xffffffff);
        }
        FUN_1482fde4a(lVar20 * 0xb0 + local_908,lVar19 + 0x20);
        LOCK();
        *(int *)local_aa0[4] = *(int *)local_aa0[4] + 1;
        UNLOCK();
        lVar24 = lVar24 + 8;
      } while (lVar26 * 8 != lVar24);
    }
  }
  pppppuVar8 = local_a98;
  *(undefined4 *)((longlong)local_a98 + 0x14) = *(undefined4 *)local_aa0[4];
  local_918 = 0;
  uStack_910 = 0;
  local_928 = 0;
  uStack_920 = 0;
  FUN_14851e9f6(&local_908,&local_918,&local_928);
  local_92c = (int)uStack_910;
  *(int *)((longlong)pppppuVar8 + 0x1c) = (int)uStack_910;
  if (local_1a0 < 100000) {
    local_838 = (longlong ****)&PTR_FUN_149f36300;
    local_828 = (longlong ***)0x3eb0c6f7a0000000;
    local_820 = (int *)((ulonglong)local_820 & 0xffffffffffffff00);
    local_7f0 = (int *)0x0;
    local_818 = (longlong *)0x0;
    uStack_810._0_4_ = 0;
    uStack_810._4_4_ = 0;
    uStack_808._0_4_ = (uint)uStack_808 & 0xffffff00;
    uStack_808._4_4_ = 0;
    uStack_800 = 0;
    uStack_7fc = 0;
    uStack_7f8._0_4_ = 0;
    uStack_830 = (undefined ******)local_310;
    FUN_146c3d996();
  }
  local_a58 = (undefined *****)(ppppplVar18 + 2);
  local_940 = 0;
  uStack_938 = 0;
  local_358 = 0;
  local_348 = 0;
  local_948 = (longlong ***)local_310;
  FUN_142984024(&local_948);
  uVar25 = uStack_938;
  iVar13 = (int)uStack_938;
  uVar30 = uStack_938 & 0xffffffff;
  *(int *)(local_a98 + 3) = (int)uStack_938;
  local_958 = (longlong ****)0x0;
  uStack_950 = 0;
  local_968 = 0;
  uStack_960 = 0;
  if ((int)uStack_938 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar30);
  }
  uStack_950 = 0;
  iVar23 = 0;
  if ((int)uStack_938 != 0) {
    FUN_14475e67c(&local_958,uStack_938 & 0xffffffff);
    iVar23 = iVar13;
    do {
      uVar10 = uStack_950;
      lVar26 = (longlong)(int)uStack_950;
      uVar14 = (int)uStack_950 + 1;
      uStack_950 = CONCAT44(uStack_950._4_4_,uVar14);
      if (uStack_950._4_4_ < uVar14) {
        FUN_1401c3474(&local_958,uVar10 & 0xffffffff);
      }
      *(undefined1 *)((longlong)local_958 + lVar26) = 0;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    iVar23 = uStack_960._4_4_;
  }
  uStack_960 = uStack_960 & 0xffffffff00000000;
  if (iVar23 != iVar13) {
    FUN_14475e67c(&local_968,uVar25 & 0xffffffff);
  }
  if (iVar13 != 0) {
    iVar23 = iVar13;
    do {
      uVar10 = uStack_960;
      lVar26 = (longlong)(int)uStack_960;
      uVar14 = (int)uStack_960 + 1;
      uStack_960 = CONCAT44(uStack_960._4_4_,uVar14);
      if (uStack_960._4_4_ < uVar14) {
        FUN_1401c3474(&local_968,uVar10 & 0xffffffff);
      }
      *(undefined1 *)(local_968 + lVar26) = 0;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
  local_96c = 0;
  local_988 = 0;
  uStack_980 = 0;
  local_a90 = (undefined *****)ppppplVar18;
  FUN_148544e78(&local_988,uVar30);
  local_7f0 = &local_98c;
  local_98c = 0;
  local_ab0 = *(uint *)local_aa0[6];
  uStack_830 = (undefined ******)&local_958;
  uStack_810 = &local_92c;
  uStack_800 = (undefined4)local_aa0[5];
  uStack_7fc = (undefined4)((ulonglong)local_aa0[5] >> 0x20);
  uStack_7f8 = &local_968;
  local_578 = 0;
  local_570 = 0;
  local_8e8 = (undefined *****)FUN_143ba2af8;
  pppppuStack_8e0 = (undefined *****)&local_838;
  local_aa8 = &local_578;
  local_838 = &local_948;
  local_828 = (longlong ***)local_310;
  local_820 = &local_96c;
  local_818 = &local_988;
  uStack_808 = &local_928;
  FUN_1401f8d10(L"ParallelFor Task",uVar25 & 0xffffffff,1,&local_8e8);
  *(int *)(local_a98 + 4) = local_96c;
  *(int *)((longlong)local_a98 + 0x24) = local_98c;
  if ((local_96c == 0) && (local_98c == 0)) {
    plVar28 = (longlong *)local_aa0[7];
    pppplVar15 = (longlong ****)local_a90[5];
    EnterCriticalSection((LPCRITICAL_SECTION)plVar28[1]);
    plVar27 = (longlong *)*plVar28;
    iVar13 = (int)plVar27[1];
    *(uint *)(plVar27 + 1) = iVar13 + 1U;
    if (*(uint *)((longlong)plVar27 + 0xc) < iVar13 + 1U) {
      FUN_143ba2ca2(plVar27,iVar13);
    }
    lVar26 = *plVar27;
    *(int *)(lVar26 + (longlong)iVar13 * 0x10) = local_1a0;
    *(longlong *****)(lVar26 + 8 + (longlong)iVar13 * 0x10) = pppplVar15;
    LeaveCriticalSection((LPCRITICAL_SECTION)plVar28[1]);
  }
  else {
    local_ab8 = (undefined8 **)((ulonglong)local_ab8 & 0xffffffffffffff00);
    FUN_1411b354a(&local_578,0,0,0);
    local_9a8 = (longlong *)0x0;
    uStack_9a0 = 0;
    local_818 = (longlong *)0x0;
    uStack_810._0_4_ = 0;
    local_838 = (longlong ****)0x0;
    uStack_830 = (undefined ******)0x0;
    uStack_810._4_4_ = 0x80;
    uStack_808._0_4_ = 0xffffffff;
    uStack_808._4_4_ = 0;
    uStack_7f8._0_4_ = 0;
    uStack_7f8._4_4_ = 0;
    local_7f0 = (int *)((ulonglong)local_7f0 & 0xffffffff00000000);
    local_7c8 = 0;
    local_7c0 = 0;
    local_7e8 = 0;
    uStack_7e0 = 0;
    local_7bc = 0xffffffff00000080;
    local_7b4 = 0;
    local_7a8 = 0;
    local_7a0 = 0;
    local_798 = 0x101;
    local_770 = 0;
    local_768 = 0;
    local_790 = 0;
    uStack_788 = 0;
    local_764 = 0xffffffff00000080;
    local_75c = 0;
    local_750 = 0;
    local_748 = 0;
    local_720 = 0;
    local_718 = 0;
    local_740 = 0;
    uStack_738 = 0;
    local_714 = 0xffffffff00000080;
    local_70c = 0;
    local_700 = 0;
    local_6f8 = 0;
    local_6f0 = 0x101;
    local_6c8 = 0;
    local_6c0 = 0;
    local_6e8 = 0;
    uStack_6e0 = 0;
    local_6bc = 0xffffffff00000080;
    local_6b4 = 0;
    local_6a8 = 0;
    local_6a0 = 0;
    local_678 = 0;
    local_670 = 0;
    local_698 = 0;
    uStack_690 = 0;
    local_66c = 0xffffffff00000080;
    local_664 = 0;
    local_658 = 0;
    local_650 = 0;
    local_647 = 1;
    local_648 = 1;
    local_620 = 0;
    local_618 = 0;
    local_640 = 0;
    uStack_638 = 0;
    local_614 = 0xffffffff00000080;
    local_60c = 0;
    local_600 = 0;
    local_5f8 = 0;
    local_5d0 = 0;
    local_5c8 = 0;
    local_5f0 = 0;
    uStack_5e8 = 0;
    local_5c4 = 0xffffffff00000080;
    local_5bc = 0;
    local_5b0 = 0;
    local_5a8 = 0;
    local_5a0 = 0x101;
    local_598 = 0;
    uStack_590 = 0;
    local_588 = 0;
    uStack_580 = 0;
    local_9b8 = 0;
    uStack_9b0 = 0;
    local_9c8 = 0;
    uStack_9c0 = 0;
    local_9d8 = 0;
    uStack_9d0 = 0;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_9f8 = 0;
    uStack_9f0 = 0;
    local_a08 = 0;
    uStack_a00 = 0;
    local_a18 = (undefined8 *)0x0;
    uStack_a10 = 0;
    local_998 = &local_578;
    if (iVar13 != 0) {
      local_a70 = (longlong *)&DAT_00000001;
      if (1 < iVar13) {
        local_a70 = (longlong *)(uVar25 & 0xffffffff);
      }
      uVar39 = 0xffffffff;
      uVar40 = 0xffefffff;
      plVar28 = (longlong *)0x0;
      do {
        plVar27 = *(longlong **)(local_940 + (longlong)plVar28 * 8);
        if ((*(char *)(local_968 + (longlong)plVar28) == '\0') ||
           (1000000 < (int)plVar27[1] * local_92c)) {
          FUN_146bccf46(&local_838);
          FUN_146bc683c(&local_a18);
          local_8e8 = (undefined *****)*plVar27;
          pppppuStack_8e0 = (undefined *****)CONCAT44(pppppuStack_8e0._4_4_,(int)plVar27[1]);
          local_ab0 = local_ab0 & 0xffffff00;
          local_ab8 = &local_a18;
          FUN_146bce922(&local_998,local_310,&local_8e8,&local_838);
          *(int *)(local_a98 + 5) = *(int *)(local_a98 + 5) + 1;
        }
        else if (0 < local_92c) {
          local_a68 = CONCAT71(local_a68._1_7_,
                               *(undefined1 *)((longlong)local_958 + (longlong)plVar28));
          uVar25 = 0;
          local_a88 = plVar28;
          local_a78 = plVar27;
          do {
            local_a38 = 0;
            uStack_a30 = 0;
            local_a48 = (undefined ****)0x0;
            plStack_a40 = (longlong *)0x0;
            local_a28 = 0;
            plVar22 = (longlong *)(uVar25 * 0x10 + local_918);
            plVar16 = (longlong *)FUN_14001cc68(0x230,0x10);
            plVar16[1] = (longlong)&DAT_100000001;
            *plVar16 = (longlong)&PTR_FUN_149fab260;
            pppplVar15 = (longlong ****)(plVar16 + 2);
            local_ab8 = (undefined8 **)((ulonglong)local_ab8 & 0xffffffffffffff00);
            FUN_1411b354a(pppplVar15,0,0,0);
            plVar28 = plStack_a40;
            local_a48 = (undefined ****)pppplVar15;
            if (plVar16 == (longlong *)0x0) {
              if (plStack_a40 != (longlong *)0x0) {
                plStack_a40 = (longlong *)0x0;
LAB_143ba1c51:
                LOCK();
                plVar1 = plVar28 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar28)(plVar28);
                  LOCK();
                  piVar5 = (int *)((longlong)plVar28 + 0xc);
                  *piVar5 = *piVar5 + -1;
                  UNLOCK();
                  if (*piVar5 == 0) {
                    (**(code **)(*plVar28 + 0x10))(plVar28);
                  }
                }
                if (plVar16 != (longlong *)0x0) goto LAB_143ba1c73;
              }
            }
            else {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
              if (plVar16 == plStack_a40) {
                LOCK();
                plVar28 = plVar16 + 1;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if ((int)*plVar28 == 0) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar5 = (int *)((longlong)plVar16 + 0xc);
                  *piVar5 = *piVar5 + -1;
                  UNLOCK();
                  if (*piVar5 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                }
              }
              else {
                bVar29 = plStack_a40 != (longlong *)0x0;
                plStack_a40 = plVar16;
                if (bVar29) goto LAB_143ba1c51;
              }
LAB_143ba1c73:
              LOCK();
              plVar28 = plVar16 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar5 = (int *)((longlong)plVar16 + 0xc);
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (*piVar5 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
            }
            local_a50 = local_a48;
            FUN_146bccf46(&local_838);
            FUN_146bc683c(&local_a18);
            local_8e8 = (undefined *****)*plVar27;
            pppppuStack_8e0 = (undefined *****)CONCAT44(pppppuStack_8e0._4_4_,(int)plVar27[1]);
            local_ab0 = local_ab0 & 0xffffff00;
            local_ab8 = &local_a18;
            FUN_146bce922(&local_a50,local_310,&local_8e8);
            puVar7 = local_a18;
            lVar19 = (longlong)*(int *)*plVar22 * 0xb0;
            lVar26 = *(longlong *)(local_908 + 0xa0 + lVar19);
            lVar24 = local_908 + lVar19;
            if (lVar26 != 0) {
              lVar24 = lVar26;
            }
            lVar26 = (longlong)*(int *)(local_908 + 0xa8 + lVar19);
            dVar6 = DAT_14c846520;
            dVar36 = DAT_14c846518;
            dVar35 = DAT_14c846510;
            if (lVar26 != 0) {
              lVar19 = 0;
              do {
                dVar6 = dVar6 * *(double *)(lVar24 + 0x48 + lVar19);
                dVar36 = dVar36 * *(double *)(lVar24 + 0x40 + lVar19);
                dVar35 = dVar35 * *(double *)(lVar24 + 0x38 + lVar19);
                lVar19 = lVar19 + 0x50;
              } while (lVar26 * 0x50 != lVar19);
            }
            lVar26 = (longlong)(int)uStack_a10;
            plVar27 = (longlong *)0xffefffffffffffff;
            ppppplVar33 = (longlong *****)0xffefffffffffffff;
            ppppplVar18 = (longlong *****)0xffefffffffffffff;
            ppppplVar32 = (longlong *****)0x7fefffffffffffff;
            plVar16 = (longlong *)0x7fefffffffffffff;
            ppppplVar34 = (longlong *****)0x7fefffffffffffff;
            local_a80 = uVar25;
            if (lVar26 != 0) {
              lVar24 = 0;
              uVar43 = 0xffffffff;
              uVar44 = 0x7fefffff;
              uVar37 = uVar39;
              uVar38 = uVar40;
              uVar41 = uVar39;
              uVar42 = uVar40;
              uVar45 = uVar43;
              uVar46 = uVar44;
              uVar47 = uVar39;
              uVar48 = uVar40;
              uVar49 = uVar43;
              uVar50 = uVar44;
              do {
                ppppuVar9 = local_a48;
                uVar14 = *(uint *)((longlong)puVar7 + lVar24) >> 9;
                uVar25 = (ulonglong)(*(uint *)((longlong)puVar7 + lVar24) & 0x1ff);
                pplVar3 = (longlong **)(local_a48[2][uVar14] + uVar25 * 3);
                local_8e8 = (undefined *****)((double)*pplVar3 * dVar35);
                pppppuStack_8e0 = (undefined *****)((double)pplVar3[1] * dVar36);
                local_8d8 = (undefined *)((double)local_a48[2][uVar14][uVar25 * 3 + 2] * dVar6);
                cVar12 = FUN_146bfed03(&local_8e8);
                if (cVar12 != '\0') {
                  pplVar3 = (longlong **)ppppuVar9[2][uVar14];
                  pplVar3[uVar25 * 3 + 2] = (longlong *)local_8d8;
                  pplVar3 = pplVar3 + uVar25 * 3;
                  *pplVar3 = (longlong *)local_8e8;
                  pplVar3[1] = (longlong *)pppppuStack_8e0;
                  if (*(char *)(ppppuVar9 + 0x42) == '\x01') {
                    LOCK();
                    *(int *)((longlong)ppppuVar9 + 0x214) =
                         *(int *)((longlong)ppppuVar9 + 0x214) + 1;
                    UNLOCK();
                  }
                }
                ppppplVar32 = (longlong *****)local_8e8;
                if ((double)CONCAT44(uVar50,uVar49) <= (double)local_8e8) {
                  ppppplVar32 = (longlong *****)CONCAT44(uVar50,uVar49);
                }
                ppppplVar18 = (longlong *****)local_8e8;
                if ((double)local_8e8 <= (double)CONCAT44(uVar38,uVar37)) {
                  ppppplVar18 = (longlong *****)CONCAT44(uVar38,uVar37);
                }
                ppppplVar34 = (longlong *****)pppppuStack_8e0;
                if ((double)CONCAT44(uVar46,uVar45) <= (double)pppppuStack_8e0) {
                  ppppplVar34 = (longlong *****)CONCAT44(uVar46,uVar45);
                }
                ppppplVar33 = (longlong *****)pppppuStack_8e0;
                if ((double)pppppuStack_8e0 <= (double)CONCAT44(uVar42,uVar41)) {
                  ppppplVar33 = (longlong *****)CONCAT44(uVar42,uVar41);
                }
                plVar16 = (longlong *)local_8d8;
                if ((double)CONCAT44(uVar44,uVar43) <= (double)local_8d8) {
                  plVar16 = (longlong *)CONCAT44(uVar44,uVar43);
                }
                plVar27 = (longlong *)local_8d8;
                if ((double)local_8d8 <= (double)CONCAT44(uVar48,uVar47)) {
                  plVar27 = (longlong *)CONCAT44(uVar48,uVar47);
                }
                lVar24 = lVar24 + 4;
                uVar49 = SUB84(ppppplVar32,0);
                uVar50 = (undefined4)((ulonglong)ppppplVar32 >> 0x20);
                uVar45 = SUB84(ppppplVar34,0);
                uVar46 = (undefined4)((ulonglong)ppppplVar34 >> 0x20);
                uVar43 = SUB84(plVar16,0);
                uVar44 = (undefined4)((ulonglong)plVar16 >> 0x20);
                uVar37 = SUB84(ppppplVar18,0);
                uVar38 = (undefined4)((ulonglong)ppppplVar18 >> 0x20);
                uVar41 = SUB84(ppppplVar33,0);
                uVar42 = (undefined4)((ulonglong)ppppplVar33 >> 0x20);
                uVar47 = SUB84(plVar27,0);
                uVar48 = (undefined4)((ulonglong)plVar27 >> 0x20);
              } while (lVar26 * 4 != lVar24);
            }
            uVar25 = local_a80;
            plVar28 = local_a88;
            if ((*(char *)(local_aa0[5] + 0x10) == '\0') ||
               (dVar36 = (double)(-(ulonglong)(0.0 <= (double)plVar27 - (double)plVar16) &
                                 (ulonglong)((double)plVar27 - (double)plVar16)),
               dVar35 = (double)(-(ulonglong)(0.0 <= (double)ppppplVar33 - (double)ppppplVar34) &
                                (ulonglong)((double)ppppplVar33 - (double)ppppplVar34)),
               uVar30 = -(ulonglong)(dVar36 <= dVar35),
               dVar35 = (double)(~uVar30 & (ulonglong)dVar36 | uVar30 & (ulonglong)dVar35),
               dVar36 = (double)(-(ulonglong)(0.0 <= (double)ppppplVar18 - (double)ppppplVar32) &
                                (ulonglong)((double)ppppplVar18 - (double)ppppplVar32)),
               uVar30 = -(ulonglong)(dVar35 <= dVar36),
               *(double *)(local_aa0[5] + 0x18) <=
               (double)(uVar30 & (ulonglong)dVar36 | ~uVar30 & (ulonglong)dVar35))) {
              uVar30 = 0;
              if ((char)local_a68 != '\0') {
                dVar35 = (double)FUN_148544eef(local_a48,
                                               local_a80 * 0x38 +
                                               *(longlong *)(local_988 + (longlong)local_a88 * 0x10)
                                              );
                uVar30 = -(ulonglong)(dVar35 <= *(double *)(local_aa0[5] + 8));
                uVar30 = ~uVar30 & (ulonglong)*(double *)(local_aa0[5] + 8) |
                         (ulonglong)dVar35 & uVar30;
              }
              local_a28 = uVar30;
              if ((longlong)(int)plVar22[1] != 0) {
                lVar24 = *plVar22;
                lVar26 = lVar24 + (longlong)(int)plVar22[1] * 4;
                do {
                  FUN_1482fde4a(&local_8e8);
                  uVar30 = uStack_a30;
                  ppppppuVar17 = (undefined ******)local_848;
                  if ((undefined ******)local_848 == (undefined ******)0x0) {
                    ppppppuVar17 = &local_8e8;
                  }
                  lVar19 = (longlong)local_840;
                  if (lVar19 != 0) {
                    lVar20 = 0;
                    do {
                      *(double *)((longlong)ppppppuVar17 + lVar20 + 0x48) = DAT_14c846520;
                      pdVar2 = (double *)((longlong)ppppppuVar17 + lVar20 + 0x38);
                      *pdVar2 = DAT_14c846510;
                      pdVar2[1] = DAT_14c846518;
                      lVar20 = lVar20 + 0x50;
                    } while (lVar19 * 0x50 != lVar20);
                  }
                  lVar19 = (longlong)(int)uStack_a30;
                  uVar14 = (int)uStack_a30 + 1;
                  uStack_a30 = CONCAT44(uStack_a30._4_4_,uVar14);
                  if (uStack_a30._4_4_ < uVar14) {
                    FUN_148544de4(&local_a38,uVar30 & 0xffffffff);
                  }
                  FUN_1482fde4a(lVar19 * 0xb0 + local_a38,&local_8e8);
                  if ((undefined ******)local_848 != (undefined ******)0x0) {
                    FUN_1400020a8();
                  }
                  lVar24 = lVar24 + 4;
                } while (lVar24 != lVar26);
              }
              uVar30 = uStack_9a0;
              lVar26 = (longlong)(int)uStack_9a0;
              uVar14 = (int)uStack_9a0 + 1;
              uStack_9a0 = CONCAT44(uStack_9a0._4_4_,uVar14);
              if (uStack_9a0._4_4_ < uVar14) {
                FUN_143ba2da8(&local_9a8,uVar30 & 0xffffffff);
              }
              local_9a8[lVar26 * 5] = (longlong)local_a48;
              local_9a8[lVar26 * 5 + 1] = (longlong)plStack_a40;
              local_a48 = (undefined ****)0x0;
              plStack_a40 = (longlong *)0x0;
              local_9a8[lVar26 * 5 + 2] = 0;
              local_9a8[lVar26 * 5 + 2] = local_a38;
              local_a38 = 0;
              *(int *)(local_9a8 + lVar26 * 5 + 3) = (int)uStack_a30;
              *(uint *)((longlong)local_9a8 + lVar26 * 0x28 + 0x1c) = uStack_a30._4_4_;
              uStack_a30 = 0;
              local_9a8[lVar26 * 5 + 4] = local_a28;
            }
            else {
              LOCK();
              *(int *)local_aa0[8] = *(int *)local_aa0[8] + 1;
              UNLOCK();
              LOCK();
              *(int *)local_aa0[9] = *(int *)local_aa0[9] + (int)plVar22[1];
              UNLOCK();
              LOCK();
              *(int *)local_aa0[10] = *(int *)local_aa0[10] + (int)local_a78[1] * (int)plVar22[1];
              UNLOCK();
            }
            plVar27 = local_a78;
            FUN_148544d7f(local_a38);
            if (local_a38 != 0) {
              FUN_1400020a8();
            }
            plVar16 = plStack_a40;
            if (plStack_a40 != (longlong *)0x0) {
              LOCK();
              plVar22 = plStack_a40 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)*plStack_a40)(plStack_a40);
                LOCK();
                piVar5 = (int *)((longlong)plVar16 + 0xc);
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (*piVar5 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
            }
            uVar25 = uVar25 + 1;
          } while ((longlong)uVar25 < (longlong)local_92c);
        }
        plVar28 = (longlong *)((longlong)plVar28 + 1);
      } while (plVar28 != local_a70);
    }
    FUN_146bc8622(&local_a18);
    FUN_146bfdcfe(&local_838);
    *(int *)((longlong)local_a98 + 0x2c) = local_408;
    *(int *)(local_a98 + 9) = *(int *)(local_a98 + 9) + local_408;
    if (local_408 < 1) {
      if ((longlong)local_8f0 != 0) {
        lVar26 = 0;
        do {
          *(undefined8 *)(*(longlong *)((longlong)local_8f8 + lVar26) + 0xd8) = 0;
          lVar26 = lVar26 + 8;
        } while ((longlong)local_8f0 * 8 != lVar26);
      }
      *(undefined4 *)(local_a90 + 3) = 0;
      if (*(int *)((longlong)local_a90 + 0x1c) < 0) {
        FUN_148549564(local_a58);
      }
    }
    else {
      if (*(char *)local_aa0[0xb] == '\x01') {
        pppplVar15 = (longlong ****)FUN_14001cc68(0x380,0x10);
        FUN_148545d70(pppplVar15,&local_578);
      }
      else {
        pppplVar15 = (longlong ****)FUN_14001cc68(0x260,0x10);
        FUN_148547c8a(pppplVar15,&local_578);
      }
      pppppuVar8 = local_a90;
      pppplVar4 = (longlong ****)local_a90[5];
      local_a90[5] = (undefined ****)pppplVar15;
      if (pppplVar4 != (longlong ****)0x0) {
        (*(code *)**pppplVar4)(pppplVar4,1);
        pppplVar15 = (longlong ****)pppppuVar8[5];
      }
      plVar28 = (longlong *)local_aa0[7];
      EnterCriticalSection((LPCRITICAL_SECTION)plVar28[1]);
      plVar27 = (longlong *)*plVar28;
      iVar13 = (int)plVar27[1];
      *(uint *)(plVar27 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)plVar27 + 0xc) < iVar13 + 1U) {
        FUN_143ba2ca2(plVar27,iVar13);
      }
      lVar26 = *plVar27;
      *(int *)(lVar26 + (longlong)iVar13 * 0x10) = local_408;
      *(longlong *****)(lVar26 + 8 + (longlong)iVar13 * 0x10) = pppplVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)plVar28[1]);
      puVar7 = local_aa0;
      if ((longlong)local_8f0 != 0) {
        pppplVar15 = (longlong ****)local_a90[5];
        lVar26 = 0;
        do {
          *(longlong *****)(*(longlong *)((longlong)local_8f8 + lVar26) + 0xd8) = pppplVar15;
          lVar26 = lVar26 + 8;
        } while ((longlong)local_8f0 * 8 != lVar26);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)local_aa0[0xc]);
      piVar5 = (int *)puVar7[0xd];
      *piVar5 = *piVar5 + local_408 * (int)uStack_900;
      LeaveCriticalSection((LPCRITICAL_SECTION)puVar7[0xc]);
    }
    if ((int)uStack_9a0 == 0) {
      iVar13 = 1;
      lVar26 = 0x70;
    }
    else {
      LOCK();
      *(int *)local_aa0[0xf] = *(int *)local_aa0[0xf] + 1;
      UNLOCK();
      if ((longlong)(int)uStack_9a0 != 0) {
        local_a78 = local_9a8 + (longlong)(int)uStack_9a0 * 5;
        local_a68 = local_a60 + 0x18;
        local_a90 = local_a98 + 6;
        local_a88 = (longlong *)(local_a60 + 8);
        pcVar21 = EnterCriticalSection_exref;
        plVar28 = local_9a8;
        do {
          puVar7 = local_aa0;
          LOCK();
          *(int *)local_aa0[0x10] = *(int *)local_aa0[0x10] + 1;
          UNLOCK();
          local_a18 = (undefined8 *)FUN_14001cc68(0x48,0x10);
          local_a18[1] = 0;
          local_a18[2] = 0;
          local_a18[3] = 0x7fefffffffffffff;
          local_a18[4] = 0x7fefffffffffffff;
          local_a18[5] = 0x7fefffffffffffff;
          local_a18[6] = 0xffefffffffffffff;
          local_a18[7] = 0xffefffffffffffff;
          local_a18[8] = 0xffefffffffffffff;
          *local_a18 = 0;
          lVar26 = *plVar28;
          local_a80 = (ulonglong)*(uint *)(lVar26 + 0x170);
          if (*(char *)puVar7[0xb] == '\x01') {
            pppplVar15 = (longlong ****)FUN_14001cc68(0x380,0x10);
            FUN_148545d70(pppplVar15,lVar26);
          }
          else {
            pppplVar15 = (longlong ****)FUN_14001cc68(0x260,0x10);
            FUN_148547c8a(pppplVar15,lVar26);
          }
          *(undefined2 *)(pppplVar15 + 3) = 0x100;
          lVar26 = local_aa0[5];
          if ((double)plVar28[4] <= *(double *)(lVar26 + 8) &&
              *(double *)(lVar26 + 8) != (double)plVar28[4]) {
            *(undefined1 *)((longlong)pppplVar15 + 0x1a) = 1;
            ppplVar31 = (longlong ***)((*(double *)(lVar26 + 8) - (double)plVar28[4]) * 0.5);
            pppplVar15[4] = ppplVar31;
            *(bool *)(pppplVar15 + 5) = (double)ppplVar31 < *(double *)(lVar26 + 8) * 0.6;
          }
          ppppplVar18 = (longlong *****)FUN_14001cc68(0x40,0x10);
          ppppplVar18[1] = (longlong ****)&DAT_100000001;
          *ppppplVar18 = (longlong ****)&PTR_FUN_14af177c0;
          local_8e8 = (undefined *****)(ppppplVar18 + 2);
          ppppplVar18[2] = (longlong ****)0x0;
          ppppplVar18[3] = (longlong ****)0x0;
          ppppplVar18[6] = (longlong ****)0x0;
          ppppplVar18[7] = (longlong ****)0x0;
          *(undefined4 *)(ppppplVar18 + 3) = 1;
          ppppplVar18[4] = (longlong ****)0x0;
          ppppplVar18[5] = (longlong ****)0x0;
          *(undefined4 *)(ppppplVar18 + 6) = 0;
          pppppuStack_8e0 = (undefined *****)ppppplVar18;
          if (ppppplVar18 != (longlong *****)0x0) {
            LOCK();
            *(int *)(ppppplVar18 + 1) = *(int *)(ppppplVar18 + 1) + 1;
            UNLOCK();
            LOCK();
            ppppplVar33 = ppppplVar18 + 1;
            *(int *)ppppplVar33 = *(int *)ppppplVar33 + -1;
            UNLOCK();
            if (*(int *)ppppplVar33 == 0) {
              (*(code *)**ppppplVar18)(ppppplVar18);
              LOCK();
              piVar5 = (int *)((longlong)ppppplVar18 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (*(code *)(*ppppplVar18)[2])(ppppplVar18);
              }
            }
          }
          pppplVar4 = (longlong ****)local_8e8[5];
          local_8e8[5] = (undefined ****)pppplVar15;
          if (pppplVar4 != (longlong ****)0x0) {
            (*(code *)**pppplVar4)(pppplVar4,1);
            pppplVar15 = (longlong ****)local_8e8[5];
          }
          plVar27 = (longlong *)local_aa0[7];
          (*pcVar21)(plVar27[1]);
          plVar16 = (longlong *)*plVar27;
          iVar13 = (int)plVar16[1];
          *(uint *)(plVar16 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar16 + 0xc) < iVar13 + 1U) {
            FUN_143ba2ca2(plVar16,iVar13);
          }
          lVar26 = *plVar16;
          iVar23 = (int)local_a80;
          *(int *)(lVar26 + (longlong)iVar13 * 0x10) = iVar23;
          *(longlong *****)(lVar26 + 8 + (longlong)iVar13 * 0x10) = pppplVar15;
          LeaveCriticalSection((LPCRITICAL_SECTION)plVar27[1]);
          puVar7 = local_aa0;
          pcVar21 = EnterCriticalSection_exref;
          EnterCriticalSection((LPCRITICAL_SECTION)local_aa0[0xc]);
          *(int *)puVar7[0x11] = *(int *)puVar7[0x11] + iVar23;
          *(int *)puVar7[0xd] = *(int *)puVar7[0xd] + (int)plVar28[3] * iVar23;
          local_a48 = local_8e8[5];
          local_838 = (longlong ****)&local_a48;
          uStack_830 = &local_8e8;
          FUN_148544726(local_a68,&local_a50,&local_838);
          LeaveCriticalSection((LPCRITICAL_SECTION)puVar7[0xc]);
          uVar25 = 0;
          if ((longlong)(int)plVar28[3] != 0) {
            lVar26 = plVar28[2];
            lVar24 = (longlong)(int)plVar28[3] * 0xb0;
            local_a70 = plVar28;
            do {
              FUN_1482fde4a(&local_838,lVar26);
              ppplVar31 = (longlong ***)FUN_14001cc68(0xe0,0x10);
              ppplVar31[2] = (longlong **)0x0;
              *(undefined4 *)(ppplVar31 + 3) = 1;
              ppplVar31[0x18] = (longlong **)0x0;
              ppplVar31[0x19] = (longlong **)0x200000000;
              *(undefined1 *)(ppplVar31 + 0x1a) = 0;
              ppplVar31[0x1b] = (longlong **)0x0;
              *ppplVar31 = (longlong **)0x0;
              ppplVar31[1] = (longlong **)0x3;
              FUN_148543dfa(ppplVar31 + 4,&local_838);
              *(undefined1 *)(ppplVar31 + 0x1a) = 0;
              ppppplVar18 = (longlong *****)(local_8e8 + 2);
              iVar13 = *(int *)(local_8e8 + 3);
              *(uint *)(local_8e8 + 3) = iVar13 + 1U;
              if (*(uint *)((longlong)local_8e8 + 0x1c) < iVar13 + 1U) {
                FUN_148544c74(ppppplVar18,iVar13);
              }
              (*ppppplVar18)[iVar13] = ppplVar31;
              ppplVar31[0x1b] = (longlong **)local_8e8[5];
              plVar28 = local_a18 + 1;
              iVar13 = *(int *)(local_a18 + 2);
              *(uint *)(local_a18 + 2) = iVar13 + 1U;
              if (*(uint *)((longlong)local_a18 + 0x14) < iVar13 + 1U) {
                FUN_1485444bc(plVar28,iVar13);
              }
              *(longlong ****)(*plVar28 + (longlong)iVar13 * 8) = ppplVar31;
              LOCK();
              *(int *)local_aa0[0x13] = *(int *)local_aa0[0x13] + 1;
              UNLOCK();
              if (CONCAT62(uStack_796,local_798) != 0) {
                FUN_1400020a8();
              }
              lVar26 = lVar26 + 0xb0;
              lVar24 = lVar24 + -0xb0;
            } while (lVar24 != 0);
            uVar25 = (ulonglong)*(uint *)(local_a70 + 3);
            pcVar21 = EnterCriticalSection_exref;
            plVar28 = local_a70;
          }
          iVar13 = *(int *)(local_a98 + 7);
          *(uint *)(local_a98 + 7) = iVar13 + 1U;
          if (*(uint *)((longlong)local_a98 + 0x3c) < iVar13 + 1U) {
            FUN_148306f12(local_a90,iVar13);
          }
          local_a98[6][iVar13] = (undefined ***)(uVar25 << 0x20 | local_a80);
          *(int *)((longlong)local_a98 + 0x44) =
               *(int *)((longlong)local_a98 + 0x44) + (int)plVar28[3];
          *(int *)(local_a98 + 8) = *(int *)(local_a98 + 8) + (int)local_a80;
          *(int *)(local_a98 + 9) = *(int *)(local_a98 + 9) + (int)local_a80;
          (*pcVar21)(local_aa0[0xc]);
          iVar13 = *(int *)(local_a60 + 0x10);
          *(uint *)(local_a60 + 0x10) = iVar13 + 1U;
          if (*(uint *)(local_a60 + 0x14) < iVar13 + 1U) {
            FUN_14854464c(local_a88,iVar13);
          }
          *(undefined8 **)(*local_a88 + (longlong)iVar13 * 8) = local_a18;
          local_a18 = (undefined8 *)0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)local_aa0[0xc]);
          pppppuVar8 = pppppuStack_8e0;
          if ((longlong *****)pppppuStack_8e0 != (longlong *****)0x0) {
            LOCK();
            ppppplVar18 = (longlong *****)(pppppuStack_8e0 + 1);
            *(int *)ppppplVar18 = *(int *)ppppplVar18 + -1;
            UNLOCK();
            if (*(int *)ppppplVar18 == 0) {
              (*(code *)**pppppuStack_8e0)(pppppuStack_8e0);
              LOCK();
              piVar5 = (int *)((longlong)pppppuVar8 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (*(code *)(*pppppuVar8)[2])(pppppuVar8);
              }
            }
          }
          FUN_148544542(&local_a18,local_a18);
          plVar28 = plVar28 + 5;
        } while (plVar28 != local_a78);
      }
      iVar13 = *(int *)(local_a98 + 9);
      lVar26 = 0xa0;
    }
    LOCK();
    **(int **)((longlong)local_aa0 + lVar26) = **(int **)((longlong)local_aa0 + lVar26) + iVar13;
    UNLOCK();
    FUN_143ba3139(local_9a8,uStack_9a0 & 0xffffffff);
    if (local_9a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_141082778(&local_578);
  }
  FUN_1485451b4(local_988,uStack_980 & 0xffffffff);
  if (local_988 != 0) {
    FUN_1400020a8();
  }
  if (local_968 != 0) {
    FUN_1400020a8();
  }
  if ((undefined *****)local_958 != (undefined *****)0x0) {
    FUN_1400020a8();
  }
  FUN_146be9400(&local_940);
  FUN_148544d7f(local_928,uStack_920 & 0xffffffff);
  if (local_928 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_918,uStack_910 & 0xffffffff);
  if (local_918 != 0) {
    FUN_1400020a8();
  }
  FUN_148544d7f(local_908,uStack_900 & 0xffffffff);
  if (local_908 != 0) {
    FUN_1400020a8();
  }
  if (local_8f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_141082778(local_310);
  if ((local_f0 ^ (ulonglong)auStack_ad8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ba2af8 FUN_143ba2af8 body=426 status=ok
// SIG undefined FUN_143ba2af8(void)

void FUN_143ba2af8(longlong *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar5 = (longlong)*param_2;
  plVar2 = *(longlong **)(*(longlong *)(*param_1 + 8) + lVar5 * 8);
  uVar3 = 1;
  if ((longlong)(int)plVar2[1] != 0) {
    lVar7 = *(longlong *)(param_1[2] + 0x1c0);
    lVar6 = 0;
    do {
      lVar9 = *(longlong *)
               (*(longlong *)(param_1[2] + 0x180) + (ulonglong)(*(uint *)(*plVar2 + lVar6) >> 9) * 8
               );
      uVar8 = (ulonglong)(*(uint *)(*plVar2 + lVar6) & 0x1ff);
      uVar1 = *(uint *)(lVar9 + uVar8 * 0xc);
      if (((*(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                    (ulonglong)((uVar1 & 0x1ff) << 4)) == -1) ||
          (uVar1 = *(uint *)(lVar9 + uVar8 * 0xc + 4),
          *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                  (ulonglong)((uVar1 & 0x1ff) << 4)) == -1)) ||
         (uVar1 = *(uint *)(lVar9 + 8 + uVar8 * 0xc),
         *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                 (ulonglong)((uVar1 & 0x1ff) << 4)) == -1)) {
        uVar3 = 0;
        break;
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)plVar2[1] * 4 != lVar6);
  }
  *(undefined1 *)(*(longlong *)param_1[1] + lVar5) = uVar3;
  if (*(char *)(*(longlong *)param_1[1] + lVar5) == '\0') {
    LOCK();
    *(int *)param_1[3] = *(int *)param_1[3] + 1;
    UNLOCK();
  }
  FUN_1485038fe(*(longlong *)param_1[4] + lVar5 * 0x10,*(undefined4 *)param_1[5],1);
  if (0 < *(int *)param_1[5]) {
    lVar9 = 0;
    lVar7 = 0;
    lVar6 = 0;
    do {
      bVar4 = FUN_14854523d(param_1[2],plVar2,*(longlong *)param_1[6] + lVar7,
                            *(undefined8 *)(param_1[7] + 8),
                            *(longlong *)(*(longlong *)param_1[4] + lVar5 * 0x10) + lVar9);
      *(byte *)(*(longlong *)param_1[8] + lVar5) =
           *(byte *)(*(longlong *)param_1[8] + lVar5) | bVar4;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xb0;
      lVar9 = lVar9 + 0x38;
    } while (lVar6 < *(int *)param_1[5]);
  }
  if (*(char *)(*(longlong *)param_1[8] + lVar5) != '\0') {
    LOCK();
    *(int *)param_1[9] = *(int *)param_1[9] + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143ba2ca2 FUN_143ba2ca2 body=262 status=ok
// SIG undefined FUN_143ba2ca2(void)

void FUN_143ba2ca2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143ba2da8 FUN_143ba2da8 body=363 status=ok
// SIG undefined FUN_143ba2da8(void)

void FUN_143ba2da8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143ba2e3e;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143ba2e3e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 143ba2f14 FUN_143ba2f14 body=311 status=ok
// SIG undefined FUN_143ba2f14(void)

undefined8 FUN_143ba2f14(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined2 local_250;
  undefined1 local_24e;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_250 = 1;
  local_24e = 0;
  FUN_146bfe132(param_1 + 0x250,param_1 + 0x30);
  local_258 = 0;
  FUN_1411b354a(&local_250,0,0,0);
  FUN_146c00942(param_1 + 0x30,&local_250);
  FUN_141082778(&local_250);
  if ((*(char *)(param_2 + 0x21) == '\x01') &&
     ((*(char *)(param_1 + 0x1a) == '\0' || (*(char *)(param_1 + 0x28) == '\x01')))) {
    plVar2 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined8 *)((longlong)plVar2 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = 0;
    plVar2[9] = 0;
    *(undefined4 *)(plVar2 + 10) = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0x4000000000000000;
    *(undefined4 *)(plVar2 + 0xd) = 2;
    *plVar2 = param_1 + 0x2a0;
    FUN_1485411ae(plVar2,1);
    uVar1 = *(undefined8 *)(param_1 + 0x370);
    *(longlong **)(param_1 + 0x370) = plVar2;
    FUN_1485410e2(uVar1);
    FUN_1485410e2(0);
  }
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba304c FUN_143ba304c body=237 status=ok
// SIG undefined FUN_143ba304c(void)

undefined8 FUN_143ba304c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_2 + 0x21) == '\x01') {
    uVar1 = FUN_14001cc68(0xd0,0x10);
    FUN_146ba21d6(uVar1,param_1 + 0x30,1);
    puVar2 = *(undefined8 **)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0x250) = uVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if ((*(char *)(param_1 + 0x1a) == '\0') || (*(char *)(param_1 + 0x28) == '\x01')) {
      uVar1 = *(undefined8 *)(param_1 + 0x250);
      puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
      puVar2[9] = 0;
      *(undefined4 *)(puVar2 + 10) = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0x4000000000000000;
      *(undefined4 *)(puVar2 + 0xd) = 2;
      *puVar2 = uVar1;
      FUN_146bef8a8(puVar2,1);
      uVar1 = *(undefined8 *)(param_1 + 600);
      *(undefined8 **)(param_1 + 600) = puVar2;
      FUN_1485490f2(uVar1);
      FUN_1485490f2(0);
    }
  }
  return 1;
}


