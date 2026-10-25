// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1488c207a FUN_1488c207a body=48 status=ok
// SIG undefined FUN_1488c207a(void)

void FUN_1488c207a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488c21e4 FUN_1488c21e4 body=223 status=ok
// SIG undefined FUN_1488c21e4(void)

void FUN_1488c21e4(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9a3140;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)DAT_14c9a3140 >> 0x10);
    uVar3 = (uint)DAT_14c9a3140 & 0xffff;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)DAT_14c9a3140 >> 0x20) + ((uint)DAT_14c9a3140 << 0x10 | uVar3)
                    + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == DAT_14c9a3140) goto LAB_1488c22a5;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_1 + 8);
      } while (iVar4 != -1);
    }
  }
  FUN_144a13f80(param_1,local_2c,&local_28,0);
  FUN_1488c2a08(param_1[10] + 0x30,&local_28,param_2);
LAB_1488c22a5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c22c4 FUN_1488c22c4 body=223 status=ok
// SIG undefined FUN_1488c22c4(void)

void FUN_1488c22c4(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9a3140;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)DAT_14c9a3140 >> 0x10);
    uVar3 = (uint)DAT_14c9a3140 & 0xffff;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)DAT_14c9a3140 >> 0x20) + ((uint)DAT_14c9a3140 << 0x10 | uVar3)
                    + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == DAT_14c9a3140) goto LAB_1488c2385;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_1 + 8);
      } while (iVar4 != -1);
    }
  }
  FUN_144a13f80(param_1,local_2c,&local_28,0);
  FUN_1488c2a08(param_1[10] + 0x30,&local_28,param_2);
LAB_1488c2385:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c23a4 FUN_1488c23a4 body=183 status=ok
// SIG undefined FUN_1488c23a4(void)

void FUN_1488c23a4(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[0x14] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x15) = 0x101;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0xffffffff00000080;
  param_1[0x25] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x3b) = 0xffffffff00000080;
  param_1[0x3d] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((longlong)param_1 + 0x115) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 1488c245c FUN_1488c245c body=210 status=ok
// SIG undefined FUN_1488c245c(void)

void FUN_1488c245c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  undefined2 local_3c;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_144729dda(param_1 + 0x90);
  if (cVar4 != '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 0x90);
    if (((*(longlong *)(lVar5 + 0x1e0) != 0) &&
        (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1e0) + 0x30), lVar5 != 0)) &&
       (iVar1 = *(int *)(param_1 + 0x10), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar6);
        if (((lVar3 != 0) && (*(short *)(lVar3 + 4) < 0)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
          local_3c = *(undefined2 *)(lVar3 + 2);
          local_3a = *(undefined2 *)(lVar3 + 8);
          FUN_146106198(lVar5,&local_3c,param_2);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c2530 FUN_1488c2530 body=164 status=ok
// SIG undefined FUN_1488c2530(void)

undefined2 * FUN_1488c2530(longlong param_1,undefined2 *param_2,ushort *param_3,char param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  
  uVar1 = *param_3;
  uVar2 = 0xffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar4 != 0) && (*(uint *)(lVar4 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar4 + 4)) {
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar4 + 2) * 8);
        } while (-1 < *(short *)(lVar4 + 4));
        if (lVar4 == 0) goto LAB_1488c25c0;
      }
      if (*(char *)(lVar4 + 0x11c) != param_4) {
        *(char *)(lVar4 + 0x11c) = param_4;
        FUN_141323fc0(param_1,lVar4,0x40);
        FUN_141323fc0(param_1,lVar4,0x20);
      }
      uVar2 = *(undefined2 *)(lVar4 + 2);
      uVar3 = *(undefined2 *)(lVar4 + 8);
      goto LAB_1488c25c2;
    }
  }
LAB_1488c25c0:
  uVar3 = 0;
LAB_1488c25c2:
  *param_2 = uVar2;
  param_2[1] = uVar3;
  return param_2;
}



// FUNCTION 1488c25d4 FUN_1488c25d4 body=81 status=ok
// SIG undefined FUN_1488c25d4(void)

void FUN_1488c25d4(longlong param_1,ushort *param_2,undefined1 param_3)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar2 + 4)) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar2 + 2) * 8);
        } while (-1 < *(short *)(lVar2 + 4));
        if (lVar2 == 0) {
          return;
        }
      }
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        *(undefined1 *)(*(longlong *)(lVar2 + 0x10) + 0xd) = param_3;
      }
    }
  }
  return;
}



// FUNCTION 1488c2626 FUN_1488c2626 body=75 status=ok
// SIG undefined FUN_1488c2626(void)

void FUN_1488c2626(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((lVar3 != 0) && (*(short *)(lVar3 + 4) < 0)) {
        FUN_1414f506e(param_1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1488c2672 FUN_1488c2672 body=38 status=ok
// SIG undefined FUN_1488c2672(void)

undefined8 FUN_1488c2672(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c2698 FUN_1488c2698 body=38 status=ok
// SIG undefined FUN_1488c2698(void)

undefined8 FUN_1488c2698(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c26be FUN_1488c26be body=31 status=ok
// SIG undefined FUN_1488c26be(void)

undefined8 FUN_1488c26be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c2700 FUN_1488c2700 body=93 status=ok
// SIG undefined FUN_1488c2700(void)

void FUN_1488c2700(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b410440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4103d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488c275e FUN_1488c275e body=93 status=ok
// SIG undefined FUN_1488c275e(void)

void FUN_1488c275e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b410440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4103d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488c27bc FUN_1488c27bc body=126 status=ok
// SIG undefined FUN_1488c27bc(void)

void FUN_1488c27bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b410440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4103d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c282b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c283a FUN_1488c283a body=29 status=ok
// SIG undefined FUN_1488c283a(void)

undefined8 FUN_1488c283a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return param_2;
}



// FUNCTION 1488c2858 FUN_1488c2858 body=59 status=ok
// SIG undefined FUN_1488c2858(void)

undefined8 FUN_1488c2858(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [32];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c28b4 FUN_1488c28b4 body=93 status=ok
// SIG undefined FUN_1488c28b4(void)

void FUN_1488c28b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b410520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4104b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488c2912 FUN_1488c2912 body=93 status=ok
// SIG undefined FUN_1488c2912(void)

void FUN_1488c2912(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b410520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4104b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488c2970 FUN_1488c2970 body=126 status=ok
// SIG undefined FUN_1488c2970(void)

void FUN_1488c2970(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b410520;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4104b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c29df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c29ee FUN_1488c29ee body=23 status=ok
// SIG undefined FUN_1488c29ee(void)

undefined8 FUN_1488c29ee(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1488c2a08 FUN_1488c2a08 body=120 status=ok
// SIG undefined FUN_1488c2a08(void)

longlong * FUN_1488c2a08(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar5 < 1) {
    FUN_140d7698c(param_1,1);
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (uVar5 < iVar1 + 1U) {
    FUN_140eed74c(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar6 = (longlong)iVar1 * 0x30;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar6) = param_3[2];
  *(undefined8 *)(lVar2 + lVar6) = uVar3;
  ((undefined8 *)(lVar2 + lVar6))[1] = uVar4;
  *(undefined1 *)(lVar2 + 0x20 + lVar6) = 8;
  *(undefined8 *)(lVar2 + 0x28 + lVar6) = *param_2;
  return param_1;
}



// FUNCTION 1488c2a80 FUN_1488c2a80 body=31 status=ok
// SIG undefined FUN_1488c2a80(void)

undefined8 FUN_1488c2a80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c2ac0 FUN_1488c2ac0 body=93 status=ok
// SIG undefined FUN_1488c2ac0(void)

void FUN_1488c2ac0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b410600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488c2b1e FUN_1488c2b1e body=126 status=ok
// SIG undefined FUN_1488c2b1e(void)

void FUN_1488c2b1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b410600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b410590;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c2b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c2bac FUN_1488c2bac body=31 status=ok
// SIG undefined FUN_1488c2bac(void)

undefined8 FUN_1488c2bac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c2be8 FUN_1488c2be8 body=93 status=ok
// SIG undefined FUN_1488c2be8(void)

void FUN_1488c2be8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488c2c46 FUN_1488c2c46 body=93 status=ok
// SIG undefined FUN_1488c2c46(void)

void FUN_1488c2c46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488c2ca4 FUN_1488c2ca4 body=126 status=ok
// SIG undefined FUN_1488c2ca4(void)

void FUN_1488c2ca4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403f60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b410670;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c2d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c2d30 FUN_1488c2d30 body=31 status=ok
// SIG undefined FUN_1488c2d30(void)

undefined8 FUN_1488c2d30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c2d6c FUN_1488c2d6c body=93 status=ok
// SIG undefined FUN_1488c2d6c(void)

void FUN_1488c2d6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fdf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4106e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488c2dca FUN_1488c2dca body=93 status=ok
// SIG undefined FUN_1488c2dca(void)

void FUN_1488c2dca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fdf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4106e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488c2e28 FUN_1488c2e28 body=126 status=ok
// SIG undefined FUN_1488c2e28(void)

void FUN_1488c2e28(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fdf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4106e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c2e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c2eb4 FUN_1488c2eb4 body=368 status=ok
// SIG undefined FUN_1488c2eb4(void)

undefined4 * FUN_1488c2eb4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c5355e(param_1,local_48);
  lVar8 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(lVar8 + 0x18);
  *(byte *)(local_40 + 4) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(local_40 + 2,lVar8 + 8);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145c5349c(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x2c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145c5364e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c3026 FUN_1488c3026 body=122 status=ok
// SIG undefined FUN_1488c3026(void)

void FUN_1488c3026(longlong *param_1,int param_2)

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



// FUNCTION 1488c30a0 FUN_1488c30a0 body=87 status=ok
// SIG undefined FUN_1488c30a0(void)

void FUN_1488c30a0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1412dcf7e();
  return;
}



// FUNCTION 1488c30f8 FUN_1488c30f8 body=86 status=ok
// SIG undefined FUN_1488c30f8(void)

void FUN_1488c30f8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1400b465c();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001488c314b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x4e8))(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1488c314e FUN_1488c314e body=49 status=ok
// SIG undefined FUN_1488c314e(void)

void FUN_1488c314e(longlong param_1,undefined8 param_2)

{
  FUN_140bbc048();
  FUN_1401fa4aa(param_2,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  return;
}



// FUNCTION 1488c3180 FUN_1488c3180 body=218 status=ok
// SIG undefined FUN_1488c3180(void)

void FUN_1488c3180(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_140bc0bd4();
  if ((param_2 != 0) && (plVar5 = *(longlong **)(param_2 + 0xa8), plVar5 != (longlong *)0x0)) {
    uVar4 = FUN_1408e1156();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4,*plVar5,param_4,param_5);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_1408e1156();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (((plVar6 != (longlong *)0x0 && plVar5 != plVar6) &&
          (lVar7 = (**(code **)(*plVar6 + 0xb8))(plVar6,param_2), lVar7 != 0)) &&
         (iVar2 = *(int *)(lVar7 + 0x98), (longlong)iVar2 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x30);
        lVar7 = *(longlong *)(lVar7 + 0x90);
        lVar8 = 0;
        do {
          if ((*(longlong *)(lVar7 + lVar8) == lVar3) &&
             (plVar5 = *(longlong **)(lVar7 + 0xe8 + lVar8), plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x2b0))();
            pbVar1 = (byte *)(lVar7 + 0x15 + lVar8);
            *pbVar1 = *pbVar1 & 0xf7;
          }
          lVar8 = lVar8 + 0xf0;
        } while ((longlong)iVar2 * 0xf0 - lVar8 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1488c3260 FUN_1488c3260 body=26 status=ok
// SIG undefined FUN_1488c3260(void)

undefined8 FUN_1488c3260(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x18);
  return param_2;
}



// FUNCTION 1488c327a FUN_1488c327a body=866 status=ok
// SIG undefined FUN_1488c327a(void)

void FUN_1488c327a(longlong param_1,longlong *param_2,char param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8 [12];
  longlong local_178 [2];
  undefined8 local_168;
  longlong local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148 [12];
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((*(longlong *)(param_1 + 0x48) == 0) || (*(longlong *)(param_1 + 0x40) == 0))
  goto LAB_1488c35a5;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140067708();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  if (param_2[2] == 0) {
    if ((lVar5 == 0) || (*param_2 == 0)) goto LAB_1488c35a5;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_1488c35a5;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
    param_2[2] = lVar5;
    if (lVar5 == 0) goto LAB_1488c35a5;
  }
  FUN_14026e798(&local_160,*(undefined8 *)(param_1 + 0x40));
  if (local_160 != 0) {
    FUN_141302974(&local_168,0);
    lVar5 = local_160;
    if (param_3 == '\0') {
      local_150 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18);
      FUN_1400021e4(&local_150,local_178);
      local_208 = (undefined8 *)((ulonglong)local_208 & 0xffffffffffffff00);
      FUN_14084a140(lVar5,&local_150,local_178,0);
      FUN_1403c75f4(&local_168,&local_150);
      FUN_144a61ac8(&local_150);
      if (local_178[0] != 0) {
        FUN_1400020a8();
      }
      uVar4 = local_168;
      FUN_140a9d2f2(local_160,local_1d8,*(undefined8 *)(param_1 + 0xc));
      puVar6 = local_1d8;
      puVar7 = local_148;
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_e8 = 0x3f800000;
      local_e0 = 0;
      local_dc = 0;
      FUN_14150591e(uVar4);
    }
    else {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0x3ff00000;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_84 = 0x3ff00000;
      uStack_80 = 0;
      uStack_7c = 0x3ff00000;
      local_78 = 0x3ff0000000000000;
      uStack_70 = 0;
      local_68 = 0x3f800000;
      local_60 = 0;
      local_5c = 0;
      uVar4 = *(undefined8 *)(param_1 + 0xc);
      FUN_1400021e4(param_1 + 0xc,local_178);
      local_200 = 0;
      local_208 = &local_c8;
      FUN_14071b0f2(lVar5,&local_150,local_178,uVar4);
      FUN_1403c75f4(&local_168,&local_150);
      FUN_144a61ac8(&local_150);
      if (local_178[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (param_4 != 0) {
      local_208 = (undefined8 *)((ulonglong)local_208 & 0xffffffffffffff00);
      FUN_1447997cc(local_168,param_4,param_5,0);
    }
    uVar4 = FUN_141362a3e(local_160);
    local_208 = (undefined8 *)((ulonglong)local_208 & 0xffffffff00000000);
    FUN_14071ab80(local_168,&local_1f0,param_2,uVar4);
    local_1f0 = 0;
    local_1e8 = 0xffffffffffffffff;
    FUN_144a61ac8(&local_168);
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_158 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_158 + 0x10))(local_158);
      }
    }
  }
LAB_1488c35a5:
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c35de FUN_1488c35de body=214 status=ok
// SIG undefined FUN_1488c35de(void)

undefined8 FUN_1488c35de(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined2 **)(param_1 + 0x68);
  if (local_48 == (undefined2 *)0x0) {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
  }
  else {
    FUN_1400021e4(&local_48,&local_38);
    puVar1 = local_38;
    if ((int)uStack_30 != 0) goto LAB_1488c3638;
  }
  puVar1 = &DAT_149dfb77a;
LAB_1488c3638:
  FUN_1400021e4(param_1 + 0x48,&local_48);
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Modifies \'%ls\' material parameter by curve \'%ls\'.",puVar2,puVar1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488c36b6 FUN_1488c36b6 body=165 status=ok
// SIG undefined FUN_1488c36b6(void)

void FUN_1488c36b6(longlong param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xef;
  lVar2 = FUN_14078431e(param_2,*(longlong *)(param_1 + 0x50) + 0x48);
  if (lVar2 != 0) {
    lVar3 = FUN_1447e736e(*(longlong *)(param_1 + 0x50) + 0x58);
    if (lVar3 != 0) {
      param_3 = param_3 + *(float *)(param_1 + 100);
      *(float *)(param_1 + 100) = param_3;
      if (param_3 < *(float *)(param_1 + 0x60)) {
        fVar4 = (float)FUN_1449e6cbc(lVar3,param_3);
        cVar1 = *(char *)(*(longlong *)(param_1 + 0x50) + 0x50);
        *(undefined1 *)(lVar2 + 0x18) = 1;
        if (cVar1 == '\0') {
          *(float *)(lVar2 + 8) = fVar4 + *(float *)(lVar2 + 8);
        }
        else if (cVar1 == '\x02') {
          *(float *)(lVar2 + 0x10) = fVar4;
        }
        else if (cVar1 == '\x01') {
          *(float *)(lVar2 + 0xc) = fVar4 * *(float *)(lVar2 + 0xc);
        }
        *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 0x10;
      }
    }
  }
  return;
}



// FUNCTION 1488c375c FUN_1488c375c body=123 status=ok
// SIG undefined FUN_1488c375c(void)

undefined8 FUN_1488c375c(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 0x48,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Modifies \'%ls\' material parameter by input.",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488c37d8 FUN_1488c37d8 body=202 status=ok
// SIG undefined FUN_1488c37d8(void)

void FUN_1488c37d8(longlong param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0x30);
  fVar5 = fVar1 - *(float *)(param_1 + 0x60);
  fVar4 = fVar1;
  if (1e-08 <= fVar5 * fVar5) {
    param_3 = param_3 * *(float *)(*(longlong *)(param_1 + 0x50) + 0x54);
    if (param_3 <= fVar5) {
      fVar5 = param_3;
    }
    if (fVar5 <= -param_3) {
      fVar5 = -param_3;
    }
    fVar4 = *(float *)(param_1 + 0x60) + fVar5;
  }
  *(float *)(param_1 + 0x60) = fVar4;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xef | (fVar4 != fVar1) << 4;
  lVar3 = FUN_14078431e(param_2,*(longlong *)(param_1 + 0x50) + 0x48);
  if (lVar3 != 0) {
    fVar1 = *(float *)(param_1 + 0x60);
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x50) + 0x50);
    *(undefined1 *)(lVar3 + 0x18) = 1;
    if (cVar2 == '\0') {
      *(float *)(lVar3 + 8) = fVar1 + *(float *)(lVar3 + 8);
    }
    else if (cVar2 == '\x02') {
      *(float *)(lVar3 + 0x10) = fVar1;
    }
    else if (cVar2 == '\x01') {
      *(float *)(lVar3 + 0xc) = fVar1 * *(float *)(lVar3 + 0xc);
    }
  }
  return;
}



// FUNCTION 1488c38a2 FUN_1488c38a2 body=273 status=ok
// SIG undefined FUN_1488c38a2(void)

undefined8 FUN_1488c38a2(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_3 + 0x48);
  if (lVar3 != 0) {
    lVar5 = FUN_144a74fb4();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (lVar3 = *(longlong *)(lVar3 + 0xae8), lVar3 != 0)) {
      lVar5 = FUN_1407831c2();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        uVar6 = FUN_14001cc68(0xa0,0x10);
        local_28 = *param_2;
        plVar4 = (longlong *)param_2[1];
        local_20 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          FUN_1488c39b4(uVar6,&local_28);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_1488c39b4(uVar6);
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
        }
        goto LAB_1488c38e5;
      }
    }
  }
  uVar6 = 0;
LAB_1488c38e5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c39b4 FUN_1488c39b4 body=261 status=ok
// SIG undefined FUN_1488c39b4(void)

undefined8 * FUN_1488c39b4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140e18e3c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140e18e3c(param_1);
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
  }
  *param_1 = &PTR_FUN_14b410a00;
  param_1[10] = *param_2;
  lVar4 = param_2[1];
  param_1[0xb] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3f80000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xf0;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xe0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c3aba FUN_1488c3aba body=190 status=ok
// SIG undefined FUN_1488c3aba(void)

undefined8 FUN_1488c3aba(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14475cc44(param_1 + 0x70,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1400021e4(param_1 + 0x18,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"Skeletal control %s modifies a blend space node %s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c3b7a FUN_1488c3b7a body=980 status=ok
// SIG undefined FUN_1488c3b7a(void)

void FUN_1488c3b7a(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *_Dst;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
LAB_1488c3bc4:
    param_3 = 0;
  }
  else {
    lVar5 = FUN_1407831c2();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_1488c3bc4;
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  cVar1 = *(char *)(lVar5 + 0x48);
  *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xfd | cVar1 * '\x02';
  if (cVar1 == '\0') {
    bVar4 = 0;
  }
  else {
    bVar4 = ((byte)(*(char *)(lVar5 + 0xa0) - 3U) < 2) << 4;
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xef | bVar4;
  lVar5 = FUN_14018aa1e(lVar5 + 0x68);
  if (lVar5 != 0) {
    lVar6 = FUN_1405b04b6();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | 1;
      lVar6 = FUN_1433eddb2(lVar5,0);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(lVar6 + 0x14);
      if (*(char *)(*(longlong *)(param_1 + 0x50) + 100) == '\0') {
        _Dst = (undefined8 *)FUN_14001cc68(0xb0);
        memset(_Dst,0,0xb0);
        FUN_1474c556e(_Dst);
        *_Dst = &PTR_FUN_14b0a1f40;
        _Dst[0x14] = 0;
        _Dst[0x15] = 0;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar5);
        }
        _Dst[0x12] = lVar5;
        FUN_1470d7c5a(param_3,_Dst);
        lVar5 = *(longlong *)(param_1 + 0x50);
        if (*(char *)(lVar5 + 0x66) == '\x01') {
          if (*(char *)(lVar5 + 0x65) == '\x01') {
            puVar7 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
            FUN_14594f834(puVar7);
            *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x3f800000;
          }
          else {
            puVar7 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
            FUN_1409bd804(puVar7);
            *(undefined4 *)(puVar7 + 7) = 0x3f800000;
          }
          puVar10 = puVar7 + 5;
        }
        else {
          puVar7 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
          puVar7[1] = 0;
          *(undefined2 *)(puVar7 + 2) = 0;
          *puVar7 = &PTR_FUN_14a42a530;
          puVar7[3] = 0;
          *(undefined4 *)(puVar7 + 4) = 0xffffffff;
          puVar7[5] = 0;
          puVar7[6] = 0;
          *(undefined1 *)(puVar7 + 7) = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xe] = 0;
          puVar7[0xf] = 0;
          puVar7[0x10] = 0;
          puVar7[0x11] = 0;
          puVar7[0x12] = 0;
          puVar7[0x13] = 0;
          puVar7[0x14] = 0;
          puVar7[0x15] = 0;
          *(undefined1 *)(puVar7 + 0x16) = 0;
          puVar7[0x17] = 0;
          puVar7[0x18] = 0;
          puVar7[0x19] = 0;
          puVar7[0x1a] = 0;
          *(undefined8 *)((longlong)puVar7 + 0xd2) = 0;
          *(undefined8 *)((longlong)puVar7 + 0xda) = 0;
          *(undefined8 *)((longlong)puVar7 + 0xe4) = 0xffffffff;
          *(undefined1 *)((longlong)puVar7 + 0xec) = 0;
          *(undefined1 *)(puVar7 + 0x1d) = *(undefined1 *)(lVar5 + 0x65);
          *(undefined1 *)((longlong)puVar7 + 0xea) = 5;
          *(undefined4 *)(puVar7 + 0xb) = 1;
          FUN_1488c92bc(puVar7 + 10);
          puVar10 = (undefined8 *)puVar7[10];
          *puVar10 = 0;
          iVar2 = *(int *)(lVar5 + 0x98);
          _Src = *(void **)(lVar5 + 0x90);
          *(int *)(puVar10 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
          }
          else {
            FUN_1407f9b1e(puVar10,iVar2,0);
            memcpy((void *)*puVar10,_Src,(longlong)iVar2 * 0xc);
          }
          iVar2 = *(int *)(puVar7 + 0xd);
          *(uint *)(puVar7 + 0xd) = iVar2 + 1U;
          if (*(uint *)((longlong)puVar7 + 0x6c) < iVar2 + 1U) {
            FUN_14475e4ac(puVar7 + 0xc,iVar2);
          }
          *(undefined4 *)(puVar7[0xc] + (longlong)iVar2 * 4) = 0x3f800000;
          FUN_140554dd8(puVar7 + 5,1);
          puVar10 = (undefined8 *)puVar7[5];
        }
        FUN_1433dc002(puVar10,_Dst);
        FUN_1408d5e6c(param_3,puVar7);
        *(undefined8 **)(param_1 + 0x68) = _Dst;
      }
      else {
        FUN_1488c3f50(param_3,&local_58);
        lVar5 = local_58;
        if ((longlong)local_50 != 0) {
          lVar6 = 0;
          do {
            plVar3 = *(longlong **)(lVar5 + lVar6);
            lVar8 = (**(code **)(*plVar3 + 0x198))(plVar3);
            lVar9 = FUN_14018aa1e(*(longlong *)(param_1 + 0x50) + 0x68);
            if (lVar8 == lVar9) {
              *(longlong **)(param_1 + 0x68) = plVar3;
              break;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)local_50 * 8 != lVar6);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1488c3c37;
    }
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xef;
LAB_1488c3c37:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c3f50 FUN_1488c3f50 body=205 status=ok
// SIG undefined FUN_1488c3f50(void)

longlong * FUN_1488c3f50(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (longlong *)FUN_140721bac(*(undefined8 *)(param_1 + 0x10));
  if (plVar5 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    iVar4 = (int)plVar5[1];
    if (0 < iVar4) {
      iVar7 = 0;
      iVar8 = -1;
      do {
        lVar2 = *(longlong *)(*plVar5 + (longlong)(iVar4 + iVar8) * 8);
        if (lVar2 != 0) {
          lVar3 = *(longlong *)(lVar2 + 0x70);
          lVar6 = FUN_146330a02();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            iVar4 = *(int *)(lVar2 + 0x44);
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1488c933a(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = iVar4 + param_1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar4 = (int)plVar5[1];
        iVar8 = iVar8 + -1;
      } while (iVar7 < iVar4);
    }
  }
  return param_2;
}



// FUNCTION 1488c4028 FUN_1488c4028 body=343 status=ok
// SIG undefined FUN_1488c4028(void)

void FUN_1488c4028(longlong param_1,float param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x20);
  bVar2 = *(byte *)(plVar3 + 3);
  bVar6 = *pbVar1;
  if ((bVar6 & 0x40) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    if ((((*(char *)(lVar4 + 0x4a) == '\x01') && (param_2 = 0.0, 0.0 < *(float *)(lVar4 + 0x50))) &&
        (*(char *)(lVar4 + 0xa0) == '\x02')) && (0.0 < *(float *)(lVar4 + 0xe0))) {
      param_2 = *(float *)(param_1 + 0x70) / *(float *)(lVar4 + 0xe0);
      auVar8 = roundps(ZEXT416((uint)param_2),ZEXT416((uint)param_2),2);
      *(int *)(param_1 + 0x28) = auVar8._0_4_;
    }
    bVar6 = bVar6 & 0xbf;
    *pbVar1 = bVar6;
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,pbVar1,param_3);
  bVar7 = *(byte *)(param_1 + 0x20);
  if ((bVar7 & 2) == 0) {
    if ((bVar7 & 0x20) == 0) goto LAB_1488c4124;
    bVar7 = 0xdf;
LAB_1488c416b:
    FUN_1488c4180(param_1);
  }
  else {
    bVar7 = (byte)*(undefined4 *)(param_1 + 0x98);
    bVar5 = bVar7 & 0xe1;
    if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x49) == '\0') {
      bVar5 = bVar7;
    }
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(byte *)(param_1 + 0x98) = bVar5 & 0xe3;
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_140784a8a(param_1 + 0x90);
    bVar7 = 0xfd;
    if ((*(float *)(param_1 + 0x30) != 0.0) || (NAN(*(float *)(param_1 + 0x30))))
    goto LAB_1488c416b;
  }
  bVar7 = bVar7 & *pbVar1;
  *pbVar1 = bVar7;
LAB_1488c4124:
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0xa0) == '\0') {
    FUN_1488c4236(param_1);
  }
  else {
    *pbVar1 = bVar7 | 0x10;
  }
  if ((bVar6 & 6) == 4) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *pbVar1 = *pbVar1 & 0xd7 | (bVar2 & 1) << 3;
  return;
}



// FUNCTION 1488c4180 FUN_1488c4180 body=182 status=ok
// SIG undefined FUN_1488c4180(void)

void FUN_1488c4180(longlong param_1)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  
  *(undefined8 *)(param_1 + 0x7c) = 0;
  bVar2 = *(byte *)(param_1 + 0x98);
  bVar4 = bVar2 & 0xe7;
  *(byte *)(param_1 + 0x98) = bVar4;
  fVar1 = *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x78) = fVar1;
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(lVar3 + 0x49) != '\0') {
    bVar4 = bVar2 & 0xe5 | (0.0 < fVar1) * '\x02';
  }
  *(byte *)(param_1 + 0x98) = bVar4 & 0xe3 | bVar4 * '\x02' & 4;
  if ((bVar4 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_140784a8a(param_1 + 0x90);
    return;
  }
  FUN_1487d5b03(param_1 + 0x70,fVar1,lVar3 + 0xa0,*(undefined4 *)(param_1 + 0x88),
                *(undefined4 *)(lVar3 + 0xe0),param_1 + 0x90);
  return;
}



// FUNCTION 1488c4236 FUN_1488c4236 body=140 status=ok
// SIG undefined FUN_1488c4236(void)

void FUN_1488c4236(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_48 [32];
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x68);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x98) & 1) != 0)) {
    fVar2 = *(float *)(param_1 + 0x70);
    if (0.0 < *(float *)(param_1 + 0x74)) {
      fVar2 = (float)FUN_1447c7e44();
      plVar1 = *(longlong **)(param_1 + 0x68);
    }
    local_28 = (double)fVar2;
    local_20 = 0x3ff0000000000000;
    local_18 = 0;
    (**(code **)(*plVar1 + 0x1e8))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c42dc FUN_1488c42dc body=379 status=ok
// SIG undefined FUN_1488c42dc(void)

void FUN_1488c42dc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar5 = *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x78) = fVar5;
  bVar2 = *(byte *)(param_1 + 0x98);
  if ((bVar2 & 8) != 0) {
    FUN_1488c4458(param_1,param_2);
    fVar5 = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar5;
    bVar2 = *(byte *)(param_1 + 0x98);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(lVar1 + 0x49) == '\x01') {
    bVar2 = bVar2 & 0xfd | (0.0 < fVar5) * '\x02';
    *(byte *)(param_1 + 0x98) = bVar2;
  }
  if ((bVar2 & 2) == 0) {
    if ((bVar2 & 4) != 0) {
      if (*(char *)(lVar1 + 0xe8) == '\0') {
        if (1 < (byte)(*(char *)(lVar1 + 0xa0) - 3U)) {
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
      }
      else {
        *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 8;
      }
    }
    if ((*(byte *)(param_1 + 0x94) & 8) == 0) goto LAB_1488c43e5;
    lVar3 = lVar1 + 0xe8;
    uVar4 = 0;
    if (*(char *)(lVar1 + 0xe8) != '\x02') {
      uVar4 = *(undefined4 *)(lVar1 + 0xe0);
    }
    uVar6 = *(undefined4 *)(param_1 + 0x8c);
  }
  else {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xf7;
    uVar4 = *(undefined4 *)(lVar1 + 0xe0);
    uVar6 = *(undefined4 *)(param_1 + 0x88);
    lVar3 = lVar1 + 0xa0;
  }
  FUN_1487d58c8(param_2,param_1 + 0x70,fVar5,lVar3,uVar6,uVar4,param_1 + 0x90);
LAB_1488c43e5:
  bVar2 = *(byte *)(param_1 + 0x98);
  *(byte *)(param_1 + 0x98) = bVar2 & 0xfb | bVar2 * '\x02' & 4;
  if (((bVar2 & 8) == 0) && ((*(byte *)(param_1 + 0x94) & 10) == 2)) {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xef;
  }
  FUN_1488c4236(param_1);
  return;
}



// FUNCTION 1488c4458 FUN_1488c4458 body=316 status=ok
// SIG undefined FUN_1488c4458(void)

void FUN_1488c4458(longlong param_1,float param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = *(byte *)(param_1 + 0x98);
  if ((bVar1 & 0x10) == 0) {
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x50) + 0x54);
    fVar5 = *(float *)(param_1 + 0x80);
    fVar3 = fVar5;
    if (0.0 < fVar2) {
      fVar4 = fVar5 - *(float *)(param_1 + 0x7c);
      if (1e-08 <= fVar4 * fVar4) {
        fVar2 = fVar2 * param_2;
        if (fVar2 <= fVar4) {
          fVar4 = fVar2;
        }
        if (fVar4 <= -fVar2) {
          fVar4 = -fVar2;
        }
        fVar3 = *(float *)(param_1 + 0x7c) + fVar4;
      }
    }
    *(float *)(param_1 + 0x7c) = fVar3;
    if (1e-08 < ABS(fVar3 - fVar5)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x5c);
    bVar1 = bVar1 | 0x10;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x84);
    if (0.0 < fVar2) {
      fVar2 = fVar2 - param_2;
      *(float *)(param_1 + 0x84) = fVar2;
      if (fVar2 <= 0.0) {
        param_2 = param_2 + fVar2;
      }
    }
    if (0.0 < fVar2) {
      return;
    }
    fVar5 = 0.0;
    fVar2 = 0.0 - *(float *)(param_1 + 0x7c);
    if (1e-08 <= fVar2 * fVar2) {
      param_2 = param_2 * *(float *)(*(longlong *)(param_1 + 0x50) + 0x60);
      if (param_2 <= fVar2) {
        fVar2 = param_2;
      }
      if (fVar2 <= -param_2) {
        fVar2 = -param_2;
      }
      fVar5 = *(float *)(param_1 + 0x7c) + fVar2;
    }
    *(float *)(param_1 + 0x7c) = fVar5;
    if (1e-08 < ABS(fVar5)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    bVar1 = bVar1 & 0xe7;
  }
  *(byte *)(param_1 + 0x98) = bVar1;
  return;
}



// FUNCTION 1488c4594 FUN_1488c4594 body=190 status=ok
// SIG undefined FUN_1488c4594(void)

undefined8 FUN_1488c4594(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_1 + 0x48,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1400021e4(param_1 + 0x18,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"Skeletal control %s modifies bone %s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c4654 FUN_1488c4654 body=3 status=ok
// SIG undefined FUN_1488c4654(void)

undefined8 FUN_1488c4654(void)

{
  return 0;
}



// FUNCTION 1488c46f8 FUN_1488c46f8 body=172 status=ok
// SIG undefined FUN_1488c46f8(void)

void FUN_1488c46f8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1418a625b(param_2);
  if (lVar1 != 0) {
    local_58 = 0;
    local_48 = 0;
    puStack_50 = &DAT_3f800000ffffffff;
    local_40 = 0;
    uStack_38 = 0;
    FUN_148942142(local_70,param_1 + 0x30);
    FUN_14164c0ba(lVar1,local_70,&local_58);
    FUN_140de863f(local_40,uStack_38 & 0xffffffff);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c47d0 FUN_1488c47d0 body=202 status=ok
// SIG undefined FUN_1488c47d0(void)

void FUN_1488c47d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x30);
    lVar8 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
      lVar5 = plVar7[1];
      if (lVar5 == 0) {
        uVar4 = FUN_140feeb70();
        lVar5 = FUN_14477b664(uVar4);
        plVar7[1] = lVar5;
      }
      lVar6 = plVar7[2];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if (*plVar7 != 0) {
            plVar1 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar6 = FUN_144aff482(uVar4,plVar7);
            }
            plVar7[2] = lVar6;
          }
        }
      }
      FUN_14117f118(uVar3,lVar6);
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1488c489a FUN_1488c489a body=46 status=ok
// SIG undefined FUN_1488c489a(void)

void FUN_1488c489a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b410b40;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x10;
  return;
}



// FUNCTION 1488c48c8 FUN_1488c48c8 body=919 status=ok
// SIG undefined FUN_1488c48c8(void)

void FUN_1488c48c8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_140082f10();
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    lVar4 = FUN_144a6c4d8();
    if (*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30) {
      return;
    }
    param_2 = (longlong *)(**(code **)(*param_2 + 0x5e8))(param_2);
    if (param_2 == (longlong *)0x0) {
      return;
    }
    lVar4 = FUN_140082f10();
    if (*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30) {
      return;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar5 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (lVar6 == 0) {
    if (lVar4 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      return;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,plVar1);
    *(longlong *)(param_1 + 0x40) = lVar6;
    if (lVar6 == 0) {
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
  }
  if (lVar4 == 0) {
    uVar5 = FUN_1406ef318(lVar6);
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar4;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0'))
      {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(param_1 + 0x40) = lVar6;
    }
  }
  cVar3 = FUN_1409501fe(lVar6,param_2);
  if (cVar3 != '\0') {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar5 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar4;
  }
  if (((*(longlong *)(param_1 + 0x40) == 0) && (lVar4 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      uVar5 = FUN_144aff482(uVar5,plVar1);
    }
    *(undefined8 *)(param_1 + 0x40) = uVar5;
  }
  lVar4 = FUN_1407d824e();
  if (lVar4 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar5 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar4;
  }
  if (((*(longlong *)(param_1 + 0x40) == 0) && (lVar4 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      uVar5 = FUN_144aff482(uVar5,plVar1);
    }
    *(undefined8 *)(param_1 + 0x40) = uVar5;
  }
  lVar4 = FUN_1407d824e();
  lVar4 = (**(code **)(*param_2 + 0x7e0))(param_2,lVar4 + 0x1c);
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    if (lVar6 == 0) {
      uVar5 = FUN_1406ef318();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x38) = lVar6;
    }
    if (((*(longlong *)(param_1 + 0x40) == 0) && (lVar6 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar5 = FUN_144aff482(uVar5,plVar1);
      }
      *(undefined8 *)(param_1 + 0x40) = uVar5;
    }
    FUN_1407d853c(lVar4);
    return;
  }
  return;
}



// FUNCTION 1488c4c60 FUN_1488c4c60 body=54 status=ok
// SIG undefined FUN_1488c4c60(void)

undefined8 FUN_1488c4c60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  while( true ) {
    lVar1 = (**(code **)(lVar1 + 8))(param_1);
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != lVar2) break;
    lVar1 = *param_1;
  }
  return 0;
}



// FUNCTION 1488c4c96 FUN_1488c4c96 body=280 status=ok
// SIG undefined FUN_1488c4c96(void)

undefined8 *
FUN_1488c4c96(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  code *pcVar1;
  void *_Src;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  void **local_58;
  void *local_50;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143d9f116(param_1,&local_50);
  _Src = local_50;
  pcVar1 = (code *)*param_4;
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
    *(int *)(param_2 + 1) = local_48;
    if ((longlong)local_48 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,local_48,0);
      memcpy((void *)*param_2,_Src,(longlong)local_48 * 2);
    }
  }
  else {
    local_3c = 0;
    local_40 = 0xffffffff;
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_58 = &local_50;
    (*pcVar1)(param_2,uVar2,&local_40,&local_3c);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c4db0 FUN_1488c4db0 body=573 status=ok
// SIG undefined FUN_1488c4db0(void)

undefined8 FUN_1488c4db0(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  longlong local_b0;
  undefined1 local_9c [4];
  longlong *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_d8 = *(undefined8 *)(param_1 + 8);
  FUN_1400021e4(&local_d8,local_d0);
  FUN_14146ec20(local_c0,local_d0);
  FUN_1400b22c2(local_e8,"{attribute}");
  local_98 = local_e8;
  local_90 = local_c0;
  FUN_1472ad862(&local_88,local_9c,&local_98,0);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
    pwVar1 = L"==";
    break;
  case 1:
    pwVar1 = L"!=";
    break;
  case 2:
    pwVar1 = L">";
    break;
  case 3:
    pwVar1 = L">=";
    break;
  case 4:
    pwVar1 = L"<";
    break;
  case 5:
    pwVar1 = L"<=";
    break;
  default:
    pwVar1 = L"invalid_compare";
  }
  FUN_140230a18(local_c0,pwVar1);
  FUN_1400b22c2(local_e8,"{comparetype}");
  local_98 = local_e8;
  local_90 = local_c0;
  FUN_1472ad862(&local_88,&local_d8,&local_98,0);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_14681a812(local_c0,*(undefined4 *)(param_1 + 0x28));
  FUN_1400b22c2(local_e8,"{comparevalue}");
  local_98 = local_e8;
  local_90 = local_c0;
  FUN_1472ad862(&local_88,&local_d8,&local_98,0);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a69a60(param_2,L"Bool: {attribute} {comparetype} {comparevalue}",&local_88);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(&local_88);
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488c4fee FUN_1488c4fee body=456 status=ok
// SIG undefined FUN_1488c4fee(void)

undefined8 * FUN_1488c4fee(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_80;
  undefined7 uStack_7f;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar3 = &local_80;
  FUN_1448729ea(param_1 + 0xf8,puVar3);
  uVar2 = FUN_14005fbd2(puVar3,1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT71(uStack_7f,local_80));
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_58 = 0;
  FUN_14575a19a(&local_80,0);
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e8 = 0;
  local_e0 = 1;
  local_b8 = &local_a8;
  FUN_1403695ab(&local_98,param_1 + 0x90,uVar2,&local_80);
  FUN_144a5ac3a(&local_80);
  if ((int)uStack_90 < 1) {
    *param_2 = 0;
    *(undefined4 *)param_2 = 1;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    FUN_140265f12();
    param_2[8] = &DAT_14cb83310;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[7] = &PTR_FUN_14b1828b0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
  }
  else {
    FUN_1415c753c(param_2,local_98);
  }
  FUN_14036924e(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c51b8 FUN_1488c51b8 body=722 status=ok
// SIG undefined FUN_1488c51b8(void)

longlong FUN_1488c51b8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [104];
  undefined1 local_230 [40];
  undefined4 local_208;
  undefined1 local_200 [40];
  undefined4 local_1d8;
  longlong local_128 [3];
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong local_c8 [4];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_140e7cc9e(param_1,local_128,param_2);
  lVar5 = FUN_140e7cf58(param_1,param_2,local_128);
  if (local_e8 != 0) {
    if (local_d8 == (longlong *)0x0) {
      local_d8 = local_c8;
    }
    (**(code **)(*local_d8 + 0x10))();
  }
  if (lVar5 == 0) goto LAB_1488c538c;
  FUN_140e7cdd6(param_1,param_2,lVar5);
  local_c8[0] = 0;
  local_c8[1] = 0x8000000000;
  local_c8[2] = 0xffffffff;
  local_128[0] = 0;
  local_128[1] = 0;
  local_128[2] = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xf8) + 0x80);
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 0xf8) + 0x88);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar6 == 0) {
    if ((*(char *)(param_1 + 0x149) == '\x01') && (1 < *(int *)(param_1 + 0x158))) {
      cVar4 = FUN_14088c870(local_128);
      if (cVar4 != '\0') goto LAB_1488c5304;
    }
    local_200[0] = 0;
    local_1d8 = 0;
    FUN_1456bb102(local_200,*(undefined8 *)(param_2 + 0xe8));
    FUN_1488c4fee(param_1,local_298,local_200);
    FUN_144a5ac3a(local_200);
    local_230[0] = 0;
    local_208 = 0;
    FUN_1456bb102(local_230,*(undefined8 *)(param_2 + 0x18));
    FUN_140368c94(local_298,local_200,local_230,0);
    FUN_140a6a9d4(local_128);
    FUN_140368b56(local_200);
    FUN_144a5ac3a(local_230);
    FUN_140372a38(local_298);
  }
  else {
    FUN_1407b25f0(local_128);
  }
LAB_1488c5304:
  if (local_128[0] != 0) {
    if ((longlong)(int)uStack_110 != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(local_128[2] + lVar6) == 0) goto LAB_1488c534d;
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)uStack_110 * 8 != lVar6);
    }
    FUN_1488c548c(param_1,lVar5,local_128);
  }
LAB_1488c534d:
  FUN_140e7d272(param_1,param_2,lVar5);
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
  FUN_140368b56(local_128);
LAB_1488c538c:
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c548c FUN_1488c548c body=232 status=ok
// SIG undefined FUN_1488c548c(void)

void FUN_1488c548c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x160) == '\0') {
    *(undefined1 *)(param_2 + 0x530) = 1;
    *(undefined8 *)(param_2 + 0x534) = 0;
  }
  else if (*(longlong *)(param_1 + 0x164) != 0) {
    *(undefined1 *)(param_2 + 0x530) = 1;
    *(undefined8 *)(param_2 + 0x534) = *(undefined8 *)(param_1 + 0x164);
  }
  if (*(char *)(param_1 + 0x16c) == '\x01') {
    *(undefined1 *)(param_2 + 0x651) = 1;
  }
  *(undefined1 *)(param_2 + 0x650) = 1;
  local_80 = 0;
  FUN_14485c47a(&local_80,param_2);
  local_68 = 0;
  local_58 = &PTR_LAB_14b411010;
  local_48 = local_80;
  local_78 = FUN_143da0968;
  local_50 = param_1;
  FUN_140f6405a(param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c5576 FUN_1488c5576 body=142 status=ok
// SIG undefined FUN_1488c5576(void)

void FUN_1488c5576(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  undefined1 local_148 [24];
  longlong local_130;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_140cf02e4(param_2,local_148);
  if (local_130 != 0) {
    lVar1 = FUN_1488c51b8(param_1,local_148);
    if (lVar1 != 0) {
      FUN_140e7cb28(param_2,lVar1);
    }
  }
  FUN_1415c74ac(param_2);
  FUN_1415c74b4(local_148);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c5606 FUN_1488c5606 body=1113 status=ok
// SIG undefined FUN_1488c5606(void)

longlong * FUN_1488c5606(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [104];
  undefined1 local_220 [40];
  undefined4 local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined4 local_1c8;
  longlong local_118 [3];
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_b8 = 0;
  local_b0 = 0x8000000000;
  uStack_a8 = 0xffffffff;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_58 = 1;
  local_54 = 0;
  uStack_4c = 0;
  if (((*(char *)(param_1 + 0x149) != '\x01') || (*(int *)(param_1 + 0x158) < 2)) ||
     (cVar5 = FUN_14088c870(local_118), cVar5 == '\0')) {
    uVar7 = FUN_14050d8a4(param_3);
    local_1f0 = (longlong *)((ulonglong)local_1f0 & 0xffffffffffffff00);
    local_1c8 = 0;
    FUN_1456bb102(&local_1f0,uVar7);
    FUN_1488c4fee(param_1,local_288,&local_1f0);
    FUN_144a5ac3a(&local_1f0);
    uVar7 = FUN_14050d8a4(param_3);
    local_220[0] = 0;
    local_1f8 = 0;
    FUN_1456bb102(local_220,uVar7);
    FUN_140368c94(local_288,&local_1f0,local_220,0);
    FUN_140a6a9d4(local_118);
    FUN_140368b56(&local_1f0);
    FUN_144a5ac3a(local_220);
    FUN_140372a38(local_288);
  }
  if (local_118[0] == 0) {
LAB_1488c5a55:
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_1488c5973;
  }
  if ((longlong)(int)uStack_100 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(local_118[2] + lVar9) == 0) goto LAB_1488c5a55;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)uStack_100 * 8 != lVar9);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x118);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b411030;
  plVar1 = plVar6 + 2;
  memset(plVar6 + 0xf,0,0x88);
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b0200d0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  *(undefined4 *)((longlong)plVar6 + 0x94) = 0x80;
  *(undefined4 *)(plVar6 + 0x13) = 0xffffffff;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0xf;
  *(undefined1 *)(plVar6 + 0x1d) = 1;
  *(undefined8 *)((longlong)plVar6 + 0xec) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xf4) = 0;
  plVar6[0x20] = 0;
  plVar6[0x21] = 0;
  plVar6[0x22] = 0;
  local_1f0 = plVar1;
  local_1e8 = plVar6;
  FUN_1488c93e8(&local_1f0,plVar1);
  plVar4 = local_1e8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1e8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  FUN_1407b25f0(plVar6 + 5,local_118);
  uVar7 = FUN_140698182(param_3);
  lVar9 = FUN_14088cdf8(uVar7);
  if (lVar9 != 0) {
    if (*(char *)(param_1 + 0x160) == '\x01') {
      lVar8 = *(longlong *)(param_1 + 0x164);
      if (lVar8 == 0) {
        lVar8 = FUN_140831778();
        lVar8 = *(longlong *)(lVar8 + 0x88);
      }
      plVar6[0x22] = lVar8;
    }
    FUN_14088cfbe(lVar9,&local_1f0,local_118,plVar6 + 0x22);
    plVar2 = local_1e8;
    plVar6[0x20] = (longlong)local_1f0;
    local_1f0 = (longlong *)0x0;
    plVar4 = (longlong *)plVar6[0x21];
    if (local_1e8 != plVar4) {
      local_1e8 = (longlong *)0x0;
      plVar6[0x21] = (longlong)plVar2;
      if (plVar4 == (longlong *)0x0) goto LAB_1488c5943;
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
    plVar4 = local_1e8;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1e8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
LAB_1488c5943:
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_1488c5973:
  FUN_140368b56(local_118);
  if ((local_40 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488c5a60 FUN_1488c5a60 body=141 status=ok
// SIG undefined FUN_1488c5a60(void)

void FUN_1488c5a60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 == 0) {
    if (*param_2 != 0 && (int)param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_28 = 0;
    local_20 = 0;
    FUN_14009d848(&local_28);
    FUN_1411bd7b4(lVar1,local_30,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c5afe FUN_1488c5afe body=168 status=ok
// SIG undefined FUN_1488c5afe(void)

ulonglong FUN_1488c5afe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong unaff_RBX;
  bool bVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140126f82(param_3);
  if (lVar1 == 0) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(longlong *)(param_1 + 0x10) == 0);
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x3f0);
    if (lVar1 == 0) {
      unaff_RBX = 0;
    }
    else {
      do {
        puVar2 = *(undefined4 **)(lVar1 + 8);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = &DAT_14c9485f0;
        }
        FUN_1447325ac(puVar2,&local_38,1);
        bVar3 = local_38 == *(longlong *)(param_1 + 0x10);
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar3);
      } while ((!bVar3) && (lVar1 = FUN_14001d26e(lVar1), lVar1 != 0));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1488c5ba8 FUN_1488c5ba8 body=65 status=ok
// SIG undefined FUN_1488c5ba8(void)

void FUN_1488c5ba8(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if ((uVar1 & 0xff) != 0) {
    uVar3 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar3);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar1 & 0xff) != uVar3);
  }
  return;
}



// FUNCTION 1488c5bea FUN_1488c5bea body=9 status=ok
// SIG undefined FUN_1488c5bea(void)

void FUN_1488c5bea(longlong param_1)

{
  FUN_140350bfe(param_1 + 0x30);
  return;
}



// FUNCTION 1488c5bf4 FUN_1488c5bf4 body=133 status=ok
// SIG undefined FUN_1488c5bf4(void)

undefined8 FUN_1488c5bf4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"GbxInventoryChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c5c7a FUN_1488c5c7a body=1 status=ok
// SIG undefined FUN_1488c5c7a(void)

void FUN_1488c5c7a(void)

{
  return;
}



// FUNCTION 1488c5c7c FUN_1488c5c7c body=152 status=ok
// SIG undefined FUN_1488c5c7c(void)

void FUN_1488c5c7c(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_2 + 0x110);
  if (lVar2 != 0) {
    local_2c = *(undefined4 *)(param_1 + 0x108);
    uVar1 = *(undefined1 *)(param_1 + 0x10d);
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_140b96410(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    *(undefined2 *)(param_1 + 0x10c) = 0xff00;
    FUN_141069e76(lVar2 + 0x30,&local_2c,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c5d16 FUN_1488c5d16 body=187 status=ok
// SIG undefined FUN_1488c5d16(void)

void FUN_1488c5d16(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_1401412e0(param_2,&local_30,0,0);
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1488c96a4((longlong *)(param_1 + 8),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = local_30;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
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
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c5dd2 FUN_1488c5dd2 body=98 status=ok
// SIG undefined FUN_1488c5dd2(void)

longlong FUN_1488c5dd2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1488c5e34(param_1 + 0x118);
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x108 + lVar3) != -1) {
        *(undefined8 *)(lVar2 + 0x100 + lVar3) = *(undefined8 *)(param_1 + 0x110);
      }
      lVar3 = lVar3 + 0x150;
    } while ((longlong)iVar1 * 0x150 - lVar3 != 0);
  }
  return param_1;
}



// FUNCTION 1488c5e34 FUN_1488c5e34 body=78 status=ok
// SIG undefined FUN_1488c5e34(void)

longlong * FUN_1488c5e34(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14106822e(*param_1,(int)param_1[1]);
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



// FUNCTION 1488c5e82 FUN_1488c5e82 body=170 status=ok
// SIG undefined FUN_1488c5e82(void)

void FUN_1488c5e82(longlong param_1)

{
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1488c9fea(param_1 + 0xe8);
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_1448759c8(local_78,0x80);
  local_58 = 0;
  local_48 = &PTR_LAB_14b411070;
  local_30 = 0x80;
  local_68 = FUN_143da20ea;
  local_40 = local_78;
  local_38 = param_1 + 0xe8;
  FUN_14573bd7e(param_1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c5f2e FUN_1488c5f2e body=284 status=ok
// SIG undefined FUN_1488c5f2e(void)

longlong FUN_1488c5f2e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140841e06(param_1 + 0x90,param_2 + 0x90);
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0xa8);
    }
  }
  *(longlong *)(param_1 + 0xa8) = lVar1;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined8 *)(param_2 + 200) = 0;
  }
  FUN_1488c9006(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  FUN_14019d794(param_1 + 0x18,param_2 + 0x18);
  FUN_14019d794(param_1 + 0x30,param_2 + 0x30);
  FUN_14019d794(param_1,param_2);
  FUN_1488c5e82(param_1);
  FUN_14119f28e(param_1,1);
  return param_1;
}



// FUNCTION 1488c604a FUN_1488c604a body=266 status=ok
// SIG undefined FUN_1488c604a(void)

ulonglong FUN_1488c604a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (0 < (longlong)uVar7) {
    bVar4 = false;
LAB_1488c6088:
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    uVar8 = uVar7;
    do {
      uVar7 = uVar8 - 1;
      uVar1 = *(uint *)(lVar2 + 0x108 + uVar7 * 0x150);
      if ((uVar1 != 0xffffffff) && (lVar5 = uVar7 * 0x150 + lVar2, *(longlong *)(lVar5 + 0x18) != 0)
         ) {
        if ((longlong)*(int *)(lVar5 + 0x30) != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0x28) + lVar6) == 0) goto LAB_1488c60ec;
            lVar6 = lVar6 + 8;
          } while ((longlong)*(int *)(lVar5 + 0x30) * 8 != lVar6);
        }
        if (*(char *)(lVar5 + 0x10c) < '\0') goto LAB_1488c60f4;
      }
LAB_1488c60ec:
      bVar3 = uVar8 < 2;
      uVar8 = uVar7;
      if (bVar3) {
        if (!bVar4) break;
        goto LAB_1488c611f;
      }
    } while( true );
  }
  uVar7 = 0;
LAB_1488c6130:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
LAB_1488c60f4:
  local_34 = uVar1;
  FUN_14119e7cc(param_1,&local_34,param_2,*(undefined4 *)(lVar5 + 0xf8));
  bVar4 = true;
  if (uVar8 < 2) goto LAB_1488c611f;
  goto LAB_1488c6088;
LAB_1488c611f:
  uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  FUN_14119f28e(param_1,1);
  goto LAB_1488c6130;
}



// FUNCTION 1488c6156 FUN_1488c6156 body=98 status=ok
// SIG undefined FUN_1488c6156(void)

void FUN_1488c6156(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  uVar2 = 0xffffffff;
  if (param_3 != -1 && lVar3 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    lVar4 = 0;
    do {
      if (*(char *)(lVar1 + 0x10d + lVar4) == param_3) {
        uVar2 = *(undefined4 *)(lVar1 + 0x108 + lVar4);
        break;
      }
      lVar4 = lVar4 + 0x150;
    } while (lVar3 * 0x150 - lVar4 != 0);
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 1488c61b8 FUN_1488c61b8 body=119 status=ok
// SIG undefined FUN_1488c61b8(void)

bool FUN_1488c61b8(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x147) == '\x01') {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
      lVar4 = 0;
      do {
        if (*(int *)(lVar2 + 0x108 + lVar4) == *param_2) {
          lVar3 = *(longlong *)(lVar2 + 0x18 + lVar4);
          if (lVar3 == 0) {
            return true;
          }
          bVar1 = *(byte *)(lVar3 + 0x239);
          if (bVar1 == 0) {
            return true;
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            return true;
          }
          return (int)((uint)bVar1 + *(int *)(param_1 + 0x9c)) <= *(int *)(param_1 + 0x94);
        }
        lVar4 = lVar4 + 0x150;
      } while (lVar3 * 0x150 - lVar4 != 0);
    }
  }
  return true;
}



// FUNCTION 1488c6230 FUN_1488c6230 body=260 status=ok
// SIG undefined FUN_1488c6230(void)

void FUN_1488c6230(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [39];
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar3 != 0) {
    local_41 = '\0';
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    lVar3 = lVar3 * 0x150 + lVar6;
    do {
      if ((*(int *)(lVar6 + 0x108) != -1) && (*(longlong *)(lVar6 + 0x18) != 0)) {
        if ((longlong)*(int *)(lVar6 + 0x30) != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar5) == 0) goto LAB_1488c62e4;
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(lVar6 + 0x30) * 8 != lVar5);
        }
        pcVar1 = (code *)*param_2;
        plVar4 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar4 = param_2 + 4;
        }
        uVar2 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar2,lVar6 + 0x10,&local_41);
        if (local_41 != '\0') break;
      }
LAB_1488c62e4:
      lVar6 = lVar6 + 0x150;
    } while (lVar6 != lVar3);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c6336 FUN_1488c6336 body=7 status=ok
// SIG undefined FUN_1488c6336(void)

void FUN_1488c6336(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001488c6339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



// FUNCTION 1488c633e FUN_1488c633e body=791 status=ok
// SIG undefined FUN_1488c633e(void)

undefined8 FUN_1488c633e(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 **local_100;
  undefined4 local_f8;
  undefined4 local_ec;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined ***local_98;
  undefined **local_88;
  longlong *local_80;
  undefined4 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar5 = (**(code **)(*param_1 + 0x10))();
    if (lVar5 == 0) {
      puVar10 = (undefined1 *)0x0;
      local_e0 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1,&local_a8);
      puVar10 = local_a8;
      if (DAT_14c950c29 == 1) {
        if (local_a8 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
        }
        else {
          FUN_1456cec3c(local_a8);
          puVar10 = local_a8;
        }
      }
      local_e0 = local_a0;
    }
    iVar1 = *(int *)(param_2 + 0x20);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
      lVar11 = 0;
      do {
        if ((*(int *)(lVar3 + lVar11) == 0) || (*(int *)(lVar3 + 4 + lVar11) == 0))
        goto LAB_1488c6535;
        lVar6 = (**(code **)(*param_1 + 0x38))();
        if (lVar6 != 0) {
          local_78 = *(undefined4 *)(lVar3 + lVar11);
          local_b0 = 0;
          local_98 = (undefined ***)0x0;
          local_88 = &PTR_LAB_14b411050;
          local_80 = &local_b0;
          local_a8 = &LAB_143da2090;
          FUN_14573bd7e(lVar6,&local_a8);
          lVar4 = local_b0;
          if (local_b0 != 0) {
            uVar2 = *(undefined4 *)(lVar3 + 8 + lVar11);
            if (lVar5 == 0) {
              local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,*(undefined4 *)(local_b0 + 0xf8));
              FUN_14119e7cc(lVar6,&local_a8,param_1);
            }
            else {
              local_ec = uVar2;
              local_c0 = puVar10;
              if ((puVar10 != (undefined1 *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(puVar10);
              }
              local_b8 = local_e0;
              local_e8 = puVar10;
              lVar7 = (**(code **)(*param_1 + 0x28))(param_1);
              local_d8 = 0;
              uStack_d0 = 0;
              if ((lVar7 == 0) || (DAT_14c950c29 == 0)) {
                if (lVar7 != 0) goto LAB_1488c6618;
                uStack_d0 = 0;
                local_d8 = lVar7;
              }
              else {
                FUN_1456cec3c(lVar7);
LAB_1488c6618:
                local_d8 = lVar7;
                uVar8 = FUN_14119f41e();
                uStack_d0 = FUN_144718840(lVar7,uVar8);
              }
              puVar10 = local_e8;
              local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar4 + 0xf8));
              local_f8 = local_ec;
              local_100 = &local_c0;
              local_108 = 0;
              FUN_1416a1924(lVar5,&local_a8,lVar6 + 0xb8,&local_d8);
            }
          }
        }
        lVar11 = lVar11 + 0xc;
      } while ((longlong)iVar1 * 0xc != lVar11);
    }
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14b411090;
    local_a8 = &LAB_143da223a;
    local_80 = param_1;
    (**(code **)(*param_1 + 0x60))(param_1,&local_a8);
    if (local_a8 != (undefined1 *)0x0) {
      pppuVar9 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar9 = &local_88;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    uVar8 = 1;
  }
  else {
LAB_1488c6535:
    uVar8 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1488c6656 FUN_1488c6656 body=152 status=ok
// SIG undefined FUN_1488c6656(void)

undefined8 FUN_1488c6656(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = &local_70;
  local_70 = 0;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b4110b0;
  local_68[0] = &LAB_143da2290;
  local_40 = param_2;
  local_30 = param_3;
  (**(code **)(*param_1 + 0x60))(param_1,local_68);
  uVar1 = local_70;
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c66f0 FUN_1488c66f0 body=453 status=ok
// SIG undefined FUN_1488c66f0(void)

void FUN_1488c66f0(longlong *param_1,longlong param_2,char param_3,char param_4,int param_5,
                  undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  longlong local_150;
  longlong *local_148;
  int local_13c;
  undefined1 local_138 [8];
  undefined1 local_130 [216];
  undefined8 *local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = *(longlong *)(param_2 + 0xf0);
  if (lVar6 != 0) {
    FUN_140e30dbe(local_138);
    local_158 = 0xffffffff;
    lVar5 = FUN_143d9f6d8(lVar6,local_138,param_1,
                          CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff);
    if (lVar5 != 0) {
      local_13c = *(int *)(lVar5 + 0xf8);
      if ((((param_5 != -1) && (*(longlong **)(lVar6 + 0xa8) != (longlong *)0x0)) &&
          (lVar6 = (**(code **)(**(longlong **)(lVar6 + 0xa8) + 0x180))(), lVar6 != 0)) &&
         (FUN_1456be14a(&local_150,lVar6), local_148 != (longlong *)0x0)) {
        iVar4 = (int)local_148[1];
        do {
          if (iVar4 == 0) {
            plVar7 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_148[1];
          bVar8 = iVar4 == iVar3;
          if (bVar8) {
            *(int *)(local_148 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
          plVar7 = local_148;
        } while (!bVar8);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))();
        }
        if (plVar7 != (longlong *)0x0) {
          if (local_150 != 0) {
            FUN_1488ccbb8(local_150,param_5,local_13c);
          }
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      }
      if (((param_3 != -1) && (local_13c != -1)) &&
         ((**(code **)(*param_1 + 0x18))(param_1,&local_150),
         local_148 != (longlong *)0x0 && local_150 != 0)) {
        (**(code **)(*local_148 + 0x78))(local_148,(int)param_3,&local_13c,(int)param_4);
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,1);
    }
    FUN_140368b56(local_130);
  }
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c68b6 FUN_1488c68b6 body=244 status=ok
// SIG undefined FUN_1488c68b6(void)

void FUN_1488c68b6(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined1 auStack_188 [32];
  uint local_168;
  undefined4 local_160;
  undefined4 local_158;
  int local_144;
  undefined1 local_140 [8];
  undefined1 local_138 [216];
  undefined8 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 != 0) {
    local_144 = DAT_14c763998;
    local_158 = 1;
    local_160 = 0;
    local_168 = local_168 & 0xffffff00;
    DAT_14c763998 = DAT_14c763998 + 1;
    FUN_141894808(local_140,lVar1,&local_144,param_2);
    local_160 = CONCAT31(local_160._1_3_,param_6);
    local_168 = param_5;
    FUN_1488c66f0(param_1,local_140,param_3,param_4);
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)(local_60,1);
    }
    FUN_140368b56(local_138);
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c69ac FUN_1488c69ac body=47 status=ok
// SIG undefined FUN_1488c69ac(void)

undefined8 *
FUN_1488c69ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  uVar1 = FUN_1488c69dc();
  *(undefined1 *)(param_1 + 5) = uVar1;
  return param_1;
}



// FUNCTION 1488c69dc FUN_1488c69dc body=929 status=ok
// SIG undefined FUN_1488c69dc(void)

ulonglong FUN_1488c69dc(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  uint local_d4;
  undefined4 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_1[1] == 0) || (*param_1 == 0)) {
LAB_1488c6d41:
    uVar10 = 0;
  }
  else {
    iVar12 = *(int *)(*param_1 + 0x20);
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)((longlong)param_1 + 0x24) != iVar12) {
      FUN_1488ca2f4(param_1 + 3);
    }
    local_a8 = 0;
    piVar1 = (int *)param_1[2];
    if ((piVar1 == (int *)0x0) || (*piVar1 == -1)) {
      uVar10 = 0;
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)FUN_1488c6656(param_1[1],piVar1,&local_a8);
      if (puVar8 == (undefined4 *)0x0) goto LAB_1488c6d41;
      uVar10 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    }
    lVar11 = (longlong)*(int *)(*param_1 + 0x20);
    if (lVar11 != 0) {
      plVar6 = *(longlong **)(*param_1 + 0x18);
      local_c0 = plVar6 + lVar11 * 0x20;
      iVar12 = 0;
      local_d0 = puVar8;
      local_c8 = param_1 + 3;
      do {
        local_e0 = plVar6;
        uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        local_a0[0] = 0;
        local_78 = 0;
        FUN_1456bb102(local_a0,uVar7);
        local_b8 = plVar6 + 5;
        FUN_1448729ea(plVar6 + 5,local_70,local_a0);
        uVar5 = FUN_140fa5f12(local_70,1);
        puVar8 = local_d0;
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar9 = local_70;
          if (0x18 < local_58) {
            ppppuVar9 = (undefined8 ****)local_70[0];
          }
          (*pcVar2)(ppppuVar9);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        FUN_144a5ac3a(local_a0);
        if (uVar5 != 0) {
          lVar11 = (longlong)iVar12 * 0xc + 8;
          plVar6 = local_c8;
          do {
            if (iVar12 == (int)param_1[4]) {
              FUN_1488c6d80(plVar6);
            }
            lVar3 = *plVar6;
            if (*(int *)(lVar3 + -8 + lVar11) == 0) {
              local_b0 = 0;
              if (((uVar10 & 1) == 0) ||
                 (cVar4 = (**(code **)(*local_e0 + 0x20))(local_e0,puVar8,0), cVar4 == '\0')) {
                puVar8 = (undefined4 *)thunk_FUN_1488d942e(local_e0,param_1[1],&local_b0,param_1);
              }
              else {
                local_b0 = local_a8;
                uVar10 = 0;
              }
              if (puVar8 == (undefined4 *)0x0) goto LAB_1488c6d41;
              *(undefined4 *)(lVar3 + -8 + lVar11) = *puVar8;
              *(undefined4 *)(lVar3 + -4 + lVar11) = *(undefined4 *)(local_b0 + 0xd0);
              local_d4 = puVar8[0x3a];
              uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
              local_a0[0] = 0;
              local_78 = 0;
              FUN_1456bb102(local_a0,uVar7);
              FUN_1448729ea(local_b8,local_70);
              uVar13 = FUN_140fa5f12(local_70,1);
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
              if (pcVar2 != (code *)0x0) {
                ppppuVar9 = local_70;
                if (0x18 < local_58) {
                  ppppuVar9 = (undefined8 ****)local_70[0];
                }
                (*pcVar2)(ppppuVar9);
              }
              if (0x18 < local_58) {
                FUN_1400020a8(local_70[0]);
              }
              FUN_144a5ac3a(local_a0);
              if (local_d4 < uVar13) {
                uVar13 = local_d4;
              }
              *(uint *)(lVar3 + lVar11) = uVar13;
              puVar8 = local_d0;
              plVar6 = local_c8;
            }
            iVar12 = iVar12 + 1;
            bVar14 = *(uint *)(lVar3 + lVar11) <= uVar5;
            uVar13 = uVar5 - *(uint *)(lVar3 + lVar11);
            lVar11 = lVar11 + 0xc;
            uVar5 = uVar13;
            if (!bVar14) {
              uVar5 = 0;
            }
          } while (bVar14 && uVar13 != 0);
        }
        plVar6 = local_e0 + 0x20;
      } while (plVar6 != local_c0);
    }
    uVar10 = uVar10 ^ 1;
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffff01;
}



// FUNCTION 1488c6d80 FUN_1488c6d80 body=56 status=ok
// SIG undefined FUN_1488c6d80(void)

void FUN_1488c6d80(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488ca374(param_1,iVar1);
  }
  FUN_1488ca364((longlong)iVar1 * 0xc + *param_1);
  return;
}



// FUNCTION 1488c6e08 FUN_1488c6e08 body=10 status=ok
// SIG undefined FUN_1488c6e08(void)

void FUN_1488c6e08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001488c6e0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6c0))();
  return;
}



// FUNCTION 1488c6e2c FUN_1488c6e2c body=124 status=ok
// SIG undefined FUN_1488c6e2c(void)

void FUN_1488c6e2c(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x820) != 0) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x820) + 0x3c);
    uVar2 = FUN_1447210f0();
    local_28 = *(undefined8 *)(param_1 + 0x820);
    local_20 = *(longlong *)(param_1 + 0x828);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1487bc308(&local_28,uVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c6eaa FUN_1488c6eaa body=356 status=ok
// SIG undefined FUN_1488c6eaa(void)

void FUN_1488c6eaa(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  longlong local_70;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x388) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x380);
    lVar5 = (longlong)*(int *)(param_1 + 0x388) << 3;
    do {
      FUN_14111883c(local_88,lVar4);
      FUN_14042b1ec(param_2,local_88,1);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar5 = 0;
    do {
      FUN_140851e80(local_88,*(undefined8 *)(lVar4 + lVar5));
      FUN_14042b1ec(param_2,local_88,1);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0x198) + 0x18))(param_1 + -0x198);
  FUN_140851e80(local_88,uVar3);
  FUN_14042b1ec(param_2,local_88,1);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c7010 FUN_1488c7010 body=65 status=ok
// SIG undefined FUN_1488c7010(void)

void FUN_1488c7010(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + -0x158);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3);
  }
  FUN_1409d1ca6(param_1 + 0x48,param_2,param_3);
  return;
}



// FUNCTION 1488c7052 FUN_1488c7052 body=160 status=ok
// SIG undefined FUN_1488c7052(void)

void FUN_1488c7052(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + -0x3b8);
  if (lVar2 != 0) {
    uVar3 = FUN_144a89982();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_28);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x30))(local_28,param_2);
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_20 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c70f4 FUN_1488c70f4 body=177 status=ok
// SIG undefined FUN_1488c70f4(void)

undefined8 *
FUN_1488c70f4(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  plVar1 = *(longlong **)(param_1 + -0x3b8);
  if (plVar1 == (longlong *)0x0) {
    lVar5 = *(longlong *)(param_1 + -0x358);
  }
  else {
    uVar2 = FUN_144a89982();
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_144a89982();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3,param_4);
        return param_2;
      }
    }
    lVar5 = plVar1[0x39];
  }
  puVar6 = &DAT_14c846480;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(lVar5 + 0x240);
  }
  puVar7 = param_2;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return param_2;
}



// FUNCTION 1488c71a6 FUN_1488c71a6 body=164 status=ok
// SIG undefined FUN_1488c71a6(void)

void FUN_1488c71a6(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x105];
  param_1[0x104] = lVar3;
  param_1[0x105] = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  (**(code **)(*param_1 + 0x6b8))(param_1);
  *(char *)((longlong)param_1 + 0x81a) = param_3;
  plVar5 = (longlong *)param_1[0x104];
  if (((param_3 == '\x01' && plVar5 != (longlong *)0x0) && ((char)param_1[0x103] == '\x01')) &&
     (*(char *)((longlong)plVar5 + 0x3c) == '\0')) {
    *(undefined1 *)((longlong)plVar5 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001488c723d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1488c724a FUN_1488c724a body=277 status=ok
// SIG undefined FUN_1488c724a(void)

void FUN_1488c724a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  local_90 = param_2;
  FUN_1405b2cf0(param_1,local_78,1);
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_78;
  }
  lVar5 = (longlong)(int)local_50;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(puVar6 + lVar4);
      if (lVar1 != 0) {
        lVar2 = FUN_144a772c4();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          uVar3 = FUN_1405b2aea(param_1 + 0x120,*(undefined8 *)(lVar1 + 0x110),&local_90,1);
          FUN_144a083d0(local_88,param_3);
          FUN_1417e08e2(lVar1,uVar3,local_88);
        }
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 != lVar4);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c7360 FUN_1488c7360 body=273 status=ok
// SIG undefined FUN_1488c7360(void)

void FUN_1488c7360(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  local_80 = param_2;
  FUN_1405b2cf0(param_1,local_78,1);
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  lVar6 = (longlong)(int)local_50;
  if (lVar6 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(puVar5 + lVar4);
      if (lVar1 != 0) {
        lVar2 = FUN_144a772c4();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          local_98 = *param_3;
          uStack_94 = param_3[1];
          uStack_90 = param_3[2];
          uStack_8c = param_3[3];
          uVar3 = FUN_1405b2aea(param_1 + 0x120,*(undefined8 *)(lVar1 + 0x110),&local_80,1);
          FUN_1417e08e2(lVar1,uVar3,&local_98);
        }
      }
      lVar4 = lVar4 + 8;
    } while (lVar6 * 8 != lVar4);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c7472 FUN_1488c7472 body=168 status=ok
// SIG undefined FUN_1488c7472(void)

void FUN_1488c7472(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x7a) = param_2;
  FUN_1488c751a();
  if (((*(byte *)(param_1 + 0x78) & 1) == 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    lVar3 = FUN_144a74fb4();
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (((lVar4 != 0) &&
        (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30 && (plVar2 = *(longlong **)(lVar4 + 0xae8), plVar2 != (longlong *)0x0)))) {
      lVar4 = FUN_1407831c2();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        (**(code **)(*plVar2 + 0x3a0))(plVar2,*(undefined1 *)(param_1 + 0x7a));
      }
    }
  }
  FUN_1408bd60e(param_1,2);
  FUN_14168cd3e(param_1);
  return;
}



// FUNCTION 1488c751a FUN_1488c751a body=385 status=ok
// SIG undefined FUN_1488c751a(void)

void FUN_1488c751a(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [40];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0x98) * 0xf0;
    lVar7 = *(longlong *)(param_1 + 0x90) + 0xcc;
    do {
      cVar3 = *(char *)(lVar7 + -4);
      cVar2 = FUN_140da8af2(lVar7 + -0xcc,uVar5);
      if (((cVar2 != '\0') && (*(char *)(lVar7 + -4) != cVar3)) &&
         (plVar6 = *(longlong **)(lVar7 + 0x1c), plVar6 != (longlong *)0x0)) {
        if (((*(byte *)((longlong)plVar6 + 0x9e) & 0x10) == 0) ||
           ((*(byte *)(lVar7 + -0xbc) & 0x40) == 0)) {
          bVar1 = false;
        }
        else {
          (**(code **)(*plVar6 + 0x2b0))();
          bVar1 = true;
        }
        plVar6 = (longlong *)FUN_14479d2ce(lVar7);
        if (plVar6 == (longlong *)0x0) {
          bVar4 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar6 + 0x2a0))(plVar6);
          bVar4 = cVar3 * '\x02';
        }
        *(byte *)(lVar7 + -0xb7) = *(byte *)(lVar7 + -0xb7) & 0xfd | bVar4;
        (**(code **)(**(longlong **)(lVar7 + 0x1c) + 0xa78))(*(longlong **)(lVar7 + 0x1c),plVar6);
        if (0 < *(int *)(lVar7 + 0x14)) {
          local_70[0] = 0;
          local_48 = 0;
          FUN_1456bb102(local_70,uVar5);
          local_80 = *(undefined8 *)(lVar7 + 0xc);
          local_78 = *(undefined4 *)(lVar7 + 0x14);
          FUN_140e99737(*(undefined8 *)(lVar7 + 0x1c),&local_80,local_70);
          FUN_144a5ac3a(local_70);
        }
        if (bVar1) {
          (**(code **)(**(longlong **)(lVar7 + 0x1c) + 0xa60))(*(longlong **)(lVar7 + 0x1c),0);
        }
      }
      lVar7 = lVar7 + 0xf0;
      lVar8 = lVar8 + -0xf0;
    } while (lVar8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c769c FUN_1488c769c body=351 status=ok
// SIG undefined FUN_1488c769c(void)

void FUN_1488c769c(longlong param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xdf | param_2 << 5;
  FUN_140cf5864();
  FUN_140cf57c4(param_1);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar5 = FUN_144a78c84();
    lVar2 = *(longlong *)(param_1 + 0x48);
    if ((((lVar2 != 0) && (lVar5 != 0)) && (lVar7 = *(longlong *)(lVar2 + 0x10), lVar7 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar7 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb821cc) {
        FUN_144b3d300(&DAT_14cb821cc);
        if (DAT_14cb821cc == -1) {
          param_3 = 0;
          FUN_1446f470e(&DAT_14cb821c4,L"AlwaysAnimate",1);
          _Init_thread_footer(&DAT_14cb821cc);
        }
      }
      uVar6 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(param_1 + 0x78)) &
              0xffffffffffffff20;
      FUN_140d52e40(lVar2,&DAT_14cb821c4,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 5),1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 0xe8 + lVar5);
      if (((plVar3 != (longlong *)0x0) && (lVar7 = *(longlong *)(lVar2 + 0x24 + lVar5), lVar7 != 0))
         && ((lVar4 = *(longlong *)(lVar2 + 0x1c + lVar5), lVar7 != lVar4 && (plVar3[0x24] != 0))))
      {
        if ((*(byte *)(param_1 + 0x78) & 0x20) == 0) {
          lVar7 = lVar4;
        }
        (**(code **)(*plVar3 + 0x490))(plVar3,plVar3[0x24],&DAT_14cadad98,lVar7);
      }
      lVar5 = lVar5 + 0xf0;
    } while ((longlong)iVar1 * 0xf0 - lVar5 != 0);
  }
  return;
}



// FUNCTION 1488c77fc FUN_1488c77fc body=148 status=ok
// SIG undefined FUN_1488c77fc(void)

void FUN_1488c77fc(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar4 = FUN_144a745da();
    plVar1 = *(longlong **)(param_1 + 0x48);
    if ((((plVar1 != (longlong *)0x0) && (lVar4 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      if (param_3 != '\0') {
        FUN_1412309ae(plVar1,param_2);
        return;
      }
      iVar3 = FUN_144909502(plVar1,param_2);
      if (iVar3 != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001488c788d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0xb88))(plVar1,iVar3,0,*(code **)(*plVar1 + 0xb88));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488c7890 FUN_1488c7890 body=245 status=ok
// SIG undefined FUN_1488c7890(void)

void FUN_1488c7890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar3 + 1U) {
    FUN_1488ca55c((longlong *)(param_1 + 0x110),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x110);
  lVar5 = (longlong)iVar3 * 0x34;
  puVar1 = (undefined8 *)(lVar4 + 0x24 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 8 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + lVar5) = param_2;
  FUN_144a083d0(&local_50,param_3);
  puVar2 = (undefined4 *)(lVar4 + 8 + lVar5);
  *puVar2 = local_50;
  puVar2[1] = uStack_4c;
  puVar2[2] = uStack_48;
  puVar2[3] = uStack_44;
  FUN_144a083d0(&local_50,param_4);
  puVar2 = (undefined4 *)(lVar4 + 0x18 + lVar5);
  *puVar2 = local_50;
  puVar2[1] = uStack_4c;
  puVar2[2] = uStack_48;
  puVar2[3] = uStack_44;
  *(undefined4 *)(lVar4 + 0x28 + lVar5) = param_5;
  *(undefined4 *)(lVar4 + 0x2c + lVar5) = param_5;
  *(undefined4 *)(lVar4 + 0x30 + lVar5) = 3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c7986 FUN_1488c7986 body=56 status=ok
// SIG undefined FUN_1488c7986(void)

void FUN_1488c7986(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if ((*(byte *)(lVar4 + 0x21) & 2) != 0) {
        pbVar1 = (byte *)(lVar4 + 0x20);
        *pbVar1 = *pbVar1 | 0x48;
        *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 2;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1488c79be FUN_1488c79be body=224 status=ok
// SIG undefined FUN_1488c79be(void)

void FUN_1488c79be(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = FUN_144a745da();
    lVar1 = *(longlong *)(param_1 + 0x48);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      if ((*(int *)(param_1 + 0x178) < 1) ||
         (lVar3 = (longlong)*(int *)(lVar1 + 0x714) * 0x10,
         *(int *)(param_1 + 0x178) != *(int *)(lVar1 + 0x880 + lVar3))) {
        *(undefined4 *)(param_1 + 0x178) = 0;
        if (*(int *)(param_1 + 0x17c) != 0) {
          FUN_144893a1c((longlong *)(param_1 + 0x170),0);
          return;
        }
      }
      else {
        lVar1 = lVar1 + lVar3;
        plVar4 = (longlong *)(lVar1 + 0x878);
        if (plVar4 != (longlong *)(param_1 + 0x170)) {
          if (*plVar4 != 0) {
            FUN_1400020a8();
          }
          *plVar4 = *(longlong *)(param_1 + 0x170);
          *(undefined8 *)(param_1 + 0x170) = 0;
          *(undefined4 *)(lVar1 + 0x880) = *(undefined4 *)(param_1 + 0x178);
          *(undefined4 *)(lVar1 + 0x884) = *(undefined4 *)(param_1 + 0x17c);
          *(undefined8 *)(param_1 + 0x178) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 1488c7a9e FUN_1488c7a9e body=5 status=ok
// SIG undefined FUN_1488c7a9e(void)

void FUN_1488c7a9e(longlong param_1)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 6;
  return;
}



// FUNCTION 1488c7aa4 FUN_1488c7aa4 body=106 status=ok
// SIG undefined FUN_1488c7aa4(void)

void FUN_1488c7aa4(longlong param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  if (param_4 != '\x01' && *(longlong *)(param_1 + 0x10) != 0) {
    FUN_1488c77fc(*(longlong *)(param_1 + 0x10),param_2,param_3);
  }
  if (param_4 == '\x02' || *(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1488c77fc(*(longlong *)(param_1 + 0x18),param_2,param_3);
  return;
}



// FUNCTION 1488c7b0e FUN_1488c7b0e body=680 status=ok
// SIG undefined FUN_1488c7b0e(void)

void FUN_1488c7b0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    lVar1 = param_1 + 0x20;
    cVar3 = FUN_144729dda(lVar1);
    if (cVar3 != '\0') {
      uVar4 = FUN_14479d2ce(lVar1);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar2 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b411220;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_58[2] = lVar5;
      *local_58 = &PTR_FUN_14b4111b0;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,uVar4);
      puVar2[4] = param_1;
      FUN_1488cacf4(param_2 + 0x638,local_60,&local_58);
      FUN_1449db362(&local_58);
      uVar4 = FUN_14479d2ce(lVar1);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar2 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b411300;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_58[2] = lVar5;
      *local_58 = &PTR_FUN_14b411290;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,uVar4);
      puVar2[4] = param_1;
      FUN_1488cadea(param_2 + 0x650,local_60,&local_58);
      FUN_1449db362(&local_58);
      uVar4 = FUN_14479d2ce(lVar1);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar2 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b411300;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_58[2] = lVar6;
      *local_58 = &PTR_FUN_14b411370;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,uVar4);
      puVar2[4] = param_1;
      FUN_1488cadea(param_2 + 0x620,local_60,&local_58);
      FUN_1449db362(&local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c7db8 FUN_1488c7db8 body=128 status=ok
// SIG undefined FUN_1488c7db8(void)

void FUN_1488c7db8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    cVar2 = FUN_144729dda(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_14479d2ce(param_1);
      FUN_140457ffc(param_2 + 0x638,uVar1);
      uVar1 = FUN_14479d2ce(param_1);
      FUN_140457ffc(param_2 + 0x650,uVar1);
      uVar1 = FUN_14479d2ce(param_1);
      FUN_140457ffc(param_2 + 0x620,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1488c7e38 FUN_1488c7e38 body=231 status=ok
// SIG undefined FUN_1488c7e38(void)

void FUN_1488c7e38(longlong param_1,char param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x98) != 0)) {
      lVar4 = *(longlong *)(lVar5 + 0x90);
      lVar5 = (longlong)*(int *)(lVar5 + 0x98) * 0xf0;
      do {
        pcVar1 = (code *)*param_3;
        plVar3 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar3 = param_3 + 4;
        }
        uVar2 = (**(code **)(*plVar3 + 8))();
        (*pcVar1)(uVar2,lVar4);
        lVar4 = lVar4 + 0xf0;
        lVar5 = lVar5 + -0xf0;
      } while (lVar5 != 0);
    }
    if (param_2 == '\x02') {
      return;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x98) != 0)) {
    lVar4 = *(longlong *)(lVar5 + 0x90);
    lVar5 = (longlong)*(int *)(lVar5 + 0x98) * 0xf0;
    do {
      pcVar1 = (code *)*param_3;
      plVar3 = (longlong *)param_3[2];
      if ((longlong *)param_3[2] == (longlong *)0x0) {
        plVar3 = param_3 + 4;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,lVar4);
      lVar4 = lVar4 + 0xf0;
      lVar5 = lVar5 + -0xf0;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1488c7f20 FUN_1488c7f20 body=89 status=ok
// SIG undefined FUN_1488c7f20(void)

void FUN_1488c7f20(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\x01' && *(longlong *)(param_1 + 0x10) != 0) {
    FUN_140e189e8(*(longlong *)(param_1 + 0x10),param_2);
  }
  if (param_3 != '\x02' && *(longlong *)(param_1 + 0x18) != 0) {
    FUN_140e189e8(*(longlong *)(param_1 + 0x18),param_2);
    return;
  }
  return;
}



// FUNCTION 1488c7f98 FUN_1488c7f98 body=105 status=ok
// SIG undefined FUN_1488c7f98(void)

void FUN_1488c7f98(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  if (param_3 != '\x01' && *(longlong *)(param_1 + 0x10) != 0) {
    FUN_1405b2cf0(*(longlong *)(param_1 + 0x10),param_2,param_4);
  }
  if (param_3 != '\x02' && *(longlong *)(param_1 + 0x18) != 0) {
    FUN_1405b2cf0(*(longlong *)(param_1 + 0x18),param_2,param_4);
    return;
  }
  return;
}



// FUNCTION 1488c8002 FUN_1488c8002 body=358 status=ok
// SIG undefined FUN_1488c8002(void)

longlong FUN_1488c8002(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x20;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 == '\0') {
    lVar4 = 0;
    goto LAB_1488c8036;
  }
  uVar3 = FUN_14479d2ce(lVar1);
  lVar4 = FUN_1412bcf36(uVar3,param_2,0);
  if (lVar4 == 0) {
LAB_1488c809c:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_140288b94();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1488c809c;
  }
  uVar3 = FUN_14479d2ce(lVar1);
  uVar3 = FUN_1447210f0(uVar3);
  FUN_140b506dc(lVar4,uVar3,0);
  FUN_140c0563c(lVar4,0);
  FUN_140c056bc(lVar4,1);
  uVar3 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar4 + 0x638,uVar3);
  uVar3 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar4 + 0x650,uVar3);
  uVar3 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar4 + 0x620,uVar3);
  local_58 = 0;
  FUN_14485c47a(&local_58,lVar4);
  local_60 = 0;
  FUN_14485c47a(&local_60,param_2);
  local_50 = &local_60;
  local_48 = &local_58;
  FUN_1488ca748(param_1 + 0x28,local_3c);
LAB_1488c8036:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c816a FUN_1488c816a body=454 status=ok
// SIG undefined FUN_1488c816a(void)

void FUN_1488c816a(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  local_40 = local_48;
  iVar2 = FUN_1488ca9e0((longlong *)(param_1 + 0x28),
                        (uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
  if (iVar2 != -1) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    if ((lVar5 + (longlong)iVar2 * 0x18 != 0) &&
       (lVar5 = lVar5 + (longlong)iVar2 * 0x18 + 8, lVar5 != 0)) {
      cVar1 = FUN_144729dda(lVar5);
      if (cVar1 != '\0') {
        FUN_14479d2ce(lVar5);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
      goto LAB_1488c82e6;
    }
  }
  plVar3 = (longlong *)FUN_1488c8002(param_1,param_2);
  if (plVar3 == (longlong *)0x0) {
LAB_1488c82e6:
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if ((lVar5 == 0) || ((*(byte *)(param_1 + 0x78) & 2) == 0)) goto LAB_1488c82c2;
    lVar7 = 0;
LAB_1488c827f:
    (**(code **)(*plVar3 + 0x490))(plVar3,lVar5,&DAT_14cadad98,0);
    FUN_140357fa8(plVar3,*(undefined4 *)(lVar5 + 0x5c8),0);
    if (lVar7 == 0) goto LAB_1488c82c2;
    uVar4 = *(undefined4 *)(lVar7 + 0x5c8);
    uVar6 = 0;
    plVar3 = param_2;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
    if ((lVar5 != 0) && ((*(byte *)(param_1 + 0x78) & 2) != 0)) goto LAB_1488c827f;
    if (lVar7 == 0) goto LAB_1488c82c2;
    (**(code **)(*plVar3 + 0x490))(plVar3,lVar7,&DAT_14cadad98,0);
    uVar4 = 1;
    uVar6 = 1;
  }
  FUN_140357fa8(plVar3,uVar4,uVar6);
LAB_1488c82c2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1488c8356 FUN_1488c8356 body=179 status=ok
// SIG undefined FUN_1488c8356(void)

void FUN_1488c8356(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar3 = FUN_1488ca9e0((longlong *)(param_1 + 0x28),
                        (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if ((iVar3 != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x18, lVar4 = lVar1 + 8,
     lVar4 != 0 && lVar1 != 0)) {
    cVar2 = FUN_144729dda(lVar4);
    if (cVar2 != '\0') {
      FUN_14479d2ce(lVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c841e FUN_1488c841e body=219 status=ok
// SIG undefined FUN_1488c841e(void)

void FUN_1488c841e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = local_30;
  iVar3 = FUN_1488ca9e0((longlong *)(param_1 + 0x28),
                        (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if ((iVar3 != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x18, lVar5 = lVar1 + 8,
     lVar5 != 0 && lVar1 != 0)) {
    cVar2 = FUN_144729dda(lVar5);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)FUN_14479d2ce(lVar5);
      (**(code **)(*plVar4 + 0x420))(plVar4,0);
    }
    local_38 = 0;
    FUN_14485c47a(&local_38,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c850c FUN_1488c850c body=268 status=ok
// SIG undefined FUN_1488c850c(void)

void FUN_1488c850c(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_148 [192];
  undefined1 *local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined1 *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_88 = (undefined1 *)0x0;
  local_80 = 0x1800000000;
  local_78 = FUN_143da3d42;
  local_68 = 0;
  local_58 = &PTR_LAB_14b4113e0;
  local_50 = param_4;
  local_48 = local_148;
  (**(code **)(*param_1 + 0x48))(param_1,CONCAT71(0x143da3d,*(undefined1 *)(param_4 + 0xc)));
  puVar2 = local_88;
  if (local_88 == (undefined1 *)0x0) {
    puVar2 = local_148;
  }
  lVar3 = (longlong)(int)local_80;
  if (lVar3 != 0) {
    lVar1 = 0;
    do {
      local_158 = *(undefined8 *)(param_3 + 4);
      local_168 = *param_3;
      uStack_164 = param_3[1];
      uStack_160 = param_3[2];
      uStack_15c = param_3[3];
      (**(code **)(**(longlong **)(puVar2 + lVar1) + 0xa10))
                (*(longlong **)(puVar2 + lVar1),param_2,&local_168);
      lVar1 = lVar1 + 8;
    } while (lVar3 * 8 != lVar1);
  }
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c861a FUN_1488c861a body=259 status=ok
// SIG undefined FUN_1488c861a(void)

void FUN_1488c861a(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [192];
  undefined1 *local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined1 *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_88 = (undefined1 *)0x0;
  local_80 = 0x1800000000;
  local_78 = FUN_143da3d42;
  local_68 = 0;
  local_58 = &PTR_LAB_14b4113e0;
  local_50 = param_4;
  local_48 = local_148;
  (**(code **)(*param_1 + 0x48))(param_1,CONCAT71(0x143da3d,*(undefined1 *)(param_4 + 0xc)));
  puVar2 = local_88;
  if (local_88 == (undefined1 *)0x0) {
    puVar2 = local_148;
  }
  lVar3 = (longlong)(int)local_80;
  if (lVar3 != 0) {
    lVar1 = 0;
    do {
      local_158 = *param_3;
      uStack_154 = param_3[1];
      uStack_150 = param_3[2];
      uStack_14c = param_3[3];
      (**(code **)(**(longlong **)(puVar2 + lVar1) + 0xa18))
                (*(longlong **)(puVar2 + lVar1),param_2,&local_158);
      lVar1 = lVar1 + 8;
    } while (lVar3 * 8 != lVar1);
  }
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c871e FUN_1488c871e body=242 status=ok
// SIG undefined FUN_1488c871e(void)

void FUN_1488c871e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [192];
  undefined1 *local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined1 *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_88 = (undefined1 *)0x0;
  local_80 = 0x1800000000;
  local_78 = FUN_143da3d42;
  local_68 = 0;
  local_58 = &PTR_LAB_14b4113e0;
  local_50 = param_4;
  local_48 = local_148;
  (**(code **)(*param_1 + 0x48))(param_1,CONCAT71(0x143da3d,*(undefined1 *)(param_4 + 0xc)));
  puVar1 = local_88;
  if (local_88 == (undefined1 *)0x0) {
    puVar1 = local_148;
  }
  lVar2 = (longlong)(int)local_80;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(puVar1 + lVar3) + 0xa90))
                (*(longlong **)(puVar1 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c8812 FUN_1488c8812 body=242 status=ok
// SIG undefined FUN_1488c8812(void)

void FUN_1488c8812(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [192];
  undefined1 *local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined1 *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_88 = (undefined1 *)0x0;
  local_80 = 0x1800000000;
  local_78 = FUN_143da3d42;
  local_68 = 0;
  local_58 = &PTR_LAB_14b4113e0;
  local_50 = param_4;
  local_48 = local_148;
  (**(code **)(*param_1 + 0x48))(param_1,CONCAT71(0x143da3d,*(undefined1 *)(param_4 + 0xc)));
  puVar1 = local_88;
  if (local_88 == (undefined1 *)0x0) {
    puVar1 = local_148;
  }
  lVar2 = (longlong)(int)local_80;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(puVar1 + lVar3) + 0xa30))
                (*(longlong **)(puVar1 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c8906 FUN_1488c8906 body=177 status=ok
// SIG undefined FUN_1488c8906(void)

void FUN_1488c8906(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [32];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = (undefined1 *)0x0;
  local_38 = 0x400000000;
  (**(code **)(*param_1 + 0xd8))(param_1,local_60,param_4);
  puVar2 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar2 = local_60;
  }
  lVar1 = (longlong)(int)local_38;
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_1488c724a(*(undefined8 *)(puVar2 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while (lVar1 * 8 != lVar3);
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c89b8 FUN_1488c89b8 body=177 status=ok
// SIG undefined FUN_1488c89b8(void)

void FUN_1488c89b8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [32];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = (undefined1 *)0x0;
  local_38 = 0x400000000;
  (**(code **)(*param_1 + 0xd8))(param_1,local_60,param_4);
  puVar2 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar2 = local_60;
  }
  lVar1 = (longlong)(int)local_38;
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_1488c7360(*(undefined8 *)(puVar2 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while (lVar1 * 8 != lVar3);
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488c8a6a FUN_1488c8a6a body=432 status=ok
// SIG undefined FUN_1488c8a6a(void)

void FUN_1488c8a6a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [32];
  undefined1 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0.0 < param_5) {
    local_90 = (undefined1 *)0x0;
    local_88 = 0x400000000;
    (**(code **)(*param_1 + 0xd8))(param_1,local_b0);
    puVar7 = local_90;
    if (local_90 == (undefined1 *)0x0) {
      puVar7 = local_b0;
    }
    lVar5 = (longlong)(int)local_88;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(puVar7 + lVar6);
        iVar2 = *(int *)(lVar3 + 0x118);
        *(uint *)(lVar3 + 0x118) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0x11c) < iVar2 + 1U) {
          FUN_1488ca55c((longlong *)(lVar3 + 0x110),iVar2);
        }
        lVar3 = *(longlong *)(lVar3 + 0x110);
        lVar4 = (longlong)iVar2 * 0x34;
        puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar3 + 0xc + lVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar3 + lVar4) = param_2;
        *(undefined4 *)(lVar3 + 8 + lVar4) = param_3;
        *(undefined4 *)(lVar3 + 0x18 + lVar4) = param_4;
        *(float *)(lVar3 + 0x28 + lVar4) = param_5;
        *(float *)(lVar3 + 0x2c + lVar4) = param_5;
        *(undefined4 *)(lVar3 + 0x30 + lVar4) = 1;
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    (**(code **)(*param_1 + 0xe0))(param_1);
    if (local_90 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_d8);
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001488c8bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,param_2,param_4,param_6);
  return;
}



// FUNCTION 1488c8c4a FUN_1488c8c4a body=282 status=ok
// SIG undefined FUN_1488c8c4a(void)

void FUN_1488c8c4a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,undefined1 param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined1 local_80 [32];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0.0 < param_5) {
    local_60 = (undefined1 *)0x0;
    local_58 = 0x400000000;
    (**(code **)(*param_1 + 0xd8))
              (param_1,local_80,CONCAT71((int7)((ulonglong)param_4 >> 8),param_6) & 0xffffffff);
    puVar1 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar1 = local_80;
    }
    lVar3 = (longlong)(int)local_58;
    if (lVar3 != 0) {
      lVar2 = 0;
      do {
        local_88 = param_5;
        FUN_1488c7890(*(undefined8 *)(puVar1 + lVar2),param_2,param_3,param_4);
        lVar2 = lVar2 + 8;
      } while (lVar3 * 8 != lVar2);
    }
    (**(code **)(*param_1 + 0xe0))(param_1);
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001488c8d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1,param_2,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c8d7a FUN_1488c8d7a body=405 status=ok
// SIG undefined FUN_1488c8d7a(void)

void FUN_1488c8d7a(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  float param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 local_a0 [32];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0.0 < param_5) {
    local_80 = (undefined1 *)0x0;
    local_78 = 0x400000000;
    local_a8 = param_1;
    (**(code **)(*param_1 + 0xd8))(param_1,local_a0,param_6);
    puVar12 = local_80;
    if (local_80 == (undefined1 *)0x0) {
      puVar12 = local_a0;
    }
    lVar10 = (longlong)(int)local_78;
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        lVar4 = *(longlong *)(puVar12 + lVar11);
        iVar3 = *(int *)(lVar4 + 0x118);
        *(uint *)(lVar4 + 0x118) = iVar3 + 1U;
        if (*(uint *)(lVar4 + 0x11c) < iVar3 + 1U) {
          FUN_1488ca55c((longlong *)(lVar4 + 0x110),iVar3);
        }
        lVar4 = *(longlong *)(lVar4 + 0x110);
        lVar9 = (longlong)iVar3 * 0x34;
        puVar1 = (undefined8 *)(lVar4 + 0x24 + lVar9);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar9);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar4 + 8 + lVar9);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar4 + lVar9) = param_2;
        uVar8 = param_3[1];
        puVar1 = (undefined8 *)(lVar4 + 8 + lVar9);
        *puVar1 = *param_3;
        puVar1[1] = uVar8;
        uVar5 = param_4[1];
        uVar6 = param_4[2];
        uVar7 = param_4[3];
        puVar2 = (undefined4 *)(lVar4 + 0x18 + lVar9);
        *puVar2 = *param_4;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(float *)(lVar4 + 0x28 + lVar9) = param_5;
        *(float *)(lVar4 + 0x2c + lVar9) = param_5;
        *(undefined4 *)(lVar4 + 0x30 + lVar9) = 4;
        lVar11 = lVar11 + 8;
      } while (lVar10 * 8 != lVar11);
    }
    (**(code **)(*local_a8 + 0xe0))();
    if (local_80 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_c8);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001488c8edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,param_2,param_4);
  return;
}



// FUNCTION 1488c8f2e FUN_1488c8f2e body=83 status=ok
// SIG undefined FUN_1488c8f2e(void)

undefined8 * FUN_1488c8f2e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b411430;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c8f86 FUN_1488c8f86 body=38 status=ok
// SIG undefined FUN_1488c8f86(void)

undefined8 FUN_1488c8f86(undefined8 param_1,int param_2)

{
  FUN_1488cb050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c8fb2 FUN_1488c8fb2 body=29 status=ok
// SIG undefined FUN_1488c8fb2(void)

undefined8 FUN_1488c8fb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c8fd6 FUN_1488c8fd6 body=31 status=ok
// SIG undefined FUN_1488c8fd6(void)

undefined8 FUN_1488c8fd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c9006 FUN_1488c9006 body=93 status=ok
// SIG undefined FUN_1488c9006(void)

longlong FUN_1488c9006(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1488c9064(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1488c9064 FUN_1488c9064 body=146 status=ok
// SIG undefined FUN_1488c9064(void)

longlong * FUN_1488c9064(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1488c90f6 FUN_1488c90f6 body=31 status=ok
// SIG undefined FUN_1488c90f6(void)

undefined8 FUN_1488c90f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c9130 FUN_1488c9130 body=26 status=ok
// SIG undefined FUN_1488c9130(void)

bool FUN_1488c9130(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488c914a FUN_1488c914a body=93 status=ok
// SIG undefined FUN_1488c914a(void)

void FUN_1488c914a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8ea680;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488c91a8 FUN_1488c91a8 body=93 status=ok
// SIG undefined FUN_1488c91a8(void)

void FUN_1488c91a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8ea680;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b410f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488c9206 FUN_1488c9206 body=126 status=ok
// SIG undefined FUN_1488c9206(void)

void FUN_1488c9206(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8ea680;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b410f60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488c9275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488c9284 FUN_1488c9284 body=56 status=ok
// SIG undefined FUN_1488c9284(void)

void FUN_1488c9284(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488c92b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488c92bc FUN_1488c92bc body=125 status=ok
// SIG undefined FUN_1488c92bc(void)

void FUN_1488c92bc(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 4,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 4)) {
    uVar3 = uVar2 >> 4 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  return;
}



// FUNCTION 1488c933a FUN_1488c933a body=132 status=ok
// SIG undefined FUN_1488c933a(void)

void FUN_1488c933a(longlong param_1,int param_2)

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



// FUNCTION 1488c93c0 FUN_1488c93c0 body=9 status=ok
// SIG undefined FUN_1488c93c0(void)

void FUN_1488c93c0(longlong param_1)

{
  FUN_14862ed78(param_1 + 0x10);
  return;
}



// FUNCTION 1488c93ca FUN_1488c93ca body=29 status=ok
// SIG undefined FUN_1488c93ca(void)

undefined8 FUN_1488c93ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488c93e8 FUN_1488c93e8 body=158 status=ok
// SIG undefined FUN_1488c93e8(void)

void FUN_1488c93e8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1488c945a;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1488c945a;
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
LAB_1488c945a:
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
                    /* WARNING: Could not recover jumptable at 0x0001488c947a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1488c9486 FUN_1488c9486 body=68 status=ok
// SIG undefined FUN_1488c9486(void)

void FUN_1488c9486(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1488c94ca(param_1);
  return;
}



// FUNCTION 1488c94ca FUN_1488c94ca body=473 status=ok
// SIG undefined FUN_1488c94ca(void)

void FUN_1488c94ca(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x68;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 100 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar7) =
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



// FUNCTION 1488c96a4 FUN_1488c96a4 body=132 status=ok
// SIG undefined FUN_1488c96a4(void)

void FUN_1488c96a4(longlong param_1,int param_2)

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



// FUNCTION 1488c972a FUN_1488c972a body=69 status=ok
// SIG undefined FUN_1488c972a(void)

longlong FUN_1488c972a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145829ac4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x150 + *param_1;
  FUN_14119f8b6(lVar2,1);
  return lVar2;
}



// FUNCTION 1488c97c2 FUN_1488c97c2 body=107 status=ok
// SIG undefined FUN_1488c97c2(void)

void FUN_1488c97c2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((ulonglong)param_2 * 0x150 + lVar1);
  FUN_1486c0a08(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x150),(longlong)iVar3 * 0x150);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1488c982e FUN_1488c982e body=62 status=ok
// SIG undefined FUN_1488c982e(void)

void FUN_1488c982e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488c986c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x150,8);
  }
  return;
}



// FUNCTION 1488c986c FUN_1488c986c body=110 status=ok
// SIG undefined FUN_1488c986c(void)

ulonglong FUN_1488c986c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x150) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488c98a5;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x150,8);
      param_2 = param_2 / 0x150;
    }
  }
LAB_1488c98a5:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488c98da FUN_1488c98da body=114 status=ok
// SIG undefined FUN_1488c98da(void)

void FUN_1488c98da(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x150,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x150,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1488c994c FUN_1488c994c body=130 status=ok
// SIG undefined FUN_1488c994c(void)

void FUN_1488c994c(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x110;
    param_2 = param_2 + 0x110;
    do {
      *(undefined8 *)(param_1 + -0x110) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + -0x108) = 0xffffffff;
      FUN_140e30dbe(param_1 + -0x100,param_2 + -0x100);
      FUN_1447a97f4(param_1,param_2);
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      uVar3 = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined4 *)(param_1 + 0x34) = uVar3;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      param_1 = param_1 + 0x150;
      param_2 = param_2 + 0x150;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1488c99ce FUN_1488c99ce body=122 status=ok
// SIG undefined FUN_1488c99ce(void)

void FUN_1488c99ce(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x110) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1488c9a48 FUN_1488c9a48 body=98 status=ok
// SIG undefined FUN_1488c9a48(void)

void FUN_1488c9a48(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x150 + *param_1);
  FUN_14106822e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x150 + (longlong)_Dst),(longlong)iVar2 * 0x150);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1488c9aaa FUN_1488c9aaa body=183 status=ok
// SIG undefined FUN_1488c9aaa(void)

longlong FUN_1488c9aaa(longlong *param_1,uint param_2,short *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  short *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(short *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_1488c9b44;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1488c9b62(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_1488c9b44:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 1488c9b62 FUN_1488c9b62 body=271 status=ok
// SIG undefined FUN_1488c9b62(void)

undefined4 * FUN_1488c9b62(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined2 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488c9c72(param_1,local_48);
  *local_40 = *(undefined2 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0xffffffff00000000;
  cVar1 = FUN_1488c9d58(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 6) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1488c9e4c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488c9c72 FUN_1488c9c72 body=229 status=ok
// SIG undefined FUN_1488c9c72(void)

int * FUN_1488c9c72(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 1488c9d58 FUN_1488c9d58 body=129 status=ok
// SIG undefined FUN_1488c9d58(void)

undefined8 FUN_1488c9d58(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(short *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1488c9dda(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1488c9dda FUN_1488c9dda body=114 status=ok
// SIG undefined FUN_1488c9dda(void)

void FUN_1488c9dda(longlong *param_1,int param_2)

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



// FUNCTION 1488c9e4c FUN_1488c9e4c body=413 status=ok
// SIG undefined FUN_1488c9e4c(void)

void FUN_1488c9e4c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0xc + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1488c9fea FUN_1488c9fea body=67 status=ok
// SIG undefined FUN_1488c9fea(void)

void FUN_1488c9fea(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141068288(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1488c9e4c(param_1);
    return;
  }
  FUN_1488ca02e(param_1);
  FUN_141068288(param_1,0);
  return;
}



// FUNCTION 1488ca02e FUN_1488ca02e body=322 status=ok
// SIG undefined FUN_1488ca02e(void)

void FUN_1488ca02e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1488ca172 FUN_1488ca172 body=31 status=ok
// SIG undefined FUN_1488ca172(void)

undefined8 FUN_1488ca172(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ca1a6 FUN_1488ca1a6 body=85 status=ok
// SIG undefined FUN_1488ca1a6(void)

void FUN_1488ca1a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4114a0;
  return;
}



// FUNCTION 1488ca1fc FUN_1488ca1fc body=118 status=ok
// SIG undefined FUN_1488ca1fc(void)

void FUN_1488ca1fc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4114a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488ca263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488ca272 FUN_1488ca272 body=105 status=ok
// SIG undefined FUN_1488ca272(void)

undefined8 FUN_1488ca272(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1461a9bb0(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ca2dc FUN_1488ca2dc body=24 status=ok
// SIG undefined FUN_1488ca2dc(void)

void FUN_1488ca2dc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488ca2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1488ca2f4 FUN_1488ca2f4 body=112 status=ok
// SIG undefined FUN_1488ca2f4(void)

void FUN_1488ca2f4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1488ca364 FUN_1488ca364 body=15 status=ok
// SIG undefined FUN_1488ca364(void)

void FUN_1488ca364(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 1488ca374 FUN_1488ca374 body=147 status=ok
// SIG undefined FUN_1488ca374(void)

void FUN_1488ca374(longlong param_1,int param_2)

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



// FUNCTION 1488ca408 FUN_1488ca408 body=96 status=ok
// SIG undefined FUN_1488ca408(void)

void FUN_1488ca408(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1488ca468 FUN_1488ca468 body=110 status=ok
// SIG undefined FUN_1488ca468(void)

void FUN_1488ca468(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1488ca4d8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488ca4d8 FUN_1488ca4d8 body=132 status=ok
// SIG undefined FUN_1488ca4d8(void)

void FUN_1488ca4d8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1488ca55c FUN_1488ca55c body=143 status=ok
// SIG undefined FUN_1488ca55c(void)

void FUN_1488ca55c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x34,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x34)) {
      uVar5 = uVar4 / 0x34 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x34,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488ca5ec FUN_1488ca5ec body=96 status=ok
// SIG undefined FUN_1488ca5ec(void)

void FUN_1488ca5ec(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1488ca64c FUN_1488ca64c body=116 status=ok
// SIG undefined FUN_1488ca64c(void)

void FUN_1488ca64c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_1488ca6c2(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488ca6c2 FUN_1488ca6c2 body=133 status=ok
// SIG undefined FUN_1488ca6c2(void)

void FUN_1488ca6c2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488ca748 FUN_1488ca748 body=299 status=ok
// SIG undefined FUN_1488ca748(void)

undefined4 * FUN_1488ca748(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1488ca874(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_1488ca95a(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1488cab3e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ca874 FUN_1488ca874 body=230 status=ok
// SIG undefined FUN_1488ca874(void)

int * FUN_1488ca874(longlong *param_1,int *param_2)

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



// FUNCTION 1488ca95a FUN_1488ca95a body=132 status=ok
// SIG undefined FUN_1488ca95a(void)

undefined8 FUN_1488ca95a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
    iVar5 = FUN_1488ca9e0();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_1488caa96(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1488ca97e;
    }
  }
  uVar6 = 0;
LAB_1488ca97e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ca9e0 FUN_1488ca9e0 body=180 status=ok
// SIG undefined FUN_1488ca9e0(void)

int FUN_1488ca9e0(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_1488cab08(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1488caa6e;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1488caa6e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488caa96 FUN_1488caa96 body=114 status=ok
// SIG undefined FUN_1488caa96(void)

void FUN_1488caa96(longlong *param_1,int param_2)

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



// FUNCTION 1488cab08 FUN_1488cab08 body=53 status=ok
// SIG undefined FUN_1488cab08(void)

ulonglong FUN_1488cab08(int *param_1,int *param_2)

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



// FUNCTION 1488cab3e FUN_1488cab3e body=436 status=ok
// SIG undefined FUN_1488cab3e(void)

void FUN_1488cab3e(longlong *param_1)

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



// FUNCTION 1488cacf4 FUN_1488cacf4 body=230 status=ok
// SIG undefined FUN_1488cacf4(void)

undefined8 * FUN_1488cacf4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1488cadea FUN_1488cadea body=230 status=ok
// SIG undefined FUN_1488cadea(void)

undefined8 * FUN_1488cadea(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1488cb050 FUN_1488cb050 body=120 status=ok
// SIG undefined FUN_1488cb050(void)

void FUN_1488cb050(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b410a00;
  plVar3 = (longlong *)param_1[0xb];
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
  *param_1 = &PTR_FUN_14b411430;
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
                    /* WARNING: Could not recover jumptable at 0x0001488cb0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488cb0c8 FUN_1488cb0c8 body=24 status=ok
// SIG undefined FUN_1488cb0c8(void)

longlong FUN_1488cb0c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x260) == 0) {
    lVar1 = param_1 + 0x3c;
  }
  return lVar1;
}



// FUNCTION 1488cb0e0 FUN_1488cb0e0 body=306 status=ok
// SIG undefined FUN_1488cb0e0(void)

void FUN_1488cb0e0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined1 *)0x0;
  local_30 = 0x400000000;
  local_60 = param_2;
  if (param_2 != 0) {
    do {
      uVar2 = local_30;
      if (*(longlong *)(param_2 + 0x270) != 0) {
        lVar8 = (longlong)(int)local_30;
        uVar3 = (int)local_30 + 1;
        local_30 = CONCAT44(local_30._4_4_,uVar3);
        if (local_30._4_4_ < uVar3) {
          FUN_1488d17b2(local_58,uVar2 & 0xffffffff);
        }
        puVar4 = local_38;
        if (local_38 == (undefined1 *)0x0) {
          puVar4 = local_58;
        }
        *(longlong *)(puVar4 + lVar8 * 8) = param_2;
      }
      param_2 = FUN_14001d26e(param_2);
    } while (param_2 != 0);
    lVar8 = (longlong)(int)local_30;
    if (0 < lVar8) {
      plVar6 = param_1;
      puVar4 = local_58;
      if (local_38 != (undefined1 *)0x0) {
        puVar4 = local_38;
      }
      do {
        lVar5 = (longlong)*(int *)(*plVar6 + 0x20);
        param_1 = plVar6;
        if (lVar5 != 0) {
          plVar7 = *(longlong **)(*plVar6 + 0x18);
          lVar5 = lVar5 << 3;
          do {
            param_1 = plVar7;
            if (*(longlong *)*plVar7 ==
                *(longlong *)(*(longlong *)(puVar4 + (lVar8 + -1) * 8) + 0x270)) break;
            plVar7 = plVar7 + 1;
            lVar5 = lVar5 + -8;
            param_1 = plVar6;
          } while (lVar5 != 0);
        }
        bVar1 = 1 < lVar8;
        lVar8 = lVar8 + -1;
        plVar6 = param_1;
      } while (bVar1);
    }
  }
  FUN_1488cb214(*param_1 + 8,&local_60);
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488cb214 FUN_1488cb214 body=115 status=ok
// SIG undefined FUN_1488cb214(void)

void FUN_1488cb214(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    uVar3 = 0;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + (longlong)(int)uVar3 * 8) == *param_2) {
        iVar4 = ~uVar3 + iVar2;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(lVar1 + (longlong)(int)uVar3 * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar2 = (int)param_1[1];
        }
        uVar3 = uVar3 - 1;
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  return;
}



// FUNCTION 1488cb288 FUN_1488cb288 body=22 status=ok
// SIG undefined FUN_1488cb288(void)

undefined8 FUN_1488cb288(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb84940;
  if (DAT_14cb84940 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb84940 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb84940 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb84940[0x3a] <= *(int *)((longlong)DAT_14cb84940 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb84940 + 0x300))(DAT_14cb84940);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1488cb29e FUN_1488cb29e body=686 status=ok
// SIG undefined FUN_1488cb29e(void)

void FUN_1488cb29e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (lVar9 == 0) {
    uVar8 = FUN_1406ef318();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x40) = lVar9;
  }
  plVar11 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    if ((lVar9 == 0) || (*plVar11 == 0)) goto LAB_1488cb3b2;
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar7 == '\0')) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      goto LAB_1488cb3b2;
    }
    uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar9 = FUN_144aff482(uVar8,plVar11);
    *(longlong *)(param_1 + 0x48) = lVar9;
    if (lVar9 == 0) goto LAB_1488cb3b2;
  }
  lVar9 = *(longlong *)(param_1 + 0xc0);
  if (lVar9 == 0) {
    plVar10 = (longlong *)FUN_14001cc68(0x58,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b412560;
    FUN_1488c489a(plVar10 + 2);
    if (plVar10 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0x10;
      plVar12 = *(longlong **)(param_1 + 200);
      if (plVar12 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 200) = 0;
LAB_1488cb493:
        LOCK();
        plVar2 = plVar12 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (plVar10 != (longlong *)0x0) goto LAB_1488cb4bb;
      }
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0xc0) = plVar10 + 2;
      plVar12 = *(longlong **)(param_1 + 200);
      if (plVar10 == plVar12) {
        LOCK();
        plVar12 = plVar10 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 200) = plVar10;
        if (plVar12 != (longlong *)0x0) goto LAB_1488cb493;
      }
LAB_1488cb4bb:
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    FUN_14184443c(*(longlong *)(param_1 + 0xc0) + 0x30,plVar11);
    lVar9 = *(longlong *)(param_1 + 0xc0);
  }
  if (param_3 != (undefined8 *)0x0) {
    local_40 = *(longlong **)(param_1 + 200);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    pcVar4 = (code *)*param_3;
    plVar11 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_3[2];
    }
    local_48 = lVar9;
    uVar8 = (**(code **)(*plVar11 + 8))(plVar11);
    cVar7 = (*pcVar4)(uVar8,&local_48);
    plVar11 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_40 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (cVar7 == '\0') goto LAB_1488cb3b2;
    lVar9 = *(longlong *)(param_1 + 0xc0);
  }
  lVar5 = *(longlong *)(param_1 + 200);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_140255dd4(param_2,iVar3);
  }
  lVar6 = *param_2;
  *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar9;
  *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = lVar5;
LAB_1488cb3b2:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488cb54e FUN_1488cb54e body=154 status=ok
// SIG undefined FUN_1488cb54e(void)

ulonglong FUN_1488cb54e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_RBX;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (lVar5 == 0) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x38) == 0)) goto LAB_1488cb580;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      goto LAB_1488cb580;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x38));
    *(longlong *)(param_1 + 0x48) = lVar5;
    if (lVar5 == 0) goto LAB_1488cb580;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar5 + 0x48));
LAB_1488cb580:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1488cb5e8 FUN_1488cb5e8 body=42 status=ok
// SIG undefined FUN_1488cb5e8(void)

undefined8 FUN_1488cb5e8(undefined8 param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = FUN_140baf132(param_1);
    if (cVar1 != '\0') break;
    param_1 = FUN_14001d26e(param_1);
  }
  return param_1;
}



// FUNCTION 1488cb612 FUN_1488cb612 body=149 status=ok
// SIG undefined FUN_1488cb612(void)

void FUN_1488cb612(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x490);
  if (lVar4 == 0) {
    uVar3 = FUN_14065883a();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x490) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x488));
    }
    *(undefined8 *)(param_1 + 0x498) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1488cb6a8 FUN_1488cb6a8 body=176 status=ok
// SIG undefined FUN_1488cb6a8(void)

ulonglong FUN_1488cb6a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_RSI;
  bool bVar6;
  
  if (param_2 == 0) {
    unaff_RSI = 0;
  }
  else {
    while (bVar6 = param_1 == *(longlong *)(param_2 + 0x30),
          unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),bVar6), !bVar6) {
      lVar4 = *(longlong *)(param_1 + 0x60);
      if (lVar4 == 0) {
        uVar3 = FUN_14042c486();
        lVar4 = FUN_14477b664(uVar3);
        *(longlong *)(param_1 + 0x60) = lVar4;
      }
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (lVar5 == 0) {
        if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x58) == 0)) break;
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar1 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')
           ) {
          lVar5 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x58));
        }
        *(longlong *)(param_1 + 0x68) = lVar5;
      }
      param_1 = lVar5;
      if (lVar5 == 0) break;
    }
  }
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1488cb758 FUN_1488cb758 body=13 status=ok
// SIG undefined FUN_1488cb758(void)

int FUN_1488cb758(longlong param_1)

{
  return *(int *)(param_1 + 0x3a8) - *(int *)(param_1 + 0x3d4);
}



// FUNCTION 1488cb766 FUN_1488cb766 body=35 status=ok
// SIG undefined FUN_1488cb766(void)

undefined8 * FUN_1488cb766(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1488cb78a(param_1 + 0x3a0);
  return param_2;
}



// FUNCTION 1488cb78a FUN_1488cb78a body=310 status=ok
// SIG undefined FUN_1488cb78a(void)

void FUN_1488cb78a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x68 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cb8c2 FUN_1488cb8c2 body=72 status=ok
// SIG undefined FUN_1488cb8c2(void)

void FUN_1488cb8c2(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1447325ac(param_1,local_18,1);
  thunk_FUN_1488d657e(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cb90c FUN_1488cb90c body=13 status=ok
// SIG undefined FUN_1488cb90c(void)

void FUN_1488cb90c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_140b96472(param_1,1,1);
  return;
}



// FUNCTION 1488cb91a FUN_1488cb91a body=76 status=ok
// SIG undefined FUN_1488cb91a(void)

void FUN_1488cb91a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_140a96716(param_1 + 0x10,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = param_2;
  FUN_140b96472(param_1,param_3,1);
  return;
}



// FUNCTION 1488cb966 FUN_1488cb966 body=67 status=ok
// SIG undefined FUN_1488cb966(void)

void FUN_1488cb966(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_141895c4e(param_1 + 0x20,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = param_2;
  FUN_140b96472(param_1,0,0);
  return;
}



// FUNCTION 1488cb9aa FUN_1488cb9aa body=89 status=ok
// SIG undefined FUN_1488cb9aa(void)

void FUN_1488cb9aa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_20;
  local_20 = param_2;
  FUN_1488d1f34(param_1 + 0x10);
  FUN_140b96472(param_1,1,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cba04 FUN_1488cba04 body=89 status=ok
// SIG undefined FUN_1488cba04(void)

void FUN_1488cba04(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_20;
  local_20 = param_2;
  FUN_1488d2006(param_1 + 0x20);
  FUN_140b96472(param_1,0,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cba5e FUN_1488cba5e body=52 status=ok
// SIG undefined FUN_1488cba5e(void)

void FUN_1488cba5e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1488d20d8(param_1 + 0x20,0);
  }
  FUN_140b96472(param_1,0,0);
  return;
}



// FUNCTION 1488cba92 FUN_1488cba92 body=669 status=ok
// SIG undefined FUN_1488cba92(void)

void FUN_1488cba92(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
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
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == '\0') {
    FUN_140368e06();
  }
  else {
    FUN_14087e154(param_1,1);
  }
  ppuVar1 = (undefined8 **)(param_2 + 2);
  local_88 = (longlong *)&DAT_100000000;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  uStack_70 = 0;
  uStack_80 = ppuVar1;
  if ((int)param_2[5] == 0) {
    iVar21 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar21 = (int)param_2[5];
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  iStack_94 = iStack_74;
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_b0 = param_2;
  if ((iStack_74 != iVar21) || (uStack_80 != ppuVar1)) {
    do {
      if (*(longlong *)(*local_b0 + 8 + (longlong)iStack_94 * 0x18) != 0) {
        plVar2 = (longlong *)(*local_b0 + (longlong)iStack_94 * 0x18);
        if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
          lVar5 = *plVar2;
          uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
          uVar19 = (uint)lVar5 & 0xffff;
          lVar18 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar18 = param_1 + 0x78;
          }
          iVar20 = *(int *)(lVar18 + (ulonglong)
                                     (*(int *)(param_1 + 0x88) - 1U &
                                     (int)((ulonglong)lVar5 >> 0x20) +
                                     ((uint)lVar5 << 0x10 | uVar19) +
                                     (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar19 >> 4)) * 4);
          if (iVar20 != -1) {
            do {
              plVar3 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar20 * 0x18);
              if (*plVar3 == lVar5) {
                if ((plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) &&
                   (local_b8 = (undefined8 *)plVar3[1], local_b8 != (undefined8 *)0x0))
                goto LAB_1488cbc13;
                break;
              }
              iVar20 = (int)plVar3[2];
            } while (iVar20 != -1);
          }
        }
        local_b8 = (undefined8 *)FUN_14001cc68(0x48,0x10);
        local_b8[4] = 0;
        local_b8[5] = 0;
        *local_b8 = 0;
        local_b8[1] = 0;
        local_b8[2] = 0;
        local_b8[3] = 0;
        local_b8[6] = 0;
        *(undefined4 *)(local_b8 + 4) = 0x3f800000;
        *(undefined1 *)((longlong)local_b8 + 0x25) = 8;
        *(undefined2 *)((longlong)local_b8 + 0x26) = 0xffff;
        local_b8[7] = 0;
        local_b8[8] = 0;
        uStack_80 = &local_b8;
        local_88 = plVar2;
        FUN_1406fdf00((longlong *)(param_1 + 0x40),local_64,&local_88,0);
LAB_1488cbc13:
        puVar4 = (undefined4 *)plVar2[1];
        *(undefined8 *)((longlong)local_b8 + 0x2d) = *(undefined8 *)((longlong)puVar4 + 0x2d);
        uVar7 = *puVar4;
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        uVar10 = puVar4[3];
        uVar11 = puVar4[4];
        uVar12 = puVar4[5];
        uVar13 = puVar4[6];
        uVar14 = puVar4[7];
        uVar15 = puVar4[9];
        uVar16 = puVar4[10];
        uVar17 = puVar4[0xb];
        *(undefined4 *)(local_b8 + 4) = puVar4[8];
        *(undefined4 *)((longlong)local_b8 + 0x24) = uVar15;
        *(undefined4 *)(local_b8 + 5) = uVar16;
        *(undefined4 *)((longlong)local_b8 + 0x2c) = uVar17;
        *(undefined4 *)(local_b8 + 2) = uVar11;
        *(undefined4 *)((longlong)local_b8 + 0x14) = uVar12;
        *(undefined4 *)(local_b8 + 3) = uVar13;
        *(undefined4 *)((longlong)local_b8 + 0x1c) = uVar14;
        *(undefined4 *)local_b8 = uVar7;
        *(undefined4 *)((longlong)local_b8 + 4) = uVar8;
        *(undefined4 *)(local_b8 + 1) = uVar9;
        *(undefined4 *)((longlong)local_b8 + 0xc) = uVar10;
        FUN_144a787a6(local_b8 + 7,puVar4 + 0xe);
      }
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != param_2 ||
             ((undefined8 **)CONCAT44(uStack_9c,uStack_a0) != ppuVar1 || iStack_94 != iVar21));
  }
  *(undefined1 *)(param_1 + 0xc1) = 1;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488cbd30 FUN_1488cbd30 body=108 status=ok
// SIG undefined FUN_1488cbd30(void)

void FUN_1488cbd30(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14087ea10(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14087e9d8(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488cbd9c FUN_1488cbd9c body=56 status=ok
// SIG undefined FUN_1488cbd9c(void)

void FUN_1488cbd9c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140bb3f32(param_1,iVar1);
  }
  FUN_140bb28fa((longlong)iVar1 * 0x18 + *param_1);
  return;
}



// FUNCTION 1488cbdd4 FUN_1488cbdd4 body=118 status=ok
// SIG undefined FUN_1488cbdd4(void)

void FUN_1488cbdd4(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1481d9b96(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + iVar1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x28) = param_2;
    FUN_1488d21c2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488cbe4c FUN_1488cbe4c body=112 status=ok
// SIG undefined FUN_1488cbe4c(void)

void FUN_1488cbe4c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456af342(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 0x28) = param_2;
  FUN_146f010de(param_1);
  return;
}



// FUNCTION 1488cbebc FUN_1488cbebc body=91 status=ok
// SIG undefined FUN_1488cbebc(void)

void FUN_1488cbebc(longlong param_1,longlong param_2)

{
  FUN_141897836();
  FUN_143db9f24(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(param_2 + 0xfc);
  *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(param_2 + 0xfd);
  return;
}



// FUNCTION 1488cbf18 FUN_1488cbf18 body=33 status=ok
// SIG undefined FUN_1488cbf18(void)

void FUN_1488cbf18(longlong param_1)

{
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x548);
  return;
}



// FUNCTION 1488cbf3a FUN_1488cbf3a body=56 status=ok
// SIG undefined FUN_1488cbf3a(void)

undefined8 * FUN_1488cbf3a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x530) == '\x01') {
    puVar2 = (undefined8 *)(param_1 + 0x534);
  }
  else {
    lVar1 = FUN_140831778();
    puVar2 = (undefined8 *)(lVar1 + 0x88);
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 1488cbf72 FUN_1488cbf72 body=80 status=ok
// SIG undefined FUN_1488cbf72(void)

void FUN_1488cbf72(longlong param_1,char param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (((char)(*(char *)(param_1 + 0x131) + '\x01') != param_2) &&
     (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_1448b5cf4(*(longlong *)(param_1 + 0x20),param_3);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x0001488cbfb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1488cc026 FUN_1488cc026 body=74 status=ok
// SIG undefined FUN_1488cc026(void)

void FUN_1488cc026(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
      FUN_1488ca64c(param_2,iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1488cc070 FUN_1488cc070 body=186 status=ok
// SIG undefined FUN_1488cc070(void)

longlong FUN_1488cc070(longlong *param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[10];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0xb] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar4 = (longlong *)(param_1[2] + (longlong)iVar6 * 0x14), *plVar4 != lVar2) {
        iVar6 = *(int *)((longlong)plVar4 + 0xc);
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (plVar4 + 1 == (longlong *)0x0 || plVar4 == (longlong *)0x0) {
        return 0;
      }
      sVar1 = (short)plVar4[1];
      if (-1 < sVar1) {
        if ((int)sVar1 < (int)param_1[1]) {
          return (longlong)(int)sVar1 * 0x28 + *param_1;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1488cc12a FUN_1488cc12a body=140 status=ok
// SIG undefined FUN_1488cc12a(void)

longlong FUN_1488cc12a(longlong *param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94)) {
    plVar3 = param_1 + 0x13;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x14];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[0x15] - 1U & (int)*param_2) * 4);
    if (iVar4 != -1) {
      while (psVar1 = (short *)(param_1[0xc] + (longlong)iVar4 * 0xc), *psVar1 != *param_2) {
        iVar4 = *(int *)(psVar1 + 2);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (psVar1 + 1 == (short *)0x0 || psVar1 == (short *)0x0) {
        return 0;
      }
      sVar2 = psVar1[1];
      if (-1 < sVar2) {
        if ((int)sVar2 < (int)param_1[1]) {
          return (longlong)(int)sVar2 * 0x28 + *param_1;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1488cc1b6 FUN_1488cc1b6 body=82 status=ok
// SIG undefined FUN_1488cc1b6(void)

void FUN_1488cc1b6(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x79c) != '\x01') {
    FUN_140aeef6c(param_1);
    return;
  }
  uVar1 = FUN_1447210f0(param_1);
  plVar2 = (longlong *)FUN_14007a5e6(uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488cc1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x40))
              (plVar2,*(undefined4 *)(param_1 + 0x798),*(code **)(*plVar2 + 0x40));
    return;
  }
  return;
}



// FUNCTION 1488cc208 FUN_1488cc208 body=70 status=ok
// SIG undefined FUN_1488cc208(void)

void FUN_1488cc208(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1411311bc();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
                    /* WARNING: Could not recover jumptable at 0x0001488cc24b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x510))(param_1,lVar2);
  return;
}



// FUNCTION 1488cc24e FUN_1488cc24e body=148 status=ok
// SIG undefined FUN_1488cc24e(void)

void FUN_1488cc24e(longlong param_1,undefined8 *param_2,char param_3)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double dVar4;
  
  if (*(longlong *)(param_1 + -0x358) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x290);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x280) = 1;
  }
  else if (*(longlong *)(*(longlong *)(param_1 + -0x358) + 0x120) == 0) {
    dVar1 = *(double *)(param_1 + 0x300);
    dVar4 = (double)param_2[9] * *(double *)(param_1 + 0x2f8);
    param_2[8] = (double)param_2[8] * *(double *)(param_1 + 0x2f0);
    param_2[9] = dVar4;
    param_2[10] = dVar1 * (double)param_2[10];
    param_2[0xb] = 0;
    FUN_1413d4c10(param_1 + -0x520,dVar4,0,0,param_3 + '\x01');
  }
  return;
}



// FUNCTION 1488cc2fc FUN_1488cc2fc body=65 status=ok
// SIG undefined FUN_1488cc2fc(void)

void FUN_1488cc2fc(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x440) = param_2;
  *(undefined4 *)(param_1 + 0x444) = 0;
  FUN_14022e476(param_1 + -0x520);
  *(byte *)(param_1 + 0x448) = *(byte *)(param_1 + 0x448) & 0xdf;
  FUN_140b3b830(param_1 + -0x520,0);
  return;
}



// FUNCTION 1488cc33e FUN_1488cc33e body=147 status=ok
// SIG undefined FUN_1488cc33e(void)

undefined8 FUN_1488cc33e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,&local_28);
  if (local_24 == '\x01') {
    uVar1 = FUN_1447210f0(param_1 + -0x528);
    plVar2 = (longlong *)FUN_14007a5e6(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xc0))(plVar2,param_2,local_28);
      goto LAB_1488cc3b0;
    }
  }
  FUN_144928b90(param_2,1);
LAB_1488cc3b0:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cc3d2 FUN_1488cc3d2 body=207 status=ok
// SIG undefined FUN_1488cc3d2(void)

undefined8 * FUN_1488cc3d2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [44];
  undefined1 local_6c [12];
  undefined4 local_60;
  char local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,&local_60);
  if (local_5c == '\x01') {
    uVar1 = FUN_1447210f0(param_1 + -0x528);
    plVar2 = (longlong *)FUN_14007a5e6(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xc0))(plVar2,local_58,local_60);
      FUN_144a659ac(local_48,local_6c,3);
      FUN_140e3418c(local_6c,param_2,1);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1488cc47d;
    }
  }
  *param_2 = 0;
LAB_1488cc47d:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cc4a2 FUN_1488cc4a2 body=207 status=ok
// SIG undefined FUN_1488cc4a2(void)

undefined8 * FUN_1488cc4a2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [44];
  undefined1 local_6c [12];
  undefined4 local_60;
  char local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,&local_60);
  if (local_5c == '\x01') {
    uVar1 = FUN_1447210f0(param_1 + -0x528);
    plVar2 = (longlong *)FUN_14007a5e6(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xc0))(plVar2,local_58,local_60);
      FUN_144a659ac(local_48,local_6c,2);
      FUN_140e3418c(local_6c,param_2,1);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1488cc54d;
    }
  }
  *param_2 = 0;
LAB_1488cc54d:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cc572 FUN_1488cc572 body=68 status=ok
// SIG undefined FUN_1488cc572(void)

void FUN_1488cc572(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x439) & 1) != 0) {
    lVar1 = FUN_144944cf2(param_1 + -0x530);
    if ((lVar1 == 0) && ((*(byte *)(param_1 + 0x438) & 2) == 0)) {
      FUN_1488cc5b6(param_1 + -0x530);
      return;
    }
  }
  return;
}



// FUNCTION 1488cc5b6 FUN_1488cc5b6 body=618 status=ok
// SIG undefined FUN_1488cc5b6(void)

void FUN_1488cc5b6(longlong param_1)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  double local_a8;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(byte *)(param_1 + 0x969) = *(byte *)(param_1 + 0x969) & 0xfe;
  lVar6 = FUN_140831778();
  dVar4 = (double)*(float *)(lVar6 + 0x48);
  dVar2 = DAT_14c8462d0 * dVar4;
  dVar3 = DAT_14c8462c8 * dVar4;
  dVar4 = dVar4 * DAT_14c8462c0;
  local_d0 = dVar4;
  local_c8 = dVar3;
  local_c0 = dVar2;
  FUN_1416b9e2e(&local_b8);
  local_e8 = (double)*(float *)(lVar6 + 0x4c);
  local_d8 = local_a8 * local_e8;
  local_e0 = (double)CONCAT44(uStack_ac,local_b0) * local_e8;
  local_e8 = local_e8 * local_b8;
  if ((((9.999999747378752e-05 < ABS(dVar4)) || (9.999999747378752e-05 < ABS(dVar3))) ||
      (9.999999747378752e-05 < ABS(dVar2))) ||
     (((9.999999747378752e-05 < ABS(local_e8) || (9.999999747378752e-05 < ABS(local_e0))) ||
      (9.999999747378752e-05 < ABS(local_d8))))) {
    FUN_143da9998(param_1,&local_d0,&local_e8);
  }
  local_f0 = 0;
  uVar7 = FUN_1401b4c98(param_1);
  uVar1 = *(undefined4 *)(lVar6 + 0x50);
  local_100 = (undefined8 *)0x0;
  local_f8 = 0;
  FUN_1446efa72(&local_100,0,3,0x10);
  puVar5 = local_100;
  local_f8 = 3;
  *local_100 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_100[2] = lVar8;
  *local_100 = &PTR_FUN_14b4128a0;
  local_100[3] = 0;
  FUN_14485c47a(local_100 + 3,param_1);
  puVar5[4] = param_1;
  local_b8 = 0.0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_100);
  local_78 = 1;
  local_110 = 0xbf800000;
  local_118 = 0;
  FUN_1406f3fee(uVar7,&local_f0,&local_b8,uVar1);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  FUN_1449db362(&local_100);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cc822 FUN_1488cc822 body=101 status=ok
// SIG undefined FUN_1488cc822(void)

void FUN_1488cc822(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 != 0) {
    lVar1 = FUN_144a75eb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar2 = FUN_144a7ba4c(lVar2);
      if (lVar2 != param_2) {
        return;
      }
    }
  }
  FUN_140b3c604(param_1);
  FUN_140b3becc(param_1);
  return;
}



// FUNCTION 1488cc888 FUN_1488cc888 body=66 status=ok
// SIG undefined FUN_1488cc888(void)

void FUN_1488cc888(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + -0x1a8);
  lVar1 = FUN_1488cb612(uVar3);
  if (lVar1 == 0) {
    while (cVar2 = FUN_140baf132(uVar3), cVar2 == '\0') {
      uVar3 = FUN_14001d26e(uVar3);
    }
  }
  FUN_1488cb612(uVar3);
  return;
}



// FUNCTION 1488cc8ca FUN_1488cc8ca body=409 status=ok
// SIG undefined FUN_1488cc8ca(void)

undefined1 (*) [16] FUN_1488cc8ca(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar8 = *(longlong *)(param_1 + -0x1a8);
  dVar10 = *(double *)(lVar8 + 0x4b0);
  if ((((*(double *)(lVar8 + 0x4a0) == 0.0) && (!NAN(*(double *)(lVar8 + 0x4a0)))) &&
      (*(double *)(lVar8 + 0x4a8) == 0.0)) &&
     (((!NAN(*(double *)(lVar8 + 0x4a8)) && (dVar10 == 0.0)) && (!NAN(dVar10))))) {
    while (cVar7 = FUN_140baf132(lVar8), cVar7 == '\0') {
      lVar8 = FUN_14001d26e(lVar8);
    }
    dVar10 = *(double *)(lVar8 + 0x4b0);
  }
  pdVar9 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + -0x3d0) != 0) {
    pdVar9 = (double *)(*(longlong *)(param_1 + -0x3d0) + 0x240);
  }
  dVar4 = *pdVar9;
  dVar5 = pdVar9[1];
  dVar6 = pdVar9[2];
  dVar11 = *(double *)(lVar8 + 0x4a0) * pdVar9[8];
  dVar12 = *(double *)(lVar8 + 0x4a8) * pdVar9[9];
  dVar10 = dVar10 * pdVar9[10];
  dVar1 = pdVar9[3];
  dVar13 = dVar12 * dVar4 - dVar5 * dVar11;
  dVar14 = dVar10 * dVar5 - dVar6 * dVar12;
  dVar15 = dVar11 * dVar6 - dVar4 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar3 = (dVar6 * dVar14 - dVar4 * dVar13) + pdVar9[3] * dVar15 + dVar12 + pdVar9[5];
  dVar12 = pdVar9[6];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar13 * dVar5 - dVar15 * dVar6) + dVar1 * dVar14 + dVar11 + pdVar9[4];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar13 * dVar1 + dVar10 + (dVar15 * dVar4 - dVar14 * dVar5) + dVar12;
  return param_2;
}



// FUNCTION 1488cca86 FUN_1488cca86 body=160 status=ok
// SIG undefined FUN_1488cca86(void)

undefined4 FUN_1488cca86(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = (**(code **)(*param_1 + 0x50))();
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  uVar1 = FUN_14096df60(uVar2,param_2,1,&local_78);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ccb2c FUN_1488ccb2c body=139 status=ok
// SIG undefined FUN_1488ccb2c(void)

longlong FUN_1488ccb2c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140126f82(param_4);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x4e8) == 0)) {
    *(undefined2 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  else {
    local_2c = 0xffffffff;
    local_28 = *(undefined8 *)(param_1 + 8);
    FUN_140c386b6(*(longlong *)(lVar1 + 0x4e8) + 0x150,param_2,&local_2c,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ccbb8 FUN_1488ccbb8 body=40 status=ok
// SIG undefined FUN_1488ccbb8(void)

void FUN_1488ccbb8(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + lVar3) == param_2) {
        *(undefined4 *)(lVar2 + lVar3) = param_3;
      }
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  return;
}



// FUNCTION 1488ccbe0 FUN_1488ccbe0 body=41 status=ok
// SIG undefined FUN_1488ccbe0(void)

longlong FUN_1488ccbe0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140c7c082(param_1 + 8);
  lVar2 = param_1 + 0x20;
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x30;
  }
  return lVar2;
}



// FUNCTION 1488ccc0a FUN_1488ccc0a body=141 status=ok
// SIG undefined FUN_1488ccc0a(void)

undefined8 FUN_1488ccc0a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  lVar1 = FUN_140c7c082((undefined8 *)(param_1 + 8));
  uVar3 = 0;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))(param_1 + 0x20,0);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x38);
    FUN_1406022fe(param_1 + 0x30,lVar1 + 0x40);
    FUN_140baa04c(param_1 + 0x40,lVar1 + 0x58);
    uVar2 = FUN_140baa04c(param_1 + 0x90,lVar1 + 0xa8);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(lVar1 + 0x50);
    if (*(longlong *)(param_1 + 8) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return CONCAT71(uVar3,lVar1 != 0);
}



// FUNCTION 1488ccc98 FUN_1488ccc98 body=640 status=ok
// SIG undefined FUN_1488ccc98(void)

ulonglong FUN_1488ccc98(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined *local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_140c7c082(param_1 + 8);
  plVar13 = (longlong *)(param_1 + 0x90);
  if (lVar5 != 0) {
    plVar13 = (longlong *)(lVar5 + 0xa8);
  }
  if ((int)plVar13[1] == *(int *)((longlong)plVar13 + 0x34)) {
    uVar12 = 0;
  }
  else {
    FUN_140265f12();
    local_88 = &DAT_14cb83310;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = &PTR_FUN_14b1828b0;
    lVar6 = FUN_140c7c082(param_1 + 8);
    lVar5 = param_1 + 0x20;
    if (lVar6 != 0) {
      lVar5 = lVar6 + 0x30;
    }
    cVar3 = FUN_140a9622e(&local_90,lVar5,param_2);
    if (cVar3 != '\0') {
      DAT_14cb83180 = 0;
      if (DAT_14cb83184 < 0) {
        FUN_1402191ca(&DAT_14cb83178,0);
      }
      FUN_1449f3ff4(&local_90,&DAT_14cb83178);
      if ((longlong)DAT_14cb83180 != 0) {
        plVar7 = DAT_14cb83178;
        do {
          if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
            lVar5 = *plVar7;
            uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
            uVar10 = (uint)lVar5 & 0xffff;
            plVar9 = (longlong *)plVar13[8];
            if ((longlong *)plVar13[8] == (longlong *)0x0) {
              plVar9 = plVar13 + 7;
            }
            iVar8 = *(int *)((longlong)plVar9 +
                            (ulonglong)
                            ((int)plVar13[9] - 1U &
                            (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar10) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4)) * 4);
            if (iVar8 != -1) {
              do {
                lVar6 = *plVar13 + (longlong)iVar8 * 0x60;
                if (*(longlong *)(*plVar13 + (longlong)iVar8 * 0x60) == lVar5) {
                  if (lVar6 + 8 != 0 && lVar6 != 0) {
                    FUN_1448729ea(lVar6 + 8,local_70,param_3);
                    uVar4 = FUN_14005fbd2(local_70,1);
                    *param_4 = uVar4;
                    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)local_50 * 0x120));
                    if (pcVar1 != (code *)0x0) {
                      ppppuVar11 = local_70;
                      if (0x18 < local_58) {
                        ppppuVar11 = (undefined8 ****)local_70[0];
                      }
                      (*pcVar1)(ppppuVar11);
                    }
                    if (0x18 < local_58) {
                      FUN_1400020a8(local_70[0]);
                    }
                    uVar12 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
                    goto LAB_1488ccecf;
                  }
                  break;
                }
                iVar8 = *(int *)(lVar6 + 0x58);
              } while (iVar8 != -1);
            }
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != DAT_14cb83178 + DAT_14cb83180);
      }
    }
    uVar12 = 0;
LAB_1488ccecf:
    uVar2 = uStack_78._4_4_;
    local_90 = (undefined **)&DAT_14a171d50;
    uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
    if (uVar2 != 0) {
      FUN_140115c12(&local_80,0);
    }
    local_88 = (undefined *)0x0;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1488ccf1a FUN_1488ccf1a body=251 status=ok
// SIG undefined FUN_1488ccf1a(void)

longlong * FUN_1488ccf1a(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 == 0) || (0xfffffffd < (int)param_1[1] - 1U)) {
LAB_1488ccf7c:
    if ((longlong)(int)param_1[4] != 0) {
      plVar2 = (longlong *)param_1[3];
      lVar1 = (longlong)(int)param_1[4] * 0xe8;
      do {
        if (*plVar2 == *param_2) goto LAB_1488ccfaa;
        plVar2 = plVar2 + 0x1d;
        lVar1 = lVar1 + -0xe8;
      } while (lVar1 != 0);
    }
    plVar2 = (longlong *)0x0;
LAB_1488ccfaa:
    if (param_3 != '\x01' || plVar2 != (longlong *)0x0) goto LAB_1488ccf51;
    plVar2 = (longlong *)0x0;
    local_40 = 0;
    local_38 = 0x275c8fdc;
    local_30 = 0;
    FUN_14097d918(param_1,param_2,&local_40,0);
    if ((longlong)(int)param_1[4] == 0) goto LAB_1488ccf51;
    plVar2 = (longlong *)param_1[3];
    lVar1 = (longlong)(int)param_1[4] * 0xe8;
    do {
      if (*plVar2 == *param_2) goto LAB_1488ccf51;
      plVar2 = plVar2 + 0x1d;
      lVar1 = lVar1 + -0xe8;
    } while (lVar1 != 0);
  }
  else if (param_3 != '\0') {
    FUN_1488cd016(param_1);
    goto LAB_1488ccf7c;
  }
  plVar2 = (longlong *)0x0;
LAB_1488ccf51:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 1488cd016 FUN_1488cd016 body=290 status=ok
// SIG undefined FUN_1488cd016(void)

void FUN_1488cd016(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  lVar4 = FUN_14097da0a();
  if (lVar4 != 0) {
    if ((*param_1 != *(longlong *)(lVar4 + 0x18)) || ((int)param_1[1] != *(int *)(lVar4 + 0x20))) {
      *param_1 = *(longlong *)(lVar4 + 0x18);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar4 + 0x20);
      param_1[2] = 0;
    }
    plVar1 = param_1 + 3;
    uVar8 = (ulonglong)(int)param_1[4];
    if (0 < (longlong)uVar8) {
      lVar9 = uVar8 * 0xe8 + -7;
      do {
        if ((*(byte *)(*plVar1 + lVar9) & 1) == 0) {
          FUN_1488cd138(plVar1,(int)uVar8 + -1);
        }
        lVar9 = lVar9 + -0xe8;
        bVar3 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar3);
    }
    if ((longlong)*(int *)(lVar4 + 0x38) != 0) {
      plVar7 = *(longlong **)(lVar4 + 0x30);
      plVar10 = plVar7 + (longlong)*(int *)(lVar4 + 0x38) * 0x1d;
      do {
        puVar5 = (undefined8 *)FUN_14097d9d4(param_1);
        if ((longlong)*(int *)(puVar5 + 1) != 0) {
          plVar6 = (longlong *)*puVar5;
          lVar4 = (longlong)*(int *)(puVar5 + 1) * 0xe8;
          do {
            if (*plVar6 == *plVar7) {
              if (plVar6 != (longlong *)0x0) goto LAB_1488cd117;
              break;
            }
            plVar6 = plVar6 + 0x1d;
            lVar4 = lVar4 + -0xe8;
          } while (lVar4 != 0);
        }
        iVar2 = (int)param_1[4];
        *(uint *)(param_1 + 4) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x24) < iVar2 + 1U) {
          FUN_14097dc0c(plVar1,iVar2);
        }
        FUN_140e8abb2((longlong)iVar2 * 0xe8 + *plVar1,plVar7);
LAB_1488cd117:
        plVar7 = plVar7 + 0x1d;
      } while (plVar7 != plVar10);
    }
  }
  return;
}



// FUNCTION 1488cd138 FUN_1488cd138 body=88 status=ok
// SIG undefined FUN_1488cd138(void)

void FUN_1488cd138(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0xe8 + *param_1);
  FUN_14185d22e(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xe8),(longlong)(int)(~param_2 + iVar1) * 0xe8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1488d2806(param_1);
  return;
}



// FUNCTION 1488cd190 FUN_1488cd190 body=589 status=ok
// SIG undefined FUN_1488cd190(void)

void FUN_1488cd190(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488cb29e();
  lVar13 = *(longlong *)(param_1 + 0x138);
  if (lVar13 == 0) {
    plVar12 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14b412a50;
    FUN_143d9edb4(plVar12 + 2);
    if (plVar12 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x138) = 0x10;
      plVar14 = *(longlong **)(param_1 + 0x140);
      if (plVar14 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x140) = 0;
LAB_1488cd308:
        LOCK();
        plVar2 = plVar14 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        if (plVar12 != (longlong *)0x0) goto LAB_1488cd32c;
      }
    }
    else {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x138) = plVar12 + 2;
      plVar14 = *(longlong **)(param_1 + 0x140);
      if (plVar12 == plVar14) {
        LOCK();
        plVar14 = plVar12 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x140) = plVar12;
        if (plVar14 != (longlong *)0x0) goto LAB_1488cd308;
      }
LAB_1488cd32c:
      LOCK();
      plVar14 = plVar12 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x138) + 8) = 5;
    lVar13 = *(longlong *)(param_1 + 0x138);
    *(undefined8 *)(lVar13 + 0x58) = *(undefined8 *)(param_1 + 0x110);
    uVar7 = *(undefined4 *)(param_1 + 0x11c);
    uVar8 = *(undefined4 *)(param_1 + 0x120);
    uVar9 = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(lVar13 + 0x60) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(lVar13 + 100) = uVar7;
    *(undefined4 *)(lVar13 + 0x68) = uVar8;
    *(undefined4 *)(lVar13 + 0x6c) = uVar9;
    FUN_144a787a6(lVar13 + 0x70,param_1 + 0x128);
    lVar13 = *(longlong *)(param_1 + 0x138);
  }
  if (param_3 != (undefined8 *)0x0) {
    local_38 = *(longlong **)(param_1 + 0x140);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    pcVar4 = (code *)*param_3;
    plVar12 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar12 = (longlong *)param_3[2];
    }
    local_40 = lVar13;
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    cVar10 = (*pcVar4)(uVar11,&local_40);
    plVar12 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_38 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (cVar10 == '\0') goto LAB_1488cd27e;
    lVar13 = *(longlong *)(param_1 + 0x138);
  }
  lVar5 = *(longlong *)(param_1 + 0x140);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_140255dd4(param_2,iVar3);
  }
  lVar6 = *param_2;
  *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar13;
  *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = lVar5;
LAB_1488cd27e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cd3de FUN_1488cd3de body=68 status=ok
// SIG undefined FUN_1488cd3de(void)

void FUN_1488cd3de(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1488d2ad4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1488cd422 FUN_1488cd422 body=169 status=ok
// SIG undefined FUN_1488cd422(void)

void FUN_1488cd422(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18,0);
  puVar2 = &DAT_14c9485f0;
  if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_2[1];
  }
  FUN_1447325ac(puVar2,&local_28,1);
  if (local_28 != 0) {
    iVar1 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
      FUN_1446f84a2((longlong *)(param_1 + 0xf8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cd4cc FUN_1488cd4cc body=145 status=ok
// SIG undefined FUN_1488cd4cc(void)

void FUN_1488cd4cc(longlong param_1)

{
  FUN_140944221(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1488d2c18(param_1 + 0x28);
  }
  FUN_140255aed(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1488ca408(param_1 + 0x18,0);
  }
  FUN_1409442e6(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) == 0) {
    return;
  }
  FUN_1488d2c48(param_1 + 0x128);
  return;
}



// FUNCTION 1488cd55e FUN_1488cd55e body=618 status=ok
// SIG undefined FUN_1488cd55e(void)

void FUN_1488cd55e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float *pfVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_148 [32];
  undefined8 ***local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong local_110 [2];
  undefined8 local_100;
  float local_f8;
  undefined4 uStack_f4;
  ushort local_e0;
  byte local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar2 = *(int *)(param_1 + 0x110);
  local_118 = param_2;
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x108);
    local_120 = param_3 + 4;
    lVar9 = 0;
    do {
      if (*(char *)(lVar3 + 0x15 + lVar9) != '\x03') {
        local_f8 = (float)((uint)local_f8 & 0xffffff00);
        local_d0 = 0;
        FUN_1456bb102(&local_f8,local_118);
        local_c8[0] = 0;
        local_a0 = 0;
        FUN_144750e81(local_98,*(undefined8 *)(lVar3 + lVar9),&local_f8);
        FUN_144a5ac3a(local_c8);
        FUN_144a5ac3a(&local_f8);
        local_f8 = *(float *)(lVar3 + 0xc + lVar9);
        auVar10 = ZEXT416((uint)local_f8);
        cVar1 = *(char *)(lVar3 + 0x14 + lVar9);
        if (cVar1 == '\x03') {
          auVar10 = blendps(auVar10,ZEXT816(0),0xe);
          auVar10 = roundps(auVar10,auVar10,2);
          local_f8 = auVar10._0_4_;
        }
        else {
          if (cVar1 != '\x02') {
            if (cVar1 != '\x01') goto LAB_1488cd66f;
            auVar10 = ZEXT416((uint)(local_f8 + 0.5));
          }
          auVar10 = blendps(auVar10,ZEXT816(0),0xe);
          auVar10 = roundps(auVar10,auVar10,1);
          local_f8 = auVar10._0_4_;
        }
LAB_1488cd66f:
        local_e0 = 4;
        local_d8 = 3;
        uVar5 = *(undefined8 *)(lVar3 + lVar9);
        FUN_1410a642a(local_110,uVar5);
        pcVar4 = (code *)*param_3;
        plVar6 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar6 = local_120;
        }
        local_100 = uVar5;
        uVar5 = (**(code **)(*plVar6 + 8))();
        local_128 = local_98;
        (*pcVar4)(uVar5,local_110,&local_100,&local_f8);
        if (local_110[0] != 0) {
          FUN_1400020a8();
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pfVar7 = &local_f8;
          if (0x18 < local_e0) {
            pfVar7 = (float *)CONCAT44(uStack_f4,local_f8);
          }
          (*pcVar4)(pfVar7);
        }
        if (0x18 < local_e0) {
          FUN_1400020a8(CONCAT44(uStack_f4,local_f8));
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar8 = local_98;
          if (0x18 < local_80) {
            ppppuVar8 = (undefined8 ****)local_98[0];
          }
          (*pcVar4)(ppppuVar8);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(local_98[0]);
        }
      }
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar9);
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488cd7ca FUN_1488cd7ca body=2279 status=ok
// SIG undefined FUN_1488cd7ca(void)

void FUN_1488cd7ca(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  undefined2 **ppuVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  uint local_14c;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  code **local_128;
  longlong local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined2 *local_108;
  int local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined2 *local_e8;
  int local_e0;
  code *local_d8 [2];
  undefined ***local_c8;
  undefined **local_b8;
  undefined2 **local_b0;
  undefined2 *local_90;
  int local_88;
  undefined2 **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(char *)(param_1 + 0x1f8) == '\0') {
    FUN_140056680(local_d8,L"Inventory stats not initialized");
    pcVar6 = (code *)*param_3;
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    lVar7 = *plVar3;
  }
  else {
    local_158 = (undefined2 *)CONCAT44(local_158._4_4_,*(undefined4 *)(param_1 + 0x40));
    FUN_1488ce0b2(local_d8,param_2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
    pcVar6 = (code *)*param_3;
    local_148 = param_3 + 4;
    plVar3 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar3 = local_148;
    }
    uVar1 = (**(code **)(*plVar3 + 8))();
    (*pcVar6)(uVar1,local_d8);
    if (local_d8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    local_14c = (uint)param_2;
    FUN_1488ce154(local_d8,param_2 & 0xffffffff,*(undefined4 *)(param_1 + 0x110));
    pcVar6 = (code *)*param_3;
    plVar3 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar3 = local_148;
    }
    uVar1 = (**(code **)(*plVar3 + 8))();
    (*pcVar6)(uVar1,local_d8);
    if (local_d8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    local_140 = param_1;
    if ((longlong)*(int *)(param_1 + 0x110) != 0) {
      lVar7 = (longlong)*(int *)(param_1 + 0x110) * 0x18;
      lVar12 = *(longlong *)(param_1 + 0x108) + 8;
      do {
        FUN_1470b0b78(lVar12,&local_90);
        puVar9 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar9 = local_90;
        }
        FUN_1410a642a(&local_e8,*(undefined8 *)(lVar12 + -8));
        puVar10 = &DAT_149dfb77a;
        if (local_e0 != 0) {
          puVar10 = local_e8;
        }
        FUN_1488ce1ea(local_d8,local_14c,puVar10,puVar9);
        pcVar6 = (code *)*param_3;
        plVar3 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar3 = local_148;
        }
        uVar1 = (**(code **)(*plVar3 + 8))();
        (*pcVar6)(uVar1,local_d8);
        if (local_d8[0] != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 0x18;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    FUN_140056680(local_d8,&DAT_149dfb77a);
    pcVar6 = (code *)*param_3;
    plVar3 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar3 = local_148;
    }
    uVar1 = (**(code **)(*plVar3 + 8))();
    (*pcVar6)(uVar1,local_d8);
    if (local_d8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar7 = local_140;
    uVar11 = local_14c;
    FUN_1488ce284(local_d8,local_14c,*(undefined4 *)(local_140 + 0x120));
    pcVar6 = (code *)*param_3;
    plVar3 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar3 = local_148;
    }
    uVar1 = (**(code **)(*plVar3 + 8))();
    (*pcVar6)(uVar1,local_d8);
    if (local_d8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)*(int *)(lVar7 + 0x120) != 0) {
      plVar3 = *(longlong **)(local_140 + 0x118);
      plVar5 = plVar3 + (longlong)*(int *)(lVar7 + 0x120) * 2;
      do {
        FUN_1488ce31a(local_d8,uVar11,*(undefined4 *)(*plVar3 + 0xb8));
        pcVar6 = (code *)*param_3;
        plVar2 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar2 = local_148;
        }
        uVar1 = (**(code **)(*plVar2 + 8))();
        (*pcVar6)(uVar1,local_d8);
        if (local_d8[0] != (code *)0x0) {
          FUN_1400020a8();
        }
        lVar7 = (longlong)*(int *)(*plVar3 + 0xb8);
        if (lVar7 != 0) {
          lVar12 = *(longlong *)(*plVar3 + 0xb0);
          lVar7 = lVar7 * 0x70;
          do {
            FUN_146246216(lVar12,&local_90);
            local_158 = &DAT_149dfb77a;
            if (local_88 != 0) {
              local_158 = local_90;
            }
            FUN_1488ce3be(local_d8,local_14c,2,&DAT_149e0625e);
            pcVar6 = (code *)*param_3;
            plVar2 = (longlong *)param_3[2];
            if ((longlong *)param_3[2] == (longlong *)0x0) {
              plVar2 = local_148;
            }
            uVar1 = (**(code **)(*plVar2 + 8))();
            (*pcVar6)(uVar1,local_d8);
            if (local_d8[0] != (code *)0x0) {
              FUN_1400020a8();
            }
            if (local_90 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x70;
            lVar7 = lVar7 + -0x70;
          } while (lVar7 != 0);
        }
        plVar3 = plVar3 + 2;
        uVar11 = local_14c;
      } while (plVar3 != plVar5);
    }
    FUN_140056680(local_d8,&DAT_149dfb77a);
    pcVar6 = (code *)*param_3;
    plVar3 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar3 = local_148;
    }
    uVar1 = (**(code **)(*plVar3 + 8))();
    (*pcVar6)(uVar1,local_d8);
    if (local_d8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar7 = local_140;
    if (*(longlong *)(local_140 + 0x200) == 0) goto LAB_1488cd84a;
    FUN_1488ce464(local_d8,uVar11,*(undefined4 *)(local_140 + 0x130));
    pcVar6 = (code *)*param_3;
    plVar3 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar3 = local_148;
    }
    uVar1 = (**(code **)(*plVar3 + 8))();
    (*pcVar6)(uVar1,local_d8);
    if (local_d8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1488ce4fe(local_d8,uVar11,*(undefined4 *)(lVar7 + 0x138));
    pcVar6 = (code *)*param_3;
    plVar3 = (longlong *)param_3[2];
    if ((longlong *)param_3[2] == (longlong *)0x0) {
      plVar3 = local_148;
    }
    uVar1 = (**(code **)(*plVar3 + 8))();
    (*pcVar6)(uVar1,local_d8);
    if (local_d8[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)*(int *)(lVar7 + 0x130) != 0) {
      plVar3 = *(longlong **)(lVar7 + 0x128);
      local_138 = *(longlong *)(lVar7 + 0x200);
      local_130 = plVar3 + (longlong)*(int *)(lVar7 + 0x130) * 2;
      local_128 = local_d8;
      if ((uVar11 & 1) == 0) {
        local_128 = (code **)0x0;
      }
      do {
        if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
          local_e8 = (undefined2 *)0x0;
        }
        else {
          local_e8 = *(undefined2 **)*plVar3;
        }
        lVar7 = plVar3[1];
        FUN_1400021e4(&local_e8,&local_90);
        puVar9 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar9 = local_90;
        }
        FUN_1488ce5a0(local_d8,uVar11,puVar9,(int)lVar7);
        pcVar6 = (code *)*param_3;
        plVar5 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar5 = local_148;
        }
        uVar1 = (**(code **)(*plVar5 + 8))();
        (*pcVar6)(uVar1,local_d8);
        if (local_d8[0] != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong)*(int *)(local_138 + 0x30) != 0) {
          lVar7 = *(longlong *)(local_138 + 0x28);
          lVar12 = (longlong)*(int *)(local_138 + 0x30) * 0x40 + lVar7;
          local_120 = lVar12;
          local_118 = plVar3;
          do {
            if (*(longlong *)(lVar7 + 0x38) == *plVar3) {
              local_70 = (undefined2 **)0x0;
              local_68 = 0x200000000;
              local_c8 = (undefined ***)0x0;
              local_b8 = &PTR_LAB_14b412a90;
              local_b0 = &local_90;
              local_d8[0] = FUN_143dafcbe;
              uVar14 = FUN_140ac2084(local_140,lVar7,(int)plVar3[1],local_128);
              uVar1 = FUN_146246322();
              FUN_1401cfad2(uVar1,&local_f8,*(undefined1 *)(lVar7 + 0x2d));
              puVar9 = &DAT_149dfb77a;
              if (local_f0 != 0) {
                puVar9 = local_f8;
              }
              local_110 = *(undefined8 *)(lVar7 + 0x10);
              FUN_1400021e4(&local_110,&local_108);
              puVar10 = &DAT_149dfb77a;
              if (local_100 != 0) {
                puVar10 = local_108;
              }
              local_158 = (undefined2 *)CONCAT44(local_158._4_4_,uVar14);
              FUN_1488ce642(&local_e8,local_14c,puVar10,puVar9);
              pcVar6 = (code *)*param_3;
              plVar3 = (longlong *)param_3[2];
              if ((longlong *)param_3[2] == (longlong *)0x0) {
                plVar3 = local_148;
              }
              uVar1 = (**(code **)(*plVar3 + 8))();
              (*pcVar6)(uVar1,&local_e8);
              if (local_e8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_108 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              uVar11 = local_14c;
              if (local_f8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if ((uVar11 & 1) != 0) {
                ppuVar8 = local_70;
                if (local_70 == (undefined2 **)0x0) {
                  ppuVar8 = &local_90;
                }
                lVar12 = (longlong)(int)local_68;
                if (lVar12 != 0) {
                  lVar13 = 0;
                  do {
                    local_158 = &DAT_149dfb77a;
                    if (*(int *)((longlong)ppuVar8 + lVar13 + 8) != 0) {
                      local_158 = *(undefined2 **)((longlong)ppuVar8 + lVar13);
                    }
                    FUN_1488ce3be(&local_e8,local_14c,4,&DAT_149e0625e);
                    pcVar6 = (code *)*param_3;
                    plVar3 = (longlong *)param_3[2];
                    if ((longlong *)param_3[2] == (longlong *)0x0) {
                      plVar3 = local_148;
                    }
                    uVar1 = (**(code **)(*plVar3 + 8))();
                    (*pcVar6)(uVar1,&local_e8);
                    if (local_e8 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    lVar13 = lVar13 + 0x10;
                  } while (lVar12 * 0x10 != lVar13);
                }
              }
              if (local_d8[0] != (code *)0x0) {
                pppuVar4 = local_c8;
                if (local_c8 == (undefined ***)0x0) {
                  pppuVar4 = &local_b8;
                }
                (*(code *)(*pppuVar4)[2])();
              }
              FUN_145ff2774(&local_90);
              lVar12 = local_120;
              plVar3 = local_118;
              uVar11 = local_14c;
            }
            lVar7 = lVar7 + 0x40;
          } while (lVar7 != lVar12);
        }
        FUN_140056680(local_d8,&DAT_149dfb77a);
        pcVar6 = (code *)*param_3;
        plVar5 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar5 = local_148;
        }
        uVar1 = (**(code **)(*plVar5 + 8))();
        (*pcVar6)(uVar1,local_d8);
        if (local_d8[0] != (code *)0x0) {
          FUN_1400020a8();
        }
        plVar3 = plVar3 + 2;
      } while (plVar3 != local_130);
      if (*(int *)(local_140 + 0x130) != 0) goto LAB_1488cd84a;
    }
    FUN_140056680(local_d8,&DAT_149dfb77a);
    pcVar6 = (code *)*param_3;
    plVar3 = local_148;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    lVar7 = *plVar3;
  }
  uVar1 = (**(code **)(lVar7 + 8))(plVar3);
  (*pcVar6)(uVar1,local_d8);
  if (local_d8[0] != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1488cd84a:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ce0b2 FUN_1488ce0b2 body=160 status=ok
// SIG undefined FUN_1488ce0b2(void)

undefined8
FUN_1488ce0b2(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)CONCAT44(local_38._4_4_,param_5);
  FUN_140002266(&local_30,
                L"Inventory Level {value}%d{normal} (Game Stage {value}%d{normal}) (Monetary Value {value}%d{normal})"
               );
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce154 FUN_1488ce154 body=149 status=ok
// SIG undefined FUN_1488ce154(void)

undefined8 FUN_1488ce154(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Inventory Attributes ({value}%d{header}):");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce1ea FUN_1488ce1ea body=152 status=ok
// SIG undefined FUN_1488ce1ea(void)

undefined8 FUN_1488ce1ea(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{value}%s{normal}: %s");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


