// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146853a5e FUN_146853a5e body=52 status=ok
// SIG undefined FUN_146853a5e(void)

void FUN_146853a5e(longlong *param_1)

{
  FUN_146853a92();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146853a92 FUN_146853a92 body=312 status=ok
// SIG undefined FUN_146853a92(void)

void FUN_146853a92(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146853bcc FUN_146853bcc body=29 status=ok
// SIG undefined FUN_146853bcc(void)

undefined8 FUN_146853bcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146853c0c FUN_146853c0c body=93 status=ok
// SIG undefined FUN_146853c0c(void)

void FUN_146853c0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49610;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e495a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146853c6a FUN_146853c6a body=93 status=ok
// SIG undefined FUN_146853c6a(void)

void FUN_146853c6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49610;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e495a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146853cc8 FUN_146853cc8 body=126 status=ok
// SIG undefined FUN_146853cc8(void)

void FUN_146853cc8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e49610;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e495a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146853d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146853d46 FUN_146853d46 body=29 status=ok
// SIG undefined FUN_146853d46(void)

undefined8 FUN_146853d46(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return param_2;
}



// FUNCTION 146853d64 FUN_146853d64 body=77 status=ok
// SIG undefined FUN_146853d64(void)

undefined8 FUN_146853d64(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146853db4 FUN_146853db4 body=29 status=ok
// SIG undefined FUN_146853db4(void)

undefined8 FUN_146853db4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146853df4 FUN_146853df4 body=93 status=ok
// SIG undefined FUN_146853df4(void)

void FUN_146853df4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e496f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146853e52 FUN_146853e52 body=93 status=ok
// SIG undefined FUN_146853e52(void)

void FUN_146853e52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e496f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146853eb0 FUN_146853eb0 body=126 status=ok
// SIG undefined FUN_146853eb0(void)

void FUN_146853eb0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e496f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e49680;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146853f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146853f3c FUN_146853f3c body=23 status=ok
// SIG undefined FUN_146853f3c(void)

undefined8 FUN_146853f3c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 146853f56 FUN_146853f56 body=350 status=ok
// SIG undefined FUN_146853f56(void)

undefined4 * FUN_146853f56(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
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
  FUN_1468540b6(param_1,local_48);
  iVar7 = 0;
  *local_40 = 0;
  *local_40 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(local_40 + 2) = uVar1;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
    iVar7 = *(int *)(local_40 + 1) + -1;
  }
  uVar3 = FUN_144a49b4a(iVar7,puVar8);
  uVar4 = FUN_144a78877(uVar3,uVar1);
  cVar2 = FUN_14685419c(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      FUN_146854366(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468540b6 FUN_1468540b6 body=229 status=ok
// SIG undefined FUN_1468540b6(void)

int * FUN_1468540b6(longlong *param_1,int *param_2)

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



// FUNCTION 14685419c FUN_14685419c body=114 status=ok
// SIG undefined FUN_14685419c(void)

undefined8 FUN_14685419c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_14685420e(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14685427a(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14685420e FUN_14685420e body=107 status=ok
// SIG undefined FUN_14685420e(void)

int FUN_14685420e(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1468542ec(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14685427a FUN_14685427a body=114 status=ok
// SIG undefined FUN_14685427a(void)

void FUN_14685427a(longlong *param_1,int param_2)

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



// FUNCTION 1468542ec FUN_1468542ec body=122 status=ok
// SIG undefined FUN_1468542ec(void)

undefined4 FUN_1468542ec(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == (int)param_1[1]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*param_1 + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) goto LAB_14685435a;
LAB_146854324:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_146854324;
      }
      if (uVar5 != uVar2) {
        return 0;
      }
    }
  }
  else if ((int)param_1[1] + iVar1 != 1) {
    return 0;
  }
LAB_14685435a:
  return CONCAT31((int3)((uint)(int)param_2[2] >> 8),(int)param_2[2] == (int)param_1[2]);
}



// FUNCTION 146854366 FUN_146854366 body=490 status=ok
// SIG undefined FUN_146854366(void)

void FUN_146854366(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
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
    uVar13 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4)
             = 0xffffffff;
        uVar13 = uVar13 + 1;
      } while (uVar2 != uVar13);
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
      iVar14 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar4 = *local_90;
        lVar12 = (longlong)iVar14 * 0x20;
        iVar7 = *(int *)(lVar4 + 8 + lVar12);
        puVar11 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar11 = *(undefined2 **)(lVar4 + lVar12);
        }
        uVar3 = *(undefined4 *)(lVar4 + 0x10 + lVar12);
        iVar9 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar9 = 0;
        }
        uVar6 = FUN_144a49b4a(iVar9,puVar11);
        iVar7 = FUN_144a78877(uVar6,uVar3);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x1c + lVar12) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x18 + lVar12) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar14;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar14 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146854552 FUN_146854552 body=164 status=ok
// SIG undefined FUN_146854552(void)

void FUN_146854552(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1468545d2;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1468545d2:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1468545f6 FUN_1468545f6 body=31 status=ok
// SIG undefined FUN_1468545f6(void)

undefined8 FUN_1468545f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14685462e FUN_14685462e body=93 status=ok
// SIG undefined FUN_14685462e(void)

void FUN_14685462e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e497d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14685468c FUN_14685468c body=93 status=ok
// SIG undefined FUN_14685468c(void)

void FUN_14685468c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e497d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1468546ea FUN_1468546ea body=126 status=ok
// SIG undefined FUN_1468546ea(void)

void FUN_1468546ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e497d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e49760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146854759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146854778 FUN_146854778 body=335 status=ok
// SIG undefined FUN_146854778(void)

undefined4 * FUN_146854778(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  void *_Src;
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
  FUN_14482b5a6(param_1,local_48);
  *local_40 = 0;
  iVar4 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(local_40 + 1) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_40,iVar4,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar4 * 2);
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_14170e316(param_1,param_3,local_40);
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
      FUN_14482b9e8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468548c8 FUN_1468548c8 body=95 status=ok
// SIG undefined FUN_1468548c8(void)

void FUN_1468548c8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_1447a1747(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146854928 FUN_146854928 body=158 status=ok
// SIG undefined FUN_146854928(void)

void FUN_146854928(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14685499a;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14685499a;
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
LAB_14685499a:
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
                    /* WARNING: Could not recover jumptable at 0x0001468549ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1468549c6 FUN_1468549c6 body=29 status=ok
// SIG undefined FUN_1468549c6(void)

undefined8 FUN_1468549c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468549e4 FUN_1468549e4 body=48 status=ok
// SIG undefined FUN_1468549e4(void)

void FUN_1468549e4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146854a14 FUN_146854a14 body=114 status=ok
// SIG undefined FUN_146854a14(void)

void FUN_146854a14(longlong *param_1,int param_2)

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



// FUNCTION 146854a86 FUN_146854a86 body=114 status=ok
// SIG undefined FUN_146854a86(void)

void FUN_146854a86(longlong *param_1,int param_2)

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



// FUNCTION 146854af8 FUN_146854af8 body=165 status=ok
// SIG undefined FUN_146854af8(void)

int FUN_146854af8(longlong *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
        uStack_44 = param_3[1];
        uStack_40 = param_3[2];
        uStack_3c = param_3[3];
        cVar1 = FUN_14277ac86(lVar3 + (longlong)iVar4 * 0x18,&local_48);
        if (cVar1 != '\0') goto LAB_146854b1f;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_146854b1f:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 146854b9e FUN_146854b9e body=90 status=ok
// SIG undefined FUN_146854b9e(void)

void FUN_146854b9e(longlong *param_1,int param_2)

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
  FUN_146854bf8();
  return;
}



// FUNCTION 146854bf8 FUN_146854bf8 body=51 status=ok
// SIG undefined FUN_146854bf8(void)

void FUN_146854bf8(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14685427a(param_1,param_2);
  return;
}



// FUNCTION 146854c2c FUN_146854c2c body=413 status=ok
// SIG undefined FUN_146854c2c(void)

void FUN_146854c2c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x20 + lVar2 + -0x1c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -8;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 146854dca FUN_146854dca body=424 status=ok
// SIG undefined FUN_146854dca(void)

undefined4 * FUN_146854dca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468540b6(param_1,local_50);
  *local_48 = 0;
  iVar7 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(local_48 + 1) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
    uVar10 = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(local_48 + 2) = uVar10;
    *(undefined4 *)(local_48 + 3) = 0xffffffff;
    puVar8 = &DAT_149dfb77a;
    iVar7 = 0;
  }
  else {
    FUN_1446dd670(local_48,iVar7,0);
    memcpy((void *)*local_48,_Src,(longlong)iVar7 * 2);
    iVar7 = *(int *)(local_48 + 1);
    uVar10 = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(local_48 + 2) = uVar10;
    *(undefined4 *)(local_48 + 3) = 0xffffffff;
    if (iVar7 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*local_48;
    }
  }
  local_54 = local_50[0];
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar8);
  uVar4 = FUN_144a78877(uVar3,uVar10);
  cVar2 = FUN_14685419c(param_1,uVar4,local_48,&local_54);
  uVar10 = local_54;
  if (cVar2 == '\0') {
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
      *(uint *)((longlong)local_48 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146854366(param_1);
    }
  }
  *param_2 = uVar10;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146854f74 FUN_146854f74 body=88 status=ok
// SIG undefined FUN_146854f74(void)

void FUN_146854f74(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146854fcc FUN_146854fcc body=40 status=ok
// SIG undefined FUN_146854fcc(void)

void FUN_146854fcc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 146854ff4 FUN_146854ff4 body=208 status=ok
// SIG undefined FUN_146854ff4(void)

void FUN_146854ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c926f40;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c926f4c = DAT_14c926f4c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c926f38 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c926f38 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c926f4c = DAT_14c926f4c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_146855097;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c926f4c = DAT_14c926f4c + -1;
LAB_146855097:
  FUN_14474d06a(&DAT_14c926f38,0);
  return;
}



// FUNCTION 1468550c4 FUN_1468550c4 body=340 status=ok
// SIG undefined FUN_1468550c4(void)

undefined4 * FUN_1468550c4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14170e46a(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_140e391ea(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x1c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14170e6aa(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14685521a FUN_14685521a body=253 status=ok
// SIG undefined FUN_14685521a(void)

void FUN_14685521a(longlong *param_1,longlong *param_2)

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
LAB_146855290:
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
              if (0x7f < (uVar6 | uVar7)) goto LAB_1468552ff;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1468552ff;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_146855305;
      }
      if (iVar2 + iVar1 == 1) goto LAB_146855305;
      goto LAB_1468552f1;
    }
  }
  return;
LAB_1468552ff:
  if (uVar7 == uVar6) {
LAB_146855305:
    FUN_146855318(param_1);
    return;
  }
LAB_1468552f1:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_146855290;
}



// FUNCTION 146855318 FUN_146855318 body=90 status=ok
// SIG undefined FUN_146855318(void)

void FUN_146855318(longlong *param_1,int param_2)

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
  FUN_146855372();
  return;
}



// FUNCTION 146855372 FUN_146855372 body=51 status=ok
// SIG undefined FUN_146855372(void)

void FUN_146855372(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146854a14(param_1,param_2);
  return;
}



// FUNCTION 1468553a6 FUN_1468553a6 body=29 status=ok
// SIG undefined FUN_1468553a6(void)

undefined8 FUN_1468553a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468553e6 FUN_1468553e6 body=93 status=ok
// SIG undefined FUN_1468553e6(void)

void FUN_1468553e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e499c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146855444 FUN_146855444 body=93 status=ok
// SIG undefined FUN_146855444(void)

void FUN_146855444(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e499c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1468554a2 FUN_1468554a2 body=126 status=ok
// SIG undefined FUN_1468554a2(void)

void FUN_1468554a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e499c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e49950;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146855511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146855520 FUN_146855520 body=29 status=ok
// SIG undefined FUN_146855520(void)

undefined8 FUN_146855520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return param_2;
}



// FUNCTION 14685553e FUN_14685553e body=77 status=ok
// SIG undefined FUN_14685553e(void)

undefined8 FUN_14685553e(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685558e FUN_14685558e body=29 status=ok
// SIG undefined FUN_14685558e(void)

undefined8 FUN_14685558e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468555ce FUN_1468555ce body=93 status=ok
// SIG undefined FUN_1468555ce(void)

void FUN_1468555ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14685562c FUN_14685562c body=93 status=ok
// SIG undefined FUN_14685562c(void)

void FUN_14685562c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14685568a FUN_14685568a body=126 status=ok
// SIG undefined FUN_14685568a(void)

void FUN_14685568a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e49aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e49a30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468556f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146855716 FUN_146855716 body=23 status=ok
// SIG undefined FUN_146855716(void)

undefined8 FUN_146855716(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14685573e FUN_14685573e body=41 status=ok
// SIG undefined FUN_14685573e(void)

void FUN_14685573e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_14684e938(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 146855768 FUN_146855768 body=29 status=ok
// SIG undefined FUN_146855768(void)

undefined8 FUN_146855768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146855785 FUN_146855785 body=63 status=ok
// SIG undefined FUN_146855785(void)

void FUN_146855785(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1468557c4 FUN_1468557c4 body=48 status=ok
// SIG undefined FUN_1468557c4(void)

void FUN_1468557c4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1468557f4 FUN_1468557f4 body=330 status=ok
// SIG undefined FUN_1468557f4(void)

undefined4 * FUN_1468557f4(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146855940(param_1,local_48);
  FUN_146855ab2(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_146855a26(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146855c6c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146855940 FUN_146855940 body=229 status=ok
// SIG undefined FUN_146855940(void)

int * FUN_146855940(longlong *param_1,int *param_2)

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



// FUNCTION 146855a26 FUN_146855a26 body=140 status=ok
// SIG undefined FUN_146855a26(void)

void FUN_146855a26(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_146855b16();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_146855be2(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_146855a47;
    }
  }
  uVar6 = 0;
LAB_146855a47:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146855ab2 FUN_146855ab2 body=99 status=ok
// SIG undefined FUN_146855ab2(void)

undefined8 * FUN_146855ab2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined1 *)param_1[1];
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
  *(undefined1 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 146855b16 FUN_146855b16 body=203 status=ok
// SIG undefined FUN_146855b16(void)

int FUN_146855b16(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_146855b60:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_146855bd6;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146855bd6;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146855bc7;
    }
  }
  return -1;
LAB_146855bd6:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146855bc7:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146855b60;
}



// FUNCTION 146855be2 FUN_146855be2 body=138 status=ok
// SIG undefined FUN_146855be2(void)

void FUN_146855be2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146855c6c FUN_146855c6c body=476 status=ok
// SIG undefined FUN_146855c6c(void)

void FUN_146855c6c(longlong *param_1)

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



// FUNCTION 146855e4a FUN_146855e4a body=482 status=ok
// SIG undefined FUN_146855e4a(void)

void FUN_146855e4a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[9] = param_2[9];
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_2[10] = 0;
  param_1[0xb] = 0;
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x11] = param_2[0x11];
  param_2[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_2[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_2[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  cVar1 = *(char *)(param_2 + 0x16);
  *(char *)(param_1 + 0x16) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  }
  return;
}



// FUNCTION 14685602c FUN_14685602c body=62 status=ok
// SIG undefined FUN_14685602c(void)

void FUN_14685602c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14685606a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb8,8);
  }
  return;
}



// FUNCTION 14685606a FUN_14685606a body=113 status=ok
// SIG undefined FUN_14685606a(void)

ulonglong FUN_14685606a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1468560a3;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb8,8);
      param_2 = param_2 / 0xb8;
    }
  }
LAB_1468560a3:
  return param_2 & 0xffffffff;
}



// FUNCTION 1468560dc FUN_1468560dc body=34 status=ok
// SIG undefined FUN_1468560dc(void)

void FUN_1468560dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149e49c80;
  return;
}



// FUNCTION 1468560fe FUN_1468560fe body=31 status=ok
// SIG undefined FUN_1468560fe(void)

undefined8 FUN_1468560fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14685613a FUN_14685613a body=93 status=ok
// SIG undefined FUN_14685613a(void)

void FUN_14685613a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e49c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146856198 FUN_146856198 body=126 status=ok
// SIG undefined FUN_146856198(void)

void FUN_146856198(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e49c10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146856207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146856222 FUN_146856222 body=21 status=ok
// SIG undefined FUN_146856222(void)

undefined8 FUN_146856222(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146856238 FUN_146856238 body=29 status=ok
// SIG undefined FUN_146856238(void)

undefined8 FUN_146856238(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14685625e FUN_14685625e body=151 status=ok
// SIG undefined FUN_14685625e(void)

void FUN_14685625e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_146855785(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001468562ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1468562f5 FUN_1468562f5 body=103 status=ok
// SIG undefined FUN_1468562f5(void)

float FUN_1468562f5(float param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_1;
  sVar3 = _fdtest();
  fVar1 = param_1;
  if (sVar3 == 2) {
    fVar1 = 0.0;
  }
  fVar2 = 0.0;
  if (param_1 != 0.0) {
    fVar2 = fVar1;
  }
  if (NAN(param_1)) {
    fVar2 = fVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685635d FUN_14685635d body=129 status=ok
// SIG undefined FUN_14685635d(void)

int FUN_14685635d(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar4 = in_XMM0._0_8_;
  local_28 = dVar4;
  sVar2 = _dtest();
  iVar1 = in_XMM0._4_4_ * 0x17 + in_XMM0._0_4_;
  if (sVar2 == 2) {
    iVar1 = 0;
  }
  iVar3 = 0;
  if (dVar4 != 0.0) {
    iVar3 = iVar1;
  }
  if (NAN(dVar4)) {
    iVar3 = iVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685645c caseD_f body=32 status=ok
// SIG undefined caseD_f(void)

undefined8 switchD_143c3d4dc::caseD_f(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"No_Detailed_Info_Specified");
  return param_2;
}



// FUNCTION 146856492 caseD_35 body=32 status=ok
// SIG undefined caseD_35(void)

undefined8 switchD_143c3d4dc::caseD_35(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1468564b6 caseD_39 body=38 status=ok
// SIG undefined caseD_39(void)

undefined8 switchD_143c3d4dc::caseD_39(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,&DAT_149dfb77a,1);
  return param_2;
}



// FUNCTION 146856562 FUN_146856562 body=59 status=ok
// SIG undefined FUN_146856562(void)

undefined8 FUN_146856562(longlong *param_1)

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



// FUNCTION 146856688 FUN_146856688 body=59 status=ok
// SIG undefined FUN_146856688(void)

undefined8 FUN_146856688(longlong *param_1)

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



// FUNCTION 1468567e4 FUN_1468567e4 body=59 status=ok
// SIG undefined FUN_1468567e4(void)

undefined8 FUN_1468567e4(longlong *param_1)

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



// FUNCTION 14685695a FUN_14685695a body=59 status=ok
// SIG undefined FUN_14685695a(void)

undefined8 FUN_14685695a(longlong *param_1)

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



// FUNCTION 1468569fc FUN_1468569fc body=80 status=ok
// SIG undefined FUN_1468569fc(void)

void FUN_1468569fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1409ffe1d();
  uVar2 = FUN_1446f8646();
  uVar1 = FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(uVar1,param_1);
  return;
}



// FUNCTION 146856a6c FUN_146856a6c body=588 status=ok
// SIG undefined FUN_146856a6c(void)

undefined8
FUN_146856a6c(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar5 = 0;
  if ((param_3 == param_1) || (*param_3 == 0)) {
    iVar7 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar7 = 0;
    }
    FUN_1400020e8(param_2,DAT_14c927970,DAT_14c927978);
    FUN_140180cec(param_1,param_2);
    FUN_140002184(param_2,0x22);
    if ((int)param_1[2] == 0) {
      FUN_1400020e8(param_2,DAT_14c9279a0,DAT_14c9279a8);
      FUN_1400020e8(param_2,DAT_14c9279f0,DAT_14c9279f8);
    }
    else {
      FUN_1400020e8(param_2,DAT_14c927990,DAT_14c927998);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      lVar3 = param_1[2];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = param_1[1];
        lVar9 = 0;
        do {
          local_b8 = 0;
          uStack_b0 = 0;
          puVar1 = (undefined4 *)(lVar2 + lVar9);
          local_c8 = *puVar1;
          uStack_c4 = puVar1[1];
          uStack_c0 = puVar1[2];
          uStack_bc = puVar1[3];
          FUN_14587a656(local_a8,&local_c8,&local_b8);
          local_d0 = param_6;
          local_d8 = param_5;
          cVar4 = FUN_1468fc1fc(local_a8,param_2,&local_88,param_4);
          if (cVar4 == '\0') {
            iVar8 = *(int *)(param_2 + 8) + -1;
            if (*(int *)(param_2 + 8) == 0) {
              iVar8 = 0;
            }
            iVar6 = iVar8;
            if (iVar7 < iVar8) {
              iVar6 = iVar7;
            }
            if (iVar6 < 1) {
              iVar6 = 0;
            }
            FUN_14496493a(param_2,iVar6,iVar8 - iVar6,1);
          }
          else {
            FUN_140002184(param_2,0x2c);
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          if (cVar4 == '\0') {
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            uVar5 = 0;
            goto LAB_146856c6d;
          }
          lVar9 = lVar9 + 0x10;
        } while ((longlong)(int)lVar3 * 0x10 != lVar9);
      }
      iVar7 = *(int *)(param_2 + 8) + -1;
      if (*(int *)(param_2 + 8) == 0) {
        iVar7 = 0;
      }
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      FUN_14496493a(param_2,iVar7 + -1,1,0);
      FUN_1400020e8(param_2,DAT_14c9279b0,DAT_14c9279b8);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    uVar5 = 1;
  }
LAB_146856c6d:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146856cba FUN_146856cba body=2287 status=ok
// SIG undefined FUN_146856cba(void)

ulonglong FUN_146856cba(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                       undefined ***param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  wchar_t **ppwVar4;
  wchar_t **ppwVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  wchar_t *pwVar13;
  wchar_t **ppwVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  wchar_t **ppwVar19;
  undefined7 uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined2 *puVar24;
  longlong lVar25;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  wchar_t *local_130;
  longlong *local_128;
  longlong local_120;
  uint local_114;
  uint local_110;
  undefined4 local_10c;
  wchar_t **local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined **local_b8 [2];
  longlong local_a8;
  undefined8 uStack_a0;
  wchar_t *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  iVar12 = DAT_14c927978;
  pppuVar3 = DAT_14c927970;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pwVar16 = (wchar_t *)*param_2;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar21 = (longlong)DAT_14c927978;
  local_128 = param_2;
  if (lVar21 == 0) {
    lVar21 = 0;
LAB_146856db1:
    pwVar16 = pwVar16 + lVar21;
    local_90 = pwVar16;
    pwVar13 = wcschr(pwVar16,L'\"');
    if (pwVar13 != (wchar_t *)0x0) {
      local_10c = param_3;
      local_100 = param_4;
      FUN_1446f82e2(&local_d8,(ulonglong)((longlong)pwVar13 - (longlong)pwVar16) >> 1,pwVar16,1);
      local_f8 = local_d8;
      local_90 = pwVar13 + 1;
      ppwVar19 = &local_90;
      FUN_144a81de8(local_b8);
      local_b8[0] = &PTR_FUN_149e5e550;
      local_110 = 0;
      local_114 = 0;
      local_f0 = param_1;
LAB_146856e49:
      iVar6 = DAT_14c9279a8;
      uVar15 = DAT_14c9279a0;
      iVar9 = DAT_14c927998;
      ppwVar5 = DAT_14c927990;
      iVar12 = DAT_14c927988;
      ppwVar4 = DAT_14c927980;
      lVar25 = (longlong)DAT_14c927988;
      lVar22 = (longlong)DAT_14c927998;
      lVar21 = (longlong)DAT_14c9279a8;
      local_120 = (longlong)DAT_14c9279f8;
      local_108 = DAT_14c9279f0;
      ppwVar14 = DAT_14c9279f0;
      do {
        pwVar16 = local_90;
        if ((iVar12 != 0) &&
           (ppwVar19 = ppwVar4, ppwVar14 = (wchar_t **)FUN_144a54874(local_90,ppwVar4,lVar25),
           (int)ppwVar14 != 0)) {
          if (iVar9 != 0) {
LAB_146856eba:
            ppwVar19 = ppwVar5;
            iVar10 = FUN_144a54874(pwVar16,ppwVar5,lVar22);
            if (iVar10 != 0) {
              if ((iVar6 == 0) || (iVar10 = FUN_144a54874(pwVar16,uVar15,lVar21), iVar10 == 0))
              goto LAB_146856eea;
              if (((int)local_120 == 0) ||
                 (ppwVar19 = local_108, iVar12 = FUN_144a54874(pwVar16,local_108,local_120),
                 iVar12 == 0)) {
                puVar18 = local_f0;
                local_90 = pwVar16 + local_120;
                *local_f0 = local_f8;
                plVar2 = local_f0 + 1;
                FUN_1468575aa(plVar2,uStack_a0 & 0xffffffff);
                lVar21 = local_a8;
                lVar22 = (longlong)(int)uStack_a0;
                if (lVar22 != 0) {
                  lVar25 = 0;
                  do {
                    local_d8 = *(undefined2 **)(lVar21 + lVar25);
                    uStack_d0 = ((undefined8 *)(lVar21 + lVar25))[1];
                    iVar12 = *(int *)(puVar18 + 2);
                    *(uint *)(puVar18 + 2) = iVar12 + 1U;
                    if (*(uint *)((longlong)puVar18 + 0x14) < iVar12 + 1U) {
                      FUN_1401d5364(plVar2,iVar12);
                    }
                    puVar1 = (undefined4 *)(*plVar2 + (longlong)iVar12 * 0x10);
                    *puVar1 = (undefined4)local_d8;
                    puVar1[1] = local_d8._4_4_;
                    puVar1[2] = (int)uStack_d0;
                    puVar1[3] = uStack_d0._4_4_;
                    lVar25 = lVar25 + 0x20;
                  } while (lVar22 * 0x20 != lVar25);
                }
                *local_128 = (longlong)local_90;
                uVar23 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
                goto LAB_146857363;
              }
              local_138 = (undefined ***)*local_128;
              pwVar13 = 
              L"FAssetBundleEntry::ImportTextItem - Ill-formed asset bundle entry, unexpected: \'%s\'. When parsing import text \'%s\'."
              ;
              uVar20 = (undefined7)((ulonglong)ppwVar19 >> 8);
              goto LAB_14685735c;
            }
          }
          pwVar16 = pwVar16 + lVar22;
          local_90 = pwVar16;
          if ((local_110 & 1) != 0) {
            pwVar16 = (wchar_t *)*local_128;
            pwVar13 = 
            L"FAssetBundleEntry::ImportTextItem - Encountered key AssetPaths twice. When parsing import text \'%s\'."
            ;
            goto LAB_14685739b;
          }
          if (((int)local_120 == 0) ||
             (ppwVar19 = local_108, iVar12 = FUN_144a54874(pwVar16,local_108,local_120),
             uVar15 = local_100, uVar7 = local_10c, iVar12 == 0)) {
            pwVar16 = pwVar16 + local_120;
            local_90 = pwVar16;
            goto LAB_1468572b1;
          }
          local_c8 = (undefined2 *)0x0;
          uStack_c0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          iVar12 = 0;
          goto LAB_1468570f6;
        }
LAB_146856f07:
        pwVar16 = pwVar16 + lVar25;
        local_90 = pwVar16;
        if ((local_114 & 1) != 0) {
          pwVar16 = (wchar_t *)*local_128;
          pwVar13 = 
          L"FAssetBundleEntry::ImportTextItem - Encountered key BundleAssets twice. When parsing import text \'%s\'."
          ;
          goto LAB_14685739b;
        }
        if (((int)local_120 != 0) &&
           (ppwVar19 = local_108, ppwVar14 = (wchar_t **)FUN_144a54874(pwVar16,local_108,local_120),
           (int)ppwVar14 != 0)) goto LAB_146856fcd;
        local_90 = pwVar16 + local_120;
        ppwVar14 = (wchar_t **)CONCAT71((int7)((ulonglong)ppwVar14 >> 8),1);
        local_114 = (uint)ppwVar14;
      } while( true );
    }
    FUN_146816218(param_5,2,
                  L"FAssetBundleEntry::ImportTextItem - Unterminated BundleName string. When parsing import text \'%s\'."
                  ,*local_128);
  }
  else {
    local_90 = pwVar16;
    iVar9 = FUN_144a54874(pwVar16,DAT_14c927970,lVar21);
    if (iVar9 == 0) goto LAB_146856db1;
    local_138 = pppuVar3;
    local_130 = pwVar16;
    FUN_146816218(param_5,2,
                  L"FAssetBundleEntry::ImportTextItem - Text does not start with expected prefix \'%.*s\'. When parsing import text \'%s\'."
                  ,iVar12);
  }
  uVar17 = 0;
  uVar23 = 0;
  lVar21 = 0;
LAB_146856d60:
  FUN_140861e20(lVar21,uVar17);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
LAB_146856eea:
  pwVar16 = pwVar16 + lVar21;
  ppwVar19 = ppwVar4;
  local_90 = pwVar16;
  ppwVar14 = (wchar_t **)FUN_144a54874(pwVar16,ppwVar4,lVar25);
  if ((int)ppwVar14 == 0) goto LAB_146856f07;
  goto LAB_146856eba;
LAB_1468570f6:
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  if (iVar12 < 0) {
    FUN_1446f8c06(&local_c8,0);
  }
  if (local_c8 != (undefined2 *)0x0) {
    *local_c8 = 0;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_130 = (wchar_t *)0x0;
  local_138 = local_b8;
  cVar8 = FUN_140c98f9a(&local_d8,&local_90,uVar7,uVar15);
  if (cVar8 == '\0') {
    local_130 = (wchar_t *)0x0;
    ppwVar19 = &local_90;
    local_138 = local_b8;
    cVar8 = FUN_1468fe894(&local_e8,&local_90,uVar7,uVar15);
    uVar23 = uStack_a0;
    if (cVar8 == '\0') {
      local_138 = (undefined ***)*local_128;
      uVar20 = (undefined7)((ulonglong)ppwVar19 >> 8);
      pwVar16 = local_90;
      goto LAB_1468573f8;
    }
    lVar21 = (longlong)(int)uStack_a0;
    uVar11 = (int)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar11);
    if (uStack_a0._4_4_ < uVar11) {
      FUN_1406f071e(&local_a8,uVar23 & 0xffffffff);
    }
    lVar21 = lVar21 * 0x20;
    local_88 = (undefined4)local_e8;
    uStack_84 = local_e8._4_4_;
    uStack_80 = (undefined4)uStack_e0;
    uStack_7c = uStack_e0._4_4_;
    puVar18 = (undefined8 *)(local_a8 + 0x10 + lVar21);
    *puVar18 = 0;
    puVar18[1] = 0;
    *(undefined8 *)(local_a8 + lVar21) = 0;
    ((undefined8 *)(local_a8 + lVar21))[1] = 0;
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    ppwVar19 = (wchar_t **)&local_88;
    FUN_1400b3bc2(local_a8 + lVar21,ppwVar19,&local_78);
  }
  else {
    if (1 < (int)uStack_c0) {
      pppuVar3 = (undefined ***)*local_128;
      FUN_14475cc44(&local_d8,&local_78);
      puVar24 = local_78;
      if ((int)uStack_70 == 0) {
        puVar24 = &DAT_149dfb77a;
      }
      local_138 = pppuVar3;
      FUN_146816218(param_5,2,
                    L"FAssetBundleEntry::ImportTextItem - Asset bundle entries should all be top level objects, but found a subobject path \'%s\'. When parsing import text \'%s\'."
                    ,puVar24);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1468573fd;
    }
    lVar21 = (longlong)(int)uStack_a0;
    uVar11 = (int)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar11);
    if (uStack_a0._4_4_ < uVar11) {
      FUN_1406f071e(&local_a8);
    }
    lVar21 = lVar21 * 0x20;
    puVar1 = (undefined4 *)(local_a8 + lVar21);
    *puVar1 = (undefined4)local_d8;
    puVar1[1] = local_d8._4_4_;
    puVar1[2] = (int)uStack_d0;
    puVar1[3] = uStack_d0._4_4_;
    ppwVar19 = (wchar_t **)0x0;
    *(undefined8 *)(local_a8 + 0x10 + lVar21) = 0;
    *(undefined2 **)(local_a8 + 0x10 + lVar21) = local_c8;
    local_c8 = (undefined2 *)0x0;
    *(int *)(local_a8 + 0x18 + lVar21) = (int)uStack_c0;
    *(int *)(local_a8 + 0x1c + lVar21) = uStack_c0._4_4_;
    uStack_c0 = 0;
  }
  pwVar16 = local_90;
  if (*local_90 != L',') goto LAB_1468572bc;
  local_90 = local_90 + 1;
  iVar12 = uStack_c0._4_4_;
  goto LAB_1468570f6;
LAB_1468572bc:
  lVar21 = (longlong)DAT_14c9279f8;
  if (lVar21 == 0) {
    lVar21 = 0;
  }
  else {
    ppwVar19 = DAT_14c9279f0;
    iVar12 = FUN_144a54874(local_90,DAT_14c9279f0,lVar21);
    if (iVar12 != 0) {
      local_138 = (undefined ***)*local_128;
      uVar20 = (undefined7)((ulonglong)ppwVar19 >> 8);
LAB_1468573f8:
      FUN_146816218(param_5,CONCAT71(uVar20,2),
                    L"FAssetBundleEntry::ImportTextItem - unterminated or ill formed AssetPaths list while importing asset bundle entry: \'%s\'. When parsing import text \'%s\'."
                    ,pwVar16);
LAB_1468573fd:
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146857361;
    }
  }
  pwVar16 = pwVar16 + lVar21;
  local_90 = pwVar16;
  if (local_c8 != (undefined2 *)0x0) {
    pwVar16 = (wchar_t *)FUN_1400020a8();
  }
LAB_1468572b1:
  local_110 = (uint)CONCAT71((int7)((ulonglong)pwVar16 >> 8),1);
  goto LAB_146856e49;
LAB_146856fcd:
  uVar23 = uStack_a0;
  lVar21 = (longlong)(int)uStack_a0;
  uVar11 = (int)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar11);
  if (uStack_a0._4_4_ < uVar11) {
    FUN_1406f071e(&local_a8,uVar23 & 0xffffffff);
  }
  lVar21 = lVar21 * 0x20;
  puVar18 = (undefined8 *)(local_a8 + 0x10 + lVar21);
  *puVar18 = 0;
  puVar18[1] = 0;
  *(undefined8 *)(local_a8 + lVar21) = 0;
  ((undefined8 *)(local_a8 + lVar21))[1] = 0;
  local_138 = param_5;
  local_130 = (wchar_t *)0x0;
  ppwVar19 = &local_90;
  uVar15 = FUN_140c98f9a(local_a8 + lVar21,ppwVar19,local_10c,local_100);
  if ((char)uVar15 == '\0') {
    local_114 = (uint)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
    goto LAB_146856e49;
  }
  lVar21 = (longlong)((int)uStack_a0 + -1) * 0x20;
  if (1 < *(int *)(local_a8 + 0x18 + lVar21)) {
    pppuVar3 = (undefined ***)*local_128;
    puVar18 = &local_d8;
    FUN_14475cc44(local_a8 + lVar21,puVar18);
    puVar24 = &DAT_149dfb77a;
    if ((int)uStack_d0 != 0) {
      puVar24 = local_d8;
    }
    ppwVar19 = (wchar_t **)CONCAT71((int7)((ulonglong)puVar18 >> 8),3);
    local_138 = pppuVar3;
    lVar21 = FUN_146816218(param_5,ppwVar19,
                           L"FAssetBundleEntry::ImportTextItem - Asset bundle entries should all be top level objects, but found a subobject path \'%s\'. When parsing import text \'%s\'."
                           ,puVar24);
    if (local_d8 != (undefined2 *)0x0) {
      lVar21 = FUN_1400020a8();
    }
  }
  pwVar16 = local_90;
  if (*local_90 != L',') goto LAB_146857542;
  local_90 = local_90 + 1;
  goto LAB_146856fcd;
LAB_146857542:
  lVar22 = (longlong)DAT_14c9279f8;
  if (lVar22 == 0) {
    lVar22 = 0;
  }
  else {
    ppwVar19 = DAT_14c9279f0;
    lVar21 = FUN_144a54874(local_90,DAT_14c9279f0,lVar22);
    if ((int)lVar21 != 0) goto LAB_146857593;
  }
  local_114 = (uint)CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
  local_90 = pwVar16 + lVar22;
  goto LAB_146856e49;
LAB_146857593:
  pwVar16 = (wchar_t *)*local_128;
  pwVar13 = 
  L"FAssetBundleEntry::ImportTextItem - Unterminated or ill formed BundleAssets list while importing asset bundle entry. When parsing import text \'%s\'."
  ;
LAB_14685739b:
  uVar20 = (undefined7)((ulonglong)ppwVar19 >> 8);
LAB_14685735c:
  FUN_146816218(param_5,CONCAT71(uVar20,2),pwVar13,pwVar16);
LAB_146857361:
  uVar23 = 0;
LAB_146857363:
  FUN_144a8720c(local_b8);
  uVar17 = uStack_a0 & 0xffffffff;
  lVar21 = local_a8;
  goto LAB_146856d60;
}



// FUNCTION 1468575aa FUN_1468575aa body=42 status=ok
// SIG undefined FUN_1468575aa(void)

void FUN_1468575aa(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1403af196();
    return;
  }
  return;
}



// FUNCTION 1468575d6 FUN_1468575d6 body=383 status=ok
// SIG undefined FUN_1468575d6(void)

ulonglong FUN_1468575d6(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       uint param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[1] == 0) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    uVar3 = 0;
    if ((param_3 == param_1) || ((int)param_3[1] == 0)) {
      iVar2 = *(int *)(param_2 + 8) + -1;
      if (*(int *)(param_2 + 8) == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,DAT_14c9279c0,DAT_14c9279c8);
      local_68 = 0;
      lStack_60 = 0;
      local_58 = 0;
      if ((longlong)(int)param_1[1] != 0) {
        uVar3 = (ulonglong)param_5;
        lVar6 = *param_1;
        lVar5 = (longlong)(int)param_1[1] * 0x18;
        do {
          local_70 = param_6;
          local_78 = param_5;
          cVar1 = FUN_146856a6c(lVar6,param_2,&local_68,param_4);
          if (cVar1 == '\0') {
            uVar3 = 0;
            iVar4 = *(int *)(param_2 + 8) + -1;
            if (*(int *)(param_2 + 8) == 0) {
              iVar4 = 0;
            }
            if (iVar4 <= iVar2) {
              iVar2 = iVar4;
            }
            if (iVar2 < 1) {
              iVar2 = 0;
            }
            FUN_14496493a(param_2,iVar2,iVar4 - iVar2,1);
            goto LAB_1468576ec;
          }
          FUN_140002184(param_2,0x2c);
          lVar6 = lVar6 + 0x18;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
      iVar2 = *(int *)(param_2 + 8) + -1;
      if (*(int *)(param_2 + 8) == 0) {
        iVar2 = 0;
      }
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      FUN_14496493a(param_2,iVar2 + -1,1,0);
      FUN_1400020e8(param_2,DAT_14c9279d0,DAT_14c9279d8);
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_1468576ec:
      if (lStack_60 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146857756 FUN_146857756 body=478 status=ok
// SIG undefined FUN_146857756(void)

ulonglong FUN_146857756(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_R12;
  ulonglong uVar4;
  short *psVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78;
  ulonglong uStack_70;
  short *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  psVar5 = (short *)*param_2;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if (*psVar5 != 0x28) goto LAB_1468578e3;
  lVar6 = (longlong)DAT_14c9279c8;
  uVar4 = 0;
  if (lVar6 == 0) {
    lVar6 = 0;
LAB_1468577f1:
    local_68 = psVar5 + lVar6;
    local_78 = 0;
    uStack_70 = 0;
    iVar3 = 0;
    while( true ) {
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar3 + 1U);
      if ((uint)uVar4 < iVar3 + 1U) {
        FUN_141499410(&local_78,iVar3);
      }
      puVar1 = (undefined8 *)(local_78 + (longlong)iVar3 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      local_88 = param_5;
      cVar2 = FUN_146856cba(puVar1,&local_68,param_3,param_4);
      psVar5 = local_68;
      if (cVar2 == '\0') goto LAB_1468578ad;
      if (*local_68 != 0x2c) break;
      local_68 = local_68 + 1;
      uVar4 = uStack_70 >> 0x20;
      iVar3 = (int)uStack_70;
    }
    lVar6 = (longlong)DAT_14c9279d8;
    if (lVar6 == 0) {
      lVar6 = 0;
LAB_146857919:
      FUN_146857936(param_1,&local_78);
      *param_2 = (longlong)(psVar5 + lVar6);
      uVar4 = CONCAT71((int7)((ulonglong)psVar5 >> 8),1);
    }
    else {
      iVar3 = FUN_144a54874(local_68,DAT_14c9279d0,lVar6);
      if (iVar3 == 0) goto LAB_146857919;
      uVar4 = 0;
    }
LAB_1468578ad:
    FUN_1401a56c2(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') goto LAB_1468578e3;
    psVar5 = (short *)*param_2;
  }
  else {
    iVar3 = FUN_144a54874(psVar5,DAT_14c9279c0,lVar6);
    if (iVar3 == 0) goto LAB_1468577f1;
  }
  lVar6 = (longlong)DAT_14c9279e8;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    iVar3 = FUN_144a54874(psVar5,DAT_14c9279e0,lVar6);
    if (iVar3 != 0) {
      uVar4 = 0;
      goto LAB_1468578e3;
    }
  }
  *param_2 = (longlong)(psVar5 + lVar6);
  uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_1468578e3:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146857936 FUN_146857936 body=78 status=ok
// SIG undefined FUN_146857936(void)

longlong * FUN_146857936(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1401a56c2(*param_1,(int)param_1[1]);
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



// FUNCTION 146857984 FUN_146857984 body=247 status=ok
// SIG undefined FUN_146857984(void)

void FUN_146857984(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_14005eb5c(param_1,param_2);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      puVar2 = *(undefined2 **)(param_2 + 8);
      if (*(undefined2 **)(param_2 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_2,1);
        puVar2 = *(undefined2 **)(param_2 + 8);
      }
      *puVar2 = 0x2e;
      *(undefined2 **)(param_2 + 8) = puVar2 + 1;
      FUN_14005eb5c(param_1 + 0x10,param_2);
    }
  }
  else {
    local_28 = *(undefined8 *)(param_1 + 0x10);
    local_30 = *(longlong *)(param_1 + 8);
    FUN_1408866c2(&local_30,param_2);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined4 **)(param_2 + 8);
    if (*(undefined4 **)(param_2 + 0x10) <= puVar1 + 1) {
      FUN_140213274(param_2,2);
      puVar1 = *(undefined4 **)(param_2 + 8);
    }
    *puVar1 = 0x3a003a;
    *(undefined4 **)(param_2 + 8) = puVar1 + 1;
    FUN_14005eb5c(param_1 + 0x18,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146857a7c FUN_146857a7c body=152 status=ok
// SIG undefined FUN_146857a7c(void)

void FUN_146857a7c(longlong *param_1,longlong *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar2 = *param_2;
  iVar4 = (int)param_2[1];
  lVar5 = (longlong)iVar4;
  lVar9 = lVar5 * -2;
  lVar7 = lVar2 + lVar5 * 2 + 2;
  do {
    lVar8 = lVar2;
    if (lVar9 == 0) break;
    puVar1 = (ushort *)(lVar7 + -4);
    lVar8 = lVar7 + -2;
    lVar9 = lVar9 + 2;
    lVar7 = lVar8;
  } while ((0x3f < *puVar1) || ((1L << ((byte)*puVar1 & 0x3f) & 0x400400000000000U) == 0));
  iVar6 = (int)((ulonglong)(lVar8 - lVar2) >> 1);
  iVar3 = 1;
  if (1 < iVar6) {
    iVar3 = iVar6;
  }
  *param_1 = lVar2;
  *(int *)(param_1 + 1) = iVar3 + -1;
  iVar3 = iVar4 - iVar6;
  if (iVar4 <= iVar4 - iVar6) {
    iVar3 = iVar4;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  param_1[2] = (lVar2 + lVar5 * 2) - (ulonglong)(uint)(iVar4 * 2);
  *(int *)(param_1 + 3) = iVar4;
  return;
}



// FUNCTION 146857b14 FUN_146857b14 body=394 status=ok
// SIG undefined FUN_146857b14(void)

undefined8 *
FUN_146857b14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,longlong *param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_898 [40];
  undefined8 local_870;
  undefined2 *local_868;
  undefined2 *local_860;
  undefined2 *local_858;
  char local_850;
  undefined2 local_848 [1035];
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_898;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  uVar1 = param_5[1];
  param_1[4] = *param_5;
  param_1[5] = uVar1;
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_8;
  param_1[0xc] = 0;
  param_1[0xd] = 0x200000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_145739258(param_1,param_6);
  local_870 = *param_1;
  local_868 = local_848;
  local_850 = '\0';
  local_858 = &local_32;
  local_860 = local_868;
  FUN_14005eb5c(&local_870,&local_868);
  if (local_858 <= local_860 + 1) {
    FUN_140213274(&local_868,1);
  }
  *local_860 = 0x2e;
  local_860 = local_860 + 1;
  FUN_14005eb5c(param_1 + 2,&local_868);
  FUN_1406ddeb8(&DAT_14c927a10,&local_870,param_7);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_870;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  FUN_140958ed1(*param_6,(int)param_6[1]);
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_898) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146857ca0 thunk_FUN_146857ca8 body=8 status=ok
// SIG undefined thunk_FUN_146857ca8(void)

void thunk_FUN_146857ca8(void)

{
  FUN_146857ca8();
  return;
}



// FUNCTION 146857ca8 FUN_146857ca8 body=534 status=ok
// SIG undefined FUN_146857ca8(void)

undefined8 *
FUN_146857ca8(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  undefined4 local_d8;
  undefined4 uStack_d4;
  int local_d0;
  longlong local_c8;
  undefined2 *local_c0;
  int local_b8;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  if (param_2 != 0) {
    lVar1 = FUN_144b00ba4(param_2);
    local_c0 = *(undefined2 **)(lVar1 + 0x18);
    *param_1 = local_c0;
    FUN_1400021e4(&local_c0,&local_d8);
    FUN_140d2be42(&local_c0,&local_d8);
    puVar3 = local_c0;
    if (local_b8 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_c8,puVar3,1);
    param_1[1] = local_c8;
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_d4,local_d8) != 0) {
      FUN_1400020a8();
    }
    param_1[2] = *(undefined8 *)(param_2 + 0x18);
    FUN_14010318a(*(undefined8 *)(param_2 + 0x10),&local_d8,0);
    local_b8 = local_d0 + -1;
    if (local_d0 == 0) {
      local_b8 = 0;
    }
    FUN_1468fe3e4(param_1 + 4);
    if (CONCAT44(uStack_d4,local_d8) != 0) {
      FUN_1400020a8();
    }
    if ((param_3 & 1) == 0) {
      FUN_146890b74(&local_c0,param_2,param_4);
      FUN_146890bb2(local_e0,&local_c0);
      FUN_1407c5c32(param_2,local_e0,param_1);
      local_78 = 0;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      FUN_14598d4fc(&local_c0);
    }
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(lVar1 + 0x2c);
    puVar2 = (undefined8 *)FUN_146271494(lVar1);
    local_c0 = (undefined2 *)*puVar2;
    local_b8 = *(int *)(puVar2 + 1);
    FUN_1406ddeb8(&DAT_14c927a10,&local_d8);
    *(undefined4 *)(param_1 + 6) = local_d8;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146857ec0 FUN_146857ec0 body=32 status=ok
// SIG undefined FUN_146857ec0(void)

undefined8 FUN_146857ec0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1468fc08c(param_2,*param_1,param_1[2]);
  return param_2;
}



// FUNCTION 146857ee0 FUN_146857ee0 body=100 status=ok
// SIG undefined FUN_146857ee0(void)

void FUN_146857ee0(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  
  if ((*param_1 != 0) && (param_1[2] != 0)) {
    FUN_14005eb5c();
    puVar1 = *(undefined2 **)(param_2 + 8);
    if (*(undefined2 **)(param_2 + 0x10) <= puVar1 + 1) {
      FUN_140213274(param_2,1);
      puVar1 = *(undefined2 **)(param_2 + 8);
    }
    *(undefined2 **)(param_2 + 8) = puVar1 + 1;
    *puVar1 = 0x2e;
    FUN_14005eb5c(param_1 + 2,param_2);
    return;
  }
  return;
}



// FUNCTION 146857f44 FUN_146857f44 body=306 status=ok
// SIG undefined FUN_146857f44(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_146857f44(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_10e8 [32];
  undefined1 *local_10c8;
  undefined4 local_10c0;
  undefined1 *local_10b8;
  undefined4 local_10b0;
  undefined8 local_10a8;
  undefined1 *local_10a0;
  undefined1 *local_1098;
  undefined1 *local_1090;
  char local_1088;
  undefined1 local_1080 [2070];
  undefined1 auStack_86a [2];
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_10e8;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_144b00ba4();
    local_868 = local_848;
    local_850 = '\0';
    local_858 = local_32;
    local_860 = local_868;
    FUN_144750bde(param_1,lVar2,&local_868);
    local_10a0 = local_1080;
    local_1088 = '\0';
    local_1090 = auStack_86a;
    local_10a8 = *(undefined8 *)(lVar2 + 0x18);
    local_1098 = local_10a0;
    FUN_14005eb5c(&local_10a8,&local_10a0);
    local_10b8 = local_868;
    local_10b0 = (undefined4)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
    local_10c8 = local_10a0;
    local_10c0 = (undefined4)((ulonglong)((longlong)local_1098 - (longlong)local_10a0) >> 1);
    uVar1 = FUN_144a125c8();
    if (local_1088 == '\x01') {
      FUN_1400020a8(local_10a0);
    }
    if (local_850 == '\x01') {
      FUN_1400020a8(local_868);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_10e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146858078 FUN_146858078 body=343 status=ok
// SIG undefined FUN_146858078(void)

longlong FUN_146858078(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    lVar2 = 0;
  }
  else {
    local_38 = (undefined4)param_1[4];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x24);
    iStack_30 = (int)param_1[5];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x2c);
    uVar1 = FUN_144a797b2();
    lVar2 = FUN_140be8491(uVar1,&local_38,0);
    if (lVar2 == 0) {
      FUN_140ba791a(param_1 + 4,local_48);
      FUN_1468b7fce(&local_38,local_48,0);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (iStack_30 < 2) {
        lVar2 = 0;
      }
      else {
        uVar1 = CONCAT44(uStack_34,local_38);
        uVar3 = FUN_144a797b2();
        lVar2 = FUN_140277b32(uVar3,0,uVar1,0);
      }
      if (CONCAT44(uStack_34,local_38) != 0) {
        FUN_1400020a8();
      }
      if (param_2 == '\x01' && lVar2 == 0) {
        FUN_140ba791a(param_1 + 4,&local_38);
        if (iStack_30 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)CONCAT44(uStack_34,local_38);
        }
        uVar1 = FUN_144a797b2();
        local_50 = 0;
        local_60 = 0;
        local_58 = 1;
        local_68 = 0;
        lVar2 = FUN_1412ecd05(uVar1,0,puVar4,0);
        if (CONCAT44(uStack_34,local_38) != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468581d0 FUN_1468581d0 body=109 status=ok
// SIG undefined FUN_1468581d0(void)

longlong * FUN_1468581d0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (param_3 != -1) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 10));
    lVar2 = *param_1;
    lVar4 = (longlong)param_3 * 0x20;
    lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
    lVar5 = lVar2 + lVar4;
    if (lVar3 != 0) {
      lVar5 = lVar3;
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x10 + lVar4);
    *param_2 = lVar5;
    *(undefined4 *)(param_2 + 1) = uVar1;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 10));
  }
  return param_2;
}



// FUNCTION 14685823e thunk_FUN_146858244 body=5 status=ok
// SIG undefined thunk_FUN_146858244(void)

longlong thunk_FUN_146858244(void)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *plStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  uint uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined *puStack_50;
  uint uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (longlong)DAT_14c927a1c;
  uVar3 = DAT_14c927a3c + 0x1f;
  lVar5 = (longlong)DAT_14c927a58 * 4;
  if ((ulonglong)(longlong)DAT_14c927a58 < 2) {
    lVar5 = 0;
  }
  uStack_58 = 0x100000000;
  puStack_50 = &DAT_14c927a20;
  uStack_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  iVar4 = 0;
  if (DAT_14c927a38 != 0) {
    FUN_1449c0562(&uStack_58);
    iVar4 = DAT_14c927a38;
  }
  lVar5 = lVar5 + lVar1 * 0x20 + (ulonglong)(uVar3 >> 5) * 4 + 0x58;
  uStack_68 = uStack_48;
  iStack_64 = iStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  uStack_78 = uStack_58;
  puStack_70 = puStack_50;
  plStack_80 = &DAT_14c927a10;
  if ((iStack_44 != iVar4) || (puStack_50 != &DAT_14c927a20)) {
    do {
      uVar2 = (ulonglong)*(int *)(*plStack_80 + 0x14 + (longlong)iStack_64 * 0x20);
      lVar1 = uVar2 * 4;
      if (uVar2 < 3) {
        lVar1 = 0;
      }
      lVar5 = lVar5 + lVar1;
      uStack_68 = uStack_68 & ~uStack_78._4_4_;
      FUN_1449c0562(&uStack_78);
    } while (plStack_80 != &DAT_14c927a10 || (puStack_70 != &DAT_14c927a20 || iStack_64 != iVar4));
  }
  if ((uStack_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146858244 FUN_146858244 body=372 status=ok
// SIG undefined FUN_146858244(void)

longlong FUN_146858244(void)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (longlong)DAT_14c927a1c;
  uVar3 = DAT_14c927a3c + 0x1f;
  lVar5 = (longlong)DAT_14c927a58 * 4;
  if ((ulonglong)(longlong)DAT_14c927a58 < 2) {
    lVar5 = 0;
  }
  local_58 = 0x100000000;
  local_50 = &DAT_14c927a20;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  if (DAT_14c927a38 != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = DAT_14c927a38;
  }
  lVar5 = lVar5 + lVar1 * 0x20 + (ulonglong)(uVar3 >> 5) * 4 + 0x58;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = &DAT_14c927a10;
  if ((iStack_44 != iVar4) || (local_50 != &DAT_14c927a20)) {
    do {
      uVar2 = (ulonglong)*(int *)(*local_80 + 0x14 + (longlong)iStack_64 * 0x20);
      lVar1 = uVar2 * 4;
      if (uVar2 < 3) {
        lVar1 = 0;
      }
      lVar5 = lVar5 + lVar1;
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != &DAT_14c927a10 || (local_70 != &DAT_14c927a20 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468583ba FUN_1468583ba body=493 status=ok
// SIG undefined FUN_1468583ba(void)

void FUN_1468583ba(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408383eb(param_2,param_1 + 0x88);
  FUN_1402ac1b3(param_2,param_1);
  FUN_14686028c(param_2,param_1 + 0x10);
  FUN_146860344(param_2,param_1 + 0x28);
  FUN_142791dd5(param_2,param_1 + 0x90);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x98),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xb0),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146858a47(param_2,param_1 + 0xa0);
  if (((*(byte *)(param_2 + 5) & 4) != 0) && (iVar6 = *(int *)(param_1 + 0x80), iVar6 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x78);
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) goto LAB_1468584b1;
      lVar5 = lVar5 + 8;
      iVar3 = FUN_144a78538(lVar5);
    } while (-1 < iVar3);
    FUN_146862e3d(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  }
LAB_1468584b1:
  FUN_140219018(param_2,param_1 + 0x78);
  local_38 = 0;
  uStack_30 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar4 = FUN_1415380f8(*(undefined1 *)(param_1 + 0xb4));
    FUN_14020fad6(&local_38,uVar4);
    FUN_14021219d(param_2,&local_38);
  }
  else {
    FUN_14021219d(param_2);
    local_48 = local_38;
    local_40 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      local_40 = 0;
    }
    uVar2 = FUN_146874e64(&local_48,0);
    *(undefined1 *)(param_1 + 0xb4) = uVar2;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468585a8 FUN_1468585a8 body=681 status=ok
// SIG undefined FUN_1468585a8(void)

void FUN_1468585a8(longlong param_1,longlong *param_2,uint param_3)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408383eb(param_2,param_1 + 0x88);
  FUN_1402ac1b3(param_2,param_1);
  if (5 < (int)param_3) {
    FUN_14686028c(param_2,param_1 + 0x10);
    if (param_3 < 0xe) {
      if (param_3 < 9) goto LAB_1468585e9;
      if (10 < param_3) goto LAB_14685867a;
      puVar1 = (ulonglong *)param_2[1];
      puVar2 = (undefined4 *)*puVar1 + 1;
      if ((undefined4 *)puVar1[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
        }
        else {
          FUN_14572512c(param_2,&local_58);
        }
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar1);
        *puVar1 = (ulonglong)puVar2;
      }
      FUN_14682bca6(&local_48,local_58 & 0xffffffff);
      *(ulonglong *)(param_1 + 0x90) = local_48;
    }
    else {
      FUN_146860344(param_2,param_1 + 0x28);
LAB_14685867a:
      FUN_142791dd5(param_2,param_1 + 0x90);
    }
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x98),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x98) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xb0),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146858a47(param_2,param_1 + 0xa0);
    if (9 < param_3) {
      if (((*(byte *)(param_2 + 5) & 4) != 0) && (iVar7 = *(int *)(param_1 + 0x80), iVar7 != 0)) {
        lVar6 = *(longlong *)(param_1 + 0x78);
        do {
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_14685872b;
          lVar6 = lVar6 + 8;
          iVar4 = FUN_144a78538(lVar6);
        } while (-1 < iVar4);
        FUN_146862e3d(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
      }
LAB_14685872b:
      FUN_140219018(param_2,param_1 + 0x78);
      if (0x11 < (int)param_3) {
        local_48 = 0;
        uStack_40 = 0;
        if ((*(byte *)(param_2 + 5) & 1) == 0) {
          uVar5 = FUN_1415380f8(*(undefined1 *)(param_1 + 0xb4));
          FUN_14020fad6(&local_48,uVar5);
          FUN_14021219d(param_2,&local_48);
        }
        else {
          FUN_14021219d(param_2);
          local_58 = local_48;
          local_50 = (int)uStack_40 + -1;
          if ((int)uStack_40 == 0) {
            local_50 = 0;
          }
          uVar3 = FUN_146874e64(&local_58,0);
          *(undefined1 *)(param_1 + 0xb4) = uVar3;
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1468585f6;
      }
    }
  }
LAB_1468585e9:
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
LAB_1468585f6:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146858852 FUN_146858852 body=256 status=ok
// SIG undefined FUN_146858852(void)

undefined8 FUN_146858852(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  iVar3 = (int)param_2[1];
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_146863e16(&local_48);
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar5 = *param_2;
      lVar13 = 0;
      do {
        uVar10 = uStack_40;
        lVar12 = (longlong)(int)uStack_40;
        uVar11 = (int)uStack_40 + 1;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar11);
        if (uStack_40._4_4_ < uVar11) {
          FUN_146863d82(&local_48,uVar10 & 0xffffffff);
        }
        lVar1 = lVar5 + 0x10 + lVar13;
        uVar4 = *(undefined4 *)(lVar5 + 0x10 + lVar13);
        uVar6 = *(undefined4 *)(lVar1 + -0xc);
        uVar7 = *(undefined4 *)(lVar1 + -8);
        uVar8 = *(undefined4 *)(lVar1 + -4);
        puVar2 = (undefined4 *)(local_48 + lVar12 * 0x14);
        *puVar2 = *(undefined4 *)(lVar1 + -0x10);
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(undefined4 *)(local_48 + 0x10 + lVar12 * 0x14) = uVar4;
        lVar13 = lVar13 + 0x28;
      } while ((longlong)(int)lVar9 * 0x28 != lVar13);
    }
  }
  FUN_146858954(param_1,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146858954 FUN_146858954 body=243 status=ok
// SIG undefined FUN_146858954(void)

undefined8 * FUN_146858954(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_146860ad8(*param_2,(int)param_2[1]);
  iVar5 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar6 = *param_2;
    lVar1 = lVar6 + (longlong)(int)param_2[1] * 0x14;
    iVar5 = 0;
    do {
      iVar3 = FUN_1447addd0(lVar6,0x10);
      iVar5 = (iVar3 + iVar5 * 0x17) * 0x17 + *(int *)(lVar6 + 0x10);
      lVar6 = lVar6 + 0x14;
    } while (lVar6 != lVar1);
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c927ab8);
  iVar3 = FUN_1468610be(iVar5,param_2);
  if ((iVar3 == -1) ||
     (puVar4 = (undefined8 *)((longlong)iVar3 * 0x18 + DAT_14c927a68), puVar4 == (undefined8 *)0x0))
  {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c927ab8);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c927ab8);
    puVar4 = (undefined8 *)FUN_1468609a8(iVar5,param_2);
    uVar2 = *(undefined4 *)(puVar4 + 1);
    *param_1 = *puVar4;
    *(undefined4 *)(param_1 + 1) = uVar2;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c927ab8);
  }
  else {
    uVar2 = *(undefined4 *)(puVar4 + 1);
    *param_1 = *puVar4;
    *(undefined4 *)(param_1 + 1) = uVar2;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c927ab8);
  }
  return param_1;
}



// FUNCTION 146858a47 FUN_146858a47 body=422 status=ok
// SIG undefined FUN_146858a47(void)

longlong * FUN_146858a47(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    lVar6 = *param_2;
    iVar4 = (int)param_2[1];
    puVar5 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar1) {
      local_48 = iVar4;
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
      }
      else {
        FUN_14572512c(param_1,&local_48);
      }
    }
    else {
      local_48 = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar1;
    }
    if (iVar4 != 0) {
      lVar7 = 0;
      do {
        local_58 = *(undefined4 *)(lVar6 + 0x10 + lVar7);
        plVar3 = (longlong *)(lVar6 + lVar7);
        local_68 = *plVar3;
        lStack_60 = plVar3[1];
        FUN_146858c5d(param_1,&local_68);
        lVar7 = lVar7 + 0x14;
      } while ((longlong)iVar4 * 0x14 != lVar7);
    }
  }
  else {
    puVar5 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(undefined4 *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    local_68 = 0;
    lStack_60 = 0;
    FUN_146858bee(&local_68,local_34);
    if ((longlong)(int)lStack_60 != 0) {
      lVar6 = (longlong)(int)lStack_60 * 0x14;
      lVar7 = local_68;
      do {
        FUN_146858c5d(param_1,lVar7);
        lVar7 = lVar7 + 0x14;
        lVar6 = lVar6 + -0x14;
      } while (lVar6 != 0);
    }
    FUN_146858954(&local_48,&local_68);
    *(int *)param_2 = local_48;
    *(int *)((longlong)param_2 + 4) = iStack_44;
    *(int *)(param_2 + 1) = iStack_40;
    *(int *)((longlong)param_2 + 0xc) = iStack_3c;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146858bee FUN_146858bee body=110 status=ok
// SIG undefined FUN_146858bee(void)

void FUN_146858bee(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146863d82(param_1,iVar1);
    }
    FUN_146863e7d((longlong)iVar1 * 0x14 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146863e94(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146858c5d FUN_146858c5d body=104 status=ok
// SIG undefined FUN_146858c5d(void)

void FUN_146858c5d(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  plVar2 = (longlong *)FUN_1402ac1b3();
  puVar3 = (undefined4 *)(param_2 + 0x10);
  puVar1 = *(undefined4 **)plVar2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)plVar2[1])[1]) {
    *puVar3 = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146858ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x170))(plVar2,puVar3,4,*(code **)(*plVar2 + 0x170));
    return;
  }
  FUN_14572512c(plVar2,puVar3);
  return;
}



// FUNCTION 146858cc6 FUN_146858cc6 body=56 status=ok
// SIG undefined FUN_146858cc6(void)

bool FUN_146858cc6(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  uVar1 = thunk_FUN_14041e92e();
  lVar2 = FUN_144b00ba4(uVar1);
  if (*param_1 == *(longlong *)(lVar2 + 0x18)) {
    lVar2 = thunk_FUN_14041e92e();
    bVar3 = param_1[2] == *(longlong *)(lVar2 + 0x18);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 146858cfe FUN_146858cfe body=48 status=ok
// SIG undefined FUN_146858cfe(void)

bool FUN_146858cfe(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = (longlong *)FUN_1467b1752();
  if ((plVar1 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x20) != *plVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(param_1 + 0x28) == plVar1[1];
  }
  return bVar2;
}



// FUNCTION 146858d2e FUN_146858d2e body=420 status=ok
// SIG undefined FUN_146858d2e(void)

undefined8 * FUN_146858d2e(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  local_58 = (undefined4)*param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  iStack_50 = (int)param_2[1];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar3 = FUN_144aff2e5(&local_58,0x27,0);
  if (iVar3 == -1) {
    local_68 = *param_2;
    uStack_60 = param_2[1];
  }
  else {
    local_78 = 0;
    iStack_70 = 0;
    local_88 = (undefined4)*param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = (undefined4)param_2[1];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    thunk_FUN_14475e408(&local_88,&local_78,&local_68);
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    iStack_50 = iStack_70;
    uStack_4c = uStack_6c;
    local_98 = 0;
    uStack_90 = 0;
    FUN_1468fe3e4(&local_98);
    *param_1 = local_98;
    param_1[1] = uStack_90;
  }
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (int)uStack_60;
  uStack_9c = uStack_60._4_4_;
  FUN_14687265a(&local_58);
  iVar7 = iStack_50;
  lVar2 = local_68;
  iVar3 = (int)uStack_60;
  if (iStack_50 == (int)uStack_60) {
    uVar8 = CONCAT44(uStack_54,local_58);
    if ((int)uStack_60 == 0) {
      iVar3 = 0;
      goto LAB_146858e70;
    }
    iVar4 = FUN_144a54874(uVar8,local_68,(longlong)(int)uStack_60);
    if (iVar4 == 0) goto LAB_146858e70;
  }
  uVar6 = iVar7 + 1;
  uVar5 = (int)uVar6 >> 0x1f & uVar6;
  iVar7 = uVar6 - uVar5;
  iVar4 = uVar5 + 0x7fffffff;
  if (iVar3 <= iVar7) {
    iVar7 = iVar3;
  }
  iVar1 = iVar3 - iVar7;
  if (iVar4 < iVar3 - iVar7) {
    iVar1 = iVar4;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f82e2(param_1 + 4,iVar3,lVar2 + (longlong)iVar7 * 2,1);
  uVar8 = CONCAT44(uStack_54,local_58);
  iVar3 = iStack_50;
LAB_146858e70:
  FUN_1446f82e2(&local_78,iVar3,uVar8,1);
  param_1[3] = local_78;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146858ed3 FUN_146858ed3 body=442 status=ok
// SIG undefined FUN_146858ed3(void)

undefined8 * FUN_146858ed3(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = 0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  local_48 = *param_2;
  iStack_40 = (int)param_2[1];
  iVar2 = FUN_14279164b(&local_48,0x27,0);
  if (iVar2 == -1) {
    local_58 = *param_2;
    uStack_50 = param_2[1];
  }
  else {
    local_68 = 0;
    iStack_60 = 0;
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    thunk_FUN_14687249f(&local_78,&local_68,&local_58);
    local_48 = local_68;
    iStack_40 = iStack_60;
    uStack_3c = uStack_5c;
    local_88 = 0;
    uStack_80 = 0;
    FUN_1468fe5b0(&local_88);
    *param_1 = local_88;
    param_1[1] = uStack_80;
  }
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (int)uStack_50;
  uStack_8c = uStack_50._4_4_;
  FUN_1468726c4(&local_48);
  if (iStack_40 == (int)uStack_50) {
    if ((int)uStack_50 == 0) {
      iVar2 = 0;
      goto LAB_14685902e;
    }
    iVar3 = FUN_144afd3ce(local_48,local_58,(longlong)(int)uStack_50);
    iVar2 = iStack_40;
    if (iVar3 == 0) goto LAB_14685902e;
  }
  uVar4 = iStack_40 + 1;
  uVar5 = (int)uVar4 >> 0x1f & uVar4;
  iVar2 = uVar4 - uVar5;
  iVar3 = uVar5 + 0x7fffffff;
  if ((int)uStack_50 <= iVar2) {
    iVar2 = (int)uStack_50;
  }
  iVar1 = (int)uStack_50 - iVar2;
  if (iVar3 < (int)uStack_50 - iVar2) {
    iVar1 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_140d4db66(param_1 + 4,iVar3,iVar2 + local_58,1);
  iVar2 = iStack_40;
LAB_14685902e:
  FUN_140d4db66(&local_68,iVar2,local_48,1);
  param_1[3] = local_68;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685908e FUN_14685908e body=177 status=ok
// SIG undefined FUN_14685908e(void)

longlong * FUN_14685908e(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*param_1 == 0) && (param_1[4] == 0)) {
    *param_2 = param_1[3];
  }
  else {
    local_238 = local_218;
    local_220 = '\0';
    local_228 = &local_18;
    local_230 = local_238;
    FUN_140af6cd0(param_1,&local_238);
    FUN_1446f82e2(param_2,(ulonglong)((longlong)local_230 - (longlong)local_238) >> 1,local_238,1);
    if (local_220 == '\x01') {
      FUN_1400020a8(local_238);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146859140 FUN_146859140 body=105 status=ok
// SIG undefined FUN_146859140(void)

undefined8 FUN_146859140(uint *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_38 = (ulonglong)*param_1;
  local_30 = (ulonglong)param_1[1];
  local_18 = (ulonglong)param_1[3];
  local_20 = (ulonglong)param_1[2];
  FUN_140af6c10(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468591aa FUN_1468591aa body=105 status=ok
// SIG undefined FUN_1468591aa(void)

undefined8 FUN_1468591aa(uint *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_38 = (ulonglong)*param_1;
  local_30 = (ulonglong)param_1[1];
  local_18 = (ulonglong)param_1[3];
  local_20 = (ulonglong)param_1[2];
  FUN_14685908e(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146859214 FUN_146859214 body=415 status=ok
// SIG undefined FUN_146859214(void)

undefined8 * FUN_146859214(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  uint uVar4;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong *local_30 [2];
  ulonglong local_20;
  ulonglong uVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(&DAT_14c927ae8 + (ulonglong)*param_1 * 8);
  uVar4 = param_1[1] >> 3;
  uVar5 = (ulonglong)uVar4;
  switch(param_1[1] & 7) {
  case 0:
    FUN_1400b22c2(param_2,(longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + uVar5 * 4) +
                          *(longlong *)(lVar2 + 0x30));
    break;
  case 1:
    FUN_140056680(param_2,(longlong)*(int *)(*(longlong *)(lVar2 + 0x40) + uVar5 * 4) * 2 +
                          *(longlong *)(lVar2 + 0x50));
    break;
  case 2:
    local_30[0] = (longlong *)(ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x60) + uVar5 * 4);
    FUN_14029eeae(local_30,param_2);
    goto LAB_14685929f;
  case 3:
    FUN_1400021e4((ulonglong)(uVar4 << 3) + *(longlong *)(lVar2 + 0x70),param_2);
    break;
  case 4:
    FUN_146859140(uVar5 * 0x10 + *(longlong *)(lVar2 + 0x80),param_2);
    break;
  case 5:
    FUN_140af6c10(uVar5 * 0x28 + *(longlong *)(lVar2 + 0x90),param_2);
    break;
  case 6:
    if (*(int *)(*(longlong *)(lVar2 + 0xa0) + 8 + uVar5 * 0x10) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(*(longlong *)(lVar2 + 0xa0) + uVar5 * 0x10);
    }
    local_38 = 0;
    FUN_1467d22ba(local_30,puVar6,0,0);
    puVar3 = (undefined8 *)FUN_1447a1f4a(local_30);
    *param_2 = 0;
    iVar1 = *(int *)(puVar3 + 1);
    _Src = (void *)*puVar3;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
LAB_14685929f:
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  case 7:
    *param_2 = 0;
    param_2[1] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1468593b4 FUN_1468593b4 body=382 status=ok
// SIG undefined FUN_1468593b4(void)

ulonglong * FUN_1468593b4(uint *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(&DAT_14c927ae8 + (ulonglong)*param_1 * 8);
  uVar2 = (ulonglong)(param_1[1] >> 3);
  switch(param_1[1] & 7) {
  case 0:
    FUN_1446ddc76(param_2,(longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + uVar2 * 4) +
                          *(longlong *)(lVar1 + 0x30),1);
    break;
  case 1:
    FUN_1446f470e(param_2,(longlong)*(int *)(*(longlong *)(lVar1 + 0x40) + uVar2 * 4) * 2 +
                          *(longlong *)(lVar1 + 0x50),1);
    break;
  case 2:
    uVar2 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x60) + uVar2 * 4);
    goto LAB_146859433;
  case 3:
    uVar2 = *(ulonglong *)(*(longlong *)(lVar1 + 0x70) + uVar2 * 8);
LAB_146859433:
    *param_2 = uVar2;
LAB_146859436:
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  case 4:
    FUN_1468591aa(uVar2 * 0x10 + *(longlong *)(lVar1 + 0x80),param_2);
    break;
  case 5:
    FUN_14685908e(uVar2 * 0x28 + *(longlong *)(lVar1 + 0x90),param_2);
    break;
  case 6:
    if (*(int *)(*(longlong *)(lVar1 + 0xa0) + 8 + uVar2 * 0x10) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)(*(longlong *)(lVar1 + 0xa0) + uVar2 * 0x10);
    }
    local_38 = 0;
    FUN_1467d22ba(local_30,puVar5,0,0);
    puVar3 = (undefined8 *)FUN_1447a1f4a(local_30);
    iVar4 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar4 = 0;
    }
    FUN_1446f82e2(param_2,iVar4,*puVar3,1);
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    goto LAB_146859436;
  case 7:
    *param_2 = 0;
    goto LAB_146859436;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 146859534 FUN_146859534 body=49 status=ok
// SIG undefined FUN_146859534(void)

void FUN_146859534(ushort *param_1,longlong *param_2)

{
  ushort uVar1;
  
  uVar1 = param_1[1];
  *param_2 = (longlong)*(int *)(param_1 + 2) * 0xc +
             **(longlong **)(&DAT_14c927ae8 + (ulonglong)(*param_1 & 0xfffffffc) * 2);
  *(uint *)(param_2 + 1) = (uint)uVar1;
  return;
}



// FUNCTION 146859566 FUN_146859566 body=155 status=ok
// SIG undefined FUN_146859566(void)

longlong FUN_146859566(ushort *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 2) == 0) {
    if (param_1[1] != 0) {
      lVar3 = **(longlong **)(&DAT_14c927ae8 + (ulonglong)(uVar1 & 0xfffffffc) * 2) +
              (longlong)*(int *)(param_1 + 2) * 0xc + 8;
      lVar2 = (ulonglong)param_1[1] * 0xc;
      do {
        if (*(longlong *)(lVar3 + -8) == param_2) {
          return lVar3;
        }
        lVar3 = lVar3 + 0xc;
        lVar2 = lVar2 + -0xc;
      } while (lVar2 != 0);
      return 0;
    }
  }
  else if (((int)((ulonglong)param_2 >> 0x20) == 0) && (param_1[1] != 0)) {
    lVar2 = *(longlong *)
             (*(longlong *)(&DAT_14c927ae8 + (ulonglong)(uVar1 & 0xfffffffc) * 2) + 0x10) +
            (longlong)*(int *)(param_1 + 2) * 8 + 4;
    lVar3 = (ulonglong)param_1[1] << 3;
    do {
      if (*(int *)(lVar2 + -4) == (int)param_2) {
        return lVar2;
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 146859601 FUN_146859601 body=323 status=ok
// SIG undefined FUN_146859601(void)

ulonglong FUN_146859601(ulonglong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != param_2) {
    sVar4 = (short)(param_1 >> 0x10);
    if ((char)((((uint)param_1 ^ (uint)param_2) & 2) >> 1) == '\0' &&
        sVar4 == (short)(param_2 >> 0x10)) {
      plVar1 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)((uint)param_1 & 0xfffc) * 2);
      plVar2 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)((uint)param_2 & 0xfffc) * 2);
      if ((param_1 & 2) == 0) {
        if (sVar4 != 0) {
          lVar8 = ((longlong)param_2 >> 0x20) * 0xc + *plVar2;
          lVar9 = ((longlong)param_1 >> 0x20) * 0xc + *plVar1;
          uVar6 = param_1 >> 0x10 & 0xffff;
          lVar7 = 8;
          do {
            if ((*(longlong *)(lVar9 + -8 + lVar7) != *(longlong *)(lVar8 + -8 + lVar7)) ||
               (cVar3 = FUN_1427b359c(*(undefined4 *)(lVar9 + lVar7),*(undefined4 *)(lVar8 + lVar7),
                                      plVar1,plVar2), cVar3 == '\0')) goto LAB_14685973d;
            lVar7 = lVar7 + 0xc;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else if (sVar4 != 0) {
        lVar7 = plVar1[2] + ((longlong)param_1 >> 0x20) * 8;
        lVar8 = plVar2[2] + ((longlong)param_2 >> 0x20) * 8;
        uVar6 = 0;
        do {
          if ((*(int *)(lVar7 + uVar6 * 8) != *(int *)(lVar8 + uVar6 * 8)) ||
             (cVar3 = FUN_1427b359c(*(undefined4 *)(lVar7 + 4 + uVar6 * 8),
                                    *(undefined4 *)(lVar8 + 4 + uVar6 * 8),plVar1,plVar2),
             cVar3 == '\0')) goto LAB_14685973d;
          uVar6 = uVar6 + 1;
        } while ((param_1 >> 0x10 & 0xffff) != uVar6);
      }
    }
    else {
LAB_14685973d:
      uVar5 = 0;
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 146859744 FUN_146859744 body=24 status=ok
// SIG undefined FUN_146859744(void)

ulonglong FUN_146859744(uint *param_1)

{
  return (ulonglong)param_1[1] |
         (ulonglong)*(ushort *)((longlong)param_1 + 2) << 0x20 | (ulonglong)*param_1 << 0x3f;
}



// FUNCTION 14685975c FUN_14685975c body=1868 status=ok
// SIG undefined FUN_14685975c(void)

byte * FUN_14685975c(longlong param_1,byte *param_2,byte *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  byte **ppbVar14;
  uint uVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  byte *pbVar22;
  byte bVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong *puVar30;
  byte *pbVar31;
  float fVar32;
  undefined1 auStack_3b8 [32];
  byte **local_398;
  ulonglong local_390;
  longlong *local_388;
  longlong local_380;
  byte *local_378;
  ulonglong *local_370;
  byte *local_368;
  undefined8 uStack_360;
  byte *local_358;
  undefined8 local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_380 = param_1;
  if ((*param_3 & 1) == 0) {
    lVar29 = *(longlong *)param_3;
    if ((lVar29 == 0) || (*(int *)(lVar29 + 8) == 0)) {
LAB_146859888:
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      goto LAB_146859890;
    }
    local_350._0_4_ = 0;
    uVar28 = *(uint *)(lVar29 + 8);
    if (uVar28 != 0) goto LAB_1468597e0;
    uVar26 = 0x310;
    bVar23 = 1;
    local_358 = param_3;
  }
  else {
    uVar28 = (uint)*(ushort *)(param_3 + 2);
    if (*(ushort *)(param_3 + 2) == 0) goto LAB_146859888;
LAB_1468597e0:
    local_350._0_4_ = 0;
    bVar23 = 1;
    local_358 = param_3;
    do {
      FUN_144a5de44(&local_358);
      bVar23 = local_58 >> 0x20 == 0 & bVar23;
      local_350._0_4_ = (uint)local_350 + 1;
    } while ((uint)local_350 != uVar28);
    uVar26 = (ulonglong)bVar23 << 4 | 0x300;
  }
  local_388 = (longlong *)(uVar26 + local_380);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = bVar23;
  if ((*param_3 & 1) == 0) {
    lVar29 = *(longlong *)param_3;
    if (lVar29 != 0) {
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(lVar29 + 8);
      *(int *)(param_2 + 4) = (int)local_388[1];
      local_368 = (byte *)0x0;
      uStack_360 = 0;
      uVar28 = *(uint *)(lVar29 + 8);
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar28);
      }
      goto LAB_1468598dd;
    }
    *(int *)(param_2 + 4) = (int)local_388[1];
    local_368 = (byte *)0x0;
    uStack_360 = 0;
  }
  else {
    uVar28 = (uint)*(ushort *)(param_3 + 2);
    *(ushort *)(param_2 + 2) = *(ushort *)(param_3 + 2);
    *(int *)(param_2 + 4) = (int)local_388[1];
LAB_1468598dd:
    uStack_360 = 0;
    local_368 = (byte *)0x0;
    if (uVar28 != 0) {
      FUN_146863f42(&local_368);
    }
  }
  local_350 = (byte *)((ulonglong)local_350._4_4_ << 0x20);
  local_378 = param_2;
  if ((*param_3 & 1) == 0) {
    local_358 = param_3;
    if (*(longlong *)param_3 != 0) {
      uVar28 = *(uint *)(*(longlong *)param_3 + 8);
      goto LAB_14685990f;
    }
  }
  else {
    uVar28 = (uint)*(ushort *)(param_3 + 2);
LAB_14685990f:
    local_358 = param_3;
    if (uVar28 != 0) {
      do {
        FUN_144a5de44(&local_358);
        lVar29 = (longlong)(int)uStack_360;
        uVar8 = (int)uStack_360 + 1;
        uStack_360 = CONCAT44(uStack_360._4_4_,uVar8);
        if (uStack_360._4_4_ < uVar8) {
          FUN_146863f98(&local_368);
        }
        pbVar31 = local_368 + lVar29 * 0x10;
        *(undefined4 *)pbVar31 = (undefined4)local_58;
        *(undefined4 *)(pbVar31 + 4) = local_58._4_4_;
        *(undefined4 *)(pbVar31 + 8) = (undefined4)uStack_50;
        *(undefined4 *)(pbVar31 + 0xc) = uStack_50._4_4_;
        uVar8 = (uint)local_350 + 1;
        local_350 = (byte *)CONCAT44(local_350._4_4_,uVar8);
      } while (uVar8 != uVar28);
    }
  }
  pbVar31 = local_368;
  iVar9 = (int)uStack_360;
  lVar29 = (longlong)(int)uStack_360;
  if (1 < lVar29) {
    memset(local_348,0,0x2f0);
    local_358 = pbVar31;
    local_350 = pbVar31 + lVar29 * 0x10 + -0x10;
    fVar32 = logf((float)iVar9);
    local_348[0] = (int)(longlong)(fVar32 + fVar32);
    ppbVar14 = &local_358;
    do {
      puVar18 = (ulonglong *)*ppbVar14;
      puVar20 = (ulonglong *)ppbVar14[1];
      iVar9 = *(int *)(ppbVar14 + 2);
      iVar10 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar18) >> 4);
      uVar28 = iVar10 + 1;
      puVar24 = puVar20;
      puVar30 = puVar18;
      puVar19 = puVar18;
      local_398 = ppbVar14;
      if (iVar9 != 0) {
LAB_1468599fe:
        if (8 < (int)uVar28) {
          local_390 = CONCAT44(local_390._4_4_,iVar9);
          uVar26 = puVar19[(ulonglong)(uVar28 >> 1) * 2];
          uVar3 = (puVar19 + (ulonglong)(uVar28 >> 1) * 2)[1];
          uVar4 = puVar19[1];
          puVar19[(ulonglong)(uVar28 >> 1) * 2] = *puVar19;
          (puVar19 + (ulonglong)(uVar28 >> 1) * 2)[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar26;
          local_58._4_4_ = (undefined4)(uVar26 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
          *(undefined4 *)puVar19 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar19 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_50._4_4_;
          puVar27 = puVar24 + 2;
          puVar30 = puVar19;
          local_370 = puVar18;
          local_58 = uVar26;
          uStack_50 = uVar3;
          do {
            puVar18 = puVar30 + 2;
            puVar25 = puVar30 + 2;
            do {
              puVar30 = puVar25;
              puVar12 = puVar18;
              if (puVar24 < puVar30) break;
              iVar9 = FUN_144a78538(puVar19,puVar30);
              puVar18 = puVar12 + 2;
              puVar25 = puVar30 + 2;
            } while (-1 < iVar9);
            puVar18 = puVar27 + -4;
            do {
              puVar25 = puVar27;
              puVar17 = puVar18;
              puVar27 = puVar25 + -2;
              if (puVar27 <= puVar19) break;
              iVar9 = FUN_144a78538(puVar27,puVar19);
              puVar18 = puVar17 + -2;
            } while (-1 < iVar9);
            if (puVar27 < puVar30) goto LAB_146859ac8;
            uVar26 = *puVar30;
            uVar3 = puVar30[1];
            uVar4 = puVar25[-1];
            *puVar30 = *puVar27;
            puVar30[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar26;
            local_58._4_4_ = (undefined4)(uVar26 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
            *(undefined4 *)puVar27 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar25 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar25 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar25 + -4) = uStack_50._4_4_;
            local_58 = uVar26;
            uStack_50 = uVar3;
          } while( true );
        }
        for (; ppbVar14 = local_398, puVar20 = puVar19, puVar18 = puVar19, puVar19 < puVar24;
            puVar24 = puVar24 + -2) {
          while (puVar30 = puVar20, puVar18 = puVar18 + 2, puVar18 <= puVar24) {
            iVar9 = FUN_144a78538(puVar30,puVar18);
            puVar20 = puVar18;
            if (-1 < iVar9) {
              puVar20 = puVar30;
            }
          }
          local_58 = *puVar30;
          uStack_50 = puVar30[1];
          uVar3 = local_58;
          uVar4 = uStack_50;
          uVar26 = puVar24[1];
          *puVar30 = *puVar24;
          puVar30[1] = uVar26;
          local_58._4_4_ = (undefined4)(local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
          *(undefined4 *)puVar24 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
        goto LAB_146859dd0;
      }
LAB_146859b96:
      ppbVar14 = local_398;
      if (uVar28 != 0) {
        uVar8 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_390 = (ulonglong)uVar8;
          uVar26 = local_390;
          while (uVar5 = uVar8 * 2 + 1, (int)uVar5 < (int)uVar28) {
            uVar15 = uVar8 * 2 + 2;
            uVar8 = uVar5;
            if (((int)uVar15 < (int)uVar28) &&
               (iVar9 = FUN_144a78538(puVar30 + (longlong)(int)uVar15 * 2,
                                      puVar30 + (longlong)(int)uVar5 * 2), -1 < iVar9)) {
              uVar8 = uVar15;
            }
            puVar18 = puVar30 + (longlong)(int)uVar26 * 2;
            puVar24 = puVar30 + (longlong)(int)uVar8 * 2;
            iVar9 = FUN_144a78538(puVar18,puVar24);
            if (-1 < iVar9) break;
            local_58 = *puVar18;
            uStack_50 = puVar18[1];
            uVar3 = local_58;
            uVar4 = uStack_50;
            uVar26 = puVar24[1];
            *puVar18 = *puVar24;
            puVar18[1] = uVar26;
            local_58._4_4_ = (undefined4)(local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
            *(undefined4 *)puVar24 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
            uVar26 = (ulonglong)uVar8;
            local_58 = uVar3;
            uStack_50 = uVar4;
          }
          uVar8 = (int)local_390 - 1;
        } while ((int)local_390 != 0);
        ppbVar14 = local_398;
        if (1 < (int)uVar28) {
          uVar21 = (ulonglong)uVar28 - 1;
          local_58 = *puVar30;
          uStack_50 = puVar30[1];
          uVar3 = local_58;
          uVar4 = uStack_50;
          uVar26 = (puVar30 + uVar21 * 2)[1];
          *puVar30 = puVar30[uVar21 * 2];
          puVar30[1] = uVar26;
          local_58._4_4_ = (undefined4)(local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
          puVar24 = puVar30 + uVar21 * 2;
          *(undefined4 *)puVar24 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
          if (uVar28 != 2) {
            do {
              iVar9 = 0;
              iVar11 = 1;
              iVar10 = 0;
              do {
                iVar9 = iVar9 + 2;
                iVar16 = iVar11;
                if (((longlong)iVar9 < (longlong)uVar21) &&
                   (iVar11 = FUN_144a78538(puVar30 + (longlong)iVar9 * 2,
                                           puVar30 + (longlong)iVar11 * 2), -1 < iVar11)) {
                  iVar16 = iVar9;
                }
                puVar18 = puVar30 + (longlong)iVar10 * 2;
                puVar24 = puVar30 + (longlong)iVar16 * 2;
                iVar9 = FUN_144a78538(puVar18,puVar24);
                if (-1 < iVar9) break;
                uVar26 = *puVar18;
                uVar3 = puVar18[1];
                uVar4 = puVar24[1];
                *puVar18 = *puVar24;
                puVar18[1] = uVar4;
                local_58._0_4_ = (undefined4)uVar26;
                local_58._4_4_ = (undefined4)(uVar26 >> 0x20);
                uStack_50._0_4_ = (undefined4)uVar3;
                uStack_50._4_4_ = (undefined4)(uVar3 >> 0x20);
                *(undefined4 *)puVar24 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
                iVar9 = iVar16 * 2;
                iVar11 = iVar16 * 2 + 1;
                local_58 = uVar26;
                uStack_50 = uVar3;
                iVar10 = iVar16;
              } while ((longlong)iVar11 < (longlong)uVar21);
              uVar26 = uVar21 - 1;
              local_58 = *puVar30;
              uStack_50 = puVar30[1];
              uVar4 = local_58;
              uVar7 = uStack_50;
              uVar3 = (puVar30 + uVar26 * 2)[1];
              *puVar30 = puVar30[uVar26 * 2];
              puVar30[1] = uVar3;
              local_58._4_4_ = (undefined4)(local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
              puVar24 = puVar30 + uVar26 * 2;
              *(undefined4 *)puVar24 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
              bVar2 = 2 < uVar21;
              ppbVar14 = local_398;
              uVar21 = uVar26;
              local_58 = uVar4;
              uStack_50 = uVar7;
            } while (bVar2);
          }
        }
      }
LAB_146859dd0:
      ppbVar14 = ppbVar14 + -3;
    } while (&local_358 <= ppbVar14);
  }
  if ((int)uStack_360 != 0) {
    pbVar22 = local_368 + (longlong)(int)uStack_360 * 0x10;
    plVar13 = local_388;
    pbVar31 = local_368;
    do {
      uVar1 = *(undefined8 *)pbVar31;
      FUN_146859eaa(local_380,&local_358,uVar1,*(undefined8 *)(pbVar31 + 8));
      uVar6 = local_358._0_4_;
      iVar9 = (int)plVar13[1];
      *(uint *)(plVar13 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)plVar13 + 0xc) < iVar9 + 1U) {
        FUN_14686401e(plVar13,iVar9);
        plVar13 = local_388;
      }
      lVar29 = *plVar13;
      *(undefined8 *)(lVar29 + (longlong)iVar9 * 0xc) = uVar1;
      *(undefined4 *)(lVar29 + 8 + (longlong)iVar9 * 0xc) = uVar6;
      pbVar31 = pbVar31 + 0x10;
    } while (pbVar31 != pbVar22);
  }
  param_2 = local_378;
  if (local_368 != (byte *)0x0) {
    FUN_1400020a8(local_368);
  }
LAB_146859890:
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_146859ac8:
  local_58 = *puVar19;
  uStack_50 = puVar19[1];
  uVar3 = local_58;
  uVar4 = uStack_50;
  uVar26 = puVar25[-1];
  *puVar19 = *puVar27;
  puVar19[1] = uVar26;
  local_58._4_4_ = (undefined4)(local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
  *(undefined4 *)puVar27 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar25 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar25 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar25 + -4) = uStack_50._4_4_;
  iVar9 = (int)local_390 + -1;
  puVar25 = puVar25 + -4;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if ((longlong)puVar17 - (longlong)local_370 < (longlong)puVar20 - (longlong)puVar12) {
    ppbVar14 = local_398;
    if (puVar30 < puVar24) {
      *local_398 = (byte *)puVar30;
      local_398[1] = (byte *)puVar24;
      *(int *)(local_398 + 2) = iVar9;
      ppbVar14 = local_398 + 3;
    }
    puVar30 = puVar19;
    if (puVar27 <= puVar19 + 2) goto LAB_146859dd0;
  }
  else {
    if (puVar19 + 2 < puVar27) {
      *local_398 = (byte *)puVar19;
      local_398[1] = (byte *)puVar25;
      *(int *)(local_398 + 2) = iVar9;
      local_398 = local_398 + 3;
    }
    ppbVar14 = local_398;
    puVar17 = puVar24;
    puVar19 = puVar12;
    puVar25 = puVar24;
    if (puVar24 <= puVar30) goto LAB_146859dd0;
  }
  local_398 = ppbVar14;
  iVar10 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar19) >> 4);
  uVar28 = iVar10 + 1;
  puVar18 = puVar19;
  puVar20 = puVar17;
  puVar24 = puVar25;
  puVar19 = puVar30;
  if (iVar9 == 0) goto LAB_146859b96;
  goto LAB_1468599fe;
}



// FUNCTION 146859eaa FUN_146859eaa body=1031 status=ok
// SIG undefined FUN_146859eaa(void)

int * FUN_146859eaa(longlong *param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [40];
  uint local_80 [2];
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  int iStack_6c;
  int local_68;
  uint uStack_64;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = param_4;
  cVar1 = FUN_14685b054();
  if (cVar1 == '\0') {
    uVar3 = (uint)param_3;
    iVar4 = (int)((ulonglong)param_3 >> 0x20);
    uVar8 = (uint)((ulonglong)param_3 >> 0x10);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      iVar4 + (uVar3 << 0x10 | uVar3 & 0xffff) + (uVar8 << 0x13 | uVar8 & 0xffff) +
                      ((uVar3 & 0xffff) >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x10) == param_3) {
            FUN_14685b1a4(&local_38,&local_70);
            uVar8 = (uint)(CONCAT44(iStack_6c,local_70) >> 0x10);
            if (iStack_6c == 0) {
              local_2c = local_70;
              local_80[0] = (int)param_1[0x2f] - *(int *)((longlong)param_1 + 0x1a4);
              piVar5 = (int *)FUN_14686526a(param_1 + 0x2e,
                                            (local_70 << 0x10 | local_70 & 0xffff) +
                                            ((local_70 & 0xffff) >> 4) +
                                            (uVar8 << 0x13 | uVar8 & 0xffff));
              iVar7 = *piVar5;
              iVar4 = 2;
            }
            else {
              local_80[0] = (int)param_1[0x39] - *(int *)((longlong)param_1 + 500);
              uVar8 = (local_70 << 0x10 | local_70 & 0xffff) + ((local_70 & 0xffff) >> 4) +
                      (uVar8 << 0x13 | uVar8 & 0xffff);
              piVar5 = (int *)FUN_14686581c(param_1 + 0x38,
                                            (uVar8 >> 2) + uVar8 * 0x40 + iStack_6c + 0x9e3779b9 ^
                                            uVar8,&local_70);
              iVar7 = *piVar5;
              iVar4 = 3;
            }
            goto LAB_14685a26a;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x10 + *param_1 + 8);
        } while (iVar7 != -1);
      }
    }
    if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
      plVar6 = param_1 + 0x11;
      if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[0x12];
      }
      iVar4 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)param_1[0x13] - 1U &
                      iVar4 + (uVar3 << 0x10 | uVar3 & 0xffff) + (uVar8 << 0x13 | uVar8 & 0xffff) +
                      ((uVar3 & 0xffff) >> 4)) * 4);
      if (iVar4 != -1) {
LAB_14685a0c0:
        if (*(longlong *)(param_1[10] + (longlong)iVar4 * 0x10) != param_3)
        goto code_r0x00014685a0d1;
        FUN_1407fba0e(&local_38,&local_70);
        if ((local_58 | (ulonglong)uStack_64 << 0x20 | local_50) >> 0x20 == 0) {
          local_80[0] = local_70;
          local_74 = (undefined4)local_50;
          local_78 = (undefined4)local_58;
          local_2c = (int)param_1[0x43] - *(int *)((longlong)param_1 + 0x244);
          uVar2 = FUN_1468662d6(local_80);
          piVar5 = (int *)FUN_146865cfa(param_1 + 0x42,uVar2,local_80,&local_2c);
          iVar7 = *piVar5;
          iVar4 = 4;
        }
        else {
          local_80[0] = (int)param_1[0x4d] - *(int *)((longlong)param_1 + 0x294);
          uVar2 = FUN_146866966(&local_70);
          piVar5 = (int *)FUN_1468663b8(param_1 + 0x4c,uVar2,&local_70,local_80);
          iVar7 = *piVar5;
          iVar4 = 5;
        }
LAB_14685a26a:
        iVar4 = iVar4 + iVar7 * 8;
        goto LAB_146859f3f;
      }
    }
LAB_14685a02c:
    FUN_14685b22e();
    iVar4 = local_68 + -1;
    bVar10 = iVar4 != 0;
    if (local_68 == 0) {
      iVar4 = 0;
    }
    if (local_68 != 0 && bVar10) {
      lVar9 = 0;
      do {
        if (0x7f < *(ushort *)(CONCAT44(iStack_6c,local_70) + lVar9 * 2)) {
          iVar4 = FUN_14685af9e(param_1 + 0x21,&local_70);
          iVar4 = iVar4 * 8 + 1;
          goto LAB_14685a062;
        }
        lVar9 = lVar9 + 1;
      } while (iVar4 != lVar9);
    }
    iVar4 = FUN_14685af9e(param_1 + 0x14,&local_70);
    iVar4 = iVar4 << 3;
LAB_14685a062:
    *param_2 = iVar4;
    if (CONCAT44(iStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = (int)param_1[0x57] - *(int *)((longlong)param_1 + 0x2e4);
    iVar4 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iVar4 = 0;
    }
    uVar2 = FUN_1447053be(local_48,iVar4 * 2);
    piVar5 = (int *)FUN_146864c76(param_1 + 0x56,uVar2,&local_48,&local_70);
    iVar4 = *piVar5 * 8 + 6;
LAB_146859f3f:
    *param_2 = iVar4;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x00014685a0d1:
  iVar4 = *(int *)((longlong)iVar4 * 0x10 + param_1[10] + 8);
  if (iVar4 == -1) goto LAB_14685a02c;
  goto LAB_14685a0c0;
}



// FUNCTION 14685a2b2 FUN_14685a2b2 body=339 status=ok
// SIG undefined FUN_14685a2b2(void)

longlong * FUN_14685a2b2(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  ulonglong uVar8;
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
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1410fe350(0,param_2,1);
  plVar1 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar7 = (int)param_3[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_3;
  if ((iStack_44 != iVar7) || (uStack_50 != plVar1)) {
    do {
      puVar2 = (undefined8 *)(*local_80 + (longlong)iStack_64 * 0x20);
      iVar3 = *(int *)(*local_80 + 8 + (longlong)iStack_64 * 0x20);
      if (iVar3 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*puVar2;
      }
      iVar4 = *(int *)(*param_4 + (longlong)*(int *)(puVar2 + 2) * 4);
      lVar5 = *param_1;
      uVar8 = 0;
      do {
        *(undefined1 *)(iVar4 + lVar5 + uVar8) = *(undefined1 *)(puVar6 + uVar8);
        uVar8 = uVar8 + 1;
      } while (iVar3 + (uint)(iVar3 == 0) != uVar8);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_3 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar7));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14685a406 FUN_14685a406 body=344 status=ok
// SIG undefined FUN_14685a406(void)

longlong * FUN_14685a406(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  ulonglong uVar8;
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
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1409ee492(0,param_2,1);
  plVar1 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar7 = (int)param_3[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_3;
  if ((iStack_44 != iVar7) || (uStack_50 != plVar1)) {
    do {
      puVar2 = (undefined8 *)(*local_80 + (longlong)iStack_64 * 0x20);
      iVar3 = *(int *)(*local_80 + 8 + (longlong)iStack_64 * 0x20);
      if (iVar3 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*puVar2;
      }
      iVar4 = *(int *)(*param_4 + (longlong)*(int *)(puVar2 + 2) * 4);
      lVar5 = *param_1;
      uVar8 = 0;
      do {
        *(undefined2 *)((longlong)iVar4 * 2 + lVar5 + uVar8 * 2) = puVar6[uVar8];
        uVar8 = uVar8 + 1;
      } while (iVar3 + (uint)(iVar3 == 0) != uVar8);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_3 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar7));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14685a560 FUN_14685a560 body=1006 status=ok
// SIG undefined FUN_14685a560(void)

void * FUN_14685a560(longlong param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 800) = 1;
  memset(param_2,0,0xb0);
  FUN_14685a950(param_2,param_1 + 0x300);
  local_58 = 0;
  uStack_50 = 0;
  iVar2 = *(int *)(param_1 + 0x318);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1468614e2(&local_58);
    if ((longlong)*(int *)(param_1 + 0x318) != 0) {
      puVar8 = *(undefined4 **)(param_1 + 0x310);
      puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x318) * 3;
      do {
        uVar5 = uStack_50;
        uVar3 = *puVar8;
        uVar4 = puVar8[2];
        lVar7 = (longlong)(int)uStack_50;
        uVar6 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
        if (uStack_50._4_4_ < uVar6) {
          FUN_146861538(&local_58,uVar5 & 0xffffffff);
        }
        *(ulonglong *)(local_58 + lVar7 * 8) = CONCAT44(uVar4,uVar3);
        puVar8 = puVar8 + 3;
      } while (puVar8 != puVar1);
    }
  }
  if ((longlong *)((longlong)param_2 + 0x10) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)((longlong)param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)((longlong)param_2 + 0x10) = local_58;
    local_58 = 0;
    *(int *)((longlong)param_2 + 0x18) = (int)uStack_50;
    *(uint *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  }
  FUN_1447bdc4c((longlong)param_2 + 0x20,param_1 + 0xf8);
  FUN_1447bdc4c((longlong)param_2 + 0x40,param_1 + 0x160);
  FUN_14685a9a9(&local_58,param_1 + 0x170);
  if ((longlong *)((longlong)param_2 + 0x60) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)((longlong)param_2 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)((longlong)param_2 + 0x60) = local_58;
    local_58 = 0;
    *(int *)((longlong)param_2 + 0x68) = (int)uStack_50;
    *(uint *)((longlong)param_2 + 0x6c) = uStack_50._4_4_;
  }
  FUN_14685aac0(&local_58,param_1 + 0x1c0);
  if ((longlong *)((longlong)param_2 + 0x70) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)((longlong)param_2 + 0x70) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)((longlong)param_2 + 0x70) = local_58;
    local_58 = 0;
    *(int *)((longlong)param_2 + 0x78) = (int)uStack_50;
    *(uint *)((longlong)param_2 + 0x7c) = uStack_50._4_4_;
  }
  FUN_14685abdb(&local_58,param_1 + 0x210);
  if ((longlong *)((longlong)param_2 + 0x80) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)((longlong)param_2 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)((longlong)param_2 + 0x80) = local_58;
    local_58 = 0;
    *(int *)((longlong)param_2 + 0x88) = (int)uStack_50;
    *(uint *)((longlong)param_2 + 0x8c) = uStack_50._4_4_;
  }
  FUN_14685acff(&local_58,param_1 + 0x260);
  if ((longlong *)((longlong)param_2 + 0x90) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)((longlong)param_2 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)((longlong)param_2 + 0x90) = local_58;
    local_58 = 0;
    *(int *)((longlong)param_2 + 0x98) = (int)uStack_50;
    *(uint *)((longlong)param_2 + 0x9c) = uStack_50._4_4_;
  }
  FUN_14685ae31(&local_58,param_1 + 0x2b0);
  FUN_14685af4e((longlong)param_2 + 0xa0,&local_58);
  FUN_1468640b2(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14685a2b2(&local_58,*(undefined4 *)(param_1 + 0xa0),param_1 + 0xa8,param_1 + 0xf8);
  if ((longlong *)((longlong)param_2 + 0x30) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)((longlong)param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)((longlong)param_2 + 0x30) = local_58;
    local_58 = 0;
    *(int *)((longlong)param_2 + 0x38) = (int)uStack_50;
    *(uint *)((longlong)param_2 + 0x3c) = uStack_50._4_4_;
  }
  FUN_14685a406(&local_58,*(undefined4 *)(param_1 + 0x108),param_1 + 0x110,param_1 + 0x160);
  if ((longlong *)((longlong)param_2 + 0x50) == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)((longlong)param_2 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)((longlong)param_2 + 0x50) = local_58;
    *(int *)((longlong)param_2 + 0x58) = (int)uStack_50;
    *(uint *)((longlong)param_2 + 0x5c) = uStack_50._4_4_;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14685a950 FUN_14685a950 body=89 status=ok
// SIG undefined FUN_14685a950(void)

undefined8 * FUN_14685a950(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1468640de(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14685a9a9 FUN_14685a9a9 body=278 status=ok
// SIG undefined FUN_14685a9a9(void)

longlong * FUN_14685a9a9(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146864152(0,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      *(undefined4 *)(*param_1 + (longlong)*(int *)(*local_78 + 4 + (longlong)iStack_5c * 0x10) * 4)
           = *(undefined4 *)(*local_78 + (longlong)iStack_5c * 0x10);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685aac0 FUN_14685aac0 body=282 status=ok
// SIG undefined FUN_14685aac0(void)

longlong * FUN_14685aac0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1406089a0(0,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34),1);
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      *(undefined8 *)(*param_1 + (longlong)*(int *)(*local_78 + 8 + (longlong)iStack_5c * 0x14) * 8)
           = *(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x14);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685abdb FUN_14685abdb body=291 status=ok
// SIG undefined FUN_14685abdb(void)

longlong * FUN_14685abdb(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1468641d4(0,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar7 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar7) || (uStack_48 != plVar1)) {
    do {
      puVar2 = (undefined4 *)(*local_78 + (longlong)iStack_5c * 0x1c);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)
               (*param_1 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x1c) * 0x10)
      ;
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar7));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685acff FUN_14685acff body=305 status=ok
// SIG undefined FUN_14685acff(void)

longlong * FUN_14685acff(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146864378(0,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar15 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar15) || (uStack_48 != plVar1)) {
    do {
      lVar4 = *local_78;
      lVar13 = (longlong)iStack_5c * 0x34;
      lVar14 = (longlong)*(int *)(lVar4 + 0x28 + lVar13);
      lVar5 = *param_1;
      *(undefined8 *)(lVar5 + 0x20 + lVar14 * 0x28) = *(undefined8 *)(lVar4 + 0x20 + lVar13);
      puVar2 = (undefined4 *)(lVar4 + lVar13);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar13);
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar14 * 0x28);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      puVar2 = (undefined4 *)(lVar5 + lVar14 * 0x28);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar15));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685ae31 FUN_14685ae31 body=284 status=ok
// SIG undefined FUN_14685ae31(void)

longlong * FUN_14685ae31(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146864540(0,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      FUN_144a787a6((longlong)*(int *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20) * 0x10 +
                    *param_1,*local_78 + (longlong)iStack_5c * 0x20);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685af4e FUN_14685af4e body=80 status=ok
// SIG undefined FUN_14685af4e(void)

longlong * FUN_14685af4e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1468640b2(*param_1,(int)param_1[1]);
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



// FUNCTION 14685af9e FUN_14685af9e body=180 status=ok
// SIG undefined FUN_14685af9e(void)

undefined4 FUN_14685af9e(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_2 + 1);
  local_34 = param_1[4] - param_1[0xf];
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar4 = FUN_1447053be(*param_2,iVar2 * 2);
  puVar5 = (undefined4 *)FUN_14686474a(param_1 + 2,uVar4,param_2,&local_34);
  uVar4 = *puVar5;
  iVar2 = param_1[0x18];
  if (iVar2 < param_1[4] - param_1[0xf]) {
    param_1[0x18] = iVar2 + 1U;
    if ((uint)param_1[0x19] < iVar2 + 1U) {
      FUN_1447808da(param_1 + 0x16,iVar2);
    }
    iVar3 = *param_1;
    *(int *)(*(longlong *)(param_1 + 0x16) + (longlong)iVar2 * 4) = iVar3;
    *param_1 = iVar1 + (uint)(iVar1 == 0) + iVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b054 FUN_14685b054 body=334 status=ok
// SIG undefined FUN_14685b054(void)

undefined8 FUN_14685b054(undefined8 *param_1,void **param_2)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (undefined8 *)*param_1;
  if ((longlong)param_1 < 0) {
    if (((uint)param_1 & 7) != 6) goto LAB_14685b14f;
    FUN_144a787a6(param_2,(ulonglong)((uint)param_1 >> 3) * 0x10 +
                          *(longlong *)
                           (*(longlong *)
                             (&DAT_14c927ae8 + ((ulonglong)param_1 >> 0x1d & 0x3fffffff8)) + 0xa0));
  }
  else {
    if (*(int *)(param_1 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    cVar1 = FUN_1467d2392(puVar3);
    if (cVar1 == '\0') {
LAB_14685b14f:
      uVar2 = 0;
      goto LAB_14685b151;
    }
    local_38 = (void *)0x0;
    local_30 = *(int *)(param_1 + 1);
    lVar4 = (longlong)local_30;
    _Src = (void *)*param_1;
    if (lVar4 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar4 * 2);
    }
    if (&local_38 == param_2) {
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      *(int *)(param_2 + 1) = local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
    }
  }
  uVar2 = 1;
LAB_14685b151:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b1a4 FUN_14685b1a4 body=134 status=ok
// SIG undefined FUN_14685b1a4(void)

undefined8 FUN_14685b1a4(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_38 [32];
  uint local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)*param_1;
  if ((longlong)puVar1 < 0) {
    local_18 = (uint)((ulonglong)puVar1 >> 0x20) & 0x7fffffff;
    local_14 = SUB84(puVar1,0);
    FUN_1468593b4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  iVar2 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1446f82e2(param_2,iVar2,*puVar1,1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b22e FUN_14685b22e body=362 status=ok
// SIG undefined FUN_14685b22e(void)

undefined8 * FUN_14685b22e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  uint local_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = (undefined8 *)*param_1;
  if ((longlong)param_1 < 0) {
    local_40 = (uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff;
    uStack_3c = SUB84(param_1,0);
    FUN_146859214(&local_40,param_2);
  }
  else {
    if (*(int *)(param_1 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_1;
    }
    cVar3 = FUN_1467d2392(puVar6);
    if (cVar3 != '\0') {
      FUN_144a5dc74(&local_40);
      if (*(int *)(param_1 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_1;
      }
      local_48 = 0;
      lVar4 = FUN_140c97480(puVar6,&local_40,0,0);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_1447a1f4a(&local_40);
        *param_2 = 0;
        iVar1 = *(int *)(puVar5 + 1);
        pvVar2 = (void *)*puVar5;
        *(int *)(param_2 + 1) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_2,iVar1,0);
          memcpy((void *)*param_2,pvVar2,(longlong)iVar1 * 2);
        }
      }
      if ((longlong *)CONCAT44(uStack_3c,local_40) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_3c,local_40) + 0x10))();
      }
      if (lVar4 != 0) goto LAB_14685b33d;
    }
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 1);
    pvVar2 = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,pvVar2,(longlong)iVar1 * 2);
    }
  }
LAB_14685b33d:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b399 FUN_14685b399 body=91 status=ok
// SIG undefined FUN_14685b399(void)

void FUN_14685b399(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  uStack_18 = 0;
  local_28 = param_2;
  FUN_14685b3f6(&local_28,param_1);
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b3f6 FUN_14685b3f6 body=147 status=ok
// SIG undefined FUN_14685b3f6(void)

void FUN_14685b3f6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146866adc(param_1,0x12345679);
  local_28 = param_1;
  FUN_146866b4e(param_2,&local_28);
  local_38 = *(undefined8 *)(param_2 + 0xa0);
  local_30 = *(undefined4 *)(param_2 + 0xa8);
  FUN_146866be2(param_1);
  local_28 = param_1;
  FUN_146866ca8(param_2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146866adc(param_1,0x87654321);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b48a FUN_14685b48a body=133 status=ok
// SIG undefined FUN_14685b48a(void)

ulonglong * FUN_14685b48a(ulonglong *param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    if (uVar2 == 0) {
      uVar2 = 0;
      goto LAB_14685b4d9;
    }
    piVar1 = (int *)(uVar2 + 0x10);
  }
  else {
    piVar1 = (int *)(*(longlong *)(&DAT_14c927ae8 + (ulonglong)((uint)uVar2 & 0xfffc) * 2) + 0xc0);
  }
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
LAB_14685b4d9:
  local_18 = *param_1;
  *param_1 = uVar2;
  FUN_1400b4210();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b510 FUN_14685b510 body=148 status=ok
// SIG undefined FUN_14685b510(void)

void FUN_14685b510(longlong param_1,ushort *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*param_2 & 1) == 0) {
    plVar1 = *(longlong **)param_2;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (longlong)*(int *)((longlong)plVar1 + 0xc) * 0x18 + 0x18;
      if ((longlong)(int)plVar1[1] != 0) {
        lVar3 = 0;
        do {
          lVar2 = lVar2 + (longlong)*(int *)(*plVar1 + 0x14 + lVar3) * 2;
          lVar3 = lVar3 + 0x18;
        } while ((longlong)(int)plVar1[1] * 0x18 != lVar3);
      }
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + lVar2;
    }
  }
  else {
    local_c = (uint)(*param_2 >> 2);
    FUN_140db0a94(param_1,local_10,&local_c,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b5a6 FUN_14685b5a6 body=398 status=ok
// SIG undefined FUN_14685b5a6(void)

longlong FUN_14685b5a6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
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
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar3 = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_1;
  if ((iStack_54 == iVar3) && (uStack_60 == plVar1)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)
               (&DAT_14c927ae8 + (ulonglong)*(uint *)(*local_90 + (longlong)iStack_74 * 0xc) * 8);
      lVar4 = lVar4 + (longlong)*(int *)(lVar2 + 0x98) * 0x28 +
              ((longlong)*(int *)(lVar2 + 0xa8) + (longlong)*(int *)(lVar2 + 0x88)) * 0x10 +
              (longlong)*(int *)(lVar2 + 0x38) +
              ((longlong)*(int *)(lVar2 + 0x48) +
              (longlong)*(int *)(lVar2 + 0x28) + (longlong)*(int *)(lVar2 + 0x68)) * 4 +
              (longlong)*(int *)(lVar2 + 0x58) * 2 + (longlong)*(int *)(lVar2 + 8) * 0xc +
              ((longlong)*(int *)(lVar2 + 0x18) + (longlong)*(int *)(lVar2 + 0x78)) * 8 + 200;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar3));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b736 FUN_14685b736 body=191 status=ok
// SIG undefined FUN_14685b736(void)

undefined8 * FUN_14685b736(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_888 [40];
  undefined4 local_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined1 *local_850;
  undefined1 *local_848;
  undefined1 *local_840;
  char local_838;
  undefined1 local_830 [2070];
  undefined1 local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_888;
  local_850 = local_830;
  local_838 = '\0';
  local_840 = local_1a;
  local_848 = local_850;
  FUN_146857ee0(param_1,&local_850);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_860,local_850,(ulonglong)((longlong)local_848 - (longlong)local_850) >> 1);
  if ((undefined8 *)&local_860 == param_2) {
    if (CONCAT44(uStack_85c,local_860) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_860;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_85c;
    *(undefined4 *)(param_2 + 1) = uStack_858;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_854;
  }
  if (local_838 == '\x01') {
    FUN_1400020a8(local_850);
  }
  if ((local_18 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685b7f6 FUN_14685b7f6 body=291 status=ok
// SIG undefined FUN_14685b7f6(void)

void FUN_14685b7f6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_38 = *(longlong *)(param_1 + 0x48);
    local_30 = 0xffffffff;
    local_2c = 0x100;
    local_2a = 0;
    local_40 = param_1;
    FUN_14170fb14(&local_40);
    if (local_38 != 0) {
      do {
        lVar1 = local_38;
        lVar2 = FUN_140010bca();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          local_58 = lVar1;
          local_50 = *(longlong *)(lVar1 + 0x48);
          local_48 = 0xffffffff;
          local_44 = 0x100;
          local_42 = 0;
          while (FUN_14170fb14(&local_58), local_50 != 0) {
            FUN_14076b71e(param_2,local_50,1);
            local_50 = *(longlong *)(local_50 + 0x28);
          }
        }
        FUN_14076b71e(param_2,lVar1,1);
        local_38 = *(longlong *)(local_38 + 0x28);
        FUN_14170fb14(&local_40);
      } while (local_38 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685b91a FUN_14685b91a body=279 status=ok
// SIG undefined FUN_14685b91a(void)

ulonglong FUN_14685b91a(void)

{
  byte bVar1;
  undefined8 unaff_RBX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947b8c) {
    FUN_144b3d300(&DAT_14c947b8c);
    if (DAT_14c947b8c == -1) {
      DAT_14c947b88 = 0;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bDeferDependencyLoads",&DAT_14c947b88,&DAT_14c872ce8);
      _Init_thread_footer(&DAT_14c947b8c);
    }
  }
  bVar1 = DAT_14c947b88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947b94) {
    FUN_144b3d300(&DAT_14c947b94);
    if (DAT_14c947b94 == -1) {
      DAT_14c947b90 = 0;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bForceDisableCookedDependencyDeferring",&DAT_14c947b90
                    ,&DAT_14c872ce8);
      _Init_thread_footer(&DAT_14c947b94);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1 & (DAT_14c947b90 ^ 1)) & 0xffffffff;
}



// FUNCTION 14685ba32 FUN_14685ba32 body=144 status=ok
// SIG undefined FUN_14685ba32(void)

ulonglong FUN_14685ba32(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947b9c) {
    FUN_144b3d300(&DAT_14c947b9c);
    if (DAT_14c947b9c == -1) {
      DAT_14c947b98 = 0;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bForceDisableDeferredExportCreation",&DAT_14c947b98,
                    &DAT_14c872ce8);
      _Init_thread_footer(&DAT_14c947b9c);
    }
  }
  uVar1 = FUN_14685b91a();
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),~(byte)uVar1 | DAT_14c947b98) & 0xffffffffffffff01;
}



// FUNCTION 14685bac2 FUN_14685bac2 body=124 status=ok
// SIG undefined FUN_14685bac2(void)

undefined8 FUN_14685bac2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_144a817a2();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (lVar2 = lVar1 + 0x30,
     *(longlong *)
      (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
     != lVar2)) {
    lVar1 = FUN_14001206a();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (lVar2 = lVar1 + 0x30,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
       != lVar2)) {
      lVar1 = FUN_144a88810();
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
        return 0;
      }
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30);
    }
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 14685bb3e FUN_14685bb3e body=833 status=ok
// SIG undefined FUN_14685bb3e(void)

ulonglong FUN_14685bb3e(longlong param_1,longlong param_2,longlong **param_3)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  lVar9 = DAT_14c947b80;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  uVar1 = *(uint *)(param_2 + 8);
  if (*(char *)(lVar9 + uVar5) == '\x01') {
    if ((uVar1 >> 0x15 & 1) == 0) {
      FUN_144757f48(param_2,0x400);
      FUN_1427ff290(param_1 + 0x240,param_2);
    }
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar7 = 0;
      do {
        lVar9 = FUN_1468b773e(param_1,iVar7);
        if (lVar9 != 0) {
          FUN_1468b769a(param_1,iVar7,1);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x20));
    }
    FUN_14685be80(param_3);
    FUN_144757f48(param_2,0x20000);
    FUN_14472eae2(param_2,0x20000);
    FUN_14472eae2(param_2,0x3000);
    uStack_50 = &local_78;
    local_58 = (longlong *)&LAB_14686877c;
    uVar6 = FUN_144a773aa(&local_58,&DAT_14c75ebf0);
    FUN_14685bfa0(uVar6,param_2);
    uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  }
  else {
    FUN_144757f48(param_2,0x20000);
    if ((param_3 != (longlong **)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *(longlong ***)(param_2 + 0x110) = param_3;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    FUN_14086ecde(param_2,&local_78,1,0);
    if (0 < (int)uStack_70) {
      lVar9 = 0;
      do {
        FUN_1427ff290(param_1 + 0x240,*(undefined8 *)(local_78 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_70);
    }
    if ((*(uint *)(param_2 + 8) >> 0x11 & 1) != 0) {
      FUN_1427ff290(param_1 + 0x240,param_2);
      FUN_140010366(param_2,1);
      FUN_1427ff290(param_1 + 0x240,param_3);
      uStack_50 = (longlong *)&local_59;
      param_3 = &local_58;
      local_58 = (longlong *)&LAB_14686877c;
      uVar6 = FUN_144a773aa(param_3,&DAT_14c75ebf0);
      FUN_14685bfa0(uVar6,param_2);
      local_58 = (longlong *)0x0;
      uStack_50 = (longlong *)0x0;
      lVar9 = *(longlong *)(param_2 + 0x40);
      if (lVar9 != 0) {
        param_3 = &local_58;
        do {
          uVar5 = (ulonglong)uStack_50 & 0xffffffff;
          if ((*(byte *)(lVar9 + 0xd6) & 4) == 0) goto LAB_14685be28;
          uVar4 = (int)uStack_50 + 1;
          uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar4);
          if (uStack_50._4_4_ < uVar4) {
            FUN_140a0062e(param_3,uVar5);
          }
          plVar2 = local_58;
          memmove(local_58 + 1,local_58,uVar5 << 3);
          *plVar2 = lVar9;
          lVar9 = *(longlong *)(lVar9 + 0x40);
        } while (lVar9 != 0);
LAB_14685be28:
        plVar2 = local_58;
        if ((int)uStack_50 != 0) {
          lVar8 = (longlong)(int)uStack_50;
          lVar9 = 0;
          do {
            param_3 = *(longlong ***)((longlong)plVar2 + lVar9);
            if ((param_3 != (longlong **)0x0) && ((*(uint *)(param_3 + 1) >> 0x11 & 1) != 0)) {
              FUN_14685c12e(param_3);
              FUN_14685c17c(param_3);
              FUN_14685bb3e(param_1,param_3,param_3[0x22]);
            }
            lVar9 = lVar9 + 8;
          } while (lVar8 * 8 != lVar9);
        }
      }
      FUN_14685c12e(param_2);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),(*(uint *)(param_2 + 8) >> 0x11 & 1) == 0);
    if ((uVar1 >> 0x11 & 1) == 0) {
      FUN_14472eae2(param_2,0x20000);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685be80 FUN_14685be80 body=286 status=ok
// SIG undefined FUN_14685be80(void)

void FUN_14685be80(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 1;
  local_d0 = 1;
  local_d8 = 1;
  FUN_14689c554(local_a8,&local_b8,0,0);
  FUN_14689c76a(local_a8,param_1,0,0);
  lVar2 = local_b8;
  lVar5 = (longlong)(int)uStack_b0;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar6);
      if ((*(uint *)(lVar1 + 8) >> 10 & 1) != 0) {
        lVar3 = FUN_144a797b2();
        lVar4 = *(longlong *)(lVar1 + 0x10);
        if ((((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30)) && ((*(byte *)(lVar4 + 0xd6) & 4) == 0)) &&
           (lVar4 = FUN_144b00dc8(lVar1), lVar4 != 0)) {
          FUN_1427ff290(lVar4 + 0x240,lVar1);
          FUN_14685be80(lVar1);
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  FUN_14689c70e(local_a8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685bfa0 FUN_14685bfa0 body=397 status=ok
// SIG undefined FUN_14685bfa0(void)

void FUN_14685bfa0(longlong param_1,ulonglong param_2)

{
  void *pvVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar7 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xa0);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x60);
      do {
        lVar8 = lVar7 + (longlong)iVar6 * 0x20;
        if (*(ulonglong *)(lVar7 + (longlong)iVar6 * 0x20) == param_2) {
          if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
            local_48 = (void *)0x0;
            local_40 = *(int *)(lVar8 + 0x10);
            lVar7 = (longlong)local_40;
            pvVar1 = *(void **)(lVar8 + 8);
            if (lVar7 == 0) {
              local_3c = 0;
            }
            else {
              FUN_1468615be(&local_48,local_40);
              memcpy(local_48,pvVar1,lVar7 << 3);
              pvVar1 = local_48;
              lVar7 = (longlong)local_40;
              if (lVar7 != 0) {
                lVar8 = 0;
                do {
                  lVar2 = *(longlong *)((longlong)pvVar1 + lVar8);
                  cVar3 = FUN_1468bdec6(lVar2 + 0x28);
                  if ((cVar3 == '\0') && (lVar5 = FUN_144b00dc8(lVar2), lVar5 != 0)) {
                    FUN_14685e038(lVar5,lVar2);
                  }
                  lVar8 = lVar8 + 8;
                } while (lVar7 * 8 != lVar8);
              }
            }
            FUN_146861618((longlong *)(param_1 + 0x60),param_2);
            if (local_48 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar8 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685c12e FUN_14685c12e body=77 status=ok
// SIG undefined FUN_14685c12e(void)

void FUN_14685c12e(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x15 & 1) == 0)) {
    FUN_144757f48(param_1,0x400);
    lVar1 = FUN_144b00dc8(param_1);
    if (lVar1 != 0) {
      FUN_1427ff290(lVar1 + 0x240,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14685c17c FUN_14685c17c body=246 status=ok
// SIG undefined FUN_14685c17c(void)

void FUN_14685c17c(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 1;
  local_d0 = 1;
  local_d8 = 1;
  FUN_14689c554(local_a0,&local_b8,param_1,0);
  FUN_14689c76a(local_a0,param_1,0,0);
  if (0 < (int)uStack_b0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(local_b8 + lVar3 * 8);
      if ((*(uint *)(lVar1 + 8) >> 0x15 & 1) == 0) {
        FUN_144757f48(lVar1,0x400);
        lVar2 = FUN_144b00dc8(lVar1);
        if (lVar2 != 0) {
          FUN_1427ff290(lVar2 + 0x240,lVar1);
          FUN_14685c17c(lVar1);
        }
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < (int)uStack_b0);
  }
  FUN_14689c70e(local_a0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685c274 FUN_14685c274 body=871 status=ok
// SIG undefined FUN_14685c274(void)

ulonglong FUN_14685c274(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong unaff_R15;
  undefined7 uVar9;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_14685b91a();
  if (cVar1 == '\0') goto LAB_14685c305;
  lVar3 = *(longlong *)(param_1 + 8) + (longlong)param_2 * 0x38;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28 + (longlong)param_2 * 0x38);
  uVar9 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if (lVar7 == 0) {
    if (((*(byte *)(param_1 + 0x2d2) & 0x10) != 0) &&
       (cVar1 = FUN_1468b78f4(param_1,param_2), cVar1 == '\0')) {
      if (DAT_14c872bf0 == '\0') {
        lVar7 = FUN_1427b214b(param_2,(longlong *)(param_1 + 8));
        *(longlong *)(lVar3 + 0x28) = lVar7;
        uVar8 = CONCAT71(uVar9,1);
        if (lVar7 != 0) goto LAB_14685c308;
      }
      FUN_1400021e4(lVar3 + 0xc,&local_50);
      puVar6 = local_50;
      if (local_48 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      uVar4 = FUN_144a7a812();
      lVar7 = FUN_140277b32(uVar4,0,puVar6,0);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      unaff_R15 = 0;
      if (lVar7 != 0) {
        FUN_1400021e4(lVar3 + 0x14,&local_50);
        puVar6 = local_50;
        if (local_48 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        uVar4 = FUN_144a797b2();
        unaff_R15 = FUN_140277b32(uVar4,lVar7,puVar6,0);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (unaff_R15 != 0) {
          if ((*(byte *)(unaff_R15 + 0xd6) & 2) == 0) {
            lVar7 = FUN_140010bca();
            if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(unaff_R15 + 0x38))) &&
                (*(longlong *)
                  (*(longlong *)(unaff_R15 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                 lVar7 + 0x30)) && ((int)*(uint *)(lVar3 + 8) < 0)) {
              uVar5 = ~*(uint *)(lVar3 + 8);
              cVar1 = FUN_14685c274(param_1,uVar5);
              if ((cVar1 != '\0') &&
                 (lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28 + (ulonglong)uVar5 * 0x38)
                 , lVar7 != 0)) {
                lVar2 = FUN_144a797b2();
                if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
                  FUN_1400021e4(lVar3,&local_50);
                  puVar6 = local_50;
                  if (local_48 == 0) {
                    puVar6 = &DAT_149dfb77a;
                  }
                  uVar4 = FUN_1427b2a13(lVar7,unaff_R15,puVar6,param_2);
                  goto LAB_14685c5a9;
                }
              }
            }
          }
          else {
            FUN_1400021e4(lVar3,&local_50);
            puVar6 = local_50;
            if (local_48 == 0) {
              puVar6 = &DAT_149dfb77a;
            }
            uVar4 = FUN_1427b26d3(*(undefined8 *)(param_1 + 0xa0),unaff_R15,puVar6,param_2);
LAB_14685c5a9:
            *(undefined8 *)(lVar3 + 0x28) = uVar4;
            if (local_50 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
    uVar8 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),*(longlong *)(lVar3 + 0x28) != 0);
    goto LAB_14685c308;
  }
  lVar2 = FUN_144a817a2();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar7 = *(longlong *)(lVar3 + 0x28);
    if (lVar7 != 0) {
      lVar3 = FUN_14001206a();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar7 = lVar7 + 0xe0;
        goto LAB_14685c35e;
      }
    }
  }
  else {
    lVar7 = lVar7 + 0x250;
LAB_14685c35e:
    if (lVar7 != 0) {
      uVar8 = CONCAT71(uVar9,1);
      if ((*(byte *)(param_1 + 0x2d2) & 0x10) != 0) goto LAB_14685c308;
      if ((longlong)*(int *)(param_1 + 0x400) == -1) {
LAB_14685c3bc:
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)
                *(int *)(*(longlong *)(param_1 + 0x18) + 0xc +
                        (longlong)*(int *)(param_1 + 0x400) * 0x68);
        if ((lVar3 < 1) ||
           (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -0x28 + lVar3 * 0x68), lVar3 == 0)
           ) goto LAB_14685c3bc;
        lVar2 = FUN_144a797b2();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_14685c3bc;
      }
      uVar8 = 0;
      FUN_14685c5dc(param_1,lVar7,lVar3,0);
      goto LAB_14685c308;
    }
  }
LAB_14685c305:
  uVar8 = 0;
LAB_14685c308:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14685c5dc FUN_14685c5dc body=556 status=ok
// SIG undefined FUN_14685c5dc(void)

void FUN_14685c5dc(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  uint local_6c;
  longlong *local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = *(uint *)(param_1 + 0x2d0);
  *(uint *)(param_1 + 0x2d0) = local_6c & 0xffefffff;
  plVar1 = (longlong *)(param_1 + 0x408);
  iVar2 = *(int *)(param_1 + 0x410);
  *(uint *)(param_1 + 0x410) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x414) < iVar2 + 1U) {
    FUN_14686916a(plVar1,iVar2);
  }
  *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = param_2;
  lVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  local_50 = 0;
  local_68 = plVar1;
  if (*(uint *)(param_2 + 1) == 0) {
    local_50 = param_4;
    bVar3 = FUN_144a846f6(param_4 & 0xffffffff);
    if (((bVar3 & param_4 != 0) == 0) &&
       (puVar5 = (ulonglong *)FUN_14685d480(param_1 + 0x418,param_2), puVar5 != (ulonglong *)0x0)) {
      local_50 = *puVar5;
    }
    FUN_1400021e4(&local_50,&local_60);
    puVar10 = local_60;
    if (local_58 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    uVar6 = FUN_1446f8646();
    local_80 = 0;
    local_90 = 0;
    local_88 = 1;
    local_98 = 0x4002;
    lVar7 = FUN_1412ecd05(uVar6,0,puVar10,0);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar8 = (longlong)(int)~*(uint *)(param_2 + 1) * 0x38;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28 + lVar8);
    if (lVar7 == 0 || lVar7 == lVar4) {
      *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar8 + 0x28) = 0;
      lVar7 = FUN_142800b8a(param_1);
    }
  }
  if ((param_3 != 0) && (iVar2 = *(int *)(param_3 + 0x1e0), (longlong)iVar2 != 0)) {
    lVar8 = *(longlong *)(param_3 + 0x1d8);
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar8 + lVar9) == lVar4) {
        if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar7);
        }
        *(longlong *)(lVar8 + lVar9) = lVar7;
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar9);
  }
  (**(code **)(*param_2 + 0x10))(param_2,lVar7);
  if (0 < *(int *)(param_1 + 0x410)) {
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + -1;
    FUN_146868da6(local_68);
  }
  FUN_14686901c(param_1 + 0x418,local_50);
  *(uint *)(param_1 + 0x2d0) = local_6c;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685c80a FUN_14685c80a body=1172 status=ok
// SIG undefined FUN_14685c80a(void)

undefined8 FUN_14685c80a(undefined2 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  undefined1 local_59;
  undefined2 *local_58;
  undefined2 **ppuStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = (longlong)param_2 * 0x68 + *(longlong *)(param_1 + 0xc);
  cVar3 = FUN_14685b91a();
  if ((((cVar3 == '\0') || (cVar3 = FUN_14685ba32(), cVar3 != '\0')) ||
      (*(longlong *)(lVar9 + 0x40) != 0)) ||
     (plVar5 = (longlong *)FUN_1468b773e(param_1,param_2), plVar5 == (longlong *)0x0)) {
LAB_14685c845:
    uVar7 = 0;
  }
  else {
    if (param_3 == 0) {
LAB_14685c8ba:
      if ((*(byte *)((longlong)plVar5 + 0xd4) & 0x80) != 0) goto LAB_14685c845;
      uVar11 = *(uint *)(lVar9 + 0x1c);
      if ((uVar11 & 0x10) != 0) {
        local_58 = (undefined2 *)0x0;
        ppuStack_50 = (undefined2 **)0x0;
        (**(code **)(*plVar5 + 0x3e0))(plVar5,&local_58);
        puVar8 = local_58;
        lVar6 = (longlong)(int)ppuStack_50;
        if (lVar6 == 0) {
          bVar10 = 0;
        }
        else {
          local_80 = CONCAT44(local_80._4_4_,uVar11);
          lVar12 = 0;
          bVar10 = 0;
          do {
            bVar4 = FUN_14685bac2(*(undefined8 *)((longlong)puVar8 + lVar12));
            bVar10 = bVar10 | bVar4;
            lVar12 = lVar12 + 8;
          } while (lVar6 * 8 != lVar12);
          bVar10 = (*(byte *)(param_1 + 0x169) & 0x10) >> 4 & bVar10;
          if (bVar10 != 0) {
            *(int *)(param_1 + 0x200) = param_2;
          }
          uVar11 = (uint)local_80;
        }
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8(local_58);
        }
        if (bVar10 == 0) goto LAB_14685c845;
      }
      lVar6 = FUN_144a817a2();
      if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) {
        lVar6 = FUN_144b00dc8(plVar5);
        if (((lVar6 == 0) || ((*(int *)(lVar6 + 0x400) == -1 && (*(char *)(lVar6 + 0x3fc) == '\0')))
            ) && ((lVar6 = plVar5[0x22], lVar6 == 0 ||
                  (((*(uint *)(lVar6 + 8) >> 0x15 & 1) != 0 ||
                   ((*(uint *)(lVar6 + 8) >> 0x13 & 1) == 0)))))) goto LAB_14685c845;
      }
      else {
        FUN_144b00dc8(plVar5);
      }
      uVar1 = *(uint *)(param_1 + 0x168);
      if (((uVar1 >> 0x14 & 1) == 0) && (*(int *)(param_1 + 0x200) == -1)) {
        if (((uVar1 & 8) != 0) || (*(char *)(param_1 + 0x1fe) == '\0')) {
LAB_14685cc3c:
          ppuStack_50 = &local_68;
          local_58 = (undefined2 *)&LAB_14686877c;
          local_78 = param_1;
          local_70 = param_2;
          uVar7 = FUN_144a773aa(&local_58,&DAT_14c75ebf0);
          FUN_14686179c(uVar7,param_1,param_2);
          FUN_14685cd64(param_1,plVar5);
          FUN_14685cdd8(&local_78);
          goto LAB_14685c845;
        }
      }
      else if ((uVar1 & 8) != 0) goto LAB_14685cc3c;
      local_80 = *(undefined8 *)(param_1 + 0x50);
      uVar7 = FUN_144a88810();
      local_58 = (undefined2 *)plVar5[3];
      FUN_1400021e4(&local_58,&local_78);
      puVar8 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar8 = local_78;
      }
      FUN_140002266(&local_58,L"PLACEHOLDER-INST_of_%s",puVar8);
      puVar8 = &DAT_149dfb77a;
      if ((int)ppuStack_50 != 0) {
        puVar8 = local_58;
      }
      FUN_1446f470e(&local_68,puVar8,1);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar2 = local_80;
      local_88 = 0;
      FUN_140af9fb2(&local_58,local_80,uVar7,local_68);
      local_68 = local_58;
      lVar6 = FUN_14685cc9f(uVar2,uVar7);
      *(int *)(lVar6 + 0x30) = param_2 + 1;
      FUN_1400f84b8(lVar6,param_1,param_2,0);
      ppuStack_50 = (undefined2 **)&local_59;
      local_58 = (undefined2 *)&LAB_14686877c;
      uVar7 = FUN_144a773aa(&local_58,&DAT_14c75ebf0);
      FUN_14685ce40(uVar7,plVar5,lVar6);
      *(longlong *)(lVar9 + 0x40) = lVar6;
      puVar8 = local_78;
      if ((uVar11 & 0x10) != 0) {
        if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar6);
        }
        plVar5[0x22] = lVar6;
        puVar8 = local_78;
      }
    }
    else {
      lVar6 = FUN_144a88810();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_14685c8ba;
      local_78 = (undefined2 *)plVar5[3];
      FUN_1400021e4(&local_78,&local_58);
      puVar8 = &DAT_149dfb77a;
      if ((int)ppuStack_50 != 0) {
        puVar8 = local_58;
      }
      FUN_140002266(&local_78,L"PLACEHOLDER-INST_of_%s",puVar8);
      puVar8 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar8 = local_78;
      }
      FUN_1446f470e(&local_68,puVar8,1);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar7 = FUN_144a88810();
      local_88 = 0;
      FUN_140af9fb2(&local_78,param_3,uVar7,local_68);
      local_68 = local_78;
      lVar6 = FUN_14685cc9f(param_3,uVar7);
      FUN_1400f84b8(lVar6,param_1,param_2,0);
      *(int *)(lVar6 + 0x30) = param_2 + 1;
      *(longlong *)(lVar9 + 0x40) = lVar6;
      FUN_1468bde6e(param_3 + 0x28,lVar6);
      puVar8 = local_58;
    }
    if (puVar8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14685cc9f FUN_14685cc9f body=196 status=ok
// SIG undefined FUN_14685cc9f(void)

undefined8 FUN_14685cc9f(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0x41;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685cd64 FUN_14685cd64 body=116 status=ok
// SIG undefined FUN_14685cd64(void)

void FUN_14685cd64(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_144b00dc8(param_2);
  if (lVar2 != 0) {
    FUN_1427ff290(param_1 + 0x240,param_2);
    cVar1 = FUN_14685d33e(lVar2);
    if (cVar1 != '\0') {
      FUN_14685cf2e(lVar2,param_2);
    }
    if ((*(int *)(lVar2 + 0x400) != -1) || (*(char *)(lVar2 + 0x3fc) == '\x01')) {
      FUN_14685d69c(lVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14685cdd8 FUN_14685cdd8 body=102 status=ok
// SIG undefined FUN_14685cdd8(void)

void FUN_14685cdd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_20 = &LAB_14686877c;
  uVar1 = FUN_144a773aa(&local_20,&DAT_14c75ebf0);
  FUN_146861e8c(uVar1,*param_1,*(undefined4 *)(param_1 + 1));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685ce40 FUN_14685ce40 body=146 status=ok
// SIG undefined FUN_14685ce40(void)

void FUN_14685ce40(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_28 = param_2;
  plVar3 = (longlong *)FUN_14686208e(param_1 + 0x60,uVar2 >> 0x10 ^ uVar2);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1468625c0(plVar3,iVar1);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685ced4 FUN_14685ced4 body=89 status=ok
// SIG undefined FUN_14685ced4(void)

ulonglong FUN_14685ced4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_14283ebea(param_2);
  if (0 < (longlong)*(int *)(param_1 + 0x20)) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1c);
    uVar3 = 0;
    do {
      if ((((*pbVar2 & 0x10) != 0) && (0 < *(int *)(pbVar2 + -0x10))) &&
         (*(int *)(pbVar2 + -0x10) + -1 == iVar1)) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 0x68;
    } while ((longlong)*(int *)(param_1 + 0x20) != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 14685cf2e FUN_14685cf2e body=1039 status=ok
// SIG undefined FUN_14685cf2e(void)

void FUN_14685cf2e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_94 = *(uint *)(param_1 + 0x2d0);
  *(uint *)(param_1 + 0x2d0) = local_94 & 0xffefffff;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  local_88 = param_2;
  FUN_146862646(&DAT_14c947c58,local_64,&local_88,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  if (param_2 != 0) {
    lVar5 = FUN_144a797b2();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (lVar9 = param_2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
       == lVar5 + 0x30)) goto LAB_14685cfd2;
  }
  lVar9 = 0;
LAB_14685cfd2:
  uVar4 = *(uint *)(param_1 + 0x410);
  iVar10 = 0;
  local_90 = param_2;
  if (0 < (int)uVar4) {
    iVar10 = 0;
    if (*(int *)(**(longlong **)(param_1 + 0x408) + 8) == 0) {
      iVar10 = *(int *)(param_1 + 0x10);
    }
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x408) + -8 + (ulonglong)uVar4 * 8);
      *(uint *)(param_1 + 0x410) = uVar4 - 1;
      FUN_146868da6((undefined8 *)(param_1 + 0x408));
      FUN_14685c5dc(param_1,uVar1,lVar9,0);
      uVar4 = *(uint *)(param_1 + 0x410);
    } while (0 < (int)uVar4);
  }
  if (iVar10 < *(int *)(param_1 + 0x10)) {
    lVar5 = (longlong)iVar10;
    lVar11 = lVar5 * 0x38 + 0x28;
    do {
      cVar3 = FUN_14685d33e(param_1);
      if (cVar3 == '\0') break;
      lVar8 = *(longlong *)(param_1 + 8);
      lVar6 = *(longlong *)(lVar8 + 8 + lVar11);
      if ((lVar6 == 0) &&
         ((*(longlong *)(lVar8 + lVar11) == 0 || (lVar6 = FUN_144b00dc8(), lVar6 == 0)))) {
        lVar6 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if ((*(longlong *)(lVar6 + 0xa0) != 0) &&
           ((*(uint *)(*(longlong *)(lVar6 + 0xa0) + 8) & 0x8080000) == 0)) {
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          FUN_14283dc80(0,lVar6 + 0x318,*(uint *)(param_1 + 0x2d0) & 0x2082,param_1);
        }
      }
      lVar12 = *(longlong *)(lVar8 + lVar11);
      if (lVar12 != 0) {
        lVar7 = FUN_144a817a2();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
          lVar12 = *(longlong *)(lVar8 + lVar11);
          if (lVar12 != 0) {
            lVar7 = FUN_14001206a();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
              lVar8 = FUN_14570ab3e(lVar12);
              if (lVar8 != 0) {
                lVar6 = FUN_144a817a2();
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                  FUN_14685c5dc(param_1,lVar8 + 0x250,lVar9,0);
                }
              }
              lVar12 = lVar12 + 0xe0;
              goto LAB_14685d114;
            }
            lVar8 = *(longlong *)(lVar8 + lVar11);
            if (lVar8 != 0) {
              lVar12 = FUN_1446f4bba();
              if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                 (bVar2 && *(longlong *)
                            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                            (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
                FUN_14685cf2e(lVar6,lVar8);
              }
            }
          }
        }
        else {
          lVar12 = lVar12 + 0x250;
LAB_14685d114:
          FUN_14685c5dc(param_1,lVar12,lVar9,0);
        }
      }
      lVar5 = lVar5 + 1;
      lVar11 = lVar11 + 0x38;
    } while (lVar5 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x44c) < *(int *)(param_1 + 0x420)) {
    do {
      local_88 = 0x100000000;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_78._4_4_ = 0;
      local_80 = param_1 + 0x428;
      if (*(int *)(param_1 + 0x440) != 0) {
        FUN_1449c0562(&local_88);
      }
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x418) + (longlong)local_78._4_4_ * 0x18);
      FUN_14685c5dc(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x418) + 8 + (longlong)local_78._4_4_ * 0x18),
                    lVar9,uVar1);
      FUN_14686901c(param_1 + 0x418,uVar1);
    } while (*(int *)(param_1 + 0x44c) < *(int *)(param_1 + 0x420));
  }
  lVar9 = local_90;
  lVar5 = *(longlong *)(local_90 + 0x40);
  if (((lVar5 != 0) && (lVar11 = FUN_144b00dc8(lVar5), lVar11 != 0)) &&
     (cVar3 = FUN_14685d33e(lVar11), cVar3 != '\0')) {
    FUN_14685cf2e(lVar11,lVar5);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  FUN_14686281e(&DAT_14c947c58,lVar9);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  *(uint *)(param_1 + 0x2d0) = local_94;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685d33e FUN_14685d33e body=320 status=ok
// SIG undefined FUN_14685d33e(void)

ulonglong FUN_14685d33e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  local_48 = 0x100000000;
  uStack_40 = &DAT_14c947c68;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (DAT_14c947c80 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar2 = DAT_14c947c80;
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = &DAT_14c947c58;
  if ((iStack_34 != iVar2) || (uStack_40 != &DAT_14c947c68)) {
    do {
      lVar1 = FUN_144b00dc8(*(undefined8 *)(*local_70 + (longlong)iStack_54 * 0x10));
      if (lVar1 == param_1) {
        uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        goto LAB_14685d3e1;
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != &DAT_14c947c58 ||
             ((undefined *)CONCAT44(uStack_5c,uStack_60) != &DAT_14c947c68 || iStack_54 != iVar2));
  }
  uVar3 = 0;
LAB_14685d3e1:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14685d480 FUN_14685d480 body=254 status=ok
// SIG undefined FUN_14685d480(void)

longlong FUN_14685d480(longlong *param_1,longlong param_2)

{
  longlong lVar1;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) == param_2) {
        lVar1 = *local_68 + (longlong)iStack_4c * 0x18;
        break;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  else {
    lVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14685d580 FUN_14685d580 body=104 status=ok
// SIG undefined FUN_14685d580(void)

void FUN_14685d580(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar4 = 0;
    do {
      if ((*(int *)(param_1 + 0x400) == -1) && (*(char *)(param_1 + 0x3fc) == '\0')) {
        return;
      }
      uVar2 = FUN_142800b8a(param_1,iVar4);
      cVar1 = FUN_14685d5e8(uVar2);
      if ((cVar1 != '\0') && (lVar3 = FUN_1468b7070(param_1,iVar4), lVar3 != 0)) {
        FUN_14685cf2e(lVar3,uVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 14685d5e8 FUN_14685d5e8 body=179 status=ok
// SIG undefined FUN_14685d5e8(void)

ulonglong FUN_14685d5e8(ulonglong param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulonglong unaff_RDI;
  bool bVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  if (DAT_14c947c60 != DAT_14c947c8c) {
    uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    puVar3 = &DAT_14c947c90;
    if (DAT_14c947c98 != (undefined *)0x0) {
      puVar3 = DAT_14c947c98;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14c947ca0 - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar2 != -1) {
      do {
        bVar4 = *(ulonglong *)(DAT_14c947c58 + (longlong)iVar2 * 0x10) == param_1;
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),bVar4);
        if (bVar4) break;
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + DAT_14c947c58 + 8);
      } while (iVar2 != -1);
      goto LAB_14685d60e;
    }
  }
  unaff_RDI = 0;
LAB_14685d60e:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 14685d69c FUN_14685d69c body=523 status=ok
// SIG undefined FUN_14685d69c(void)

void FUN_14685d69c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  cVar4 = FUN_14685b91a();
  if (cVar4 == '\0') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x2d0);
  *(uint *)(param_1 + 0x2d0) = uVar1 & 0xffefffff;
  lVar3 = *(longlong *)(param_2 + 0x40);
  if ((lVar3 != 0) && (lVar5 = FUN_144b00dc8(lVar3), lVar5 != 0)) {
    if ((longlong)*(int *)(lVar5 + 0x400) == -1) {
      if (*(char *)(lVar5 + 0x3fc) == '\0') goto LAB_14685d6f5;
      plVar6 = (longlong *)(lVar3 + 0x110);
    }
    else {
      plVar6 = (longlong *)
               ((longlong)*(int *)(lVar5 + 0x400) * 0x68 + *(longlong *)(lVar5 + 0x18) + 0x40);
    }
    lVar7 = *plVar6;
    if (((lVar7 != 0) && ((*(uint *)(lVar7 + 8) & 0x200400) == 0)) &&
       (cVar4 = FUN_14685bac2(lVar7), cVar4 == '\0')) {
      FUN_144757f48(lVar7,0x400);
    }
    FUN_14685d69c(lVar5,lVar3);
  }
LAB_14685d6f5:
  FUN_14685d580(param_1);
  iVar2 = *(int *)(param_2 + 0x1e0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x1d8);
    lVar5 = 0;
    do {
      if (((*(longlong *)(lVar3 + lVar5) != 0) && (lVar7 = FUN_144b00dc8(), lVar7 != 0)) &&
         ((*(int *)(lVar7 + 0x400) != -1 || (*(char *)(lVar7 + 0x3fc) == '\x01')))) {
        cVar4 = FUN_14685d33e(lVar7);
        if (cVar4 != '\0') {
          FUN_14685cf2e(lVar7,*(undefined8 *)(lVar3 + lVar5));
        }
        FUN_14685d69c(lVar7,*(undefined8 *)(lVar3 + lVar5));
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  FUN_14685d8a8(param_1,param_2);
  if ((longlong)*(int *)(param_1 + 0x400) == -1) {
    if (*(char *)(param_1 + 0x3fc) == '\0') goto LAB_14685d75d;
    plVar6 = (longlong *)(param_2 + 0x110);
  }
  else {
    plVar6 = (longlong *)
             ((longlong)*(int *)(param_1 + 0x400) * 0x68 + *(longlong *)(param_1 + 0x18) + 0x40);
  }
  lVar3 = *plVar6;
  *(undefined1 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  FUN_1468fde7c(param_1);
  if (*(char *)(param_2 + 0xd0) == '\0') {
    lVar5 = *(longlong *)(param_2 + 0x110);
    cVar4 = FUN_14685bb3e(param_1,param_2,lVar3);
    if ((cVar4 != '\0') && (*(longlong *)(param_2 + 0x110) == lVar5)) {
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_2 + 0x110) = lVar3;
    }
  }
LAB_14685d75d:
  *(uint *)(param_1 + 0x2d0) = uVar1;
  return;
}



// FUNCTION 14685d8a8 FUN_14685d8a8 body=1479 status=ok
// SIG undefined FUN_14685d8a8(void)

void FUN_14685d8a8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  bool bVar15;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  int *local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0x400) == -1) {
    if (*(char *)(param_1 + 0x3fc) == '\0') goto LAB_14685d8e7;
  }
  else {
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + 0x18) + 0x40 + (longlong)*(int *)(param_1 + 0x400) * 0x68);
    if (lVar6 != 0) {
      lVar9 = FUN_144a88810();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        *(undefined8 *)(param_2 + 0x110) = 0;
        lVar9 = 0;
        FUN_1400f84b8(lVar6,0,0xffffffff,1);
        FUN_1468bcf9c((longlong)*(int *)(param_1 + 0x400) * 0x68 + *(longlong *)(param_1 + 0x18));
        uVar7 = FUN_1427fcad6(param_1,*(undefined4 *)(param_1 + 0x400));
        (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,uVar7);
        FUN_14685de70(param_1,lVar6);
        FUN_144757f48(lVar6,0x40000000);
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        do {
          uVar4 = *(uint *)(lVar9 + 8);
          if ((uVar4 >> 0x15 & 1) != 0) break;
          LOCK();
          bVar15 = uVar4 == *(uint *)(lVar9 + 8);
          if (bVar15) {
            *(uint *)(lVar9 + 8) = uVar4 | 0x200000;
          }
          UNLOCK();
        } while (!bVar15);
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x400) == -1) {
    plVar12 = (longlong *)(param_2 + 0x110);
  }
  else {
    plVar12 = (longlong *)
              (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x400) * 0x68 + 0x40);
  }
  lVar6 = *plVar12;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  cVar3 = FUN_14685ba32();
  if (cVar3 == '\0') {
    uVar4 = *(uint *)(param_1 + 0x2d0) | 8;
    *(uint *)(param_1 + 0x2d0) = uVar4;
    if (0 < *(int *)(param_1 + 0x20)) {
      uVar10 = 0;
      do {
        if ((*(int *)(param_1 + 0x400) == -1) && (*(char *)(param_1 + 0x3fc) == '\0')) break;
        lVar9 = *(longlong *)(param_1 + 0x18);
        lVar13 = *(longlong *)(lVar9 + 0x40 + uVar10 * 0x68);
        if (lVar13 != 0) {
          lVar5 = FUN_144a88810();
          uVar2 = uStack_70;
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            lVar9 = lVar9 + uVar10 * 0x68;
            if (*(int *)(lVar9 + 0xc) < 1) {
              if (*(longlong *)(lVar13 + 0xf0) == 0) {
                lVar5 = FUN_1468b773e(param_1,uVar10 & 0xffffffff);
                if (lVar5 != 0) {
                  local_50 = &local_59;
                  local_58 = &LAB_14686877c;
                  uVar7 = FUN_144a773aa(&local_58,&DAT_14c75ebf0);
                  FUN_14686179c(uVar7,param_1,uVar10 & 0xffffffff);
                  FUN_14685cd64(param_1,lVar5);
                  lVar5 = *(longlong *)(lVar9 + 0x40);
                  local_50 = &local_59;
                  local_58 = &LAB_14686877c;
                  uVar7 = FUN_144a773aa(&local_58,&DAT_14c75ebf0);
                  FUN_146861e8c(uVar7,param_1,uVar10 & 0xffffffff);
                  if (lVar13 != lVar5) goto LAB_14685da9b;
                }
                FUN_1400f84b8(lVar13,0,0xffffffff,1);
                FUN_1468bcf9c(lVar9);
                lVar9 = FUN_1427fcad6(param_1,uVar10 & 0xffffffff);
                (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x10))(lVar13 + 0x28,lVar9);
                FUN_14685de70(param_1,lVar13);
                FUN_144757f48(lVar13,0x40000000);
                uVar4 = *(uint *)(lVar13 + 0xc);
                lVar13 = 0;
                if ((int)uVar4 < DAT_14c9647dc) {
                  lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                }
                do {
                  uVar4 = *(uint *)(lVar13 + 8);
                  if ((uVar4 >> 0x15 & 1) != 0) break;
                  LOCK();
                  bVar15 = uVar4 == *(uint *)(lVar13 + 8);
                  if (bVar15) {
                    *(uint *)(lVar13 + 8) = uVar4 | 0x200000;
                  }
                  UNLOCK();
                } while (!bVar15);
                if (lVar9 != 0) {
                  FUN_1427ff290(param_1 + 0x240,lVar9);
                }
              }
            }
            else {
              lVar9 = (longlong)(int)uStack_70;
              uVar4 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
              if (uStack_70._4_4_ < uVar4) {
                FUN_1446f48e2(&local_78,uVar2 & 0xffffffff);
              }
              local_78[lVar9] = (int)uVar10;
            }
          }
        }
LAB_14685da9b:
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0x20));
      uVar4 = *(uint *)(param_1 + 0x2d0);
    }
    *(uint *)(param_1 + 0x2d0) = uVar4 & 0xfffffff7;
  }
  if (*(int *)(param_1 + 0x400) == -1) {
    if (*(char *)(param_1 + 0x3fc) != '\0') goto LAB_14685db82;
  }
  else {
    uVar1 = *(undefined4 *)(lVar6 + 8);
    FUN_14472eae2(lVar6,0x3400);
    FUN_1400f84b8(lVar6,param_1,*(undefined4 *)(param_1 + 0x400),0);
    FUN_144757f48(lVar6,uVar1);
LAB_14685db82:
    lVar9 = param_1 + 0x240;
    local_88 = lVar6;
    FUN_1427ff290(lVar9,lVar6);
    if (0 < *(int *)(param_1 + 0x20)) {
      uVar10 = 0;
      do {
        lVar6 = *(longlong *)(param_1 + 0x18);
        iVar8 = *(int *)(lVar6 + 8 + uVar10 * 0x68);
        if (0 < iVar8) {
          lVar13 = uVar10 * 0x68 + lVar6;
          do {
            if (iVar8 - 1U == *(uint *)(param_1 + 0x400)) {
              if ((*(longlong *)(lVar13 + 0x40) != 0) ||
                 (FUN_1427fcad6(param_1,uVar10 & 0xffffffff), *(longlong *)(lVar13 + 0x40) != 0)) {
                FUN_1427ff290(lVar9);
              }
              break;
            }
            iVar8 = *(int *)(lVar6 + 8 + (ulonglong)(iVar8 - 1U) * 0x68);
          } while (0 < iVar8);
        }
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0x20));
    }
    local_8c = *(undefined4 *)(param_1 + 0x400);
    *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
    local_80 = lVar9;
    if ((longlong)(int)uStack_70 != 0) {
      piVar14 = local_78 + (int)uStack_70;
      piVar11 = local_78;
      do {
        iVar8 = *piVar11;
        lVar6 = *(longlong *)(param_1 + 0x18);
        lVar13 = (longlong)iVar8 * 0x68;
        lVar9 = *(longlong *)(lVar6 + 0x40 + lVar13);
        if (lVar9 != 0) {
          lVar5 = FUN_144a88810();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            cVar3 = FUN_1468bdec6(lVar9 + 0x28);
            if (cVar3 == '\0') {
              FUN_1400f84b8(lVar9,0,0xffffffff,1);
              FUN_1468bcf9c(lVar6 + lVar13);
              lVar6 = FUN_1427fcad6(param_1,iVar8);
              (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x10))(lVar9 + 0x28,lVar6);
              FUN_14685de70(param_1,lVar9);
              FUN_144757f48(lVar9,0x40000000);
              uVar4 = *(uint *)(lVar9 + 0xc);
              lVar9 = 0;
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              do {
                uVar4 = *(uint *)(lVar9 + 8);
                if ((uVar4 >> 0x15 & 1) != 0) break;
                LOCK();
                bVar15 = uVar4 == *(uint *)(lVar9 + 8);
                if (bVar15) {
                  *(uint *)(lVar9 + 8) = uVar4 | 0x200000;
                }
                UNLOCK();
              } while (!bVar15);
              if (lVar6 != 0) {
                FUN_1427ff290(local_80,lVar6);
              }
            }
          }
        }
        piVar11 = piVar11 + 1;
      } while (piVar11 != piVar14);
    }
    *(undefined4 *)(param_1 + 0x400) = local_8c;
    FUN_14685df80(local_88);
  }
  if (local_78 != (int *)0x0) {
    FUN_1400020a8();
  }
LAB_14685d8e7:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685de70 FUN_14685de70 body=271 status=ok
// SIG undefined FUN_14685de70(void)

void FUN_14685de70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  
  FUN_1468bdec6(param_2 + 0x28);
  if ((longlong)*(int *)(param_2 + 0xe8) != 0) {
    plVar5 = *(longlong **)(param_2 + 0xe0);
    plVar1 = plVar5 + *(int *)(param_2 + 0xe8);
    do {
      lVar4 = *plVar5;
      uVar6 = (longlong)*(int *)(lVar4 + 0x30) - 1;
      FUN_1400f84b8(lVar4,0,0xffffffff,1);
      FUN_1468bcf9c(uVar6 * 0x68 + *(longlong *)(param_1 + 0x18));
      lVar3 = FUN_1427fcad6(param_1,uVar6 & 0xffffffff);
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,lVar3);
      FUN_144757f48(lVar4,0x40000000);
      uVar2 = *(uint *)(lVar4 + 0xc);
      lVar4 = 0;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      do {
        uVar2 = *(uint *)(lVar4 + 8);
        if ((uVar2 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar7 = uVar2 == *(uint *)(lVar4 + 8);
        if (bVar7) {
          *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
        }
        UNLOCK();
      } while (!bVar7);
      FUN_14685de70(param_1);
      if (lVar3 != 0) {
        FUN_1427ff290(param_1 + 0x240);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 14685df80 FUN_14685df80 body=183 status=ok
// SIG undefined FUN_14685df80(void)

void FUN_14685df80(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = FUN_14603085c;
  local_38 = &local_41;
  lVar1 = FUN_144a773aa(&local_40,&DAT_14c75ebf4);
  lVar3 = lVar1 + -0x108;
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  local_40 = FUN_14686aebe;
  local_38 = &local_41;
  lVar2 = FUN_144a773aa(&local_40,&DAT_14c75ebf8);
  lVar1 = lVar2 + -0x108;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  FUN_14685e726(lVar3,param_1);
  FUN_14685e726(lVar1,param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685e038 FUN_14685e038 body=234 status=ok
// SIG undefined FUN_14685e038(void)

void FUN_14685e038(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_2 + 0x30);
  lVar4 = 0;
  FUN_1400f84b8(param_2,0,0xffffffff,1);
  *(undefined8 *)((longlong)iVar1 * 0x68 + -0x28 + *(longlong *)(param_1 + 0x18)) = 0;
  lVar3 = FUN_1427fcad6(param_1,iVar1 + -1);
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x10))(param_2 + 0x28,lVar3);
  FUN_144757f48(param_2,0x40000000);
  uVar2 = *(uint *)(param_2 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  do {
    uVar2 = *(uint *)(lVar4 + 8);
    if ((uVar2 >> 0x15 & 1) != 0) break;
    LOCK();
    bVar5 = uVar2 == *(uint *)(lVar4 + 8);
    if (bVar5) {
      *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
    }
    UNLOCK();
  } while (!bVar5);
  FUN_14685de70(param_1,param_2);
  if (lVar3 == 0) {
    return;
  }
  FUN_1427ff290(param_1 + 0x240,lVar3);
  return;
}



// FUNCTION 14685e12a FUN_14685e12a body=219 status=ok
// SIG undefined FUN_14685e12a(void)

void FUN_14685e12a(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 *local_50;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x18);
  local_50 = &LAB_14686877c;
  local_48 = &local_51;
  uVar4 = FUN_144a773aa(&local_50,&DAT_14c75ebf0);
  cVar2 = FUN_14685e206(uVar4,param_1,param_2);
  iVar5 = *(int *)(lVar1 + 8 + (longlong)param_2 * 0x68);
  if (0 < iVar5 && cVar2 == '\0') {
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      local_50 = &LAB_14686877c;
      local_48 = &local_51;
      uVar4 = FUN_144a773aa(&local_50,&DAT_14c75ebf0);
      bVar3 = FUN_14685e206(uVar4,param_1,iVar5 - 1U);
      iVar5 = *(int *)(lVar1 + 8 + (ulonglong)(iVar5 - 1U) * 0x68);
    } while ((iVar5 < 1 | bVar3) != 1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685e206 FUN_14685e206 body=259 status=ok
// SIG undefined FUN_14685e206(void)

undefined8 FUN_14685e206(longlong *param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  undefined7 uVar5;
  longlong lVar6;
  int iVar7;
  byte bVar8;
  
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[10];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)param_1[0xb] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar7 != -1) {
      lVar6 = param_1[2];
      do {
        param_1 = (longlong *)((longlong)iVar7 * 0x60);
        lVar1 = lVar6 + (longlong)param_1;
        if (*(ulonglong *)(lVar6 + (longlong)param_1) == param_2) {
          uVar5 = (undefined7)((ulonglong)lVar6 >> 8);
          param_1 = (longlong *)(lVar1 + 8);
          if (param_1 != (longlong *)0x0 && lVar1 != 0) {
            bVar2 = 1;
            if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
              lVar6 = lVar1 + 0x40;
              if (*(longlong *)(lVar1 + 0x48) != 0) {
                lVar6 = *(longlong *)(lVar1 + 0x48);
              }
              iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar1 + 0x50) - 1U & param_3) * 4);
              if (iVar7 != -1) {
                goto LAB_14685e2e2;
              }
            }
            bVar8 = 0;
            goto LAB_14685e210;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x58);
      } while (iVar7 != -1);
    }
  }
  bVar8 = (byte)param_1;
  bVar2 = 0;
  uVar5 = 0;
  goto LAB_14685e210;
  while (iVar7 = *(int *)(*param_1 + (longlong)iVar7 * 0xc + 4), iVar7 != -1) {
LAB_14685e2e2:
    bVar8 = *(uint *)(*param_1 + (longlong)iVar7 * 0xc) == param_3;
    if ((bool)bVar8) break;
  }
LAB_14685e210:
  return CONCAT71(uVar5,bVar2 & bVar8);
}



// FUNCTION 14685e30a FUN_14685e30a body=177 status=ok
// SIG undefined FUN_14685e30a(void)

void FUN_14685e30a(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (*(int *)(param_1 + 0x414) != 0) {
    FUN_1468691f0(param_1 + 0x408,0);
  }
  FUN_146869250(param_1 + 0x418,0);
  *(byte *)(param_1 + 0x2d2) = *(byte *)(param_1 + 0x2d2) & 0xef;
  local_18 = &local_21;
  local_20 = &LAB_14686877c;
  uVar1 = FUN_144a773aa(&local_20,&DAT_14c75ebf0);
  FUN_14685e3bc(uVar1,param_1);
  FUN_14685e3f8(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685e3bc FUN_14685e3bc body=59 status=ok
// SIG undefined FUN_14685e3bc(void)

void FUN_14685e3bc(longlong param_1)

{
  FUN_146861f54(param_1 + 0x10);
  if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x94)) {
    return;
  }
  FUN_146862918(param_1 + 0x60);
  FUN_146862a5c(param_1 + 0x60);
  return;
}



// FUNCTION 14685e3f8 FUN_14685e3f8 body=470 status=ok
// SIG undefined FUN_14685e3f8(void)

void FUN_14685e3f8(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x100000000;
  uStack_60 = &DAT_14c947c68;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  if (DAT_14c947c80 == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = DAT_14c947c80;
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = &DAT_14c947c58;
  if ((iStack_54 != iVar6) || (uStack_60 != &DAT_14c947c68)) {
    do {
      uVar1 = *(undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x10);
      lVar4 = FUN_144b00dc8(uVar1);
      uVar2 = uStack_70;
      if (lVar4 == param_1) {
        lVar4 = (longlong)(int)uStack_70;
        uVar3 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
        if (uStack_70._4_4_ < uVar3) {
          FUN_1447f76d2(&local_78,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar4 * 8) = uVar1;
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
      lVar4 = local_78;
    } while (local_a0 != &DAT_14c947c58 ||
             ((undefined *)CONCAT44(uStack_8c,uStack_90) != &DAT_14c947c68 || iStack_84 != iVar6));
    lVar5 = (longlong)(int)uStack_70;
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        FUN_14686281e(&DAT_14c947c58,*(undefined8 *)(lVar4 + lVar7));
        lVar7 = lVar7 + 8;
      } while (lVar5 * 8 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c947ca8);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685e5d0 FUN_14685e5d0 body=188 status=ok
// SIG undefined FUN_14685e5d0(void)

undefined8 FUN_14685e5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_3;
  if (param_4 == '\0') {
    local_40 = 0;
    local_48 = (wchar_t *)((ulonglong)local_48 & 0xffffffff00000000);
    FUN_140be85e0(param_1,param_2,param_3,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400021e4(&local_20,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_48 = L"FindImportFast";
  uVar1 = FUN_140277cc4(param_1,puVar2,0xc,3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685e68e FUN_14685e68e body=151 status=ok
// SIG undefined FUN_14685e68e(void)

longlong FUN_14685e68e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    local_48 = *param_3;
    FUN_14686973a(param_1 + 8,&local_40,&local_48);
    local_38 = &local_48;
    local_30 = param_3;
    FUN_146869856(param_1 + 0x58,&local_24);
    lVar1 = (longlong)local_24 * 0x240 + *(longlong *)(param_1 + 0x58) + 0x10;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685e726 FUN_14685e726 body=277 status=ok
// SIG undefined FUN_14685e726(void)

void FUN_14685e726(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1 + 1;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14685e83c(local_60,param_2,&local_58);
  lVar3 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar3 + lVar5);
      iVar1 = (int)param_1[0x16];
      *(uint *)(param_1 + 0x16) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xb4) < iVar1 + 1U) {
        FUN_1447f76d2(param_1 + 0x15,iVar1);
      }
      *(undefined8 *)(param_1[0x15] + (longlong)iVar1 * 8) = uVar2;
      cVar4 = (**(code **)(*param_1 + 0x10))(param_1,param_2,uVar2);
      if (cVar4 != '\0') {
        FUN_14685e922(param_1,uVar2);
      }
      *(int *)(param_1 + 0x16) = (int)param_1[0x16] + -1;
      FUN_1404559b4(param_1 + 0x15);
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  FUN_14686a1ec(local_60,param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14685e83c FUN_14685e83c body=229 status=ok
// SIG undefined FUN_14685e83c(void)

void FUN_14685e83c(longlong *param_1,ulonglong param_2,longlong *param_3)

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
            FUN_1447f76d2(param_3,iVar1);
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



// FUNCTION 14685e922 FUN_14685e922 body=192 status=ok
// SIG undefined FUN_14685e922(void)

void FUN_14685e922(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14685eb36(param_1 + 0xb8,param_2,&local_48,0);
  lVar2 = local_48;
  lVar5 = (longlong)(int)uStack_40;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar2 + lVar4);
      lVar3 = FUN_144b00dc8(uVar1);
      if (lVar3 != 0) {
        FUN_1427ff290(lVar3 + 0x240,uVar1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 != lVar4);
  }
  FUN_14686a8aa(param_1 + 0xb8,param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685e9e4 FUN_14685e9e4 body=139 status=ok
// SIG undefined FUN_14685e9e4(void)

undefined4 FUN_14685e9e4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  uVar1 = FUN_141016ec0();
  if ((char)uVar1 != '\0') {
    if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar2) == param_2) goto LAB_14685ea4f;
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(param_1 + 0xb0) * 8 != lVar2);
    }
    FUN_14686a35a(param_1 + 0xb8,&local_28,&local_28);
  }
LAB_14685ea4f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685ea70 FUN_14685ea70 body=197 status=ok
// SIG undefined FUN_14685ea70(void)

undefined8 FUN_14685ea70(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x98);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x58);
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x240;
        if (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x240) == param_3) {
          if (lVar1 == -0x10 || lVar1 == 0) {
            return 1;
          }
          FUN_14283eca6();
          FUN_14686a792((longlong *)(param_1 + 0x58),param_3);
          return 1;
        }
        iVar4 = *(int *)(lVar1 + 0x230);
      } while (iVar4 != -1);
    }
  }
  return 1;
}



// FUNCTION 14685eb36 FUN_14685eb36 body=297 status=ok
// SIG undefined FUN_14685eb36(void)

void FUN_14685eb36(longlong *param_1,ulonglong param_2,longlong *param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if ((int)param_1[9] != 0) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar6 +
                    (longlong)(int)((int)param_1[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    while (iVar8 = iVar9, iVar8 != -1) {
      lVar7 = *param_1;
      iVar9 = *(int *)(lVar7 + 0x10 + (longlong)iVar8 * 0x18);
      if (*(ulonglong *)(lVar7 + (longlong)iVar8 * 0x18) == param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1447f76d2(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) =
               *(undefined8 *)(lVar7 + (longlong)iVar8 * 0x18 + 8);
          do {
            iVar8 = iVar9;
            if (iVar8 == -1) goto LAB_14685ec11;
            lVar7 = *param_1;
            iVar9 = *(int *)(lVar7 + 0x10 + (longlong)iVar8 * 0x18);
          } while (*(ulonglong *)(lVar7 + (longlong)iVar8 * 0x18) != param_2);
        } while( true );
      }
    }
  }
LAB_14685ec11:
  if (param_4 != '\0') {
    uVar5 = *(uint *)(param_3 + 1);
    lVar7 = (longlong)(int)uVar5;
    if (1 < lVar7) {
      puVar2 = (undefined8 *)*param_3;
      lVar10 = 0;
      puVar4 = puVar2;
      do {
        uVar3 = *puVar4;
        *puVar4 = puVar2[lVar7 + lVar10 + -1];
        puVar2[lVar7 + lVar10 + -1] = uVar3;
        lVar10 = lVar10 + -1;
        puVar4 = puVar4 + 1;
      } while (-lVar10 != (ulonglong)(uVar5 >> 1));
    }
  }
  return;
}



// FUNCTION 14685ec60 FUN_14685ec60 body=227 status=ok
// SIG undefined FUN_14685ec60(void)

undefined8 FUN_14685ec60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
    if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar3) == param_2) goto LAB_14685ec9e;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_1 + 0xb0) * 8 != lVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  local_28 = param_1;
  local_20 = param_2;
  if ((*(uint *)(param_2 + 8) >> 0x12 & 1) == 0) {
    if (((*(uint *)(param_2 + 8) >> 0x16 & 1) != 0) &&
       (lVar3 = *(longlong *)(param_2 + 0x20), lVar3 != 0)) {
      lVar2 = FUN_144a797b2();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        puVar4 = (undefined8 *)(lVar3 + 0x110);
        goto LAB_14685ed08;
      }
    }
LAB_14685ec9e:
    uVar1 = 0;
  }
  else {
    puVar4 = (undefined8 *)(param_2 + 0x20);
LAB_14685ed08:
    uVar1 = FUN_1427b3376(&local_28,*puVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685ed56 FUN_14685ed56 body=358 status=ok
// SIG undefined FUN_14685ed56(void)

undefined8 FUN_14685ed56(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  longlong *local_30;
  ulonglong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_3;
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
LAB_14685ee64:
    FUN_14685ea70(param_1);
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      lVar2 = param_1 + 0x90;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x98);
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & (uVar1 >> 0x10 ^ uVar1))
                               * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x240;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x240) == param_3) {
            if ((lVar2 + 0x10U & 0xffffffffffffffef) != 0) {
              local_40 = *(longlong *)(lVar2 + 0x18);
              if ((*(uint *)(param_3 + 8) & 0x10) != 0) {
                local_40 = FUN_14171c25c(*(undefined8 *)(param_3 + 0x10),
                                         *(undefined8 *)(param_3 + 0x20),
                                         *(undefined8 *)(param_3 + 0x18),
                                         *(undefined4 *)(param_3 + 8));
              }
              if ((local_40 == 0) ||
                 (((*(uint *)(local_40 + 8) >> 10 & 1) == 0 &&
                  (((*(uint *)(local_40 + 8) >> 0x13 & 1) == 0 ||
                   ((*(uint *)(local_40 + 8) >> 0x15 & 1) != 0)))))) goto LAB_14685ee64;
              local_30 = &local_40;
              local_28 = &local_38;
              FUN_14686aa36(param_1 + 8,local_1c);
            }
            break;
          }
          iVar4 = *(int *)(lVar2 + 0x230);
        } while (iVar4 != -1);
      }
    }
    uVar3 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14685eebe FUN_14685eebe body=174 status=ok
// SIG undefined FUN_14685eebe(void)

undefined8 FUN_14685eebe(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = FUN_14603085c;
  local_20 = &local_29;
  lVar2 = FUN_144a773aa(&local_28,&DAT_14c75ebf4);
  plVar4 = (longlong *)(lVar2 + -0x108);
  if (lVar2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  cVar1 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
  uVar3 = 1;
  if (cVar1 == '\0') {
    local_28 = FUN_14686aebe;
    local_20 = &local_29;
    lVar2 = FUN_144a773aa(&local_28,&DAT_14c75ebf8);
    plVar4 = (longlong *)(lVar2 + -0x108);
    if (lVar2 == 0) {
      plVar4 = (longlong *)0x0;
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685efc2 FUN_14685efc2 body=101 status=ok
// SIG undefined FUN_14685efc2(void)

undefined1 FUN_14685efc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_1456cec3c();
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



// FUNCTION 14685f050 FUN_14685f050 body=109 status=ok
// SIG undefined FUN_14685f050(void)

int FUN_14685f050(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685f124 FUN_14685f124 body=79 status=ok
// SIG undefined FUN_14685f124(void)

void FUN_14685f124(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1468c3930(local_28,0);
  FUN_14685f364(param_2,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685f174 FUN_14685f174 body=79 status=ok
// SIG undefined FUN_14685f174(void)

void FUN_14685f174(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1468c3930(local_28,0);
  FUN_14685f364(param_2,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685f1c4 FUN_14685f1c4 body=46 status=ok
// SIG undefined FUN_14685f1c4(void)

void FUN_14685f1c4(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14685f3c6(param_2 + 0x18);
  return;
}



// FUNCTION 14685f208 FUN_14685f208 body=54 status=ok
// SIG undefined FUN_14685f208(void)

undefined1 FUN_14685f208(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14685f47e(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14685f266 FUN_14685f266 body=109 status=ok
// SIG undefined FUN_14685f266(void)

int FUN_14685f266(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685f2de FUN_14685f2de body=56 status=ok
// SIG undefined FUN_14685f2de(void)

void FUN_14685f2de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_14685f3c6(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14685f364 FUN_14685f364 body=98 status=ok
// SIG undefined FUN_14685f364(void)

undefined8 * FUN_14685f364(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 14685f3c6 FUN_14685f3c6 body=54 status=ok
// SIG undefined FUN_14685f3c6(void)

void FUN_14685f3c6(longlong *param_1)

{
  FUN_14685f3fc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14685f3fc FUN_14685f3fc body=128 status=ok
// SIG undefined FUN_14685f3fc(void)

void FUN_14685f3fc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14685f47e FUN_14685f47e body=85 status=ok
// SIG undefined FUN_14685f47e(void)

undefined8 * FUN_14685f47e(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[1];
    }
  }
  param_1[1] = lVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  FUN_14685f4d4(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14685f4d4 FUN_14685f4d4 body=122 status=ok
// SIG undefined FUN_14685f4d4(void)

longlong FUN_14685f4d4(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14685f54e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14685f54e FUN_14685f54e body=210 status=ok
// SIG undefined FUN_14685f54e(void)

undefined8 * FUN_14685f54e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14685f3fc(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_14685f620(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14685f620 FUN_14685f620 body=104 status=ok
// SIG undefined FUN_14685f620(void)

undefined8 * FUN_14685f620(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14685f6e8 FUN_14685f6e8 body=46 status=ok
// SIG undefined FUN_14685f6e8(void)

void FUN_14685f6e8(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14685f856(param_2 + 8);
  return;
}



// FUNCTION 14685f72c FUN_14685f72c body=54 status=ok
// SIG undefined FUN_14685f72c(void)

undefined1 FUN_14685f72c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14685fa16(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14685f78a FUN_14685f78a body=59 status=ok
// SIG undefined FUN_14685f78a(void)

undefined8 FUN_14685f78a(longlong *param_1)

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



// FUNCTION 14685f7d0 FUN_14685f7d0 body=56 status=ok
// SIG undefined FUN_14685f7d0(void)

void FUN_14685f7d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_14685f856(param_2 + 8);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14685f856 FUN_14685f856 body=54 status=ok
// SIG undefined FUN_14685f856(void)

void FUN_14685f856(longlong *param_1)

{
  FUN_14685f88c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14685f88c FUN_14685f88c body=392 status=ok
// SIG undefined FUN_14685f88c(void)

void FUN_14685f88c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x70;
      *(undefined4 *)(lVar2 + 0x60 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x58 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_14685f3c6(lVar2 + lVar5 + 0x18);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140875b54(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14685fa16 FUN_14685fa16 body=73 status=ok
// SIG undefined FUN_14685fa16(void)

longlong * FUN_14685fa16(longlong *param_1,longlong *param_2)

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
  *param_1 = lVar1;
  FUN_14685fa60(param_1 + 1,param_2 + 1);
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  return param_1;
}



// FUNCTION 14685fa60 FUN_14685fa60 body=122 status=ok
// SIG undefined FUN_14685fa60(void)

longlong FUN_14685fa60(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14685fada(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14685fada FUN_14685fada body=210 status=ok
// SIG undefined FUN_14685fada(void)

undefined8 * FUN_14685fada(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14685f88c(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140275bcc(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_14685fbac(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x1a) = *(undefined8 *)(puVar4 + 0x1a);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x1c;
        puVar6 = puVar6 + 0x1c;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14685fbac FUN_14685fbac body=119 status=ok
// SIG undefined FUN_14685fbac(void)

undefined8 * FUN_14685fbac(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_14685f4d4(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14685fc74 FUN_14685fc74 body=113 status=ok
// SIG undefined FUN_14685fc74(void)

undefined8 FUN_14685fc74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      plVar1 = *(longlong **)(param_3 + 8 + lVar3);
      plVar2 = *(longlong **)(param_2 + 8 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + 8 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14685fd0e FUN_14685fd0e body=59 status=ok
// SIG undefined FUN_14685fd0e(void)

undefined8 FUN_14685fd0e(longlong *param_1)

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



// FUNCTION 14685fd54 FUN_14685fd54 body=39 status=ok
// SIG undefined FUN_14685fd54(void)

void FUN_14685fd54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14685fdf0 FUN_14685fdf0 body=48 status=ok
// SIG undefined FUN_14685fdf0(void)

void FUN_14685fdf0(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[2] + 0x10))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14685fe36 FUN_14685fe36 body=54 status=ok
// SIG undefined FUN_14685fe36(void)

undefined1 FUN_14685fe36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14685ff5c(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14685fe94 FUN_14685fe94 body=59 status=ok
// SIG undefined FUN_14685fe94(void)

undefined8 FUN_14685fe94(longlong *param_1)

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



// FUNCTION 14685feda FUN_14685feda body=52 status=ok
// SIG undefined FUN_14685feda(void)

void FUN_14685feda(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[2] + 0x10))();
    }
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14685ff5c FUN_14685ff5c body=77 status=ok
// SIG undefined FUN_14685ff5c(void)

longlong FUN_14685ff5c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 14685ffb4 FUN_14685ffb4 body=39 status=ok
// SIG undefined FUN_14685ffb4(void)

bool FUN_14685ffb4(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(param_1 + 0x10) != 0;
  }
  return bVar2;
}



// FUNCTION 14685ffdc FUN_14685ffdc body=38 status=ok
// SIG undefined FUN_14685ffdc(void)

undefined8 FUN_14685ffdc(undefined8 param_1,int param_2)

{
  FUN_1448eac94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146860002 FUN_146860002 body=86 status=ok
// SIG undefined FUN_146860002(void)

uint FUN_146860002(longlong param_1,longlong param_2)

{
  uint uVar1;
  wchar_t *_Str1;
  wchar_t *_Str2;
  
  uVar1 = FUN_144a78538();
  if (uVar1 == 0) {
    uVar1 = FUN_144a78538(param_1 + 8,param_2 + 8);
    if (uVar1 == 0) {
      _Str1 = L"";
      _Str2 = L"";
      if (*(int *)(param_2 + 0x18) != 0) {
        _Str2 = *(wchar_t **)(param_2 + 0x10);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        _Str1 = *(wchar_t **)(param_1 + 0x10);
      }
      uVar1 = wcscmp(_Str1,_Str2);
    }
  }
  return uVar1 >> 0x1f;
}



// FUNCTION 146860058 FUN_146860058 body=38 status=ok
// SIG undefined FUN_146860058(void)

undefined8 FUN_146860058(undefined8 param_1,int param_2)

{
  FUN_144a8720c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14686007e FUN_14686007e body=59 status=ok
// SIG undefined FUN_14686007e(void)

void FUN_14686007e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468600ba(param_1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_140fae07c(param_1,*(undefined4 *)(param_1 + 0x10),iVar1,4);
  return;
}



// FUNCTION 1468600ba FUN_1468600ba body=105 status=ok
// SIG undefined FUN_1468600ba(void)

ulonglong FUN_1468600ba(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (2 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146860124 FUN_146860124 body=114 status=ok
// SIG undefined FUN_146860124(void)

void FUN_146860124(longlong *param_1,int param_2)

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



// FUNCTION 146860196 FUN_146860196 body=74 status=ok
// SIG undefined FUN_146860196(void)

undefined8 * FUN_146860196(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e5de10;
  puVar1 = TlsGetValue(DAT_14c75ebfc);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ebfc,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468601e0 FUN_1468601e0 body=9 status=ok
// SIG undefined FUN_1468601e0(void)

void FUN_1468601e0(longlong param_1)

{
  FUN_146860208(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1468601ea FUN_1468601ea body=29 status=ok
// SIG undefined FUN_1468601ea(void)

undefined8 FUN_1468601ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146860208 FUN_146860208 body=57 status=ok
// SIG undefined FUN_146860208(void)

void FUN_146860208(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_1401a56c2(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 146860242 FUN_146860242 body=74 status=ok
// SIG undefined FUN_146860242(void)

void FUN_146860242(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) << 2);
      FUN_1446efa72((longlong)param_1 + 8,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 14686028c FUN_14686028c body=182 status=ok
// SIG undefined FUN_14686028c(void)

longlong * FUN_14686028c(longlong *param_1,byte *param_2)

{
  int *piVar1;
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
    if (local_24 == 0) goto LAB_1468602fe;
  }
  else {
    *param_2 = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    if ((*param_2 & 1) == 0) goto LAB_1468602fe;
  }
  (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,0x10);
LAB_1468602fe:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146860344 FUN_146860344 body=131 status=ok
// SIG undefined FUN_146860344(void)

longlong FUN_146860344(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1468603c7();
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
      FUN_1468607cc(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1468603c7 FUN_1468603c7 body=667 status=ok
// SIG undefined FUN_1468603c7(void)

longlong * FUN_1468603c7(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
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
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
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
    uVar6 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar7 = local_78._4_4_;
      local_78 = uVar6;
      do {
        lVar4 = *local_90;
        FUN_1417039d5(param_1,lVar4 + (longlong)iVar7 * 0x28);
        (**(code **)(*param_1 + 0x170))(param_1,lVar4 + (longlong)iVar7 * 0x28 + 0xc,0x14);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar5,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_146860664(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar6 = local_78;
    if (0 < (int)local_60) {
      iVar7 = 0;
      do {
        FUN_1468606e6(param_2,&local_90);
        lVar4 = (longlong)local_88 + 0xc;
        local_88[2] = 0;
        local_88[3] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        *(undefined4 *)(local_88 + 4) = 0xffffffff;
        FUN_1417039d5(param_1);
        (**(code **)(*param_1 + 0x170))(param_1,lVar4,0x14);
        iVar7 = iVar7 + 1;
        uVar6 = local_78;
      } while (iVar7 < (int)local_60);
    }
  }
  local_78 = uVar6;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146860664 FUN_146860664 body=128 status=ok
// SIG undefined FUN_146860664(void)

void FUN_146860664(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140957390(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1468606e6 FUN_1468606e6 body=230 status=ok
// SIG undefined FUN_1468606e6(void)

int * FUN_1468606e6(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
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



// FUNCTION 1468607cc FUN_1468607cc body=474 status=ok
// SIG undefined FUN_1468607cc(void)

void FUN_1468607cc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
        puVar2 = (undefined8 *)(*local_70 + (longlong)iVar5 * 0x28);
        local_40 = (longlong *)CONCAT44(local_40._4_4_,*(undefined4 *)(puVar2 + 1));
        local_48 = *puVar2;
        iVar7 = 0x1505;
        lVar10 = 0;
        do {
          iVar7 = (uint)*(byte *)((longlong)&local_48 + lVar10) + iVar7 * 0x21;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0xc);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)((longlong)puVar2 + 0x24) = iVar7;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar2 + 4) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1468609a8 FUN_1468609a8 body=303 status=ok
// SIG undefined FUN_1468609a8(void)

undefined8 * FUN_1468609a8(uint param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = FUN_1468610be();
  if (iVar2 == -1) {
    FUN_1468611a6(local_30);
    *local_28 = 0;
    *local_28 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(local_28 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)local_28 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    *(undefined4 *)(local_28 + 2) = 0xffffffff;
    uVar4 = DAT_14c927a70 - DAT_14c927a9c;
    iVar2 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar2 <= DAT_14c927ab0)) {
      param_1 = DAT_14c927ab0 - 1U & param_1;
      *(uint *)((longlong)local_28 + 0x14) = param_1;
      puVar5 = DAT_14c927aa8;
      if (DAT_14c927aa8 == (undefined *)0x0) {
        puVar5 = &DAT_14c927aa0;
      }
      *(undefined4 *)(local_28 + 2) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14c927ab0 - 1U & (longlong)(int)param_1) * 4);
      puVar5 = DAT_14c927aa8;
      if (DAT_14c927aa8 == (undefined *)0x0) {
        puVar5 = &DAT_14c927aa0;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14c927ab0 - 1U & (longlong)(int)param_1) * 4) =
           local_30[0];
    }
    else {
      DAT_14c927ab0 = iVar2;
      FUN_1468612b4();
    }
  }
  else {
    local_28 = (undefined8 *)((longlong)iVar2 * 0x18 + DAT_14c927a68);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146860ad8 FUN_146860ad8 body=854 status=ok
// SIG undefined FUN_146860ad8(void)

void FUN_146860ad8(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_36c;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x14 + -0x14;
    local_368 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar19 + fVar19);
    plVar11 = &local_368;
    do {
      puVar13 = (undefined8 *)*plVar11;
      puVar12 = (undefined8 *)plVar11[1];
      local_36c = (int)plVar11[2];
      iVar6 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar13) >> 2);
      puVar15 = puVar12;
      puVar18 = puVar13;
      local_378 = plVar11;
      if (local_36c != 0) {
LAB_146860bab:
        uVar8 = iVar6 * -0x33333333 + 1;
        plVar11 = local_378;
        if (8 < (int)uVar8) {
          uVar9 = (ulonglong)(uVar8 >> 1);
          local_58 = *(undefined4 *)((longlong)puVar13 + uVar9 * 0x14 + 0x10);
          puVar7 = (undefined8 *)((longlong)puVar13 + uVar9 * 0x14);
          uVar1 = *puVar7;
          uVar2 = puVar7[1];
          *(undefined4 *)((longlong)puVar13 + uVar9 * 0x14 + 0x10) = *(undefined4 *)(puVar13 + 2);
          uVar3 = puVar13[1];
          puVar7 = (undefined8 *)((longlong)puVar13 + uVar9 * 0x14);
          *puVar7 = *puVar13;
          puVar7[1] = uVar3;
          *(undefined4 *)(puVar13 + 2) = local_58;
          local_68._0_4_ = (undefined4)uVar1;
          local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar2;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar13 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_60._4_4_;
          puVar7 = (undefined8 *)((longlong)puVar15 + 0x14);
          puVar14 = puVar13;
          local_68 = uVar1;
          uStack_60 = uVar2;
          do {
            puVar4 = (undefined8 *)((longlong)puVar14 + 0x14);
            puVar16 = (undefined8 *)((longlong)puVar14 + 0x14);
            do {
              puVar14 = puVar16;
              puVar17 = puVar4;
              if (puVar15 < puVar14) break;
              cVar5 = FUN_146861072(puVar13,puVar14);
              puVar4 = (undefined8 *)((longlong)puVar17 + 0x14);
              puVar16 = (undefined8 *)((longlong)puVar14 + 0x14);
            } while (cVar5 == '\0');
            puVar4 = puVar7 + -5;
            do {
              puVar16 = puVar7;
              puVar10 = puVar4;
              puVar7 = (undefined8 *)((longlong)puVar16 + -0x14);
              if (puVar7 <= puVar13) break;
              cVar5 = FUN_146861072(puVar7,puVar13);
              puVar4 = (undefined8 *)((longlong)puVar10 + -0x14);
            } while (cVar5 == '\0');
            if (puVar7 < puVar14) goto LAB_146860c95;
            local_58 = *(undefined4 *)(puVar14 + 2);
            uVar1 = *puVar14;
            uVar2 = puVar14[1];
            *(undefined4 *)(puVar14 + 2) = *(undefined4 *)((longlong)puVar16 + -4);
            uVar3 = *(undefined8 *)((longlong)puVar16 + -0xc);
            *puVar14 = *puVar7;
            puVar14[1] = uVar3;
            *(undefined4 *)((longlong)puVar16 + -4) = local_58;
            local_68._0_4_ = (undefined4)uVar1;
            local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar2;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            *(undefined4 *)puVar7 = (undefined4)local_68;
            *(undefined4 *)(puVar16 + -2) = local_68._4_4_;
            *(undefined4 *)((longlong)puVar16 + -0xc) = (undefined4)uStack_60;
            *(undefined4 *)(puVar16 + -1) = uStack_60._4_4_;
            local_68 = uVar1;
            uStack_60 = uVar2;
          } while( true );
        }
        for (; local_378 = plVar11, puVar18 = puVar13, puVar12 = puVar13, puVar13 < puVar15;
            puVar15 = (undefined8 *)((longlong)puVar15 + -0x14)) {
          while (puVar7 = puVar18, puVar12 = (undefined8 *)((longlong)puVar12 + 0x14),
                puVar12 <= puVar15) {
            cVar5 = FUN_146861072(puVar7,puVar12);
            puVar18 = puVar12;
            if (cVar5 == '\0') {
              puVar18 = puVar7;
            }
          }
          local_58 = *(undefined4 *)(puVar7 + 2);
          local_68 = *puVar7;
          uStack_60 = puVar7[1];
          uVar2 = local_68;
          uVar3 = uStack_60;
          *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar15 + 2);
          uVar1 = puVar15[1];
          *puVar7 = *puVar15;
          puVar7[1] = uVar1;
          *(undefined4 *)(puVar15 + 2) = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          *(undefined4 *)puVar15 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar15 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_60._4_4_;
          plVar11 = local_378;
          local_68 = uVar2;
          uStack_60 = uVar3;
        }
        goto LAB_146860e05;
      }
LAB_146860e1f:
      FUN_146860e2f(puVar13);
      plVar11 = local_378;
LAB_146860e05:
      plVar11 = plVar11 + -3;
    } while (&local_368 <= plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146860c95:
  local_58 = *(undefined4 *)(puVar13 + 2);
  local_68 = *puVar13;
  uStack_60 = puVar13[1];
  uVar2 = local_68;
  uVar3 = uStack_60;
  *(undefined4 *)(puVar13 + 2) = *(undefined4 *)((longlong)puVar16 + -4);
  uVar1 = *(undefined8 *)((longlong)puVar16 + -0xc);
  *puVar13 = *puVar7;
  puVar13[1] = uVar1;
  *(undefined4 *)((longlong)puVar16 + -4) = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)puVar7 = (undefined4)local_68;
  *(undefined4 *)(puVar16 + -2) = local_68._4_4_;
  *(undefined4 *)((longlong)puVar16 + -0xc) = (undefined4)uStack_60;
  *(undefined4 *)(puVar16 + -1) = uStack_60._4_4_;
  local_36c = local_36c + -1;
  puVar16 = puVar16 + -5;
  local_68 = uVar2;
  uStack_60 = uVar3;
  if ((longlong)puVar10 - (longlong)puVar18 < (longlong)puVar12 - (longlong)puVar17) {
    plVar11 = local_378;
    if (puVar14 < puVar15) {
      *local_378 = (longlong)puVar14;
      local_378[1] = (longlong)puVar15;
      *(int *)(local_378 + 2) = local_36c;
      plVar11 = local_378 + 3;
    }
    puVar12 = puVar10;
    puVar17 = puVar13;
    if (puVar7 <= (undefined8 *)((longlong)puVar13 + 0x14U)) goto LAB_146860e05;
  }
  else {
    if ((undefined8 *)((longlong)puVar13 + 0x14U) < puVar7) {
      *local_378 = (longlong)puVar13;
      local_378[1] = (longlong)puVar16;
      *(int *)(local_378 + 2) = local_36c;
      local_378 = local_378 + 3;
    }
    plVar11 = local_378;
    puVar13 = puVar14;
    puVar16 = puVar15;
    puVar12 = puVar15;
    if (puVar15 <= puVar14) goto LAB_146860e05;
  }
  local_378 = plVar11;
  iVar6 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar17) >> 2);
  puVar15 = puVar16;
  puVar18 = puVar17;
  if (local_36c == 0) goto LAB_146860e1f;
  goto LAB_146860bab;
}



// FUNCTION 146860e2f FUN_146860e2f body=578 status=ok
// SIG undefined FUN_146860e2f(void)

void FUN_146860e2f(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar13 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar11 = iVar13;
joined_r0x000146860e74:
    do {
      iVar9 = iVar13 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar10 = iVar13 * 2 + 2;
        if ((iVar10 < (int)param_2) &&
           (cVar8 = FUN_146861072((longlong)param_1 + (longlong)iVar10 * 0x14,
                                  (longlong)param_1 + (longlong)iVar9 * 0x14), cVar8 == '\0')) {
          iVar9 = iVar10;
        }
        puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar13 * 0x14);
        puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar9 * 0x14);
        cVar8 = FUN_146861072(puVar2,puVar3);
        if (cVar8 != '\0') {
          local_48 = *(undefined4 *)(puVar2 + 2);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
          uVar7 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar7;
          *(undefined4 *)(puVar3 + 2) = local_48;
          local_58._0_4_ = (undefined4)uVar5;
          local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar6;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar3 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_50._4_4_;
          iVar13 = iVar9;
          local_58 = uVar5;
          uStack_50 = uVar6;
          goto joined_r0x000146860e74;
        }
      }
      bVar14 = iVar11 != 0;
      iVar13 = iVar11 + -1;
      iVar11 = iVar13;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar12 = (ulonglong)param_2 - 1;
      local_48 = *(undefined4 *)(param_1 + 2);
      uVar5 = *param_1;
      uVar6 = param_1[1];
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar12 * 0x14 + 0x10);
      puVar2 = (undefined8 *)((longlong)param_1 + uVar12 * 0x14);
      uVar7 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar7;
      *(undefined4 *)((longlong)param_1 + uVar12 * 0x14 + 0x10) = local_48;
      local_58._0_4_ = (undefined4)uVar5;
      local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar6;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar4 = (undefined4 *)((longlong)param_1 + uVar12 * 0x14);
      *puVar4 = (undefined4)local_58;
      puVar4[1] = local_58._4_4_;
      puVar4[2] = (undefined4)uStack_50;
      puVar4[3] = uStack_50._4_4_;
      local_58 = uVar5;
      uStack_50 = uVar6;
      if (param_2 != 2) {
        do {
          iVar13 = 0;
          iVar9 = 1;
          iVar11 = 0;
          do {
            iVar13 = iVar13 + 2;
            iVar10 = iVar9;
            if (((longlong)iVar13 < (longlong)uVar12) &&
               (cVar8 = FUN_146861072((longlong)param_1 + (longlong)iVar13 * 0x14,
                                      (longlong)param_1 + (longlong)iVar9 * 0x14), cVar8 == '\0')) {
              iVar10 = iVar13;
            }
            puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar11 * 0x14);
            puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar10 * 0x14);
            cVar8 = FUN_146861072(puVar2,puVar3);
            if (cVar8 == '\0') break;
            local_48 = *(undefined4 *)(puVar2 + 2);
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            *(undefined4 *)(puVar3 + 2) = local_48;
            local_58._0_4_ = (undefined4)uVar5;
            local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar6;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)puVar3 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar3 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_50._4_4_;
            iVar13 = iVar10 * 2;
            iVar9 = iVar10 * 2 + 1;
            local_58 = uVar5;
            uStack_50 = uVar6;
            iVar11 = iVar10;
          } while ((longlong)iVar9 < (longlong)uVar12);
          uVar1 = uVar12 - 1;
          local_48 = *(undefined4 *)(param_1 + 2);
          uVar5 = *param_1;
          uVar6 = param_1[1];
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar1 * 0x14 + 0x10);
          puVar2 = (undefined8 *)((longlong)param_1 + uVar1 * 0x14);
          uVar7 = puVar2[1];
          *param_1 = *puVar2;
          param_1[1] = uVar7;
          *(undefined4 *)((longlong)param_1 + uVar1 * 0x14 + 0x10) = local_48;
          local_58._0_4_ = (undefined4)uVar5;
          local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar6;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          puVar4 = (undefined4 *)((longlong)param_1 + uVar1 * 0x14);
          *puVar4 = (undefined4)local_58;
          puVar4[1] = local_58._4_4_;
          puVar4[2] = (undefined4)uStack_50;
          puVar4[3] = uStack_50._4_4_;
          bVar14 = 2 < uVar12;
          uVar12 = uVar1;
          local_58 = uVar5;
          uStack_50 = uVar6;
        } while (bVar14);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146861072 FUN_146861072 body=76 status=ok
// SIG undefined FUN_146861072(void)

bool FUN_146861072(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 <= *param_2) {
    if (param_1[1] < param_2[1]) {
      return true;
    }
    if (param_1[1] == param_2[1]) {
      if (param_1[2] < param_2[2]) {
        return true;
      }
      if (param_1[2] == param_2[2]) {
        if (param_1[3] < param_2[3]) {
          return true;
        }
        if (param_1[3] == param_2[3]) {
          return (int)param_1[4] < (int)param_2[4];
        }
      }
    }
  }
  return false;
}



// FUNCTION 1468610be FUN_1468610be body=147 status=ok
// SIG undefined FUN_1468610be(void)

int FUN_1468610be(uint param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined *puVar7;
  
  lVar4 = DAT_14c927a68;
  if (DAT_14c927a70 != DAT_14c927a9c) {
    puVar7 = &DAT_14c927aa0;
    if (DAT_14c927aa8 != (undefined *)0x0) {
      puVar7 = DAT_14c927aa8;
    }
    iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_14c927ab0 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_2 + 1);
      uVar3 = *param_2;
      do {
        lVar6 = (longlong)iVar1;
        if ((*(int *)(lVar4 + 8 + lVar6 * 0x18) == iVar2) &&
           (cVar5 = FUN_146861151(*(undefined8 *)(lVar4 + lVar6 * 0x18),uVar3,iVar2), cVar5 != '\0')
           ) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146861151 FUN_146861151 body=84 status=ok
// SIG undefined FUN_146861151(void)

undefined8 FUN_146861151(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(param_1 + lVar1) != *(int *)(param_2 + lVar1)) {
        return 0;
      }
      if (*(int *)(param_1 + 4 + lVar1) != *(int *)(param_2 + 4 + lVar1)) {
        return 0;
      }
      if (*(int *)(param_1 + 8 + lVar1) != *(int *)(param_2 + 8 + lVar1)) {
        return 0;
      }
      if (*(int *)(param_1 + 0xc + lVar1) != *(int *)(param_2 + 0xc + lVar1)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x10 + lVar1) != *(int *)(param_2 + 0x10 + lVar1)) {
        return 0;
      }
      lVar1 = lVar1 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 1468611a6 FUN_1468611a6 body=270 status=ok
// SIG undefined FUN_1468611a6(void)

int * FUN_1468611a6(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c927a98;
  iVar4 = DAT_14c927a70;
  if (DAT_14c927a9c == 0) {
    iVar2 = DAT_14c927a70 + 1;
    bVar7 = DAT_14c927a74 == DAT_14c927a70;
    DAT_14c927a70 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c927a68,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c927a78,1);
    puVar3 = DAT_14c927a88;
    if (DAT_14c927a88 == (undefined *)0x0) {
      puVar3 = &DAT_14c927a78;
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
    lVar6 = (longlong)DAT_14c927a98;
    DAT_14c927a98 = *(int *)(DAT_14c927a68 + 4 + lVar6 * 0x18);
    DAT_14c927a9c = DAT_14c927a9c + -1;
    iVar4 = iVar2;
    if (DAT_14c927a9c != 0) {
      *(undefined4 *)(DAT_14c927a68 + (longlong)DAT_14c927a98 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c927a78;
  if (DAT_14c927a88 != (undefined *)0x0) {
    puVar3 = DAT_14c927a88;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c927a68;
  return param_1;
}



// FUNCTION 1468612b4 FUN_1468612b4 body=556 status=ok
// SIG undefined FUN_1468612b4(void)

void FUN_1468612b4(void)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c927aa8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c927aa8,0,0,4);
  }
  uVar3 = DAT_14c927ab0;
  if (DAT_14c927ab0 != 0) {
    uVar11 = 0;
    FUN_144a1cbf0(&DAT_14c927aa0,0,DAT_14c927ab0,4);
    if (0 < (int)uVar3) {
      do {
        puVar9 = DAT_14c927aa8;
        if (DAT_14c927aa8 == (undefined *)0x0) {
          puVar9 = &DAT_14c927aa0;
        }
        *(undefined4 *)(puVar9 + (ulonglong)(DAT_14c927ab0 + 0x7fffffff & uVar11) * 4) = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14c927a78;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14c927a90 != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = &DAT_14c927a68;
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    bVar2 = local_78._4_4_ < *(int *)(local_60 + 0x18);
    iVar13 = local_78._4_4_;
    local_78 = uVar4;
    if (bVar2) {
      do {
        lVar1 = *local_90;
        lVar6 = (longlong)iVar13;
        lVar7 = (longlong)*(int *)(lVar1 + 8 + lVar6 * 0x18);
        if (lVar7 == 0) {
          iVar8 = 0;
        }
        else {
          lVar12 = *(longlong *)(lVar1 + lVar6 * 0x18);
          lVar7 = lVar12 + lVar7 * 0x14;
          iVar8 = 0;
          do {
            iVar5 = FUN_1447addd0(lVar12,0x10);
            iVar8 = (iVar5 + iVar8 * 0x17) * 0x17 + *(int *)(lVar12 + 0x10);
            lVar12 = lVar12 + 0x14;
          } while (lVar12 != lVar7);
        }
        lVar1 = lVar1 + lVar6 * 0x18;
        uVar10 = (longlong)iVar8 & (longlong)(int)DAT_14c927ab0 - 1U;
        iVar8 = (int)uVar10;
        *(int *)(lVar1 + 0x14) = iVar8;
        puVar9 = DAT_14c927aa8;
        if (DAT_14c927aa8 == (undefined *)0x0) {
          puVar9 = &DAT_14c927aa0;
        }
        *(undefined4 *)(lVar1 + 0x10) =
             *(undefined4 *)(puVar9 + ((longlong)(int)DAT_14c927ab0 - 1U & uVar10) * 4);
        puVar9 = DAT_14c927aa8;
        if (DAT_14c927aa8 == (undefined *)0x0) {
          puVar9 = &DAT_14c927aa0;
        }
        *(int *)(puVar9 + ((longlong)iVar8 & (longlong)(int)DAT_14c927ab0 - 1U) * 4) = iVar13;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562();
        bVar2 = local_78._4_4_ < *(int *)(local_80 + 0x18);
        iVar13 = local_78._4_4_;
      } while (bVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468614e2 FUN_1468614e2 body=86 status=ok
// SIG undefined FUN_1468614e2(void)

void FUN_1468614e2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146861538 FUN_146861538 body=132 status=ok
// SIG undefined FUN_146861538(void)

void FUN_146861538(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


