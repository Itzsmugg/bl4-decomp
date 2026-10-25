// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148234be1 FUN_148234be1 body=148 status=ok
// SIG undefined FUN_148234be1(void)

undefined8 FUN_148234be1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459221ae();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148234c76 FUN_148234c76 body=190 status=ok
// SIG undefined FUN_148234c76(void)

undefined8 * FUN_148234c76(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46308) {
    FUN_144b3d300(&DAT_14cb46308);
    if (DAT_14cb46308 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"elected",8);
      builtin_wcsncpy(local_48 + 8,L"bButtonS",8);
      builtin_wcsncpy(local_48,L"HandleTa",8);
      FUN_1446f470e(&DAT_14cb46300,local_48,1);
      _Init_thread_footer(&DAT_14cb46308);
    }
  }
  *param_1 = DAT_14cb46300;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148234d36 FUN_148234d36 body=52 status=ok
// SIG undefined FUN_148234d36(void)

void FUN_148234d36(longlong *param_1)

{
  FUN_140ec5ab0();
  if ((char)param_1[0x6d] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000148234d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x4b8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148234d6a FUN_148234d6a body=80 status=ok
// SIG undefined FUN_148234d6a(void)

void FUN_148234d6a(longlong *param_1)

{
  FUN_14821d3a6();
  (**(code **)(*param_1 + 0x4b8))(param_1,0);
  param_1[0x8c] = 0;
  FUN_1482330ac(param_1);
  if ((longlong *)param_1[0x6f] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148234dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x6f] + 0x2b8))();
    return;
  }
  return;
}



// FUNCTION 148234dba FUN_148234dba body=47 status=ok
// SIG undefined FUN_148234dba(void)

void FUN_148234dba(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb45718);
                    /* WARNING: Could not recover jumptable at 0x000148234de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148234dea FUN_148234dea body=47 status=ok
// SIG undefined FUN_148234dea(void)

void FUN_148234dea(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb45708);
                    /* WARNING: Could not recover jumptable at 0x000148234e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148234e1e FUN_148234e1e body=164 status=ok
// SIG undefined FUN_148234e1e(void)

void FUN_148234e1e(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_51;
  undefined **local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  longlong local_38;
  undefined ***local_30;
  undefined ***local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = *(undefined4 *)(param_1 + 0x150);
  local_40 = &local_5c;
  local_48 = &local_60;
  local_60 = 0;
  local_50 = &PTR_LAB_14ae6af50;
  local_58 = *(undefined4 *)(param_1 + 0x158);
  local_51 = param_2;
  local_38 = param_1;
  local_30 = &local_50;
  local_18 = &local_50;
  FUN_143af2518(&local_50);
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18,local_18 != &local_50);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148234ec4 FUN_148234ec4 body=164 status=ok
// SIG undefined FUN_148234ec4(void)

void FUN_148234ec4(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_51;
  undefined **local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  longlong local_38;
  undefined ***local_30;
  undefined ***local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = *(undefined4 *)(param_1 + 0x150);
  local_40 = &local_5c;
  local_48 = &local_60;
  local_60 = 0;
  local_50 = &PTR_LAB_14ae6af80;
  local_58 = *(undefined4 *)(param_1 + 0x158);
  local_51 = param_2;
  local_38 = param_1;
  local_30 = &local_50;
  local_18 = &local_50;
  FUN_143af26a4(&local_50);
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18,local_18 != &local_50);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148234f6a FUN_148234f6a body=152 status=ok
// SIG undefined FUN_148234f6a(void)

void FUN_148234f6a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x148);
    lVar4 = (longlong)*(int *)(param_1 + 0x150) << 3;
    do {
      cVar3 = FUN_144729dda(lVar5);
      if ((cVar3 != '\0') && (lVar1 = FUN_14479d2ce(lVar5), (*(byte *)(lVar1 + 0x3b9) & 1) != 0)) {
        uVar2 = FUN_14479d2ce(lVar5);
        FUN_1482232ec(uVar2,0,1,1);
      }
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (*(int *)(param_1 + 0x158) == -1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  FUN_1447cd2ec(param_1 + 200,0);
  return;
}



// FUNCTION 148235002 FUN_148235002 body=172 status=ok
// SIG undefined FUN_148235002(void)

void FUN_148235002(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
    lVar1 = local_28;
    if ((((local_28 == 0) || (lVar2 = FUN_140de7a58(), lVar2 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      local_28 = 0;
    }
    if ((*(int *)(local_28 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(local_28 + 0x38) * 8) == local_28 + 0x30)) {
      (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482350ce FUN_1482350ce body=162 status=ok
// SIG undefined FUN_1482350ce(void)

void FUN_1482350ce(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar4 = local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + 0x94);
  *puVar4 = *(undefined4 *)(param_1 + 0x88);
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235172 FUN_148235172 body=298 status=ok
// SIG undefined FUN_148235172(void)

void FUN_148235172(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0x41c00000;
  local_38 = 0;
  local_34 = 2;
  local_32 = 0;
  local_30 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412cc59c(puVar4,param_1 + 0x28);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482352bc FUN_1482352bc body=167 status=ok
// SIG undefined FUN_1482352bc(void)

void FUN_1482352bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)(param_1 + 0xc4);
  uVar2 = *(undefined4 *)(param_1 + 200);
  uVar3 = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)puVar4 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((longlong)puVar4 + 4) = uVar1;
  *(undefined4 *)(puVar4 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235364 FUN_148235364 body=162 status=ok
// SIG undefined FUN_148235364(void)

void FUN_148235364(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar4 = local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)(param_1 + 0xb4);
  uVar2 = *(undefined4 *)(param_1 + 0xb8);
  uVar3 = *(undefined4 *)(param_1 + 0xbc);
  *puVar4 = *(undefined4 *)(param_1 + 0xb0);
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235408 FUN_148235408 body=162 status=ok
// SIG undefined FUN_148235408(void)

void FUN_148235408(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar4 = local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0xac);
  *puVar4 = *(undefined4 *)(param_1 + 0xa0);
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482354ac FUN_1482354ac body=396 status=ok
// SIG undefined FUN_1482354ac(void)

void FUN_1482354ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0xd0);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482356b0 FUN_1482356b0 body=158 status=ok
// SIG undefined FUN_1482356b0(void)

void FUN_1482356b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147755574(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235750 FUN_148235750 body=156 status=ok
// SIG undefined FUN_148235750(void)

void FUN_148235750(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140fabc82(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482357ee FUN_1482357ee body=165 status=ok
// SIG undefined FUN_1482357ee(void)

void FUN_1482357ee(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14775563e(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235894 FUN_148235894 body=205 status=ok
// SIG undefined FUN_148235894(void)

void FUN_148235894(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(float *)(param_1 + 0x328) != local_1c) ||
     (NAN(*(float *)(param_1 + 0x328)) || NAN(local_1c))) {
    *(float *)(param_1 + 0x328) = local_1c;
    iVar1 = (**(code **)(*DAT_14cb45d30 + 0xb0))();
    if (iVar1 == 1) {
      FUN_148235d02(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235966 FUN_148235966 body=166 status=ok
// SIG undefined FUN_148235966(void)

void FUN_148235966(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)((longlong)param_1 + 0x32c) = local_1c != 0;
  (**(code **)(*param_1 + 0x2d8))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235a0e FUN_148235a0e body=226 status=ok
// SIG undefined FUN_148235a0e(void)

void FUN_148235a0e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_20);
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x66] = lVar1;
  (**(code **)(*param_1 + 0x2d8))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235af6 FUN_148235af6 body=172 status=ok
// SIG undefined FUN_148235af6(void)

void FUN_148235af6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147754444(param_1,(local_1c != 0) * '\x02');
  (**(code **)(*param_1 + 0x2d8))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235ba4 FUN_148235ba4 body=156 status=ok
// SIG undefined FUN_148235ba4(void)

void FUN_148235ba4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477555ba(param_1,(float)local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235c50 FUN_148235c50 body=75 status=ok
// SIG undefined FUN_148235c50(void)

void FUN_148235c50(longlong param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x328) != fVar1) || (NAN(*(float *)(param_1 + 0x328)) || NAN(fVar1))) {
    *(float *)(param_1 + 0x328) = fVar1;
    iVar2 = (**(code **)(*DAT_14cb45d30 + 0xb0))();
    if (iVar2 == 1) {
      FUN_148235d02(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148235cb6 FUN_148235cb6 body=75 status=ok
// SIG undefined FUN_148235cb6(void)

void FUN_148235cb6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_146481646(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235d02 FUN_148235d02 body=206 status=ok
// SIG undefined FUN_148235d02(void)

void FUN_148235d02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [96];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [56];
  longlong *local_48;
  float local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    uVar3 = FUN_1433349d2();
    FUN_144a87366(local_80,uVar3);
    local_38 = *(float *)(param_1 + 0x328) * local_38;
    uVar3 = *(undefined8 *)(param_1 + 0x318);
    FUN_144a87366(local_f8,local_80);
    local_98 = 1;
    local_90 = 0;
    uStack_88 = 0;
    FUN_1410da64c(uVar3,local_f8);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235dd2 FUN_148235dd2 body=121 status=ok
// SIG undefined FUN_148235dd2(void)

void FUN_148235dd2(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x32e) == '\x01') {
    FUN_1477534d0(param_1,local_28);
    cVar1 = FUN_144a7c5f6(local_28);
    (**(code **)(*param_1 + 0x2b0))(param_1,(cVar1 == '\0') * '\x03' + '\x01');
    if (local_28[0] != (longlong *)0x0) {
      (**(code **)(*local_28[0] + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235e4c FUN_148235e4c body=48 status=ok
// SIG undefined FUN_148235e4c(void)

void FUN_148235e4c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_14cb45d30 + 0xb0))();
  if (iVar1 != 1) {
    return;
  }
  FUN_148235d02(param_1);
  return;
}



// FUNCTION 148235e7c FUN_148235e7c body=206 status=ok
// SIG undefined FUN_148235e7c(void)

longlong FUN_148235e7c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x338);
  if ((((lVar3 != 0) && (lVar2 = FUN_1459d70b6(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x338), lVar3 != 0)))) {
    lVar2 = FUN_1459d70b6();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x338);
    }
    if (*(longlong *)(lVar3 + 0x110) != 0) {
      lVar2 = FUN_1459d70b6();
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if (lVar3 != 0) {
        if (lVar2 == 0) {
          return 0;
        }
        lVar1 = *(longlong *)(lVar3 + 0x10);
        if (lVar1 == 0) {
          return 0;
        }
        if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30) {
            return 0;
          }
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148235f4e FUN_148235f4e body=144 status=ok
// SIG undefined FUN_148235f4e(void)

undefined8 * FUN_148235f4e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148235fe2(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148235fe2 FUN_148235fe2 body=1142 status=ok
// SIG undefined FUN_148235fe2(void)

undefined8 * FUN_148235fe2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [4];
  uint local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  uint local_d4;
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68;
  longlong local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14777548c(local_e0);
  local_e0[0] = *(undefined1 *)(param_1 + 0xa94);
  local_dc = (uint)*(byte *)(param_1 + 0xa91);
  local_d8 = *(undefined1 *)(param_1 + 0xa93);
  local_d7 = *(undefined1 *)(param_1 + 0xa92);
  local_d6 = *(undefined1 *)(param_1 + 0xa95);
  local_a0 = *(undefined1 *)(param_1 + 0xb48);
  local_68 = *(undefined1 *)(param_1 + 0xb49);
  local_d4 = (uint)*(byte *)(param_1 + 0xa90);
  local_60 = param_1 + 0x440;
  FUN_14773a13a(&local_f8,*(undefined1 *)(param_1 + 0xb4a));
  local_58 = (undefined1)local_f8;
  cVar6 = FUN_147756036(param_1);
  if ((cVar6 == '\0') || (*(char *)(param_1 + 0xb60) != '\0')) {
    local_80 = *(undefined4 *)(param_1 + 0xb44);
    local_f8._0_5_ = CONCAT14(1,local_80);
    local_f0 = (longlong *)0x0;
    uStack_e8 = 0;
    local_7c = 1;
    FUN_144a450dc(local_78,&local_f0);
    FUN_1449db362(&local_f0);
    local_98 = *(undefined4 *)(param_1 + 0xb40);
  }
  else {
    local_80 = FUN_1477568b8(param_1);
    local_f8._0_5_ = CONCAT14(1,local_80);
    local_f0 = (longlong *)0x0;
    uStack_e8 = 0;
    local_7c = 1;
    FUN_144a450dc(local_78,&local_f0);
    FUN_1449db362(&local_f0);
    local_98 = FUN_147756878(param_1);
  }
  local_f8._0_5_ = CONCAT14(1,local_98);
  local_f0 = (longlong *)0x0;
  uStack_e8 = 0;
  local_94 = 1;
  FUN_144a450dc(local_90,&local_f0);
  FUN_1449db362(&local_f0);
  FUN_148252d8a(&local_f8,param_1,param_1 + 0xa98,local_e0);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  *(undefined8 **)(param_1 + 0xb50) = local_f8;
  plVar11 = *(longlong **)(param_1 + 0xb58);
  uVar7 = local_f8;
  plVar9 = local_f0;
  plVar10 = plVar11;
  if (local_f0 != plVar11) {
    *(longlong **)(param_1 + 0xb58) = local_f0;
    plVar10 = local_f0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar11 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      uVar7 = *(undefined8 *)(param_1 + 0xb50);
      plVar10 = *(longlong **)(param_1 + 0xb58);
    }
    plVar9 = (longlong *)0x0;
  }
  if (plVar10 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xaa8) = uVar7;
    plVar11 = *(longlong **)(param_1 + 0xab0);
    if (plVar11 == (longlong *)0x0) goto LAB_148236220;
    *(undefined8 *)(param_1 + 0xab0) = 0;
LAB_148236407:
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_148236220;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xaa8) = uVar7;
    plVar11 = *(longlong **)(param_1 + 0xab0);
    if (plVar10 != plVar11) {
      *(longlong **)(param_1 + 0xab0) = plVar10;
      if (plVar11 == (longlong *)0x0) goto LAB_148236220;
      goto LAB_148236407;
    }
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_148236220;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar11 = plVar10;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
LAB_148236220:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar11 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_f0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xb50);
  local_f8 = (undefined8 *)0x0;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_1446efa72(&local_f8,0,3,0x10);
  puVar4 = local_f8;
  local_f0 = (longlong *)CONCAT44(local_f0._4_4_,3);
  *local_f8 = &PTR_LAB_14a541520;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_f8[2] = lVar8;
  *local_f8 = &PTR_FUN_14a5432f0;
  local_f8[3] = 0;
  FUN_14485c47a(local_f8 + 3,param_1);
  puVar4[4] = FUN_14773bf14;
  *(undefined4 *)(puVar4 + 5) = 0;
  FUN_147717206(lVar3 + 0x690,&local_f8);
  FUN_1449db362(&local_f8);
  uVar7 = *(undefined8 *)(param_1 + 0xb50);
  plVar11 = *(longlong **)(param_1 + 0xb58);
  if (plVar11 == (longlong *)0x0) {
    *param_2 = uVar7;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *param_2 = uVar7;
    param_2[1] = plVar11;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar11 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_1449db362(local_78);
  FUN_1449db362(local_90);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823645a FUN_14823645a body=248 status=ok
// SIG undefined FUN_14823645a(void)

void FUN_14823645a(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    lVar1 = FUN_1405e2bf2();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_3;
      goto LAB_1482364ad;
    }
  }
  lVar2 = 0;
LAB_1482364ad:
  lVar1 = FUN_14101b6e6();
  if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14773c8d2(param_1 + -0x290,&local_38,param_4);
  }
  else {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14822cd28(param_1 + -0x290,&local_30,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148236558 FUN_148236558 body=144 status=ok
// SIG undefined FUN_148236558(void)

undefined8 * FUN_148236558(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1482365ec(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482365ec FUN_1482365ec body=784 status=ok
// SIG undefined FUN_1482365ec(void)

undefined8 * FUN_1482365ec(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477792e2(&local_48);
  local_44 = *(undefined1 *)(param_1 + 0xa93);
  local_48 = (uint)*(byte *)(param_1 + 0xa91);
  local_43 = *(undefined1 *)(param_1 + 0xa92);
  local_42 = *(undefined1 *)(param_1 + 0xa95);
  local_40 = param_1 + 0x380;
  local_38 = param_1 + 0x440;
  FUN_1482536c4(&local_58,param_1,param_1 + 0xa98,&local_48);
  plVar8 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *(undefined8 **)(param_1 + 0xb40) = local_58;
  plVar10 = *(longlong **)(param_1 + 0xb48);
  plVar9 = plVar10;
  if (plVar8 != plVar10) {
    *(longlong **)(param_1 + 0xb48) = plVar8;
    plVar9 = plVar8;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      local_58 = *(undefined8 **)(param_1 + 0xb40);
      plVar9 = *(longlong **)(param_1 + 0xb48);
    }
    plVar8 = (longlong *)0x0;
  }
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 **)(param_1 + 0xaa8) = local_58;
    plVar10 = *(longlong **)(param_1 + 0xab0);
    if (plVar10 == (longlong *)0x0) goto LAB_1482366f0;
    *(undefined8 *)(param_1 + 0xab0) = 0;
LAB_1482368ab:
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_1482366f0;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(undefined8 **)(param_1 + 0xaa8) = local_58;
    plVar10 = *(longlong **)(param_1 + 0xab0);
    if (plVar9 != plVar10) {
      *(longlong **)(param_1 + 0xab0) = plVar9;
      if (plVar10 == (longlong *)0x0) goto LAB_1482366f0;
      goto LAB_1482368ab;
    }
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_1482366f0;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar10 = plVar9;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_1482366f0:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  plVar8 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  lVar3 = *(longlong *)(param_1 + 0xb40);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar5 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a541520;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14a544200;
  local_58[3] = 0;
  FUN_14485c47a(local_58 + 3,param_1);
  puVar5[4] = FUN_14773bf14;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_147717206(lVar3 + 0x690,&local_58);
  FUN_1449db362(&local_58);
  uVar4 = *(undefined8 *)(param_1 + 0xb40);
  plVar8 = *(longlong **)(param_1 + 0xb48);
  if (plVar8 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar8;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482368fe FUN_1482368fe body=248 status=ok
// SIG undefined FUN_1482368fe(void)

void FUN_1482368fe(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    lVar1 = FUN_1405e2bf2();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_3;
      goto LAB_148236951;
    }
  }
  lVar2 = 0;
LAB_148236951:
  lVar1 = FUN_14101b6e6();
  if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14773c8d2(param_1 + -0x290,&local_38,param_4);
  }
  else {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14822cd28(param_1 + -0x290,&local_30,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482369fc FUN_1482369fc body=261 status=ok
// SIG undefined FUN_1482369fc(void)

void FUN_1482369fc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_148236b02(local_20,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148236b02 FUN_148236b02 body=246 status=ok
// SIG undefined FUN_148236b02(void)

longlong FUN_148236b02(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
LAB_148236be9:
    lVar1 = 0;
  }
  else {
    do {
      lVar1 = FUN_1477439ba(param_1);
      if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x20);
        if (lVar1 == 0) goto LAB_148236be9;
        lVar3 = FUN_1412864c6();
        if (((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) ||
           (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_148236be9;
        lVar3 = FUN_1405e2bf2();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_148236be9;
      }
      lVar3 = *param_2;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
LAB_148236b45:
        lVar2 = FUN_140de7a58();
        if ((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_148236b58;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30) {
          lVar3 = 0;
        }
      }
      else {
        if (lVar3 != 0) goto LAB_148236b45;
LAB_148236b58:
        lVar3 = 0;
      }
      param_1 = lVar1;
    } while ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30));
  }
  return lVar1;
}



// FUNCTION 148236bfc FUN_148236bfc body=86 status=ok
// SIG undefined FUN_148236bfc(void)

void FUN_148236bfc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (DAT_14c872a72 == '\0') {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 148236c52 FUN_148236c52 body=25 status=ok
// SIG undefined FUN_148236c52(void)

longlong FUN_148236c52(void)

{
  longlong lVar1;
  
  FUN_14050fd64();
  lVar1 = FUN_14050fd64();
  return lVar1 + 0x1e8;
}



// FUNCTION 148236c8e FUN_148236c8e body=38 status=ok
// SIG undefined FUN_148236c8e(void)

void FUN_148236c8e(longlong param_1)

{
  FUN_14025a0ce();
  if (*(char *)(param_1 + 0x28) != '\x01') {
    return;
  }
  FUN_1456eac3e(param_1);
  return;
}



// FUNCTION 148236cb4 FUN_148236cb4 body=335 status=ok
// SIG undefined FUN_148236cb4(void)

void FUN_148236cb4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [20];
  longlong *local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148236e04(local_d8,local_20,local_28);
  FUN_140f13d9e(param_3,local_d8);
  local_d8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148236e04 FUN_148236e04 body=67 status=ok
// SIG undefined FUN_148236e04(void)

undefined8 FUN_148236e04(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_141319416();
    FUN_140e361c2(param_1,uVar1);
  }
  else {
    uVar1 = FUN_140e94dc2(param_3);
    FUN_14821c512(param_1,uVar1,param_2);
  }
  return param_1;
}



// FUNCTION 148236e48 FUN_148236e48 body=475 status=ok
// SIG undefined FUN_148236e48(void)

void FUN_148236e48(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined **local_f8 [20];
  longlong *local_58;
  undefined8 local_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar4 = &local_44;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143aea146(local_f8,puVar3,local_39,puVar4);
  FUN_140f13d9e(param_3,local_f8);
  local_f8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148237044 FUN_148237044 body=100 status=ok
// SIG undefined FUN_148237044(void)

void FUN_148237044(undefined8 param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = FUN_140e94dc2(param_4);
    if (lVar1 != 0) {
      param_2 = param_2 ^ 1;
      FUN_148217bbe(lVar1,0,*param_3,param_2);
      FUN_148217bbe(lVar1,1,*param_3,param_2);
      FUN_148217bbe(lVar1,2,*param_3,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1482370a8 FUN_1482370a8 body=110 status=ok
// SIG undefined FUN_1482370a8(void)

ulonglong FUN_1482370a8(undefined8 param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 unaff_RSI;
  undefined7 uVar6;
  byte unaff_R14B;
  
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar5 = 1;
  if (param_2 != 0) {
    lVar4 = FUN_140e94dc2(param_2);
    if (lVar4 != 0) {
      bVar5 = 0;
      uVar6 = 0;
      cVar1 = FUN_148217bc8(lVar4,0);
      unaff_R14B = 1;
      bVar2 = FUN_148217bc8(lVar4,1);
      bVar3 = FUN_148217bc8(lVar4,2);
      if (cVar1 != '\0') {
        unaff_R14B = bVar2 & bVar3 ^ 1;
        bVar5 = 0;
        uVar6 = 0;
      }
    }
  }
  return CONCAT71(uVar6,bVar5 | unaff_R14B) & 0xffffff01;
}



// FUNCTION 148237134 FUN_148237134 body=251 status=ok
// SIG undefined FUN_148237134(void)

undefined8 * FUN_148237134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae5c520;
  FUN_144a5dc74(param_1 + 1);
  FUN_144a5dc74(param_1 + 3);
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_140ca8f8e(param_1 + 0xc);
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_140ca8f8e(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f000000;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_140ca8f8e(param_1 + 0x4e);
  *(undefined2 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0x3f000000;
  return param_1;
}



// FUNCTION 148237230 FUN_148237230 body=168 status=ok
// SIG undefined FUN_148237230(void)

ulonglong FUN_148237230(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((param_2 != '\0') && (param_2 != '\x02')) {
    if (param_2 == '\x01') {
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,1);
      local_30 = *puVar5;
      local_28 = puVar5[1];
      local_20 = (longlong *)puVar5[2];
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      uVar4 = FUN_1403e7f2a(&local_30);
      plVar3 = local_20;
      uVar6 = (ulonglong)uVar4;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_20)(local_20);
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
    else {
      uVar6 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482372da FUN_1482372da body=99 status=ok
// SIG undefined FUN_1482372da(void)

void FUN_1482372da(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14cb449b0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)DAT_14cb449b0 >> 8),*(undefined1 *)(param_2 + 0x91));
    local_10 = *(undefined8 *)(param_2 + 0x94);
  }
  (**(code **)(*param_1 + 0x20))(param_1,uVar1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823733e FUN_14823733e body=310 status=ok
// SIG undefined FUN_14823733e(void)

undefined8 FUN_14823733e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar8 = param_1[6];
  plVar7 = (longlong *)param_1[8];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  bVar10 = true;
  if (*param_2 != lVar8) {
    lVar8 = param_1[0x48];
    plVar3 = (longlong *)param_1[0x4a];
    if (plVar3 == (longlong *)0x0) {
      bVar10 = *param_2 == lVar8;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = *param_2 == lVar8;
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
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  uVar6 = 1;
  if (!bVar10) {
    plVar7 = (longlong *)FUN_148216474();
    if ((longlong)(int)plVar7[1] != 0) {
      lVar8 = *plVar7;
      lVar9 = (longlong)(int)plVar7[1] << 3;
      do {
        plVar7 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1,1,lVar8);
        lVar4 = *plVar7;
        plVar7 = (longlong *)plVar7[2];
        if (plVar7 == (longlong *)0x0) {
          lVar5 = *param_2;
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          lVar5 = *param_2;
          LOCK();
          plVar3 = plVar7 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        if (lVar5 == lVar4) {
          return 1;
        }
        lVar8 = lVar8 + 8;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 148237476 FUN_148237476 body=316 status=ok
// SIG undefined FUN_148237476(void)

ulonglong FUN_148237476(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined7 uVar6;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (*(char *)(param_1 + 0x129) == '\0') {
    plVar1 = (longlong *)(param_1 + 0x1f0);
    lVar2 = param_1 + 0x200;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0x218) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar7 = *(int *)(param_1 + 0x218);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar3 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar7) || (uStack_50 != lVar2)) {
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        if (*(char *)(*local_80 + 0x29 + (longlong)iVar4 * 0x100) != '\0') goto LAB_14823749c;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar3 = local_68;
      } while ((CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar7) ||
               local_80 != plVar1);
    }
    local_68 = uVar3;
    if (*(char *)(param_1 + 0x49) == '\0') {
      uVar5 = CONCAT71(uVar6,*(undefined1 *)(param_1 + 0x259));
    }
  }
LAB_14823749c:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1482375b4 FUN_1482375b4 body=279 status=ok
// SIG undefined FUN_1482375b4(void)

undefined8 FUN_1482375b4(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_28 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_148254076((longlong *)(param_1 + 0x10),uVar2 >> 0x10 ^ uVar2,&local_28);
  if ((iVar3 == -1) ||
     (lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x18,
     puVar4 = (undefined8 *)(lVar1 + 8), puVar4 == (undefined8 *)0x0 || lVar1 == 0)) {
    puVar4 = (undefined8 *)(param_1 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482376cc FUN_1482376cc body=110 status=ok
// SIG undefined FUN_1482376cc(void)

longlong * FUN_1482376cc(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_2 + 0x70) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x28), lVar3 != 0)) {
    uVar1 = FUN_145a7a974();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      *param_1 = lVar3;
      if (lVar3 == 0) {
        return param_1;
      }
      if (DAT_14c950c29 == '\0') {
        return param_1;
      }
      FUN_1456cec3c(lVar3);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14823773a FUN_14823773a body=138 status=ok
// SIG undefined FUN_14823773a(void)

void FUN_14823773a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    lVar1 = FUN_1400b6e86();
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 0x30) + 0xd0))(lVar1 + 0x30,&local_30,param_2);
      FUN_14611128a(param_3,&local_30);
      FUN_144a65a1e(local_30,local_28);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482377c6 FUN_1482377c6 body=172 status=ok
// SIG undefined FUN_1482377c6(void)

void FUN_1482377c6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    lVar1 = FUN_1400b6e86();
    if (lVar1 != 0) {
      local_78 = local_48 + 2;
      local_48[2] = 0;
      local_48[3] = 0;
      local_48[0] = 0;
      local_48[1] = 0;
      local_68 = *param_3;
      uStack_64 = param_3[1];
      uStack_60 = param_3[2];
      uStack_5c = param_3[3];
      local_58 = param_3[4];
      uStack_54 = param_3[5];
      uStack_50 = param_3[6];
      uStack_4c = param_3[7];
      (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x40))(lVar1 + 0x30,param_2,&local_68,local_48);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148237874 FUN_148237874 body=408 status=ok
// SIG undefined FUN_148237874(void)

undefined8 * FUN_148237874(undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  lVar2 = FUN_1400b6e86(param_2);
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x30) + 0xd0))(lVar2 + 0x30,&local_68,param_4);
    FUN_14611128a(&local_58,&local_68);
    FUN_144a65a1e(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)uStack_50 != 0) {
      lVar2 = (longlong)(int)uStack_50 * 0x18;
      puVar3 = local_58;
      do {
        cVar1 = FUN_1403e7f2a(puVar3);
        if ((cVar1 != '\0') &&
           (((cVar1 = FUN_140230860(puVar3), cVar1 == '\x01' && param_3 == '\x02' ||
             (cVar1 = FUN_140230656(puVar3), cVar1 == '\x01' && param_3 == '\x01')) ||
            ((cVar1 = FUN_140230860(puVar3), cVar1 == '\0' &&
             (cVar1 = FUN_140230656(puVar3), cVar1 == '\0' && param_3 == '\0')))))) {
          *param_1 = *puVar3;
          param_1[1] = puVar3[1];
          lVar2 = puVar3[2];
          param_1[2] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          goto LAB_1482378c0;
        }
        puVar3 = puVar3 + 3;
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1482378c0:
  FUN_144a65a1e(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148237a0e FUN_148237a0e body=363 status=ok
// SIG undefined FUN_148237a0e(void)

undefined8 FUN_148237a0e(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    uVar7 = 0;
    goto LAB_148237a6a;
  }
  local_58 = 0;
  uStack_50 = 0;
  lVar5 = FUN_1400b6e86();
  if (lVar5 == 0) {
    lVar5 = 0;
LAB_148237a4e:
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar5 + 0x30) + 0xd0))(lVar5 + 0x30,&local_68,param_3);
    FUN_14611128a(&local_58,&local_68);
    FUN_144a65a1e(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    lVar5 = local_58;
    if ((longlong)(int)uStack_50 == 0) goto LAB_148237a4e;
    lVar5 = (longlong)(int)uStack_50 * 0x18;
    lVar6 = local_58;
    do {
      cVar1 = FUN_1403e7f2a(lVar6);
      if (cVar1 != '\0') {
        uVar4 = FUN_140230860(lVar6);
        bVar2 = FUN_140230656(lVar6);
        cVar1 = FUN_140230860(lVar6);
        if (cVar1 == '\0') {
          bVar3 = FUN_140230656(lVar6);
          bVar3 = (bVar3 ^ 1) & param_2 == '\0';
        }
        else {
          bVar3 = 0;
        }
        uVar7 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
        if (((param_2 == '\x01' & bVar2) != 0 || (param_2 == '\x02' & (byte)uVar4) != 0) ||
           (bVar3 != 0)) goto LAB_148237b63;
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    uVar7 = 0;
LAB_148237b63:
    uVar8 = uStack_50 & 0xffffffff;
    lVar5 = local_58;
  }
  FUN_144a65a1e(lVar5,uVar8);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_148237a6a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148237b7e FUN_148237b7e body=103 status=ok
// SIG undefined FUN_148237b7e(void)

void FUN_148237b7e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145994eea();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148254146(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148237be8 FUN_148237be8 body=163 status=ok
// SIG undefined FUN_148237be8(void)

void FUN_148237be8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 != 0) {
    FUN_148238192(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148237c90 FUN_148237c90 body=154 status=ok
// SIG undefined FUN_148237c90(void)

void FUN_148237c90(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x2d1) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148237d2c FUN_148237d2c body=163 status=ok
// SIG undefined FUN_148237d2c(void)

void FUN_148237d2c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 != 0) {
    FUN_148238370(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148237de4 FUN_148237de4 body=88 status=ok
// SIG undefined FUN_148237de4(void)

undefined1 * FUN_148237de4(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14779e0a2(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148237e3c FUN_148237e3c body=88 status=ok
// SIG undefined FUN_148237e3c(void)

undefined1 * FUN_148237e3c(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14779e1be(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148237e94 FUN_148237e94 body=88 status=ok
// SIG undefined FUN_148237e94(void)

undefined1 * FUN_148237e94(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14779e33a(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148237eec FUN_148237eec body=88 status=ok
// SIG undefined FUN_148237eec(void)

undefined1 * FUN_148237eec(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14779e3c8(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148237f44 FUN_148237f44 body=88 status=ok
// SIG undefined FUN_148237f44(void)

undefined1 * FUN_148237f44(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14779e7ee(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148237f9c FUN_148237f9c body=88 status=ok
// SIG undefined FUN_148237f9c(void)

undefined1 * FUN_148237f9c(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14779e87c(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148237ff4 FUN_148237ff4 body=88 status=ok
// SIG undefined FUN_148237ff4(void)

undefined1 * FUN_148237ff4(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14779e90a(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 14823804c FUN_14823804c body=88 status=ok
// SIG undefined FUN_14823804c(void)

undefined1 * FUN_14823804c(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_14779e998(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1482380a4 FUN_1482380a4 body=37 status=ok
// SIG undefined FUN_1482380a4(void)

undefined8 FUN_1482380a4(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    uVar2 = FUN_1403f18c8(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1482380ca FUN_1482380ca body=200 status=ok
// SIG undefined FUN_1482380ca(void)

undefined8 * FUN_1482380ca(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[2] = param_2[2];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  plVar2 = (longlong *)param_2[6];
  param_1[6] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14009d848(param_1 + 8,param_2 + 8);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_140328a42(param_1 + 10,param_2 + 10);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_14009d848(param_1 + 0xc,param_2 + 0xc);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_14009d848(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 148238192 FUN_148238192 body=307 status=ok
// SIG undefined FUN_148238192(void)

void FUN_148238192(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_1[0x5e] != 0) {
    lVar5 = param_1[0x5d];
    lVar6 = (longlong)(int)param_1[0x5e] << 3;
    do {
      cVar4 = FUN_148254482(lVar5,param_2);
      if (cVar4 != '\0') goto LAB_148238280;
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  local_40 = 0;
  FUN_14485c47a(&local_40,param_2);
  iVar3 = (int)param_1[0x5e];
  *(uint *)(param_1 + 0x5e) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2f4) < iVar3 + 1U) {
    FUN_1482544fa(param_1 + 0x5d,iVar3);
  }
  *(longlong *)(param_1[0x5d] + (longlong)iVar3 * 8) = local_40;
  FUN_140760c2c(param_1,&local_40);
  lVar5 = local_40;
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
  if (lVar5 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar5 != 0) {
      lVar5 = FUN_1403f18c8(lVar5);
      if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_148238280:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482382dc FUN_1482382dc body=146 status=ok
// SIG undefined FUN_1482382dc(void)

void FUN_1482382dc(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148240662(param_1,&local_30,param_2);
  if (local_30 == 0) {
    lVar3 = FUN_1482407a0(param_1,param_2);
    *(undefined1 *)(lVar3 + 0x18) = 1;
  }
  else {
    FUN_14825e554(local_30,param_2);
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238370 FUN_148238370 body=214 status=ok
// SIG undefined FUN_148238370(void)

void FUN_148238370(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_40 = &local_30;
  iVar4 = FUN_148254580(param_1 + 0x5d);
  if (iVar4 != 0) {
    FUN_140760c2c(param_1,&local_40);
    puVar3 = local_40;
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
    if (puVar3 != (undefined8 *)0x0) {
      lVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
      if (lVar5 != 0) {
        lVar5 = FUN_1403f18c8(lVar5);
        if (lVar5 != 0) {
          FUN_148238448(lVar5,param_2);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238448 FUN_148238448 body=182 status=ok
// SIG undefined FUN_148238448(void)

void FUN_148238448(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148240662(param_1,&local_30,param_2);
  if (local_30 == 0) {
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
      lVar4 = (longlong)*(int *)(param_1 + 0x60) << 6;
      do {
        lVar3 = FUN_14479d2ce(lVar5);
        if (lVar3 == param_2) {
          if (lVar5 != 0) {
            *(undefined1 *)(lVar5 + 0x18) = 0;
          }
          break;
        }
        lVar5 = lVar5 + 0x40;
        lVar4 = lVar4 + -0x40;
      } while (lVar4 != 0);
    }
  }
  else {
    FUN_14825e5b0(local_30,param_2);
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148238500 FUN_148238500 body=250 status=ok
// SIG undefined FUN_148238500(void)

void FUN_148238500(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x58);
    lVar6 = (longlong)*(int *)(param_1 + 0x60) << 6;
    iVar4 = 0;
    do {
      lVar3 = FUN_14479d2ce(lVar5);
      if (lVar3 == param_2) {
        if (iVar4 != 1) {
          if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          FUN_1482419ee(param_1 + 0x58,-iVar4);
          return;
        }
        break;
      }
      lVar5 = lVar5 + 0x40;
      iVar4 = iVar4 + -1;
      lVar6 = lVar6 + -0x40;
    } while (lVar6 != 0);
  }
  FUN_143af70d2(*(undefined8 *)(param_1 + 0x98),param_2 + 0x2d8);
  FUN_148240662(param_1,&local_48,param_2);
  if (local_48 != 0) {
    FUN_143af70d2(local_48,param_2 + 0x2d8);
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 14823860a FUN_14823860a body=68 status=ok
// SIG undefined FUN_14823860a(void)

void FUN_14823860a(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14336dabe(*(undefined8 *)(param_1 + 0x178));
  FUN_1458cf7c2(*(undefined8 *)(param_1 + 400));
  FUN_1447f69b6(param_1 + 0x280);
  return;
}



// FUNCTION 14823864e FUN_14823864e body=46 status=ok
// SIG undefined FUN_14823864e(void)

void FUN_14823864e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14780da82(*(undefined8 *)(param_1 + 0x178));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14823867c FUN_14823867c body=110 status=ok
// SIG undefined FUN_14823867c(void)

void FUN_14823867c(longlong param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14780dd44(*(undefined8 *)(param_1 + 0x178),&local_20);
  *param_3 = (float)((double)local_20 / 10000000.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482386ec FUN_1482386ec body=110 status=ok
// SIG undefined FUN_1482386ec(void)

void FUN_1482386ec(longlong param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14780d4f2(*(undefined8 *)(param_1 + 0x178),&local_20);
  *param_3 = (float)((double)local_20 / 10000000.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238760 FUN_148238760 body=44 status=ok
// SIG undefined FUN_148238760(void)

void FUN_148238760(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14780e912(*(undefined8 *)(param_1 + 0x178));
  *param_3 = uVar1;
  return;
}



// FUNCTION 1482387ae FUN_1482387ae body=44 status=ok
// SIG undefined FUN_1482387ae(void)

void FUN_1482387ae(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14780e94e(*(undefined8 *)(param_1 + 0x178));
  *param_3 = uVar1;
  return;
}



// FUNCTION 1482387de FUN_1482387de body=44 status=ok
// SIG undefined FUN_1482387de(void)

void FUN_1482387de(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14780e98a(*(undefined8 *)(param_1 + 0x178));
  *param_3 = uVar1;
  return;
}



// FUNCTION 14823884a FUN_14823884a body=61 status=ok
// SIG undefined FUN_14823884a(void)

void FUN_14823884a(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14336e6d0(*(undefined8 *)(param_1 + 0x178));
  FUN_14336e9c4(*(undefined8 *)(param_1 + 0x178),0x3f800000);
  return;
}



// FUNCTION 1482388ac FUN_1482388ac body=202 status=ok
// SIG undefined FUN_1482388ac(void)

void FUN_1482388ac(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [36];
  float local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar1._0_8_ = (double)local_24 * 10000000.0 + 0.5;
  auVar1._8_8_ = 0;
  auVar1 = roundpd(auVar1,auVar1,1);
  local_20 = (longlong)auVar1._0_8_;
  FUN_14336e718(*(undefined8 *)(param_1 + 0x178));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823897c FUN_14823897c body=158 status=ok
// SIG undefined FUN_14823897c(void)

void FUN_14823897c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148238a1c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238a1c FUN_148238a1c body=75 status=ok
// SIG undefined FUN_148238a1c(void)

void FUN_148238a1c(longlong param_1,char param_2)

{
  char cVar1;
  
  *(char *)(param_1 + 0x298) = param_2;
  if (param_2 != '\0') {
    FUN_1458cf7c2(*(undefined8 *)(param_1 + 400));
    return;
  }
  cVar1 = FUN_14780e98a(*(undefined8 *)(param_1 + 0x178));
  if (cVar1 != '\0') {
    FUN_1477da574(*(undefined8 *)(param_1 + 400));
    return;
  }
  return;
}



// FUNCTION 148238a6c FUN_148238a6c body=162 status=ok
// SIG undefined FUN_148238a6c(void)

void FUN_148238a6c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14336d8d6(*(undefined8 *)(param_1 + 0x178),local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238b10 FUN_148238b10 body=160 status=ok
// SIG undefined FUN_148238b10(void)

void FUN_148238b10(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14336e9c4(*(undefined8 *)(param_1 + 0x178),local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238bb6 FUN_148238bb6 body=158 status=ok
// SIG undefined FUN_148238bb6(void)

void FUN_148238bb6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148238c56(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238c56 FUN_148238c56 body=164 status=ok
// SIG undefined FUN_148238c56(void)

void FUN_148238c56(longlong param_1,char param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x170) != param_2) &&
     (*(char *)(param_1 + 0x170) = param_2, param_2 != '\0')) {
    cVar1 = FUN_14780ea02(*(undefined8 *)(param_1 + 0x178));
    if (cVar1 != '\0') {
      FUN_14780e41a(*(undefined8 *)(param_1 + 0x178),&local_20,0xffffffff,0xffffffff);
      *(float *)(param_1 + 0x1c0) = (float)local_20;
      *(float *)(param_1 + 0x1c4) = (float)local_1c;
      if (*(longlong *)(param_1 + 0x2a0) != 0) {
        thunk_FUN_140163244();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238cfc FUN_148238cfc body=156 status=ok
// SIG undefined FUN_148238cfc(void)

void FUN_148238cfc(undefined8 param_1,longlong param_2)

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
  FUN_148238d9a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238d9a FUN_148238d9a body=90 status=ok
// SIG undefined FUN_148238d9a(void)

void FUN_148238d9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  FUN_147810652(lVar1);
  lVar1 = FUN_1478110dc(*(undefined8 *)(lVar1 + 0xe0),0);
  if (lVar1 != param_2) {
    FUN_14336dabe(*(undefined8 *)(param_1 + 0x178));
    FUN_14780ed4a(*(undefined8 *)(param_1 + 0x178),param_2);
    return;
  }
  return;
}



// FUNCTION 148238e00 FUN_148238e00 body=148 status=ok
// SIG undefined FUN_148238e00(void)

undefined8 FUN_148238e00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14117a870();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238e96 FUN_148238e96 body=254 status=ok
// SIG undefined FUN_148238e96(void)

undefined8
FUN_148238e96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a5981a0;
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
  *local_48 = &PTR_FUN_14ae6a620;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14603a25e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148238fa3 FUN_148238fa3 body=148 status=ok
// SIG undefined FUN_148238fa3(void)

undefined8 FUN_148238fa3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145869788();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148239038 FUN_148239038 body=148 status=ok
// SIG undefined FUN_148239038(void)

undefined8 FUN_148239038(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458d45e4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482390ce FUN_1482390ce body=404 status=ok
// SIG undefined FUN_1482390ce(void)

undefined8 * FUN_1482390ce(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_2d8 [32];
  undefined1 *local_2b8;
  undefined1 local_2a9;
  undefined8 local_2a8;
  longlong *local_2a0;
  longlong local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  longlong *local_268;
  undefined1 local_260 [424];
  longlong local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_140a53334(local_260);
  local_290 = param_1 + 0x1a0;
  local_288 = 1;
  local_280 = 0;
  uStack_278 = 0;
  local_b0 = 1;
  local_b8 = local_290;
  FUN_144a450dc(local_a8,&local_280);
  FUN_1449db362(&local_280);
  local_2b8 = &local_2a9;
  FUN_140a554b8(&local_2a8,"SImage",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonVideoPlayer.cpp",0xaa)
  ;
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2a0 + 1) = (int)local_2a0[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a0) = local_2a8;
  *(longlong **)(param_1 + 0x2a8) = local_2a0;
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
  FUN_140a52c70(&local_2a8,&local_270,local_260);
  *param_2 = local_270;
  param_2[1] = local_268;
  if (local_268 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_268 + 1) = (int)local_268[1] + 1;
    UNLOCK();
    if (local_268 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_268 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_268)(local_268);
        LOCK();
        piVar2 = (int *)((longlong)local_268 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_268 + 0x10))(local_268);
        }
      }
    }
  }
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar2 = (int *)((longlong)local_2a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2a0 + 0x10))(local_2a0);
      }
    }
  }
  FUN_140a55a86(local_260);
  if ((local_28 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148239264 FUN_148239264 body=33 status=ok
// SIG undefined FUN_148239264(void)

void FUN_148239264(longlong param_1)

{
  FUN_1412719b8();
  FUN_148238d9a(param_1,*(undefined8 *)(param_1 + 0x168));
  return;
}



// FUNCTION 148239286 FUN_148239286 body=80 status=ok
// SIG undefined FUN_148239286(void)

void FUN_148239286(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x2a8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2a8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001482392d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1482392d6 FUN_1482392d6 body=527 status=ok
// SIG undefined FUN_1482392d6(void)

void FUN_1482392d6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switch(param_2) {
  case 1:
    FUN_14336dabe(*(undefined8 *)(param_1 + 0x178));
    goto LAB_1482393aa;
  case 3:
  case 9:
    if (*(char *)(param_1 + 0x170) == '\x01') {
      FUN_14780e41a(*(undefined8 *)(param_1 + 0x178),&local_28,0xffffffff,0xffffffff);
      *(float *)(param_1 + 0x1c0) = (float)local_28;
      *(float *)(param_1 + 0x1c4) = (float)local_24;
      if (*(longlong *)(param_1 + 0x2a0) != 0) {
        thunk_FUN_140163244();
      }
    }
    break;
  case 5:
    cVar6 = FUN_14780e912(*(undefined8 *)(param_1 + 0x178));
    if (cVar6 != '\0') break;
LAB_1482393aa:
    FUN_1458cf7c2(*(undefined8 *)(param_1 + 400));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  case 6:
    if (*(char *)(param_1 + 0x298) == '\0') {
      FUN_1477da574(*(undefined8 *)(param_1 + 400));
    }
    lVar3 = *(longlong *)(param_1 + 0x2a0);
    if (lVar3 != 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar4 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_149ed0600;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_48[2] = lVar7;
      *local_48 = &PTR_FUN_14ae6a690;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,param_1);
      puVar4[4] = FUN_148239504;
      *(undefined4 *)(puVar4 + 5) = 0;
      FUN_14697ef1e(lVar3,local_38,0,&local_48);
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
    }
    break;
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148239504 FUN_148239504 body=36 status=ok
// SIG undefined FUN_148239504(void)

void FUN_148239504(longlong *param_1)

{
  (**(code **)(*param_1 + 0x308))();
  FUN_14780e98a(param_1[0x2f]);
  return;
}



// FUNCTION 1482395fe FUN_1482395fe body=26 status=ok
// SIG undefined FUN_1482395fe(void)

void FUN_1482395fe(undefined8 param_1)

{
  FUN_1433350e2();
  FUN_148239618(param_1);
  return;
}



// FUNCTION 148239618 FUN_148239618 body=140 status=ok
// SIG undefined FUN_148239618(void)

void FUN_148239618(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = param_1[0x2e];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = param_1[0x2d];
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar5 = FUN_145b702e4();
        iVar1 = *(int *)(lVar5 + 0x38);
        if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
            == lVar5 + 0x30)) {
          FUN_1482396a4(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001482396a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1,*(undefined4 *)((longlong)param_1 + 0x194),0);
  return;
}



// FUNCTION 1482396a4 FUN_1482396a4 body=104 status=ok
// SIG undefined FUN_1482396a4(void)

void FUN_1482396a4(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    FUN_14773a13a(&local_31);
    local_30 = local_31;
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*plVar1 + 0x1c0))(plVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823971a FUN_14823971a body=229 status=ok
// SIG undefined FUN_14823971a(void)

void FUN_14823971a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && *(longlong *)(param_1 + 0x180) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x58);
    plVar4 = *(longlong **)(param_2 + 0x60);
    if (plVar4 == (longlong *)0x0) {
      if (lVar3 != 0) {
        local_18 = (longlong *)0x0;
        local_20 = lVar3;
        FUN_145901a74(*(longlong *)(param_1 + 0x180));
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar3 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x180);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_20 = lVar3;
        local_18 = plVar4;
        FUN_145901a74(uVar5);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148239804 FUN_148239804 body=775 status=ok
// SIG undefined FUN_148239804(void)

void FUN_148239804(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  undefined1 local_411;
  undefined8 local_410;
  longlong *local_408;
  undefined8 local_3f8;
  longlong *local_3f0;
  undefined8 local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  longlong *local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined1 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 local_390 [472];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_e8 [3];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_140763f46(*param_2,local_e8,0xffffffff);
  *(undefined8 *)(param_1 + 0x38) = local_e8[0];
  FUN_147743128(param_1,&local_3c8);
  local_3b8 = local_3c8;
  uStack_3b4 = uStack_3c4;
  uStack_3b0 = uStack_3c0;
  uStack_3ac = uStack_3bc;
  local_3a8 = 1;
  local_3a0 = 0;
  uStack_398 = 0;
  local_c0 = 1;
  local_d0 = local_3c8;
  uStack_cc = uStack_3c4;
  uStack_c8 = uStack_3c0;
  uStack_c4 = uStack_3bc;
  FUN_144a450dc(local_b8,&local_3a0);
  FUN_1449db362(&local_3a0);
  local_a8 = FUN_14774317a(param_1);
  local_a4 = 1;
  local_a0 = FUN_1477431a6(param_1);
  local_9c = 1;
  FUN_140a53a96(local_390);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_3f8 = DAT_14c98dec8;
    local_3f0 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    FUN_143333872(*(longlong *)(param_1 + 0x30),&local_3f8);
  }
  plVar3 = local_1b0;
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3f0 + 1) = (int)local_3f0[1] + 1;
    UNLOCK();
  }
  local_1b8 = local_3f8;
  local_1b0 = local_3f0;
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
  local_428 = &local_411;
  FUN_140a53d66(&local_410,&DAT_149efe19f,
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonVisibilitySwitcherSlot.cpp"
                ,0x19);
  if (local_408 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_408 + 1) = (int)local_408[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = local_410;
  *(longlong **)(param_1 + 0x60) = local_408;
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
  FUN_140a50bf4(&local_410,&local_3e8,local_390);
  local_3d8 = local_3e8;
  local_3d0 = local_3e0;
  if (local_3e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
    UNLOCK();
  }
  FUN_140a4fd40(local_e8,&local_3d8);
  plVar3 = local_3d0;
  if (local_3d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3d0)(local_3d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_3e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3e0)(local_3e0);
      LOCK();
      piVar2 = (int *)((longlong)local_3e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3e0 + 0x10))(local_3e0);
      }
    }
  }
  if (local_408 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_408 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_408)(local_408);
      LOCK();
      piVar2 = (int *)((longlong)local_408 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_408 + 0x10))(local_408);
      }
    }
  }
  plVar3 = local_3f0;
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140a5660c(local_390);
  FUN_1407640b6(local_e8);
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
  if ((local_30 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148239b0c FUN_148239b0c body=45 status=ok
// SIG undefined FUN_148239b0c(void)

void FUN_148239b0c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146027692();
  FUN_1406fa324(param_3,uVar1);
  return;
}



// FUNCTION 148239b54 FUN_148239b54 body=34 status=ok
// SIG undefined FUN_148239b54(void)

void FUN_148239b54(undefined8 param_1)

{
  FUN_1433350e2();
  FUN_143aeb624(param_1);
  FUN_148239b76(param_1);
  return;
}



// FUNCTION 148239b76 FUN_148239b76 body=139 status=ok
// SIG undefined FUN_148239b76(void)

void FUN_148239b76(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    lVar1 = FUN_140e94dc2(lVar1);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x30,param_1);
      local_30 = &LAB_148239d02;
      local_28 = 0;
      FUN_148239c02(lVar1 + 0x30,local_20,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148239c02 FUN_148239c02 body=254 status=ok
// SIG undefined FUN_148239c02(void)

undefined8
FUN_148239c02(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ae6bc70;
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
  *local_48 = &PTR_FUN_14ae6a700;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bd49c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148239d14 FUN_148239d14 body=94 status=ok
// SIG undefined FUN_148239d14(void)

void FUN_148239d14(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x1b8) = *param_2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x1b8);
    uStack_14 = *(undefined4 *)(param_1 + 0x1bc);
    uStack_10 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_c = *(undefined4 *)(param_1 + 0x1c4);
    FUN_148260a76(*(longlong *)(param_1 + 0x1c8));
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148239d78 FUN_148239d78 body=709 status=ok
// SIG undefined FUN_148239d78(void)

undefined8 * FUN_148239d78(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_348 [40];
  undefined8 local_320;
  longlong local_318;
  undefined1 local_309;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined1 local_2e0 [680];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_140a53a96(local_2e0);
  FUN_148254f80(local_308,&local_309);
  FUN_14823a03e(local_308,&local_2f0,local_2e0);
  plVar3 = local_2e8;
  if (local_2e8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1c8) = local_2f0;
    plVar7 = *(longlong **)(param_1 + 0x1d0);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1d0) = 0;
LAB_148239e38:
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x000148239e65:
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1c8) = local_2f0;
    plVar7 = *(longlong **)(param_1 + 0x1d0);
    if (local_2e8 == plVar7) {
      LOCK();
      plVar7 = local_2e8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_2e8)(local_2e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar7 = plVar3;
        goto joined_r0x000148239e65;
      }
    }
    else {
      *(longlong **)(param_1 + 0x1d0) = local_2e8;
      if (plVar7 != (longlong *)0x0) goto LAB_148239e38;
    }
  }
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2e8)(local_2e8);
      LOCK();
      piVar1 = (int *)((longlong)local_2e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2e8 + 0x10))(local_2e8);
      }
    }
  }
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_300 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)local_300 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_300 + 0x10))(local_300);
      }
    }
  }
  FUN_140a5660c(local_2e0);
  uVar2 = *(undefined8 *)(param_1 + 0x1c8);
  plVar3 = *(longlong **)(param_1 + 0x1d0);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = uVar2;
    plVar7 = *(longlong **)(param_1 + 0x188);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x188) = 0;
LAB_148239f2e:
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x000148239f5b:
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x180) = uVar2;
    plVar7 = *(longlong **)(param_1 + 0x188);
    if (plVar3 == plVar7) {
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar7 = plVar3;
        goto joined_r0x000148239f5b;
      }
    }
    else {
      *(longlong **)(param_1 + 0x188) = plVar3;
      if (plVar7 != (longlong *)0x0) goto LAB_148239f2e;
    }
  }
  iVar4 = FUN_143334560(param_1);
  if (iVar4 < 1) goto LAB_148239fcb;
  lVar5 = FUN_1433335b4(param_1);
  if (lVar5 == 0) {
LAB_148239fa2:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_145958512();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_148239fa2;
  }
  local_320 = *(undefined8 *)(param_1 + 0x180);
  local_318 = *(longlong *)(param_1 + 0x188);
  if (local_318 != 0) {
    LOCK();
    *(int *)(local_318 + 8) = *(int *)(local_318 + 8) + 1;
    UNLOCK();
  }
  FUN_145e28d22(lVar5,&local_320);
LAB_148239fcb:
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = uVar2;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = uVar2;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823a03e FUN_14823a03e body=115 status=ok
// SIG undefined FUN_14823a03e(void)

longlong * FUN_14823a03e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  thunk_FUN_140a58268(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14823a0b2 FUN_14823a0b2 body=88 status=ok
// SIG undefined FUN_14823a0b2(void)

void FUN_14823a0b2(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d09926();
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x1b8);
    uStack_24 = *(undefined4 *)(param_1 + 0x1bc);
    uStack_20 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_1c = *(undefined4 *)(param_1 + 0x1c4);
    FUN_148260a76();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823a10c FUN_14823a10c body=156 status=ok
// SIG undefined FUN_14823a10c(void)

void FUN_14823a10c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14823a1aa(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823a1aa FUN_14823a1aa body=380 status=ok
// SIG undefined FUN_14823a1aa(void)

void FUN_14823a1aa(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d5aefe();
  uVar5 = FUN_1401cb356();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14ae6a9d0;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_1);
  puVar3[4] = FUN_143aeb784;
  *(undefined4 *)(puVar3 + 5) = 0;
  local_58 = param_2;
  FUN_1405f67fc(uVar5,&local_40,&local_50,L"UCommonWidgetCarousel_AutoScrollCallback");
  if ((undefined8 *)(param_1 + 0x198) != &local_40) {
    *(undefined8 *)(param_1 + 0x198) = local_40;
    local_40 = 0;
    plVar2 = *(longlong **)(param_1 + 0x1a0);
    *(longlong **)(param_1 + 0x1a0) = local_38;
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823a3aa FUN_14823a3aa body=187 status=ok
// SIG undefined FUN_14823a3aa(void)

void FUN_14823a3aa(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x170) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)local_24 * 8) + 0x30);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823a4c2 FUN_14823a4c2 body=160 status=ok
// SIG undefined FUN_14823a4c2(void)

void FUN_14823a4c2(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x328))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823a564 FUN_14823a564 body=158 status=ok
// SIG undefined FUN_14823a564(void)

void FUN_14823a564(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 800))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823a604 FUN_14823a604 body=156 status=ok
// SIG undefined FUN_14823a604(void)

void FUN_14823a604(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14823a6a2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823a6a2 FUN_14823a6a2 body=114 status=ok
// SIG undefined FUN_14823a6a2(void)

void FUN_14823a6a2(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(float *)(param_1 + 0x184) = param_2;
  if (((((NAN(param_2)) && (lVar1 = *(longlong *)(param_1 + 0x1a8), lVar1 != 0)) &&
       (lVar2 = *(longlong *)(lVar1 + 0x278), *(char *)(lVar2 + 0x34) == '\0')) &&
      ((*(char *)(lVar2 + 0x36) == '\0' && (*(char *)(*(longlong *)(lVar1 + 0x268) + 0x34) == '\0'))
      )) && ((*(char *)(*(longlong *)(lVar1 + 0x268) + 0x36) == '\0' &&
             ((*(char *)(*(longlong *)(lVar1 + 0x288) + 0x34) == '\0' &&
              (*(char *)(*(longlong *)(lVar1 + 0x288) + 0x36) == '\0')))))) {
    *(float *)(lVar2 + 0x38) = param_2;
    *(float *)(*(longlong *)(lVar1 + 0x288) + 0x38) = param_2;
    *(float *)(*(longlong *)(lVar1 + 0x268) + 0x38) = param_2;
  }
  return;
}



// FUNCTION 14823a74a FUN_14823a74a body=74 status=ok
// SIG undefined FUN_14823a74a(void)

void FUN_14823a74a(longlong param_1)

{
  if ((((*(char *)(*(longlong *)(param_1 + 0x278) + 0x34) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x278) + 0x36) == '\0')) &&
      (*(char *)(*(longlong *)(param_1 + 0x268) + 0x34) == '\0')) &&
     (((*(char *)(*(longlong *)(param_1 + 0x268) + 0x36) == '\0' &&
       (*(char *)(*(longlong *)(param_1 + 0x288) + 0x34) == '\0')) &&
      (*(char *)(*(longlong *)(param_1 + 0x288) + 0x36) == '\0')))) {
    FUN_1482554d4(param_1,1,0xffffffff);
    return;
  }
  return;
}



// FUNCTION 14823a90e FUN_14823a90e body=531 status=ok
// SIG undefined FUN_14823a90e(void)

void FUN_14823a90e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 0x298);
  uVar1 = *(uint *)(plVar2 + 1);
  if (0 < (int)uVar1) {
    uVar8 = *(uint *)(param_1 + 0x2d0);
    if ((int)uVar1 <= (int)uVar8) {
      uVar8 = uVar8 % uVar1;
      *(uint *)(param_1 + 0x2d0) = uVar8;
    }
    if ((int)uVar8 < 1) {
      uVar8 = 1;
      if (1 < (int)*(uint *)(plVar2 + 1)) {
        uVar8 = *(uint *)(plVar2 + 1);
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x268);
    plVar7 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x2a8) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x2a0);
    }
    (**(code **)(*plVar6 + 0x58))
              (plVar6,local_68,*(undefined8 *)(*plVar2 + -8 + (ulonglong)uVar8 * 8));
    FUN_148255bf6(uVar3,local_68);
    iVar5 = *(int *)(param_1 + 0x2d0) + 1;
    uVar3 = *(undefined8 *)(param_1 + 0x288);
    if (*(int *)(*(longlong *)(param_1 + 0x298) + 8) <= iVar5) {
      iVar5 = 0;
    }
    if (*(int *)(param_1 + 0x2a8) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x2a0);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,local_78,*(undefined8 *)(*plVar2 + (longlong)iVar5 * 8));
    FUN_148255bf6(uVar3,local_78);
    uVar3 = *(undefined8 *)(param_1 + 0x278);
    if (*(int *)(param_1 + 0x2a8) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x2a0);
    }
    (**(code **)(*plVar7 + 0x58))
              (plVar7,local_88,*(undefined8 *)(*plVar2 + (longlong)*(int *)(param_1 + 0x2d0) * 8));
    FUN_148255bf6(uVar3,local_88);
    local_58 = DAT_14c96b1e1;
    if ((int)plVar2[1] == 1) {
      lVar4 = *(longlong *)(param_1 + 0x268);
      *(undefined1 *)(lVar4 + 200) = DAT_14c96b1e1;
      local_57 = 1;
      local_50 = 0;
      uStack_48 = 0;
      FUN_14020e622(*(undefined8 *)(lVar4 + 0x48),&local_58);
      lVar4 = *(longlong *)(param_1 + 0x288);
      local_58 = DAT_14c96b1e1;
      goto LAB_14823aaca;
    }
  }
  local_58 = DAT_14c96b238;
  lVar4 = *(longlong *)(param_1 + 0x268);
  *(undefined1 *)(lVar4 + 200) = DAT_14c96b238;
  local_57 = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_14020e622(*(undefined8 *)(lVar4 + 0x48),&local_58);
  lVar4 = *(longlong *)(param_1 + 0x288);
  local_58 = DAT_14c96b238;
LAB_14823aaca:
  *(undefined1 *)(lVar4 + 200) = local_58;
  local_57 = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_14020e622(*(undefined8 *)(lVar4 + 0x48),&local_58);
  FUN_148255df0(param_1);
  FUN_148255f28(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823ab22 FUN_14823ab22 body=1038 status=ok
// SIG undefined FUN_14823ab22(void)

undefined8 * FUN_14823ab22(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_388 [40];
  undefined8 *local_360;
  undefined8 *local_358;
  undefined1 local_349;
  code *local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 local_330;
  undefined1 local_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined1 local_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_b8 [64];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_358 = param_2;
  FUN_14823af32(local_2c0);
  local_f8 = param_1 + 0x168;
  local_2e8 = 0;
  local_2e4 = 1;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_78 = 0;
  local_74 = 1;
  FUN_144a450dc(local_70,&local_2e0);
  FUN_1449db362(&local_2e0);
  local_300 = 0xbf800000;
  local_2fc = 1;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_d8 = 0xbf800000;
  local_d4 = 1;
  FUN_144a450dc(local_d0,&local_2f8);
  FUN_1449db362(&local_2f8);
  local_318 = 0x3f800000;
  local_314 = 1;
  local_310 = 0;
  uStack_308 = 0;
  local_c0 = 0x3f800000;
  local_bc = 1;
  FUN_144a450dc(local_b8,&local_310);
  FUN_1449db362(&local_310);
  local_330 = *(undefined4 *)(param_1 + 0x184);
  local_32c = 1;
  local_328 = 0;
  uStack_320 = 0;
  local_ec = 1;
  local_f0 = local_330;
  FUN_144a450dc(local_e8,&local_328);
  FUN_1449db362(&local_328);
  local_348 = FUN_14823b0f0;
  local_340 = 0;
  FUN_14823affa(local_2c0,param_1,&local_348);
  local_348 = FUN_14823b228;
  local_340 = 0;
  FUN_14823b132(local_2c0,param_1,&local_348);
  FUN_148256f46(&local_348,&local_349);
  FUN_14823b272(&local_348,&local_2d0,local_2c0);
  plVar6 = local_2c8;
  if (local_2c8 == (longlong *)0x0) {
    local_360 = (undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1a8) = local_2d0;
    plVar8 = *(longlong **)(param_1 + 0x1b0);
    if (plVar8 == (longlong *)0x0) goto LAB_14823ad0e;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
LAB_14823aef8:
    local_360 = (undefined8 *)(param_1 + 0x1a8);
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14823ad0e;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
    UNLOCK();
    local_360 = (undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1a8) = local_2d0;
    plVar8 = *(longlong **)(param_1 + 0x1b0);
    if (local_2c8 != plVar8) {
      *(longlong **)(param_1 + 0x1b0) = local_2c8;
      if (plVar8 == (longlong *)0x0) goto LAB_14823ad0e;
      goto LAB_14823aef8;
    }
    LOCK();
    plVar8 = local_2c8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14823ad0e;
    (**(code **)*local_2c8)(local_2c8);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14823ad0e:
  if (local_2c8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2c8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_2c8)(local_2c8);
      LOCK();
      piVar1 = (int *)((longlong)local_2c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2c8 + 0x10))(local_2c8);
      }
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_33c,local_340);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_14823b2e6(local_2c0);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      *(longlong *)(lVar4 + 0x28) = param_1;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 != 0) {
        FUN_143333872(lVar4,local_2c0);
        FUN_148258576(param_1 + 0x1b8,local_2c0);
        plVar6 = local_2b8;
        if (local_2b8 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_2b8 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_2b8)(local_2b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  puVar7 = local_358;
  uVar5 = *local_360;
  plVar6 = *(longlong **)(param_1 + 0x1b0);
  if (plVar6 == (longlong *)0x0) {
    *local_358 = uVar5;
    local_358[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *local_358 = uVar5;
    local_358[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823af32 FUN_14823af32 body=199 status=ok
// SIG undefined FUN_14823af32(void)

longlong FUN_14823af32(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1d4) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x204) = 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0xbd4ccccd;
  *(undefined1 *)(param_1 + 0x21c) = 1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0x3d4ccccd;
  *(undefined1 *)(param_1 + 0x234) = 1;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x24c) = 1;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  return param_1;
}



// FUNCTION 14823affa FUN_14823affa body=245 status=ok
// SIG undefined FUN_14823affa(void)

longlong FUN_14823affa(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14ae6ae20;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ae6adb0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1a8,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823b0f0 FUN_14823b0f0 body=66 status=ok
// SIG undefined FUN_14823b0f0(void)

undefined8 * FUN_14823b0f0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_3 + 0x30) == 0) {
    *param_2 = DAT_14c98dec8;
    lVar2 = DAT_14c98ded0;
    param_2[1] = DAT_14c98ded0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    FUN_143333872(*(longlong *)(param_3 + 0x30),param_2);
  }
  return param_2;
}



// FUNCTION 14823b132 FUN_14823b132 body=245 status=ok
// SIG undefined FUN_14823b132(void)

longlong FUN_14823b132(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e35290;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ae6ae90;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1b8,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823b228 FUN_14823b228 body=72 status=ok
// SIG undefined FUN_14823b228(void)

void FUN_14823b228(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  local_10 = param_2;
  FUN_1447cd2ec(param_1 + 0x188,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823b272 FUN_14823b272 body=115 status=ok
// SIG undefined FUN_14823b272(void)

longlong * FUN_14823b272(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_148257876(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14823b2e6 FUN_14823b2e6 body=117 status=ok
// SIG undefined FUN_14823b2e6(void)

void FUN_14823b2e6(longlong param_1)

{
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x238);
  FUN_1449db362(param_1 + 0x220);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_1449db362(param_1 + 0x1a8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14823b35c FUN_14823b35c body=40 status=ok
// SIG undefined FUN_14823b35c(void)

void FUN_14823b35c(longlong *param_1)

{
  FUN_1412719b8();
                    /* WARNING: Could not recover jumptable at 0x00014823b381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1,(int)param_1[0x30]);
  return;
}



// FUNCTION 14823b384 FUN_14823b384 body=300 status=ok
// SIG undefined FUN_14823b384(void)

void FUN_14823b384(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar2 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    piVar3 = (int *)(*(longlong *)(lVar1 + 0x1a8) + 0x2d0);
    if (*(longlong *)(lVar1 + 0x1a8) == 0) {
      piVar3 = (int *)(lVar1 + 0x180);
    }
    if (*piVar3 != local_24) {
      FUN_145d5aefe();
      (**(code **)(**(longlong **)(param_1 + 400) + 800))(*(longlong **)(param_1 + 400),iVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823b4b2 FUN_14823b4b2 body=253 status=ok
// SIG undefined FUN_14823b4b2(void)

void FUN_14823b4b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0x198);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x158) != local_24)) {
    FUN_14823bb12(lVar1,local_24,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823b5b0 FUN_14823b5b0 body=156 status=ok
// SIG undefined FUN_14823b5b0(void)

void FUN_14823b5b0(undefined8 param_1,longlong param_2)

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
  FUN_14823b64e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823b64e FUN_14823b64e body=213 status=ok
// SIG undefined FUN_14823b64e(void)

void FUN_14823b64e(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1401073f6(*(longlong *)(param_1 + 400) + 0x188,param_1);
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 400) = param_2;
    if (param_2 == 0) goto LAB_14823b6ed;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 400) = param_2;
  }
  FUN_14823b778(&local_40);
  local_38 = 0;
  FUN_14485c47a(&local_38,param_1);
  local_30 = local_40;
  FUN_14113f0c0(&local_38);
  FUN_14053c012(param_2 + 0x188,&local_38);
LAB_14823b6ed:
  FUN_14823b830(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14823b728 FUN_14823b728 body=80 status=ok
// SIG undefined FUN_14823b728(void)

void FUN_14823b728(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x180) = 0;
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014823b774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14823b778 FUN_14823b778 body=183 status=ok
// SIG undefined FUN_14823b778(void)

undefined8 * FUN_14823b778(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46318) {
    FUN_144b3d300(&DAT_14cb46318);
    if (DAT_14cb46318 == -1) {
      builtin_wcsncpy(local_38,L"HandlePageChanged",0x12);
      FUN_1446f470e(&DAT_14cb46310,local_38,1);
      _Init_thread_footer(&DAT_14cb46318);
    }
  }
  *param_1 = DAT_14cb46310;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823b830 FUN_14823b830 body=737 status=ok
// SIG undefined FUN_14823b830(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14823b830(longlong *param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150 [8];
  longlong *local_148;
  longlong local_140 [5];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108;
  undefined1 local_100 [160];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  (**(code **)(*(longlong *)param_1[0x33] + 0x2b8))();
  FUN_1401073f6(param_1[0x33] + 0x28,param_1);
  if ((param_1[0x30] != 0) && (param_1[0x32] != 0)) {
    FUN_146977a00();
    iVar6 = FUN_143334560(param_1[0x32]);
    if (0 < iVar6) {
      local_188 = param_1 + 0x2e;
      do {
        local_140[0] = param_1[0x2d];
        if ((local_140[0] != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
        lVar8 = FUN_143335f3f(uVar7,local_140,0);
        if (lVar8 != 0) {
          lVar9 = FUN_14101b6e6();
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar8);
            }
            iVar4 = (int)param_1[0x35];
            *(uint *)(param_1 + 0x35) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0x1ac) < iVar4 + 1U) {
              FUN_1482585f6(param_1 + 0x34,iVar4);
            }
            *(longlong *)(param_1[0x34] + (longlong)iVar4 * 8) = lVar8;
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar8);
            }
            FUN_148234004(param_1[0x33],lVar8);
            FUN_143333872(lVar8,local_150);
            FUN_146a24608(param_1[0x30],local_140 + 1);
            lVar8 = *local_188;
            lVar9 = local_188[1];
            local_168 = 1;
            local_160 = 0;
            uStack_158 = 0;
            local_108 = 1;
            local_178._0_4_ = (undefined4)lVar8;
            local_178._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
            uStack_170._0_4_ = (undefined4)lVar9;
            uStack_170._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
            local_118 = (undefined4)local_178;
            uStack_114 = local_178._4_4_;
            uStack_110 = (undefined4)uStack_170;
            uStack_10c = uStack_170._4_4_;
            local_178 = lVar8;
            uStack_170 = lVar9;
            FUN_144a450dc(local_100,&local_160);
            FUN_1449db362(&local_160);
            FUN_146a07044(local_140 + 2,local_150);
            FUN_146a071ac(local_140 + 1);
            plVar5 = local_148;
            if (local_148 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_148 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_148)(local_148);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      lVar8 = *(longlong *)(param_1[0x32] + 0x1a8);
      puVar1 = (undefined4 *)(lVar8 + 0x2d0);
      puVar10 = (undefined4 *)(param_1[0x32] + 0x180);
      if (lVar8 != 0) {
        puVar10 = puVar1;
      }
      FUN_14823bb12(param_1[0x33],*puVar10,CONCAT71((int7)((ulonglong)puVar1 >> 8),1));
      lVar8 = param_1[0x33];
      FUN_148225de4(&local_180);
      plVar5 = local_140 + 1;
      local_140[1] = 0;
      FUN_14485c47a(plVar5,param_1);
      local_140[2] = local_180;
      FUN_14113f0c0(plVar5);
      FUN_14053c012(lVar8 + 0x78,plVar5);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823bb12 FUN_14823bb12 body=142 status=ok
// SIG undefined FUN_14823bb12(void)

void FUN_14823bb12(longlong param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x150))) {
    if (*(uint *)(param_1 + 0x158) != param_2) {
      lVar2 = FUN_14479d2ce((ulonglong)param_2 * 8 + *(longlong *)(param_1 + 0x148));
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x3b9) & 1) == 0)) {
        cVar1 = FUN_14775b22e(lVar2);
        if (cVar1 != '\0') {
          *(uint *)(param_1 + 0x158) = param_2;
          FUN_1482232ec(lVar2,1,param_3,1);
          return;
        }
      }
    }
    return;
  }
  FUN_148234f6a(param_1);
  return;
}



// FUNCTION 14823bba0 FUN_14823bba0 body=589 status=ok
// SIG undefined FUN_14823bba0(void)

undefined8 * FUN_14823bba0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 local_211;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [440];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar4 = FUN_1409ffe1d();
  lVar5 = FUN_148234be1(uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  *(longlong *)(param_1 + 0x198) = lVar5;
  if (((*(char *)(lVar5 + 0x140) == '\0') &&
      (*(undefined1 *)(lVar5 + 0x140) = 1, 0 < *(int *)(lVar5 + 0x150))) &&
     (*(int *)(lVar5 + 0x158) < 0)) {
    FUN_14823bb12(lVar5,0,1);
  }
  FUN_140a5296a(local_1e8);
  local_228 = &local_211;
  FUN_140a541dc(local_210,"SHorizontalBox",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonWidgetCarouselNavBar.cpp"
                ,0x51);
  FUN_140a50ec6(local_210,&local_1f8,local_1e8);
  plVar3 = local_1f0;
  if (local_1f0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = local_1f8;
    plVar6 = *(longlong **)(param_1 + 0x188);
    if (plVar6 == (longlong *)0x0) goto LAB_14823bd19;
    *(undefined8 *)(param_1 + 0x188) = 0;
LAB_14823bce1:
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14823bd19;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x180) = local_1f8;
    plVar6 = *(longlong **)(param_1 + 0x188);
    if (local_1f0 != plVar6) {
      *(longlong **)(param_1 + 0x188) = local_1f0;
      if (plVar6 == (longlong *)0x0) goto LAB_14823bd19;
      goto LAB_14823bce1;
    }
    LOCK();
    plVar6 = local_1f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14823bd19;
    (**(code **)*local_1f0)(local_1f0);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14823bd19:
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)local_1f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_208 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)local_208 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  FUN_145ab33da(local_1e8);
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823be04 FUN_14823be04 body=224 status=ok
// SIG undefined FUN_14823be04(void)

void FUN_14823be04(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  lVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar3 = -1;
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x148);
    lVar6 = (longlong)*(int *)(param_1 + 0x150) << 3;
    iVar4 = 0;
    do {
      lVar2 = FUN_14479d2ce(lVar5);
      iVar3 = iVar4;
      if (lVar2 == lVar1) break;
      lVar5 = lVar5 + 8;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -8;
      iVar3 = -1;
    } while (lVar6 != 0);
  }
  *param_3 = iVar3;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14823bee6 FUN_14823bee6 body=188 status=ok
// SIG undefined FUN_14823bee6(void)

void FUN_14823bee6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x150) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14479d2ce((longlong)local_24 * 8 + *(longlong *)(param_1 + 0x148));
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823bfd8 FUN_14823bfd8 body=76 status=ok
// SIG undefined FUN_14823bfd8(void)

void FUN_14823bfd8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x158);
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x150) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14479d2ce((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x148));
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 14823c05e FUN_14823c05e body=160 status=ok
// SIG undefined FUN_14823c05e(void)

void FUN_14823c05e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2d8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c100 FUN_14823c100 body=160 status=ok
// SIG undefined FUN_14823c100(void)

void FUN_14823c100(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2e0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c1a2 FUN_14823c1a2 body=160 status=ok
// SIG undefined FUN_14823c1a2(void)

void FUN_14823c1a2(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c244 FUN_14823c244 body=160 status=ok
// SIG undefined FUN_14823c244(void)

void FUN_14823c244(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2d0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c2e6 FUN_14823c2e6 body=160 status=ok
// SIG undefined FUN_14823c2e6(void)

void FUN_14823c2e6(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2e8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c388 FUN_14823c388 body=160 status=ok
// SIG undefined FUN_14823c388(void)

void FUN_14823c388(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2f0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c430 FUN_14823c430 body=245 status=ok
// SIG undefined FUN_14823c430(void)

void FUN_14823c430(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c0))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c52c FUN_14823c52c body=233 status=ok
// SIG undefined FUN_14823c52c(void)

void FUN_14823c52c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14823bb12(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c61a FUN_14823c61a body=158 status=ok
// SIG undefined FUN_14823c61a(void)

void FUN_14823c61a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148234e1e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c6be FUN_14823c6be body=158 status=ok
// SIG undefined FUN_14823c6be(void)

void FUN_14823c6be(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148234ec4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c762 FUN_14823c762 body=205 status=ok
// SIG undefined FUN_14823c762(void)

void FUN_14823c762(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((((bool)*(char *)(param_1 + 0x140) != (local_1c != 0)) &&
       (*(bool *)(param_1 + 0x140) = local_1c != 0, local_1c != 0)) &&
      (0 < *(int *)(param_1 + 0x150))) && (*(int *)(param_1 + 0x158) < 0)) {
    FUN_14823bb12(param_1,0,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823c83c FUN_14823c83c body=455 status=ok
// SIG undefined FUN_14823c83c(void)

void FUN_14823c83c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    lVar3 = FUN_14101b6e6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      FUN_14823ca9c(&local_30);
      FUN_14823ca1e(param_2 + 0x3f0,param_1,local_30);
      FUN_14823cbe8(&local_38);
      FUN_14823cb6a(param_2 + 0x400,param_1,local_38);
      FUN_14823ccae(&local_40);
      FUN_14823cb6a(param_2 + 0x410,param_1,local_40);
      FUN_14823cd78(&local_48);
      FUN_14823cb6a(param_2 + 0x420,param_1,local_48);
      FUN_14823ce3a(&local_50);
      FUN_14823cb6a(param_2 + 0x430,param_1,local_50);
      FUN_14823cefa(&local_58);
      FUN_14823cb6a(param_2 + 0x440,param_1,local_58);
      FUN_14823cfc4(&local_60);
      FUN_14823cb6a(param_2 + 0x450,param_1,local_60);
      iVar2 = *(int *)(param_1 + 0x150);
      *(uint *)(param_1 + 0x150) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x154) < iVar2 + 1U) {
        FUN_14825867c(param_1 + 0x148,iVar2);
      }
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 8);
      *puVar1 = 0;
      FUN_14485c47a(puVar1,param_2);
      if (((*(char *)(param_1 + 0x140) == '\x01') && (*(int *)(param_1 + 0x150) == 1)) &&
         ((*(byte *)(param_2 + 0x3b9) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823ca1e FUN_14823ca1e body=125 status=ok
// SIG undefined FUN_14823ca1e(void)

void FUN_14823ca1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 14823ca9c FUN_14823ca9c body=204 status=ok
// SIG undefined FUN_14823ca9c(void)

undefined8 * FUN_14823ca9c(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46328) {
    FUN_144b3d300(&DAT_14cb46328);
    if (DAT_14cb46328 == -1) {
      builtin_wcsncpy(local_48,L"OnSelectionStateChangedBase",0x1c);
      FUN_1446f470e(&DAT_14cb46320,local_48,1);
      _Init_thread_footer(&DAT_14cb46328);
    }
  }
  *param_1 = DAT_14cb46320;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823cb6a FUN_14823cb6a body=125 status=ok
// SIG undefined FUN_14823cb6a(void)

void FUN_14823cb6a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 14823cbe8 FUN_14823cbe8 body=197 status=ok
// SIG undefined FUN_14823cbe8(void)

undefined8 * FUN_14823cbe8(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46338) {
    FUN_144b3d300(&DAT_14cb46338);
    if (DAT_14cb46338 == -1) {
      builtin_wcsncpy(local_48,L"OnHandleButtonBaseClicked",0x1a);
      FUN_1446f470e(&DAT_14cb46330,local_48,1);
      _Init_thread_footer(&DAT_14cb46338);
    }
  }
  *param_1 = DAT_14cb46330;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823ccae FUN_14823ccae body=201 status=ok
// SIG undefined FUN_14823ccae(void)

undefined8 * FUN_14823ccae(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46348) {
    FUN_144b3d300(&DAT_14cb46348);
    if (DAT_14cb46348 == -1) {
      builtin_wcsncpy(local_58 + 0x18,L"Clicked",8);
      builtin_wcsncpy(local_58 + 0x10,L"seDouble",8);
      builtin_wcsncpy(local_58 + 8,L"ButtonBa",8);
      builtin_wcsncpy(local_58,L"OnHandle",8);
      FUN_1446f470e(&DAT_14cb46340,local_58,1);
      _Init_thread_footer(&DAT_14cb46348);
    }
  }
  *param_1 = DAT_14cb46340;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823cd78 FUN_14823cd78 body=193 status=ok
// SIG undefined FUN_14823cd78(void)

undefined8 * FUN_14823cd78(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46358) {
    FUN_144b3d300(&DAT_14cb46358);
    if (DAT_14cb46358 == -1) {
      builtin_wcsncpy(local_38,L"OnButtonBaseHovered",0x14);
      FUN_1446f470e(&DAT_14cb46350,local_38,1);
      _Init_thread_footer(&DAT_14cb46358);
    }
  }
  *param_1 = DAT_14cb46350;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823ce3a FUN_14823ce3a body=190 status=ok
// SIG undefined FUN_14823ce3a(void)

undefined8 * FUN_14823ce3a(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46368) {
    FUN_144b3d300(&DAT_14cb46368);
    if (DAT_14cb46368 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"vered",6);
      builtin_wcsncpy(local_48 + 8,L"BaseUnho",8);
      builtin_wcsncpy(local_48,L"OnButton",8);
      FUN_1446f470e(&DAT_14cb46360,local_48,1);
      _Init_thread_footer(&DAT_14cb46368);
    }
  }
  *param_1 = DAT_14cb46360;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823cefa FUN_14823cefa body=201 status=ok
// SIG undefined FUN_14823cefa(void)

undefined8 * FUN_14823cefa(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46378) {
    FUN_144b3d300(&DAT_14cb46378);
    if (DAT_14cb46378 == -1) {
      builtin_wcsncpy(local_58 + 0x18,L"icked",6);
      builtin_wcsncpy(local_58 + 0x10,L"seLockCl",8);
      builtin_wcsncpy(local_58 + 8,L"ButtonBa",8);
      builtin_wcsncpy(local_58,L"OnHandle",8);
      FUN_1446f470e(&DAT_14cb46370,local_58,1);
      _Init_thread_footer(&DAT_14cb46378);
    }
  }
  *param_1 = DAT_14cb46370;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823cfc4 FUN_14823cfc4 body=177 status=ok
// SIG undefined FUN_14823cfc4(void)

undefined8 * FUN_14823cfc4(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46388) {
    FUN_144b3d300(&DAT_14cb46388);
    if (DAT_14cb46388 == -1) {
      pwVar2 = L"OnHandleButtonBaseLockDoubleClicked";
      puVar3 = local_68;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      FUN_1446f470e(&DAT_14cb46380,local_68,1);
      _Init_thread_footer(&DAT_14cb46388);
    }
  }
  *param_1 = DAT_14cb46380;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823d076 FUN_14823d076 body=1092 status=ok
// SIG undefined FUN_14823d076(void)

void FUN_14823d076(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [44];
  int local_ac;
  ulonglong local_a8;
  int local_9c;
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    lVar5 = FUN_14101b6e6();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) {
      iVar11 = -1;
      if ((longlong)*(int *)(param_1 + 0x150) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x148);
        lVar6 = (longlong)*(int *)(param_1 + 0x150) << 3;
        iVar10 = 0;
        do {
          lVar7 = FUN_14479d2ce(lVar5);
          iVar11 = iVar10;
          if (lVar7 == param_2) break;
          lVar5 = lVar5 + 8;
          iVar10 = iVar10 + 1;
          lVar6 = lVar6 + -8;
          iVar11 = -1;
        } while (lVar6 != 0);
      }
      FUN_14823ca9c(&local_58);
      FUN_1409ca370(param_2 + 0x3f0,param_1,local_58);
      bVar3 = 1;
      FUN_144a7b126(param_2 + 0x3f0,&local_50,1);
      FUN_14823cbe8(&local_60);
      FUN_1409ca370(param_2 + 0x400,param_1,local_60);
      FUN_144a7b126(param_2 + 0x400,&local_50,1);
      FUN_14823ccae(&local_68);
      FUN_1409ca370(param_2 + 0x410,param_1,local_68);
      FUN_144a7b126(param_2 + 0x410,&local_50,1);
      FUN_14823cd78(&local_70);
      FUN_1409ca370(param_2 + 0x420,param_1,local_70);
      FUN_144a7b126(param_2 + 0x420,&local_50,1);
      FUN_14823ce3a(&local_78);
      FUN_1409ca370(param_2 + 0x430,param_1,local_78);
      FUN_144a7b126(param_2 + 0x430,&local_50,1);
      FUN_14823cefa(&local_80);
      FUN_1409ca370(param_2 + 0x440,param_1,local_80);
      FUN_144a7b126(param_2 + 0x440,&local_50,1);
      FUN_14823cfc4(&local_88);
      FUN_1409ca370(param_2 + 0x450,param_1,local_88);
      FUN_144a7b126(param_2 + 0x450,&local_50,1);
      if ((longlong)*(int *)(param_1 + 0x150) != 0) {
        local_98 = *(undefined8 **)(param_1 + 0x148);
        local_50 = *local_98;
        local_a8 = (longlong)*(int *)(param_1 + 0x150);
        local_9c = iVar11;
        cVar2 = FUN_148258702(&local_50,param_2);
        if (cVar2 == '\0') {
          bVar3 = FUN_144729dda(&local_50);
          bVar3 = bVar3 ^ 1;
        }
        uVar12 = 0;
        uVar8 = local_a8;
        iVar11 = 0;
LAB_14823d3a9:
        do {
          local_ac = iVar11;
          iVar10 = (int)uVar12;
          uVar12 = (ulonglong)(iVar10 + 1U);
          local_90 = (longlong)iVar10;
          if ((int)(iVar10 + 1U) < (int)uVar8) {
            uVar12 = local_90 + 1;
            bVar1 = true;
            do {
              local_50 = local_98[uVar12];
              cVar2 = FUN_148258702(&local_50,param_2);
              if (cVar2 == '\0') {
                bVar4 = FUN_144729dda(&local_50);
                if ((bVar3 & 1) == bVar4) goto LAB_14823d412;
              }
              else {
                uVar8 = local_a8;
                if ((bVar3 & 1) == 0) goto LAB_14823d431;
              }
              uVar12 = uVar12 + 1;
              bVar1 = (longlong)uVar12 < (longlong)local_a8;
            } while (uVar12 != local_a8);
            uVar12 = local_a8 & 0xffffffff;
LAB_14823d412:
            uVar8 = local_a8;
            if ((bVar3 & 1) != 0) {
              bVar3 = 0;
              iVar11 = local_ac;
              if (!bVar1) break;
              goto LAB_14823d3a9;
            }
          }
          else {
            iVar11 = local_ac;
            if ((bVar3 & 1) != 0) break;
            bVar1 = false;
          }
LAB_14823d431:
          iVar11 = local_ac;
          iVar9 = (int)uVar12 - iVar10;
          if (local_ac != iVar10) {
            memmove(local_98 + local_ac,local_98 + local_90,(longlong)iVar9 << 3);
            uVar8 = local_a8;
          }
          iVar11 = iVar11 + iVar9;
          bVar3 = 1;
        } while (bVar1);
        *(int *)(param_1 + 0x150) = iVar11;
        iVar11 = local_9c;
      }
      if ((*(byte *)(param_2 + 0x3b9) & 1) != 0) {
        FUN_1482232ec(param_2,0,0,1);
      }
      if (iVar11 == *(int *)(param_1 + 0x158)) {
        *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
        if ((*(char *)(param_1 + 0x140) == '\x01') && (0 < *(int *)(param_1 + 0x150))) {
          lVar5 = 0;
          uVar12 = 0;
          do {
            lVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x148) + lVar5);
            if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x3a8) & 4) != 0)) {
              FUN_14823bb12(param_1,uVar12 & 0xffffffff,1);
              break;
            }
            uVar12 = uVar12 + 1;
            lVar5 = lVar5 + 8;
          } while ((longlong)uVar12 < (longlong)*(int *)(param_1 + 0x150));
        }
        else {
          FUN_1447cd2ec(param_1 + 200,0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14823d4bc FUN_14823d4bc body=199 status=ok
// SIG undefined FUN_14823d4bc(void)

void FUN_14823d4bc(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  uVar1 = *(undefined1 *)(param_1 + 0x140);
  *(undefined1 *)(param_1 + 0x140) = 0;
  uVar2 = *(uint *)(param_1 + 0x150);
  if (0 < (int)uVar2) {
    do {
      local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + -8 + (ulonglong)uVar2 * 8);
      *(uint *)(param_1 + 0x150) = uVar2 - 1;
      FUN_14825877a(param_1 + 0x148);
      lVar3 = FUN_14479d2ce(&local_30);
      if (lVar3 != 0) {
        FUN_148235002(param_1,lVar3);
      }
      uVar2 = *(uint *)(param_1 + 0x150);
    } while (0 < (int)uVar2);
  }
  *(undefined1 *)(param_1 + 0x140) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1447cd2ec(param_1 + 200,0);
  return;
}



// FUNCTION 14823d584 FUN_14823d584 body=331 status=ok
// SIG undefined FUN_14823d584(void)

void FUN_14823d584(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x150) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x148);
      lVar3 = (longlong)*(int *)(param_1 + 0x150) << 3;
      do {
        cVar1 = FUN_144729dda(lVar4);
        if (cVar1 != '\0') {
          lVar2 = FUN_14479d2ce(lVar4);
          if ((*(byte *)(lVar2 + 0x3b9) & 1) != 0) goto LAB_14823d6c2;
        }
        lVar4 = lVar4 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
    FUN_1447f69b6(param_1 + 0xd8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0x148) + lVar4);
      if (lVar2 != 0) {
        if (lVar2 == param_2) {
          *(int *)(param_1 + 0x158) = (int)lVar3;
        }
        else if ((*(byte *)(lVar2 + 0x3b9) & 1) != 0) {
          FUN_1482232ec(lVar2,0,1,1);
        }
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x150));
    uVar5 = *(undefined4 *)(param_1 + 0x158);
  }
  FUN_148258816(param_1 + 0x38,param_2,uVar5);
  local_30 = *(undefined4 *)(param_1 + 0x158);
  local_38 = param_2;
  FUN_1447cd2ec(param_1 + 0x28);
LAB_14823d6c2:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823d6e4 FUN_14823d6e4 body=185 status=ok
// SIG undefined FUN_14823d6e4(void)

void FUN_14823d6e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x148);
    lVar4 = (longlong)*(int *)(param_1 + 0x150) << 3;
    iVar3 = 0;
    do {
      lVar1 = FUN_14479d2ce(lVar2);
      if (lVar1 == param_2) {
        *(int *)(param_1 + 0x15c) = -iVar3;
        if (iVar3 != 1) {
          FUN_148258816(param_1 + 0x60,param_2);
          local_38 = *(undefined4 *)(param_1 + 0x15c);
          local_40 = param_2;
          FUN_1447cd2ec(param_1 + 0x50);
        }
        goto LAB_14823d73f;
      }
      lVar2 = lVar2 + 8;
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
LAB_14823d73f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823d79e FUN_14823d79e body=171 status=ok
// SIG undefined FUN_14823d79e(void)

void FUN_14823d79e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x15c);
  if ((ulonglong)uVar1 != 0xffffffff) {
    if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x150) <= (int)uVar1)) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14479d2ce((ulonglong)uVar1 * 8 + *(longlong *)(param_1 + 0x148));
    }
    if (lVar2 == param_2) {
      *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
      FUN_148258816(param_1 + 0x60,0,0xffffffff);
      local_20 = *(undefined4 *)(param_1 + 0x15c);
      local_28 = 0;
      FUN_1447cd2ec(param_1 + 0x50);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823d84a FUN_14823d84a body=168 status=ok
// SIG undefined FUN_14823d84a(void)

void FUN_14823d84a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x148);
    lVar4 = (longlong)*(int *)(param_1 + 0x150) << 3;
    iVar2 = 0;
    do {
      lVar1 = FUN_14479d2ce(lVar3);
      if (lVar1 == param_2) {
        if (iVar2 != 1) {
          FUN_148258816(param_1 + 0x88,param_2,-iVar2);
          local_40 = param_2;
          local_38 = -iVar2;
          FUN_1447cd2ec(param_1 + 0x78);
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14823d8f4 FUN_14823d8f4 body=171 status=ok
// SIG undefined FUN_14823d8f4(void)

void FUN_14823d8f4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x148);
    lVar4 = (longlong)*(int *)(param_1 + 0x150) << 3;
    iVar2 = 0;
    do {
      lVar1 = FUN_14479d2ce(lVar3);
      if (lVar1 == param_2) {
        if (iVar2 != 1) {
          FUN_148258816(param_1 + 0xb0,param_2,-iVar2);
          local_40 = param_2;
          local_38 = -iVar2;
          FUN_1447cd2ec(param_1 + 0xa0);
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14823d9a0 FUN_14823d9a0 body=171 status=ok
// SIG undefined FUN_14823d9a0(void)

void FUN_14823d9a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x148);
    lVar4 = (longlong)*(int *)(param_1 + 0x150) << 3;
    iVar2 = 0;
    do {
      lVar1 = FUN_14479d2ce(lVar3);
      if (lVar1 == param_2) {
        if (iVar2 != 1) {
          FUN_148258816(param_1 + 0x100,param_2,-iVar2);
          local_40 = param_2;
          local_38 = -iVar2;
          FUN_1447cd2ec(param_1 + 0xf0);
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14823da4c FUN_14823da4c body=171 status=ok
// SIG undefined FUN_14823da4c(void)

void FUN_14823da4c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x148);
    lVar4 = (longlong)*(int *)(param_1 + 0x150) << 3;
    iVar2 = 0;
    do {
      lVar1 = FUN_14479d2ce(lVar3);
      if (lVar1 == param_2) {
        if (iVar2 != 1) {
          FUN_148258816(param_1 + 0x128,param_2,-iVar2);
          local_40 = param_2;
          local_38 = -iVar2;
          FUN_1447cd2ec(param_1 + 0x118);
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14823daf8 FUN_14823daf8 body=156 status=ok
// SIG undefined FUN_14823daf8(void)

void FUN_14823daf8(undefined8 param_1,longlong param_2)

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
  FUN_148234004(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823db96 FUN_14823db96 body=225 status=ok
// SIG undefined FUN_14823db96(void)

void FUN_14823db96(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = plVar3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar3;
    lVar4 = 0;
    do {
      FUN_148234004(param_1,*(undefined8 *)(lVar1 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar4);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823dc92 FUN_14823dc92 body=156 status=ok
// SIG undefined FUN_14823dc92(void)

void FUN_14823dc92(undefined8 param_1,longlong param_2)

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
  FUN_148235002(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823dd32 FUN_14823dd32 body=181 status=ok
// SIG undefined FUN_14823dd32(void)

bool FUN_14823dd32(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(longlong *)(param_1 + 0x40);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_20 = *(longlong **)(param_1 + 0x50);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_14171cc3c(&local_30);
  plVar3 = local_20;
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    bVar5 = false;
    if ((local_30 != DAT_14c966e98) && (local_30 != DAT_14c966fa0)) {
      bVar5 = local_30 != DAT_14c966fb8;
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823dde8 FUN_14823dde8 body=143 status=ok
// SIG undefined FUN_14823dde8(void)

undefined8 * FUN_14823dde8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1469a395e();
  *param_1 = &PTR_FUN_14ae636d0;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xf) = 0x10000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1d] = 0x3f80000000000000;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 14823de78 FUN_14823de78 body=244 status=ok
// SIG undefined FUN_14823de78(void)

void FUN_14823de78(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0xd0))();
  uVar2 = FUN_1428f1d4a(DAT_14c98e618);
  plVar1 = param_1 + 0x10;
  FUN_14823df6e(plVar1,uVar2);
  FUN_140bedc94(plVar1,&DAT_14c966e98);
  FUN_140bedc94(plVar1,&DAT_14c966fa0);
  FUN_140bedc94(plVar1,&DAT_14c966fb8);
  lVar3 = FUN_140e94dc2(*(undefined8 *)(param_1[0xe] + 0x20));
  local_48 = &LAB_14823dfe8;
  local_40 = 0;
  FUN_1482589ac(local_38,param_1);
  FUN_1457bd49c(lVar3 + 0x30,&local_48,local_38);
  FUN_1449db362(local_38);
  (**(code **)(*param_1 + 0xe0))(param_1,*(undefined1 *)(lVar3 + 0x91));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823df6e FUN_14823df6e body=122 status=ok
// SIG undefined FUN_14823df6e(void)

longlong FUN_14823df6e(longlong param_1,longlong param_2)

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
    FUN_1482588c6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14823dff6 FUN_14823dff6 body=369 status=ok
// SIG undefined FUN_14823dff6(void)

ulonglong FUN_14823dff6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(*(longlong *)(param_1[0xe] + 0x20) + 0x78);
  if (lVar3 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_140761b7a(lVar3,&local_38);
    lVar3 = DAT_14c98e618;
    bVar8 = 1;
    if (local_38 != 0) {
      uVar7 = (**(code **)(*param_1 + 0x60))(param_1);
      if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar3 + 0x318))) {
        lVar3 = *(longlong *)(lVar3 + 0x310);
        lVar4 = *(longlong *)(lVar3 + (ulonglong)uVar7 * 0x10);
        plVar5 = *(longlong **)(lVar3 + 8 + (ulonglong)uVar7 * 0x10);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        bVar8 = 1;
        if (lVar4 != 0) {
          local_48 = local_38;
          local_40 = local_30;
          if (local_30 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_30 + 1) = (int)local_30[1] + 1;
            UNLOCK();
          }
          cVar6 = FUN_1469b7132(lVar4,&local_48);
          if (cVar6 == '\0') {
            local_58 = local_38;
            local_50 = local_30;
            if (local_30 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_30 + 1) = (int)local_30[1] + 1;
              UNLOCK();
            }
            uVar7 = FUN_1469b70dc(lVar4,&local_58);
            param_1 = (longlong *)(ulonglong)uVar7;
            bVar8 = 0;
          }
        }
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
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & (bVar8 ^ 1));
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823e168 FUN_14823e168 body=169 status=ok
// SIG undefined FUN_14823e168(void)

undefined8 * FUN_14823e168(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      uVar7 = FUN_146a3cf3e();
      cVar6 = (**(code **)(*plVar5 + 8))(plVar5,uVar7);
      if (cVar6 != '\0') {
        uVar7 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar7;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar7;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14823e212 FUN_14823e212 body=422 status=ok
// SIG undefined FUN_14823e212(void)

void FUN_14823e212(longlong *param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  lVar4 = DAT_14c98e618;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar8 = (**(code **)(*param_1 + 0x60))();
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(lVar4 + 0x318))) {
    lVar4 = *(longlong *)(lVar4 + 0x310);
    lVar5 = *(longlong *)(lVar4 + (ulonglong)uVar8 * 0x10);
    puVar6 = *(undefined8 **)(lVar4 + 8 + (ulonglong)uVar8 * 0x10);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1[0xe] + 0x20) + 0x78);
      if (lVar4 == 0) {
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
      }
      else {
        FUN_140761b7a(lVar4,&local_38);
        if (local_38 != 0) {
          dVar3 = *param_2;
          uVar9 = SUB84(dVar3,0);
          uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar13 = param_2[1];
          if (1.0 <= dVar13) {
            dVar13 = 1.0;
          }
          if (dVar13 <= 0.0) {
            dVar13 = 0.0;
          }
          if (1.0 <= dVar3) {
            uVar9 = 0;
            uVar11 = 0x3ff00000;
          }
          if ((double)CONCAT44(uVar11,uVar9) <= 0.0) {
            uVar9 = 0;
            uVar11 = 0;
          }
          fVar12 = (float)dVar13 * *(float *)(local_38 + 0xd4);
          fVar10 = (float)(double)CONCAT44(uVar11,uVar9) * *(float *)(local_38 + 0xd0);
          FUN_141653418(lVar5,10,(int)(fVar10 * *(float *)(local_38 + 0xec) +
                                       fVar12 * *(float *)(local_38 + 0xf4) +
                                      *(float *)(local_38 + 0xfc)),
                        (int)(*(float *)(local_38 + 0xf0) * fVar10 +
                              *(float *)(local_38 + 0xf8) * fVar12 + *(float *)(local_38 + 0x100)));
        }
      }
      plVar7 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar6 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(puVar6);
        LOCK();
        piVar2 = (int *)((longlong)puVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823e3cc FUN_14823e3cc body=462 status=ok
// SIG undefined FUN_14823e3cc(void)

undefined8 * FUN_14823e3cc(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(param_1 + 0x88);
  if (lVar6 != 0) {
LAB_14823e3fd:
    FUN_14825f172(lVar6,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  lVar6 = FUN_1482413a6(param_1);
  if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x38) != 0)) {
    puVar9 = *(ulonglong **)(lVar6 + 0x30);
    puVar1 = puVar9 + *(int *)(lVar6 + 0x38);
    do {
      uVar2 = *puVar9;
      if (uVar2 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar2);
      }
      if ((~DAT_14c950c29 & 1) == 0 && uVar2 != 0) {
        FUN_1456cec3c(uVar2);
      }
      local_50 = uVar2;
      if ((~DAT_14c950c29 & 1) == 0 && uVar2 != 0) {
        FUN_1456cec3c(uVar2);
      }
      if ((uVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(uVar2);
      }
      uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      iVar5 = FUN_14825b25c((longlong *)(param_1 + 0x120),uVar4 >> 0x10 ^ uVar4,&local_50);
      if (iVar5 != -1) {
        lVar6 = *(longlong *)(param_1 + 0x120);
        if ((lVar6 + (longlong)iVar5 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
          lVar6 = lVar6 + (longlong)iVar5 * 0x20;
          lVar8 = (longlong)*(int *)(lVar6 + 0x10);
          if (lVar8 != 0) {
            lVar6 = *(longlong *)(lVar6 + 8);
            lVar7 = 0;
            do {
              cVar3 = (**(code **)(**(longlong **)(lVar6 + lVar7) + 0x18))();
              if ((cVar3 != '\0') &&
                 (cVar3 = FUN_14825dc46(*(undefined8 *)(lVar6 + lVar7)), cVar3 != '\0')) {
                lVar6 = *(longlong *)(lVar6 + lVar7);
                goto LAB_14823e3fd;
              }
              lVar7 = lVar7 + 0x10;
            } while (lVar8 * 0x10 != lVar7);
          }
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823e59c FUN_14823e59c body=330 status=ok
// SIG undefined FUN_14823e59c(void)

bool FUN_14823e59c(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x20) + 0x78);
  if (lVar4 == 0) {
    bVar5 = false;
  }
  else {
    FUN_140761b7a(lVar4,&local_48);
    if (local_48 == 0) {
      bVar5 = false;
    }
    else {
      fVar3 = *(float *)(local_48 + 0xd8);
      fVar6 = fVar3 * 0.0;
      local_38 = CONCAT44(*(float *)(local_48 + 0xe0) + fVar6,fVar6 + *(float *)(local_48 + 0xdc));
      local_28 = CONCAT44(*(float *)(local_48 + 0xd4) * fVar3,fVar6);
      local_30 = CONCAT44(fVar6,fVar3 * *(float *)(local_48 + 0xd0));
      FUN_144b01024(&local_38,&local_58);
      bVar5 = false;
      if (((local_58 <= (float)*param_2) && ((float)*param_2 <= local_50)) &&
         (local_54 <= (float)param_2[1])) {
        bVar5 = (float)param_2[1] <= local_4c;
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
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823e700 FUN_14823e700 body=59 status=ok
// SIG undefined FUN_14823e700(void)

undefined8 FUN_14823e700(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_3);
  if ((cVar1 != '\0') &&
     (uVar2 = FUN_1469a4256(param_1,param_2,param_3), *(char *)((longlong)param_1 + 0x79) != '\0'))
  {
    return uVar2;
  }
  return 0;
}



// FUNCTION 14823e742 FUN_14823e742 body=896 status=ok
// SIG undefined FUN_14823e742(void)

undefined8 FUN_14823e742(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined4 local_210;
  undefined1 local_1fc [4];
  undefined **local_1f8;
  uint3 local_1f0;
  undefined1 uStack_1ed;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  cVar6 = FUN_1469a43fa(param_1,param_3);
  if (cVar6 != '\0') {
    local_1b8 = *(longlong *)(param_3 + 0x40);
    local_1b0 = *(undefined8 *)(param_3 + 0x48);
    local_1a8 = *(longlong **)(param_3 + 0x50);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_14171cc3c(&local_1b8);
    bVar5 = true;
    if ((((cVar6 != '\0') && (local_1b8 != DAT_14c966e98)) && (local_1b8 != DAT_14c966fa0)) &&
       (local_1b8 != DAT_14c966fb8)) {
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x20) + 0x78);
      if (lVar4 != 0) {
        FUN_140761b7a(lVar4,&local_1a0);
        if (local_198 == (longlong *)0x0) {
          if (local_1a0 != 0) goto LAB_14823e864;
        }
        else {
          LOCK();
          *(int *)(local_198 + 1) = (int)local_198[1] + 1;
          UNLOCK();
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_198 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar3 = (int *)((longlong)local_198 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*local_198 + 0x10))(local_198);
              }
            }
          }
          if (local_1a0 != 0) {
LAB_14823e864:
            FUN_1401b43e8(param_2,&local_1f8);
            local_210 = 0xffffffff;
            local_218 = 0;
            (**(code **)(*param_2 + 0x108))
                      (param_2,&local_1a0,*(undefined8 *)(param_3 + 0x20),&local_1f8);
            FUN_1401b439d(local_1f8,_local_1f0);
            if (local_1f8 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            cVar6 = FUN_1403d1f4c(&local_1a0,local_1a0);
            plVar2 = local_1a8;
            if (cVar6 != '\0') {
              local_1ec = *(undefined4 *)(param_3 + 0xc);
              if (local_1a8 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
                UNLOCK();
              }
              local_1f0 = (uint3)*(ushort *)(param_3 + 8);
              local_1e0 = 0;
              local_1f8 = &PTR_FUN_149eda6d0;
              local_1d8 = local_1b8;
              local_1d0 = local_1b0;
              local_1c8 = local_1a8;
              local_1e8 = local_1ec;
              if (local_1a8 == (longlong *)0x0) {
                local_1c0 = 0;
              }
              else {
                LOCK();
                *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
                UNLOCK();
                local_1c0 = 0;
                LOCK();
                plVar1 = local_1a8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_1a8)(local_1a8);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar2 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
              cVar6 = FUN_1409eff00(param_2,&local_1f8);
              plVar2 = local_1c8;
              if (cVar6 != '\0') {
                FUN_14113bfae(param_1 + 0x80,local_1fc,&local_1b8,0);
                plVar2 = local_1c8;
                local_1f8 = &PTR_FUN_149eda6d0;
                if (local_1c8 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_1c8 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_1c8)(local_1c8);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar2 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar2 + 0x10))(plVar2);
                    }
                  }
                }
                FUN_1447fa21a(&local_1a0);
                if (local_198 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_198 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_198)(local_198);
                    LOCK();
                    piVar3 = (int *)((longlong)local_198 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*local_198 + 0x10))(local_198);
                    }
                  }
                }
                bVar5 = false;
                goto LAB_14823ea64;
              }
              local_1f8 = &PTR_FUN_149eda6d0;
              if (local_1c8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_1c8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_1c8)(local_1c8);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar2 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
            }
            FUN_1447fa21a(&local_1a0);
            if (local_198 == (longlong *)0x0) goto LAB_14823ea64;
          }
          LOCK();
          plVar2 = local_198 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_198)(local_198);
            LOCK();
            piVar3 = (int *)((longlong)local_198 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_198 + 0x10))(local_198);
            }
          }
        }
      }
    }
LAB_14823ea64:
    plVar2 = local_1a8;
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    uVar7 = 1;
    if (!bVar5) goto LAB_14823ea97;
  }
  uVar7 = 0;
LAB_14823ea97:
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14823eac4 FUN_14823eac4 body=441 status=ok
// SIG undefined FUN_14823eac4(void)

undefined4 FUN_14823eac4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = FUN_1469a43fa(param_1,param_3);
  if (cVar4 != '\0') {
    local_70 = *(undefined ***)(param_3 + 0x40);
    local_68 = *(undefined8 *)(param_3 + 0x48);
    local_60 = *(longlong **)(param_3 + 0x50);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    iVar5 = FUN_140bedc94(param_1 + 0x80,&local_70);
    plVar3 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if ((0 < iVar5) ||
       ((cVar4 = FUN_14823dd32(param_3), cVar4 != '\0' &&
        (cVar4 = (**(code **)(*param_2 + 0xd8))(param_2,*(undefined4 *)(param_3 + 0xc)),
        cVar4 == '\0')))) {
      uVar6 = *(undefined4 *)(param_3 + 0xc);
      local_50 = *(undefined8 *)(param_3 + 0x40);
      local_48 = *(undefined8 *)(param_3 + 0x48);
      plVar3 = *(longlong **)(param_3 + 0x50);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_68._0_3_ = (uint3)*(ushort *)(param_3 + 8);
      local_68 = CONCAT44(uVar6,(undefined4)local_68);
      local_60 = (longlong *)CONCAT44(local_60._4_4_,uVar6);
      local_58 = 0;
      local_70 = &PTR_FUN_149eda6d0;
      local_40 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        local_38 = 0;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_38 = 0;
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
      uVar6 = FUN_140dcb8ee(param_2,&local_70);
      plVar3 = local_40;
      local_70 = &PTR_FUN_149eda6d0;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (0 < iVar5) goto LAB_14823ec34;
    }
  }
  uVar6 = 0;
LAB_14823ec34:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14823ec88 FUN_14823ec88 body=76 status=ok
// SIG undefined FUN_14823ec88(void)

ulonglong FUN_14823ec88(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = FUN_1414225d4(lVar1);
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
    lVar3 = (longlong)*(int *)(lVar2 + 0x40) << 3;
    uVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar4 * 8) == lVar1) {
        return uVar4 & 0xffffffff;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 14823ecd8 FUN_14823ecd8 body=161 status=ok
// SIG undefined FUN_14823ecd8(void)

ulonglong FUN_14823ecd8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 1;
  if (param_2 != 0) {
    lVar1 = FUN_1458f0910();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_145a698e4();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        uVar2 = FUN_14774b064(param_2);
        return uVar2;
      }
      lVar1 = FUN_145958426();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        uVar2 = FUN_14774c3c2(param_2);
        return uVar2;
      }
    }
    else {
      uVar2 = (ulonglong)*(byte *)(param_2 + 0xa90);
    }
  }
  return uVar2;
}



// FUNCTION 14823ed7a FUN_14823ed7a body=135 status=ok
// SIG undefined FUN_14823ed7a(void)

ulonglong FUN_14823ed7a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  
  if ((char)param_1[0xf] == '\x01') {
    cVar5 = FUN_1469a4342();
    if (cVar5 != '\0') {
      cVar5 = FUN_14823dff6(param_1);
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (cVar5 == '\0') {
        lVar3 = *(longlong *)(param_2 + 0x20);
        plVar4 = *(longlong **)(param_2 + 0x30);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (lVar3 == DAT_14c966d68) {
          uVar6 = (**(code **)(*param_1 + 0xa0))(param_1);
          uVar7 = (ulonglong)uVar6;
        }
        else {
          uVar7 = 0;
        }
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
      goto LAB_14823ed98;
    }
  }
  uVar7 = 0;
LAB_14823ed98:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14823ee02 FUN_14823ee02 body=8 status=ok
// SIG undefined FUN_14823ee02(void)

bool FUN_14823ee02(longlong param_1)

{
  return *(char *)(param_1 + 0x78) == '\x01';
}



// FUNCTION 14823ee0a FUN_14823ee0a body=44 status=ok
// SIG undefined FUN_14823ee0a(void)

undefined8 FUN_14823ee0a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    cVar1 = FUN_1469a439e();
    if (cVar1 != '\0') {
      uVar2 = FUN_14823dff6(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14823ee66 FUN_14823ee66 body=105 status=ok
// SIG undefined FUN_14823ee66(void)

void FUN_14823ee66(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_145b1117c();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar2 + 0x60);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar2 + 100);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar2 + 0x6c);
  *(uint *)(param_1 + 0x48) = *(byte *)(lVar2 + 0x5c) ^ 1;
  return;
}



// FUNCTION 14823eed0 FUN_14823eed0 body=185 status=ok
// SIG undefined FUN_14823eed0(void)

void FUN_14823eed0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  
  lVar5 = DAT_14c98e618;
  uVar7 = (**(code **)(*param_1 + 0x60))();
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar5 + 0x318))) {
    lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x310) + (ulonglong)uVar7 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x310) + 8 + (ulonglong)uVar7 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if (*(char *)((longlong)param_1 + 0x79) == '\0') {
        cVar6 = FUN_14823ef8a(param_1[0xe]);
        if ((cVar6 == '\0') && ((char)param_1[0xf] != '\0')) {
          uVar8 = 0;
          FUN_1469a9e30(lVar5,0);
        }
      }
      FUN_1469b73f0(lVar3,uVar8 & 0xffffffff);
    }
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
                    /* WARNING: Could not recover jumptable at 0x00014823ef57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14823ef8a FUN_14823ef8a body=58 status=ok
// SIG undefined FUN_14823ef8a(void)

undefined4 FUN_14823ef8a(longlong param_1)

{
  byte extraout_AL;
  byte bVar1;
  undefined3 extraout_var;
  
  FUN_1414dd3b0(DAT_14c98e618);
  bVar1 = extraout_AL;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x78) != 0) {
    bVar1 = FUN_1417c7930();
    bVar1 = extraout_AL | bVar1;
  }
  return CONCAT31(extraout_var,bVar1 | DAT_14cb46168);
}



// FUNCTION 14823efc8 FUN_14823efc8 body=171 status=ok
// SIG undefined FUN_14823efc8(void)

void FUN_14823efc8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)(param_1 + 600) != (local_1c != 0)) {
    *(bool *)(param_1 + 600) = local_1c != 0;
    *(undefined1 *)(param_1 + 0x270) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f0b6 FUN_14823f0b6 body=210 status=ok
// SIG undefined FUN_14823f0b6(void)

void FUN_14823f0b6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1433350e2();
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x1f0), lVar2 != 0)) {
    lVar3 = FUN_1402cf94e(lVar2);
    if (lVar3 != 0) {
      lVar3 = FUN_1402cf94e(lVar2);
      local_40 = FUN_14823f28a;
      local_38 = 0;
      FUN_14823f18a(lVar3 + 0x2a0,local_30,param_1);
    }
    iVar1 = *(int *)(lVar2 + 0x40);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x38);
      lVar3 = 0;
      do {
        FUN_14823f2ec(param_1,*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    FUN_143aec7e0(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f18a FUN_14823f18a body=254 status=ok
// SIG undefined FUN_14823f18a(void)

undefined8
FUN_14823f18a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e35290;
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
  *local_48 = &PTR_FUN_14ae6b1d0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140feff30(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f28a FUN_14823f28a body=97 status=ok
// SIG undefined FUN_14823f28a(void)

void FUN_14823f28a(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  lVar1 = FUN_147aa5636(uVar3,param_2);
  FUN_14823f2ec(param_1,lVar1);
  lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if ((lVar1 == lVar2) || ((char)param_1[0x4b] == '\0')) {
    *(undefined1 *)(param_1 + 0x4e) = 1;
  }
  return;
}



// FUNCTION 14823f2ec FUN_14823f2ec body=216 status=ok
// SIG undefined FUN_14823f2ec(void)

void FUN_14823f2ec(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [15];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar1 = FUN_1403f18c8(param_2);
    if (lVar1 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
      local_21 = lVar2 == param_2;
      local_48 = &local_21;
      local_40 = &LAB_14823f088;
      local_38 = 0;
      FUN_14823f438(lVar1 + 200,local_30,param_1);
    }
    lVar1 = FUN_140e94dc2(param_2);
    if (lVar1 != 0) {
      local_40 = &LAB_14823f430;
      local_38 = 0;
      FUN_14823f54c(lVar1 + 0x30,local_30,param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f3cc FUN_14823f3cc body=99 status=ok
// SIG undefined FUN_14823f3cc(void)

void FUN_14823f3cc(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(longlong *)(param_1 + 0x250);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1433335f4(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f438 FUN_14823f438 body=274 status=ok
// SIG undefined FUN_14823f438(void)

undefined8
FUN_14823f438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14a83c0e0;
  *(undefined1 *)(local_50 + 1) = *param_5;
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
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ae6b240;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f54c FUN_14823f54c body=254 status=ok
// SIG undefined FUN_14823f54c(void)

undefined8
FUN_14823f54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ae6bc70;
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
  *local_48 = &PTR_FUN_14ae6b2b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bd49c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f650 FUN_14823f650 body=254 status=ok
// SIG undefined FUN_14823f650(void)

undefined8
FUN_14823f650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e01f80;
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
  *local_48 = &PTR_FUN_14ae6b320;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ca2242(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f750 FUN_14823f750 body=160 status=ok
// SIG undefined FUN_14823f750(void)

void FUN_14823f750(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_14477b072(param_1,DAT_14cb45030);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
  plVar1 = (longlong *)param_1[0x277];
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar3 = FUN_148220ece(param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if (lVar3 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar3);
    }
  }
  plVar1[0x66] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00014823f7d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2d8))(plVar1);
  return;
}



// FUNCTION 14823f7f0 FUN_14823f7f0 body=204 status=ok
// SIG undefined FUN_14823f7f0(void)

undefined8 FUN_14823f7f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14598e1ac(&local_48,2);
  FUN_148259968(&local_48,L"PlayerNum",param_3);
  FUN_148259b5e(&local_48,param_4);
  FUN_14582acda(param_1,param_2,&local_48);
  FUN_14010f8af(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823f8c6 FUN_14823f8c6 body=239 status=ok
// SIG undefined FUN_14823f8c6(void)

void FUN_14823f8c6(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446e0b6e();
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = FUN_145b11098();
  FUN_140aa7b7e(uVar3,&local_48,0);
  lVar2 = local_48;
  lVar7 = (longlong)(int)uStack_40;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar6);
      plVar5 = (longlong *)plVar1[0x22];
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(*plVar1 + 1000))(plVar1);
        plVar5 = (longlong *)plVar1[0x22];
        if (plVar5 != (longlong *)0x0) goto LAB_14823f94e;
      }
      else {
LAB_14823f94e:
        lVar4 = FUN_145b11098();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1);
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14823f9bc FUN_14823f9bc body=180 status=ok
// SIG undefined FUN_14823f9bc(void)

undefined8 FUN_14823f9bc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140760c2c(param_1,&local_28);
  uVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
  local_38 = local_28;
  local_30 = local_20;
  if (local_20 == (longlong *)0x0) {
    uVar3 = FUN_14823fa72(&local_38,uVar3);
  }
  else {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    uVar3 = FUN_14823fa72(&local_38,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823fa72 FUN_14823fa72 body=479 status=ok
// SIG undefined FUN_14823fa72(void)

longlong * FUN_14823fa72(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_1;
  if (lVar5 == 0) {
LAB_14823fbe7:
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)0x0;
    do {
      plVar7 = *(longlong **)(lVar5 + 0x1c8);
      if (plVar7 == (longlong *)0x0) {
LAB_14823fade:
        plVar7 = (longlong *)0x0;
        lVar5 = 0;
      }
      else {
        iVar4 = (int)plVar7[1];
        do {
          if (iVar4 == 0) goto LAB_14823fade;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar9 = iVar4 == iVar3;
          if (bVar9) {
            *(int *)(plVar7 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
        } while (!bVar9);
        lVar5 = *(longlong *)(lVar5 + 0x1c0);
      }
      *param_1 = lVar5;
      plVar8 = (longlong *)param_1[1];
      if (plVar7 == plVar8) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar7 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar4 = *piVar1;
            UNLOCK();
            plVar8 = plVar7;
            goto joined_r0x00014823fb2c;
          }
          goto LAB_14823fb38;
        }
      }
      else {
        param_1[1] = (longlong)plVar7;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar8 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar4 = *piVar1;
            UNLOCK();
joined_r0x00014823fb2c:
            if (iVar4 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
LAB_14823fb38:
        lVar5 = *param_1;
      }
      if (lVar5 == 0) goto LAB_14823fbe7;
      FUN_1414927ae(lVar5,&local_50);
      FUN_1446f470e(&local_58,L"SObjectWidget",1);
      lVar5 = *param_1;
      if ((local_50 == local_58) && (local_4c == local_54)) {
        plVar7 = (longlong *)param_1[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        plVar8 = *(longlong **)(lVar5 + 0x278);
        if (plVar8 == (longlong *)0x0) {
LAB_14823fbad:
          plVar8 = (longlong *)0x0;
        }
        else {
          lVar5 = FUN_14110d11e();
          if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
              != lVar5 + 0x30)) goto LAB_14823fbad;
        }
        if (plVar7 != (longlong *)0x0) {
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
        if (plVar8 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
          plVar6 = (longlong *)0x0;
          if (lVar5 == param_2) {
            plVar6 = plVar8;
          }
          break;
        }
        lVar5 = *param_1;
      }
    } while (lVar5 != 0);
  }
  plVar7 = (longlong *)param_1[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14823fc52 FUN_14823fc52 body=1048 status=ok
// SIG undefined FUN_14823fc52(void)

void FUN_14823fc52(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb46250) && (FUN_144b3d300(&DAT_14cb46250), DAT_14cb46250 == -1)) {
    FUN_1446ddc76(&DAT_14cb46248,"ActionRouter",1);
    _Init_thread_footer(&DAT_14cb46250);
  }
  if ((param_3 != 0) &&
     (cVar3 = (**(code **)(*param_2 + 0x690))(param_2,&DAT_14cb46248), cVar3 != '\0')) {
    lVar4 = FUN_14375bb6e();
    if ((lVar4 != 0) && (*(longlong *)(param_3 + 0x240) != lVar4)) {
      *(longlong *)(param_3 + 0x240) = lVar4;
      uVar8 = FUN_140324d4e(lVar4);
      *(undefined4 *)(param_3 + 0x2cc) = uVar8;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb46260) && (FUN_144b3d300(&DAT_14cb46260), DAT_14cb46260 == -1)) {
      DAT_14cb46258 = FUN_148216387();
      _Init_thread_footer(&DAT_14cb46260);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb46270) && (FUN_144b3d300(&DAT_14cb46270), DAT_14cb46270 == -1)) {
      DAT_14cb46268 = FUN_147863ff6();
      _Init_thread_footer(&DAT_14cb46270);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb46280) && (FUN_144b3d300(&DAT_14cb46280), DAT_14cb46280 == -1)) {
      DAT_14cb46278 = FUN_1482163be();
      _Init_thread_footer(&DAT_14cb46280);
    }
    lVar4 = param_3 + 0xa8;
    lVar5 = FUN_140e94dc2(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined1 *)(lVar5 + 0x91);
    uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xe0);
    *(undefined1 **)(param_3 + 0xd8) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_3 + 0xe0) = &DAT_3f8000003f800000;
    local_90 = 0;
    FUN_1401cfad2(DAT_14cb46278,&local_78,uVar1);
    if (local_70 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)CONCAT44(uStack_74,local_78);
    }
    FUN_140002266(&local_68,L"Action Router - Player [%d]: Input Type[%s]",uVar8,puVar7);
    FUN_147d8f316(lVar4,&local_68,&local_90);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 0x37) == '\x01') {
      FUN_1401cfad2(DAT_14cb46258,&local_68,*(undefined1 *)(param_1 + 0x33));
      FUN_1401cfad2(DAT_14cb46268,&local_78,*(undefined1 *)(param_1 + 0x34));
      local_7c = 0;
      puVar7 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar7 = (undefined2 *)CONCAT44(uStack_74,local_78);
      }
      puVar6 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        puVar6 = local_68;
      }
      FUN_140002266(&local_90,L"    Input Mode [%s] Mouse Capture [%s]",puVar6,puVar7);
      FUN_147d8f316(lVar4,&local_90,&local_7c);
      if (CONCAT44(uStack_8c,local_90) != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_74,local_78) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)(param_3 + 0xd8) = 0x3f800000;
      *(undefined4 *)(param_3 + 0xdc) = 0;
      *(undefined4 *)(param_3 + 0xe0) = 0;
      *(undefined4 *)(param_3 + 0xe4) = 0x3f800000;
      local_78 = 0;
      FUN_140056680(&local_68,L"    No Input Config");
      FUN_147d8f316(lVar4,&local_68,&local_78);
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 **)(param_3 + 0xd8) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_3 + 0xe0) = &DAT_3f8000003f800000;
    local_78 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    FUN_1400020e8(&local_68,L"\nPersistent Action Collection:",0x1e);
    FUN_143af7294(uVar2,&local_68,0);
    FUN_147d8f316(lVar4,&local_68,&local_78);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14824006c FUN_14824006c body=232 status=ok
// SIG undefined FUN_14824006c(void)

undefined8 FUN_14824006c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14ae6b4c0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14ae6b450;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_148240156;
  FUN_145cb67e0(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148240156 FUN_148240156 body=124 status=ok
// SIG undefined FUN_148240156(void)

void FUN_148240156(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14143829c();
  lVar4 = plVar2[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar4 = plVar2[0x22];
  }
  FUN_1407891d6(param_2);
  lVar1 = *param_2;
  lVar3 = (longlong)((int)param_2[1] + -1);
  FUN_14020fad6(lVar1 + lVar3 * 0x28,L"showdebug ActionRouter");
  lVar1 = lVar1 + lVar3 * 0x28;
  FUN_14020fad6(lVar1 + 0x10,L"Toggles display of Action Router");
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar4 + 0x60);
  return;
}



// FUNCTION 1482401d2 FUN_1482401d2 body=1166 status=ok
// SIG undefined FUN_1482401d2(void)

longlong ** FUN_1482401d2(longlong param_1,longlong **param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != 0) {
    local_b0 = param_1;
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      cVar2 = *(char *)(param_3 + 0x2fc);
      puVar10 = *(undefined8 **)(param_1 + 0x78);
      puVar12 = puVar10 + (longlong)*(int *)(param_1 + 0x80) * 2;
      do {
        plVar3 = (longlong *)*puVar10;
        plVar4 = (longlong *)puVar10[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          *param_2 = (longlong *)0x0;
          param_2[1] = (longlong *)0x0;
          if (cVar2 == '\0') {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            uStack_78 = plVar4;
            goto LAB_148240396;
          }
          lVar8 = FUN_14479d2ce(plVar3 + 0xb);
          if (lVar8 == param_3) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            *param_2 = plVar3;
            plVar9 = param_2[1];
            if (plVar4 != plVar9) {
              param_2[1] = plVar4;
              goto LAB_1482402b2;
            }
            LOCK();
            plVar3 = plVar4 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar8 = *plVar4;
                plVar9 = plVar4;
                goto LAB_1482402ef;
              }
            }
            goto LAB_1482402f2;
          }
          if (*param_2 == (longlong *)0x0) goto LAB_1482402fc;
LAB_148240604:
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          goto LAB_1482404b4;
        }
        *param_2 = (longlong *)0x0;
        param_2[1] = (longlong *)0x0;
        if (cVar2 == '\0') {
          uStack_78 = (longlong *)0x0;
LAB_148240396:
          local_80 = plVar3;
          FUN_148243a3a(&local_a8,&local_80,param_3);
          plVar3 = local_a0;
          if (&local_a8 != param_2) {
            *param_2 = local_a8;
            local_a8 = (longlong *)0x0;
            plVar5 = param_2[1];
            if (local_a0 != plVar5) {
              local_a0 = (longlong *)0x0;
              param_2[1] = plVar3;
              plVar9 = uStack_78;
              if (plVar5 == (longlong *)0x0) goto LAB_1482402b2;
              LOCK();
              plVar3 = plVar5 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
          plVar3 = local_a0;
          plVar9 = uStack_78;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_a0 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar9 = uStack_78;
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
                plVar9 = uStack_78;
              }
            }
          }
LAB_1482402b2:
          if (plVar9 == (longlong *)0x0) goto LAB_1482402f2;
LAB_1482402d1:
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar8 = *plVar9;
LAB_1482402ef:
              (**(code **)(lVar8 + 0x10))(plVar9);
            }
          }
LAB_1482402f2:
          if (*param_2 != (longlong *)0x0) {
            if (plVar4 != (longlong *)0x0) goto LAB_148240604;
            goto LAB_1482404b4;
          }
LAB_1482402fc:
          plVar3 = param_2[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar3 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
        else {
          lVar8 = FUN_14479d2ce(plVar3 + 0xb);
          if (lVar8 != param_3) {
            if (*param_2 == (longlong *)0x0) goto LAB_1482402fc;
            goto LAB_1482404b4;
          }
          *param_2 = plVar3;
          plVar9 = param_2[1];
          if (plVar9 != (longlong *)0x0) {
            param_2[1] = (longlong *)0x0;
            goto LAB_1482402d1;
          }
          if (plVar3 != (longlong *)0x0) goto LAB_1482404b4;
        }
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar12);
    }
    lVar8 = local_b0;
    plVar3 = (longlong *)(local_b0 + 0x120);
    plVar4 = (longlong *)(local_b0 + 0x130);
    local_80 = (longlong *)&DAT_100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    uStack_78 = plVar4;
    if (*(int *)(local_b0 + 0x148) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar11 = *(int *)(lVar8 + 0x148);
    }
    uStack_88 = CONCAT44(uStack_64,uStack_68);
    local_90 = local_70;
    uVar6 = local_90;
    local_a0 = local_80;
    uStack_98 = (undefined4)uStack_78;
    uStack_94 = uStack_78._4_4_;
    local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    iVar7 = local_90._4_4_;
    local_a8 = plVar3;
    if ((local_90._4_4_ != iVar11) || (local_90 = uVar6, uStack_78 != plVar4)) {
      do {
        local_90 = uVar6;
        lVar8 = (longlong)*(int *)(*local_a8 + 0x10 + (longlong)iVar7 * 0x20);
        if (lVar8 != 0) {
          puVar10 = *(undefined8 **)(*local_a8 + 8 + (longlong)iVar7 * 0x20);
          puVar12 = puVar10 + lVar8 * 2;
          do {
            local_80 = (longlong *)*puVar10;
            plVar9 = (longlong *)puVar10[1];
            uStack_78 = plVar9;
            if (plVar9 == (longlong *)0x0) {
              FUN_148243a3a(param_2,&local_80,param_3);
            }
            else {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              FUN_148243a3a(param_2,&local_80,param_3);
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar5 = plVar9 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar9 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar9 + 0x10))(plVar9);
                  }
                }
              }
            }
            if (*param_2 != (longlong *)0x0) goto LAB_1482404b4;
            plVar9 = param_2[1];
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar9 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 != puVar12);
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar7 = local_90._4_4_;
        uVar6 = local_90;
      } while (local_a8 != plVar3 ||
               ((longlong *)CONCAT44(uStack_94,uStack_98) != plVar4 || local_90._4_4_ != iVar11));
    }
  }
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
LAB_1482404b4:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148240662 FUN_148240662 body=317 status=ok
// SIG undefined FUN_148240662(void)

longlong * FUN_148240662(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    lVar4 = FUN_14110d11e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (lVar5 = param_3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       == lVar4 + 0x30)) goto LAB_1482406ae;
  }
  lVar5 = 0;
LAB_1482406ae:
  FUN_1482401d2(param_1,param_2,lVar5);
  if ((*param_2 == 0) && ((lVar5 == 0 || (*(char *)(lVar5 + 0x2fc) == '\0')))) {
    lVar4 = FUN_14823f9bc(param_3);
    if (lVar4 != 0) {
      FUN_1482401d2(param_1,&local_38,lVar4);
      plVar1 = local_30;
      if (&local_38 != param_2) {
        *param_2 = local_38;
        local_38 = 0;
        plVar3 = (longlong *)param_2[1];
        if (local_30 != plVar3) {
          local_30 = (longlong *)0x0;
          param_2[1] = (longlong)plVar1;
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
      }
      plVar1 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482407a0 FUN_1482407a0 body=206 status=ok
// SIG undefined FUN_1482407a0(void)

longlong FUN_1482407a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar5 = (longlong)*(int *)(param_1 + 0x60) << 6;
    do {
      lVar3 = FUN_14479d2ce(lVar4);
      if (lVar3 == param_2) {
        if (lVar4 != 0) goto LAB_14824084b;
        break;
      }
      lVar4 = lVar4 + 0x40;
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  uStack_58 = 0;
  uStack_57 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14485c47a(&local_68,param_2);
  iVar2 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar2 + 1U;
  if (*(uint *)(param_1 + 100) < iVar2 + 1U) {
    FUN_14825c680(plVar1,iVar2);
  }
  FUN_143af3040(*plVar1 + (longlong)iVar2 * 0x40,&local_68);
  lVar4 = (longlong)iVar2 * 0x40 + *plVar1;
  FUN_1482439e4(&local_68);
LAB_14824084b:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148240870 FUN_148240870 body=232 status=ok
// SIG undefined FUN_148240870(void)

undefined8 FUN_148240870(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14ae6b5a0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14ae6b530;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_14824095a;
  FUN_14825a378(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824095a FUN_14824095a body=141 status=ok
// SIG undefined FUN_14824095a(void)

void FUN_14824095a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (**(code **)(*param_2 + 0x2d0))(param_2);
  if (lVar2 == *(longlong *)(param_1 + 0x20)) {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_2);
    iVar1 = *(int *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x70) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x74) < iVar1 + 1U) {
      FUN_14824a3da((longlong *)(param_1 + 0x68),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 8) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482409e8 FUN_1482409e8 body=244 status=ok
// SIG undefined FUN_1482409e8(void)

undefined8 FUN_1482409e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14ae6b610;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148240ade;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148240ade FUN_148240ade body=414 status=ok
// SIG undefined FUN_148240ade(void)

void FUN_148240ade(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
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
  FUN_143af5ef4();
  if (0 < *(int *)(param_1 + 0x80)) {
    plVar1 = (longlong *)(param_1 + 0x78);
    uVar7 = 0;
    do {
      iVar5 = (int)uVar7;
      cVar4 = FUN_14825dc3c(*(undefined8 *)(*plVar1 + uVar7 * 0x10));
      if (cVar4 == '\0') {
        FUN_14825b32c(plVar1,uVar7);
        FUN_14825b138(plVar1);
        iVar5 = iVar5 + -1;
      }
      uVar7 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 0x80));
  }
  plVar1 = (longlong *)(param_1 + 0x120);
  lVar2 = param_1 + 0x130;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x148);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar2)) {
    do {
      if (0 < *(int *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20)) {
        lVar3 = *local_80 + (longlong)iStack_64 * 0x20;
        plVar8 = (longlong *)(lVar3 + 8);
        uVar7 = 0;
        do {
          iVar6 = (int)uVar7;
          cVar4 = FUN_14825dc3c(*(undefined8 *)(*plVar8 + uVar7 * 0x10));
          if (cVar4 == '\0') {
            FUN_14825b32c(plVar8,uVar7);
            FUN_14825b138(plVar8);
            iVar6 = iVar6 + -1;
          }
          uVar7 = (ulonglong)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < *(int *)(lVar3 + 0x10));
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148240c7e FUN_148240c7e body=244 status=ok
// SIG undefined FUN_148240c7e(void)

undefined8 FUN_148240c7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149f04f50;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14ae6b680;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148240d74;
  FUN_1469f4648(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148240d74 FUN_148240d74 body=81 status=ok
// SIG undefined FUN_148240d74(void)

void FUN_148240d74(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (*param_2 == '\x02') {
    iVar1 = *(int *)(param_2 + 4);
    iVar3 = FUN_14823ec88();
    if ((iVar1 == iVar3) && (*(longlong *)(param_1 + 0x88) != 0)) {
      cVar2 = FUN_14825ea6e(*(longlong *)(param_1 + 0x88),param_4);
      if (cVar2 != '\0') {
        FUN_14825f19c(*(undefined8 *)(param_1 + 0x88));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148240dcc FUN_148240dcc body=596 status=ok
// SIG undefined FUN_148240dcc(void)

void FUN_148240dcc(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  lVar4 = DAT_14cb0d2b0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(DAT_14cb0d2b0 + 0x168);
  if (lVar7 != 0) {
    lVar3 = FUN_14129ed0a();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar7 = *(longlong *)(lVar4 + 0x168);
      goto LAB_148240e26;
    }
  }
  lVar7 = 0;
LAB_148240e26:
  lVar4 = FUN_145a7a214();
  uVar5 = DAT_14c98e618;
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    plVar6 = (longlong *)FUN_145b1117c();
    lVar7 = plVar6[0x22];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar7 = plVar6[0x22];
    }
    local_38 = *(undefined8 *)(param_1 + 0x38);
    local_30 = *(longlong *)(param_1 + 0x40);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_1456d46ea(uVar5,&local_38,lVar7 + 0x54);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1401cb356();
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_40 = *(longlong *)(param_1 + 0x50);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_48);
    uVar5 = FUN_1401cb356();
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar2 = local_68;
    local_60 = 3;
    *local_68 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_68[2] = lVar4;
    *local_68 = &PTR_FUN_14ae6b6f0;
    local_68[3] = 0;
    FUN_14485c47a(local_68 + 3,param_1);
    puVar2[4] = FUN_143aee064;
    local_78 = 0;
    FUN_1405f67fc(uVar5,&local_58,&local_68,L"UCommonUIActionRouterBase_Tick");
    if ((undefined8 *)(param_1 + 0x48) != &local_58) {
      *(undefined8 *)(param_1 + 0x48) = local_58;
      local_58 = 0;
      plVar6 = *(longlong **)(param_1 + 0x50);
      *(longlong **)(param_1 + 0x50) = local_50;
      local_50 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    FUN_1449db362(&local_68);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148241022 FUN_148241022 body=243 status=ok
// SIG undefined FUN_148241022(void)

void FUN_148241022(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c98e618 != 0) {
    FUN_140457ffc(DAT_14c98e618 + 0x5f8,param_1);
    lVar1 = DAT_14c98e618;
    local_20 = param_1[7];
    local_18 = param_1[8];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    FUN_145a3846a(lVar1,&local_20);
  }
  FUN_1401cb356();
  local_30 = param_1[9];
  local_28 = param_1[10];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_30);
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0x2f8))(param_1);
  FUN_144a65a1e(param_1[0x22],(int)param_1[0x23]);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (*(int *)((longlong)param_1 + 0x11c) != 0) {
    FUN_145811e2e(param_1 + 0x22,0);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148241116 FUN_148241116 body=93 status=ok
// SIG undefined FUN_148241116(void)

void FUN_148241116(longlong *param_1,char param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(char *)(param_1 + 6) = param_2;
  if (param_2 == '\0') {
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(*param_1 + 0x2f8))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_14824117a();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 14824117a FUN_14824117a body=554 status=ok
// SIG undefined FUN_14824117a(void)

void FUN_14824117a(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = (**(code **)(*DAT_14cb46210 + 0xa8))();
  if (cVar3 == '\0') {
    if ((char)param_1[6] != '\x01') goto LAB_1482411e5;
  }
  else {
    lVar6 = param_1[0x10];
    if ((longlong)(int)lVar6 != 0) {
      lVar7 = param_1[0xf];
      lVar11 = 0;
      do {
        cVar3 = FUN_143af7716(*(undefined8 *)(lVar7 + lVar11));
        if (cVar3 != '\0') goto LAB_1482411e5;
        lVar11 = lVar11 + 0x10;
      } while ((longlong)(int)lVar6 * 0x10 != lVar11);
    }
  }
  lVar6 = FUN_1482413a6(param_1);
  if (lVar6 != 0) {
    if ((longlong)*(int *)(lVar6 + 0x38) != 0) {
      puVar10 = *(ulonglong **)(lVar6 + 0x30);
      puVar1 = puVar10 + *(int *)(lVar6 + 0x38);
      do {
        uVar2 = *puVar10;
        if (uVar2 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar2);
        }
        local_50 = uVar2;
        if ((~DAT_14c950c29 & 1) == 0 && uVar2 != 0) {
          FUN_1456cec3c(uVar2);
        }
        if ((uVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(uVar2);
        }
        uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        param_3 = &local_50;
        iVar5 = FUN_14825b25c(param_1 + 0x24,uVar4 >> 0x10 ^ uVar4,param_3);
        if (iVar5 != -1) {
          lVar7 = param_1[0x24];
          if ((lVar7 + (longlong)iVar5 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
            lVar7 = lVar7 + (longlong)iVar5 * 0x20;
            lVar11 = (longlong)*(int *)(lVar7 + 0x10);
            if (lVar11 != 0) {
              lVar7 = *(longlong *)(lVar7 + 8);
              lVar8 = 0;
              do {
                cVar3 = (**(code **)(**(longlong **)(lVar7 + lVar8) + 0x18))();
                if ((cVar3 != '\0') &&
                   (cVar3 = FUN_14825dc46(*(undefined8 *)(lVar7 + lVar8)), cVar3 != '\0')) {
                  local_60 = *(undefined8 *)(lVar7 + lVar8);
                  local_58 = *(longlong *)(lVar7 + 8 + lVar8);
                  if (local_58 != 0) {
                    LOCK();
                    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                    UNLOCK();
                  }
                  cVar3 = FUN_143af7cf8(local_60,&local_60,1);
                  if (cVar3 == '\0') {
                    FUN_143af85ae(*(undefined8 *)(lVar7 + lVar8));
                  }
                  goto LAB_1482411e5;
                }
                lVar8 = lVar8 + 0x10;
              } while (lVar11 * 0x10 != lVar8);
            }
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar1);
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar6 + 0x41));
    FUN_14825d44e(&local_50,*(undefined1 *)(lVar6 + 0x40),uVar9,1);
    (**(code **)(*param_1 + 0x300))
              (param_1,&local_50,
               CONCAT71((int7)((ulonglong)uVar9 >> 8),*(undefined1 *)((longlong)param_1 + 0x37)) ^ 1
              );
  }
LAB_1482411e5:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482413a6 FUN_1482413a6 body=61 status=ok
// SIG undefined FUN_1482413a6(void)

longlong FUN_1482413a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140e94dc2(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0xf8);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 1482413e4 FUN_1482413e4 body=28 status=ok
// SIG undefined FUN_1482413e4(void)

undefined8 FUN_1482413e4(undefined8 param_1,undefined8 param_2)

{
  FUN_148241400(param_2,param_1);
  return param_2;
}



// FUNCTION 148241400 FUN_148241400 body=257 status=ok
// SIG undefined FUN_148241400(void)

longlong * FUN_148241400(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x100,0x10);
  FUN_14823dde8(lVar2,param_2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae6b760;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if ((lVar2 == 0) ||
     (((*(longlong *)(lVar2 + 8) != 0 && (*(longlong *)(lVar2 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))))) goto LAB_1482414ea;
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_1482414ea;
LAB_1482414a1:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x10) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_1482414ea;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) goto LAB_1482414a1;
      *(longlong **)(lVar2 + 0x10) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1482414ea:
  (**(code **)(*(longlong *)*param_1 + 0xc0))();
  return param_1;
}



// FUNCTION 148241502 FUN_148241502 body=531 status=ok
// SIG undefined FUN_148241502(void)

char FUN_148241502(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  undefined7 uVar7;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar6 = CONCAT71(uVar7,2);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    uVar6 = CONCAT71(uVar7,*(undefined1 *)(param_1 + 0x33));
  }
  if ((param_3 & 0xfffffffd) == 0) {
    FUN_14011b67e(param_1 + 0x110,param_2);
  }
  else if (param_3 == 1) {
    FUN_148241716(param_1 + 0x110,param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x98);
  local_40 = *param_2;
  local_38 = param_2[1];
  local_30 = param_2[2];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  iVar5 = (**(code **)(*plVar3 + 8))(plVar3,uVar6 & 0xffffffff,&local_40,param_3);
  if (iVar5 == 2) {
    if ((*(char *)(param_1 + 0x30) == '\x01') &&
       (plVar3 = *(longlong **)(param_1 + 0x88), plVar3 != (longlong *)0x0)) {
      local_58 = *param_2;
      local_50 = param_2[1];
      local_48 = param_2[2];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      iVar5 = (**(code **)(*plVar3 + 8))(plVar3,uVar6 & 0xffffffff,&local_58,param_3);
      if (iVar5 != 2) goto LAB_1482415fd;
    }
    local_70 = *param_2;
    local_68 = param_2[1];
    local_60 = param_2[2];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    iVar5 = FUN_148241782(param_1,uVar6 & 0xffffffff,&local_70,param_3);
  }
LAB_1482415fd:
  local_98 = *param_2;
  local_90 = param_2[1];
  local_88 = (longlong *)param_2[2];
  if (local_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_80 = (undefined1)uVar6;
  local_78 = param_1;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      FUN_143aee554(&local_98,0);
    }
    cVar4 = FUN_143aee554(&local_98,param_3);
    if (cVar4 == '\0') {
      cVar4 = FUN_148229960(param_1);
      cVar4 = cVar4 + '\x01';
      goto LAB_148241655;
    }
  }
  cVar4 = '\0';
LAB_148241655:
  plVar3 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_2[2];
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
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return cVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148241716 FUN_148241716 body=107 status=ok
// SIG undefined FUN_148241716(void)

void FUN_148241716(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar3 = 0;
  bVar1 = false;
  do {
    uVar3 = (ulonglong)(int)uVar3;
    plVar4 = (longlong *)(uVar3 * 0x18 + *param_1);
    while (*plVar4 != *param_2) {
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 3;
      if ((longlong)iVar2 <= (longlong)uVar3) {
        if (!bVar1) {
          return;
        }
        goto LAB_148241772;
      }
    }
    FUN_14825af9a(param_1,uVar3 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar3 < iVar2);
LAB_148241772:
  FUN_14825af5a(param_1);
  return;
}



// FUNCTION 148241782 FUN_148241782 body=619 status=ok
// SIG undefined FUN_148241782(void)

int FUN_148241782(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong *puVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined1 auStack_a8 [35];
  undefined1 local_85;
  undefined4 local_84;
  undefined8 *local_80;
  ulonglong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_85 = param_2;
  local_84 = param_4;
  local_80 = param_3;
  lVar8 = FUN_1482413a6();
  iVar7 = 2;
  if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x38) != 0)) {
    puVar13 = *(ulonglong **)(lVar8 + 0x30);
    puVar10 = puVar13 + *(int *)(lVar8 + 0x38);
    plVar11 = (longlong *)(param_1 + 0x120);
    do {
      uVar3 = *puVar13;
      if (uVar3 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar3);
      }
      if ((~DAT_14c950c29 & 1) == 0 && uVar3 != 0) {
        FUN_1456cec3c(uVar3);
      }
      local_50 = uVar3;
      if ((~DAT_14c950c29 & 1) == 0 && uVar3 != 0) {
        FUN_1456cec3c(uVar3);
      }
      if ((uVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(uVar3);
      }
      uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      iVar6 = FUN_14825b25c(plVar11,uVar5 >> 0x10 ^ uVar5,&local_50);
      if (iVar6 != -1) {
        if ((*plVar11 + (longlong)iVar6 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
          lVar8 = *plVar11 + (longlong)iVar6 * 0x20;
          lVar9 = (longlong)*(int *)(lVar8 + 0x10);
          local_78 = puVar10;
          local_70 = plVar11;
          if (lVar9 == 0) {
            bVar15 = 0;
            uVar14 = 0;
          }
          else {
            lVar8 = *(longlong *)(lVar8 + 8);
            lVar12 = 0;
            uVar14 = 0;
            bVar15 = 0;
            do {
              cVar4 = (**(code **)(**(longlong **)(lVar8 + lVar12) + 0x18))();
              if ((cVar4 != '\0') && (iVar7 == 2)) {
                plVar11 = *(longlong **)(lVar8 + lVar12);
                local_68 = *local_80;
                local_60 = local_80[1];
                local_58 = local_80[2];
                if (local_58 != 0) {
                  LOCK();
                  *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                  UNLOCK();
                }
                iVar7 = (**(code **)(*plVar11 + 8))(plVar11,local_85,&local_68,local_84);
                bVar15 = bVar15 | iVar7 == 0;
                cVar4 = FUN_148216404(uVar3);
                uVar14 = 1;
                if (cVar4 != '\0') break;
              }
              lVar12 = lVar12 + 0x10;
            } while (lVar9 * 0x10 != lVar12);
          }
          cVar4 = FUN_14821641e(uVar3,uVar14,bVar15);
          puVar10 = local_78;
          plVar11 = local_70;
          if (cVar4 != '\0') break;
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar10);
  }
  plVar11 = (longlong *)local_80[2];
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 1482419ee FUN_1482419ee body=82 status=ok
// SIG undefined FUN_1482419ee(void)

void FUN_1482419ee(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x40 + *param_1);
  FUN_1482439e4(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_14825b09c(param_1);
  return;
}



// FUNCTION 148241a40 FUN_148241a40 body=899 status=ok
// SIG undefined FUN_148241a40(void)

void FUN_148241a40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*param_2 == 0) || (plVar11 = (longlong *)param_2[1], plVar11 == (longlong *)0x0)) ||
     ((int)plVar11[1] < 1)) goto LAB_148241bbd;
  iVar7 = (int)plVar11[1];
  lVar10 = 0;
  do {
    if (iVar7 == 0) {
      plVar11 = (longlong *)0x0;
      goto LAB_148241aa6;
    }
    LOCK();
    iVar8 = (int)plVar11[1];
    bVar14 = iVar7 == iVar8;
    if (bVar14) {
      *(int *)(plVar11 + 1) = iVar7 + 1;
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
    UNLOCK();
  } while (!bVar14);
  lVar10 = *param_2;
LAB_148241aa6:
  local_78 = lVar10;
  local_70 = plVar11;
  lVar9 = FUN_14479d2ce(lVar10 + 0x58);
  if (lVar9 != 0) {
    FUN_140457ffc(lVar9 + 0x3b8);
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar9) == lVar10) {
        if (*(longlong *)(param_1 + 0x88) == lVar10 && *(longlong *)(param_1 + 0x88) != 0) {
          cVar6 = FUN_143af7716();
          if (((cVar6 != '\0') &&
              (lVar10 = FUN_14479d2ce(*(longlong *)(param_1 + 0x88) + 0x58), lVar10 != 0)) &&
             (plVar11 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x88) + 0x58),
             (char)plVar11[0x6b] == '\x01')) {
            (**(code **)(*plVar11 + 0x4e0))(plVar11);
          }
          local_88 = *(undefined8 *)(param_1 + 0x88);
          local_80 = *(longlong *)(param_1 + 0x90);
          if (local_80 != 0) {
            LOCK();
            *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + 1;
            UNLOCK();
          }
          FUN_143aeea88(param_1,&local_88);
        }
        FUN_148241dc4(param_1 + 0x78,&local_78);
        if (*(int *)(param_1 + 0x80) == 0) {
          if (*(char *)(param_1 + 0x37) == '\x01') {
            *(undefined1 *)(param_1 + 0x37) = 0;
          }
          FUN_14824117a(param_1);
        }
        goto LAB_148241b96;
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x80) * 0x10 != lVar9);
  }
  plVar11 = (longlong *)(param_1 + 0x120);
  lVar9 = param_1 + 0x130;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_60 = lVar9;
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x148);
  }
  uStack_90 = CONCAT44(uStack_4c,uStack_50);
  local_98 = local_58;
  uVar5 = local_98;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_98._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  local_b0 = plVar11;
  if ((local_98._4_4_ == iVar7) && (uStack_60 == lVar9)) {
LAB_148241b8a:
    local_98 = uVar5;
    FUN_14479d2ce(lVar10 + 0x58);
  }
  else {
    iVar13 = 0;
    iVar8 = local_98._4_4_;
    local_c8 = lVar9;
    local_98 = uVar5;
    do {
      lVar3 = *local_b0;
      local_b8 = local_70;
      lVar12 = lVar10;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        lVar12 = local_78;
      }
      local_c0 = lVar10;
      iVar8 = FUN_148241e2e(lVar3 + (longlong)iVar8 * 0x20 + 8,&local_c0);
      if (*(int *)(lVar12 + 0xc0) != 0) {
        puVar4 = *(undefined8 **)(lVar12 + 0xb8);
        lVar9 = local_c8;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72((longlong *)(lVar12 + 0xb8),0,0,0x10);
          *(undefined4 *)(lVar12 + 0xc0) = 0;
          lVar12 = local_78;
          lVar9 = local_c8;
        }
      }
      iVar13 = iVar13 + iVar8;
      FUN_143af7bf6(lVar12,0);
      lVar10 = local_78;
      FUN_143af83b6(local_78);
      local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
      FUN_1449c0562(&local_a8);
      iVar8 = local_98._4_4_;
    } while (local_b0 != plVar11 ||
             (CONCAT44(uStack_9c,uStack_a0) != lVar9 || local_98._4_4_ != iVar7));
    uVar5 = local_98;
    if (iVar13 < 1) goto LAB_148241b8a;
  }
LAB_148241b96:
  plVar11 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_148241bbd:
  plVar11 = (longlong *)param_2[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148241dc4 FUN_148241dc4 body=106 status=ok
// SIG undefined FUN_148241dc4(void)

void FUN_148241dc4(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar3 = 0;
  bVar1 = false;
  do {
    uVar3 = (ulonglong)(int)uVar3;
    plVar4 = (longlong *)(uVar3 * 0x10 + *param_1);
    while (*plVar4 != *param_2) {
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
      if ((longlong)iVar2 <= (longlong)uVar3) {
        if (!bVar1) {
          return;
        }
        goto LAB_148241e1f;
      }
    }
    FUN_14825b176(param_1,uVar3 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar3 < iVar2);
LAB_148241e1f:
  FUN_14825b138(param_1);
  return;
}



// FUNCTION 148241e2e FUN_148241e2e body=108 status=ok
// SIG undefined FUN_148241e2e(void)

undefined4 FUN_148241e2e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar4 = FUN_14825cc42();
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148241e9c FUN_148241e9c body=1177 status=ok
// SIG undefined FUN_148241e9c(void)

void FUN_148241e9c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [40];
  ulonglong *local_90;
  longlong local_88;
  longlong *local_80;
  ulonglong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar12 = (longlong *)param_2[1];
  bVar5 = true;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
    lVar13 = 0;
  }
  else {
    iVar8 = (int)plVar12[1];
    lVar13 = 0;
    do {
      if (iVar8 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_148241ef2;
      }
      LOCK();
      iVar9 = (int)plVar12[1];
      bVar14 = iVar8 == iVar9;
      if (bVar14) {
        *(int *)(plVar12 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar14);
    lVar13 = *param_2;
    bVar5 = false;
  }
LAB_148241ef2:
  lVar10 = FUN_14479d2ce(lVar13 + 0x58);
  if ((longlong)(int)param_1[0x10] != 0) {
    lVar11 = 0;
    do {
      if (*(longlong *)(param_1[0xf] + lVar11) == lVar13) {
        iVar8 = FUN_14825e172(lVar13);
        if (0 < iVar8) {
          iVar8 = -1;
          if (param_1[0x11] != 0) {
            iVar8 = FUN_14825e172();
          }
          iVar9 = FUN_14825e172(lVar13);
          if ((iVar8 < iVar9) && (lVar10 = param_1[4], lVar10 != 0)) {
            lVar11 = FUN_1449db7f2();
            if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
               ((*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30 &&
                (*(longlong *)(lVar10 + 0x78) != 0)))) {
              if (!bVar5) {
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
              }
              local_60 = lVar13;
              local_58 = plVar12;
              (**(code **)(*param_1 + 0x2f8))(param_1,&local_60);
            }
          }
          goto LAB_148241f2c;
        }
        break;
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)(int)param_1[0x10] * 0x10 != lVar11);
  }
  if ((lVar10 != 0) && (FUN_14821d6e2(lVar10,&local_50), uVar4 = local_50, local_50 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_50);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(local_50);
    }
    plVar1 = param_1 + 0x24;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar4);
    }
    uVar7 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    iVar8 = FUN_14825b25c(plVar1,uVar7 >> 0x10 ^ uVar7,&local_50);
    if ((iVar8 != -1) &&
       (lVar10 = (longlong)iVar8 * 0x20 + *plVar1, lVar11 = lVar10 + 8, lVar11 != 0 && lVar10 != 0))
    {
      if (!bVar5) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_70 = lVar13;
      local_68 = plVar12;
      cVar6 = FUN_148242336(lVar11,&local_70);
      if (cVar6 != '\0') {
        FUN_143af7bf6(lVar13,1);
        if (*(int *)(lVar13 + 0xc0) != 3) {
          FUN_1446efa72((longlong *)(lVar13 + 0xb8),0,3,0x10);
          *(undefined4 *)(lVar13 + 0xc0) = 3;
        }
        puVar3 = *(undefined8 **)(lVar13 + 0xb8);
        *puVar3 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        puVar3[2] = lVar11;
        *puVar3 = &PTR_FUN_14ae6b610;
        puVar3[3] = 0;
        FUN_14485c47a(puVar3 + 3,param_1);
        puVar3[4] = &LAB_1482423a0;
        lVar10 = FUN_1482413a6(param_1);
        if ((lVar10 != 0) && ((longlong)*(int *)(lVar10 + 0x38) != 0)) {
          local_90 = *(ulonglong **)(lVar10 + 0x30);
          local_78 = local_90 + *(int *)(lVar10 + 0x38);
          local_80 = param_1 + 0x19;
          do {
            uVar4 = *local_90;
            if (uVar4 != 0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(uVar4);
            }
            local_50 = uVar4;
            if ((~DAT_14c950c29 & 1) == 0 && uVar4 != 0) {
              FUN_1456cec3c(uVar4);
            }
            if ((uVar4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(uVar4);
            }
            uVar7 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
            uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            iVar8 = FUN_14825b25c(plVar1,uVar7 >> 0x10 ^ uVar7,&local_50);
            if (iVar8 != -1) {
              if ((*plVar1 + (longlong)iVar8 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
                lVar10 = *plVar1 + (longlong)iVar8 * 0x20;
                lVar11 = (longlong)*(int *)(lVar10 + 0x10);
                if (lVar11 != 0) {
                  local_88 = *(longlong *)(lVar10 + 8);
                  lVar10 = 0;
                  do {
                    cVar6 = (**(code **)(**(longlong **)(local_88 + lVar10) + 0x18))();
                    if (cVar6 != '\0') {
                      if ((*(longlong *)(local_88 + lVar10) == lVar13) && (param_1[0x11] == 0)) {
                        cVar6 = FUN_14825dc46();
                        if (cVar6 != '\0') {
                          FUN_143af83b6(lVar13);
                        }
                        FUN_1447f69b6(local_80);
                      }
                      break;
                    }
                    lVar10 = lVar10 + 0x10;
                  } while (lVar11 * 0x10 != lVar10);
                }
              }
            }
            local_90 = local_90 + 1;
          } while (local_90 != local_78);
        }
      }
    }
  }
LAB_148241f2c:
  if (!bVar5) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)param_2[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148242336 FUN_148242336 body=105 status=ok
// SIG undefined FUN_148242336(void)

ulonglong FUN_148242336(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong unaff_RSI;
  longlong lVar4;
  bool bVar5;
  
  if ((longlong)(int)param_1[1] == 0) {
    unaff_RSI = 0;
  }
  else {
    lVar4 = 0;
    do {
      bVar5 = *(longlong *)(*param_1 + lVar4) == *param_2;
      unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),bVar5);
      if (bVar5) break;
      bVar5 = (longlong)(int)param_1[1] * 0x10 + -0x10 != lVar4;
      lVar4 = lVar4 + 0x10;
    } while (bVar5);
  }
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
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1482423ac FUN_1482423ac body=610 status=ok
// SIG undefined FUN_1482423ac(void)

uint FUN_1482423ac(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  byte bVar15;
  ulonglong *puVar16;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  uint local_80;
  undefined4 local_7c;
  ulonglong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_81 = param_2;
  local_7c = param_4;
  lVar8 = FUN_1482413a6();
  if ((lVar8 == 0) || ((longlong)*(int *)(lVar8 + 0x38) == 0)) {
    uVar11 = 0;
  }
  else {
    puVar9 = *(ulonglong **)(lVar8 + 0x30);
    puVar16 = puVar9 + *(int *)(lVar8 + 0x38);
    plVar14 = (longlong *)(param_1 + 0x120);
    uVar11 = 0;
    do {
      uVar3 = *puVar9;
      if (uVar3 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar3);
      }
      if ((~DAT_14c950c29 & 1) == 0 && uVar3 != 0) {
        FUN_1456cec3c(uVar3);
      }
      local_50 = uVar3;
      if ((~DAT_14c950c29 & 1) == 0 && uVar3 != 0) {
        FUN_1456cec3c(uVar3);
      }
      if ((uVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(uVar3);
      }
      uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      iVar6 = FUN_14825b25c(plVar14,uVar5 >> 0x10 ^ uVar5,&local_50);
      if (iVar6 != -1) {
        if ((*plVar14 + (longlong)iVar6 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
          lVar8 = *plVar14 + (longlong)iVar6 * 0x20;
          lVar10 = (longlong)*(int *)(lVar8 + 0x10);
          local_80 = uVar11;
          local_78 = puVar16;
          local_70 = plVar14;
          if (lVar10 == 0) {
            bVar15 = 0;
            uVar13 = 0;
          }
          else {
            lVar8 = *(longlong *)(lVar8 + 8);
            lVar12 = 0;
            uVar13 = 0;
            bVar15 = 0;
            do {
              cVar4 = FUN_143af7716(*(undefined8 *)(lVar8 + lVar12));
              if (cVar4 != '\0') {
                plVar14 = *(longlong **)(lVar8 + lVar12);
                local_68 = *param_3;
                local_60 = param_3[1];
                local_58 = param_3[2];
                if (local_58 != 0) {
                  LOCK();
                  *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                  UNLOCK();
                }
                uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14,local_81,&local_68,local_7c);
                bVar15 = bVar15 | (byte)uVar7;
                cVar4 = FUN_148216404(uVar3,uVar7);
                uVar13 = 1;
                if (cVar4 != '\0') break;
              }
              lVar12 = lVar12 + 0x10;
            } while (lVar10 * 0x10 != lVar12);
          }
          uVar11 = CONCAT31((int3)(local_80 >> 8),(byte)local_80 | bVar15);
          cVar4 = FUN_14821641e(uVar3,uVar13,bVar15 & 1);
          plVar14 = local_70;
          puVar16 = local_78;
          if (cVar4 != '\0') break;
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar16);
  }
  plVar14 = (longlong *)param_3[2];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 148242610 FUN_148242610 body=2540 status=ok
// SIG undefined FUN_148242610(void)

void FUN_148242610(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  undefined4 local_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_c8 = 0;
  uStack_c0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar14 = *(int *)(param_1 + 0x70);
  local_138 = param_1;
  if ((longlong)iVar14 != 0) {
    lVar15 = *(longlong *)(param_1 + 0x68);
    lVar16 = 0;
    do {
      local_b8 = *(longlong **)(lVar15 + lVar16);
      cVar6 = FUN_144729dda(&local_b8);
      if (cVar6 != '\0') {
        uVar10 = FUN_14479d2ce(&local_b8);
        FUN_140760c2c(uVar10,&local_120);
        plVar4 = local_120;
        plVar13 = (longlong *)CONCAT44(uStack_114,local_118);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar13 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        if (plVar4 != (longlong *)0x0) {
          lVar11 = FUN_14479d2ce(&local_b8);
          if (*(char *)(lVar11 + 0x2fc) == '\x01') {
            local_120 = (longlong *)0x0;
LAB_148242805:
            uVar10 = FUN_14479d2ce(&local_b8);
            iVar8 = (int)uStack_c0;
            uVar9 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
            if (uStack_c0._4_4_ < uVar9) {
              plVar13 = &local_c8;
LAB_1482428d0:
              FUN_14825b946(plVar13,iVar8);
            }
            else {
              plVar13 = &local_c8;
            }
          }
          else {
            uVar10 = FUN_14479d2ce(&local_b8);
            local_120 = (longlong *)FUN_14823f9bc(uVar10);
            if (local_120 == (longlong *)0x0) goto LAB_148242805;
            uVar9 = ((uint)((ulonglong)local_120 >> 0x14) & 0xffff ^
                    (uint)((ulonglong)local_120 >> 4)) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            plVar13 = (longlong *)FUN_14825b3a2(&local_98,uVar9 >> 0x10 ^ uVar9,&local_120);
            uVar10 = FUN_14479d2ce(&local_b8);
            iVar8 = (int)plVar13[1];
            *(uint *)(plVar13 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)plVar13 + 0xc) < iVar8 + 1U) goto LAB_1482428d0;
          }
          *(undefined8 *)(*plVar13 + (longlong)iVar8 * 8) = uVar10;
        }
      }
      lVar11 = local_c8;
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar14 * 8 != lVar16);
    lVar15 = (longlong)(int)uStack_c0;
    if (lVar15 != 0) {
      local_128 = local_138 + 0x120;
      local_130 = (longlong *)(local_138 + 0x78);
      lVar16 = 0;
      do {
        lVar12 = *(longlong *)(lVar11 + lVar16);
        FUN_14825f040(&local_120,local_138,lVar12);
        plVar13 = local_120;
        uStack_b0 = (longlong *)CONCAT44(uStack_114,local_118);
        local_b8 = local_120;
        if (uStack_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)uStack_b0 + 0xc) = *(int *)((longlong)uStack_b0 + 0xc) + 1;
          UNLOCK();
        }
        plVar4 = local_120 + 7;
        if ((int)local_120[8] != 3) {
          FUN_1446efa72(plVar4,0,3,0x10);
          *(undefined4 *)(plVar13 + 8) = 3;
        }
        FUN_14825b9cc(*plVar4,local_138,FUN_148241e9c,&local_b8);
        plVar4 = local_120;
        plVar13 = local_120 + 9;
        if ((int)local_120[10] != 3) {
          FUN_1446efa72(plVar13,0,3,0x10);
          *(undefined4 *)(plVar4 + 10) = 3;
        }
        lVar3 = local_138;
        FUN_14825b9cc(*plVar13,local_138,FUN_143aeea88,&local_b8);
        FUN_148242ffe(lVar12 + 0x3b8,&local_e8,lVar3,&local_b8);
        FUN_14821d6e2(lVar12,&local_e8);
        if (local_e8 == (longlong *)0x0) {
          iVar14 = *(int *)(lVar3 + 0x80);
          *(uint *)(lVar3 + 0x80) = iVar14 + 1U;
          if (*(uint *)(lVar3 + 0x84) < iVar14 + 1U) {
            FUN_14825c486(local_130,iVar14);
          }
          lVar3 = *local_130;
          *(longlong **)(lVar3 + (longlong)iVar14 * 0x10) = local_120;
          lVar5 = CONCAT44(uStack_114,local_118);
          *(longlong *)(lVar3 + 8 + (longlong)iVar14 * 0x10) = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
        }
        else {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(local_e8);
          }
          plVar13 = local_e8;
          if ((local_e8 != (longlong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(local_e8);
          }
          uVar9 = ((uint)((ulonglong)plVar13 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar13 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          uVar10 = FUN_14825bdaa(local_128,uVar9 >> 0x10 ^ uVar9,&local_e8);
          local_d8[0] = local_120;
          if (CONCAT44(uStack_114,local_118) != 0) {
            LOCK();
            piVar2 = (int *)(CONCAT44(uStack_114,local_118) + 8);
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          FUN_1482430a8(uVar10,local_d8);
        }
        plVar13 = (longlong *)CONCAT44(uStack_114,local_118);
        local_e8 = local_120;
        local_e0 = plVar13;
        if (plVar13 == (longlong *)0x0) {
          FUN_148243604(&local_e8,&local_98);
        }
        else {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          FUN_148243604(&local_e8,&local_98);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar13 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
        plVar13 = uStack_b0;
        if (*(char *)(lVar12 + 0x358) == '\x01') {
          local_f8 = local_b8;
          local_f0 = uStack_b0;
          if (uStack_b0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)((longlong)uStack_b0 + 0xc) = *(int *)((longlong)uStack_b0 + 0xc) + 1;
            UNLOCK();
          }
          FUN_148241e9c(local_138,&local_f8);
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
        plVar13 = (longlong *)CONCAT44(uStack_114,local_118);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar13 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        lVar16 = lVar16 + 8;
      } while (lVar15 * 8 != lVar16);
    }
  }
  if ((int)uStack_90 - local_64 != 0 && local_64 <= (int)uStack_90) {
    iVar14 = (int)uStack_90 - local_64;
    do {
      local_b8 = (longlong *)&DAT_100000000;
      uStack_b0 = local_88;
      local_a8 = 0xffffffff;
      uStack_a0 = 0;
      if (local_70 == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        iVar8 = local_70;
      }
      uStack_100 = CONCAT44(uStack_9c,uStack_a0);
      local_108 = local_a8;
      uVar10 = local_108;
      local_118 = (undefined4)local_b8;
      uStack_114 = local_b8._4_4_;
      uStack_110 = (undefined4)uStack_b0;
      uStack_10c = uStack_b0._4_4_;
      local_108._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      iVar7 = local_108._4_4_;
      local_120 = &local_98;
      if ((local_108._4_4_ != iVar8) || (local_108 = uVar10, uStack_b0 != local_88)) {
        do {
          local_108 = uVar10;
          FUN_1482401d2(local_138,&local_b8,*(undefined8 *)(*local_120 + (longlong)iVar7 * 0x20));
          plVar13 = uStack_b0;
          if (local_b8 != (longlong *)0x0) {
            local_e8 = local_b8;
            local_e0 = uStack_b0;
            if (uStack_b0 == (longlong *)0x0) {
              FUN_148243604(&local_e8,&local_98);
            }
            else {
              LOCK();
              *(int *)(uStack_b0 + 1) = (int)uStack_b0[1] + 1;
              UNLOCK();
              FUN_148243604(&local_e8,&local_98);
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar13 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
            }
            plVar13 = uStack_b0;
            if (uStack_b0 != (longlong *)0x0) {
              LOCK();
              plVar4 = uStack_b0 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*uStack_b0)(uStack_b0);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
            break;
          }
          if (uStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar4 = uStack_b0 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*uStack_b0)(uStack_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          local_108 = CONCAT44(local_108._4_4_,(uint)local_108 & ~uStack_114);
          FUN_1449c0562(&local_118);
          iVar7 = local_108._4_4_;
          uVar10 = local_108;
        } while (local_120 != &local_98 ||
                 ((longlong *)CONCAT44(uStack_10c,uStack_110) != local_88 ||
                 local_108._4_4_ != iVar8));
      }
      iVar8 = (int)uStack_90 - local_64;
    } while ((iVar8 != 0 && local_64 <= (int)uStack_90) &&
            (bVar17 = iVar14 != iVar8, iVar14 = iVar8, bVar17));
  }
  if ((longlong)*(int *)(local_138 + 0x60) != 0) {
    lVar15 = *(longlong *)(local_138 + 0x58);
    lVar16 = (longlong)*(int *)(local_138 + 0x60) * 0x40 + lVar15;
    do {
      lVar11 = FUN_14479d2ce(lVar15);
      if (lVar11 != 0) {
        FUN_140760c2c(lVar11,&local_120);
        plVar4 = local_120;
        plVar13 = (longlong *)CONCAT44(uStack_114,local_118);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar13 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        lVar12 = local_138;
        if (plVar4 != (longlong *)0x0) {
          FUN_148240662(local_138,&local_120,lVar11);
          FUN_143aee65c(lVar12,&local_120,lVar15 + 8);
          if ((local_120 != (longlong *)0x0) &&
             (lVar12 = FUN_14479d2ce(local_120 + 0xb), lVar12 != 0)) {
            *(longlong **)(lVar12 + 0x378) = local_120;
            plVar4 = (longlong *)CONCAT44(uStack_114,local_118);
            plVar13 = *(longlong **)(lVar12 + 0x380);
            if (plVar13 != plVar4) {
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
                UNLOCK();
                plVar13 = *(longlong **)(lVar12 + 0x380);
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))();
                }
              }
              *(longlong **)(lVar12 + 0x380) = plVar4;
            }
          }
          if (*(char *)(lVar15 + 0x18) == '\0') {
            plVar13 = (longlong *)(longlong)*(int *)(lVar15 + 0x38);
            plVar4 = local_120;
            if (0 < (longlong)plVar13) goto joined_r0x000148242c17;
          }
          else if (local_120 != (longlong *)0x0) {
            FUN_14825e554(local_120,lVar11);
            plVar13 = (longlong *)(longlong)*(int *)(lVar15 + 0x38);
            plVar4 = plVar13;
joined_r0x000148242c17:
            if (plVar4 != (longlong *)0x0) {
              lVar12 = *(longlong *)(lVar15 + 0x30);
              lVar11 = lVar12 + (longlong)plVar13 * 0x18;
              do {
                local_b8 = *(longlong **)(lVar12 + 8);
                uStack_b0 = *(longlong **)(lVar12 + 0x10);
                if (uStack_b0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(uStack_b0 + 1) = (int)uStack_b0[1] + 1;
                  UNLOCK();
                }
                FUN_14825e612(local_120,&local_b8,lVar12);
                plVar13 = uStack_b0;
                if (uStack_b0 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = uStack_b0 + 1;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)*plVar4 == 0) {
                    (**(code **)*uStack_b0)(uStack_b0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar13 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                    }
                  }
                }
                lVar12 = lVar12 + 0x18;
              } while (lVar12 != lVar11);
            }
          }
          plVar13 = (longlong *)CONCAT44(uStack_114,local_118);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar13 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
      }
      lVar15 = lVar15 + 0x40;
    } while (lVar15 != lVar16);
  }
  lVar15 = local_138;
  *(undefined4 *)(local_138 + 0x70) = 0;
  if (*(int *)(local_138 + 0x74) < 0) {
    FUN_14825c50c(local_138 + 0x68);
  }
  iVar14 = *(int *)(lVar15 + 100);
  FUN_145c59a68(*(undefined8 *)(lVar15 + 0x58),*(undefined4 *)(lVar15 + 0x60));
  *(undefined4 *)(lVar15 + 0x60) = 0;
  if ((iVar14 < 0) && (*(int *)(lVar15 + 100) != 0)) {
    FUN_14825c53c(lVar15 + 0x58);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_148248d04(&local_98);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148242ffe FUN_148242ffe body=168 status=ok
// SIG undefined FUN_148242ffe(void)

undefined8
FUN_148242ffe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  FUN_14825b9cc(local_40,param_3,FUN_148241a40,param_4);
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482430a8 FUN_1482430a8 body=1370 status=ok
// SIG undefined FUN_1482430a8(void)

void FUN_1482430a8(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_36c;
  undefined8 *local_368;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  iVar10 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
    FUN_14825c486(param_1,iVar10);
  }
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + (longlong)iVar10 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar10 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  iVar10 = (int)param_1[1];
  if (1 < (longlong)iVar10) {
    lVar4 = *param_1;
    local_368 = param_2;
    memset(local_348,0,0x2f0);
    local_350 = (longlong)iVar10 * 0x10 + lVar4 + -0x10;
    local_358 = lVar4;
    fVar28 = logf((float)iVar10);
    local_348[0] = (int)(longlong)(fVar28 + fVar28);
    plVar15 = &local_358;
    do {
      puVar21 = (undefined8 *)*plVar15;
      puVar19 = (undefined8 *)plVar15[1];
      iVar10 = (int)plVar15[2];
      iVar11 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar21) >> 4);
      uVar17 = (ulonglong)(iVar11 + 1);
      puVar22 = puVar19;
      puVar25 = puVar21;
      local_378 = plVar15;
      if (iVar10 != 0) {
LAB_148243188:
        if (8 < (int)(uint)uVar17) {
          uVar17 = (ulonglong)((uint)uVar17 >> 1);
          uVar6 = puVar21[uVar17 * 2];
          uVar7 = (puVar21 + uVar17 * 2)[1];
          uVar8 = puVar21[1];
          puVar21[uVar17 * 2] = *puVar21;
          (puVar21 + uVar17 * 2)[1] = uVar8;
          local_58._0_4_ = (undefined4)uVar6;
          local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar7;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)puVar21 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar21 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_50._4_4_;
          puVar20 = puVar22 + 2;
          puVar26 = puVar21;
          local_36c = iVar10;
          local_360 = puVar25;
          local_58 = uVar6;
          uStack_50 = uVar7;
          do {
            puVar9 = puVar26 + 2;
            puVar23 = puVar26 + 2;
            do {
              puVar26 = puVar23;
              puVar25 = puVar9;
              if (puVar22 < puVar26) break;
              iVar10 = FUN_14825e172(*puVar21);
              iVar11 = FUN_14825e172(*puVar26);
              puVar9 = puVar25 + 2;
              puVar23 = puVar26 + 2;
            } while (iVar10 <= iVar11);
            puVar9 = puVar20 + -4;
            do {
              puVar23 = puVar20;
              puVar16 = puVar9;
              puVar20 = puVar23 + -2;
              if (puVar20 <= puVar21) break;
              iVar10 = FUN_14825e172(*puVar20);
              iVar11 = FUN_14825e172(*puVar21);
              puVar9 = puVar16 + -2;
            } while (iVar10 <= iVar11);
            if (puVar20 < puVar26) goto LAB_14824325c;
            uVar6 = *puVar26;
            uVar7 = puVar26[1];
            uVar8 = puVar23[-1];
            *puVar26 = *puVar20;
            puVar26[1] = uVar8;
            local_58._0_4_ = (undefined4)uVar6;
            local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar7;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            *(undefined4 *)puVar20 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar23 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar23 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar23 + -4) = uStack_50._4_4_;
            local_58 = uVar6;
            uStack_50 = uVar7;
          } while( true );
        }
        for (; plVar15 = local_378, puVar25 = puVar21, puVar19 = puVar21, puVar21 < puVar22;
            puVar22 = puVar22 + -2) {
          while (puVar20 = puVar25, puVar19 = puVar19 + 2, puVar19 <= puVar22) {
            iVar10 = FUN_14825e172(*puVar20);
            iVar11 = FUN_14825e172(*puVar19);
            puVar25 = puVar19;
            if (iVar10 <= iVar11) {
              puVar25 = puVar20;
            }
          }
          local_58 = *puVar20;
          uStack_50 = puVar20[1];
          uVar7 = local_58;
          uVar8 = uStack_50;
          uVar6 = puVar22[1];
          *puVar20 = *puVar22;
          puVar20[1] = uVar6;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar22 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
          local_58 = uVar7;
          uStack_50 = uVar8;
        }
        goto LAB_148243583;
      }
LAB_148243321:
      iVar10 = (int)uVar17;
      plVar15 = local_378;
      if (iVar10 != 0) {
        iVar11 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
        iVar14 = iVar11;
joined_r0x000148243340:
        do {
          iVar18 = iVar11 * 2 + 1;
          if (iVar18 < iVar10) {
            iVar24 = iVar11 * 2 + 2;
            if (iVar24 < iVar10) {
              iVar12 = FUN_14825e172(puVar21[(longlong)iVar24 * 2]);
              iVar13 = FUN_14825e172(puVar21[(longlong)iVar18 * 2]);
              if (iVar12 <= iVar13) {
                iVar18 = iVar24;
              }
            }
            iVar24 = FUN_14825e172(puVar21[(longlong)iVar11 * 2]);
            iVar12 = FUN_14825e172(puVar21[(longlong)iVar18 * 2]);
            if (iVar12 < iVar24) {
              puVar19 = puVar21 + (longlong)iVar11 * 2;
              puVar22 = puVar21 + (longlong)iVar18 * 2;
              local_58 = *puVar19;
              uStack_50 = puVar19[1];
              uVar7 = local_58;
              uVar8 = uStack_50;
              uVar6 = puVar22[1];
              *puVar19 = *puVar22;
              puVar19[1] = uVar6;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)puVar22 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
              iVar11 = iVar18;
              local_58 = uVar7;
              uStack_50 = uVar8;
              goto joined_r0x000148243340;
            }
          }
          bVar27 = iVar14 != 0;
          iVar11 = iVar14 + -1;
          iVar14 = iVar11;
        } while (bVar27);
        plVar15 = local_378;
        if (1 < iVar10) {
          uVar17 = uVar17 - 1;
          local_58 = *puVar21;
          uStack_50 = puVar21[1];
          uVar7 = local_58;
          uVar8 = uStack_50;
          uVar6 = (puVar21 + uVar17 * 2)[1];
          *puVar21 = puVar21[uVar17 * 2];
          puVar21[1] = uVar6;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar22 = puVar21 + uVar17 * 2;
          *(undefined4 *)puVar22 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
          local_58 = uVar7;
          uStack_50 = uVar8;
          if (iVar10 != 2) {
            do {
              iVar10 = 0;
              iVar14 = 1;
              iVar11 = 0;
              do {
                iVar10 = iVar10 + 2;
                iVar18 = iVar14;
                if ((longlong)iVar10 < (longlong)uVar17) {
                  iVar24 = FUN_14825e172(puVar21[(longlong)iVar10 * 2]);
                  iVar14 = FUN_14825e172(puVar21[(longlong)iVar14 * 2]);
                  if (iVar24 <= iVar14) {
                    iVar18 = iVar10;
                  }
                }
                iVar10 = FUN_14825e172(puVar21[(longlong)iVar11 * 2]);
                iVar14 = FUN_14825e172(puVar21[(longlong)iVar18 * 2]);
                if (iVar10 <= iVar14) break;
                puVar22 = puVar21 + (longlong)iVar11 * 2;
                puVar19 = puVar21 + (longlong)iVar18 * 2;
                uVar6 = *puVar22;
                uVar7 = puVar22[1];
                uVar8 = puVar19[1];
                *puVar22 = *puVar19;
                puVar22[1] = uVar8;
                local_58._0_4_ = (undefined4)uVar6;
                local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
                uStack_50._0_4_ = (undefined4)uVar7;
                uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
                *(undefined4 *)puVar19 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar19 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_50._4_4_;
                iVar10 = iVar18 * 2;
                iVar14 = iVar18 * 2 + 1;
                local_58 = uVar6;
                uStack_50 = uVar7;
                iVar11 = iVar18;
              } while ((longlong)iVar14 < (longlong)uVar17);
              uVar1 = uVar17 - 1;
              local_58 = *puVar21;
              uStack_50 = puVar21[1];
              uVar7 = local_58;
              uVar8 = uStack_50;
              uVar6 = (puVar21 + uVar1 * 2)[1];
              *puVar21 = puVar21[uVar1 * 2];
              puVar21[1] = uVar6;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar22 = puVar21 + uVar1 * 2;
              *(undefined4 *)puVar22 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
              bVar27 = 2 < uVar17;
              plVar15 = local_378;
              uVar17 = uVar1;
              local_58 = uVar7;
              uStack_50 = uVar8;
            } while (bVar27);
          }
        }
      }
LAB_148243583:
      plVar15 = plVar15 + -3;
      param_2 = local_368;
    } while (&local_358 <= plVar15);
  }
  plVar15 = (longlong *)param_2[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar15 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar3 = (int *)((longlong)plVar15 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14824325c:
  local_58 = *puVar21;
  uStack_50 = puVar21[1];
  uVar7 = local_58;
  uVar8 = uStack_50;
  uVar6 = puVar23[-1];
  *puVar21 = *puVar20;
  puVar21[1] = uVar6;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar20 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar23 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar23 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar23 + -4) = uStack_50._4_4_;
  iVar10 = local_36c + -1;
  puVar23 = puVar23 + -4;
  local_58 = uVar7;
  uStack_50 = uVar8;
  if ((longlong)puVar16 - (longlong)local_360 < (longlong)puVar19 - (longlong)puVar25) {
    if (puVar26 < puVar22) {
      *local_378 = (longlong)puVar26;
      local_378[1] = (longlong)puVar22;
      *(int *)(local_378 + 2) = iVar10;
      local_378 = local_378 + 3;
    }
    plVar15 = local_378;
    puVar25 = puVar21;
    if (puVar20 <= puVar21 + 2) goto LAB_148243583;
  }
  else {
    plVar15 = local_378;
    if (puVar21 + 2 < puVar20) {
      *local_378 = (longlong)puVar21;
      local_378[1] = (longlong)puVar23;
      *(int *)(local_378 + 2) = iVar10;
      plVar15 = local_378 + 3;
    }
    puVar16 = puVar22;
    puVar21 = puVar26;
    puVar23 = puVar22;
    if (puVar22 <= puVar26) goto LAB_148243583;
  }
  local_378 = plVar15;
  iVar11 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar25) >> 4);
  uVar17 = (ulonglong)(iVar11 + 1);
  puVar19 = puVar16;
  puVar22 = puVar23;
  if (iVar10 == 0) goto LAB_148243321;
  goto LAB_148243188;
}



// FUNCTION 148243604 FUN_148243604 body=279 status=ok
// SIG undefined FUN_148243604(void)

void FUN_148243604(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14479d2ce(*param_1 + 0x58);
  FUN_14825c56c(param_2,local_50);
  if ((longlong)local_50[0] != -1) {
    lVar7 = *param_2;
    lVar5 = (longlong)local_50[0] * 0x20;
    lVar3 = *(longlong *)(lVar7 + 8 + lVar5);
    *(undefined8 *)(lVar7 + 8 + lVar5) = 0;
    lVar6 = (longlong)*(int *)(lVar7 + 0x10 + lVar5);
    *(undefined4 *)(lVar7 + 0x10 + lVar5) = 0;
    *(undefined4 *)(lVar7 + 0x14 + lVar5) = 0;
    FUN_14825c5f2(param_2);
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        FUN_14825dc76(*param_1,local_50,*(undefined8 *)(lVar3 + lVar7));
        FUN_148243604(local_50,param_2);
        plVar4 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14824371c FUN_14824371c body=17 status=ok
// SIG undefined FUN_14824371c(void)

void FUN_14824371c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  longlong *plStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  undefined1 auStack_68 [8];
  longlong *plStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  ulonglong uStack_48;
  
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (lVar4 == 0) {
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(longlong *)(lVar4 + 200) == 0) ||
      (plVar3 = *(longlong **)(lVar4 + 0xd0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  goto LAB_143af8a9d;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_143af8a9d;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar16 = iVar7 == iVar5;
    if (bVar16) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar16);
  lVar14 = *(longlong *)(lVar4 + 200);
  if (((((lVar14 != 0) && (*(int *)(lVar14 + 0x5c) != 0)) &&
       ((uVar2 = *(uint *)(lVar14 + 0x58), -1 < (int)uVar2 &&
        (((int)uVar2 < DAT_14c9647dc &&
         (plVar15 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar15 != (longlong *)0x0)))))) && ((int)plVar15[2] == *(int *)(lVar14 + 0x5c))) &&
     (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
      (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)))) {
    uVar8 = FUN_14823ec88();
    if (*(int *)(lVar4 + 0x2c) == 0) {
LAB_143af8d7e:
      lVar11 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar4 + 0x28);
      lVar11 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(lVar4 + 0x2c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143af8d7e;
        lVar11 = *plVar12;
      }
    }
    lVar11 = *(longlong *)(lVar11 + 0x20);
    if ((*(char *)((longlong)plVar15 + 0x2fb) == '\x01') &&
       (*(char *)((longlong)plVar15 + 0x2fd) == '\x01')) {
      lStack_58 = 0;
      plVar12 = *(longlong **)(lVar14 + 0x88);
      plStack_50 = plVar12;
      if (plVar12 == (longlong *)0x0) {
LAB_143af8bdd:
        plVar12 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar12[1];
        do {
          if (iVar7 == 0) {
            plStack_50 = (longlong *)0x0;
            goto LAB_143af8bdd;
          }
          LOCK();
          iVar5 = (int)plVar12[1];
          bVar16 = iVar7 == iVar5;
          if (bVar16) {
            *(int *)(plVar12 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar16);
        if (plVar12 == (longlong *)0x0) goto LAB_143af8bdd;
        lStack_58 = *(longlong *)(lVar14 + 0x80);
      }
      if (lStack_58 == 0) goto LAB_143af8c52;
      cVar6 = FUN_1410a3d58(DAT_14c98e618,uVar8,&lStack_58,2);
    }
    else {
      lStack_58 = 0;
      plStack_50 = (longlong *)0x0;
      plVar12 = (longlong *)0x0;
LAB_143af8c52:
      plVar9 = (longlong *)(**(code **)(*plVar15 + 0x4b8))(plVar15);
      if (plVar9 != (longlong *)0x0) {
        uVar10 = (**(code **)(*plVar9 + 0x2c8))(plVar9);
        FUN_14775dc88(plVar9,uVar10);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar12 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
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
        goto LAB_143af8a80;
      }
      (**(code **)(*DAT_14c98e618 + 0x168))(DAT_14c98e618,auStack_68,uVar8);
      if (*(int *)(lVar4 + 0x2c) == 0) {
LAB_143af8f3d:
        lVar13 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x28);
        lVar13 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar4 + 0x2c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143af8f3d;
          lVar13 = *plVar12;
        }
      }
      lVar13 = *(longlong *)(lVar13 + 0x20);
      lStack_78 = 0;
      plVar12 = *(longlong **)(lVar13 + 0x248);
      plStack_70 = plVar12;
      if (plVar12 == (longlong *)0x0) {
LAB_143af8d8e:
        plVar12 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar12[1];
        do {
          if (iVar7 == 0) {
            plStack_70 = (longlong *)0x0;
            goto LAB_143af8d8e;
          }
          LOCK();
          iVar5 = (int)plVar12[1];
          bVar16 = iVar7 == iVar5;
          if (bVar16) {
            *(int *)(plVar12 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar16);
        if (plVar12 == (longlong *)0x0) goto LAB_143af8d8e;
        lStack_78 = *(longlong *)(lVar13 + 0x240);
      }
      if (((lStack_78 == 0) || (cVar6 = FUN_14825ea6e(lVar14,&lStack_78), cVar6 == '\0')) &&
         (cVar6 = FUN_14825ea6e(lVar14,auStack_68), plVar9 = DAT_14c98e618, cVar6 == '\0')) {
        if ((*(byte *)((longlong)plVar15 + 0x20c) & 1) != 0) {
          uVar10 = (**(code **)(*plVar15 + 0x2c8))(plVar15);
          FUN_14775dc88(plVar15,uVar10);
          goto LAB_143af8ed9;
        }
        if (*(int *)(lVar4 + 0x2c) == 0) {
LAB_143af8f60:
          lVar14 = 0;
        }
        else {
          uVar2 = *(uint *)(lVar4 + 0x28);
          lVar14 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar15 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar15 == (longlong *)0x0) ||
               (((int)plVar15[2] != *(int *)(lVar4 + 0x2c) ||
                ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143af8f60;
            lVar14 = *plVar15;
          }
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar14 + 0x20) + 0x78);
        if (lVar4 == 0) goto LAB_143af8ed9;
        FUN_140761b7a(lVar4,&uStack_98);
        uStack_88 = uStack_98;
        plStack_80 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_1410a3d58(plVar9,uVar8,&uStack_88,2);
        plVar15 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_80 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar12 = plStack_70;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar15 = plStack_90 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plStack_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar12 = plStack_70;
            if (*piVar1 == 0) {
              (**(code **)(*plStack_90 + 0x10))(plStack_90);
              plVar12 = plStack_70;
            }
          }
        }
      }
      else {
LAB_143af8ed9:
        cVar6 = '\0';
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar12 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
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
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_60 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plStack_60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
          }
        }
      }
    }
    plVar15 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_50 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (cVar6 != '\0') {
      FUN_146948d3e(lVar11 + 0x1f8);
    }
  }
LAB_143af8a80:
  LOCK();
  plVar15 = plVar3 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_143af8a9d:
  if ((uStack_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14824372e FUN_14824372e body=633 status=ok
// SIG undefined FUN_14824372e(void)

void FUN_14824372e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [42];
  undefined1 local_2e [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = param_1[0x11];
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0xc0) != 0) {
      puVar3 = *(undefined8 **)(lVar6 + 0xb8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72((longlong *)(lVar6 + 0xb8),0,0,0x10);
        *(undefined4 *)(lVar6 + 0xc0) = 0;
        lVar6 = param_1[0x11];
      }
    }
    FUN_143af7bf6(lVar6,0);
    FUN_143af83b6(param_1[0x11]);
  }
  if ((*(char *)((longlong)param_1 + 0xc4) == '\0') && ((char)param_1[6] != '\0')) {
    lVar6 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)param_1[0x12];
    param_1[0x11] = lVar6;
    param_1[0x12] = lVar5;
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
    if (*param_2 != 0) {
      FUN_143af7bf6(*param_2,1);
      FUN_143af83b6(*param_2);
      lVar6 = *param_2;
      if (*(int *)(lVar6 + 0xc0) != 3) {
        FUN_1446efa72((longlong *)(lVar6 + 0xb8),0,3,0x10);
        *(undefined4 *)(lVar6 + 0xc0) = 3;
      }
      puVar3 = *(undefined8 **)(lVar6 + 0xb8);
      *puVar3 = &PTR_LAB_149e020b0;
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
      puVar3[2] = lVar5;
      *puVar3 = &PTR_FUN_14ae6b610;
      puVar3[3] = 0;
      FUN_14485c47a(puVar3 + 3,param_1);
      puVar3[4] = &LAB_1482423a0;
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
    param_1[0x11] = 0;
    plVar4 = (longlong *)param_1[0x12];
    if (plVar4 != (longlong *)0x0) {
      param_1[0x12] = 0;
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
    if ((*(char *)((longlong)param_1 + 0xc4) != '\0') || (DAT_14c762a59 == '\x01')) {
      uVar7 = 0;
      FUN_14825d44e(local_2e,2,0,1);
      (**(code **)(*param_1 + 0x300))
                (param_1,local_2e,
                 CONCAT71((int7)((ulonglong)uVar7 >> 8),*(undefined1 *)((longlong)param_1 + 0x37)) ^
                 1);
    }
  }
  FUN_1447f69b6(param_1 + 0x19);
  plVar4 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482439a8 FUN_1482439a8 body=59 status=ok
// SIG undefined FUN_1482439a8(void)

void FUN_1482439a8(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = param_1[4];
  uVar2 = (**(code **)(*param_1 + 0x180))();
  plVar3 = (longlong *)FUN_140334a94(lVar1,uVar2);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482439d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xcf8))(plVar3);
    return;
  }
  return;
}



// FUNCTION 1482439e4 FUN_1482439e4 body=86 status=ok
// SIG undefined FUN_1482439e4(void)

void FUN_1482439e4(longlong param_1)

{
  FUN_1402c4dfe(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_148248e72(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148243a3a FUN_148243a3a body=475 status=ok
// SIG undefined FUN_148243a3a(void)

longlong * FUN_148243a3a(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    lVar5 = FUN_14479d2ce(*param_2 + 0x58);
    lVar2 = *param_2;
    if (lVar5 == param_3) {
      lVar5 = param_2[1];
      if (lVar5 == 0) {
        *param_1 = lVar2;
        param_1[1] = 0;
      }
      else {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        plVar4 = (longlong *)param_1[1];
        *param_1 = lVar2;
        param_1[1] = lVar5;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
            }
          }
        }
      }
    }
    else if ((longlong)*(int *)(lVar2 + 0x78) != 0) {
      puVar6 = *(undefined8 **)(lVar2 + 0x70);
      puVar7 = puVar6 + (longlong)*(int *)(lVar2 + 0x78) * 2;
      do {
        local_58 = *puVar6;
        local_50 = (longlong *)puVar6[1];
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_148243a3a(&local_68,&local_58,param_3);
        plVar4 = local_60;
        if (&local_68 == param_1) {
LAB_148243b32:
          plVar4 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_60 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_60)(local_60);
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
        else {
          *param_1 = local_68;
          local_68 = 0;
          plVar3 = (longlong *)param_1[1];
          if (local_60 == plVar3) goto LAB_148243b32;
          local_60 = (longlong *)0x0;
          param_1[1] = (longlong)plVar4;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
            goto LAB_148243b32;
          }
        }
        plVar4 = local_50;
        lVar2 = *param_1;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      } while ((lVar2 == 0) && (puVar6 = puVar6 + 2, puVar6 != puVar7));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}


