// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b90a98 FUN_146b90a98 body=122 status=ok
// SIG undefined FUN_146b90a98(void)

void FUN_146b90a98(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  lVar1 = FUN_146b990c2(param_1 + 0x30,param_2,&local_34);
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b90b14 FUN_146b90b14 body=321 status=ok
// SIG undefined FUN_146b90b14(void)

void FUN_146b90b14(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  FUN_146b9962e(param_1 + 0x30,*param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((*(char *)(param_2 + 6) == '\x01') && (param_2[7] - 200 < 7)) {
    LOCK();
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + *(longlong *)(param_2 + 0xc);
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2 + 8);
    dVar3 = 0.0;
    if (*(longlong *)(param_2 + 10) != *(longlong *)(param_2 + 8)) {
      uVar1 = *(undefined8 *)(param_2 + 0xc);
      dVar3 = (double)FUN_146b45318();
      dVar3 = (((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
              ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar1 >> 0x20)) - 1.9342813113834067e+25
              )) / dVar3;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
    *(double *)(param_1 + 0xa8) = dVar3 + *(double *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  LOCK();
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  UNLOCK();
  plVar2 = *(longlong **)(param_1 + 0x18);
  FUN_140056680(local_40,L"DownloadFail");
  (**(code **)(*plVar2 + 8))(plVar2,param_2 + 2,param_2[7],local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b90c7a FUN_146b90c7a body=51 status=ok
// SIG undefined FUN_146b90c7a(void)

int FUN_146b90c7a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 100);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return iVar1 - iVar2;
}



// FUNCTION 146b90cae FUN_146b90cae body=806 status=ok
// SIG undefined FUN_146b90cae(void)

longlong * FUN_146b90cae(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_f8 [36];
  int local_d4;
  LPCRITICAL_SECTION local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88 [3];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88[2] = 0;
  uStack_70 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_d0 = (LPCRITICAL_SECTION)(param_1 + 0x80);
  *param_2 = 0;
  param_2[1] = 0;
  EnterCriticalSection(local_d0);
  plVar1 = (longlong *)(param_1 + 0x30);
  FUN_1408be27e(local_88 + 2,*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100));
  FUN_146b90fd6(param_2,*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100));
  lVar2 = param_1 + 0x40;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    local_d4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_d4 = *(int *)(param_1 + 0x58);
  }
  uStack_90 = CONCAT44(uStack_4c,uStack_50);
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_c8 = plVar1;
  local_b0 = plVar1;
  if ((iStack_54 != local_d4) || (uStack_60 != lVar2)) {
    do {
      uVar7 = uStack_70;
      iVar4 = iStack_94;
      lVar5 = *local_b0;
      lVar10 = (longlong)(int)uStack_70;
      uVar8 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
      if (uStack_70._4_4_ < uVar8) {
        FUN_1447a1bd6(local_88 + 2,uVar7 & 0xffffffff);
      }
      lVar5 = lVar5 + (longlong)iVar4 * 0x28;
      lVar10 = lVar10 * 0x10;
      puVar3 = (undefined8 *)(local_88[2] + lVar10);
      *(undefined8 *)(local_88[2] + lVar10) = 0;
      iVar4 = *(int *)(lVar5 + 0x10);
      _Src = *(void **)(lVar5 + 8);
      *(int *)(local_88[2] + 8 + lVar10) = iVar4;
      if ((longlong)iVar4 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar4,0);
        memcpy((void *)*puVar3,_Src,(longlong)iVar4 * 2);
      }
      FUN_146b9101c(param_2);
      *(undefined8 *)(*param_2 + 0x18 + (longlong)((int)param_2[1] + -1) * 0x20) =
           *(undefined8 *)(lVar5 + 0x18);
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != local_c8 ||
             (CONCAT44(uStack_9c,uStack_a0) != lVar2 || iStack_94 != local_d4));
  }
  LeaveCriticalSection(local_d0);
  local_c0 = local_88[2];
  local_b8 = (int)uStack_70;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
            (*(longlong **)(param_1 + 0x10),&local_c0,local_88);
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar5 = *param_2;
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    do {
      lVar6 = local_88[2];
      if (lVar5 + lVar11 != lVar10 + local_88[2]) {
        if (*(longlong *)(lVar5 + lVar10 * 2) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar5 + lVar10 * 2) = *(undefined8 *)(lVar6 + lVar9 * 4);
        *(undefined8 *)(lVar6 + lVar9 * 4) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar10 * 2) = *(undefined4 *)(lVar6 + 8 + lVar9 * 4);
        *(undefined4 *)(lVar5 + 0xc + lVar10 * 2) = *(undefined4 *)(lVar6 + 0xc + lVar9 * 4);
        *(undefined8 *)(lVar6 + 8 + lVar9 * 4) = 0;
      }
      *(undefined8 *)(lVar5 + 0x10 + lVar10 * 2) = *(undefined8 *)(local_88[0] + lVar9 * 2);
      lVar9 = lVar9 + 4;
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + 0x20;
    } while ((longlong)(int)lVar2 * 0x20 != lVar11);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_88[2],uStack_70 & 0xffffffff);
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b90fd6 FUN_146b90fd6 body=68 status=ok
// SIG undefined FUN_146b90fd6(void)

void FUN_146b90fd6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146b9970c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146b99738(param_1,param_2);
  return;
}



// FUNCTION 146b9101c FUN_146b9101c body=55 status=ok
// SIG undefined FUN_146b9101c(void)

void FUN_146b9101c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b9979e(param_1,iVar1);
  }
  FUN_146b99797((longlong)iVar1 * 0x20 + *param_1);
  return;
}



// FUNCTION 146b91054 FUN_146b91054 body=119 status=ok
// SIG undefined FUN_146b91054(void)

double * FUN_146b91054(longlong param_1,double *param_2,uint param_3)

{
  uint uVar1;
  double dVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  uVar1 = *(uint *)(param_1 + 0xb0);
  if (uVar1 < param_3) {
    dVar2 = 0.0;
    uVar1 = 0;
  }
  else {
    dVar2 = *(double *)(param_1 + 0xa8) / (double)uVar1;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *param_2 = dVar2;
  *(uint *)(param_2 + 1) = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  return param_2;
}



// FUNCTION 146b910cc FUN_146b910cc body=120 status=ok
// SIG undefined FUN_146b910cc(void)

void FUN_146b910cc(longlong param_1)

{
  LOCK();
  *(undefined8 *)(param_1 + 0x20) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x28) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  UNLOCK();
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  FUN_146b99824(param_1 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x000146b91141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  return;
}



// FUNCTION 146b91144 FUN_146b91144 body=55 status=ok
// SIG undefined FUN_146b91144(void)

void FUN_146b91144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_146b9096e(uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 146b9117c FUN_146b9117c body=193 status=ok
// SIG undefined FUN_146b9117c(void)

undefined8 *
FUN_146b9117c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_FUN_149f35670;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 146b9123e FUN_146b9123e body=87 status=ok
// SIG undefined FUN_146b9123e(void)

void FUN_146b9123e(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  local_20 = 2;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  LOCK();
  *(undefined4 *)(param_1 + 0x40) = 0;
  UNLOCK();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91296 FUN_146b91296 body=92 status=ok
// SIG undefined FUN_146b91296(void)

undefined4 FUN_146b91296(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0x3f800000;
  local_18 = 2;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 1;
  UNLOCK();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b912f4 FUN_146b912f4 body=53 status=ok
// SIG undefined FUN_146b912f4(void)

void FUN_146b912f4(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000146b91322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 146b9132a FUN_146b9132a body=83 status=ok
// SIG undefined FUN_146b9132a(void)

void FUN_146b9132a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  FUN_144a787a6(param_1 + 0xb0,param_2);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000146b91376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 146b9137e FUN_146b9137e body=151 status=ok
// SIG undefined FUN_146b9137e(void)

void FUN_146b9137e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0xd0);
  local_30 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))();
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  FUN_144a787a6(param_1 + 0xb0,param_2);
  *(undefined8 *)(param_1 + 200) = param_3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91416 FUN_146b91416 body=88 status=ok
// SIG undefined FUN_146b91416(void)

void FUN_146b91416(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    LOCK();
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    UNLOCK();
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))(*(longlong **)(param_1 + 0x20),param_2,10);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  FUN_144a7e010(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
                    /* WARNING: Could not recover jumptable at 0x000146b91467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 146b9146e FUN_146b9146e body=48 status=ok
// SIG undefined FUN_146b9146e(void)

void FUN_146b9146e(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000146b91497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 146b9149e FUN_146b9149e body=111 status=ok
// SIG undefined FUN_146b9149e(void)

void FUN_146b9149e(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  *(longlong *)(param_1 + 0x28) = param_2;
  UNLOCK();
  if (0 < *(longlong *)(param_1 + 0x30)) {
    local_c = (float)((double)param_2 / (double)*(longlong *)(param_1 + 0x30));
    local_10 = 4;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9150e FUN_146b9150e body=111 status=ok
// SIG undefined FUN_146b9150e(void)

void FUN_146b9150e(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  *(longlong *)(param_1 + 0x30) = param_2;
  UNLOCK();
  if (0 < param_2) {
    local_c = (float)((double)*(longlong *)(param_1 + 0x28) / (double)param_2);
    local_10 = 4;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91588 FUN_146b91588 body=113 status=ok
// SIG undefined FUN_146b91588(void)

void FUN_146b91588(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  if ((LARGE_INTEGER *)(param_1 + 0x50) != &local_28) {
    LOCK();
    *(LARGE_INTEGER *)(param_1 + 0x50) = local_28;
    UNLOCK();
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x48) = 0;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91604 FUN_146b91604 body=113 status=ok
// SIG undefined FUN_146b91604(void)

void FUN_146b91604(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  if ((LARGE_INTEGER *)(param_1 + 0x60) != &local_28) {
    LOCK();
    *(LARGE_INTEGER *)(param_1 + 0x60) = local_28;
    UNLOCK();
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x58) = 0;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91680 FUN_146b91680 body=122 status=ok
// SIG undefined FUN_146b91680(void)

void FUN_146b91680(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  if ((LARGE_INTEGER *)(param_1 + 0x70) != &local_28) {
    LOCK();
    *(LARGE_INTEGER *)(param_1 + 0x70) = local_28;
    UNLOCK();
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x68) = 0;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),param_2);
  LOCK();
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + *(longlong *)(param_2 + 0x10);
  UNLOCK();
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9170e FUN_146b9170e body=56 status=ok
// SIG undefined FUN_146b9170e(void)

undefined4 * FUN_146b9170e(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0xac);
  *param_2 = *(undefined4 *)(param_1 + 0xa0);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return param_2;
}



// FUNCTION 146b91746 FUN_146b91746 body=118 status=ok
// SIG undefined FUN_146b91746(void)

undefined8 * FUN_146b91746(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xb8);
  _Src = *(void **)(param_1 + 0xb0);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return param_2;
}



// FUNCTION 146b917bc FUN_146b917bc body=89 status=ok
// SIG undefined FUN_146b917bc(void)

float FUN_146b917bc(longlong param_1)

{
  float fVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0xc0) < 1) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)*(longlong *)(param_1 + 200) / (float)*(longlong *)(param_1 + 0xc0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return fVar1;
}



// FUNCTION 146b91816 FUN_146b91816 body=108 status=ok
// SIG undefined FUN_146b91816(void)

bool FUN_146b91816(longlong param_1)

{
  bool bVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  bVar1 = true;
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_146b45318(local_20.QuadPart - *(longlong *)(param_1 + 0x70));
    bVar1 = extraout_XMM0_Qa < 0.05;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91884 FUN_146b91884 body=108 status=ok
// SIG undefined FUN_146b91884(void)

bool FUN_146b91884(longlong param_1)

{
  bool bVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  bVar1 = true;
  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_146b45318(local_20.QuadPart - *(longlong *)(param_1 + 0x60));
    bVar1 = extraout_XMM0_Qa < 0.05;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b918f2 FUN_146b918f2 body=108 status=ok
// SIG undefined FUN_146b918f2(void)

bool FUN_146b918f2(longlong param_1)

{
  bool bVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  bVar1 = true;
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_146b45318(local_20.QuadPart - *(longlong *)(param_1 + 0x50));
    bVar1 = extraout_XMM0_Qa < 0.05;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91960 FUN_146b91960 body=78 status=ok
// SIG undefined FUN_146b91960(void)

undefined8
FUN_146b91960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xd8,0x10);
  FUN_146b9117c(uVar1,param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 146b919ae FUN_146b919ae body=496 status=ok
// SIG undefined FUN_146b919ae(void)

undefined8 * FUN_146b919ae(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149f35740;
  param_1[1] = param_2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 6) = 0xff;
  param_1[0x1d] = puVar4;
  param_1[0x1c] = puVar4;
  param_1[0x1e] = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_149e02020;
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
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_149f35f80;
  local_50[3] = param_1;
  local_50[4] = FUN_1429589d2;
  local_58 = 0;
  FUN_1405f67fc(param_2,&local_40,&local_50,L"FFileOperationTracker_Tick");
  if (param_1 + 2 != &local_40) {
    param_1[2] = local_40;
    local_40 = 0;
    plVar2 = (longlong *)param_1[3];
    param_1[3] = local_38;
    local_38 = (longlong *)0x0;
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_1449db362(&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91ba0 FUN_146b91ba0 body=295 status=ok
// SIG undefined FUN_146b91ba0(void)

void FUN_146b91ba0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149f35740;
  local_28 = param_1[2];
  local_20 = param_1[3];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  while (puVar2 = (undefined8 *)param_1[0x1d], puVar2 != (undefined8 *)0x0) {
    param_1[0x1d] = *puVar2;
    FUN_146b99ca0(puVar2 + 1);
    FUN_1400020a8(puVar2);
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_146b951b8(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_146b95340(param_1 + 8);
  FUN_146b99ae2(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_146b99ae2(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91cce FUN_146b91cce body=223 status=ok
// SIG undefined FUN_146b91cce(void)

void FUN_146b91cce(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xf0) != param_2) {
    *(longlong *)(param_1 + 0xf0) = param_2;
    FUN_146b91dae(local_78);
    local_30 = 0xff;
    FUN_146b99ca0(local_58);
    FUN_146b99cea(local_58,local_78);
    FUN_146b99d34(local_48,local_68);
    local_30 = 0;
    puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 6) = 0xff;
    FUN_146b99e68(puVar2 + 1,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0xe0);
      *(undefined8 **)(param_1 + 0xe0) = puVar2;
      UNLOCK();
      LOCK();
      *puVar1 = puVar2;
      UNLOCK();
    }
    FUN_146b99ca0(local_58);
    FUN_146b921ae(local_78);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b91dae FUN_146b91dae body=1023 status=ok
// SIG undefined FUN_146b91dae(void)

longlong * FUN_146b91dae(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined4 local_160;
  longlong *local_150;
  undefined8 *local_148;
  ulonglong local_140;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_100;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_138 = param_2;
  (**(code **)(*param_2 + 0x48))(param_2,local_b8);
  local_100 = &local_d8;
  FUN_146b4d79c(local_b8);
  FUN_14482b9e8(local_b8);
  uStack_d0 = local_a8;
  local_d8 = &DAT_100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  uStack_c0 = 0;
  if (local_90 != 0) {
    FUN_1449c0562(&local_d8);
    uVar5 = (ulonglong)local_90;
  }
  uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_f8 = (undefined4)local_d8;
  uStack_f4 = local_d8._4_4_;
  uStack_f0 = (undefined4)uStack_d0;
  uStack_ec = uStack_d0._4_4_;
  local_100 = local_b8;
  if ((iStack_c4 != (int)uVar5) || (uStack_d0 != local_a8)) {
    local_150 = param_1 + 2;
    local_140 = uVar5;
    local_128 = param_1;
    do {
      local_148 = (undefined8 *)((longlong)iStack_e4 * 0x18 + *local_100);
      lVar4 = (**(code **)(*local_138 + 0x68))();
      if ((longlong)*(int *)(lVar4 + 0x50) == 0) {
LAB_146b92085:
        local_118 = 0;
        uStack_110 = 0;
        iVar1 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
          FUN_146b9b172(local_150,iVar1);
        }
        lVar4 = *local_150;
        local_d8 = (undefined1 *)0x0;
        uVar2 = *(uint *)(local_148 + 1);
        pvVar3 = (void *)*local_148;
        uStack_d0 = (undefined1 *)CONCAT44(uStack_d0._4_4_,uVar2);
        if ((longlong)(int)uVar2 == 0) {
          uStack_d0 = (undefined1 *)(ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_d8,uVar2,0);
          memcpy(local_d8,pvVar3,(longlong)(int)uVar2 * 2);
        }
        local_160 = 0;
        local_168 = 0;
        FUN_146b6fc94(lVar4 + (longlong)iVar1 * 0x38,&local_d8,&local_118,0);
      }
      else {
        lVar8 = *(longlong *)(lVar4 + 0x48);
        lVar6 = (longlong)*(int *)(lVar4 + 0x50) * 0x18;
        lVar7 = 0;
        local_130 = lVar4;
        do {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_146b9b172(param_1,iVar1);
          }
          lVar4 = *param_1;
          uVar5 = (ulonglong)*(uint *)(lVar8 + 0x14);
          local_d8 = (undefined1 *)0x0;
          uVar2 = *(uint *)(local_148 + 1);
          pvVar3 = (void *)*local_148;
          uStack_d0 = (undefined1 *)CONCAT44(uStack_d0._4_4_,uVar2);
          if ((longlong)(int)uVar2 == 0) {
            uStack_d0 = (undefined1 *)(ulonglong)uVar2;
          }
          else {
            local_120 = uVar5;
            FUN_1446dd670(&local_d8,uVar2,0);
            memcpy(local_d8,pvVar3,(longlong)(int)uVar2 * 2);
            uVar5 = local_120;
          }
          local_160 = 0;
          local_168 = uVar5;
          FUN_146b6fc94(lVar4 + (longlong)iVar1 * 0x38,&local_d8,lVar8,lVar7);
          lVar7 = lVar7 + (ulonglong)*(uint *)(lVar8 + 0x14);
          lVar8 = lVar8 + 0x18;
          lVar6 = lVar6 + -0x18;
          param_1 = local_128;
        } while (lVar6 != 0);
        uVar5 = local_140;
        if (*(int *)(local_130 + 0x50) == 0) goto LAB_146b92085;
      }
      local_e8 = local_e8 & ~uStack_f4;
      FUN_1449c0562(&local_f8);
    } while (local_100 != local_b8 ||
             ((undefined1 *)CONCAT44(uStack_ec,uStack_f0) != local_a8 || iStack_e4 != (int)uVar5));
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_b8);
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b921ae FUN_146b921ae body=70 status=ok
// SIG undefined FUN_146b921ae(void)

void FUN_146b921ae(longlong *param_1)

{
  FUN_146b99ae2(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_146b99ae2(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b921f4 FUN_146b921f4 body=172 status=ok
// SIG undefined FUN_146b921f4(void)

void FUN_146b921f4(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = 0xff;
  FUN_146b99ca0(&local_58);
  local_58 = local_68;
  uStack_54 = uStack_64;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  local_30 = 1;
  local_48 = param_3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 6) = 0xff;
  FUN_146b99e68(puVar2 + 1,&local_58);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0xe0);
    *(undefined8 **)(param_1 + 0xe0) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
  FUN_146b99ca0(&local_58);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b922a2 FUN_146b922a2 body=415 status=ok
// SIG undefined FUN_146b922a2(void)

void FUN_146b922a2(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = param_2 + 2;
  local_78 = 0x100000000;
  local_68 = 0xffffffff;
  iStack_64 = 0;
  uStack_60 = 0;
  local_c0 = param_1;
  uStack_70 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_78);
    iVar5 = (int)param_2[5];
  }
  uStack_80 = CONCAT44(uStack_5c,uStack_60);
  local_88 = local_68;
  iStack_84 = iStack_64;
  local_98 = (undefined4)local_78;
  uStack_94 = local_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  local_a0 = param_2;
  if ((iStack_64 != iVar5) || (uStack_70 != plVar1)) {
    do {
      puVar2 = (undefined4 *)(*local_a0 + (longlong)iStack_84 * 0x18);
      local_b8 = *puVar2;
      uStack_b4 = puVar2[1];
      uStack_b0 = puVar2[2];
      uStack_ac = puVar2[3];
      local_50 = 0xff;
      FUN_146b99ca0(&local_78);
      local_78 = CONCAT44(uStack_b4,local_b8);
      uStack_70 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
      local_50 = 1;
      local_68 = param_3;
      puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 6) = 0xff;
      FUN_146b99e68(puVar4 + 1,&local_78);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        puVar3 = *(undefined8 **)(local_c0 + 0xe0);
        *(undefined8 **)(local_c0 + 0xe0) = puVar4;
        UNLOCK();
        LOCK();
        *puVar3 = puVar4;
        UNLOCK();
      }
      FUN_146b99ca0(&local_78);
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != param_2 ||
             ((longlong *)CONCAT44(uStack_8c,uStack_90) != plVar1 || iStack_84 != iVar5));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b92442 FUN_146b92442 body=225 status=ok
// SIG undefined FUN_146b92442(void)

void FUN_146b92442(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(lVar3 + lVar6);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      local_50 = 0xff;
      FUN_146b99ca0(&local_78);
      local_78 = local_88;
      uStack_74 = uStack_84;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      local_50 = 1;
      local_68 = param_3;
      puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 6) = 0xff;
      FUN_146b99e68(puVar5 + 1,&local_78);
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        puVar2 = *(undefined8 **)(param_1 + 0xe0);
        *(undefined8 **)(param_1 + 0xe0) = puVar5;
        UNLOCK();
        LOCK();
        *puVar2 = puVar5;
        UNLOCK();
      }
      FUN_146b99ca0(&local_78);
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b92524 FUN_146b92524 body=250 status=ok
// SIG undefined FUN_146b92524(void)

void FUN_146b92524(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_68 [40];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = (void *)0x0;
  local_78 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_78;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_78,0);
    memcpy(local_80,_Src,lVar3 * 2);
  }
  local_40 = 0xff;
  local_70 = param_3;
  FUN_146b99f26(local_68);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 6) = 0xff;
  FUN_146b99e68(puVar2 + 1,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0xe0);
    *(undefined8 **)(param_1 + 0xe0) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
  FUN_146b99ca0(local_68);
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b92620 FUN_146b92620 body=485 status=ok
// SIG undefined FUN_146b92620(void)

void FUN_146b92620(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = param_2 + 2;
  local_78 = 0x100000000;
  local_68 = 0xffffffff;
  iStack_64 = 0;
  uStack_60 = 0;
  local_c0 = param_1;
  uStack_70 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_78);
    iVar4 = (int)param_2[5];
  }
  uStack_80 = CONCAT44(uStack_5c,uStack_60);
  local_88 = local_68;
  iStack_84 = iStack_64;
  local_98 = (undefined4)local_78;
  uStack_94 = local_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  local_a0 = param_2;
  if ((iStack_64 != iVar4) || (uStack_70 != plVar1)) {
    do {
      local_b8 = (void *)0x0;
      local_b0 = *(int *)(*local_a0 + 8 + (longlong)iStack_84 * 0x18);
      lVar5 = (longlong)local_b0;
      _Src = *(void **)(*local_a0 + (longlong)iStack_84 * 0x18);
      if (lVar5 == 0) {
        local_ac = 0;
      }
      else {
        FUN_1446dd670(&local_b8,local_b0,0);
        memcpy(local_b8,_Src,lVar5 * 2);
      }
      local_50 = 0xff;
      local_a8 = param_3;
      FUN_146b99f26(&local_78);
      puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 6) = 0xff;
      FUN_146b99e68(puVar3 + 1,&local_78);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        puVar2 = *(undefined8 **)(local_c0 + 0xe0);
        *(undefined8 **)(local_c0 + 0xe0) = puVar3;
        UNLOCK();
        LOCK();
        *puVar2 = puVar3;
        UNLOCK();
      }
      FUN_146b99ca0(&local_78);
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != param_2 ||
             ((longlong *)CONCAT44(uStack_8c,uStack_90) != plVar1 || iStack_84 != iVar4));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b92806 FUN_146b92806 body=312 status=ok
// SIG undefined FUN_146b92806(void)

void FUN_146b92806(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78 [40];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = param_2[1];
  local_98 = param_1;
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      local_90 = (void *)0x0;
      local_88 = *(int *)(lVar2 + 8 + lVar5);
      lVar6 = (longlong)local_88;
      _Src = *(void **)(lVar2 + lVar5);
      if (lVar6 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd670(&local_90,local_88,0);
        memcpy(local_90,_Src,lVar6 * 2);
      }
      local_50 = 0xff;
      local_80 = param_3;
      FUN_146b99f26(local_78,&local_90);
      puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 6) = 0xff;
      FUN_146b99e68(puVar4 + 1,local_78);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = *(undefined8 **)(local_98 + 0xe0);
        *(undefined8 **)(local_98 + 0xe0) = puVar4;
        UNLOCK();
        LOCK();
        *puVar1 = puVar4;
        UNLOCK();
      }
      FUN_146b99ca0(local_78);
      if (local_90 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b92940 FUN_146b92940 body=273 status=ok
// SIG undefined FUN_146b92940(void)

void FUN_146b92940(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_70 [40];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_90;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar3 * 2);
  }
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  local_48 = 0xff;
  local_78 = param_4;
  FUN_146b99f8e(local_70);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 6) = 0xff;
  FUN_146b99e68(puVar2 + 1,local_70);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0xe0);
    *(undefined8 **)(param_1 + 0xe0) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
  FUN_146b99ca0(local_70);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b92a52 FUN_146b92a52 body=152 status=ok
// SIG undefined FUN_146b92a52(void)

bool FUN_146b92a52(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_146b99e68(param_2,lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_30 = 0xff;
    FUN_146b99e68(lVar1 + 8,local_58);
    FUN_146b99ca0(local_58);
    if (lVar2 != 0) {
      FUN_146b99ca0(lVar2 + 8);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b92aec FUN_146b92aec body=460 status=ok
// SIG undefined FUN_146b92aec(void)

void FUN_146b92aec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_146b92ee6(param_1 + 0x20);
  FUN_146b92ee6(param_1 + 0x30,param_2 + 0x10);
  lVar9 = param_1 + 0x40;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    FUN_146b99ffe(lVar9);
    FUN_146b9a142(lVar9);
  }
  lVar1 = param_1 + 0x90;
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    FUN_146b9a260(lVar1);
    FUN_146b9a3a4(lVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x20);
    lVar8 = (longlong)*(int *)(param_1 + 0x28) * 0x38;
    do {
      uVar3 = FUN_1447addd0(puVar7 + 2,0x10);
      plVar4 = (longlong *)FUN_146b9a4da(lVar9,uVar3,puVar7 + 2);
      iVar5 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
        FUN_146b9aa74(plVar4,iVar5);
      }
      *(undefined8 **)(*plVar4 + (longlong)iVar5 * 8) = puVar7;
      iVar5 = *(int *)(puVar7 + 1);
      puVar6 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar6 = (undefined2 *)*puVar7;
      }
      iVar2 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar2,puVar6);
      plVar4 = (longlong *)FUN_146b9aafa(lVar1,uVar3,puVar7);
      iVar5 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
        FUN_146b9aa74(plVar4,iVar5);
      }
      *(undefined8 **)(*plVar4 + (longlong)iVar5 * 8) = puVar7;
      puVar7 = puVar7 + 7;
      lVar8 = lVar8 + -0x38;
    } while (lVar8 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x30);
    lVar9 = (longlong)*(int *)(param_1 + 0x38) * 0x38;
    do {
      puVar6 = &DAT_149dfb77a;
      iVar5 = 0;
      if (*(int *)(puVar7 + 1) != 0) {
        puVar6 = (undefined2 *)*puVar7;
        iVar5 = *(int *)(puVar7 + 1) + -1;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar6);
      plVar4 = (longlong *)FUN_146b9aafa(lVar1,uVar3,puVar7);
      iVar5 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
        FUN_146b9aa74(plVar4,iVar5);
      }
      *(undefined8 **)(*plVar4 + (longlong)iVar5 * 8) = puVar7;
      puVar7 = puVar7 + 7;
      lVar9 = lVar9 + -0x38;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 146b92cb8 FUN_146b92cb8 body=151 status=ok
// SIG undefined FUN_146b92cb8(void)

void FUN_146b92cb8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_1 + 0x40);
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_146b9a562(plVar6,uVar2,param_2);
  if (iVar3 != -1) {
    uVar2 = FUN_1447addd0(param_2,0x10);
    iVar3 = FUN_146b9a562(plVar6,uVar2,param_2);
    if (iVar3 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar3 * 0x28 + *plVar6;
    }
    iVar3 = *(int *)(lVar4 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar4 + lVar5);
        if (*(int *)(lVar1 + 0x30) < 10) {
          *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_2 + 0x10);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar3 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 146b92d50 FUN_146b92d50 body=183 status=ok
// SIG undefined FUN_146b92d50(void)

void FUN_146b92d50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar8 = (longlong *)(param_1 + 0x90);
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar6);
  iVar4 = FUN_146b9ab82(plVar8,uVar3,param_2);
  if (iVar4 != -1) {
    iVar4 = *(int *)(param_2 + 1);
    if (iVar4 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    uVar7 = 0;
    uVar5 = (ulonglong)(iVar4 - 1);
    if (iVar4 == 0) {
      uVar5 = uVar7;
    }
    uVar3 = FUN_144a49b4a(uVar5,puVar6);
    iVar4 = FUN_146b9ab82(plVar8,uVar3);
    if (iVar4 != -1) {
      uVar7 = (longlong)iVar4 * 0x28 + *plVar8;
    }
    iVar4 = *(int *)(uVar7 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar1 = *(longlong *)(uVar7 + 0x10);
      uVar3 = *(undefined4 *)(param_2 + 2);
      lVar9 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar1 + lVar9) + 0x30) = uVar3;
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar4 * 8 != lVar9);
    }
  }
  return;
}



// FUNCTION 146b92e08 FUN_146b92e08 body=222 status=ok
// SIG undefined FUN_146b92e08(void)

void FUN_146b92e08(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  plVar11 = (longlong *)(param_1 + 0x90);
  iVar7 = *(int *)(param_2 + 1);
  if (iVar7 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar7 = FUN_146b9ab82(plVar11,uVar6,param_2);
  if (iVar7 != -1) {
    iVar7 = *(int *)(param_2 + 1);
    if (iVar7 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
    }
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar12 = 0;
    uVar8 = (ulonglong)(iVar7 - 1);
    if (iVar7 == 0) {
      uVar8 = uVar12;
    }
    uVar6 = FUN_144a49b4a(uVar8,puVar9);
    iVar7 = FUN_146b9ab82(plVar11,uVar6,param_2);
    if (iVar7 != -1) {
      uVar12 = (longlong)iVar7 * 0x28 + *plVar11;
    }
    iVar7 = *(int *)(uVar12 + 0x18);
    if ((longlong)iVar7 != 0) {
      lVar3 = *(longlong *)(uVar12 + 0x10);
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar10);
        if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
          return;
        }
        if (uVar1 < *(ulonglong *)(lVar4 + 0x20) + *(longlong *)(lVar4 + 0x28)) {
          *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(param_2 + 4);
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar7 * 8 != lVar10);
    }
  }
  return;
}



// FUNCTION 146b92ee6 FUN_146b92ee6 body=80 status=ok
// SIG undefined FUN_146b92ee6(void)

longlong * FUN_146b92ee6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146b99ae2(*param_1,(int)param_1[1]);
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



// FUNCTION 146b92f36 FUN_146b92f36 body=39 status=ok
// SIG undefined FUN_146b92f36(void)

void FUN_146b92f36(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_146b919ae(uVar1,param_1);
  return;
}



// FUNCTION 146b92f5e FUN_146b92f5e body=41 status=ok
// SIG undefined FUN_146b92f5e(void)

void FUN_146b92f5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_149f35ad0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 146b92fb8 FUN_146b92fb8 body=345 status=ok
// SIG undefined FUN_146b92fb8(void)

longlong FUN_146b92fb8(longlong param_1,undefined8 param_2,byte *param_3,longlong param_4)

{
  DWORD DVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_3 == 0) {
    lVar2 = 0x20;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18),param_2,5);
    plVar4 = *(longlong **)(param_1 + 0x10);
    if ((ulonglong)*param_3 < 7) {
      pwVar3 = (wchar_t *)(&PTR_u_Success_149f36010)[*param_3];
    }
    else {
      pwVar3 = L"Unknown";
    }
    FUN_140056680(local_58,pwVar3);
    FUN_140056680(local_68,L"InstallChunkSourceLoad");
    DVar1 = GetLastError();
    FUN_140056680(local_78,&DAT_149dfb77a);
    local_88 = local_68;
    local_80 = local_58;
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,local_78,DVar1);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    lVar2 = 0x24;
  }
  LOCK();
  *(int *)(param_1 + lVar2) = *(int *)(param_1 + lVar2) + 1;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_4);
  LOCK();
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + *(longlong *)(param_4 + 0x10);
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x30) = 0;
  UNLOCK();
  local_58[0] = *(longlong *)(param_4 + 8);
  plVar4 = (longlong *)(param_1 + 0x38);
  lVar2 = local_58[0];
  if (plVar4 != local_58) {
    LOCK();
    lVar2 = *plVar4;
    *plVar4 = local_58[0];
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b93134 FUN_146b93134 body=108 status=ok
// SIG undefined FUN_146b93134(void)

bool FUN_146b93134(longlong param_1)

{
  bool bVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  bVar1 = true;
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_146b45318(local_20.QuadPart - *(longlong *)(param_1 + 0x38));
    bVar1 = extraout_XMM0_Qa < 0.05;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b931a2 FUN_146b931a2 body=98 status=ok
// SIG undefined FUN_146b931a2(void)

void FUN_146b931a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_149f357d0;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 146b93204 FUN_146b93204 body=182 status=ok
// SIG undefined FUN_146b93204(void)

undefined8 * FUN_146b93204(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_149f35850;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 146b932ba FUN_146b932ba body=73 status=ok
// SIG undefined FUN_146b932ba(void)

void FUN_146b932ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f35850;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0xe);
                    /* WARNING: Could not recover jumptable at 0x000146b932fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  return;
}



// FUNCTION 146b93304 FUN_146b93304 body=149 status=ok
// SIG undefined FUN_146b93304(void)

ulonglong FUN_146b93304(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  ulonglong uVar9;
  bool bVar10;
  
  LOCK();
  piVar2 = (int *)(param_1 + 0x20);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  iVar4 = iVar3 + 1;
  LOCK();
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (longlong)iVar4;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  do {
    iVar6 = *(int *)(param_1 + 0x24);
    if (iVar3 < iVar6) break;
    LOCK();
    bVar10 = iVar6 == *(int *)(param_1 + 0x24);
    if (bVar10) {
      *(int *)(param_1 + 0x24) = iVar4;
    }
    UNLOCK();
  } while (!bVar10);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2,9);
  cVar8 = FUN_146b9339a(param_1,param_2);
  if (cVar8 == '\0') {
    uVar9 = (ulonglong)*(int *)(param_1 + 0x38);
    LOCK();
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + uVar9;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    UNLOCK();
  }
  else {
    LOCK();
    piVar2 = (int *)(param_1 + 0x38);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar1 = iVar4 + 1;
    LOCK();
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (longlong)(int)uVar1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    UNLOCK();
    do {
      uVar7 = *(uint *)(param_1 + 0x3c);
      uVar9 = (ulonglong)uVar7;
      if (iVar4 < (int)uVar7) {
        return uVar9;
      }
      LOCK();
      uVar5 = *(uint *)(param_1 + 0x3c);
      if (uVar7 == uVar5) {
        *(uint *)(param_1 + 0x3c) = uVar1;
      }
      else {
        uVar9 = (ulonglong)uVar5;
      }
      UNLOCK();
    } while (uVar7 != uVar5);
  }
  return uVar9;
}



// FUNCTION 146b9339a FUN_146b9339a body=81 status=ok
// SIG undefined FUN_146b9339a(void)

bool FUN_146b9339a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_140f5cb3a(param_1 + 0x70,uVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return iVar2 != -1;
}



// FUNCTION 146b933ec FUN_146b933ec body=77 status=ok
// SIG undefined FUN_146b933ec(void)

void FUN_146b933ec(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x20);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (longlong)(iVar3 + -1);
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  cVar2 = FUN_146b9339a();
  if (cVar2 == '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1 + 0x38);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar3 = iVar3 + -1;
  }
  LOCK();
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (longlong)iVar3;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  UNLOCK();
  return;
}



// FUNCTION 146b934aa FUN_146b934aa body=86 status=ok
// SIG undefined FUN_146b934aa(void)

void FUN_146b934aa(longlong param_1,longlong param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  FUN_14681b5ea(param_1 + 0x70,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_2);
  return;
}



// FUNCTION 146b93500 FUN_146b93500 body=39 status=ok
// SIG undefined FUN_146b93500(void)

void FUN_146b93500(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xc0,0x10);
  FUN_146b93204(uVar1,param_1);
  return;
}



// FUNCTION 146b93528 FUN_146b93528 body=285 status=ok
// SIG undefined FUN_146b93528(void)

undefined8 *
FUN_146b93528(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_5c;
  int *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149f358d0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar1 = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  do {
    local_68 = 0;
    local_5c = iVar1;
    local_58 = &local_5c;
    local_50 = &local_68;
    FUN_146b9b202(param_1 + 9,local_44,&local_58);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9365e FUN_146b9365e body=98 status=ok
// SIG undefined FUN_146b9365e(void)

void FUN_146b9365e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0xa8);
  local_20 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b936c2 FUN_146b936c2 body=290 status=ok
// SIG undefined FUN_146b936c2(void)

LARGE_INTEGER FUN_146b936c2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  LARGE_INTEGER LVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  LARGE_INTEGER *pLVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar7 = 0xd;
  switch(param_3) {
  case 0:
    puVar4 = (uint *)(param_1 + 0x38);
    uVar7 = 0xe;
    goto LAB_146b93736;
  default:
    goto switchD_146b936f8_caseD_1;
  case 2:
    uVar1 = 0;
    break;
  case 3:
    uVar1 = 1;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 3;
  }
  LOCK();
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
  UNLOCK();
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar5 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x88);
    }
    uVar3 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & uVar1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)uVar3 * 0x18);
        if (*puVar4 == uVar1) goto LAB_146b9372c;
        uVar3 = puVar4[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  puVar4 = (uint *)0x0;
LAB_146b9372c:
  puVar4 = puVar4 + 2;
  uVar7 = 0xd;
LAB_146b93736:
  LOCK();
  *(longlong *)puVar4 = *(longlong *)puVar4 + 1;
  UNLOCK();
switchD_146b936f8_caseD_1:
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
            (*(longlong **)(param_1 + 0x18),param_2,uVar7);
  LOCK();
  *(undefined4 *)(param_1 + 0x98) = 0;
  UNLOCK();
  QueryPerformanceCounter(&local_20);
  pLVar6 = (LARGE_INTEGER *)(param_1 + 0xa0);
  LVar2 = local_20;
  if (pLVar6 != &local_20) {
    LOCK();
    LVar2.QuadPart = pLVar6->QuadPart;
    pLVar6->QuadPart = (LONGLONG)local_20;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (LARGE_INTEGER)LVar2.QuadPart;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b937e6 FUN_146b937e6 body=38 status=ok
// SIG undefined FUN_146b937e6(void)

void FUN_146b937e6(longlong param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  LOCK();
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + *(longlong *)(param_2 + 0x10);
  UNLOCK();
  return;
}



// FUNCTION 146b9380c FUN_146b9380c body=111 status=ok
// SIG undefined FUN_146b9380c(void)

void FUN_146b9380c(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  *(longlong *)(param_1 + 0x20) = param_2;
  UNLOCK();
  if (0 < *(longlong *)(param_1 + 0x28)) {
    local_c = (float)((double)param_2 / (double)*(longlong *)(param_1 + 0x28));
    local_10 = 7;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9387c FUN_146b9387c body=111 status=ok
// SIG undefined FUN_146b9387c(void)

void FUN_146b9387c(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  *(longlong *)(param_1 + 0x28) = param_2;
  UNLOCK();
  if (0 < param_2) {
    local_c = (float)((double)*(longlong *)(param_1 + 0x20) / (double)param_2);
    local_10 = 7;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b938fe FUN_146b938fe body=358 status=ok
// SIG undefined FUN_146b938fe(void)

undefined8 * FUN_146b938fe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  longlong *local_80;
  undefined8 local_78;
  undefined4 *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[4] = 0;
  iVar3 = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  plVar1 = (longlong *)(param_1 + 0x48);
  puVar2 = (undefined4 *)(param_1 + 0x58);
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = puVar2;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x70);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (local_50 != puVar2)) {
    do {
      if (0 < *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18)) {
        local_58 = *local_80 + (longlong)iStack_64 * 0x18;
        local_50 = &local_84;
        local_84 = (undefined4)*(undefined8 *)(local_58 + 8);
        FUN_146b9b6a0(param_2,local_34);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != puVar2 || iStack_64 != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b93a66 FUN_146b93a66 body=114 status=ok
// SIG undefined FUN_146b93a66(void)

bool FUN_146b93a66(longlong param_1)

{
  bool bVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  bVar1 = true;
  if (*(int *)(param_1 + 0x98) == 0) {
    FUN_146b45318(local_20.QuadPart - *(longlong *)(param_1 + 0xa0));
    bVar1 = extraout_XMM0_Qa < 0.05;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b93ada FUN_146b93ada body=55 status=ok
// SIG undefined FUN_146b93ada(void)

void FUN_146b93ada(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xb0,0x10);
  FUN_146b93528(uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 146b93b12 FUN_146b93b12 body=405 status=ok
// SIG undefined FUN_146b93b12(void)

undefined8 *
FUN_146b93b12(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6,longlong *param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f35930;
  param_1[1] = 0;
  param_1[1] = *param_7;
  *param_7 = 0;
  *(int *)(param_1 + 2) = (int)param_7[1];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_7 + 0xc);
  param_7[1] = 0;
  param_1[3] = 0;
  param_1[3] = *param_8;
  *param_8 = 0;
  *(int *)(param_1 + 4) = (int)param_8[1];
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_8 + 0xc);
  param_8[1] = 0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = param_6;
  param_1[8] = *param_5;
  lVar3 = param_5[1];
  param_1[9] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 10) = param_4;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  (**(code **)(*(longlong *)param_1[7] + 0x88))((longlong *)param_1[7],param_1 + 0xb);
  plVar4 = (longlong *)param_5[1];
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
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
  if (*param_8 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b93ca8 FUN_146b93ca8 body=312 status=ok
// SIG undefined FUN_146b93ca8(void)

void FUN_146b93ca8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_140393c76(local_48,0x400000,1);
  if (*(int *)(param_1 + 0xfc) == 0) {
    do {
      iVar3 = *(int *)(param_1 + 0x118);
      LOCK();
      iVar4 = *(int *)(param_1 + 0x118);
      bVar7 = iVar3 == iVar4;
      if (bVar7) {
        *(int *)(param_1 + 0x118) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      if (bVar7) {
        if (*(int *)(param_1 + 0x138) <= iVar4) break;
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar4 * 0x20);
        plVar6 = plVar2 + 2;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 8))
                  (*(longlong **)(param_1 + 0x30),plVar6,*(undefined8 *)(*plVar2 + 0x58));
        if ((char)plVar2[1] == '\x01') {
          uVar5 = FUN_142958b10(param_1,local_48,plVar6);
        }
        else {
          uVar5 = FUN_146b93de2(param_1,plVar6,*plVar2);
        }
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                  (*(longlong **)(param_1 + 0x30),plVar6,uVar5);
        *(undefined4 *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar4 * 4) = uVar5;
      }
    } while (*(int *)(param_1 + 0xfc) == 0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x10c);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar4 + 1 == *(int *)(param_1 + 0x108)) {
    (**(code **)(**(longlong **)(param_1 + 0x100) + 0x10))();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b93de2 FUN_146b93de2 body=275 status=ok
// SIG undefined FUN_146b93de2(void)

char FUN_146b93de2(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined2 *puVar4;
  char cVar5;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0xf8);
  while ((iVar1 != 0 && (*(int *)(param_1 + 0xfc) == 0))) {
    FUN_14000f986(0x3dcccccd);
    iVar1 = *(int *)(param_1 + 0xf8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),param_2,0);
  plVar2 = *(longlong **)(param_1 + 0x28);
  FUN_146b93f9a(param_1,&local_68,param_2);
  puVar4 = local_68;
  if (local_60 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,puVar4,&local_58);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  cVar5 = '\x02';
  if (cVar3 != '\0') {
    cVar5 = (local_58 != *(longlong *)(param_3 + 0x58)) * '\x05';
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),param_2);
  LOCK();
  *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + *(longlong *)(param_3 + 0x58);
  UNLOCK();
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return cVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b93f0c FUN_146b93f0c body=141 status=ok
// SIG undefined FUN_146b93f0c(void)

void FUN_146b93f0c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146b6f6ea(param_1 + 0x58);
  FUN_145d1d460(param_1 + 0xa8,local_70,param_2);
  FUN_146b3e088(param_1 + 0xa8,local_70);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b93f9a FUN_146b93f9a body=410 status=ok
// SIG undefined FUN_146b93f9a(void)

longlong * FUN_146b93f9a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  int local_58;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (1 < *(int *)(param_1 + 0x20)) {
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    local_58 = iVar3 + 1;
    local_48 = 0;
    FUN_14125bce8(&local_48,*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0x20),0);
    FUN_1401aebe8(&local_48,*param_3,iVar3);
    if (&local_48 == param_2) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_48;
      local_48 = 0;
      *(undefined4 *)(param_2 + 1) = local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
    }
    if ((int)param_2[1] == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                      (*(longlong **)(param_1 + 0x28),puVar2,&local_48);
    if (cVar1 != '\0') goto LAB_146b94043;
  }
  iVar3 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = 0;
  }
  local_58 = iVar3 + 1 + (uint)(*(int *)(param_1 + 0x10) == 0);
  local_48 = 0;
  FUN_14125bce8(&local_48,*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10),0);
  FUN_1401aebe8(&local_48,*param_3,iVar3);
  if (&local_48 == param_2) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_48;
    *(undefined4 *)(param_2 + 1) = local_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
  }
LAB_146b94043:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b94136 FUN_146b94136 body=342 status=ok
// SIG undefined FUN_146b94136(void)

undefined8
FUN_146b94136(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = FUN_14001cc68(0x150,0x10);
  local_58 = *param_7;
  *param_7 = 0;
  local_50 = (undefined4)param_7[1];
  local_4c = *(undefined4 *)((longlong)param_7 + 0xc);
  param_7[1] = 0;
  local_68 = *param_6;
  *param_6 = 0;
  local_60 = (undefined4)param_6[1];
  local_5c = *(undefined4 *)((longlong)param_6 + 0xc);
  param_6[1] = 0;
  local_78 = *param_4;
  local_70 = param_4[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_80 = &local_58;
  local_88 = &local_68;
  local_90 = param_5;
  local_98 = &local_78;
  FUN_146b93b12(uVar4,param_1,param_2,param_3);
  plVar3 = (longlong *)param_4[1];
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
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9428e FUN_146b9428e body=84 status=ok
// SIG undefined FUN_146b9428e(void)

longlong FUN_146b9428e(longlong param_1,longlong param_2,undefined4 *param_3)

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
  
  FUN_145aeb3d6();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  uVar9 = param_3[9];
  uVar10 = param_3[10];
  uVar11 = param_3[0xb];
  *(undefined4 *)(param_1 + 0x70) = param_3[8];
  *(undefined4 *)(param_1 + 0x74) = uVar9;
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  *(undefined4 *)(param_1 + 0x7c) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_2);
  return param_1;
}



// FUNCTION 146b942e2 FUN_146b942e2 body=42 status=ok
// SIG undefined FUN_146b942e2(void)

void FUN_146b942e2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  return;
}



// FUNCTION 146b9430c FUN_146b9430c body=181 status=ok
// SIG undefined FUN_146b9430c(void)

undefined8 FUN_146b9430c(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = FUN_14001cc68(0x80,0x10);
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  uStack_9c = param_2[3];
  local_98 = param_2[4];
  uStack_94 = param_2[5];
  uStack_90 = param_2[6];
  uStack_8c = param_2[7];
  local_88 = param_2[8];
  uStack_84 = param_2[9];
  uStack_80 = param_2[10];
  uStack_7c = param_2[0xb];
  FUN_145aeb3d6(local_78,param_1);
  FUN_146b9428e(uVar1,local_78,&local_a8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b943c2 FUN_146b943c2 body=38 status=ok
// SIG undefined FUN_146b943c2(void)

undefined8 FUN_146b943c2(undefined8 param_1,int param_2)

{
  FUN_146b878fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b943e8 FUN_146b943e8 body=29 status=ok
// SIG undefined FUN_146b943e8(void)

undefined8 FUN_146b943e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94406 FUN_146b94406 body=38 status=ok
// SIG undefined FUN_146b94406(void)

undefined8 FUN_146b94406(undefined8 param_1,int param_2)

{
  FUN_146b9bcd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9442c FUN_146b9442c body=38 status=ok
// SIG undefined FUN_146b9442c(void)

undefined8 FUN_146b9442c(undefined8 param_1,int param_2)

{
  FUN_146b89c10();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94452 FUN_146b94452 body=45 status=ok
// SIG undefined FUN_146b94452(void)

longlong FUN_146b94452(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146b89c10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94480 FUN_146b94480 body=38 status=ok
// SIG undefined FUN_146b94480(void)

undefined8 FUN_146b94480(undefined8 param_1,int param_2)

{
  FUN_146b8a270();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b944a6 FUN_146b944a6 body=38 status=ok
// SIG undefined FUN_146b944a6(void)

undefined8 FUN_146b944a6(undefined8 param_1,int param_2)

{
  FUN_146b8d3ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b944cc FUN_146b944cc body=38 status=ok
// SIG undefined FUN_146b944cc(void)

undefined8 FUN_146b944cc(undefined8 param_1,int param_2)

{
  FUN_146b8d8ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b944f2 FUN_146b944f2 body=45 status=ok
// SIG undefined FUN_146b944f2(void)

longlong FUN_146b944f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146b8d8ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94520 FUN_146b94520 body=38 status=ok
// SIG undefined FUN_146b94520(void)

undefined8 FUN_146b94520(undefined8 param_1,int param_2)

{
  FUN_142956fc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94546 FUN_146b94546 body=57 status=ok
// SIG undefined FUN_146b94546(void)

undefined8 * FUN_146b94546(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f35280;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94580 FUN_146b94580 body=38 status=ok
// SIG undefined FUN_146b94580(void)

undefined8 FUN_146b94580(undefined8 param_1,int param_2)

{
  FUN_146b8e7b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b945a6 FUN_146b945a6 body=38 status=ok
// SIG undefined FUN_146b945a6(void)

undefined8 FUN_146b945a6(undefined8 param_1,int param_2)

{
  FUN_146b9bd2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b945cc FUN_146b945cc body=29 status=ok
// SIG undefined FUN_146b945cc(void)

undefined8 FUN_146b945cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b945ea FUN_146b945ea body=29 status=ok
// SIG undefined FUN_146b945ea(void)

undefined8 FUN_146b945ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94608 FUN_146b94608 body=70 status=ok
// SIG undefined FUN_146b94608(void)

undefined8 * FUN_146b94608(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f354b0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9464e FUN_146b9464e body=29 status=ok
// SIG undefined FUN_146b9464e(void)

undefined8 FUN_146b9464e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9466c FUN_146b9466c body=38 status=ok
// SIG undefined FUN_146b9466c(void)

undefined8 FUN_146b9466c(undefined8 param_1,int param_2)

{
  FUN_146b9bde8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94692 FUN_146b94692 body=70 status=ok
// SIG undefined FUN_146b94692(void)

undefined8 * FUN_146b94692(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f35670;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b946d8 FUN_146b946d8 body=38 status=ok
// SIG undefined FUN_146b946d8(void)

undefined8 FUN_146b946d8(undefined8 param_1,int param_2)

{
  FUN_146b91ba0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b946fe FUN_146b946fe body=29 status=ok
// SIG undefined FUN_146b946fe(void)

undefined8 FUN_146b946fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9471c FUN_146b9471c body=38 status=ok
// SIG undefined FUN_146b9471c(void)

undefined8 FUN_146b9471c(undefined8 param_1,int param_2)

{
  FUN_146b932ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94742 FUN_146b94742 body=79 status=ok
// SIG undefined FUN_146b94742(void)

undefined8 * FUN_146b94742(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f358d0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_146b9550a(param_1 + 9);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94792 FUN_146b94792 body=38 status=ok
// SIG undefined FUN_146b94792(void)

undefined8 FUN_146b94792(undefined8 param_1,int param_2)

{
  FUN_146b9be70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b947b8 FUN_146b947b8 body=52 status=ok
// SIG undefined FUN_146b947b8(void)

void FUN_146b947b8(longlong *param_1)

{
  FUN_146b947ec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b947ec FUN_146b947ec body=334 status=ok
// SIG undefined FUN_146b947ec(void)

void FUN_146b947ec(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *local_70;
      lVar3 = (longlong)iStack_54;
      FUN_1449db362(lVar2 + lVar3 * 0x30 + 0x18);
      FUN_1449db362(lVar2 + lVar3 * 0x30 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9493c FUN_146b9493c body=52 status=ok
// SIG undefined FUN_146b9493c(void)

void FUN_146b9493c(longlong *param_1)

{
  FUN_146b94970();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b94970 FUN_146b94970 body=311 status=ok
// SIG undefined FUN_146b94970(void)

void FUN_146b94970(longlong *param_1)

{
  longlong *plVar1;
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
      FUN_146b94aa8(*local_68 + (longlong)iStack_4c * 0x18 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b94aa8 FUN_146b94aa8 body=57 status=ok
// SIG undefined FUN_146b94aa8(void)

void FUN_146b94aa8(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 146b94ae2 FUN_146b94ae2 body=52 status=ok
// SIG undefined FUN_146b94ae2(void)

void FUN_146b94ae2(longlong *param_1)

{
  FUN_146b94b16();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b94b16 FUN_146b94b16 body=343 status=ok
// SIG undefined FUN_146b94b16(void)

void FUN_146b94b16(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b94c6e FUN_146b94c6e body=38 status=ok
// SIG undefined FUN_146b94c6e(void)

undefined8 FUN_146b94c6e(undefined8 param_1,int param_2)

{
  FUN_146b94d7e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94cbc FUN_146b94cbc body=29 status=ok
// SIG undefined FUN_146b94cbc(void)

undefined8 FUN_146b94cbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94cda FUN_146b94cda body=164 status=ok
// SIG undefined FUN_146b94cda(void)

void FUN_146b94cda(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_146b94d52;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_146b94d52;
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
LAB_146b94d52:
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
                    /* WARNING: Could not recover jumptable at 0x000146b94d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b94d7e FUN_146b94d7e body=78 status=ok
// SIG undefined FUN_146b94d7e(void)

void FUN_146b94d7e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f359b0;
  FUN_146b886f0(param_1[1]);
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
                    /* WARNING: Could not recover jumptable at 0x000146b94dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b94dcc FUN_146b94dcc body=52 status=ok
// SIG undefined FUN_146b94dcc(void)

void FUN_146b94dcc(longlong *param_1)

{
  FUN_146b94e00();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b94e00 FUN_146b94e00 body=343 status=ok
// SIG undefined FUN_146b94e00(void)

void FUN_146b94e00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar4 = (longlong)iStack_5c;
      puVar3 = *(undefined8 **)(lVar2 + 0x10 + lVar4 * 0x20);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b94f58 FUN_146b94f58 body=29 status=ok
// SIG undefined FUN_146b94f58(void)

undefined8 FUN_146b94f58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b94f84 FUN_146b94f84 body=52 status=ok
// SIG undefined FUN_146b94f84(void)

void FUN_146b94f84(longlong *param_1)

{
  FUN_146b94fb8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b94fb8 FUN_146b94fb8 body=334 status=ok
// SIG undefined FUN_146b94fb8(void)

void FUN_146b94fb8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x60) != 0) {
        lVar3 = *local_68 + (longlong)iStack_4c * 0x60;
        plVar2 = *(longlong **)(lVar3 + 0x20);
        plVar4 = (longlong *)(lVar3 + 0x30);
        if (plVar2 != (longlong *)0x0) {
          plVar4 = plVar2;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401283f4(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b95108 FUN_146b95108 body=38 status=ok
// SIG undefined FUN_146b95108(void)

undefined8 FUN_146b95108(undefined8 param_1,int param_2)

{
  FUN_146b95150();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9512e FUN_146b9512e body=29 status=ok
// SIG undefined FUN_146b9512e(void)

undefined8 FUN_146b9512e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b95150 FUN_146b95150 body=103 status=ok
// SIG undefined FUN_146b95150(void)

void FUN_146b95150(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f35a70;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 == (undefined8 *)0x0) goto LAB_146b95171;
  while( true ) {
    FUN_1400020a8(puVar1);
LAB_146b95171:
    puVar1 = (undefined8 *)param_1[5];
    if (puVar1 == (undefined8 *)0x0) break;
    param_1[5] = *puVar1;
    FUN_146b8f6fa(puVar1 + 2);
  }
  while (puVar1 = (undefined8 *)param_1[3], puVar1 != (undefined8 *)0x0) {
    param_1[3] = *puVar1;
    FUN_146b98b22(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 146b951b8 FUN_146b951b8 body=52 status=ok
// SIG undefined FUN_146b951b8(void)

void FUN_146b951b8(longlong *param_1)

{
  FUN_146b951ec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b951ec FUN_146b951ec body=338 status=ok
// SIG undefined FUN_146b951ec(void)

void FUN_146b951ec(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b95340 FUN_146b95340 body=52 status=ok
// SIG undefined FUN_146b95340(void)

void FUN_146b95340(longlong *param_1)

{
  FUN_146b95374();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b95374 FUN_146b95374 body=313 status=ok
// SIG undefined FUN_146b95374(void)

void FUN_146b95374(longlong *param_1)

{
  longlong *plVar1;
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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b954ae FUN_146b954ae body=69 status=ok
// SIG undefined FUN_146b954ae(void)

undefined8 * FUN_146b954ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f35ad0;
  FUN_146b99ae2(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9550a FUN_146b9550a body=52 status=ok
// SIG undefined FUN_146b9550a(void)

void FUN_146b9550a(longlong *param_1)

{
  FUN_146b9553e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b9553e FUN_146b9553e body=89 status=ok
// SIG undefined FUN_146b9553e(void)

void FUN_146b9553e(longlong param_1)

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



// FUNCTION 146b95598 FUN_146b95598 body=140 status=ok
// SIG undefined FUN_146b95598(void)

undefined8 * FUN_146b95598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  switch(*(char *)(param_2 + 3)) {
  case '\0':
    if (*(byte *)(param_1 + 3) < 3) {
      *(undefined1 *)(param_1 + 3) = 0xff;
    }
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 3) = 0;
    break;
  case '\x01':
    if (*(byte *)(param_1 + 3) < 3) {
      *(undefined1 *)(param_1 + 3) = 0xff;
    }
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 3) = 1;
    break;
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
    *(undefined1 *)(param_1 + 3) = 2;
    break;
  default:
    if (*(char *)(param_2 + 3) != -1) {
      FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype"
                   );
    }
  }
  return param_1;
}



// FUNCTION 146b95624 FUN_146b95624 body=74 status=ok
// SIG undefined FUN_146b95624(void)

void FUN_146b95624(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 146b9566e FUN_146b9566e body=152 status=ok
// SIG undefined FUN_146b9566e(void)

void FUN_146b9566e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar4) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4) == param_2[3])) {
          FUN_146b95706(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146b95706 FUN_146b95706 body=96 status=ok
// SIG undefined FUN_146b95706(void)

void FUN_146b95706(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146b51daa(param_1,param_2,1);
  return;
}



// FUNCTION 146b95766 FUN_146b95766 body=94 status=ok
// SIG undefined FUN_146b95766(void)

longlong * FUN_146b95766(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_146b957c4(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 146b957c4 FUN_146b957c4 body=99 status=ok
// SIG undefined FUN_146b957c4(void)

undefined8 * FUN_146b957c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149f35ba0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 146b95838 FUN_146b95838 body=29 status=ok
// SIG undefined FUN_146b95838(void)

undefined8 FUN_146b95838(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b95856 FUN_146b95856 body=130 status=ok
// SIG undefined FUN_146b95856(void)

void FUN_146b95856(longlong *param_1,longlong *param_2)

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



// FUNCTION 146b958da FUN_146b958da body=130 status=ok
// SIG undefined FUN_146b958da(void)

void FUN_146b958da(longlong *param_1,longlong *param_2)

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



// FUNCTION 146b9595e FUN_146b9595e body=324 status=ok
// SIG undefined FUN_146b9595e(void)

undefined4 * FUN_146b9595e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b95aa4(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined8 *)(local_40 + 6) = puVar1[2];
  puVar1[2] = 0;
  local_40[8] = *(uint *)(puVar1 + 3);
  *(undefined4 *)(puVar1 + 3) = 0;
  local_40[10] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_146b95b92(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0xb] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[10] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b95cc4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b95aa4 FUN_146b95aa4 body=238 status=ok
// SIG undefined FUN_146b95aa4(void)

int * FUN_146b95aa4(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146b95b92 FUN_146b95b92 body=183 status=ok
// SIG undefined FUN_146b95b92(void)

undefined8 FUN_146b95b92(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(int *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          FUN_1449db362(piVar1 + 6);
          FUN_1449db362(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(param_3 + 8);
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146b95c4a(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = piVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b95c4a FUN_146b95c4a body=122 status=ok
// SIG undefined FUN_146b95c4a(void)

void FUN_146b95c4a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 146b95cc4 FUN_146b95cc4 body=423 status=ok
// SIG undefined FUN_146b95cc4(void)

void FUN_146b95cc4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 146b95e6c FUN_146b95e6c body=303 status=ok
// SIG undefined FUN_146b95e6c(void)

undefined4 * FUN_146b95e6c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b95f9c(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_146b96082(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b961b2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b95f9c FUN_146b95f9c body=229 status=ok
// SIG undefined FUN_146b95f9c(void)

int * FUN_146b95f9c(longlong *param_1,int *param_2)

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



// FUNCTION 146b96082 FUN_146b96082 body=189 status=ok
// SIG undefined FUN_146b96082(void)

undefined8 FUN_146b96082(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_146b96140(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b96140 FUN_146b96140 body=114 status=ok
// SIG undefined FUN_146b96140(void)

void FUN_146b96140(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 146b961b2 FUN_146b961b2 body=422 status=ok
// SIG undefined FUN_146b961b2(void)

void FUN_146b961b2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 146b9635a FUN_146b9635a body=95 status=ok
// SIG undefined FUN_146b9635a(void)

void FUN_146b9635a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_146b963ba();
  return;
}



// FUNCTION 146b963ba FUN_146b963ba body=69 status=ok
// SIG undefined FUN_146b963ba(void)

void FUN_146b963ba(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1449db362((longlong)param_2 * 0x30 + lVar1 + 0x18);
  FUN_1449db362(lVar1 + (longlong)param_2 * 0x30 + 8);
  FUN_146b95c4a(param_1,param_2);
  return;
}



// FUNCTION 146b963ff FUN_146b963ff body=149 status=ok
// SIG undefined FUN_146b963ff(void)

undefined8 * FUN_146b963ff(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f35ca0;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_146b96496(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b96496 FUN_146b96496 body=126 status=ok
// SIG undefined FUN_146b96496(void)

undefined8 * FUN_146b96496(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f35cc0;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[1] + 0x120))();
  }
  *(undefined1 *)(param_1 + 5) = param_3;
  plVar3 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 146b9651e FUN_146b9651e body=29 status=ok
// SIG undefined FUN_146b9651e(void)

undefined8 FUN_146b9651e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9653c FUN_146b9653c body=38 status=ok
// SIG undefined FUN_146b9653c(void)

undefined8 FUN_146b9653c(undefined8 param_1,int param_2)

{
  FUN_146b965ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b96566 FUN_146b96566 body=26 status=ok
// SIG undefined FUN_146b96566(void)

undefined4 FUN_146b96566(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return CONCAT31((int3)(iVar1 - 200U >> 8),iVar1 - 200U < 7);
}



// FUNCTION 146b965ae FUN_146b965ae body=110 status=ok
// SIG undefined FUN_146b965ae(void)

void FUN_146b965ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f35cc0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b96610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b9661c FUN_146b9661c body=81 status=ok
// SIG undefined FUN_146b9661c(void)

void FUN_146b9661c(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_146b9666e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b9666e FUN_146b9666e body=90 status=ok
// SIG undefined FUN_146b9666e(void)

void FUN_146b9666e(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146b966c8();
  return;
}



// FUNCTION 146b966c8 FUN_146b966c8 body=78 status=ok
// SIG undefined FUN_146b966c8(void)

void FUN_146b966c8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_146b96140(param_1,param_2);
  return;
}



// FUNCTION 146b96716 FUN_146b96716 body=296 status=ok
// SIG undefined FUN_146b96716(void)

undefined4 * FUN_146b96716(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b96840(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_146b96926(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b96a2a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b96840 FUN_146b96840 body=230 status=ok
// SIG undefined FUN_146b96840(void)

int * FUN_146b96840(longlong *param_1,int *param_2)

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



// FUNCTION 146b96926 FUN_146b96926 body=146 status=ok
// SIG undefined FUN_146b96926(void)

undefined8 FUN_146b96926(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*piVar1 == *param_3) {
          FUN_146b94aa8(piVar1 + 2);
          iVar2 = param_3[1];
          iVar3 = param_3[2];
          iVar4 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_146b969b8(param_1,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = piVar1[4];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b969b8 FUN_146b969b8 body=114 status=ok
// SIG undefined FUN_146b969b8(void)

void FUN_146b969b8(longlong *param_1,int param_2)

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



// FUNCTION 146b96a2a FUN_146b96a2a body=419 status=ok
// SIG undefined FUN_146b96a2a(void)

void FUN_146b96a2a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 146b96bce FUN_146b96bce body=85 status=ok
// SIG undefined FUN_146b96bce(void)

void FUN_146b96bce(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x30) == param_2) {
          FUN_146b9635a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x30 + *param_1 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b96c24 FUN_146b96c24 body=25 status=ok
// SIG undefined FUN_146b96c24(void)

void FUN_146b96c24(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f35d30;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 146b96c3e FUN_146b96c3e body=29 status=ok
// SIG undefined FUN_146b96c3e(void)

undefined8 FUN_146b96c3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b96c5c FUN_146b96c5c body=57 status=ok
// SIG undefined FUN_146b96c5c(void)

undefined8 * FUN_146b96c5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f35d30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b96c9a FUN_146b96c9a body=26 status=ok
// SIG undefined FUN_146b96c9a(void)

undefined4 FUN_146b96c9a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return CONCAT31((int3)(iVar1 - 200U >> 8),iVar1 - 200U < 7);
}



// FUNCTION 146b96cb4 FUN_146b96cb4 body=30 status=ok
// SIG undefined FUN_146b96cb4(void)

undefined8 FUN_146b96cb4(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  uVar2 = 0x194;
  if (cVar1 != '\0') {
    uVar2 = 200;
  }
  return uVar2;
}



// FUNCTION 146b96cd8 FUN_146b96cd8 body=81 status=ok
// SIG undefined FUN_146b96cd8(void)

void FUN_146b96cd8(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_146b96d2a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b96d2a FUN_146b96d2a body=121 status=ok
// SIG undefined FUN_146b96d2a(void)

void FUN_146b96d2a(longlong *param_1,int param_2)

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
  FUN_146b94aa8(*param_1 + (longlong)param_2 * 0x18 + 8);
  FUN_146b969b8(param_1,param_2);
  return;
}



// FUNCTION 146b96da3 FUN_146b96da3 body=38 status=ok
// SIG undefined FUN_146b96da3(void)

void FUN_146b96da3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b48c26(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 146b96dca FUN_146b96dca body=132 status=ok
// SIG undefined FUN_146b96dca(void)

void FUN_146b96dca(longlong param_1,int param_2)

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



// FUNCTION 146b96e50 FUN_146b96e50 body=253 status=ok
// SIG undefined FUN_146b96e50(void)

void FUN_146b96e50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_146b96ec6:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_146b96f35;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_146b96f35;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_146b96f3b;
      }
      if (iVar2 + iVar1 == 1) goto LAB_146b96f3b;
      goto LAB_146b96f27;
    }
  }
  return;
LAB_146b96f35:
  if (uVar7 == uVar6) {
LAB_146b96f3b:
    FUN_146b96f4e(param_1);
    return;
  }
LAB_146b96f27:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_146b96ec6;
}



// FUNCTION 146b96f4e FUN_146b96f4e body=90 status=ok
// SIG undefined FUN_146b96f4e(void)

void FUN_146b96f4e(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146b96fa8();
  return;
}



// FUNCTION 146b96fa8 FUN_146b96fa8 body=76 status=ok
// SIG undefined FUN_146b96fa8(void)

void FUN_146b96fa8(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0x10 + (longlong)param_2 * 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*(longlong *)(lVar1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146b96ff4(param_1,param_2);
  return;
}



// FUNCTION 146b96ff4 FUN_146b96ff4 body=114 status=ok
// SIG undefined FUN_146b96ff4(void)

void FUN_146b96ff4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 146b97066 FUN_146b97066 body=203 status=ok
// SIG undefined FUN_146b97066(void)

int FUN_146b97066(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146b970b0:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146b97126;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146b97126;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146b97117;
    }
  }
  return -1;
LAB_146b97126:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146b97117:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146b970b0;
}



// FUNCTION 146b97132 FUN_146b97132 body=315 status=ok
// SIG undefined FUN_146b97132(void)

undefined4 * FUN_146b97132(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b9726e(param_1,local_48);
  FUN_146b973da(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_146b97354(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b97446(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b9726e FUN_146b9726e body=229 status=ok
// SIG undefined FUN_146b9726e(void)

int * FUN_146b9726e(longlong *param_1,int *param_2)

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



// FUNCTION 146b97354 FUN_146b97354 body=133 status=ok
// SIG undefined FUN_146b97354(void)

undefined8 FUN_146b97354(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_146b97066(), iVar7 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar7 * 0x20);
    puVar2 = *(undefined8 **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    plVar1[2] = *(longlong *)(param_3 + 4);
    *(undefined4 *)plVar1 = uVar3;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar4;
    *(undefined4 *)(plVar1 + 1) = uVar5;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar6;
    FUN_146b96ff4(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 146b973da FUN_146b973da body=107 status=ok
// SIG undefined FUN_146b973da(void)

undefined8 * FUN_146b973da(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  *puVar3 = 0;
  return param_2;
}



// FUNCTION 146b97446 FUN_146b97446 body=476 status=ok
// SIG undefined FUN_146b97446(void)

void FUN_146b97446(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b97623 FUN_146b97623 body=38 status=ok
// SIG undefined FUN_146b97623(void)

void FUN_146b97623(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b9764a(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 146b9764a FUN_146b9764a body=59 status=ok
// SIG undefined FUN_146b9764a(void)

void FUN_146b9764a(longlong *param_1)

{
  FUN_146b17e4e(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b97686 FUN_146b97686 body=29 status=ok
// SIG undefined FUN_146b97686(void)

undefined8 FUN_146b97686(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b976c0 FUN_146b976c0 body=93 status=ok
// SIG undefined FUN_146b976c0(void)

void FUN_146b976c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f35d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b9771e FUN_146b9771e body=93 status=ok
// SIG undefined FUN_146b9771e(void)

void FUN_146b9771e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f35d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b9777c FUN_146b9777c body=126 status=ok
// SIG undefined FUN_146b9777c(void)

void FUN_146b9777c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f35d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b977eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b97808 FUN_146b97808 body=21 status=ok
// SIG undefined FUN_146b97808(void)

undefined8 FUN_146b97808(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b9781e FUN_146b9781e body=48 status=ok
// SIG undefined FUN_146b9781e(void)

void FUN_146b9781e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146b9784e FUN_146b9784e body=132 status=ok
// SIG undefined FUN_146b9784e(void)

void FUN_146b9784e(longlong param_1,int param_2)

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



// FUNCTION 146b978d4 FUN_146b978d4 body=68 status=ok
// SIG undefined FUN_146b978d4(void)

void FUN_146b978d4(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_144a6a7e8(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1414fc534(param_1,param_2);
  return;
}



// FUNCTION 146b9791a FUN_146b9791a body=323 status=ok
// SIG undefined FUN_146b9791a(void)

undefined4 * FUN_146b9791a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b97a5e(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  lVar9 = *plVar1;
  *(longlong *)(local_38 + 4) = lVar9;
  local_38[8] = 0;
  local_38[9] = 0;
  if (lVar9 != 0) {
    plVar6 = plVar1 + 4;
    if ((longlong *)plVar1[2] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar1[2];
    }
    (**(code **)*plVar6)(plVar6,local_38 + 8);
    uVar5 = *local_38;
  }
  local_38[0x14] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_146b97b4c(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar4) {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[0x15] = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_38[0x14] =
           *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146b97c7a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b97a5e FUN_146b97a5e body=238 status=ok
// SIG undefined FUN_146b97a5e(void)

int * FUN_146b97a5e(longlong *param_1,int *param_2)

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
      FUN_1401284dc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 146b97b4c FUN_146b97b4c body=179 status=ok
// SIG undefined FUN_146b97b4c(void)

undefined8 FUN_146b97b4c(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
            plVar1 = (longlong *)((longlong)_Dst + 0x30);
            if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
              plVar1 = *(longlong **)((longlong)_Dst + 0x20);
            }
            (**(code **)(*plVar1 + 0x10))();
          }
          memmove(_Dst,param_3,0x50);
          FUN_146b97c00(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x50);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b97c00 FUN_146b97c00 body=122 status=ok
// SIG undefined FUN_146b97c00(void)

void FUN_146b97c00(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 146b97c7a FUN_146b97c7a body=423 status=ok
// SIG undefined FUN_146b97c7a(void)

void FUN_146b97c7a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 146b97e22 FUN_146b97e22 body=85 status=ok
// SIG undefined FUN_146b97e22(void)

void FUN_146b97e22(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_146b97e78(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x50);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b97e78 FUN_146b97e78 body=95 status=ok
// SIG undefined FUN_146b97e78(void)

void FUN_146b97e78(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x54 + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x50 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x50);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x50);
  FUN_146b97ed8();
  return;
}



// FUNCTION 146b97ed8 FUN_146b97ed8 body=73 status=ok
// SIG undefined FUN_146b97ed8(void)

void FUN_146b97ed8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x60) != 0) {
    lVar2 = *param_1 + (longlong)param_2 * 0x60;
    plVar1 = *(longlong **)(lVar2 + 0x20);
    plVar3 = (longlong *)(lVar2 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_146b97c00(param_1,param_2);
  return;
}



// FUNCTION 146b97f22 FUN_146b97f22 body=117 status=ok
// SIG undefined FUN_146b97f22(void)

longlong * FUN_146b97f22(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 == 0) {
    *(undefined1 *)(param_2 + 10) = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    *param_2 = lVar2;
    param_2[2] = *(longlong *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar3 = *(undefined4 *)(lVar1 + 0x30);
    uVar4 = *(undefined4 *)(lVar1 + 0x34);
    uVar5 = *(undefined4 *)(lVar1 + 0x38);
    uVar6 = *(undefined4 *)(lVar1 + 0x3c);
    uVar7 = *(undefined4 *)(lVar1 + 0x44);
    uVar8 = *(undefined4 *)(lVar1 + 0x48);
    uVar9 = *(undefined4 *)(lVar1 + 0x4c);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar7;
    *(undefined4 *)(param_2 + 7) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar9;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
    *(undefined4 *)(param_2 + 5) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *(undefined1 *)(param_2 + 8) = *(undefined1 *)(lVar1 + 0x50);
    *(undefined1 *)(param_2 + 10) = 1;
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = lVar1;
  }
  return param_2;
}



// FUNCTION 146b97f98 FUN_146b97f98 body=95 status=ok
// SIG undefined FUN_146b97f98(void)

void FUN_146b97f98(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146b97ff8 FUN_146b97ff8 body=132 status=ok
// SIG undefined FUN_146b97ff8(void)

void FUN_146b97ff8(longlong param_1,int param_2)

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



// FUNCTION 146b9807d FUN_146b9807d body=124 status=ok
// SIG undefined FUN_146b9807d(void)

undefined8 * FUN_146b9807d(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f35df0;
  uVar1 = *param_1;
  puVar2[2] = &PTR_FUN_149f35250;
  puVar2[3] = 0;
  puVar2[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 5),4000);
  puVar2[10] = uVar1;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x5c) = 0;
  return puVar2;
}



// FUNCTION 146b98104 FUN_146b98104 body=29 status=ok
// SIG undefined FUN_146b98104(void)

undefined8 FUN_146b98104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b98122 FUN_146b98122 body=94 status=ok
// SIG undefined FUN_146b98122(void)

longlong * FUN_146b98122(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xe0,0x10);
  FUN_146b98180(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 146b98180 FUN_146b98180 body=99 status=ok
// SIG undefined FUN_146b98180(void)

undefined8 * FUN_146b98180(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149f35e10;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 146b981ee FUN_146b981ee body=29 status=ok
// SIG undefined FUN_146b981ee(void)

undefined8 FUN_146b981ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9820c FUN_146b9820c body=72 status=ok
// SIG undefined FUN_146b9820c(void)

void FUN_146b9820c(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    *(undefined4 *)(param_1 + 200) = 0;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(param_1 + 0x80);
  }
  FUN_140788a7e(param_1);
  return;
}



// FUNCTION 146b98254 FUN_146b98254 body=9 status=ok
// SIG undefined FUN_146b98254(void)

void FUN_146b98254(longlong param_1)

{
  FUN_146b9827c(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 146b9825e FUN_146b9825e body=29 status=ok
// SIG undefined FUN_146b9825e(void)

undefined8 FUN_146b9825e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9827c FUN_146b9827c body=74 status=ok
// SIG undefined FUN_146b9827c(void)

void FUN_146b9827c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 146b982c6 FUN_146b982c6 body=115 status=ok
// SIG undefined FUN_146b982c6(void)

int FUN_146b982c6(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b9833a FUN_146b9833a body=152 status=ok
// SIG undefined FUN_146b9833a(void)

void FUN_146b9833a(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar4) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4) == param_2[3])) {
          FUN_146b983d2(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146b983d2 FUN_146b983d2 body=90 status=ok
// SIG undefined FUN_146b983d2(void)

void FUN_146b983d2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146b9842c();
  return;
}



// FUNCTION 146b9842c FUN_146b9842c body=57 status=ok
// SIG undefined FUN_146b9842c(void)

void FUN_146b9842c(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_146b98466(param_1,param_2);
  return;
}



// FUNCTION 146b98466 FUN_146b98466 body=114 status=ok
// SIG undefined FUN_146b98466(void)

void FUN_146b98466(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 146b984d8 FUN_146b984d8 body=63 status=ok
// SIG undefined FUN_146b984d8(void)

void FUN_146b984d8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146155014(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146b9865c(param_1);
    return;
  }
  FUN_146b98518(param_1);
  FUN_146155014(param_1);
  return;
}



// FUNCTION 146b98518 FUN_146b98518 body=322 status=ok
// SIG undefined FUN_146b98518(void)

void FUN_146b98518(longlong *param_1)

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



// FUNCTION 146b9865c FUN_146b9865c body=449 status=ok
// SIG undefined FUN_146b9865c(void)

void FUN_146b9865c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b9881e FUN_146b9881e body=312 status=ok
// SIG undefined FUN_146b9881e(void)

undefined4 * FUN_146b9881e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b98958(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  *puVar2 = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146b98a3e(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146b9865c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b98958 FUN_146b98958 body=229 status=ok
// SIG undefined FUN_146b98958(void)

int * FUN_146b98958(longlong *param_1,int *param_2)

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



// FUNCTION 146b98a3e FUN_146b98a3e body=120 status=ok
// SIG undefined FUN_146b98a3e(void)

undefined8 FUN_146b98a3e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_146b982c6(), iVar7 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
    puVar2 = *(undefined8 **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146b98466(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 146b98ab6 FUN_146b98ab6 body=108 status=ok
// SIG undefined FUN_146b98ab6(void)

undefined4 * FUN_146b98ab6(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_146b98b22();
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 146b98b22 FUN_146b98b22 body=59 status=ok
// SIG undefined FUN_146b98b22(void)

void FUN_146b98b22(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x18) = 0xff;
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0xff;
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
      return;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0xff;
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 146b98b5e FUN_146b98b5e body=109 status=ok
// SIG undefined FUN_146b98b5e(void)

longlong FUN_146b98b5e(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) != -1) {
    switch(*(char *)(param_2 + 0x18)) {
    case '\0':
      FUN_146b98ab6(param_1);
      break;
    case '\x01':
      FUN_146b98bcc(param_1);
      break;
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
      FUN_146b98b22(param_1);
      *(undefined1 *)(param_1 + 0x18) = 2;
      break;
    default:
      FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,L"Unrecognized TUnion subtype"
                   );
    }
  }
  return param_1;
}



// FUNCTION 146b98bcc FUN_146b98bcc body=108 status=ok
// SIG undefined FUN_146b98bcc(void)

undefined4 * FUN_146b98bcc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_146b98b22();
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 146b98c38 FUN_146b98c38 body=111 status=ok
// SIG undefined FUN_146b98c38(void)

longlong * FUN_146b98c38(longlong *param_1,longlong *param_2)

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
  return param_1;
}



// FUNCTION 146b98ca8 FUN_146b98ca8 body=132 status=ok
// SIG undefined FUN_146b98ca8(void)

void FUN_146b98ca8(longlong param_1,int param_2)

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



// FUNCTION 146b98d2e FUN_146b98d2e body=201 status=ok
// SIG undefined FUN_146b98d2e(void)

void FUN_146b98d2e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 146b98df8 FUN_146b98df8 body=29 status=ok
// SIG undefined FUN_146b98df8(void)

undefined8 FUN_146b98df8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b98e32 FUN_146b98e32 body=93 status=ok
// SIG undefined FUN_146b98e32(void)

void FUN_146b98e32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f34060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f35ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b98e90 FUN_146b98e90 body=93 status=ok
// SIG undefined FUN_146b98e90(void)

void FUN_146b98e90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f34060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f35ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b98eee FUN_146b98eee body=126 status=ok
// SIG undefined FUN_146b98eee(void)

void FUN_146b98eee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f34060;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f35ed0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b98f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b98f7a FUN_146b98f7a body=21 status=ok
// SIG undefined FUN_146b98f7a(void)

undefined8 FUN_146b98f7a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b98f90 FUN_146b98f90 body=94 status=ok
// SIG undefined FUN_146b98f90(void)

longlong * FUN_146b98f90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_146b98fee(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 146b98fee FUN_146b98fee body=99 status=ok
// SIG undefined FUN_146b98fee(void)

undefined8 * FUN_146b98fee(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149f35f40;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 146b9905c FUN_146b9905c body=29 status=ok
// SIG undefined FUN_146b9905c(void)

undefined8 FUN_146b9905c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b9907a FUN_146b9907a body=71 status=ok
// SIG undefined FUN_146b9907a(void)

void FUN_146b9907a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (((*(byte *)(param_1 + 0x78) & 1) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x88), plVar3 != (longlong *)0x0)) {
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
  FUN_140788a7e(param_1);
  return;
}



// FUNCTION 146b990c2 FUN_146b990c2 body=179 status=ok
// SIG undefined FUN_146b990c2(void)

int * FUN_146b990c2(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x28);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_146b99158;
          break;
        }
        iVar2 = piVar1[8];
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_146b99176(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x28);
LAB_146b99158:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 2;
}



// FUNCTION 146b99176 FUN_146b99176 body=283 status=ok
// SIG undefined FUN_146b99176(void)

undefined4 * FUN_146b99176(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b99292(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 6) = 0;
  local_40[8] = 0xffffffff;
  cVar1 = FUN_146b99378(param_1,param_3,local_40,local_48);
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
      local_40[9] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_146b9948a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b99292 FUN_146b99292 body=230 status=ok
// SIG undefined FUN_146b99292(void)

int * FUN_146b99292(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b99378 FUN_146b99378 body=160 status=ok
// SIG undefined FUN_146b99378(void)

undefined8 FUN_146b99378(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146b99418(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b99418 FUN_146b99418 body=114 status=ok
// SIG undefined FUN_146b99418(void)

void FUN_146b99418(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 146b9948a FUN_146b9948a body=419 status=ok
// SIG undefined FUN_146b9948a(void)

void FUN_146b9948a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 146b9962e FUN_146b9962e body=81 status=ok
// SIG undefined FUN_146b9962e(void)

void FUN_146b9962e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_146b99680(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b99680 FUN_146b99680 body=87 status=ok
// SIG undefined FUN_146b99680(void)

void FUN_146b99680(longlong *param_1,int param_2)

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
  FUN_146b996d8();
  return;
}



// FUNCTION 146b996d8 FUN_146b996d8 body=52 status=ok
// SIG undefined FUN_146b996d8(void)

void FUN_146b996d8(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_146b99418(param_1,param_2);
  return;
}



// FUNCTION 146b9970c FUN_146b9970c body=43 status=ok
// SIG undefined FUN_146b9970c(void)

void FUN_146b9970c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146b99738 FUN_146b99738 body=95 status=ok
// SIG undefined FUN_146b99738(void)

void FUN_146b99738(longlong param_1,uint param_2)

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


