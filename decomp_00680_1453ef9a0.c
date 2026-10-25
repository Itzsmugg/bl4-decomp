// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1453ef9a0 FUN_1453ef9a0 body=324 status=ok
// SIG undefined FUN_1453ef9a0(void)

undefined1
FUN_1453ef9a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined4 param_5
             ,int param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_58 [8];
  longlong local_50 [2];
  undefined4 *local_40;
  undefined **local_38;
  longlong local_30;
  char local_28;
  
  local_50[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    local_40 = local_res8;
    puVar3 = (undefined8 *)FUN_1453ef160(local_50,param_1);
    plVar1 = (longlong *)*puVar3;
    local_38 = &PTR_FUN_14ba6d600;
    local_28 = '\0';
    local_30 = param_4;
    uVar4 = FUN_14516a830(local_res8,param_3);
    uVar5 = FUN_144d7a4e0(local_58,param_2);
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar5,uVar4,&local_38,param_5,param_6 != 0);
    local_38 = &PTR_FUN_14ba6d600;
    if (local_30 != 0) {
      if (local_28 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_30,0x18);
      }
      local_30 = 0;
      local_28 = '\0';
    }
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453efaf0 FUN_1453efaf0 body=495 status=ok
// SIG undefined FUN_1453efaf0(void)

undefined8
FUN_1453efaf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
             int param_6,longlong param_7,uint *param_8)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 *local_88;
  undefined **local_80;
  longlong local_78;
  char local_70;
  undefined1 *local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     ((param_4 == 0 || (param_8 == (uint *)0x0)))) {
    uVar3 = 0;
  }
  else {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*param_8 != 0);
    local_88 = local_58;
    local_40 = local_50;
    puVar2 = (undefined8 *)FUN_1453ef160(&local_60,param_1);
    plVar1 = (longlong *)*puVar2;
    local_80 = &PTR_FUN_14ba6d600;
    local_78 = 0;
    if (param_7 != 0) {
      local_78 = param_7;
    }
    local_70 = '\0';
    uVar3 = FUN_14516a920(local_58,param_4);
    uVar4 = FUN_14516a830(local_50,param_3);
    uVar5 = FUN_144d7a4e0(local_48,param_2);
    (**(code **)(*plVar1 + 0x10))
              (plVar1,&local_68,uVar5,uVar4,uVar3,param_5 != 0,param_6 != 0,&local_80,local_res8);
    local_80 = &PTR_FUN_14ba6d600;
    if (local_78 != 0) {
      if (local_70 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_78,0x18);
      }
      local_78 = 0;
      local_70 = '\0';
    }
    if (local_60 != 0) {
      (**(code **)(*(longlong *)(local_60 + 8 + (longlong)*(int *)(*(longlong *)(local_60 + 8) + 4))
                  + 8))();
    }
    *param_8 = (uint)((char)local_res8[0] != '\0');
    local_88 = local_68;
    if (local_68 != (undefined1 *)0x0) {
      (*(code *)**(undefined8 **)
                  (local_68 + (longlong)*(int *)(*(longlong *)(local_68 + 8) + 4) + 8))();
    }
    uVar3 = FUN_145177b30(&local_88);
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)(local_68 + (longlong)*(int *)(*(longlong *)(local_68 + 8) + 4) + 8)
                  + 8))();
    }
  }
  return uVar3;
}



// FUNCTION 1453efce0 FUN_1453efce0 body=571 status=ok
// SIG undefined FUN_1453efce0(void)

undefined1
FUN_1453efce0(longlong param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
             undefined4 param_6,longlong param_7,longlong param_8,longlong param_9)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined **local_a8;
  longlong local_a0;
  char local_98;
  undefined **local_90;
  longlong local_88;
  char local_80;
  undefined **local_78;
  longlong local_70;
  char local_68;
  undefined **local_60;
  longlong local_58;
  char local_50;
  undefined1 local_48 [8];
  longlong local_40 [2];
  undefined4 *local_30;
  
  local_40[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || ((param_5 == 0 || (param_9 == 0))))
  {
    uVar2 = 0;
  }
  else {
    local_30 = local_res8;
    puVar3 = (undefined8 *)FUN_1453ef160(local_40,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e51f0(local_res8,param_9);
    local_90 = &PTR_FUN_14ba6d600;
    local_88 = 0;
    if (param_8 != 0) {
      local_88 = param_8;
    }
    local_80 = '\0';
    local_a8 = &PTR_FUN_14ba6d600;
    local_a0 = 0;
    if (param_7 != 0) {
      local_a0 = param_7;
    }
    local_98 = '\0';
    local_60 = &PTR_FUN_14ba6d600;
    local_58 = param_5;
    local_50 = '\0';
    local_78 = &PTR_FUN_14ba6d600;
    local_68 = '\0';
    local_70 = param_3;
    uVar5 = FUN_144d7a4e0(local_48,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x18))
                      (plVar1,uVar5,&local_78,param_4 != 0,&local_60,param_6,&local_a8,&local_90,
                       uVar4);
    local_78 = &PTR_FUN_14ba6d600;
    if (local_70 != 0) {
      if (local_68 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_70,0x18);
      }
      local_70 = 0;
      local_68 = '\0';
    }
    local_60 = &PTR_FUN_14ba6d600;
    if (local_58 != 0) {
      if (local_50 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_58,0x18);
      }
      local_58 = 0;
      local_50 = '\0';
    }
    local_a8 = &PTR_FUN_14ba6d600;
    if (local_a0 != 0) {
      if (local_98 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_a0,0x18);
      }
      local_a0 = 0;
      local_98 = '\0';
    }
    local_90 = &PTR_FUN_14ba6d600;
    if (local_88 != 0) {
      if (local_80 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_88,0x18);
      }
      local_88 = 0;
      local_80 = '\0';
    }
    if (local_40[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453eff20 FUN_1453eff20 body=321 status=ok
// SIG undefined FUN_1453eff20(void)

undefined1
FUN_1453eff20(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5
             )

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_58 [8];
  longlong local_50 [2];
  undefined4 *local_40;
  undefined **local_38;
  longlong local_30;
  char local_28;
  
  local_50[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_40 = local_res8;
    puVar3 = (undefined8 *)FUN_1453ef160(local_50,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453ef4c0(local_res8,param_5);
    local_38 = &PTR_FUN_14ba6d600;
    local_28 = '\0';
    local_30 = param_3;
    uVar5 = FUN_144d7a4e0(local_58,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar5,&local_38,param_4,uVar4);
    local_38 = &PTR_FUN_14ba6d600;
    if (local_30 != 0) {
      if (local_28 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_30,0x18);
      }
      local_30 = 0;
      local_28 = '\0';
    }
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453f0070 FUN_1453f0070 body=369 status=ok
// SIG undefined FUN_1453f0070(void)

undefined1
FUN_1453f0070(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,longlong param_5
             ,longlong param_6)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong local_68 [2];
  undefined4 *local_58;
  undefined1 *local_50;
  undefined **local_48;
  longlong local_40;
  char local_38;
  
  local_68[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) || ((param_5 == 0 || (param_6 == 0))))
  {
    uVar2 = 0;
  }
  else {
    local_58 = local_res8;
    local_50 = local_78;
    puVar3 = (undefined8 *)FUN_1453ef160(local_68,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453ef4c0(local_res8,param_6);
    uVar5 = FUN_1453ef6a0(local_78,param_5);
    local_48 = &PTR_FUN_14ba6d600;
    local_38 = '\0';
    local_40 = param_4;
    uVar6 = FUN_144d7a4e0(local_70,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,uVar6,param_3,&local_48,uVar5,uVar4);
    local_48 = &PTR_FUN_14ba6d600;
    if (local_40 != 0) {
      if (local_38 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_40,0x18);
      }
      local_40 = 0;
      local_38 = '\0';
    }
    if (local_68[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_68[0] + 8 + (longlong)*(int *)(*(longlong *)(local_68[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453f01f0 FUN_1453f01f0 body=513 status=ok
// SIG undefined FUN_1453f01f0(void)

undefined1
FUN_1453f01f0(longlong param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5,
             ulonglong param_6,longlong param_7,longlong param_8)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined **local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  longlong *plStack_38;
  longlong local_30;
  
  local_68 = 0xfffffffffffffffe;
  uVar8 = 0;
  local_res8 = 0;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) ||
     (((param_6 != 0 && (param_7 == 0)) || (param_8 == 0)))) {
    uVar4 = 0;
  }
  else {
    local_40 = (longlong *)0x0;
    plStack_38 = (longlong *)0x0;
    local_30 = 0;
    if (param_6 != 0) {
      do {
        FUN_1453ef790(&local_res8,*(undefined8 *)(param_7 + uVar8 * 8));
        FUN_1453f0510(&local_40,&local_res8);
        lVar2 = CONCAT44(uStackX_c,local_res8);
        if (lVar2 != 0) {
          (**(code **)(*(longlong *)(lVar2 + 8 + (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4)) +
                      8))();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_6);
    }
    local_60 = &local_res8;
    puVar5 = (undefined8 *)FUN_1453ef160(&local_70,param_1);
    plVar1 = (longlong *)*puVar5;
    uVar6 = FUN_1453ef5b0(&local_res8,param_8);
    local_58 = &PTR_FUN_14ba6d600;
    local_48 = '\0';
    local_50 = param_4;
    uVar7 = FUN_144d7a4e0(local_78,param_2);
    uVar4 = (**(code **)(*plVar1 + 0x30))
                      (plVar1,uVar7,param_3 != 0,&local_58,param_5,&local_40,uVar6);
    local_58 = &PTR_FUN_14ba6d600;
    if (local_50 != 0) {
      if (local_48 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_50,0x18);
      }
      local_50 = 0;
      local_48 = '\0';
    }
    if (local_70 != 0) {
      (**(code **)(*(longlong *)(local_70 + 8 + (longlong)*(int *)(*(longlong *)(local_70 + 8) + 4))
                  + 8))();
    }
    plVar3 = plStack_38;
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      for (; plVar1 != plVar3; plVar1 = plVar1 + 1) {
        lVar2 = *plVar1;
        if (lVar2 != 0) {
          (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) +
                      8))();
        }
      }
      FUN_1453f0400(&local_40,local_40,local_30 - (longlong)local_40 >> 3);
    }
  }
  return uVar4;
}



// FUNCTION 1453f0400 FUN_1453f0400 body=109 status=ok
// SIG undefined FUN_1453f0400(void)

void FUN_1453f0400(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 8) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 1453f0480 FUN_1453f0480 body=124 status=ok
// SIG undefined FUN_1453f0480(void)

ulonglong FUN_1453f0480(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 8;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = FUN_14494321d();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 1453f0500 thunk_FUN_1453f0760 body=5 status=ok
// SIG undefined thunk_FUN_1453f0760(void)

void thunk_FUN_1453f0760(void)

{
  FUN_1453f0760();
  return;
}



// FUNCTION 1453f0510 FUN_1453f0510 body=212 status=ok
// SIG undefined FUN_1453f0510(void)

void FUN_1453f0510(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_1[1];
  if ((param_2 < plVar1) && (plVar2 = (longlong *)*param_1, plVar2 <= param_2)) {
    if (plVar1 == (longlong *)param_1[2]) {
      FUN_1453f06d0(param_1,1,param_3,param_4,0xfffffffffffffffe);
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      lVar3 = *(longlong *)(*param_1 + ((longlong)param_2 - (longlong)plVar2 >> 3) * 8);
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8))()
        ;
      }
    }
  }
  else {
    if (plVar1 == (longlong *)param_1[2]) {
      FUN_1453f06d0(param_1,1,param_3,param_4,0xfffffffffffffffe);
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      lVar3 = *param_2;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8))()
        ;
      }
    }
  }
  param_1[1] = param_1[1] + 8;
  return;
}



// FUNCTION 1453f05f0 FUN_1453f05f0 body=217 status=ok
// SIG undefined FUN_1453f05f0(void)

void FUN_1453f05f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  lVar3 = FUN_1453f0480();
  FUN_1453f0ae0(*param_1,param_1[1],lVar3,param_1,0,local_res8,uVar6);
  plVar1 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  lVar5 = (longlong)plVar1 - (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    FUN_1453f0400(param_1,*param_1,param_1[2] - *param_1 >> 3);
  }
  param_1[2] = lVar3 + param_2 * 8;
  param_1[1] = lVar3 + (lVar5 >> 3) * 8;
  *param_1 = lVar3;
  return;
}



// FUNCTION 1453f06d0 FUN_1453f06d0 body=129 status=ok
// SIG undefined FUN_1453f06d0(void)

void FUN_1453f06d0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 3)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 3;
  if (0x1fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = param_2 + lVar2;
  uVar3 = param_1[2] - *param_1 >> 3;
  uVar1 = 0;
  if (uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) {
    uVar1 = (uVar3 >> 1) + uVar3;
  }
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  FUN_1453f05f0(param_1,param_2);
  return;
}



// FUNCTION 1453f0760 FUN_1453f0760 body=138 status=ok
// SIG undefined FUN_1453f0760(void)

void FUN_1453f0760(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    FUN_1453f0400(param_1,*param_1,param_1[2] - *param_1 >> 3,param_4,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f07f0 FUN_1453f07f0 body=48 status=ok
// SIG undefined FUN_1453f07f0(void)

void FUN_1453f07f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453f0820 FUN_1453f0820 body=243 status=ok
// SIG undefined FUN_1453f0820(void)

void FUN_1453f0820(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  undefined **local_30;
  longlong local_28;
  char local_20;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ef160(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    local_30 = &PTR_FUN_14ba6d600;
    local_20 = '\0';
    local_28 = param_3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x38))(plVar1,uVar4,&local_30,lVar2,uVar5);
    local_30 = &PTR_FUN_14ba6d600;
    if (local_28 != 0) {
      if (local_20 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_28,0x18);
      }
      local_28 = 0;
      local_20 = '\0';
    }
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453f0920 FUN_1453f0920 body=136 status=ok
// SIG undefined FUN_1453f0920(void)

void FUN_1453f0920(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ef160(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x40))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453f09b0 FUN_1453f09b0 body=152 status=ok
// SIG undefined FUN_1453f09b0(void)

void FUN_1453f09b0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ef160(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x48))(plVar1,uVar4,param_3,lVar2,uVar5);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453f0a50 FUN_1453f0a50 body=136 status=ok
// SIG undefined FUN_1453f0a50(void)

void FUN_1453f0a50(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453ef160(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x50))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1453f0ae0 FUN_1453f0ae0 body=127 status=ok
// SIG undefined FUN_1453f0ae0(void)

longlong * FUN_1453f0ae0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (longlong *)0x0) {
      lVar1 = *param_1;
      *param_3 = lVar1;
      if (lVar1 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))()
        ;
      }
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}



// FUNCTION 1453f0b60 FUN_1453f0b60 body=48 status=ok
// SIG undefined FUN_1453f0b60(void)

longlong FUN_1453f0b60(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453f0b90 FUN_1453f0b90 body=152 status=ok
// SIG undefined FUN_1453f0b90(void)

undefined8 FUN_1453f0b90(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7441c8) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1453f0c30 FUN_1453f0c30 body=40 status=ok
// SIG undefined FUN_1453f0c30(void)

int FUN_1453f0c30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453f0c60 FUN_1453f0c60 body=105 status=ok
// SIG undefined FUN_1453f0c60(void)

undefined8 FUN_1453f0c60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_1453f0e40(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453f0cd0 FUN_1453f0cd0 body=34 status=ok
// SIG undefined FUN_1453f0cd0(void)

bool FUN_1453f0cd0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453f0d00 FUN_1453f0d00 body=38 status=ok
// SIG undefined FUN_1453f0d00(void)

bool FUN_1453f0d00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453f0d30 FUN_1453f0d30 body=85 status=ok
// SIG undefined FUN_1453f0d30(void)

longlong FUN_1453f0d30(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4dfe0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4e048;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453f0d90 FUN_1453f0d90 body=167 status=ok
// SIG undefined FUN_1453f0d90(void)

undefined8 * FUN_1453f0d90(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4e100;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4df50;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4dfb8;
  *param_1 = &PTR__purecall_149d4dfe0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4e048;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4e070;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4e0d8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453f0e40 FUN_1453f0e40 body=124 status=ok
// SIG undefined FUN_1453f0e40(void)

void FUN_1453f0e40(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149d4e070;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4e0d8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4dfe0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4e048;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1453f0ec0 FUN_1453f0ec0 body=54 status=ok
// SIG undefined FUN_1453f0ec0(void)

bool FUN_1453f0ec0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453f0f00 FUN_1453f0f00 body=202 status=ok
// SIG undefined FUN_1453f0f00(void)

ulonglong FUN_1453f0f00(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x38) || (puVar1[6] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_1453f0b90(&local_res8);
      iVar3 = (*(code *)puVar1[6])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1453f0fd0 FUN_1453f0fd0 body=158 status=ok
// SIG undefined FUN_1453f0fd0(void)

bool FUN_1453f0fd0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,undefined8 param_8)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if (((*puVar1 < 0x40) || ((code *)puVar1[7] == (code *)0x0)) || (param_7 == 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[7])(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1453f1070 FUN_1453f1070 body=110 status=ok
// SIG undefined FUN_1453f1070(void)

bool FUN_1453f1070(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if (((*puVar1 < 0x48) || ((code *)puVar1[8] == (code *)0x0)) || (param_3 == 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[8])(puVar1,param_2,param_3,param_4);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1453f10e0 FUN_1453f10e0 body=110 status=ok
// SIG undefined FUN_1453f10e0(void)

bool FUN_1453f10e0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if (((*puVar1 < 0x50) || ((code *)puVar1[9] == (code *)0x0)) || (param_3 == 0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[9])(puVar1,param_2,param_3,param_4);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1453f1150 FUN_1453f1150 body=49 status=ok
// SIG undefined FUN_1453f1150(void)

undefined8 FUN_1453f1150(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[10],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453f1176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1453f1190 FUN_1453f1190 body=49 status=ok
// SIG undefined FUN_1453f1190(void)

undefined8 FUN_1453f1190(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xb],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453f11b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1453f11d0 FUN_1453f11d0 body=75 status=ok
// SIG undefined FUN_1453f11d0(void)

bool FUN_1453f11d0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x67 < *puVar1) && ((code *)puVar1[0xc] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0xc])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453f1220 FUN_1453f1220 body=75 status=ok
// SIG undefined FUN_1453f1220(void)

bool FUN_1453f1220(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x6f < *puVar1) && ((code *)puVar1[0xd] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0xd])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453f1270 FUN_1453f1270 body=107 status=ok
// SIG undefined FUN_1453f1270(void)

bool FUN_1453f1270(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x78) || ((code *)puVar1[0xe] == (code *)0x0)) {
    bVar3 = false;
  }
  else {
    iVar2 = (*(code *)puVar1[0xe])(puVar1,param_2,param_3,param_4,param_5);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1453f12e0 FUN_1453f12e0 body=153 status=ok
// SIG undefined FUN_1453f12e0(void)

undefined8 *
FUN_1453f12e0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x80) || ((code *)puVar1[0xf] == (code *)0x0)) {
    *param_2 = 0;
  }
  else {
    uVar2 = (*(code *)puVar1[0xf])(puVar1,param_3,param_4,param_5,param_6,param_7,uVar3);
    FUN_144d736f0(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 1453f1380 FUN_1453f1380 body=145 status=ok
// SIG undefined FUN_1453f1380(void)

undefined8 *
FUN_1453f1380(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x88) || ((code *)puVar1[0x10] == (code *)0x0)) {
    *param_2 = 0;
  }
  else {
    uVar2 = (*(code *)puVar1[0x10])(puVar1,param_3,param_4,param_5,param_6);
    FUN_144d736f0(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 1453f1420 FUN_1453f1420 body=143 status=ok
// SIG undefined FUN_1453f1420(void)

undefined8 *
FUN_1453f1420(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x90) || ((code *)puVar1[0x11] == (code *)0x0)) {
    *param_2 = 0;
  }
  else {
    uVar2 = (*(code *)puVar1[0x11])(puVar1,param_3,param_4,param_5,param_6);
    FUN_144d736f0(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 1453f14b0 FUN_1453f14b0 body=64 status=ok
// SIG undefined FUN_1453f14b0(void)

undefined8 * FUN_1453f14b0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1453f0e40();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 1453f1540 FUN_1453f1540 body=11 status=ok
// SIG undefined FUN_1453f1540(void)

undefined8 FUN_1453f1540(void)

{
  return 0;
}



// FUNCTION 1453f1550 FUN_1453f1550 body=48 status=ok
// SIG undefined FUN_1453f1550(void)

longlong FUN_1453f1550(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453f1580 FUN_1453f1580 body=40 status=ok
// SIG undefined FUN_1453f1580(void)

int FUN_1453f1580(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453f15b0 FUN_1453f15b0 body=105 status=ok
// SIG undefined FUN_1453f15b0(void)

undefined8 FUN_1453f15b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_1453f1790(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453f1620 FUN_1453f1620 body=34 status=ok
// SIG undefined FUN_1453f1620(void)

bool FUN_1453f1620(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453f1650 FUN_1453f1650 body=38 status=ok
// SIG undefined FUN_1453f1650(void)

bool FUN_1453f1650(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453f1680 FUN_1453f1680 body=85 status=ok
// SIG undefined FUN_1453f1680(void)

longlong FUN_1453f1680(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4e1d0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4e1f8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453f16e0 FUN_1453f16e0 body=167 status=ok
// SIG undefined FUN_1453f16e0(void)

undefined8 * FUN_1453f16e0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4e270;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4e180;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4e1a8;
  *param_1 = &PTR__purecall_149d4e1d0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4e1f8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4e220;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4e248;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453f1790 FUN_1453f1790 body=124 status=ok
// SIG undefined FUN_1453f1790(void)

void FUN_1453f1790(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149d4e220;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4e248;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4e1d0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4e1f8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1453f1810 FUN_1453f1810 body=54 status=ok
// SIG undefined FUN_1453f1810(void)

bool FUN_1453f1810(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453f1850 FUN_1453f1850 body=49 status=ok
// SIG undefined FUN_1453f1850(void)

undefined8 FUN_1453f1850(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453f1876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1453f1890 FUN_1453f1890 body=49 status=ok
// SIG undefined FUN_1453f1890(void)

undefined8 FUN_1453f1890(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[7],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453f18b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1453f18d0 FUN_1453f18d0 body=49 status=ok
// SIG undefined FUN_1453f18d0(void)

undefined8 FUN_1453f18d0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[8],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453f18f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1453f1910 FUN_1453f1910 body=96 status=ok
// SIG undefined FUN_1453f1910(void)

undefined8 *
FUN_1453f1910(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453ef790(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453f1970 FUN_1453f1970 body=64 status=ok
// SIG undefined FUN_1453f1970(void)

undefined8 * FUN_1453f1970(undefined8 *param_1,ulonglong param_2)

{
  FUN_1453f1790();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 1453f1a00 FUN_1453f1a00 body=40 status=ok
// SIG undefined FUN_1453f1a00(void)

int FUN_1453f1a00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -8) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453f1a30 FUN_1453f1a30 body=104 status=ok
// SIG undefined FUN_1453f1a30(void)

undefined8
FUN_1453f1a30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (*(code **)(param_1[-1] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-1] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -2 != (undefined8 *)0x0) {
      *param_1 = &PTR_FUN_149d4e2a0;
      FUN_14516fec0();
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -2,0x20,param_3,param_4,uVar3);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1453f1aa0 FUN_1453f1aa0 body=34 status=ok
// SIG undefined FUN_1453f1aa0(void)

bool FUN_1453f1aa0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453f1ad0 FUN_1453f1ad0 body=38 status=ok
// SIG undefined FUN_1453f1ad0(void)

bool FUN_1453f1ad0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -8);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453f1b00 FUN_1453f1b00 body=21 status=ok
// SIG undefined FUN_1453f1b00(void)

undefined8 * FUN_1453f1b00(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_149d4e2a0;
  return param_1;
}



// FUNCTION 1453f1b20 FUN_1453f1b20 body=178 status=ok
// SIG undefined FUN_1453f1b20(void)

void FUN_1453f1b20(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  longlong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x30) || (puVar1[5] == 0)) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar3 = FUN_1453f1c70(&local_res8);
    (*(code *)puVar1[5])(puVar1,uVar3,param_3,param_4,uVar4);
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453f1be0 FUN_1453f1be0 body=47 status=ok
// SIG undefined FUN_1453f1be0(void)

void FUN_1453f1be0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[6],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453f1c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 1453f1c10 FUN_1453f1c10 body=84 status=ok
// SIG undefined FUN_1453f1c10(void)

undefined8 *
FUN_1453f1c10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4e2a0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453f1c70 FUN_1453f1c70 body=156 status=ok
// SIG undefined FUN_1453f1c70(void)

undefined8 FUN_1453f1c70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c746820) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_145586f70(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 1453f1d10 FUN_1453f1d10 body=48 status=ok
// SIG undefined FUN_1453f1d10(void)

void FUN_1453f1d10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453f1d40 FUN_1453f1d40 body=48 status=ok
// SIG undefined FUN_1453f1d40(void)

void FUN_1453f1d40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453f1d70 FUN_1453f1d70 body=48 status=ok
// SIG undefined FUN_1453f1d70(void)

void FUN_1453f1d70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453f1da0 FUN_1453f1da0 body=58 status=ok
// SIG undefined FUN_1453f1da0(void)

longlong * FUN_1453f1da0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453f1de0 FUN_1453f1de0 body=52 status=ok
// SIG undefined FUN_1453f1de0(void)

int FUN_1453f1de0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x88);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453f1e20 FUN_1453f1e20 body=80 status=ok
// SIG undefined FUN_1453f1e20(void)

undefined8 FUN_1453f1e20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0x11;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453f1ed0 FUN_1453f1ed0 body=42 status=ok
// SIG undefined FUN_1453f1ed0(void)

undefined1 FUN_1453f1ed0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453f1f00 FUN_1453f1f00 body=42 status=ok
// SIG undefined FUN_1453f1f00(void)

undefined1 FUN_1453f1f00(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453f1f30 FUN_1453f1f30 body=42 status=ok
// SIG undefined FUN_1453f1f30(void)

undefined1 FUN_1453f1f30(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453f1f60 FUN_1453f1f60 body=43 status=ok
// SIG undefined FUN_1453f1f60(void)

undefined8 * FUN_1453f1f60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1453f1f90 FUN_1453f1f90 body=228 status=ok
// SIG undefined FUN_1453f1f90(void)

undefined8 * FUN_1453f1f90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4e3a0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441d8;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x68);
  param_1[5] = &LAB_1453f1eb0;
  param_1[6] = FUN_1453f1ed0;
  param_1[7] = FUN_1453f1f00;
  param_1[8] = FUN_1453f1f30;
  param_1[4] = 0x68;
  *param_1 = &PTR_FUN_149d4e3c8;
  param_1[9] = FUN_1453f21d0;
  param_1[10] = FUN_1453f2310;
  param_1[0xb] = FUN_1453f2430;
  param_1[0xc] = FUN_1453f2570;
  param_1[0xd] = FUN_1453f26e0;
  param_1[0xe] = FUN_1453f2800;
  param_1[0xf] = FUN_1453f2980;
  param_1[0x10] = FUN_1453f2ab0;
  return param_1;
}



// FUNCTION 1453f2080 FUN_1453f2080 body=43 status=ok
// SIG undefined FUN_1453f2080(void)

undefined8 * FUN_1453f2080(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1453f20b0 FUN_1453f20b0 body=135 status=ok
// SIG undefined FUN_1453f20b0(void)

undefined8 * FUN_1453f20b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x60);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145587170(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1453f2140 FUN_1453f2140 body=135 status=ok
// SIG undefined FUN_1453f2140(void)

undefined8 * FUN_1453f2140(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x60);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145587750(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1453f21d0 FUN_1453f21d0 body=313 status=ok
// SIG undefined FUN_1453f21d0(void)

undefined8 FUN_1453f21d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_res8;
  undefined1 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined1 *local_28;
  
  local_38[1] = 0xfffffffffffffffe;
  if ((param_1 == 0) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    local_res8 = local_50;
    local_28 = local_48;
    puVar1 = (undefined8 *)FUN_1453f1da0(local_38,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_14516a920(local_50,param_4);
    uVar3 = FUN_14516a830(local_48,param_3);
    uVar4 = FUN_144d7a4e0(local_40,param_2);
    (**(code **)*puVar1)(puVar1,&local_58,uVar4,uVar3,uVar2);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
    local_res8 = local_58;
    if (local_58 != (undefined1 *)0x0) {
      (*(code *)**(undefined8 **)
                  (local_58 + (longlong)*(int *)(*(longlong *)(local_58 + 8) + 4) + 8))();
    }
    uVar2 = FUN_1453f20b0(&local_res8);
    if (local_58 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)(local_58 + (longlong)*(int *)(*(longlong *)(local_58 + 8) + 4) + 8)
                  + 8))();
    }
  }
  return uVar2;
}



// FUNCTION 1453f2310 FUN_1453f2310 body=281 status=ok
// SIG undefined FUN_1453f2310(void)

undefined4
FUN_1453f2310(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_res8 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong local_40 [2];
  undefined4 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_40[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if (((param_1 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar2 = 1;
  }
  else {
    local_30 = local_res8;
    local_28 = local_58;
    local_20 = local_50;
    puVar3 = (undefined8 *)FUN_1453f1da0(local_40,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453ef4c0(local_res8,param_5);
    uVar5 = FUN_14516a920(local_58,param_4);
    uVar6 = FUN_14516a830(local_50,param_3);
    uVar7 = FUN_144d7a4e0(local_48,param_2);
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar7,uVar6,uVar5,uVar4);
    if (local_40[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453f2430 FUN_1453f2430 body=314 status=ok
// SIG undefined FUN_1453f2430(void)

undefined8 FUN_1453f2430(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_res8;
  undefined1 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined1 *local_28;
  
  local_38[1] = 0xfffffffffffffffe;
  if ((param_1 == 0) || (param_4 == 0)) {
    uVar3 = 0;
  }
  else {
    local_res8 = local_50;
    local_28 = local_48;
    puVar2 = (undefined8 *)FUN_1453f1da0(local_38,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516a920(local_50,param_4);
    uVar4 = FUN_14516a830(local_48,param_3);
    uVar5 = FUN_144d7a4e0(local_40,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_58,uVar5,uVar4,uVar3);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
    local_res8 = local_58;
    if (local_58 != (undefined1 *)0x0) {
      (*(code *)**(undefined8 **)
                  (local_58 + (longlong)*(int *)(*(longlong *)(local_58 + 8) + 4) + 8))();
    }
    uVar3 = FUN_14516a770(&local_res8);
    if (local_58 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)(local_58 + (longlong)*(int *)(*(longlong *)(local_58 + 8) + 4) + 8)
                  + 8))();
    }
  }
  return uVar3;
}



// FUNCTION 1453f2570 FUN_1453f2570 body=365 status=ok
// SIG undefined FUN_1453f2570(void)

void FUN_1453f2570(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined **local_88;
  longlong local_80;
  char local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong local_58 [2];
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_58[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if ((((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    local_88 = &PTR_FUN_14ba6d600;
    local_80 = param_6;
    local_78 = '\0';
    local_48 = local_res8;
    local_40 = local_70;
    local_38 = local_68;
    puVar2 = (undefined8 *)FUN_1453f1da0(local_58,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453e1080(local_res8,param_5);
    uVar4 = FUN_14516a920(local_70,param_4);
    uVar5 = FUN_14516a830(local_68,param_3);
    uVar6 = FUN_144d7a4e0(local_60,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar6,uVar5,uVar4,uVar3,&local_88);
    if (local_58[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_58[0] + 8 + (longlong)*(int *)(*(longlong *)(local_58[0] + 8) + 4)) + 8))
                ();
    }
    local_88 = &PTR_FUN_14ba6d600;
    if ((local_80 != 0) && (local_78 != '\0')) {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(local_80,0x18);
    }
  }
  return;
}



// FUNCTION 1453f26e0 FUN_1453f26e0 body=280 status=ok
// SIG undefined FUN_1453f26e0(void)

undefined1
FUN_1453f26e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_res8 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong local_40 [2];
  undefined4 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_40[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if (((param_1 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_30 = local_res8;
    local_28 = local_58;
    local_20 = local_50;
    puVar3 = (undefined8 *)FUN_1453f1da0(local_40,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453e1080(local_res8,param_5);
    uVar5 = FUN_14516a920(local_58,param_4);
    uVar6 = FUN_14516a830(local_50,param_3);
    uVar7 = FUN_144d7a4e0(local_48,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar7,uVar6,uVar5,uVar4);
    if (local_40[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1453f2800 FUN_1453f2800 body=374 status=ok
// SIG undefined FUN_1453f2800(void)

undefined8
FUN_1453f2800(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *local_res8;
  undefined1 *local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  local_38 = 0xfffffffffffffffe;
  if (((param_1 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar3 = 0;
  }
  else {
    local_res8 = local_58;
    local_30 = local_50;
    local_28 = local_48;
    puVar2 = (undefined8 *)FUN_1453f1da0(&local_60,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453e1080(local_58,param_5);
    uVar4 = FUN_14516a920(local_50,param_4);
    uVar5 = FUN_14516a830(local_48,param_3);
    uVar6 = FUN_144d7a4e0(local_40,param_2);
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_68,uVar6,uVar5,uVar4,uVar3);
    if (local_60 != 0) {
      (**(code **)(*(longlong *)(local_60 + 8 + (longlong)*(int *)(*(longlong *)(local_60 + 8) + 4))
                  + 8))();
    }
    local_res8 = local_68;
    if (local_68 != (undefined1 *)0x0) {
      (*(code *)**(undefined8 **)
                  (local_68 + (longlong)*(int *)(*(longlong *)(local_68 + 8) + 4) + 8))();
    }
    uVar3 = FUN_1453f2140(&local_res8);
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)(local_68 + (longlong)*(int *)(*(longlong *)(local_68 + 8) + 4) + 8)
                  + 8))();
    }
  }
  return uVar3;
}



// FUNCTION 1453f2980 FUN_1453f2980 body=301 status=ok
// SIG undefined FUN_1453f2980(void)

void FUN_1453f2980(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,undefined8 param_7)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong local_40 [2];
  undefined4 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_40[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if (((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    local_30 = local_res8;
    local_28 = local_58;
    local_20 = local_50;
    puVar2 = (undefined8 *)FUN_1453f1da0(local_40,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453e1080(local_res8,param_5);
    uVar4 = FUN_14516a920(local_58,param_4);
    uVar5 = FUN_14516a830(local_50,param_3);
    uVar6 = FUN_144d7a4e0(local_48,param_2);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar6,uVar5,uVar4,uVar3,param_6,param_7);
    if (local_40[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_40[0] + 8 + (longlong)*(int *)(*(longlong *)(local_40[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453f2ab0 FUN_1453f2ab0 body=271 status=ok
// SIG undefined FUN_1453f2ab0(void)

void FUN_1453f2ab0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  uint *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  longlong local_50 [2];
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_50[1] = 0xfffffffffffffffe;
  if (((param_1 != 0) && (param_4 != 0)) && (param_5 != (uint *)0x0)) {
    local_res8[0] = (uint)(*param_5 != 0);
    local_40 = local_68;
    local_38 = local_60;
    puVar2 = (undefined8 *)FUN_1453f1da0(local_50,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_14516a920(local_68,param_4);
    uVar4 = FUN_14516a830(local_60,param_3);
    uVar5 = FUN_144d7a4e0(local_58,param_2);
    (**(code **)(*plVar1 + 0x38))(plVar1,uVar5,uVar4,uVar3,local_res8);
    if (local_50[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_50[0] + 8 + (longlong)*(int *)(*(longlong *)(local_50[0] + 8) + 4)) + 8))
                ();
    }
    *param_5 = (uint)((char)local_res8[0] != '\0');
  }
  return;
}



// FUNCTION 1453f2bc0 FUN_1453f2bc0 body=58 status=ok
// SIG undefined FUN_1453f2bc0(void)

longlong * FUN_1453f2bc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453f2c00 FUN_1453f2c00 body=49 status=ok
// SIG undefined FUN_1453f2c00(void)

int FUN_1453f2c00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453f2c40 FUN_1453f2c40 body=77 status=ok
// SIG undefined FUN_1453f2c40(void)

undefined8 FUN_1453f2c40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xd;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453f2cf0 FUN_1453f2cf0 body=42 status=ok
// SIG undefined FUN_1453f2cf0(void)

undefined1 FUN_1453f2cf0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453f2d20 FUN_1453f2d20 body=42 status=ok
// SIG undefined FUN_1453f2d20(void)

undefined1 FUN_1453f2d20(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453f2d50 FUN_1453f2d50 body=42 status=ok
// SIG undefined FUN_1453f2d50(void)

undefined1 FUN_1453f2d50(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453f2d80 FUN_1453f2d80 body=43 status=ok
// SIG undefined FUN_1453f2d80(void)

undefined8 * FUN_1453f2d80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453f2db0 FUN_1453f2db0 body=140 status=ok
// SIG undefined FUN_1453f2db0(void)

undefined8 * FUN_1453f2db0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4e5d0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441dc;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453f2cd0;
  param_1[6] = FUN_1453f2cf0;
  param_1[7] = FUN_1453f2d20;
  param_1[8] = FUN_1453f2d50;
  param_1[4] = 0x48;
  *param_1 = &PTR_FUN_149d4e5f8;
  param_1[9] = FUN_1453f3080;
  param_1[10] = FUN_1453f35f0;
  param_1[0xb] = FUN_1453f3b90;
  param_1[0xc] = FUN_1453f3c30;
  return param_1;
}



// FUNCTION 1453f2e40 FUN_1453f2e40 body=84 status=ok
// SIG undefined FUN_1453f2e40(void)

undefined8 *
FUN_1453f2e40(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4e5f8;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453f2ea0 FUN_1453f2ea0 body=230 status=ok
// SIG undefined FUN_1453f2ea0(void)

longlong * FUN_1453f2ea0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_145587b40(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c74682c;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453f2f90 FUN_1453f2f90 body=230 status=ok
// SIG undefined FUN_1453f2f90(void)

longlong * FUN_1453f2f90(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_1453f4350(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7441e4;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 1453f3080 FUN_1453f3080 body=747 status=ok
// SIG undefined FUN_1453f3080(void)

void FUN_1453f3080(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 uVar11;
  longlong *local_50;
  longlong *plStack_48;
  longlong *local_40;
  
  uVar11 = 0xfffffffffffffffe;
  local_res8._0_4_ = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && ((param_2 == 0 || (param_3 != 0)))) {
    local_50 = (longlong *)0x0;
    plStack_48 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    if ((param_2 != 0) && (uVar8 = 0, param_2 != 0)) {
      do {
        FUN_1453f2f90(&local_res8,*(undefined8 *)(param_3 + uVar8 * 8));
        lVar1 = CONCAT44(local_res8._4_4_,(undefined4)local_res8);
        if ((&local_res8 < plStack_48) && (local_50 <= &local_res8)) {
          lVar6 = (longlong)&local_res8 - (longlong)local_50;
          if ((plStack_48 == local_40) && ((longlong)local_40 - (longlong)plStack_48 >> 3 == 0)) {
            lVar5 = (longlong)plStack_48 - (longlong)local_50 >> 3;
            if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar7 = lVar5 + 1;
            uVar10 = (longlong)local_40 - (longlong)local_50 >> 3;
            uVar9 = 0;
            if (uVar10 <= 0x1fffffffffffffff - (uVar10 >> 1)) {
              uVar9 = (uVar10 >> 1) + uVar10;
            }
            if (uVar7 <= uVar9) {
              uVar7 = uVar9;
            }
            FUN_1453f3480(&local_50,uVar7,uVar9,uVar10,uVar11);
          }
          if (plStack_48 != (longlong *)0x0) {
            lVar6 = local_50[lVar6 >> 3];
            *plStack_48 = lVar6;
            if (lVar6 != 0) {
              (*(code *)**(undefined8 **)
                          ((longlong)*(int *)(*(longlong *)(lVar6 + 8) + 4) + lVar6 + 8))();
            }
          }
        }
        else {
          if ((plStack_48 == local_40) && ((longlong)local_40 - (longlong)plStack_48 >> 3 == 0)) {
            lVar6 = (longlong)plStack_48 - (longlong)local_50 >> 3;
            if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar7 = lVar6 + 1;
            uVar10 = (longlong)local_40 - (longlong)local_50 >> 3;
            uVar9 = 0;
            if (uVar10 <= 0x1fffffffffffffff - (uVar10 >> 1)) {
              uVar9 = (uVar10 >> 1) + uVar10;
            }
            if (uVar7 <= uVar9) {
              uVar7 = uVar9;
            }
            FUN_1453f3480(&local_50,uVar7,uVar9,uVar10,uVar11);
          }
          if ((plStack_48 != (longlong *)0x0) && (*plStack_48 = lVar1, lVar1 != 0)) {
            (*(code *)**(undefined8 **)
                        ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
          }
        }
        plStack_48 = plStack_48 + 1;
        if (lVar1 != 0) {
          (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) +
                      8))();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_2);
    }
    puVar4 = (undefined8 *)FUN_1453f2bc0(&local_res8,param_1);
    (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,&local_50);
    lVar1 = CONCAT44(local_res8._4_4_,(undefined4)local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    plVar3 = plStack_48;
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
        lVar1 = *plVar2;
        if (lVar1 != 0) {
          (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      8))();
        }
      }
      FUN_1453f3370(&local_50,local_50,(longlong)local_40 - (longlong)local_50 >> 3);
    }
  }
  return;
}



// FUNCTION 1453f3370 FUN_1453f3370 body=109 status=ok
// SIG undefined FUN_1453f3370(void)

void FUN_1453f3370(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 8) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 1453f33f0 FUN_1453f33f0 body=124 status=ok
// SIG undefined FUN_1453f33f0(void)

ulonglong FUN_1453f33f0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 8;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = FUN_14494321d();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 1453f3470 thunk_FUN_1453f3560 body=5 status=ok
// SIG undefined thunk_FUN_1453f3560(void)

void thunk_FUN_1453f3560(void)

{
  FUN_1453f3560();
  return;
}



// FUNCTION 1453f3480 FUN_1453f3480 body=217 status=ok
// SIG undefined FUN_1453f3480(void)

void FUN_1453f3480(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  lVar3 = FUN_1453f33f0();
  FUN_1453f3d60(*param_1,param_1[1],lVar3,param_1,0,local_res8,uVar6);
  plVar1 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  lVar5 = (longlong)plVar1 - (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    FUN_1453f3370(param_1,*param_1,param_1[2] - *param_1 >> 3);
  }
  param_1[2] = lVar3 + param_2 * 8;
  param_1[1] = lVar3 + (lVar5 >> 3) * 8;
  *param_1 = lVar3;
  return;
}



// FUNCTION 1453f3560 FUN_1453f3560 body=138 status=ok
// SIG undefined FUN_1453f3560(void)

void FUN_1453f3560(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    FUN_1453f3370(param_1,*param_1,param_1[2] - *param_1 >> 3,param_4,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f35f0 FUN_1453f35f0 body=748 status=ok
// SIG undefined FUN_1453f35f0(void)

void FUN_1453f35f0(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 uVar11;
  longlong *local_50;
  longlong *plStack_48;
  longlong *local_40;
  
  uVar11 = 0xfffffffffffffffe;
  local_res8._0_4_ = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && ((param_2 == 0 || (param_3 != 0)))) {
    local_50 = (longlong *)0x0;
    plStack_48 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    if ((param_2 != 0) && (uVar8 = 0, param_2 != 0)) {
      do {
        FUN_1453f2ea0(&local_res8,*(undefined8 *)(param_3 + uVar8 * 8));
        lVar1 = CONCAT44(local_res8._4_4_,(undefined4)local_res8);
        if ((&local_res8 < plStack_48) && (local_50 <= &local_res8)) {
          lVar6 = (longlong)&local_res8 - (longlong)local_50;
          if ((plStack_48 == local_40) && ((longlong)local_40 - (longlong)plStack_48 >> 3 == 0)) {
            lVar5 = (longlong)plStack_48 - (longlong)local_50 >> 3;
            if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar7 = lVar5 + 1;
            uVar10 = (longlong)local_40 - (longlong)local_50 >> 3;
            uVar9 = 0;
            if (uVar10 <= 0x1fffffffffffffff - (uVar10 >> 1)) {
              uVar9 = (uVar10 >> 1) + uVar10;
            }
            if (uVar7 <= uVar9) {
              uVar7 = uVar9;
            }
            FUN_1453f39f0(&local_50,uVar7,uVar9,uVar10,uVar11);
          }
          if (plStack_48 != (longlong *)0x0) {
            lVar6 = local_50[lVar6 >> 3];
            *plStack_48 = lVar6;
            if (lVar6 != 0) {
              (*(code *)**(undefined8 **)
                          ((longlong)*(int *)(*(longlong *)(lVar6 + 8) + 4) + lVar6 + 8))();
            }
          }
        }
        else {
          if ((plStack_48 == local_40) && ((longlong)local_40 - (longlong)plStack_48 >> 3 == 0)) {
            lVar6 = (longlong)plStack_48 - (longlong)local_50 >> 3;
            if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar7 = lVar6 + 1;
            uVar10 = (longlong)local_40 - (longlong)local_50 >> 3;
            uVar9 = 0;
            if (uVar10 <= 0x1fffffffffffffff - (uVar10 >> 1)) {
              uVar9 = (uVar10 >> 1) + uVar10;
            }
            if (uVar7 <= uVar9) {
              uVar7 = uVar9;
            }
            FUN_1453f39f0(&local_50,uVar7,uVar9,uVar10,uVar11);
          }
          if ((plStack_48 != (longlong *)0x0) && (*plStack_48 = lVar1, lVar1 != 0)) {
            (*(code *)**(undefined8 **)
                        ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
          }
        }
        plStack_48 = plStack_48 + 1;
        if (lVar1 != 0) {
          (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) +
                      8))();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_2);
    }
    puVar4 = (undefined8 *)FUN_1453f2bc0(&local_res8,param_1);
    (**(code **)(*(longlong *)*puVar4 + 8))((longlong *)*puVar4,&local_50);
    lVar1 = CONCAT44(local_res8._4_4_,(undefined4)local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    plVar3 = plStack_48;
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
        lVar1 = *plVar2;
        if (lVar1 != 0) {
          (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                      8))();
        }
      }
      FUN_1453f38e0(&local_50,local_50,(longlong)local_40 - (longlong)local_50 >> 3);
    }
  }
  return;
}



// FUNCTION 1453f38e0 FUN_1453f38e0 body=109 status=ok
// SIG undefined FUN_1453f38e0(void)

void FUN_1453f38e0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 8) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 1453f3960 FUN_1453f3960 body=124 status=ok
// SIG undefined FUN_1453f3960(void)

ulonglong FUN_1453f3960(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 8;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = FUN_14494321d();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 1453f39e0 thunk_FUN_1453f3ad0 body=5 status=ok
// SIG undefined thunk_FUN_1453f3ad0(void)

void thunk_FUN_1453f3ad0(void)

{
  FUN_1453f3ad0();
  return;
}



// FUNCTION 1453f39f0 FUN_1453f39f0 body=217 status=ok
// SIG undefined FUN_1453f39f0(void)

void FUN_1453f39f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  lVar3 = FUN_1453f3960();
  FUN_1453f3ce0(*param_1,param_1[1],lVar3,param_1,0,local_res8,uVar6);
  plVar1 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  lVar5 = (longlong)plVar1 - (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    FUN_1453f38e0(param_1,*param_1,param_1[2] - *param_1 >> 3);
  }
  param_1[2] = lVar3 + param_2 * 8;
  param_1[1] = lVar3 + (lVar5 >> 3) * 8;
  *param_1 = lVar3;
  return;
}



// FUNCTION 1453f3ad0 FUN_1453f3ad0 body=138 status=ok
// SIG undefined FUN_1453f3ad0(void)

void FUN_1453f3ad0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    FUN_1453f38e0(param_1,*param_1,param_1[2] - *param_1 >> 3,param_4,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f3b60 FUN_1453f3b60 body=48 status=ok
// SIG undefined FUN_1453f3b60(void)

void FUN_1453f3b60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453f3b90 FUN_1453f3b90 body=152 status=ok
// SIG undefined FUN_1453f3b90(void)

void FUN_1453f3b90(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res20;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1453f2bc0(&local_res20,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_1453f2ea0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x10))(plVar1,uVar4,param_3,lVar2,uVar5);
    if (local_res20 != 0) {
      (**(code **)(*(longlong *)
                    (local_res20 + 8 + (longlong)*(int *)(*(longlong *)(local_res20 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453f3c30 FUN_1453f3c30 body=173 status=ok
// SIG undefined FUN_1453f3c30(void)

void FUN_1453f3c30(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar2 = (undefined8 *)FUN_1453f2bc0(local_18,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453f2ea0(local_res8,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,param_3,param_4);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453f3ce0 FUN_1453f3ce0 body=127 status=ok
// SIG undefined FUN_1453f3ce0(void)

longlong * FUN_1453f3ce0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (longlong *)0x0) {
      lVar1 = *param_1;
      *param_3 = lVar1;
      if (lVar1 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))()
        ;
      }
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}



// FUNCTION 1453f3d60 FUN_1453f3d60 body=127 status=ok
// SIG undefined FUN_1453f3d60(void)

longlong * FUN_1453f3d60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (longlong *)0x0) {
      lVar1 = *param_1;
      *param_3 = lVar1;
      if (lVar1 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))()
        ;
      }
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}



// FUNCTION 1453f3de0 FUN_1453f3de0 body=58 status=ok
// SIG undefined FUN_1453f3de0(void)

longlong * FUN_1453f3de0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1453f3e20 FUN_1453f3e20 body=49 status=ok
// SIG undefined FUN_1453f3e20(void)

int FUN_1453f3e20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453f3e60 FUN_1453f3e60 body=77 status=ok
// SIG undefined FUN_1453f3e60(void)

undefined8 FUN_1453f3e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453f3f10 FUN_1453f3f10 body=42 status=ok
// SIG undefined FUN_1453f3f10(void)

undefined1 FUN_1453f3f10(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1453f3f40 FUN_1453f3f40 body=42 status=ok
// SIG undefined FUN_1453f3f40(void)

undefined1 FUN_1453f3f40(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1453f3f70 FUN_1453f3f70 body=42 status=ok
// SIG undefined FUN_1453f3f70(void)

undefined1 FUN_1453f3f70(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1453f3fa0 FUN_1453f3fa0 body=43 status=ok
// SIG undefined FUN_1453f3fa0(void)

undefined8 * FUN_1453f3fa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1453f3fd0 FUN_1453f3fd0 body=107 status=ok
// SIG undefined FUN_1453f3fd0(void)

undefined8 * FUN_1453f3fd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d4e850;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7441e0;
  param_1[3] = param_1;
  param_1[5] = &LAB_1453f3ef0;
  param_1[6] = FUN_1453f3f10;
  param_1[7] = FUN_1453f3f40;
  param_1[8] = FUN_1453f3f70;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149d4e878;
  param_1[9] = FUN_1453f40a0;
  return param_1;
}



// FUNCTION 1453f4040 FUN_1453f4040 body=84 status=ok
// SIG undefined FUN_1453f4040(void)

undefined8 *
FUN_1453f4040(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149d4e878;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1453f40a0 FUN_1453f40a0 body=263 status=ok
// SIG undefined FUN_1453f40a0(void)

void FUN_1453f40a0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  longlong local_38 [2];
  undefined **local_28;
  longlong local_20;
  char local_18;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)FUN_1453f3de0(local_38,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_1453f2ea0(local_res8,param_4);
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = 0;
    if (param_3 != 0) {
      local_20 = param_3;
    }
    local_18 = '\0';
    (**(code **)*puVar1)(puVar1,param_2,&local_28,uVar2);
    local_28 = &PTR_FUN_14ba6d600;
    if (local_20 != 0) {
      if (local_18 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_20,0x18);
      }
      local_20 = 0;
      local_18 = '\0';
    }
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 1453f41b0 FUN_1453f41b0 body=48 status=ok
// SIG undefined FUN_1453f41b0(void)

longlong FUN_1453f41b0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453f41e0 FUN_1453f41e0 body=40 status=ok
// SIG undefined FUN_1453f41e0(void)

int FUN_1453f41e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453f4210 FUN_1453f4210 body=105 status=ok
// SIG undefined FUN_1453f4210(void)

undefined8 FUN_1453f4210(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_1453f4400(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453f4280 FUN_1453f4280 body=34 status=ok
// SIG undefined FUN_1453f4280(void)

bool FUN_1453f4280(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453f42b0 FUN_1453f42b0 body=38 status=ok
// SIG undefined FUN_1453f42b0(void)

bool FUN_1453f42b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453f42e0 FUN_1453f42e0 body=11 status=ok
// SIG undefined FUN_1453f42e0(void)

undefined8 FUN_1453f42e0(void)

{
  return 0;
}



// FUNCTION 1453f42f0 FUN_1453f42f0 body=85 status=ok
// SIG undefined FUN_1453f42f0(void)

longlong FUN_1453f42f0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4e958;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4e998;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453f4350 FUN_1453f4350 body=167 status=ok
// SIG undefined FUN_1453f4350(void)

undefined8 * FUN_1453f4350(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4ea28;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4e8f0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4e930;
  *param_1 = &PTR__purecall_149d4e958;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4e998;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4e9c0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4ea00;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453f4400 FUN_1453f4400 body=124 status=ok
// SIG undefined FUN_1453f4400(void)

void FUN_1453f4400(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149d4e9c0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4ea00;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4e958;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4e998;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1453f4480 FUN_1453f4480 body=222 status=ok
// SIG undefined FUN_1453f4480(void)

undefined8 * FUN_1453f4480(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x30) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453f4560 FUN_1453f4560 body=222 status=ok
// SIG undefined FUN_1453f4560(void)

undefined8 * FUN_1453f4560(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x38) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453f4640 FUN_1453f4640 body=222 status=ok
// SIG undefined FUN_1453f4640(void)

undefined8 * FUN_1453f4640(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x40) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453f4720 FUN_1453f4720 body=52 status=ok
// SIG undefined FUN_1453f4720(void)

undefined8 FUN_1453f4720(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[8],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001453f4746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 7;
}



// FUNCTION 1453f4760 FUN_1453f4760 body=193 status=ok
// SIG undefined FUN_1453f4760(void)

void FUN_1453f4760(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x50) || (puVar1[9] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))
                ();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar3 = FUN_1453f49c0(&local_res8);
      (*(code *)puVar1[9])(puVar1,uVar3,param_3,param_4,uVar4);
      uVar2 = *param_2;
      if (uVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8
                    ))();
      }
    }
  }
  return;
}



// FUNCTION 1453f4830 FUN_1453f4830 body=54 status=ok
// SIG undefined FUN_1453f4830(void)

bool FUN_1453f4830(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453f4870 FUN_1453f4870 body=54 status=ok
// SIG undefined FUN_1453f4870(void)

bool FUN_1453f4870(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453f48b0 FUN_1453f48b0 body=202 status=ok
// SIG undefined FUN_1453f48b0(void)

ulonglong FUN_1453f48b0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x68) || (puVar1[0xc] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_145178d00(&local_res8);
      iVar3 = (*(code *)puVar1[0xc])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1453f4980 FUN_1453f4980 body=64 status=ok
// SIG undefined FUN_1453f4980(void)

undefined8 * FUN_1453f4980(undefined8 *param_1,ulonglong param_2)

{
  FUN_1453f4400();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 1453f49c0 FUN_1453f49c0 body=135 status=ok
// SIG undefined FUN_1453f49c0(void)

undefined8 * FUN_1453f49c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_145588120(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1453f4a50 FUN_1453f4a50 body=48 status=ok
// SIG undefined FUN_1453f4a50(void)

void FUN_1453f4a50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1453f4ad0 FUN_1453f4ad0 body=48 status=ok
// SIG undefined FUN_1453f4ad0(void)

longlong FUN_1453f4ad0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1453f4b00 FUN_1453f4b00 body=40 status=ok
// SIG undefined FUN_1453f4b00(void)

int FUN_1453f4b00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1453f4b30 FUN_1453f4b30 body=105 status=ok
// SIG undefined FUN_1453f4b30(void)

undefined8 FUN_1453f4b30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_1453f4d20(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1453f4ba0 FUN_1453f4ba0 body=34 status=ok
// SIG undefined FUN_1453f4ba0(void)

bool FUN_1453f4ba0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1453f4bd0 FUN_1453f4bd0 body=38 status=ok
// SIG undefined FUN_1453f4bd0(void)

bool FUN_1453f4bd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1453f4c00 FUN_1453f4c00 body=11 status=ok
// SIG undefined FUN_1453f4c00(void)

undefined8 FUN_1453f4c00(void)

{
  return 0;
}



// FUNCTION 1453f4c10 FUN_1453f4c10 body=85 status=ok
// SIG undefined FUN_1453f4c10(void)

longlong FUN_1453f4c10(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4ebb0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4ebc8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 1453f4c70 FUN_1453f4c70 body=167 status=ok
// SIG undefined FUN_1453f4c70(void)

undefined8 * FUN_1453f4c70(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149d4ec30;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149d4eb70;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149d4eb88;
  *param_1 = &PTR__purecall_149d4ebb0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4ebc8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149d4ebf0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149d4ec08;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 1453f4d20 FUN_1453f4d20 body=124 status=ok
// SIG undefined FUN_1453f4d20(void)

void FUN_1453f4d20(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149d4ebf0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4ec08;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149d4ebb0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149d4ebc8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1453f4da0 FUN_1453f4da0 body=222 status=ok
// SIG undefined FUN_1453f4da0(void)

undefined8 * FUN_1453f4da0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x30) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1453f4e80 FUN_1453f4e80 body=54 status=ok
// SIG undefined FUN_1453f4e80(void)

bool FUN_1453f4e80(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453f4ec0 FUN_1453f4ec0 body=54 status=ok
// SIG undefined FUN_1453f4ec0(void)

bool FUN_1453f4ec0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1453f4f00 FUN_1453f4f00 body=64 status=ok
// SIG undefined FUN_1453f4f00(void)

undefined8 * FUN_1453f4f00(undefined8 *param_1,ulonglong param_2)

{
  FUN_1453f4d20();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 1453f4f90 FUN_1453f4f90 body=77 status=ok
// SIG undefined FUN_1453f4f90(void)

undefined8 FUN_1453f4f90(longlong *param_1,void *param_2,size_t param_3)

{
  if (param_1[1] < (longlong)(param_1[2] + param_3)) {
    return 0;
  }
  memcpy(param_2,(void *)(*param_1 + param_1[2]),param_3);
  param_1[2] = param_1[2] + param_3;
  return 1;
}



// FUNCTION 1453f4fe0 FUN_1453f4fe0 body=87 status=ok
// SIG undefined FUN_1453f4fe0(void)

void FUN_1453f4fe0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f5040 FUN_1453f5040 body=123 status=ok
// SIG undefined FUN_1453f5040(void)

longlong * FUN_1453f5040(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_14494321d(0x58);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = FUN_14494321d(0x48);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[2] = lVar1;
  return param_1;
}



// FUNCTION 1453f50c0 FUN_1453f50c0 body=55 status=ok
// SIG undefined FUN_1453f50c0(void)

void FUN_1453f50c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_144d7e060(lVar1 + 0x10);
    FUN_144d7e030(lVar1);
    thunk_FUN_1400020a8(lVar1,0x20);
    return;
  }
  return;
}



// FUNCTION 1453f5100 FUN_1453f5100 body=109 status=ok
// SIG undefined FUN_1453f5100(void)

void FUN_1453f5100(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    FUN_144d7ffa0(param_1 + 2,param_1 + 2,*(undefined8 *)(param_1[2] + 8));
    thunk_FUN_1400020a8(param_1[2],0x48);
    FUN_144d80090(param_1,param_1,*(undefined8 *)(*param_1 + 8));
    thunk_FUN_1400020a8(*param_1,0x58);
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return;
}



// FUNCTION 1453f5170 FUN_1453f5170 body=11 status=ok
// SIG undefined FUN_1453f5170(void)

undefined8 * FUN_1453f5170(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1453f5180 FUN_1453f5180 body=445 status=ok
// SIG undefined FUN_1453f5180(void)

ulonglong FUN_1453f5180(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  uint local_res18 [2];
  uint local_res20 [2];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  
  if (param_3 != 0) {
    *param_1 = (longlong)param_2;
    local_res18[0] = 0;
    uVar5 = param_2[2] + 1;
    if ((longlong)uVar5 <= (longlong)param_2[1]) {
      in_RAX = *param_2;
      bVar2 = *(byte *)(param_2[2] + in_RAX);
      uVar7 = (uint)bVar2;
      param_2[2] = uVar5;
      if ((char)bVar2 < '\0') {
        in_RAX = FUN_1453f5b20(2,local_res18,param_2);
        if ((char)in_RAX == '\0') goto LAB_1453f5328;
        in_RAX = (ulonglong)(local_res18[0] << 7);
        local_res18[0] = uVar7 & 0x7f | local_res18[0] << 7;
      }
      else {
        local_res18[0] = (uint)bVar2;
      }
      plVar8 = (longlong *)0x0;
      if (local_res18[0] != 0) {
        do {
          plVar6 = (longlong *)*param_1;
          lVar1 = plVar6[2] + 1;
          if (plVar6[1] < lVar1) goto LAB_1453f5328;
          bVar2 = *(byte *)(plVar6[2] + *plVar6);
          uVar7 = (uint)bVar2;
          plVar6[2] = lVar1;
          if ((char)bVar2 < '\0') {
            in_RAX = FUN_1453f5b20(2,local_res20);
            if ((char)in_RAX == '\0') goto LAB_1453f5328;
            local_res20[0] = uVar7 & 0x7f | local_res20[0] << 7;
          }
          else {
            local_res20[0] = (uint)bVar2;
          }
          plVar4 = (longlong *)FUN_14494321d(0x28);
          plVar6 = (longlong *)0x0;
          local_28 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            FUN_1453f5040(plVar4);
            *(undefined4 *)(plVar4 + 4) = 0;
            plVar6 = plVar4;
          }
          *(uint *)(plVar6 + 4) = local_res20[0];
          local_30 = plVar6;
          cVar3 = FUN_1453f5340(param_1,plVar6);
          if (cVar3 == '\0') {
            FUN_144d7ffa0(plVar6 + 2,plVar6 + 2,*(undefined8 *)(plVar6[2] + 8));
            thunk_FUN_1400020a8(plVar6[2],0x48);
            FUN_144d80090(plVar6,plVar6,*(undefined8 *)(*plVar6 + 8));
            thunk_FUN_1400020a8(*plVar6,0x58);
            in_RAX = thunk_FUN_1400020a8(plVar6,0x28);
            goto LAB_1453f5328;
          }
          local_30 = (longlong *)0x0;
          local_38 = plVar6;
          in_RAX = FUN_145589730(param_3,&local_38);
          uVar7 = (int)plVar8 + 1;
          plVar8 = (longlong *)(ulonglong)uVar7;
        } while (uVar7 < local_res18[0]);
      }
      uVar5 = FUN_1453f5340(param_1,param_3);
      return uVar5;
    }
  }
LAB_1453f5328:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1453f5340 FUN_1453f5340 body=875 status=ok
// SIG undefined FUN_1453f5340(void)

void FUN_1453f5340(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b4;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68 [6];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  local_88 = local_88 & 0xffffffff00000000;
  uStack_90 = param_2;
  FUN_1453f5ba0(&local_b0,0,&local_98);
  plVar12 = local_a8;
  plVar14 = local_b0;
  if (local_b0 != local_a8) {
    while( true ) {
      uVar10 = 0;
      plVar11 = plVar12 + -3;
      local_88 = plVar12[-1];
      uVar7 = plVar12[-2];
      iVar5 = (int)local_88;
      lVar3 = *plVar11;
      local_a8 = plVar11;
      if (lVar3 != 0) break;
LAB_1453f549d:
      if (uVar7 == 0) goto LAB_1453f563f;
      local_b8 = 0;
      plVar12 = (longlong *)*param_1;
      lVar1 = plVar12[2] + 1;
      if (plVar12[1] < lVar1) goto LAB_1453f563f;
      bVar2 = *(byte *)(plVar12[2] + *plVar12);
      uVar13 = (uint)bVar2;
      plVar12[2] = lVar1;
      if ((char)bVar2 < '\0') {
        cVar6 = FUN_1453f5b20(2,&local_b8);
        if (cVar6 == '\0') goto LAB_1453f563f;
        local_b8 = uVar13 & 0x7f | local_b8 << 7;
      }
      else {
        local_b8 = (uint)bVar2;
      }
      if (local_b8 != 0) {
        do {
          cVar6 = FUN_1453f56d0(param_1,uVar7);
          if (cVar6 == '\0') goto LAB_1453f563f;
          uVar13 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar13;
        } while (uVar13 < local_b8);
      }
      local_b4 = 0;
      plVar12 = (longlong *)*param_1;
      lVar1 = plVar12[2] + 1;
      if (plVar12[1] < lVar1) goto LAB_1453f563f;
      bVar2 = *(byte *)(plVar12[2] + *plVar12);
      uVar13 = (uint)bVar2;
      plVar12[2] = lVar1;
      if ((char)bVar2 < '\0') {
        cVar6 = FUN_1453f5b20(2,&local_b4);
        if (cVar6 == '\0') goto LAB_1453f563f;
        local_b4 = uVar13 & 0x7f | local_b4 << 7;
      }
      else {
        local_b4 = (uint)bVar2;
      }
      if (*(longlong *)(*param_1 + 8) - *(longlong *)(*param_1 + 0x10) <
          (longlong)(ulonglong)local_b4) goto LAB_1453f563f;
      uVar13 = 0;
      plVar12 = plVar11;
      if (local_b4 != 0) {
        do {
          uStack_90 = 0;
          iVar4 = iVar5;
          if (lVar3 != 0) {
            iVar4 = iVar5 + 1;
          }
          local_88 = CONCAT44(local_88._4_4_,iVar4);
          local_98 = uVar7;
          if (plVar11 == local_a0) {
            FUN_1453f5ba0(&local_b0,plVar11,&local_98);
          }
          else {
            local_98._0_4_ = (undefined4)uVar7;
            local_98._4_4_ = (undefined4)(uVar7 >> 0x20);
            *(undefined4 *)plVar11 = (undefined4)local_98;
            *(undefined4 *)((longlong)plVar11 + 4) = local_98._4_4_;
            *(undefined4 *)(plVar11 + 1) = 0;
            *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
            plVar11[2] = local_88;
            local_a8 = plVar11 + 3;
          }
          uVar13 = uVar13 + 1;
          plVar11 = local_a8;
          plVar12 = local_a8;
          plVar14 = local_b0;
        } while (uVar13 < local_b4);
      }
      if (plVar14 == plVar12) goto LAB_1453f563f;
    }
    if ((int)local_88 < 0x3e9) {
      local_68[1] = 0;
      local_68[2] = 0;
      local_68[3] = 0xf;
      local_68[0] = 0;
      cVar6 = FUN_1453f5910(param_1,local_68);
      if (cVar6 != '\0') {
        local_78 = FUN_14494321d(0x20);
        uVar7 = uVar10;
        if (local_78 != 0) {
          uVar7 = FUN_1453f5040(local_78);
        }
        local_70 = 0;
        local_80 = uVar7;
        cVar6 = FUN_145588420(lVar3,local_68,&local_80);
        if (cVar6 != '\0') {
          if (0xf < local_68[3]) {
            uVar9 = local_68[3] + 1;
            uVar8 = local_68[0];
            if (0xfff < uVar9) {
              uVar9 = local_68[3] + 0x28;
              uVar8 = *(ulonglong *)(local_68[0] - 8);
              if (0x1f < (local_68[0] - uVar8) - 8) goto LAB_1453f562d;
            }
            thunk_FUN_1400020a8(uVar8,uVar9);
          }
          local_68[2] = 0;
          local_68[3] = 0xf;
          local_68[0] = local_68[0] & 0xffffffffffffff00;
          goto LAB_1453f549d;
        }
      }
      if (0xf < local_68[3]) {
        uVar10 = local_68[3] + 1;
        uVar7 = local_68[0];
        if (0xfff < uVar10) {
          uVar10 = local_68[3] + 0x28;
          uVar7 = *(ulonglong *)(local_68[0] - 8);
          if (0x1f < (local_68[0] - uVar7) - 8) {
LAB_1453f562d:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(uVar7,uVar10);
      }
    }
  }
LAB_1453f563f:
  if (plVar14 != (longlong *)0x0) {
    uVar7 = (((longlong)local_a0 - (longlong)plVar14) / 0x18) * 0x18;
    plVar12 = plVar14;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      plVar12 = (longlong *)plVar14[-1];
      if (0x1f < (ulonglong)((longlong)plVar14 + (-8 - (longlong)plVar12))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(plVar12,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68[4] ^ (ulonglong)auStack_d8);
}



// FUNCTION 1453f56d0 FUN_1453f56d0 body=550 status=ok
// SIG undefined FUN_1453f56d0(void)

void FUN_1453f56d0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  int local_68 [2];
  void *local_60;
  longlong lStack_58;
  longlong local_50;
  longlong local_48 [6];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0xf;
  local_48[0] = 0;
  cVar3 = FUN_1453f5910(0,local_48);
  if (cVar3 != '\0') {
    local_68[0] = 0;
    plVar2 = (longlong *)*param_1;
    lVar4 = plVar2[2] + 1;
    if (plVar2[1] < lVar4) goto LAB_1453f589e;
    bVar1 = *(byte *)(plVar2[2] + *plVar2);
    uVar6 = (ulonglong)bVar1;
    uVar7 = (uint)bVar1;
    plVar2[2] = lVar4;
    if ((char)bVar1 < '\0') {
      cVar3 = FUN_1453f5b20(2,local_68);
      if (cVar3 == '\0') goto LAB_1453f589e;
      uVar6 = (ulonglong)(uVar7 & 0x7f | local_68[0] << 7);
    }
    local_68[0] = (int)uVar6;
    if ((local_68[0] == 0) ||
       (*(longlong *)(*param_1 + 8) - *(longlong *)(*param_1 + 0x10) < (longlong)uVar6))
    goto LAB_1453f589e;
    local_60 = (void *)0x0;
    lStack_58 = 0;
    local_50 = 0;
    if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a8b12();
    }
    if (uVar6 < 0x1000) {
      local_60 = (void *)FUN_14494321d(uVar6);
    }
    else {
      if (uVar6 + 0x27 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar4 = FUN_14494321d();
      if (lVar4 == 0) goto LAB_1453f587c;
      local_60 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)local_60 - 8) = lVar4;
    }
    lVar4 = (longlong)local_60 + uVar6;
    local_50 = lVar4;
    memset(local_60,0,uVar6);
    lStack_58 = lVar4;
    cVar3 = FUN_1453f4f90(*param_1,local_60,local_68[0]);
    if (cVar3 != '\0') {
      thunk_FUN_145588fb0(param_2,local_48,&local_60);
    }
    if (local_60 != (void *)0x0) {
      uVar6 = local_50 - (longlong)local_60;
      pvVar5 = local_60;
      if (0xfff < uVar6) {
        uVar6 = uVar6 + 0x27;
        pvVar5 = *(void **)((longlong)local_60 + -8);
        if (0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar5))) {
LAB_1453f587c:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar5,uVar6);
      local_60 = (void *)0x0;
      lStack_58 = 0;
      local_50 = 0;
    }
  }
LAB_1453f589e:
  if (0xf < (ulonglong)local_48[3]) {
    uVar6 = local_48[3] + 1;
    lVar4 = local_48[0];
    if (0xfff < uVar6) {
      uVar6 = local_48[3] + 0x28;
      lVar4 = *(longlong *)(local_48[0] + -8);
      if (0x1f < (local_48[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48[4] ^ (ulonglong)auStack_88);
}



// FUNCTION 1453f5910 FUN_1453f5910 body=287 status=ok
// SIG undefined FUN_1453f5910(void)

undefined8 FUN_1453f5910(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong _Size;
  ulonglong _Size_00;
  
  plVar3 = (longlong *)*param_1;
  lVar1 = plVar3[2] + 1;
  if (plVar3[1] < lVar1) {
    return 0;
  }
  bVar2 = *(byte *)(plVar3[2] + *plVar3);
  _Size_00 = (ulonglong)bVar2;
  plVar3[2] = lVar1;
  uVar4 = param_2[2];
  if (uVar4 < _Size_00) {
    _Size = _Size_00 - uVar4;
    if (param_2[3] - uVar4 < _Size) {
      FUN_144e63930(param_2,_Size,0,_Size,0);
    }
    else {
      param_2[2] = _Size_00;
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      memset((void *)((longlong)puVar5 + uVar4),0,_Size);
      *(undefined1 *)((longlong)((longlong)puVar5 + uVar4) + _Size) = 0;
    }
  }
  else {
    param_2[2] = _Size_00;
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
    *(undefined1 *)((longlong)puVar5 + _Size_00) = 0;
  }
  if (bVar2 != 0) {
    if (param_2[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14709e5c0();
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    param_1 = (longlong *)*param_1;
    if (param_1[1] < (longlong)(param_1[2] + _Size_00)) {
      return 0;
    }
    memcpy(param_2,(void *)(*param_1 + param_1[2]),_Size_00);
    param_1[2] = param_1[2] + _Size_00;
  }
  return 1;
}



// FUNCTION 1453f5a30 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 1453f5a80 FID_conflict:~vector<GSISymbolEntry,std::allocator<GSISymbolEntry>_> body=122 status=ok
// SIG undefined FID_conflict:~vector<GSISymbolEntry,std::allocator<GSISymbolEntry>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::vector<struct GSISymbolEntry,class std::allocator<struct GSISymbolEntry>
   >::~vector<struct GSISymbolEntry,class std::allocator<struct GSISymbolEntry> >(void) __ptr64
    private: void __cdecl std::vector<struct GSISymbolEntry,class std::allocator<struct
   GSISymbolEntry> >::_Tidy(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<GSISymbolEntry,std::allocator<GSISymbolEntry>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f5b00 FUN_1453f5b00 body=16 status=ok
// SIG undefined FUN_1453f5b00(void)

void FUN_1453f5b00(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1453f5b20 FUN_1453f5b20 body=119 status=ok
// SIG undefined FUN_1453f5b20(void)

ulonglong FUN_1453f5b20(uint param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  
  if (param_1 < 6) {
    lVar1 = param_3[2] + 1;
    if (lVar1 <= param_3[1]) {
      lVar4 = *param_3;
      bVar2 = *(byte *)(param_3[2] + lVar4);
      param_3[2] = lVar1;
      if (-1 < (char)bVar2) {
        *param_2 = (uint)bVar2;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      in_RAX = FUN_1453f5b20(param_1 + 1,param_2);
      if ((char)in_RAX != '\0') {
        uVar3 = *param_2;
        *param_2 = bVar2 & 0x7f | uVar3 << 7;
        return CONCAT71((uint7)(uint3)((uVar3 << 7) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1453f5ba0 FUN_1453f5ba0 body=531 status=ok
// SIG undefined FUN_1453f5ba0(void)

undefined8 * FUN_1453f5ba0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  void *_Src;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *_Dst;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  longlong lVar10;
  
  lVar5 = *param_1;
  lVar6 = ((longlong)param_2 - lVar5) / 6 + ((longlong)param_2 - lVar5 >> 0x3f);
  lVar10 = (param_1[1] - lVar5) / 0x18;
  if (lVar10 == 0xaaaaaaaaaaaaaaa) {
    FUN_1453f5b00();
    pcVar3 = (code *)swi(3);
    puVar8 = (undefined8 *)(*pcVar3)();
    return puVar8;
  }
  uVar1 = lVar10 + 1;
  uVar7 = (param_1[2] - lVar5) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar7 >> 1) < uVar7) {
LAB_1453f5da9:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar9 = uVar1;
  if (uVar1 <= uVar7) {
    uVar9 = uVar7;
  }
  if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_1453f5da9;
  uVar7 = uVar9 * 0x18;
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)FUN_14494321d(uVar7);
    }
  }
  else {
    if (uVar7 + 0x27 <= uVar7) goto LAB_1453f5da9;
    lVar5 = FUN_14494321d();
    if (lVar5 == 0) goto LAB_1453f5da2;
    puVar8 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar5;
  }
  puVar2 = puVar8 + ((lVar6 >> 2) - (lVar6 >> 0x3f)) * 3;
  uVar4 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = param_3[2];
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar8;
    param_2 = _Src;
  }
  else {
    memmove(puVar8,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar2 + 3;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar7 = ((param_1[2] - lVar5) / 0x18) * 0x18;
    lVar10 = lVar5;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      lVar10 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) {
LAB_1453f5da2:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar10,uVar7);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 3);
  param_1[2] = (longlong)(puVar8 + uVar9 * 3);
  return puVar2;
}



// FUNCTION 1453f5dc0 FUN_1453f5dc0 body=16 status=ok
// SIG undefined FUN_1453f5dc0(void)

undefined8 * FUN_1453f5dc0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1453f5dd0 FUN_1453f5dd0 body=3 status=ok
// SIG undefined FUN_1453f5dd0(void)

void FUN_1453f5dd0(void)

{
  return;
}



// FUNCTION 1453f5de0 FUN_1453f5de0 body=407 status=ok
// SIG undefined FUN_1453f5de0(void)

ulonglong FUN_1453f5de0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res10 [2];
  
  uVar2 = param_2[2] + 1;
  if ((longlong)uVar2 <= param_2[1]) {
    uVar2 = 0x202;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2[2] + *param_2);
    param_2[2] = param_2[2] + 1;
    lVar7 = param_2[2];
    lVar5 = param_2[1];
    if (*(ushort *)((longlong)param_2 + 0x32) < 0x202) {
      lVar6 = lVar7 + 4;
      if (lVar5 < lVar6) goto LAB_1453f5f65;
      uVar3 = *(uint *)(lVar7 + *param_2);
      param_2[2] = lVar6;
    }
    else {
      lVar6 = lVar7 + 1;
      if (lVar5 < lVar6) goto LAB_1453f5f65;
      bVar1 = *(byte *)(lVar7 + *param_2);
      param_2[2] = lVar6;
      uVar3 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar2 = FUN_1453f5ff0(2,local_res10,param_2);
        if ((char)uVar2 == '\0') goto LAB_1453f5f65;
        lVar5 = param_2[1];
        lVar6 = param_2[2];
        uVar3 = uVar3 & 0x7f | local_res10[0] << 7;
      }
    }
    uVar2 = (ulonglong)uVar3;
    if (((longlong)(ulonglong)uVar3 <= lVar5 - lVar6) && (lVar6 = *param_2 + lVar6, 0 < (int)uVar3))
    {
      lVar7 = (longlong)(int)uVar3;
      *param_1 = lVar6;
      bVar1 = *(byte *)(lVar7 + lVar6 + -1) >> 6;
      uVar2 = 0;
      if (bVar1 == 0) {
        *(uint *)(param_1 + 1) = uVar3 - 1;
        uVar4 = *(byte *)(lVar7 + lVar6 + -1) & 0x3f;
      }
      else if (bVar1 == 1) {
        if ((int)uVar3 < 2) goto LAB_1453f5f65;
        *(uint *)(param_1 + 1) = uVar3 - 2;
        uVar4 = CONCAT11(*(undefined1 *)(lVar7 + -1 + lVar6),*(undefined1 *)(lVar7 + -2 + lVar6)) &
                0x3fff;
      }
      else {
        if ((bVar1 != 2) || ((int)uVar3 < 3)) goto LAB_1453f5f65;
        *(uint *)(param_1 + 1) = uVar3 - 3;
        uVar4 = (*(byte *)(lVar7 + -1 + lVar6) & 0x3f) << 0x10 | (uint)*(byte *)(lVar7 + -3 + lVar6)
                | (uint)*(byte *)(lVar7 + -2 + lVar6) << 8;
      }
      uVar4 = uVar4 + 0x1000;
      uVar2 = (ulonglong)uVar4;
      *(uint *)((longlong)param_1 + 0xc) = uVar4;
      if (uVar4 < 0x100000) {
        param_2[2] = param_2[2] + (ulonglong)uVar3;
        return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
      }
    }
  }
LAB_1453f5f65:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1453f5f80 FUN_1453f5f80 body=107 status=ok
// SIG undefined FUN_1453f5f80(void)

undefined4 FUN_1453f5f80(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  bVar5 = -(char)param_1[2];
  if (uVar1 < 0x1000) {
    iVar2 = (int)param_1[1];
    if (0 < iVar2) {
      *(int *)(param_1 + 1) = iVar2 + -1;
      uVar1 = (uint)*(byte *)((longlong)iVar2 + -1 + *param_1) + uVar1 * 0x100;
    }
  }
  iVar2 = (uVar1 >> 8) * (uint)bVar5;
  uVar4 = uVar1 & 0xff;
  uVar3 = (uint)bVar5;
  if (uVar4 < bVar5) {
    iVar2 = uVar4 + iVar2;
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),uVar4 < uVar3);
  }
  iVar2 = (uVar1 - uVar3) - iVar2;
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),uVar4 < uVar3);
}



// FUNCTION 1453f5ff0 FUN_1453f5ff0 body=119 status=ok
// SIG undefined FUN_1453f5ff0(void)

ulonglong FUN_1453f5ff0(uint param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  
  if (param_1 < 6) {
    lVar1 = param_3[2] + 1;
    if (lVar1 <= param_3[1]) {
      lVar4 = *param_3;
      bVar2 = *(byte *)(param_3[2] + lVar4);
      param_3[2] = lVar1;
      if (-1 < (char)bVar2) {
        *param_2 = (uint)bVar2;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      in_RAX = FUN_1453f5ff0(param_1 + 1,param_2);
      if ((char)in_RAX != '\0') {
        uVar3 = *param_2;
        *param_2 = bVar2 & 0x7f | uVar3 << 7;
        return CONCAT71((uint7)(uint3)((uVar3 << 7) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1453f6070 FUN_1453f6070 body=86 status=ok
// SIG undefined FUN_1453f6070(void)

void FUN_1453f6070(vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  FUN_1453f6350(param_1 + 0x18,uVar1);
  if ((ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)param_1 >> 2) < uVar1) {
    if (0x3fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1453f6310();
    }
    std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Reallocate_exactly
              (param_1,uVar1);
  }
  return;
}



// FUNCTION 1453f60d0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: static void __cdecl phmap::allocator_traits<class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>
   >::deallocate(class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M> &
   __ptr64,struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 4;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 1453f6120 FUN_1453f6120 body=110 status=ok
// SIG undefined FUN_1453f6120(void)

ulonglong FUN_1453f6120(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x4000000000000000) {
    param_2 = param_2 * 4;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 1453f61b0 FUN_1453f61b0 body=91 status=ok
// SIG undefined FUN_1453f61b0(void)

void FUN_1453f61b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f6210 _Reallocate_exactly body=102 status=ok
// SIG void _Reallocate_exactly(vector<unsigned___int64,std::allocator<unsigned___int64>_> * this, __uint64 param_1)

/* Library Function - Single Match
    private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::_Reallocate_exactly(unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Reallocate_exactly
          (vector<unsigned___int64,std::allocator<unsigned___int64>_> *this,__uint64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  __uint64 *_Dst;
  
  lVar1 = *(longlong *)(this + 8);
  lVar2 = *(longlong *)this;
  _Dst = (__uint64 *)FUN_1453f6120();
  memmove(_Dst,*(void **)this,*(longlong *)(this + 8) - (longlong)*(void **)this);
  _Change_array(this,_Dst,lVar1 - lVar2 >> 2,param_1);
  return;
}



// FUNCTION 1453f6280 _Change_array body=135 status=ok
// SIG void _Change_array(vector<unsigned___int64,std::allocator<unsigned___int64>_> * this, __uint64 * param_1, __uint64 param_2, __uint64 param_3)

/* Library Function - Single Match
    private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Change_array
          (vector<unsigned___int64,std::allocator<unsigned___int64>_> *this,__uint64 *param_1,
          __uint64 param_2,__uint64 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)this;
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(this + 0x10) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
  }
  *(__uint64 **)this = param_1;
  *(__uint64 *)(this + 8) = (longlong)param_1 + param_2 * 4;
  *(__uint64 *)(this + 0x10) = (longlong)param_1 + param_3 * 4;
  return;
}



// FUNCTION 1453f6310 FUN_1453f6310 body=16 status=ok
// SIG undefined FUN_1453f6310(void)

void FUN_1453f6310(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1453f6330 FUN_1453f6330 body=16 status=ok
// SIG undefined FUN_1453f6330(void)

void FUN_1453f6330(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid vector subscript");
}



// FUNCTION 1453f6350 FUN_1453f6350 body=148 status=ok
// SIG undefined FUN_1453f6350(void)

void FUN_1453f6350(longlong *param_1,ulonglong param_2)

{
  size_t _Size;
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  
  _Dst = (void *)param_1[1];
  lVar1 = *param_1;
  uVar2 = (longlong)_Dst - lVar1 >> 2;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + param_2 * 4;
    return;
  }
  if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 2) < param_2) {
      FUN_146c960b8(param_1,param_2,local_res8);
      return;
    }
    _Size = (param_2 - uVar2) * 4;
    memset(_Dst,0,_Size);
    param_1[1] = (longlong)(_Size + (longlong)_Dst);
  }
  return;
}



// FUNCTION 1453f63f0 FUN_1453f63f0 body=170 status=ok
// SIG undefined FUN_1453f63f0(void)

void FUN_1453f63f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    uVar3 = param_1[5] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f6494;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_1453f6494:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f64a0 FUN_1453f64a0 body=118 status=ok
// SIG undefined FUN_1453f64a0(void)

uint * FUN_1453f64a0(longlong param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 == -1) {
    *param_2 = 0xffffffff;
    return param_2;
  }
  iVar3 = 1;
  if (param_3 + 1U == ((param_3 + 1U) / 3) * 3) {
    iVar3 = -2;
  }
  uVar2 = iVar3 + param_3;
  if ((uVar2 != 0xffffffff) &&
     (uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4), uVar2 != 0xffffffff))
  {
    uVar1 = uVar2 + 1;
    if (uVar1 == (uVar1 / 3) * 3) {
      uVar1 = uVar2 - 2;
    }
    *param_2 = uVar1;
    return param_2;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1453f6520 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: static void __cdecl phmap::allocator_traits<class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>
   >::deallocate(class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M> &
   __ptr64,struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 4;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 1453f6570 FUN_1453f6570 body=91 status=ok
// SIG undefined FUN_1453f6570(void)

void FUN_1453f6570(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f65d0 FUN_1453f65d0 body=16 status=ok
// SIG undefined FUN_1453f65d0(void)

void FUN_1453f65d0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1453f65f0 FUN_1453f65f0 body=486 status=ok
// SIG undefined FUN_1453f65f0(void)

void FUN_1453f65f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    uVar3 = param_1[0x14] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f67d0;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    uVar3 = param_1[0x11] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f67d0;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    uVar3 = param_1[0xd] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f67d0;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    uVar3 = param_1[8] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f67d0;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    uVar3 = param_1[5] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f67d0;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_1453f67d0:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f67e0 FUN_1453f67e0 body=204 status=ok
// SIG undefined FUN_1453f67e0(void)

void FUN_1453f67e0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined8 *)param_1[1];
  lVar4 = *param_1;
  lVar1 = ((longlong)puVar3 - lVar4) / 6 + ((longlong)puVar3 - lVar4 >> 0x3f);
  uVar2 = (lVar1 >> 1) - (lVar1 >> 0x3f);
  if (param_2 < uVar2) {
    param_1[1] = lVar4 + param_2 * 0xc;
    return;
  }
  if (uVar2 < param_2) {
    if ((ulonglong)((param_1[2] - lVar4) / 0xc) < param_2) {
      FUN_1454067f0(param_1,param_2);
      return;
    }
    for (lVar4 = param_2 - uVar2; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar3 = *param_3;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_3 + 1);
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
    }
    param_1[1] = (longlong)puVar3;
  }
  return;
}



// FUNCTION 1453f68b0 FUN_1453f68b0 body=168 status=ok
// SIG undefined FUN_1453f68b0(void)

void FUN_1453f68b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x30) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f6952;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x18) - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_1453f6952:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1453f6960 FUN_1453f6960 body=413 status=ok
// SIG undefined FUN_1453f6960(void)

void FUN_1453f6960(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1453f68b0(param_1 + 0x13);
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    uVar3 = param_1[0x11] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f6af7;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    uVar3 = param_1[0xe] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f6af7;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    uVar3 = param_1[0xb] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f6af7;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    uVar3 = param_1[6] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f6af7;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_1453f6af7:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f6b00 FUN_1453f6b00 body=404 status=ok
// SIG undefined FUN_1453f6b00(void)

undefined8 * FUN_1453f6b00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[5];
  uVar3 = param_2[4];
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  uVar1 = param_2[7];
  param_2[7] = 0;
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_2[0xb];
  uVar2 = param_2[10];
  uVar3 = param_2[9];
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[9] = 0;
  param_1[9] = uVar3;
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xe];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar1;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0xf];
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar1;
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  uVar1 = param_2[0x16];
  uVar2 = param_2[0x15];
  uVar3 = param_2[0x14];
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar1;
  uVar1 = param_2[0x17];
  uVar2 = param_2[0x19];
  uVar3 = param_2[0x18];
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x17] = 0;
  param_1[0x17] = uVar1;
  param_1[0x18] = uVar3;
  param_1[0x19] = uVar2;
  return param_1;
}



// FUNCTION 1453f6ca0 _Reallocate_exactly body=102 status=ok
// SIG void _Reallocate_exactly(vector<unsigned___int64,std::allocator<unsigned___int64>_> * this, __uint64 param_1)

/* Library Function - Single Match
    private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::_Reallocate_exactly(unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Reallocate_exactly
          (vector<unsigned___int64,std::allocator<unsigned___int64>_> *this,__uint64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  __uint64 *_Dst;
  
  lVar1 = *(longlong *)(this + 8);
  lVar2 = *(longlong *)this;
  _Dst = (__uint64 *)FUN_144d7f5e0();
  memmove(_Dst,*(void **)this,*(longlong *)(this + 8) - (longlong)*(void **)this);
  _Change_array(this,_Dst,lVar1 - lVar2 >> 2,param_1);
  return;
}



// FUNCTION 1453f6d10 FUN_1453f6d10 body=46 status=ok
// SIG undefined FUN_1453f6d10(void)

void FUN_1453f6d10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1453f65f0(lVar1);
    thunk_FUN_1400020a8(lVar1,0xa8);
    return;
  }
  return;
}



// FUNCTION 1453f6d40 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0xc;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 1453f6d90 FUN_1453f6d90 body=121 status=ok
// SIG undefined FUN_1453f6d90(void)

void FUN_1453f6d90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0xc) * 0xc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f6e10 FUN_1453f6e10 body=16 status=ok
// SIG undefined FUN_1453f6e10(void)

void FUN_1453f6e10(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1453f6e30 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: static void __cdecl phmap::allocator_traits<class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>
   >::deallocate(class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M> &
   __ptr64,struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 4;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 1453f6e80 FUN_1453f6e80 body=91 status=ok
// SIG undefined FUN_1453f6e80(void)

void FUN_1453f6e80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f6ee0 FUN_1453f6ee0 body=16 status=ok
// SIG undefined FUN_1453f6ee0(void)

void FUN_1453f6ee0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1453f6f00 FUN_1453f6f00 body=92 status=ok
// SIG undefined FUN_1453f6f00(void)

void FUN_1453f6f00(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1400020a8(puVar1,0x18);
    puVar1 = puVar2;
  }
  thunk_FUN_1400020a8(*param_1,0x18);
  return;
}



// FUNCTION 1453f6f60 FUN_1453f6f60 body=459 status=ok
// SIG undefined FUN_1453f6f60(void)

longlong * FUN_1453f6f60(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  plVar9 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x30) &
            (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10 + lVar1);
  plVar4 = (longlong *)*plVar9;
  plVar8 = (longlong *)plVar9[1];
  plVar6 = param_2;
  do {
    plVar7 = (longlong *)*plVar6;
    thunk_FUN_1400020a8(plVar6,0x18);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar6 == plVar8) {
      puVar5 = puVar3;
      if (plVar4 == param_2) {
        *plVar9 = (longlong)puVar2;
        puVar5 = puVar2;
      }
      plVar9[1] = (longlong)puVar5;
      while (plVar7 != param_3) {
        plVar9 = (longlong *)
                 ((*(ulonglong *)(param_1 + 0x30) &
                  (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3) * 0x10 + lVar1);
        plVar4 = (longlong *)plVar9[1];
        plVar8 = plVar7;
        while( true ) {
          plVar7 = (longlong *)*plVar8;
          thunk_FUN_1400020a8(plVar8,0x18);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar8 == plVar4) break;
          plVar8 = plVar7;
          if (plVar7 == param_3) goto LAB_1453f703a;
        }
        *plVar9 = (longlong)puVar2;
        plVar9[1] = (longlong)puVar2;
      }
      goto LAB_1453f703d;
    }
    plVar6 = plVar7;
  } while (plVar7 != param_3);
  if (plVar4 == param_2) {
LAB_1453f703a:
    *plVar9 = (longlong)plVar7;
  }
LAB_1453f703d:
  *puVar3 = plVar7;
  plVar7[1] = (longlong)puVar3;
  return param_3;
}



// FUNCTION 1453f7130 FUN_1453f7130 body=178 status=ok
// SIG undefined FUN_1453f7130(void)

void FUN_1453f7130(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1453f6f60(param_1,**(undefined8 **)(param_1 + 8),*(undefined8 **)(param_1 + 8));
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      thunk_FUN_1400020a8(puVar1,0x18);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_145407080(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



// FUNCTION 1453f71f0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453f7250 FUN_1453f7250 body=163 status=ok
// SIG undefined FUN_1453f7250(void)

void FUN_1453f7250(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar5 = *(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffff8;
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar1 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (lVar1 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    thunk_FUN_1400020a8(puVar2,0x18);
    puVar2 = puVar3;
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 8),0x18);
  return;
}



// FUNCTION 1453f7300 FUN_1453f7300 body=269 status=ok
// SIG undefined FUN_1453f7300(void)

/* WARNING: Removing unreachable block (ram,0x0001453f73e6) */
/* WARNING: Removing unreachable block (ram,0x0001453f73f3) */
/* WARNING: Removing unreachable block (ram,0x0001453f73f8) */

undefined4 * FUN_1453f7300(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar3 = FUN_14494321d(0x18);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)(param_1 + 2) = lVar3;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(undefined8 *)(param_1 + 2);
  puVar4 = (undefined8 *)FUN_14494321d(0x80);
  lVar3 = *(longlong *)(param_1 + 6);
  lVar5 = *(longlong *)(param_1 + 10) - lVar3 >> 3;
  if (lVar5 != 0) {
    uVar6 = lVar5 * 8;
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
  }
  *(undefined8 **)(param_1 + 6) = puVar4;
  puVar1 = puVar4 + 0x10;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 **)(param_1 + 10) = puVar1;
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    *puVar4 = uVar2;
  }
  return param_1;
}



// FUNCTION 1453f7420 FUN_1453f7420 body=126 status=ok
// SIG undefined FUN_1453f7420(void)

void FUN_1453f7420(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(longlong **)(param_1 + 0xd0) = param_2;
  lVar3 = (**(code **)(*param_2 + 0x38))(param_2);
  lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + 8);
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x10);
  lVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  lVar2 = (*(longlong **)(lVar4 + 0x40))[2];
  lVar4 = **(longlong **)(lVar4 + 0x40);
  lVar5 = (**(code **)(*param_2 + 0x38))(param_2);
  FUN_144d7d180(param_1,lVar2 + lVar4,lVar1 - lVar3,
                *(undefined2 *)(*(longlong *)(lVar5 + 0x40) + 0x32));
  return;
}



// FUNCTION 1453f74a0 FUN_1453f74a0 body=235 status=ok
// SIG undefined FUN_1453f74a0(void)

uint FUN_1453f74a0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_res8;
  
  uVar6 = 0;
  uVar5 = local_res8;
  if (*(char *)(param_1 + 0x68) != '\0') {
    uVar7 = *(ulonglong *)(param_1 + 0x60);
    pbVar3 = (byte *)(*(longlong *)(param_1 + 0x50) + (uVar7 >> 3));
    if (pbVar3 < *(byte **)(param_1 + 0x58)) {
      bVar1 = *pbVar3;
      *(ulonglong *)(param_1 + 0x60) = uVar7 + 1;
      uVar5 = bVar1 >> ((byte)uVar7 & 7) & 1;
    }
    else {
      uVar5 = 0;
    }
  }
  if (uVar5 != 0) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      return local_res8 * 2 | uVar5;
    }
    uVar7 = *(ulonglong *)(param_1 + 0x60);
    lVar2 = *(longlong *)(param_1 + 0x50);
    pbVar3 = (byte *)((uVar7 >> 3) + lVar2);
    if (pbVar3 < *(byte **)(param_1 + 0x58)) {
      uVar4 = *pbVar3 >> ((byte)uVar7 & 7) & 1;
      uVar7 = uVar7 + 1;
      *(ulonglong *)(param_1 + 0x60) = uVar7;
    }
    else {
      uVar4 = 0;
    }
    pbVar3 = (byte *)((uVar7 >> 3) + lVar2);
    if (pbVar3 < *(byte **)(param_1 + 0x58)) {
      uVar6 = *pbVar3 >> ((byte)uVar7 & 7) & 1;
      *(ulonglong *)(param_1 + 0x60) = uVar7 + 1;
    }
    return (uVar4 | uVar6 * 2) * 2 | uVar5;
  }
  return 0;
}



// FUNCTION 1453f7590 FUN_1453f7590 body=58 status=ok
// SIG undefined FUN_1453f7590(void)

void FUN_1453f7590(longlong param_1)

{
  if (*(char *)(param_1 + 0x68) != '\0') {
    FUN_144d7d260(param_1 + 0x38);
  }
  if (*(ushort *)(param_1 + 0x32) < 0x202) {
    FUN_144d7d260(param_1 + 0x88);
    return;
  }
  return;
}



// FUNCTION 1453f75d0 FUN_1453f75d0 body=154 status=ok
// SIG undefined FUN_1453f75d0(void)

ulonglong FUN_1453f75d0(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong local_res8;
  
  param_1[7] = *param_1;
  param_1[8] = param_1[1];
  param_1[9] = param_1[2];
  param_1[10] = param_1[3];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_1 + 0x2c);
  param_1[0xd] = param_1[6];
  uVar2 = FUN_144d7d1a0(param_1 + 7,1,&local_res8);
  if ((char)uVar2 != '\0') {
    *param_1 = param_1[7];
    param_1[1] = param_1[8];
    param_1[2] = param_1[9];
    param_1[3] = param_1[10];
    param_1[4] = param_1[0xb];
    param_1[5] = param_1[0xc];
    param_1[6] = param_1[0xd];
    uVar2 = param_1[1] - param_1[2];
    if (local_res8 <= uVar2) {
      lVar1 = param_1[2] + local_res8;
      param_1[2] = lVar1;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1453f7670 FUN_1453f7670 body=191 status=ok
// SIG undefined FUN_1453f7670(void)

ulonglong FUN_1453f7670(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  
  if (0x201 < *(ushort *)((longlong)param_1 + 0x32)) {
    uVar3 = FUN_1453f5de0(param_1 + 0xe,param_1);
    return uVar3;
  }
  puVar1 = param_1 + 0x11;
  *puVar1 = *param_1;
  param_1[0x12] = param_1[1];
  param_1[0x13] = param_1[2];
  param_1[0x14] = param_1[3];
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0x2c);
  param_1[0x17] = param_1[6];
  uVar3 = FUN_144d7d1a0(puVar1,1,&local_res8);
  if ((char)uVar3 != '\0') {
    *param_1 = *puVar1;
    param_1[1] = param_1[0x12];
    param_1[2] = param_1[0x13];
    param_1[3] = param_1[0x14];
    param_1[4] = param_1[0x15];
    param_1[5] = param_1[0x16];
    param_1[6] = param_1[0x17];
    uVar3 = param_1[1] - param_1[2];
    if (local_res8 <= uVar3) {
      lVar2 = param_1[2] + local_res8;
      param_1[2] = lVar2;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1453f7730 FUN_1453f7730 body=334 status=ok
// SIG undefined FUN_1453f7730(void)

undefined8 FUN_1453f7730(longlong param_1)

{
  __uint64 *p_Var1;
  longlong *plVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong *puVar12;
  longlong local_38 [2];
  
  uVar6 = (ulonglong)*(int *)(param_1 + 200);
  if (0 < *(int *)(param_1 + 200)) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6;
    uVar7 = SUB168(ZEXT816(0x18) * auVar4,0);
    if (SUB168(ZEXT816(0x18) * auVar4,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = uVar7 + 8;
    if (0xfffffffffffffff7 < uVar7) {
      lVar8 = -1;
    }
    puVar9 = (ulonglong *)FUN_144a7d36f(lVar8);
    puVar12 = (ulonglong *)0x0;
    puVar10 = puVar12;
    if (puVar9 != (ulonglong *)0x0) {
      *puVar9 = uVar6;
      _eh_vector_constructor_iterator_(puVar9 + 1,0x18,uVar6,FUN_1453f5dc0,FUN_1453f5dd0);
      puVar10 = puVar9 + 1;
    }
    plVar2 = (longlong *)(param_1 + 0xc0);
    if (plVar2 == local_38) {
      if (puVar10 != (ulonglong *)0x0) {
        _eh_vector_destructor_iterator_(puVar10,0x18,puVar10[-1],FUN_1453f5dd0);
        thunk_FUN_1400020a8(puVar10 + -1,puVar10[-1] * 0x18 + 8);
      }
    }
    else {
      pvVar3 = (void *)*plVar2;
      *plVar2 = (longlong)puVar10;
      if (pvVar3 != (void *)0x0) {
        p_Var1 = (__uint64 *)((longlong)pvVar3 + -8);
        _eh_vector_destructor_iterator_(pvVar3,0x18,*p_Var1,FUN_1453f5dd0);
        thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x18 + 8);
      }
    }
    if (0 < *(int *)(param_1 + 200)) {
      do {
        cVar5 = FUN_1453f5de0(*plVar2 + (longlong)(int)puVar12 * 0x18,param_1);
        if (cVar5 == '\0') {
          return 0;
        }
        uVar11 = (int)puVar12 + 1;
        puVar12 = (ulonglong *)(ulonglong)uVar11;
      } while ((int)uVar11 < *(int *)(param_1 + 200));
    }
  }
  return 1;
}



// FUNCTION 1453f7880 FUN_1453f7880 body=122 status=ok
// SIG undefined FUN_1453f7880(void)

void FUN_1453f7880(longlong param_1)

{
  __uint64 *p_Var1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0xc0);
  if (pvVar2 != (void *)0x0) {
    p_Var1 = (__uint64 *)((longlong)pvVar2 + -8);
    _eh_vector_destructor_iterator_(pvVar2,0x18,*p_Var1,FUN_1453f5dd0);
    thunk_FUN_1400020a8(p_Var1,*p_Var1 * 0x18 + 8);
  }
  FUN_144d7d280(param_1 + 0xa0);
  FUN_1453f5dd0(param_1 + 0x70);
  FUN_144d7d280(param_1 + 0x50);
  FUN_144d7d280(param_1 + 0x18);
  return;
}



// FUNCTION 1453f7900 FUN_1453f7900 body=660 status=ok
// SIG undefined FUN_1453f7900(void)

void FUN_1453f7900(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar5 = 0xffffffff;
  uVar6 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar9 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  else {
    iVar7 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar7 = -2;
    }
    uVar9 = (ulonglong)(iVar7 + param_2);
    uVar2 = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      uVar2 = param_2 + 2;
    }
  }
  iVar7 = *(int *)(param_1 + 0x118);
  iVar8 = (int)uVar9;
  if ((iVar7 == 0) || (iVar7 == 1)) {
    if (iVar8 == -1) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar9 * 4);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
    *piVar1 = *piVar1 + 1;
    if (uVar2 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
LAB_1453f7afc:
      uVar2 = *(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar2 * 4);
    }
  }
  else {
    if (iVar7 != 3) {
      if (iVar7 == 5) {
        if (param_2 == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar6 * 4);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
        *piVar1 = *piVar1 + 1;
        if (iVar8 == -1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar9 * 4);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
        *piVar1 = *piVar1 + 1;
        if (uVar2 == 0xffffffff) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + 0x3fffffffc);
          *piVar1 = *piVar1 + 2;
          goto LAB_1453f7b17;
        }
      }
      else {
        if (iVar7 != 7) goto LAB_1453f7b17;
        if (param_2 == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar6 * 4);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
        *piVar1 = *piVar1 + 2;
        if (iVar8 == -1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar9 * 4);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
        *piVar1 = *piVar1 + 2;
        if (uVar2 == 0xffffffff) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + 0x3fffffffc);
          *piVar1 = *piVar1 + 2;
          goto LAB_1453f7b17;
        }
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) +
                      (ulonglong)*(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar2 * 4) *
                      4);
      *piVar1 = *piVar1 + 2;
      goto LAB_1453f7b17;
    }
    if (param_2 == 0xffffffff) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar6 * 4);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
    *piVar1 = *piVar1 + 1;
    if (iVar8 == -1) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar9 * 4);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
    *piVar1 = *piVar1 + 2;
    if (uVar2 != 0xffffffff) goto LAB_1453f7afc;
    uVar2 = 0xffffffff;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar2 * 4);
  *piVar1 = *piVar1 + 1;
LAB_1453f7b17:
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x118) != 5)) {
    *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
    return;
  }
  if (param_2 != 0xffffffff) {
    iVar7 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar7 = -2;
    }
    if (iVar7 + param_2 != 0xffffffff) {
      uVar5 = *(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)(iVar7 + param_2) * 4);
    }
  }
  uVar4 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar5 * 4) < 6) {
    uVar4 = 5;
  }
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  return;
}



// FUNCTION 1453f7ba0 FUN_1453f7ba0 body=127 status=ok
// SIG undefined FUN_1453f7ba0(void)

void FUN_1453f7ba0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1453f5dd0(param_1 + 0x100);
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0xf8) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_1453f7880(param_1);
  return;
}



// FUNCTION 1453f7c20 FUN_1453f7c20 body=1224 status=ok
// SIG undefined FUN_1453f7c20(void)

ulonglong FUN_1453f7c20(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  size_t sVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *pvVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int local_res8 [2];
  uint local_res18 [2];
  longlong local_res20;
  
  lVar10 = (**(code **)(*(longlong *)param_1[0x1a] + 0x38))();
  if ((((CONCAT11(*(undefined1 *)(lVar10 + 0x48),*(undefined1 *)(lVar10 + 0x49)) < 0x202) &&
       (uVar11 = FUN_1453f75d0(param_1), (char)uVar11 == '\0')) ||
      (uVar11 = FUN_1453f7670(param_1), (char)uVar11 == '\0')) ||
     (uVar11 = FUN_1453f7730(param_1), (char)uVar11 == '\0')) goto LAB_1453f80d1;
  uVar11 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar11;
  uVar11 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar11;
  uVar8 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar11 = param_1[5];
  uVar9 = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(param_2 + 4) = (int)param_1[4];
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar8;
  *(int *)(param_2 + 5) = (int)uVar11;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
  param_2[6] = param_1[6];
  lVar10 = (**(code **)(*(longlong *)param_1[0x1a] + 0x38))();
  if (CONCAT11(*(undefined1 *)(lVar10 + 0x48),*(undefined1 *)(lVar10 + 0x49)) < 0x202) {
    lVar10 = (**(code **)(*(longlong *)param_1[0x1a] + 0x38))();
    uVar18 = param_2[2];
    uVar11 = 0x200;
    if (CONCAT11(*(undefined1 *)(lVar10 + 0x48),*(undefined1 *)(lVar10 + 0x49)) < 0x200) {
      if ((longlong)param_2[1] < (longlong)(uVar18 + 4)) goto LAB_1453f80d1;
      uVar11 = *param_2;
      uVar14 = *(uint *)(uVar18 + uVar11);
      param_2[2] = uVar18 + 4;
    }
    else {
      if ((longlong)param_2[1] < (longlong)(uVar18 + 1)) goto LAB_1453f80d1;
      uVar11 = *param_2;
      bVar5 = *(byte *)(uVar18 + uVar11);
      uVar14 = (uint)bVar5;
      param_2[2] = uVar18 + 1;
      if ((char)bVar5 < '\0') {
        uVar11 = FUN_145404280(2,local_res8,param_2);
        if ((char)uVar11 == '\0') goto LAB_1453f80d1;
        uVar11 = (ulonglong)(uint)(local_res8[0] << 7);
        uVar14 = uVar14 & 0x7f | local_res8[0] << 7;
      }
      else {
        uVar14 = (uint)bVar5;
      }
    }
    if ((uint)param_1[0x1c] <= uVar14) goto LAB_1453f80d1;
    uVar18 = param_2[2] + 1;
    if ((longlong)param_2[1] < (longlong)uVar18) goto LAB_1453f80d1;
    uVar11 = *param_2;
    cVar4 = *(char *)(param_2[2] + uVar11);
    param_2[2] = uVar18;
    if (cVar4 != '\0') goto LAB_1453f80d1;
  }
  *(undefined4 *)(param_1 + 0x21) = 2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 7;
  uVar11 = (ulonglong)(int)param_1[0x1c];
  if (-1 < (int)param_1[0x1c]) {
    uVar15 = 0;
    pvVar12 = (void *)param_1[0x1e];
    uVar18 = param_1[0x1d];
    local_res8[0] = 0;
    uVar13 = (longlong)((longlong)pvVar12 - uVar18) >> 2;
    if (uVar11 < uVar13) {
      param_1[0x1e] = uVar18 + uVar11 * 4;
    }
    else if (uVar13 < uVar11) {
      if ((ulonglong)((longlong)(param_1[0x1f] - uVar18) >> 2) < uVar11) {
        FUN_146c96176(param_1 + 0x1d,uVar11,local_res8);
      }
      else {
        sVar3 = (uVar11 - uVar13) * 4;
        memset(pvVar12,0,sVar3);
        param_1[0x1e] = (ulonglong)((longlong)pvVar12 + sVar3);
      }
    }
    puVar2 = param_1 + 0x22;
    puVar16 = (undefined8 *)param_1[0x23];
    uVar11 = *puVar2;
    uVar13 = (ulonglong)((*(int *)((longlong)param_1 + 0x10c) - (int)param_1[0x21]) + 1);
    lVar10 = (longlong)((longlong)puVar16 - uVar11) / 6 +
             ((longlong)((longlong)puVar16 - uVar11) >> 0x3f);
    uVar18 = (lVar10 >> 2) - (lVar10 >> 0x3f);
    if (uVar13 < uVar18) {
      uVar11 = uVar11 + uVar13 * 0x18;
      FUN_144e79c60(uVar11,puVar16,puVar2);
      param_1[0x23] = uVar11;
    }
    else if (uVar18 < uVar13) {
      if ((ulonglong)((longlong)(param_1[0x24] - uVar11) / 0x18) < uVar13) {
        FUN_145406590(puVar2,uVar13,local_res8);
      }
      else {
        for (lVar10 = uVar13 - uVar18; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16 = puVar16 + 3;
        }
        FUN_144e79c60(puVar16,puVar16,puVar2);
        param_1[0x23] = (ulonglong)puVar16;
      }
    }
    FUN_1453f6350(param_1 + 0x25,(longlong)(param_1[0x23] - *puVar2) / 0x18);
    lVar10 = (longlong)(param_1[0x23] - *puVar2) >> 0x3f;
    uVar11 = -lVar10;
    if ((longlong)(param_1[0x23] - *puVar2) / 0x18 + lVar10 != lVar10) {
      local_res20 = 0;
      uVar13 = 0xaaaaaaaaaaaaaaab;
      uVar18 = uVar15;
      do {
        uVar1 = param_2[2] + 1;
        if ((longlong)param_2[1] < (longlong)uVar1) goto LAB_1453f80d1;
        bVar5 = *(byte *)(param_2[2] + *param_2);
        uVar19 = (ulonglong)bVar5;
        uVar14 = (uint)bVar5;
        param_2[2] = uVar1;
        if ((char)bVar5 < '\0') {
          uVar11 = FUN_145404280(2,local_res18,param_2);
          if ((char)uVar11 == '\0') goto LAB_1453f80d1;
          uVar19 = (ulonglong)(uVar14 & 0x7f | local_res18[0] << 7);
        }
        local_res18[0] = (uint)uVar19;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar13;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = ((longlong *)param_1[0x1b])[1] - *(longlong *)param_1[0x1b] >> 2;
        uVar11 = SUB168(auVar6 * auVar7,0);
        if ((uint)(SUB168(auVar6 * auVar7,8) >> 1) < local_res18[0]) goto LAB_1453f80d1;
        if (local_res18[0] != 0) {
          plVar17 = (longlong *)(*puVar2 + uVar18);
          pvVar12 = (void *)plVar17[1];
          lVar10 = *plVar17;
          uVar11 = (longlong)pvVar12 - lVar10 >> 2;
          if (uVar19 < uVar11) {
            pvVar12 = (void *)(lVar10 + uVar19 * 4);
LAB_1453f8053:
            plVar17[1] = (longlong)pvVar12;
          }
          else if (uVar11 < uVar19) {
            if (uVar19 <= (ulonglong)(plVar17[2] - lVar10 >> 2)) {
              sVar3 = (uVar19 - uVar11) * 4;
              memset(pvVar12,0,sVar3);
              pvVar12 = (void *)((longlong)pvVar12 + sVar3);
              goto LAB_1453f8053;
            }
            FUN_1482987b2(plVar17,uVar19,local_res8);
          }
          FUN_14540a820(local_res18[0],1,param_2,*(undefined8 *)(*puVar2 + uVar18));
          uVar13 = 0xaaaaaaaaaaaaaaab;
          *(uint *)(local_res20 + param_1[0x25]) = local_res18[0];
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        local_res20 = local_res20 + 4;
        uVar18 = uVar18 + 0x18;
        uVar11 = (ulonglong)(int)uVar14;
      } while (uVar11 < (ulonglong)((longlong)(param_1[0x23] - *puVar2) / 0x18));
    }
    return CONCAT71((int7)(uVar11 >> 8),1);
  }
LAB_1453f80d1:
  return uVar11 & 0xffffffffffffff00;
}



// FUNCTION 1453f80f0 FUN_1453f80f0 body=624 status=ok
// SIG undefined FUN_1453f80f0(void)

void FUN_1453f80f0(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = 0xffffffff;
  uVar6 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar5 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar4 = -2;
    }
    uVar5 = iVar4 + param_2;
    uVar2 = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      uVar2 = param_2 + 2;
    }
  }
  iVar4 = *(int *)(param_1 + 0x100);
  if ((iVar4 == 0) || (iVar4 == 1)) {
    if (uVar5 == 0xffffffff) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar5 * 4);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
    *piVar1 = *piVar1 + 1;
    if (uVar2 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
LAB_1453f82ef:
      uVar2 = *(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar2 * 4);
    }
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 == 5) {
        if (param_2 == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar6 * 4);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
        *piVar1 = *piVar1 + 1;
        if (uVar5 == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar5 * 4);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
        *piVar1 = *piVar1 + 1;
        if (uVar2 == 0xffffffff) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + 0x3fffffffc);
          *piVar1 = *piVar1 + 2;
          goto LAB_1453f830a;
        }
      }
      else {
        if (iVar4 != 7) goto LAB_1453f830a;
        if (param_2 == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar6 * 4);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
        *piVar1 = *piVar1 + 2;
        if (uVar5 == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar5 * 4);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
        *piVar1 = *piVar1 + 2;
        if (uVar2 == 0xffffffff) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + 0x3fffffffc);
          *piVar1 = *piVar1 + 2;
          goto LAB_1453f830a;
        }
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) +
                      (ulonglong)*(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar2 * 4) *
                      4);
      *piVar1 = *piVar1 + 2;
      goto LAB_1453f830a;
    }
    if (param_2 == 0xffffffff) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + uVar6 * 4);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
    *piVar1 = *piVar1 + 1;
    if (uVar5 == 0xffffffff) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar5 * 4);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar3 * 4);
    *piVar1 = *piVar1 + 2;
    if (uVar2 != 0xffffffff) goto LAB_1453f82ef;
    uVar2 = 0xffffffff;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar2 * 4);
  *piVar1 = *piVar1 + 1;
LAB_1453f830a:
  if (uVar5 != 0xffffffff) {
    uVar7 = *(uint *)(**(longlong **)(param_1 + 0xd8) + (ulonglong)uVar5 * 4);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar7 * 4);
  if (iVar4 < *(int *)(param_1 + 0x108)) {
    *(undefined4 *)(param_1 + 0x104) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x10c) < iVar4) {
    iVar4 = *(int *)(param_1 + 0x10c);
  }
  *(int *)(param_1 + 0x104) = iVar4 - *(int *)(param_1 + 0x108);
  return;
}



// FUNCTION 1453f8360 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 1453f83b0 FUN_1453f83b0 body=225 status=ok
// SIG undefined FUN_1453f83b0(void)

void FUN_1453f83b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x138) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453f848b;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  thunk_FUN_144e799a0(param_1 + 0x110);
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0xf8) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_1453f848b:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_1453f7880(param_1);
  return;
}



// FUNCTION 1453f84a0 FUN_1453f84a0 body=480 status=ok
// SIG undefined FUN_1453f84a0(void)

undefined8 * FUN_1453f84a0(undefined8 *param_1)

{
  *param_1 = draco::MeshEdgebreakerDecoderImpl<draco::MeshEdgebreakerTraversalDecoder>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_1453f7300(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_144d7d140(param_1 + 0x3f);
  FUN_144d7d140(param_1 + 0x46);
  FUN_1453f5dc0(param_1 + 0x4d);
  FUN_144d7d140(param_1 + 0x50);
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  return param_1;
}



// FUNCTION 1453f8680 FUN_1453f8680 body=7 status=ok
// SIG undefined FUN_1453f8680(void)

undefined1 FUN_1453f8680(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 1453f8690 FUN_1453f8690 body=302 status=ok
// SIG undefined FUN_1453f8690(void)

longlong FUN_1453f8690(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x1e0);
  lVar4 = *(longlong *)(param_1 + 0x1e8) - lVar6;
  uVar8 = 0;
  lVar7 = lVar4 >> 0x3f;
  if (lVar4 / 0x130 + lVar7 != lVar7) {
    uVar5 = 0;
    do {
      lVar7 = uVar5 * 0x130;
      iVar2 = *(int *)(lVar7 + lVar6);
      if ((-1 < iVar2) &&
         (lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10),
         iVar2 < (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) - lVar6 >> 3))) {
        plVar1 = *(longlong **)(lVar6 + (longlong)iVar2 * 8);
        iVar3 = 0;
        iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (0 < iVar2) {
          do {
            iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,iVar3);
            if (iVar2 == param_2) {
              if (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0xd8 + lVar7) == '\0') {
                return 0;
              }
              return *(longlong *)(param_1 + 0x1e0) + 8 + lVar7;
            }
            iVar3 = iVar3 + 1;
            iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
          } while (iVar3 < iVar2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x1e0);
      uVar8 = uVar8 + 1;
      uVar5 = (ulonglong)uVar8;
    } while (uVar5 < (ulonglong)((*(longlong *)(param_1 + 0x1e8) - lVar6) / 0x130));
  }
  return 0;
}



// FUNCTION 1453f87c0 FUN_1453f87c0 body=298 status=ok
// SIG undefined FUN_1453f87c0(void)

longlong FUN_1453f87c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x1e0);
  lVar5 = *(longlong *)(param_1 + 0x1e8) - lVar7;
  uVar8 = 0;
  lVar2 = lVar5 >> 0x3f;
  if (lVar5 / 0x130 + lVar2 != lVar2) {
    uVar6 = 0;
    do {
      iVar3 = *(int *)(uVar6 * 0x130 + lVar7);
      if ((-1 < iVar3) &&
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10),
         iVar3 < (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) - lVar7 >> 3))) {
        plVar1 = *(longlong **)(lVar7 + (longlong)iVar3 * 8);
        iVar4 = 0;
        iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (0 < iVar3) {
          do {
            iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,iVar4);
            if (iVar3 == param_2) {
              return *(longlong *)(param_1 + 0x1e0) + 0xe0 + uVar6 * 0x130;
            }
            iVar4 = iVar4 + 1;
            iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
          } while (iVar4 < iVar3);
        }
      }
      lVar7 = *(longlong *)(param_1 + 0x1e0);
      uVar8 = uVar8 + 1;
      uVar6 = (ulonglong)uVar8;
    } while (uVar6 < (ulonglong)((*(longlong *)(param_1 + 0x1e8) - lVar7) / 0x130));
  }
  return param_1 + 0x1a0;
}



// FUNCTION 1453f88f0 FUN_1453f88f0 body=1034 status=ok
// SIG undefined FUN_1453f88f0(void)

ulonglong FUN_1453f88f0(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *local_res8;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 *local_118;
  longlong local_110;
  longlong lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar8 = *(ulonglong *)(param_1 + 8);
  plVar4 = *(longlong **)(uVar8 + 0x40);
  lVar15 = plVar4[2] + 1;
  if (plVar4[1] < lVar15) {
LAB_1453f8cde:
    return uVar8 & 0xffffffffffffff00;
  }
  cVar2 = *(char *)(plVar4[2] + *plVar4);
  uVar14 = (ulonglong)cVar2;
  plVar4[2] = lVar15;
  uVar8 = *(ulonglong *)(param_1 + 8);
  puVar5 = *(ulonglong **)(uVar8 + 0x40);
  uVar1 = puVar5[2] + 1;
  if ((longlong)puVar5[1] < (longlong)uVar1) goto LAB_1453f8cde;
  uVar8 = *puVar5;
  cVar3 = *(char *)(puVar5[2] + uVar8);
  puVar5[2] = uVar1;
  if (cVar2 < '\0') {
    if (-1 < *(int *)(param_1 + 0x1d8)) goto LAB_1453f8cde;
    *(undefined4 *)(param_1 + 0x1d8) = param_2;
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x1e0);
    lVar12 = *(longlong *)(param_1 + 0x1e8) - lVar15;
    uVar8 = -(lVar12 >> 0x3f);
    if (((ulonglong)(lVar12 / 0x130) <= uVar14) ||
       (uVar8 = uVar14 * 0x130, -1 < *(int *)(uVar8 + lVar15))) goto LAB_1453f8cde;
    *(undefined4 *)(uVar8 + lVar15) = param_2;
  }
  puVar16 = (undefined8 *)0x0;
  lVar15 = *(longlong *)(param_1 + 8);
  uVar8 = 0x102;
  puVar10 = puVar16;
  if (0x101 < CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49))) {
    puVar5 = *(ulonglong **)(lVar15 + 0x40);
    uVar1 = puVar5[2] + 1;
    if ((longlong)puVar5[1] < (longlong)uVar1) goto LAB_1453f8cde;
    uVar8 = *puVar5;
    bVar7 = *(byte *)(puVar5[2] + uVar8);
    puVar10 = (undefined8 *)(ulonglong)bVar7;
    puVar5[2] = uVar1;
    if (1 < bVar7) goto LAB_1453f8cde;
  }
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58);
  local_118 = (undefined8 *)0x0;
  iVar13 = (int)puVar10;
  puVar10 = puVar16;
  if (cVar3 == '\0') {
    if (cVar2 < '\0') {
      lVar15 = param_1 + 0x1a0;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x1e0) + 0xe0 + uVar14 * 0x130;
      *(undefined1 *)(uVar14 * 0x130 + 0xd8 + *(longlong *)(param_1 + 0x1e0)) = 0;
    }
    if (iVar13 == 1) {
      ppuVar9 = (undefined8 **)FUN_145404300(param_1,&local_res8);
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
      uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
      if (iVar13 != 0) goto LAB_1453f8cc3;
      ppuVar9 = (undefined8 **)FUN_145404580(param_1,&local_res8,lVar15);
    }
    if (&local_118 != ppuVar9) {
      puVar10 = *ppuVar9;
      *ppuVar9 = (undefined8 *)0x0;
      local_118 = puVar10;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
LAB_1453f8c6e:
    if (puVar10 != (undefined8 *)0x0) {
      local_res18 = (undefined8 *)FUN_14494321d(0x80);
      puVar11 = puVar16;
      if (local_res18 != (undefined8 *)0x0) {
        local_118 = (undefined8 *)0x0;
        local_res8 = puVar10;
        puVar11 = (undefined8 *)FUN_145409b70(local_res18,&local_res8);
        puVar10 = puVar16;
      }
      local_res20 = 0;
      local_res18 = puVar11;
      bVar7 = FUN_14517be90(*(undefined8 *)(param_1 + 8),param_2,&local_res18);
      goto LAB_1453f8cc6;
    }
  }
  else {
    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
    if ((iVar13 == 0) &&
       (puVar10 = (undefined8 *)0x0, local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58),
       uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50), -1 < cVar2)) {
      lVar15 = *(longlong *)(param_1 + 0x1e0) + 0xe0 + uVar14 * 0x130;
      lVar12 = *(longlong *)(param_1 + 0x1e0) + 8 + uVar14 * 0x130;
      local_res8 = (undefined8 *)FUN_14494321d(0xb0);
      puVar10 = puVar16;
      if (local_res8 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)FUN_145404850(local_res8,uVar6,lVar15);
      }
      local_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_e8 = draco::
                 DepthFirstTraverser<draco::MeshAttributeCornerTable,draco::MeshAttributeIndicesEncodingObserver<draco::MeshAttributeCornerTable>_>
                 ::vftable;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_100._0_4_ = (undefined4)uVar6;
      local_100._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_f8._0_4_ = SUB84(puVar10,0);
      uStack_f8._4_4_ = (undefined4)((ulonglong)puVar10 >> 0x20);
      local_48 = (undefined4)local_100;
      uStack_44 = local_100._4_4_;
      uStack_40 = (undefined4)uStack_f8;
      uStack_3c = uStack_f8._4_4_;
      local_res8 = puVar10;
      local_110 = lVar12;
      lStack_108 = lVar15;
      local_100 = uVar6;
      uStack_f8 = puVar10;
      local_58 = lVar12;
      uStack_50 = lVar15;
      FUN_145404c90(&local_e8,lVar12,&local_58);
      FUN_1454048d0(puVar10,&local_e8);
      local_118 = puVar10;
      if (local_78 != 0) {
        uVar8 = (local_68 - local_78 >> 2) * 4;
        lVar15 = local_78;
        if (0xfff < uVar8) {
          uVar8 = uVar8 + 0x27;
          lVar15 = *(longlong *)(local_78 + -8);
          if (0x1f < (local_78 - lVar15) - 8U) goto LAB_1453f8c61;
        }
        thunk_FUN_1400020a8(lVar15,uVar8);
      }
      if (local_98 != 0) {
        uVar8 = (local_88 - local_98 >> 2) * 4;
        lVar15 = local_98;
        if (0xfff < uVar8) {
          uVar8 = uVar8 + 0x27;
          lVar15 = *(longlong *)(local_98 + -8);
          if (0x1f < (local_98 - lVar15) - 8U) goto LAB_1453f8c61;
        }
        thunk_FUN_1400020a8(lVar15,uVar8);
      }
      if (local_b8 != 0) {
        uVar8 = (local_a8 - local_b8 >> 2) * 4;
        lVar15 = local_b8;
        if (0xfff < uVar8) {
          uVar8 = uVar8 + 0x27;
          lVar15 = *(longlong *)(local_b8 + -8);
          if (0x1f < (local_b8 - lVar15) - 8U) {
LAB_1453f8c61:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(lVar15,uVar8);
      }
      goto LAB_1453f8c6e;
    }
  }
LAB_1453f8cc3:
  bVar7 = 0;
LAB_1453f8cc6:
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  return (ulonglong)bVar7;
}



// FUNCTION 1453f8d00 FUN_1453f8d00 body=2697 status=ok
// SIG undefined FUN_1453f8d00(void)

ulonglong FUN_1453f8d00(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong local_res8;
  byte local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_e8;
  uint local_e4 [3];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  
  uVar19 = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_1453f7130(param_1 + 0x128);
  lVar15 = *(longlong *)(param_1 + 8);
  uVar13 = CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49));
  uVar11 = 0x202;
  if (uVar13 < 0x202) {
    plVar3 = *(longlong **)(lVar15 + 0x40);
    lVar15 = plVar3[2];
    if (uVar13 < 0x200) {
      uVar11 = lVar15 + 4U;
      if (plVar3[1] < (longlong)(lVar15 + 4U)) goto LAB_1453f93eb;
      uVar16 = *(uint *)(lVar15 + *plVar3);
      local_res8 = CONCAT44(local_res8._4_4_,uVar16);
      plVar3[2] = plVar3[2] + 4;
    }
    else {
      if (plVar3[1] < lVar15 + 1) goto LAB_1453f93eb;
      bVar2 = *(byte *)(lVar15 + *plVar3);
      uVar16 = (uint)bVar2;
      plVar3[2] = lVar15 + 1;
      if ((char)bVar2 < '\0') {
        uVar11 = FUN_145404280(2,&local_res8);
        if ((char)uVar11 == '\0') goto LAB_1453f93eb;
        uVar16 = uVar16 & 0x7f | (int)local_res8 << 7;
      }
      else {
        uVar16 = (uint)bVar2;
      }
    }
    *(uint *)(param_1 + 0x120) = uVar16;
  }
  lVar15 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar15 + 0x40);
  uVar11 = 0;
  lVar17 = plVar3[2];
  if (CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49)) < 0x200) {
    uVar11 = lVar17 + 4U;
    if (plVar3[1] < (longlong)(lVar17 + 4U)) goto LAB_1453f93eb;
    local_e4[0] = *(uint *)(lVar17 + *plVar3);
    plVar3[2] = plVar3[2] + 4;
  }
  else {
    if (plVar3[1] < lVar17 + 1) goto LAB_1453f93eb;
    bVar2 = *(byte *)(lVar17 + *plVar3);
    uVar16 = (uint)bVar2;
    plVar3[2] = lVar17 + 1;
    if ((char)bVar2 < '\0') {
      uVar11 = FUN_145404280(2,local_e4);
      if ((char)uVar11 == '\0') goto LAB_1453f93eb;
      local_e4[0] = uVar16 & 0x7f | local_e4[0] << 7;
    }
    else {
      local_e4[0] = (uint)bVar2;
    }
  }
  *(uint *)(param_1 + 0x168) = local_e4[0];
  lVar15 = *(longlong *)(param_1 + 8);
  puVar4 = *(ulonglong **)(lVar15 + 0x40);
  uVar11 = 0;
  uVar5 = puVar4[2];
  if (CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49)) < 0x200) {
    uVar11 = uVar5 + 4;
    if ((longlong)puVar4[1] < (longlong)(uVar5 + 4)) goto LAB_1453f93eb;
    uVar11 = *puVar4;
    local_res18[0] = *(uint *)(uVar5 + uVar11);
    puVar4[2] = puVar4[2] + 4;
  }
  else {
    if ((longlong)puVar4[1] < (longlong)(uVar5 + 1)) goto LAB_1453f93eb;
    uVar11 = *puVar4;
    bVar2 = *(byte *)(uVar5 + uVar11);
    uVar16 = (uint)bVar2;
    puVar4[2] = uVar5 + 1;
    if ((char)bVar2 < '\0') {
      uVar11 = FUN_145404280(2,local_res18);
      if ((char)uVar11 == '\0') goto LAB_1453f93eb;
      uVar11 = (ulonglong)(local_res18[0] << 7);
      local_res18[0] = uVar16 & 0x7f | local_res18[0] << 7;
    }
    else {
      local_res18[0] = (uint)bVar2;
    }
  }
  if ((0x55555555 < local_res18[0]) ||
     (uVar11 = (ulonglong)(local_res18[0] * 3), local_res18[0] * 3 < *(uint *)(param_1 + 0x168))) {
LAB_1453f93eb:
    return uVar11 & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(*(ulonglong *)(param_1 + 8) + 0x40);
  lVar15 = plVar3[2] + 1;
  uVar11 = *(ulonglong *)(param_1 + 8);
  if (plVar3[1] < lVar15) goto LAB_1453f93eb;
  local_res10 = *(byte *)(plVar3[2] + *plVar3);
  uVar20 = (ulonglong)local_res10;
  plVar3[2] = lVar15;
  lVar15 = *(longlong *)(param_1 + 8);
  puVar4 = *(ulonglong **)(lVar15 + 0x40);
  uVar11 = 0;
  uVar5 = puVar4[2];
  if (CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49)) < 0x200) {
    uVar11 = uVar5 + 4;
    if ((longlong)puVar4[1] < (longlong)(uVar5 + 4)) goto LAB_1453f93eb;
    uVar11 = *puVar4;
    local_e8 = *(uint *)(uVar5 + uVar11);
    puVar4[2] = puVar4[2] + 4;
  }
  else {
    if ((longlong)puVar4[1] < (longlong)(uVar5 + 1)) goto LAB_1453f93eb;
    uVar11 = *puVar4;
    bVar2 = *(byte *)(uVar5 + uVar11);
    uVar16 = (uint)bVar2;
    puVar4[2] = uVar5 + 1;
    if ((char)bVar2 < '\0') {
      uVar11 = FUN_145404280(2,&local_e8);
      if ((char)uVar11 == '\0') goto LAB_1453f93eb;
      uVar11 = (ulonglong)(local_e8 << 7);
      local_e8 = uVar16 & 0x7f | local_e8 << 7;
    }
    else {
      local_e8 = (uint)bVar2;
    }
  }
  if ((local_res18[0] < local_e8) ||
     (uVar11 = (ulonglong)local_e8 * 0xaaaaaaab & 0xffffffff,
     (uint)((ulonglong)local_e8 * 0x2aaaaaaab >> 0x21) < local_res18[0])) goto LAB_1453f93eb;
  lVar15 = *(longlong *)(param_1 + 8);
  puVar4 = *(ulonglong **)(lVar15 + 0x40);
  uVar11 = 0;
  uVar5 = puVar4[2];
  if (CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49)) < 0x200) {
    uVar11 = uVar5 + 4;
    if ((longlong)puVar4[1] < (longlong)(uVar5 + 4)) goto LAB_1453f93eb;
    uVar11 = *puVar4;
    local_res20[0] = *(uint *)(uVar5 + uVar11);
    puVar4[2] = puVar4[2] + 4;
  }
  else {
    if ((longlong)puVar4[1] < (longlong)(uVar5 + 1)) goto LAB_1453f93eb;
    uVar11 = *puVar4;
    bVar2 = *(byte *)(uVar5 + uVar11);
    uVar16 = (uint)bVar2;
    puVar4[2] = uVar5 + 1;
    if ((char)bVar2 < '\0') {
      uVar11 = FUN_145404280(2,local_res20);
      if ((char)uVar11 == '\0') goto LAB_1453f93eb;
      uVar11 = (ulonglong)(local_res20[0] << 7);
      local_res20[0] = uVar16 & 0x7f | local_res20[0] << 7;
    }
    else {
      local_res20[0] = (uint)bVar2;
    }
  }
  if (local_e8 < local_res20[0]) goto LAB_1453f93eb;
  if (*(longlong *)(param_1 + 0x30) != *(longlong *)(param_1 + 0x38)) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x30);
  }
  local_res8 = FUN_14494321d(0xa8);
  uVar11 = uVar19;
  if (local_res8 != 0) {
    uVar11 = FUN_145589ae0(local_res8);
  }
  local_res8 = uVar11;
  uVar11 = FUN_1453fbf80(param_1 + 0x10,&local_res8);
  uVar5 = local_res8;
  if (local_res8 != 0) {
    FUN_1453f65f0(local_res8);
    uVar11 = thunk_FUN_1400020a8(uVar5,0xa8);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_1453f93eb;
  lVar15 = *(longlong *)(param_1 + 0x170);
  if (lVar15 != *(longlong *)(param_1 + 0x178)) {
    *(longlong *)(param_1 + 0x178) = lVar15;
  }
  FUN_14693d8aa((longlong *)(param_1 + 0x170),local_res18[0]);
  lVar15 = *(longlong *)(param_1 + 0x188);
  if (lVar15 != *(longlong *)(param_1 + 400)) {
    *(longlong *)(param_1 + 400) = lVar15;
  }
  FUN_14693d8aa((longlong *)(param_1 + 0x188),local_res18[0]);
  if (*(longlong *)(param_1 + 0x48) != *(longlong *)(param_1 + 0x50)) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_1 + 0x68)) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x60);
  }
  if (*(longlong *)(param_1 + 0x78) != *(longlong *)(param_1 + 0x80)) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x78);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x98) != *(longlong *)(param_1 + 0xa0)) {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0x98);
  }
  iVar9 = -1;
  *(undefined8 *)(param_1 + 0xb0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  plVar3 = (longlong *)(param_1 + 0x1e0);
  lVar15 = *(longlong *)(param_1 + 0x1e8);
  if (*plVar3 != lVar15) {
    FUN_145406fd0(*plVar3,lVar15,plVar3);
    lVar15 = *plVar3;
    *(longlong *)(param_1 + 0x1e8) = lVar15;
  }
  lVar17 = *plVar3;
  lVar14 = (lVar15 - lVar17) / 0x26 + (lVar15 - lVar17 >> 0x3f);
  uVar11 = (lVar14 >> 3) - (lVar14 >> 0x3f);
  if (uVar20 < uVar11) {
    lVar17 = uVar20 * 0x130 + lVar17;
    FUN_145406fd0(lVar17,lVar15,plVar3);
    *(longlong *)(param_1 + 0x1e8) = lVar17;
  }
  else if (uVar11 < uVar20) {
    if ((ulonglong)((*(longlong *)(param_1 + 0x1f0) - lVar17) / 0x130) < uVar20) {
      FUN_145409280(plVar3,uVar20,&local_res8);
    }
    else {
      uVar12 = FUN_145409580(lVar15,uVar20 - uVar11,plVar3);
      *(undefined8 *)(param_1 + 0x1e8) = uVar12;
    }
  }
  uVar11 = FUN_145589b50(*(undefined8 *)(param_1 + 0x10),local_res18[0],
                         local_res20[0] + *(int *)(param_1 + 0x168));
  if ((char)uVar11 == '\0') goto LAB_1453f93eb;
  local_res8 = CONCAT71(local_res8._1_7_,1);
  local_d8 = *(longlong *)(param_1 + 0x100);
  if (local_d8 != *(longlong *)(param_1 + 0x108)) {
    *(longlong *)(param_1 + 0x108) = local_d8;
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  uStack_d0 = 0;
  FUN_148277c8a((longlong *)(param_1 + 0x100),local_58,&local_d8,
                *(int *)(param_1 + 0x168) + local_res20[0],&local_res8);
  lVar15 = *(longlong *)(param_1 + 8);
  uVar13 = CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49));
  if (uVar13 < 0x202) {
    puVar4 = *(ulonglong **)(lVar15 + 0x40);
    uVar11 = 0x200;
    if (uVar13 < 0x200) {
      uVar11 = puVar4[2] + 4;
      if ((longlong)puVar4[1] < (longlong)uVar11) goto LAB_1453f93eb;
      uVar11 = *puVar4;
      uVar16 = *(uint *)(puVar4[2] + uVar11);
      local_res8 = CONCAT44(local_res8._4_4_,uVar16);
      puVar4[2] = puVar4[2] + 4;
      uVar20 = (ulonglong)uVar16;
    }
    else {
      uVar5 = puVar4[2] + 1;
      if ((longlong)puVar4[1] < (longlong)uVar5) goto LAB_1453f93eb;
      uVar11 = *puVar4;
      bVar2 = *(byte *)(puVar4[2] + uVar11);
      uVar20 = (ulonglong)bVar2;
      uVar16 = (uint)bVar2;
      puVar4[2] = uVar5;
      if ((char)bVar2 < '\0') {
        uVar11 = FUN_145404280(2,&local_res8);
        if ((char)uVar11 == '\0') goto LAB_1453f93eb;
        uVar11 = (ulonglong)(uint)((int)local_res8 << 7);
        uVar20 = (ulonglong)(uVar16 & 0x7f | (int)local_res8 << 7);
      }
      local_res8 = CONCAT44(local_res8._4_4_,(int)uVar20);
    }
    if (((int)uVar20 == 0) ||
       (lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40), uVar11 = uVar20,
       *(longlong *)(lVar15 + 8) - *(longlong *)(lVar15 + 0x10) < (longlong)uVar20))
    goto LAB_1453f93eb;
    FUN_144d7d140(local_90);
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
    FUN_144d7d180(local_90,plVar6[2] + (local_res8 & 0xffffffff) + *plVar6,
                  (plVar6[1] - plVar6[2]) - (local_res8 & 0xffffffff),
                  *(undefined2 *)((longlong)plVar6 + 0x32));
    iVar9 = FUN_1453fab60(param_1,local_90);
    if (iVar9 == -1) {
      uVar11 = FUN_144d7d280(local_78);
      goto LAB_1453f93eb;
    }
    FUN_144d7d280(local_78);
  }
  else {
    uVar11 = FUN_1453fab60(param_1,*(undefined8 *)(lVar15 + 0x40));
    if ((int)uVar11 == -1) goto LAB_1453f93eb;
  }
  plVar6 = (longlong *)(param_1 + 0x1f8);
  FUN_1453f7420(plVar6,param_1);
  *(uint *)(param_1 + 0x2c0) = (uint)local_res10;
  FUN_144d7d140(&local_c8);
  cVar8 = FUN_1453f75d0(plVar6);
  if (((cVar8 != '\0') && (cVar8 = FUN_1453f7670(plVar6), cVar8 != '\0')) &&
     (cVar8 = FUN_1453f7730(plVar6), cVar8 != '\0')) {
    local_c8 = *plVar6;
    lStack_c0 = *(longlong *)(param_1 + 0x200);
    local_b8 = *(longlong *)(param_1 + 0x208);
    uStack_b0 = *(undefined8 *)(param_1 + 0x210);
    local_a8 = *(undefined4 *)(param_1 + 0x218);
    uStack_a4 = *(undefined4 *)(param_1 + 0x21c);
    uStack_a0 = *(undefined4 *)(param_1 + 0x220);
    uStack_9c = *(undefined4 *)(param_1 + 0x224);
    local_98 = *(undefined8 *)(param_1 + 0x228);
    iVar10 = FUN_1453f97c0(param_1,local_e8);
    local_res8 = CONCAT44(local_res8._4_4_,iVar10);
    if (iVar10 != -1) {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40);
      FUN_144d7d180(lVar15,local_c8 + local_b8,lStack_c0 - local_b8,*(undefined2 *)(lVar15 + 0x32));
      lVar15 = *(longlong *)(param_1 + 8);
      if (CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49)) < 0x202) {
        plVar1 = (longlong *)(*(longlong *)(lVar15 + 0x40) + 0x10);
        *plVar1 = *plVar1 + (longlong)iVar9;
      }
      if (*plVar3 != *(longlong *)(param_1 + 0x1e8)) {
        plVar1 = *(longlong **)(param_1 + 0x10);
        if (CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48),
                     *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x49)) < 0x201) {
          uVar11 = uVar19;
          if ((int)(plVar1[1] - *plVar1 >> 2) != 0) {
            do {
              cVar8 = FUN_1453fb130(param_1,uVar11);
              if (cVar8 == '\0') goto LAB_1453f9771;
              uVar16 = (int)uVar11 + 3;
              uVar11 = (ulonglong)uVar16;
            } while (uVar16 < (uint)((*(longlong **)(param_1 + 0x10))[1] -
                                     **(longlong **)(param_1 + 0x10) >> 2));
          }
        }
        else {
          uVar11 = uVar19;
          if ((int)(plVar1[1] - *plVar1 >> 2) != 0) {
            do {
              cVar8 = FUN_1453fb380(param_1,uVar11);
              if (cVar8 == '\0') goto LAB_1453f9771;
              uVar16 = (int)uVar11 + 3;
              uVar11 = (ulonglong)uVar16;
            } while (uVar16 < (uint)((*(longlong **)(param_1 + 0x10))[1] -
                                     **(longlong **)(param_1 + 0x10) >> 2));
          }
        }
      }
      FUN_1453f7590(plVar6);
      lVar15 = *plVar3;
      lVar14 = *(longlong *)(param_1 + 0x1e8) - lVar15;
      lVar17 = lVar14 >> 0x3f;
      if (lVar14 / 0x130 + lVar17 != lVar17) {
        do {
          lVar17 = uVar19 * 0x130;
          FUN_14558a250(lVar15 + 8 + lVar17,*(undefined8 *)(param_1 + 0x10));
          puVar7 = *(undefined4 **)(lVar17 + 0x120 + *plVar3);
          for (puVar18 = *(undefined4 **)(lVar17 + 0x118 + *plVar3); puVar18 != puVar7;
              puVar18 = puVar18 + 1) {
            FUN_14558a380(*plVar3 + 8 + lVar17,*puVar18);
          }
          cVar8 = FUN_14558a560(*plVar3 + 8 + lVar17,0,0);
          if (cVar8 == '\0') goto LAB_1453f9771;
          uVar19 = (ulonglong)((int)uVar19 + 1);
          lVar15 = *plVar3;
        } while (uVar19 < (ulonglong)((*(longlong *)(param_1 + 0x1e8) - lVar15) / 0x130));
      }
      uVar11 = 0;
      FUN_1453f6070(param_1 + 0x1a0,
                    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) -
                    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) >> 2);
      lVar15 = *plVar3;
      lVar14 = *(longlong *)(param_1 + 0x1e8) - lVar15;
      lVar17 = lVar14 >> 0x3f;
      if (lVar14 / 0x130 + lVar17 != lVar17) {
        do {
          lVar15 = uVar11 * 0x130 + lVar15;
          iVar9 = (int)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) -
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) >> 2);
          iVar10 = (int)(*(longlong *)(lVar15 + 0x88) - *(longlong *)(lVar15 + 0x80) >> 2);
          if (iVar9 <= iVar10) {
            iVar9 = iVar10;
          }
          uVar19 = (ulonglong)iVar9;
          FUN_1453f6350(lVar15 + 0xf8,uVar19);
          if ((ulonglong)(*(longlong *)(lVar15 + 0xf0) - *(longlong *)(lVar15 + 0xe0) >> 2) < uVar19
             ) {
            if (0x3fffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_1453f6310();
            }
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Reallocate_exactly
                      ((vector<unsigned___int64,std::allocator<unsigned___int64>_> *)(lVar15 + 0xe0)
                       ,uVar19);
          }
          uVar11 = (ulonglong)((int)uVar11 + 1);
          lVar15 = *plVar3;
        } while (uVar11 < (ulonglong)((*(longlong *)(param_1 + 0x1e8) - lVar15) / 0x130));
      }
      cVar8 = FUN_1453fb5f0(param_1,local_res8 & 0xffffffff);
      if (cVar8 != '\0') {
        uVar11 = 1;
        goto LAB_1453f9773;
      }
    }
  }
LAB_1453f9771:
  uVar11 = 0;
LAB_1453f9773:
  FUN_144d7d280(&uStack_b0);
  return uVar11;
}



// FUNCTION 1453f9790 FUN_1453f9790 body=3 status=ok
// SIG undefined FUN_1453f9790(void)

undefined1 FUN_1453f9790(void)

{
  return 1;
}



// FUNCTION 1453f97a0 FUN_1453f97a0 body=5 status=ok
// SIG undefined FUN_1453f97a0(void)

undefined8 FUN_1453f97a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1453f97b0 FUN_1453f97b0 body=5 status=ok
// SIG undefined FUN_1453f97b0(void)

undefined8 FUN_1453f97b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1453f97c0 FUN_1453f97c0 body=5010 status=ok
// SIG undefined FUN_1453f97c0(void)

ulonglong FUN_1453f97c0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  undefined4 local_res18;
  uint local_res20;
  int local_138;
  uint *local_130;
  uint local_128;
  uint *local_120;
  uint *local_118;
  undefined8 local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  uint *local_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  uint *local_e0;
  uint *local_d8;
  uint *local_d0;
  int local_c8 [2];
  uint *local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  
  local_120 = (uint *)0x0;
  local_e0 = (uint *)0x0;
  puVar15 = (uint *)0x0;
  local_d8 = (uint *)0x0;
  local_118 = (uint *)0x0;
  local_d0 = (uint *)0x0;
  local_88[0] = 0;
  local_80 = 0;
  local_78 = 0;
  local_80 = FUN_14494321d(0x18);
  *(longlong *)local_80 = local_80;
  *(longlong *)(local_80 + 8) = local_80;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 7;
  local_50 = 8;
  local_88[0] = 0x3f800000;
  FUN_145405740(&local_70,0x10,local_80);
  local_f8 = (uint *)0x0;
  uStack_f0 = (uint *)0x0;
  local_c0 = (uint *)0x0;
  local_e8 = (uint *)0x0;
  local_a8 = *(longlong *)(param_1 + 0x1e8);
  local_b8 = *(longlong *)(param_1 + 0x1e0);
  iVar20 = *(int *)(param_1 + 0x118);
  local_138 = 0;
  local_res18 = 0;
  if (param_2 < 1) {
    local_130 = (uint *)0x0;
  }
  else {
    puVar10 = (uint *)0x0;
    local_130 = (uint *)0x0;
    iVar4 = 0;
    do {
      local_138 = iVar4 + 1;
      if (*(char *)(param_1 + 0x260) != '\0') {
        uVar12 = *(ulonglong *)(param_1 + 600);
        pbVar22 = (byte *)(*(longlong *)(param_1 + 0x248) + (uVar12 >> 3));
        if (pbVar22 < *(byte **)(param_1 + 0x250)) {
          local_res20 = *pbVar22 >> ((byte)uVar12 & 7) & 1;
          *(ulonglong *)(param_1 + 600) = uVar12 + 1;
        }
        else {
          local_res20 = 0;
        }
      }
      puVar23 = local_f8;
      if (local_res20 == 0) {
        local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
        if (local_120 == puVar15) goto LAB_1453faaa0;
        uVar25 = puVar15[-1];
        plVar11 = *(longlong **)(param_1 + 0x10);
        if (uVar25 == 0xffffffff) {
LAB_1453f997e:
          uVar8 = 0xffffffff;
        }
        else {
          iVar5 = 1;
          if (uVar25 + 1 == ((uVar25 + 1) / 3) * 3) {
            iVar5 = -2;
          }
          if (iVar5 + uVar25 == 0xffffffff) goto LAB_1453f997e;
          uVar8 = *(uint *)(*plVar11 + (ulonglong)(iVar5 + uVar25) * 4);
        }
        iVar5 = *(int *)(plVar11[6] + (ulonglong)uVar8 * 4);
        if (iVar5 == -1) {
          uVar12 = 0xffffffff;
        }
        else {
          iVar13 = 1;
          if (iVar5 + 1U == ((iVar5 + 1U) / 3) * 3) {
            iVar13 = -2;
          }
          uVar12 = (ulonglong)(uint)(iVar13 + iVar5);
        }
        uVar19 = (uint)uVar12;
        local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
        if (((uVar25 == uVar19) ||
            ((uVar25 != 0xffffffff &&
             (local_108 = CONCAT44(local_108._4_4_,(uint)local_108),
             *(int *)(plVar11[3] + (ulonglong)uVar25 * 4) != -1)))) ||
           ((uVar19 != 0xffffffff &&
            (local_108 = CONCAT44(local_108._4_4_,(uint)local_108),
            *(int *)(plVar11[3] + uVar12 * 4) != -1)))) goto LAB_1453faaa0;
        uVar21 = iVar4 * 3;
        uVar6 = uVar21 + 1;
        *(uint *)(plVar11[3] + (ulonglong)uVar25 * 4) = uVar6;
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar6 * 4) =
             uVar25;
        uVar24 = uVar21 + 2;
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + uVar12 * 4) = uVar24;
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar24 * 4) =
             uVar19;
        if (uVar25 == 0xffffffff) {
          plVar11 = *(longlong **)(param_1 + 0x10);
          uVar25 = 0xffffffff;
        }
        else {
          if (uVar25 == (uVar25 / 3) * 3) {
            uVar25 = uVar25 + 2;
          }
          else {
            uVar25 = uVar25 - 1;
          }
          plVar11 = *(longlong **)(param_1 + 0x10);
          if (uVar25 == 0xffffffff) {
            uVar25 = 0xffffffff;
          }
          else {
            uVar25 = *(uint *)(*plVar11 + (ulonglong)uVar25 * 4);
          }
        }
        if (uVar19 == 0xffffffff) {
LAB_1453f9aa8:
          uVar19 = 0xffffffff;
        }
        else {
          uVar18 = uVar19 + 1;
          if (uVar18 == (uVar18 / 3) * 3) {
            uVar18 = uVar19 - 2;
          }
          if (uVar18 == 0xffffffff) goto LAB_1453f9aa8;
          uVar19 = *(uint *)(*plVar11 + (ulonglong)uVar18 * 4);
        }
        local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
        if ((uVar8 == uVar25) ||
           (local_108 = CONCAT44(local_108._4_4_,(uint)local_108), uVar8 == uVar19))
        goto LAB_1453faaa0;
        *(uint *)(*plVar11 + (ulonglong)uVar21 * 4) = uVar8;
        *(uint *)(**(longlong **)(param_1 + 0x10) + (ulonglong)uVar6 * 4) = uVar19;
        *(uint *)(**(longlong **)(param_1 + 0x10) + (ulonglong)uVar24 * 4) = uVar25;
        if (uVar25 != 0xffffffff) {
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (ulonglong)uVar25 * 4) =
               uVar24;
        }
        puVar10 = (uint *)(*(longlong *)(param_1 + 0x100) + (ulonglong)(uVar8 >> 5) * 4);
        *puVar10 = *puVar10 & ~(1 << ((byte)uVar8 & 0x1f));
        puVar15[-1] = uVar21;
        puVar10 = local_130;
      }
      else {
        if (*(char *)(param_1 + 0x260) != '\0') {
          uVar12 = *(ulonglong *)(param_1 + 600);
          pbVar22 = (byte *)((uVar12 >> 3) + *(longlong *)(param_1 + 0x248));
          if (pbVar22 < *(byte **)(param_1 + 0x250)) {
            uVar25 = *pbVar22 >> ((byte)uVar12 & 7) & 1;
            uVar12 = uVar12 + 1;
            *(ulonglong *)(param_1 + 600) = uVar12;
          }
          else {
            uVar25 = 0;
          }
          pbVar22 = (byte *)((uVar12 >> 3) + *(longlong *)(param_1 + 0x248));
          if (pbVar22 < *(byte **)(param_1 + 0x250)) {
            uVar8 = *pbVar22 >> ((byte)uVar12 & 7) & 1;
            *(ulonglong *)(param_1 + 600) = uVar12 + 1;
          }
          else {
            uVar8 = 0;
          }
          local_128 = uVar25 | uVar8 * 2;
        }
        local_res20 = local_128 * 2 | local_res20;
        if ((local_res20 - 3 & 0xfffffffd) == 0) {
          local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
          if (local_120 == puVar15) goto LAB_1453faaa0;
          uVar25 = puVar15[-1];
          if ((uVar25 != 0xffffffff) &&
             (local_108 = CONCAT44(local_108._4_4_,(uint)local_108),
             *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar25 * 4)
             != -1)) goto LAB_1453faaa0;
          uVar19 = iVar4 * 3;
          uVar8 = uVar19;
          if (local_res20 != 5) {
            uVar8 = uVar19 + 2;
          }
          local_108._0_4_ = uVar19 + 1;
          if (local_res20 != 5) {
            local_108._0_4_ = uVar19;
          }
          uVar21 = (local_res20 == 5) + 1 + uVar19;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar21 * 4) =
               uVar25;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar25 * 4) =
               uVar21;
          lVar9 = *(longlong *)(param_1 + 0x10);
          puVar1 = *(undefined4 **)(lVar9 + 0x38);
          if (puVar1 == *(undefined4 **)(lVar9 + 0x40)) {
            FUN_145406ab0(lVar9 + 0x30,puVar1,&DAT_149d4ec9c);
          }
          else {
            *puVar1 = 0xffffffff;
            *(longlong *)(lVar9 + 0x38) = *(longlong *)(lVar9 + 0x38) + 4;
          }
          uVar6 = (int)(*(longlong *)(lVar9 + 0x38) - *(longlong *)(lVar9 + 0x30) >> 2) - 1;
          plVar11 = *(longlong **)(param_1 + 0x10);
          puVar23 = local_f8;
          if (iVar20 < (int)(plVar11[7] - plVar11[6] >> 2)) goto LAB_1453faaa0;
          *(uint *)(*plVar11 + (ulonglong)uVar21 * 4) = uVar6;
          plVar11 = *(longlong **)(param_1 + 0x10);
          if (uVar6 != 0xffffffff) {
            *(uint *)(plVar11[6] + (ulonglong)uVar6 * 4) = uVar21;
            plVar11 = *(longlong **)(param_1 + 0x10);
          }
          if (uVar25 == 0xffffffff) {
LAB_1453fa1fb:
            *(undefined4 *)(*plVar11 + (ulonglong)uVar8 * 4) = 0xffffffff;
            plVar11 = *(longlong **)(param_1 + 0x10);
            if (uVar25 != 0xffffffff) goto LAB_1453fa20b;
LAB_1453fa22e:
            uVar7 = 0xffffffff;
          }
          else {
            uVar21 = uVar25 - 1;
            if (uVar25 == (uVar25 / 3) * 3) {
              uVar21 = uVar25 + 2;
            }
            if (uVar21 == 0xffffffff) goto LAB_1453fa1fb;
            uVar21 = *(uint *)(*plVar11 + (ulonglong)uVar21 * 4);
            *(uint *)(*plVar11 + (ulonglong)uVar8 * 4) = uVar21;
            plVar11 = *(longlong **)(param_1 + 0x10);
            if (uVar21 != 0xffffffff) {
              *(uint *)(plVar11[6] + (ulonglong)uVar21 * 4) = uVar8;
              plVar11 = *(longlong **)(param_1 + 0x10);
            }
LAB_1453fa20b:
            uVar8 = uVar25 + 1;
            if (uVar8 == (uVar8 / 3) * 3) {
              uVar8 = uVar25 - 2;
            }
            if (uVar8 == 0xffffffff) goto LAB_1453fa22e;
            uVar7 = *(undefined4 *)(*plVar11 + (ulonglong)uVar8 * 4);
          }
          *(undefined4 *)(*plVar11 + (ulonglong)(uint)local_108 * 4) = uVar7;
          puVar15[-1] = uVar19;
LAB_1453fa23e:
          uVar25 = (param_2 - local_res18) - 1;
          while( true ) {
            lVar9 = *(longlong *)(param_1 + 0x50);
            lVar14 = lVar9 - *(longlong *)(param_1 + 0x48);
            lVar2 = lVar14 >> 0x3f;
            puVar10 = local_130;
            if (lVar14 / 0xc + lVar2 == lVar2) break;
            puVar23 = local_f8;
            local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
            if (uVar25 < *(uint *)(lVar9 + -8)) goto LAB_1453faaa0;
            if (*(uint *)(lVar9 + -8) != uVar25) break;
            bVar3 = *(byte *)(lVar9 + -4);
            iVar4 = *(int *)(lVar9 + -0xc);
            *(int **)(param_1 + 0x50) = (int *)(lVar9 + -0xc);
            local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
            if (iVar4 < 0) goto LAB_1453faaa0;
            uVar8 = puVar15[-1];
            if ((bVar3 & 1) == 0) {
              if (uVar8 == 0xffffffff) {
                uVar19 = 0xffffffff;
              }
              else {
                uVar19 = uVar8 - 1;
                if (uVar8 == (uVar8 / 3) * 3) {
                  uVar19 = uVar8 + 2;
                }
              }
            }
            else if (uVar8 == 0xffffffff) {
              uVar19 = 0xffffffff;
            }
            else {
              uVar19 = uVar8 + 1;
              if (uVar19 == (uVar19 / 3) * 3) {
                uVar19 = uVar8 - 2;
              }
            }
            local_c8[0] = (param_2 - iVar4) + -1;
            plVar11 = (longlong *)FUN_145406bb0(local_88,local_48,local_c8);
            *(uint *)(*plVar11 + 0x14) = uVar19;
          }
        }
        else {
          if (local_res20 != 1) {
            local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
            if (local_res20 == 7) {
              uVar25 = iVar4 * 3;
              lVar9 = *(longlong *)(param_1 + 0x10);
              puVar1 = *(undefined4 **)(lVar9 + 0x38);
              local_108._0_4_ = uVar25;
              if (puVar1 == *(undefined4 **)(lVar9 + 0x40)) {
                FUN_145406ab0(lVar9 + 0x30,puVar1,&DAT_149d4ec9c);
              }
              else {
                *puVar1 = 0xffffffff;
                *(longlong *)(lVar9 + 0x38) = *(longlong *)(lVar9 + 0x38) + 4;
              }
              uVar12 = *(longlong *)(lVar9 + 0x38) - *(longlong *)(lVar9 + 0x30) >> 2;
              iVar4 = (int)uVar12;
              uVar8 = iVar4 - 1;
              *(uint *)(**(longlong **)(param_1 + 0x10) + (ulonglong)uVar25 * 4) = uVar8;
              plVar11 = *(longlong **)(param_1 + 0x10);
              puVar1 = (undefined4 *)plVar11[7];
              if (puVar1 == (undefined4 *)plVar11[8]) {
                FUN_145406ab0(plVar11 + 6,puVar1,&DAT_149d4ec9c);
              }
              else {
                *puVar1 = 0xffffffff;
                plVar11[7] = plVar11[7] + 4;
              }
              *(int *)(*plVar11 + (ulonglong)(uVar25 + 1) * 4) =
                   (int)(plVar11[7] - plVar11[6] >> 2) + -1;
              lVar9 = *(longlong *)(param_1 + 0x10);
              puVar1 = *(undefined4 **)(lVar9 + 0x38);
              if (puVar1 == *(undefined4 **)(lVar9 + 0x40)) {
                FUN_145406ab0(lVar9 + 0x30,puVar1,&DAT_149d4ec9c);
              }
              else {
                *puVar1 = 0xffffffff;
                *(longlong *)(lVar9 + 0x38) = *(longlong *)(lVar9 + 0x38) + 4;
              }
              *(int *)(**(longlong **)(param_1 + 0x10) + (ulonglong)(uVar25 + 2) * 4) =
                   (int)(*(longlong *)(lVar9 + 0x38) - *(longlong *)(lVar9 + 0x30) >> 2) + -1;
              lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
              puVar23 = local_f8;
              local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
              if ((int)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) - lVar9 >> 2) <= iVar20)
              {
                if (uVar8 != 0xffffffff) {
                  *(uint *)(lVar9 + (ulonglong)uVar8 * 4) = uVar25;
                }
                if (iVar4 != -1) {
                  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
                           (uVar12 & 0xffffffff) * 4) = uVar25 + 1;
                }
                if (iVar4 + 1U != 0xffffffff) {
                  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
                           (ulonglong)(iVar4 + 1U) * 4) = uVar25 + 2;
                }
                if (puVar15 == local_118) {
                  FUN_145406ab0(&local_e0,puVar15,&local_108);
                  local_118 = local_d0;
                  local_120 = local_e0;
                  puVar15 = local_d8;
                }
                else {
                  *puVar15 = uVar25;
                  local_d8 = puVar15 + 1;
                  puVar15 = local_d8;
                }
                goto LAB_1453fa23e;
              }
            }
            goto LAB_1453faaa0;
          }
          local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
          if (local_120 == puVar15) goto LAB_1453faaa0;
          local_d8 = puVar15 + -1;
          uVar25 = *local_d8;
          uVar12 = local_58 &
                   (((((ulonglong)(local_res18 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)local_res18._1_1_) * 0x100000001b3 ^ (ulonglong)local_res18._2_1_) *
                    0x100000001b3 ^ (ulonglong)local_res18._3_1_) * 0x100000001b3;
          lVar9 = *(longlong *)(local_70 + 8 + uVar12 * 0x10);
          if (lVar9 == local_80) {
LAB_1453f9c93:
            lVar9 = 0;
          }
          else {
            uVar8 = *(uint *)(lVar9 + 0x10);
            while (local_res18 != uVar8) {
              if (lVar9 == *(longlong *)(local_70 + uVar12 * 0x10)) goto LAB_1453f9c93;
              lVar9 = *(longlong *)(lVar9 + 8);
              uVar8 = *(uint *)(lVar9 + 0x10);
            }
          }
          if ((lVar9 != 0) && (lVar9 != local_80)) {
            if (local_d8 == local_118) {
              FUN_145406ab0(&local_e0,local_d8);
              local_118 = local_d0;
              local_120 = local_e0;
            }
            else {
              *local_d8 = *(uint *)(lVar9 + 0x14);
              local_d8 = puVar15;
            }
          }
          puVar15 = local_d8;
          puVar23 = local_f8;
          local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
          if (local_120 == local_d8) goto LAB_1453faaa0;
          uVar8 = local_d8[-1];
          local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
          if (((uVar8 == uVar25) ||
              ((lVar9 = *(longlong *)(param_1 + 0x10), uVar8 != 0xffffffff &&
               (local_108 = CONCAT44(local_108._4_4_,(uint)local_108),
               *(int *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)uVar8 * 4) != -1)))) ||
             ((uVar25 != 0xffffffff &&
              (local_108 = CONCAT44(local_108._4_4_,(uint)local_108),
              *(int *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)uVar25 * 4) != -1))))
          goto LAB_1453faaa0;
          uVar21 = iVar4 * 3;
          uVar24 = uVar21 + 2;
          uVar12 = (ulonglong)uVar24;
          *(uint *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)uVar8 * 4) = uVar24;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + uVar12 * 4) = uVar8;
          uVar6 = uVar21 + 1;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar25 * 4) =
               uVar6;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar6 * 4) =
               uVar25;
          uVar19 = 0xffffffff;
          if (uVar8 == 0xffffffff) {
LAB_1453f9db0:
            *(undefined4 *)(**(longlong **)(param_1 + 0x10) + (ulonglong)uVar21 * 4) = 0xffffffff;
            if (uVar8 != 0xffffffff) goto LAB_1453f9d89;
            plVar11 = *(longlong **)(param_1 + 0x10);
            uVar7 = 0xffffffff;
          }
          else {
            uVar18 = uVar8 - 1;
            if (uVar8 == (uVar8 / 3) * 3) {
              uVar18 = uVar8 + 2;
            }
            if (uVar18 == 0xffffffff) goto LAB_1453f9db0;
            lVar9 = **(longlong **)(param_1 + 0x10);
            uVar19 = *(uint *)(lVar9 + (ulonglong)uVar18 * 4);
            *(uint *)(lVar9 + (ulonglong)uVar21 * 4) = uVar19;
LAB_1453f9d89:
            uVar18 = uVar8 + 1;
            if (uVar18 == (uVar18 / 3) * 3) {
              uVar18 = uVar8 - 2;
            }
            plVar11 = *(longlong **)(param_1 + 0x10);
            if (uVar18 == 0xffffffff) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = *(undefined4 *)(*plVar11 + (ulonglong)uVar18 * 4);
            }
          }
          *(undefined4 *)(*plVar11 + (ulonglong)uVar6 * 4) = uVar7;
          if (uVar25 == 0xffffffff) {
            plVar11 = *(longlong **)(param_1 + 0x10);
LAB_1453f9dfb:
            *(undefined4 *)(*plVar11 + uVar12 * 4) = 0xffffffff;
            plVar11 = *(longlong **)(param_1 + 0x10);
            if (uVar25 != 0xffffffff) goto LAB_1453f9e35;
            uVar12 = 0xffffffff;
            uVar17 = 0xffffffff;
          }
          else {
            uVar8 = uVar25 - 1;
            if (uVar25 == (uVar25 / 3) * 3) {
              uVar8 = uVar25 + 2;
            }
            plVar11 = *(longlong **)(param_1 + 0x10);
            if (uVar8 == 0xffffffff) goto LAB_1453f9dfb;
            uVar8 = *(uint *)(*plVar11 + (ulonglong)uVar8 * 4);
            *(uint *)(*plVar11 + uVar12 * 4) = uVar8;
            plVar11 = *(longlong **)(param_1 + 0x10);
            if (uVar8 != 0xffffffff) {
              *(uint *)(plVar11[6] + (ulonglong)uVar8 * 4) = uVar24;
              plVar11 = *(longlong **)(param_1 + 0x10);
            }
LAB_1453f9e35:
            uVar8 = uVar25 + 1;
            if (uVar8 == (uVar8 / 3) * 3) {
              uVar8 = uVar25 - 2;
            }
            uVar12 = (ulonglong)uVar8;
            if (uVar8 == 0xffffffff) {
              uVar17 = 0xffffffff;
            }
            else {
              uVar17 = (ulonglong)*(uint *)(*plVar11 + uVar12 * 4);
            }
          }
          uVar25 = (uint)uVar17;
          if (uVar19 != 0xffffffff) {
            *(undefined4 *)(plVar11[6] + (ulonglong)uVar19 * 4) =
                 *(undefined4 *)(plVar11[6] + uVar17 * 4);
          }
          uVar8 = (uint)uVar12;
          local_108._0_4_ = uVar25;
          if (uVar8 != 0xffffffff) {
            plVar11 = *(longlong **)(param_1 + 0x10);
            do {
              *(uint *)(*plVar11 + uVar12 * 4) = uVar19;
              plVar11 = *(longlong **)(param_1 + 0x10);
              puVar10 = (uint *)FUN_1453f64a0(plVar11,local_98,uVar12);
              uVar6 = *puVar10;
              uVar12 = (ulonglong)uVar6;
              puVar23 = local_f8;
              local_108 = CONCAT44(local_108._4_4_,(uint)local_108);
              if (uVar6 == uVar8) goto LAB_1453faaa0;
              puVar10 = local_130;
            } while (uVar6 != 0xffffffff);
          }
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + uVar17 * 4) =
               0xffffffff;
          if (local_b8 == local_a8) {
            if (puVar10 == local_c0) {
              FUN_145406910(&local_f8,puVar10,&local_108);
              local_c0 = local_e8;
              local_130 = uStack_f0;
              puVar10 = uStack_f0;
              goto LAB_1453f9f16;
            }
            *puVar10 = uVar25;
            local_130 = puVar10 + 1;
            puVar15[-1] = uVar21;
            puVar10 = local_130;
            uStack_f0 = local_130;
          }
          else {
LAB_1453f9f16:
            puVar15[-1] = uVar21;
          }
        }
      }
      local_res18 = local_res18 + 1;
      iVar4 = local_138;
    } while ((int)local_res18 < param_2);
  }
  puVar23 = local_f8;
  uVar25 = local_res18;
  if ((int)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) -
            *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) >> 2) <= iVar20) {
    while (local_f8 = puVar23, local_120 != puVar15) {
      puVar15 = puVar15 + -1;
      uVar8 = *puVar15;
      local_res18 = uVar8;
      local_d8 = puVar15;
      if (*(ushort *)(param_1 + 0x22a) < 0x202) {
        if (*(char *)(param_1 + 0x2b0) != '\0') {
          uVar12 = *(ulonglong *)(param_1 + 0x2a8);
          pbVar22 = (byte *)((uVar12 >> 3) + *(longlong *)(param_1 + 0x298));
          if (pbVar22 < *(byte **)(param_1 + 0x2a0)) {
            uVar25 = *pbVar22 >> ((byte)uVar12 & 7) & 1;
            *(ulonglong *)(param_1 + 0x2a8) = uVar12 + 1;
          }
          else {
            uVar25 = 0;
          }
        }
      }
      else {
        bVar3 = FUN_1453f5f80(param_1 + 0x268);
        uVar25 = (uint)bVar3;
      }
      if (uVar25 == 0) {
        uVar12 = *(ulonglong *)(param_1 + 0x90);
        if (((longlong)uVar12 < 0) && (uVar12 != 0)) {
          local_b8 = -((~uVar12 >> 5) * 4 + 4);
        }
        else {
          local_b8 = (uVar12 >> 5) * 4;
        }
        local_b8 = *(longlong *)(param_1 + 0x78) + local_b8;
        uStack_100 = (uint)uVar12 & 0x1f;
        uStack_b0 = (ulonglong)uStack_100;
        uStack_fc = 0;
        local_108 = local_b8;
        uVar12 = FUN_148277e9a(param_1 + 0x78,&local_108,1);
        if (((longlong)uVar12 < 0) && (uVar12 != 0)) {
          lVar9 = -((~uVar12 >> 5) * 4 + 4);
        }
        else {
          lVar9 = (uVar12 >> 5) * 4;
        }
        puVar23 = (uint *)(*(longlong *)(param_1 + 0x78) + lVar9);
        uVar19 = (uint)uVar12 & 0x1f;
        uVar12 = (ulonglong)uVar19 + 1;
        puVar10 = puVar23 + (uVar12 >> 5);
        uVar21 = (uint)uVar12 & 0x1f;
        if ((puVar23 != puVar10) || ((ulonglong)uVar19 != (ulonglong)uVar21)) {
          uVar19 = ~(-1 << (sbyte)uVar19);
          if (puVar23 == puVar10) {
            *puVar23 = *puVar23 & (~(0xffffffffU >> (0x20U - (char)uVar21 & 0x1f)) | uVar19);
          }
          else {
            *puVar23 = *puVar23 & uVar19;
            memset(puVar23 + 1,0,(longlong)puVar10 - (longlong)(puVar23 + 1));
            if ((ulonglong)uVar21 != 0) {
              *puVar10 = *puVar10 & ~(0xffffffffU >> (0x20U - (char)uVar21 & 0x1f));
            }
          }
        }
        puVar10 = *(uint **)(param_1 + 0xa0);
        if (puVar10 == *(uint **)(param_1 + 0xa8)) goto LAB_1453fa910;
        *puVar10 = uVar8;
        *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 4;
        puVar23 = local_f8;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 0x10);
        lVar9 = *plVar11;
        puVar23 = local_f8;
        if ((int)((ulonglong)(plVar11[1] - lVar9 >> 2) / 3) <= local_138) goto LAB_1453faaa0;
        uVar19 = 0xffffffff;
        if (uVar8 == 0xffffffff) {
LAB_1453fa43c:
          uVar21 = 0xffffffff;
        }
        else {
          uVar21 = uVar8 + 1;
          if (uVar21 == (uVar21 / 3) * 3) {
            uVar21 = uVar8 - 2;
          }
          if (uVar21 == 0xffffffff) goto LAB_1453fa43c;
          uVar21 = *(uint *)(lVar9 + (ulonglong)uVar21 * 4);
        }
        iVar20 = *(int *)(plVar11[6] + (ulonglong)uVar21 * 4);
        if (iVar20 == -1) {
          uVar6 = 0xffffffff;
        }
        else {
          iVar4 = 1;
          if (iVar20 + 1U == ((iVar20 + 1U) / 3) * 3) {
            iVar4 = -2;
          }
          uVar6 = iVar4 + iVar20;
          if (uVar6 != 0xffffffff) {
            uVar19 = uVar6 + 1;
            if (uVar19 == (uVar19 / 3) * 3) {
              uVar19 = uVar6 - 2;
            }
            if (uVar19 == 0xffffffff) {
              uVar19 = 0xffffffff;
            }
            else {
              uVar19 = *(uint *)(lVar9 + (ulonglong)uVar19 * 4);
            }
          }
        }
        iVar20 = *(int *)(plVar11[6] + (ulonglong)uVar19 * 4);
        uVar24 = 0xffffffff;
        if (iVar20 != -1) {
          iVar4 = 1;
          if (iVar20 + 1U == ((iVar20 + 1U) / 3) * 3) {
            iVar4 = -2;
          }
          uVar24 = iVar4 + iVar20;
        }
        if (((((uVar8 == uVar6) || (uVar8 == uVar24)) || (uVar6 == uVar24)) ||
            ((uVar8 != 0xffffffff && (*(int *)(plVar11[3] + (ulonglong)uVar8 * 4) != -1)))) ||
           ((uVar6 != 0xffffffff && (*(int *)(plVar11[3] + (ulonglong)uVar6 * 4) != -1))))
        goto LAB_1453faaa0;
        if (uVar24 == 0xffffffff) {
LAB_1453fa572:
          uVar7 = 0xffffffff;
        }
        else {
          if (*(int *)(plVar11[3] + (ulonglong)uVar24 * 4) != -1) goto LAB_1453faaa0;
          uVar18 = uVar24 + 1;
          if (uVar18 == (uVar18 / 3) * 3) {
            uVar18 = uVar24 - 2;
          }
          if (uVar18 == 0xffffffff) goto LAB_1453fa572;
          uVar7 = *(undefined4 *)(lVar9 + (ulonglong)uVar18 * 4);
        }
        iVar20 = local_138 + 1;
        uVar18 = local_138 * 3;
        uVar12 = (ulonglong)uVar18;
        *(uint *)(plVar11[3] + uVar12 * 4) = uVar8;
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar8 * 4) =
             uVar18;
        uVar8 = uVar18 + 1;
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar8 * 4) =
             uVar6;
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar6 * 4) =
             uVar8;
        uVar6 = uVar18 + 2;
        uVar17 = (ulonglong)uVar6;
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + uVar17 * 4) = uVar24;
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar24 * 4) =
             uVar6;
        *(uint *)(**(longlong **)(param_1 + 0x10) + uVar12 * 4) = uVar19;
        *(undefined4 *)(**(longlong **)(param_1 + 0x10) + (ulonglong)uVar8 * 4) = uVar7;
        *(uint *)(**(longlong **)(param_1 + 0x10) + uVar17 * 4) = uVar21;
        if (uVar18 == 0xffffffff) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = (ulonglong)*(uint *)(**(longlong **)(param_1 + 0x10) + uVar12 * 4);
        }
        puVar10 = (uint *)(*(longlong *)(param_1 + 0x100) + (uVar12 >> 5) * 4);
        *puVar10 = *puVar10 & ~(1 << ((byte)uVar12 & 0x1f));
        if (uVar8 == 0xffffffff) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = (ulonglong)*(uint *)(**(longlong **)(param_1 + 0x10) + (ulonglong)uVar8 * 4);
        }
        puVar10 = (uint *)(*(longlong *)(param_1 + 0x100) + (uVar12 >> 5) * 4);
        *puVar10 = *puVar10 & ~(1 << ((byte)uVar12 & 0x1f));
        if (uVar6 == 0xffffffff) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = (ulonglong)*(uint *)(**(longlong **)(param_1 + 0x10) + uVar17 * 4);
        }
        puVar10 = (uint *)(*(longlong *)(param_1 + 0x100) + (uVar12 >> 5) * 4);
        *puVar10 = *puVar10 & ~(1 << ((byte)uVar12 & 0x1f));
        uVar12 = *(ulonglong *)(param_1 + 0x90);
        if (((longlong)uVar12 < 0) && (uVar12 != 0)) {
          local_a8 = -((~uVar12 >> 5) * 4 + 4);
        }
        else {
          local_a8 = (uVar12 >> 5) * 4;
        }
        local_a8 = *(longlong *)(param_1 + 0x78) + local_a8;
        uStack_100 = (uint)uVar12 & 0x1f;
        uStack_a0 = (ulonglong)uStack_100;
        uStack_fc = 0;
        local_res18 = uVar18;
        local_108 = local_a8;
        uVar12 = FUN_148277e9a(param_1 + 0x78,&local_108,1);
        if (((longlong)uVar12 < 0) && (uVar12 != 0)) {
          lVar9 = -((~uVar12 >> 5) * 4 + 4);
        }
        else {
          lVar9 = (uVar12 >> 5) * 4;
        }
        puVar23 = (uint *)(*(longlong *)(param_1 + 0x78) + lVar9);
        uVar8 = (uint)uVar12 & 0x1f;
        uVar12 = (ulonglong)uVar8 + 1;
        puVar10 = puVar23 + (uVar12 >> 5);
        uVar19 = (uint)uVar12 & 0x1f;
        if ((puVar23 != puVar10) || ((ulonglong)uVar8 != (ulonglong)uVar19)) {
          uVar8 = -1 << (sbyte)uVar8;
          if (puVar23 == puVar10) {
            uVar19 = 0xffffffff >> (0x20U - (char)uVar19 & 0x1f);
            *puVar23 = uVar19 & uVar8 | (~uVar19 | ~uVar8) & *puVar23;
          }
          else {
            *puVar23 = ~uVar8 & *puVar23 | uVar8;
            memset(puVar23 + 1,0xff,(longlong)puVar10 - (longlong)(puVar23 + 1));
            if ((ulonglong)uVar19 != 0) {
              uVar8 = 0xffffffff >> (0x20U - (char)uVar19 & 0x1f);
              *puVar10 = ~uVar8 & *puVar10 | uVar8;
            }
          }
        }
        puVar10 = *(uint **)(param_1 + 0xa0);
        local_138 = iVar20;
        if (puVar10 == *(uint **)(param_1 + 0xa8)) {
LAB_1453fa910:
          FUN_145406ab0(param_1 + 0x98,puVar10,&local_res18);
          puVar23 = local_f8;
        }
        else {
          *puVar10 = uVar18;
          *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 4;
          puVar23 = local_f8;
        }
      }
    }
    plVar11 = *(longlong **)(param_1 + 0x10);
    if (local_138 == (int)((ulonglong)(plVar11[1] - *plVar11 >> 2) / 3)) {
      uVar12 = plVar11[7] - plVar11[6] >> 2;
      for (puVar15 = puVar23; puVar15 != local_130; puVar15 = puVar15 + 1) {
        uVar25 = *puVar15;
        uVar16 = (ulonglong)uVar25;
        uVar17 = (ulonglong)((int)uVar12 - 1);
        lVar9 = *(longlong *)(*(uint **)(param_1 + 0x10) + 0xc);
        iVar20 = *(int *)(lVar9 + uVar17 * 4);
        while (iVar4 = (int)uVar12, iVar20 == -1) {
          uVar12 = (ulonglong)(iVar4 - 1);
          uVar17 = (ulonglong)(iVar4 - 2);
          iVar20 = *(int *)(lVar9 + uVar17 * 4);
        }
        if (uVar25 <= (uint)uVar17) {
          uVar8 = *(uint *)(lVar9 + uVar17 * 4);
          uStack_f0 = (uint *)CONCAT44(uVar8,uVar8);
          uVar12 = (ulonglong)local_e8 >> 8;
          local_e8 = (uint *)CONCAT71((int7)uVar12,1);
          local_f8 = *(uint **)(param_1 + 0x10);
          while (uVar8 != 0xffffffff) {
            uVar19 = 0xffffffff;
            if (uVar8 == 0xffffffff) {
              uVar12 = 0xffffffff;
            }
            else {
              uVar12 = (ulonglong)uVar8;
              uVar19 = *(uint *)(**(longlong **)(param_1 + 0x10) + uVar12 * 4);
            }
            if (uVar19 != (uint)uVar17) goto LAB_1453faaa0;
            *(uint *)(**(longlong **)(param_1 + 0x10) + uVar12 * 4) = uVar25;
            FUN_1454059a0(&local_f8);
            uVar8 = uStack_f0._4_4_;
          }
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
          if (uVar25 == 0xffffffff) {
            uVar16 = 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar9 + uVar16 * 4) = *(undefined4 *)(lVar9 + uVar17 * 4);
          }
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + uVar17 * 4) =
               0xffffffff;
          lVar9 = *(longlong *)(param_1 + 0x100);
          uVar19 = 1 << ((byte)uVar17 & 0x1f);
          uVar8 = 1 << ((byte)uVar16 & 0x1f);
          uVar25 = *(uint *)(lVar9 + (uVar16 >> 5) * 4);
          if ((*(uint *)(lVar9 + (uVar17 >> 5) * 4) & uVar19) == 0) {
            uVar25 = uVar25 & ~uVar8;
          }
          else {
            uVar25 = uVar25 | uVar8;
          }
          *(uint *)(lVar9 + (uVar16 >> 5) * 4) = uVar25;
          puVar10 = (uint *)(*(longlong *)(param_1 + 0x100) + (uVar17 >> 5) * 4);
          *puVar10 = *puVar10 & ~uVar19;
          uVar12 = (ulonglong)(iVar4 - 1);
        }
      }
      goto LAB_1453faaa5;
    }
  }
LAB_1453faaa0:
  uVar12 = 0xffffffff;
LAB_1453faaa5:
  if (puVar23 != (uint *)0x0) {
    uVar17 = ((longlong)local_c0 - (longlong)puVar23 >> 2) * 4;
    puVar15 = puVar23;
    if (0xfff < uVar17) {
      uVar17 = uVar17 + 0x27;
      puVar15 = *(uint **)(puVar23 + -2);
      if (0x1f < (ulonglong)((longlong)puVar23 + (-8 - (longlong)puVar15))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar15,uVar17);
  }
  FUN_1454058e0(local_88);
  if (local_120 != (uint *)0x0) {
    uVar17 = (longlong)local_118 - (longlong)local_120 & 0xfffffffffffffffc;
    puVar15 = local_120;
    if (0xfff < uVar17) {
      uVar17 = uVar17 + 0x27;
      puVar15 = *(uint **)(local_120 + -2);
      if (0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)puVar15))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar15,uVar17);
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1453fab60 FUN_1453fab60 body=1480 status=ok
// SIG undefined FUN_1453fab60(void)

undefined4 FUN_1453fab60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  char cVar9;
  ushort uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ushort uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint local_res8 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_58 [2];
  int local_50;
  uint uStack_4c;
  uint local_48;
  
  lVar3 = param_2[2];
  if (CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48),
               *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x49)) < 0x200) {
    if (param_2[1] < lVar3 + 4) {
      return 0xffffffff;
    }
    uVar18 = *(uint *)(lVar3 + *param_2);
    param_2[2] = lVar3 + 4;
  }
  else {
    if (param_2[1] < lVar3 + 1) {
      return 0xffffffff;
    }
    bVar2 = *(byte *)(lVar3 + *param_2);
    uVar12 = (uint)bVar2;
    param_2[2] = lVar3 + 1;
    uVar18 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      cVar9 = FUN_145404280(2,local_res8,param_2);
      if (cVar9 == '\0') {
        return 0xffffffff;
      }
      uVar18 = uVar12 & 0x7f | local_res8[0] << 7;
    }
  }
  local_res8[0] = uVar18;
  uVar18 = local_48;
  uVar12 = 0;
  if (local_res8[0] != 0) {
    if ((uint)((ulonglong)
               ((*(longlong **)(param_1 + 0x10))[1] - **(longlong **)(param_1 + 0x10) >> 2) / 3) <
        local_res8[0]) {
      return 0xffffffff;
    }
    if (CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48),
                 *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x49)) < 0x102) {
      uVar13 = 0;
      if (local_res8[0] != 0) {
        do {
          lVar4 = param_2[2];
          lVar5 = param_2[1];
          lVar3 = lVar4 + 4;
          if (lVar5 < lVar3) {
            return 0xffffffff;
          }
          lVar6 = *param_2;
          lVar1 = lVar4 + 8;
          local_50 = *(int *)(lVar4 + lVar6);
          param_2[2] = lVar3;
          if (lVar5 < lVar1) {
            return 0xffffffff;
          }
          uStack_4c = *(uint *)(lVar3 + lVar6);
          param_2[2] = lVar1;
          if (lVar5 < lVar4 + 9) {
            return 0xffffffff;
          }
          bVar2 = *(byte *)(lVar1 + lVar6);
          param_2[2] = lVar4 + 9;
          puVar7 = *(undefined8 **)(param_1 + 0x50);
          uVar18 = uVar18 ^ (bVar2 ^ uVar18) & 1;
          local_48 = uVar18;
          if (puVar7 == *(undefined8 **)(param_1 + 0x58)) {
            FUN_145409800(param_1 + 0x48,puVar7,&local_50);
          }
          else {
            *puVar7 = CONCAT44(uStack_4c,local_50);
            *(uint *)(puVar7 + 1) = uVar18;
            *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 0xc;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < local_res8[0]);
      }
    }
    else {
      uVar13 = 0;
      uVar19 = 0;
      if (local_res8[0] != 0) {
        do {
          lVar3 = param_2[2] + 1;
          if (param_2[1] < lVar3) {
            return 0xffffffff;
          }
          bVar2 = *(byte *)(param_2[2] + *param_2);
          uVar15 = (uint)bVar2;
          param_2[2] = lVar3;
          if ((char)bVar2 < '\0') {
            cVar9 = FUN_145404280(2,local_res20,param_2);
            if (cVar9 == '\0') {
              return 0xffffffff;
            }
            local_res20[0] = uVar15 & 0x7f | local_res20[0] << 7;
          }
          else {
            local_res20[0] = (uint)bVar2;
          }
          uVar13 = local_res20[0] + uVar13;
          lVar3 = param_2[2] + 1;
          if (param_2[1] < lVar3) {
            return 0xffffffff;
          }
          bVar2 = *(byte *)(param_2[2] + *param_2);
          uVar15 = (uint)bVar2;
          param_2[2] = lVar3;
          uStack_4c = uVar13;
          if ((char)bVar2 < '\0') {
            cVar9 = FUN_145404280(2,local_res20,param_2);
            if (cVar9 == '\0') {
              return 0xffffffff;
            }
            local_res20[0] = uVar15 & 0x7f | local_res20[0] << 7;
          }
          else {
            local_res20[0] = (uint)bVar2;
          }
          if (uVar13 < local_res20[0]) {
            return 0xffffffff;
          }
          puVar7 = *(undefined8 **)(param_1 + 0x50);
          local_50 = uVar13 - local_res20[0];
          if (puVar7 == *(undefined8 **)(param_1 + 0x58)) {
            FUN_145409800(param_1 + 0x48,puVar7,&local_50);
          }
          else {
            *puVar7 = CONCAT44(uStack_4c,local_50);
            *(uint *)(puVar7 + 1) = uVar18;
            *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 0xc;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < local_res8[0]);
      }
      FUN_144d7d1a0(param_2,0,0);
      uVar17 = 0;
      uVar18 = local_res8[0];
      if (local_res8[0] != 0) {
        do {
          if (CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48),
                       *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x49)) < 0x202) {
            if ((char)param_2[6] != '\0') {
              uVar14 = param_2[5];
              pbVar11 = (byte *)((uVar14 >> 3) + param_2[3]);
              if (pbVar11 < (byte *)param_2[4]) {
                uVar18 = *pbVar11 >> ((byte)uVar14 & 7) & 1;
                uVar14 = uVar14 + 1;
                param_2[5] = uVar14;
              }
              else {
                uVar18 = 0;
              }
              if ((byte *)((uVar14 >> 3) + param_2[3]) < (byte *)param_2[4]) {
                param_2[5] = uVar14 + 1;
              }
            }
          }
          else if ((char)param_2[6] != '\0') {
            uVar14 = param_2[5];
            pbVar11 = (byte *)(param_2[3] + (uVar14 >> 3));
            if (pbVar11 < (byte *)param_2[4]) {
              bVar2 = *pbVar11;
              param_2[5] = uVar14 + 1;
              uVar18 = bVar2 >> ((byte)uVar14 & 7) & 1;
            }
            else {
              uVar18 = 0;
            }
          }
          uVar13 = (int)uVar17 + 1;
          lVar3 = *(longlong *)(param_1 + 0x48) + uVar17 * 0xc;
          puVar8 = (uint *)(lVar3 + 8);
          *puVar8 = *puVar8 ^ (uVar18 ^ *(uint *)(lVar3 + 8)) & 1;
          uVar17 = (ulonglong)uVar13;
        } while (uVar13 < local_res8[0]);
      }
      FUN_144d7d260(param_2);
    }
  }
  uVar16 = 0x102;
  local_res18[0] = 0;
  uVar10 = CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48),
                    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x49));
  if (uVar10 < 0x200) {
    lVar3 = param_2[2] + 4;
    if (param_2[1] < lVar3) {
      return 0xffffffff;
    }
    local_res18[0] = *(uint *)(param_2[2] + *param_2);
    param_2[2] = lVar3;
  }
  else {
    if (0x200 < uVar10) goto LAB_1453fb106;
    lVar3 = param_2[2] + 1;
    if (param_2[1] < lVar3) {
      return 0xffffffff;
    }
    bVar2 = *(byte *)(param_2[2] + *param_2);
    uVar18 = (uint)bVar2;
    param_2[2] = lVar3;
    if ((char)bVar2 < '\0') {
      uVar16 = 0x102;
      cVar9 = FUN_145404280(2,local_res18,param_2);
      if (cVar9 == '\0') {
        return 0xffffffff;
      }
      local_res18[0] = uVar18 & 0x7f | local_res18[0] << 7;
    }
    else {
      local_res18[0] = (uint)bVar2;
    }
  }
  if (local_res18[0] != 0) {
    if (CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48),
                 *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x49)) < uVar16) {
      if (local_res18[0] != 0) {
        do {
          lVar3 = param_2[2] + 4;
          if (param_2[1] < lVar3) {
            return 0xffffffff;
          }
          local_res20[0] = *(uint *)(param_2[2] + *param_2);
          param_2[2] = lVar3;
          puVar8 = *(uint **)(param_1 + 0x68);
          if (puVar8 == *(uint **)(param_1 + 0x70)) {
            FUN_145409660(param_1 + 0x60,puVar8,local_res20);
          }
          else {
            *puVar8 = local_res20[0];
            *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 4;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < local_res18[0]);
        return (int)param_2[2];
      }
    }
    else {
      uVar18 = 0;
      if (local_res18[0] != 0) {
        do {
          lVar3 = param_2[2] + 1;
          if (param_2[1] < lVar3) {
            return 0xffffffff;
          }
          bVar2 = *(byte *)(param_2[2] + *param_2);
          uVar13 = (uint)bVar2;
          param_2[2] = lVar3;
          if ((char)bVar2 < '\0') {
            cVar9 = FUN_145404280(2,local_res20,param_2);
            if (cVar9 == '\0') {
              return 0xffffffff;
            }
            local_res20[0] = uVar13 & 0x7f | local_res20[0] << 7;
          }
          else {
            local_res20[0] = (uint)bVar2;
          }
          puVar8 = *(uint **)(param_1 + 0x68);
          uVar12 = uVar12 + local_res20[0];
          local_58[0] = uVar12;
          if (puVar8 == *(uint **)(param_1 + 0x70)) {
            FUN_145409660(param_1 + 0x60,puVar8,local_58);
          }
          else {
            *puVar8 = uVar12;
            *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 4;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < local_res18[0]);
      }
    }
  }
LAB_1453fb106:
  return (int)param_2[2];
}



// FUNCTION 1453fb130 FUN_1453fb130 body=554 status=ok
// SIG undefined FUN_1453fb130(void)

void FUN_1453fb130(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  uint local_40 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[0] = param_2;
  if (param_2 == 0xffffffff) {
    local_40[1] = 0xffffffff;
    local_40[2] = 0xffffffff;
  }
  else {
    iVar5 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar5 = -2;
    }
    local_40[2] = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      local_40[2] = param_2 + 2;
    }
    local_40[1] = iVar5 + param_2;
  }
  puVar8 = local_40;
  lVar9 = 3;
  do {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) ||
       (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar1 * 4) == -1))
    {
      lVar4 = *(longlong *)(param_1 + 0x1e0);
      uVar6 = 0;
      if ((*(longlong *)(param_1 + 0x1e8) - lVar4) / 0x130 != 0) {
        uVar7 = 0;
        local_48[0] = uVar1;
        do {
          lVar4 = lVar4 + 0x118 + uVar7 * 0x130;
          puVar2 = *(uint **)(lVar4 + 8);
          if (puVar2 == *(uint **)(lVar4 + 0x10)) {
            FUN_14694af78(lVar4,puVar2,local_48);
          }
          else {
            *puVar2 = uVar1;
            *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 4;
          }
          lVar4 = *(longlong *)(param_1 + 0x1e0);
          uVar6 = uVar6 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar7 < (ulonglong)((*(longlong *)(param_1 + 0x1e8) - lVar4) / 0x130));
      }
    }
    else {
      uVar6 = 0;
      if ((*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0)) / 0x130 != 0) {
        uVar7 = 0;
        do {
          cVar3 = FUN_1453f5f80(*(longlong *)(param_1 + 0x2b8) + (longlong)(int)uVar6 * 0x18);
          if (cVar3 != '\0') {
            lVar4 = uVar7 * 0x130 + *(longlong *)(param_1 + 0x1e0) + 0x118;
            if (*(uint **)(lVar4 + 8) == *(uint **)(lVar4 + 0x10)) {
              local_48[0] = uVar1;
              FUN_14694af78();
            }
            else {
              **(uint **)(lVar4 + 8) = uVar1;
              *(longlong *)(lVar4 + 8) = *(longlong *)(lVar4 + 8) + 4;
              local_48[0] = uVar1;
            }
          }
          uVar6 = uVar6 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar7 < (ulonglong)
                         ((*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0)) / 0x130)
                );
      }
    }
    puVar8 = puVar8 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1453fb380 FUN_1453fb380 body=586 status=ok
// SIG undefined FUN_1453fb380(void)

void FUN_1453fb380(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  uint local_40 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[0] = param_2;
  if (param_2 == 0xffffffff) {
    local_40[1] = 0xffffffff;
    local_40[2] = 0xffffffff;
    param_2 = 0xffffffff;
  }
  else {
    iVar4 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar4 = -2;
    }
    local_40[2] = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      local_40[2] = param_2 + 2;
    }
    local_40[1] = iVar4 + param_2;
    param_2 = param_2 / 3;
  }
  puVar9 = local_40;
  lVar8 = 3;
  do {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) ||
       (uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + (ulonglong)uVar1 * 4
                         ), uVar6 == 0xffffffff)) {
      lVar5 = *(longlong *)(param_1 + 0x1e0);
      uVar6 = 0;
      if ((*(longlong *)(param_1 + 0x1e8) - lVar5) / 0x130 != 0) {
        uVar7 = 0;
        local_48[0] = uVar1;
        do {
          lVar5 = lVar5 + 0x118 + uVar7 * 0x130;
          puVar2 = *(uint **)(lVar5 + 8);
          if (puVar2 == *(uint **)(lVar5 + 0x10)) {
            FUN_14694af78(lVar5,puVar2,local_48);
          }
          else {
            *puVar2 = uVar1;
            *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 4;
          }
          lVar5 = *(longlong *)(param_1 + 0x1e0);
          uVar6 = uVar6 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar7 < (ulonglong)((*(longlong *)(param_1 + 0x1e8) - lVar5) / 0x130));
      }
    }
    else if ((param_2 <= uVar6 / 3) &&
            (uVar7 = 0,
            (*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0)) / 0x130 != 0)) {
      do {
        cVar3 = FUN_1453f5f80(*(longlong *)(param_1 + 0x2b8) + (longlong)(int)uVar7 * 0x18);
        if (cVar3 != '\0') {
          lVar5 = uVar7 * 0x130 + *(longlong *)(param_1 + 0x1e0) + 0x118;
          if (*(uint **)(lVar5 + 8) == *(uint **)(lVar5 + 0x10)) {
            local_48[0] = uVar1;
            FUN_14694af78();
          }
          else {
            **(uint **)(lVar5 + 8) = uVar1;
            *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 4;
            local_48[0] = uVar1;
          }
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar7 < (ulonglong)
                       ((*(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0)) / 0x130));
    }
    puVar9 = puVar9 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1453fb5f0 FUN_1453fb5f0 body=2140 status=ok
// SIG undefined FUN_1453fb5f0(void)

void FUN_1453fb5f0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  void *pvVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint *local_a0;
  void *local_98;
  longlong local_90;
  uint *puStack_88;
  uint *local_80;
  longlong local_78;
  void *local_70;
  void *pvStack_68;
  void *local_60;
  uint *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (uint *)0x0;
  local_50 = 0;
  local_a8 = param_2;
  local_78 = param_1;
  FUN_1453f67e0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + 0xc0,
                (longlong)
                (int)((ulonglong)
                      ((*(longlong **)(param_1 + 0x10))[1] - **(longlong **)(param_1 + 0x10) >> 2) /
                     3),&local_58);
  if (*(longlong *)(param_1 + 0x1e0) == *(longlong *)(param_1 + 0x1e8)) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + 200) -
            *(longlong *)(*(longlong *)(lVar2 + 0x58) + 0xc0);
    iVar3 = (int)(lVar5 >> 0x3f);
    uVar12 = 0;
    if ((int)(lVar5 / 0xc) + iVar3 != iVar3) {
      do {
        uVar10 = uVar12 * 3;
        if (uVar10 == 0xffffffff) {
          uVar15 = 0xffffffff;
LAB_1453fb6de:
          uVar18 = *(undefined4 *)(**(longlong **)(local_78 + 0x10) + (ulonglong)(uVar10 + 1) * 4);
        }
        else {
          uVar15 = *(undefined4 *)(**(longlong **)(param_1 + 0x10) + (ulonglong)uVar10 * 4);
          if (uVar10 != 0xfffffffe) goto LAB_1453fb6de;
          uVar18 = 0xffffffff;
        }
        if (uVar10 + 2 == 0xffffffff) {
          uVar17 = 0xffffffff;
        }
        else {
          uVar17 = *(undefined4 *)(**(longlong **)(local_78 + 0x10) + (ulonglong)(uVar10 + 2) * 4);
        }
        lVar2 = *(longlong *)(*(longlong *)(local_78 + 8) + 0x58);
        uVar10 = uVar12 + 1;
        if ((uint)((*(longlong *)(lVar2 + 200) - *(longlong *)(lVar2 + 0xc0)) / 0xc) <= uVar12) {
          local_58 = (uint *)0x0;
          local_50 = 0;
          FUN_1453f67e0(lVar2 + 0xc0,uVar10,&local_58);
        }
        uVar9 = (ulonglong)uVar12;
        lVar2 = *(longlong *)(lVar2 + 0xc0);
        *(undefined4 *)(lVar2 + uVar9 * 0xc) = uVar15;
        *(undefined4 *)(lVar2 + 4 + uVar9 * 0xc) = uVar18;
        *(undefined4 *)(lVar2 + 8 + uVar9 * 0xc) = uVar17;
        lVar2 = *(longlong *)(local_78 + 8);
        param_1 = local_78;
        uVar12 = uVar10;
      } while (uVar10 < (uint)((*(longlong *)(*(longlong *)(lVar2 + 0x58) + 200) -
                               *(longlong *)(*(longlong *)(lVar2 + 0x58) + 0xc0)) / 0xc));
    }
    *(uint *)(*(longlong *)(lVar2 + 8) + 0xa0) = local_a8;
  }
  else {
    local_90 = 0;
    puStack_88 = (uint *)0x0;
    local_58 = (uint *)0x0;
    local_80 = (uint *)0x0;
    iVar3 = (int)((*(longlong **)(param_1 + 0x10))[1] - **(longlong **)(param_1 + 0x10) >> 2);
    local_70 = (void *)0x0;
    pvStack_68 = (void *)0x0;
    local_60 = (void *)0x0;
    if (iVar3 == 0) {
      pvVar16 = (void *)0x0;
      local_98 = (void *)0x0;
    }
    else {
      if (0x3fffffffffffffff < (ulonglong)(longlong)iVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_14694aefc();
      }
      uVar9 = (longlong)iVar3 * 4;
      if (uVar9 < 0x1000) {
        if (uVar9 == 0) {
          pvVar16 = (void *)0x0;
        }
        else {
          pvVar16 = (void *)FUN_14494321d(uVar9);
        }
      }
      else {
        if (uVar9 + 0x27 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_14694ac37();
        }
        lVar2 = FUN_14494321d();
        if (lVar2 == 0) goto LAB_1453fbddd;
        pvVar16 = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)pvVar16 - 8) = lVar2;
      }
      local_98 = pvVar16;
      local_70 = pvVar16;
      local_60 = (void *)(uVar9 + (longlong)pvVar16);
      memset(pvVar16,0,uVar9);
      pvStack_68 = (void *)(uVar9 + (longlong)pvVar16);
    }
    uVar9 = 0;
    local_a8 = 0;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_a0 = puStack_88;
    lVar5 = local_90;
    puVar19 = puStack_88;
    if (0 < (int)(*(longlong *)(lVar2 + 0x38) - *(longlong *)(lVar2 + 0x30) >> 2)) {
      do {
        uVar12 = *(uint *)(*(longlong *)(lVar2 + 0x30) + uVar9 * 4);
        uVar7 = (ulonglong)uVar12;
        if (uVar12 != 0xffffffff) {
          if ((*(uint *)(*(longlong *)(param_1 + 0x100) + ((ulonglong)(longlong)(int)uVar9 >> 5) * 4
                        ) & 1 << ((byte)uVar9 & 0x1f)) == 0) {
            uVar10 = 0;
            lVar8 = *(longlong *)(param_1 + 0x1e0);
            lVar6 = *(longlong *)(param_1 + 0x1e8) - lVar8;
            lVar6 = lVar6 / 0x26 + (lVar6 >> 0x3f);
            lVar11 = lVar6 >> 3;
            lVar6 = lVar6 >> 0x3f;
            if (lVar11 != lVar6) {
              uVar9 = 0;
              do {
                lVar13 = uVar9 * 0x130;
                uVar1 = *(uint *)(uVar7 * 4 + **(longlong **)(lVar13 + 0x98 + lVar8));
                lVar5 = local_90;
                if ((*(uint *)(*(longlong *)(lVar13 + 0x28 + lVar8) + (ulonglong)(uVar1 >> 5) * 4) &
                    1 << ((byte)uVar1 & 0x1f)) != 0) {
                  lVar13 = *(longlong *)(lVar13 + 0x50 + lVar8);
                  uVar1 = uVar12 - 1;
                  if (uVar12 == (uVar12 / 3) * 3) {
                    uVar1 = uVar12 + 2;
                  }
                  if ((uVar1 == 0xffffffff) ||
                     (uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar1 * 4),
                     uVar1 == 0xffffffff)) {
                    uVar4 = 0xffffffff;
                  }
                  else {
                    uVar4 = uVar1 - 1;
                    if (uVar1 == (uVar1 / 3) * 3) {
                      uVar4 = uVar1 + 2;
                    }
                    if (uVar4 == uVar12) goto LAB_1453fba4d;
                  }
                  do {
                    if (uVar4 == 0xffffffff) goto LAB_1453fbda0;
                    if (*(int *)(lVar13 + (ulonglong)uVar4 * 4) != *(int *)(lVar13 + uVar7 * 4)) {
                      uVar7 = (ulonglong)uVar4;
                      goto LAB_1453fba61;
                    }
                    if (uVar4 == (uVar4 / 3) * 3) {
                      uVar4 = uVar4 + 2;
                    }
                    else {
                      uVar4 = uVar4 - 1;
                    }
                    if ((uVar4 == 0xffffffff) ||
                       (uVar4 = *(uint *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar4 * 4),
                       uVar4 == 0xffffffff)) goto LAB_1453fbda0;
                    if (uVar4 == (uVar4 / 3) * 3) {
                      uVar4 = uVar4 + 2;
                    }
                    else {
                      uVar4 = uVar4 - 1;
                    }
                  } while (uVar4 != uVar12);
                }
LAB_1453fba4d:
                uVar10 = uVar10 + 1;
                uVar9 = (ulonglong)uVar10;
              } while (uVar9 < (ulonglong)(lVar11 - lVar6));
            }
LAB_1453fba61:
            uVar9 = (ulonglong)local_a8;
            pvVar16 = local_98;
          }
          uVar12 = (uint)uVar7;
          *(int *)(uVar7 * 4 + (longlong)pvVar16) = (int)((longlong)puVar19 - lVar5 >> 2);
          local_a0 = (uint *)CONCAT44(local_a0._4_4_,uVar12);
          if (puVar19 == local_58) {
            FUN_14694af78(&local_90,puVar19,&local_a0);
            local_58 = local_80;
            lVar5 = local_90;
          }
          else {
            *puVar19 = uVar12;
            puStack_88 = puVar19 + 1;
          }
          puVar19 = puStack_88;
          local_a0 = puStack_88;
          if (uVar12 != 0xffffffff) {
            uVar10 = uVar12 - 1;
            if (uVar12 == (int)(uVar7 / 3) * 3) {
              uVar10 = uVar12 + 2;
            }
            if (uVar10 != 0xffffffff) {
              uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                                (ulonglong)uVar10 * 4);
              puVar19 = puStack_88;
              if (uVar10 != 0xffffffff) {
                if (uVar10 == (uVar10 / 3) * 3) {
                  uVar10 = uVar10 + 2;
                }
                else {
                  uVar10 = uVar10 - 1;
                }
                puVar19 = puStack_88;
                if (uVar10 != 0xffffffff) {
                  while (uVar9 = (ulonglong)uVar10, uVar10 != uVar12) {
                    uVar1 = 0;
                    lVar2 = *(longlong *)(param_1 + 0x1e8) - *(longlong *)(param_1 + 0x1e0);
                    lVar2 = lVar2 / 0x26 + (lVar2 >> 0x3f);
                    lVar5 = lVar2 >> 3;
                    lVar2 = lVar2 >> 0x3f;
                    if (lVar5 == lVar2) {
                      lVar2 = uVar9 * 4;
                    }
                    else {
                      uVar14 = 0;
                      do {
                        lVar8 = *(longlong *)
                                 (uVar14 * 0x130 + 0x50 + *(longlong *)(param_1 + 0x1e0));
                        if (*(int *)(lVar8 + uVar9 * 4) != *(int *)(uVar7 * 4 + lVar8)) {
                          *(int *)(uVar9 * 4 + (longlong)pvVar16) =
                               (int)((longlong)puVar19 - local_90 >> 2);
                          local_a0 = (uint *)CONCAT44(local_a0._4_4_,uVar10);
                          if (puVar19 == local_58) {
                            FUN_14694af78(&local_90,puVar19,&local_a0);
                            local_58 = local_80;
                            puVar19 = puStack_88;
                          }
                          else {
                            *puVar19 = uVar10;
                            puStack_88 = puVar19 + 1;
                            puVar19 = puStack_88;
                          }
                          goto LAB_1453fbc0d;
                        }
                        uVar1 = uVar1 + 1;
                        uVar14 = (ulonglong)uVar1;
                      } while (uVar14 < (ulonglong)(lVar5 - lVar2));
                      lVar2 = uVar9 << 2;
                    }
                    *(undefined4 *)(lVar2 + (longlong)pvVar16) =
                         *(undefined4 *)((longlong)pvVar16 + uVar7 * 4);
LAB_1453fbc0d:
                    lVar5 = local_90;
                    if (uVar10 == 0xffffffff) break;
                    if (uVar10 == (uVar10 / 3) * 3) {
                      uVar10 = uVar10 + 2;
                    }
                    else {
                      uVar10 = uVar10 - 1;
                    }
                    if ((uVar10 == 0xffffffff) ||
                       (uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                                          (ulonglong)uVar10 * 4), uVar10 == 0xffffffff)) break;
                    if (uVar10 == (uVar10 / 3) * 3) {
                      uVar10 = uVar10 + 2;
                    }
                    else {
                      uVar10 = uVar10 - 1;
                    }
                    uVar7 = uVar9;
                    if (uVar10 == 0xffffffff) break;
                  }
                }
              }
              local_a0 = puVar19;
              uVar9 = (ulonglong)local_a8;
              puVar19 = local_a0;
            }
          }
        }
        local_a8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)local_a8;
        lVar2 = *(longlong *)(param_1 + 0x10);
      } while ((int)local_a8 < (int)(*(longlong *)(lVar2 + 0x38) - *(longlong *)(lVar2 + 0x30) >> 2)
              );
    }
    uVar12 = 0;
    lVar2 = *(longlong *)(param_1 + 8);
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + 200) -
            *(longlong *)(*(longlong *)(lVar2 + 0x58) + 0xc0);
    iVar3 = (int)(lVar8 >> 0x3f);
    pvVar16 = local_98;
    if ((int)(lVar8 / 0xc) + iVar3 != iVar3) {
      do {
        uVar10 = uVar12 * 3;
        uVar15 = *(undefined4 *)((longlong)pvVar16 + (ulonglong)uVar10 * 4);
        uVar18 = *(undefined4 *)((longlong)pvVar16 + (ulonglong)(uVar10 + 1) * 4);
        uVar17 = *(undefined4 *)((longlong)pvVar16 + (ulonglong)(uVar10 + 2) * 4);
        lVar2 = *(longlong *)(lVar2 + 0x58);
        uVar10 = uVar12 + 1;
        if ((uint)((*(longlong *)(lVar2 + 200) - *(longlong *)(lVar2 + 0xc0)) / 0xc) <= uVar12) {
          local_48 = 0;
          local_40 = 0;
          FUN_1453f67e0(lVar2 + 0xc0,uVar10,&local_48);
          pvVar16 = local_98;
        }
        uVar9 = (ulonglong)uVar12;
        lVar2 = *(longlong *)(lVar2 + 0xc0);
        *(undefined4 *)(lVar2 + uVar9 * 0xc) = uVar15;
        *(undefined4 *)(lVar2 + 4 + uVar9 * 0xc) = uVar18;
        *(undefined4 *)(lVar2 + 8 + uVar9 * 0xc) = uVar17;
        lVar2 = *(longlong *)(local_78 + 8);
        lVar5 = local_90;
        puVar19 = local_a0;
        uVar12 = uVar10;
      } while (uVar10 < (uint)((*(longlong *)(*(longlong *)(lVar2 + 0x58) + 200) -
                               *(longlong *)(*(longlong *)(lVar2 + 0x58) + 0xc0)) / 0xc));
    }
    *(int *)(*(longlong *)(lVar2 + 8) + 0xa0) = (int)((longlong)puVar19 - lVar5 >> 2);
LAB_1453fbda0:
    if (local_98 != (void *)0x0) {
      uVar9 = ((longlong)local_60 - (longlong)local_98 >> 2) * 4;
      pvVar16 = local_98;
      if (0xfff < uVar9) {
        uVar9 = uVar9 + 0x27;
        pvVar16 = *(void **)((longlong)local_98 + -8);
        if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pvVar16))) {
LAB_1453fbddd:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar16,uVar9);
    }
    if (lVar5 != 0) {
      uVar9 = (longlong)local_58 - lVar5 & 0xfffffffffffffffc;
      lVar2 = lVar5;
      if (0xfff < uVar9) {
        uVar9 = uVar9 + 0x27;
        lVar2 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar2,uVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1453fbe80 FUN_1453fbe80 body=65 status=ok
// SIG undefined FUN_1453fbe80(void)

void FUN_1453fbe80(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x130;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 1453fbed0 FUN_1453fbed0 body=136 status=ok
// SIG undefined FUN_1453fbed0(void)

void FUN_1453fbed0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_145406fd0(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x130) * 0x130;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1453fbf60 FUN_1453fbf60 body=16 status=ok
// SIG undefined FUN_1453fbf60(void)

void FUN_1453fbf60(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1453fbf80 FUN_1453fbf80 body=84 status=ok
// SIG undefined FUN_1453fbf80(void)

longlong * FUN_1453fbf80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    *param_2 = 0;
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      FUN_1453f65f0(lVar2);
      thunk_FUN_1400020a8(lVar2,0xa8);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1453fbfe0 FUN_1453fbfe0 body=954 status=ok
// SIG undefined FUN_1453fbfe0(void)

void FUN_1453fbfe0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1453f7880(param_1 + 0x1f8);
  FUN_1453fbed0(param_1 + 0x1e0);
  FUN_1453f63f0(param_1 + 0x1a0);
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x198) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x180) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  FUN_1453f7250(param_1 + 0x128);
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x110) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0xf0) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0xd0) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0xa8) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x88) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x70) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_1453f6d90(param_1 + 0x48);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x40) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1453fc394;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_1453fc394:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1453f65f0(lVar1);
    thunk_FUN_1400020a8(lVar1,0xa8);
  }
  return;
}



// FUNCTION 1453fc3a0 FUN_1453fc3a0 body=52 status=ok
// SIG undefined FUN_1453fc3a0(void)

undefined8 FUN_1453fc3a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1453fbfe0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 1453fc3e0 FUN_1453fc3e0 body=537 status=ok
// SIG undefined FUN_1453fc3e0(void)

undefined8 * FUN_1453fc3e0(undefined8 *param_1)

{
  *param_1 = draco::MeshEdgebreakerDecoderImpl<draco::MeshEdgebreakerTraversalPredictiveDecoder>::
             vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_1453f7300(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_144d7d140(param_1 + 0x3f);
  FUN_144d7d140(param_1 + 0x46);
  FUN_1453f5dc0(param_1 + 0x4d);
  FUN_144d7d140(param_1 + 0x50);
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  FUN_1453f5dc0(param_1 + 0x5f);
  param_1[0x62] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 1453fc600 FUN_1453fc600 body=7 status=ok
// SIG undefined FUN_1453fc600(void)

undefined1 FUN_1453fc600(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 1453fc610 FUN_1453fc610 body=302 status=ok
// SIG undefined FUN_1453fc610(void)

longlong FUN_1453fc610(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x1e0);
  lVar4 = *(longlong *)(param_1 + 0x1e8) - lVar6;
  uVar8 = 0;
  lVar7 = lVar4 >> 0x3f;
  if (lVar4 / 0x130 + lVar7 != lVar7) {
    uVar5 = 0;
    do {
      lVar7 = uVar5 * 0x130;
      iVar2 = *(int *)(lVar7 + lVar6);
      if ((-1 < iVar2) &&
         (lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10),
         iVar2 < (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) - lVar6 >> 3))) {
        plVar1 = *(longlong **)(lVar6 + (longlong)iVar2 * 8);
        iVar3 = 0;
        iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (0 < iVar2) {
          do {
            iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,iVar3);
            if (iVar2 == param_2) {
              if (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0xd8 + lVar7) == '\0') {
                return 0;
              }
              return *(longlong *)(param_1 + 0x1e0) + 8 + lVar7;
            }
            iVar3 = iVar3 + 1;
            iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
          } while (iVar3 < iVar2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x1e0);
      uVar8 = uVar8 + 1;
      uVar5 = (ulonglong)uVar8;
    } while (uVar5 < (ulonglong)((*(longlong *)(param_1 + 0x1e8) - lVar6) / 0x130));
  }
  return 0;
}



// FUNCTION 1453fc740 FUN_1453fc740 body=298 status=ok
// SIG undefined FUN_1453fc740(void)

longlong FUN_1453fc740(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x1e0);
  lVar5 = *(longlong *)(param_1 + 0x1e8) - lVar7;
  uVar8 = 0;
  lVar2 = lVar5 >> 0x3f;
  if (lVar5 / 0x130 + lVar2 != lVar2) {
    uVar6 = 0;
    do {
      iVar3 = *(int *)(uVar6 * 0x130 + lVar7);
      if ((-1 < iVar3) &&
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10),
         iVar3 < (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) - lVar7 >> 3))) {
        plVar1 = *(longlong **)(lVar7 + (longlong)iVar3 * 8);
        iVar4 = 0;
        iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (0 < iVar3) {
          do {
            iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,iVar4);
            if (iVar3 == param_2) {
              return *(longlong *)(param_1 + 0x1e0) + 0xe0 + uVar6 * 0x130;
            }
            iVar4 = iVar4 + 1;
            iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
          } while (iVar4 < iVar3);
        }
      }
      lVar7 = *(longlong *)(param_1 + 0x1e0);
      uVar8 = uVar8 + 1;
      uVar6 = (ulonglong)uVar8;
    } while (uVar6 < (ulonglong)((*(longlong *)(param_1 + 0x1e8) - lVar7) / 0x130));
  }
  return param_1 + 0x1a0;
}



// FUNCTION 1453fc870 FUN_1453fc870 body=1034 status=ok
// SIG undefined FUN_1453fc870(void)

ulonglong FUN_1453fc870(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *local_res8;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 *local_118;
  longlong local_110;
  longlong lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar8 = *(ulonglong *)(param_1 + 8);
  plVar4 = *(longlong **)(uVar8 + 0x40);
  lVar15 = plVar4[2] + 1;
  if (plVar4[1] < lVar15) {
LAB_1453fcc5e:
    return uVar8 & 0xffffffffffffff00;
  }
  cVar2 = *(char *)(plVar4[2] + *plVar4);
  uVar14 = (ulonglong)cVar2;
  plVar4[2] = lVar15;
  uVar8 = *(ulonglong *)(param_1 + 8);
  puVar5 = *(ulonglong **)(uVar8 + 0x40);
  uVar1 = puVar5[2] + 1;
  if ((longlong)puVar5[1] < (longlong)uVar1) goto LAB_1453fcc5e;
  uVar8 = *puVar5;
  cVar3 = *(char *)(puVar5[2] + uVar8);
  puVar5[2] = uVar1;
  if (cVar2 < '\0') {
    if (-1 < *(int *)(param_1 + 0x1d8)) goto LAB_1453fcc5e;
    *(undefined4 *)(param_1 + 0x1d8) = param_2;
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x1e0);
    lVar12 = *(longlong *)(param_1 + 0x1e8) - lVar15;
    uVar8 = -(lVar12 >> 0x3f);
    if (((ulonglong)(lVar12 / 0x130) <= uVar14) ||
       (uVar8 = uVar14 * 0x130, -1 < *(int *)(uVar8 + lVar15))) goto LAB_1453fcc5e;
    *(undefined4 *)(uVar8 + lVar15) = param_2;
  }
  puVar16 = (undefined8 *)0x0;
  lVar15 = *(longlong *)(param_1 + 8);
  uVar8 = 0x102;
  puVar10 = puVar16;
  if (0x101 < CONCAT11(*(undefined1 *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x49))) {
    puVar5 = *(ulonglong **)(lVar15 + 0x40);
    uVar1 = puVar5[2] + 1;
    if ((longlong)puVar5[1] < (longlong)uVar1) goto LAB_1453fcc5e;
    uVar8 = *puVar5;
    bVar7 = *(byte *)(puVar5[2] + uVar8);
    puVar10 = (undefined8 *)(ulonglong)bVar7;
    puVar5[2] = uVar1;
    if (1 < bVar7) goto LAB_1453fcc5e;
  }
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58);
  local_118 = (undefined8 *)0x0;
  iVar13 = (int)puVar10;
  puVar10 = puVar16;
  if (cVar3 == '\0') {
    if (cVar2 < '\0') {
      lVar15 = param_1 + 0x1a0;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x1e0) + 0xe0 + uVar14 * 0x130;
      *(undefined1 *)(uVar14 * 0x130 + 0xd8 + *(longlong *)(param_1 + 0x1e0)) = 0;
    }
    if (iVar13 == 1) {
      ppuVar9 = (undefined8 **)FUN_145405af0(param_1,&local_res8);
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
      uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
      if (iVar13 != 0) goto LAB_1453fcc43;
      ppuVar9 = (undefined8 **)FUN_145405d70(param_1,&local_res8,lVar15);
    }
    if (&local_118 != ppuVar9) {
      puVar10 = *ppuVar9;
      *ppuVar9 = (undefined8 *)0x0;
      local_118 = puVar10;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
LAB_1453fcbee:
    if (puVar10 != (undefined8 *)0x0) {
      local_res18 = (undefined8 *)FUN_14494321d(0x80);
      puVar11 = puVar16;
      if (local_res18 != (undefined8 *)0x0) {
        local_118 = (undefined8 *)0x0;
        local_res8 = puVar10;
        puVar11 = (undefined8 *)FUN_145409b70(local_res18,&local_res8);
        puVar10 = puVar16;
      }
      local_res20 = 0;
      local_res18 = puVar11;
      bVar7 = FUN_14517be90(*(undefined8 *)(param_1 + 8),param_2,&local_res18);
      goto LAB_1453fcc46;
    }
  }
  else {
    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
    if ((iVar13 == 0) &&
       (puVar10 = (undefined8 *)0x0, local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58),
       uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50), -1 < cVar2)) {
      lVar15 = *(longlong *)(param_1 + 0x1e0) + 0xe0 + uVar14 * 0x130;
      lVar12 = *(longlong *)(param_1 + 0x1e0) + 8 + uVar14 * 0x130;
      local_res8 = (undefined8 *)FUN_14494321d(0xb0);
      puVar10 = puVar16;
      if (local_res8 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)FUN_145404850(local_res8,uVar6,lVar15);
      }
      local_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_e8 = draco::
                 DepthFirstTraverser<draco::MeshAttributeCornerTable,draco::MeshAttributeIndicesEncodingObserver<draco::MeshAttributeCornerTable>_>
                 ::vftable;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_100._0_4_ = (undefined4)uVar6;
      local_100._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_f8._0_4_ = SUB84(puVar10,0);
      uStack_f8._4_4_ = (undefined4)((ulonglong)puVar10 >> 0x20);
      local_48 = (undefined4)local_100;
      uStack_44 = local_100._4_4_;
      uStack_40 = (undefined4)uStack_f8;
      uStack_3c = uStack_f8._4_4_;
      local_res8 = puVar10;
      local_110 = lVar12;
      lStack_108 = lVar15;
      local_100 = uVar6;
      uStack_f8 = puVar10;
      local_58 = lVar12;
      uStack_50 = lVar15;
      FUN_145404c90(&local_e8,lVar12,&local_58);
      FUN_1454048d0(puVar10,&local_e8);
      local_118 = puVar10;
      if (local_78 != 0) {
        uVar8 = (local_68 - local_78 >> 2) * 4;
        lVar15 = local_78;
        if (0xfff < uVar8) {
          uVar8 = uVar8 + 0x27;
          lVar15 = *(longlong *)(local_78 + -8);
          if (0x1f < (local_78 - lVar15) - 8U) goto LAB_1453fcbe1;
        }
        thunk_FUN_1400020a8(lVar15,uVar8);
      }
      if (local_98 != 0) {
        uVar8 = (local_88 - local_98 >> 2) * 4;
        lVar15 = local_98;
        if (0xfff < uVar8) {
          uVar8 = uVar8 + 0x27;
          lVar15 = *(longlong *)(local_98 + -8);
          if (0x1f < (local_98 - lVar15) - 8U) goto LAB_1453fcbe1;
        }
        thunk_FUN_1400020a8(lVar15,uVar8);
      }
      if (local_b8 != 0) {
        uVar8 = (local_a8 - local_b8 >> 2) * 4;
        lVar15 = local_b8;
        if (0xfff < uVar8) {
          uVar8 = uVar8 + 0x27;
          lVar15 = *(longlong *)(local_b8 + -8);
          if (0x1f < (local_b8 - lVar15) - 8U) {
LAB_1453fcbe1:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(lVar15,uVar8);
      }
      goto LAB_1453fcbee;
    }
  }
LAB_1453fcc43:
  bVar7 = 0;
LAB_1453fcc46:
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  return (ulonglong)bVar7;
}


