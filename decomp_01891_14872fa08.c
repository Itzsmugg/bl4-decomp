// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14872fa08 FUN_14872fa08 body=31 status=ok
// SIG undefined FUN_14872fa08(void)

undefined8 FUN_14872fa08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872fa80 FUN_14872fa80 body=62 status=ok
// SIG undefined FUN_14872fa80(void)

undefined1 FUN_14872fa80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872fae6 FUN_14872fae6 body=59 status=ok
// SIG undefined FUN_14872fae6(void)

undefined8 FUN_14872fae6(longlong *param_1)

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



// FUNCTION 14872fb2c FUN_14872fb2c body=34 status=ok
// SIG undefined FUN_14872fb2c(void)

void FUN_14872fb2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14872fbfa(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14872fb9c FUN_14872fb9c body=38 status=ok
// SIG undefined FUN_14872fb9c(void)

undefined8 FUN_14872fb9c(undefined8 param_1,int param_2)

{
  FUN_14872fbfa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872fbc2 FUN_14872fbc2 body=55 status=ok
// SIG undefined FUN_14872fbc2(void)

void FUN_14872fbc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb669e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb669e8 = FUN_140002ddd(FUN_146510f79,uVar1,L"GbxStatusEffectDriver_Conditional");
  }
  return;
}



// FUNCTION 14872fbfa FUN_14872fbfa body=66 status=ok
// SIG undefined FUN_14872fbfa(void)

void FUN_14872fbfa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b28b620;
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
                    /* WARNING: Could not recover jumptable at 0x00014872fc31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14872fca6 FUN_14872fca6 body=59 status=ok
// SIG undefined FUN_14872fca6(void)

undefined8 FUN_14872fca6(longlong *param_1)

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



// FUNCTION 14872fd46 FUN_14872fd46 body=29 status=ok
// SIG undefined FUN_14872fd46(void)

undefined8 FUN_14872fd46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872fd64 FUN_14872fd64 body=55 status=ok
// SIG undefined FUN_14872fd64(void)

void FUN_14872fd64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66a00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66a00 = FUN_140002ddd(FUN_14651100f,uVar1,L"GbxStatusEffectDriverInstanceStackStrategy")
    ;
  }
  return;
}



// FUNCTION 14872fd9c FUN_14872fd9c body=42 status=ok
// SIG undefined FUN_14872fd9c(void)

undefined8 FUN_14872fd9c(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Drivers/GbxStatusEffectDriver_InstanceStack.h"
                ,0x51,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectDriverInstanceStackStrategy::MakeRoom");
  return 0;
}



// FUNCTION 14872fe06 FUN_14872fe06 body=62 status=ok
// SIG undefined FUN_14872fe06(void)

undefined1 FUN_14872fe06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872fe6c FUN_14872fe6c body=59 status=ok
// SIG undefined FUN_14872fe6c(void)

undefined8 FUN_14872fe6c(longlong *param_1)

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



// FUNCTION 14872feb2 FUN_14872feb2 body=32 status=ok
// SIG undefined FUN_14872feb2(void)

void FUN_14872feb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14872ff20(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14872ff20 FUN_14872ff20 body=66 status=ok
// SIG undefined FUN_14872ff20(void)

void FUN_14872ff20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b28ba10;
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
                    /* WARNING: Could not recover jumptable at 0x00014872ff57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14872ffa0 FUN_14872ffa0 body=62 status=ok
// SIG undefined FUN_14872ffa0(void)

undefined1 FUN_14872ffa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148730006 FUN_148730006 body=59 status=ok
// SIG undefined FUN_148730006(void)

undefined8 FUN_148730006(longlong *param_1)

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



// FUNCTION 14873004c FUN_14873004c body=37 status=ok
// SIG undefined FUN_14873004c(void)

void FUN_14873004c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14873010a FUN_14873010a body=59 status=ok
// SIG undefined FUN_14873010a(void)

undefined8 FUN_14873010a(longlong *param_1)

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



// FUNCTION 14873024e FUN_14873024e body=78 status=ok
// SIG undefined FUN_14873024e(void)

undefined1 FUN_14873024e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487302c4 FUN_1487302c4 body=59 status=ok
// SIG undefined FUN_1487302c4(void)

undefined8 FUN_1487302c4(longlong *param_1)

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



// FUNCTION 14873030a FUN_14873030a body=32 status=ok
// SIG undefined FUN_14873030a(void)

void FUN_14873030a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148730378 FUN_148730378 body=38 status=ok
// SIG undefined FUN_148730378(void)

undefined8 FUN_148730378(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14873039e FUN_14873039e body=55 status=ok
// SIG undefined FUN_14873039e(void)

void FUN_14873039e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66a60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66a60 = FUN_140002ddd(FUN_146511267,uVar1,L"GbxStatusEffectGraphNodeSettings");
  }
  return;
}



// FUNCTION 14873045c FUN_14873045c body=78 status=ok
// SIG undefined FUN_14873045c(void)

undefined1 FUN_14873045c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487304d2 FUN_1487304d2 body=59 status=ok
// SIG undefined FUN_1487304d2(void)

undefined8 FUN_1487304d2(longlong *param_1)

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



// FUNCTION 148730518 FUN_148730518 body=32 status=ok
// SIG undefined FUN_148730518(void)

void FUN_148730518(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487305b8 FUN_1487305b8 body=196 status=ok
// SIG undefined FUN_1487305b8(void)

undefined8 FUN_1487305b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar15);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar15);
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar15);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar15);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      FUN_1470d00c2(param_2 + 0x28 + lVar15,param_3 + 0x28 + lVar15);
      uVar5 = *(undefined8 *)(param_3 + 0x3d + lVar15);
      *(undefined8 *)(param_2 + 0x38 + lVar15) = *(undefined8 *)(param_3 + 0x38 + lVar15);
      *(undefined8 *)(param_2 + 0x3d + lVar15) = uVar5;
      FUN_140d02432(param_2 + 0x48 + lVar15,param_3 + 0x48 + lVar15);
      puVar3 = (undefined8 *)(param_3 + 0x98 + lVar15);
      uVar5 = puVar3[1];
      puVar4 = (undefined8 *)(param_3 + 0xa8 + lVar15);
      uVar13 = *puVar4;
      uVar14 = puVar4[1];
      puVar4 = (undefined8 *)(param_2 + 0x98 + lVar15);
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar3 = (undefined8 *)(param_2 + 0xa8 + lVar15);
      *puVar3 = uVar13;
      puVar3[1] = uVar14;
      lVar15 = lVar15 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487306a4 FUN_1487306a4 body=59 status=ok
// SIG undefined FUN_1487306a4(void)

undefined8 FUN_1487306a4(longlong *param_1)

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



// FUNCTION 1487306f0 FUN_1487306f0 body=38 status=ok
// SIG undefined FUN_1487306f0(void)

void FUN_1487306f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1487307be FUN_1487307be body=78 status=ok
// SIG undefined FUN_1487307be(void)

undefined1 FUN_1487307be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148730834 FUN_148730834 body=59 status=ok
// SIG undefined FUN_148730834(void)

undefined8 FUN_148730834(longlong *param_1)

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



// FUNCTION 14873087a FUN_14873087a body=32 status=ok
// SIG undefined FUN_14873087a(void)

void FUN_14873087a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14873097e FUN_14873097e body=94 status=ok
// SIG undefined FUN_14873097e(void)

undefined8 FUN_14873097e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148730a04 FUN_148730a04 body=59 status=ok
// SIG undefined FUN_148730a04(void)

undefined8 FUN_148730a04(longlong *param_1)

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



// FUNCTION 148730a4a FUN_148730a4a body=32 status=ok
// SIG undefined FUN_148730a4a(void)

void FUN_148730a4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148730b48 FUN_148730b48 body=86 status=ok
// SIG undefined FUN_148730b48(void)

undefined1 FUN_148730b48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148730bc6 FUN_148730bc6 body=59 status=ok
// SIG undefined FUN_148730bc6(void)

undefined8 FUN_148730bc6(longlong *param_1)

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



// FUNCTION 148730c0c FUN_148730c0c body=32 status=ok
// SIG undefined FUN_148730c0c(void)

void FUN_148730c0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148730d10 FUN_148730d10 body=91 status=ok
// SIG undefined FUN_148730d10(void)

undefined1 FUN_148730d10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_148730e48(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148730d94 FUN_148730d94 body=59 status=ok
// SIG undefined FUN_148730d94(void)

undefined8 FUN_148730d94(longlong *param_1)

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



// FUNCTION 148730dda FUN_148730dda body=32 status=ok
// SIG undefined FUN_148730dda(void)

void FUN_148730dda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148730e48 FUN_148730e48 body=84 status=ok
// SIG undefined FUN_148730e48(void)

longlong * FUN_148730e48(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148730f22 FUN_148730f22 body=86 status=ok
// SIG undefined FUN_148730f22(void)

undefined8 FUN_148730f22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148730fa0 FUN_148730fa0 body=59 status=ok
// SIG undefined FUN_148730fa0(void)

undefined8 FUN_148730fa0(longlong *param_1)

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



// FUNCTION 148730fe6 FUN_148730fe6 body=32 status=ok
// SIG undefined FUN_148730fe6(void)

void FUN_148730fe6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1487310da FUN_1487310da body=86 status=ok
// SIG undefined FUN_1487310da(void)

undefined8 FUN_1487310da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148731158 FUN_148731158 body=59 status=ok
// SIG undefined FUN_148731158(void)

undefined8 FUN_148731158(longlong *param_1)

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



// FUNCTION 14873119e FUN_14873119e body=32 status=ok
// SIG undefined FUN_14873119e(void)

void FUN_14873119e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148731294 FUN_148731294 body=78 status=ok
// SIG undefined FUN_148731294(void)

undefined1 FUN_148731294(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873130a FUN_14873130a body=59 status=ok
// SIG undefined FUN_14873130a(void)

undefined8 FUN_14873130a(longlong *param_1)

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



// FUNCTION 148731350 FUN_148731350 body=32 status=ok
// SIG undefined FUN_148731350(void)

void FUN_148731350(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148731446 FUN_148731446 body=78 status=ok
// SIG undefined FUN_148731446(void)

undefined1 FUN_148731446(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487314bc FUN_1487314bc body=59 status=ok
// SIG undefined FUN_1487314bc(void)

undefined8 FUN_1487314bc(longlong *param_1)

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



// FUNCTION 148731502 FUN_148731502 body=32 status=ok
// SIG undefined FUN_148731502(void)

void FUN_148731502(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148731614 FUN_148731614 body=78 status=ok
// SIG undefined FUN_148731614(void)

undefined1 FUN_148731614(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873168a FUN_14873168a body=59 status=ok
// SIG undefined FUN_14873168a(void)

undefined8 FUN_14873168a(longlong *param_1)

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



// FUNCTION 1487316d0 FUN_1487316d0 body=32 status=ok
// SIG undefined FUN_1487316d0(void)

void FUN_1487316d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14873173e FUN_14873173e body=38 status=ok
// SIG undefined FUN_14873173e(void)

undefined8 FUN_14873173e(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148731764 FUN_148731764 body=55 status=ok
// SIG undefined FUN_148731764(void)

void FUN_148731764(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66b68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66b68 = FUN_140002ddd(FUN_146511839,uVar1,L"GbxStatusEffectGraphNodeSettings_Condition")
    ;
  }
  return;
}



// FUNCTION 148731850 FUN_148731850 body=91 status=ok
// SIG undefined FUN_148731850(void)

undefined1 FUN_148731850(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_1401f3db8(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487318d4 FUN_1487318d4 body=59 status=ok
// SIG undefined FUN_1487318d4(void)

undefined8 FUN_1487318d4(longlong *param_1)

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



// FUNCTION 14873191a FUN_14873191a body=34 status=ok
// SIG undefined FUN_14873191a(void)

void FUN_14873191a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148731e68(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14873198a FUN_14873198a body=38 status=ok
// SIG undefined FUN_14873198a(void)

undefined8 FUN_14873198a(undefined8 param_1,int param_2)

{
  FUN_148731e68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487319b0 FUN_1487319b0 body=55 status=ok
// SIG undefined FUN_1487319b0(void)

void FUN_1487319b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66b80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66b80 =
         FUN_140002ddd(FUN_1465118d1,uVar1,L"GbxStatusEffectGraphNodeSettings_ActionBase");
  }
  return;
}



// FUNCTION 148731a90 FUN_148731a90 body=91 status=ok
// SIG undefined FUN_148731a90(void)

undefined1 FUN_148731a90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_1401f3db8(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148731b14 FUN_148731b14 body=59 status=ok
// SIG undefined FUN_148731b14(void)

undefined8 FUN_148731b14(longlong *param_1)

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



// FUNCTION 148731b5a FUN_148731b5a body=34 status=ok
// SIG undefined FUN_148731b5a(void)

void FUN_148731b5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148731e68(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148731bca FUN_148731bca body=38 status=ok
// SIG undefined FUN_148731bca(void)

undefined8 FUN_148731bca(undefined8 param_1,int param_2)

{
  FUN_148731e68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148731bf0 FUN_148731bf0 body=55 status=ok
// SIG undefined FUN_148731bf0(void)

void FUN_148731bf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66b98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66b98 =
         FUN_140002ddd(FUN_146511967,uVar1,L"GbxStatusEffectGraphNodeSettings_Action_Push");
  }
  return;
}



// FUNCTION 148731cd0 FUN_148731cd0 body=91 status=ok
// SIG undefined FUN_148731cd0(void)

undefined1 FUN_148731cd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_1401f3db8(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148731d54 FUN_148731d54 body=59 status=ok
// SIG undefined FUN_148731d54(void)

undefined8 FUN_148731d54(longlong *param_1)

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



// FUNCTION 148731d9a FUN_148731d9a body=34 status=ok
// SIG undefined FUN_148731d9a(void)

void FUN_148731d9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148731e68(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148731e0a FUN_148731e0a body=38 status=ok
// SIG undefined FUN_148731e0a(void)

undefined8 FUN_148731e0a(undefined8 param_1,int param_2)

{
  FUN_148731e68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148731e30 FUN_148731e30 body=55 status=ok
// SIG undefined FUN_148731e30(void)

void FUN_148731e30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66bb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66bb0 =
         FUN_140002ddd(FUN_1465119fd,uVar1,L"GbxStatusEffectGraphNodeSettings_Action_Notify");
  }
  return;
}



// FUNCTION 148731e68 FUN_148731e68 body=71 status=ok
// SIG undefined FUN_148731e68(void)

void FUN_148731e68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b28d670;
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
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148731f4c FUN_148731f4c body=86 status=ok
// SIG undefined FUN_148731f4c(void)

undefined8 FUN_148731f4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148731fca FUN_148731fca body=59 status=ok
// SIG undefined FUN_148731fca(void)

undefined8 FUN_148731fca(longlong *param_1)

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



// FUNCTION 148732010 FUN_148732010 body=32 status=ok
// SIG undefined FUN_148732010(void)

void FUN_148732010(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148732132 FUN_148732132 body=84 status=ok
// SIG undefined FUN_148732132(void)

undefined1 FUN_148732132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487321ae FUN_1487321ae body=59 status=ok
// SIG undefined FUN_1487321ae(void)

undefined8 FUN_1487321ae(longlong *param_1)

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



// FUNCTION 1487321f4 FUN_1487321f4 body=32 status=ok
// SIG undefined FUN_1487321f4(void)

void FUN_1487321f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148732262 FUN_148732262 body=38 status=ok
// SIG undefined FUN_148732262(void)

undefined8 FUN_148732262(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148732288 FUN_148732288 body=55 status=ok
// SIG undefined FUN_148732288(void)

void FUN_148732288(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66be0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66be0 =
         FUN_140002ddd(FUN_146511b29,uVar1,
                       L"GbxStatusEffectGraphNodeSettings_Condition_IsAttitudeTowards");
  }
  return;
}



// FUNCTION 148732346 FUN_148732346 body=78 status=ok
// SIG undefined FUN_148732346(void)

undefined1 FUN_148732346(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487323bc FUN_1487323bc body=59 status=ok
// SIG undefined FUN_1487323bc(void)

undefined8 FUN_1487323bc(longlong *param_1)

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



// FUNCTION 148732402 FUN_148732402 body=32 status=ok
// SIG undefined FUN_148732402(void)

void FUN_148732402(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487324d2 FUN_1487324d2 body=59 status=ok
// SIG undefined FUN_1487324d2(void)

undefined8 FUN_1487324d2(longlong *param_1)

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



// FUNCTION 148732602 FUN_148732602 body=59 status=ok
// SIG undefined FUN_148732602(void)

undefined8 FUN_148732602(longlong *param_1)

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



// FUNCTION 1487326a2 FUN_1487326a2 body=29 status=ok
// SIG undefined FUN_1487326a2(void)

undefined8 FUN_1487326a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487326c0 FUN_1487326c0 body=41 status=ok
// SIG undefined FUN_1487326c0(void)

void FUN_1487326c0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectModifierData.h"
                ,0x6c,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectModifierData::WriteStatusEffectModifiers");
  return;
}



// FUNCTION 148732760 FUN_148732760 body=78 status=ok
// SIG undefined FUN_148732760(void)

undefined8 FUN_148732760(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_140d02432();
      lVar2 = lVar2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487327d6 FUN_1487327d6 body=59 status=ok
// SIG undefined FUN_1487327d6(void)

undefined8 FUN_1487327d6(longlong *param_1)

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



// FUNCTION 1487328c8 FUN_1487328c8 body=136 status=ok
// SIG undefined FUN_1487328c8(void)

undefined8 FUN_1487328c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_140d02432(lVar2,puVar1 + 2);
      *(undefined8 *)(lVar2 + 0x50) = puVar1[0xc];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x6c);
      uVar4 = *(undefined4 *)(puVar1 + 0xe);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x74);
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(puVar1 + 0xd);
      *(undefined4 *)(lVar2 + 0x5c) = uVar3;
      *(undefined4 *)(lVar2 + 0x60) = uVar4;
      *(undefined4 *)(lVar2 + 100) = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0x78,param_3 + lVar6 + 0x78);
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148732978 FUN_148732978 body=59 status=ok
// SIG undefined FUN_148732978(void)

undefined8 FUN_148732978(longlong *param_1)

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



// FUNCTION 1487329c4 FUN_1487329c4 body=44 status=ok
// SIG undefined FUN_1487329c4(void)

void FUN_1487329c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    if (*(longlong *)(param_2 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148732a9c FUN_148732a9c body=59 status=ok
// SIG undefined FUN_148732a9c(void)

undefined8 FUN_148732a9c(longlong *param_1)

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



// FUNCTION 148732b3c FUN_148732b3c body=29 status=ok
// SIG undefined FUN_148732b3c(void)

undefined8 FUN_148732b3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148732b5a FUN_148732b5a body=55 status=ok
// SIG undefined FUN_148732b5a(void)

void FUN_148732b5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66cb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66cb8 = FUN_140002ddd(FUN_146511f9f,uVar1,L"GbxStatusEffectMutator");
  }
  return;
}



// FUNCTION 148732b92 FUN_148732b92 body=42 status=ok
// SIG undefined FUN_148732b92(void)

undefined8 FUN_148732b92(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectMutator.h"
                ,0x18,L"Pure virtual not implemented (%s)",L"FGbxStatusEffectMutator::Mutate");
  return 0;
}



// FUNCTION 148732c26 FUN_148732c26 body=89 status=ok
// SIG undefined FUN_148732c26(void)

undefined1 FUN_148732c26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined1 *)(param_3 + 0x20);
    puVar4 = (undefined1 *)(param_2 + 0x20);
    do {
      FUN_1401f3db8(puVar4 + -0x18,puVar5 + -0x18);
      *puVar4 = *puVar5;
      FUN_144a787a6(puVar4 + 8,puVar5 + 8);
      uVar1 = *(undefined4 *)(puVar5 + 0x1c);
      uVar2 = *(undefined4 *)(puVar5 + 0x20);
      uVar3 = *(undefined4 *)(puVar5 + 0x24);
      *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)(puVar5 + 0x18);
      *(undefined4 *)(puVar4 + 0x1c) = uVar1;
      *(undefined4 *)(puVar4 + 0x20) = uVar2;
      *(undefined4 *)(puVar4 + 0x24) = uVar3;
      puVar5 = puVar5 + 0x48;
      puVar4 = puVar4 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148732ca8 FUN_148732ca8 body=59 status=ok
// SIG undefined FUN_148732ca8(void)

undefined8 FUN_148732ca8(longlong *param_1)

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



// FUNCTION 148732cee FUN_148732cee body=34 status=ok
// SIG undefined FUN_148732cee(void)

void FUN_148732cee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148733268(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148732d5e FUN_148732d5e body=38 status=ok
// SIG undefined FUN_148732d5e(void)

undefined8 FUN_148732d5e(undefined8 param_1,int param_2)

{
  FUN_148733268();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148732d84 FUN_148732d84 body=55 status=ok
// SIG undefined FUN_148732d84(void)

void FUN_148732d84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66cd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66cd0 = FUN_140002ddd(FUN_146512035,uVar1,L"GbxStatusEffectMutatorCondition");
  }
  return;
}



// FUNCTION 148732dbc FUN_148732dbc body=42 status=ok
// SIG undefined FUN_148732dbc(void)

undefined8 FUN_148732dbc(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectMutator.h"
                ,0x37,L"Pure virtual not implemented (%s)",L"FGbxStatusEffectMutator::ShouldMutate")
  ;
  return 0;
}



// FUNCTION 148732de8 FUN_148732de8 body=76 status=ok
// SIG undefined FUN_148732de8(void)

void FUN_148732de8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *param_2 = &PTR_FUN_14b28ee10;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  return;
}



// FUNCTION 148732ea8 FUN_148732ea8 body=150 status=ok
// SIG undefined FUN_148732ea8(void)

undefined1 FUN_148732ea8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_1401f3db8(param_2 + lVar6 + 8,param_3 + lVar6 + 8);
      *(undefined1 *)(param_2 + lVar6 + 0x20) = *(undefined1 *)(param_3 + lVar6 + 0x20);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_144a787a6(lVar1 + 0x28,lVar2 + 0x28);
      uVar3 = *(undefined4 *)(lVar2 + 0x3c);
      uVar4 = *(undefined4 *)(lVar2 + 0x40);
      uVar5 = *(undefined4 *)(lVar2 + 0x44);
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
      *(undefined4 *)(lVar1 + 0x3c) = uVar3;
      *(undefined4 *)(lVar1 + 0x40) = uVar4;
      *(undefined4 *)(lVar1 + 0x44) = uVar5;
      FUN_140d02432(param_2 + lVar6 + 0x48,param_3 + lVar6 + 0x48);
      lVar6 = lVar6 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148732f66 FUN_148732f66 body=59 status=ok
// SIG undefined FUN_148732f66(void)

undefined8 FUN_148732f66(longlong *param_1)

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



// FUNCTION 148732fb2 FUN_148732fb2 body=40 status=ok
// SIG undefined FUN_148732fb2(void)

void FUN_148732fb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_148733268(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148733028 FUN_148733028 body=38 status=ok
// SIG undefined FUN_148733028(void)

undefined8 FUN_148733028(undefined8 param_1,int param_2)

{
  FUN_148733268();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14873304e FUN_14873304e body=55 status=ok
// SIG undefined FUN_14873304e(void)

void FUN_14873304e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ce8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ce8 = FUN_140002ddd(FUN_1465120cd,uVar1,L"GbxStatusEffectMutatorCondition_RndChance");
  }
  return;
}



// FUNCTION 1487330f6 FUN_1487330f6 body=54 status=ok
// SIG undefined FUN_1487330f6(void)

undefined1 FUN_1487330f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487332bc(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148733154 FUN_148733154 body=59 status=ok
// SIG undefined FUN_148733154(void)

undefined8 FUN_148733154(longlong *param_1)

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



// FUNCTION 14873319a FUN_14873319a body=34 status=ok
// SIG undefined FUN_14873319a(void)

void FUN_14873319a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148733268(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14873320a FUN_14873320a body=38 status=ok
// SIG undefined FUN_14873320a(void)

undefined8 FUN_14873320a(undefined8 param_1,int param_2)

{
  FUN_148733268();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148733230 FUN_148733230 body=55 status=ok
// SIG undefined FUN_148733230(void)

void FUN_148733230(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66d00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66d00 =
         FUN_140002ddd(FUN_146512163,uVar1,L"GbxStatusEffectMutatorCondition_ParamChance");
  }
  return;
}



// FUNCTION 148733268 FUN_148733268 body=83 status=ok
// SIG undefined FUN_148733268(void)

void FUN_148733268(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b28ec40;
  if (param_1[5] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x0001487332b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487332bc FUN_1487332bc body=97 status=ok
// SIG undefined FUN_1487332bc(void)

longlong FUN_1487332bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_1401f3db8(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  lVar4 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar4;
  return param_1;
}



// FUNCTION 14873336a FUN_14873336a body=93 status=ok
// SIG undefined FUN_14873336a(void)

undefined1 FUN_14873336a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487333f0 FUN_1487333f0 body=59 status=ok
// SIG undefined FUN_1487333f0(void)

undefined8 FUN_1487333f0(longlong *param_1)

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



// FUNCTION 148733490 FUN_148733490 body=29 status=ok
// SIG undefined FUN_148733490(void)

undefined8 FUN_148733490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487334ae FUN_1487334ae body=55 status=ok
// SIG undefined FUN_1487334ae(void)

void FUN_1487334ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66d18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66d18 = FUN_140002ddd(FUN_1465121f9,uVar1,L"GbxStatusEffectMutator_Param");
  }
  return;
}



// FUNCTION 1487334e6 FUN_1487334e6 body=52 status=ok
// SIG undefined FUN_1487334e6(void)

longlong FUN_1487334e6(undefined8 param_1,longlong param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Mutators/GbxStatusEffectMutator_FloatParam.h"
                ,0x19,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectMutator_Param::GetDelta");
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 1487335b2 FUN_1487335b2 body=99 status=ok
// SIG undefined FUN_1487335b2(void)

undefined1 FUN_1487335b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *(longlong *)(param_2 + -8) = lVar1;
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873363e FUN_14873363e body=59 status=ok
// SIG undefined FUN_14873363e(void)

undefined8 FUN_14873363e(longlong *param_1)

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



// FUNCTION 1487336de FUN_1487336de body=29 status=ok
// SIG undefined FUN_1487336de(void)

undefined8 FUN_1487336de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487336fc FUN_1487336fc body=55 status=ok
// SIG undefined FUN_1487336fc(void)

void FUN_1487336fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66d30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66d30 = FUN_140002ddd(FUN_14651228f,uVar1,L"GbxStatusEffectMutator_Param_AttrInit");
  }
  return;
}



// FUNCTION 14873377c FUN_14873377c body=54 status=ok
// SIG undefined FUN_14873377c(void)

undefined1 FUN_14873377c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487338d0(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1487337da FUN_1487337da body=59 status=ok
// SIG undefined FUN_1487337da(void)

undefined8 FUN_1487337da(longlong *param_1)

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



// FUNCTION 14873387a FUN_14873387a body=29 status=ok
// SIG undefined FUN_14873387a(void)

undefined8 FUN_14873387a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148733898 FUN_148733898 body=55 status=ok
// SIG undefined FUN_148733898(void)

void FUN_148733898(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66d48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66d48 = FUN_140002ddd(FUN_146512325,uVar1,L"GbxStatusEffectMutator_Param_Param");
  }
  return;
}



// FUNCTION 1487338d0 FUN_1487338d0 body=94 status=ok
// SIG undefined FUN_1487338d0(void)

longlong FUN_1487338d0(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  return param_1;
}



// FUNCTION 148733964 FUN_148733964 body=78 status=ok
// SIG undefined FUN_148733964(void)

undefined8 FUN_148733964(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487339da FUN_1487339da body=59 status=ok
// SIG undefined FUN_1487339da(void)

undefined8 FUN_1487339da(longlong *param_1)

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



// FUNCTION 148733a20 FUN_148733a20 body=48 status=ok
// SIG undefined FUN_148733a20(void)

void FUN_148733a20(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b291110;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148733aa0 FUN_148733aa0 body=57 status=ok
// SIG undefined FUN_148733aa0(void)

undefined8 * FUN_148733aa0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b291110;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148733ada FUN_148733ada body=55 status=ok
// SIG undefined FUN_148733ada(void)

void FUN_148733ada(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66db0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66db0 = FUN_140002ddd(FUN_1465124d1,uVar1,L"GbxStatusEffectNotifyEventData");
  }
  return;
}



// FUNCTION 148733b12 FUN_148733b12 body=54 status=ok
// SIG undefined FUN_148733b12(void)

undefined8 * FUN_148733b12(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectNotifyEventData.h"
                ,99,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectNotifyEventData::InnerSpawnEvent");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148733b48 FUN_148733b48 body=46 status=ok
// SIG undefined FUN_148733b48(void)

void FUN_148733b48(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14583f632(param_2);
  *param_2 = &PTR_FUN_14b28f840;
  return;
}



// FUNCTION 148733b76 FUN_148733b76 body=32 status=ok
// SIG undefined FUN_148733b76(void)

void FUN_148733b76(undefined8 param_1,undefined8 *param_2)

{
  FUN_14583f632(param_2);
  *param_2 = &PTR_FUN_14b28f840;
  return;
}



// FUNCTION 148733bba FUN_148733bba body=78 status=ok
// SIG undefined FUN_148733bba(void)

undefined8 FUN_148733bba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148733c30 FUN_148733c30 body=59 status=ok
// SIG undefined FUN_148733c30(void)

undefined8 FUN_148733c30(longlong *param_1)

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



// FUNCTION 148733c76 FUN_148733c76 body=48 status=ok
// SIG undefined FUN_148733c76(void)

void FUN_148733c76(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b291110;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148733cf4 FUN_148733cf4 body=57 status=ok
// SIG undefined FUN_148733cf4(void)

undefined8 * FUN_148733cf4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b291110;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148733d2e FUN_148733d2e body=55 status=ok
// SIG undefined FUN_148733d2e(void)

void FUN_148733d2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66dc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66dc8 = FUN_140002ddd(FUN_146512567,uVar1,L"GbxStatusEffectNotifyEventData_Core");
  }
  return;
}



// FUNCTION 148733d66 FUN_148733d66 body=36 status=ok
// SIG undefined FUN_148733d66(void)

void FUN_148733d66(undefined8 param_1,undefined8 *param_2)

{
  FUN_14583f632(param_2);
  *param_2 = &PTR_FUN_14b28f9c0;
  *(undefined1 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 148733dae FUN_148733dae body=113 status=ok
// SIG undefined FUN_148733dae(void)

undefined8 FUN_148733dae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(param_2 + 8 + lVar6) = *(undefined8 *)(param_3 + 8 + lVar6);
      FUN_144a787a6(param_2 + 0x10 + lVar6,param_3 + 0x10 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined1 *)(param_2 + 0x30 + lVar6) = *(undefined1 *)(param_3 + 0x30 + lVar6);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148733e48 FUN_148733e48 body=59 status=ok
// SIG undefined FUN_148733e48(void)

undefined8 FUN_148733e48(longlong *param_1)

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



// FUNCTION 148733e8e FUN_148733e8e body=48 status=ok
// SIG undefined FUN_148733e8e(void)

void FUN_148733e8e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b291110;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148733f0e FUN_148733f0e body=32 status=ok
// SIG undefined FUN_148733f0e(void)

void FUN_148733f0e(undefined8 param_1,undefined8 *param_2)

{
  FUN_14583f632(param_2);
  *param_2 = &PTR_FUN_14b28fb40;
  return;
}



// FUNCTION 148733f52 FUN_148733f52 body=78 status=ok
// SIG undefined FUN_148733f52(void)

undefined8 FUN_148733f52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148733fc8 FUN_148733fc8 body=59 status=ok
// SIG undefined FUN_148733fc8(void)

undefined8 FUN_148733fc8(longlong *param_1)

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



// FUNCTION 14873400e FUN_14873400e body=48 status=ok
// SIG undefined FUN_14873400e(void)

void FUN_14873400e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b291110;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14873408e FUN_14873408e body=97 status=ok
// SIG undefined FUN_14873408e(void)

void FUN_14873408e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_28;
  *(undefined4 *)(param_2 + 4) = uStack_24;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_20;
  *(undefined4 *)(param_2 + 5) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148734108 FUN_148734108 body=70 status=ok
// SIG undefined FUN_148734108(void)

undefined1 FUN_148734108(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141859652(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    uVar4 = *(undefined4 *)(param_3 + 0x24);
    uVar5 = *(undefined4 *)(param_3 + 0x28);
    uVar6 = *(undefined4 *)(param_3 + 0x2c);
    uVar7 = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    *(undefined4 *)(param_2 + 0x24) = uVar4;
    *(undefined4 *)(param_2 + 0x28) = uVar5;
    *(undefined4 *)(param_2 + 0x2c) = uVar6;
    *(undefined4 *)(param_2 + 0x30) = uVar7;
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148734176 FUN_148734176 body=59 status=ok
// SIG undefined FUN_148734176(void)

undefined8 FUN_148734176(longlong *param_1)

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



// FUNCTION 148734218 FUN_148734218 body=60 status=ok
// SIG undefined FUN_148734218(void)

void FUN_148734218(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413493a6(param_2);
  *param_2 = &PTR_FUN_14b28ff30;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 14873426e FUN_14873426e body=108 status=ok
// SIG undefined FUN_14873426e(void)

undefined1 FUN_14873426e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470d0d20(param_2,param_3);
    FUN_1487343c4(param_2 + 0xa8,param_3 + 0xa8);
    FUN_1401f3db8(param_2 + 0xb8,param_3 + 0xb8);
    param_2 = param_2 + 0xd0;
    param_3 = param_3 + 0xd0;
  }
  return 1;
}



// FUNCTION 148734302 FUN_148734302 body=59 status=ok
// SIG undefined FUN_148734302(void)

undefined8 FUN_148734302(longlong *param_1)

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



// FUNCTION 14873434e FUN_14873434e body=40 status=ok
// SIG undefined FUN_14873434e(void)

void FUN_14873434e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_145826a20(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1487343c4 FUN_1487343c4 body=79 status=ok
// SIG undefined FUN_1487343c4(void)

undefined8 * FUN_1487343c4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148734414(param_1,iVar1);
      FUN_148734483(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148734414 FUN_148734414 body=111 status=ok
// SIG undefined FUN_148734414(void)

void FUN_148734414(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148734483 FUN_148734483 body=68 status=ok
// SIG undefined FUN_148734483(void)

void FUN_148734483(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487344c8(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = *(undefined4 *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    uVar7 = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 1487344c8 FUN_1487344c8 body=71 status=ok
// SIG undefined FUN_1487344c8(void)

undefined8 * FUN_1487344c8(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1487345ca FUN_1487345ca body=91 status=ok
// SIG undefined FUN_1487345ca(void)

undefined1 FUN_1487345ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_1457892b8(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14873464e FUN_14873464e body=59 status=ok
// SIG undefined FUN_14873464e(void)

undefined8 FUN_14873464e(longlong *param_1)

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



// FUNCTION 148734694 FUN_148734694 body=32 status=ok
// SIG undefined FUN_148734694(void)

void FUN_148734694(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148734702 FUN_148734702 body=38 status=ok
// SIG undefined FUN_148734702(void)

undefined8 FUN_148734702(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148734728 FUN_148734728 body=55 status=ok
// SIG undefined FUN_148734728(void)

void FUN_148734728(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66e90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66e90 =
         FUN_140002ddd(FUN_14651290b,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_CST");
  }
  return;
}



// FUNCTION 1487347f2 FUN_1487347f2 body=59 status=ok
// SIG undefined FUN_1487347f2(void)

undefined8 FUN_1487347f2(longlong *param_1)

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



// FUNCTION 148734892 FUN_148734892 body=29 status=ok
// SIG undefined FUN_148734892(void)

undefined8 FUN_148734892(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487348b0 FUN_1487348b0 body=55 status=ok
// SIG undefined FUN_1487348b0(void)

void FUN_1487348b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ea8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ea8 =
         FUN_140002ddd(FUN_1465129a1,uVar1,L"GbxStatusEffectPresentationEffect_MaterialParam");
  }
  return;
}



// FUNCTION 1487348e8 FUN_1487348e8 body=41 status=ok
// SIG undefined FUN_1487348e8(void)

void FUN_1487348e8(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Presentation/Effects/GbxStatusEffectPresentationEffect_Material.h"
                ,0x23,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectPresentationEffect_MaterialParam::Apply");
  return;
}



// FUNCTION 1487349a2 FUN_1487349a2 body=84 status=ok
// SIG undefined FUN_1487349a2(void)

undefined8 FUN_1487349a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14115e0ba(param_2,param_3);
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148734a1e FUN_148734a1e body=59 status=ok
// SIG undefined FUN_148734a1e(void)

undefined8 FUN_148734a1e(longlong *param_1)

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



// FUNCTION 148734a6a FUN_148734a6a body=38 status=ok
// SIG undefined FUN_148734a6a(void)

void FUN_148734a6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_148734ade(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148734ade FUN_148734ade body=74 status=ok
// SIG undefined FUN_148734ade(void)

void FUN_148734ade(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b290580;
  param_1[3] = &DAT_14a176f00;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 4);
  return;
}



// FUNCTION 148734bbe FUN_148734bbe body=54 status=ok
// SIG undefined FUN_148734bbe(void)

undefined1 FUN_148734bbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148734cd2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148734c1c FUN_148734c1c body=59 status=ok
// SIG undefined FUN_148734c1c(void)

undefined8 FUN_148734c1c(longlong *param_1)

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



// FUNCTION 148734c62 FUN_148734c62 body=34 status=ok
// SIG undefined FUN_148734c62(void)

void FUN_148734c62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_145c33ffc(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148734cd2 FUN_148734cd2 body=99 status=ok
// SIG undefined FUN_148734cd2(void)

longlong FUN_148734cd2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_148734d36(param_1 + 0x38,param_2 + 0x38);
  lVar8 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar8;
  return param_1;
}



// FUNCTION 148734d36 FUN_148734d36 body=93 status=ok
// SIG undefined FUN_148734d36(void)

undefined8 * FUN_148734d36(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14123891a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148734d94(param_1,iVar1);
      FUN_148734e07(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148734d94 FUN_148734d94 body=115 status=ok
// SIG undefined FUN_148734d94(void)

void FUN_148734d94(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148734e07 FUN_148734e07 body=52 status=ok
// SIG undefined FUN_148734e07(void)

void FUN_148734e07(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148734eee FUN_148734eee body=54 status=ok
// SIG undefined FUN_148734eee(void)

undefined1 FUN_148734eee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148735060(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148734f4c FUN_148734f4c body=59 status=ok
// SIG undefined FUN_148734f4c(void)

undefined8 FUN_148734f4c(longlong *param_1)

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



// FUNCTION 148734f92 FUN_148734f92 body=34 status=ok
// SIG undefined FUN_148734f92(void)

void FUN_148734f92(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14584eecc(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148735002 FUN_148735002 body=38 status=ok
// SIG undefined FUN_148735002(void)

undefined8 FUN_148735002(undefined8 param_1,int param_2)

{
  FUN_14584eecc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148735028 FUN_148735028 body=55 status=ok
// SIG undefined FUN_148735028(void)

void FUN_148735028(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ef0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ef0 =
         FUN_140002ddd(FUN_146512b65,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_CustomChannel");
  }
  return;
}



// FUNCTION 148735060 FUN_148735060 body=134 status=ok
// SIG undefined FUN_148735060(void)

longlong FUN_148735060(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  lVar8 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar8;
  FUN_148734d36(param_1 + 0x40,param_2 + 0x40);
  lVar8 = *(longlong *)(param_2 + 0x50);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x50);
    }
  }
  *(longlong *)(param_1 + 0x50) = lVar8;
  return param_1;
}



// FUNCTION 14873517e FUN_14873517e body=54 status=ok
// SIG undefined FUN_14873517e(void)

undefined1 FUN_14873517e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148735060(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1487351dc FUN_1487351dc body=59 status=ok
// SIG undefined FUN_1487351dc(void)

undefined8 FUN_1487351dc(longlong *param_1)

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



// FUNCTION 148735222 FUN_148735222 body=34 status=ok
// SIG undefined FUN_148735222(void)

void FUN_148735222(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14584eecc(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148735346 FUN_148735346 body=54 status=ok
// SIG undefined FUN_148735346(void)

undefined1 FUN_148735346(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148735060(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1487353a4 FUN_1487353a4 body=59 status=ok
// SIG undefined FUN_1487353a4(void)

undefined8 FUN_1487353a4(longlong *param_1)

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



// FUNCTION 1487353ea FUN_1487353ea body=34 status=ok
// SIG undefined FUN_1487353ea(void)

void FUN_1487353ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14584eecc(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14873545a FUN_14873545a body=38 status=ok
// SIG undefined FUN_14873545a(void)

undefined8 FUN_14873545a(undefined8 param_1,int param_2)

{
  FUN_14584eecc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148735480 FUN_148735480 body=55 status=ok
// SIG undefined FUN_148735480(void)

void FUN_148735480(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66f20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66f20 =
         FUN_140002ddd(FUN_146512c93,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_MaskMaterial");
  }
  return;
}



// FUNCTION 14873554e FUN_14873554e body=54 status=ok
// SIG undefined FUN_14873554e(void)

undefined1 FUN_14873554e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148735060(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1487355ac FUN_1487355ac body=59 status=ok
// SIG undefined FUN_1487355ac(void)

undefined8 FUN_1487355ac(longlong *param_1)

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



// FUNCTION 1487355f2 FUN_1487355f2 body=34 status=ok
// SIG undefined FUN_1487355f2(void)

void FUN_1487355f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14584eecc(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148735696 FUN_148735696 body=121 status=ok
// SIG undefined FUN_148735696(void)

longlong * FUN_148735696(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *param_2;
    }
  }
  *param_1 = lVar5;
  lVar5 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[2];
  param_1[1] = lVar5;
  param_1[2] = lVar3;
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
  return param_1;
}



// FUNCTION 148735710 FUN_148735710 body=282 status=ok
// SIG undefined FUN_148735710(void)

void FUN_148735710(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_b0 = FUN_14477b664(uVar1);
  local_a8 = param_2[2];
  FUN_148735696(&local_a0,param_3);
  local_88 = param_4;
  FUN_1403de7ba(&local_80,param_5);
  FUN_1409ed7fc(&local_60,param_6);
  local_50 = *(undefined8 *)(param_6 + 0x10);
  uVar1 = FUN_14477b072(param_1,DAT_14cb67428);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_b8);
  FUN_14873582c(&local_b8);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873582c FUN_14873582c body=113 status=ok
// SIG undefined FUN_14873582c(void)

void FUN_14873582c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1409ed859(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x000148735892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14873589e FUN_14873589e body=217 status=ok
// SIG undefined FUN_14873589e(void)

void FUN_14873589e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14899e340(param_1,puVar4);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14873598c FUN_14873598c body=41 status=ok
// SIG undefined FUN_14873598c(void)

void FUN_14873598c(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectScript.h"
                ,0x33,L"Pure virtual not implemented (%s)",L"UGbxStatusEffectScript::BeginInner");
  return;
}



// FUNCTION 1487359b6 FUN_1487359b6 body=41 status=ok
// SIG undefined FUN_1487359b6(void)

void FUN_1487359b6(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectScript.h"
                ,0x34,L"Pure virtual not implemented (%s)",L"UGbxStatusEffectScript::EndInner");
  return;
}



// FUNCTION 1487359e0 FUN_1487359e0 body=41 status=ok
// SIG undefined FUN_1487359e0(void)

void FUN_1487359e0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectScript.h"
                ,0x36,L"Pure virtual not implemented (%s)",
                L"UGbxStatusEffectScript::FirePushEventInner");
  return;
}



// FUNCTION 148735a0a FUN_148735a0a body=41 status=ok
// SIG undefined FUN_148735a0a(void)

void FUN_148735a0a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectScript.h"
                ,0x37,L"Pure virtual not implemented (%s)",
                L"UGbxStatusEffectScript::FireNotifyEventInner");
  return;
}



// FUNCTION 148735a34 FUN_148735a34 body=48 status=ok
// SIG undefined FUN_148735a34(void)

longlong FUN_148735a34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_1457f5964(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148735b2a FUN_148735b2a body=54 status=ok
// SIG undefined FUN_148735b2a(void)

undefined1 FUN_148735b2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148735c28(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148735b88 FUN_148735b88 body=59 status=ok
// SIG undefined FUN_148735b88(void)

undefined8 FUN_148735b88(longlong *param_1)

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



// FUNCTION 148735c28 FUN_148735c28 body=113 status=ok
// SIG undefined FUN_148735c28(void)

longlong * FUN_148735c28(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = 0xb;
  plVar3 = param_2;
  plVar4 = param_1;
  while( true ) {
    plVar4 = plVar4 + 1;
    plVar3 = plVar3 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *plVar4 = *plVar3;
  }
  lVar2 = param_2[0xc];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xc];
    }
  }
  param_1[0xc] = lVar2;
  return param_1;
}



// FUNCTION 148735d38 FUN_148735d38 body=59 status=ok
// SIG undefined FUN_148735d38(void)

undefined8 FUN_148735d38(longlong *param_1)

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



// FUNCTION 148735dd8 FUN_148735dd8 body=34 status=ok
// SIG undefined FUN_148735dd8(void)

undefined8 FUN_148735dd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148735dfa FUN_148735dfa body=55 status=ok
// SIG undefined FUN_148735dfa(void)

void FUN_148735dfa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66f68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66f68 =
         FUN_140002ddd(FUN_146513b07,uVar1,L"GbxStatusEffectPresentationEffect_NiagaraParam");
  }
  return;
}



// FUNCTION 148735e32 FUN_148735e32 body=41 status=ok
// SIG undefined FUN_148735e32(void)

void FUN_148735e32(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Presentation/Effects/GbxStatusEffectPresentationEffect_Niagara.h"
                ,0x5b,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectPresentationEffect_NiagaraParam::Apply");
  return;
}



// FUNCTION 148735ea0 FUN_148735ea0 body=84 status=ok
// SIG undefined FUN_148735ea0(void)

undefined8 FUN_148735ea0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_14115e0ba(param_2,param_3);
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148735f1c FUN_148735f1c body=59 status=ok
// SIG undefined FUN_148735f1c(void)

undefined8 FUN_148735f1c(longlong *param_1)

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



// FUNCTION 148735f68 FUN_148735f68 body=40 status=ok
// SIG undefined FUN_148735f68(void)

void FUN_148735f68(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145827048(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148736024 FUN_148736024 body=84 status=ok
// SIG undefined FUN_148736024(void)

undefined8 FUN_148736024(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_14115e0ba(param_2,param_3);
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487360a0 FUN_1487360a0 body=59 status=ok
// SIG undefined FUN_1487360a0(void)

undefined8 FUN_1487360a0(longlong *param_1)

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



// FUNCTION 1487360ec FUN_1487360ec body=40 status=ok
// SIG undefined FUN_1487360ec(void)

void FUN_1487360ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145833f60(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148736218 FUN_148736218 body=59 status=ok
// SIG undefined FUN_148736218(void)

undefined8 FUN_148736218(longlong *param_1)

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



// FUNCTION 1487362b8 FUN_1487362b8 body=34 status=ok
// SIG undefined FUN_1487362b8(void)

undefined8 FUN_1487362b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1487362da FUN_1487362da body=55 status=ok
// SIG undefined FUN_1487362da(void)

void FUN_1487362da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66fb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66fb0 =
         FUN_140002ddd(FUN_146513ccb,uVar1,L"GbxStatusEffectPresentationEffect_NiagaraParam_Color");
  }
  return;
}



// FUNCTION 148736462 FUN_148736462 body=63 status=ok
// SIG undefined FUN_148736462(void)

undefined1 FUN_148736462(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14873668a(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 1487364ca FUN_1487364ca body=59 status=ok
// SIG undefined FUN_1487364ca(void)

undefined8 FUN_1487364ca(longlong *param_1)

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



// FUNCTION 148736516 FUN_148736516 body=40 status=ok
// SIG undefined FUN_148736516(void)

void FUN_148736516(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14580b73a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14873658c FUN_14873658c body=43 status=ok
// SIG undefined FUN_14873658c(void)

undefined8 FUN_14873658c(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1487365b8 FUN_1487365b8 body=55 status=ok
// SIG undefined FUN_1487365b8(void)

void FUN_1487365b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb670d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb670d8 =
         FUN_140002ddd(FUN_146513d90,uVar1,L"GbxStatusEffectPresentationGraphNodeSettings_Effect");
  }
  return;
}



// FUNCTION 1487365f0 FUN_1487365f0 body=54 status=ok
// SIG undefined FUN_1487365f0(void)

undefined8 * FUN_1487365f0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\StatusEffects/Presentation/GbxStatusEffectPresentationGraphNodeSettings_Effects.h"
                ,0x22,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectPresentationGraphNodeSettings_Effect::SpawnEffectInner");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148736626 FUN_148736626 body=43 status=ok
// SIG undefined FUN_148736626(void)

undefined8 FUN_148736626(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 148736652 FUN_148736652 body=55 status=ok
// SIG undefined FUN_148736652(void)

void FUN_148736652(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67048 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67048 =
         FUN_140002ddd(FUN_1465140b1,uVar1,L"GbxStatusEffectPresentationGraphNodeSettings");
  }
  return;
}



// FUNCTION 14873668a FUN_14873668a body=165 status=ok
// SIG undefined FUN_14873668a(void)

longlong FUN_14873668a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  lVar8 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar8;
  FUN_148736730(param_1 + 0x40,param_2 + 0x40);
  puVar9 = (undefined8 *)(param_2 + 0x50);
  puVar10 = (undefined8 *)(param_1 + 0x50);
  for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  lVar8 = *(longlong *)(param_2 + 0xa8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0xa8);
    }
  }
  *(longlong *)(param_1 + 0xa8) = lVar8;
  return param_1;
}



// FUNCTION 148736730 FUN_148736730 body=93 status=ok
// SIG undefined FUN_148736730(void)

undefined8 * FUN_148736730(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14112093f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14873678e(param_1,iVar1);
      FUN_148736801(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14873678e FUN_14873678e body=115 status=ok
// SIG undefined FUN_14873678e(void)

void FUN_14873678e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148736801 FUN_148736801 body=52 status=ok
// SIG undefined FUN_148736801(void)

void FUN_148736801(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148736836 FUN_148736836 body=83 status=ok
// SIG undefined FUN_148736836(void)

void FUN_148736836(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b298350;
  FUN_140e98fd6(param_2 + 7);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 1487368b2 FUN_1487368b2 body=125 status=ok
// SIG undefined FUN_1487368b2(void)

undefined1 FUN_1487368b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      FUN_148736a1a(param_2 + lVar10 + 0x38,param_3 + lVar10 + 0x38);
      FUN_148736730(param_2 + lVar10 + 0x70,param_3 + lVar10 + 0x70);
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148736958 FUN_148736958 body=59 status=ok
// SIG undefined FUN_148736958(void)

undefined8 FUN_148736958(longlong *param_1)

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



// FUNCTION 1487369a4 FUN_1487369a4 body=40 status=ok
// SIG undefined FUN_1487369a4(void)

void FUN_1487369a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1458adc14(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148736a1a FUN_148736a1a body=115 status=ok
// SIG undefined FUN_148736a1a(void)

longlong * FUN_148736a1a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  
  lVar8 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *param_2;
    }
  }
  bVar7 = DAT_14c950c29;
  *param_1 = lVar8;
  param_1[5] = param_2[5];
  lVar8 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar5 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar6 = param_2[4];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(int *)(param_1 + 4) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(int *)(param_1 + 1) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  lVar8 = param_2[6];
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = param_2[6];
    }
  }
  param_1[6] = lVar8;
  return param_1;
}



// FUNCTION 148736b6e FUN_148736b6e body=54 status=ok
// SIG undefined FUN_148736b6e(void)

undefined1 FUN_148736b6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148736d14(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148736bcc FUN_148736bcc body=59 status=ok
// SIG undefined FUN_148736bcc(void)

undefined8 FUN_148736bcc(longlong *param_1)

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



// FUNCTION 148736c6c FUN_148736c6c body=36 status=ok
// SIG undefined FUN_148736c6c(void)

undefined8 FUN_148736c6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 148736c90 FUN_148736c90 body=34 status=ok
// SIG undefined FUN_148736c90(void)

undefined8 FUN_148736c90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148736cb2 FUN_148736cb2 body=55 status=ok
// SIG undefined FUN_148736cb2(void)

void FUN_148736cb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67180 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67180 = FUN_140002ddd(FUN_146513eee,uVar1,L"SEPEventAction");
  }
  return;
}



// FUNCTION 148736cea FUN_148736cea body=41 status=ok
// SIG undefined FUN_148736cea(void)

void FUN_148736cea(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\StatusEffects/Presentation/GbxStatusEffectPresentationTypes.h"
                ,0x16c,L"Pure virtual not implemented (%s)",L"FSEPEventAction::Eval");
  return;
}


