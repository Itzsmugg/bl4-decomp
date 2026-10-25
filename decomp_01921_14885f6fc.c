// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14885f6fc FUN_14885f6fc body=50 status=ok
// SIG undefined FUN_14885f6fc(void)

undefined8 FUN_14885f6fc(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_14885f7a0();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_14039ffc6(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14885f72e FUN_14885f72e body=73 status=ok
// SIG undefined FUN_14885f72e(void)

void FUN_14885f72e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_1486ae1b6(param_1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885f7a0 FUN_14885f7a0 body=93 status=ok
// SIG undefined FUN_14885f7a0(void)

undefined8 FUN_14885f7a0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014885f7f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x1c0) + 0x10))(lVar1 + 0x1c0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14885f7fe FUN_14885f7fe body=408 status=ok
// SIG undefined FUN_14885f7fe(void)

undefined8 * FUN_14885f7fe(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_144a7cacc();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(param_2 + 0x428);
    if (plVar8 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar8 + 0x4c8))(plVar8,*param_3);
      if (cVar2 != '\0') {
        (**(code **)(*plVar8 + 0x4a8))(plVar8,param_1,*param_3,0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
      }
    }
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  FUN_145983014(param_2,local_d8,0);
  lVar3 = (longlong)(int)local_50;
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_d8;
  }
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(puVar7 + lVar4);
      if (plVar1 != plVar8 && plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x4c8))(plVar1,*param_3);
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0x4a8))(plVar1,param_1,*param_3,0);
          goto LAB_14885f950;
        }
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  puVar5 = &DAT_14c846480;
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x240);
  }
  puVar6 = param_1;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_14885f950:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14885f998 FUN_14885f998 body=207 status=ok
// SIG undefined FUN_14885f998(void)

ulonglong FUN_14885f998(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  FUN_141293d77(0,&local_58);
  if ((longlong)(int)uStack_50 == 0) {
    uVar7 = 0;
  }
  else {
    plVar1 = local_58 + (int)uStack_50;
    plVar6 = local_58;
    do {
      lVar2 = *plVar6;
      if ((lVar2 != 0) && (lVar4 = param_2[1], (longlong)(int)lVar4 != 0)) {
        lVar3 = *param_2;
        lVar8 = 0;
        do {
          if ((*(longlong *)(lVar3 + lVar8) != 0) &&
             (cVar5 = FUN_14064aef8(*(longlong *)(lVar3 + lVar8),lVar2), cVar5 != '\0')) {
            uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            goto LAB_14885fa2e;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar8);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    uVar7 = 0;
  }
LAB_14885fa2e:
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14885fa68 FUN_14885fa68 body=23 status=ok
// SIG undefined FUN_14885fa68(void)

void FUN_14885fa68(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  
  bVar1 = FUN_14885f998();
  *param_3 = bVar1 ^ 1;
  return;
}



// FUNCTION 14885fa80 FUN_14885fa80 body=159 status=ok
// SIG undefined FUN_14885fa80(void)

ulonglong FUN_14885fa80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_141293d77(0,&local_38);
  lVar1 = local_38;
  lVar3 = (longlong)(int)uStack_30;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if (lVar3 == 0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    lVar6 = 0;
    do {
      if ((param_2 != 0) &&
         (cVar2 = FUN_14064aef8(param_2,*(undefined8 *)(lVar1 + lVar6)), cVar2 == '\0')) {
        uVar4 = 0;
        goto LAB_14885fae7;
      }
      lVar6 = lVar6 + 8;
    } while (lVar3 * 8 != lVar6);
    uVar4 = CONCAT71(uVar5,1);
  }
LAB_14885fae7:
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14885fb20 FUN_14885fb20 body=23 status=ok
// SIG undefined FUN_14885fb20(void)

void FUN_14885fb20(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  
  bVar1 = FUN_14885fa80();
  *param_3 = bVar1 ^ 1;
  return;
}



// FUNCTION 14885fb38 FUN_14885fb38 body=210 status=ok
// SIG undefined FUN_14885fb38(void)

ulonglong FUN_14885fb38(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  FUN_141293d77(0,&local_58);
  uVar8 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong)(int)uStack_50 == 0) {
    uVar7 = CONCAT71(uVar8,1);
  }
  else {
    plVar1 = local_58 + (int)uStack_50;
    plVar6 = local_58;
    do {
      lVar2 = *plVar6;
      if ((lVar2 == 0) || (lVar4 = param_2[1], (longlong)(int)lVar4 == 0)) {
LAB_14885fbc9:
        uVar7 = 0;
        goto LAB_14885fbd0;
      }
      lVar3 = *param_2;
      lVar9 = 0;
      while ((*(longlong *)(lVar3 + lVar9) == 0 ||
             (cVar5 = FUN_14064aef8(*(longlong *)(lVar3 + lVar9),lVar2), cVar5 == '\0'))) {
        lVar9 = lVar9 + 8;
        if ((longlong)(int)lVar4 * 8 == lVar9) goto LAB_14885fbc9;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    uVar7 = CONCAT71(uVar8,1);
  }
LAB_14885fbd0:
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14885fc0c FUN_14885fc0c body=23 status=ok
// SIG undefined FUN_14885fc0c(void)

void FUN_14885fc0c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  
  bVar1 = FUN_14885fb38();
  *param_3 = bVar1 ^ 1;
  return;
}



// FUNCTION 14885fc23 FUN_14885fc23 body=182 status=ok
// SIG undefined FUN_14885fc23(void)

undefined8 FUN_14885fc23(undefined8 param_1)

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
  local_b8 = FUN_140791f3e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14885fcda FUN_14885fcda body=262 status=ok
// SIG undefined FUN_14885fcda(void)

void FUN_14885fcda(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110 [24];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_70 = param_4;
  if (param_3 != 0) {
    FUN_14885f7fe(&local_d8,param_3,&local_70);
    local_f8 = local_98;
    uStack_f0 = uStack_90;
    local_e8 = local_88;
    local_68 = local_d8;
    uStack_64 = uStack_d4;
    uStack_60 = uStack_d0;
    uStack_5c = uStack_cc;
    local_58 = local_c8;
    uStack_54 = uStack_c4;
    uStack_50 = uStack_c0;
    uStack_4c = uStack_bc;
    FUN_1448052ee(&local_68,local_110);
    local_128 = local_b8;
    uStack_120 = uStack_b0;
    local_118 = local_a8;
    local_138 = param_6;
    local_140 = param_5;
    local_148 = &local_f8;
    FUN_145d0f486(param_1,param_2,&local_128,local_110);
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885fde2 FUN_14885fde2 body=253 status=ok
// SIG undefined FUN_14885fde2(void)

void FUN_14885fde2(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100 [24];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x4a8))(param_3,&local_c8,param_4,0);
    local_e8 = local_88;
    uStack_e0 = uStack_80;
    local_d8 = local_78;
    local_68 = local_c8;
    uStack_64 = uStack_c4;
    uStack_60 = uStack_c0;
    uStack_5c = uStack_bc;
    local_58 = local_b8;
    uStack_54 = uStack_b4;
    uStack_50 = uStack_b0;
    uStack_4c = uStack_ac;
    FUN_1448052ee(&local_68,local_100);
    local_118 = local_a8;
    uStack_110 = uStack_a0;
    local_108 = local_98;
    local_128 = param_6;
    local_130 = param_5;
    local_138 = &local_e8;
    FUN_145d0f486(param_1,param_2,&local_118,local_100);
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14885fee0 FUN_14885fee0 body=402 status=ok
// SIG undefined FUN_14885fee0(void)

undefined8
FUN_14885fee0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      if (param_1 == 0) {
LAB_14885ffc4:
        param_1 = 0;
      }
      else {
        lVar2 = FUN_144a6c4d8();
        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_14885ffc4;
      }
      local_58 = param_6[2];
      local_e0 = &local_68;
      local_68 = *param_6;
      uStack_60 = param_6[1];
      local_88 = *param_5;
      uStack_80 = param_5[1];
      local_e8 = &local_88;
      local_78 = param_5[2];
      local_a8 = *param_4;
      uStack_a4 = param_4[1];
      uStack_a0 = param_4[2];
      uStack_9c = param_4[3];
      local_98 = *(undefined8 *)(param_4 + 4);
      local_b0 = param_11;
      local_b8 = param_10;
      local_c8 = param_9;
      local_d0 = param_8;
      local_d8 = param_7;
      local_c0 = param_1;
      uVar3 = FUN_1405838ec(lVar1,param_2,param_3);
      goto LAB_148860045;
    }
  }
  uVar3 = 0;
LAB_148860045:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148860074 FUN_148860074 body=114 status=ok
// SIG undefined FUN_148860074(void)

undefined8 FUN_148860074(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x180))(), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x178) != 0)) {
    lVar3 = FUN_140cbc144();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        return *(undefined8 *)(lVar2 + 0x458);
      }
    }
  }
  return 0;
}



// FUNCTION 1488600e6 FUN_1488600e6 body=1288 status=ok
// SIG undefined FUN_1488600e6(void)

double * FUN_1488600e6(double *param_1,float param_2,undefined8 param_3,double *param_4,
                      float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  param_5 = param_5 * 0.017453292;
  param_6 = param_6 * 0.017453292;
  if ((0.0001 <= param_5) || (0.0001 <= param_6)) {
    if ((param_5 < 0.0001) || (param_6 < 0.0001)) {
      if (0.0001 <= param_6) {
        param_6 = (param_2 + -0.5) * param_6;
        fVar10 = cosf(param_6);
        fVar11 = sinf(param_6);
        dVar3 = (double)fVar11;
        dVar15 = 0.0;
      }
      else {
        param_5 = (param_2 + -0.5) * param_5;
        uVar9 = -(uint)(ABS(param_5) < 0.0001);
        fVar11 = (float)(uVar9 & 0x3a83126f | ~uVar9 & (uint)param_5);
        fVar10 = cosf(fVar11);
        fVar11 = sinf(fVar11);
        dVar15 = (double)fVar11;
        dVar3 = 0.0;
      }
    }
    else {
      if (3.1414928 <= param_6) {
        param_6 = 3.1414928;
      }
      if (param_6 <= 0.0001) {
        param_6 = 0.0001;
      }
      if (3.1414928 <= param_5) {
        param_5 = 3.1414928;
      }
      if (param_5 <= 0.0001) {
        param_5 = 0.0001;
      }
      fVar10 = sinf(param_6 * 0.5);
      fVar11 = sinf(param_5 * 0.5);
      tanf(param_6 * 0.5);
      tanf(param_5 * 0.5);
      fVar12 = cosf(param_2 * 6.2831855);
      fVar13 = sinf(param_2 * 6.2831855);
      fVar12 = (float)FUN_144a7ed88(fVar13 * fVar11,CONCAT44(extraout_XMM0_Db,fVar10 * fVar12));
      fVar13 = sinf(fVar12);
      fVar12 = cosf(fVar12);
      fVar10 = (fVar10 * fVar10 * fVar11 * fVar11) /
               (fVar13 * fVar13 * fVar10 * fVar10 + fVar12 * fVar12 * fVar11 * fVar11);
      if (fVar10 < 0.0) {
        fVar11 = sqrtf(fVar10);
      }
      else {
        fVar11 = SQRT(fVar10);
      }
      fVar14 = 1.0 - fVar10;
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      fVar10 = 1.0 - (fVar10 + fVar10);
      dVar15 = (double)(fVar12 * fVar11 * (fVar14 + fVar14));
      dVar3 = (double)((fVar14 + fVar14) * fVar13 * fVar11);
    }
    dVar1 = *param_4;
    dVar20 = param_4[1];
    dVar2 = param_4[2];
    dVar19 = dVar2 * dVar2 + dVar1 * dVar1 + dVar20 * dVar20;
    if (((dVar19 != 1.0) || (dVar16 = dVar2, dVar17 = dVar1, dVar18 = dVar20, NAN(dVar19))) &&
       (dVar16 = DAT_14c8464f0, dVar17 = DAT_14c8464e0, dVar18 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar19)) {
      dVar19 = 1.0 / SQRT(dVar19);
      dVar16 = dVar2 * dVar19;
      dVar17 = dVar1 * dVar19;
      dVar18 = dVar20 * dVar19;
    }
    dVar20 = (double)fVar10;
    dVar1 = 1.0 - ABS(dVar16);
    pdVar7 = (double *)&DAT_14c8462c0;
    pdVar8 = (double *)&DAT_14c8462c8;
    if (dVar1 < 9.999999747378752e-05) {
      pdVar8 = (double *)&DAT_14c8462e0;
    }
    if (dVar1 < 9.999999747378752e-05) {
      pdVar7 = (double *)&DAT_14c8462d8;
    }
    pdVar6 = (double *)&DAT_14c8462d0;
    if (dVar1 < 9.999999747378752e-05) {
      pdVar6 = (double *)&DAT_14c8462e8;
    }
    dVar1 = dVar17 * *pdVar8 - *pdVar7 * dVar18;
    dVar2 = *pdVar7 * dVar16 - *pdVar6 * dVar17;
    dVar21 = *pdVar6 * dVar18 - *pdVar8 * dVar16;
    dVar19 = dVar1 * dVar1 + dVar21 * dVar21 + dVar2 * dVar2;
    if (((dVar19 != 1.0) || (dVar22 = dVar21, dVar4 = dVar1, dVar5 = dVar2, NAN(dVar19))) &&
       (dVar22 = DAT_14c8464e0, dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar19)) {
      dVar19 = 1.0 / SQRT(dVar19);
      dVar22 = dVar21 * dVar19;
      dVar4 = dVar1 * dVar19;
      dVar5 = dVar2 * dVar19;
    }
    *param_1 = dVar3 * (dVar5 * dVar16 - dVar18 * dVar4) + dVar15 * dVar22 + dVar20 * dVar17 + 0.0;
    param_1[1] = dVar3 * (dVar4 * dVar17 - dVar16 * dVar22) + dVar15 * dVar5 + dVar20 * dVar18 + 0.0
    ;
    param_1[2] = dVar16 * dVar20 + dVar15 * dVar4 + (dVar22 * dVar18 - dVar17 * dVar5) * dVar3 + 0.0
    ;
  }
  else {
    param_1[2] = param_4[2];
    dVar3 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = dVar3;
  }
  return param_1;
}



// FUNCTION 1488605ee FUN_1488605ee body=1196 status=ok
// SIG undefined FUN_1488605ee(void)

longlong *
FUN_1488605ee(longlong *param_1,double *param_2,undefined8 param_3,uint param_4,float param_5,
             float param_6,float param_7)

{
  double *pdVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float _X;
  undefined1 auStack_1f8 [32];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_4) {
    FUN_140ee84a4(param_1,param_4,1);
    FUN_144a79a9c(param_3,&local_1d8);
    dVar11 = local_1d8 * 0.01745329238474369;
    dVar12 = dStack_1d0 * 0.01745329238474369;
    dVar13 = local_1c8 * 0.01745329238474369;
    dVar8 = sin(dVar11);
    dVar9 = sin(dVar12);
    dVar10 = sin(dVar13);
    sin(0.0);
    dVar11 = cos(dVar11);
    dVar12 = cos(dVar12);
    dVar13 = cos(dVar13);
    cos(0.0);
    local_178 = dVar11 * dVar12;
    dStack_170 = dVar9 * dVar11;
    lVar6 = 0;
    dStack_160 = 0.0;
    local_158 = dVar8 * dVar10 * dVar12 - dVar9 * dVar13;
    local_150 = dVar8 * dVar10 * dVar9 + dVar12 * dVar13;
    local_148 = -dVar10 * dVar11;
    local_140 = 0;
    local_138 = -(dVar8 * dVar13 * dVar12 + dVar9 * dVar10);
    local_130 = dVar12 * dVar10 - dVar9 * dVar8 * dVar13;
    local_128 = dVar11 * dVar13;
    local_120 = 0;
    local_118 = DAT_14c8464e0;
    local_110 = DAT_14c8464e8;
    uStack_108 = DAT_14c8464f0;
    local_100 = 0x3ff0000000000000;
    local_168 = dVar8;
    FUN_14276fba8(&local_178,&local_190,&local_1a8,&local_1c0);
    dVar11 = (double)param_7;
    uVar5 = 0;
    do {
      _X = ((float)(int)uVar5 / (float)(int)param_4) * 6.2831855 + param_6 * 0.017453292;
      fVar7 = sinf(_X);
      dVar13 = (double)fVar7;
      dVar8 = local_1b0 * dVar13;
      dVar9 = local_1b8 * dVar13;
      dVar13 = dVar13 * local_1c0;
      fVar7 = cosf(_X);
      dVar12 = (double)fVar7;
      dVar8 = local_198 * dVar12 + dVar8;
      dVar9 = local_1a0 * dVar12 + dVar9;
      dVar13 = dVar12 * local_1a8 + dVar13;
      fVar7 = cosf(param_5 * 0.017453292);
      dVar10 = (double)fVar7;
      dVar4 = local_180 * dVar10;
      dVar12 = local_188 * dVar10;
      dVar10 = dVar10 * local_190;
      fVar7 = sinf(param_5 * 0.017453292);
      dVar14 = (double)fVar7;
      local_1c8 = dVar8 * dVar14 + dVar4;
      dStack_1d0 = dVar9 * dVar14 + dVar12;
      local_1d8 = dVar14 * dVar13 + dVar10;
      lVar2 = *param_1;
      dVar12 = param_2[2];
      dVar9 = dVar9 * dVar11 + param_2[1];
      auVar3._8_4_ = SUB84(dVar9,0);
      auVar3._0_8_ = dVar13 * dVar11 + *param_2;
      auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(lVar2 + 0x20 + lVar6) = auVar3;
      pdVar1 = (double *)(lVar2 + 0x30 + lVar6);
      *pdVar1 = dVar8 * dVar11 + dVar12;
      pdVar1[1] = 0.0;
      lVar2 = *param_1;
      FUN_144afe7fe(&local_1d8,&local_178);
      pdVar1 = (double *)(lVar2 + lVar6);
      *pdVar1 = local_178;
      pdVar1[1] = dStack_170;
      pdVar1 = (double *)(lVar2 + 0x10 + lVar6);
      *pdVar1 = local_168;
      pdVar1[1] = dStack_160;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (param_4 != uVar5);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148860a9c FUN_148860a9c body=1264 status=ok
// SIG undefined FUN_148860a9c(void)

longlong *
FUN_148860a9c(longlong *param_1,double *param_2,undefined8 param_3,uint param_4,float param_5,
             float param_6,float param_7)

{
  double *pdVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  float local_1e0;
  float local_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *param_1 = 0;
  param_1[1] = 0;
  local_1e8 = param_1;
  if (0 < (int)param_4) {
    FUN_140ee84a4(param_1,param_4,1);
    FUN_144a79a9c(param_3,&local_1d8);
    dVar12 = local_1d8 * 0.01745329238474369;
    dVar13 = dStack_1d0 * 0.01745329238474369;
    dVar14 = local_1c8 * 0.01745329238474369;
    dVar9 = sin(dVar12);
    dVar10 = sin(dVar13);
    dVar11 = sin(dVar14);
    sin(0.0);
    dVar12 = cos(dVar12);
    dVar13 = cos(dVar13);
    dVar14 = cos(dVar14);
    cos(0.0);
    local_178 = dVar12 * dVar13;
    dStack_170 = dVar10 * dVar12;
    lVar6 = 0;
    uStack_160 = 0;
    local_158 = dVar9 * dVar11 * dVar13 - dVar10 * dVar14;
    local_150 = dVar9 * dVar11 * dVar10 + dVar13 * dVar14;
    local_148 = -dVar11 * dVar12;
    local_140 = 0;
    local_138 = -(dVar9 * dVar14 * dVar13 + dVar10 * dVar11);
    local_130 = dVar13 * dVar11 - dVar10 * dVar9 * dVar14;
    local_128 = dVar12 * dVar14;
    local_120 = 0;
    local_118 = DAT_14c8464e0;
    local_110 = DAT_14c8464e8;
    uStack_108 = DAT_14c8464f0;
    local_100 = 0x3ff0000000000000;
    local_168 = dVar9;
    FUN_14276fba8(&local_178,&local_190,&local_1a8,&local_1c0);
    local_1e0 = (float)(int)(param_4 - 1);
    local_1dc = param_5 * 0.017453292 * -0.5;
    fVar17 = param_5 * 0.017453292 * 0.5 - local_1dc;
    dVar12 = (double)param_7;
    uVar7 = 0;
    do {
      fVar8 = sinf(param_6 * 0.017453292);
      dVar13 = (double)fVar8;
      dVar14 = local_1b0 * dVar13;
      dVar9 = local_1b8 * dVar13;
      dVar13 = dVar13 * local_1c0;
      fVar8 = cosf(param_6 * 0.017453292);
      fVar16 = 0.0;
      if (param_4 != 1) {
        fVar16 = (float)(int)uVar7 / local_1e0;
      }
      dVar10 = (double)fVar8;
      dVar14 = dVar14 + local_198 * dVar10;
      dVar9 = dVar9 + local_1a0 * dVar10;
      dVar13 = dVar13 + dVar10 * local_1a8;
      fVar16 = fVar16 * fVar17 + local_1dc;
      fVar8 = cosf(fVar16);
      dVar5 = (double)fVar8;
      dVar10 = local_180 * dVar5;
      dVar11 = local_188 * dVar5;
      dVar5 = dVar5 * local_190;
      fVar8 = sinf(fVar16);
      dVar15 = (double)fVar8;
      local_1c8 = dVar14 * dVar15 + dVar10;
      dStack_1d0 = dVar9 * dVar15 + dVar11;
      local_1d8 = dVar15 * dVar13 + dVar5;
      lVar3 = *local_1e8;
      dVar10 = param_2[2];
      dVar9 = dVar9 * dVar12 + param_2[1];
      auVar4._8_4_ = SUB84(dVar9,0);
      auVar4._0_8_ = dVar13 * dVar12 + *param_2;
      auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(lVar3 + 0x20 + lVar6) = auVar4;
      pdVar1 = (double *)(lVar3 + 0x30 + lVar6);
      *pdVar1 = dVar14 * dVar12 + dVar10;
      pdVar1[1] = 0.0;
      lVar3 = *local_1e8;
      FUN_144afe7fe(&local_1d8,&local_178);
      pdVar1 = (double *)(lVar3 + lVar6);
      *pdVar1 = local_178;
      pdVar1[1] = dStack_170;
      puVar2 = (undefined4 *)(lVar3 + 0x10 + lVar6);
      *puVar2 = (undefined4)local_168;
      puVar2[1] = local_168._4_4_;
      puVar2[2] = (undefined4)uStack_160;
      puVar2[3] = uStack_160._4_4_;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x60;
    } while (param_4 != uVar7);
  }
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return local_1e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148860f8e FUN_148860f8e body=77 status=ok
// SIG undefined FUN_148860f8e(void)

undefined8 FUN_148860f8e(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x1c8), lVar1 != 0)) {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(undefined1 *)(lVar1 + 0x2eb) = param_2;
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 148860fdc FUN_148860fdc body=48 status=ok
// SIG undefined FUN_148860fdc(void)

void FUN_148860fdc(longlong param_1)

{
  FUN_144a787a6(param_1 + 0x438);
  FUN_1411f311e(param_1 + 0x410,param_1 + 0x438);
  return;
}



// FUNCTION 148861022 FUN_148861022 body=62 status=ok
// SIG undefined FUN_148861022(void)

void FUN_148861022(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_14885c494(param_1 + 0x9a);
  if (cVar1 == '\0') {
    return;
  }
  FUN_14885c5f2(param_1 + 0x9a);
                    /* WARNING: Could not recover jumptable at 0x000148861059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x780))(param_1);
  return;
}



// FUNCTION 148861070 FUN_148861070 body=159 status=ok
// SIG undefined FUN_148861070(void)

void FUN_148861070(void)

{
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined2 local_20;
  undefined8 local_1c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  local_28 = 0x3f800000;
  local_20 = 0;
  local_1c = 0;
  local_a8 = 0;
  local_b8 = 1;
  FUN_140b3303c(local_a0);
  if ((local_8 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148861110 FUN_148861110 body=62 status=ok
// SIG undefined FUN_148861110(void)

void FUN_148861110(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1405835d4(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148861144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2e0))(plVar2,param_2,*(code **)(*plVar2 + 0x2e0));
      return;
    }
  }
  return;
}



// FUNCTION 14886114e FUN_14886114e body=185 status=ok
// SIG undefined FUN_14886114e(void)

undefined8 FUN_14886114e(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148861208 FUN_148861208 body=61 status=ok
// SIG undefined FUN_148861208(void)

void FUN_148861208(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14041aabe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(int *)(lVar1 + 0x4c8) = *(int *)(lVar1 + 0x4c8) + 1;
    }
  }
  return;
}



// FUNCTION 148861258 FUN_148861258 body=167 status=ok
// SIG undefined FUN_148861258(void)

void FUN_148861258(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (1 < *(int *)(param_1 + 0x440)) {
    *(undefined4 *)(param_2 + 0xd8) = 0x3e008081;
    *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xe0) = 0x3f008081;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    local_1c = 0;
    if (*(int *)(param_1 + 0x440) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)(param_1 + 0x438);
    }
    FUN_140002266(local_30,L"Mode Def: %ls",puVar1);
    FUN_147d8f316(param_2 + 0xa8,local_30,&local_1c);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148861300 FUN_148861300 body=118 status=ok
// SIG undefined FUN_148861300(void)

void FUN_148861300(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148868cba(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148868d40(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148861378 FUN_148861378 body=75 status=ok
// SIG undefined FUN_148861378(void)

void FUN_148861378(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_3 = 0x3ff0000000000000;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  iVar1 = FUN_1417f6c54(uVar2);
  param_3[1] = *(undefined8 *)(&DAT_14b402650 + (ulonglong)(iVar1 == 1) * 8);
  return;
}



// FUNCTION 1488613c4 FUN_1488613c4 body=136 status=ok
// SIG undefined FUN_1488613c4(void)

undefined8 * FUN_1488613c4(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 == '\x02') {
    *param_2 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    param_2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    _Src = *(void **)(param_1 + 0x20);
    *(int *)(param_2 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 3,iVar1,0);
      memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
  }
  return param_2;
}



// FUNCTION 14886144c FUN_14886144c body=342 status=ok
// SIG undefined FUN_14886144c(void)

undefined8 * FUN_14886144c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b162f20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_145853e5c();
  param_1[6] = &DAT_14cb7dd90;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = &PTR_FUN_14b16b1f0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14b403110;
  local_50 = (longlong *)FUN_14001cc68(0x40,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14b403db0;
  local_58 = local_50 + 2;
  local_50[2] = (longlong)&PTR_FUN_14b162fc0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  FUN_1488615a4(local_48);
  FUN_14029d0b6(param_1 + 2,local_48);
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
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488615a4 FUN_1488615a4 body=131 status=ok
// SIG undefined FUN_1488615a4(void)

undefined8 * FUN_1488615a4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *param_1 = plVar4;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    param_1[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,uVar3);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 148861628 FUN_148861628 body=3 status=ok
// SIG undefined FUN_148861628(void)

undefined8 FUN_148861628(void)

{
  return 0;
}



// FUNCTION 14886163a FUN_14886163a body=67 status=ok
// SIG undefined FUN_14886163a(void)

void FUN_14886163a(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if ((char)param_1[0x13] == '\x01') {
    uVar1 = (**(code **)(*param_1 + 0x308))();
    FUN_1486a85fe(param_1,param_2,param_3,uVar1);
    return;
  }
  return;
}



// FUNCTION 14886167e FUN_14886167e body=362 status=ok
// SIG undefined FUN_14886167e(void)

undefined8 * FUN_14886167e(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b1629f0;
  plVar1 = param_1 + 4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = FUN_145a8164e();
  if (lVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(plVar1,0);
    }
    if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar1 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_70,lVar4);
    *(undefined4 *)(param_1 + 2) = local_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_6c;
    *(undefined4 *)(param_1 + 3) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_64;
    if (param_1 + 2 == (undefined8 *)&local_70) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 5) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_54;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[1] = 0;
        goto LAB_1488617bc;
      }
    }
    FUN_14485c47a(param_1 + 1,lVar4);
  }
LAB_1488617bc:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488617ea FUN_1488617ea body=136 status=ok
// SIG undefined FUN_1488617ea(void)

undefined8 * FUN_1488617ea(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 == '\x02') {
    *param_2 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    param_2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    _Src = *(void **)(param_1 + 0x20);
    *(int *)(param_2 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 3,iVar1,0);
      memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
  }
  return param_2;
}



// FUNCTION 148861872 FUN_148861872 body=339 status=ok
// SIG undefined FUN_148861872(void)

undefined8 * FUN_148861872(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b162f20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_145853e5c();
  param_1[6] = &DAT_14cb7dd90;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = &PTR_FUN_14b16b1f0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14b162a10;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b403dd0;
  FUN_14886167e(plVar3 + 2);
  local_58 = plVar3 + 2;
  local_50 = plVar3;
  FUN_1488619c6(local_48);
  FUN_14029d0b6(param_1 + 2,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined1 *)(param_1 + 9) = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488619c6 FUN_1488619c6 body=131 status=ok
// SIG undefined FUN_1488619c6(void)

undefined8 * FUN_1488619c6(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *param_1 = plVar4;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    param_1[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,uVar3);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 148861a4a FUN_148861a4a body=54 status=ok
// SIG undefined FUN_148861a4a(void)

void FUN_148861a4a(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_143d52cb6(param_1,1);
  return;
}



// FUNCTION 148861a80 FUN_148861a80 body=54 status=ok
// SIG undefined FUN_148861a80(void)

void FUN_148861a80(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_143d52cb6(param_1,0);
  return;
}



// FUNCTION 148861ab6 FUN_148861ab6 body=18 status=ok
// SIG undefined FUN_148861ab6(void)

undefined1 FUN_148861ab6(undefined8 param_1)

{
  FUN_143d52cb6(param_1,1);
  return 1;
}



// FUNCTION 148861ac8 FUN_148861ac8 body=78 status=ok
// SIG undefined FUN_148861ac8(void)

longlong * FUN_148861ac8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464e20ca();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148861b16 FUN_148861b16 body=362 status=ok
// SIG undefined FUN_148861b16(void)

undefined8 * FUN_148861b16(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b162a30;
  plVar1 = param_1 + 4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = FUN_145a8173a();
  if (lVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(plVar1,0);
    }
    if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar1 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_70,lVar4);
    *(undefined4 *)(param_1 + 2) = local_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_6c;
    *(undefined4 *)(param_1 + 3) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_64;
    if (param_1 + 2 == (undefined8 *)&local_70) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 5) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_54;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[1] = 0;
        goto LAB_148861c54;
      }
    }
    FUN_14485c47a(param_1 + 1,lVar4);
  }
LAB_148861c54:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148861c82 FUN_148861c82 body=136 status=ok
// SIG undefined FUN_148861c82(void)

undefined8 * FUN_148861c82(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 == '\x02') {
    *param_2 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    param_2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    _Src = *(void **)(param_1 + 0x20);
    *(int *)(param_2 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 3,iVar1,0);
      memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
  }
  return param_2;
}



// FUNCTION 148861d0a FUN_148861d0a body=346 status=ok
// SIG undefined FUN_148861d0a(void)

undefined8 * FUN_148861d0a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b162f20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_145853e5c();
  param_1[6] = &DAT_14cb7dd90;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = &PTR_FUN_14b16b1f0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14b162a50;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b403df0;
  FUN_148861b16(plVar3 + 2);
  local_58 = plVar3 + 2;
  local_50 = plVar3;
  FUN_148861e66(local_48);
  FUN_14029d0b6(param_1 + 2,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined1 *)(param_1 + 9) = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148861e66 FUN_148861e66 body=131 status=ok
// SIG undefined FUN_148861e66(void)

undefined8 * FUN_148861e66(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *param_1 = plVar4;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    param_1[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,uVar3);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 148861eea FUN_148861eea body=52 status=ok
// SIG undefined FUN_148861eea(void)

void FUN_148861eea(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_143d52e28(param_1);
  return;
}



// FUNCTION 148861f1e FUN_148861f1e body=16 status=ok
// SIG undefined FUN_148861f1e(void)

undefined1 FUN_148861f1e(void)

{
  FUN_143d52e28();
  return 1;
}



// FUNCTION 148861f2e FUN_148861f2e body=52 status=ok
// SIG undefined FUN_148861f2e(void)

void FUN_148861f2e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_143d52f4e(param_1);
  return;
}



// FUNCTION 148861f62 FUN_148861f62 body=78 status=ok
// SIG undefined FUN_148861f62(void)

longlong * FUN_148861f62(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464e21f4();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148861fcc FUN_148861fcc body=140 status=ok
// SIG undefined FUN_148861fcc(void)

undefined8
FUN_148861fcc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (plVar3 = (longlong *)FUN_1405f1c0c(lVar1), plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x328))(plVar3,lVar1,param_2,param_3,param_4,param_5,param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148862058 FUN_148862058 body=185 status=ok
// SIG undefined FUN_148862058(void)

undefined8 FUN_148862058(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 14886213a FUN_14886213a body=65 status=ok
// SIG undefined FUN_14886213a(void)

undefined8 * FUN_14886213a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb7dcf8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b162f40;
  return puVar1;
}



// FUNCTION 14886217c FUN_14886217c body=44 status=ok
// SIG undefined FUN_14886217c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14886217c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7dd04 = _DAT_14cb7dd04 + -1;
  *param_1 = DAT_14cb7dcf8;
  DAT_14cb7dcf8 = param_1;
  return;
}



// FUNCTION 1488621a8 FUN_1488621a8 body=57 status=ok
// SIG undefined FUN_1488621a8(void)

void FUN_1488621a8(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b162f40;
  return;
}



// FUNCTION 1488621e2 FUN_1488621e2 body=22 status=ok
// SIG undefined FUN_1488621e2(void)

undefined8 FUN_1488621e2(int *param_1)

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
  
  plVar4 = DAT_14cb7dc90;
  if (DAT_14cb7dc90 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb7dc90 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb7dc90 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb7dc90[0x3a] <= *(int *)((longlong)DAT_14cb7dc90 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb7dc90 + 0x300))(DAT_14cb7dc90);
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



// FUNCTION 1488621f8 FUN_1488621f8 body=168 status=ok
// SIG undefined FUN_1488621f8(void)

void FUN_1488621f8(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14113f0c0();
  if (cVar1 != '\0') {
    local_58 = 0;
    local_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_4c = 0xffffffff00000080;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_14054d9c0(&local_78,param_2);
    FUN_1486a87f8(param_1,&local_78);
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488622a2 FUN_1488622a2 body=244 status=ok
// SIG undefined FUN_1488622a2(void)

void FUN_1488622a2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    local_40 = 0;
    uVar1 = FUN_145c5eda6();
    lVar2 = FUN_14477b664(uVar1);
    uVar1 = FUN_145c5eda6();
    uVar3 = FUN_145c5eda6();
    FUN_1402d1bfa(&local_38,uVar3,param_2);
    if (local_38 != 0) {
      local_40 = 0;
    }
    local_50 = local_38;
    uVar3 = FUN_145c5eda6();
    lVar4 = FUN_141459e9e(uVar1,uVar3);
    if (lVar2 != lVar4) {
      local_40 = 0;
    }
    uVar1 = FUN_14477b664(lVar4);
    local_48 = FUN_14477b664(uVar1);
    if (local_48 != 0 && local_38 != 0) {
      local_40 = param_2;
    }
    FUN_1486a8078(param_1,&local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148862398 FUN_148862398 body=49 status=ok
// SIG undefined FUN_148862398(void)

void FUN_148862398(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1488623ca();
  if (lVar1 != 0) {
    FUN_143d51352(lVar1,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1488623ca FUN_1488623ca body=66 status=ok
// SIG undefined FUN_1488623ca(void)

longlong FUN_1488623ca(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    lVar2 = FUN_1411531be();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14886240c FUN_14886240c body=248 status=ok
// SIG undefined FUN_14886240c(void)

void FUN_14886240c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145cd7b32();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  lVar2 = param_2[2];
  if (param_2[2] == 0) {
    if ((lVar5 == 0) || (*param_2 == 0)) goto LAB_14886249b;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_14886249b;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_48 = FUN_144aff482(uVar4,param_2);
    param_2[2] = local_48;
    lVar2 = local_48;
    if (local_48 == 0) goto LAB_14886249b;
  }
  local_48 = lVar2;
  local_40 = &local_48;
  local_38 = param_3;
  FUN_148868fb2(param_1 + 0x48,local_2c);
LAB_14886249b:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148862506 FUN_148862506 body=161 status=ok
// SIG undefined FUN_148862506(void)

void FUN_148862506(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar3 = FUN_145cd7b32();
    lVar5 = FUN_14477b664(uVar3);
    param_2[1] = lVar5;
  }
  lVar4 = param_2[2];
  if (lVar4 == 0) {
    if ((lVar5 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_2[2] = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar4;
        if (lVar4 != 0) goto LAB_14886258a;
      }
    }
    return;
  }
LAB_14886258a:
  FUN_1488694c8(param_1 + 0x48,lVar4);
  return;
}



// FUNCTION 1488625dc FUN_1488625dc body=14 status=ok
// SIG undefined FUN_1488625dc(void)

void FUN_1488625dc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e920);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&uStack_20);
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488625ea FUN_1488625ea body=14 status=ok
// SIG undefined FUN_1488625ea(void)

void FUN_1488625ea(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&uStack_20);
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148862614 FUN_148862614 body=91 status=ok
// SIG undefined FUN_148862614(void)

void FUN_148862614(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1458cc3dc();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148862657;
    }
  }
  lVar2 = 0;
LAB_148862657:
  lVar2 = FUN_148862670(param_1,lVar2);
  *(bool *)param_3 = lVar2 == 0;
  return;
}



// FUNCTION 148862670 FUN_148862670 body=132 status=ok
// SIG undefined FUN_148862670(void)

undefined8 FUN_148862670(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = FUN_1488623ca();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x3f0) != 0)) {
    lVar5 = FUN_14041aabe();
    lVar2 = *(longlong *)(lVar2 + 0x3f0);
    if (lVar2 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0)) goto LAB_148862692;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar2;
        }
        goto LAB_148862692;
      }
    }
  }
  lVar6 = 0;
LAB_148862692:
  uVar3 = FUN_14885eb4c(lVar6);
  puVar4 = (undefined8 *)FUN_148866e14(uVar3,param_2);
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar4;
  }
  return uVar3;
}



// FUNCTION 1488626f4 FUN_1488626f4 body=83 status=ok
// SIG undefined FUN_1488626f4(void)

undefined8 FUN_1488626f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  uVar1 = FUN_1488623ca();
  FUN_14885c3bc(uVar1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148862748 FUN_148862748 body=106 status=ok
// SIG undefined FUN_148862748(void)

void FUN_148862748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  lVar1 = FUN_1488623ca();
  local_30 = &local_38;
  local_28 = param_3;
  FUN_140ffa80e(lVar1 + 0x680,local_1c,&local_30,0);
  FUN_144a2da94(param_3);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488627b4 FUN_1488627b4 body=126 status=ok
// SIG undefined FUN_1488627b4(void)

undefined8 * FUN_1488627b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b162f20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_145853e5c();
  param_1[6] = &DAT_14cb7dd90;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = &PTR_FUN_14b16b1f0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14b403160;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 148862832 FUN_148862832 body=609 status=ok
// SIG undefined FUN_148862832(void)

undefined8 FUN_148862832(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x120))(param_2,param_1 + 0x48);
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 8),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x10),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x18);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x18) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x18) = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x20),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x28);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x28) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x28) = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x30),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  FUN_140219018(param_2,param_1 + 0x38);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148862a94 FUN_148862a94 body=340 status=ok
// SIG undefined FUN_148862a94(void)

undefined1 FUN_148862a94(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    FUN_148862832(param_1);
  }
  else {
    iVar6 = *(int *)(param_1 + 8);
    dVar1 = *(double *)(param_1 + 0x10);
    cVar4 = *(char *)(param_1 + 0x18);
    dVar2 = *(double *)(param_1 + 0x20);
    cVar5 = *(char *)(param_1 + 0x28);
    dVar3 = *(double *)(param_1 + 0x30);
    iVar7 = *(int *)(param_1 + 0x40);
    FUN_148862832(param_1);
    lVar8 = FUN_14479d2ce(param_1 + 0x48);
    if (lVar8 != 0) {
      if (iVar6 != *(int *)(param_1 + 8)) {
        FUN_14886972e(lVar8 + 0x60,param_1);
      }
      if ((dVar1 != *(double *)(param_1 + 0x10)) || (NAN(dVar1) || NAN(*(double *)(param_1 + 0x10)))
         ) {
        FUN_1488697de(lVar8 + 0x78,param_1);
      }
      if (cVar4 != *(char *)(param_1 + 0x18)) {
        FUN_14886989c(lVar8 + 0x90,param_1);
      }
      if ((dVar2 != *(double *)(param_1 + 0x20)) || (NAN(dVar2) || NAN(*(double *)(param_1 + 0x20)))
         ) {
        FUN_1488697de(lVar8 + 0xa8,param_1);
      }
      if (cVar5 != *(char *)(param_1 + 0x28)) {
        FUN_14886989c(lVar8 + 0xc0,param_1);
      }
      if ((dVar3 != *(double *)(param_1 + 0x30)) || (NAN(dVar3) || NAN(*(double *)(param_1 + 0x30)))
         ) {
        FUN_1488697de(lVar8 + 0xd8,param_1);
      }
      if (iVar7 != *(int *)(param_1 + 0x40)) {
        FUN_14886994c(lVar8 + 0xf0,param_1);
      }
    }
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 148862be8 FUN_148862be8 body=140 status=ok
// SIG undefined FUN_148862be8(void)

void FUN_148862be8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_38,L"Timers",1);
  uVar1 = FUN_145996ae8();
  FUN_145996ae8();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148862c76 FUN_148862c76 body=295 status=ok
// SIG undefined FUN_148862c76(void)

void FUN_148862c76(longlong param_1,undefined8 param_2,int param_3,double param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_148862d9e();
  if (*(int *)(lVar1 + 8) != param_3) {
    *(int *)(lVar1 + 8) = param_3;
    FUN_14886972e(param_1 + 0x60,lVar1,param_3);
  }
  if ((*(double *)(lVar1 + 0x10) != param_4) || (NAN(*(double *)(lVar1 + 0x10)) || NAN(param_4))) {
    *(double *)(lVar1 + 0x10) = param_4;
    FUN_1488697de(param_1 + 0x78,lVar1,param_4);
  }
  if ((*(double *)(lVar1 + 0x20) != 0.0) || (NAN(*(double *)(lVar1 + 0x20)))) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    FUN_1488697de(param_1 + 0xa8,lVar1,0);
  }
  if ((*(double *)(lVar1 + 0x30) != 0.0) || (NAN(*(double *)(lVar1 + 0x30)))) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_1488697de(param_1 + 0xd8,lVar1,0);
  }
  if (*(char *)(lVar1 + 0x28) == '\x01') {
    *(undefined1 *)(lVar1 + 0x28) = 0;
    FUN_14886989c(param_1 + 0xc0,lVar1,0);
  }
  if (*(char *)(lVar1 + 0x18) == '\0') {
    *(undefined1 *)(lVar1 + 0x18) = 1;
    FUN_14886989c(param_1 + 0x90,lVar1,1);
  }
  if (*(int *)(lVar1 + 0x40) != 0) {
    *(undefined4 *)(lVar1 + 0x40) = 0;
    if (*(int *)(lVar1 + 0x44) != 0) {
      FUN_1402191ca(lVar1 + 0x38,0);
    }
    FUN_14886994c(param_1 + 0xf0,lVar1);
  }
  FUN_148861208(param_1);
  return;
}



// FUNCTION 148862d9e FUN_148862d9e body=290 status=ok
// SIG undefined FUN_148862d9e(void)

longlong * FUN_148862d9e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x50;
    do {
      if (*plVar5 == *param_2) {
        if (plVar5 != (longlong *)0x0) goto LAB_148862ea0;
        break;
      }
      plVar5 = plVar5 + 10;
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
  }
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = uStack_50 & 0xffffff00;
  local_48 = 0;
  uStack_40 = uStack_40 & 0xffffff00;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_68 = *param_2;
  FUN_14485c47a(&uStack_20,param_1);
  iVar2 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_1488699f0(param_1 + 0x38,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar4 = (longlong)iVar2 * 0x50;
  plVar5 = (longlong *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + 0x30 + lVar4) = local_38;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = (undefined4)local_48;
  puVar1[1] = local_48._4_4_;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_58;
  puVar1[1] = local_58._4_4_;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = uStack_60;
  puVar1[3] = uStack_5c;
  *(undefined8 *)(lVar3 + 0x38 + lVar4) = uStack_30;
  *(undefined4 *)(lVar3 + 0x40 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0x44 + lVar4) = local_28._4_4_;
  *(undefined8 *)(lVar3 + 0x48 + lVar4) = uStack_20;
  FUN_148869a84(param_1 + 0x48,param_1);
LAB_148862ea0:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148862ec2 FUN_148862ec2 body=296 status=ok
// SIG undefined FUN_148862ec2(void)

void FUN_148862ec2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_148862d9e();
  if (*(int *)(lVar1 + 8) != 0) {
    *(undefined4 *)(lVar1 + 8) = 0;
    FUN_14886972e(param_1 + 0x60,lVar1,0);
  }
  if ((*(double *)(lVar1 + 0x10) != 0.0) || (NAN(*(double *)(lVar1 + 0x10)))) {
    *(undefined8 *)(lVar1 + 0x10) = 0;
    FUN_1488697de(param_1 + 0x78,lVar1,0);
  }
  if ((*(double *)(lVar1 + 0x20) != 0.0) || (NAN(*(double *)(lVar1 + 0x20)))) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    FUN_1488697de(param_1 + 0xa8,lVar1,0);
  }
  if ((*(double *)(lVar1 + 0x30) != 0.0) || (NAN(*(double *)(lVar1 + 0x30)))) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_1488697de(param_1 + 0xd8,lVar1,0);
  }
  if (*(char *)(lVar1 + 0x28) == '\x01') {
    *(undefined1 *)(lVar1 + 0x28) = 0;
    FUN_14886989c(param_1 + 0xc0,lVar1,0);
  }
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    FUN_14886989c(param_1 + 0x90,lVar1,0);
  }
  if (*(int *)(lVar1 + 0x40) != 0) {
    *(undefined4 *)(lVar1 + 0x40) = 0;
    if (*(int *)(lVar1 + 0x44) != 0) {
      FUN_1402191ca(lVar1 + 0x38,0);
    }
    FUN_14886994c(param_1 + 0xf0,lVar1);
  }
  FUN_148861208(param_1);
  return;
}



// FUNCTION 148862fea FUN_148862fea body=101 status=ok
// SIG undefined FUN_148862fea(void)

void FUN_148862fea(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = FUN_148862d9e();
  if (*(char *)(lVar1 + 0x28) == '\0') {
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_14886989c(param_1 + 0xc0,lVar1,1);
  }
  dVar2 = (double)param_3;
  if ((*(double *)(lVar1 + 0x30) != dVar2) || (NAN(*(double *)(lVar1 + 0x30)) || NAN(dVar2))) {
    *(double *)(lVar1 + 0x30) = dVar2;
    FUN_1488697de(param_1 + 0xd8,lVar1);
  }
  FUN_148861208(param_1);
  return;
}



// FUNCTION 148863050 FUN_148863050 body=110 status=ok
// SIG undefined FUN_148863050(void)

void FUN_148863050(longlong param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_148862d9e();
  if (*(char *)(lVar1 + 0x28) == '\x01') {
    *(undefined1 *)(lVar1 + 0x28) = 0;
    FUN_14886989c(param_1 + 0xc0,lVar1,0);
  }
  if ((*(double *)(lVar1 + 0x20) != param_3) || (NAN(*(double *)(lVar1 + 0x20)) || NAN(param_3))) {
    *(double *)(lVar1 + 0x20) = param_3;
    FUN_1488697de(param_1 + 0xa8,lVar1,param_3);
  }
  FUN_148861208(param_1);
  return;
}



// FUNCTION 14886315a FUN_14886315a body=362 status=ok
// SIG undefined FUN_14886315a(void)

undefined8 * FUN_14886315a(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b162ec0;
  plVar1 = param_1 + 4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = FUN_1459f00fc();
  if (lVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(plVar1,0);
    }
    if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
      *(undefined2 *)*plVar1 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_70,lVar4);
    *(undefined4 *)(param_1 + 2) = local_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_6c;
    *(undefined4 *)(param_1 + 3) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_64;
    if (param_1 + 2 == (undefined8 *)&local_70) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 5) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_54;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[1] = 0;
        goto LAB_148863298;
      }
    }
    FUN_14485c47a(param_1 + 1,lVar4);
  }
LAB_148863298:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488632c6 FUN_1488632c6 body=136 status=ok
// SIG undefined FUN_1488632c6(void)

undefined8 * FUN_1488632c6(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 == '\x02') {
    *param_2 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    param_2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    _Src = *(void **)(param_1 + 0x20);
    *(int *)(param_2 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 3,iVar1,0);
      memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
  }
  return param_2;
}



// FUNCTION 14886334e FUN_14886334e body=369 status=ok
// SIG undefined FUN_14886334e(void)

undefined8 * FUN_14886334e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b162f20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_145853e5c();
  param_1[6] = &DAT_14cb7dd90;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = &PTR_FUN_14b16b1f0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14b162ee0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b403e10;
  FUN_14886315a(plVar3 + 2);
  local_58 = plVar3 + 2;
  local_50 = plVar3;
  FUN_1488634c0(local_48);
  FUN_14029d0b6(param_1 + 2,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488634c0 FUN_1488634c0 body=131 status=ok
// SIG undefined FUN_1488634c0(void)

undefined8 * FUN_1488634c0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 == (longlong *)0x0) {
    *param_1 = plVar4;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    param_1[1] = plVar2;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 8))();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,uVar3);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 148863544 FUN_148863544 body=75 status=ok
// SIG undefined FUN_148863544(void)

longlong FUN_148863544(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_145996ae8();
  lVar2 = FUN_148862670(param_1,uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_145996ae8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 148863590 FUN_148863590 body=74 status=ok
// SIG undefined FUN_148863590(void)

void FUN_148863590(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_1488635da();
    lVar1 = FUN_148863692(param_1);
    if (lVar1 != 0) {
      if (param_2 < 1) {
        param_2 = *(int *)(lVar1 + 0x98);
      }
      FUN_143d532c0(param_1,param_2,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1488635da FUN_1488635da body=184 status=ok
// SIG undefined FUN_1488635da(void)

void FUN_1488635da(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    plVar1 = param_1 + 0x1a;
    lVar5 = FUN_144a61814(uVar2,plVar1);
    if (lVar5 != 0) {
      FUN_1405a424c(uVar2,*plVar1);
    }
    *plVar1 = 0;
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    param_1 = param_1 + 0x1b;
    lVar3 = FUN_144a61814(uVar2,param_1);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*param_1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 148863692 FUN_148863692 body=78 status=ok
// SIG undefined FUN_148863692(void)

longlong * FUN_148863692(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464e249e();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1488636e0 FUN_1488636e0 body=54 status=ok
// SIG undefined FUN_1488636e0(void)

void FUN_1488636e0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_148863590(param_1,0);
  return;
}



// FUNCTION 148863716 FUN_148863716 body=52 status=ok
// SIG undefined FUN_148863716(void)

void FUN_148863716(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  FUN_14886374a(param_1);
  return;
}



// FUNCTION 14886374a FUN_14886374a body=53 status=ok
// SIG undefined FUN_14886374a(void)

void FUN_14886374a(longlong param_1)

{
  longlong lVar1;
  
  FUN_1488635da();
  lVar1 = FUN_148863544(param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_148862ec2(lVar1,*(longlong *)(param_1 + 0x28) + 8);
  return;
}



// FUNCTION 148863780 FUN_148863780 body=1705 status=ok
// SIG undefined FUN_148863780(void)

void FUN_148863780(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398 [190];
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  plVar7 = (longlong *)(param_1 + 0x108);
  FUN_148863e2a(plVar7);
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  iVar16 = *(int *)(param_3 + 0xa8);
  if ((longlong)iVar16 != 0) {
    lVar3 = *(longlong *)(param_3 + 0xa0);
    lVar19 = 0;
    do {
      iVar22 = *(int *)(lVar3 + 0xc + lVar19);
      if (0 < iVar22) {
        if (*(char *)(lVar3 + 0x10 + lVar19) == '\0') {
          iVar18 = *(int *)(param_1 + 0xe4) - iVar22;
          if (iVar18 == 0 || *(int *)(param_1 + 0xe4) < iVar22) goto LAB_14886389b;
          if (*(char *)(lVar3 + 8 + lVar19) == '\0') {
            iVar18 = iVar22;
          }
          fVar25 = (float)iVar18;
        }
        else {
          fVar25 = (float)*(int *)(param_1 + 0xe4);
          fVar26 = (float)iVar22 / 100.0;
          if (1.0 <= fVar26) {
            fVar26 = 1.0;
          }
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          if (*(char *)(lVar3 + 8 + lVar19) == '\0') {
            fVar25 = fVar26 * fVar25;
          }
          else {
            fVar25 = fVar25 - fVar26 * fVar25;
          }
        }
        uVar4 = *(undefined8 *)(lVar3 + lVar19);
        iVar22 = *(int *)(param_1 + 0x110);
        *(uint *)(param_1 + 0x110) = iVar22 + 1U;
        if (*(uint *)(param_1 + 0x114) < iVar22 + 1U) {
          FUN_148869e46(plVar7,iVar22);
        }
        lVar5 = *plVar7;
        *(undefined8 *)(lVar5 + (longlong)iVar22 * 0xc) = uVar4;
        *(int *)(lVar5 + 8 + (longlong)iVar22 * 0xc) = (int)fVar25;
      }
LAB_14886389b:
      lVar19 = lVar19 + 0x14;
    } while ((longlong)iVar16 * 0x14 != lVar19);
  }
  iVar16 = *(int *)(param_1 + 0x110);
  if (1 < (longlong)iVar16) {
    lVar3 = *plVar7;
    memset(local_398,0,0x2f0);
    local_3a0 = lVar3 + (longlong)iVar16 * 0xc + -0xc;
    local_3a8 = lVar3;
    fVar25 = logf((float)iVar16);
    local_398[0] = (int)(longlong)(fVar25 + fVar25);
    plVar7 = &local_3a8;
    do {
      puVar8 = (undefined8 *)*plVar7;
      puVar11 = (undefined8 *)plVar7[1];
      iVar16 = (int)plVar7[2];
      iVar22 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar8) >> 2) * -0x55555555;
      uVar17 = iVar22 + 1;
      puVar12 = puVar8;
      puVar9 = puVar8;
      puVar14 = puVar11;
      if (iVar16 != 0) {
LAB_148863967:
        if (8 < (int)uVar17) {
          uVar13 = (ulonglong)(uVar17 >> 1);
          uVar2 = *(undefined4 *)((longlong)puVar9 + uVar13 * 0xc + 8);
          uVar4 = *(undefined8 *)((longlong)puVar9 + uVar13 * 0xc);
          *(undefined4 *)((longlong)puVar9 + uVar13 * 0xc + 8) = *(undefined4 *)(puVar9 + 1);
          *(undefined8 *)((longlong)puVar9 + uVar13 * 0xc) = *puVar9;
          *(undefined4 *)(puVar9 + 1) = uVar2;
          *puVar9 = uVar4;
          puVar23 = (undefined8 *)((longlong)puVar14 + 0xc);
          puVar8 = puVar9;
          do {
            puVar6 = (undefined8 *)((longlong)puVar8 + 0xc);
            puVar15 = (undefined8 *)((longlong)puVar8 + 0xc);
            do {
              puVar8 = puVar15;
              puVar21 = puVar6;
              if (puVar14 < puVar8) break;
              puVar6 = (undefined8 *)((longlong)puVar21 + 0xc);
              puVar15 = (undefined8 *)((longlong)puVar8 + 0xc);
            } while (*(int *)(puVar8 + 1) <= *(int *)(puVar9 + 1));
            puVar6 = puVar23 + -3;
            do {
              puVar15 = puVar23;
              puVar20 = puVar6;
              puVar23 = (undefined8 *)((longlong)puVar15 + -0xc);
              if (puVar23 <= puVar9) break;
              puVar6 = (undefined8 *)((longlong)puVar20 + -0xc);
            } while (*(int *)(puVar9 + 1) <= *(int *)((longlong)puVar15 + -4));
            if (puVar23 < puVar8) goto LAB_148863a4e;
            uVar2 = *(undefined4 *)(puVar8 + 1);
            uVar4 = *puVar8;
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)puVar15 + -4);
            *puVar8 = *puVar23;
            *(undefined4 *)((longlong)puVar15 + -4) = uVar2;
            *puVar23 = uVar4;
          } while( true );
        }
        for (; puVar11 = puVar9, puVar8 = puVar9, puVar9 < puVar14;
            puVar14 = (undefined8 *)((longlong)puVar14 + -0xc)) {
          while (puVar12 = puVar11, puVar8 = (undefined8 *)((longlong)puVar8 + 0xc),
                puVar8 <= puVar14) {
            puVar11 = puVar8;
            if (*(int *)(puVar8 + 1) <= *(int *)(puVar12 + 1)) {
              puVar11 = puVar12;
            }
          }
          local_98 = *(undefined4 *)(puVar12 + 1);
          local_a0 = *puVar12;
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar14 + 1);
          *puVar12 = *puVar14;
          *(undefined4 *)(puVar14 + 1) = local_98;
          *puVar14 = local_a0;
        }
        goto LAB_148863dcd;
      }
LAB_148863b19:
      if (uVar17 != 0) {
        iVar16 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
        iVar22 = iVar16;
joined_r0x000148863b40:
        do {
          iVar18 = iVar16 * 2 + 1;
          if (iVar18 < (int)uVar17) {
            iVar10 = iVar16 * 2 + 2;
            if ((iVar10 < (int)uVar17) &&
               (*(int *)((longlong)puVar8 + (longlong)iVar18 * 0xc + 8) <=
                *(int *)((longlong)puVar8 + (longlong)iVar10 * 0xc + 8))) {
              iVar18 = iVar10;
            }
            if (*(int *)((longlong)puVar8 + (longlong)iVar16 * 0xc + 8) <
                *(int *)((longlong)puVar8 + (longlong)iVar18 * 0xc + 8)) {
              puVar14 = (undefined8 *)((longlong)puVar8 + (longlong)iVar16 * 0xc);
              puVar11 = (undefined8 *)((longlong)puVar8 + (longlong)iVar18 * 0xc);
              local_98 = *(undefined4 *)(puVar14 + 1);
              local_a0 = *puVar14;
              *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar11 + 1);
              *puVar14 = *puVar11;
              *(undefined4 *)(puVar11 + 1) = local_98;
              *puVar11 = local_a0;
              iVar16 = iVar18;
              goto joined_r0x000148863b40;
            }
          }
          bVar24 = iVar22 != 0;
          iVar16 = iVar22 + -1;
          iVar22 = iVar16;
        } while (bVar24);
        if (1 < (int)uVar17) {
          uVar13 = (ulonglong)uVar17 - 1;
          local_98 = *(undefined4 *)(puVar8 + 1);
          local_a0 = *puVar8;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)puVar8 + uVar13 * 0xc + 8);
          *puVar8 = *(undefined8 *)((longlong)puVar8 + uVar13 * 0xc);
          *(undefined4 *)((longlong)puVar8 + uVar13 * 0xc + 8) = local_98;
          *(undefined8 *)((longlong)puVar8 + uVar13 * 0xc) = local_a0;
          if (uVar17 != 2) {
            do {
              iVar16 = 0;
              iVar18 = 1;
              iVar22 = 0;
              do {
                iVar16 = iVar16 + 2;
                iVar10 = iVar18;
                if (((longlong)iVar16 < (longlong)uVar13) &&
                   (*(int *)((longlong)puVar8 + (longlong)iVar18 * 0xc + 8) <=
                    *(int *)((longlong)puVar8 + (longlong)iVar16 * 0xc + 8))) {
                  iVar10 = iVar16;
                }
                if (*(int *)((longlong)puVar8 + (longlong)iVar10 * 0xc + 8) <=
                    *(int *)((longlong)puVar8 + (longlong)iVar22 * 0xc + 8)) break;
                puVar14 = (undefined8 *)((longlong)puVar8 + (longlong)iVar22 * 0xc);
                puVar11 = (undefined8 *)((longlong)puVar8 + (longlong)iVar10 * 0xc);
                uVar2 = *(undefined4 *)(puVar14 + 1);
                uVar4 = *puVar14;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar11 + 1);
                *puVar14 = *puVar11;
                *(undefined4 *)(puVar11 + 1) = uVar2;
                *puVar11 = uVar4;
                iVar16 = iVar10 * 2;
                iVar18 = iVar10 * 2 + 1;
                iVar22 = iVar10;
              } while ((longlong)iVar18 < (longlong)uVar13);
              uVar1 = uVar13 - 1;
              local_98 = *(undefined4 *)(puVar8 + 1);
              local_a0 = *puVar8;
              *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)puVar8 + uVar1 * 0xc + 8);
              *puVar8 = *(undefined8 *)((longlong)puVar8 + uVar1 * 0xc);
              *(undefined4 *)((longlong)puVar8 + uVar1 * 0xc + 8) = local_98;
              *(undefined8 *)((longlong)puVar8 + uVar1 * 0xc) = local_a0;
              bVar24 = 2 < uVar13;
              uVar13 = uVar1;
            } while (bVar24);
          }
        }
      }
LAB_148863dcd:
      plVar7 = plVar7 + -3;
    } while (&local_3a8 <= plVar7);
  }
  if ((local_90 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148863a4e:
  local_98 = *(undefined4 *)(puVar9 + 1);
  local_a0 = *puVar9;
  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((longlong)puVar15 + -4);
  *puVar9 = *puVar23;
  *(undefined4 *)((longlong)puVar15 + -4) = local_98;
  *puVar23 = local_a0;
  iVar16 = iVar16 + -1;
  puVar15 = puVar15 + -3;
  if ((longlong)puVar20 - (longlong)puVar12 < (longlong)puVar11 - (longlong)puVar21) {
    if (puVar8 < puVar14) {
      *plVar7 = (longlong)puVar8;
      plVar7[1] = (longlong)puVar14;
      *(int *)(plVar7 + 2) = iVar16;
      plVar7 = plVar7 + 3;
    }
    puVar8 = puVar9;
    puVar11 = puVar20;
    if (puVar23 <= (undefined8 *)((longlong)puVar9 + 0xcU)) goto LAB_148863dcd;
  }
  else {
    if ((undefined8 *)((longlong)puVar9 + 0xcU) < puVar23) {
      *plVar7 = (longlong)puVar9;
      plVar7[1] = (longlong)puVar15;
      *(int *)(plVar7 + 2) = iVar16;
      plVar7 = plVar7 + 3;
    }
    puVar9 = puVar21;
    puVar15 = puVar14;
    puVar11 = puVar14;
    if (puVar14 <= puVar8) goto LAB_148863dcd;
  }
  iVar22 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar9) >> 2) * -0x55555555;
  uVar17 = iVar22 + 1;
  puVar12 = puVar9;
  puVar9 = puVar8;
  puVar14 = puVar15;
  if (iVar16 == 0) goto LAB_148863b19;
  goto LAB_148863967;
}



// FUNCTION 148863e2a FUN_148863e2a body=41 status=ok
// SIG undefined FUN_148863e2a(void)

void FUN_148863e2a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148869dd6();
  return;
}



// FUNCTION 148863ede FUN_148863ede body=209 status=ok
// SIG undefined FUN_148863ede(void)

longlong * FUN_148863ede(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    cVar4 = (**(code **)(*param_1 + 0x418))();
    if (cVar4 == '\0') {
      bVar5 = 1;
    }
    else {
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = FUN_1446e9750(param_1,&local_58,local_48,0);
      if (bVar5 != 0) {
        param_1 = (longlong *)FUN_145bd2694(&local_58);
      }
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
      bVar5 = bVar5 ^ 1;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (bVar5 == 0) goto LAB_148863f7a;
  }
  param_1 = (longlong *)0x0;
LAB_148863f7a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148863fb0 FUN_148863fb0 body=32 status=ok
// SIG undefined FUN_148863fb0(void)

undefined8 FUN_148863fb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14cb7de28);
  return param_2;
}



// FUNCTION 148863fe2 FUN_148863fe2 body=634 status=ok
// SIG undefined FUN_148863fe2(void)

undefined8 FUN_148863fe2(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  undefined1 local_248 [8];
  longlong *local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  longlong local_1f8;
  undefined8 local_1e8 [6];
  undefined8 local_1b8 [14];
  undefined1 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_f8;
  undefined8 local_e8 [6];
  undefined8 local_b8 [14];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar3 = FUN_141297d58(param_1 + 0x228);
  if (lVar3 != 0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x50) + 0x10))(lVar3 + 0x50);
    if (plVar4 != (longlong *)0x0) {
      local_108 = *(undefined8 *)(param_2 + 0xc);
      local_138 = *param_2;
      uStack_134 = param_2[1];
      uStack_130 = param_2[2];
      uStack_12c = param_2[3];
      local_128 = param_2[4];
      uStack_124 = param_2[5];
      uStack_120 = param_2[6];
      uStack_11c = param_2[7];
      local_118 = param_2[8];
      uStack_114 = param_2[9];
      uStack_110 = param_2[10];
      uStack_10c = param_2[0xb];
      local_f8 = *(longlong *)(param_2 + 0x10);
      local_e8[0] = 0;
      if (local_f8 != 0) {
        puVar7 = (undefined8 *)(param_2 + 0x18);
        if (*(undefined8 **)(param_2 + 0x14) != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)(param_2 + 0x14);
        }
        (**(code **)*puVar7)(local_138,local_e8);
      }
      puVar7 = (undefined8 *)(param_2 + 0x20);
      puVar8 = local_b8;
      for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_48 = *(undefined1 *)(param_2 + 0x3c);
      uVar5 = (**(code **)(*plVar4 + 0xa0))(plVar4);
      plVar4 = (longlong *)FUN_140937900(uVar5);
      if (plVar4 == (longlong *)0x0) goto LAB_14886420a;
      if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_148864255:
        lVar9 = 0;
      }
      else {
        lVar6 = FUN_1411675e0();
        lVar3 = *(longlong *)(param_1 + 0x10);
        if (lVar3 == 0) goto LAB_148864255;
        lVar9 = 0;
        if ((lVar6 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0)) {
          if (*(int *)(lVar2 + 0x38) < *(int *)(lVar6 + 0x38)) goto LAB_148864255;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar9 = lVar3;
          }
        }
      }
      (**(code **)(*plVar4 + 0x78))(plVar4,local_248,lVar9);
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_240 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar1 = (int *)((longlong)local_240 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_240 + 0x10))(local_240);
          }
        }
      }
      goto LAB_14886420a;
    }
  }
  local_208 = *(undefined8 *)(param_2 + 0xc);
  local_238 = *param_2;
  uStack_234 = param_2[1];
  uStack_230 = param_2[2];
  uStack_22c = param_2[3];
  local_228 = param_2[4];
  uStack_224 = param_2[5];
  uStack_220 = param_2[6];
  uStack_21c = param_2[7];
  local_218 = param_2[8];
  uStack_214 = param_2[9];
  uStack_210 = param_2[10];
  uStack_20c = param_2[0xb];
  local_1f8 = *(longlong *)(param_2 + 0x10);
  local_1e8[0] = 0;
  if (local_1f8 != 0) {
    puVar7 = (undefined8 *)(param_2 + 0x18);
    if (*(undefined8 **)(param_2 + 0x14) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_2 + 0x14);
    }
    (**(code **)*puVar7)(local_238,local_1e8);
  }
  puVar7 = (undefined8 *)(param_2 + 0x20);
  puVar8 = local_1b8;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_148 = *(undefined1 *)(param_2 + 0x3c);
  uVar5 = FUN_14886c640(param_1);
LAB_14886420a:
  if (*(longlong *)(param_2 + 0x10) != 0) {
    plVar4 = (longlong *)(param_2 + 0x18);
    if (*(longlong **)(param_2 + 0x14) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_2 + 0x14);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148864292 FUN_148864292 body=145 status=ok
// SIG undefined FUN_148864292(void)

void FUN_148864292(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_14485c47a(&local_40,param_3);
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  local_38 = param_4;
  FUN_148864324(param_1 + 0x68,&local_40);
  plVar3 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148864324 FUN_148864324 body=131 status=ok
// SIG undefined FUN_148864324(void)

void FUN_148864324(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x108) << 5;
    iVar3 = 0;
    do {
      if ((*(longlong *)(lVar2 + 8) == *(longlong *)(param_2 + 8)) &&
         (cVar1 = FUN_14038330a(lVar2,param_2), cVar1 != '\0')) {
        if (iVar3 == 1) {
          return;
        }
        FUN_14886a040(param_1,-iVar3);
        FUN_14886a0c6(param_1);
        return;
      }
      lVar2 = lVar2 + 0x20;
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1488643d8 FUN_1488643d8 body=38 status=ok
// SIG undefined FUN_1488643d8(void)

undefined8 FUN_1488643d8(undefined8 param_1,int param_2)

{
  FUN_1458354b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148864404 FUN_148864404 body=38 status=ok
// SIG undefined FUN_148864404(void)

undefined8 FUN_148864404(undefined8 param_1,int param_2)

{
  FUN_1458354b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148864430 FUN_148864430 body=38 status=ok
// SIG undefined FUN_148864430(void)

undefined8 FUN_148864430(undefined8 param_1,int param_2)

{
  FUN_1486a8e3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148864458 FUN_148864458 body=68 status=ok
// SIG undefined FUN_148864458(void)

void FUN_148864458(longlong param_1,uint param_2)

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
  FUN_145d40d5e(param_1);
  return;
}



// FUNCTION 14886449c FUN_14886449c body=90 status=ok
// SIG undefined FUN_14886449c(void)

void FUN_14886449c(longlong *param_1,int param_2)

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
  FUN_1488644f6();
  return;
}



// FUNCTION 1488644f6 FUN_1488644f6 body=114 status=ok
// SIG undefined FUN_1488644f6(void)

void FUN_1488644f6(longlong *param_1,int param_2)

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



// FUNCTION 14886456a FUN_14886456a body=31 status=ok
// SIG undefined FUN_14886456a(void)

undefined8 FUN_14886456a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488645a4 FUN_1488645a4 body=93 status=ok
// SIG undefined FUN_1488645a4(void)

void FUN_1488645a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4032f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148864602 FUN_148864602 body=93 status=ok
// SIG undefined FUN_148864602(void)

void FUN_148864602(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4032f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148864660 FUN_148864660 body=126 status=ok
// SIG undefined FUN_148864660(void)

void FUN_148864660(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4032f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488646cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488646de FUN_1488646de body=40 status=ok
// SIG undefined FUN_1488646de(void)

void FUN_1488646de(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148864703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148864706 FUN_148864706 body=128 status=ok
// SIG undefined FUN_148864706(void)

void FUN_148864706(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb7d7c8;
  if (DAT_14cb7d7fc != 0) {
    *(int *)(DAT_14cb7d7c8 + (longlong)DAT_14cb7d7f8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7d7fc) {
    iVar4 = DAT_14cb7d7f8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb7d7fc = DAT_14cb7d7fc + 1;
  puVar3 = &DAT_14cb7d7d8;
  if (DAT_14cb7d7e8 != (undefined *)0x0) {
    puVar3 = DAT_14cb7d7e8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7d7f8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148864786 FUN_148864786 body=31 status=ok
// SIG undefined FUN_148864786(void)

undefined8 FUN_148864786(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488647c0 FUN_1488647c0 body=101 status=ok
// SIG undefined FUN_1488647c0(void)

void FUN_1488647c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4033a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148864826 FUN_148864826 body=134 status=ok
// SIG undefined FUN_148864826(void)

void FUN_148864826(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4033a0;
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
                    /* WARNING: Could not recover jumptable at 0x00014886489d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488648ac FUN_1488648ac body=44 status=ok
// SIG undefined FUN_1488648ac(void)

void FUN_1488648ac(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488648d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1488648d8 FUN_1488648d8 body=31 status=ok
// SIG undefined FUN_1488648d8(void)

undefined8 FUN_1488648d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148864912 FUN_148864912 body=101 status=ok
// SIG undefined FUN_148864912(void)

void FUN_148864912(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148864978 FUN_148864978 body=101 status=ok
// SIG undefined FUN_148864978(void)

void FUN_148864978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488649de FUN_1488649de body=134 status=ok
// SIG undefined FUN_1488649de(void)

void FUN_1488649de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403410;
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
                    /* WARNING: Could not recover jumptable at 0x000148864a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148864a64 FUN_148864a64 body=44 status=ok
// SIG undefined FUN_148864a64(void)

void FUN_148864a64(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148864a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148864a90 FUN_148864a90 body=31 status=ok
// SIG undefined FUN_148864a90(void)

undefined8 FUN_148864a90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148864aca FUN_148864aca body=101 status=ok
// SIG undefined FUN_148864aca(void)

void FUN_148864aca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b403480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148864b30 FUN_148864b30 body=101 status=ok
// SIG undefined FUN_148864b30(void)

void FUN_148864b30(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b403480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148864b96 FUN_148864b96 body=134 status=ok
// SIG undefined FUN_148864b96(void)

void FUN_148864b96(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403f60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403480;
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
                    /* WARNING: Could not recover jumptable at 0x000148864c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148864c1c FUN_148864c1c body=62 status=ok
// SIG undefined FUN_148864c1c(void)

void FUN_148864c1c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148864c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148864c5c FUN_148864c5c body=31 status=ok
// SIG undefined FUN_148864c5c(void)

undefined8 FUN_148864c5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148864c96 FUN_148864c96 body=26 status=ok
// SIG undefined FUN_148864c96(void)

bool FUN_148864c96(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148864cb0 FUN_148864cb0 body=101 status=ok
// SIG undefined FUN_148864cb0(void)

void FUN_148864cb0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4034f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148864d16 FUN_148864d16 body=101 status=ok
// SIG undefined FUN_148864d16(void)

void FUN_148864d16(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4034f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148864d7c FUN_148864d7c body=134 status=ok
// SIG undefined FUN_148864d7c(void)

void FUN_148864d7c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4034f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148864df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148864e02 FUN_148864e02 body=39 status=ok
// SIG undefined FUN_148864e02(void)

void FUN_148864e02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148864e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148864e2a FUN_148864e2a body=31 status=ok
// SIG undefined FUN_148864e2a(void)

undefined8 FUN_148864e2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148864e64 FUN_148864e64 body=29 status=ok
// SIG undefined FUN_148864e64(void)

bool FUN_148864e64(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148864e82 FUN_148864e82 body=26 status=ok
// SIG undefined FUN_148864e82(void)

bool FUN_148864e82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148864e9c FUN_148864e9c body=101 status=ok
// SIG undefined FUN_148864e9c(void)

void FUN_148864e9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148864f02 FUN_148864f02 body=101 status=ok
// SIG undefined FUN_148864f02(void)

void FUN_148864f02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148864f68 FUN_148864f68 body=134 status=ok
// SIG undefined FUN_148864f68(void)

void FUN_148864f68(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403560;
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
                    /* WARNING: Could not recover jumptable at 0x000148864fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148864fee FUN_148864fee body=42 status=ok
// SIG undefined FUN_148864fee(void)

void FUN_148864fee(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148865015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148865018 FUN_148865018 body=154 status=ok
// SIG undefined FUN_148865018(void)

bool FUN_148865018(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1488650ce FUN_1488650ce body=29 status=ok
// SIG undefined FUN_1488650ce(void)

bool FUN_1488650ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488650ec FUN_1488650ec body=26 status=ok
// SIG undefined FUN_1488650ec(void)

bool FUN_1488650ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148865106 FUN_148865106 body=101 status=ok
// SIG undefined FUN_148865106(void)

void FUN_148865106(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4035d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14886516c FUN_14886516c body=134 status=ok
// SIG undefined FUN_14886516c(void)

void FUN_14886516c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4035d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488651e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488651f2 FUN_1488651f2 body=162 status=ok
// SIG undefined FUN_1488651f2(void)

bool FUN_1488651f2(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148865296 FUN_148865296 body=54 status=ok
// SIG undefined FUN_148865296(void)

undefined8 * FUN_148865296(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR__purecall_14a178e80;
  FUN_1470a2844(param_1 + 1,1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488652ce FUN_1488652ce body=54 status=ok
// SIG undefined FUN_1488652ce(void)

undefined8 * FUN_1488652ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR__purecall_14a178e80;
  FUN_1470a2844(param_1 + 1,1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148865306 FUN_148865306 body=54 status=ok
// SIG undefined FUN_148865306(void)

undefined8 * FUN_148865306(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR__purecall_14a178e80;
  FUN_1470a2844(param_1 + 1,1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14886533e FUN_14886533e body=187 status=ok
// SIG undefined FUN_14886533e(void)

void FUN_14886533e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
        goto LAB_1488653e1;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1488653e1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1488653fa FUN_1488653fa body=173 status=ok
// SIG undefined FUN_1488653fa(void)

void FUN_1488653fa(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_148865491;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148865491:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1488654a8 FUN_1488654a8 body=115 status=ok
// SIG undefined FUN_1488654a8(void)

void FUN_1488654a8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14886551b FUN_14886551b body=52 status=ok
// SIG undefined FUN_14886551b(void)

void FUN_14886551b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148865550(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148865550 FUN_148865550 body=234 status=ok
// SIG undefined FUN_148865550(void)

undefined8 * FUN_148865550(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14886563a FUN_14886563a body=31 status=ok
// SIG undefined FUN_14886563a(void)

undefined8 FUN_14886563a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148865674 FUN_148865674 body=29 status=ok
// SIG undefined FUN_148865674(void)

bool FUN_148865674(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148865692 FUN_148865692 body=26 status=ok
// SIG undefined FUN_148865692(void)

bool FUN_148865692(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488656ac FUN_1488656ac body=24 status=ok
// SIG undefined FUN_1488656ac(void)

bool FUN_1488656ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488656c4 FUN_1488656c4 body=101 status=ok
// SIG undefined FUN_1488656c4(void)

void FUN_1488656c4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b403750;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14886572a FUN_14886572a body=101 status=ok
// SIG undefined FUN_14886572a(void)

void FUN_14886572a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b403750;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148865790 FUN_148865790 body=134 status=ok
// SIG undefined FUN_148865790(void)

void FUN_148865790(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403750;
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
                    /* WARNING: Could not recover jumptable at 0x000148865807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148865816 FUN_148865816 body=39 status=ok
// SIG undefined FUN_148865816(void)

void FUN_148865816(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148865839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14886583e FUN_14886583e body=146 status=ok
// SIG undefined FUN_14886583e(void)

bool FUN_14886583e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488658d2 FUN_1488658d2 body=29 status=ok
// SIG undefined FUN_1488658d2(void)

undefined8 FUN_1488658d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14886590a FUN_14886590a body=29 status=ok
// SIG undefined FUN_14886590a(void)

bool FUN_14886590a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148865928 FUN_148865928 body=26 status=ok
// SIG undefined FUN_148865928(void)

bool FUN_148865928(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148865942 FUN_148865942 body=24 status=ok
// SIG undefined FUN_148865942(void)

bool FUN_148865942(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14886595a FUN_14886595a body=93 status=ok
// SIG undefined FUN_14886595a(void)

void FUN_14886595a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4037c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488659b8 FUN_1488659b8 body=93 status=ok
// SIG undefined FUN_1488659b8(void)

void FUN_1488659b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4037c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148865a16 FUN_148865a16 body=126 status=ok
// SIG undefined FUN_148865a16(void)

void FUN_148865a16(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4037c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148865a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148865a94 FUN_148865a94 body=35 status=ok
// SIG undefined FUN_148865a94(void)

void FUN_148865a94(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148865ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148865ab8 FUN_148865ab8 body=142 status=ok
// SIG undefined FUN_148865ab8(void)

bool FUN_148865ab8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148865b48 FUN_148865b48 body=303 status=ok
// SIG undefined FUN_148865b48(void)

void FUN_148865b48(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 148865c78 FUN_148865c78 body=230 status=ok
// SIG undefined FUN_148865c78(void)

undefined8 * FUN_148865c78(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148865d60 FUN_148865d60 body=29 status=ok
// SIG undefined FUN_148865d60(void)

undefined8 FUN_148865d60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148865d98 FUN_148865d98 body=29 status=ok
// SIG undefined FUN_148865d98(void)

bool FUN_148865d98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148865db6 FUN_148865db6 body=26 status=ok
// SIG undefined FUN_148865db6(void)

bool FUN_148865db6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148865dd0 FUN_148865dd0 body=24 status=ok
// SIG undefined FUN_148865dd0(void)

bool FUN_148865dd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148865df4 FUN_148865df4 body=93 status=ok
// SIG undefined FUN_148865df4(void)

void FUN_148865df4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4038a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148865e52 FUN_148865e52 body=93 status=ok
// SIG undefined FUN_148865e52(void)

void FUN_148865e52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4038a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148865eb0 FUN_148865eb0 body=126 status=ok
// SIG undefined FUN_148865eb0(void)

void FUN_148865eb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4038a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403830;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148865f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148865f2e FUN_148865f2e body=40 status=ok
// SIG undefined FUN_148865f2e(void)

void FUN_148865f2e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148865f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148865f56 FUN_148865f56 body=152 status=ok
// SIG undefined FUN_148865f56(void)

bool FUN_148865f56(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148865ff2 FUN_148865ff2 body=132 status=ok
// SIG undefined FUN_148865ff2(void)

void FUN_148865ff2(longlong param_1,int param_2)

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



// FUNCTION 148866078 FUN_148866078 body=48 status=ok
// SIG undefined FUN_148866078(void)

void FUN_148866078(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488660a8 FUN_1488660a8 body=164 status=ok
// SIG undefined FUN_1488660a8(void)

void FUN_1488660a8(longlong *param_1,undefined8 param_2)

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
        goto LAB_148866128;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148866128:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14886614c FUN_14886614c body=191 status=ok
// SIG undefined FUN_14886614c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14886614c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb77c68 = _DAT_14cb77c68 + 1;
  UNLOCK();
  param_1[1] = DAT_14cb77c60;
  param_1[2] = &DAT_14cb77c60;
  LOCK();
  _DAT_14cb77c68 = _DAT_14cb77c68 + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[3];
    lVar2 = FUN_14187c43e(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[1];
    param_1[1] = lVar2;
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb77c60;
  LOCK();
  _DAT_14cb77c68 = _DAT_14cb77c68 + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[6];
    lVar2 = FUN_14187c43e(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[4];
    param_1[4] = lVar2;
  }
  LOCK();
  _DAT_14cb77c68 = _DAT_14cb77c68 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 14886620c FUN_14886620c body=132 status=ok
// SIG undefined FUN_14886620c(void)

void FUN_14886620c(longlong param_1,int param_2)

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



// FUNCTION 148866292 FUN_148866292 body=132 status=ok
// SIG undefined FUN_148866292(void)

void FUN_148866292(longlong param_1,int param_2)

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



// FUNCTION 148866318 FUN_148866318 body=53 status=ok
// SIG undefined FUN_148866318(void)

ulonglong FUN_148866318(int *param_1,int *param_2)

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



// FUNCTION 14886634e FUN_14886634e body=62 status=ok
// SIG undefined FUN_14886634e(void)

void FUN_14886634e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14886638c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14886638c FUN_14886638c body=93 status=ok
// SIG undefined FUN_14886638c(void)

ulonglong FUN_14886638c(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1488663ea FUN_1488663ea body=1 status=ok
// SIG undefined FUN_1488663ea(void)

void FUN_1488663ea(void)

{
  return;
}



// FUNCTION 1488663ec FUN_1488663ec body=161 status=ok
// SIG undefined FUN_1488663ec(void)

undefined8 FUN_1488663ec(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x18;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e02];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x18,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (0 < (int)(uVar3 / 0x18)) {
    uVar4 = uVar3 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar2;
}



// FUNCTION 14886648e FUN_14886648e body=147 status=ok
// SIG undefined FUN_14886648e(void)

void FUN_14886648e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148866522 FUN_148866522 body=100 status=ok
// SIG undefined FUN_148866522(void)

longlong FUN_148866522(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_1458f293e(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148866586 FUN_148866586 body=100 status=ok
// SIG undefined FUN_148866586(void)

longlong FUN_148866586(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_145894e7a(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1488665ea FUN_1488665ea body=100 status=ok
// SIG undefined FUN_1488665ea(void)

longlong FUN_1488665ea(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_140c13176(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14886664e FUN_14886664e body=100 status=ok
// SIG undefined FUN_14886664e(void)

longlong FUN_14886664e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_1413e9348(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1488666b2 FUN_1488666b2 body=100 status=ok
// SIG undefined FUN_1488666b2(void)

longlong FUN_1488666b2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_144a75eb4(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148866716 FUN_148866716 body=100 status=ok
// SIG undefined FUN_148866716(void)

longlong FUN_148866716(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_1400d1928(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14886677a FUN_14886677a body=100 status=ok
// SIG undefined FUN_14886677a(void)

longlong FUN_14886677a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_140c1325c(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1488667de FUN_1488667de body=100 status=ok
// SIG undefined FUN_1488667de(void)

longlong FUN_1488667de(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_144a7cbb2(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148866842 FUN_148866842 body=100 status=ok
// SIG undefined FUN_148866842(void)

longlong FUN_148866842(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_140554cf2(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1488668a6 FUN_1488668a6 body=100 status=ok
// SIG undefined FUN_1488668a6(void)

longlong FUN_1488668a6(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_140c13342(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14886690a FUN_14886690a body=132 status=ok
// SIG undefined FUN_14886690a(void)

void FUN_14886690a(longlong param_1,int param_2)

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



// FUNCTION 148866990 FUN_148866990 body=99 status=ok
// SIG undefined FUN_148866990(void)

undefined8 * FUN_148866990(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[1] = 0;
  *param_1 = &PTR_LAB_14b162fa0;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
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
  }
  return param_1;
}



// FUNCTION 1488669f4 FUN_1488669f4 body=38 status=ok
// SIG undefined FUN_1488669f4(void)

undefined8 FUN_1488669f4(undefined8 param_1,int param_2)

{
  FUN_1486a8de8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148866a1a FUN_148866a1a body=117 status=ok
// SIG undefined FUN_148866a1a(void)

longlong FUN_148866a1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  puVar3 = (undefined8 *)FUN_14885e900();
  if ((longlong)*(int *)(puVar3 + 1) != 0) {
    plVar5 = (longlong *)*puVar3;
    lVar4 = (longlong)*(int *)(puVar3 + 1) << 3;
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        iVar1 = *(int *)(*param_2 + 0x38);
        if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
             == *param_2 + 0x30)) && (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 8) == param_2[1]))
        {
          if (plVar5 == (longlong *)0x0) {
            return 0;
          }
          return lVar2;
        }
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 148866a90 FUN_148866a90 body=304 status=ok
// SIG undefined FUN_148866a90(void)

undefined8 FUN_148866a90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  int local_6c;
  undefined1 local_68;
  undefined8 local_60;
  undefined **local_58 [4];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_14885e900();
  local_90 = *param_2;
  FUN_1406022be(&local_88,param_2 + 1);
  local_88 = &PTR_FUN_14b16b1f0;
  local_68 = *(undefined1 *)(param_2 + 5);
  local_60 = local_90;
  FUN_1406022be(local_58,&local_88);
  local_58[0] = &PTR_FUN_14b16b1f0;
  local_38 = local_68;
  puVar2 = (undefined8 *)FUN_148866bc2(uVar1,&local_60);
  local_88 = (undefined **)&DAT_14a171d50;
  local_70 = 0;
  if (local_6c != 0) {
    FUN_140115c12(&local_78,0);
  }
  local_80 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  param_2[1] = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)((longlong)param_2 + 0x24) != 0) {
    FUN_140115c12(param_2 + 3,0);
  }
  param_2[2] = 0;
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148866bc2 FUN_148866bc2 body=123 status=ok
// SIG undefined FUN_148866bc2(void)

longlong FUN_148866bc2(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar2 = (longlong)(int)param_1[1] << 3;
    do {
      cVar1 = FUN_14885e7c4(param_2,lVar3);
      if (cVar1 != '\0') goto LAB_148866bf7;
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB_148866bf7:
  *(undefined2 **)(param_2 + 8) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_140115c12(param_2 + 0x18,0);
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return lVar3;
}



// FUNCTION 148866c3e FUN_148866c3e body=335 status=ok
// SIG undefined FUN_148866c3e(void)

void FUN_148866c3e(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_3;
  FUN_1406022be(&local_68,param_3 + 1);
  local_68 = &PTR_FUN_14b16b1f0;
  local_48 = *(undefined1 *)(param_3 + 5);
  puVar4 = (undefined8 *)FUN_14885e900(param_1);
  if ((longlong)*(int *)(puVar4 + 1) != 0) {
    puVar5 = (undefined8 *)*puVar4;
    lVar6 = (longlong)*(int *)(puVar4 + 1) << 3;
    do {
      cVar3 = FUN_14885e7c4(&local_70,puVar5);
      if (cVar3 != '\0') {
        uVar2 = *puVar5;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_148866d8e(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  local_68 = (undefined **)&DAT_14a171d50;
  local_50 = 0;
  if (local_4c != 0) {
    FUN_140115c12(&local_58,0);
  }
  local_60 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  param_3[1] = &DAT_14a171d50;
  *(undefined4 *)(param_3 + 4) = 0;
  if (*(int *)((longlong)param_3 + 0x24) != 0) {
    FUN_140115c12(param_3 + 3,0);
  }
  param_3[2] = 0;
  if (param_3[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148866d8e FUN_148866d8e body=132 status=ok
// SIG undefined FUN_148866d8e(void)

void FUN_148866d8e(longlong param_1,int param_2)

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



// FUNCTION 148866e14 FUN_148866e14 body=194 status=ok
// SIG undefined FUN_148866e14(void)

longlong * FUN_148866e14(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) << 3;
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      local_40 = 0;
      FUN_14485c47a(&local_40,lVar1);
      lVar1 = FUN_14479d2ce(&local_40);
      if (lVar1 != 0) {
        if ((*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30)) goto LAB_148866eaf;
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  plVar2 = (longlong *)0x0;
LAB_148866eaf:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 148866ed8 FUN_148866ed8 body=29 status=ok
// SIG undefined FUN_148866ed8(void)

undefined8 FUN_148866ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148866f10 FUN_148866f10 body=29 status=ok
// SIG undefined FUN_148866f10(void)

bool FUN_148866f10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148866f2e FUN_148866f2e body=26 status=ok
// SIG undefined FUN_148866f2e(void)

bool FUN_148866f2e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148866f48 FUN_148866f48 body=24 status=ok
// SIG undefined FUN_148866f48(void)

bool FUN_148866f48(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148866f60 FUN_148866f60 body=93 status=ok
// SIG undefined FUN_148866f60(void)

void FUN_148866f60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403ee0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148866fbe FUN_148866fbe body=93 status=ok
// SIG undefined FUN_148866fbe(void)

void FUN_148866fbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403ee0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14886701c FUN_14886701c body=126 status=ok
// SIG undefined FUN_14886701c(void)

void FUN_14886701c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403ee0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403950;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014886708b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14886709a FUN_14886709a body=100 status=ok
// SIG undefined FUN_14886709a(void)

void FUN_14886709a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *(undefined4 *)(param_2 + 1);
  local_30 = *param_2;
  (**(code **)(param_1 + 0x20))(uVar1,&local_30,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148867100 FUN_148867100 body=180 status=ok
// SIG undefined FUN_148867100(void)

bool FUN_148867100(longlong param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = (undefined4)param_2[1];
    local_40 = *param_2;
    (**(code **)(param_1 + 0x20))(lVar2,&local_40,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488671b8 FUN_1488671b8 body=230 status=ok
// SIG undefined FUN_1488671b8(void)

undefined8 * FUN_1488671b8(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1488672a0 FUN_1488672a0 body=29 status=ok
// SIG undefined FUN_1488672a0(void)

undefined8 FUN_1488672a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488672d8 FUN_1488672d8 body=29 status=ok
// SIG undefined FUN_1488672d8(void)

bool FUN_1488672d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488672f6 FUN_1488672f6 body=26 status=ok
// SIG undefined FUN_1488672f6(void)

bool FUN_1488672f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148867310 FUN_148867310 body=24 status=ok
// SIG undefined FUN_148867310(void)

bool FUN_148867310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148867334 FUN_148867334 body=93 status=ok
// SIG undefined FUN_148867334(void)

void FUN_148867334(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4039c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148867392 FUN_148867392 body=93 status=ok
// SIG undefined FUN_148867392(void)

void FUN_148867392(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4039c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488673f0 FUN_1488673f0 body=126 status=ok
// SIG undefined FUN_1488673f0(void)

void FUN_1488673f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403fd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4039c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014886745f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14886746e FUN_14886746e body=99 status=ok
// SIG undefined FUN_14886746e(void)

void FUN_14886746e(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *(undefined4 *)(param_3 + 1);
  local_30 = *param_3;
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488674d2 FUN_1488674d2 body=179 status=ok
// SIG undefined FUN_1488674d2(void)

bool FUN_1488674d2(longlong param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = (undefined4)param_3[1];
    local_40 = *param_3;
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148867588 FUN_148867588 body=29 status=ok
// SIG undefined FUN_148867588(void)

undefined8 FUN_148867588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488675c0 FUN_1488675c0 body=29 status=ok
// SIG undefined FUN_1488675c0(void)

bool FUN_1488675c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488675de FUN_1488675de body=26 status=ok
// SIG undefined FUN_1488675de(void)

bool FUN_1488675de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488675f8 FUN_1488675f8 body=24 status=ok
// SIG undefined FUN_1488675f8(void)

bool FUN_1488675f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148867610 FUN_148867610 body=93 status=ok
// SIG undefined FUN_148867610(void)

void FUN_148867610(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14886766e FUN_14886766e body=93 status=ok
// SIG undefined FUN_14886766e(void)

void FUN_14886766e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcc20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488676cc FUN_1488676cc body=126 status=ok
// SIG undefined FUN_1488676cc(void)

void FUN_1488676cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcc20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403a30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014886773b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14886774a FUN_14886774a body=48 status=ok
// SIG undefined FUN_14886774a(void)

void FUN_14886774a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148867777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14886777a FUN_14886777a body=163 status=ok
// SIG undefined FUN_14886777a(void)

bool FUN_14886777a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886781e FUN_14886781e body=29 status=ok
// SIG undefined FUN_14886781e(void)

undefined8 FUN_14886781e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148867856 FUN_148867856 body=29 status=ok
// SIG undefined FUN_148867856(void)

bool FUN_148867856(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148867874 FUN_148867874 body=26 status=ok
// SIG undefined FUN_148867874(void)

bool FUN_148867874(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14886788e FUN_14886788e body=24 status=ok
// SIG undefined FUN_14886788e(void)

bool FUN_14886788e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488678a6 FUN_1488678a6 body=93 status=ok
// SIG undefined FUN_1488678a6(void)

void FUN_1488678a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148867904 FUN_148867904 body=93 status=ok
// SIG undefined FUN_148867904(void)

void FUN_148867904(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148867962 FUN_148867962 body=126 status=ok
// SIG undefined FUN_148867962(void)

void FUN_148867962(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403aa0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488679d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488679e0 FUN_1488679e0 body=48 status=ok
// SIG undefined FUN_1488679e0(void)

void FUN_1488679e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148867a0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148867a10 FUN_148867a10 body=163 status=ok
// SIG undefined FUN_148867a10(void)

bool FUN_148867a10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148867ab4 FUN_148867ab4 body=29 status=ok
// SIG undefined FUN_148867ab4(void)

undefined8 FUN_148867ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148867aec FUN_148867aec body=29 status=ok
// SIG undefined FUN_148867aec(void)

bool FUN_148867aec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148867b0a FUN_148867b0a body=26 status=ok
// SIG undefined FUN_148867b0a(void)

bool FUN_148867b0a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148867b24 FUN_148867b24 body=24 status=ok
// SIG undefined FUN_148867b24(void)

bool FUN_148867b24(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148867b3c FUN_148867b3c body=93 status=ok
// SIG undefined FUN_148867b3c(void)

void FUN_148867b3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148867b9a FUN_148867b9a body=93 status=ok
// SIG undefined FUN_148867b9a(void)

void FUN_148867b9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


