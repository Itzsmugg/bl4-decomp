// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484392e6 FUN_1484392e6 body=107 status=ok
// SIG undefined FUN_1484392e6(void)

void FUN_1484392e6(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar1 + 0x28))();
    if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0))
    {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0xe8) = 0;
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148439343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148439352 FUN_148439352 body=95 status=ok
// SIG undefined FUN_148439352(void)

undefined1 * FUN_148439352(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1484393ce FUN_1484393ce body=34 status=ok
// SIG undefined FUN_1484393ce(void)

undefined8 FUN_1484393ce(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x30);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,1);
  return 1;
}



// FUNCTION 14843940c FUN_14843940c body=106 status=ok
// SIG undefined FUN_14843940c(void)

void FUN_14843940c(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x270);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x290);
    if (*(longlong **)(param_1 + 0x280) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x280);
    }
    local_1c = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148439480 FUN_148439480 body=753 status=ok
// SIG undefined FUN_148439480(void)

longlong * FUN_148439480(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined8 local_a8;
  longlong local_78 [2];
  undefined8 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)FUN_148439772(param_2[3]);
  (**(code **)(*plVar4 + 0x2d8))(plVar4,*param_2);
  uVar5 = FUN_148451390(param_2[1]);
  lVar6 = FUN_148413bcc(uVar5);
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 == (longlong *)0x0) {
    local_c0 = (longlong *)FUN_14001cc68(0x28,0x10);
    local_c0[1] = (longlong)&DAT_100000001;
    *local_c0 = (longlong)&PTR_FUN_14aeb6ab0;
    local_c0[2] = (longlong)&PTR_LAB_14aeb6ac8;
    *(undefined4 *)(local_c0 + 3) = 0x1fffe;
    local_c0[4] = lVar6;
    param_2 = local_c0;
    local_c8 = local_c0 + 2;
    if (local_c0 == (longlong *)0x0) {
      param_2 = (longlong *)0x0;
      goto LAB_1484394fe;
    }
  }
  else {
    local_c0 = *(longlong **)(param_1 + 0x60);
    local_c8 = plVar2;
    if (local_c0 == (longlong *)0x0) goto LAB_1484394fe;
  }
  LOCK();
  *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
  UNLOCK();
LAB_1484394fe:
  (**(code **)(*plVar4 + 0x2e0))(plVar4,&local_c8);
  if (param_2 != (longlong *)0x0 && plVar2 == (longlong *)0x0) {
    LOCK();
    plVar2 = param_2 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*param_2)(param_2);
      LOCK();
      piVar1 = (int *)((longlong)param_2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(param_1 + 0x50);
  lVar6 = (longlong)local_d0;
  pvVar3 = *(void **)(param_1 + 0x48);
  if (lVar6 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar3,lVar6 * 2);
  }
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_1 + 0x40);
  lVar6 = (longlong)local_e0;
  pvVar3 = *(void **)(param_1 + 0x38);
  if (lVar6 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,pvVar3,lVar6 * 2);
  }
  local_f8 = (void *)0x0;
  local_f0 = *(int *)(param_1 + 0x30);
  lVar6 = (longlong)local_f0;
  pvVar3 = *(void **)(param_1 + 0x28);
  if (lVar6 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1446dd670(&local_f8,local_f0,0);
    memcpy(local_f8,pvVar3,lVar6 * 2);
  }
  (**(code **)(*plVar4 + 0x2e8))(plVar4,&local_f8,&local_e8,&local_d8);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_68 = 0;
    puVar7 = (undefined8 *)(param_1 + 0x90);
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x80);
    }
    local_78[0] = *(longlong *)(param_1 + 0x70);
    (**(code **)*puVar7)();
    (**(code **)(*plVar4 + 0x2f0))(plVar4,local_78);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    local_a8 = 0;
    puVar7 = (undefined8 *)(param_1 + 0xd0);
    if (*(undefined8 **)(param_1 + 0xc0) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0xc0);
    }
    local_b8[0] = *(longlong *)(param_1 + 0xb0);
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*plVar4 + 0x2f8))(plVar4,local_b8);
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 148439772 FUN_148439772 body=175 status=ok
// SIG undefined FUN_148439772(void)

undefined8 FUN_148439772(undefined8 param_1)

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
  local_b8 = FUN_145b73f38();
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



// FUNCTION 148439822 FUN_148439822 body=1281 status=ok
// SIG undefined FUN_148439822(void)

void FUN_148439822(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong local_148 [4];
  longlong local_128 [4];
  longlong local_108 [4];
  longlong local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  longlong *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  wchar_t *local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong auStack_90 [10];
  
  auStack_90[6] = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = param_3;
  FUN_148415464();
  lVar6 = param_1[7];
  lVar3 = FUN_14844b523(param_1);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  *(longlong *)(lVar3 + 0x48) = lVar6;
  *(undefined1 *)(lVar3 + 0x50) = 1;
  uVar8 = *(undefined8 *)(param_1[0x43] + 0x1c8);
  lVar6 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  pwVar4 = (wchar_t *)FUN_148431eb2(lVar6,uVar8,param_1);
  lVar6 = *(longlong *)(param_1[0x4b] + 0x48);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_14595b6ac();
    uVar5 = FUN_144718840(lVar6,uVar5);
  }
  local_a8 = L"TransformGizmoTransaction";
  local_a0._0_4_ = 0x19;
  FUN_1446e940c(&local_e8,&local_a8);
  local_a8 = L"URepositionableTransformGizmo";
  local_a0 = CONCAT44(local_a0._4_4_,0x1d);
  FUN_1446e940c(local_108,&local_a8);
  FUN_140208bae(&local_a8,local_108,&local_e8,L"Reposition Pivot");
  lVar6 = FUN_14843200a(uVar8,&local_a8,uVar5,param_1);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  param_1[0x88] = lVar6;
  if (local_a8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_a8 + 0x10))();
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar7 = &PTR_FUN_14aedb020;
  puVar7[1] = 0;
  puVar7[2] = 0;
  FUN_14485c47a(puVar7 + 1,param_2);
  *(undefined1 *)(puVar7 + 3) = 1;
  lVar6 = param_1[0x88];
  iVar2 = *(int *)(lVar6 + 0x128);
  *(uint *)(lVar6 + 0x128) = iVar2 + 1U;
  if (*(uint *)(lVar6 + 300) < iVar2 + 1U) {
    FUN_14844d8e0((longlong *)(lVar6 + 0x120),iVar2);
  }
  *(undefined8 **)(*(longlong *)(lVar6 + 0x120) + (longlong)iVar2 * 8) = puVar7;
  auStack_90[3] = 0;
  auStack_90[4] = 0;
  auStack_90[1] = 0;
  auStack_90[2] = 0;
  local_98 = 0;
  auStack_90[0] = 0;
  auStack_90[5] = 0;
  local_a0 = param_1[0x88];
  lVar6 = param_1[0x74];
  if (lVar6 != 0) {
    lVar3 = 0;
    do {
      auStack_90[lVar3] = *(ulonglong *)(lVar6 + 0x18 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  lVar3 = 0;
  local_d8 = 0;
  local_e8 = 0;
  local_d4 = 1;
  local_d0 = (longlong *)0x0;
  local_c8 = 0;
  local_b8 = 0;
  lStack_e0 = param_1[7];
  local_c0 = local_150;
  local_b0 = 1;
  lVar6 = param_1[0x43];
  local_108[0] = *(longlong *)(lVar6 + 0x398);
  local_108[1] = *(undefined8 *)(lVar6 + 0x3a0);
  local_108[2] = *(undefined8 *)(lVar6 + 0x3a8);
  plVar1 = param_1 + 0x86;
  local_a8 = pwVar4;
  do {
    lVar6 = *(longlong *)((longlong)local_108 + lVar3 * 2);
    if (lVar6 != 0) {
      local_d8 = *(undefined4 *)(&DAT_14aecc128 + lVar3);
      local_e8 = lVar6;
      uVar8 = (**(code **)(*param_1 + 0x368))(param_1,&local_e8,&local_a8);
      FUN_148439d24(param_1,uVar8);
      iVar2 = (int)param_1[0x87];
      *(uint *)(param_1 + 0x87) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x43c) < iVar2 + 1U) {
        FUN_14844e208(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar8;
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0xc);
  lVar6 = param_1[0x43];
  local_128[0] = *(longlong *)(lVar6 + 0x3b0);
  local_128[1] = *(undefined8 *)(lVar6 + 0x3b8);
  local_128[2] = *(undefined8 *)(lVar6 + 0x3c0);
  lVar6 = 0;
  do {
    lVar3 = *(longlong *)((longlong)local_128 + lVar6 * 2);
    if (lVar3 != 0) {
      local_d8 = *(undefined4 *)(&DAT_14aecc128 + lVar6);
      local_e8 = lVar3;
      uVar8 = (**(code **)(*param_1 + 0x378))(param_1,&local_e8,&local_a8);
      FUN_14843a072(param_1,uVar8);
      iVar2 = (int)param_1[0x87];
      *(uint *)(param_1 + 0x87) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x43c) < iVar2 + 1U) {
        FUN_14844e208(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar8;
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0xc);
  lVar6 = param_1[0x43];
  local_148[0] = *(longlong *)(lVar6 + 0x3c8);
  local_148[1] = *(undefined8 *)(lVar6 + 0x3d0);
  local_148[2] = *(undefined8 *)(lVar6 + 0x3d8);
  lVar6 = 0;
  do {
    lVar3 = *(longlong *)((longlong)local_148 + lVar6 * 2);
    if (lVar3 != 0) {
      local_d8 = *(undefined4 *)(&DAT_14aecc128 + lVar6);
      local_e8 = lVar3;
      uVar8 = (**(code **)(*param_1 + 0x388))(param_1,&local_e8,&local_a8);
      FUN_14843a3d0(param_1,uVar8);
      iVar2 = (int)param_1[0x87];
      *(uint *)(param_1 + 0x87) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x43c) < iVar2 + 1U) {
        FUN_14844e208(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar8;
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0xc);
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  if ((auStack_90[6] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148439d24 FUN_148439d24 body=844 status=ok
// SIG undefined FUN_148439d24(void)

void FUN_148439d24(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
LAB_148439d6b:
    param_2 = 0;
  }
  else {
    lVar5 = FUN_145b72a32();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_148439d6b;
  }
  (**(code **)(**(longlong **)(param_2 + 0x90) + 0x340))();
  local_a8 = *(longlong *)(param_2 + 0xa0);
  uStack_60 = *(undefined8 *)(param_2 + 0xa8);
  local_98 = *(longlong **)(param_2 + 0xb0);
  uStack_50 = *(undefined8 *)(param_2 + 0xb8);
  local_48 = *(longlong *)(param_2 + 0xc0);
  uStack_40 = *(undefined8 *)(param_2 + 200);
  local_38 = *(undefined8 *)(param_2 + 0xd0);
  uStack_30 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(param_2 + 0xd0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 0xd8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(param_2 + 0xc0) = &PTR_LAB_14aedb5b0;
  *(undefined8 *)(param_2 + 200) = param_1;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(ulonglong *)(param_2 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(param_2 + 0xa0) = FUN_143b532f4;
  *(ulonglong *)(param_2 + 0xa8) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar7 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    uStack_60 = uVar1;
    uStack_50 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  local_a8 = *(longlong *)(param_2 + 0xe0);
  uStack_60 = *(undefined8 *)(param_2 + 0xe8);
  local_98 = *(longlong **)(param_2 + 0xf0);
  uStack_50 = *(undefined8 *)(param_2 + 0xf8);
  local_48 = *(longlong *)(param_2 + 0x100);
  uStack_40 = *(undefined8 *)(param_2 + 0x108);
  local_38 = *(undefined8 *)(param_2 + 0x110);
  uStack_30 = *(undefined8 *)(param_2 + 0x118);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(param_2 + 0x110) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 0x118) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(param_2 + 0x100) = &PTR_LAB_14aedb5d0;
  *(undefined8 *)(param_2 + 0x108) = param_1;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(ulonglong *)(param_2 + 0xf8) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(param_2 + 0xe0) = FUN_143b53360;
  *(ulonglong *)(param_2 + 0xe8) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_a8 != 0) {
    plVar7 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  lVar5 = *(longlong *)(param_2 + 0x70);
  if (lVar5 != 0) {
    lVar6 = FUN_145b117b8();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_148439f57;
  }
  lVar5 = 0;
LAB_148439f57:
  local_a8 = *(longlong *)(lVar5 + 0x80);
  uStack_60 = *(undefined8 *)(lVar5 + 0x88);
  local_98 = *(longlong **)(lVar5 + 0x90);
  uStack_50 = *(undefined8 *)(lVar5 + 0x98);
  local_48 = *(longlong *)(lVar5 + 0xa0);
  uStack_40 = *(undefined8 *)(lVar5 + 0xa8);
  local_38 = *(undefined8 *)(lVar5 + 0xb0);
  uStack_30 = *(undefined8 *)(lVar5 + 0xb8);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(lVar5 + 0xb0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(lVar5 + 0xb8) = CONCAT44(uStack_6c,uStack_70);
  *(longlong *)(lVar5 + 0xa0) = local_88;
  *(undefined8 *)(lVar5 + 0xa8) = uStack_80;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(ulonglong *)(lVar5 + 0x98) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(ulonglong *)(lVar5 + 0x88) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_a8 != 0) {
    plVar7 = &local_88;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14843a072 FUN_14843a072 body=861 status=ok
// SIG undefined FUN_14843a072(void)

void FUN_14843a072(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
LAB_14843a09a:
    param_2 = 0;
  }
  else {
    lVar5 = FUN_145b73d64();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_14843a09a;
  }
  (**(code **)(**(longlong **)(param_2 + 0x88) + 0x340))();
  local_a8 = *(longlong *)(param_2 + 0xa0);
  uStack_60 = *(undefined8 *)(param_2 + 0xa8);
  local_98 = *(longlong **)(param_2 + 0xb0);
  uStack_50 = *(undefined8 *)(param_2 + 0xb8);
  local_48 = *(longlong *)(param_2 + 0xc0);
  uStack_40 = *(undefined8 *)(param_2 + 200);
  local_38 = *(undefined8 *)(param_2 + 0xd0);
  uStack_30 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(param_2 + 0xd0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 0xd8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(param_2 + 0xc0) = &PTR_LAB_14aedb5f0;
  *(undefined8 *)(param_2 + 200) = param_1;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(ulonglong *)(param_2 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(param_2 + 0xa0) = FUN_143b533dc;
  *(ulonglong *)(param_2 + 0xa8) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar7 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    uStack_60 = uVar1;
    uStack_50 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  local_a8 = *(longlong *)(param_2 + 0xe0);
  uStack_60 = *(undefined8 *)(param_2 + 0xe8);
  local_98 = *(longlong **)(param_2 + 0xf0);
  uStack_50 = *(undefined8 *)(param_2 + 0xf8);
  local_48 = *(longlong *)(param_2 + 0x100);
  uStack_40 = *(undefined8 *)(param_2 + 0x108);
  local_38 = *(undefined8 *)(param_2 + 0x110);
  uStack_30 = *(undefined8 *)(param_2 + 0x118);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(param_2 + 0x110) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 0x118) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(param_2 + 0x100) = &PTR_LAB_14aedb610;
  *(undefined8 *)(param_2 + 0x108) = param_1;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(ulonglong *)(param_2 + 0xf8) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(param_2 + 0xe0) = FUN_143b53448;
  *(ulonglong *)(param_2 + 0xe8) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_a8 != 0) {
    plVar7 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  lVar5 = *(longlong *)(param_2 + 0x68);
  if (lVar5 != 0) {
    lVar6 = FUN_145b117b8();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_14843a286;
  }
  lVar5 = 0;
LAB_14843a286:
  local_a8 = *(longlong *)(lVar5 + 0x80);
  uStack_60 = *(undefined8 *)(lVar5 + 0x88);
  local_98 = *(longlong **)(lVar5 + 0x90);
  uStack_50 = *(undefined8 *)(lVar5 + 0x98);
  local_48 = *(longlong *)(lVar5 + 0xa0);
  uStack_40 = *(undefined8 *)(lVar5 + 0xa8);
  local_38 = *(undefined8 *)(lVar5 + 0xb0);
  uStack_30 = *(undefined8 *)(lVar5 + 0xb8);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(lVar5 + 0xb0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(lVar5 + 0xb8) = CONCAT44(uStack_6c,uStack_70);
  *(longlong *)(lVar5 + 0xa0) = local_88;
  *(undefined8 *)(lVar5 + 0xa8) = uStack_80;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(ulonglong *)(lVar5 + 0x98) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(ulonglong *)(lVar5 + 0x88) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_a8 != 0) {
    plVar7 = &local_88;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14843a3d0 FUN_14843a3d0 body=1050 status=ok
// SIG undefined FUN_14843a3d0(void)

void FUN_14843a3d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
LAB_14843a417:
    param_2 = 0;
  }
  else {
    lVar5 = FUN_145b7285e();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) goto LAB_14843a417;
  }
  (**(code **)(**(longlong **)(param_2 + 0x88) + 0x340))();
  local_a8 = *(longlong *)(param_2 + 0x90);
  uStack_60 = *(undefined8 *)(param_2 + 0x98);
  local_98 = *(longlong **)(param_2 + 0xa0);
  uStack_50 = *(undefined8 *)(param_2 + 0xa8);
  local_48 = *(longlong *)(param_2 + 0xb0);
  uStack_40 = *(undefined8 *)(param_2 + 0xb8);
  local_38 = *(undefined8 *)(param_2 + 0xc0);
  uStack_30 = *(undefined8 *)(param_2 + 200);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(param_2 + 0xc0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 200) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(param_2 + 0xb0) = &PTR_LAB_14aedb630;
  *(undefined8 *)(param_2 + 0xb8) = param_1;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(ulonglong *)(param_2 + 0xa8) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(param_2 + 0x90) = FUN_143b534c4;
  *(ulonglong *)(param_2 + 0x98) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar7 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    uStack_60 = uVar1;
    uStack_50 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  local_a8 = *(longlong *)(param_2 + 0xd0);
  uStack_60 = *(undefined8 *)(param_2 + 0xd8);
  local_98 = *(longlong **)(param_2 + 0xe0);
  uStack_50 = *(undefined8 *)(param_2 + 0xe8);
  local_48 = *(longlong *)(param_2 + 0xf0);
  uStack_40 = *(undefined8 *)(param_2 + 0xf8);
  local_38 = *(undefined8 *)(param_2 + 0x100);
  uStack_30 = *(undefined8 *)(param_2 + 0x108);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(param_2 + 0x100) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 0x108) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(param_2 + 0xf0) = &PTR_LAB_14aedb650;
  *(undefined8 *)(param_2 + 0xf8) = param_1;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(ulonglong *)(param_2 + 0xe8) = CONCAT44(uStack_8c,uStack_90);
  *(code **)(param_2 + 0xd0) = FUN_143b53530;
  *(ulonglong *)(param_2 + 0xd8) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_a8 != 0) {
    plVar7 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  lVar5 = *(longlong *)(param_2 + 0x68);
  if (lVar5 != 0) {
    lVar6 = FUN_145b117b8();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_14843a603;
  }
  lVar5 = 0;
LAB_14843a603:
  local_a8 = *(longlong *)(lVar5 + 0x80);
  uStack_60 = *(undefined8 *)(lVar5 + 0x88);
  local_98 = *(longlong **)(lVar5 + 0x90);
  uStack_50 = *(undefined8 *)(lVar5 + 0x98);
  local_48 = *(longlong *)(lVar5 + 0xa0);
  uStack_40 = *(undefined8 *)(lVar5 + 0xa8);
  local_38 = *(undefined8 *)(lVar5 + 0xb0);
  uStack_30 = *(undefined8 *)(lVar5 + 0xb8);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(lVar5 + 0xb0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(lVar5 + 0xb8) = CONCAT44(uStack_6c,uStack_70);
  *(longlong *)(lVar5 + 0xa0) = local_88;
  *(undefined8 *)(lVar5 + 0xa8) = uStack_80;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(ulonglong *)(lVar5 + 0x98) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(ulonglong *)(lVar5 + 0x88) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar7 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    uStack_60 = uVar1;
    uStack_50 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    (**(code **)(*plVar7 + 0x10))();
  }
  local_a8 = *(longlong *)(lVar5 + 0x40);
  uStack_60 = *(undefined8 *)(lVar5 + 0x48);
  local_98 = *(longlong **)(lVar5 + 0x50);
  uStack_50 = *(undefined8 *)(lVar5 + 0x58);
  local_48 = *(longlong *)(lVar5 + 0x60);
  uStack_40 = *(undefined8 *)(lVar5 + 0x68);
  local_38 = *(undefined8 *)(lVar5 + 0x70);
  uStack_30 = *(undefined8 *)(lVar5 + 0x78);
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  *(ulonglong *)(lVar5 + 0x70) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(lVar5 + 0x78) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)(lVar5 + 0x60) = &PTR_LAB_14aedb670;
  *(undefined8 *)(lVar5 + 0x68) = param_1;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(ulonglong *)(lVar5 + 0x58) = CONCAT44(uStack_8c,uStack_90);
  *(undefined1 **)(lVar5 + 0x40) = &LAB_143b535ac;
  *(ulonglong *)(lVar5 + 0x48) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_a8 != 0) {
    plVar7 = &local_88;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14843a7ec FUN_14843a7ec body=532 status=ok
// SIG undefined FUN_14843a7ec(void)

void FUN_14843a7ec(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14841405a();
  local_98 = *(longlong *)(param_1 + 0x3b0);
  uStack_50 = *(undefined8 *)(param_1 + 0x3b8);
  local_88 = *(longlong **)(param_1 + 0x3c0);
  uStack_40 = *(undefined8 *)(param_1 + 0x3c8);
  local_38 = *(longlong *)(param_1 + 0x3d0);
  uStack_30 = *(undefined8 *)(param_1 + 0x3d8);
  local_28 = *(undefined8 *)(param_1 + 0x3e0);
  uStack_20 = *(undefined8 *)(param_1 + 1000);
  uVar3 = local_28;
  uVar4 = uStack_20;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0x3e0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 1000) = CONCAT44(uStack_5c,uStack_60);
  *(undefined ***)(param_1 + 0x3d0) = &PTR_LAB_14aedb690;
  *(longlong *)(param_1 + 0x3d8) = param_1;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(ulonglong *)(param_1 + 0x3c8) = CONCAT44(uStack_7c,uStack_80);
  *(code **)(param_1 + 0x3b0) = FUN_143b53602;
  *(ulonglong *)(param_1 + 0x3b8) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_78 = local_38;
  uStack_70 = uStack_30;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = &local_78;
    }
    uStack_50 = uVar1;
    uStack_40 = uVar2;
    local_28 = uVar3;
    uStack_20 = uVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_98 = *(longlong *)(param_1 + 0x3f0);
  uStack_50 = *(undefined8 *)(param_1 + 0x3f8);
  local_88 = *(longlong **)(param_1 + 0x400);
  uStack_40 = *(undefined8 *)(param_1 + 0x408);
  local_38 = *(longlong *)(param_1 + 0x410);
  uStack_30 = *(undefined8 *)(param_1 + 0x418);
  local_28 = *(undefined8 *)(param_1 + 0x420);
  uStack_20 = *(undefined8 *)(param_1 + 0x428);
  uVar3 = local_28;
  uVar4 = uStack_20;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0x420) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0x428) = CONCAT44(uStack_5c,uStack_60);
  *(undefined ***)(param_1 + 0x410) = &PTR_LAB_14aedb6b0;
  *(longlong *)(param_1 + 0x418) = param_1;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(ulonglong *)(param_1 + 0x408) = CONCAT44(uStack_7c,uStack_80);
  *(code **)(param_1 + 0x3f0) = FUN_143b5366e;
  *(ulonglong *)(param_1 + 0x3f8) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_50 = uVar1;
  uStack_40 = uVar2;
  local_28 = uVar3;
  uStack_20 = uVar4;
  if (local_98 != 0) {
    plVar5 = &local_78;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843aa02 FUN_14843aa02 body=2076 status=ok
// SIG undefined FUN_14843aa02(void)

void FUN_14843aa02(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(undefined8 *)(param_1 + 0x3b0);
  uVar5 = *(undefined8 *)(param_1 + 0x3b8);
  uVar6 = *(undefined8 *)(param_1 + 0x3c0);
  uVar7 = *(undefined8 *)(param_1 + 0x3c8);
  uVar8 = *(undefined8 *)(param_1 + 0x3d0);
  uVar9 = *(undefined8 *)(param_1 + 0x3d8);
  uVar10 = *(undefined8 *)(param_1 + 0x3e0);
  uVar11 = *(undefined8 *)(param_1 + 1000);
  uVar12 = *param_2;
  uVar13 = param_2[1];
  uVar14 = param_2[2];
  uVar15 = param_2[3];
  uVar16 = param_2[4];
  uVar17 = param_2[5];
  uVar18 = param_2[7];
  *(undefined8 *)(param_1 + 0x3e0) = param_2[6];
  *(undefined8 *)(param_1 + 1000) = uVar18;
  *(undefined8 *)(param_1 + 0x3d0) = uVar16;
  *(undefined8 *)(param_1 + 0x3d8) = uVar17;
  *(undefined8 *)(param_1 + 0x3c0) = uVar14;
  *(undefined8 *)(param_1 + 0x3c8) = uVar15;
  *(undefined8 *)(param_1 + 0x3b0) = uVar12;
  *(undefined8 *)(param_1 + 0x3b8) = uVar13;
  param_2[6] = uVar10;
  param_2[7] = uVar11;
  param_2[4] = uVar8;
  param_2[5] = uVar9;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x3f0);
  uVar4 = *(undefined8 *)(param_1 + 0x3f8);
  local_78 = *(longlong **)(param_1 + 0x400);
  uStack_70 = *(undefined8 *)(param_1 + 0x408);
  local_68 = *(longlong *)(param_1 + 0x410);
  uStack_60 = *(undefined8 *)(param_1 + 0x418);
  local_58 = *(undefined8 *)(param_1 + 0x420);
  uStack_50 = *(undefined8 *)(param_1 + 0x428);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[7];
  *(undefined8 *)(param_1 + 0x420) = param_3[6];
  *(undefined8 *)(param_1 + 0x428) = uVar11;
  *(undefined8 *)(param_1 + 0x410) = uVar9;
  *(undefined8 *)(param_1 + 0x418) = uVar10;
  *(undefined8 *)(param_1 + 0x400) = uVar7;
  *(undefined8 *)(param_1 + 0x408) = uVar8;
  *(undefined8 *)(param_1 + 0x3f0) = uVar5;
  *(undefined8 *)(param_1 + 0x3f8) = uVar6;
  local_88._0_4_ = (undefined4)lVar2;
  local_88._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  uStack_80._0_4_ = (undefined4)uVar4;
  uStack_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  param_3[6] = local_58;
  param_3[7] = uStack_50;
  param_3[4] = local_68;
  param_3[5] = uStack_60;
  param_3[2] = local_78;
  param_3[3] = uStack_70;
  *(undefined4 *)param_3 = (undefined4)local_88;
  *(undefined4 *)((longlong)param_3 + 4) = local_88._4_4_;
  *(undefined4 *)(param_3 + 1) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_80._4_4_;
  iVar1 = *(int *)(param_1 + 0x438);
  local_88 = lVar2;
  uStack_80 = uVar4;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x430);
    lVar21 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar21);
      if (lVar3 != 0) {
        lVar19 = FUN_145b72a32();
        if ((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
          local_c8 = *(longlong *)(lVar3 + 0xa0);
          uStack_80 = *(undefined8 *)(lVar3 + 0xa8);
          local_b8 = *(longlong **)(lVar3 + 0xb0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xb8);
          local_68 = *(longlong *)(lVar3 + 0xc0);
          uStack_60 = *(undefined8 *)(lVar3 + 200);
          local_58 = *(undefined8 *)(lVar3 + 0xd0);
          uStack_50 = *(undefined8 *)(lVar3 + 0xd8);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0xd0) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 0xd8) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0xc0) = &PTR_LAB_14aedb6d0;
          *(longlong *)(lVar3 + 200) = param_1;
          *(undefined8 *)(lVar3 + 0xb0) = 0;
          *(ulonglong *)(lVar3 + 0xb8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0xa0) = FUN_143b536ea;
          *(ulonglong *)(lVar3 + 0xa8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          if (local_c8 != 0) {
            plVar20 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar20 = &local_a8;
            }
            uStack_80 = uVar4;
            uStack_70 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            (**(code **)(*plVar20 + 0x10))();
          }
          local_c8 = *(longlong *)(lVar3 + 0xe0);
          uStack_80 = *(undefined8 *)(lVar3 + 0xe8);
          local_b8 = *(longlong **)(lVar3 + 0xf0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xf8);
          local_68 = *(longlong *)(lVar3 + 0x100);
          uStack_60 = *(undefined8 *)(lVar3 + 0x108);
          local_58 = *(undefined8 *)(lVar3 + 0x110);
          uStack_50 = *(undefined8 *)(lVar3 + 0x118);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0x110) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 0x118) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0x100) = &PTR_LAB_14aedb6f0;
          *(longlong *)(lVar3 + 0x108) = param_1;
          *(undefined8 *)(lVar3 + 0xf0) = 0;
          *(ulonglong *)(lVar3 + 0xf8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0xe0) = FUN_143b53756;
          *(ulonglong *)(lVar3 + 0xe8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          uStack_80 = uVar4;
          uStack_70 = uVar5;
          local_58 = uVar6;
          uStack_50 = uVar7;
          if (local_c8 != 0) {
            plVar20 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar20 = &local_a8;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
        }
        lVar19 = FUN_145b73d64();
        if ((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
          local_c8 = *(longlong *)(lVar3 + 0xa0);
          uStack_80 = *(undefined8 *)(lVar3 + 0xa8);
          local_b8 = *(longlong **)(lVar3 + 0xb0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xb8);
          local_68 = *(longlong *)(lVar3 + 0xc0);
          uStack_60 = *(undefined8 *)(lVar3 + 200);
          local_58 = *(undefined8 *)(lVar3 + 0xd0);
          uStack_50 = *(undefined8 *)(lVar3 + 0xd8);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0xd0) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 0xd8) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0xc0) = &PTR_LAB_14aedb710;
          *(longlong *)(lVar3 + 200) = param_1;
          *(undefined8 *)(lVar3 + 0xb0) = 0;
          *(ulonglong *)(lVar3 + 0xb8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0xa0) = FUN_143b537d2;
          *(ulonglong *)(lVar3 + 0xa8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          if (local_c8 != 0) {
            plVar20 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar20 = &local_a8;
            }
            uStack_80 = uVar4;
            uStack_70 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            (**(code **)(*plVar20 + 0x10))();
          }
          local_c8 = *(longlong *)(lVar3 + 0xe0);
          uStack_80 = *(undefined8 *)(lVar3 + 0xe8);
          local_b8 = *(longlong **)(lVar3 + 0xf0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xf8);
          local_68 = *(longlong *)(lVar3 + 0x100);
          uStack_60 = *(undefined8 *)(lVar3 + 0x108);
          local_58 = *(undefined8 *)(lVar3 + 0x110);
          uStack_50 = *(undefined8 *)(lVar3 + 0x118);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0x110) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 0x118) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0x100) = &PTR_LAB_14aedb730;
          *(longlong *)(lVar3 + 0x108) = param_1;
          *(undefined8 *)(lVar3 + 0xf0) = 0;
          *(ulonglong *)(lVar3 + 0xf8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0xe0) = FUN_143b5383e;
          *(ulonglong *)(lVar3 + 0xe8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_c0 = (undefined4)uStack_80;
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_bc = uStack_80._4_4_;
          uStack_b0 = (undefined4)uStack_70;
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          uStack_ac = uStack_70._4_4_;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_80 = uVar4;
          uStack_70 = uVar5;
          local_58 = uVar6;
          uStack_50 = uVar7;
          if (local_c8 != 0) {
            plVar20 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar20 = &local_a8;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
        }
        lVar19 = FUN_145b7285e();
        if ((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
          local_c8 = *(longlong *)(lVar3 + 0x90);
          uStack_80 = *(undefined8 *)(lVar3 + 0x98);
          local_b8 = *(longlong **)(lVar3 + 0xa0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xa8);
          local_68 = *(longlong *)(lVar3 + 0xb0);
          uStack_60 = *(undefined8 *)(lVar3 + 0xb8);
          local_58 = *(undefined8 *)(lVar3 + 0xc0);
          uStack_50 = *(undefined8 *)(lVar3 + 200);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0xc0) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 200) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0xb0) = &PTR_LAB_14aedb750;
          *(longlong *)(lVar3 + 0xb8) = param_1;
          *(undefined8 *)(lVar3 + 0xa0) = 0;
          *(ulonglong *)(lVar3 + 0xa8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0x90) = FUN_143b538ba;
          *(ulonglong *)(lVar3 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          if (local_c8 != 0) {
            plVar20 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar20 = &local_a8;
            }
            uStack_80 = uVar4;
            uStack_70 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            (**(code **)(*plVar20 + 0x10))();
          }
          local_c8 = *(longlong *)(lVar3 + 0xd0);
          uStack_80 = *(undefined8 *)(lVar3 + 0xd8);
          local_b8 = *(longlong **)(lVar3 + 0xe0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xe8);
          local_68 = *(longlong *)(lVar3 + 0xf0);
          uStack_60 = *(undefined8 *)(lVar3 + 0xf8);
          local_58 = *(undefined8 *)(lVar3 + 0x100);
          uStack_50 = *(undefined8 *)(lVar3 + 0x108);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0x100) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 0x108) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0xf0) = &PTR_LAB_14aedb770;
          *(longlong *)(lVar3 + 0xf8) = param_1;
          *(undefined8 *)(lVar3 + 0xe0) = 0;
          *(ulonglong *)(lVar3 + 0xe8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0xd0) = FUN_143b53926;
          *(ulonglong *)(lVar3 + 0xd8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_c0 = (undefined4)uStack_80;
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_bc = uStack_80._4_4_;
          uStack_b0 = (undefined4)uStack_70;
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          uStack_ac = uStack_70._4_4_;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_80 = uVar4;
          uStack_70 = uVar5;
          local_58 = uVar6;
          uStack_50 = uVar7;
          if (local_c8 != 0) {
            plVar20 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar20 = &local_a8;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
        }
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)iVar1 * 8 != lVar21);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14843b245 FUN_14843b245 body=175 status=ok
// SIG undefined FUN_14843b245(void)

undefined8 FUN_14843b245(undefined8 param_1)

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
  local_b8 = FUN_145b7410c();
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



// FUNCTION 14843b2f6 FUN_14843b2f6 body=280 status=ok
// SIG undefined FUN_14843b2f6(void)

void FUN_14843b2f6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x13) = 0x447a0000;
  local_38 = L"ScalableSphereGizmo";
  local_30 = 0x13;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UScalableSphereGizmo";
  local_30 = 0x14;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Scale Sphere Gizmo");
  FUN_140008f88(param_1 + 0x11,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  plVar1 = (longlong *)FUN_14843b40f(param_1);
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1);
  (**(code **)(*param_1 + 0x2d0))(param_1,plVar1);
  plVar1 = (longlong *)FUN_1484101e0(param_1);
  (**(code **)(*plVar1 + 0x300))(plVar1,param_1 + 7);
  (**(code **)(*param_1 + 0x2d0))(param_1,plVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843b40f FUN_14843b40f body=175 status=ok
// SIG undefined FUN_14843b40f(void)

undefined8 FUN_14843b40f(undefined8 param_1)

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
  local_b8 = FUN_145b741f6();
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



// FUNCTION 14843b4c0 FUN_14843b4c0 body=862 status=ok
// SIG undefined FUN_14843b4c0(void)

void FUN_14843b4c0(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined **local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar6 = *(longlong **)(param_1 + 0xa0);
  if (plVar6 != (longlong *)0x0) {
    if ((*(char *)(param_1 + 0x9c) == '\0') && (*(char *)(param_1 + 0x9d) != '\x01')) {
      lVar7 = 200;
      lVar9 = 0xff;
    }
    else {
      dVar1 = *(double *)(param_1 + 0xe8);
      dVar3 = *(double *)(param_1 + 0xd8);
      dVar4 = *(double *)(param_1 + 0xe0);
      local_98 = *(double *)(param_1 + 0xb8) * 30.0 + dVar1;
      local_a0 = *(double *)(param_1 + 0xb0) * 30.0 + dVar4;
      local_a8 = *(double *)(param_1 + 0xa8) * 30.0 + dVar3;
      local_128 = dVar3;
      dStack_120 = dVar4;
      local_118 = dVar1;
      dVar5 = (double)(**(code **)(*param_2 + 0x10))(param_2);
      dVar2 = 0.0;
      if (dVar5 != 0.0) {
        local_c0 = &PTR_LAB_14aed9770;
        local_b8 = dVar5;
        fVar10 = (float)FUN_14841f855(&local_c0,&local_a8);
        dVar2 = (double)fVar10;
      }
      plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
      local_b0 = dVar1 + *(double *)(param_1 + 0xb8) * dVar2 * 30.0;
      local_b8 = dVar4 + *(double *)(param_1 + 0xb0) * dVar2 * 30.0;
      local_c0 = (undefined **)(dVar3 + *(double *)(param_1 + 0xa8) * dVar2 * 30.0);
      lVar9 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 1;
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_128,&local_c0,&DAT_149e1dd34);
      plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
      local_b0 = local_118 - *(double *)(param_1 + 0xb8) * dVar2 * 30.0;
      local_c0 = (undefined **)(local_128 - dVar2 * *(double *)(param_1 + 0xa8) * 30.0);
      local_b8 = dStack_120 - *(double *)(param_1 + 0xb0) * dVar2 * 30.0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 1;
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_128,&local_c0,&DAT_149e1dd34);
      plVar6 = *(longlong **)(param_1 + 0xa0);
      lVar7 = 0xff;
    }
    fVar10 = *(float *)(param_1 + 0x98);
    local_a8 = (double)CONCAT44(DAT_14c75905c,(&DAT_14c758c60)[lVar7]);
    local_a0 = (double)CONCAT44(0x3f800000,(&DAT_14c758c60)[lVar9]);
    (**(code **)(*plVar6 + 0x2b0))((&DAT_14c758c60)[lVar9],&local_128);
    uVar8 = (**(code **)(*param_2 + 8))();
    local_138 = 0;
    local_140 = 0;
    local_130 = 0;
    local_148 = 1;
    FUN_147cb92cf(uVar8,&local_128,&local_a8,(double)fVar10);
  }
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843b820 FUN_14843b820 body=291 status=ok
// SIG undefined FUN_14843b820(void)

undefined1 * FUN_14843b820(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  cVar1 = FUN_14843b944(param_1 + -0x38,param_3,&local_48);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 100) = 0;
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 100) = 1;
    *(undefined8 *)(param_1 + 0x88) = local_88;
    *(undefined8 *)(param_1 + 0x90) = uStack_80;
    *(undefined8 *)(param_1 + 0x98) = local_78;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x70) = local_48;
    *(undefined8 *)(param_1 + 0x78) = uStack_40;
    *(undefined8 *)(param_1 + 0x80) = local_38;
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843b944 FUN_14843b944 body=371 status=ok
// SIG undefined FUN_14843b944(void)

undefined8
FUN_14843b944(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
LAB_14843b96e:
    uVar2 = 0;
  }
  else {
    local_78 = (undefined4)DAT_14c8463a0;
    uStack_74 = DAT_14c8463a0._4_4_;
    uStack_70 = (undefined4)DAT_14c8463a8;
    uStack_6c = DAT_14c8463a8._4_4_;
    local_68 = DAT_14c8463b0;
    local_c8 = &local_60;
    cVar1 = FUN_14843bcaa((undefined4)DAT_14c8463a0,param_2,&local_78,&local_48);
    if (cVar1 == '\0') {
      local_88 = DAT_14c846398;
      local_98 = (undefined4)DAT_14c846388;
      uStack_94 = DAT_14c846388._4_4_;
      uStack_90 = (undefined4)DAT_14c846390;
      uStack_8c = DAT_14c846390._4_4_;
      local_c8 = &local_60;
      cVar1 = FUN_14843bcaa(param_1,param_2,&local_98,&local_48);
      if (cVar1 == '\0') {
        local_a8 = DAT_14c8463c8;
        local_b8 = (undefined4)DAT_14c8463b8;
        uStack_b4 = DAT_14c8463b8._4_4_;
        uStack_b0 = (undefined4)DAT_14c8463c0;
        uStack_ac = DAT_14c8463c0._4_4_;
        local_c8 = &local_60;
        cVar1 = FUN_14843bcaa(param_1,param_2,&local_b8,&local_48);
        if (cVar1 == '\0') goto LAB_14843b96e;
      }
    }
    param_3[2] = local_50;
    *param_3 = local_60;
    param_3[1] = uStack_58;
    *param_4 = 0;
    param_4[1] = 0;
    *(undefined4 *)(param_4 + 2) = 0;
    *(undefined4 *)((longlong)param_4 + 0x14) = 0;
    *(undefined4 *)(param_4 + 3) = 0;
    *(undefined4 *)((longlong)param_4 + 0x1c) = 0x3ff00000;
    param_4[8] = 0x3ff0000000000000;
    param_4[9] = 0x3ff0000000000000;
    param_4[10] = 0x3ff0000000000000;
    param_4[0xb] = 0;
    *(undefined4 *)(param_4 + 4) = local_48;
    *(undefined4 *)((longlong)param_4 + 0x24) = uStack_44;
    *(undefined4 *)(param_4 + 5) = uStack_40;
    *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_3c;
    param_4[6] = local_38;
    param_4[7] = 0;
    uVar2 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14843bab8 FUN_14843bab8 body=443 status=ok
// SIG undefined FUN_14843bab8(void)

undefined8 FUN_14843bab8(longlong param_1,double *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  undefined1 auStack_d8 [64];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    *(undefined1 *)(param_1 + 100) = 0;
    uVar1 = 0;
  }
  else {
    local_40 = *param_2;
    local_38 = param_2[1];
    local_30 = param_2[2];
    local_18 = (param_2[5] * 1000000.0 + local_30) - local_30;
    local_20 = (param_2[4] * 1000000.0 + local_38) - local_38;
    local_28 = (param_2[3] * 1000000.0 + local_40) - local_40;
    dVar3 = local_18 * local_18 + local_28 * local_28 + local_20 * local_20;
    if (9.99999993922529e-09 < dVar3) {
      dVar3 = 1.0 / SQRT(dVar3);
      local_28 = local_28 * dVar3;
      local_20 = local_20 * dVar3;
      local_18 = local_18 * dVar3;
    }
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uVar1 = FUN_14843b944(param_1 + -0x38,&local_40,&local_58);
    bVar2 = (char)uVar1 != '\0';
    if (bVar2) {
      *(undefined8 *)(param_1 + 0x88) = local_98;
      *(undefined8 *)(param_1 + 0x90) = uStack_90;
      *(undefined8 *)(param_1 + 0x98) = local_88;
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x70) = local_58;
      *(undefined4 *)(param_1 + 0x74) = uStack_54;
      *(undefined4 *)(param_1 + 0x78) = uStack_50;
      *(undefined4 *)(param_1 + 0x7c) = uStack_4c;
      *(undefined8 *)(param_1 + 0x80) = local_48;
    }
    *(bool *)(param_1 + 100) = bVar2;
  }
  if ((local_10 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14843bc7a FUN_14843bc7a body=48 status=ok
// SIG undefined FUN_14843bc7a(void)

void FUN_14843bc7a(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 14843bcaa FUN_14843bcaa body=895 status=ok
// SIG undefined FUN_14843bcaa(void)

bool FUN_14843bcaa(longlong param_1,double *param_2,undefined8 param_3,double *param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_198 [32];
  double *local_178;
  double *local_170;
  double local_168;
  double dStack_160;
  double local_158;
  char local_149;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x2b0))(*(longlong **)(param_1 + 0xa0),&local_148);
  local_e8 = local_128;
  dStack_e0 = dStack_120;
  local_d8 = local_118;
  dVar8 = param_2[5];
  dVar1 = param_2[4];
  dVar2 = param_2[3];
  dVar3 = param_2[2];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  local_178 = (double *)&local_149;
  local_149 = '\0';
  local_170 = &local_148;
  FUN_14842069a(&local_e8,param_3,param_2,param_2 + 3);
  if (local_149 == '\x01') {
    if ((local_138 - dVar3) * dVar8 + (local_148 - dVar4) * dVar2 + (local_140 - dVar5) * dVar1 <=
        ((dVar8 * 1000000.0 + dVar3) - dVar3) * dVar8 +
        ((dVar2 * 1000000.0 + dVar4) - dVar4) * dVar2 +
        ((dVar1 * 1000000.0 + dVar5) - dVar5) * dVar1) {
      local_178 = &local_168;
      FUN_1484207df(&local_148,&local_e8,param_3,*(undefined4 *)(param_1 + 0x98));
      dVar7 = (local_158 - dVar3) * dVar8 +
              (local_168 - dVar4) * dVar2 + (dStack_160 - dVar5) * dVar1;
      if (0.0 <= dVar7) {
        dVar3 = dVar3 + dVar8 * dVar7;
        dVar5 = dVar5 + dVar1 * dVar7;
        dVar4 = dVar4 + dVar2 * dVar7;
      }
      dVar8 = SQRT((dVar3 - local_158) * (dVar3 - local_158) +
                   (dVar5 - dStack_160) * (dVar5 - dStack_160) +
                   (dVar4 - local_168) * (dVar4 - local_168));
      bVar6 = dVar8 <= (double)*(float *)(param_1 + 0x80);
      if (dVar8 <= (double)*(float *)(param_1 + 0x80)) {
        local_118 = local_158 - local_118;
        dStack_120 = dStack_160 - dStack_120;
        local_128 = local_168 - local_128;
        *param_5 = local_128;
        param_5[1] = dStack_120;
        param_5[2] = local_118;
        dVar8 = local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120;
        if (9.99999993922529e-09 < dVar8) {
          dVar8 = 1.0 / SQRT(dVar8);
          *param_5 = local_128 * dVar8;
          param_5[1] = dStack_120 * dVar8;
          param_5[2] = local_118 * dVar8;
        }
        param_4[2] = local_158;
        *param_4 = local_168;
        param_4[1] = dStack_160;
      }
      goto LAB_14843be47;
    }
  }
  bVar6 = false;
LAB_14843be47:
  if ((local_d0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843c02a FUN_14843c02a body=584 status=ok
// SIG undefined FUN_14843c02a(void)

void FUN_14843c02a(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  longlong *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined1 local_120 [28];
  undefined1 local_104 [4];
  undefined1 local_100 [56];
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_70 = *param_2;
  local_68 = param_2[1];
  local_60 = param_2[2];
  local_48 = (param_2[5] * 1000000.0 + local_60) - local_60;
  local_50 = (param_2[4] * 1000000.0 + local_68) - local_68;
  local_58 = (param_2[3] * 1000000.0 + local_70) - local_70;
  dVar5 = local_48 * local_48 + local_58 * local_58 + local_50 * local_50;
  if (9.99999993922529e-09 < dVar5) {
    dVar5 = 1.0 / SQRT(dVar5);
    local_58 = local_58 * dVar5;
    local_50 = local_50 * dVar5;
    local_48 = local_48 * dVar5;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  cVar3 = FUN_14843b944(param_1,&local_70,&local_88);
  lVar2 = local_b8;
  lVar1 = lStack_c0;
  lVar4 = local_c8;
  if (cVar3 != '\0') {
    param_1[0x17] = local_78;
    *(undefined4 *)(param_1 + 0x15) = local_88;
    *(undefined4 *)((longlong)param_1 + 0xac) = uStack_84;
    *(undefined4 *)(param_1 + 0x16) = uStack_80;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_7c;
    local_150 = param_1 + 0x1e;
    local_138 = local_c8;
    lStack_130 = lStack_c0;
    local_128 = local_b8;
    local_140 = local_104;
    local_148 = local_100;
    local_158 = local_120;
    FUN_148431461(&local_138,param_1 + 0x15,param_2,param_2 + 3);
    param_1[0x18] = lVar4;
    param_1[0x19] = lVar1;
    param_1[0x1a] = lVar2;
    *(int *)(param_1 + 0x1b) = (int)param_1[0x18];
    *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0xc4);
    *(int *)(param_1 + 0x1c) = (int)param_1[0x19];
    *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_1 + 0xcc);
    param_1[0x1d] = param_1[0x1a];
    *(undefined1 *)((longlong)param_1 + 0x9d) = 1;
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,param_1 + 0x11);
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843c274 FUN_14843c274 body=253 status=ok
// SIG undefined FUN_14843c274(void)

void FUN_14843c274(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  float *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_64 [4];
  undefined1 local_60 [28];
  float local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = local_64;
  local_78 = local_60;
  local_80 = &local_44;
  local_88 = &local_40;
  FUN_148431461(param_1 + 0xc0,param_1 + 0xa8,param_2,param_2 + 0x18);
  fVar4 = *(float *)(param_1 + 0xf0);
  *(float *)(param_1 + 0xf0) = local_44;
  *(undefined8 *)(param_1 + 0xd8) = local_40;
  *(undefined8 *)(param_1 + 0xe0) = uStack_38;
  *(undefined8 *)(param_1 + 0xe8) = local_30;
  fVar5 = (local_44 - fVar4) + *(float *)(param_1 + 0x98);
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  *(float *)(param_1 + 0x98) = fVar4;
  pcVar1 = *(code **)(param_1 + 0x40);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    local_24 = fVar4;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843c372 FUN_14843c372 body=41 status=ok
// SIG undefined FUN_14843c372(void)

void FUN_14843c372(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  *(undefined1 *)((longlong)param_1 + 0x9d) = 0;
  return;
}



// FUNCTION 14843c3a4 FUN_14843c3a4 body=194 status=ok
// SIG undefined FUN_14843c3a4(void)

undefined8 * FUN_14843c3a4(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [96];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = (**(code **)(*param_1 + 0x300))(param_1,param_3);
  if (cVar1 != '\0') {
    cVar1 = FUN_14843b944(param_1[0x10],param_3 + 0xb0,local_38,local_98);
    if (cVar1 != '\0') {
      param_2[1] = 0x6300000001;
      *param_2 = param_1;
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_14843c3fe;
    }
  }
  param_2[1] = 0x6300000002;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
LAB_14843c3fe:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843c468 FUN_14843c468 body=221 status=ok
// SIG undefined FUN_14843c468(void)

undefined4 * FUN_14843c468(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *(undefined8 *)(param_3 + 0xb0);
  uStack_60 = *(undefined8 *)(param_3 + 0xb8);
  local_58 = *(undefined8 *)(param_3 + 0xc0);
  uStack_50 = *(undefined8 *)(param_3 + 200);
  local_48 = *(undefined8 *)(param_3 + 0xd0);
  uStack_40 = *(undefined8 *)(param_3 + 0xd8);
  local_38 = 1;
  uVar8 = *(undefined8 *)(param_3 + 0x90);
  uVar9 = *(undefined8 *)(param_3 + 0x98);
  uVar10 = *(undefined8 *)(param_3 + 0xb0);
  uVar11 = *(undefined8 *)(param_3 + 0xb8);
  uVar1 = *(undefined4 *)(param_3 + 0xc4);
  uVar2 = *(undefined4 *)(param_3 + 200);
  uVar3 = *(undefined4 *)(param_3 + 0xcc);
  uVar4 = *(undefined4 *)(param_3 + 0xd0);
  uVar5 = *(undefined4 *)(param_3 + 0xd4);
  uVar6 = *(undefined4 *)(param_3 + 0xd8);
  uVar7 = *(undefined4 *)(param_3 + 0xdc);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_3 + 0xc0);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  *(undefined8 *)(param_1 + 0x90) = uVar11;
  *(undefined4 *)(param_1 + 0xa8) = uVar4;
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  *(undefined4 *)(param_1 + 0xb0) = uVar6;
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  local_30._0_4_ = (undefined4)uVar8;
  local_30._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_28._0_4_ = (undefined4)uVar9;
  uStack_28._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 0xb8) = (undefined4)local_30;
  *(undefined4 *)(param_1 + 0xbc) = local_30._4_4_;
  *(undefined4 *)(param_1 + 0xc0) = (undefined4)uStack_28;
  *(undefined4 *)(param_1 + 0xc4) = uStack_28._4_4_;
  local_30 = uVar8;
  uStack_28 = uVar9;
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2e0))();
  *(undefined1 *)(param_1 + 200) = 1;
  *param_2 = 1;
  *(longlong *)(param_2 + 2) = param_1;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843c546 FUN_14843c546 body=365 status=ok
// SIG undefined FUN_14843c546(void)

undefined4 * FUN_14843c546(longlong *param_1,undefined4 *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar10 = (**(code **)(*param_1 + 0x2b0))();
  if ((*param_3 & uVar10) == 0) {
    *param_2 = 2;
  }
  else {
    lVar5 = *(longlong *)(param_3 + 0x32);
    lVar6 = *(longlong *)(param_3 + 0x34);
    lVar1 = *(longlong *)(param_3 + 0x36);
    uVar7 = *(undefined8 *)(param_3 + 0x24);
    uVar8 = *(undefined8 *)(param_3 + 0x26);
    uVar10 = param_3[0x2c];
    uVar2 = param_3[0x2d];
    uVar3 = param_3[0x2e];
    uVar4 = param_3[0x2f];
    param_1[0x13] = *(longlong *)(param_3 + 0x30);
    *(uint *)(param_1 + 0x11) = uVar10;
    *(uint *)((longlong)param_1 + 0x8c) = uVar2;
    *(uint *)(param_1 + 0x12) = uVar3;
    *(uint *)((longlong)param_1 + 0x94) = uVar4;
    param_1[0x14] = lVar5;
    param_1[0x15] = lVar6;
    param_1[0x16] = lVar1;
    local_38._0_4_ = (undefined4)uVar7;
    local_38._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_30._0_4_ = (undefined4)uVar8;
    uStack_30._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    *(undefined4 *)(param_1 + 0x17) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 0xbc) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uStack_30._4_4_;
    local_38 = uVar7;
    uStack_30 = uVar8;
    cVar9 = (**(code **)(*param_1 + 0x310))(param_1,param_3);
    if (cVar9 == '\0') {
      local_88 = param_1[0x11];
      lStack_80 = param_1[0x12];
      local_78 = (undefined4)param_1[0x13];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x9c);
      uStack_70 = (undefined4)param_1[0x14];
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0xa4);
      local_68 = (undefined4)param_1[0x15];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0xac);
      uStack_60 = (undefined4)param_1[0x16];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0xb4);
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      (**(code **)(*(longlong *)param_1[0x10] + 0x2e8))();
      uVar11 = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x19) = 0;
      local_88 = param_1[0x11];
      lStack_80 = param_1[0x12];
      local_78 = (undefined4)param_1[0x13];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x9c);
      uStack_70 = (undefined4)param_1[0x14];
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0xa4);
      local_68 = (undefined4)param_1[0x15];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0xac);
      uStack_60 = (undefined4)param_1[0x16];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0xb4);
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      (**(code **)(*(longlong *)param_1[0x10] + 0x2f0))();
      uVar11 = 3;
    }
    *param_2 = uVar11;
  }
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843c6b4 FUN_14843c6b4 body=133 status=ok
// SIG undefined FUN_14843c6b4(void)

void FUN_14843c6b4(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
    local_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x90);
    local_48 = *(undefined4 *)(param_1 + 0x98);
    uStack_44 = *(undefined4 *)(param_1 + 0x9c);
    uStack_40 = *(undefined4 *)(param_1 + 0xa0);
    uStack_3c = *(undefined4 *)(param_1 + 0xa4);
    local_38 = *(undefined4 *)(param_1 + 0xa8);
    uStack_34 = *(undefined4 *)(param_1 + 0xac);
    uStack_30 = *(undefined4 *)(param_1 + 0xb0);
    uStack_2c = *(undefined4 *)(param_1 + 0xb4);
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2f0))(*(longlong **)(param_1 + 0x80));
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843c73a FUN_14843c73a body=212 status=ok
// SIG undefined FUN_14843c73a(void)

void FUN_14843c73a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14843c80f();
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0xe] = (longlong)plVar1;
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1 + 7);
  local_2c = 0x32;
  (**(code **)(*(longlong *)param_1[0xe] + 0x2a8))((longlong *)param_1[0xe],&local_2c);
  (**(code **)(*param_1 + 0x2d0))(param_1,param_1[0xe]);
  plVar1 = (longlong *)FUN_1484101e0(param_1);
  (**(code **)(*plVar1 + 0x300))(plVar1,param_1 + 8);
  local_2c = 0x32;
  (**(code **)(*plVar1 + 0x2a8))(plVar1,&local_2c);
  (**(code **)(*param_1 + 0x2d0))(param_1,plVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843c80f FUN_14843c80f body=175 status=ok
// SIG undefined FUN_14843c80f(void)

undefined8 FUN_14843c80f(undefined8 param_1)

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
  local_b8 = FUN_145869fd2();
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



// FUNCTION 14843c8c0 FUN_14843c8c0 body=95 status=ok
// SIG undefined FUN_14843c8c0(void)

undefined1 * FUN_14843c8c0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14843c930 FUN_14843c930 body=95 status=ok
// SIG undefined FUN_14843c930(void)

undefined1 * FUN_14843c930(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14843c9e0 FUN_14843c9e0 body=105 status=ok
// SIG undefined FUN_14843c9e0(void)

bool FUN_14843c9e0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    local_18 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_14689c22e(param_2);
    }
    iVar1 = FUN_140bddff2(param_1 + 0x28,&local_18);
    bVar2 = iVar1 != -1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843ca4a FUN_14843ca4a body=175 status=ok
// SIG undefined FUN_14843ca4a(void)

undefined8 FUN_14843ca4a(undefined8 param_1)

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
  local_b8 = FUN_145b72948();
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



// FUNCTION 14843cafa FUN_14843cafa body=175 status=ok
// SIG undefined FUN_14843cafa(void)

undefined8 FUN_14843cafa(undefined8 param_1)

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
  local_b8 = FUN_145b73c7a();
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



// FUNCTION 14843cbaa FUN_14843cbaa body=175 status=ok
// SIG undefined FUN_14843cbaa(void)

undefined8 FUN_14843cbaa(undefined8 param_1)

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
  local_b8 = FUN_145b72774();
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



// FUNCTION 14843cc5a FUN_14843cc5a body=175 status=ok
// SIG undefined FUN_14843cc5a(void)

undefined8 FUN_14843cc5a(undefined8 param_1)

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
  local_b8 = FUN_145a7b398();
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



// FUNCTION 14843cd0a FUN_14843cd0a body=175 status=ok
// SIG undefined FUN_14843cd0a(void)

undefined8 FUN_14843cd0a(undefined8 param_1)

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
  local_b8 = FUN_145885bea();
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



// FUNCTION 14843cdba FUN_14843cdba body=175 status=ok
// SIG undefined FUN_14843cdba(void)

undefined8 FUN_14843cdba(undefined8 param_1)

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
  local_b8 = FUN_145b73e4e();
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



// FUNCTION 14843ce6a FUN_14843ce6a body=146 status=ok
// SIG undefined FUN_14843ce6a(void)

longlong FUN_14843ce6a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar5);
        if (lVar2 != 0) {
          lVar3 = FUN_145b11b48();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            return lVar2;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
    lVar4 = FUN_1459d7446();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) break;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30) {
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14843cefc FUN_14843cefc body=116 status=ok
// SIG undefined FUN_14843cefc(void)

longlong FUN_14843cefc(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x50) == '\x01') &&
     (lVar1 = (**(code **)(*param_2 + 0x2c0))(param_2,&DAT_14cb4b310,param_4,param_3), lVar1 != 0))
  {
    lVar2 = FUN_14107a2f2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14844e33e(param_1 + 0x28,lVar1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14843cf70 FUN_14843cf70 body=127 status=ok
// SIG undefined FUN_14843cf70(void)

undefined8 FUN_14843cf70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar1 = FUN_14594bbf4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14843cfbf;
  }
  lVar4 = 0;
LAB_14843cfbf:
  plVar2 = (longlong *)FUN_14843ce6a(*(undefined8 *)(lVar4 + 0x78));
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014843cfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,param_2,param_3);
  return uVar3;
}



// FUNCTION 14843cff0 FUN_14843cff0 body=123 status=ok
// SIG undefined FUN_14843cff0(void)

longlong FUN_14843cff0(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8) = param_3;
    lVar1 = (**(code **)(*param_2 + 0x2c0))(param_2,&DAT_14cb4b320,param_5);
    if (lVar1 != 0) {
      lVar2 = FUN_14107a2f2();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_14844e33e(param_1 + 0x28,lVar1);
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14843d06b FUN_14843d06b body=128 status=ok
// SIG undefined FUN_14843d06b(void)

undefined8 FUN_14843d06b(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar1 = FUN_14594bbf4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14843d0c0;
  }
  lVar4 = 0;
LAB_14843d0c0:
  plVar2 = (longlong *)FUN_14843ce6a(*(undefined8 *)(lVar4 + 0x78));
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  uVar3 = (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1,param_2,param_3,param_4);
  return uVar3;
}



// FUNCTION 14843d0eb FUN_14843d0eb body=58 status=ok
// SIG undefined FUN_14843d0eb(void)

undefined8 FUN_14843d0eb(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_148451354();
  uVar1 = FUN_14843d06b(uVar1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14843d126 FUN_14843d126 body=123 status=ok
// SIG undefined FUN_14843d126(void)

longlong FUN_14843d126(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8) = param_3;
    lVar1 = (**(code **)(*param_2 + 0x2c0))(param_2,&DAT_14cb4b330,param_5);
    if (lVar1 != 0) {
      lVar2 = FUN_14107a2f2();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_14844e33e(param_1 + 0x28,lVar1);
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14843d1a1 FUN_14843d1a1 body=128 status=ok
// SIG undefined FUN_14843d1a1(void)

undefined8 FUN_14843d1a1(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar1 = FUN_14594bbf4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14843d1f6;
  }
  lVar4 = 0;
LAB_14843d1f6:
  plVar2 = (longlong *)FUN_14843ce6a(*(undefined8 *)(lVar4 + 0x78));
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  uVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1,param_2,param_3,param_4);
  return uVar3;
}



// FUNCTION 14843d221 FUN_14843d221 body=58 status=ok
// SIG undefined FUN_14843d221(void)

undefined8 FUN_14843d221(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_148451354();
  uVar1 = FUN_14843d1a1(uVar1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 14843d270 FUN_14843d270 body=858 status=ok
// SIG undefined FUN_14843d270(void)

void FUN_14843d270(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar9 = param_1[0x1c];
  uVar6 = (int)lVar9 + 1;
  *(uint *)(param_1 + 0x1c) = uVar6;
  if (*(uint *)((longlong)param_1 + 0xe4) < uVar6) {
    FUN_14844e3e2(param_1 + 0x1b);
  }
  lVar1 = param_1[0x1b];
  lVar13 = (longlong)(int)lVar9 * 0x160;
  _Dst = (void *)(lVar1 + lVar13);
  lVar9 = lVar1 + lVar13;
  memset(_Dst,0,0xb0);
  *(undefined4 *)(lVar9 + 0xb0) = 0;
  *(undefined4 *)(lVar9 + 0xb4) = 0;
  *(undefined4 *)(lVar9 + 0xb8) = 0;
  *(undefined4 *)(lVar9 + 0xbc) = 0x3ff00000;
  *(undefined8 *)(lVar9 + 0xc0) = 0;
  *(undefined8 *)(lVar9 + 200) = 0;
  *(undefined8 *)(lVar9 + 0xd0) = 0;
  *(undefined8 *)(lVar9 + 0xd8) = 0;
  *(undefined4 *)(lVar9 + 0xe0) = 0;
  *(undefined4 *)(lVar9 + 0xe4) = 0x3ff00000;
  *(undefined4 *)(lVar9 + 0xe8) = 0;
  *(undefined4 *)(lVar9 + 0xec) = 0x3ff00000;
  *(undefined8 *)(lVar9 + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(lVar9 + 0xf8) = 0;
  *(undefined8 *)(lVar9 + 0x100) = 0;
  *(undefined8 *)(lVar9 + 0x108) = 0;
  *(undefined4 *)(lVar9 + 0x110) = 0;
  *(undefined4 *)(lVar9 + 0x114) = 0;
  *(undefined4 *)(lVar9 + 0x118) = 0;
  *(undefined4 *)(lVar9 + 0x11c) = 0x3ff00000;
  *(undefined8 *)(lVar9 + 0x120) = 0;
  *(undefined8 *)(lVar9 + 0x128) = 0;
  *(undefined8 *)(lVar9 + 0x130) = 0;
  *(undefined8 *)(lVar9 + 0x138) = 0;
  *(undefined4 *)(lVar9 + 0x140) = 0;
  *(undefined4 *)(lVar9 + 0x144) = 0x3ff00000;
  *(undefined4 *)(lVar9 + 0x148) = 0;
  *(undefined4 *)(lVar9 + 0x14c) = 0x3ff00000;
  *(undefined8 *)(lVar9 + 0x150) = 0x3ff0000000000000;
  *(undefined8 *)(lVar9 + 0x158) = 0;
  FUN_14485c47a(_Dst,param_2);
  *(undefined1 *)(lVar9 + 8) = param_3;
  local_e8 = *(longlong *)(lVar9 + 0x20);
  uStack_a0 = *(undefined8 *)(lVar9 + 0x28);
  local_d8 = *(longlong **)(lVar9 + 0x30);
  uStack_90 = *(undefined8 *)(lVar9 + 0x38);
  local_88 = *(longlong *)(lVar9 + 0x40);
  uStack_80 = *(undefined8 *)(lVar9 + 0x48);
  local_78 = *(undefined8 *)(lVar9 + 0x50);
  uStack_70 = *(undefined8 *)(lVar9 + 0x58);
  uVar4 = local_78;
  uVar5 = uStack_70;
  local_98 = local_d8;
  uVar3 = uStack_90;
  local_a8 = local_e8;
  uVar7 = uStack_a0;
  *(ulonglong *)(lVar9 + 0x50) = CONCAT44(uStack_b4,local_b8);
  *(ulonglong *)(lVar9 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined ***)(lVar9 + 0x40) = &PTR_LAB_14aedb790;
  *(undefined8 *)(lVar9 + 0x48) = param_2;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(ulonglong *)(lVar9 + 0x38) = CONCAT44(uStack_cc,uStack_d0);
  *(code **)(lVar9 + 0x20) = FUN_143b539a2;
  *(ulonglong *)(lVar9 + 0x28) = CONCAT44(uStack_dc,uStack_e0);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  if (local_e8 != 0) {
    plVar8 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar8 = &local_c8;
    }
    uStack_a0 = uVar7;
    uStack_90 = uVar3;
    local_78 = uVar4;
    uStack_70 = uVar5;
    (**(code **)(*plVar8 + 0x10))();
  }
  local_e8 = *(longlong *)(lVar9 + 0x60);
  uStack_a0 = *(undefined8 *)(lVar9 + 0x68);
  local_d8 = *(longlong **)(lVar9 + 0x70);
  uStack_90 = *(undefined8 *)(lVar9 + 0x78);
  local_88 = *(longlong *)(lVar9 + 0x80);
  uStack_80 = *(undefined8 *)(lVar9 + 0x88);
  local_78 = *(undefined8 *)(lVar9 + 0x90);
  uStack_70 = *(undefined8 *)(lVar9 + 0x98);
  uVar4 = local_78;
  uVar5 = uStack_70;
  local_98 = local_d8;
  uVar3 = uStack_90;
  local_a8 = local_e8;
  uVar7 = uStack_a0;
  *(ulonglong *)(lVar9 + 0x90) = CONCAT44(uStack_b4,local_b8);
  *(ulonglong *)(lVar9 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined ***)(lVar9 + 0x80) = &PTR_LAB_14aedb7b0;
  *(undefined8 *)(lVar9 + 0x88) = param_2;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  *(ulonglong *)(lVar9 + 0x78) = CONCAT44(uStack_cc,uStack_d0);
  *(longlong *)(lVar9 + 0x60) = (longlong)FUN_143b539f2;
  *(ulonglong *)(lVar9 + 0x68) = CONCAT44(uStack_dc,uStack_e0);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  uStack_a0 = uVar7;
  uStack_90 = uVar3;
  local_78 = uVar4;
  uStack_70 = uVar5;
  if (local_e8 != 0) {
    plVar8 = &local_c8;
    if (local_d8 != (longlong *)0x0) {
      plVar8 = local_d8;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  *(undefined8 *)((longlong)_Dst + 0x10) = 0;
  pcVar2 = *(code **)((longlong)_Dst + 0x20);
  plVar8 = (longlong *)((longlong)_Dst + 0x40);
  if (*(longlong **)((longlong)_Dst + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)((longlong)_Dst + 0x30);
  }
  uVar7 = (**(code **)(*plVar8 + 8))(plVar8);
  (*pcVar2)(&local_a8,uVar7);
  plVar8 = &local_a8;
  plVar12 = (longlong *)((longlong)_Dst + 0xa0);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar12 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar12 = plVar12 + 1;
  }
  puVar10 = &DAT_14c846480;
  puVar11 = (undefined8 *)(lVar1 + lVar13 + 0x100);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  (**(code **)(*param_1 + 0x2e0))(param_1);
  plVar8 = param_1 + 0x1e;
  plVar12 = &local_a8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar12 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar12 = plVar12 + 1;
  }
  FUN_14844e476(param_1 + 0x11,param_1);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843d5cc FUN_14843d5cc body=703 status=ok
// SIG undefined FUN_14843d5cc(void)

void FUN_14843d5cc(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,undefined1 param_6)

{
  code *pcVar1;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar26 = param_1[0x1c];
  uVar22 = (int)lVar26 + 1;
  *(uint *)(param_1 + 0x1c) = uVar22;
  local_b8 = param_2;
  if (*(uint *)((longlong)param_1 + 0xe4) < uVar22) {
    FUN_14844e3e2(param_1 + 0x1b);
  }
  lVar25 = param_1[0x1b];
  lVar27 = (longlong)(int)lVar26 * 0x160;
  lVar26 = lVar25 + lVar27;
  local_b0 = lVar25;
  memset((void *)(lVar25 + lVar27),0,0xb0);
  *(undefined4 *)(lVar26 + 0xb0) = 0;
  *(undefined4 *)(lVar26 + 0xb4) = 0;
  *(undefined4 *)(lVar26 + 0xb8) = 0;
  *(undefined4 *)(lVar26 + 0xbc) = 0x3ff00000;
  *(undefined8 *)(lVar26 + 0xc0) = 0;
  *(undefined8 *)(lVar26 + 200) = 0;
  *(undefined8 *)(lVar26 + 0xd0) = 0;
  *(undefined8 *)(lVar26 + 0xd8) = 0;
  *(undefined4 *)(lVar26 + 0xe0) = 0;
  *(undefined4 *)(lVar26 + 0xe4) = 0x3ff00000;
  *(undefined4 *)(lVar26 + 0xe8) = 0;
  *(undefined4 *)(lVar26 + 0xec) = 0x3ff00000;
  *(undefined8 *)(lVar26 + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(lVar26 + 0xf8) = 0;
  puVar30 = (undefined8 *)(lVar25 + 0x100 + lVar27);
  *puVar30 = 0;
  puVar30[1] = 0;
  *(undefined4 *)(puVar30 + 2) = 0;
  *(undefined4 *)((longlong)puVar30 + 0x14) = 0;
  *(undefined4 *)(puVar30 + 3) = 0;
  *(undefined4 *)((longlong)puVar30 + 0x1c) = 0x3ff00000;
  puVar30[4] = 0;
  puVar30[5] = 0;
  puVar30[6] = 0;
  puVar30[7] = 0;
  *(undefined4 *)(puVar30 + 8) = 0;
  *(undefined4 *)((longlong)puVar30 + 0x44) = 0x3ff00000;
  *(undefined4 *)(puVar30 + 9) = 0;
  *(undefined4 *)((longlong)puVar30 + 0x4c) = 0x3ff00000;
  puVar30[10] = 0x3ff0000000000000;
  puVar30[0xb] = 0;
  FUN_14485c47a((void *)(lVar25 + lVar27),local_b8);
  *(undefined1 *)(puVar30 + -0x1f) = param_6;
  lVar25 = *(longlong *)(lVar26 + 0x20);
  lVar2 = *(longlong *)(lVar26 + 0x28);
  lVar3 = *(longlong *)(lVar26 + 0x30);
  lVar4 = *(longlong *)(lVar26 + 0x38);
  lVar5 = *(longlong *)(lVar26 + 0x40);
  lVar6 = *(longlong *)(lVar26 + 0x48);
  lVar7 = *(longlong *)(lVar26 + 0x50);
  lVar8 = *(longlong *)(lVar26 + 0x58);
  lVar9 = *param_3;
  lVar10 = param_3[1];
  lVar11 = param_3[2];
  lVar12 = param_3[3];
  lVar13 = param_3[4];
  lVar14 = param_3[5];
  lVar15 = param_3[7];
  *(longlong *)(lVar26 + 0x50) = param_3[6];
  *(longlong *)(lVar26 + 0x58) = lVar15;
  *(longlong *)(lVar26 + 0x40) = lVar13;
  *(longlong *)(lVar26 + 0x48) = lVar14;
  *(longlong *)(lVar26 + 0x30) = lVar11;
  *(longlong *)(lVar26 + 0x38) = lVar12;
  *(longlong *)(lVar26 + 0x20) = lVar9;
  *(longlong *)(lVar26 + 0x28) = lVar10;
  param_3[6] = lVar7;
  param_3[7] = lVar8;
  param_3[4] = lVar5;
  param_3[5] = lVar6;
  param_3[2] = lVar3;
  param_3[3] = lVar4;
  *param_3 = lVar25;
  param_3[1] = lVar2;
  lVar25 = *(longlong *)(lVar26 + 0x60);
  uVar23 = *(undefined8 *)(lVar26 + 0x68);
  uVar16 = *(undefined8 *)(lVar26 + 0x70);
  uVar17 = *(undefined8 *)(lVar26 + 0x78);
  uVar18 = puVar30[-0x10];
  uVar19 = puVar30[-0xf];
  uVar20 = puVar30[-0xe];
  uVar21 = puVar30[-0xd];
  lVar2 = *param_4;
  lVar3 = param_4[1];
  lVar4 = param_4[2];
  lVar5 = param_4[3];
  lVar6 = param_4[4];
  lVar7 = param_4[5];
  lVar8 = param_4[7];
  puVar30[-0xe] = param_4[6];
  puVar30[-0xd] = lVar8;
  puVar30[-0x10] = lVar6;
  puVar30[-0xf] = lVar7;
  *(longlong *)(lVar26 + 0x70) = lVar4;
  *(longlong *)(lVar26 + 0x78) = lVar5;
  *(longlong *)(lVar26 + 0x60) = lVar2;
  *(longlong *)(lVar26 + 0x68) = lVar3;
  local_a8._0_4_ = (undefined4)lVar25;
  local_a8._4_4_ = (undefined4)((ulonglong)lVar25 >> 0x20);
  uStack_a0._0_4_ = (undefined4)uVar23;
  uStack_a0._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
  local_98._0_4_ = (undefined4)uVar16;
  local_98._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
  uStack_90._0_4_ = (undefined4)uVar17;
  uStack_90._4_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
  local_88._0_4_ = (undefined4)uVar18;
  local_88._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
  uStack_80._0_4_ = (undefined4)uVar19;
  uStack_80._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
  local_78._0_4_ = (undefined4)uVar20;
  local_78._4_4_ = (undefined4)((ulonglong)uVar20 >> 0x20);
  uStack_70._0_4_ = (undefined4)uVar21;
  uStack_70._4_4_ = (undefined4)((ulonglong)uVar21 >> 0x20);
  *(undefined4 *)(param_4 + 6) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_4 + 0x34) = local_78._4_4_;
  *(undefined4 *)(param_4 + 7) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_4 + 0x3c) = uStack_70._4_4_;
  *(undefined4 *)(param_4 + 4) = (undefined4)local_88;
  *(undefined4 *)((longlong)param_4 + 0x24) = local_88._4_4_;
  *(undefined4 *)(param_4 + 5) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_80._4_4_;
  *(undefined4 *)(param_4 + 2) = (undefined4)local_98;
  *(undefined4 *)((longlong)param_4 + 0x14) = local_98._4_4_;
  *(undefined4 *)(param_4 + 3) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_90._4_4_;
  *(undefined4 *)param_4 = (undefined4)local_a8;
  *(undefined4 *)((longlong)param_4 + 4) = local_a8._4_4_;
  *(undefined4 *)(param_4 + 1) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)param_4 + 0xc) = uStack_a0._4_4_;
  puVar30[-0x1e] = param_5;
  pcVar1 = *(code **)(lVar26 + 0x20);
  plVar24 = (longlong *)(local_b0 + 0x40 + lVar27);
  if (*(longlong **)(lVar26 + 0x30) != (longlong *)0x0) {
    plVar24 = *(longlong **)(lVar26 + 0x30);
  }
  local_a8 = lVar25;
  uStack_a0 = uVar23;
  local_98 = uVar16;
  uStack_90 = uVar17;
  local_88 = uVar18;
  uStack_80 = uVar19;
  local_78 = uVar20;
  uStack_70 = uVar21;
  uVar23 = (**(code **)(*plVar24 + 8))();
  (*pcVar1)(&local_a8,uVar23);
  puVar28 = &local_a8;
  puVar29 = (undefined8 *)(lVar26 + 0xa0);
  for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar29 = *puVar28;
    puVar28 = puVar28 + 1;
    puVar29 = puVar29 + 1;
  }
  puVar28 = &DAT_14c846480;
  for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
    *puVar30 = *puVar28;
    puVar28 = puVar28 + 1;
    puVar30 = puVar30 + 1;
  }
  (**(code **)(*param_1 + 0x2e0))(param_1);
  plVar24 = param_1 + 0x1e;
  plVar31 = &local_a8;
  for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
    *plVar31 = *plVar24;
    plVar24 = plVar24 + 1;
    plVar31 = plVar31 + 1;
  }
  FUN_14844e476(param_1 + 0x11,param_1);
  if (*param_3 != 0) {
    plVar24 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar24 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if (*param_4 != 0) {
    plVar24 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar24 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843d8c4 FUN_14843d8c4 body=2742 status=ok
// SIG undefined FUN_14843d8c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14843d8c4(longlong param_1)

{
  double dVar1;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [8];
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong *plVar26;
  double *pdVar27;
  double *pdVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auStack_328 [32];
  double local_308;
  double dStack_300;
  double local_2f8 [2];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [8];
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
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
  ulonglong local_108;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar23 = (longlong)*(int *)(param_1 + 0xe0);
  if (lVar23 != 0) {
    lVar30 = *(longlong *)(param_1 + 0xd8);
    lVar29 = lVar23 * 0x160;
    local_308 = 0.0;
    dStack_300 = 1.0;
    lVar24 = param_1;
    do {
      auVar44 = _DAT_149934d80;
      local_2f8[0] = 0.0;
      local_2f8[1] = 0.0;
      local_2e8._0_8_ = local_308;
      local_2e8._0_8_ = local_308;
      local_2e8._8_8_ = dStack_300;
      local_2c8 = ZEXT816(0);
      local_2d8 = ZEXT816(0);
      local_2b8 = (undefined1  [8])0x3ff0000000000000;
      auVar21 = local_2b8;
      local_2b8 = (undefined1  [8])0x3ff0000000000000;
      dStack_2b0 = 1.0;
      local_2a8 = ZEXT816(0x3ff0000000000000);
      if ((*(char *)(param_1 + 0xd0) == '\x01') && (1 < *(int *)(param_1 + 0xe0))) {
        pdVar27 = (double *)(lVar30 + 0xa0);
        pdVar28 = local_2f8;
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *pdVar28 = *pdVar27;
          pdVar27 = pdVar27 + 1;
          pdVar28 = pdVar28 + 1;
        }
        local_2d8._8_8_ =
             (*(double *)(param_1 + 0x118) - *(double *)(param_1 + 0x178)) + (double)local_2d8._8_8_
        ;
        local_2d8._0_8_ =
             (*(double *)(param_1 + 0x110) - *(double *)(param_1 + 0x170)) + (double)local_2d8._0_8_
        ;
        local_2c8._8_8_ = (double)local_2c8._8_8_ + 0.0;
        local_2c8._0_8_ =
             (*(double *)(param_1 + 0x120) - *(double *)(param_1 + 0x180)) + (double)local_2c8._0_8_
        ;
        dVar4 = *(double *)(param_1 + 0xf0);
        dVar5 = *(double *)(param_1 + 0xf8);
        dVar6 = *(double *)(param_1 + 0x100);
        dVar8 = *(double *)(param_1 + 0x108);
        dVar7 = *(double *)(param_1 + 0x150);
        dVar41 = *(double *)(param_1 + 0x158);
        dVar33 = *(double *)(param_1 + 0x160) * -1.0;
        dVar35 = *(double *)(param_1 + 0x168) * 1.0;
        dVar34 = (dVar33 * local_2f8[1] +
                 (dVar35 * local_2f8[0] * 1.0 - (double)local_2e8._8_8_ * dVar7)) -
                 dVar41 * (double)local_2e8._0_8_ * -1.0;
        dVar36 = (dVar35 * local_2f8[1] +
                 (dVar33 * local_2f8[0] * -1.0 - (double)local_2e8._8_8_ * dVar41)) -
                 dVar7 * (double)local_2e8._0_8_ * 1.0;
        dVar37 = dVar35 * (double)local_2e8._0_8_ * 1.0 +
                 dVar7 * local_2f8[1] +
                 (dVar33 * (double)local_2e8._8_8_ - local_2f8[0] * dVar41 * 1.0);
        dVar41 = dVar33 * (double)local_2e8._0_8_ * -1.0 +
                 dVar41 * local_2f8[1] +
                 (dVar35 * (double)local_2e8._8_8_ - local_2f8[0] * dVar7 * -1.0);
        local_2f8[0] = dVar5 * dVar37 * -1.0 +
                       dVar6 * dVar36 + dVar8 * dVar34 * 1.0 + dVar4 * dVar41;
        local_2f8[1] = dVar4 * dVar37 * 1.0 +
                       dVar8 * dVar36 + dVar6 * dVar34 * -1.0 + dVar5 * dVar41;
        dVar7 = dVar6 * dVar37 * -1.0 + ((dVar34 * dVar4 * -1.0 + dVar41 * dVar8) - dVar36 * dVar5);
        local_2e8._8_4_ = SUB84(dVar7,0);
        local_2e8._0_8_ =
             dVar8 * dVar37 * 1.0 + ((dVar34 * dVar5 * 1.0 + dVar41 * dVar6) - dVar36 * dVar4);
        local_2e8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar44._0_8_ = (double)local_2b8 * *(double *)(param_1 + 0x130);
        auVar44._8_8_ = dStack_2b0 * *(double *)(param_1 + 0x138);
        _local_2b8 = divpd(auVar44,*(undefined1 (*) [16])(param_1 + 400));
        local_2a8._8_8_ = 0;
        local_2a8._0_8_ =
             ((double)local_2a8._0_8_ * *(double *)(param_1 + 0x140)) / *(double *)(param_1 + 0x1a0)
        ;
      }
      else {
        auVar38 = *(undefined1 (*) [16])(param_1 + 0x130);
        dVar7 = auVar38._0_8_;
        dVar8 = auVar38._8_8_;
        auVar39 = *(undefined1 (*) [16])(param_1 + 0x140);
        dVar4 = auVar39._0_8_;
        dVar41 = auVar39._8_8_;
        auVar43 = *(undefined1 (*) [16])(lVar30 + 0x140);
        dVar5 = auVar43._0_8_;
        dVar33 = auVar43._8_8_;
        auVar32 = *(undefined1 (*) [16])(lVar30 + 0x150);
        dVar6 = auVar32._0_8_;
        auVar38 = minpd(auVar43,auVar38);
        auVar43 = minpd(auVar32,auVar39);
        auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
        auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
        iVar22 = movmskpd((int)lVar23,auVar39);
        auVar38._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
        auVar38._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
        uVar25 = movmskpd((int)lVar24,auVar38);
        if ((uVar25 & 0x3fffffff) == 0 && iVar22 == 0) {
          dVar13 = *(double *)(lVar30 + 0x100);
          dVar14 = *(double *)(lVar30 + 0x108);
          dVar15 = *(double *)(lVar30 + 0x110);
          dVar16 = *(double *)(lVar30 + 0x118);
          dVar17 = *(double *)(param_1 + 0xf0);
          dVar18 = *(double *)(param_1 + 0xf8);
          dVar19 = *(double *)(param_1 + 0x100);
          dVar20 = *(double *)(param_1 + 0x108);
          dVar34 = *(double *)(param_1 + 0x108);
          dVar35 = *(double *)(param_1 + 0x108);
          dVar36 = *(double *)(param_1 + 0xf0);
          dVar37 = *(double *)(param_1 + 0xf0);
          dVar1 = *(double *)(param_1 + 0xf8);
          dVar2 = *(double *)(param_1 + 0xf8);
          dVar46 = *(double *)(param_1 + 0x100);
          dVar42 = *(double *)(param_1 + 0x100);
          local_2f8[0] = dVar14 * dVar46 * -1.0 +
                         dVar15 * dVar1 + dVar16 * dVar36 * 1.0 + dVar13 * dVar34;
          local_2f8[1] = dVar13 * dVar42 * 1.0 +
                         dVar16 * dVar2 + dVar15 * dVar37 * -1.0 + dVar14 * dVar35;
          dVar50 = *(double *)(lVar30 + 0x120) * dVar7;
          dVar9 = *(double *)(lVar30 + 0x128) * dVar8;
          dVar10 = *(double *)(lVar30 + 0x130) * dVar4;
          dVar11 = *(double *)(lVar30 + 0x138) * dVar41;
          dVar48 = dVar9 * dVar17 - dVar18 * dVar50;
          dVar12 = dVar10 * dVar18 - dVar19 * dVar9;
          dVar49 = dVar50 * dVar19 - dVar17 * dVar10;
          dVar47 = dVar11 * dVar20 - dVar20 * dVar11;
          dVar12 = dVar12 + dVar12;
          dVar49 = dVar49 + dVar49;
          dVar48 = dVar48 + dVar48;
          dVar47 = dVar47 + dVar47;
          dVar9 = (dVar12 * dVar19 - dVar48 * dVar17) + dVar35 * dVar49 + dVar9 +
                  *(double *)(param_1 + 0x118);
          dVar47 = (dVar47 * dVar20 - dVar47 * dVar20) + dVar35 * dVar47 + dVar11 +
                   *(double *)(param_1 + 0x128);
          local_2e8._8_8_ =
               dVar15 * dVar42 * -1.0 +
               ((dVar37 * dVar13 * -1.0 + dVar16 * dVar35) - dVar14 * dVar2);
          local_2e8._0_8_ =
               dVar16 * dVar46 * 1.0 + ((dVar36 * dVar14 * 1.0 + dVar15 * dVar34) - dVar13 * dVar1);
          local_2d8._8_4_ = SUB84(dVar9,0);
          local_2d8._0_8_ =
               (dVar48 * dVar18 - dVar19 * dVar49) + dVar34 * dVar12 + dVar50 +
               *(double *)(param_1 + 0x110);
          local_2d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_2c8._8_4_ = SUB84(dVar47,0);
          local_2c8._0_8_ =
               (dVar49 * dVar17 - dVar18 * dVar12) + dVar34 * dVar48 + dVar10 +
               *(double *)(param_1 + 0x120);
          local_2c8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          dStack_2b0 = dVar33 * dVar8;
          local_2b8 = (undefined1  [8])(dVar5 * dVar7);
          local_2a8._8_8_ = auVar32._8_8_ * dVar41;
          local_2a8._0_8_ = dVar6 * dVar4;
        }
        else {
          dVar1 = *(double *)(param_1 + 0xf0);
          dVar2 = *(double *)(param_1 + 0xf8);
          dVar46 = *(double *)(param_1 + 0x100);
          dVar42 = dVar2 + dVar2;
          dVar47 = dVar46 + dVar46;
          dVar35 = dVar1 * (dVar1 + dVar1);
          local_1a8 = (1.0 - (dVar35 + dVar2 * dVar42)) * dVar4;
          dVar37 = *(double *)(param_1 + 0xf0) * dVar47;
          dVar34 = *(double *)(param_1 + 0x108);
          dVar48 = dVar47 * dVar34;
          dVar50 = (dVar1 + dVar1) * *(double *)(param_1 + 0x108);
          dVar34 = dVar42 * dVar34;
          local_1b8 = (dVar34 + dVar37) * dVar4;
          dVar41 = dVar41 * auVar32._8_8_;
          dVar35 = (DAT_149934d80._8_8_ - (dVar46 * dVar47 + dVar35)) * dVar8;
          dVar36 = (dVar42 * dVar1 + dVar48) * dVar7;
          local_1c8 = (dVar47 * dVar2 + dVar50) * dVar8;
          dStack_1b0 = (dVar47 * dVar2 - dVar50) * dVar4;
          local_1e8 = (dVar37 - dVar34) * dVar7;
          local_1f8._8_4_ = SUB84(dVar36,0);
          local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar46 * dVar47 + dVar2 * dVar42)) * dVar7;
          local_1f8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar35,0);
          local_1d8._0_8_ = (dVar42 * dVar1 - dVar48) * dVar8;
          local_1d8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = *(undefined8 *)(param_1 + 0x110);
          uStack_190 = *(undefined8 *)(param_1 + 0x118);
          local_188 = *(undefined8 *)(param_1 + 0x120);
          uStack_180 = 0x3ff0000000000000;
          dVar37 = *(double *)(lVar30 + 0x100);
          dVar1 = *(double *)(lVar30 + 0x108);
          dVar2 = *(double *)(lVar30 + 0x110);
          dVar46 = dVar1 + dVar1;
          dVar42 = dVar2 + dVar2;
          dVar35 = dVar37 * (dVar37 + dVar37);
          local_228 = (1.0 - (dVar35 + dVar1 * dVar46)) * dVar6;
          dVar36 = *(double *)(lVar30 + 0x100) * dVar42;
          dVar34 = *(double *)(lVar30 + 0x118);
          dVar47 = dVar42 * dVar34;
          dVar48 = (dVar37 + dVar37) * *(double *)(lVar30 + 0x118);
          dVar34 = dVar46 * dVar34;
          local_238 = (dVar34 + dVar36) * dVar6;
          dStack_230 = (dVar42 * dVar1 - dVar48) * dVar6;
          dVar8 = dVar8 * dVar33;
          local_278 = ((double)DAT_149934d80 - (dVar2 * dVar42 + dVar1 * dVar46)) * dVar5;
          dVar35 = (DAT_149934d80._8_8_ - (dVar2 * dVar42 + dVar35)) * dVar33;
          dStack_270 = (dVar46 * dVar37 + dVar47) * dVar5;
          local_248 = (dVar42 * dVar1 + dVar48) * dVar33;
          local_268 = (dVar36 - dVar34) * dVar5;
          uStack_260 = 0;
          local_258._8_4_ = SUB84(dVar35,0);
          local_258._0_8_ = (dVar46 * dVar37 - dVar47) * dVar33;
          local_258._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = *(undefined8 *)(lVar30 + 0x120);
          uStack_210 = *(undefined8 *)(lVar30 + 0x128);
          local_208 = *(undefined8 *)(lVar30 + 0x130);
          uStack_200 = 0x3ff0000000000000;
          local_2b8 = auVar21;
          FUN_1447fea8d(&local_178,&local_278,local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar43._8_8_ = -(ulonglong)(0.0 <= dVar8);
          auVar43._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar5);
          auVar38 = blendvpd(_DAT_149936790,auVar44,auVar43);
          uVar31 = -(ulonglong)(0.0 <= dVar4 * dVar6);
          dVar33 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
          dVar34 = auVar38._0_8_;
          local_168 = local_168 * dVar34;
          local_170 = local_170 * dVar34;
          local_178 = local_178 * dVar34;
          dVar34 = auVar38._8_8_;
          local_148 = local_148 * dVar34;
          local_150 = local_150 * dVar34;
          local_158 = dVar34 * local_158;
          local_128 = local_128 * dVar33;
          local_130 = local_130 * dVar33;
          local_138 = dVar33 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          dVar33 = local_288 * local_288 + local_298 * local_298;
          dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar40._0_8_ = dVar33 + dVar34;
          auVar40._8_8_ = dVar33 + dVar34;
          auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
          auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
          auVar38 = sqrtpd(auVar40,auVar40);
          auVar44 = divpd(auVar44,auVar38);
          auVar45._0_8_ = auVar44._0_8_ * local_288;
          auVar45._8_8_ = auVar44._8_8_ * dStack_280;
          local_2f8[0] = (double)((ulonglong)(local_298 * auVar44._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
          local_2f8[1] = (double)((ulonglong)(dStack_290 * auVar44._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
          local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar32);
          unique0x100001fc = SUB84(dVar8,0);
          local_2b8 = (undefined1  [8])(dVar7 * dVar5);
          unique0x10000200 = (int)((ulonglong)dVar8 >> 0x20);
          local_2a8._8_4_ = SUB84(dVar41,0);
          local_2a8._0_8_ = dVar4 * dVar6;
          local_2a8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          local_2d8._8_8_ = uStack_110;
          local_2d8._0_8_ = local_118;
          local_2c8._8_8_ = 0;
          local_2c8._0_8_ = local_108;
        }
      }
      lVar24 = lVar30;
      lVar23 = FUN_144729dda();
      if ((char)lVar23 != '\0') {
        if (*(char *)(lVar30 + 8) == '\x01') {
          FUN_14479d2ce(lVar30);
        }
        pcVar3 = *(code **)(lVar30 + 0x60);
        plVar26 = (longlong *)(lVar30 + 0x80);
        if (*(longlong **)(lVar30 + 0x70) != (longlong *)0x0) {
          plVar26 = *(longlong **)(lVar30 + 0x70);
        }
        lVar24 = (**(code **)(*plVar26 + 8))();
        lVar23 = (*pcVar3)(lVar24,local_2f8);
      }
      lVar30 = lVar30 + 0x160;
      lVar29 = lVar29 + -0x160;
    } while (lVar29 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14843e37c FUN_14843e37c body=266 status=ok
// SIG undefined FUN_14843e37c(void)

void FUN_14843e37c(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [13];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar9 = *(longlong *)(param_1 + 0xd8);
    lVar8 = (longlong)*(int *)(param_1 + 0xe0) * 0x160 + lVar9;
    do {
      cVar2 = FUN_1403fef9a(lVar9,0);
      if (cVar2 == '\0') {
        pcVar1 = *(code **)(lVar9 + 0x20);
        plVar4 = (longlong *)(lVar9 + 0x40);
        if (*(longlong **)(lVar9 + 0x30) != (longlong *)0x0) {
          plVar4 = *(longlong **)(lVar9 + 0x30);
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(local_a8,uVar3);
        puVar6 = local_a8;
        puVar7 = (undefined8 *)(lVar9 + 0xa0);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar6 = (undefined8 *)(lVar9 + 0xa0);
      puVar7 = (undefined8 *)(lVar9 + 0x100);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_1447d58ca((undefined8 *)(lVar9 + 0x100));
      lVar9 = lVar9 + 0x160;
    } while (lVar9 != lVar8);
  }
  puVar6 = (undefined8 *)(param_1 + 0xf0);
  puVar7 = (undefined8 *)(param_1 + 0x150);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843e488 FUN_14843e488 body=145 status=ok
// SIG undefined FUN_14843e488(void)

void FUN_14843e488(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)((longlong)param_2 + 0xd1);
  *(undefined1 *)((longlong)param_2 + 0xd1) = *(undefined1 *)(param_1 + 0xd0);
  (**(code **)(*param_2 + 0x2b8))(param_2,(undefined8 *)(param_1 + 0x70));
  puVar3 = (undefined8 *)(param_1 + 0x70);
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_14844e476(param_2 + 8,param_2);
  *(undefined1 *)((longlong)param_2 + 0xd1) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843e51a FUN_14843e51a body=145 status=ok
// SIG undefined FUN_14843e51a(void)

void FUN_14843e51a(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)((longlong)param_2 + 0xd1);
  *(undefined1 *)((longlong)param_2 + 0xd1) = *(undefined1 *)(param_1 + 0xd0);
  (**(code **)(*param_2 + 0x2b8))(param_2,(undefined8 *)(param_1 + 0x10));
  puVar3 = (undefined8 *)(param_1 + 0x10);
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_14844e476(param_2 + 8,param_2);
  *(undefined1 *)((longlong)param_2 + 0xd1) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843e5ac FUN_14843e5ac body=354 status=ok
// SIG undefined FUN_14843e5ac(void)

void FUN_14843e5ac(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 8;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 != '\0') {
    puVar5 = (undefined8 *)FUN_14001cc68(0xe0);
    memset(puVar5,0,0xe0);
    *puVar5 = &PTR_LAB_14aedb7d0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x3ff00000;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 0x3ff00000;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 0x3ff00000;
    puVar5[0xc] = 0x3ff0000000000000;
    puVar5[0xd] = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x84) = 0;
    *(undefined4 *)(puVar5 + 0x11) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x8c) = 0x3ff00000;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    *(undefined4 *)(puVar5 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xb4) = 0x3ff00000;
    *(undefined4 *)(puVar5 + 0x17) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xbc) = 0x3ff00000;
    puVar5[0x18] = 0x3ff0000000000000;
    puVar5[0x19] = 0;
    plVar6 = *(longlong **)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar5;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x40))(plVar6,1);
    }
    plVar6 = (longlong *)FUN_14479d2ce(lVar1);
    (**(code **)(*plVar6 + 0x2b0))(plVar6,local_88);
    puVar5 = local_88;
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar4 = 1;
    if (*(char *)(param_1 + 0x18) == '\0') {
      lVar7 = FUN_14479d2ce(lVar1);
      uVar4 = *(undefined1 *)(lVar7 + 0xd1);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xd0) = uVar4;
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xd0);
    plVar6 = (longlong *)FUN_14479d2ce(lVar1);
    (**(code **)(*plVar6 + 0x2c0 + (ulonglong)bVar2 * 0x10))(plVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843e710 FUN_14843e710 body=199 status=ok
// SIG undefined FUN_14843e710(void)

longlong * FUN_14843e710(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1 + 8;
  cVar2 = FUN_144729dda(lVar4);
  plVar7 = param_2;
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar7 = (longlong *)(param_1 + 0x10);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xd0);
    plVar3 = (longlong *)FUN_14479d2ce(lVar4);
    (**(code **)(*plVar3 + 0x2c8 + (ulonglong)bVar1 * 0x10))(plVar3);
    plVar3 = (longlong *)FUN_14479d2ce(lVar4);
    (**(code **)(*plVar3 + 0x2b0))(plVar3,local_88);
    puVar5 = local_88;
    puVar6 = (undefined8 *)(*plVar7 + 0x70);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *param_2 = *plVar7;
  }
  *plVar7 = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14843e7e2 FUN_14843e7e2 body=152 status=ok
// SIG undefined FUN_14843e7e2(void)

undefined8 FUN_14843e7e2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"FTransformProxyChangeDescription";
  local_28 = 0x20;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UTransformProxy";
  local_28 = 0xf;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"TransformProxyChange");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843e896 FUN_14843e896 body=28 status=ok
// SIG undefined FUN_14843e896(void)

undefined8 * FUN_14843e896(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x240);
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 14843e8b2 FUN_14843e8b2 body=45 status=ok
// SIG undefined FUN_14843e8b2(void)

void FUN_14843e8b2(longlong param_1,undefined8 param_2)

{
  FUN_140613f88(*(undefined8 *)(param_1 + 0x20),param_2,0,0,0);
  FUN_14844e656(param_1 + 8,param_1);
  return;
}



// FUNCTION 14843e8e0 FUN_14843e8e0 body=142 status=ok
// SIG undefined FUN_14843e8e0(void)

longlong FUN_14843e8e0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
  pcVar1 = *(code **)(param_1 + 0x38);
  plVar3 = (longlong *)(param_1 + 0x58);
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  (*pcVar1)(&local_38,uVar2);
  *(undefined4 *)(param_2 + 0x40) = local_38;
  *(undefined4 *)(param_2 + 0x44) = uStack_34;
  *(undefined4 *)(param_2 + 0x48) = uStack_30;
  *(undefined4 *)(param_2 + 0x4c) = uStack_2c;
  *(undefined8 *)(param_2 + 0x50) = local_28;
  *(undefined8 *)(param_2 + 0x58) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843e970 FUN_14843e970 body=237 status=ok
// SIG undefined FUN_14843e970(void)

void FUN_14843e970(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = *(undefined4 *)(param_2 + 8);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_40 = *(undefined4 *)(param_2 + 9);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_38 = param_2[10];
  pcVar1 = *(code **)(param_1 + 0x78);
  plVar3 = (longlong *)(param_1 + 0x98);
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x88);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_48);
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  uStack_90 = param_2[3];
  local_88 = *(undefined4 *)(param_2 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_80 = *(undefined4 *)(param_2 + 5);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_78 = *(undefined4 *)(param_2 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_70 = *(undefined4 *)(param_2 + 7);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_68 = (undefined4)DAT_14c846510;
  uStack_64 = DAT_14c846510._4_4_;
  uStack_60 = (undefined4)DAT_14c846518;
  uStack_5c = DAT_14c846518._4_4_;
  local_58 = DAT_14c846520;
  uStack_50 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar3 + 0x18))((undefined4)DAT_14c846510,&local_a8);
  FUN_14844e656(param_1 + 8,param_1);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843ea5e FUN_14843ea5e body=30 status=ok
// SIG undefined FUN_14843ea5e(void)

undefined8 FUN_14843ea5e(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2b0))();
  return param_2;
}



// FUNCTION 14843ea7c FUN_14843ea7c body=113 status=ok
// SIG undefined FUN_14843ea7c(void)

void FUN_14843ea7c(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined1 *)((longlong)plVar2 + 0xd1);
    *(undefined1 *)((longlong)plVar2 + 0xd1) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2b8))();
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xd1) = uVar1;
    lVar3 = 0x30;
  }
  else {
    (**(code **)(*plVar2 + 0x2b8))();
    lVar3 = 8;
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 0xd1) != '\0') {
      lVar3 = 0x30;
    }
  }
  FUN_14844e656(lVar3 + param_1,param_1);
  return;
}



// FUNCTION 14843eaee FUN_14843eaee body=41 status=ok
// SIG undefined FUN_14843eaee(void)

undefined8 FUN_14843eaee(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  return param_2;
}



// FUNCTION 14843eb18 FUN_14843eb18 body=237 status=ok
// SIG undefined FUN_14843eb18(void)

void FUN_14843eb18(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [64];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    local_78 = param_2[4];
    uStack_74 = param_2[5];
    uStack_70 = param_2[6];
    uStack_6c = param_2[7];
    local_68 = param_2[8];
    uStack_64 = param_2[9];
    uStack_60 = param_2[10];
    uStack_5c = param_2[0xb];
    local_58 = param_2[0xc];
    uStack_54 = param_2[0xd];
    uStack_50 = param_2[0xe];
    uStack_4c = param_2[0xf];
    (**(code **)(*plVar1 + 0x10))(plVar1,local_e8);
    local_48 = local_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    local_38 = local_98;
    uStack_30 = 0;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x38);
    }
    (**(code **)(*plVar1 + 0x18))(local_a8,&local_88);
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  FUN_14844e656(param_1 + 8,param_1);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843ec06 FUN_14843ec06 body=679 status=ok
// SIG undefined FUN_14843ec06(void)

void FUN_14843ec06(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  double *pdVar15;
  double *pdVar16;
  longlong lVar17;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8 [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar17 = *(longlong *)(param_1 + 0x720);
  if ((lVar17 == 0) || (puVar14 = *(undefined8 **)(param_1 + 0x738), puVar14 == (undefined8 *)0x0))
  goto LAB_14843ed44;
  pdVar15 = (double *)(param_1 + 0x240);
  pdVar16 = local_e8;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *pdVar16 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar16 = pdVar16 + 1;
  }
  uVar9 = (**(code **)*puVar14)(puVar14,&local_148,lVar17 + 0x28,local_e8);
  auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_c0 - dStack_120));
  auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_c8 - local_128));
  iVar10 = movmskpd(uVar9,auVar5);
  auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_b0 - dStack_110));
  auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_b8 - local_118));
  uVar11 = movmskpd((int)puVar14,auVar3);
  if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
    lVar17 = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8[1] - dStack_140));
    auVar8._8_4_ = (int)lVar17;
    auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8[0] - local_148));
    auVar8._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar11 = movmskpd(iVar10,auVar8);
    lVar17 = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8[3] - dStack_130));
    auVar7._8_4_ = (int)lVar17;
    auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8[2] - local_138));
    auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar10 = movmskpd(0,auVar7);
    uVar12 = iVar10 << 2 | uVar11;
    if (uVar12 != 0) {
      auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8[1] + dStack_140));
      auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8[0] + local_148));
      uVar11 = movmskpd(uVar11,auVar6);
      auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8[3] + dStack_130));
      auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8[2] + local_138));
      uVar12 = movmskpd(uVar12,auVar4);
      if ((uVar12 & 0x3fffffff) != 0 || uVar11 != 0) goto LAB_14843ed03;
    }
    auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_a0 - dStack_100));
    auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_a8 - local_108));
    iVar10 = movmskpd(uVar11,auVar2);
    lVar17 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_90 - dStack_f0));
    auVar1._8_4_ = (int)lVar17;
    auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_98 - local_f8));
    auVar1._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar11 = movmskpd(0,auVar1);
    if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) goto LAB_14843ed44;
  }
LAB_14843ed03:
  FUN_140043566(param_1 + 0x410,&local_148,0,1);
  local_168 = local_108;
  dStack_160 = dStack_100;
  local_158 = local_f8;
  FUN_140043360(param_1 + 0x410,&local_168,0);
LAB_14843ed44:
  local_178 = param_4[2];
  local_188 = *param_4;
  uStack_180 = param_4[1];
  local_1a8 = *param_3;
  uStack_1a4 = param_3[1];
  uStack_1a0 = param_3[2];
  uStack_19c = param_3[3];
  local_198 = *(undefined8 *)(param_3 + 4);
  local_1b8 = param_5;
  FUN_1479eebf0(param_1,param_2);
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14843eeae FUN_14843eeae body=39 status=ok
// SIG undefined FUN_14843eeae(void)

void FUN_14843eeae(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x8e0,0x10);
  FUN_143b5095e(uVar1,param_1);
  return;
}



// FUNCTION 14843eed6 FUN_14843eed6 body=118 status=ok
// SIG undefined FUN_14843eed6(void)

ulonglong * FUN_14843eed6(longlong param_1,ulonglong *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14002bab8();
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FUN_14470a074(*(longlong *)(param_1 + 0x730),local_30,param_3);
    *param_2 = *param_2 | local_30[0];
    bVar1 = (byte)(local_30[0] >> 0x10);
    if (bVar1 <= *(byte *)((longlong)param_2 + 2)) {
      bVar1 = *(byte *)((longlong)param_2 + 2);
    }
    *(byte *)((longlong)param_2 + 2) = bVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843ef4e FUN_14843ef4e body=70 status=ok
// SIG undefined FUN_14843ef4e(void)

void FUN_14843ef4e(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  
  *(undefined1 *)(param_1 + 0x31) = param_2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x10),param_2,1);
  }
  if (*(longlong *)(param_1 + -0x360) != 0) {
    if (*(char *)(param_1 + 0x31) == '\x01') {
      bVar1 = *(longlong *)(param_1 + 0x10) != 0;
    }
    else {
      bVar1 = false;
    }
    *(bool *)(*(longlong *)(param_1 + -0x360) + 0x8d1) = bVar1;
  }
  return;
}



// FUNCTION 14843efb0 FUN_14843efb0 body=87 status=ok
// SIG undefined FUN_14843efb0(void)

void FUN_14843efb0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_1459edd08();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014843effc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2,*(code **)(*plVar3 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 14843f034 FUN_14843f034 body=1151 status=ok
// SIG undefined FUN_14843f034(void)

void FUN_14843f034(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 local_320;
  longlong *local_318;
  longlong *local_310 [2];
  undefined1 local_300 [4];
  undefined1 local_2fc [4];
  longlong *local_2f8 [2];
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  longlong *plStack_2d0;
  longlong *local_2c0 [2];
  longlong *local_2b0 [2];
  longlong *local_2a0 [2];
  undefined8 local_290;
  longlong *local_288;
  wchar_t **local_280;
  undefined1 *local_278;
  longlong local_270;
  undefined4 local_268;
  wchar_t *local_260;
  undefined4 local_258;
  longlong *local_250 [2];
  undefined1 local_240 [40];
  byte local_218;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_144a5dc74(local_2a0);
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      local_2d8 = 0;
      plStack_2d0 = (longlong *)0x0;
      FUN_1404079ea(local_2c0,
                    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x100) + 0xb0),0);
      local_260 = L"AdjustRadius";
      local_258 = 0xc;
      FUN_1446e940c(local_2fc,&local_260);
      local_260 = L"UBaseBrushTool";
      local_258 = 0xe;
      FUN_1446e940c(local_300,&local_260);
      FUN_140208bae(local_2f8,local_300,local_2fc,L"Radius: {0}");
      FUN_14023409e(&local_2e8,local_2f8,1);
      local_260 = (wchar_t *)CONCAT44(local_260._4_4_,4);
      FUN_14023423e(local_250,local_2c0);
      local_278 = local_240;
      local_280 = &local_260;
      FUN_14010d304(&local_270);
      local_290 = local_2e8;
      local_288 = local_2e0;
      if (local_2e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_2b0,&local_290,&local_270);
      FUN_14007f2db(local_270,local_268);
      if (local_270 != 0) {
        FUN_1400020a8();
      }
      if (local_250[0] != (longlong *)0x0) {
        (**(code **)(*local_250[0] + 0x10))();
      }
      local_310[0] = local_2c0[0];
      if (local_2e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_2e0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_2e0)(local_2e0);
          LOCK();
          piVar2 = (int *)((longlong)local_2e0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_310[0] = local_2c0[0];
          if (*piVar2 == 0) {
            (**(code **)(*local_2e0 + 0x10))(local_2e0);
            local_310[0] = local_2c0[0];
          }
        }
      }
    }
    else {
      local_2d8 = 0;
      plStack_2d0 = (longlong *)0x0;
      FUN_1404079ea(local_310,
                    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x100) + 0xb4),0);
      local_260 = L"AdjustStrength";
      local_258 = 0xe;
      FUN_1446e940c(local_2fc,&local_260);
      local_260 = L"UBaseBrushTool";
      local_258 = 0xe;
      FUN_1446e940c(local_300,&local_260);
      FUN_140208bae(local_2f8,local_300,local_2fc,L"Strength: {0}");
      FUN_14023409e(&local_320,local_2f8,1);
      local_260 = (wchar_t *)CONCAT44(local_260._4_4_,4);
      FUN_14023423e(local_250,local_310);
      local_278 = local_240;
      local_280 = &local_260;
      FUN_14010d304(&local_270);
      local_290 = local_320;
      local_288 = local_318;
      if (local_318 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_318 + 1) = (int)local_318[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_2b0,&local_290,&local_270);
      FUN_14007f2db(local_270,local_268);
      if (local_270 != 0) {
        FUN_1400020a8();
      }
      if (local_250[0] != (longlong *)0x0) {
        (**(code **)(*local_250[0] + 0x10))();
      }
      if (local_318 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_318 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_318)(local_318);
          LOCK();
          piVar2 = (int *)((longlong)local_318 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_318 + 0x10))(local_318);
          }
        }
      }
    }
    if (local_310[0] != (longlong *)0x0) {
      (**(code **)(*local_310[0] + 0x10))();
    }
    FUN_140008f88(local_2a0,local_2b0);
    if (local_2b0[0] != (longlong *)0x0) {
      (**(code **)(*local_2b0[0] + 0x10))();
    }
    if (local_2f8[0] != (longlong *)0x0) {
      (**(code **)(*local_2f8[0] + 0x10))();
    }
    plVar1 = plStack_2d0;
    if (plStack_2d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_2d0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_2d0)(plStack_2d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    uVar4 = FUN_147d7f972();
    local_328 = &DAT_149e1e2f8;
    FUN_140114bb6(&local_260,param_1 + 0x88,local_2a0,uVar4);
    local_1c8 = 0x3ff0000000000000;
    local_1c0 = 0x3ff0000000000000;
    local_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0x3f800000;
    local_218 = local_218 | 2;
    FUN_140505094(param_2,&local_260);
    FUN_140b2399e(&local_260);
    if (local_2a0[0] != (longlong *)0x0) {
      (**(code **)(*local_2a0[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14843f4b4 FUN_14843f4b4 body=519 status=ok
// SIG undefined FUN_14843f4b4(void)

void FUN_14843f4b4(longlong param_1,double *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_14843f5ae;
  fVar4 = (float)(*param_2 - *(double *)(param_1 + 0x98));
  fVar5 = (float)(param_2[1] - *(double *)(param_1 + 0xa0));
  fVar6 = ABS(fVar5);
  cVar1 = *(char *)(param_1 + 0xb0);
  if (fVar6 <= ABS(fVar4) || cVar1 != '\x01') {
    if (fVar6 < ABS(fVar4) && cVar1 == '\0') {
      local_28 = *param_2;
      dStack_20 = param_2[1];
      *(undefined1 *)(param_1 + 0xb0) = 1;
      *(double *)(param_1 + 0x98) = local_28;
      *(double *)(param_1 + 0xa0) = dStack_20;
      lVar3 = *(longlong *)(param_1 + 0xc0);
      fVar5 = *(float *)(*(longlong *)(lVar3 + 0x100) + 0xa8 +
                        (ulonglong)*(byte *)(*(longlong *)(lVar3 + 0x100) + 0xac) * 8);
      *(float *)(param_1 + 0xa8) = fVar5;
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(*(longlong *)(lVar3 + 0x100) + 0xb4);
    }
    else {
      if (cVar1 == '\0') {
        fVar4 = *(float *)(param_1 + 0xac);
        lVar3 = *(longlong *)(param_1 + 0xc0);
        goto LAB_14843f580;
      }
      lVar3 = *(longlong *)(param_1 + 0xc0);
      fVar5 = *(float *)(param_1 + 0xa8);
    }
    lVar2 = *(longlong *)(lVar3 + 0x100);
    if (*(char *)(lVar2 + 0xac) == '\x01') {
      fVar5 = fVar4 * *(float *)(param_1 + 0xb4) * *(float *)(lVar3 + 0x150) + fVar5;
      if (fVar5 <= 0.01) {
        fVar5 = 0.01;
      }
      *(float *)(lVar2 + 0xb0) = fVar5;
    }
    else {
      fVar5 = fVar4 * *(float *)(param_1 + 0xb4) + fVar5;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.01) {
        fVar5 = 0.01;
      }
      *(float *)(lVar2 + 0xa8) = fVar5;
    }
  }
  else {
    local_18 = *param_2;
    dStack_10 = param_2[1];
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(double *)(param_1 + 0x98) = local_18;
    *(double *)(param_1 + 0xa0) = dStack_10;
    lVar3 = *(longlong *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xa8) =
         *(undefined4 *)
          (*(longlong *)(lVar3 + 0x100) + 0xa8 +
          (ulonglong)*(byte *)(*(longlong *)(lVar3 + 0x100) + 0xac) * 8);
    fVar4 = *(float *)(*(longlong *)(lVar3 + 0x100) + 0xb4);
    *(float *)(param_1 + 0xac) = fVar4;
LAB_14843f580:
    fVar4 = fVar4 - fVar5 * *(float *)(param_1 + 0xb8);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    *(float *)(*(longlong *)(lVar3 + 0x100) + 0xb4) = fVar5;
  }
LAB_14843f5ae:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843f6fe FUN_14843f6fe body=87 status=ok
// SIG undefined FUN_14843f6fe(void)

undefined8 * FUN_14843f6fe(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = (**(code **)(*param_1 + 0x300))(param_1,param_3);
  uVar2 = 0;
  if (bVar1 == 0) {
    uVar2 = 0x7fefffffffffffff;
    param_1 = (longlong *)0x0;
  }
  *(uint *)(param_2 + 1) = 2 - (uint)bVar1;
  *param_2 = param_1;
  *(undefined4 *)((longlong)param_2 + 0xc) = 99;
  param_2[3] = 0;
  param_2[2] = uVar2;
  return param_2;
}



// FUNCTION 14843f77a FUN_14843f77a body=74 status=ok
// SIG undefined FUN_14843f77a(void)

undefined4 * FUN_14843f77a(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x310))(param_1,param_3);
  uVar2 = 2;
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar2 = 3;
  }
  *param_2 = uVar2;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14843f7cc FUN_14843f7cc body=1567 status=ok
// SIG undefined FUN_14843f7cc(void)

void FUN_14843f7cc(longlong *param_1)

{
  uint uVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14843fdec();
  FUN_1446f470e(&local_b0,L"Brush",1);
  plVar7 = param_1 + 0x4c;
  lVar5 = FUN_14479d2ce(plVar7);
  if (lVar5 == 0) {
    if (param_1[0x4d] != 0) {
      lVar5 = FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar4 == '\0')) {
        FUN_14485c47a(plVar7,lVar5);
        if (lVar5 == 0) goto LAB_14843f8de;
      }
      else {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(plVar7,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_14843f8a7;
    }
  }
  else {
LAB_14843f8a7:
    lVar8 = FUN_144a797b2();
    if ((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) && (lVar8 = FUN_145ad3d04(), lVar8 != 0)) &&
       (*(int *)(lVar8 + 0x38) <= *(int *)(lVar5 + 0x38))) {
      lVar10 = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30) {
        lVar10 = lVar5;
      }
      goto LAB_14843f8e0;
    }
  }
LAB_14843f8de:
  lVar10 = 0;
LAB_14843f8e0:
  lVar5 = FUN_14843ffdd(param_1,lVar10,local_b0);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x20] = lVar5;
  dVar2 = (double)(**(code **)(*param_1 + 0x438))(param_1);
  *(float *)(param_1 + 0x4a) = (float)dVar2 * 0.01;
  *(float *)((longlong)param_1 + 0x254) = (float)dVar2;
  FUN_1484400a8(param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x20]);
  (**(code **)(*param_1 + 0x440))(param_1);
  cVar4 = (**(code **)(*param_1 + 0x430))(param_1);
  if (cVar4 != '\0') {
    uVar6 = FUN_14844014d(param_1);
    plVar7 = param_1 + 0x52;
    FUN_14485c47a(plVar7,uVar6);
    lVar5 = FUN_14479d2ce(plVar7);
    *(longlong **)(lVar5 + 0xc0) = param_1;
    uVar6 = FUN_14479d2ce(plVar7);
    (**(code **)(*param_1 + 0x2e8))(param_1,uVar6,0);
    plVar7 = (longlong *)FUN_1484401fd(param_1);
    (**(code **)(*plVar7 + 0x378))(plVar7);
    local_68 = CONCAT44(local_68._4_4_,99);
    (**(code **)(*plVar7 + 0x2a8))(plVar7,&local_68);
    local_a8 = plVar7[0x1c];
    uStack_60 = plVar7[0x1d];
    local_98 = (longlong *)plVar7[0x1e];
    uStack_50 = plVar7[0x1f];
    local_48 = plVar7[0x20];
    lStack_40 = plVar7[0x21];
    local_38 = plVar7[0x22];
    uStack_30 = plVar7[0x23];
    lVar10 = local_38;
    lVar3 = uStack_30;
    local_58 = local_98;
    lVar8 = uStack_50;
    local_68 = local_a8;
    lVar5 = uStack_60;
    plVar7[0x22] = CONCAT44(uStack_74,local_78);
    plVar7[0x23] = CONCAT44(uStack_6c,uStack_70);
    plVar7[0x20] = (longlong)&PTR_LAB_14aedb850;
    plVar7[0x21] = (longlong)param_1;
    plVar7[0x1e] = 0;
    plVar7[0x1f] = CONCAT44(uStack_8c,uStack_90);
    plVar7[0x1c] = (longlong)&LAB_143b53aa4;
    plVar7[0x1d] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar5;
      uStack_50 = lVar8;
      local_38 = lVar10;
      uStack_30 = lVar3;
      (**(code **)(*plVar9 + 0x10))();
    }
    local_a8 = plVar7[0x28];
    uStack_60 = plVar7[0x29];
    local_98 = (longlong *)plVar7[0x2a];
    uStack_50 = plVar7[0x2b];
    local_48 = plVar7[0x2c];
    lStack_40 = plVar7[0x2d];
    local_38 = plVar7[0x2e];
    uStack_30 = plVar7[0x2f];
    lVar10 = local_38;
    lVar3 = uStack_30;
    local_58 = local_98;
    lVar8 = uStack_50;
    local_68 = local_a8;
    lVar5 = uStack_60;
    plVar7[0x2e] = CONCAT44(uStack_74,local_78);
    plVar7[0x2f] = CONCAT44(uStack_6c,uStack_70);
    plVar7[0x2c] = (longlong)&PTR_LAB_14aeb6ad0;
    plVar7[0x2d] = (longlong)&LAB_143b53b54;
    plVar7[0x2a] = 0;
    plVar7[0x2b] = CONCAT44(uStack_8c,uStack_90);
    plVar7[0x28] = (longlong)FUN_14841bf88;
    plVar7[0x29] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar5;
      uStack_50 = lVar8;
      local_38 = lVar10;
      uStack_30 = lVar3;
      (**(code **)(*plVar9 + 0x10))();
    }
    local_a8 = plVar7[0x30];
    uStack_60 = plVar7[0x31];
    local_98 = (longlong *)plVar7[0x32];
    uStack_50 = plVar7[0x33];
    local_48 = plVar7[0x34];
    lStack_40 = plVar7[0x35];
    local_38 = plVar7[0x36];
    uStack_30 = plVar7[0x37];
    lVar10 = local_38;
    lVar3 = uStack_30;
    local_58 = local_98;
    lVar8 = uStack_50;
    local_68 = local_a8;
    lVar5 = uStack_60;
    plVar7[0x36] = CONCAT44(uStack_74,local_78);
    plVar7[0x37] = CONCAT44(uStack_6c,uStack_70);
    plVar7[0x34] = (longlong)&PTR_LAB_14aedb870;
    plVar7[0x35] = (longlong)param_1;
    plVar7[0x32] = 0;
    plVar7[0x33] = CONCAT44(uStack_8c,uStack_90);
    plVar7[0x30] = (longlong)FUN_143b53b88;
    plVar7[0x31] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar5;
      uStack_50 = lVar8;
      local_38 = lVar10;
      uStack_30 = lVar3;
      (**(code **)(*plVar9 + 0x10))();
    }
    local_a8 = plVar7[0x38];
    uStack_60 = plVar7[0x39];
    local_98 = (longlong *)plVar7[0x3a];
    uStack_50 = plVar7[0x3b];
    local_48 = plVar7[0x3c];
    lStack_40 = plVar7[0x3d];
    local_38 = plVar7[0x3e];
    uStack_30 = plVar7[0x3f];
    lVar10 = local_38;
    lVar3 = uStack_30;
    local_58 = local_98;
    lVar8 = uStack_50;
    local_68 = local_a8;
    lVar5 = uStack_60;
    plVar7[0x3e] = CONCAT44(uStack_74,local_78);
    plVar7[0x3f] = CONCAT44(uStack_6c,uStack_70);
    plVar7[0x3c] = (longlong)&PTR_LAB_14aedb890;
    plVar7[0x3d] = (longlong)param_1;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = CONCAT44(uStack_8c,uStack_90);
    plVar7[0x38] = (longlong)FUN_143b53cca;
    plVar7[0x39] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar5;
    uStack_50 = lVar8;
    local_38 = lVar10;
    uStack_30 = lVar3;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    (**(code **)(*param_1 + 0x2e8))(param_1,plVar7,0);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14843fdec FUN_14843fdec body=496 status=ok
// SIG undefined FUN_14843fdec(void)

void FUN_14843fdec(longlong *param_1)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined2 *)(param_1 + 0x17) = 0;
  plVar1 = (longlong *)FUN_14841014b(DAT_14c951640);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  local_60 = &LAB_148441f14;
  local_88[0] = &LAB_14844e6fa;
  FUN_14840df3c(plVar1 + 0x10,1,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  local_60 = &LAB_148441f18;
  local_88[0] = &LAB_14844e6fa;
  FUN_14840df3c(plVar1 + 0x10,2,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1 + 0x15);
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar1,0);
  plVar1 = (longlong *)FUN_1484101e0(DAT_14c951640);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  local_60 = &LAB_148441f14;
  local_88[0] = &LAB_14844e6fa;
  FUN_14840df3c(plVar1 + 6,1,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar2 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar2 = &local_68;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aedb970;
  local_60 = &LAB_148441f18;
  local_88[0] = &LAB_14844e6fa;
  FUN_14840df3c(plVar1 + 6,2,local_88);
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar2 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar2 = local_78;
    }
    (*(code *)(*pppuVar2)[2])(pppuVar2);
  }
  (**(code **)(*plVar1 + 0x300))(plVar1,param_1 + 0x16);
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar1,0);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14843ffdd FUN_14843ffdd body=201 status=ok
// SIG undefined FUN_14843ffdd(void)

undefined8 FUN_14843ffdd(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484400a8 FUN_1484400a8 body=165 status=ok
// SIG undefined FUN_1484400a8(void)

void FUN_1484400a8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  
  fVar3 = *(float *)(param_1 + 0x254) / *(float *)(param_1 + 0x10c);
  fVar5 = *(float *)(param_1 + 0x250) / *(float *)(param_1 + 0x10c);
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(char *)(lVar1 + 0xac) == '\x01') {
    dVar4 = (double)*(float *)(lVar1 + 0xb0);
    lVar2 = 0xa8;
    dVar6 = ((dVar4 + dVar4) - (double)fVar5) / (double)(fVar3 - fVar5);
  }
  else {
    dVar4 = (double)(float)(-(uint)(fVar5 <= fVar3) &
                           (uint)((fVar3 - fVar5) * *(float *)(lVar1 + 0xa8) + fVar5)) * 0.5;
    lVar2 = 0xb0;
    dVar6 = dVar4;
  }
  *(double *)(param_1 + 600) = dVar4;
  *(float *)(lVar1 + lVar2) = (float)dVar6;
  return;
}



// FUNCTION 14844014d FUN_14844014d body=175 status=ok
// SIG undefined FUN_14844014d(void)

undefined8 FUN_14844014d(undefined8 param_1)

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
  local_b8 = FUN_145b74688();
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



// FUNCTION 1484401fd FUN_1484401fd body=175 status=ok
// SIG undefined FUN_1484401fd(void)

undefined8 FUN_1484401fd(undefined8 param_1)

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
  local_b8 = FUN_1459eddf4();
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



// FUNCTION 1484402ae FUN_1484402ae body=10 status=ok
// SIG undefined FUN_1484402ae(void)

void FUN_1484402ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484402b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x450))();
  return;
}



// FUNCTION 1484402c6 FUN_1484402c6 body=89 status=ok
// SIG undefined FUN_1484402c6(void)

undefined1 * FUN_1484402c6(longlong param_1,undefined1 *param_2)

{
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined8 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  else {
    FUN_148440320(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 148440320 FUN_148440320 body=224 status=ok
// SIG undefined FUN_148440320(void)

char * FUN_148440320(longlong param_1,char *param_2,undefined8 param_3)

{
  double dVar1;
  char cVar2;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined4 local_12c;
  float local_128;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  cVar2 = (**(code **)(*(longlong *)(param_1 + -0xa8) + 0x398))(param_1 + -0xa8,param_3,local_130);
  if (cVar2 == '\0') {
    dVar1 = 3.4028234663852886e+38;
  }
  else {
    dVar1 = (double)local_128;
  }
  *param_2 = cVar2;
  *(double *)(param_2 + 8) = dVar1;
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = -0x10;
  param_2[0x27] = '?';
  param_2[0x28] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148440402 FUN_148440402 body=133 status=ok
// SIG undefined FUN_148440402(void)

void FUN_148440402(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = param_1[0x20];
  if (*(char *)(lVar1 + 0xac) == '\x01') {
    fVar2 = *(float *)(lVar1 + 0xb0) * 1.1;
    if (1000.0 <= fVar2) {
      fVar2 = 1000.0;
    }
    *(float *)(lVar1 + 0xb0) = fVar2;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0xa8) + 0.025;
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(lVar1 + 0xa8) = fVar2;
  }
  FUN_1484400a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148440484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  return;
}



// FUNCTION 148440488 FUN_148440488 body=133 status=ok
// SIG undefined FUN_148440488(void)

void FUN_148440488(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = param_1[0x20];
  if (*(char *)(lVar1 + 0xac) == '\x01') {
    fVar2 = *(float *)(lVar1 + 0xb0) / 1.1;
    if (fVar2 <= 1.0) {
      fVar2 = 1.0;
    }
    *(float *)(lVar1 + 0xb0) = fVar2;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0xa8) + -0.025;
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(lVar1 + 0xa8) = fVar2;
  }
  FUN_1484400a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014844050a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  return;
}



// FUNCTION 148440616 FUN_148440616 body=2284 status=ok
// SIG undefined FUN_148440616(void)

void FUN_148440616(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_258 [32];
  wchar_t **local_238;
  longlong **local_230;
  undefined1 local_228;
  undefined8 *local_220;
  undefined1 **local_218;
  undefined8 local_210;
  longlong local_208 [2];
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  undefined1 local_1f0 [4];
  undefined1 local_1ec [4];
  longlong *local_1e8 [2];
  wchar_t *local_1d8;
  undefined4 local_1d0;
  undefined1 *local_1c8 [2];
  undefined8 local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined1 *local_188 [2];
  undefined8 local_178;
  undefined **local_168;
  undefined8 local_160;
  undefined1 *local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  undefined8 local_120;
  undefined1 *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_78 = 0;
  local_68 = &PTR_LAB_14aedb8b0;
  local_88[0] = &LAB_143b53ddc;
  local_1d8 = L"BrushIncreaseSizeTooltip";
  local_1d0 = 0x18;
  local_210 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_1ec,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f0,&local_1d8);
  FUN_140208bae(local_1e8,local_1f0,local_1ec,
                L"Press this key to increase brush radius by a percentage of its current size.");
  local_1d8 = L"BrushIncreaseSize";
  local_1d0 = 0x11;
  FUN_1446e940c(local_1f4,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f8,&local_1d8);
  FUN_140208bae(&local_1d8,local_1f8,local_1f4,L"Increase Brush Size");
  FUN_140056680(local_208,L"BrushIncreaseSize");
  local_220 = &DAT_14c9655e0;
  local_228 = 0;
  local_238 = &local_1d8;
  local_230 = local_1e8;
  local_218 = local_88;
  FUN_148450124(local_210,param_1,0x271a,local_208);
  if (local_208[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1d8 + 0x10))();
  }
  if (local_1e8[0] != (longlong *)0x0) {
    (**(code **)(*local_1e8[0] + 0x10))();
  }
  local_b8 = 0;
  local_a8 = &PTR_LAB_14aedb8d0;
  local_c8[0] = &LAB_143b53e32;
  local_1d8 = L"BrushDecreaseSizeTooltip";
  local_1d0 = 0x18;
  local_a0 = param_1;
  FUN_1446e940c(local_1ec,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f0,&local_1d8);
  FUN_140208bae(local_1e8,local_1f0,local_1ec,
                L"Press this key to decrease brush radius by a percentage of its current size.");
  local_1d8 = L"BrushDecreaseSize";
  local_1d0 = 0x11;
  FUN_1446e940c(local_1f4,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f8,&local_1d8);
  FUN_140208bae(&local_1d8,local_1f8,local_1f4,L"Decrease Brush Size");
  FUN_140056680(local_208,L"BrushDecreaseSize");
  local_220 = &DAT_14c965598;
  local_228 = 0;
  local_238 = &local_1d8;
  local_230 = local_1e8;
  local_218 = local_c8;
  FUN_148450124(local_210,param_1,0x271b,local_208);
  if (local_208[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1d8 + 0x10))();
  }
  if (local_1e8[0] != (longlong *)0x0) {
    (**(code **)(*local_1e8[0] + 0x10))();
  }
  local_f8 = 0;
  local_e8 = &PTR_LAB_14aedb8f0;
  local_108[0] = &LAB_143b53e88;
  local_1d8 = L"BrushIncreaseFalloffTooltip";
  local_1d0 = 0x1b;
  local_e0 = param_1;
  FUN_1446e940c(local_1ec,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f0,&local_1d8);
  FUN_140208bae(local_1e8,local_1f0,local_1ec,
                L"Press this key to increase brush falloff by a fixed increment.");
  local_1d8 = L"BrushIncreaseFalloff";
  local_1d0 = 0x14;
  FUN_1446e940c(local_1f4,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f8,&local_1d8);
  FUN_140208bae(&local_1d8,local_1f8,local_1f4,L"Increase Brush Falloff");
  FUN_140056680(local_208,L"BrushIncreaseFalloff");
  local_220 = &DAT_14c9655e0;
  local_228 = 5;
  local_238 = &local_1d8;
  local_230 = local_1e8;
  local_218 = local_108;
  FUN_148450124(local_210,param_1,0x271c,local_208);
  if (local_208[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1d8 + 0x10))();
  }
  if (local_1e8[0] != (longlong *)0x0) {
    (**(code **)(*local_1e8[0] + 0x10))();
  }
  local_138 = 0;
  local_128 = &PTR_LAB_14aedb910;
  local_148[0] = &LAB_143b53ede;
  local_1d8 = L"BrushDecreaseFalloffTooltip";
  local_1d0 = 0x1b;
  local_120 = param_1;
  FUN_1446e940c(local_1ec,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f0,&local_1d8);
  FUN_140208bae(local_1e8,local_1f0,local_1ec,
                L"Press this key to decrease brush falloff by a fixed increment.");
  local_1d8 = L"BrushDecreaseFalloff";
  local_1d0 = 0x14;
  FUN_1446e940c(local_1f4,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f8,&local_1d8);
  FUN_140208bae(&local_1d8,local_1f8,local_1f4,L"Decrease Brush Falloff");
  FUN_140056680(local_208,L"BrushDecreaseFalloff");
  local_220 = &DAT_14c965598;
  local_228 = 5;
  local_238 = &local_1d8;
  local_230 = local_1e8;
  local_218 = local_148;
  FUN_148450124(local_210,param_1,0x271d,local_208);
  if (local_208[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1d8 + 0x10))();
  }
  if (local_1e8[0] != (longlong *)0x0) {
    (**(code **)(*local_1e8[0] + 0x10))();
  }
  local_178 = 0;
  local_168 = &PTR_LAB_14aedb930;
  local_188[0] = &LAB_143b53f34;
  local_1d8 = L"BrushIncreaseStrengthTooltip";
  local_1d0 = 0x1c;
  local_160 = param_1;
  FUN_1446e940c(local_1ec,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f0,&local_1d8);
  FUN_140208bae(local_1e8,local_1f0,local_1ec,
                L"Press this key to increase brush strength by a fixed increment.");
  local_1d8 = L"BrushIncreaseStrength";
  local_1d0 = 0x15;
  FUN_1446e940c(local_1f4,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f8,&local_1d8);
  FUN_140208bae(&local_1d8,local_1f8,local_1f4,L"Increase Brush Strength");
  FUN_140056680(local_208,L"BrushIncreaseStrength");
  local_220 = &DAT_14c9655e0;
  local_228 = 1;
  local_238 = &local_1d8;
  local_230 = local_1e8;
  local_218 = local_188;
  FUN_148450124(local_210,param_1,0x271e,local_208);
  if (local_208[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1d8 + 0x10))();
  }
  if (local_1e8[0] != (longlong *)0x0) {
    (**(code **)(*local_1e8[0] + 0x10))();
  }
  local_1b8 = 0;
  local_1a8 = &PTR_LAB_14aedb950;
  local_1c8[0] = &LAB_143b53f8a;
  local_1d8 = L"BrushDecreaseStrengthTooltip";
  local_1d0 = 0x1c;
  local_1a0 = param_1;
  FUN_1446e940c(local_1ec,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f0,&local_1d8);
  FUN_140208bae(local_1e8,local_1f0,local_1ec,
                L"Press this key to decrease brush strength by a fixed increment.");
  local_1d8 = L"BrushDecreaseStrength";
  local_1d0 = 0x15;
  FUN_1446e940c(local_1f4,&local_1d8);
  local_1d8 = L"UBaseBrushTool";
  local_1d0 = 0xe;
  FUN_1446e940c(local_1f8,&local_1d8);
  FUN_140208bae(&local_1d8,local_1f8,local_1f4,L"Decrease Brush Strength");
  FUN_140056680(local_208,L"BrushDecreaseStrength");
  local_220 = &DAT_14c965598;
  local_228 = 1;
  local_238 = &local_1d8;
  local_230 = local_1e8;
  local_218 = local_1c8;
  FUN_148450124(local_210,param_1,0x271f,local_208);
  if (local_208[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1d8 + 0x10))();
  }
  if (local_1e8[0] != (longlong *)0x0) {
    (**(code **)(*local_1e8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148440f04 FUN_148440f04 body=250 status=ok
// SIG undefined FUN_148440f04(void)

void FUN_148440f04(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  cVar2 = (**(code **)(*param_1 + 0x398))(param_1,param_2,local_120);
  if (cVar2 != '\0') {
    lVar1 = param_1[0x20];
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(lVar1 + 0xb0);
    param_1[0x23] = local_f8;
    param_1[0x24] = lStack_f0;
    param_1[0x25] = local_e8;
    param_1[0x26] = local_e0;
    param_1[0x27] = lStack_d8;
    param_1[0x28] = local_d0;
    memcpy(param_1 + 0x29,local_120,0x100);
    *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(lVar1 + 0xb8);
  }
  *(undefined1 *)(param_1 + 0x21) = 1;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148441000 FUN_148441000 body=243 status=ok
// SIG undefined FUN_148441000(void)

void FUN_148441000(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  cVar2 = (**(code **)(*param_1 + 0x398))(param_1,param_2,local_120);
  if (cVar2 != '\0') {
    lVar1 = param_1[0x20];
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(lVar1 + 0xb0);
    param_1[0x23] = local_f8;
    param_1[0x24] = lStack_f0;
    param_1[0x25] = local_e8;
    param_1[0x26] = local_e0;
    param_1[0x27] = lStack_d8;
    param_1[0x28] = local_d0;
    memcpy(param_1 + 0x29,local_120,0x100);
    *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(lVar1 + 0xb8);
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484410f4 FUN_1484410f4 body=8 status=ok
// SIG undefined FUN_1484410f4(void)

void FUN_1484410f4(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 148441104 FUN_148441104 body=401 status=ok
// SIG undefined FUN_148441104(void)

undefined8 FUN_148441104(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = param_1 + 0x1e0;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(lVar1);
    if (*(char *)(lVar4 + 0x80) != '\0') goto LAB_14844126d;
    lVar4 = FUN_14479d2ce(lVar1);
    local_128 = *(undefined8 *)(param_2 + 0x38);
    uStack_120 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(lVar4 + 0x90) = uVar2;
    *(undefined1 *)(lVar4 + 0xb0) = 1;
    *(undefined8 *)(lVar4 + 0x98) = local_128;
    *(undefined8 *)(lVar4 + 0xa0) = uStack_120;
    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0xc0) + 0x100);
    *(undefined4 *)(lVar4 + 0xa8) =
         *(undefined4 *)(lVar1 + 0xa8 + (ulonglong)*(byte *)(lVar1 + 0xac) * 8);
    *(undefined4 *)(lVar4 + 0xac) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0xc0) + 0x100) + 0xb4);
  }
  memset(&local_128,0,0x100);
  local_58 = 0xffffffff;
  local_128 = CONCAT44(0x3f800000,(undefined4)local_128);
  local_84 = 0xffffffff;
  cVar3 = (**(code **)(*(longlong *)(param_1 + -0xb0) + 0x398))
                    ((longlong *)(param_1 + -0xb0),param_2,&local_128);
  if (cVar3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar1 + 0xb0);
    *(undefined8 *)(param_1 + 0x68) = local_100;
    *(undefined8 *)(param_1 + 0x70) = uStack_f8;
    *(undefined8 *)(param_1 + 0x78) = local_f0;
    *(undefined8 *)(param_1 + 0x80) = local_e8;
    *(undefined8 *)(param_1 + 0x88) = uStack_e0;
    *(undefined8 *)(param_1 + 0x90) = local_d8;
    memcpy((void *)(param_1 + 0x98),&local_128,0x100);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar1 + 0xb8);
  }
LAB_14844126d:
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148441296 FUN_148441296 body=20 status=ok
// SIG undefined FUN_148441296(void)

void FUN_148441296(longlong *param_1)

{
  if ((char)param_1[0x53] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001484412a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x448))();
    return;
  }
  return;
}



// FUNCTION 1484412aa FUN_1484412aa body=1 status=ok
// SIG undefined FUN_1484412aa(void)

void FUN_1484412aa(void)

{
  return;
}



// FUNCTION 1484412ac FUN_1484412ac body=63 status=ok
// SIG undefined FUN_1484412ac(void)

void FUN_1484412ac(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x290);
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = FUN_14479d2ce(param_1 + 0x290);
  FUN_14843f034(uVar1,param_2);
  return;
}



// FUNCTION 1484412ee FUN_1484412ee body=230 status=ok
// SIG undefined FUN_1484412ee(void)

void FUN_1484412ee(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x51] == 0) {
    uVar1 = (**(code **)(*param_1 + 0x2c8))();
    plVar2 = (longlong *)FUN_148451354(uVar1);
    uVar1 = FUN_1484413d5(DAT_14c951640);
    (**(code **)(*plVar2 + 0x2b0))(plVar2,&DAT_14cb4b430,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    plVar2 = (longlong *)FUN_148451354(uVar1);
    local_38[0] = 0;
    local_38[1] = 0;
    lVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2,&DAT_14cb4b430,local_38,param_1);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar3);
    }
    param_1[0x51] = lVar3;
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484413d5 FUN_1484413d5 body=175 status=ok
// SIG undefined FUN_1484413d5(void)

undefined8 FUN_1484413d5(undefined8 param_1)

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
  local_b8 = FUN_145b72b1c();
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



// FUNCTION 148441486 FUN_148441486 body=176 status=ok
// SIG undefined FUN_148441486(void)

void FUN_148441486(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x288) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x290);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 0x290);
      puVar4 = (undefined8 *)&DAT_149e1dd14;
      if (*(char *)(lVar3 + 0x80) != '\0') {
        puVar4 = &DAT_149e1e2f8;
      }
      lVar3 = *(longlong *)(param_1 + 0x288);
      uVar1 = puVar4[1];
      *(undefined8 *)(lVar3 + 0x80) = *puVar4;
      *(undefined8 *)(lVar3 + 0x88) = uVar1;
    }
    lVar3 = *(longlong *)(param_1 + 0x100);
    (**(code **)(**(longlong **)(param_1 + 0x288) + 0x2e0))
              (*(longlong **)(param_1 + 0x288),*(undefined4 *)(lVar3 + 0xb0),param_1 + 0x118,
               param_1 + 0x130,*(undefined4 *)(lVar3 + 0xb8),*(undefined4 *)(lVar3 + 0xb4));
  }
  return;
}



// FUNCTION 148441536 FUN_148441536 body=121 status=ok
// SIG undefined FUN_148441536(void)

void FUN_148441536(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1[0x51] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x2c8))();
    plVar2 = (longlong *)FUN_148451354(uVar1);
    (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1[0x51]);
    param_1[0x51] = 0;
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    plVar2 = (longlong *)FUN_148451354(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001484415a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2b8))(plVar2,&DAT_14cb4b430,*(code **)(*plVar2 + 0x2b8));
    return;
  }
  return;
}



// FUNCTION 1484415c5 FUN_1484415c5 body=175 status=ok
// SIG undefined FUN_1484415c5(void)

undefined8 FUN_1484415c5(undefined8 param_1)

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
  local_b8 = FUN_145b7485c();
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



// FUNCTION 148441676 FUN_148441676 body=71 status=ok
// SIG undefined FUN_148441676(void)

void FUN_148441676(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14841014b(DAT_14c951640);
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1 + 0x13);
                    /* WARNING: Could not recover jumptable at 0x0001484416ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar1,0);
  return;
}



// FUNCTION 1484416be FUN_1484416be body=1 status=ok
// SIG undefined FUN_1484416be(void)

void FUN_1484416be(void)

{
  return;
}



// FUNCTION 1484416f4 FUN_1484416f4 body=756 status=ok
// SIG undefined FUN_1484416f4(void)

void FUN_1484416f4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_178 [40];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *plStack_100;
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(param_1 + -0x98);
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  FUN_1413ea578(local_f0,*(undefined8 *)(param_2 + 0x40),0);
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  FUN_1413ea578(local_118,*(undefined8 *)(param_2 + 0x38),0);
  local_a0 = L"OnClickPressMessage";
  local_98[0] = 0x13;
  FUN_1446e940c(local_14c,&local_a0);
  local_a0 = L"UClickDragTool";
  local_98[0] = 0xe;
  FUN_1446e940c(local_150,&local_a0);
  FUN_140208bae(local_148,local_150,local_14c,L"UClickDragTool::OnClickPress: clicked at ({0},{1})")
  ;
  FUN_14023409e(&local_138,local_148,1);
  local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
  FUN_14023423e(local_90,local_118);
  local_80 = 4;
  FUN_14023423e(local_70,local_f0);
  local_b8 = local_60;
  local_c0 = &local_a0;
  FUN_14010d304(&local_b0);
  local_d0 = local_138;
  local_c8 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_130 + 1) = (int)local_130[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_e0,&local_d0,&local_b0);
  FUN_14007f2db(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x30;
  do {
    plVar2 = *(longlong **)((longlong)local_98 + lVar4 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_98 + lVar4 + -8) = 0;
      *(undefined4 *)((longlong)local_98 + lVar4) = 0;
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != -0x10);
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_130 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
      }
    }
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_f0[0] != (longlong *)0x0) {
    (**(code **)(*local_f0[0] + 0x10))();
  }
  (**(code **)(*plVar3 + 0x340))(plVar3,local_e0,0);
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  if (local_148[0] != (longlong *)0x0) {
    (**(code **)(*local_148[0] + 0x10))();
  }
  plVar3 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_120 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484419ec FUN_1484419ec body=756 status=ok
// SIG undefined FUN_1484419ec(void)

void FUN_1484419ec(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_178 [40];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *plStack_100;
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(param_1 + -0x98);
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  FUN_1413ea578(local_f0,*(undefined8 *)(param_2 + 0x40),0);
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  FUN_1413ea578(local_118,*(undefined8 *)(param_2 + 0x38),0);
  local_a0 = L"OnClickReleaseMessage";
  local_98[0] = 0x15;
  FUN_1446e940c(local_14c,&local_a0);
  local_a0 = L"UClickDragTool";
  local_98[0] = 0xe;
  FUN_1446e940c(local_150,&local_a0);
  FUN_140208bae(local_148,local_150,local_14c,
                L"UClickDragTool::OnClickRelease: released at ({0},{1})");
  FUN_14023409e(&local_138,local_148,1);
  local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
  FUN_14023423e(local_90,local_118);
  local_80 = 4;
  FUN_14023423e(local_70,local_f0);
  local_b8 = local_60;
  local_c0 = &local_a0;
  FUN_14010d304(&local_b0);
  local_d0 = local_138;
  local_c8 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_130 + 1) = (int)local_130[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_e0,&local_d0,&local_b0);
  FUN_14007f2db(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x30;
  do {
    plVar2 = *(longlong **)((longlong)local_98 + lVar4 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_98 + lVar4 + -8) = 0;
      *(undefined4 *)((longlong)local_98 + lVar4) = 0;
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != -0x10);
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_130 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
      }
    }
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_f0[0] != (longlong *)0x0) {
    (**(code **)(*local_f0[0] + 0x10))();
  }
  (**(code **)(*plVar3 + 0x340))(plVar3,local_e0,0);
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  if (local_148[0] != (longlong *)0x0) {
    (**(code **)(*local_148[0] + 0x10))();
  }
  plVar3 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_120 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148441cec FUN_148441cec body=136 status=ok
// SIG undefined FUN_148441cec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_148441cec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4b4d8) {
    FUN_144b3d300(&DAT_14cb4b4d8);
    if (DAT_14cb4b4d8 == -1) {
      _DAT_14cb4b4a0 = FUN_145a7b1c0();
      DAT_14cb4b4c8 = 0;
      _DAT_14cb4b4d0 = 0x500000001;
      atexit((_func_5014 *)&LAB_143b50a7f);
      _Init_thread_footer(&DAT_14cb4b4d8);
    }
  }
  return &DAT_14cb4b4a0;
}



// FUNCTION 148441d74 FUN_148441d74 body=54 status=ok
// SIG undefined FUN_148441d74(void)

bool FUN_148441d74(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return iVar2 == 1;
}



// FUNCTION 148441daa FUN_148441daa body=54 status=ok
// SIG undefined FUN_148441daa(void)

undefined8 FUN_148441daa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*param_1 + 0x2d0))(param_1,uVar1,param_2);
  return uVar1;
}



// FUNCTION 148441de9 FUN_148441de9 body=175 status=ok
// SIG undefined FUN_148441de9(void)

undefined8 FUN_148441de9(undefined8 param_1)

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
  local_b8 = FUN_145922384();
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



// FUNCTION 148441e9a FUN_148441e9a body=109 status=ok
// SIG undefined FUN_148441e9a(void)

void FUN_148441e9a(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_3[2];
  uVar2 = (**(code **)(*param_1 + 0x2c0))();
  uVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1,param_3,uVar2);
  (**(code **)(*param_2 + 0x378))(param_2,uVar2);
  (**(code **)(*param_2 + 0x390))(param_2,param_1[5]);
  FUN_14485c47a(param_2 + 0x1f,*param_3);
  return;
}



// FUNCTION 148441f08 FUN_148441f08 body=12 status=ok
// SIG undefined FUN_148441f08(void)

void FUN_148441f08(longlong param_1)

{
  FUN_14485c47a(param_1 + 0xf8);
  return;
}



// FUNCTION 148441f24 FUN_148441f24 body=71 status=ok
// SIG undefined FUN_148441f24(void)

void FUN_148441f24(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar2 = FUN_145a7b1c0();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000148441f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_3);
  return;
}



// FUNCTION 148441f6c FUN_148441f6c body=179 status=ok
// SIG undefined FUN_148441f6c(void)

void FUN_148441f6c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x398))(param_1 + -0x98,param_2,local_130);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_3 + 4) = local_f8;
    *param_3 = local_108;
    param_3[1] = uStack_104;
    param_3[2] = uStack_100;
    param_3[3] = uStack_fc;
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148442022 FUN_148442022 body=831 status=ok
// SIG undefined FUN_148442022(void)

void FUN_148442022(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_278 [40];
  undefined1 local_250 [4];
  undefined1 local_24c [4];
  longlong *local_248 [2];
  undefined8 local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *plStack_220;
  longlong *local_218 [2];
  undefined8 local_208;
  longlong *plStack_200;
  longlong *local_1f0 [2];
  longlong *local_1e0 [2];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_12c;
  undefined4 local_100;
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_278;
  memset(&local_1d0,0,0x100);
  local_100 = 0xffffffff;
  local_1cc = 0x3f800000;
  local_12c = 0xffffffff;
  cVar3 = (**(code **)(*param_1 + 0x398))(param_1,param_2,&local_1d0);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_208 = 0;
    plStack_200 = (longlong *)0x0;
    FUN_1404079ea(local_1f0,local_1c8,0);
    local_228 = 0;
    plStack_220 = (longlong *)0x0;
    FUN_1413a4536(local_218,local_1d0,0);
    local_a0 = L"OnUpdateDragMessage";
    local_98[0] = 0x13;
    FUN_1446e940c(local_24c,&local_a0);
    local_a0 = L"UMeshSurfacePointTool";
    local_98[0] = 0x15;
    FUN_1446e940c(local_250,&local_a0);
    FUN_140208bae(local_248,local_250,local_24c,
                  L"UMeshSurfacePointTool::OnUpdateDrag: Hit triangle index {0} at ray distance {1}"
                 );
    FUN_14023409e(&local_238,local_248,1);
    local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
    FUN_14023423e(local_90,local_218);
    local_80 = 4;
    FUN_14023423e(local_70,local_1f0);
    local_b8 = local_60;
    local_c0 = &local_a0;
    FUN_14010d304(&local_b0);
    local_d0 = local_238;
    local_c8 = local_230;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_230 + 1) = (int)local_230[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1e0,&local_d0,&local_b0);
    FUN_14007f2db(local_b0,local_a8);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    lVar5 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_98 + lVar5 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_98 + lVar5 + -8) = 0;
        *(undefined4 *)((longlong)local_98 + lVar5) = 0;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != -0x10);
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_230 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_230 + 0x10))(local_230);
        }
      }
    }
    if (local_218[0] != (longlong *)0x0) {
      (**(code **)(*local_218[0] + 0x10))();
    }
    if (local_1f0[0] != (longlong *)0x0) {
      (**(code **)(*local_1f0[0] + 0x10))();
    }
    (**(code **)(*plVar4 + 0x340))(plVar4,local_1e0,0);
    if (local_1e0[0] != (longlong *)0x0) {
      (**(code **)(*local_1e0[0] + 0x10))();
    }
    if (local_248[0] != (longlong *)0x0) {
      (**(code **)(*local_248[0] + 0x10))();
    }
    plVar4 = plStack_220;
    if (plStack_220 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_220 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_220)(plStack_220);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    plVar4 = plStack_200;
    if (plStack_200 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_200 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_200)(plStack_200);
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
  if ((local_60[0] ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148442448 FUN_148442448 body=253 status=ok
// SIG undefined FUN_148442448(void)

char * FUN_148442448(longlong param_1,char *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined4 local_12c;
  float local_128;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[5];
  *(undefined8 *)(param_1 + 0x30) = param_3[4];
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  cVar7 = (**(code **)(*(longlong *)(param_1 + -0xb0) + 0x398))(param_1 + -0xb0,param_3,local_130);
  if (cVar7 == '\0') {
    dVar1 = 3.4028234663852886e+38;
  }
  else {
    dVar1 = (double)local_128;
  }
  *param_2 = cVar7;
  *(double *)(param_2 + 8) = dVar1;
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = -0x10;
  param_2[0x27] = '?';
  param_2[0x28] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148442546 FUN_148442546 body=51 status=ok
// SIG undefined FUN_148442546(void)

undefined8 FUN_148442546(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*(undefined8 **)(param_1 + 0xf0) == (undefined8 *)0x0) {
    fVar1 = 1.0;
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0xf0))();
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    fVar1 = (float)uVar2;
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 14844257a FUN_14844257a body=12 status=ok
// SIG undefined FUN_14844257a(void)

void FUN_14844257a(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0xf8);
  return;
}



// FUNCTION 14844259b FUN_14844259b body=175 status=ok
// SIG undefined FUN_14844259b(void)

undefined8 FUN_14844259b(undefined8 param_1)

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
  local_b8 = FUN_1459ee37c();
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



// FUNCTION 14844264c FUN_14844264c body=71 status=ok
// SIG undefined FUN_14844264c(void)

void FUN_14844264c(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14843c80f(DAT_14c951640);
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1 + 0x13);
                    /* WARNING: Could not recover jumptable at 0x000148442690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar1,0);
  return;
}



// FUNCTION 1484426c8 FUN_1484426c8 body=753 status=ok
// SIG undefined FUN_1484426c8(void)

void FUN_1484426c8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_178 [40];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *plStack_100;
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(param_1 + -0x98);
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  FUN_1413ea578(local_f0,*(undefined8 *)(param_2 + 0x40),0);
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  FUN_1413ea578(local_118,*(undefined8 *)(param_2 + 0x38),0);
  local_a0 = L"OnClickedMessage";
  local_98[0] = 0x10;
  FUN_1446e940c(local_14c,&local_a0);
  local_a0 = L"USingleClickTool";
  local_98[0] = 0x10;
  FUN_1446e940c(local_150,&local_a0);
  FUN_140208bae(local_148,local_150,local_14c,L"USingleClickTool::OnClicked at ({0},{1})");
  FUN_14023409e(&local_138,local_148,1);
  local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
  FUN_14023423e(local_90,local_118);
  local_80 = 4;
  FUN_14023423e(local_70,local_f0);
  local_b8 = local_60;
  local_c0 = &local_a0;
  FUN_14010d304(&local_b0);
  local_d0 = local_138;
  local_c8 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_130 + 1) = (int)local_130[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_e0,&local_d0,&local_b0);
  FUN_14007f2db(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x30;
  do {
    plVar2 = *(longlong **)((longlong)local_98 + lVar4 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_98 + lVar4 + -8) = 0;
      *(undefined4 *)((longlong)local_98 + lVar4) = 0;
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != -0x10);
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_130 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
      }
    }
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_f0[0] != (longlong *)0x0) {
    (**(code **)(*local_f0[0] + 0x10))();
  }
  (**(code **)(*plVar3 + 0x340))(plVar3,local_e0,0);
  if (local_e0[0] != (longlong *)0x0) {
    (**(code **)(*local_e0[0] + 0x10))();
  }
  if (local_148[0] != (longlong *)0x0) {
    (**(code **)(*local_148[0] + 0x10))();
  }
  plVar3 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_120 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484429be FUN_1484429be body=56 status=ok
// SIG undefined FUN_1484429be(void)

byte FUN_1484429be(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    bVar1 = 0;
  }
  else {
    uVar2 = FUN_145b74a30();
    bVar1 = FUN_144a7ca96((longlong *)(param_1 + 8),uVar2);
    bVar1 = *(longlong *)(param_1 + 8) != 0 & bVar1;
  }
  return bVar1;
}



// FUNCTION 1484429f6 FUN_1484429f6 body=252 status=ok
// SIG undefined FUN_1484429f6(void)

double * FUN_1484429f6(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar9 = FUN_145b74a30();
    bVar7 = FUN_144a7ca96((longlong *)(param_1 + 8),uVar9);
    lVar10 = *(longlong *)(param_1 + 8);
    if ((lVar10 != 0 & bVar7) == 1) {
      lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))(lVar10 + 0x28);
      if (lVar10 != 0) {
        dVar1 = *(double *)(lVar10 + 0x170);
        dVar2 = *(double *)(lVar10 + 0x188);
        dVar3 = *(double *)(lVar10 + 0x160);
        dVar4 = *(double *)(lVar10 + 0x168);
        dVar5 = *(double *)(lVar10 + 0x180);
        dVar6 = *(double *)(lVar10 + 0x178);
        *param_2 = dVar3 - dVar6;
        param_2[1] = dVar4 - dVar5;
        param_2[2] = dVar1 - dVar2;
        param_2[3] = dVar3 + dVar6;
        param_2[4] = dVar4 + dVar5;
        param_2[5] = dVar1 + dVar2;
        uVar8 = 1;
        goto LAB_148442ad5;
      }
    }
  }
  uVar8 = 0;
LAB_148442ad5:
  *(undefined1 *)(param_2 + 6) = uVar8;
  return param_2;
}



// FUNCTION 148442af2 FUN_148442af2 body=56 status=ok
// SIG undefined FUN_148442af2(void)

byte FUN_148442af2(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    bVar1 = 0;
  }
  else {
    uVar2 = FUN_145b74a30();
    bVar1 = FUN_144a7ca96((longlong *)(param_1 + 8),uVar2);
    bVar1 = *(longlong *)(param_1 + 8) != 0 & bVar1;
  }
  return bVar1;
}



// FUNCTION 148442b2a FUN_148442b2a body=216 status=ok
// SIG undefined FUN_148442b2a(void)

undefined8 FUN_148442b2a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_145b74a30();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 8));
    lVar1 = *(longlong *)(param_1 + 8);
    if ((lVar1 != 0 & bVar2) == 1) {
      memset(local_128,0,0x100);
      local_58 = 0xffffffff;
      local_124 = 0x3f800000;
      local_84 = 0xffffffff;
      cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x30))(lVar1 + 0x28,param_2,local_128);
      if (cVar3 != '\0') {
        *(undefined8 *)(param_3 + 4) = local_f0;
        *param_3 = local_100;
        param_3[1] = uStack_fc;
        param_3[2] = uStack_f8;
        param_3[3] = uStack_f4;
        uVar4 = 1;
        goto LAB_148442bdc;
      }
    }
  }
  uVar4 = 0;
LAB_148442bdc:
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148442c04 FUN_148442c04 body=158 status=ok
// SIG undefined FUN_148442c04(void)

void FUN_148442c04(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14aed3880;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3ff00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  puVar2 = param_1 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 148442ca2 FUN_148442ca2 body=170 status=ok
// SIG undefined FUN_148442ca2(void)

void FUN_148442ca2(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_140613f88(param_2,param_1 + 0x70,0,0);
  pcVar1 = *(code **)(param_1 + 0xd0);
  if (pcVar1 != (code *)0x0) {
    local_31 = 1;
    plVar3 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xe0);
    }
    local_48 = param_1;
    local_40 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_48,&local_40,&local_31);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148442d4e FUN_148442d4e body=170 status=ok
// SIG undefined FUN_148442d4e(void)

void FUN_148442d4e(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_140613f88(param_2,param_1 + 0x10,0,0);
  pcVar1 = *(code **)(param_1 + 0xd0);
  if (pcVar1 != (code *)0x0) {
    local_31 = 0;
    plVar3 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0xe0);
    }
    local_48 = param_1;
    local_40 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_48,&local_40,&local_31);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148442dfa FUN_148442dfa body=32 status=ok
// SIG undefined FUN_148442dfa(void)

undefined8 FUN_148442dfa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Transform Change");
  return param_2;
}



// FUNCTION 148442e1e FUN_148442e1e body=206 status=ok
// SIG undefined FUN_148442e1e(void)

longlong FUN_148442e1e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  while( true ) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x30);
    if ((*(byte *)(param_2 + 0xd5) & 0x40) == 0) {
      if (iVar1 != 0) {
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(lVar5 + lVar4);
          if (lVar2 != 0) {
            if ((*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30)) {
              return lVar2;
            }
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar1 * 8 != lVar4);
      }
    }
    else if (iVar1 != 0) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar5 + lVar4);
        if ((lVar2 != 0) &&
           (cVar3 = FUN_144a7ff9e(*(undefined8 *)(lVar2 + 0x10),param_2), cVar3 != '\0')) {
          return lVar2;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
    lVar5 = FUN_1459d7446();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) break;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30) {
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148442eec FUN_148442eec body=364 status=ok
// SIG undefined FUN_148442eec(void)

bool FUN_148442eec(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  iVar1 = *(int *)(param_1 + 0x30);
  lVar4 = (longlong)iVar1;
  if (lVar4 == 0) {
    bVar11 = false;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x28);
    iVar5 = 0;
    bVar11 = false;
    if (*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(*plVar2 + 0x10) + 0x38)) {
      bVar11 = *(longlong *)
                (*(longlong *)(*(longlong *)(*plVar2 + 0x10) + 0x30) +
                (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30;
    }
    iVar6 = 0;
    do {
      if (iVar6 + 1 < iVar1) {
        do {
          lVar10 = (longlong)iVar6 + 2;
          bVar13 = true;
          lVar8 = -1;
          do {
            if (*(int *)(*(longlong *)(plVar2[lVar10 + -1] + 0x10) + 0x38) <
                *(int *)(param_2 + 0x38)) {
              if (bVar11 != false) {
                if (bVar13 == false) goto LAB_148443036;
                iVar9 = iVar6 - (int)lVar8;
                goto LAB_148442fc0;
              }
            }
            else if ((*(longlong *)
                       (*(longlong *)(*(longlong *)(plVar2[lVar10 + -1] + 0x10) + 0x30) +
                       (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30) != bVar11) {
              iVar9 = iVar6 - (int)lVar8;
              break;
            }
            bVar13 = lVar10 < lVar4;
            lVar8 = lVar8 + -1;
            lVar10 = lVar10 + 1;
            iVar9 = iVar1;
          } while (iVar6 - lVar4 != lVar8);
          bVar12 = bVar11 == false;
          bVar11 = bVar13;
          iVar3 = iVar9;
          iVar7 = iVar6;
          if (bVar12) break;
          if (bVar13 == false) goto LAB_148443036;
LAB_148442fc0:
          bVar11 = false;
          iVar3 = iVar9 + 1;
          iVar7 = iVar9;
          iVar6 = iVar9;
        } while (iVar9 + 1 < iVar1);
      }
      else {
        if (bVar11 != false) break;
        bVar11 = false;
        iVar3 = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar3;
      if (iVar5 != iVar7) {
        memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar6 - iVar7) << 3);
      }
      iVar5 = iVar5 + (iVar6 - iVar7);
      bVar13 = bVar11 != false;
      bVar11 = true;
    } while (bVar13);
LAB_148443036:
    *(int *)(param_1 + 0x30) = iVar5;
    bVar11 = iVar5 < iVar1;
  }
  return bVar11;
}



// FUNCTION 14844305c FUN_14844305c body=171 status=ok
// SIG undefined FUN_14844305c(void)

bool FUN_14844305c(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)*param_2 + 0x2a0))((longlong *)*param_2,&local_2c);
  (**(code **)(*(longlong *)*param_1 + 0x2a0))((longlong *)*param_1,&local_30);
  if (local_30 == local_2c) {
    bVar1 = (double)param_1[2] <= (double)param_2[2] && (double)param_2[2] != (double)param_1[2];
  }
  else {
    (**(code **)(*(longlong *)*param_2 + 0x2a0))((longlong *)*param_2,&local_2c);
    (**(code **)(*(longlong *)*param_1 + 0x2a0))((longlong *)*param_1,&local_30);
    bVar1 = local_30 < local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484431fe FUN_1484431fe body=203 status=ok
// SIG undefined FUN_1484431fe(void)

void FUN_1484431fe(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  local_40[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40[0] = 0;
  local_40[1] = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_50 = param_2;
  local_48 = param_3;
  FUN_144a787a6(local_40,param_4);
  iVar1 = (int)param_1[6];
  *(uint *)(param_1 + 6) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar1 + 1U) {
    FUN_14844e7ea(param_1 + 5,iVar1);
  }
  FUN_14844e768((longlong)iVar1 * 0x20 + param_1[5],&local_50);
  (**(code **)(*param_1 + 0x2e8))(param_1);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484432ca FUN_1484432ca body=301 status=ok
// SIG undefined FUN_1484432ca(void)

void FUN_1484432ca(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong lStack_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_2 + 0x30) != 0) {
    lVar5 = (longlong)*(int *)(param_2 + 0x30) << 5;
    lVar4 = *(longlong *)(param_2 + 0x28) + 0x10;
    do {
      local_78[0] = 0;
      local_78[1] = 0;
      local_88 = 0;
      lStack_80 = 0;
      lVar2 = *(longlong *)(lVar4 + -0x10);
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(lVar4 + -0x10);
        }
      }
      lStack_80 = param_3;
      if (param_3 == 0) {
        lStack_80 = *(longlong *)(lVar4 + -8);
      }
      lVar3 = param_4;
      if (*(int *)(param_4 + 8) < 2) {
        lVar3 = lVar4;
      }
      local_88 = lVar2;
      FUN_144a787a6(local_78,lVar3);
      iVar1 = (int)param_1[6];
      *(uint *)(param_1 + 6) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar1 + 1U) {
        FUN_14844e7ea(param_1 + 5,iVar1);
      }
      FUN_14844e768((longlong)iVar1 * 0x20 + param_1[5],&local_88);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
    if (0 < *(int *)(param_2 + 0x30)) {
      (**(code **)(*param_1 + 0x2e8))(param_1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484433f8 FUN_1484433f8 body=104 status=ok
// SIG undefined FUN_1484433f8(void)

undefined4 FUN_1484433f8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if ((longlong)(int)param_1[6] != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_1[5] + lVar2) == param_2) {
        if (iVar1 == 1) {
          return 0;
        }
        FUN_14844e870(param_1 + 5,-iVar1);
        FUN_14844e8c8(param_1 + 5);
        (**(code **)(*param_1 + 0x2e8))(param_1);
        return 1;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + 0x20;
    } while ((longlong)(int)param_1[6] * 0x20 != lVar2);
  }
  return 0;
}



// FUNCTION 148443460 FUN_148443460 body=572 status=ok
// SIG undefined FUN_148443460(void)

undefined4 FUN_148443460(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_2 + 1);
  lVar8 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar8 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar8 * 2);
  }
  iVar2 = (int)param_1[6];
  lVar8 = (longlong)iVar2;
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    lVar12 = param_1[5];
    iVar4 = *(int *)(lVar12 + 0x18);
    local_70 = param_1;
    if (iVar4 == local_50) {
      bVar14 = true;
      if (1 < iVar4) {
        iVar4 = FUN_144a80a00(*(undefined8 *)(lVar12 + 0x10),local_58);
        bVar14 = iVar4 == 0;
      }
    }
    else {
      bVar14 = local_50 + iVar4 == 1;
    }
    local_60 = -lVar8;
    local_68 = lVar12 + 0x38;
    local_7c = 0;
    iVar4 = 0;
    local_78 = lVar12;
LAB_148443537:
    do {
      if (iVar4 + 1 < iVar2) {
        lVar12 = (longlong)iVar4;
        lVar1 = local_60 + lVar12;
        lVar11 = lVar12 + 2;
        piVar13 = (int *)(lVar12 * 0x20 + local_68);
        bVar3 = true;
        lVar9 = -1;
        do {
          iVar5 = *piVar13;
          iVar6 = (int)lVar9;
          if (iVar5 == local_50) {
            if (1 < iVar5) {
              iVar5 = FUN_144a80a00(*(undefined8 *)(piVar13 + -2),local_58);
              bVar15 = iVar5 == 0;
              goto LAB_14844358b;
            }
            if (bVar14 == false) {
              iVar5 = iVar4 - iVar6;
              uVar10 = (ulonglong)(uint)-iVar6;
              lVar12 = local_78;
              goto LAB_148443605;
            }
          }
          else {
            bVar15 = local_50 + iVar5 == 1;
LAB_14844358b:
            if (bVar15 != bVar14) {
              lVar12 = local_78;
              iVar5 = iVar4 - iVar6;
              break;
            }
          }
          bVar3 = lVar11 < lVar8;
          lVar9 = lVar9 + -1;
          lVar11 = lVar11 + 1;
          piVar13 = piVar13 + 8;
          lVar12 = local_78;
          iVar5 = iVar2;
        } while (lVar1 != lVar9);
      }
      else {
        bVar3 = false;
        iVar5 = iVar4 + 1;
      }
      uVar10 = (ulonglong)(uint)(iVar5 - iVar4);
      if (bVar14 != false) {
        FUN_140e273d3((longlong)iVar4 * 0x20 + lVar12,uVar10);
        bVar14 = false;
        iVar4 = iVar5;
        if (!bVar3) break;
        goto LAB_148443537;
      }
LAB_148443605:
      iVar6 = local_7c;
      if (local_7c != iVar4) {
        memmove((void *)((longlong)local_7c * 0x20 + lVar12),
                (void *)((longlong)iVar4 * 0x20 + lVar12),(longlong)(int)uVar10 << 5);
      }
      local_7c = iVar6 + (int)uVar10;
      bVar14 = true;
      iVar4 = iVar5;
    } while (bVar3);
    *(int *)(local_70 + 6) = local_7c;
    uVar7 = (undefined4)CONCAT71((int7)(uVar10 >> 8),local_7c < iVar2);
    param_1 = local_70;
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((char)uVar7 != '\0') {
    (**(code **)(*param_1 + 0x2e8))(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14844369e FUN_14844369e body=257 status=ok
// SIG undefined FUN_14844369e(void)

ulonglong FUN_14844369e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[6];
  lVar13 = (longlong)iVar1;
  uVar8 = 0;
  if (lVar13 != 0) {
    lVar2 = param_1[5];
    bVar12 = *(longlong *)(lVar2 + 8) == param_2;
    iVar5 = 0;
    do {
      lVar11 = (longlong)iVar5;
      iVar9 = iVar5 + 1;
      if (iVar5 + 1 < iVar1) {
        iVar9 = iVar1;
      }
      lVar4 = lVar11 * 0x20;
      plVar10 = (longlong *)(lVar2 + 0x28 + lVar4);
      iVar6 = iVar5;
      do {
        lVar11 = lVar11 + 1;
        iVar7 = iVar9;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar10;
        iVar6 = iVar6 + 1;
        plVar10 = plVar10 + 4;
        iVar7 = iVar6;
      } while (bVar12 == (lVar3 == param_2));
      iVar9 = iVar7 - iVar5;
      if (bVar12 == false) {
        iVar6 = (int)uVar8;
        if (iVar6 != iVar5) {
          memmove((void *)((longlong)iVar6 * 0x20 + lVar2),(void *)(lVar4 + lVar2),
                  (longlong)iVar9 << 5);
        }
        uVar8 = (ulonglong)(uint)(iVar6 + iVar9);
      }
      else {
        FUN_140e273d3(lVar4 + lVar2,iVar9);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar5 = iVar7;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 6) = (int)uVar8;
    if ((int)uVar8 < iVar1) {
      (**(code **)(*param_1 + 0x2e8))();
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}



// FUNCTION 1484437a0 FUN_1484437a0 body=71 status=ok
// SIG undefined FUN_1484437a0(void)

void FUN_1484437a0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  FUN_140e273d3(param_1[5],(int)param_1[6]);
  *(undefined4 *)(param_1 + 6) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
    FUN_14844e964(param_1 + 5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001484437d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1);
  return;
}



// FUNCTION 1484437e8 FUN_1484437e8 body=228 status=ok
// SIG undefined FUN_1484437e8(void)

void FUN_1484437e8(longlong param_1,uint *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x28);
    lVar9 = 0;
    do {
      uVar4 = *param_2;
      uVar8 = (**(code **)(**(longlong **)(lVar6 + lVar9) + 0x2b0))();
      if (((uVar8 & uVar4) != 0) &&
         ((**(code **)(**(longlong **)(lVar6 + lVar9) + 0x2b8))
                    (*(longlong **)(lVar6 + lVar9),&local_68,param_2), iStack_60 != 2)) {
        uStack_50 = *(undefined8 *)(lVar6 + 8 + lVar9);
        iVar5 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
          FUN_14844e994(param_3,iVar5);
        }
        lVar7 = *param_3;
        puVar2 = (undefined8 *)(lVar7 + 0x10 + (longlong)iVar5 * 0x20);
        *puVar2 = local_58;
        puVar2[1] = uStack_50;
        puVar1 = (undefined4 *)(lVar7 + (longlong)iVar5 * 0x20);
        *puVar1 = local_68;
        puVar1[1] = uStack_64;
        puVar1[2] = iStack_60;
        puVar1[3] = uStack_5c;
      }
      lVar9 = lVar9 + 0x20;
    } while ((longlong)iVar3 * 0x20 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484438ce FUN_1484438ce body=245 status=ok
// SIG undefined FUN_1484438ce(void)

void FUN_1484438ce(longlong param_1,uint *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x28);
    lVar10 = 0;
    do {
      cVar8 = (**(code **)(**(longlong **)(lVar6 + lVar10) + 0x2d8))();
      if (((cVar8 != '\0') &&
          (uVar4 = *param_2, uVar9 = (**(code **)(**(longlong **)(lVar6 + lVar10) + 0x2b0))(),
          (uVar9 & uVar4) != 0)) &&
         ((**(code **)(**(longlong **)(lVar6 + lVar10) + 0x2e0))
                    (*(longlong **)(lVar6 + lVar10),&local_68,param_2), iStack_60 != 2)) {
        uStack_50 = *(undefined8 *)(lVar6 + 8 + lVar10);
        iVar5 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
          FUN_14844e994(param_3,iVar5);
        }
        lVar7 = *param_3;
        puVar2 = (undefined8 *)(lVar7 + 0x10 + (longlong)iVar5 * 0x20);
        *puVar2 = local_58;
        puVar2[1] = uStack_50;
        puVar1 = (undefined4 *)(lVar7 + (longlong)iVar5 * 0x20);
        *puVar1 = local_68;
        puVar1[1] = uStack_64;
        puVar1[2] = iStack_60;
        puVar1[3] = uStack_5c;
      }
      lVar10 = lVar10 + 0x20;
    } while ((longlong)iVar3 * 0x20 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484439f0 FUN_1484439f0 body=123 status=ok
// SIG undefined FUN_1484439f0(void)

void FUN_1484439f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x38);
  FUN_1400b22c2(local_30,&DAT_149e02088);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,uVar2,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148443a7e FUN_148443a7e body=559 status=ok
// SIG undefined FUN_148443a7e(void)

bool FUN_148443a7e(longlong *param_1,uint *param_2)

{
  char cVar1;
  undefined2 uVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = (**(code **)(*(longlong *)param_1[7] + 0x2a0))();
  if (cVar4 == '\0') {
    if ((*param_2 & 2) != 0) {
      (**(code **)(*param_1 + 0x2f0))(param_1,param_2);
      param_1[0x16] = *(longlong *)param_2;
      FUN_1413a517a(param_1 + 0x17,param_2 + 2);
      *(uint *)(param_1 + 0x1a) = param_2[8];
      FUN_14844c92c(param_1 + 0x1b,param_2 + 10);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    if ((*param_2 & 1) != 0) {
      cVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      if (((cVar4 != '\0') || (param_1[0x14] != 0)) &&
         (cVar4 = FUN_14171cb38(param_2 + 2), cVar4 != '\0')) {
        cVar4 = *(char *)((longlong)param_2 + 5);
        if (*(char *)((longlong)param_1 + 0xb5) == cVar4) {
          cVar1 = *(char *)((longlong)param_1 + 0xb4);
          cVar5 = (char)param_2[1];
          if (((cVar1 == (char)param_2[1]) &&
              (cVar5 = cVar1,
              *(char *)((longlong)param_1 + 0xb6) == *(char *)((longlong)param_2 + 6))) &&
             (*(char *)((longlong)param_1 + 0xb7) == *(char *)((longlong)param_2 + 7)))
          goto LAB_148443bdc;
        }
        else {
          cVar5 = (char)param_2[1];
        }
        uVar2 = *(undefined2 *)((longlong)param_2 + 6);
        *(char *)((longlong)param_1 + 0xb4) = cVar5;
        *(char *)((longlong)param_1 + 0xb5) = cVar4;
        *(undefined2 *)((longlong)param_1 + 0xb6) = uVar2;
        if (param_1[0xc] == 0) {
          cVar4 = FUN_148443de8(param_1,param_2);
          if ((cVar4 != '\0') && ((char)param_1[5] == '\x01')) {
            (**(code **)(*(longlong *)param_1[6] + 0x10))();
          }
        }
        else {
          FUN_148443cc4(param_1,param_2);
        }
      }
LAB_148443bdc:
      (**(code **)(*param_1 + 0x2e8))(param_1,param_2);
      bVar6 = param_1[8] != 0;
      goto LAB_148443aaf;
    }
    plVar3 = (longlong *)param_1[6];
    local_38 = L"PostInputEventMessage";
    local_30 = 0x15;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UInputRouter";
    local_30 = 0xc;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,
                  L"UInteractiveToolManager::PostInputEvent - input device is not currently supported."
                 );
    (**(code **)(*plVar3 + 8))(plVar3,&local_38,0);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  bVar6 = false;
LAB_148443aaf:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 148443cc4 FUN_148443cc4 body=290 status=ok
// SIG undefined FUN_148443cc4(void)

void FUN_148443cc4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  int local_60 [8];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c8))(plVar1,local_60,param_2,param_1 + 0x70);
    if (local_60[0] != 2) {
      if (local_60[0] == 3) {
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x30);
        local_40 = L"HandleCapturedMouseInputMessage";
        local_38 = 0x1f;
        FUN_1446e940c(local_64,&local_40);
        local_40 = L"UInputRouter";
        local_38 = 0xc;
        FUN_1446e940c(local_68,&local_40);
        FUN_140208bae(&local_40,local_68,local_64,
                      L"UInteractiveToolManager::HandleCapturedMouseInput - unexpected capture state!"
                     );
        (**(code **)(*plVar1 + 8))(plVar1,&local_40,0);
        if (local_40 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_40 + 0x10))();
        }
      }
    }
    if (*(char *)(param_1 + 0x29) == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148443de8 FUN_148443de8 body=130 status=ok
// SIG undefined FUN_148443de8(void)

undefined8 FUN_148443de8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  int local_38 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2f0))(plVar1,local_38,param_2);
    if (local_38[0] == 3) {
      if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x2f8))();
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      uVar2 = 1;
      goto LAB_148443e4d;
    }
  }
  uVar2 = 0;
LAB_148443e4d:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148443e8c FUN_148443e8c body=290 status=ok
// SIG undefined FUN_148443e8c(void)

void FUN_148443e8c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  int local_60 [8];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c8))(plVar1,local_60,param_2,param_1 + 0x50);
    if (local_60[0] != 2) {
      if (local_60[0] == 3) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x30);
        local_40 = L"HandleCapturedKeyboardInputMessage";
        local_38 = 0x22;
        FUN_1446e940c(local_64,&local_40);
        local_40 = L"UInputRouter";
        local_38 = 0xc;
        FUN_1446e940c(local_68,&local_40);
        FUN_140208bae(&local_40,local_68,local_64,
                      L"UInteractiveToolManager::HandleCapturedKeyboardInput - unexpected capture state!"
                     );
        (**(code **)(*plVar1 + 8))(plVar1,&local_40,0);
        if (local_40 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_40 + 0x10))();
        }
      }
    }
    if (*(char *)(param_1 + 0x29) == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148443fb0 FUN_148443fb0 body=255 status=ok
// SIG undefined FUN_148443fb0(void)

void FUN_148443fb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2d8))
            (*(longlong **)(param_1 + 0x38),param_2,&local_58);
  if ((int)uStack_50 != 0) {
    FUN_14844ed6e(local_58);
    if (0 < (int)uStack_50) {
      lVar1 = 0;
      lVar2 = 0;
      do {
        (**(code **)(**(longlong **)(local_58 + lVar1) + 0x2c0))
                  (*(longlong **)(local_58 + lVar1),local_78,param_2,1);
        if (local_78[0] == 1) {
          *(undefined8 *)(param_1 + 0x40) = local_70;
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(local_58 + 0x18 + lVar1);
          *(undefined4 *)(param_1 + 0x50) = local_68;
          *(undefined4 *)(param_1 + 0x54) = uStack_64;
          *(undefined4 *)(param_1 + 0x58) = uStack_60;
          *(undefined4 *)(param_1 + 0x5c) = uStack_5c;
          break;
        }
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x20;
      } while (lVar2 < (int)uStack_50);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484440b0 FUN_1484440b0 body=110 status=ok
// SIG undefined FUN_1484440b0(void)

void FUN_1484440b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    FUN_14844411e(param_1,param_2);
  }
  else {
    FUN_148443cc4(param_1,param_2);
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    cVar1 = FUN_148444240(param_1,param_2);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00014844411a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14844411e FUN_14844411e body=289 status=ok
// SIG undefined FUN_14844411e(void)

void FUN_14844411e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2d8))
            (*(longlong **)(param_1 + 0x38),param_2,&local_58);
  if ((int)uStack_50 != 0) {
    FUN_14844ed6e(local_58);
    if (0 < (int)uStack_50) {
      lVar1 = 0;
      lVar2 = 0;
      do {
        (**(code **)(**(longlong **)(local_58 + lVar1) + 0x2c0))
                  (*(longlong **)(local_58 + lVar1),local_78,param_2,1);
        if (local_78[0] == 1) {
          if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x2f8))();
            *(undefined8 *)(param_1 + 0xa0) = 0;
            *(undefined8 *)(param_1 + 0x68) = 0;
          }
          *(undefined8 *)(param_1 + 0x60) = local_70;
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_58 + 0x18 + lVar1);
          *(undefined4 *)(param_1 + 0x70) = local_68;
          *(undefined4 *)(param_1 + 0x74) = uStack_64;
          *(undefined4 *)(param_1 + 0x78) = uStack_60;
          *(undefined4 *)(param_1 + 0x7c) = uStack_5c;
          break;
        }
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x20;
      } while (lVar2 < (int)uStack_50);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148444240 FUN_148444240 body=388 status=ok
// SIG undefined FUN_148444240(void)

ulonglong FUN_148444240(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined8 local_60;
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2e0))
            (*(longlong **)(param_1 + 0x38),param_2,&local_48);
  plVar1 = *(longlong **)(param_1 + 0xa0);
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if ((int)uStack_40 == 0) {
    if (plVar1 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x2f8))(plVar1);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
LAB_1484442a9:
      uVar3 = CONCAT71(uVar4,1);
    }
    goto LAB_1484442ac;
  }
  FUN_14844ed6e(local_48);
  plVar2 = *(longlong **)(param_1 + 0xa0);
  if ((longlong *)*local_48 == plVar2) {
    FUN_148443de8(param_1,param_2);
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if ((plVar2 == (longlong *)0x0) && (0 < (int)uStack_40)) goto LAB_148444327;
  }
  else {
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2f8))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    if ((int)uStack_40 < 1) {
      plVar2 = (longlong *)0x0;
    }
    else {
LAB_148444327:
      lVar6 = 0;
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)((longlong)local_48 + lVar6) + 0x2e8))
                  (*(longlong **)((longlong)local_48 + lVar6),local_68,param_2,1);
        if (local_68[0] == 1) {
          *(undefined8 *)(param_1 + 0xa0) = local_60;
          *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)((longlong)local_48 + lVar6 + 0x18);
          goto LAB_1484442a9;
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (lVar5 < (int)uStack_40);
      plVar2 = *(longlong **)(param_1 + 0xa0);
    }
  }
  uVar3 = CONCAT71(uVar4,plVar1 != plVar2);
LAB_1484442ac:
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1484443c6 FUN_1484443c6 body=46 status=ok
// SIG undefined FUN_1484443c6(void)

void FUN_1484443c6(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_148444240();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x0001484443e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1484443fe FUN_1484443fe body=203 status=ok
// SIG undefined FUN_1484443fe(void)

void FUN_1484443fe(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x2f8))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1484444ca FUN_1484444ca body=238 status=ok
// SIG undefined FUN_1484444ca(void)

void FUN_1484444ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x48) == param_2)) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x68) == param_2)) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x88) == param_2)) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if ((*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) &&
     (*(longlong *)(param_1 + 0xa8) == param_2)) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x2f8))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1484445fc FUN_1484445fc body=9 status=ok
// SIG undefined FUN_1484445fc(void)

void FUN_1484445fc(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x28);
  return;
}



// FUNCTION 148444606 FUN_148444606 body=9 status=ok
// SIG undefined FUN_148444606(void)

void FUN_148444606(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 148444612 FUN_148444612 body=1 status=ok
// SIG undefined FUN_148444612(void)

void FUN_148444612(void)

{
  return;
}



// FUNCTION 148444614 FUN_148444614 body=9 status=ok
// SIG undefined FUN_148444614(void)

void FUN_148444614(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x28);
  return;
}



// FUNCTION 14844461e FUN_14844461e body=69 status=ok
// SIG undefined FUN_14844461e(void)

void FUN_14844461e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x28);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000148444658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x308))(plVar2,param_2,*(code **)(*plVar2 + 0x308));
    return;
  }
  return;
}



// FUNCTION 148444664 FUN_148444664 body=79 status=ok
// SIG undefined FUN_148444664(void)

undefined8 FUN_148444664(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x28);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0001484446a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x328))(plVar2,param_2,param_3,*(code **)(*plVar2 + 0x328));
    return uVar3;
  }
  return 0;
}



// FUNCTION 1484446ca FUN_1484446ca body=113 status=ok
// SIG undefined FUN_1484446ca(void)

void FUN_1484446ca(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x30);
  FUN_1400b22c2(local_30,&DAT_149e02088);
  (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,0,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148444744 FUN_148444744 body=59 status=ok
// SIG undefined FUN_148444744(void)

longlong FUN_148444744(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14594ba2c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148444792 FUN_148444792 body=367 status=ok
// SIG undefined FUN_148444792(void)

void FUN_148444792(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[8] = 0;
  local_38 = 0;
  iVar1 = (int)param_1[7];
  lVar2 = param_1[6];
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_14844f03c(&local_38,iVar1);
    FUN_14844f0a5(local_38,lVar2,iVar1);
    lVar2 = local_38;
    lVar3 = (longlong)local_30;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(lVar2 + lVar4));
        lVar4 = lVar4 + 0x30;
      } while (lVar3 * 0x30 != lVar4);
    }
  }
  iVar1 = *(int *)((longlong)param_1 + 0x3c);
  FUN_145da6c13(param_1[6],(int)param_1[7]);
  *(undefined4 *)(param_1 + 7) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x3c) != 0)) {
    FUN_14844f19e(param_1 + 6);
  }
  param_1[9] = 0;
  if ((char)param_1[0x15] != '\0') {
    (**(code **)(*param_1 + 0x2b8))(param_1,&DAT_14cb4b168);
    (**(code **)(*param_1 + 0x2b8))(param_1,&DAT_14cb4b788);
    (**(code **)(*param_1 + 0x2b8))(param_1,&DAT_14cb4b798);
    (**(code **)(*param_1 + 0x2b8))(param_1,&DAT_14cb4b7a8);
    (**(code **)(*param_1 + 0x2b8))(param_1,&DAT_14cb4b7b8);
  }
  FUN_145da6c13(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148444902 FUN_148444902 body=174 status=ok
// SIG undefined FUN_148444902(void)

void FUN_148444902(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_14844f1ce(param_1 + 0x58,uVar2,param_2);
  if (iVar3 == -1) {
    local_40 = param_3;
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(param_3);
    }
    local_30 = &local_40;
    local_38 = param_2;
    FUN_14844f25a(param_1 + 0x58,local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484449b2 FUN_1484449b2 body=568 status=ok
// SIG undefined FUN_1484449b2(void)

bool FUN_1484449b2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0 [2];
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
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar6);
  iVar5 = FUN_14844f1ce(param_1 + 0xb,uVar4,param_2);
  if (iVar5 == -1) {
    FUN_140009b9a(local_b0,param_2);
    local_60 = L"DeregisterFailedMessage";
    local_58 = 0x17;
    FUN_1446e940c(local_d4,&local_60);
    local_60 = L"UInteractiveGizmoManager";
    local_58 = 0x18;
    FUN_1446e940c(local_d8,&local_60);
    FUN_140208bae(local_d0,local_d8,local_d4,
                  L"UInteractiveGizmoManager::DeregisterGizmoType: could not find requested type {0}"
                 );
    FUN_14023409e(&local_c0,local_d0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b0);
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
    FUN_14010c016(local_a0,&local_90,&local_70);
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
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    (**(code **)(*param_1 + 0x2f0))(param_1,local_a0,0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
  }
  else {
    FUN_14844f7b8(param_1 + 0xb,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return iVar5 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148444bec FUN_148444bec body=1677 status=ok
// SIG undefined FUN_148444bec(void)

wchar_t * FUN_148444bec(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4
                       )

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_178 [40];
  wchar_t *local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110 [2];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  longlong *local_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar2 = param_1 + 0xb;
  iVar7 = *(int *)(param_2 + 1);
  if (iVar7 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar10);
  iVar7 = FUN_14844f1ce(plVar2,uVar6,param_2);
  if (iVar7 == -1) {
    FUN_140009b9a(local_d8,param_2);
    local_98 = L"CreateGizmoCannotFindFailedMessage";
    uStack_90._0_4_ = 0x22;
    FUN_1446e940c(local_fc,&local_98);
    local_98 = L"UInteractiveGizmoManager";
    uStack_90 = CONCAT44(uStack_90._4_4_,0x18);
    FUN_1446e940c(local_100,&local_98);
    FUN_140208bae(local_f8,local_100,local_fc,
                  L"UInteractiveGizmoManager::CreateGizmo: could not find requested type {0}");
    FUN_14023409e(&local_e8,local_f8,1);
    local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
    FUN_14023423e(&local_88,local_d8);
    local_a0 = local_78;
    local_a8 = &local_98;
    FUN_14010d304(&local_150);
    local_b8 = local_e8;
    local_b0 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_150);
    FUN_14007f2db(local_150,(ulonglong)local_148 & 0xffffffff);
    if (local_150 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    local_110[0] = local_d8[0];
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_110[0] = local_d8[0];
        if (*piVar1 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
          local_110[0] = local_d8[0];
        }
      }
    }
LAB_148444dc1:
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    (**(code **)(*param_1 + 0x2f0))(param_1,local_c8,0);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    pwVar8 = (wchar_t *)0x0;
  }
  else {
    iVar7 = *(int *)(param_2 + 1);
    if (iVar7 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*param_2;
    }
    uVar12 = 0;
    uVar9 = (ulonglong)(iVar7 - 1);
    if (iVar7 == 0) {
      uVar9 = uVar12;
    }
    uVar6 = FUN_144a49b4a(uVar9,puVar10);
    iVar7 = FUN_14844f1ce(plVar2,uVar6,param_2);
    if (iVar7 != -1) {
      uVar12 = (longlong)iVar7 * 0x20 + *plVar2;
    }
    plVar2 = *(longlong **)(uVar12 + 0x10);
    if ((1 < *(int *)(param_3 + 1)) && (lVar13 = param_1[7], (longlong)(int)lVar13 != 0)) {
      lVar3 = param_1[6];
      lVar11 = 0;
      do {
        iVar7 = *(int *)(lVar3 + 0x20 + lVar11);
        if (iVar7 == *(int *)(param_3 + 1)) {
          if (1 < iVar7) {
            iVar7 = FUN_144a80a00(*(undefined8 *)(lVar3 + 0x18 + lVar11),*param_3);
            if (iVar7 != 0) goto LAB_148444fd8;
          }
LAB_148444fe6:
          FUN_140009b9a(local_110,param_3);
          local_98 = L"CreateGizmoExistsMessage";
          uStack_90._0_4_ = 0x18;
          FUN_1446e940c(local_fc,&local_98);
          local_98 = L"UInteractiveGizmoManager";
          uStack_90 = CONCAT44(uStack_90._4_4_,0x18);
          FUN_1446e940c(local_100,&local_98);
          FUN_140208bae(local_f8,local_100,local_fc,
                        L"UInteractiveGizmoManager::CreateGizmo: instance identifier {0} already in use!"
                       );
          FUN_14023409e(&local_120,local_f8,1);
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
          FUN_14023423e(&local_88,local_110);
          local_a0 = local_78;
          local_a8 = &local_98;
          FUN_14010d304(&local_150);
          local_b8 = local_120;
          local_b0 = local_118;
          if (local_118 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_118 + 1) = (int)local_118[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_b8,&local_150);
          FUN_14007f2db(local_150,(ulonglong)local_148 & 0xffffffff);
          if (local_150 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_88 != (longlong *)0x0) {
            (**(code **)(*local_88 + 0x10))();
          }
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_118 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar1 = (int *)((longlong)local_118 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_118 + 0x10))(local_118);
              }
            }
          }
          goto LAB_148444dc1;
        }
        if (*(int *)(param_3 + 1) + iVar7 == 1) goto LAB_148444fe6;
LAB_148444fd8:
        lVar11 = lVar11 + 0x30;
      } while ((longlong)(int)lVar13 * 0x30 != lVar11);
    }
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    local_78[4] = 0;
    (**(code **)(*(longlong *)param_1[8] + 0x10))((longlong *)param_1[8],&local_98);
    pwVar8 = (wchar_t *)(**(code **)(*plVar2 + 0x2a0))(plVar2,&local_98);
    if (pwVar8 == (wchar_t *)0x0) {
      local_150 = L"CreateGizmoReturnNullMessage";
      local_148._0_4_ = 0x1c;
      FUN_1446e940c(&local_a8,&local_150);
      local_150 = L"UInteractiveGizmoManager";
      local_148 = (void *)CONCAT44(local_148._4_4_,0x18);
      FUN_1446e940c(&local_b8,&local_150);
      FUN_140208bae(&local_150,&local_b8,&local_a8,
                    L"UInteractiveGizmoManager::CreateGizmo: BuildGizmo() returned null");
      (**(code **)(*param_1 + 0x2f0))(param_1,&local_150,0);
      if (local_150 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_150 + 0x10))();
      }
    }
    else {
      (**(code **)(*(longlong *)pwVar8 + 0x2a0))(pwVar8);
      (**(code **)(*(longlong *)param_1[10] + 0x2b0))((longlong *)param_1[10],pwVar8 + 0x14);
      (**(code **)(*param_1 + 0x2f8))(param_1);
      local_150 = pwVar8;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(pwVar8);
      }
      local_148 = (void *)0x0;
      local_140 = *(int *)(param_2 + 1);
      lVar13 = (longlong)local_140;
      pvVar4 = (void *)*param_2;
      if (lVar13 == 0) {
        local_13c = 0;
      }
      else {
        FUN_1446dd670(&local_148,local_140,0);
        memcpy(local_148,pvVar4,lVar13 * 2);
      }
      local_138 = (void *)0x0;
      local_130 = *(int *)(param_3 + 1);
      lVar13 = (longlong)local_130;
      pvVar4 = (void *)*param_3;
      if (lVar13 == 0) {
        local_12c = 0;
      }
      else {
        FUN_1446dd670(&local_138,local_130,0);
        memcpy(local_138,pvVar4,lVar13 * 2);
      }
      iVar7 = (int)param_1[7];
      *(uint *)(param_1 + 7) = iVar7 + 1U;
      local_128 = param_4;
      if (*(uint *)((longlong)param_1 + 0x3c) < iVar7 + 1U) {
        FUN_14844f90c(param_1 + 6,iVar7);
      }
      FUN_14844f0d4((longlong)iVar7 * 0x30 + param_1[6],&local_150);
      if (local_138 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_148 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_78[2] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pwVar8;
}



// FUNCTION 14844527a FUN_14844527a body=367 status=ok
// SIG undefined FUN_14844527a(void)

undefined8 FUN_14844527a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  
  if ((longlong)(int)param_1[7] != 0) {
    plVar3 = (longlong *)param_1[6];
    lVar4 = (longlong)(int)param_1[7] * 0x30;
    do {
      if ((longlong *)*plVar3 == param_2) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        plVar3 = param_2 + 5;
        if (param_2 == (longlong *)0x0) {
          plVar3 = (longlong *)0x0;
        }
        (**(code **)(*(longlong *)param_1[10] + 0x2d8))((longlong *)param_1[10],plVar3);
        (**(code **)(*param_2 + 0x2a8))(param_2);
        (**(code **)(*(longlong *)param_1[10] + 0x2b8))((longlong *)param_1[10],plVar3);
        iVar1 = (int)param_1[7];
        lVar4 = (longlong)iVar1;
        if (lVar4 != 0) {
          puVar2 = (undefined8 *)param_1[6];
          iVar13 = 0;
          bVar8 = (longlong *)*puVar2 == param_2;
          iVar5 = 0;
          do {
            lVar10 = (longlong)iVar5;
            iVar9 = iVar5 + 1;
            if (iVar5 + 1 < iVar1) {
              iVar9 = iVar1;
            }
            puVar12 = puVar2 + lVar10 * 6 + 6;
            iVar6 = iVar5;
            lVar11 = lVar10;
            do {
              lVar11 = lVar11 + 1;
              iVar7 = iVar9;
              if (lVar4 <= lVar11) break;
              plVar3 = (longlong *)*puVar12;
              iVar6 = iVar6 + 1;
              puVar12 = puVar12 + 6;
              iVar7 = iVar6;
            } while (bVar8 == (plVar3 == param_2));
            iVar9 = iVar7 - iVar5;
            if (bVar8 == false) {
              if (iVar13 != iVar5) {
                memmove(puVar2 + (longlong)iVar13 * 6,puVar2 + lVar10 * 6,(longlong)iVar9 * 0x30);
              }
              iVar13 = iVar13 + iVar9;
            }
            else {
              FUN_145da6c13(puVar2 + lVar10 * 6,iVar9);
            }
            bVar8 = (bool)(bVar8 ^ 1);
            iVar5 = iVar7;
          } while (lVar11 < lVar4);
          *(int *)(param_1 + 7) = iVar13;
        }
        (**(code **)(*param_1 + 0x2f8))(param_1);
        return 1;
      }
      plVar3 = plVar3 + 6;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 1484453ea FUN_1484453ea body=170 status=ok
// SIG undefined FUN_1484453ea(void)

longlong * FUN_1484453ea(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar3 + 0x10 + lVar5);
      if (iVar2 == *(int *)(param_3 + 1)) {
        if (1 < iVar2) {
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar3 + 8 + lVar5),*param_3);
          if (iVar2 != 0) goto LAB_148445462;
          lVar3 = *(longlong *)(param_1 + 0x30);
        }
LAB_148445447:
        uVar1 = *(undefined8 *)(lVar3 + lVar5);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14844e208(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar1;
      }
      else if (*(int *)(param_3 + 1) + iVar2 == 1) goto LAB_148445447;
LAB_148445462:
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar4 < *(int *)(param_1 + 0x38));
  }
  return param_2;
}



// FUNCTION 148445494 FUN_148445494 body=130 status=ok
// SIG undefined FUN_148445494(void)

void FUN_148445494(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2e0))(param_1,&local_28,param_2);
  if (0 < local_20) {
    lVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(local_28 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < local_20);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148445518 FUN_148445518 body=247 status=ok
// SIG undefined FUN_148445518(void)

void FUN_148445518(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  lVar4 = param_1[7];
  if ((longlong)(int)lVar4 != 0) {
    lVar7 = param_1[6];
    lVar5 = 0;
    do {
      uVar2 = uStack_50;
      if (*(longlong *)(lVar7 + 0x28 + lVar5) == param_2) {
        uVar1 = *(undefined8 *)(lVar7 + lVar5);
        lVar6 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_14844e208(&local_58,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar6 * 8) = uVar1;
      }
      lVar6 = local_58;
      lVar5 = lVar5 + 0x30;
    } while ((longlong)(int)lVar4 * 0x30 != lVar5);
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(lVar6 + lVar7));
        lVar7 = lVar7 + 8;
      } while (lVar4 * 8 != lVar7);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148445610 FUN_148445610 body=130 status=ok
// SIG undefined FUN_148445610(void)

undefined8 FUN_148445610(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar1 = *(int *)(lVar3 + 0x20 + lVar4);
      if (iVar1 == *(int *)(param_2 + 1)) {
        if (iVar1 < 2) {
LAB_14844567f:
          return *(undefined8 *)(lVar3 + lVar4);
        }
        iVar2 = FUN_144a80a00(*(undefined8 *)(lVar3 + 0x18 + lVar4),*param_2);
        if (iVar2 == 0) {
          lVar3 = *(longlong *)(param_1 + 0x30);
          goto LAB_14844567f;
        }
        iVar2 = *(int *)(param_1 + 0x38);
      }
      else if (*(int *)(param_2 + 1) + iVar1 == 1) goto LAB_14844567f;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x30;
    } while (lVar5 < iVar2);
  }
  return 0;
}



// FUNCTION 148445692 FUN_148445692 body=76 status=ok
// SIG undefined FUN_148445692(void)

void FUN_148445692(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x2c0))(plVar3,param_2);
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar4);
  }
  return;
}



// FUNCTION 1484456de FUN_1484456de body=71 status=ok
// SIG undefined FUN_1484456de(void)

void FUN_1484456de(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2);
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar4);
  }
  return;
}



// FUNCTION 148445726 FUN_148445726 body=81 status=ok
// SIG undefined FUN_148445726(void)

void FUN_148445726(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar4);
  }
  return;
}



// FUNCTION 1484457ac FUN_1484457ac body=98 status=ok
// SIG undefined FUN_1484457ac(void)

void FUN_1484457ac(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x20);
  local_18 = *param_3;
  *param_3 = 0;
  (**(code **)(*plVar1 + 0x28))();
  param_3 = (longlong *)*param_3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x40))(param_3,1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148445810 FUN_148445810 body=1170 status=ok
// SIG undefined FUN_148445810(void)

void FUN_148445810(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_14843ca4a(DAT_14c951640);
  (**(code **)(*param_1 + 0x2b0))(param_1,&DAT_14cb4b168,uVar3);
  uVar3 = FUN_14843cafa(DAT_14c951640);
  (**(code **)(*param_1 + 0x2b0))(param_1,&DAT_14cb4b788,uVar3);
  uVar3 = FUN_14843cbaa(DAT_14c951640);
  (**(code **)(*param_1 + 0x2b0))(param_1,&DAT_14cb4b798,uVar3);
  lVar4 = FUN_14843cc5a(DAT_14c951640);
  iVar9 = DAT_14cb4b170 + -1;
  if (DAT_14cb4b170 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x28,DAT_14cb4b168,iVar9);
  iVar9 = DAT_14cb4b790 + -1;
  if (DAT_14cb4b790 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x38,DAT_14cb4b788,iVar9);
  iVar9 = DAT_14cb4b7a0 + -1;
  if (DAT_14cb4b7a0 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x48,DAT_14cb4b798,iVar9);
  (**(code **)(*param_1 + 0x2b0))(param_1,&DAT_14cb4b7a8,lVar4);
  lVar4 = param_1[4];
  if (lVar4 == 0) {
LAB_148445943:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14594bbf4();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_148445943;
  }
  lVar4 = FUN_148413bcc(*(undefined8 *)(lVar4 + 0x78));
  if (lVar4 == 0) {
    lVar4 = FUN_14843cd0a(DAT_14c951640);
    lVar5 = param_1[4];
    if (lVar5 == 0) {
LAB_14844598e:
      lVar5 = 0;
    }
    else {
      lVar6 = FUN_14594bbf4();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) goto LAB_14844598e;
    }
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x78);
      local_38 = lVar4;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(lVar4);
      }
      FUN_140bddff2(lVar5 + 0x28,&local_38);
    }
  }
  plVar7 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aeb6ab0;
  plVar7[2] = (longlong)&PTR_LAB_14aeb6ac8;
  *(undefined4 *)(plVar7 + 3) = 0x1fffe;
  plVar7[4] = lVar4;
  if (plVar7 == (longlong *)0x0) {
    param_1[0x16] = 0x10;
    plVar8 = (longlong *)param_1[0x17];
    if (plVar8 == (longlong *)0x0) goto LAB_148445ac6;
    param_1[0x17] = 0;
LAB_148445a39:
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
    if (plVar7 == (longlong *)0x0) goto LAB_148445ac6;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    param_1[0x16] = (longlong)(plVar7 + 2);
    plVar8 = (longlong *)param_1[0x17];
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
      param_1[0x17] = (longlong)plVar7;
      if (plVar8 != (longlong *)0x0) goto LAB_148445a39;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_148445ac6:
  lVar4 = FUN_14843cc5a(DAT_14c951640);
  iVar9 = DAT_14cb4b170 + -1;
  if (DAT_14cb4b170 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x28,DAT_14cb4b168,iVar9);
  iVar9 = DAT_14cb4b790 + -1;
  if (DAT_14cb4b790 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x38,DAT_14cb4b788,iVar9);
  iVar9 = DAT_14cb4b7a0 + -1;
  if (DAT_14cb4b7a0 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x48,DAT_14cb4b798,iVar9);
  lVar5 = param_1[0x16];
  lVar6 = param_1[0x17];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(lVar4 + 0x60);
  *(longlong *)(lVar4 + 0x58) = lVar5;
  *(longlong *)(lVar4 + 0x60) = lVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  (**(code **)(*param_1 + 0x2b0))(param_1,&DAT_14cb4b7c8,lVar4);
  lVar4 = FUN_14843cdba(DAT_14c951640);
  iVar9 = DAT_14cb4b170 + -1;
  if (DAT_14cb4b170 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x28,DAT_14cb4b168,iVar9);
  iVar9 = DAT_14cb4b790 + -1;
  if (DAT_14cb4b790 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x38,DAT_14cb4b788,iVar9);
  iVar9 = DAT_14cb4b7a0 + -1;
  if (DAT_14cb4b7a0 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(lVar4 + 0x48,DAT_14cb4b798,iVar9);
  lVar5 = param_1[0x16];
  lVar6 = param_1[0x17];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(lVar4 + 0x60);
  *(longlong *)(lVar4 + 0x58) = lVar5;
  *(longlong *)(lVar4 + 0x60) = lVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  (**(code **)(*param_1 + 0x2b0))(param_1,&DAT_14cb4b7d8,lVar4);
  uVar3 = FUN_148445ca3(DAT_14c951640);
  (**(code **)(*param_1 + 0x2b0))(param_1,&DAT_14cb4b7b8,uVar3);
  *(undefined1 *)(param_1 + 0x15) = 1;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148445ca3 FUN_148445ca3 body=175 status=ok
// SIG undefined FUN_148445ca3(void)

undefined8 FUN_148445ca3(undefined8 param_1)

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
  local_b8 = FUN_145b74022();
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



// FUNCTION 148445d54 FUN_148445d54 body=75 status=ok
// SIG undefined FUN_148445d54(void)

longlong FUN_148445d54(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2c0))(param_1,&DAT_14cb4b7a8,param_3,param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_14107a2f2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148445da0 FUN_148445da0 body=93 status=ok
// SIG undefined FUN_148445da0(void)

longlong FUN_148445da0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1[0x16] + 8) = param_2;
  lVar1 = (**(code **)(*param_1 + 0x2c0))(param_1,&DAT_14cb4b7c8,param_4,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_14107a2f2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148445dfe FUN_148445dfe body=93 status=ok
// SIG undefined FUN_148445dfe(void)

longlong FUN_148445dfe(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1[0x16] + 8) = param_2;
  lVar1 = (**(code **)(*param_1 + 0x2c0))(param_1,&DAT_14cb4b7d8,param_4,param_3);
  if (lVar1 != 0) {
    lVar2 = FUN_14107a2f2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148445e6c FUN_148445e6c body=66 status=ok
// SIG undefined FUN_148445e6c(void)

void FUN_148445e6c(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2d0))();
  if (-1 < *(int *)(param_1 + 0x74)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_140c6998c(param_1 + 0x68,0);
  return;
}



// FUNCTION 148445eae FUN_148445eae body=120 status=ok
// SIG undefined FUN_148445eae(void)

void FUN_148445eae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x60);
  FUN_1400b22c2(local_38,&DAT_149e02088);
  (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,param_3,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148445f40 FUN_148445f40 body=118 status=ok
// SIG undefined FUN_148445f40(void)

void FUN_148445f40(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar1 + 1U) {
    FUN_140845902((longlong *)(param_1 + 0x68),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  FUN_1447f69b6(param_1 + 0x30);
  return;
}



// FUNCTION 148445fb6 FUN_148445fb6 body=271 status=ok
// SIG undefined FUN_148445fb6(void)

void FUN_148445fb6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar1 + 1U) {
    FUN_140845902((longlong *)(param_1 + 0x68),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar2 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14aedba20;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_14aedb9b0;
  puVar2[3] = param_1;
  FUN_14844f9a0(param_2 + 0x90,local_40,&local_38);
  FUN_1449db362(&local_38);
  FUN_1447f69b6(param_1 + 0x30);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484460c6 FUN_1484460c6 body=148 status=ok
// SIG undefined FUN_1484460c6(void)

bool FUN_1484460c6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_28 = &local_30;
  iVar1 = FUN_1432619ce(param_1 + 0x68);
  if (iVar1 != 0) {
    FUN_1448a8284(param_2 + 0x90);
    FUN_1447f69b6(param_1 + 0x30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14844615c FUN_14844615c body=402 status=ok
// SIG undefined FUN_14844615c(void)

undefined8 FUN_14844615c(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [39];
  char local_61;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    uVar7 = 0;
    lVar6 = 0;
    local_61 = param_4;
    bVar4 = DAT_14c950c29;
    do {
      if ((param_2 != 0) && ((bVar4 & 1) != 0)) {
        FUN_14689c22e(param_2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar7) == param_2) {
        if ((int)(~uVar7 >> 3) != 0) {
          FUN_1448a8284(param_2 + 0x90);
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,2,0x10);
          puVar3 = local_58;
          local_50 = 2;
          *local_58 = &PTR_LAB_14aedba20;
          uVar5 = FUN_144a3f946();
          puVar3[2] = uVar5;
          *puVar3 = &PTR_FUN_14aedba90;
          puVar3[3] = param_1;
          FUN_14844f9a0(param_3 + 0x90,local_60,&local_58);
          FUN_1449db362(&local_58);
          lVar2 = *(longlong *)(param_1 + 0x68);
          if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
            FUN_14689c22e(param_3);
          }
          *(longlong *)(lVar2 + (lVar6 >> 0x20) * 8) = param_3;
          if (local_61 != '\0') {
            *(undefined1 *)(param_3 + 0x88) = 1;
          }
          FUN_1447f69b6(param_1 + 0x30);
          uVar5 = 1;
          goto LAB_148446202;
        }
        break;
      }
      lVar6 = lVar6 + 0x100000000;
      uVar7 = uVar7 + 8;
    } while ((longlong)iVar1 * 8 != uVar7);
  }
  uVar5 = 0;
LAB_148446202:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1484462f0 FUN_1484462f0 body=171 status=ok
// SIG undefined FUN_1484462f0(void)

ulonglong FUN_1484462f0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    uVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      if ((param_2 != 0) && ((bVar3 & 1) != 0)) {
        FUN_14689c22e(param_2);
        bVar3 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar4) == param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          if (*(char *)(param_2 + 0x88) != param_3) {
            *(char *)(param_2 + 0x88) = param_3;
            FUN_1447f69b6(param_1 + 0x30);
          }
          goto LAB_14844635f;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while ((longlong)iVar1 * 8 != uVar4);
  }
  uVar4 = 0;
LAB_14844635f:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1484463a6 FUN_1484463a6 body=233 status=ok
// SIG undefined FUN_1484463a6(void)

longlong * FUN_1484463a6(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 == '\0') {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x70);
    _Src = *(void **)(param_1 + 0x68);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_14010590e(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    iVar1 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar6);
        if (lVar4 == 0) {
LAB_148446407:
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1447f76d2(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
        }
        else {
          lVar5 = FUN_140e62b5a();
          if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
             (*(char *)(lVar4 + 0x88) == '\x01')) goto LAB_148446407;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return param_2;
}



// FUNCTION 1484464a0 FUN_1484464a0 body=16 status=ok
// SIG undefined FUN_1484464a0(void)

void FUN_1484464a0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484464ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))();
  return;
}



// FUNCTION 1484464b0 FUN_1484464b0 body=370 status=ok
// SIG undefined FUN_1484464b0(void)

void FUN_1484464b0(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  void *_Dst;
  longlong lVar1;
  void *pvVar2;
  void *_Src;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong *plStack_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_41 = 0;
  FUN_148446624(param_1,&local_60);
  lVar1 = local_60;
  if ((local_60 != 0) && (((param_4 ^ 1) & local_41) == 0)) {
    local_60 = *(longlong *)(param_1 + 0x10);
    if (local_60 == 0) {
      plStack_58 = (longlong *)0x0;
    }
    else {
      plStack_58 = *(longlong **)(local_60 + 0x50);
    }
    local_50 = 0xffffffff;
    uStack_4c = 0x101;
    uStack_4a = 0;
    FUN_144a2daf0(&local_60);
    local_68 = CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT24(uStack_4c,local_50)));
    local_78 = local_60;
    plStack_70 = plStack_58;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    local_88 = 0xffffffff;
    local_84 = 0x101;
    local_82 = 0;
    FUN_144a2daf0(&local_98);
    if (plStack_70 != plStack_90) {
      do {
        plVar3 = plStack_70;
        _Dst = (void *)(param_1 + *(int *)((longlong)plStack_70 + 0x44));
        pvVar2 = (void *)(*(int *)((longlong)plStack_70 + 0x44) + lVar1);
        _Src = pvVar2;
        if (param_4 != 0) {
          _Src = _Dst;
          _Dst = pvVar2;
        }
        if (lVar1 != param_1) {
          if ((*(byte *)((longlong)plStack_70 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plStack_70 + 0x100))(plStack_70,_Dst,_Src,1);
            plVar3 = plStack_70;
          }
          else {
            memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plStack_70 + 0x34));
          }
        }
        plStack_70 = (longlong *)plVar3[3];
        FUN_144a2daf0(&local_78);
      } while (plStack_70 != plStack_90);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148446624 FUN_148446624 body=450 status=ok
// SIG undefined FUN_148446624(void)

longlong * FUN_148446624(longlong param_1,longlong *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  ulonglong uVar10;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  longlong lVar9;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_4 = 0;
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar9 = *(longlong *)(lVar5 + 0x110);
  if (lVar9 == 0) {
    FUN_140aa6c08(lVar5);
    lVar9 = *(longlong *)(lVar5 + 0x110);
  }
  plVar8 = (longlong *)(lVar9 + 0x38);
  iVar3 = *(int *)(param_3 + 1);
  if (iVar3 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar7);
  iVar3 = FUN_14844fa96(plVar8,uVar2,param_3);
  if (iVar3 == -1) {
LAB_148446700:
    lVar5 = FUN_1484467e7(DAT_14c951640,*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar5;
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar5);
    }
    local_50 = param_3;
    local_48 = param_2;
    FUN_14844fb22(plVar8,local_3c);
  }
  else {
    if ((*plVar8 + (longlong)iVar3 * 0x20 == 0) ||
       (plVar4 = (longlong *)((longlong)iVar3 * 0x20 + *plVar8 + 0x10), plVar4 == (longlong *)0x0))
    goto LAB_148446700;
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      *param_2 = lVar5;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e();
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
      goto LAB_148446745;
    }
    lVar5 = FUN_1484467e7(DAT_14c951640,*(undefined8 *)(param_1 + 0x10));
    *param_2 = lVar5;
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar5);
    }
    iVar3 = *(int *)(param_3 + 1);
    if (iVar3 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    uVar10 = 0;
    uVar6 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar6 = uVar10;
    }
    uVar2 = FUN_144a49b4a(uVar6,puVar7);
    iVar3 = FUN_14844fa96(plVar8,uVar2,param_3);
    if (iVar3 != -1) {
      uVar10 = (longlong)iVar3 * 0x20 + *plVar8;
    }
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar5);
    }
    *(longlong *)(uVar10 + 0x10) = lVar5;
  }
  *param_4 = 1;
LAB_148446745:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1484467e7 FUN_1484467e7 body=185 status=ok
// SIG undefined FUN_1484467e7(void)

undefined8 FUN_1484467e7(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484468a4 FUN_1484468a4 body=77 status=ok
// SIG undefined FUN_1484468a4(void)

longlong FUN_1484468a4(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x10];
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    param_1[0x10] = (longlong)puVar1;
    (**(code **)(*param_1 + 0x358))(param_1,puVar1);
    lVar2 = param_1[0x10];
  }
  return lVar2;
}



// FUNCTION 1484468f2 FUN_1484468f2 body=31 status=ok
// SIG undefined FUN_1484468f2(void)

void FUN_1484468f2(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x348))();
  FUN_1484503ce(uVar1,param_2);
  return;
}



// FUNCTION 14844691e FUN_14844691e body=307 status=ok
// SIG undefined FUN_14844691e(void)

void FUN_14844691e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 1) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"CannotCreateEmptyMesh";
    local_40 = 0x15;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UInteractiveTool";
    local_40 = 0x10;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,
                  L"WARNING: Tool doesn\'t allow creation of an empty mesh.");
    (**(code **)(*plVar1 + 0x340))(plVar1,&local_48,3);
  }
  else {
    if ((param_2 != 0) || ((char)param_1[0xf] != '\x01')) goto LAB_148446a27;
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_144a5dc74(&local_48);
    (**(code **)(*plVar1 + 0x340))(plVar1,&local_48,3);
  }
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
LAB_148446a27:
  *(bool *)(param_1 + 0xf) = param_2 != 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148446a52 FUN_148446a52 body=221 status=ok
// SIG undefined FUN_148446a52(void)

void FUN_148446a52(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((longlong)(int)param_1[0xe] != 0) {
    plVar4 = (longlong *)param_1[0xd];
    plVar1 = plVar4 + (int)param_1[0xe];
    do {
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        lVar3 = FUN_140e62b5a();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          lVar3 = *(longlong *)(lVar5 + 0x28);
          iVar2 = *(int *)(lVar5 + 0x30);
          if (*(char *)(lVar5 + 0x88) == '\x01') {
            if (iVar2 != 0) {
              lVar5 = 0;
              do {
                (**(code **)(**(longlong **)(lVar3 + lVar5) + 8))();
                lVar5 = lVar5 + 8;
              } while ((longlong)iVar2 * 8 != lVar5);
            }
          }
          else if (iVar2 != 0) {
            lVar5 = 0;
            do {
              (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x10))();
              lVar5 = lVar5 + 8;
            } while ((longlong)iVar2 * 8 != lVar5);
          }
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000148446b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x340))(param_1,param_2);
  return;
}



// FUNCTION 148446b30 FUN_148446b30 body=57 status=ok
// SIG undefined FUN_148446b30(void)

longlong FUN_148446b30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14594bb10();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148446b6a FUN_148446b6a body=45 status=ok
// SIG undefined FUN_148446b6a(void)

longlong FUN_148446b6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446b98 FUN_148446b98 body=48 status=ok
// SIG undefined FUN_148446b98(void)

longlong FUN_148446b98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446bc8 FUN_148446bc8 body=48 status=ok
// SIG undefined FUN_148446bc8(void)

longlong FUN_148446bc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446bf8 FUN_148446bf8 body=48 status=ok
// SIG undefined FUN_148446bf8(void)

longlong FUN_148446bf8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446c28 FUN_148446c28 body=45 status=ok
// SIG undefined FUN_148446c28(void)

longlong FUN_148446c28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446c56 FUN_148446c56 body=48 status=ok
// SIG undefined FUN_148446c56(void)

longlong FUN_148446c56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446c86 FUN_148446c86 body=48 status=ok
// SIG undefined FUN_148446c86(void)

longlong FUN_148446c86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446cb6 FUN_148446cb6 body=48 status=ok
// SIG undefined FUN_148446cb6(void)

longlong FUN_148446cb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446ce6 FUN_148446ce6 body=45 status=ok
// SIG undefined FUN_148446ce6(void)

longlong FUN_148446ce6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446d14 FUN_148446d14 body=48 status=ok
// SIG undefined FUN_148446d14(void)

longlong FUN_148446d14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446d44 FUN_148446d44 body=48 status=ok
// SIG undefined FUN_148446d44(void)

longlong FUN_148446d44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446d74 FUN_148446d74 body=48 status=ok
// SIG undefined FUN_148446d74(void)

longlong FUN_148446d74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446da4 FUN_148446da4 body=41 status=ok
// SIG undefined FUN_148446da4(void)

void FUN_148446da4(void)

{
  FUN_140033559("Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos/GizmoElementBase.h",0x75,
                L"Pure virtual not implemented (%s)",L"UGizmoElementBase::Render");
  return;
}



// FUNCTION 148446dce FUN_148446dce body=101 status=ok
// SIG undefined FUN_148446dce(void)

undefined1 * FUN_148446dce(undefined8 param_1,undefined1 *param_2)

{
  FUN_140033559("Runtime\\InteractiveToolsFramework\\Public\\BaseGizmos/GizmoElementBase.h",0x78,
                L"Pure virtual not implemented (%s)",L"UGizmoElementBase::LineTrace");
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return param_2;
}



// FUNCTION 148446e54 FUN_148446e54 body=45 status=ok
// SIG undefined FUN_148446e54(void)

longlong FUN_148446e54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446e82 FUN_148446e82 body=48 status=ok
// SIG undefined FUN_148446e82(void)

longlong FUN_148446e82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446eb2 FUN_148446eb2 body=48 status=ok
// SIG undefined FUN_148446eb2(void)

longlong FUN_148446eb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446ee2 FUN_148446ee2 body=48 status=ok
// SIG undefined FUN_148446ee2(void)

longlong FUN_148446ee2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446f12 FUN_148446f12 body=45 status=ok
// SIG undefined FUN_148446f12(void)

longlong FUN_148446f12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446f40 FUN_148446f40 body=48 status=ok
// SIG undefined FUN_148446f40(void)

longlong FUN_148446f40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446f70 FUN_148446f70 body=48 status=ok
// SIG undefined FUN_148446f70(void)

longlong FUN_148446f70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446fa0 FUN_148446fa0 body=48 status=ok
// SIG undefined FUN_148446fa0(void)

longlong FUN_148446fa0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148446fd8 FUN_148446fd8 body=210 status=ok
// SIG undefined FUN_148446fd8(void)

double * FUN_148446fd8(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
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
  double dVar18;
  double dVar2;
  double dVar4;
  double dVar6;
  
  dVar7 = *(double *)(param_1 + 0x110);
  dVar8 = *(double *)(param_1 + 0x118);
  dVar9 = *(double *)(param_1 + 0x120);
  dVar10 = *(double *)(param_1 + 0x130);
  dVar11 = *(double *)(param_1 + 0x138);
  dVar12 = *(double *)(param_1 + 0x140);
  dVar13 = *(double *)(param_1 + 0x150);
  dVar14 = *(double *)(param_1 + 0x158);
  dVar15 = *(double *)(param_1 + 0x160);
  dVar16 = *(double *)(param_1 + 0x170);
  dVar17 = *(double *)(param_1 + 0x178);
  dVar18 = *(double *)(param_1 + 0x180);
  dVar1 = *param_3;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar6 = param_3[2];
  *param_2 = *(double *)(param_1 + 0x148) * dVar5 +
             *(double *)(param_1 + 0x128) * dVar3 + *(double *)(param_1 + 0x108) * dVar1 +
             *(double *)(param_1 + 0x168);
  param_2[1] = dVar13 * dVar6 + dVar10 * dVar4 + dVar7 * dVar2 + dVar16;
  param_2[2] = dVar14 * dVar5 + dVar11 * dVar3 + dVar8 * dVar1 + dVar17;
  param_2[3] = dVar15 * dVar6 + dVar12 * dVar4 + dVar9 * dVar2 + dVar18;
  return param_2;
}



// FUNCTION 148447138 FUN_148447138 body=45 status=ok
// SIG undefined FUN_148447138(void)

longlong FUN_148447138(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e146de(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14844716c FUN_14844716c body=45 status=ok
// SIG undefined FUN_14844716c(void)

longlong FUN_14844716c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e20410(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484471b8 FUN_1484471b8 body=45 status=ok
// SIG undefined FUN_1484471b8(void)

longlong FUN_1484471b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14619c724(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484471e6 FUN_1484471e6 body=45 status=ok
// SIG undefined FUN_1484471e6(void)

longlong FUN_1484471e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14589e6fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447214 FUN_148447214 body=45 status=ok
// SIG undefined FUN_148447214(void)

longlong FUN_148447214(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14589e6fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14844724c FUN_14844724c body=45 status=ok
// SIG undefined FUN_14844724c(void)

longlong FUN_14844724c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14589e6fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484472a6 FUN_1484472a6 body=45 status=ok
// SIG undefined FUN_1484472a6(void)

longlong FUN_1484472a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c02414(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484472d4 FUN_1484472d4 body=45 status=ok
// SIG undefined FUN_1484472d4(void)

longlong FUN_1484472d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145c02414(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447302 FUN_148447302 body=45 status=ok
// SIG undefined FUN_148447302(void)

longlong FUN_148447302(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145c02414(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447330 FUN_148447330 body=45 status=ok
// SIG undefined FUN_148447330(void)

longlong FUN_148447330(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ddd9da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14844735e FUN_14844735e body=45 status=ok
// SIG undefined FUN_14844735e(void)

longlong FUN_14844735e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d0d412(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14844738c FUN_14844738c body=45 status=ok
// SIG undefined FUN_14844738c(void)

longlong FUN_14844738c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145d0d412(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484473c6 FUN_1484473c6 body=45 status=ok
// SIG undefined FUN_1484473c6(void)

longlong FUN_1484473c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484473fe FUN_1484473fe body=45 status=ok
// SIG undefined FUN_1484473fe(void)

longlong FUN_1484473fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d29946(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447432 FUN_148447432 body=59 status=ok
// SIG undefined FUN_148447432(void)

void FUN_148447432(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x28);
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000148447463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1);
    return;
  }
  return;
}



// FUNCTION 14844746e FUN_14844746e body=59 status=ok
// SIG undefined FUN_14844746e(void)

void FUN_14844746e(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x68);
    if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x58);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014844749f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1);
    return;
  }
  return;
}



// FUNCTION 1484474ba FUN_1484474ba body=70 status=ok
// SIG undefined FUN_1484474ba(void)

void FUN_1484474ba(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x10);
  }
  cVar2 = FUN_144729dda(param_1 + 8);
  if (cVar2 != '\0') {
    FUN_14479d2ce(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 148447518 FUN_148447518 body=45 status=ok
// SIG undefined FUN_148447518(void)

longlong FUN_148447518(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c58946(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14844754c FUN_14844754c body=184 status=ok
// SIG undefined FUN_14844754c(void)

void FUN_14844754c(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  cVar3 = FUN_144729dda(param_1 + 8);
  if (cVar3 != '\0') {
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x10);
    }
    lVar4 = FUN_14479d2ce(param_1 + 8);
    puVar6 = (undefined8 *)(lVar4 + 0x240);
    puVar7 = (undefined8 *)(param_1 + 0x38);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x100);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8);
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)(lVar4 + lVar5) + 8))();
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    iVar1 = *(int *)(param_1 + 0x110);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x108);
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)(lVar4 + lVar5) + 8))();
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 148447604 FUN_148447604 body=675 status=ok
// SIG undefined FUN_148447604(void)

void FUN_148447604(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68 [2];
  longlong *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 8;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(lVar1);
    puVar8 = (undefined8 *)(lVar4 + 0x240);
    puVar9 = (undefined8 *)(param_1 + 0x98);
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (plVar7 = *(longlong **)(param_1 + 0x28), plVar7 != (longlong *)0x0)) {
      local_50 = (undefined8 *)FUN_14001cc68(0x110,0x10);
      *local_50 = &PTR_LAB_14aed3880;
      local_50[0x1a] = 0;
      local_50[0x1c] = 0;
      puVar8 = (undefined8 *)(param_1 + 0x38);
      puVar9 = local_50 + 2;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar8 = (undefined8 *)(param_1 + 0x98);
      puVar9 = local_50 + 0xe;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      uVar5 = FUN_14479d2ce(lVar1);
      (**(code **)(*plVar7 + 0x20))(plVar7,uVar5,&local_50,param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x100);
      if ((longlong)iVar2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xf8);
        lVar4 = 0;
        do {
          (**(code **)(**(longlong **)(lVar1 + lVar4) + 0x10))
                    (*(longlong **)(lVar1 + lVar4),&local_58);
          if (local_58 != (longlong *)0x0) {
            uVar5 = (**(code **)(**(longlong **)(lVar1 + lVar4) + 0x18))();
            if (*(longlong *)(param_1 + 0x20) == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = *(longlong **)(param_1 + 0x28);
            }
            (**(code **)(**(longlong **)(lVar1 + lVar4) + 0x20))
                      (*(longlong **)(lVar1 + lVar4),local_68);
            local_70 = local_58;
            local_58 = (longlong *)0x0;
            (**(code **)(*plVar7 + 0x20))(plVar7,uVar5,&local_70,local_68);
            if (local_68[0] != (longlong *)0x0) {
              (**(code **)(*local_68[0] + 0x10))();
            }
            if (local_58 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0x40))(local_58,1);
            }
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar2 * 8 != lVar4);
      }
      iVar2 = *(int *)(param_1 + 0x110);
      if ((longlong)iVar2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x108);
        lVar4 = 0;
        do {
          plVar7 = *(longlong **)(lVar1 + lVar4);
          (**(code **)(*plVar7 + 0x10))(plVar7,&local_58);
          if (local_58 != (longlong *)0x0) {
            uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
            if (*(longlong *)(param_1 + 0x20) == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = *(longlong **)(param_1 + 0x28);
            }
            (**(code **)(*plVar7 + 0x20))(plVar7,local_68);
            local_78 = local_58;
            local_58 = (longlong *)0x0;
            (**(code **)(*plVar10 + 0x20))(plVar10,uVar5,&local_78,local_68);
            if (local_68[0] != (longlong *)0x0) {
              (**(code **)(*local_68[0] + 0x10))();
            }
            if (local_58 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0x40))(local_58,1);
            }
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar2 * 8 != lVar4);
      }
      if (*(longlong *)(param_1 + 0x20) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x28);
      }
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484478a8 FUN_1484478a8 body=45 status=ok
// SIG undefined FUN_1484478a8(void)

longlong FUN_1484478a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145933e42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484478dc FUN_1484478dc body=26 status=ok
// SIG undefined FUN_1484478dc(void)

undefined8 * FUN_1484478dc(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 1484478f8 FUN_1484478f8 body=45 status=ok
// SIG undefined FUN_1484478f8(void)

longlong FUN_1484478f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145933e42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447926 FUN_148447926 body=45 status=ok
// SIG undefined FUN_148447926(void)

longlong FUN_148447926(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145933dbc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447954 FUN_148447954 body=45 status=ok
// SIG undefined FUN_148447954(void)

longlong FUN_148447954(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c791c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447982 FUN_148447982 body=45 status=ok
// SIG undefined FUN_148447982(void)

longlong FUN_148447982(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145933e42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484479bc FUN_1484479bc body=52 status=ok
// SIG undefined FUN_1484479bc(void)

longlong * FUN_1484479bc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x90);
  return param_2;
}



// FUNCTION 1484479f0 FUN_1484479f0 body=77 status=ok
// SIG undefined FUN_1484479f0(void)

void FUN_1484479f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x88) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x90) = (int)param_2[1];
  return;
}



// FUNCTION 148447a3e FUN_148447a3e body=48 status=ok
// SIG undefined FUN_148447a3e(void)

void FUN_148447a3e(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 148447ad2 FUN_148447ad2 body=45 status=ok
// SIG undefined FUN_148447ad2(void)

longlong FUN_148447ad2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bc966e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447b06 FUN_148447b06 body=48 status=ok
// SIG undefined FUN_148447b06(void)

longlong FUN_148447b06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145bc966e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447b3e FUN_148447b3e body=48 status=ok
// SIG undefined FUN_148447b3e(void)

longlong FUN_148447b3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_145bc966e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447b6e FUN_148447b6e body=48 status=ok
// SIG undefined FUN_148447b6e(void)

longlong FUN_148447b6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145bc966e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447ba8 FUN_148447ba8 body=45 status=ok
// SIG undefined FUN_148447ba8(void)

longlong FUN_148447ba8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1411412f4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447bdc FUN_148447bdc body=48 status=ok
// SIG undefined FUN_148447bdc(void)

longlong FUN_148447bdc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1411412f4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148447c0e FUN_148447c0e body=45 status=ok
// SIG undefined FUN_148447c0e(void)

longlong FUN_148447c0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1411412f4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


